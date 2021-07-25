// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ACFGameplayAbility.h"
#include "ACFGameplayAbility_MeleeBase.generated.h"

class UAnimMontage;
class UACFAbilityComboManagerComponent;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFGameplayAbility_MeleeBase : public UACFGameplayAbility
{
	GENERATED_BODY()
	
public:
	UACFGameplayAbility_MeleeBase();

protected:
	UPROPERTY()
	UACFAbilityComboManagerComponent* AbilityComboManagerComponent;

	/** List of animation montages you want to cycle through when activating this ability */
	UPROPERTY(EditDefaultsOnly, Category = "Montages")
	TArray<UAnimMontage*> Montages;

	/** Change to play the montage faster or slower */
	UPROPERTY(EditDefaultsOnly, Category = "Montages")
	float Rate = 1.f;

	/** Any gameplay events matching this tag will activate the OnEventReceived callback and apply the gameplay effect containers for this ability */
	UPROPERTY(EditDefaultsOnly, Category = "Montages")
	FGameplayTagContainer WaitForEventTag;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION()
	void OnMontageCancelled(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void OnMontageCompleted(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void OnEventReceived(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION(BlueprintPure, Category = "GSC|Ability|Melee")
	UAnimMontage* GetNextComboMontage();
};
