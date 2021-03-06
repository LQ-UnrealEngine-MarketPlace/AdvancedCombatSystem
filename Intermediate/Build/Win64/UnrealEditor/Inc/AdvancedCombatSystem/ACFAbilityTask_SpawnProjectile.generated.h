// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayAbility;
class AACFProjectileBase;
struct FTransform;
enum class ESpawnActorCollisionHandlingMethod : uint8;
class UACFAbilityTask_SpawnProjectile;
#ifdef ADVANCEDCOMBATSYSTEM_ACFAbilityTask_SpawnProjectile_generated_h
#error "ACFAbilityTask_SpawnProjectile.generated.h already included, missing '#pragma once' in ACFAbilityTask_SpawnProjectile.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFAbilityTask_SpawnProjectile_generated_h

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_12_DELEGATE \
struct _Script_AdvancedCombatSystem_eventSpawnActorDelegate_Parms \
{ \
	AActor* SpawnedActor; \
}; \
static inline void FSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnActorDelegate, AActor* SpawnedActor) \
{ \
	_Script_AdvancedCombatSystem_eventSpawnActorDelegate_Parms Parms; \
	Parms.SpawnedActor=SpawnedActor; \
	SpawnActorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_SPARSE_DATA
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execSpawnProjectile);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execSpawnProjectile);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFAbilityTask_SpawnProjectile(); \
	friend struct Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics; \
public: \
	DECLARE_CLASS(UACFAbilityTask_SpawnProjectile, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAbilityTask_SpawnProjectile)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUACFAbilityTask_SpawnProjectile(); \
	friend struct Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics; \
public: \
	DECLARE_CLASS(UACFAbilityTask_SpawnProjectile, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAbilityTask_SpawnProjectile)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFAbilityTask_SpawnProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFAbilityTask_SpawnProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAbilityTask_SpawnProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAbilityTask_SpawnProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAbilityTask_SpawnProjectile(UACFAbilityTask_SpawnProjectile&&); \
	NO_API UACFAbilityTask_SpawnProjectile(const UACFAbilityTask_SpawnProjectile&); \
public:


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFAbilityTask_SpawnProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAbilityTask_SpawnProjectile(UACFAbilityTask_SpawnProjectile&&); \
	NO_API UACFAbilityTask_SpawnProjectile(const UACFAbilityTask_SpawnProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAbilityTask_SpawnProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAbilityTask_SpawnProjectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFAbilityTask_SpawnProjectile)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_PRIVATE_PROPERTY_OFFSET
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_17_PROLOG
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_RPC_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_INCLASS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_INCLASS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFAbilityTask_SpawnProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Tasks_ACFAbilityTask_SpawnProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
