// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Animations/AnimNotifyStates/ACFAbilityQueueNotifyState.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Core/Widgets/Debugs/ACFUWDebugAbilityQueue.h"
#include "AbilitySystem/Components/ACFAbilityQueueComponent.h"
#include "Utils/ACFLog.h"
#include <Components/SkeletalMeshComponent.h>
void UACFAbilityQueueNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	ACF_VLOG(this, Log, TEXT("UACFAbilityQueueNotifyState::NotifyBegin()"))
	AActor* Owner = MeshComp->GetOwner();
	if (!Owner)
	{
		return;
	}

	UACFAbilityQueueComponent* AbilityQueueComponent = UACFFunctionLibrary::GetAbilityQueueComponentFromActor(Owner);
	if (!AbilityQueueComponent)
	{
		return;
	}

	if (!AbilityQueueComponent->bAbilityQueueEnabled)
	{
		return;
	}


	ACF_VLOG(this, Log, TEXT("UACFAbilityQueueNotifyState::NotifyBegin() Open Ability Queue for %d allowed abilities"), AllowedAbilities.Num())
	AbilityQueueComponent->OpenAbilityQueue();
	AbilityQueueComponent->SetAllowAllAbilitiesForAbilityQueue(bAllowAllAbilities);
	AbilityQueueComponent->UpdateAllowedAbilitiesForAbilityQueue(AllowedAbilities);

	/*UACFUWDebugAbilityQueue* DebugWidget = AbilityQueueComponent->GetDebugWidgetFromHUD();
	if (DebugWidget)
	{
		DebugWidget->AddAbilityQueueFromMontageRow(Animation);
	}*/
}

void UACFAbilityQueueNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	ACF_VLOG(this, Log, TEXT("UACFAbilityQueueNotifyState::NotifyEnd()"))

	AActor* Owner = MeshComp->GetOwner();
	if (!Owner)
	{
		return;
	}

	UACFAbilityQueueComponent* AbilityQueueComponent = UACFFunctionLibrary::GetAbilityQueueComponentFromActor(Owner);
	if (!AbilityQueueComponent)
	{
		return;
	}

	if (!AbilityQueueComponent->bAbilityQueueEnabled)
	{
		return;
	}

	AbilityQueueComponent->CloseAbilityQueue();
}

FString UACFAbilityQueueNotifyState::GetNotifyName_Implementation() const
{
	return "Ability Queue Window";
}
