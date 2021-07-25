// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FActiveGameplayEffectHandle;
class AActor;
class UGameplayAbility;
struct FGameplayTag;
struct FGameplayAttribute;
struct FACFGameplayEffectExecuteData;
class UACFAttributeSetBase;
struct FGameplayAbilitySpecHandle;
class UACFGameplayAbility;
#ifdef ADVANCEDCOMBATSYSTEM_ACFCoreComponent_generated_h
#error "ACFCoreComponent.generated.h already included, missing '#pragma once' in ACFCoreComponent.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFCoreComponent_generated_h

#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_32_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms \
{ \
	FGameplayTagContainer AssetTags; \
	FGameplayTagContainer GrantedTags; \
	FActiveGameplayEffectHandle ActiveHandle; \
	float NewStartTime; \
	float NewDuration; \
}; \
static inline void FACFOnGameplayEffectTimeChange_DelegateWrapper(const FMulticastScriptDelegate& ACFOnGameplayEffectTimeChange, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms Parms; \
	Parms.AssetTags=AssetTags; \
	Parms.GrantedTags=GrantedTags; \
	Parms.ActiveHandle=ActiveHandle; \
	Parms.NewStartTime=NewStartTime; \
	Parms.NewDuration=NewDuration; \
	ACFOnGameplayEffectTimeChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_31_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnDamage_Parms \
{ \
	float DamageAmount; \
	AActor* SourceCharacter; \
	FGameplayTagContainer DamageTags; \
}; \
static inline void FACFOnDamage_DelegateWrapper(const FMulticastScriptDelegate& ACFOnDamage, float DamageAmount, AActor* SourceCharacter, FGameplayTagContainer const& DamageTags) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnDamage_Parms Parms; \
	Parms.DamageAmount=DamageAmount; \
	Parms.SourceCharacter=SourceCharacter; \
	Parms.DamageTags=DamageTags; \
	ACFOnDamage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_30_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnCooldownEnd_Parms \
{ \
	UGameplayAbility* Ability; \
	FGameplayTag CooldownTag; \
	float Duration; \
}; \
static inline void FACFOnCooldownEnd_DelegateWrapper(const FMulticastScriptDelegate& ACFOnCooldownEnd, UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnCooldownEnd_Parms Parms; \
	Parms.Ability=Ability; \
	Parms.CooldownTag=CooldownTag; \
	Parms.Duration=Duration; \
	ACFOnCooldownEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_29_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnCooldownChanged_Parms \
{ \
	UGameplayAbility* Ability; \
	FGameplayTagContainer CooldownTags; \
	float TimeRemaining; \
	float Duration; \
}; \
static inline void FACFOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& ACFOnCooldownChanged, UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnCooldownChanged_Parms Parms; \
	Parms.Ability=Ability; \
	Parms.CooldownTags=CooldownTags; \
	Parms.TimeRemaining=TimeRemaining; \
	Parms.Duration=Duration; \
	ACFOnCooldownChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_28_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnAbilityCommit_Parms \
{ \
	UGameplayAbility* Ability; \
}; \
static inline void FACFOnAbilityCommit_DelegateWrapper(const FMulticastScriptDelegate& ACFOnAbilityCommit, UGameplayAbility* Ability) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnAbilityCommit_Parms Parms; \
	Parms.Ability=Ability; \
	ACFOnAbilityCommit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_27_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnGameplayTagStackChange_Parms \
{ \
	FGameplayTag GameplayTag; \
	int32 NewTagCount; \
}; \
static inline void FACFOnGameplayTagStackChange_DelegateWrapper(const FMulticastScriptDelegate& ACFOnGameplayTagStackChange, FGameplayTag GameplayTag, int32 NewTagCount) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnGameplayTagStackChange_Parms Parms; \
	Parms.GameplayTag=GameplayTag; \
	Parms.NewTagCount=NewTagCount; \
	ACFOnGameplayTagStackChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_26_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnGameplayEffectRemoved_Parms \
{ \
	FGameplayTagContainer AssetTags; \
	FGameplayTagContainer GrantedTags; \
	FActiveGameplayEffectHandle ActiveHandle; \
}; \
static inline void FACFOnGameplayEffectRemoved_DelegateWrapper(const FMulticastScriptDelegate& ACFOnGameplayEffectRemoved, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnGameplayEffectRemoved_Parms Parms; \
	Parms.AssetTags=AssetTags; \
	Parms.GrantedTags=GrantedTags; \
	Parms.ActiveHandle=ActiveHandle; \
	ACFOnGameplayEffectRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_25_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnGameplayEffectAdded_Parms \
{ \
	FGameplayTagContainer AssetTags; \
	FGameplayTagContainer GrantedTags; \
	FActiveGameplayEffectHandle ActiveHandle; \
}; \
static inline void FACFOnGameplayEffectAdded_DelegateWrapper(const FMulticastScriptDelegate& ACFOnGameplayEffectAdded, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnGameplayEffectAdded_Parms Parms; \
	Parms.AssetTags=AssetTags; \
	Parms.GrantedTags=GrantedTags; \
	Parms.ActiveHandle=ActiveHandle; \
	ACFOnGameplayEffectAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_24_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms \
{ \
	FGameplayTagContainer AssetTags; \
	FGameplayTagContainer GrantedTags; \
	FActiveGameplayEffectHandle ActiveHandle; \
	int32 NewStackCount; \
	int32 OldStackCount; \
}; \
static inline void FACFOnGameplayEffectStackChange_DelegateWrapper(const FMulticastScriptDelegate& ACFOnGameplayEffectStackChange, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms Parms; \
	Parms.AssetTags=AssetTags; \
	Parms.GrantedTags=GrantedTags; \
	Parms.ActiveHandle=ActiveHandle; \
	Parms.NewStackCount=NewStackCount; \
	Parms.OldStackCount=OldStackCount; \
	ACFOnGameplayEffectStackChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_23_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnAbilityFailed_Parms \
{ \
	const UGameplayAbility* Ability; \
	FGameplayTagContainer ReasonTags; \
}; \
static inline void FACFOnAbilityFailed_DelegateWrapper(const FMulticastScriptDelegate& ACFOnAbilityFailed, const UGameplayAbility* Ability, FGameplayTagContainer const& ReasonTags) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnAbilityFailed_Parms Parms; \
	Parms.Ability=Ability; \
	Parms.ReasonTags=ReasonTags; \
	ACFOnAbilityFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_22_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnAbilityEnded_Parms \
{ \
	const UGameplayAbility* Ability; \
}; \
static inline void FACFOnAbilityEnded_DelegateWrapper(const FMulticastScriptDelegate& ACFOnAbilityEnded, const UGameplayAbility* Ability) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnAbilityEnded_Parms Parms; \
	Parms.Ability=Ability; \
	ACFOnAbilityEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_21_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnAbilityActivated_Parms \
{ \
	const UGameplayAbility* Ability; \
}; \
static inline void FACFOnAbilityActivated_DelegateWrapper(const FMulticastScriptDelegate& ACFOnAbilityActivated, const UGameplayAbility* Ability) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnAbilityActivated_Parms Parms; \
	Parms.Ability=Ability; \
	ACFOnAbilityActivated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_20_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms \
{ \
	FGameplayAttribute Attribute; \
	AActor* SourceActor; \
	AActor* TargetActor; \
	FGameplayTagContainer SourceTags; \
	FACFGameplayEffectExecuteData Payload; \
}; \
static inline void FACFOnPostGameplayEffectExecute_DelegateWrapper(const FMulticastScriptDelegate& ACFOnPostGameplayEffectExecute, FGameplayAttribute Attribute, AActor* SourceActor, AActor* TargetActor, FGameplayTagContainer const& SourceTags, const FACFGameplayEffectExecuteData Payload) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms Parms; \
	Parms.Attribute=Attribute; \
	Parms.SourceActor=SourceActor; \
	Parms.TargetActor=TargetActor; \
	Parms.SourceTags=SourceTags; \
	Parms.Payload=Payload; \
	ACFOnPostGameplayEffectExecute.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_19_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnPreAttributeChange_Parms \
{ \
	UACFAttributeSetBase* AttributeSet; \
	FGameplayAttribute Attribute; \
	float NewValue; \
}; \
static inline void FACFOnPreAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& ACFOnPreAttributeChange, UACFAttributeSetBase* AttributeSet, FGameplayAttribute Attribute, float NewValue) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnPreAttributeChange_Parms Parms; \
	Parms.AttributeSet=AttributeSet; \
	Parms.Attribute=Attribute; \
	Parms.NewValue=NewValue; \
	ACFOnPreAttributeChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_18_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnAttributeChange_Parms \
{ \
	FGameplayAttribute Attribute; \
	float DeltaValue; \
	FGameplayTagContainer EventTags; \
}; \
static inline void FACFOnAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& ACFOnAttributeChange, FGameplayAttribute Attribute, float DeltaValue, const FGameplayTagContainer EventTags) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnAttributeChange_Parms Parms; \
	Parms.Attribute=Attribute; \
	Parms.DeltaValue=DeltaValue; \
	Parms.EventTags=EventTags; \
	ACFOnAttributeChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_17_DELEGATE \
struct _Script_AdvancedCombatSystem_eventACFOnDefaultAttributeChange_Parms \
{ \
	float DeltaValue; \
	FGameplayTagContainer EventTags; \
}; \
static inline void FACFOnDefaultAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& ACFOnDefaultAttributeChange, float DeltaValue, const FGameplayTagContainer EventTags) \
{ \
	_Script_AdvancedCombatSystem_eventACFOnDefaultAttributeChange_Parms Parms; \
	Parms.DeltaValue=DeltaValue; \
	Parms.EventTags=EventTags; \
	ACFOnDefaultAttributeChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_16_DELEGATE \
static inline void FACFOnDeath_DelegateWrapper(const FMulticastScriptDelegate& ACFOnDeath) \
{ \
	ACFOnDeath.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_SPARSE_DATA
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_RPC_WRAPPERS \
	virtual void Client_BroadcastCooldownStartToHUD_Implementation(FGameplayAbilitySpecHandle AbilitySpecHandle, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration); \
	virtual void Client_BroadcastCooldownEndToHUD_Implementation(FGameplayAbilitySpecHandle AbilitySpecHandle, FGameplayTag GameplayTag, float Duration); \
	virtual void Client_BroadcastGameplayTagChangeToHUD_Implementation(FGameplayTag GameplayTag, int32 NewCount) const; \
	virtual void Client_BroadcastGameplayEffectRemovedToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags); \
	virtual void Client_BroadcastGameplayEffectAddedToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags); \
	virtual void Client_BroadcastGameplayEffectTimeChangeToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, float NewStartTime, float NewDuration); \
	virtual void Client_BroadcastGameplayEffectStackChangeToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, int32 NewStackCount, int32 OldStackCount); \
	virtual void Client_BroadcastAttributeChangeToHUD_Implementation(const FGameplayAttribute Attribute, float NewValue, float OldValue); \
 \
	DECLARE_FUNCTION(execClient_BroadcastCooldownStartToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastCooldownEndToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayTagChangeToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayEffectRemovedToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayEffectAddedToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayEffectTimeChangeToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayEffectStackChangeToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastAttributeChangeToHUD); \
	DECLARE_FUNCTION(execAdjustAttributeForMaxChange); \
	DECLARE_FUNCTION(execClampAttributeValue); \
	DECLARE_FUNCTION(execSetAttributeValue); \
	DECLARE_FUNCTION(execActivateAbilityWithTags); \
	DECLARE_FUNCTION(execActivateAbilityWithClass); \
	DECLARE_FUNCTION(execGetActiveAbilitiesWithTags); \
	DECLARE_FUNCTION(execIsUsingAbilityWithTags); \
	DECLARE_FUNCTION(execIsUsingAbilityWithClass); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execClearAbilities); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetCurrentAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execDie);


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_BroadcastCooldownStartToHUD_Implementation(FGameplayAbilitySpecHandle AbilitySpecHandle, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration); \
	virtual void Client_BroadcastCooldownEndToHUD_Implementation(FGameplayAbilitySpecHandle AbilitySpecHandle, FGameplayTag GameplayTag, float Duration); \
	virtual void Client_BroadcastGameplayTagChangeToHUD_Implementation(FGameplayTag GameplayTag, int32 NewCount) const; \
	virtual void Client_BroadcastGameplayEffectRemovedToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags); \
	virtual void Client_BroadcastGameplayEffectAddedToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags); \
	virtual void Client_BroadcastGameplayEffectTimeChangeToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, float NewStartTime, float NewDuration); \
	virtual void Client_BroadcastGameplayEffectStackChangeToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, int32 NewStackCount, int32 OldStackCount); \
	virtual void Client_BroadcastAttributeChangeToHUD_Implementation(const FGameplayAttribute Attribute, float NewValue, float OldValue); \
 \
	DECLARE_FUNCTION(execClient_BroadcastCooldownStartToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastCooldownEndToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayTagChangeToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayEffectRemovedToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayEffectAddedToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayEffectTimeChangeToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastGameplayEffectStackChangeToHUD); \
	DECLARE_FUNCTION(execClient_BroadcastAttributeChangeToHUD); \
	DECLARE_FUNCTION(execAdjustAttributeForMaxChange); \
	DECLARE_FUNCTION(execClampAttributeValue); \
	DECLARE_FUNCTION(execSetAttributeValue); \
	DECLARE_FUNCTION(execActivateAbilityWithTags); \
	DECLARE_FUNCTION(execActivateAbilityWithClass); \
	DECLARE_FUNCTION(execGetActiveAbilitiesWithTags); \
	DECLARE_FUNCTION(execIsUsingAbilityWithTags); \
	DECLARE_FUNCTION(execIsUsingAbilityWithClass); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execClearAbilities); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetCurrentAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execDie);


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_EVENT_PARMS \
	struct ACFCoreComponent_eventClient_BroadcastAttributeChangeToHUD_Parms \
	{ \
		FGameplayAttribute Attribute; \
		float NewValue; \
		float OldValue; \
	}; \
	struct ACFCoreComponent_eventClient_BroadcastCooldownEndToHUD_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilitySpecHandle; \
		FGameplayTag GameplayTag; \
		float Duration; \
	}; \
	struct ACFCoreComponent_eventClient_BroadcastCooldownStartToHUD_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilitySpecHandle; \
		FGameplayTagContainer CooldownTags; \
		float TimeRemaining; \
		float Duration; \
	}; \
	struct ACFCoreComponent_eventClient_BroadcastGameplayEffectAddedToHUD_Parms \
	{ \
		FActiveGameplayEffectHandle ActiveHandle; \
		FGameplayTagContainer AssetTags; \
		FGameplayTagContainer GrantedTags; \
	}; \
	struct ACFCoreComponent_eventClient_BroadcastGameplayEffectRemovedToHUD_Parms \
	{ \
		FActiveGameplayEffectHandle ActiveHandle; \
		FGameplayTagContainer AssetTags; \
		FGameplayTagContainer GrantedTags; \
	}; \
	struct ACFCoreComponent_eventClient_BroadcastGameplayEffectStackChangeToHUD_Parms \
	{ \
		FActiveGameplayEffectHandle ActiveHandle; \
		FGameplayTagContainer AssetTags; \
		FGameplayTagContainer GrantedTags; \
		int32 NewStackCount; \
		int32 OldStackCount; \
	}; \
	struct ACFCoreComponent_eventClient_BroadcastGameplayEffectTimeChangeToHUD_Parms \
	{ \
		FActiveGameplayEffectHandle ActiveHandle; \
		FGameplayTagContainer AssetTags; \
		FGameplayTagContainer GrantedTags; \
		float NewStartTime; \
		float NewDuration; \
	}; \
	struct ACFCoreComponent_eventClient_BroadcastGameplayTagChangeToHUD_Parms \
	{ \
		FGameplayTag GameplayTag; \
		int32 NewCount; \
	};


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_CALLBACK_WRAPPERS
#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFCoreComponent(); \
	friend struct Z_Construct_UClass_UACFCoreComponent_Statics; \
