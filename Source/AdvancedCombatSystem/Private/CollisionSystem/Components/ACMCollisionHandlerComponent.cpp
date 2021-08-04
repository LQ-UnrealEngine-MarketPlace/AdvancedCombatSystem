// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionSystem/Components/ACMCollisionHandlerComponent.h"

// Sets default values for this component's properties
UACMCollisionHandlerComponent::UACMCollisionHandlerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	SetComponentTickEnabled(false);
}

void UACMCollisionHandlerComponent::SetupCollisionManager(UMeshComponent* InDamageMesh)
{

}

void UACMCollisionHandlerComponent::AddActorToIgnore(AActor* IgnoredActor)
{

}

void UACMCollisionHandlerComponent::AddCollisionChannel(TEnumAsByte<ECollisionChannel> InTraceChannel)
{

}

void UACMCollisionHandlerComponent::SetupCollisionChannels(TArray<TEnumAsByte<ECollisionChannel>> InTraceChannels)
{

}

void UACMCollisionHandlerComponent::ClearCollisionChannels()
{

}

void UACMCollisionHandlerComponent::Server_StartAllTraces_Implementation()
{

}

bool UACMCollisionHandlerComponent::Server_StartAllTraces_Validate()
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StopAllTraces_Implementation()
{

}

bool UACMCollisionHandlerComponent::Server_StopAllTraces_Validate()
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StartSingleTrace_Implementation(const FName& Name)
{

}

bool UACMCollisionHandlerComponent::Server_StartSingleTrace_Validate(const FName& Name)
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StopSingleTrace_Implementation(const FName& Name)
{

}

bool UACMCollisionHandlerComponent::Server_StopSingleTrace_Validate(const FName& Name)
{
	return true;
}

void UACMCollisionHandlerComponent::Server_TimedSingleTrace_Implementation(const FName& TraceName, float Duration)
{

}

bool UACMCollisionHandlerComponent::Server_TimedSingleTrace_Validate(const FName& TraceName, float Duration)
{
	return true;
}

void UACMCollisionHandlerComponent::Server_StartAllTimedTraces_Implementation(float Duration)
{

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

}

void UACMCollisionHandlerComponent::NetMulticast_PlayTrails_Implementation(const FName& Trail)
{

}

bool UACMCollisionHandlerComponent::NetMulticast_PlayTrails_Validate(const FName& Trail)
{
	return true;
}

void UACMCollisionHandlerComponent::NetMulticast_StopTrails_Implementation(const FName& Trail)
{

}

bool UACMCollisionHandlerComponent::NetMulticast_StopTrails_Validate(const FName& Trail)
{
	return true;
}

void UACMCollisionHandlerComponent::ApplyDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace)
{

}

void UACMCollisionHandlerComponent::ApplyPointDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace)
{

}

void UACMCollisionHandlerComponent::ApplyAreaDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace)
{

}

void UACMCollisionHandlerComponent::SetStarted(bool InStarted)
{

}

void UACMCollisionHandlerComponent::BeginPlay()
{
	Super::BeginPlay();
	SetComponentTickEnabled(false);
	SetStarted(false);
}
