// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ADVANCEDCOMBATSYSTEM_ACFAttributeSet_generated_h
#error "ACFAttributeSet.generated.h already included, missing '#pragma once' in ACFAttributeSet.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFAttributeSet_generated_h

#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_SPARSE_DATA
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_StaminaRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_ManaRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_StaminaRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_ManaRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFAttributeSet(); \
	friend struct Z_Construct_UClass_UACFAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UACFAttributeSet, UACFAttributeSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAttributeSet) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		HealthRegenRate, \
		Stamina, \
		MaxStamina, \
		StaminaRegenRate, \
		Mana, \
		MaxMana, \
		ManaRegenRate, \
		NETFIELD_REP_END=ManaRegenRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UACFAttributeSet) \
public:


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUACFAttributeSet(); \
	friend struct Z_Construct_UClass_UACFAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UACFAttributeSet, UACFAttributeSetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAttributeSet) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		HealthRegenRate, \
		Stamina, \
		MaxStamina, \
		StaminaRegenRate, \
		Mana, \
		MaxMana, \
		ManaRegenRate, \
		NETFIELD_REP_END=ManaRegenRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UACFAttributeSet) \
public:


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAttributeSet(UACFAttributeSet&&); \
	NO_API UACFAttributeSet(const UACFAttributeSet&); \
public:


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFAttributeSet() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAttributeSet(UACFAttributeSet&&); \
	NO_API UACFAttributeSet(const UACFAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFAttributeSet)


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_30_PROLOG
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_SPARSE_DATA \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_RPC_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_INCLASS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_SPARSE_DATA \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Attributes_ACFAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
