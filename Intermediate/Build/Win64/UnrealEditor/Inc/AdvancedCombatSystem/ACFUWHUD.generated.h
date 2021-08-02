// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
class UGameplayAbility;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FActiveGameplayEffectHandle;
struct FACFGameplayEffectUIData;
#ifdef ADVANCEDCOMBATSYSTEM_ACFUWHUD_generated_h
#error "ACFUWHUD.generated.h already included, missing '#pragma once' in ACFUWHUD.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFUWHUD_generated_h

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_SPARSE_DATA
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetManaPercentage); \
	DECLARE_FUNCTION(execSetMana); \
	DECLARE_FUNCTION(execSetMaxMana); \
	DECLARE_FUNCTION(execSetStaminaPercentage); \
	DECLARE_FUNCTION(execSetStamina); \
	DECLARE_FUNCTION(execSetMaxStamina); \
	DECLARE_FUNCTION(execSetHealthPercentage); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execSetMaxHealth);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetManaPercentage); \
	DECLARE_FUNCTION(execSetMana); \
	DECLARE_FUNCTION(execSetMaxMana); \
	DECLARE_FUNCTION(execSetStaminaPercentage); \
	DECLARE_FUNCTION(execSetStamina); \
	DECLARE_FUNCTION(execSetMaxStamina); \
	DECLARE_FUNCTION(execSetHealthPercentage); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execSetMaxHealth);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_EVENT_PARMS \
	struct ACFUWHUD_eventOnAttributeChange_Parms \
	{ \
		FGameplayAttribute Attribute; \
		float NewValue; \
		float OldValue; \
	}; \
	struct ACFUWHUD_eventOnCooldownEnd_Parms \
	{ \
		UGameplayAbility* Ability; \
		FGameplayTag CooldownTag; \
		float Duration; \
	}; \
	struct ACFUWHUD_eventOnCooldownStart_Parms \
	{ \
		UGameplayAbility* Ability; \
		FGameplayTagContainer CooldownTags; \
		float TimeRemaining; \
		float Duration; \
	}; \
	struct ACFUWHUD_eventOnGameplayEffectAdded_Parms \
	{ \
		FGameplayTagContainer AssetTags; \
		FGameplayTagContainer GrantedTags; \
		FActiveGameplayEffectHandle ActiveHandle; \
		FACFGameplayEffectUIData EffectData; \
	}; \
	struct ACFUWHUD_eventOnGameplayEffectRemoved_Parms \
	{ \
		FGameplayTagContainer AssetTags; \
		FGameplayTagContainer GrantedTags; \
		FActiveGameplayEffectHandle ActiveHandle; \
		FACFGameplayEffectUIData EffectData; \
	}; \
	struct ACFUWHUD_eventOnGameplayEffectStackChange_Parms \
	{ \
		FGameplayTagContainer AssetTags; \
		FGameplayTagContainer GrantedTags; \
		FActiveGameplayEffectHandle ActiveHandle; \
		int32 NewStackCount; \
		int32 OldStackCount; \
	}; \
	struct ACFUWHUD_eventOnGameplayEffectTimeChange_Parms \
	{ \
		FGameplayTagContainer AssetTags; \
		FGameplayTagContainer GrantedTags; \
		FActiveGameplayEffectHandle ActiveHandle; \
		float NewStartTime; \
		float NewDuration; \
	}; \
	struct ACFUWHUD_eventOnGameplayTagChange_Parms \
	{ \
		FGameplayTag GameplayTag; \
		int32 NewTagCount; \
	};


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_CALLBACK_WRAPPERS
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFUWHUD(); \
	friend struct Z_Construct_UClass_UACFUWHUD_Statics; \
public: \
	DECLARE_CLASS(UACFUWHUD, UACFUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFUWHUD)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUACFUWHUD(); \
	friend struct Z_Construct_UClass_UACFUWHUD_Statics; \
public: \
	DECLARE_CLASS(UACFUWHUD, UACFUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFUWHUD)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFUWHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFUWHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFUWHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFUWHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFUWHUD(UACFUWHUD&&); \
	NO_API UACFUWHUD(const UACFUWHUD&); \
public:


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFUWHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFUWHUD(UACFUWHUD&&); \
	NO_API UACFUWHUD(const UACFUWHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFUWHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFUWHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFUWHUD)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthText() { return STRUCT_OFFSET(UACFUWHUD, HealthText); } \
	FORCEINLINE static uint32 __PPO__HealthProgressBar() { return STRUCT_OFFSET(UACFUWHUD, HealthProgressBar); } \
	FORCEINLINE static uint32 __PPO__StaminaText() { return STRUCT_OFFSET(UACFUWHUD, StaminaText); } \
	FORCEINLINE static uint32 __PPO__StaminaProgressBar() { return STRUCT_OFFSET(UACFUWHUD, StaminaProgressBar); } \
	FORCEINLINE static uint32 __PPO__ManaText() { return STRUCT_OFFSET(UACFUWHUD, ManaText); } \
	FORCEINLINE static uint32 __PPO__ManaProgressBar() { return STRUCT_OFFSET(UACFUWHUD, ManaProgressBar); }


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_16_PROLOG \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_EVENT_PARMS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_RPC_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_CALLBACK_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_INCLASS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_CALLBACK_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_INCLASS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFUWHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Widgets_ACFUWHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
