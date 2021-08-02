// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDCOMBATSYSTEM_ACFAbilityTypes_generated_h
#error "ACFAbilityTypes.generated.h already included, missing '#pragma once' in ACFAbilityTypes.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFAbilityTypes_generated_h

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFAbilityTypes_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics; \
	ADVANCEDCOMBATSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<struct FACFGameplayEffectExecuteData>();

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFAbilityTypes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics; \
	ADVANCEDCOMBATSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<struct FACFGameplayEffectUIData>();

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFAbilityTypes_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics; \
	ADVANCEDCOMBATSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<struct FRPGGameplayEffectContainerSpec>();

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFAbilityTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics; \
	ADVANCEDCOMBATSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<struct FRPGGameplayEffectContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFAbilityTypes_h


#define FOREACH_ENUM_EACFABILITYINPUTID(op) \
	op(EACFAbilityInputID::None) \
	op(EACFAbilityInputID::Confirm) \
	op(EACFAbilityInputID::Cancel) \
	op(EACFAbilityInputID::Ability1) 

enum class EACFAbilityInputID : uint8;
template<> ADVANCEDCOMBATSYSTEM_API UEnum* StaticEnum<EACFAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
