// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Components/ACFAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/ACFGameplayAbility.h"
#include <AbilitySystemGlobals.h>
#include "Core/Libraries/ACFFunctionLibrary.h"

void UACFAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	AbilityActivatedCallbacks.AddUObject(this, &UACFAbilitySystemComponent::OnAbilityActivatedCallback);
	AbilityFailedCallbacks.AddUObject(this, &UACFAbilitySystemComponent::OnAbilityFailedCallback);
	AbilityEndedCallbacks.AddUObject(this, &UACFAbilitySystemComponent::OnAbilityEndedCallback);
}

UACFAbilitySystemComponent* UACFAbilitySystemComponent::GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent)
{
	return Cast<UACFAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor, LookForComponent));
}

void UACFAbilitySystemComponent::GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer, TArray<UACFGameplayAbility*>& ActiveAbilities)
{
	TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
	GetActivatableGameplayAbilitySpecsByAllMatchingTags(GameplayTagContainer, AbilitiesToActivate, false);

	// Iterate the list of all ability specs
	for (FGameplayAbilitySpec* Spec : AbilitiesToActivate)
	{
		// Iterate all instances on this ability spec
		TArray<UGameplayAbility*> AbilityInstances = Spec->GetAbilityInstances();

		for (UGameplayAbility* ActiveAbility : AbilityInstances)
		{
			ActiveAbilities.Add(Cast<UACFGameplayAbility>(ActiveAbility));
		}
	}
}

TArray<UACFGameplayAbility*> UACFAbilitySystemComponent::K2_GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer)
{
	TArray<UACFGameplayAbility*> ActiveAbilities;
	GetActiveAbilitiesWithTags(GameplayTagContainer, ActiveAbilities);

	return ActiveAbilities;
}

void UACFAbilitySystemComponent::GetActiveAbilitiesWithClass(TSubclassOf<UGameplayAbility> AbilityToSearch, TArray<UACFGameplayAbility*>& ActiveAbilities)
{
	TArray<FGameplayAbilitySpec> Specs = GetActivatableAbilities();
	TArray<FGameplayAbilitySpec*> MatchingGameplayAbilities;

	// First, search for matching Abilities for this class
	for (const FGameplayAbilitySpec& Spec : Specs)
	{
		if (Spec.Ability && Spec.Ability->GetClass()->IsChildOf(AbilityToSearch))
		{
			MatchingGameplayAbilities.Add(const_cast<FGameplayAbilitySpec*>(&Spec));
		}
	}

	// Iterate the list of all ability specs
	for (FGameplayAbilitySpec* Spec : MatchingGameplayAbilities)
	{
		// Iterate all instances on this ability spec, which can include instance per execution abilities
		TArray<UGameplayAbility*> AbilityInstances = Spec->GetAbilityInstances();

		for (UGameplayAbility* ActiveAbility : AbilityInstances)
		{
			if (ActiveAbility->IsActive())
			{
				ActiveAbilities.Add(Cast<UACFGameplayAbility>(ActiveAbility));
			}
		}
	}
}

TArray<UACFGameplayAbility*> UACFAbilitySystemComponent::K2_GetActiveAbilitiesWithClass(TSubclassOf<UACFGameplayAbility> AbilityToSearch)
{
	TArray<UACFGameplayAbility*> ActiveAbilities;
	GetActiveAbilitiesWithClass(AbilityToSearch, ActiveAbilities);

	return ActiveAbilities;
}

bool UACFAbilitySystemComponent::ActivateAbilityWithTags(const FGameplayTagContainer AbilityTags, UACFGameplayAbility*& ActivatedAbility, const bool bAllowRemoteActivation /*= true*/)
{
	ACF_LOG(Warning, TEXT("UACFAbilitySystemComponent::ActivateAbilityByTags() Try Activate Ability with Tags %s"), *AbilityTags.ToStringSimple())
	TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
	GetActivatableGameplayAbilitySpecsByAllMatchingTags(AbilityTags, AbilitiesToActivate);

	const uint32 Count = AbilitiesToActivate.Num();
	if (Count)
	{
		ACF_LOG(Warning, TEXT("UACFAbilitySystemComponent::ActivateAbilityByTags() provided AbilityTags has no matching tags for %s"), *AbilityTags.ToStringSimple())
		return false;
	}

	FGameplayAbilitySpec* Spec = AbilitiesToActivate[FMath::RandRange(0, Count - 1)];

	const bool bSuccess = TryActivateAbility(Spec->Handle, bAllowRemoteActivation);
	TArray<UACFGameplayAbility*> ActiveAbilities;
	GetActiveAbilitiesWithTags(AbilityTags, ActiveAbilities);

	if (ActiveAbilities.Num() == 0)
	{
		ACF_VLOG(this, Log, TEXT("UACFAbilitySystemComponent::ActivateAbilitityByTags() | GetActiveAbilitiesWithClass() could not get any active abilities %s"), *AbilityTags.ToStringSimple())
	}

	if (bSuccess && ActiveAbilities.Num() > 0)
	{
		ActivatedAbility = ActiveAbilities[0];
	}

	return bSuccess;
}

