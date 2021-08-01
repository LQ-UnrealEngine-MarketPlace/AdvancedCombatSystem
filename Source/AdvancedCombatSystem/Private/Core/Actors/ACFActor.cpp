// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/ACFActor.h"
#include "Core/Components/ACFCoreComponent.h"
#include "Core/Settings/ACFDeveloperSettings.h"
#include "AbilitySystem/Attributes/ACFAttributeSetBase.h"
#include "AbilitySystem/Components/ACFAbilitySystemComponent.h"
#include <AttributeSet.h>

// Sets default values
AACFActor::AACFActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Explicitly set it to replicated (not done by default for actors, it's enabled on pawn)
	bReplicates = true;
	NetPriority = 4.0f;

	// Create Components
	AbilitySystemComponent = CreateDefaultSubobject<UACFAbilitySystemComponent>(TEXT("Ability System Compoenent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	CoreComponent = CreateDefaultSubobject<UACFCoreComponent>("Core Component");
}

void AACFActor::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	SetupAttributeSets();
}

// Called when the game starts or when spawned
void AACFActor::BeginPlay()
{
	Super::BeginPlay();
	
	CoreComponent->SetupAbilityActor(this, this);
}

void AACFActor::SetupAttributeSets()
{
	if (!AbilitySystemComponent)
	{
		ACF_LOG(Error, TEXT("ACFActor::SetupAttributeSets AbilitySystem is nullptr, aborting setup for %s."), *GetName());
		return;
	}

	// Create the attribute sets from DeveloperSettings Configuration
	const UACFDeveloperSettings* DevSettings = GetDefault<UACFDeveloperSettings>();
	TArray<TSubclassOf<UACFAttributeSetBase>> ActorAttributeSets = DevSettings->ActorsAttributeSets;

	// Add AttributeSet if not prevented by config
	if (DevSettings->bWantsDefaultAttributeActors)
	{
		ActorAttributeSets.Add(UACFAttributeSet::StaticClass());
	}

	for (const TSubclassOf<UAttributeSet> AttributeSetClass : ActorAttributeSets)
	{
		if (!AttributeSetClass)
		{
			ACF_LOG(Warning, TEXT("ACFActor::SetupAttributeSets %s AttributeSet for %s seem to be missing. Check Project's Settings."), *AttributeSetClass->GetName(), *GetName())
			continue;
		}

		// Only create AttributeSet if not already done for this AttributeSet Class
		if (!AttributeSets.Contains(AttributeSetClass->GetName()))
		{
			ACF_VLOG(this, Log, TEXT("ACFActor::SetupAttributeSets Adding AttributeSet %s to %s."), *AttributeSetClass->GetName(), *GetName())
			const UAttributeSet* AttributeSet = AbilitySystemComponent->InitStats(AttributeSetClass, nullptr);
			AttributeSets.Add(AttributeSetClass->GetName(), AttributeSet);
		}
		else
		{
			ACF_LOG(Warning, TEXT("ACFActor::SetupAttributeSets %s seem already to be registered."), *AttributeSetClass->GetName())
		}
	}
}

UAbilitySystemComponent* AACFActor::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UACFCoreComponent* AACFActor::GetCoreComponent() const
{
	return CoreComponent;
}

UACFAbilityComboManagerComponent* AACFActor::GetAbilityComboManagerComponent() const
{
	return nullptr;
}

UACFAbilityQueueComponent* AACFActor::GetAbilityQueueComponent() const
{
	return nullptr;
}

TMap<FString, const UAttributeSet*> AACFActor::GetAttributeSets() const
{
	return AttributeSets;
}


