// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Characters/ACFAICharacter.h"
#include "Core/Settings/ACFDeveloperSettings.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Core/Components/ACFCoreComponent.h"
#include "AbilitySystem/Attributes/ACFAttributeSet.h"
#include "AbilitySystem/Components/ACFAbilityQueueComponent.h"
#include "Utils/ACFLog.h"
#include <Components/CapsuleComponent.h>

AACFAICharacter::AACFAICharacter(const FObjectInitializer& ObjectInitializer)
{
	// Create ability system component
	AbilitySystemComponent = CreateDefaultSubobject<UACFAbilitySystemComponent>(TEXT("Ability System Component"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);

	// Disable Ability Queue System for AI Characters by default (can still be enabled back in Blueprints)
	AbilityQueueComponent->bAbilityQueueEnabled = false;
}

void AACFAICharacter::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	SetupAttributeSets();
}

void AACFAICharacter::BeginPlay()
{
	CoreComponent->SetupAbilityActor(this, this);
}

void AACFAICharacter::SetupAttributeSets()
{
	if (!AbilitySystemComponent.IsValid())
	{
		return;
	}

	// Create the attribute sets from DeveloperSettings Configuration
	const UACFDeveloperSettings* DevSettings = GetDefault<UACFDeveloperSettings>();
	TArray<TSubclassOf<UACFAttributeSetBase>> AICharacterAttributeSets = DevSettings->AICharactersAttributeSets;

	// Add AttributeSet if not prevented by config
	if (DevSettings->bWantsDefaultAttributeAICharacters)
	{
		AICharacterAttributeSets.Add(UACFAttributeSet::StaticClass());
	}

	for (const TSubclassOf<UAttributeSet> AttributeSetClass : AICharacterAttributeSets)
	{
		if (!AttributeSetClass)
		{
			ACF_LOG(Warning, TEXT("AACFAICharacter::SetupAttributeSets() Some configured AttributeSets for Pawn Characters seem to be missing. Please check Project's Settings for any AttributeSet with a NONE value."))
			continue;
		}

		// Only create AttributeSet if not already done for this AttributeSet class
		if (!AttributeSets.Contains(AttributeSetClass->GetName()))
		{
			ACF_VLOG(this, Log, TEXT("AACFAICharacter::SetupAttributeSets() Adding AttributeSet %s to AI Character."), *AttributeSetClass->GetName())

			const UAttributeSet* AttributeSet = AbilitySystemComponent->InitStats(AttributeSetClass, nullptr);
			AttributeSets.Add(AttributeSetClass->GetName(), AttributeSet);
		}
		else
		{
			ACF_LOG(Warning, TEXT("AACFAICharacter::SetupAttributeSets() AttributeSet %s seem to have duplicates. Please check Project's Settings for any duplicated AttributeSet."), *AttributeSetClass->GetName())
		}
	}
}
