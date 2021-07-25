// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Settings/ACFDeveloperSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFDeveloperSettings() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFDeveloperSettings_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFDeveloperSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAttributeSetBase_NoRegister();
// End Cross Module References
class UScriptStruct* FACFAttributeSetMinimumValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDCOMBATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues, Z_Construct_UPackage__Script_AdvancedCombatSystem(), TEXT("ACFAttributeSetMinimumValues"), sizeof(FACFAttributeSetMinimumValues), Get_Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Hash());
	}
	return Singleton;
}
template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<FACFAttributeSetMinimumValues>()
{
	return FACFAttributeSetMinimumValues::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FACFAttributeSetMinimumValues(FACFAttributeSetMinimumValues::StaticStruct, TEXT("/Script/AdvancedCombatSystem"), TEXT("ACFAttributeSetMinimumValues"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFAttributeSetMinimumValues
{
	FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFAttributeSetMinimumValues()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ACFAttributeSetMinimumValues")),new UScriptStruct::TCppStructOps<FACFAttributeSetMinimumValues>);
	}
} ScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFAttributeSetMinimumValues;
	struct Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Attribute Set Settings\n*/" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "Attribute Set Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFAttributeSetMinimumValues>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** The Attribute we want to configure clamp values for. */" },
		{ "FilterMetaTag", "HideFromModifiers" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "The Attribute we want to configure clamp values for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFAttributeSetMinimumValues, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/** Minimum value for this attribute when a Clamp is done in PostGameplayEffectExecute of Attribute Sets */" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "Minimum value for this attribute when a Clamp is done in PostGameplayEffectExecute of Attribute Sets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFAttributeSetMinimumValues, MinimumValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_MinimumValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::NewProp_MinimumValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
		nullptr,
		&NewStructOps,
		"ACFAttributeSetMinimumValues",
		sizeof(FACFAttributeSetMinimumValues),
		alignof(FACFAttributeSetMinimumValues),
		Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedCombatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ACFAttributeSetMinimumValues"), sizeof(FACFAttributeSetMinimumValues), Get_Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues_Hash() { return 3091203290U; }
	void UACFDeveloperSettings::StaticRegisterNativesUACFDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_UACFDeveloperSettings_NoRegister()
	{
		return UACFDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UACFDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerStateAttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStateAttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerStateAttributeSets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AICharactersAttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AICharactersAttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AICharactersAttributeSets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PawnsAttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnsAttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PawnsAttributeSets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorsAttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsAttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsAttributeSets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MinimumValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsDefaultAttributePlayerState_MetaData[];
#endif
		static void NewProp_bWantsDefaultAttributePlayerState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsDefaultAttributePlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsDefaultAttributeAICharacters_MetaData[];
#endif
		static void NewProp_bWantsDefaultAttributeAICharacters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsDefaultAttributeAICharacters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsDefaultAttributePawns_MetaData[];
#endif
		static void NewProp_bWantsDefaultAttributePawns_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsDefaultAttributePawns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsDefaultAttributeActors_MetaData[];
#endif
		static void NewProp_bWantsDefaultAttributeActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsDefaultAttributeActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ACF Attribute Sets" },
		{ "IncludePath", "Core/Settings/ACFDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PlayerStateAttributeSets_Inner = { "PlayerStateAttributeSets", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UACFAttributeSetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PlayerStateAttributeSets_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09 * List of AttributeSet to create and attach to PlayerStates (for PlayerCharacter or Pawns with a PlayerState\n\x09 * where the Ability System Component is registered - GSCPlayerCharacter)\n\x09 *\n\x09 * This is useful to configure here any custom AttributeSets you created and want to have available for your Player Characters.\n\x09 *\n\x09 * Default AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "List of AttributeSet to create and attach to PlayerStates (for PlayerCharacter or Pawns with a PlayerState\nwhere the Ability System Component is registered - GSCPlayerCharacter)\n\nThis is useful to configure here any custom AttributeSets you created and want to have available for your Player Characters.\n\nDefault AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PlayerStateAttributeSets = { "PlayerStateAttributeSets", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFDeveloperSettings, PlayerStateAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PlayerStateAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PlayerStateAttributeSets_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_AICharactersAttributeSets_Inner = { "AICharactersAttributeSets", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UACFAttributeSetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_AICharactersAttributeSets_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09* List of AttributeSet to create and attach to AI Characters (GSCAICharacter)\n\x09*\n\x09* This is useful to configure here any custom AttributeSets you created and want to have available for your AI/NPC Characters\n\x09* (or Pawns where the Ability System Component is registred directly on Pawn)\n\x09*\n\x09* Default AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "List of AttributeSet to create and attach to AI Characters (GSCAICharacter)\n\nThis is useful to configure here any custom AttributeSets you created and want to have available for your AI/NPC Characters\n(or Pawns where the Ability System Component is registred directly on Pawn)\n\nDefault AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_AICharactersAttributeSets = { "AICharactersAttributeSets", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFDeveloperSettings, AICharactersAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_AICharactersAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_AICharactersAttributeSets_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PawnsAttributeSets_Inner = { "PawnsAttributeSets", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UACFAttributeSetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PawnsAttributeSets_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09* List of AttributeSet to create and attach to Pawns (GSCDefaultPawn)\n\x09*\n\x09* This is useful to configure here any custom AttributeSets you created and want to have available for your non character-based avatars\n\x09* (creatures, props, etc.)\n\x09*\n\x09* Default AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "List of AttributeSet to create and attach to Pawns (GSCDefaultPawn)\n\nThis is useful to configure here any custom AttributeSets you created and want to have available for your non character-based avatars\n(creatures, props, etc.)\n\nDefault AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PawnsAttributeSets = { "PawnsAttributeSets", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFDeveloperSettings, PawnsAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PawnsAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PawnsAttributeSets_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_ActorsAttributeSets_Inner = { "ActorsAttributeSets", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UACFAttributeSetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_ActorsAttributeSets_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09* List of AttributeSet to create and attach to Actors (GSCActor)\n\x09*\n\x09* This is useful to configure here any custom AttributeSets you created and want to have available for your non character-based avatars\n\x09* (creatures, props, etc.)\n\x09*\n\x09* Default AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "List of AttributeSet to create and attach to Actors (GSCActor)\n\nThis is useful to configure here any custom AttributeSets you created and want to have available for your non character-based avatars\n(creatures, props, etc.)\n\nDefault AttributeSet (UGSCAttribute Set with Health, Stamina, etc.) is added by default unless prevented by advanced config below." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_ActorsAttributeSets = { "ActorsAttributeSets", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFDeveloperSettings, ActorsAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_ActorsAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_ActorsAttributeSets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_MinimumValues_Inner = { "MinimumValues", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FACFAttributeSetMinimumValues, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_MinimumValues_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09 * Configuration of minimum values for Attributes for FMath::Clamp(), if not specified minimum value defaults to 0.\n\x09 *\n\x09 * This is useful to specify when using abilities with bIgnoreAbilityCost set to true, which allow activation of abilities\n\x09 * even if the applied cost would go into negative values, and only prevented if the attribute is 0 or below.\n\x09 *\n\x09 * (ex. If you have a regeneration effect on an attribute, it would then take longer for the attribute to go positive again)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "Configuration of minimum values for Attributes for FMath::Clamp(), if not specified minimum value defaults to 0.\n\nThis is useful to specify when using abilities with bIgnoreAbilityCost set to true, which allow activation of abilities\neven if the applied cost would go into negative values, and only prevented if the attribute is 0 or below.\n\n(ex. If you have a regeneration effect on an attribute, it would then take longer for the attribute to go positive again)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_MinimumValues = { "MinimumValues", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFDeveloperSettings, MinimumValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_MinimumValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_MinimumValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePlayerState_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09 * Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) in PlayerStates (GSCPlayerCharacter).\n\x09 *\n\x09 * You probably want to keep it true, unless you handle those attributes yourself (in HUD, Abilities, Effects, ...)\n\x09 */" },
		{ "DisplayName", "Create Default AttributeSet for Player State" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) in PlayerStates (GSCPlayerCharacter).\n\nYou probably want to keep it true, unless you handle those attributes yourself (in HUD, Abilities, Effects, ...)" },
	};
#endif
	void Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePlayerState_SetBit(void* Obj)
	{
		((UACFDeveloperSettings*)Obj)->bWantsDefaultAttributePlayerState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePlayerState = { "bWantsDefaultAttributePlayerState", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFDeveloperSettings), &Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePlayerState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePlayerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeAICharacters_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09* Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for AI Characters (GSCAICharacter).\n\x09*\n\x09* You probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)\n\x09*/" },
		{ "DisplayName", "Create Default AttributeSet for AI Characters" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for AI Characters (GSCAICharacter).\n\nYou probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)" },
	};
#endif
	void Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeAICharacters_SetBit(void* Obj)
	{
		((UACFDeveloperSettings*)Obj)->bWantsDefaultAttributeAICharacters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeAICharacters = { "bWantsDefaultAttributeAICharacters", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFDeveloperSettings), &Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeAICharacters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeAICharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeAICharacters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePawns_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09* Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for Pawns (GSCDefaultPawn).\n\x09*\n\x09* You probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)\n\x09*/" },
		{ "DisplayName", "Create Default AttributeSet for Pawns" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for Pawns (GSCDefaultPawn).\n\nYou probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)" },
	};
#endif
	void Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePawns_SetBit(void* Obj)
	{
		((UACFDeveloperSettings*)Obj)->bWantsDefaultAttributePawns = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePawns = { "bWantsDefaultAttributePawns", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFDeveloperSettings), &Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePawns_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePawns_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeActors_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/**\n\x09* Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for Actors (GSCActor).\n\x09*\n\x09* You probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)\n\x09*/" },
		{ "DisplayName", "Create Default AttributeSet for Pawns" },
		{ "ModuleRelativePath", "Public/Core/Settings/ACFDeveloperSettings.h" },
		{ "ToolTip", "Control whether or not to create and attach default GAS Companion AttributeSet (UGSCAttributeSet) for Actors (GSCActor).\n\nYou probably want to keep it true, unless you handle those attributes yourself (UI, Abilities, Effects, ...)" },
	};
#endif
	void Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeActors_SetBit(void* Obj)
	{
		((UACFDeveloperSettings*)Obj)->bWantsDefaultAttributeActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeActors = { "bWantsDefaultAttributeActors", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFDeveloperSettings), &Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PlayerStateAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PlayerStateAttributeSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_AICharactersAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_AICharactersAttributeSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PawnsAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_PawnsAttributeSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_ActorsAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_ActorsAttributeSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_MinimumValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_MinimumValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeAICharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributePawns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFDeveloperSettings_Statics::NewProp_bWantsDefaultAttributeActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFDeveloperSettings_Statics::ClassParams = {
		&UACFDeveloperSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UACFDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFDeveloperSettings, 1056491064);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFDeveloperSettings>()
	{
		return UACFDeveloperSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFDeveloperSettings(Z_Construct_UClass_UACFDeveloperSettings, &UACFDeveloperSettings::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
