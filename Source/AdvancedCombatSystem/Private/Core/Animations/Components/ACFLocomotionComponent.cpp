// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Animations/Components/ACFLocomotionComponent.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Core/Components/ACFCoreComponent.h"
#include "Core/Animations/AnimInstances/ACFAnimInstance.h"
#include "AbilitySystem/Components/ACFAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/ACFGameplayAbility.h"
#include <DrawDebugHelpers.h>
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetMathLibrary.h>
#include <Engine/World.h>
#include <Abilities/GameplayAbility.h>

// Sets default values for this component's properties
UACFLocomotionComponent::UACFLocomotionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

#if WITH_EDITOR
	bDebug = false;
	DebugLineParams.bLinePersists = false;
	DebugLineParams.LookAtLineColor = FLinearColor(FColor::Blue);
	DebugLineParams.AimLineColor = FLinearColor(FColor::Red);
	DebugLineParams.LineThickness = 1.f;
	DebugLineParams.LineLifeTime = 0.f;
#endif

	RotationMethod = ERotationMethod::RotateToVelocity;
	AimOffsetType = EAimOffsets::Look;
	AimOffsetBehavior = EAimOffsetClamp::Left;
	CameraBased = true;

	SetIsReplicatedByDefault(true);
}

// Called when the game starts
void UACFLocomotionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	RecastOwner();
	SetupBasePose(BasePose);
	SetOverlayPose(OverlayPose);
	SetupFPP(bFirstPerson);
	SetupRotation(RotationMethod, RotationSpeed, TurnStartAngle, TurnStopTolerance);
	SetupAimOffset(AimOffsetType, AimOffsetBehavior, AimClamp, CameraBased, AimSocketName, LookAtSocketName);
	Server_SetLocomotionState(DefaultLocomotionState);

	LocomotionStates.Sort();
}

// Called every frame
void UACFLocomotionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (!IsValid(CharacterOwner))
	{
		return;
	}

	AimTick();
	TurnInPlaceTick();
}

void UACFLocomotionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(UACFLocomotionComponent, BasePose);
	DOREPLIFETIME(UACFLocomotionComponent, OverlayPose);
	DOREPLIFETIME(UACFLocomotionComponent, RotationMethod);
	DOREPLIFETIME(UACFLocomotionComponent, RotationSpeed);
	DOREPLIFETIME(UACFLocomotionComponent, TurnStartAngle);
	DOREPLIFETIME(UACFLocomotionComponent, TurnStopTolerance);
	DOREPLIFETIME(UACFLocomotionComponent, AimOffsetType);
	DOREPLIFETIME(UACFLocomotionComponent, AimOffsetBehavior);
	DOREPLIFETIME(UACFLocomotionComponent, AnimModTags);
}

void UACFLocomotionComponent::RecastOwner()
{
	if (!GetOwner())
	{
		ACF_LOG(Warning, TEXT("UACFLocomotionComponent::RecastOwner: %s does not have a valid Owner"), *GetName())
		return;
	}
	CharacterOwner = Cast<AACFCharacterBase>(GetOwner());

	if (!CharacterOwner)
	{
		ACF_LOG(Warning, TEXT("UACFLocomotionComponent::RecastOwner: %s failed to cast Owner to CharacterOwner"), *GetName())
		return;
	}
	OwnerCharacterMovementComponent = CharacterOwner->GetCharacterMovement();
}

void UACFLocomotionComponent::HandleRotationSpeedChange()
{
	if (!OwnerCharacterMovementComponent)
	{
		ACF_LOG(Log, TEXT("UACFLocomotionComponent::HandleRotationSpeedChange: %s has invalid OwnerCharacterMovementComponent | %s fires RecastOwner"), *GetName(), *GetName())
		RecastOwner();
	}
	OwnerCharacterMovementComponent->RotationRate.Yaw = RotationSpeed;
}

