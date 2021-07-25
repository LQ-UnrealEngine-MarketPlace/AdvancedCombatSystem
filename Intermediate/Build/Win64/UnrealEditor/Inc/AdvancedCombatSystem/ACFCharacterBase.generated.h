// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UACFAbilitySystemComponent;
#ifdef ADVANCEDCOMBATSYSTEM_ACFCharacterBase_generated_h
#error "ACFCharacterBase.generated.h already included, missing '#pragma once' in ACFCharacterBase.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFCharacterBase_generated_h

#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_SPARSE_DATA
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_EVENT_PARMS
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_CALLBACK_WRAPPERS
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFCharacterBase(); \
	friend struct Z_Construct_UClass_AACFCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AACFCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(AACFCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AACFCharacterBase*>(this); }


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAACFCharacterBase(); \
	friend struct Z_Construct_UClass_AACFCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AACFCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(AACFCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AACFCharacterBase*>(this); }


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACFCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACFCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFCharacterBase(AACFCharacterBase&&); \
	NO_API AACFCharacterBase(const AACFCharacterBase&); \
public:


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFCharacterBase(AACFCharacterBase&&); \
	NO_API AACFCharacterBase(const AACFCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFCharacterBase)


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CoreComponent() { return STRUCT_OFFSET(AACFCharacterBase, CoreComponent); } \
	FORCEINLINE static uint32 __PPO__AbilityComboManagerComponent() { return STRUCT_OFFSET(AACFCharacterBase, AbilityComboManagerComponent); } \
	FORCEINLINE static uint32 __PPO__AbilityQueueComponent() { return STRUCT_OFFSET(AACFCharacterBase, AbilityQueueComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSets() { return STRUCT_OFFSET(AACFCharacterBase, AttributeSets); }


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_16_PROLOG \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_EVENT_PARMS


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_SPARSE_DATA \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_RPC_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_CALLBACK_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_INCLASS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_SPARSE_DATA \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_CALLBACK_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class AACFCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Actors_Characters_ACFCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
