// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FGameplayTag;
struct FGameplayEventData;
#ifdef ADVANCEDCOMBATSYSTEM_ACFGameplayAbility_MeleeBase_generated_h
#error "ACFGameplayAbility_MeleeBase.generated.h already included, missing '#pragma once' in ACFGameplayAbility_MeleeBase.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFGameplayAbility_MeleeBase_generated_h

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_SPARSE_DATA
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNextComboMontage); \
	DECLARE_FUNCTION(execOnEventReceived); \
	DECLARE_FUNCTION(execOnMontageCompleted); \
	DECLARE_FUNCTION(execOnMontageCancelled);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextComboMontage); \
	DECLARE_FUNCTION(execOnEventReceived); \
	DECLARE_FUNCTION(execOnMontageCompleted); \
	DECLARE_FUNCTION(execOnMontageCancelled);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFGameplayAbility_MeleeBase(); \
	friend struct Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics; \
public: \
	DECLARE_CLASS(UACFGameplayAbility_MeleeBase, UACFGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFGameplayAbility_MeleeBase)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUACFGameplayAbility_MeleeBase(); \
	friend struct Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics; \
public: \
	DECLARE_CLASS(UACFGameplayAbility_MeleeBase, UACFGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFGameplayAbility_MeleeBase)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFGameplayAbility_MeleeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFGameplayAbility_MeleeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFGameplayAbility_MeleeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFGameplayAbility_MeleeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFGameplayAbility_MeleeBase(UACFGameplayAbility_MeleeBase&&); \
	NO_API UACFGameplayAbility_MeleeBase(const UACFGameplayAbility_MeleeBase&); \
public:


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFGameplayAbility_MeleeBase(UACFGameplayAbility_MeleeBase&&); \
	NO_API UACFGameplayAbility_MeleeBase(const UACFGameplayAbility_MeleeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFGameplayAbility_MeleeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFGameplayAbility_MeleeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFGameplayAbility_MeleeBase)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilityComboManagerComponent() { return STRUCT_OFFSET(UACFGameplayAbility_MeleeBase, AbilityComboManagerComponent); } \
	FORCEINLINE static uint32 __PPO__Montages() { return STRUCT_OFFSET(UACFGameplayAbility_MeleeBase, Montages); } \
	FORCEINLINE static uint32 __PPO__Rate() { return STRUCT_OFFSET(UACFGameplayAbility_MeleeBase, Rate); } \
	FORCEINLINE static uint32 __PPO__WaitForEventTag() { return STRUCT_OFFSET(UACFGameplayAbility_MeleeBase, WaitForEventTag); }


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_15_PROLOG
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_RPC_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_INCLASS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_INCLASS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFGameplayAbility_MeleeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_MeleeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