void UACFLocomotionComponent::HandleRotationMethodChange()
{
	if (!OwnerCharacterMovementComponent)
	{
		ACF_LOG(Log, TEXT("UACFLocomotionComponent::HandleRotationSpeedChange: %s has invalid OwnerCharacterMovementComponent | %s fires RecastOwner"), *GetName(), *GetName())
		RecastOwner();
	}

	switch (RotationMethod)
	{
		case ERotationMethod::None:
			CharacterOwner->bUseControllerRotationYaw = false;
			OwnerCharacterMovementComponent->bOrientRotationToMovement = false;
			OwnerCharacterMovementComponent->bUseControllerDesiredRotation = false;
			break;

		case ERotationMethod::RotateToVelocity:
			CharacterOwner->bUseControllerRotationYaw = false;
			OwnerCharacterMovementComponent->bOrientRotationToMovement = true;
			OwnerCharacterMovementComponent->bUseControllerDesiredRotation = false;
			break;

		case ERotationMethod::DesiredAtAngle:
			CharacterOwner->bUseControllerRotationYaw = false;
			OwnerCharacterMovementComponent->bOrientRotationToMovement = false;
			OwnerCharacterMovementComponent->bUseControllerDesiredRotation = false;
			break;

		case ERotationMethod::DesiredRotation:
			CharacterOwner->bUseControllerRotationYaw = false;
			OwnerCharacterMovementComponent->bOrientRotationToMovement = false;
			OwnerCharacterMovementComponent->bUseControllerDesiredRotation = true;
			break;

		case ERotationMethod::AbsoluteRotation:
			CharacterOwner->bUseControllerRotationYaw = true;
			OwnerCharacterMovementComponent->bOrientRotationToMovement = false;
			OwnerCharacterMovementComponent->bUseControllerDesiredRotation = false;
			break;

		default:
			break;
	}
}

void UACFLocomotionComponent::LookAtIfPlayerControlled()
{
	APlayerCameraManager* PlayerCamera = UGameplayStatics::GetPlayerCameraManager(this, 0);
	FHitResult HitResult;

	const float OffsetStart = 10000.f;

	FVector StartLoc = PlayerCamera->GetCameraLocation();
	FVector EndLoc = StartLoc + (PlayerCamera->GetCameraRotation().Vector() * OffsetStart);

	FCollisionQueryParams CollisionQueryParams;

	TArray<AActor*> IgnoredActors;
	CharacterOwner->GetAttachedActors(IgnoredActors, true);
	CollisionQueryParams.AddIgnoredActors(IgnoredActors);
	CollisionQueryParams.AddIgnoredActor(CharacterOwner);
	CollisionQueryParams.bTraceComplex = true;

#if WITH_EDITOR
	CollisionQueryParams.bDebugQuery = bDebug;
#endif
	UWorld* World = GetWorld();
	if (World)
	{
		const bool bHit = World->LineTraceSingleByChannel(HitResult, StartLoc, EndLoc, TraceChannel, CollisionQueryParams);
		FName Socket;
		(AimOffsetType == EAimOffsets::Aim) ? Socket = AimSocketName : LookAtSocketName;

		if (bHit)
		{
			// Initialize LookAtLocation
			LookAtLocation = HitResult.ImpactPoint;
			Server_SetLookAtLocation(LookAtLocation);

			// Initialize AimOffset
			AimOffset = UKismetMathLibrary::FindLookAtRotation(CharacterOwner->GetMesh()->GetSocketLocation(Socket), HitResult.ImpactPoint);
			Server_SetAimOffet(AimOffset);

#if WITH_EDITOR
			if (bDebug)
			{
				// DrawDebugLine for while not Aiming
				StartLoc = CharacterOwner->GetMesh()->GetSocketLocation(LookAtSocketName);
				EndLoc = HitResult.TraceEnd;
				DrawDebugLine
				(
					World, 
					StartLoc, 
					EndLoc, 
					DebugLineParams.LookAtLineColor.ToFColor(true),
					DebugLineParams.bLinePersists,
					DebugLineParams.LineLifeTime,
					0,
					DebugLineParams.LineThickness
				);

				// DrawDebugLine for while Aiming
				StartLoc = CharacterOwner->GetMesh()->GetSocketLocation(AimSocketName);
				DrawDebugLine
				(
					World,
					StartLoc,
					EndLoc,
					DebugLineParams.LookAtLineColor.ToFColor(true), 
					DebugLineParams.bLinePersists,
					DebugLineParams.LineLifeTime,
					0,
					DebugLineParams.LineThickness
				);
			}
#endif
		}
	}
}

