// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Animations/AnimNotifyStates/ACMActivateCollisionNotifyState.h"
#include "CollisionSystem/Components/ACMCollisionHandlerComponent.h"
#include <Components/SkeletalMeshComponent.h>
#include <Animation/AnimSequenceBase.h>
#include <GameFramework/Actor.h>

void UACMActivateCollisionNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (!MeshComp)
	{
		ACF_LOG(Warning, TEXT("UACMActivateCollisionNotifyState::NotifyBegin: MeshComp is invalid"))
		return;
	}

	AActor* OwnerActor = MeshComp->GetOwner();
	if (!OwnerActor)
	{
		ACF_LOG(Warning, TEXT("UACMActivateCollisionNotifyState::NotifyBegin: OwnerActor is Invalid"))
		return;
	}

	UACMCollisionHandlerComponent* CollisionHandlerComponent = OwnerActor->FindComponentByClass<UACMCollisionHandlerComponent>();
	if (CollisionHandlerComponent)
	{
		for (FName& TraceNameToStart : TraceNamesToStart)
		{
			CollisionHandlerComponent->Server_StartSingleTrace(TraceNameToStart);
		}
	}
}

void UACMActivateCollisionNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (!MeshComp)
	{
		ACF_LOG(Warning, TEXT("UACMActivateCollisionNotifyState::NotifyEnd: MeshComp is invalid"))
		return;
	}

	AActor* OwnerActor = MeshComp->GetOwner();
	if (!OwnerActor)
	{
		ACF_LOG(Warning, TEXT("UACMActivateCollisionNotifyState::NotifyEnd: OwnerActor is Invalid"))
		return;
	}

	UACMCollisionHandlerComponent* CollisionHandlerComponent = OwnerActor->FindComponentByClass<UACMCollisionHandlerComponent>();
	if (CollisionHandlerComponent)
	{
		for (FName& TraceNameToStart : TraceNamesToStart)
		{
			CollisionHandlerComponent->Server_StopSingleTrace(TraceNameToStart);
		}
	}
}
