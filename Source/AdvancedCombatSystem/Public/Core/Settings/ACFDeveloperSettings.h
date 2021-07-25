// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include <AttributeSet.h>
#include "ACFDeveloperSettings.generated.h"

class UACFAttributeSetBase;

/**
* Attribute Set Settings
*/
USTRUCT(BlueprintType)
struct ADVANCEDCOMBATSYSTEM_API FACFAttributeSetMinimumValues
{
	GENERATED_BODY()

	/** The Attribute we want to configure clamp values for. */
	UPROPERTY(EditDefaultsOnly, Category = GameplayModifier, meta = (FilterMetaTag = "HideFromModifiers"))
	FGameplayAttribute Attribute;

	/** Minimum value for this attribute when a Clamp is done in PostGameplayEffectExecute of Attribute Sets */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Attribute Set")
	float MinimumValue = 0.f;
};

UCLASS(Config = "Game", defaultconfig, meta = (DisplayName = "ACF Attribute Sets"))
class ADVANCEDCOMBATSYSTEM_API UACFDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UACFDeveloperSettings(const FObjectInitializer& ObjectInitializer);

	/**
	 * List of AttributeSet to create and attach to PlayerStates (for PlayerCharacter or Pawns with a PlayerState
	 * where the Ability System Component is registered - GSCPlayerCharacter)
	 *
	 * This is useful to configure here any custom AttributeSets you created and want to have available for your Player Characters.
	 *
	 * Default AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below.
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set")
	TArray<TSubclassOf<UACFAttributeSetBase>> PlayerStateAttributeSets;

	/**
	* List of AttributeSet to create and attach to AI Characters (GSCAICharacter)
	*
	* This is useful to configure here any custom AttributeSets you created and want to have available for your AI/NPC Characters
	* (or Pawns where the Ability System Component is registred directly on Pawn)
	*
	* Default AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below.
	*/
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set")
	TArray<TSubclassOf<UACFAttributeSetBase>> AICharactersAttributeSets;

	/**
	* List of AttributeSet to create and attach to Pawns (GSCDefaultPawn)
	*
	* This is useful to configure here any custom AttributeSets you created and want to have available for your non character-based avatars
	* (creatures, props, etc.)
	*
	* Default AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below.
	*/
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set")
	TArray<TSubclassOf<UACFAttributeSetBase>> PawnsAttributeSets;

	/**
	* List of AttributeSet to create and attach to Actors (GSCActor)
	*
	* This is useful to configure here any custom AttributeSets you created and want to have available for your non character-based avatars
	* (creatures, props, etc.)
	*
	* Default AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below.
	*/
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set")
	TArray<TSubclassOf<UACFAttributeSetBase>> ActorsAttributeSets;

	/**
	 * Configuration of minimum values for Attributes for FMath::Clamp(), if not specified minimum value defaults to 0.
	 *
	 * This is useful to specify when using abilities with bIgnoreAbilityCost set to true, which allow activation of abilities
	 * even if the applied cost would go into negative values, and only prevented if the attribute is 0 or below.
	 *
	 * (ex. If you have a regeneration effect on an attribute, it would then take longer for the attribute to go positive again)
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set")
	TArray<FACFAttributeSetMinimumValues> MinimumValues;

	/**
	 * Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) in PlayerStates (GSCPlayerCharacter).
	 *
	 * You probably want to keep it true, unless you handle those attributes yourself (in HUD, Abilities, Effects, ...)
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set", AdvancedDisplay, meta = (DisplayName = "Create Default AttributeSet for Player State"))
	bool bWantsDefaultAttributePlayerState = true;

	/**
	* Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for AI Characters (GSCAICharacter).
	*
	* You probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)
	*/
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set", AdvancedDisplay, meta = (DisplayName = "Create Default AttributeSet for AI Characters"))
	bool bWantsDefaultAttributeAICharacters = true;

	/**
	* Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for Pawns (GSCDefaultPawn).
	*
	* You probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)
	*/
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set", AdvancedDisplay, meta = (DisplayName = "Create Default AttributeSet for Pawns"))
	bool bWantsDefaultAttributePawns = true;

	/**
	* Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for Actors (GSCActor).
	*
	* You probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)
	*/
	UPROPERTY(Config, EditAnywhere, Category = "Attribute Set", AdvancedDisplay, meta = (DisplayName = "Create Default AttributeSet for Pawns"))
	bool bWantsDefaultAttributeActors = true;
};
