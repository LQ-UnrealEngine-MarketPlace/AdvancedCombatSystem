// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Widgets/ACFUWHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUWHUD() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUWHUD_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUWHUD();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUserWidget();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFGameplayEffectUIData();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UACFUWHUD::execSetManaPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ManaPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManaPercentage(Z_Param_ManaPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUD::execSetMana)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Mana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMana(Z_Param_Mana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUD::execSetMaxMana)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxMana(Z_Param_MaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUD::execSetStaminaPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StaminaPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaminaPercentage(Z_Param_StaminaPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUD::execSetStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStamina(Z_Param_Stamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUD::execSetMaxStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxStamina(Z_Param_MaxStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUD::execSetHealthPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealthPercentage(Z_Param_HealthPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUD::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_Health);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUD::execSetMaxHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxHealth(Z_Param_MaxHealth);
		P_NATIVE_END;
	}
	static FName NAME_UACFUWHUD_OnAttributeChange = FName(TEXT("OnAttributeChange"));
	void UACFUWHUD::OnAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue)
	{
		ACFUWHUD_eventOnAttributeChange_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.NewValue=NewValue;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWHUD_OnAttributeChange),&Parms);
	}
	static FName NAME_UACFUWHUD_OnCooldownEnd = FName(TEXT("OnCooldownEnd"));
	void UACFUWHUD::OnCooldownEnd(UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration)
	{
		ACFUWHUD_eventOnCooldownEnd_Parms Parms;
		Parms.Ability=Ability;
		Parms.CooldownTag=CooldownTag;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWHUD_OnCooldownEnd),&Parms);
	}
	static FName NAME_UACFUWHUD_OnCooldownStart = FName(TEXT("OnCooldownStart"));
	void UACFUWHUD::OnCooldownStart(UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration)
	{
		ACFUWHUD_eventOnCooldownStart_Parms Parms;
		Parms.Ability=Ability;
		Parms.CooldownTags=CooldownTags;
		Parms.TimeRemaining=TimeRemaining;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWHUD_OnCooldownStart),&Parms);
	}
	static FName NAME_UACFUWHUD_OnGameplayEffectAdded = FName(TEXT("OnGameplayEffectAdded"));
	void UACFUWHUD::OnGameplayEffectAdded(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, FACFGameplayEffectUIData EffectData)
	{
		ACFUWHUD_eventOnGameplayEffectAdded_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.ActiveHandle=ActiveHandle;
		Parms.EffectData=EffectData;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWHUD_OnGameplayEffectAdded),&Parms);
	}
	static FName NAME_UACFUWHUD_OnGameplayEffectRemoved = FName(TEXT("OnGameplayEffectRemoved"));
	void UACFUWHUD::OnGameplayEffectRemoved(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, FACFGameplayEffectUIData EffectData)
	{
		ACFUWHUD_eventOnGameplayEffectRemoved_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.ActiveHandle=ActiveHandle;
		Parms.EffectData=EffectData;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWHUD_OnGameplayEffectRemoved),&Parms);
	}
	static FName NAME_UACFUWHUD_OnGameplayEffectStackChange = FName(TEXT("OnGameplayEffectStackChange"));
	void UACFUWHUD::OnGameplayEffectStackChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount)
	{
		ACFUWHUD_eventOnGameplayEffectStackChange_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.ActiveHandle=ActiveHandle;
		Parms.NewStackCount=NewStackCount;
		Parms.OldStackCount=OldStackCount;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWHUD_OnGameplayEffectStackChange),&Parms);
	}
	static FName NAME_UACFUWHUD_OnGameplayEffectTimeChange = FName(TEXT("OnGameplayEffectTimeChange"));
	void UACFUWHUD::OnGameplayEffectTimeChange(FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration)
	{
		ACFUWHUD_eventOnGameplayEffectTimeChange_Parms Parms;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.ActiveHandle=ActiveHandle;
		Parms.NewStartTime=NewStartTime;
		Parms.NewDuration=NewDuration;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWHUD_OnGameplayEffectTimeChange),&Parms);
	}
	static FName NAME_UACFUWHUD_OnGameplayTagChange = FName(TEXT("OnGameplayTagChange"));
	void UACFUWHUD::OnGameplayTagChange(FGameplayTag GameplayTag, int32 NewTagCount)
	{
		ACFUWHUD_eventOnGameplayTagChange_Parms Parms;
		Parms.GameplayTag=GameplayTag;
		Parms.NewTagCount=NewTagCount;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWHUD_OnGameplayTagChange),&Parms);
	}
	void UACFUWHUD::StaticRegisterNativesUACFUWHUD()
	{
		UClass* Class = UACFUWHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHealth", &UACFUWHUD::execSetHealth },
			{ "SetHealthPercentage", &UACFUWHUD::execSetHealthPercentage },
			{ "SetMana", &UACFUWHUD::execSetMana },
			{ "SetManaPercentage", &UACFUWHUD::execSetManaPercentage },
			{ "SetMaxHealth", &UACFUWHUD::execSetMaxHealth },
			{ "SetMaxMana", &UACFUWHUD::execSetMaxMana },
			{ "SetMaxStamina", &UACFUWHUD::execSetMaxStamina },
			{ "SetStamina", &UACFUWHUD::execSetStamina },
			{ "SetStaminaPercentage", &UACFUWHUD::execSetStaminaPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnAttributeChange_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnAttributeChange_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever an attribute value is changed */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever an attribute value is changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "OnAttributeChange", nullptr, nullptr, sizeof(ACFUWHUD_eventOnAttributeChange_Parms), Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_OnAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_OnAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnCooldownEnd_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnCooldownEnd_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnCooldownEnd_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component when a cooldown gameplay tag is removed, meaning cooldown expired */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Event triggered by Companion Core Component when a cooldown gameplay tag is removed, meaning cooldown expired" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "OnCooldownEnd", nullptr, nullptr, sizeof(ACFUWHUD_eventOnCooldownEnd_Parms), Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnCooldownStart_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_CooldownTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnCooldownStart_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_CooldownTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_CooldownTags_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnCooldownStart_Parms, TimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnCooldownStart_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_CooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core component when an ability with a valid cooldown is committed and cooldown is applied */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Event triggered by Companion Core component when an ability with a valid cooldown is committed and cooldown is applied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "OnCooldownStart", nullptr, nullptr, sizeof(ACFUWHUD_eventOnCooldownStart_Parms), Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_OnCooldownStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_OnCooldownStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectAdded_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectAdded_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectAdded_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::NewProp_EffectData = { "EffectData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectAdded_Parms, EffectData), Z_Construct_UScriptStruct_FACFGameplayEffectUIData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::NewProp_EffectData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a gameplay effect is added */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a gameplay effect is added" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "OnGameplayEffectAdded", nullptr, nullptr, sizeof(ACFUWHUD_eventOnGameplayEffectAdded_Parms), Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectRemoved_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectRemoved_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectRemoved_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::NewProp_EffectData = { "EffectData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectRemoved_Parms, EffectData), Z_Construct_UScriptStruct_FACFGameplayEffectUIData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::NewProp_EffectData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a gameplay effect is removed */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a gameplay effect is removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "OnGameplayEffectRemoved", nullptr, nullptr, sizeof(ACFUWHUD_eventOnGameplayEffectRemoved_Parms), Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldStackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectStackChange_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectStackChange_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectStackChange_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectStackChange_Parms, NewStackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectStackChange_Parms, OldStackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_NewStackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::NewProp_OldStackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a gameplay effect is added / removed */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a gameplay effect is added / removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "OnGameplayEffectStackChange", nullptr, nullptr, sizeof(ACFUWHUD_eventOnGameplayEffectStackChange_Parms), Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectTimeChange_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectTimeChange_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectTimeChange_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_NewStartTime = { "NewStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectTimeChange_Parms, NewStartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayEffectTimeChange_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_NewStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a gameplay effect time is changed (for instance when duration is refreshed) */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a gameplay effect time is changed (for instance when duration is refreshed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "OnGameplayEffectTimeChange", nullptr, nullptr, sizeof(ACFUWHUD_eventOnGameplayEffectTimeChange_Parms), Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTagCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayTagChange_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::NewProp_NewTagCount = { "NewTagCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventOnGameplayTagChange_Parms, NewTagCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::NewProp_NewTagCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events) */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "OnGameplayTagChange", nullptr, nullptr, sizeof(ACFUWHUD_eventOnGameplayTagChange_Parms), Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics
	{
		struct ACFUWHUD_eventSetHealth_Parms
		{
			float Health;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetHealth_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound health widgets to reflect the new health change */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound health widgets to reflect the new health change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetHealth", nullptr, nullptr, sizeof(ACFUWHUD_eventSetHealth_Parms), Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics
	{
		struct ACFUWHUD_eventSetHealthPercentage_Parms
		{
			float HealthPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetHealthPercentage_Parms, HealthPercentage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::NewProp_HealthPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound stamina progress bar with the new percent */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound stamina progress bar with the new percent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetHealthPercentage", nullptr, nullptr, sizeof(ACFUWHUD_eventSetHealthPercentage_Parms), Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetMana_Statics
	{
		struct ACFUWHUD_eventSetMana_Parms
		{
			float Mana;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetMana_Parms, Mana), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::NewProp_Mana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound mana widgets to reflect the new mana change */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound mana widgets to reflect the new mana change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetMana", nullptr, nullptr, sizeof(ACFUWHUD_eventSetMana_Parms), Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics
	{
		struct ACFUWHUD_eventSetManaPercentage_Parms
		{
			float ManaPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::NewProp_ManaPercentage = { "ManaPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetManaPercentage_Parms, ManaPercentage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::NewProp_ManaPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound mana progress bar with the new percent */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound mana progress bar with the new percent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetManaPercentage", nullptr, nullptr, sizeof(ACFUWHUD_eventSetManaPercentage_Parms), Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetManaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetManaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics
	{
		struct ACFUWHUD_eventSetMaxHealth_Parms
		{
			float MaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetMaxHealth_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::NewProp_MaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound health widgets to reflect the new max health change */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound health widgets to reflect the new max health change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetMaxHealth", nullptr, nullptr, sizeof(ACFUWHUD_eventSetMaxHealth_Parms), Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics
	{
		struct ACFUWHUD_eventSetMaxMana_Parms
		{
			float MaxMana;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetMaxMana_Parms, MaxMana), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::NewProp_MaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound mana widgets to reflect the new max mana change */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound mana widgets to reflect the new max mana change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetMaxMana", nullptr, nullptr, sizeof(ACFUWHUD_eventSetMaxMana_Parms), Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics
	{
		struct ACFUWHUD_eventSetMaxStamina_Parms
		{
			float MaxStamina;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetMaxStamina_Parms, MaxStamina), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::NewProp_MaxStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound stamina widgets to reflect the new max stamina change */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound stamina widgets to reflect the new max stamina change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetMaxStamina", nullptr, nullptr, sizeof(ACFUWHUD_eventSetMaxStamina_Parms), Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics
	{
		struct ACFUWHUD_eventSetStamina_Parms
		{
			float Stamina;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetStamina_Parms, Stamina), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::NewProp_Stamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound stamina widgets to reflect the new stamina change */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound stamina widgets to reflect the new stamina change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetStamina", nullptr, nullptr, sizeof(ACFUWHUD_eventSetStamina_Parms), Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics
	{
		struct ACFUWHUD_eventSetStaminaPercentage_Parms
		{
			float StaminaPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::NewProp_StaminaPercentage = { "StaminaPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWHUD_eventSetStaminaPercentage_Parms, StaminaPercentage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::NewProp_StaminaPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Updates bound health progress bar with the new percent */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
		{ "ToolTip", "Updates bound health progress bar with the new percent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUD, nullptr, "SetStaminaPercentage", nullptr, nullptr, sizeof(ACFUWHUD_eventSetStaminaPercentage_Parms), Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFUWHUD_NoRegister()
	{
		return UACFUWHUD::StaticClass();
	}
	struct Z_Construct_UClass_UACFUWHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaProgressBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFUWHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFUWHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFUWHUD_OnAttributeChange, "OnAttributeChange" }, // 495495339
		{ &Z_Construct_UFunction_UACFUWHUD_OnCooldownEnd, "OnCooldownEnd" }, // 3126857197
		{ &Z_Construct_UFunction_UACFUWHUD_OnCooldownStart, "OnCooldownStart" }, // 2854779786
		{ &Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectAdded, "OnGameplayEffectAdded" }, // 2970645984
		{ &Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectRemoved, "OnGameplayEffectRemoved" }, // 2437149760
		{ &Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectStackChange, "OnGameplayEffectStackChange" }, // 3152258234
		{ &Z_Construct_UFunction_UACFUWHUD_OnGameplayEffectTimeChange, "OnGameplayEffectTimeChange" }, // 240012030
		{ &Z_Construct_UFunction_UACFUWHUD_OnGameplayTagChange, "OnGameplayTagChange" }, // 3635270713
		{ &Z_Construct_UFunction_UACFUWHUD_SetHealth, "SetHealth" }, // 3885924022
		{ &Z_Construct_UFunction_UACFUWHUD_SetHealthPercentage, "SetHealthPercentage" }, // 181582615
		{ &Z_Construct_UFunction_UACFUWHUD_SetMana, "SetMana" }, // 1441587487
		{ &Z_Construct_UFunction_UACFUWHUD_SetManaPercentage, "SetManaPercentage" }, // 898465715
		{ &Z_Construct_UFunction_UACFUWHUD_SetMaxHealth, "SetMaxHealth" }, // 1510510441
		{ &Z_Construct_UFunction_UACFUWHUD_SetMaxMana, "SetMaxMana" }, // 2589006761
		{ &Z_Construct_UFunction_UACFUWHUD_SetMaxStamina, "SetMaxStamina" }, // 2176094538
		{ &Z_Construct_UFunction_UACFUWHUD_SetStamina, "SetStamina" }, // 1414780406
		{ &Z_Construct_UFunction_UACFUWHUD_SetStaminaPercentage, "SetStaminaPercentage" }, // 1496679604
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/Widgets/ACFUWHUD.h" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUD, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUD, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthProgressBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaText = { "StaminaText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUD, StaminaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaProgressBar = { "StaminaProgressBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUD, StaminaProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaProgressBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaText = { "ManaText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUD, ManaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaProgressBar_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaProgressBar = { "ManaProgressBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUD, ManaProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaProgressBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFUWHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUD_Statics::NewProp_HealthProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUD_Statics::NewProp_StaminaProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUD_Statics::NewProp_ManaProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFUWHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFUWHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFUWHUD_Statics::ClassParams = {
		&UACFUWHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFUWHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFUWHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFUWHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFUWHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFUWHUD, 1790792905);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFUWHUD>()
	{
		return UACFUWHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFUWHUD(Z_Construct_UClass_UACFUWHUD, &UACFUWHUD::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFUWHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFUWHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
