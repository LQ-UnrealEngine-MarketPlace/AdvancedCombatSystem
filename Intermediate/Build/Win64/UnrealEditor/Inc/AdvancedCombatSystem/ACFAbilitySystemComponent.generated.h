// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
class UGameplayAbility;
class UACFGameplayAbility;
struct FGameplayTagContainer;
#ifdef ADVANCEDCOMBATSYSTEM_ACFAbilitySystemComponent_generated_h
#error "ACFAbilitySystemComponent.generated.h already included, missing '#pragma once' in ACFAbilitySystemComponent.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFAbilitySystemComponent_generated_h

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_SPARSE_DATA
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_RemoveAllGameplayCues); \
	DECLARE_FUNCTION(execK2_RemoveGameplayCue); \
	DECLARE_FUNCTION(execK2_AddGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_AddGameplayCue); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCue); \
	DECLARE_FUNCTION(execActivateAbilityWithClass); \
	DECLARE_FUNCTION(execActivateAbilityWithTags); \
	DECLARE_FUNCTION(execK2_GetActiveAbilitiesWithClass); \
	DECLARE_FUNCTION(execK2_GetActiveAbilitiesWithTags);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_RemoveAllGameplayCues); \
	DECLARE_FUNCTION(execK2_RemoveGameplayCue); \
	DECLARE_FUNCTION(execK2_AddGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_AddGameplayCue); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCue); \
	DECLARE_FUNCTION(execActivateAbilityWithClass); \
	DECLARE_FUNCTION(execActivateAbilityWithTags); \
	DECLARE_FUNCTION(execK2_GetActiveAbilitiesWithClass); \
	DECLARE_FUNCTION(execK2_GetActiveAbilitiesWithTags);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UACFAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UACFAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAbilitySystemComponent)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUACFAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UACFAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UACFAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAbilitySystemComponent)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAbilitySystemComponent(UACFAbilitySystemComponent&&); \
	NO_API UACFAbilitySystemComponent(const UACFAbilitySystemComponent&); \
public:


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAbilitySystemComponent(UACFAbilitySystemComponent&&); \
	NO_API UACFAbilitySystemComponent(const UACFAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFAbilitySystemComponent)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_14_PROLOG
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_RPC_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_INCLASS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_INCLASS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
