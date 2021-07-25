// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "AbilitySystem/Components/ACFAbilitySystemComponent.h"
#include "AbilitySystem/Components/ACFAbilityComboManagerComponent.h"
#include "AbilitySystemComponent.h"

// Sets default values
AACFCharacterBase::AACFCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Setup Components
	CoreComponent = CreateDefaultSubobject<UACFCoreComponent>("Core Component");
	AbilityQueueComponent = CreateDefaultSubobject<UACFAbilityQueueComponent>("Ability Queue Component");
	AbilityComboManagerComponent = CreateDefaultSubobject<UACFAbilityComboManagerComponent>("Ability Combo Manager Component");

	// Setup sensible defaults;
	bUseControllerRotationYaw = false;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	NetPriority = 4.f;
	
	GetMesh()->bEnableUpdateRateOptimizations = true;
	GetMesh()->bPropagateCurvesToSlaves = true;

	// Always tick Pose and refresh Bones!
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}

UACFCoreComponent* AACFCharacterBase::GetCoreComponent() const
{
	return CoreComponent;
}

UACFAbilityComboManagerComponent* AACFCharacterBase::GetAbilityComboManagerComponent() const
{
	return AbilityComboManagerComponent;
}

UACFAbilityQueueComponent* AACFCharacterBase::GetAbilityQueueComponent() const
{
	return AbilityQueueComponent;
}

TMap<FString, const UAttributeSet*> AACFCharacterBase::GetAttributeSets() const
{
	return TMap<FString, const UAttributeSet*>();
}

UACFAbilitySystemComponent* AACFCharacterBase::GetAbilitySystemComponent()
{
	return UACFAbilitySystemComponent::GetAbilitySystemComponentFromActor(this);
}

void AACFCharacterBase::Restart()
{
	ACF_VLOG(this, Log, TEXT("Restart Character %s"), *GetName())
	
	Super::Restart();
	OnRespawn();
}

class UAbilitySystemComponent* AACFCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

