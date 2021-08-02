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
class UGameplayAbility;
class UAnimMontage;
struct FGameplayTagContainer;
class UACFAbilityTask_PlayMontageAndWaitForEvent;
#ifdef ADVANCEDCOMBATSYSTEM_ACFAbilityTask_PlayMontageAndWaitForEvent_generated_h
#error "ACFAbilityTask_PlayMontageAndWaitForEvent.generated.h already included, missing '#pragma once' in ACFAbilityTask_PlayMontageAndWaitForEvent.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFAbilityTask_PlayMontageAndWaitForEvent_generated_h

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_13_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFPlayMontageAndWaitForEventDelegate_Parms \
{ \
	FGameplayTag EventTag; \
	FGameplayEventData EventData; \
}; \
static inline void FACFPlayMontageAndWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ACFPlayMontageAndWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData) \
{ \
	_Script_AdvancedCombatSystem_eventACFPlayMontageAndWaitForEventDelegate_Parms Parms; \
	Parms.EventTag=EventTag; \
	Parms.EventData=EventData; \
	ACFPlayMontageAndWaitForEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_SPARSE_DATA
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent); \
	DECLARE_FUNCTION(execUnbindAllDelegate);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent); \
	DECLARE_FUNCTION(execUnbindAllDelegate);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFAbilityTask_PlayMontageAndWaitForEvent(); \
	friend struct Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(UACFAbilityTask_PlayMontageAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAbilityTask_PlayMontageAndWaitForEvent)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUACFAbilityTask_PlayMontageAndWaitForEvent(); \
	friend struct Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(UACFAbilityTask_PlayMontageAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAbilityTask_PlayMontageAndWaitForEvent)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFAbilityTask_PlayMontageAndWaitForEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFAbilityTask_PlayMontageAndWaitForEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAbilityTask_PlayMontageAndWaitForEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAbilityTask_PlayMontageAndWaitForEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAbilityTask_PlayMontageAndWaitForEvent(UACFAbilityTask_PlayMontageAndWaitForEvent&&); \
	NO_API UACFAbilityTask_PlayMontageAndWaitForEvent(const UACFAbilityTask_PlayMontageAndWaitForEvent&); \
public:


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAbilityTask_PlayMontageAndWaitForEvent(UACFAbilityTask_PlayMontageAndWaitForEvent&&); \
	NO_API UACFAbilityTask_PlayMontageAndWaitForEvent(const UACFAbilityTask_PlayMontageAndWaitForEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAbilityTask_PlayMontageAndWaitForEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAbilityTask_PlayMontageAndWaitForEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFAbilityTask_PlayMontageAndWaitForEvent)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MontageToPlay() { return STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, MontageToPlay); } \
	FORCEINLINE static uint32 __PPO__EventTags() { return STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, EventTags); } \
	FORCEINLINE static uint32 __PPO__Rate() { return STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, Rate); } \
	FORCEINLINE static uint32 __PPO__StartSection() { return STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, StartSection); } \
	FORCEINLINE static uint32 __PPO__AnimRootMotionTranslationScale() { return STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, AnimRootMotionTranslationScale); } \
	FORCEINLINE static uint32 __PPO__bStopWhenAbilityEnds() { return STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, bStopWhenAbilityEnds); }


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_25_PROLOG
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_RPC_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_INCLASS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_INCLASS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFAbilityTask_PlayMontageAndWaitForEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_PlayMontageAndWaitForEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
