// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UACFGameplayAbility;
#ifdef ADVANCEDCOMBATSYSTEM_ACFAbilityComboManagerComponent_generated_h
#error "ACFAbilityComboManagerComponent.generated.h already included, missing '#pragma once' in ACFAbilityComboManagerComponent.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFAbilityComboManagerComponent_generated_h

#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_SPARSE_DATA
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_RPC_WRAPPERS \
	virtual void NetMulticast_SetComboIndex_Implementation(int32 InComboIndex); \
	virtual void Server_SetComboIndex_Implementation(int32 InComboIndex); \
	virtual void NetMulticast_ActivateComboAbility_Implementation(TSubclassOf<UACFGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
	virtual void Server_ActivateComboAbility_Implementation(TSubclassOf<UACFGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
 \
	DECLARE_FUNCTION(execNetMulticast_SetComboIndex); \
	DECLARE_FUNCTION(execServer_SetComboIndex); \
	DECLARE_FUNCTION(execNetMulticast_ActivateComboAbility); \
	DECLARE_FUNCTION(execServer_ActivateComboAbility); \
	DECLARE_FUNCTION(execActivateComboAbility); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execIncrementCombo);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NetMulticast_SetComboIndex_Implementation(int32 InComboIndex); \
	virtual void Server_SetComboIndex_Implementation(int32 InComboIndex); \
	virtual void NetMulticast_ActivateComboAbility_Implementation(TSubclassOf<UACFGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
	virtual void Server_ActivateComboAbility_Implementation(TSubclassOf<UACFGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
 \
	DECLARE_FUNCTION(execNetMulticast_SetComboIndex); \
	DECLARE_FUNCTION(execServer_SetComboIndex); \
	DECLARE_FUNCTION(execNetMulticast_ActivateComboAbility); \
	DECLARE_FUNCTION(execServer_ActivateComboAbility); \
	DECLARE_FUNCTION(execActivateComboAbility); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execIncrementCombo);


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_EVENT_PARMS \
	struct ACFAbilityComboManagerComponent_eventNetMulticast_ActivateComboAbility_Parms \
	{ \
		TSubclassOf<UACFGameplayAbility>  AbilityClass; \
		bool bAllowRemoteActivation; \
	}; \
	struct ACFAbilityComboManagerComponent_eventNetMulticast_SetComboIndex_Parms \
	{ \
		int32 InComboIndex; \
	}; \
	struct ACFAbilityComboManagerComponent_eventServer_ActivateComboAbility_Parms \
	{ \
		TSubclassOf<UACFGameplayAbility>  AbilityClass; \
		bool bAllowRemoteActivation; \
	}; \
	struct ACFAbilityComboManagerComponent_eventServer_SetComboIndex_Parms \
	{ \
		int32 InComboIndex; \
	};


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_CALLBACK_WRAPPERS
#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFAbilityComboManagerComponent(); \
	friend struct Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UACFAbilityComboManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAbilityComboManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ComboIndex=NETFIELD_REP_START, \
		bComboWindowOpened, \
		bShouldTriggerCombo, \
		bRequestTriggerCombo, \
		bNextComboAbilityActivated, \
		NETFIELD_REP_END=bNextComboAbilityActivated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUACFAbilityComboManagerComponent(); \
	friend struct Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UACFAbilityComboManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFAbilityComboManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ComboIndex=NETFIELD_REP_START, \
		bComboWindowOpened, \
		bShouldTriggerCombo, \
		bRequestTriggerCombo, \
		bNextComboAbilityActivated, \
		NETFIELD_REP_END=bNextComboAbilityActivated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFAbilityComboManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFAbilityComboManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAbilityComboManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAbilityComboManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAbilityComboManagerComponent(UACFAbilityComboManagerComponent&&); \
	NO_API UACFAbilityComboManagerComponent(const UACFAbilityComboManagerComponent&); \
public:


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFAbilityComboManagerComponent(UACFAbilityComboManagerComponent&&); \
	NO_API UACFAbilityComboManagerComponent(const UACFAbilityComboManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFAbilityComboManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFAbilityComboManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFAbilityComboManagerComponent)


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwningCharacter() { return STRUCT_OFFSET(UACFAbilityComboManagerComponent, OwningCharacter); } \
	FORCEINLINE static uint32 __PPO__OwnerAbilitySystemComponent() { return STRUCT_OFFSET(UACFAbilityComboManagerComponent, OwnerAbilitySystemComponent); }


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_16_PROLOG \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_EVENT_PARMS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_RPC_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_CALLBACK_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_INCLASS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_SPARSE_DATA \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_CALLBACK_WRAPPERS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_INCLASS_NO_PURE_DECLS \
	LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFAbilityComboManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightSouls_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_Components_ACFAbilityComboManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