void UACFLocomotionComponent::LookAtWithoutCamera()
{
	FHitResult HitResult;
	const float OffsetStart = 10000.f;

	FCollisionQueryParams CollisionQueryParams;

	TArray<AActor*> IgnoredActors;
	CharacterOwner->GetAttachedActors(IgnoredActors, true);
	CollisionQueryParams.AddIgnoredActors(IgnoredActors);
	CollisionQueryParams.AddIgnoredActor(CharacterOwner);

	FName Socket = LookAtSocketName;
	FVector StartLoc = CharacterOwner->GetMesh()->GetSocketLocation(Socket);
	FVector EndLoc = (UKismetMathLibrary::GetForwardVector(CharacterOwner->GetController()->GetControlRotation() * OffsetStart) + StartLoc);
	CollisionQueryParams.bTraceComplex = true;

#if WITH_EDITOR
	CollisionQueryParams.bDebugQuery = bDebug;
#endif

	UWorld* World = GetWorld();
	if (World)
	{
		const bool bHit = World->LineTraceSingleByChannel(HitResult, StartLoc, EndLoc, TraceChannel, CollisionQueryParams);
		if (bHit)
		{
			LookAtLocation = HitResult.ImpactPoint;
			Server_SetLookAtLocation(LookAtLocation);

#if WITH_EDITOR
			if (bDebug)
			{
				StartLoc = CharacterOwner->GetMesh()->GetSocketLocation(LookAtSocketName);
				EndLoc = HitResult.ImpactPoint;
				DrawDebugLine
				(
					World,
					StartLoc,
					EndLoc,
					DebugLineParams.LookAtLineColor.ToFColor(true),
					DebugLineParams.bLinePersists,
					DebugLineParams.LineLifeTime,
					0,
					DebugLineParams.LineThickness
				);

				StartLoc = CharacterOwner->GetMesh()->GetSocketLocation(AimSocketName);
				DrawDebugLine
				(
					World,
					StartLoc,
					EndLoc,
					DebugLineParams.LookAtLineColor.ToFColor(true),
					DebugLineParams.bLinePersists,
					DebugLineParams.LineLifeTime,
					0,
					DebugLineParams.LineThickness
				);
			}
#endif
		}
		else
		{
			LookAtLocation =  HitResult.TraceEnd;
			Server_SetLookAtLocation(LookAtLocation);

#if WITH_EDITOR
			StartLoc = CharacterOwner->GetMesh()->GetSocketLocation(LookAtSocketName);
			EndLoc = HitResult.TraceEnd;
			DrawDebugLine
			(
				World,
				StartLoc,
				EndLoc,
				DebugLineParams.LookAtLineColor.ToFColor(true),
				DebugLineParams.bLinePersists,
				DebugLineParams.LineLifeTime,
				0,
				DebugLineParams.LineThickness
			);

			StartLoc = CharacterOwner->GetMesh()->GetSocketLocation(AimSocketName);
			DrawDebugLine
			(
				World,
				StartLoc,
				EndLoc,
				DebugLineParams.LookAtLineColor.ToFColor(true),
				DebugLineParams.bLinePersists,
				DebugLineParams.LineLifeTime,
				0,
				DebugLineParams.LineThickness
			);
#endif
		}
	}
}

void UACFLocomotionComponent::UpdateCharacterMaxSpeed()
{
	float MaxSpeed = 0.f;
	for (FACFLocomotionState LocomotionState : LocomotionStates)
	{
		if (LocomotionState.MaxStateSpeed >= MaxSpeed)
		{
			MaxSpeed = LocomotionState.MaxStateSpeed;
		}
	}

	OwnerCharacterMovementComponent->MaxWalkSpeed = MaxSpeed;
}

void UACFLocomotionComponent::UpdateLocomotionState()
{
	if (!CharacterOwner)
	{
		ACF_LOG(Warning, TEXT("UACFLocomotionComponent::UpdateLocomotionState: CharacterOwner is invalid"))
		return;
	}

	if (CharacterOwner && OwnerCharacterMovementComponent && !OwnerCharacterMovementComponent->IsFalling() /*&& reproductionType == EMontageReproductionType::ERootMotion*/)
	{
		if (OwnerCharacterMovementComponent->GetGroundMovementMode() == MOVE_Walking)
		{
			for (int32 Index = 0; Index < LocomotionStates.Num() - 1; Index++)
			{
				const float Speed = CharacterOwner->GetVelocity().Size();
				if (FMath::IsNearlyZero(Speed) && CurrentLocomotionState != ELocomotionState::Idle)
				{
					HandleStateChanged(ELocomotionState::Idle);
				}
				else if (LocomotionStates[Index + 1].LocomotionState != CurrentLocomotionState && Speed > LocomotionStates[Index].MaxStateSpeed + 5.f && Speed <= LocomotionStates[Index + 1].MaxStateSpeed + 5.f)
				{
					HandleStateChanged(LocomotionStates[Index + 1].LocomotionState);
				}
			}

			if (CurrentLocomotionState == ELocomotionState::Sprint)
			{
				UACFAnimInstance* AnimInstance = CharacterOwner->GetAnimInstance();
				if (AnimInstance)
				{
					/*const float Direction = AnimInstance->GetDirection();
					if (FMath::Abs(Direction) > SprintDirectionCone)
					{
						Server_SetLocomotionState(ELocomotionState::Jog);
					}*/
				}
			}
		}
		else
		{
			Server_SetLocomotionState(ELocomotionState::Idle);
		}
	}
}