public: \
	DECLARE_CLASS(UACFCoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFCoreComponent)


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUACFCoreComponent(); \
	friend struct Z_Construct_UClass_UACFCoreComponent_Statics; \
public: \
	DECLARE_CLASS(UACFCoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFCoreComponent)


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFCoreComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFCoreComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFCoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFCoreComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFCoreComponent(UACFCoreComponent&&); \
	NO_API UACFCoreComponent(const UACFCoreComponent&); \
public:


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFCoreComponent(UACFCoreComponent&&); \
	NO_API UACFCoreComponent(const UACFCoreComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFCoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFCoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFCoreComponent)


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerActor() { return STRUCT_OFFSET(UACFCoreComponent, OwnerActor); } \
	FORCEINLINE static uint32 __PPO__OwnerPawn() { return STRUCT_OFFSET(UACFCoreComponent, OwnerPawn); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(UACFCoreComponent, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__OwnerAbilitySystemComponent() { return STRUCT_OFFSET(UACFCoreComponent, OwnerAbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__RegisteredAttributeSetNames() { return STRUCT_OFFSET(UACFCoreComponent, RegisteredAttributeSetNames); } \
	FORCEINLINE static uint32 __PPO__StartupAbilities() { return STRUCT_OFFSET(UACFCoreComponent, StartupAbilities); } \
	FORCEINLINE static uint32 __PPO__StartupAttributes() { return STRUCT_OFFSET(UACFCoreComponent, StartupAttributes); } \
	FORCEINLINE static uint32 __PPO__StartupEffects() { return STRUCT_OFFSET(UACFCoreComponent, StartupEffects); }


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_34_PROLOG \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_EVENT_PARMS


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_SPARSE_DATA \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_RPC_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_CALLBACK_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_INCLASS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_SPARSE_DATA \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_CALLBACK_WRAPPERS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFCoreComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Components_ACFCoreComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
