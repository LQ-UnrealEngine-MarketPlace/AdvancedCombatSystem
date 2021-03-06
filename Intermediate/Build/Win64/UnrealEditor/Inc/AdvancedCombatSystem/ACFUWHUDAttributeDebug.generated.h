// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDCOMBATSYSTEM_ACFUWHUDAttributeDebug_generated_h
#error "ACFUWHUDAttributeDebug.generated.h already included, missing '#pragma once' in ACFUWHUDAttributeDebug.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFUWHUDAttributeDebug_generated_h

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_SPARSE_DATA
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrevDebugCharacter); \
	DECLARE_FUNCTION(execNextDebugCharacter);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrevDebugCharacter); \
	DECLARE_FUNCTION(execNextDebugCharacter);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFUWHUDAttributeDebug(); \
	friend struct Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics; \
public: \
	DECLARE_CLASS(UACFUWHUDAttributeDebug, UACFUWHUD, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFUWHUDAttributeDebug)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUACFUWHUDAttributeDebug(); \
	friend struct Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics; \
public: \
	DECLARE_CLASS(UACFUWHUDAttributeDebug, UACFUWHUD, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFUWHUDAttributeDebug)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFUWHUDAttributeDebug(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFUWHUDAttributeDebug) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFUWHUDAttributeDebug); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFUWHUDAttributeDebug); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFUWHUDAttributeDebug(UACFUWHUDAttributeDebug&&); \
	NO_API UACFUWHUDAttributeDebug(const UACFUWHUDAttributeDebug&); \
public:


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFUWHUDAttributeDebug(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFUWHUDAttributeDebug(UACFUWHUDAttributeDebug&&); \
	NO_API UACFUWHUDAttributeDebug(const UACFUWHUDAttributeDebug&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFUWHUDAttributeDebug); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFUWHUDAttributeDebug); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFUWHUDAttributeDebug)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttributeRowTemplate() { return STRUCT_OFFSET(UACFUWHUDAttributeDebug, AttributeRowTemplate); } \
	FORCEINLINE static uint32 __PPO__AttributesVerticalBox() { return STRUCT_OFFSET(UACFUWHUDAttributeDebug, AttributesVerticalBox); } \
	FORCEINLINE static uint32 __PPO__DebugActorsTitle() { return STRUCT_OFFSET(UACFUWHUDAttributeDebug, DebugActorsTitle); } \
	FORCEINLINE static uint32 __PPO__DebugActors() { return STRUCT_OFFSET(UACFUWHUDAttributeDebug, DebugActors); } \
	FORCEINLINE static uint32 __PPO__CurrentDebugActor() { return STRUCT_OFFSET(UACFUWHUDAttributeDebug, CurrentDebugActor); } \
	FORCEINLINE static uint32 __PPO__AttributeValues() { return STRUCT_OFFSET(UACFUWHUDAttributeDebug, AttributeValues); } \
	FORCEINLINE static uint32 __PPO__AttributeValueMaps() { return STRUCT_OFFSET(UACFUWHUDAttributeDebug, AttributeValueMaps); }


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_16_PROLOG
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_RPC_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_INCLASS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_INCLASS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFUWHUDAttributeDebug>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_Debugs_ACFUWHUDAttributeDebug_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