void UACFLocomotionComponent::HandleStateChanged(const ELocomotionState NewLocomotionState)
{
	if (CurrentLocomotionState == NewLocomotionState)
	{
		ACF_LOG(Warning, TEXT("UACFLocomotionComponent::HandleStateChanged: passed in NewLocomotionState is equal to CurrentLocomotionState"))
		return;
	}

	FACFLocomotionState* PreviousStatePtr = LocomotionStates.FindByKey(CurrentLocomotionState);
	FACFLocomotionState* NextStatePtr = LocomotionStates.FindByKey(NewLocomotionState);

	if (PreviousStatePtr && NextStatePtr && CharacterOwner)
	{
		if (CharacterOwner->HasAuthority())
		{
			UACFCoreComponent* CoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(CharacterOwner);
			CurrentLocomotionAbility->K2_CancelAbility();
			CoreComponent->ActivateAbilityWithClass(NextStatePtr->LocomotionAbility, CurrentLocomotionAbility);
		}
	}
}

void UACFLocomotionComponent::OnRep_RotationMethod()
{
	HandleRotationMethodChange();
}

void UACFLocomotionComponent::OnRep_RotationSpeed()
{
	HandleRotationSpeedChange();
}

void UACFLocomotionComponent::OnRep_LocomotionState()
{
	if (!OwnerCharacterMovementComponent)
	{
		ACF_LOG(Warning, TEXT("UACFLocomotionComponent::OnRep_LocomotionState: OwnerCharacterMovementComponent is invalid so fire RecastOwner()"))
		RecastOwner();
	}

	//OwnerCharacterMovementComponent->MaxWalkSpeed = GetCharactermax
}

void UACFLocomotionComponent::Server_SetBasePose_Implementation(FGameplayTag InBasePose)
{
	BasePose = InBasePose;
}

bool UACFLocomotionComponent::Server_SetBasePose_Validate(FGameplayTag InBasePose)
{
	return true;
}

void UACFLocomotionComponent::Server_SetOverlayPose_Implementation(FGameplayTag InOverlayPose)
{
	OverlayPose = InOverlayPose;
}

bool UACFLocomotionComponent::Server_SetOverlayPose_Validate(FGameplayTag InOverlayPose)
{
	return true;
}

void UACFLocomotionComponent::Server_SetRotation_Implementation(ERotationMethod InRotationMethod, float InRotationSpeed /*= 0.f*/, float InTurnStartAngle /*= 0.f*/, float InTurnStopToTolerance /*= 0.f*/)
{
	RotationMethod = InRotationMethod;
	HandleRotationMethodChange();
	RotationSpeed = InRotationSpeed;
	HandleRotationMethodChange();
	TurnStartAngle = InTurnStartAngle;
	TurnStopTolerance = InTurnStopToTolerance;
}


bool UACFLocomotionComponent::Server_SetRotation_Validate(ERotationMethod InRotationMethod, float InRotationSpeed /*= 0.f*/, float InTurnStartAngle /*= 0.f*/, float InTurnStopToTolerance /*= 0.f*/)
{
	return true;
}

void UACFLocomotionComponent::Server_SetupAimOffset_Implementation(EAimOffsets InAimOffsetType, EAimOffsetClamp InAimBehavior)
{
	AimOffsetType = InAimOffsetType;
	AimOffsetBehavior = InAimBehavior;
}

bool UACFLocomotionComponent::Server_SetupAimOffset_Validate(EAimOffsets InAimOffsetType, EAimOffsetClamp InAimBehavior)
{
	return true;
}

void UACFLocomotionComponent::Server_SetAimOffet_Implementation(FRotator InAimOffset)
{
	NetMulticast_SetAimOffsets(InAimOffset);
}

bool UACFLocomotionComponent::Server_SetAimOffet_Validate(FRotator InAimOffset)
{
	return true;
}

