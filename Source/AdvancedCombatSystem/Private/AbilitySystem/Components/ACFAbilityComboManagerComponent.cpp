// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Components/ACFAbilityComboManagerComponent.h"
#include "AbilitySystem/Abilities/ACFGameplayAbility.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include <Net/UnrealNetwork.h>
#include <Kismet/KismetSystemLibrary.h>

// Sets default values for this component's properties
UACFAbilityComboManagerComponent::UACFAbilityComboManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


void UACFAbilityComboManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAbilityComboManagerComponent, ComboIndex, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAbilityComboManagerComponent, bComboWindowOpened, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAbilityComboManagerComponent, bShouldTriggerCombo, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAbilityComboManagerComponent, bRequestTriggerCombo, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAbilityComboManagerComponent, bNextComboAbilityActivated, COND_None, REPNOTIFY_Always);
}

void UACFAbilityComboManagerComponent::SetupOwner()
{
	if (!GetOwner())
	{
		return;
	}

	OwningCharacter = Cast<AACFCharacterBase>(GetOwner());
	//OwnerStatisticsComponent = UACFFunctionLibrary::GetStatisticsComponentFromActor(OwningCharacter);
}

UACFGameplayAbility* UACFAbilityComboManagerComponent::GetCurrentActiveComboAbility()
{
	if (!OwnerAbilitySystemComponent)
	{
		ACF_LOG(Error, TEXT("UACFAbilityComboManagerComponent::GetCurrentActiveComboAbility() is invalid due to OwnerAbilitySystemComponent is nullptr"))
		return nullptr;
	}

	UACFAbilitySystemComponent* AbilitySystemComponent = Cast<UACFAbilitySystemComponent>(OwnerAbilitySystemComponent);
	if (!AbilitySystemComponent)
	{
		ACF_LOG(Error, TEXT("UACFAbilityComboManagerComponent::GetCurrentActiveComboAbility() is invalid due to OwnerAbilitySystemComponent is not UACFAbilitySystemComponent's child "))
		return nullptr;
	}

	TArray<UACFGameplayAbility*> Abilities;
	AbilitySystemComponent->GetActiveAbilitiesWithClass(ActiveAbility, Abilities);
	return Abilities.IsValidIndex(0) ? Abilities[0] : nullptr;
}

void UACFAbilityComboManagerComponent::IncrementCombo()
{
	if (bComboWindowOpened)
	{
		ComboIndex += 1;
	}
}

void UACFAbilityComboManagerComponent::ResetCombo()
{
	ACF_LOG(Verbose, TEXT("UACFAbilityComboManager::ResetCombo()"))
	SetComboIndex(0);
}

void UACFAbilityComboManagerComponent::ActivateComboAbility(TSubclassOf<UACFGameplayAbility> AbilityClass, bool bAllowRemoteActivation /*= true*/)
{
	const bool bIsStandalone = UKismetSystemLibrary::IsStandalone(this);
	if (bIsStandalone)
	{
		Internal_ActivateComboAbility(AbilityClass, bAllowRemoteActivation);
	}
	else
	{
		Server_ActivateComboAbility(AbilityClass, bAllowRemoteActivation);
	}
}

void UACFAbilityComboManagerComponent::SetComboIndex(int32 InComboIndex)
{
	const bool bIsStandalone = UKismetSystemLibrary::IsStandalone(this);
	if (bIsStandalone)
	{
		ComboIndex = InComboIndex;
	}
	else
	{
		ComboIndex = InComboIndex;
		Server_SetComboIndex(InComboIndex);
	}
}

// Called when the game starts
void UACFAbilityComboManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	if (!GetOwner())
	{
		return;
	}

	OwningCharacter = Cast<AACFCharacterBase>(GetOwner());
	if (!OwningCharacter)
	{
		return;
	}

	OwnerAbilitySystemComponent = OwningCharacter->GetAbilitySystemComponent();
}

void UACFAbilityComboManagerComponent::Server_ActivateComboAbility_Implementation(TSubclassOf<UACFGameplayAbility> AbilityClass, bool bAllowRemoteActivation /*= true*/)
{
	NetMulticast_ActivateComboAbility(AbilityClass, bAllowRemoteActivation);
}

void UACFAbilityComboManagerComponent::NetMulticast_ActivateComboAbility_Implementation(TSubclassOf<UACFGameplayAbility> AbilityClass, bool bAllowRemoteActivation /*= true*/)
{
	if (OwningCharacter && !OwningCharacter->IsLocallyControlled())
	{
		Internal_ActivateComboAbility(AbilityClass, bAllowRemoteActivation);
	}
}

void UACFAbilityComboManagerComponent::Internal_ActivateComboAbility(TSubclassOf<UACFGameplayAbility> AbilityClass, bool bAllowRemoteActivation /*= true*/)
{
	bShouldTriggerCombo = false;

	if (!OwningCharacter)
	{
		ACF_LOG(Error, TEXT("UACFAbilityComboManagerComponent::ActivateComboAbility() OwningCharacter is nullptr"))
			return;
	}

	if (!AbilityClass)
	{
		ACF_LOG(Error, TEXT("UACFAbiltiyComboManagerComponent::ActivateComboAbility() AbilityClass is nullptr"))
			return;
	}

	/*if (OwnerAbilitySystemComponent->IsUsingAbilityWithClass(AbilityClass))
	{
		ACF_LOG(
			Verbose,
			TEXT("AGSCCharacterBase::ActivateComboAbility() %s is using %s already, update should trigger combo to %s"),
			*GetName(),
			*AbilityClass->GetName(),
			bComboWindowOpened ? TEXT("true") : TEXT("false")
		)
			bShouldTriggerCombo = bComboWindowOpened;
	}
	else
	{
		ACF_LOG(Verbose, TEXT("AGSCCharacterBase::ActivateComboAbility() %s is not in combo, activate %s"), *GetName(), *AbilityClass->GetName())
		UACFGameplayAbility* TempActivateAbility;
		OwnerAbilitySystemComponent->ActivateAbilityWithClass(AbilityClass, TempActivateAbility, bAllowRemoteActivation);
	}*/
}

void UACFAbilityComboManagerComponent::Server_SetComboIndex_Implementation(int32 InComboIndex)
{
	NetMulticast_SetComboIndex(InComboIndex);
}

void UACFAbilityComboManagerComponent::NetMulticast_SetComboIndex_Implementation(int32 InComboIndex)
{
	if (OwningCharacter && !OwningCharacter->IsLocallyControlled())
	{
		ComboIndex = InComboIndex;
	}
}