// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Abilities/GameplayAbilityTargetTypes.h>
#include "ACFAbilityTypes.generated.h"

class UGameplayEffect;
class UACFTargetType;
class UAttributeSet;
class UAbilitySystemComponent;

/** List of Ability Inputs ID */
UENUM(BlueprintType)
enum class EACFAbilityInputID : uint8
{
	None            UMETA(DisplayName = "None"),
	Confirm         UMETA(DisplayName = "Confirm"),
	Cancel          UMETA(DisplayName = "Cancel"),
	Ability1        UMETA(DisplayName = "Ability1")
};

/**
 * Struct defining a list of gameplay effects, a tag, and targeting info
 * These containers are defined statically in blueprints or assets and then turn into Specs at runtime
 */
USTRUCT(BlueprintType)
struct FRPGGameplayEffectContainer
{
	GENERATED_BODY()

	public:
	FRPGGameplayEffectContainer() {}

	/** Sets the way that targeting happens */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffectContainer")
	TSubclassOf<UACFTargetType> TargetType;

	/** List of gameplay effects to apply to the targets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffectContainer")
	TArray<TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses;
};

/** A "processed" version of RPGGameplayEffectContainer that can be passed around and eventually applied */
USTRUCT(BlueprintType)
struct FRPGGameplayEffectContainerSpec
{
	GENERATED_BODY()

public:
	FRPGGameplayEffectContainerSpec() {}

	/** Computed target data */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffectContainer")
	FGameplayAbilityTargetDataHandle TargetData;

	/** List of gameplay effects to apply to the targets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffectContainer")
	TArray<FGameplayEffectSpecHandle> TargetGameplayEffectSpecs;

	/** Returns true if this has any valid effect specs */
	bool HasValidEffects() const;

	/** Returns true if this has any valid targets */
	bool HasValidTargets() const;

	/** Adds new targets to target data */
	void AddTargets(const TArray<FHitResult>& HitResults, const TArray<AActor*>& TargetActors);
};


USTRUCT(BlueprintType)
struct FACFGameplayEffectUIData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffect")
	float StartTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffect")
	float TotalDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffect")
	float ExpectedEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffect")
	int32 StackCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | GameplayEffect")
	int32 StackLimitCount;

	FACFGameplayEffectUIData(const float StartTime, const float TotalDuration, const float ExpectedEndTime, const int32 StackCount, const int32 StackLimitCount)
		: StartTime(StartTime),
		TotalDuration(TotalDuration),
		ExpectedEndTime(ExpectedEndTime),
		StackCount(StackCount),
		StackLimitCount(StackLimitCount)
	{
	}

	FACFGameplayEffectUIData()
	{
	}
};

/** Structure passed down to Actors Blueprint with PostGameplayEffectExecute Event */
USTRUCT(BlueprintType)
struct FACFGameplayEffectExecuteData
{
	GENERATED_BODY()

	/** The owner AttributeSet from which the event was invoked */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | AttributeSetPayload")
	UAttributeSet* AttributeSet;

	/** The owner AbilitySystemComponent for this AttributeSet */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | AttributeSetPayload")
	UAbilitySystemComponent* AbilitySystemComponent;

	/** Calculated DeltaValue from OldValue to NewValue */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | AttributeSetPayload")
	float DeltaValue;

	/** The configured Clamp MinimumValue for this Attribute, if defined */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | AttributeSetPayload")
	float ClampMinimumValue;
};