void UACFLocomotionComponent::NetMulticast_SetAimOffsets_Implementation(FRotator InAimOffset)
{
	if (CharacterOwner && !CharacterOwner->IsLocallyControlled())
	{
		AimOffset = InAimOffset;
	}
}

bool UACFLocomotionComponent::NetMulticast_SetAimOffsets_Validate(FRotator InAimOffset)
{
	return true;
}

void UACFLocomotionComponent::Server_SetLookAtLocation_Implementation(FVector InLocation)
{
	NetMulticast_SetLookAtLocation(InLocation);
}

bool UACFLocomotionComponent::Server_SetLookAtLocation_Validate(FVector InLocation)
{
	return true;
}

void UACFLocomotionComponent::NetMulticast_SetLookAtLocation_Implementation(FVector InLocation)
{
	if (CharacterOwner && !CharacterOwner->IsLocallyControlled())
	{
		LookAtLocation = InLocation;
	}
}

bool UACFLocomotionComponent::NetMulticast_SetLookAtLocation_Validate(FVector InLocation)
{
	return true;
}

void UACFLocomotionComponent::NetMulticast_ShouldStrafe_Implementation(bool bInShouldStrafe)
{
	if (CharacterOwner)
	{
		bIsStrafing = bInShouldStrafe;
		OwnerCharacterMovementComponent->bOrientRotationToMovement = !bIsStrafing;
		OwnerCharacterMovementComponent->bUseControllerDesiredRotation = bIsStrafing;
	}
}

bool UACFLocomotionComponent::NetMulticast_ShouldStrafe_Validate(bool bInShouldStrafe)
{
	return true;
}

void UACFLocomotionComponent::Server_SetStrafeMovement_Implementation(const bool bInShouldStrafe)
{
	if (!CharacterOwner)
	{
		ACF_LOG(Error, TEXT("UACFLocomotionComponent::Server_SetStrafeMovement: %s has invalid CharacterOwner,"), *GetName())
		RecastOwner();
		Server_SetStrafeMovement(bInShouldStrafe); // Re-Calls after RecastOwner()
		return;
	}

	bIsStrafing = bShouldStrafe;
	OwnerCharacterMovementComponent->bOrientRotationToMovement = !bIsStrafing; // Character moves based on input's direction
	OwnerCharacterMovementComponent->bUseControllerDesiredRotation = bIsStrafing;
	NetMulticast_ShouldStrafe(bInShouldStrafe);
}

bool UACFLocomotionComponent::Server_SetStrafeMovement_Validate(const bool bInShouldStrafe)
{
	return true;
}

void UACFLocomotionComponent::Server_AccelerateToNextState_Implementation()
{
	LocomotionStates.Sort();

	int32 CurrentIndex = LocomotionStates.IndexOfByKey(CurrentLocomotionState);
	if (LocomotionStates.IsValidIndex(CurrentIndex + 1))
	{
		Server_SetLocomotionState(LocomotionStates[CurrentIndex + 1].LocomotionState);
	}
}

bool UACFLocomotionComponent::Server_AccelerateToNextState_Validate()
{
	return true;
}

void UACFLocomotionComponent::Server_BrakeToPreviousState_Implementation()
{
	LocomotionStates.Sort();
	
	int32 CurrentIndex = LocomotionStates.IndexOfByKey(CurrentLocomotionState);
	if (LocomotionStates.IsValidIndex(CurrentIndex + 1))
	{
		Server_SetLocomotionState(LocomotionStates[CurrentIndex + 1].LocomotionState);
	}
}

bool UACFLocomotionComponent::Server_BrakeToPreviousState_Validate()
{
	return true;
}

void UACFLocomotionComponent::Server_SetLocomotionState_Implementation(const ELocomotionState InLocomotionState)
{
	FACFLocomotionState* LocomotionStatePtr = LocomotionStates.FindByKey(InLocomotionState);
	if (LocomotionStatePtr && LocomotionStatePtr->LocomotionAbility)
	{
		TargetLocomotionState.MaxStateSpeed = GetCharacterMaxSpeedByState(InLocomotionState);
		TargetLocomotionState.LocomotionAbility = GetLocomotionAbilityByState(InLocomotionState);
		UACFCoreComponent* CoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(CharacterOwner); 
		CoreComponent->ActivateAbilityWithClass(TargetLocomotionState.LocomotionAbility, CurrentLocomotionAbility);
		OnTargetLocomotionStateChanged.Broadcast(InLocomotionState);
	}
}

