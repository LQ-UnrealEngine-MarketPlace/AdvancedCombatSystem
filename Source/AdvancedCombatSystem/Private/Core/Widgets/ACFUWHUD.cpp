// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Widgets/ACFUWHUD.h"
#include "Blueprint/UserWidget.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "Core/Widgets/Debugs/ACFUWDebugAbilityQueue.h"
#include "Core/Widgets/Debugs/ACFUWDebugAbilityCombo.h"
#include "AbilitySystem/Attributes/ACFAttributeSet.h"
#include "Utils/ACFLog.h"
#include <GameFramework/PlayerController.h>
#include <Components/TextBlock.h>
#include <Components/ProgressBar.h>

FString UACFUWHUD::GetAttributeFormatString(float BaseValue, float MaxValue)
{
	return FString::Printf(TEXT("%d / %d"), FMath::FloorToInt(BaseValue), FMath::FloorToInt(MaxValue));
}

FACFGameplayEffectUIData UACFUWHUD::GetGameplayEffectUIData(FActiveGameplayEffectHandle ActiveHandle)
{
	return FACFGameplayEffectUIData(
		UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(ActiveHandle),
		UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(ActiveHandle),
		UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(ActiveHandle),
		UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(ActiveHandle),
		UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(ActiveHandle)
	);
}

void UACFUWHUD::InitFromCharacter()
{
	if (!OwnerCoreComponent)
	{
		ACF_LOG(Warning, TEXT("UACFUWHUD::InitFromCharacter() OwnerCoreComponent is invalid"))
		return;
	}

	SetHealth(OwnerCoreComponent->GetHealth());
	SetStamina(OwnerCoreComponent->GetStamina());
	SetMana(OwnerCoreComponent->GetMana());
}

void UACFUWHUD::SetMaxHealth(float MaxHealth)
{
	if (!OwnerCoreComponent)
	{
		ACF_LOG(Warning, TEXT("UACFUWHUD::SetMaxHealth() OwnerCoreComponent is invalid"))
		return;
	}

	if (HealthText)
	{
		HealthText->SetText(FText::FromString(GetAttributeFormatString(OwnerCoreComponent->GetHealth(), MaxHealth)));
	}
	
	if (MaxHealth != 0)
	{
		SetHealthPercentage(OwnerCoreComponent->GetHealth() / MaxHealth);
	}
}

void UACFUWHUD::SetHealth(float Health)
{
	if (!OwnerCoreComponent)
	{
		ACF_LOG(Warning, TEXT("UACFUWHUD::SetHealth() OwnerCoreComponent is invalid"))
		return;
	}

	if (HealthText)
	{
		HealthText->SetText(FText::FromString(GetAttributeFormatString(Health, OwnerCoreComponent->GetMaxHealth())));
	}

	if (OwnerCoreComponent->GetMaxHealth() != 0)
	{
		SetHealthPercentage(Health / OwnerCoreComponent->GetMaxHealth());
	}
}

void UACFUWHUD::SetHealthPercentage(float HealthPercentage)
{
	if (HealthProgressBar)
	{
		HealthProgressBar->SetPercent(HealthPercentage);
	}
}

void UACFUWHUD::SetMaxStamina(float MaxStamina)
{
	if (!OwnerCoreComponent)
	{
		return;
	}

	if (StaminaText)
	{
		ACF_LOG(Warning, TEXT("UACFUWHUD::SetMaxStamina() OwnerCoreComponent is invalid"))
		StaminaText->SetText(FText::FromString(GetAttributeFormatString(OwnerCoreComponent->GetStamina(), MaxStamina)));
	}

	if (MaxStamina != 0)
	{
		SetStaminaPercentage(OwnerCoreComponent->GetStamina() / MaxStamina);
	}
}

void UACFUWHUD::SetStamina(float Stamina)
{
	if (!OwnerCoreComponent)
	{
		ACF_LOG(Warning, TEXT("UACFUWHUD::SetStamina() OwnerCoreComponent is invalid"))
		return;
	}

	if (StaminaText)
	{
		StaminaText->SetText(FText::FromString(GetAttributeFormatString(Stamina, OwnerCoreComponent->GetMaxStamina())));
	}

	if (OwnerCoreComponent->GetMaxStamina() != 0)
	{
		SetStaminaPercentage(Stamina / OwnerCoreComponent->GetMaxStamina());
	}
}

