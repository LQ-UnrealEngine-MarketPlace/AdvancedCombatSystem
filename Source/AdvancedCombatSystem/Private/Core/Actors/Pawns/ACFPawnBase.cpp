// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Pawns/ACFPawnBase.h"
#include "Core/Components/ACFCoreComponent.h"
#include "Core/Animations/Components/ACFLocomotionComponent.h"
#include "AbilitySystem/Components/ACFAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/ACFAttributeSetBase.h"
#include "Utils/ACFLog.h"

// Sets default values
AACFPawnBase::AACFPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Setup sensible defaults
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	NetPriority = 4.0f;

	// Create Components
	AbilitySystemComponent = CreateDefaultSubobject<UACFAbilitySystemComponent>(TEXT("AbilitySystem Component"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	CoreComponent = CreateDefaultSubobject<UACFCoreComponent>("Core Component");
}

void AACFPawnBase::PreInitializeComponents()
{
	Super::PreInitializeComponents();
	SetupAttributeSets();
}

UACFCoreComponent* AACFPawnBase::GetCoreComponent() const
{
	return CoreComponent;
}

UACFAbilityComboManagerComponent* AACFPawnBase::GetAbilityComboManagerComponent() const
{
	return nullptr;
}

UACFAbilityQueueComponent* AACFPawnBase::GetAbilityQueueComponent() const
{
	return nullptr;
}

UACFLocomotionComponent* AACFPawnBase::GetLocomotionComponent() const
{
	return nullptr;
}

TMap<FString, const UAttributeSet*> AACFPawnBase::GetAttributeSets() const
{
	return AttributeSets;
}

UAbilitySystemComponent* AACFPawnBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void AACFPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
	CoreComponent->SetupAbilityActor(this, this);
}

void AACFPawnBase::SetupAttributeSets()
{
	if (!AbilitySystemComponent)
	{
		ACF_LOG(Error, TEXT("AACFPawnBase::SetupAttributeSets() AbilitySystemComponent is nullptr, can't setup attribute sets for %s"), *GetName())
		return;
	}

	// Create the attribute sets from DeveloperSettings Configuration
	const UACFDeveloperSettings* DevSettings = GetDefault<UACFDeveloperSettings>();
	TArray<TSubclassOf<UACFAttributeSetBase>> PawnsAttributeSets = DevSettings->PawnsAttributeSets;

	// Add AttributeSet if not prevented by config
	if (DevSettings->bWantsDefaultAttributePawns)
	{
		PawnsAttributeSets.Add(UACFAttributeSet::StaticClass());
	}

	for (const TSubclassOf<UAttributeSet> AttributeSetClass : PawnsAttributeSets)
	{
		if (!AttributeSetClass)
		{
			ACF_LOG(Warning, TEXT("AACFPawnBase::SetupAttributeSets() Some configured AttributeSets for Pawn Characters seem to be missing. Please check Project's Settings for any AttributeSet with a NONE value."))
			continue;
		}

		// Only create AttributeSet if not already done for this AttributeSet class
		if (!AttributeSets.Contains(AttributeSetClass->GetName()))
		{
			ACF_VLOG(this, Log, TEXT("AACFPawnBase::SetupAttributeSets() Adding AttributeSet %s to Pawn."), *AttributeSetClass->GetName())
			const UAttributeSet* AttributeSet = AbilitySystemComponent->InitStats(AttributeSetClass, nullptr);
			AttributeSets.Add(AttributeSetClass->GetName(), AttributeSet);
		}
		else
		{
			ACF_LOG(Warning, TEXT("AACFPawnBase::SetupAttributeSets() AttributeSet %s seem to have duplicates. Please check Project's Settings for any duplicated AttributeSet."), *AttributeSetClass->GetName())
		}
	}
}