bool UACFLocomotionComponent::Server_SetLocomotionState_Validate(ELocomotionState InLocomotionState)
{
	return true;
}

void UACFLocomotionComponent::SetupBasePose(FGameplayTag InBasePose)
{
	BasePose = InBasePose;
	Server_SetBasePose(InBasePose);
}

void UACFLocomotionComponent::SetOverlayPose(FGameplayTag InOverlayPose)
{
	OverlayPose = InOverlayPose;
	Server_SetOverlayPose(InOverlayPose);
}

void UACFLocomotionComponent::SetupFPP(bool bInFirstPerson)
{
	bFirstPerson = bInFirstPerson;
	OnFirstPerson.Broadcast(bInFirstPerson);
}

void UACFLocomotionComponent::SetupRotation(const ERotationMethod InRotationMethod /*= ERotationMethod::NONE*/, const float InRotationSpeed /*= 360.f*/, const float InTurnStartAngle /*= 90.f*/, const float InTurnStopTolerance /*= 5.f*/)
{
	RotationMethod = InRotationMethod;
	HandleRotationMethodChange();
	RotationSpeed = InRotationSpeed;
	HandleRotationSpeedChange();
	TurnStartAngle = InTurnStartAngle;
	TurnStopTolerance = InTurnStopTolerance;

	Server_SetRotation(InRotationMethod, InRotationSpeed, InTurnStartAngle, InTurnStopTolerance);
}

void UACFLocomotionComponent::SetupAimOffset(const EAimOffsets InAimOffsetType /*= EAimOffsets::None*/, const EAimOffsetClamp InAimBehavior /*= EAimOffsetClamp::Nearest*/, const float InAimClamp /*= 90.f*/, const bool InCameraBased /*= true*/, const FName InAimSocketName /*= "hand_r"*/, const FName InLookAtSocketName /*= "head"*/)
{
	AimOffsetType = InAimOffsetType;
	AimOffsetBehavior = InAimBehavior;
	AimClamp = InAimClamp;
	CameraBased = InCameraBased;
	AimSocketName = InAimSocketName;
	LookAtSocketName = InLookAtSocketName;

	Server_SetupAimOffset(InAimOffsetType, InAimBehavior);
}

void UACFLocomotionComponent::AddTag(FGameplayTag InGameplayTag)
{
	AnimModTags.AddTag(InGameplayTag);
}

bool UACFLocomotionComponent::RemoveTag(FGameplayTag InGameplayTag)
{
	return AnimModTags.RemoveTag(InGameplayTag);
}

void UACFLocomotionComponent::AimTick()
{
	if (CharacterOwner && CharacterOwner->IsLocallyControlled())
	{
		if (CharacterOwner->IsPlayerControlled() && CameraBased)
		{
			LookAtIfPlayerControlled();
		}
		else
		{
			AimOffset = CharacterOwner->GetControlRotation();
			Server_SetAimOffet(AimOffset);
			LookAtWithoutCamera();
		}
	}
}

void UACFLocomotionComponent::TurnInPlaceTick()
{
	if (RotationMethod == ERotationMethod::DesiredAtAngle)
	{
		float Delta = UKismetMathLibrary::NormalizedDeltaRotator(AimOffset, GetOwner()->GetActorRotation()).Yaw;
		float AbsoluteDelta = UKismetMathLibrary::Abs(Delta);

		float Speed = GetOwner()->GetVelocity().Size();
		if (AbsoluteDelta > TurnStartAngle || Speed > 25.0f)
		{
			OwnerCharacterMovementComponent->bUseControllerDesiredRotation = true;
		}
		else
		{
			float ClampValue = FMath::Clamp(TurnStopTolerance, 1.0f, 90.0f);
			float Min = ClampValue / -1.0f;
			float Max = ClampValue / 1.0f;

			bool bInRange = UKismetMathLibrary::InRange_FloatFloat(Delta, Min, Max, true, true);

			if (bInRange)
			{
				OwnerCharacterMovementComponent->bUseControllerDesiredRotation = false;
			}
		}
	}
}

TSubclassOf<UACFGameplayAbility> UACFLocomotionComponent::GetLocomotionAbilityByState(const ELocomotionState InLocomotionState)
{
	FACFLocomotionState* LocomotionStatePtr = LocomotionStates.FindByKey(InLocomotionState);
	if (LocomotionStatePtr)
	{
		return LocomotionStatePtr->LocomotionAbility;
	}

	return nullptr;
}
