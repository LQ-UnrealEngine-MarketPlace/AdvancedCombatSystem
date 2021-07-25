// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/ACFAttributeSetBase.h"
#include "Core/Components/ACFCoreComponent.h"
#include "Core/Settings/ACFDeveloperSettings.h"
#include "Core/Game/Player/ACFPlayerState.h"
#include <GameplayEffectExtension.h>

// Sets default values
UACFAttributeSetBase::UACFAttributeSetBase()
{
	// Set default values for this Set Attributes here
	const UACFDeveloperSettings* DeveloperSettings = GetDefault<UACFDeveloperSettings>();
	for (FACFAttributeSetMinimumValues ClampMinimumValue : DeveloperSettings->MinimumValues)
	{
		// For each configured value, store and cache them in a map
		MinimumValues.Add(ClampMinimumValue.Attribute, ClampMinimumValue.MinimumValue);
	}
}

void UACFAttributeSetBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change, so for max attributes we want to scale the current totals to match
	Super::PreAttributeChange(Attribute, NewValue);

	AActor* OwningActor = GetOwningActor();

	AACFPlayerState* PlayerState = Cast<AACFPlayerState>(OwningActor);
	if (PlayerState)
	{
		OwningActor = PlayerState->GetPawn();
	}

	UACFCoreComponent* CoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(OwningActor);
	if (CoreComponent)
	{
		CoreComponent->PreAttributeChange(this, Attribute, NewValue);
	}
}

void UACFAttributeSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	AActor* SourceActor = nullptr;
	AActor* TargetActor = nullptr;
	GetSourceAndTargetFromContext<AActor>(Data, SourceActor, TargetActor);

	UACFCoreComponent* TargetCoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(TargetActor);
	if (TargetCoreComponent)
	{
		TargetCoreComponent->PostGameplayEffectExecute(this, Data);
	}
}

void UACFAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

float UACFAttributeSetBase::GetClampMinimumValueFor(const FGameplayAttribute& Attribute)
{
	float* MinimumValue = MinimumValues.Find(Attribute);
	if (!MinimumValue)
	{
		return 0.f;
	}

	return *MinimumValue;
}

void UACFAttributeSetBase::GetCharactersFromContext(const FGameplayEffectModCallbackData& Data, AACFCharacterBase*& SourceCharacter, AACFCharacterBase*& TargetCharacter)
{
	GetSourceAndTargetFromContext<AACFCharacterBase>(Data, SourceCharacter, TargetCharacter);
}

const FGameplayTagContainer& UACFAttributeSetBase::GetSourceTagsFromContext(const FGameplayEffectModCallbackData& Data)
{
	return *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
}

void UACFAttributeSetBase::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, const float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty) const
{
	UAbilitySystemComponent* AbilitySystemComponent = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilitySystemComponent)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		const float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilitySystemComponent->ApplyModToAttribute(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}
