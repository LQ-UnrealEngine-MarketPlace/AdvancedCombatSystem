// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionSystem/Components/ACMCollisionHandlerComponent.h"
#include <Particles/ParticleSystemComponent.h>
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetSystemLibrary.h>
#include <Engine/EngineTypes.h>
#include <Engine/World.h>
#include <CollisionQueryParams.h>
#include <Sound/SoundBase.h>
#include <Sound/SoundCue.h>
#include <GameFramework/GameModeBase.h>
#include <CollisionSystem/Components/ACMCollisionManagerComponent.h>

// Sets default values for this component's properties
UACMCollisionHandlerComponent::UACMCollisionHandlerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	SetComponentTickEnabled(false);
}

void UACMCollisionHandlerComponent::BeginPlay()
{
	Super::BeginPlay();
	SetStarted(false);
}

void UACMCollisionHandlerComponent::SetupCollisionManager(UMeshComponent* InDamageMesh)
{
	DamageMesh = InDamageMesh;

	if (!DamageMesh)
	{
		ACF_LOG(Warning, TEXT("UACMCollisionHandlerComponent::SetupCollisionManager: Invalid Damage Mesh"))
		return;
	}

	for (const TPair<FName, FTraceInfo>& DamageTrace : DamageTraces)
	{
		// Particle FX
		UParticleSystemComponent* ParticleSystemComponent = NewObject<UParticleSystemComponent>(this, UParticleSystemComponent::StaticClass());
		ParticleSystemComponent->SetupAttachment(DamageMesh);
		ParticleSystemComponent->SetRelativeLocation(FVector::ZeroVector);
		ParticleSystemComponents.Add(DamageTrace.Key, ParticleSystemComponent);
		ParticleSystemComponent->RegisterComponent();
	}
}

void UACMCollisionHandlerComponent::AddActorToIgnore(AActor* IgnoredActor)
{
	IgnoredActors.AddUnique(IgnoredActor);
}

void UACMCollisionHandlerComponent::AddCollisionChannel(TEnumAsByte<ECollisionChannel> InTraceChannel)
{
	CollisionChannels.AddUnique(InTraceChannel);
}

void UACMCollisionHandlerComponent::SetupCollisionChannels(TArray<TEnumAsByte<ECollisionChannel>> InTraceChannels)
{
	ClearCollisionChannels();
	for (TEnumAsByte<ECollisionChannel> TraceChannel : InTraceChannels)
	{
		AddCollisionChannel(TraceChannel);
	}
}

void UACMCollisionHandlerComponent::ClearCollisionChannels()
{
	CollisionChannels.Empty();
}

void UACMCollisionHandlerComponent::Server_StartAllTraces_Implementation()
{
	ActivatedTraces.Empty();
	PendingDelete.Empty();

	for (const TPair<FName, FTraceInfo>& DamageTrace : DamageTraces)
	{
		Server_StartSingleTrace(DamageTrace.Key);
	}
}

bool UACMCollisionHandlerComponent::Server_StartAllTraces_Validate()
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StopAllTraces_Implementation()
{
	PendingDelete.Empty();
	for (const TPair<FName, FTraceInfo>& ActivatedTrace : ActivatedTraces)
	{
		Server_StopSingleTrace(ActivatedTrace.Key);
	}
}

bool UACMCollisionHandlerComponent::Server_StopAllTraces_Validate()
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StartSingleTrace_Implementation(const FName& Name)
{
	FTraceInfo* TraceInfo = DamageTraces.Find(Name);
	if (TraceInfo)
	{
		if (PendingDelete.Contains(Name))
		{
			PendingDelete.Remove(Name);
		}

		ActivatedTraces.Add(Name, *TraceInfo);
		NetMulticast_PlayTrails(Name);
		SetStarted(true);
	}
	else
	{
		ACF_LOG(Warning, TEXT("UACMCollisionHandlerComponent::Server_StartSingleTrace: Invalid Trace Name"))
	}
}

