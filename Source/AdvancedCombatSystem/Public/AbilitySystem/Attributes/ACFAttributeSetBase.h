// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include <GameplayTagContainer.h>
#include "ACFAttributeSetBase.generated.h"

class AACFCharacterBase;

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Base AttributeSet Class to extend from.
 *
 * Doesn't hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:
 *
 * - AdjustAttributeForMaxChange()
 * - Clamp Values definition from Project Config
 * -
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	// Sets default values for this AttributeSet attributes
	UACFAttributeSetBase();

	// AttributeSet Overrides
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Helper function to get the minimum clamp value for a given attribute, from developer settings if available */
	virtual float GetClampMinimumValueFor(const FGameplayAttribute& Attribute);

	/**
	* Deprecated: Extract Source and Target Characters from the EffectSpec, Context and Target AbilityActorInfo.
	*
	* @param Data The PostGameplayEffectExecute callback data (@see FGameplayEffectModCallbackData)
	* @param SourceCharacter returned Source Character (AGSCCharacterBase), the instigator that started the whole chain
	* @param TargetCharacter returned Target Character (AGSCCharacterBase), the owning actor to which the EffectSpec Context is applied to
	*/
	virtual void GetCharactersFromContext(const FGameplayEffectModCallbackData& Data, AACFCharacterBase*& SourceCharacter, AACFCharacterBase*& TargetCharacter);

	/**
	* Returns the aggregated SourceTags for this EffectSpec
	*/
	virtual const FGameplayTagContainer& GetSourceTagsFromContext(const FGameplayEffectModCallbackData& Data);

	/**
	* Templated version of GetCharactersFromContext
	*/
	template<class TReturnType>
	void GetSourceAndTargetFromContext(const FGameplayEffectModCallbackData& Data, TReturnType*& SourceActor, TReturnType*& TargetActor)
	{
		const FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
		UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();

		// Get the Target actor, which should be our owner
		if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
		{
			TargetActor = Cast<TReturnType>(Data.Target.AbilityActorInfo->AvatarActor.Get());
		}

		// Get the Source actor, which should be the damage causer (instigator)
		if (Source && Source->AbilityActorInfo.IsValid() && Source->AbilityActorInfo->AvatarActor.IsValid())
		{
			// Set the source actor based on context if it's set
			if (Context.GetEffectCauser())
			{
				SourceActor = Cast<TReturnType>(Context.GetEffectCauser());
			}
			else
			{
				SourceActor = Cast<TReturnType>(Source->AbilityActorInfo->AvatarActor.Get());
			}
		}
	}

	/**
	* Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.
	*
	* (e.g. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before)
	*/
	virtual void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty) const;

protected:
	/** Cached map of minimum clamp values for each configured attributes*/
	UPROPERTY(meta = (HideInDetailsView))
	TMap<FGameplayAttribute, float> MinimumValues;
};