bool UACFAbilitySystemComponent::ActivateAbilityWithClass(TSubclassOf<UGameplayAbility> AbilityToActivate, UACFGameplayAbility*& ActivatedAbility, bool bAllowRemoteActivation /*= true*/)
{
	ACF_LOG(Warning, TEXT("UACFAbilitySystemComponent::ActivateAbilityWithClass() Try Activate Ability with Class %s"), *AbilityToActivate->GetName())
	const bool bSuccess = TryActivateAbilityByClass(AbilityToActivate);

	TArray<UACFGameplayAbility*> ActiveAbilities;
	GetActiveAbilitiesWithClass(AbilityToActivate, ActiveAbilities);

	if (ActiveAbilities.Num() == 0)
	{
		ACF_VLOG(this, Log, TEXT("UACFAbilitySystemComponent::ActivateAbilityWithClass() | GetActiveAbilitiesWithClass() could not get any active abilities %s"), *AbilityToActivate->GetName())
	}

	if (bSuccess && ActiveAbilities.Num() > 0)
	{
		ActivatedAbility = ActiveAbilities[0];
	}

	return bSuccess;
}

void UACFAbilitySystemComponent::K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context)
{
	ExecuteGameplayCue(GameplayCueTag, Context);
}

void UACFAbilitySystemComponent::K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters)
{
	ExecuteGameplayCue(GameplayCueTag, GameplayCueParameters);
}

void UACFAbilitySystemComponent::K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context)
{
	AddGameplayCue(GameplayCueTag, Context);
}

void UACFAbilitySystemComponent::K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter)
{
	AddGameplayCue(GameplayCueTag, GameplayCueParameter);
}

void UACFAbilitySystemComponent::K2_RemoveGameplayCue(FGameplayTag GameplayCueTag)
{
	RemoveGameplayCue(GameplayCueTag);
}

void UACFAbilitySystemComponent::K2_RemoveAllGameplayCues()
{
	RemoveAllGameplayCues();
}

void UACFAbilitySystemComponent::OnAbilityActivatedCallback(UGameplayAbility* Ability)
{
	//ACF_VLOG(this, Log, TEXT("UACFAbilitySystemComponent::OnAbilityActivatedCallback() %s"), *Ability->GetName());

	//AActor* Avatar = GetAvatarActor();
	//if (!Avatar)
	//{
	//	ACF_LOG(Warning, TEXT("UACFAbilitySystemComponent::OnAbilityActivated() has no owner to activate this ability %s"), *Ability->GetName())
	//	return;
	//}

	//const UACFGameplayAbility* ACFAbility = Cast<UACFGameplayAbility>(Ability);
	//if (ACFAbility)
	//{
	//	OnAbilityActivated.Broadcast(ACFAbility);
	//}
}

void UACFAbilitySystemComponent::OnAbilityFailedCallback(const UGameplayAbility* Ability, const FGameplayTagContainer& Tags)
{
	/*ACF_VLOG(this, Log, TEXT("UACFAbilitySystemComponent::OnAbilityFailedCallback() %s"), *Ability->GetName());

	AActor* Avatar = GetAvatarActor();
	if (!Avatar)
	{
		ACF_LOG(Warning, TEXT("UACFAbilitySystemComponent::OnAbilityActivated() has no owner to activate this ability %s"), *Ability->GetName())
		return;
	}

	UACFAbilityQueueComponent* AbilityQueueComponent = UACFFunctionLibrary::GetAbilityQueueComponentFromActor(Avatar);
	const UACFGameplayAbility* ACFAbility = Cast<UACFGameplayAbility>(Ability);
	if (ACFAbility)
	{
		OnAbilityFailed.Broadcast(ACFAbility, Tags);

		if (AbilityQueueComponent)
		{
			AbilityQueueComponent->OnAbilityFailed(ACFAbility, Tags);
		}
	}*/
}

void UACFAbilitySystemComponent::OnAbilityEndedCallback(UGameplayAbility* Ability)
{
	/*ACF_VLOG(this, Log, TEXT("UACFAbilitySystemComponent::OnAbilityEndedCallback() %s"), *Ability->GetName());
	UACFGameplayAbility* ACFAbility = Cast<UACFGameplayAbility>(Ability);
	if (!Ability)
	{
		ACF_LOG(Warning, TEXT("UACFAbilitySystemComponent::OnAbilityEndedCallback() Couldn't cast to UGSGameplayAbility: %s"), *Ability->GetName());
		return;
	}

	AActor* Avatar = GetAvatarActor();
	if (!Avatar)
	{
		ACF_LOG(Warning, TEXT("UACFAbilitySystemComponent::OnAbilityEndedCallback() No OwnerActor for this ability: %s"), *Ability->GetName());
		return;
	}

	UACFAbilityQueueComponent* AbilityQueueComponent = UACFFunctionLibrary::GetAbilityQueueComponentFromActor(Avatar);
	if (AbilityQueueComponent)
	{
		AbilityQueueComponent->OnAbilityEnded(ACFAbility);
	}
	OnAbilityEnded.Broadcast(ACFAbility);*/
}