bool UACMCollisionHandlerComponent::Server_StartSingleTrace_Validate(const FName& Name)
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StopSingleTrace_Implementation(const FName& Name)
{
	if (ActivatedTraces.Contains(Name))
	{
		NetMulticast_StopTrails(Name);
		PendingDelete.AddUnique(Name);

		FHitActors* ActorsAlreadyHit = AlreadyHitActors.Find(Name);
		if (ActorsAlreadyHit)
		{
			ActorsAlreadyHit->AlreadyHitActors.Empty();
		}
	}
}

bool UACMCollisionHandlerComponent::Server_StopSingleTrace_Validate(const FName& Name)
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StartTimedSingleTrace_Implementation(const FName& TraceName, float Duration)
{
	UWorld* World = GetWorld();
	if (World)
	{
		Server_StartSingleTrace(TraceName);
		FTimerHandle TimerHandle;
		FTimerDelegate TimerDelegate;

		TFunction<void(void)> LambdaDelegate = [this, TraceName]() { HandleTimedSingleTraceFinished(TraceName); };
		TimerDelegate.BindLambda(LambdaDelegate);
		TraceTimers.Add(TraceName, TimerHandle);
		World->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, Duration, false);
	}
}

bool UACMCollisionHandlerComponent::Server_StartTimedSingleTrace_Validate(const FName& TraceName, float Duration)
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StartAllTimedTraces_Implementation(float Duration)
{
	UWorld* World = GetWorld();
	if (World && !bAllTimedTraceStarted)
	{
		Server_StartAllTraces();
		World->GetTimerManager().SetTimer(AllTraceTimer, this, &UACMCollisionHandlerComponent::HandleAllTimedTraceFinished, Duration, false);
		bAllTimedTraceStarted = true;
	}
}

bool UACMCollisionHandlerComponent::Server_StartAllTimedTraces_Validate(float Duration)
{
	return true;
}

FRotator UACMCollisionHandlerComponent::GetLineRotation(FVector StartLine, FVector EndLine)
{
	FVector Diff = EndLine - StartLine;
	return Diff.Rotation();
}