void UACFUWHUD::SetStaminaPercentage(float StaminaPercentage)
{
	if (StaminaProgressBar)
	{
		StaminaProgressBar->SetPercent(StaminaPercentage);
	}
}

void UACFUWHUD::SetMaxMana(float MaxMana)
{
	if (!OwnerCoreComponent)
	{
		ACF_LOG(Warning, TEXT("UACFUWHUD::SetMaxMana() OwnerCoreComponent is invalid"))
		return;
	}

	if (ManaText)
	{
		ManaText->SetText(FText::FromString(GetAttributeFormatString(OwnerCoreComponent->GetMana(), MaxMana)));
	}

	if (MaxMana != 0)
	{
		SetManaPercentage(OwnerCoreComponent->GetMana() / MaxMana);
	}
}

void UACFUWHUD::SetMana(float Mana)
{
	if (!OwnerCoreComponent)
	{
		ACF_LOG(Warning, TEXT("UACFUWHUD::SetMana() OwnerCoreComponent is invalid"))
		return;
	}

	if (ManaText)
	{
		ManaText->SetText(FText::FromString(GetAttributeFormatString(Mana, OwnerCoreComponent->GetMaxMana())));
	}

	if (OwnerCoreComponent->GetMaxMana() != 0)
	{
		SetManaPercentage(Mana / OwnerCoreComponent->GetMaxMana());
	}
}

void UACFUWHUD::SetManaPercentage(float ManaPercentage)
{
	if (ManaProgressBar)
	{
		ManaProgressBar->SetPercent(ManaPercentage);
	}
}

void UACFUWHUD::HandleAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue)
{
	OnAttributeChange(Attribute, NewValue, OldValue);

	if (Attribute == UACFAttributeSet::GetHealthAttribute())
	{
		SetHealth(NewValue);
	}
	else if (Attribute == UACFAttributeSet::GetStaminaAttribute())
	{
		SetStamina(NewValue);
	}
	else if (Attribute == UACFAttributeSet::GetManaAttribute())
	{
		SetMana(NewValue);
	}
	else if (Attribute == UACFAttributeSet::GetMaxHealthAttribute())
	{
		SetMaxHealth(NewValue);
	}
	else if (Attribute == UACFAttributeSet::GetMaxStaminaAttribute())
	{
		SetMaxStamina(NewValue);
	}
	else if (Attribute == UACFAttributeSet::GetMaxManaAttribute())
	{
		SetMaxMana(NewValue);
	}
}

void UACFUWHUD::HandleGameplayEffectStackChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount)
{
	OnGameplayEffectStackChange(AssetTags, GrantedTags, ActiveHandle, NewStackCount, OldStackCount);
}

void UACFUWHUD::HandleGameplayEffectTimeChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration)
{
	OnGameplayEffectTimeChange(AssetTags, GrantedTags, ActiveHandle, NewStartTime, NewDuration);
}

void UACFUWHUD::HandleGameplayEffectAdded(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle)
{
	OnGameplayEffectAdded(AssetTags, GrantedTags, ActiveHandle, GetGameplayEffectUIData(ActiveHandle));
}

void UACFUWHUD::HandleGameplayEffectRemoved(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle)
{
	OnGameplayEffectRemoved(AssetTags, GrantedTags, ActiveHandle, GetGameplayEffectUIData(ActiveHandle));
}

void UACFUWHUD::HandleGameplayTagChange(FGameplayTag GameplayTag, int32 NewTagCount)
{
	OnGameplayTagChange(GameplayTag, NewTagCount);
}

void UACFUWHUD::HandleCooldownStart(UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration)
{
	OnCooldownStart(Ability, CooldownTags, TimeRemaining, Duration);
}

void UACFUWHUD::HandleCooldownEnd(UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration)
{
	OnCooldownEnd(Ability, CooldownTag, Duration);
}
