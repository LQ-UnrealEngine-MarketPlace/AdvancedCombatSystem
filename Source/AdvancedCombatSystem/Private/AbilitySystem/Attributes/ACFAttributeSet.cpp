// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/ACFAttributeSet.h"
#include "Core/Components/ACFCoreComponent.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Utils/ACFLog.h"
#include <Net/UnrealNetwork.h>
#include <GameplayEffectExtension.h>

void UACFAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change, so for max health/mana we want to scale the current totals to match
	Super::PreAttributeChange(Attribute, NewValue);

	// If a Max value changes, adjust current to keep Current % of Current to Max
	if (Attribute == GetMaxHealthAttribute())
	{
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
	}
	else if (Attribute == GetMaxStaminaAttribute())
	{
		AdjustAttributeForMaxChange(Stamina, MaxStamina, NewValue, GetStaminaAttribute());
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		AdjustAttributeForMaxChange(Mana, MaxMana, NewValue, GetManaAttribute());
	}
}

void UACFAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	AActor* SourceActor = nullptr;
	AActor* TargetActor = nullptr;
	GetSourceAndTargetFromContext<AActor>(Data, SourceActor, TargetActor);

	UACFCoreComponent* TargetCoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(TargetActor);
	
	const FGameplayTagContainer SourceTags = GetSourceTagsFromContext(Data);
	const FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();

	// Get Minimum Clamp value for this attribute, if it is available
	const float ClampMinimumValue = GetClampMinimumValueFor(Data.EvaluatedData.Attribute);

	// Compute the delta between old and new, if it is available
	float DeltaValue = 0;
	if (Data.EvaluatedData.ModifierOp == EGameplayModOp::Type::Additive)
	{
		// If this was additive, store the raw delta value to be passed along later
		DeltaValue = Data.EvaluatedData.Magnitude;
	}

	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		// Store a local copy of the amount of Damage done and clear the Damage attribute.
		const float LocalDamageDone = GetDamage();
		SetDamage(0.f);

		if (LocalDamageDone > 0.f)
		{
			// If actor was alive before damage is added, handle damage
			// This prevents damage being added to dead things and replaying death animations
			bool bAlive = true;

			if (TargetCoreComponent)
			{
				bAlive = TargetCoreComponent->IsAlive();
				if (!bAlive)
				{
					ACF_LOG(Warning, TEXT("UACFAttributeSet::PostGameplayEffectExecute() %s character or pawn is NOT alive when receiving damage"), *TargetActor->GetName())
				}
			}

			if (bAlive)
			{
				// Apply the Health change and then clamp it.
				const float NewHealth = GetHealth() - LocalDamageDone;
				SetHealth(FMath::Clamp(NewHealth, ClampMinimumValue, GetMaxHealth()));

				if (TargetCoreComponent)
				{
					TargetCoreComponent->HandleDamage(LocalDamageDone, SourceTags, SourceActor);
					TargetCoreComponent->HandleAttributeChange(GetDamageAttribute(), -LocalDamageDone, SourceTags);
					TargetCoreComponent->HandleHealthChange(-LocalDamageDone, SourceTags);
				}
			}
		}
	}
	else if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		// Handle other health changes. Health loss should go through Damage meta attribute
		SetHealth(FMath::Clamp(GetHealth(), ClampMinimumValue, GetMaxHealth()));

		if (TargetCoreComponent)
		{
			TargetCoreComponent->HandleAttributeChange(GetHealthAttribute(), DeltaValue, SourceTags);
			TargetCoreComponent->HandleHealthChange(DeltaValue, SourceTags);
		}
	}
	else if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		// Handle stamina changes. Can go into negative values down to StaminaMinimumValue
		// (which defaults to -60.f and can be configured via DefaultGame.ini)
		SetStamina(FMath::Clamp(GetStamina(), ClampMinimumValue, GetMaxStamina()));

		if (TargetCoreComponent)
		{
			TargetCoreComponent->HandleAttributeChange(GetStaminaAttribute(), DeltaValue, SourceTags);
			TargetCoreComponent->HandleStaminaChange(DeltaValue, SourceTags);
		}
	}
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		// Handle mana changes.
		SetMana(FMath::Clamp(GetMana(), ClampMinimumValue, GetMaxMana()));

		if (TargetCoreComponent)
		{
			TargetCoreComponent->HandleAttributeChange(GetManaAttribute(), DeltaValue, SourceTags);
			TargetCoreComponent->HandleManaChange(DeltaValue, SourceTags);
		}
	}
	else
	{
		// Generic attribute handler
		if (TargetCoreComponent)
		{
			TargetCoreComponent->HandleAttributeChange(GetManaAttribute(), DeltaValue, SourceTags);
		}
	}
}

void UACFAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, HealthRegenRate, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, MaxStamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, StaminaRegenRate, COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UACFAttributeSet, ManaRegenRate, COND_None, REPNOTIFY_Always);
}

void UACFAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, Health, OldHealth);
}

void UACFAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, MaxHealth, OldMaxHealth);
}

void UACFAttributeSet::OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, HealthRegenRate, OldHealthRegenRate);
}

void UACFAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, Mana, OldMana);
}

void UACFAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, MaxMana, OldMaxMana);
}

void UACFAttributeSet::OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, ManaRegenRate, OldManaRegenRate);
}

void UACFAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, Stamina, OldStamina);
}

void UACFAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, MaxStamina, OldMaxStamina);
}

void UACFAttributeSet::OnRep_StaminaRegenRate(const FGameplayAttributeData& OldStaminaRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UACFAttributeSet, StaminaRegenRate, OldStaminaRegenRate);
}
