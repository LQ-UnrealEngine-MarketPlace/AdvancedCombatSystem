// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "../ACFAbilityTypes.h"
#include "ACFGameplayAbility.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAbilityEnded);

/**
 * Subclass of ability blueprint type with game-specific data
 * This class uses GameplayEffectContainers to allow easier execution of gameplay effects based on a triggering tag
 * Most games will need to implement a subclass to support their game-specific code
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UACFGameplayAbility();

	/** if true, the ability can be activated even it the cost is going into negative values */
	UPROPERTY(EditDefaultsOnly, Category = "ACF | Debugs")
	bool bIgnoreAbilityCost = false;

	/**
	 * Enable other abilities to be queued and activated when this ability ends.
	 *
	 * It is recommended to leave this variable to false, and instead use the AbilityQueueNotifyState (AbilityQueueWindow)
	 * within montages to further tune when the Queue System is opened and closed.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "ACF | Ability")
	bool bEnableAbilityQueue = false;

	/** Map of gameplay tags to gameplay effect containers */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | GameplayEffects")
	TMap<FGameplayTag, FRPGGameplayEffectContainer> EffectContainerMap;

	/** Make gameplay effect container spec to be applied later, using the passed in container */
	UFUNCTION(BlueprintCallable, Category = "ACF | Ability", meta = (AutoCreateRefTerm = "EventData"))
	virtual FRPGGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(const FRPGGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	/** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */
	UFUNCTION(BlueprintCallable, Category = "ACF | Ability", meta = (AutoCreateRefTerm = "EventData"))
	virtual FRPGGameplayEffectContainerSpec MakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	/** Applies a gameplay effect container spec that was previously created */
	UFUNCTION(BlueprintCallable, Category = "ACF | Ability")
	virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const FRPGGameplayEffectContainerSpec& ContainerSpec);

	/** Applies a gameplay effect container, by creating and then applying the spec */
	UFUNCTION(BlueprintCallable, Category = "ACF | Ability", meta = (AutoCreateRefTerm = "EventData"))
	virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);

	/**
	 * Checks cost. returns true if we can pay for the ability. False if not
	 *
	 * If the Ability is set to ignore ability cost via bIgnoreAbilityCost, returns true
	 */
	bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

	/**
	 * Returns true if this ability can be activated right now. Has no side effects
	 *
	 * This optionally loose Cost check if the ability is marked as ignore cost,
	 * meaning cost attributes are only checked to be < 0 and prevented if 0 or below.
	 *
	 * If Blueprints implements the CanActivateAbility function, they are responsible for ability activation or not
	 */
	bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

	// Gameplay Abilities Delegates

	/**
	 * Called when the ability ends.
	 */
	UPROPERTY(BlueprintAssignable, Category = "GSC|Ability")
	FOnAbilityEnded OnAbilityEnded;

	/** Called on ability end */
	void AbilityEnded(UGameplayAbility* Ability);

private:	
	/** Loosely Check for cost attribute current value to be positive */
	bool CheckForPositiveCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags) const;

	/** Does the actual check for attribute modifiers, only checking it their current value is <= 0 */
	bool CanApplyPositiveAttributeModifiers(const UGameplayEffect* GameplayEffect, const FGameplayAbilityActorInfo* ActorInfo, float Level, const FGameplayEffectContextHandle& EffectContext) const;
};
