// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Widgets/ACFUserWidget.h"
#include "AbilitySystem/ACFAbilityTypes.h"
#include "ACFUWHUD.generated.h"

class UTextBlock;
class UProgressBar;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFUWHUD : public UACFUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional), Category = "ACF | UI")
	UTextBlock* HealthText = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional), Category = "ACF | UI")
	UProgressBar* HealthProgressBar = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional), Category = "ACF | UI")
	UTextBlock* StaminaText = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional), Category = "ACF | UI")
	UProgressBar* StaminaProgressBar = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional), Category = "ACF | UI")
	UTextBlock* ManaText = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional), Category = "ACF | UI")
	UProgressBar* ManaProgressBar = nullptr;

private:
	static FString GetAttributeFormatString(float BaseValue, float MaxValue);
	static FACFGameplayEffectUIData GetGameplayEffectUIData(FActiveGameplayEffectHandle ActiveHandle);

public:
	/** Init widget with attributes from owner character **/
	virtual void InitFromCharacter();

	/** Updates bound health widgets to reflect the new max health change */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetMaxHealth(float MaxHealth);

	/** Updates bound health widgets to reflect the new health change */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetHealth(float Health);

	/** Updates bound stamina progress bar with the new percent */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetHealthPercentage(float HealthPercentage);

	/** Updates bound stamina widgets to reflect the new max stamina change */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetMaxStamina(float MaxStamina);

	/** Updates bound stamina widgets to reflect the new stamina change */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetStamina(float Stamina);

	/** Updates bound health progress bar with the new percent */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetStaminaPercentage(float StaminaPercentage);

	/** Updates bound mana widgets to reflect the new max mana change */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetMaxMana(float MaxMana);

	/** Updates bound mana widgets to reflect the new mana change */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetMana(float Mana);

	/** Updates bound mana progress bar with the new percent */
	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	virtual void SetManaPercentage(float ManaPercentage);

	// Generic Attribute setter - broadcast change to Blueprint event below
	virtual void HandleAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue);

	// called by CCC whenever a gameplay effect is added or removed
	virtual void HandleGameplayEffectStackChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount);

	// called by CCC whenever a gameplay effect time is changed
	virtual void HandleGameplayEffectTimeChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration);

	// called by CCC whenever a gameplay effect is added
	virtual void HandleGameplayEffectAdded(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle);

	// called by CCC whenever a gameplay effect is removed
	virtual void HandleGameplayEffectRemoved(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle);

	// called by CCC whenever a gameplay tag is added or removed
	virtual void HandleGameplayTagChange(FGameplayTag GameplayTag, int32 NewTagCount);

	// called by CCC whenever an ability with valid cooldown tags is committed (cooldown start)
	virtual void HandleCooldownStart(UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration);

	// called by CCC whenever an cooldown tag stack changes, and stack count is 0 (cooldown end)
	virtual void HandleCooldownEnd(UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration);

	/** Event triggered by Companion Core Component whenever an attribute value is changed */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue);

	/** Event triggered by Companion Core Component whenever a gameplay effect is added / removed */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnGameplayEffectStackChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount);

	/** Event triggered by Companion Core Component whenever a gameplay effect time is changed (for instance when duration is refreshed) */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnGameplayEffectTimeChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration);

	/** Event triggered by Companion Core Component whenever a gameplay effect is added */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnGameplayEffectAdded(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, FACFGameplayEffectUIData EffectData);

	/** Event triggered by Companion Core Component whenever a gameplay effect is removed */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnGameplayEffectRemoved(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, FACFGameplayEffectUIData EffectData);

	/** Event triggered by Companion Core Component whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events) */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnGameplayTagChange(FGameplayTag GameplayTag, int32 NewTagCount);

	/** Event triggered by Companion Core component when an ability with a valid cooldown is committed and cooldown is applied */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnCooldownStart(UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration);

	/** Event triggered by Companion Core Component when a cooldown gameplay tag is removed, meaning cooldown expired */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnCooldownEnd(UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration);
};
