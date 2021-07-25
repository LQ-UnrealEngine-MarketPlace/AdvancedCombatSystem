// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Components/ACFAbilityQueueComponent.h"
#include "AbilitySystem/Abilities/ACFGameplayAbility.h"
#include "AbilitySystemInterface.h"

// Sets default values for this component's properties
UACFAbilityQueueComponent::UACFAbilityQueueComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
	SetIsReplicatedByDefault(true);
}

void UACFAbilityQueueComponent::SetupOwner()
{
	if (!GetOwner())
	{
		return;
	}

	OwnerPawn = Cast<APawn>(GetOwner());
	if (!OwnerPawn)
	{
		return;
	}

	IAbilitySystemInterface* AbilitySystemInterface = Cast<IAbilitySystemInterface>(OwnerPawn);
	if (!AbilitySystemInterface)
	{
		return;
	}

	OwnerAbilitySystemComponent = AbilitySystemInterface->GetAbilitySystemComponent();
}

void UACFAbilityQueueComponent::OpenAbilityQueue()
{
	if (!bAbilityQueueEnabled)
	{
		return;
	}

	bAbilityQueueEnabled = true;
}

void UACFAbilityQueueComponent::CloseAbilityQueue()
{
	if (!bAbilityQueueEnabled)
	{
		return;
	}

	if (OwnerPawn)
	{
		ACF_LOG(Verbose, TEXT("UACFAbilityQueueComponent::CloseAbilityQueue() Closing Ability Queue for %s"), *OwnerPawn->GetName());
	}

	bAbilityQueueEnabled = false;
}

void UACFAbilityQueueComponent::UpdateAllowedAbilitiesForAbilityQueue(TArray<TSubclassOf<UACFGameplayAbility>> AllowedAbilities)
{
	if (bAbilityQueueEnabled)
	{
		return;
	}

	QueuedAllowedAbilities = AllowedAbilities;

	// Notify Debug Widget if any is on screen
	//UpdateDebugWidgetAllowedAbilities();
}

void UACFAbilityQueueComponent::SetAllowAllAbilitiesForAbilityQueue(bool bAllowAllAbilities)
{
	if (!bAbilityQueueEnabled)
	{
		return;
	}

	bAllowAbilitiesForAbilityQueue = bAllowAllAbilities;

	// Notify Debug Widget if any is on screen
	//UpdateDebugWidgetAllowedAbilities();
}

bool UACFAbilityQueueComponent::IsAbilityQueueOpened() const
{
	return bAbilityQueueOpened;
}

bool UACFAbilityQueueComponent::IsAllAbilitiesAllowedForAbilityQueue() const
{
	return bAllowAbilitiesForAbilityQueue;
}

UACFGameplayAbility* UACFAbilityQueueComponent::GetCurrentQueuedAbility()
{
	return const_cast<UACFGameplayAbility*>(QueuedAbility);
}

TArray<TSubclassOf<UACFGameplayAbility>> UACFAbilityQueueComponent::GetQueuedAllowedAbilities() const
{
	return QueuedAllowedAbilities;
}

void UACFAbilityQueueComponent::OnAbilityEnded(const UACFGameplayAbility* Ability)
{
	ACF_LOG(Verbose, TEXT("UACFAbilityQueueComponent::OnAbilityEnded() %s, ability queue enabled %d, character queue enabled %d"), *Ability->GetName(), Ability->bEnableAbilityQueue ? 1 : -1, bAbilityQueueEnabled ? 1 : -1)

	if (Ability->bEnableAbilityQueue)
	{
		CloseAbilityQueue();
	}

	if (bAbilityQueueEnabled)
	{
		if (QueuedAbility)
		{
			const UACFGameplayAbility* AbilityToActivate = QueuedAbility;
			ACF_VLOG(this, Log, TEXT("UACFAbilityQueueComponent::OnAbilityEnded() has a queued input: %s [AbilityQueueSystem]"), *AbilityToActivate->GetName())

			if (bAllowAbilitiesForAbilityQueue || QueuedAllowedAbilities.Contains(AbilityToActivate->GetClass()))
			{
				ResetAbilityQueueState();

				ACF_VLOG(this, Log, TEXT("UACFAbilityQueueComponent::OnAbilityEnded() %s is within Allowed Abilities, TryActivateAbilityByClass [AbilityQueueSystem]"), *AbilityToActivate->GetName())
				if (OwnerAbilitySystemComponent)
				{
					OwnerAbilitySystemComponent->TryActivateAbilityByClass(AbilityToActivate->GetClass());
				}
			}
			else
			{
				ResetAbilityQueueState();
				ACF_LOG(Verbose, TEXT("UACFAbilityQueueComponent::OnAbilityEnded() due to the ability is not allowed, stop activating: %s [AbilityQueueSystem]"), *AbilityToActivate->GetName())
			}
		}
		else
		{
			ResetAbilityQueueState();
		}
	}
}

void UACFAbilityQueueComponent::OnAbilityFailed(const UACFGameplayAbility* Ability, const FGameplayTagContainer& ReasonTags)
{
	ACF_LOG(Verbose, TEXT("UACFAbilityQueueComponent::OnAbilityFailed() %s, Reason: %s"), *Ability->GetName(), *ReasonTags.ToStringSimple())
	if (bAbilityQueueEnabled && bAbilityQueueOpened)
	{
		ACF_LOG(Verbose, TEXT("UACFAbilityQueueComponent::OnAbilityFailed() Set Queued Ability to %s"), *Ability->GetName())
		QueuedAbility = Ability;
	}
}

//UGSCUWDebugAbilityQueue* UACFAbilityQueueComponent::GetDebugWidgetFromHUD()
//{
//
//}

// Called when the game starts
void UACFAbilityQueueComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	SetupOwner();
}


void UACFAbilityQueueComponent::ResetAbilityQueueState()
{
	ACF_LOG(Verbose, TEXT("UACFAbilitySystemComponent::ResetAbiltiyQueueState()"))
	QueuedAbility = nullptr;
	bAllowAbilitiesForAbilityQueue = false;
	QueuedAllowedAbilities.Empty();

	// Notify Debug Widget if any is on screen
	//UpdateDebugWidgetAllowedAbilities();
}

void UACFAbilityQueueComponent::UpdateDebugWidgetAllowedAbilities()
{
	//UGSCUWDebugAbilityQueue* DebugWidget = GetDebugWidgetFromHUD();
	//if (!DebugWidget)
	//{
	//	return;
	//}

	//DebugWidget->UpdateAllowedAbilities(QueuedAllowedAbilities);
}