void UACMCollisionHandlerComponent::UpdateCollisions()
{
	if (DamageMesh)
	{
		DisplayDebugTraces();

		if (PendingDelete.IsValidIndex(0))
		{
			AlreadyHitActors.Empty();
			for (FName ToDelete : PendingDelete)
			{
				if (ActivatedTraces.Contains(ToDelete))
				{
					ActivatedTraces.Remove(ToDelete);
				}
			}
		}

		if (ActivatedTraces.Num() == 0)
		{
			SetStarted(true);
			return;
		}

		if (CollisionChannels.IsValidIndex(0))
		{
			for (const TPair<FName, FTraceInfo>& CurrentTrace : ActivatedTraces)
			{
				if (DamageMesh->DoesSocketExist(CurrentTrace.Value.StartSocket) && DamageMesh->DoesSocketExist(CurrentTrace.Value.EndSocket))
				{
					FHitResult HitResult;

					FVector StartPos = DamageMesh->GetSocketLocation(CurrentTrace.Value.StartSocket);
					FVector EndPos = DamageMesh->GetSocketLocation(CurrentTrace.Value.EndSocket);
					FRotator Orientation = GetLineRotation(StartPos, EndPos);
					FCollisionQueryParams Params;

					if (IgnoredActors.Num() > 0)
					{
						Params.AddIgnoredActors(IgnoredActors);
					}

					if (bIgnoreOwned)
					{
						Params.AddIgnoredActor(GetActorOwner());
					}

					if (!bAllowMultipleHitsPerSwing)
					{
						FHitActors* HitActors = AlreadyHitActors.Find(CurrentTrace.Key);
						if (HitActors && HitActors->AlreadyHitActors.Num() > 0)
						{
							Params.AddIgnoredActors(HitActors->AlreadyHitActors);
						}
					}

					Params.bReturnPhysicalMaterial = true;
					Params.bTraceComplex = true;

					FCollisionObjectQueryParams ObjectParams;
					for (ECollisionChannel CollisionChannel : CollisionChannels)
					{
						ObjectParams.AddObjectTypesToQuery(CollisionChannel);
					}

					if (!ObjectParams.IsValid())
					{
						ACF_LOG(Warning, TEXT("UACMCollisionHandlerComponent::UpdateCollisions: Invalid Collsiion Channel"))
						return;
					}

					UWorld* World = GetWorld();
					if (World)
					{
						bool bHit = World->SweepSingleByObjectType(HitResult, StartPos, EndPos, Orientation.Quaternion(), ObjectParams, FCollisionShape::MakeSphere(CurrentTrace.Value.Radius), Params);
						if (bHit)
						{
							OnCollisionDetected.Broadcast(CurrentTrace.Key, HitResult);
							if (!bAllowMultipleHitsPerSwing)
							{
								FHitActors* HitActors = AlreadyHitActors.Find(CurrentTrace.Key);
								if (HitActors)
								{
									HitActors->AlreadyHitActors.Add(HitResult.GetActor());
								}
								else
								{
									FHitActors NewHitActors;
									NewHitActors.AlreadyHitActors.Add(HitResult.GetActor());
									AlreadyHitActors.Add(CurrentTrace.Key, NewHitActors);
								}
							}
							
							if (bAutoApplyDamage)
							{
								ApplyDamage(HitResult, CurrentTrace.Value);
							}
						}
					}
				}
				else
				{
					ACF_LOG(Warning, TEXT("UACMCollisionHandlerComponent: Invalid Socket Names!"))
				}
			}
		}
		else
		{
			SetStarted(false);
		}
	}
}

void UACMCollisionHandlerComponent::NetMulticast_PlayTrails_Implementation(const FName& Trail)
{
	if (!DamageTraces.Contains(Trail) || !DamageMesh)
	{
		return;
	}

	FTraceInfo TraceInfo = *DamageTraces.Find(Trail);
	if ((TraceInfo.AttackParticle || TraceInfo.AttackNiagara) &&
		ParticleSystemComponents.Contains(Trail) &&
		DamageMesh->DoesSocketExist(TraceInfo.StartSocket) &&
		DamageMesh->DoesSocketExist(TraceInfo.EndSocket))
	{

		UParticleSystemComponent* ParticleSystemComponent = *ParticleSystemComponents.Find(Trail);
		ParticleSystemComponent->SetTemplate(TraceInfo.AttackParticle);
		ParticleSystemComponent->BeginTrails(TraceInfo.StartSocket, TraceInfo.EndSocket, ETrailWidthMode::ETrailWidthMode_FromCentre, TraceInfo.TrailLength);
	}

	if (TraceInfo.AttackSound)
	{
		UGameplayStatics::SpawnSoundAttached(TraceInfo.AttackSound, DamageMesh, TraceInfo.StartSocket);
	}
}

bool UACMCollisionHandlerComponent::NetMulticast_PlayTrails_Validate(const FName& Trail)
{
	return true;
}

void UACMCollisionHandlerComponent::NetMulticast_StopTrails_Implementation(const FName& Trail)
{
	if (ParticleSystemComponents.Contains(Trail))
	{
		UParticleSystemComponent* ParticleSystemComponent = *ParticleSystemComponents.Find(Trail);
		ParticleSystemComponent->EndTrails();
	}
}

bool UACMCollisionHandlerComponent::NetMulticast_StopTrails_Validate(const FName& Trail)
{
	return true;
}

