// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/ACFGameplayAbility.h"
#include "AbilitySystem/Components/ACFAbilitySystemComponent.h"
#include "AbilitySystem/ACFTargetType.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "Utils/ACFLog.h"
#include <AbilitySystemGlobals.h>

UACFGameplayAbility::UACFGameplayAbility()
{

}

FRPGGameplayEffectContainerSpec UACFGameplayAbility::MakeEffectContainerSpecFromContainer(const FRPGGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel /*= -1*/)
{
	// First figure out our actor info
	FRPGGameplayEffectContainerSpec ReturnSpec;
	AActor* OwningActor = GetOwningActorFromActorInfo();
	AACFCharacterBase* OwningCharacter = Cast<AACFCharacterBase>(OwningActor);
	UACFAbilitySystemComponent* OwningASC = UACFAbilitySystemComponent::GetAbilitySystemComponentFromActor(OwningActor);

	if (OwningASC)
	{
		// If we have a target type, run the targeting logic. This is optional, targets can be added later
		if (Container.TargetType.Get())
		{
			TArray<FHitResult> HitResults;
			TArray<AActor*> TargetActors;
			const UACFTargetType* TargetTypeCDO = Container.TargetType.GetDefaultObject();
			AActor* AvatarActor = GetAvatarActorFromActorInfo();
			TargetTypeCDO->GetTargets(OwningCharacter, AvatarActor, EventData, HitResults, TargetActors);
			ReturnSpec.AddTargets(HitResults, TargetActors);
		}

		// If we don't have an override level, use the default on the ability itself
		if (OverrideGameplayLevel == INDEX_NONE)
		{
			OverrideGameplayLevel = OverrideGameplayLevel = this->GetAbilityLevel(); //OwningASC->GetDefaultAbilityLevel();
		}

		// Build GameplayEffectSpecs for each applied effect
		for (const TSubclassOf<UGameplayEffect>& EffectClass : Container.TargetGameplayEffectClasses)
		{
			ReturnSpec.TargetGameplayEffectSpecs.Add(MakeOutgoingGameplayEffectSpec(EffectClass, OverrideGameplayLevel));
		}
	}

	return ReturnSpec;
}

FRPGGameplayEffectContainerSpec UACFGameplayAbility::MakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel /*= -1*/)
{
	FRPGGameplayEffectContainer* FoundContainer = EffectContainerMap.Find(ContainerTag);

	if (FoundContainer)
	{
		return MakeEffectContainerSpecFromContainer(*FoundContainer, EventData, OverrideGameplayLevel);
	}
	return FRPGGameplayEffectContainerSpec();
}

TArray<FActiveGameplayEffectHandle> UACFGameplayAbility::ApplyEffectContainerSpec(const FRPGGameplayEffectContainerSpec& ContainerSpec)
{
	TArray<FActiveGameplayEffectHandle> AllEffects;

	// Iterate list of effect specs and apply them to their target data
	for (const FGameplayEffectSpecHandle& SpecHandle : ContainerSpec.TargetGameplayEffectSpecs)
	{
		AllEffects.Append(K2_ApplyGameplayEffectSpecToTarget(SpecHandle, ContainerSpec.TargetData));
	}

	return AllEffects;
}

TArray<FActiveGameplayEffectHandle> UACFGameplayAbility::ApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel /*= -1*/)
{
	FRPGGameplayEffectContainerSpec Spec = MakeEffectContainerSpec(ContainerTag, EventData, OverrideGameplayLevel);
	return ApplyEffectContainerSpec(Spec);
}

bool UACFGameplayAbility::CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags /*= nullptr*/) const
{
	if (bIgnoreAbilityCost)
	{
		return true;
	}

	return Super::CheckCost(Handle, ActorInfo, nullptr);
}

bool UACFGameplayAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags /*= nullptr*/, const FGameplayTagContainer* TargetTags /*= nullptr*/, OUT FGameplayTagContainer* OptionalRelevantTags /*= nullptr*/) const
{
	const bool bCanActivateAbility = Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
	if (!bCanActivateAbility)
	{
		return false;
	}

	if (!bHasBlueprintCanUse && bIgnoreAbilityCost)
	{
		return CheckForPositiveCost(Handle, ActorInfo, OptionalRelevantTags);
	}

	return true;
}

void UACFGameplayAbility::AbilityEnded(UGameplayAbility* Ability)
{
	ACF_VLOG(this, Log, TEXT("UACFGameplayAbility::AbilityEnded()"))
	AActor* ActorAvatar = GetAvatarActorFromActorInfo();
	if (ActorAvatar)
	{
		ACF_LOG(Warning, TEXT("UACFGameplayAbility::AbilityEnded() could not GetAvatarFromActorInfo()"))
		return;
	}

	AACFCharacterBase* Character = Cast<AACFCharacterBase>(ActorAvatar);
	if (!Character)
	{
		ACF_LOG(Warning, TEXT("UACFGameplayAbility::AbilityEnded() could not cast to ACFCharacterBase"))
		return;
	}

	ACF_VLOG(this, Log, TEXT("UGSCGameplayAbility::AbilityEnded OnAbilityEnded.Broadcast() && OnAbilityEnded.Clear()"))
	// Trigger OnEndDelegate no in case Blueprints need it
	OnAbilityEnded.Broadcast();
	OnAbilityEnded.Clear();
}

bool UACFGameplayAbility::CheckForPositiveCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	UGameplayEffect* CostGE = GetCostGameplayEffect();
	if (!CostGE)
	{
		return true;
	}

	if (!CanApplyPositiveAttributeModifiers(CostGE, ActorInfo, GetAbilityLevel(Handle, ActorInfo), MakeEffectContext(Handle, ActorInfo)))
	{
		const FGameplayTag& CostTag = UAbilitySystemGlobals::Get().ActivateFailCostTag;
		if (OptionalRelevantTags && CostTag.IsValid())
		{
			OptionalRelevantTags->AddTag(CostTag);
		}

		return false;
	}

	return true;
}

bool UACFGameplayAbility::CanApplyPositiveAttributeModifiers(const UGameplayEffect* GameplayEffect, const FGameplayAbilityActorInfo* ActorInfo, float Level, const FGameplayEffectContextHandle& EffectContext) const
{
	FGameplayEffectSpec	Spec(GameplayEffect, EffectContext, Level);

	Spec.CalculateModifierMagnitudes();

	UACFAbilitySystemComponent* Owner = Cast<UACFAbilitySystemComponent>(ActorInfo->AbilitySystemComponent.Get());
	if (!Owner)
	{
		return false;
	}

	for (int32 ModIdx = 0; ModIdx < Spec.Modifiers.Num(); ++ModIdx)
	{
		const FGameplayModifierInfo& ModDef = Spec.Def->Modifiers[ModIdx];

		// It only makes sense to check additive operators
		if (ModDef.ModifierOp == EGameplayModOp::Additive)
		{
			if (!ModDef.Attribute.IsValid())
			{
				continue;
			}

			if (!Owner->HasAttributeSetForAttribute(ModDef.Attribute))
			{
				continue;
			}

			const UAttributeSet* Set = Owner->GetAttributeSubobject(ModDef.Attribute.GetAttributeSetClass());
			const float CurrentValue = ModDef.Attribute.GetNumericValueChecked(Set);

			if (CurrentValue <= 0.f)
			{
				return false;
			}
		}
	}

	return true;
}
