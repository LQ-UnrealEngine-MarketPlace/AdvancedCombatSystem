// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/ACFAttributeSetBase.h"
#include "ACFAttributeSet.generated.h"

/**
 * Contains basic Attributes used in most games, Health, Stamina, Mana.
 * Characters taking damage or using Mana or Stamina as a resource will use this AttributeSet.
 *
 * Attributes:
 *
 * Health - How much current health the Character has
 * MaxHealth - Maximum amount of Health for the Character
 * HealthRegenRate - Backing attribute to determine the amount of health regenerated per Gameplay Effect period
 *
 * Stamina - Mainly used as a resource for Abilities
 * MaxStamina - Maximum amount of Stamina for the Character
 * StaminaRegenRate - Backing attribute to get the amount of stamina regenerated when used by a Gameplay Effect
 *
 * Mana - Mainly used as a resource for Abilities
 * MaxMana - Maximum amount of Mana for the Character
 * ManaRegenRate - Backing attribute for mana regeneration
 *
 * Damage - Meta attribute used by DamageExecution or Gameplay Effect to calculate final damage, which then turns into -Health
 * StaminaDamage - Meta attribute used by DamageExecution or Gameplay Effect to calculate final damage, which then turns into -Stamina
 */
UCLASS(Config = Game)
class ADVANCEDCOMBATSYSTEM_API UACFAttributeSet : public UACFAttributeSetBase
{
	GENERATED_BODY()
	
public:
	// AttributeSet Overrides
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Current Health, when 0 we expect owner to die unless prevented by an ability. Capped by MaxHealth.
	// Positive changes can directly use this.
	// Negative changes to Health should go through Damage meta attribute.
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, Health)

	// MaxHealth is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, MaxHealth)

	// Health regen rate will passively increase Health every period
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_HealthRegenRate)
	FGameplayAttributeData HealthRegenRate = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, HealthRegenRate)

	// Current stamina, used to execute abilities. Capped by MaxStamina.
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData Stamina = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, Stamina)

	// MaxStamina is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_MaxStamina)
	FGameplayAttributeData MaxStamina = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, MaxStamina)

	// Stamina regen rate will passively increase Stamina every period
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_StaminaRegenRate)
	FGameplayAttributeData StaminaRegenRate = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, StaminaRegenRate)

	// Current Mana, used to execute special abilities. Capped by MaxMana.
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, Mana)

	// MaxMana is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, MaxMana)

	// Mana regen rate will passively increase Mana every period
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", ReplicatedUsing = OnRep_ManaRegenRate)
	FGameplayAttributeData ManaRegenRate = 0.0f;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, ManaRegenRate)

	// Damage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Health
	// Temporary value that only exists on the Server. Not replicated.
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", meta = (HideFromLevelInfos))
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, Damage)

	// StaminaDamage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Stamina
	// Temporary value that only exists on the Server. Not replicated.
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Attribute Set", meta = (HideFromLevelInfos))
	FGameplayAttributeData StaminaDamage;
	ATTRIBUTE_ACCESSORS(UACFAttributeSet, StaminaDamage)

protected:
	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate);

	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	UFUNCTION()
	virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

	UFUNCTION()
	virtual void OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate);

	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);

	UFUNCTION()
	virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina);

	UFUNCTION()
	virtual void OnRep_StaminaRegenRate(const FGameplayAttributeData& OldStaminaRegenRate);
};
