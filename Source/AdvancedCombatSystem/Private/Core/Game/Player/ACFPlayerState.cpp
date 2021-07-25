// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Game/Player/ACFPlayerState.h"
#include "AbilitySystem/Attributes/ACFAttributeSet.h"
#include "Utils/ACFLog.h"

AACFPlayerState::AACFPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UACFAbilitySystemComponent>(TEXT("AbilitySystem Component"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies.
	// If another PlayerState (Hero) receives a GE, we won't be told about it by the Server.
	// Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Set PlayerState's NetUpdateFrequency to the same as the Character.
	// Default is very low for PlayerStates and introduces perceived lag in the ability system.
	// 100 is probably way too high for a shipping game, you can adjust to fit your needs.
	NetUpdateFrequency = 10.0f;

	// Create the attribute sets from DeveloperSettings Configuration
	SetupAttributeSets();
}

class UAbilitySystemComponent* AACFPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AACFPlayerState::GetAttributeSet(TMap<FString, const UAttributeSet*>& OutAttributeSets)
{
	OutAttributeSets = AttributeSets;
}

TMap<FString, const UAttributeSet*> AACFPlayerState::GetAttributeSets()
{
	return AttributeSets;
}

void AACFPlayerState::SetupAttributeSets()
{
	const UACFDeveloperSettings* DevSettings = GetDefault<UACFDeveloperSettings>();
	TArray<TSubclassOf<UACFAttributeSetBase>> PlayerStateAttributeSets = DevSettings->PlayerStateAttributeSets;

	// Add ACFPlayerState if not prevented by config
	if (DevSettings->bWantsDefaultAttributePlayerState)
	{
		PlayerStateAttributeSets.Add(UACFAttributeSet::StaticClass());
	}

	for (const TSubclassOf<UAttributeSet> AttributeSetClass : PlayerStateAttributeSets)
	{
		if (!AttributeSetClass)
		{
			continue;
		}

		// Only create AttributeSet if not already done for this AttributeSet class
		if (!AttributeSets.Contains(AttributeSetClass->GetName()))
		{
			ACF_LOG(Verbose, TEXT("ACFPlayerState::SetupAttributeSets() Adding AttributeSet %s to PlayerState."), *AttributeSetClass->GetName())

			// Adding it as a subobject of the owning actor of an AbilitySystemComponent automatically registers the AttributeSet with the AbilitySystemComponent
			// Here we using the non templated version of CreateDefaultSubobject to be able to dynamically create those from configured PlayerState AttributeSets
			UAttributeSet* AttributeSetTemp = Cast<UAttributeSet>(CreateDefaultSubobject(AttributeSetClass->GetFName(), *AttributeSetClass, *AttributeSetClass, true, false));
			AttributeSets.Add(AttributeSetClass->GetName(), AttributeSetTemp);
		}
		else
		{
			ACF_LOG(Warning, TEXT("ACFPlayerState::SetupAttributeSets() %s seem to have duplicates. Please check Project's Settings for any duplicated AttributeSet."), *AttributeSetClass->GetName())
		}
	}
}