void UACMCollisionHandlerComponent::ApplyDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace)
{
	switch (CurrentTrace.DamageType)
	{
		case EDamageType::Area:
			ApplyPointDamage(HitResult, CurrentTrace);
			break;

		case EDamageType::Point:
		default:	
			ApplyPointDamage(HitResult, CurrentTrace);
			break;
	}
}

void UACMCollisionHandlerComponent::ApplyPointDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace)
{
	if (HitResult.GetActor()->IsValidLowLevel())
	{
		FVector DamageRelativePos = GetOwner()->GetActorLocation() - HitResult.GetActor()->GetActorLocation();
	}
}

void UACMCollisionHandlerComponent::ApplyAreaDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace)
{
	// TODO: Find a way to integrate this with AbilitySystem
}

void UACMCollisionHandlerComponent::DisplayDebugTraces()
{
	TMap<FName, FTraceInfo> SphereTraces;

	FLinearColor DebugColor;
	switch (ShowDebugInfo)
	{
		case EDebugType::AlwaysShowDebug:
			SphereTraces = DamageTraces;
			DebugColor = (bIsStarted) ? DebugActiveColor : DebugInactiveColor;
			break;

		case EDebugType::ShowInfoDuringSwing:
			if (bIsStarted)
			{
				return;
			}

			SphereTraces = ActivatedTraces;
			DebugColor = DebugActiveColor;
			break;

		case EDebugType::DontShowDebugInfos:
			return;
		default:
			return;
	}

	UWorld* World = GetWorld();
	for (const TPair<FName, FTraceInfo>& SphereTrace : SphereTraces)
	{
		if (DamageMesh->DoesSocketExist(SphereTrace.Value.StartSocket) && DamageMesh->DoesSocketExist(SphereTrace.Value.EndSocket))
		{
			FHitResult HitResult;

			FVector StartPos = DamageMesh->GetSocketLocation(SphereTrace.Value.StartSocket);
			FVector EndPos = DamageMesh->GetSocketLocation(SphereTrace.Value.EndSocket);

			if (World)
			{
				UKismetSystemLibrary::SphereTraceSingle
				(
					this, 
					StartPos, 
					EndPos, 
					SphereTrace.Value.Radius, 
					ETraceTypeQuery::TraceTypeQuery1, 
					false, 
					IgnoredActors, 
					EDrawDebugTrace::ForOneFrame, 
					HitResult, 
					true, 
					DebugColor
				);
			}
		}
	}
}

void UACMCollisionHandlerComponent::HandleTimedSingleTraceFinished(const FName& TraceEnded)
{
	Server_StopSingleTrace(TraceEnded);
	if (GetOwner())
	{
		UWorld* World = GetWorld();
		if (World && TraceTimers.Contains(TraceEnded))
		{
			FTimerHandle* TimerHandle = TraceTimers.Find(TraceEnded);
			World->GetTimerManager().ClearTimer(*TimerHandle);
		}
	}
}

void UACMCollisionHandlerComponent::HandleAllTimedTraceFinished()
{
	Server_StopAllTraces();
	if (GetOwner())
	{
		UWorld* World = GetWorld();
		if (World && bAllTimedTraceStarted)
		{
			World->GetTimerManager().ClearTimer(AllTraceTimer);
			bAllTimedTraceStarted = false;
		}
	}
}

void UACMCollisionHandlerComponent::SetStarted(bool InStarted)
{
	bIsStarted = InStarted;
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);
	if (GameMode)
	{
		UACMCollisionManagerComponent* CollisionManagerComponent = GameMode->FindComponentByClass<UACMCollisionManagerComponent>();
		if (CollisionManagerComponent)
		{
			(ShowDebugInfo == EDebugType::AlwaysShowDebug || bIsStarted) ? CollisionManagerComponent->AddComponent(this) : CollisionManagerComponent->RemoveComponent(this);
		}
		else
		{
			ACF_LOG(Error, TEXT("UACMCollisionHandlerComponent::SetStarted: Adding %s to GameMode"), *GetName())
		}
	}
}
