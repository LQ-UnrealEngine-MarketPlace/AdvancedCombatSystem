// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayAttribute;
class UAttributeSet;
struct FGameplayTagContainer;
class UACFAbilityQueueComponent;
class UACFCoreComponent;
class UACFAbilityComboManagerComponent;
class UACFAbilitySystemComponent;
#ifdef ADVANCEDCOMBATSYSTEM_ACFFunctionLibrary_generated_h
#error "ACFFunctionLibrary.generated.h already included, missing '#pragma once' in ACFFunctionLibrary.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFFunctionLibrary_generated_h

#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_SPARSE_DATA
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllGameplayCues); \
	DECLARE_FUNCTION(execRemoveGameplayCue); \
	DECLARE_FUNCTION(execAddGameplayCueWithParams); \
	DECLARE_FUNCTION(execAddGameplayCue); \
	DECLARE_FUNCTION(execExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execExecuteGameplayCueForActor); \
	DECLARE_FUNCTION(execNotEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execGetAllAttributes); \
	DECLARE_FUNCTION(execGetDebugStringFromAttribute); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTagsFromActor); \
	DECLARE_FUNCTION(execAddLooseGameplayTagsToActor); \
	DECLARE_FUNCTION(execGetAbilityQueueComponentFromActor); \
	DECLARE_FUNCTION(execGetCoreComponentFromActor); \
	DECLARE_FUNCTION(execGetComboManagerComponentFromActor); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromActor);


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllGameplayCues); \
	DECLARE_FUNCTION(execRemoveGameplayCue); \
	DECLARE_FUNCTION(execAddGameplayCueWithParams); \
	DECLARE_FUNCTION(execAddGameplayCue); \
	DECLARE_FUNCTION(execExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execExecuteGameplayCueForActor); \
	DECLARE_FUNCTION(execNotEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execGetAllAttributes); \
	DECLARE_FUNCTION(execGetDebugStringFromAttribute); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTagsFromActor); \
	DECLARE_FUNCTION(execAddLooseGameplayTagsToActor); \
	DECLARE_FUNCTION(execGetAbilityQueueComponentFromActor); \
	DECLARE_FUNCTION(execGetCoreComponentFromActor); \
	DECLARE_FUNCTION(execGetComboManagerComponentFromActor); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromActor);


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFFunctionLibrary(); \
	friend struct Z_Construct_UClass_UACFFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UACFFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFFunctionLibrary)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUACFFunctionLibrary(); \
	friend struct Z_Construct_UClass_UACFFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UACFFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFFunctionLibrary)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFFunctionLibrary(UACFFunctionLibrary&&); \
	NO_API UACFFunctionLibrary(const UACFFunctionLibrary&); \
public:


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFFunctionLibrary(UACFFunctionLibrary&&); \
	NO_API UACFFunctionLibrary(const UACFFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFFunctionLibrary)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_13_PROLOG
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_RPC_WRAPPERS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_INCLASS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Libraries_ACFFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
