// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
struct FGameplayTag;
#ifdef ADVANCEDCOMBATSYSTEM_ACFUWStatusBar_generated_h
#error "ACFUWStatusBar.generated.h already included, missing '#pragma once' in ACFUWStatusBar.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFUWStatusBar_generated_h

#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_SPARSE_DATA
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_RPC_WRAPPERS
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_EVENT_PARMS \
	struct ACFUWStatusBar_eventOnAttributeChange_Parms \
	{ \
		FGameplayAttribute Attribute; \
		float NewValue; \
		float OldValue; \
	}; \
	struct ACFUWStatusBar_eventOnGameplayTagChange_Parms \
	{ \
		FGameplayTag GameplayTag; \
		int32 NewCount; \
	};


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_CALLBACK_WRAPPERS
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFUWStatusBar(); \
	friend struct Z_Construct_UClass_UACFUWStatusBar_Statics; \
public: \
	DECLARE_CLASS(UACFUWStatusBar, UACFUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFUWStatusBar)


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUACFUWStatusBar(); \
	friend struct Z_Construct_UClass_UACFUWStatusBar_Statics; \
public: \
	DECLARE_CLASS(UACFUWStatusBar, UACFUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFUWStatusBar)


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFUWStatusBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFUWStatusBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFUWStatusBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFUWStatusBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFUWStatusBar(UACFUWStatusBar&&); \
	NO_API UACFUWStatusBar(const UACFUWStatusBar&); \
public:


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFUWStatusBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFUWStatusBar(UACFUWStatusBar&&); \
	NO_API UACFUWStatusBar(const UACFUWStatusBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFUWStatusBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFUWStatusBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFUWStatusBar)


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerWidgetComponent() { return STRUCT_OFFSET(UACFUWStatusBar, OwnerWidgetComponent); }


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_16_PROLOG \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_EVENT_PARMS


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_SPARSE_DATA \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_RPC_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_CALLBACK_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_INCLASS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_SPARSE_DATA \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_CALLBACK_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFUWStatusBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWStatusBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
