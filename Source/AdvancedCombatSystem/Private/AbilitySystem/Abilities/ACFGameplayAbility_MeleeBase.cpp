// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h"
#include "AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h"
#include "AbilitySystem/Components/ACFAbilityComboManagerComponent.h"
#include "Core/Libraries/ACFFunctionLibrary.h"

UACFGameplayAbility_MeleeBase::UACFGameplayAbility_MeleeBase()
{

}

void UACFGameplayAbility_MeleeBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	AActor* AvatarActor = GetAvatarActorFromActorInfo();
	if (!AvatarActor)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
	
	AbilityComboManagerComponent = UACFFunctionLibrary::GetComboManagerComponentFromActor(AvatarActor);
	if (!AbilityComboManagerComponent)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	AbilityComboManagerComponent->IncrementCombo();

	UAnimMontage* Montage = GetNextComboMontage();

	UACFAbilityTask_PlayMontageAndWaitForEvent* Task = UACFAbilityTask_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(this, NAME_None, Montage, WaitForEventTag, Rate, NAME_None, true, 1.0f);
	Task->OnBlendOut.AddDynamic(this, &UACFGameplayAbility_MeleeBase::OnMontageCompleted);
	Task->OnCompleted.AddDynamic(this, &UACFGameplayAbility_MeleeBase::OnMontageCompleted);
	Task->OnInterrupted.AddDynamic(this, &UACFGameplayAbility_MeleeBase::OnMontageCancelled);
	Task->OnCancelled.AddDynamic(this, &UACFGameplayAbility_MeleeBase::OnMontageCancelled);
	Task->EventReceived.AddDynamic(this, &UACFGameplayAbility_MeleeBase::OnEventReceived);
	Task->ReadyForActivation();
}

void UACFGameplayAbility_MeleeBase::OnMontageCancelled(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}

void UACFGameplayAbility_MeleeBase::OnMontageCompleted(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UACFGameplayAbility_MeleeBase::OnEventReceived(FGameplayTag EventTag, FGameplayEventData EventData)
{
	ApplyEffectContainer(EventTag, EventData);
}

UAnimMontage* UACFGameplayAbility_MeleeBase::GetNextComboMontage()
{
	if (!AbilityComboManagerComponent)
	{
		return nullptr;
	}

	int32 ComboIndex = AbilityComboManagerComponent->ComboIndex;

	if (ComboIndex >= Montages.Num())
	{
		ComboIndex = 0;
	}

	return Montages.IsValidIndex(ComboIndex) ? Montages[ComboIndex] : nullptr;
}
