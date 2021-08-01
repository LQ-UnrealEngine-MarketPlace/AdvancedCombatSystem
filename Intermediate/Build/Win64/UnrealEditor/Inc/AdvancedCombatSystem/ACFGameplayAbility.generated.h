// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayEventData;
struct FActiveGameplayEffectHandle;
struct FRPGGameplayEffectContainerSpec;
struct FRPGGameplayEffectContainer;
#ifdef ADVANCEDCOMBATSYSTEM_ACFGameplayAbility_generated_h
#error "ACFGameplayAbility.generated.h already included, missing '#pragma once' in ACFGameplayAbility.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFGameplayAbility_generated_h

#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_10_DELEGATE \
static inline void FOnAbilityEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityEnded) \
{ \
	OnAbilityEnded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_SPARSE_DATA
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyEffectContainer); \
	DECLARE_FUNCTION(execApplyEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpecFromContainer);


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyEffectContainer); \
	DECLARE_FUNCTION(execApplyEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpecFromContainer);


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFGameplayAbility(); \
	friend struct Z_Construct_UClass_UACFGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UACFGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFGameplayAbility)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUACFGameplayAbility(); \
	friend struct Z_Construct_UClass_UACFGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UACFGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFGameplayAbility)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFGameplayAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFGameplayAbility(UACFGameplayAbility&&); \
	NO_API UACFGameplayAbility(const UACFGameplayAbility&); \
public:


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFGameplayAbility(UACFGameplayAbility&&); \
	NO_API UACFGameplayAbility(const UACFGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFGameplayAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFGameplayAbility)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_PRIVATE_PROPERTY_OFFSET
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_17_PROLOG
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_RPC_WRAPPERS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_INCLASS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_INCLASS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Abilities_ACFGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
