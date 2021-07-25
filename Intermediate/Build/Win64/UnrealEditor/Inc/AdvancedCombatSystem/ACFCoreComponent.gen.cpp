// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Components/ACFCoreComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCoreComponent() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAttributeSetBase_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFCoreComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFCoreComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms
		{
			FGameplayTagContainer AssetTags;
			FGameplayTagContainer GrantedTags;
			FActiveGameplayEffectHandle ActiveHandle;
			float NewStartTime;
			float NewDuration;
		};
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_NewStartTime = { "NewStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms, NewStartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_NewStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnGameplayEffectTimeChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectTimeChange_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnDamage_Parms
		{
			float DamageAmount;
			AActor* SourceCharacter;
			FGameplayTagContainer DamageTags;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnDamage_Parms, SourceCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_DamageTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_DamageTags = { "DamageTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnDamage_Parms, DamageTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_DamageTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_DamageTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_SourceCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::NewProp_DamageTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnDamage__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnDamage_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnCooldownEnd_Parms
		{
			UGameplayAbility* Ability;
			FGameplayTag CooldownTag;
			float Duration;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnCooldownEnd_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnCooldownEnd_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnCooldownEnd_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnCooldownEnd__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnCooldownEnd_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnCooldownChanged_Parms
		{
			UGameplayAbility* Ability;
			FGameplayTagContainer CooldownTags;
			float TimeRemaining;
			float Duration;
		};
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnCooldownChanged_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnCooldownChanged_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnCooldownChanged_Parms, TimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnCooldownChanged_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnCooldownChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnCooldownChanged_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnAbilityCommit_Parms
		{
			UGameplayAbility* Ability;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnAbilityCommit_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnAbilityCommit__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnAbilityCommit_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnGameplayTagStackChange_Parms
		{
			FGameplayTag GameplayTag;
			int32 NewTagCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTagCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayTagStackChange_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::NewProp_NewTagCount = { "NewTagCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayTagStackChange_Parms, NewTagCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::NewProp_NewTagCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnGameplayTagStackChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnGameplayTagStackChange_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnGameplayEffectRemoved_Parms
		{
			FGameplayTagContainer AssetTags;
			FGameplayTagContainer GrantedTags;
			FActiveGameplayEffectHandle ActiveHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectRemoved_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectRemoved_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectRemoved_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::NewProp_ActiveHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnGameplayEffectRemoved__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectRemoved_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnGameplayEffectAdded_Parms
		{
			FGameplayTagContainer AssetTags;
			FGameplayTagContainer GrantedTags;
			FActiveGameplayEffectHandle ActiveHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectAdded_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectAdded_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectAdded_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::NewProp_ActiveHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnGameplayEffectAdded__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectAdded_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms
		{
			FGameplayTagContainer AssetTags;
			FGameplayTagContainer GrantedTags;
			FActiveGameplayEffectHandle ActiveHandle;
			int32 NewStackCount;
			int32 OldStackCount;
		};
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms, NewStackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms, OldStackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_NewStackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::NewProp_OldStackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnGameplayEffectStackChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnGameplayEffectStackChange_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnAbilityFailed_Parms
		{
			const UGameplayAbility* Ability;
			FGameplayTagContainer ReasonTags;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReasonTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReasonTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnAbilityFailed_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags = { "ReasonTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnAbilityFailed_Parms, ReasonTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::NewProp_ReasonTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnAbilityFailed__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnAbilityFailed_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnAbilityEnded_Parms
		{
			const UGameplayAbility* Ability;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnAbilityEnded_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnAbilityEnded__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnAbilityEnded_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnAbilityActivated_Parms
		{
			const UGameplayAbility* Ability;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnAbilityActivated_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnAbilityActivated__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnAbilityActivated_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms
		{
			FGameplayAttribute Attribute;
			AActor* SourceActor;
			AActor* TargetActor;
			FGameplayTagContainer SourceTags;
			FACFGameplayEffectExecuteData Payload;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms, Payload), Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_SourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnPostGameplayEffectExecute__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnPostGameplayEffectExecute_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnPreAttributeChange_Parms
		{
			UACFAttributeSetBase* AttributeSet;
			FGameplayAttribute Attribute;
			float NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnPreAttributeChange_Parms, AttributeSet), Z_Construct_UClass_UACFAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnPreAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnPreAttributeChange_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnPreAttributeChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnPreAttributeChange_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnAttributeChange_Parms
		{
			FGameplayAttribute Attribute;
			float DeltaValue;
			FGameplayTagContainer EventTags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnAttributeChange_Parms, DeltaValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnAttributeChange_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::NewProp_EventTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnAttributeChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnAttributeChange_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFOnDefaultAttributeChange_Parms
		{
			float DeltaValue;
			FGameplayTagContainer EventTags;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnDefaultAttributeChange_Parms, DeltaValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFOnDefaultAttributeChange_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::NewProp_EventTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnDefaultAttributeChange__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFOnDefaultAttributeChange_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFOnDeath__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClient_BroadcastCooldownStartToHUD)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_AbilitySpecHandle);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CooldownTags);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeRemaining);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastCooldownStartToHUD_Implementation(Z_Param_AbilitySpecHandle,Z_Param_CooldownTags,Z_Param_TimeRemaining,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClient_BroadcastCooldownEndToHUD)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_AbilitySpecHandle);
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastCooldownEndToHUD_Implementation(Z_Param_AbilitySpecHandle,Z_Param_GameplayTag,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClient_BroadcastGameplayTagChangeToHUD)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastGameplayTagChangeToHUD_Implementation(Z_Param_GameplayTag,Z_Param_NewCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClient_BroadcastGameplayEffectRemovedToHUD)
	{
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveHandle);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AssetTags);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GrantedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastGameplayEffectRemovedToHUD_Implementation(Z_Param_ActiveHandle,Z_Param_AssetTags,Z_Param_GrantedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClient_BroadcastGameplayEffectAddedToHUD)
	{
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveHandle);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AssetTags);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GrantedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastGameplayEffectAddedToHUD_Implementation(Z_Param_ActiveHandle,Z_Param_AssetTags,Z_Param_GrantedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClient_BroadcastGameplayEffectTimeChangeToHUD)
	{
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveHandle);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AssetTags);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GrantedTags);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastGameplayEffectTimeChangeToHUD_Implementation(Z_Param_ActiveHandle,Z_Param_AssetTags,Z_Param_GrantedTags,Z_Param_NewStartTime,Z_Param_NewDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClient_BroadcastGameplayEffectStackChangeToHUD)
	{
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveHandle);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AssetTags);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GrantedTags);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewStackCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldStackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastGameplayEffectStackChangeToHUD_Implementation(Z_Param_ActiveHandle,Z_Param_AssetTags,Z_Param_GrantedTags,Z_Param_NewStackCount,Z_Param_OldStackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClient_BroadcastAttributeChangeToHUD)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastAttributeChangeToHUD_Implementation(Z_Param_Attribute,Z_Param_NewValue,Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execAdjustAttributeForMaxChange)
	{
		P_GET_OBJECT_REF(UACFAttributeSetBase,Z_Param_Out_AttributeSet);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_AffectedAttributeProperty);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_MaxAttribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAttributeForMaxChange(Z_Param_Out_AttributeSet,Z_Param_AffectedAttributeProperty,Z_Param_MaxAttribute,Z_Param_NewMaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClampAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClampAttributeValue(Z_Param_Attribute,Z_Param_MinValue,Z_Param_MaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execSetAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttributeValue(Z_Param_Attribute,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execActivateAbilityWithTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
		P_GET_OBJECT_REF(UACFGameplayAbility,Z_Param_Out_ActivatedAbility);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateAbilityWithTags(Z_Param_AbilityTags,Z_Param_Out_ActivatedAbility,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execActivateAbilityWithClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_OBJECT_REF(UACFGameplayAbility,Z_Param_Out_ActivatedAbility);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateAbilityWithClass(Z_Param_AbilityClass,Z_Param_Out_ActivatedAbility,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetActiveAbilitiesWithTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GameplayTagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UACFGameplayAbility*>*)Z_Param__Result=P_THIS->GetActiveAbilitiesWithTags(Z_Param_GameplayTagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execIsUsingAbilityWithTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAbilityWithTags(Z_Param_AbilityTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execIsUsingAbilityWithClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAbilityWithClass(Z_Param_AbilityClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execHasMatchingGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchingGameplayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execHasAnyMatchingGameplayTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyMatchingGameplayTags(Z_Param_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClearAbilities)
	{
		P_GET_TARRAY(TSubclassOf<UACFGameplayAbility> ,Z_Param_Abilities);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAbilities(Z_Param_Abilities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execClearAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAbility(Z_Param_Ability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGrantAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrantAbility(Z_Param_Ability,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetCurrentAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentAttributeValue(Z_Param_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetAttributeValue)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFCoreComponent::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	static FName NAME_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD = FName(TEXT("Client_BroadcastAttributeChangeToHUD"));
	void UACFCoreComponent::Client_BroadcastAttributeChangeToHUD(const FGameplayAttribute Attribute, float NewValue, float OldValue)
	{
		ACFCoreComponent_eventClient_BroadcastAttributeChangeToHUD_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.NewValue=NewValue;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD),&Parms);
	}
	static FName NAME_UACFCoreComponent_Client_BroadcastCooldownEndToHUD = FName(TEXT("Client_BroadcastCooldownEndToHUD"));
	void UACFCoreComponent::Client_BroadcastCooldownEndToHUD(FGameplayAbilitySpecHandle AbilitySpecHandle, FGameplayTag GameplayTag, float Duration)
	{
		ACFCoreComponent_eventClient_BroadcastCooldownEndToHUD_Parms Parms;
		Parms.AbilitySpecHandle=AbilitySpecHandle;
		Parms.GameplayTag=GameplayTag;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UACFCoreComponent_Client_BroadcastCooldownEndToHUD),&Parms);
	}
	static FName NAME_UACFCoreComponent_Client_BroadcastCooldownStartToHUD = FName(TEXT("Client_BroadcastCooldownStartToHUD"));
	void UACFCoreComponent::Client_BroadcastCooldownStartToHUD(FGameplayAbilitySpecHandle AbilitySpecHandle, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration)
	{
		ACFCoreComponent_eventClient_BroadcastCooldownStartToHUD_Parms Parms;
		Parms.AbilitySpecHandle=AbilitySpecHandle;
		Parms.CooldownTags=CooldownTags;
		Parms.TimeRemaining=TimeRemaining;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_UACFCoreComponent_Client_BroadcastCooldownStartToHUD),&Parms);
	}
	static FName NAME_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD = FName(TEXT("Client_BroadcastGameplayEffectAddedToHUD"));
	void UACFCoreComponent::Client_BroadcastGameplayEffectAddedToHUD(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags)
	{
		ACFCoreComponent_eventClient_BroadcastGameplayEffectAddedToHUD_Parms Parms;
		Parms.ActiveHandle=ActiveHandle;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		ProcessEvent(FindFunctionChecked(NAME_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD),&Parms);
	}
	static FName NAME_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD = FName(TEXT("Client_BroadcastGameplayEffectRemovedToHUD"));
	void UACFCoreComponent::Client_BroadcastGameplayEffectRemovedToHUD(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags)
	{
		ACFCoreComponent_eventClient_BroadcastGameplayEffectRemovedToHUD_Parms Parms;
		Parms.ActiveHandle=ActiveHandle;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		ProcessEvent(FindFunctionChecked(NAME_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD),&Parms);
	}
	static FName NAME_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD = FName(TEXT("Client_BroadcastGameplayEffectStackChangeToHUD"));
	void UACFCoreComponent::Client_BroadcastGameplayEffectStackChangeToHUD(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, int32 NewStackCount, int32 OldStackCount)
	{
		ACFCoreComponent_eventClient_BroadcastGameplayEffectStackChangeToHUD_Parms Parms;
		Parms.ActiveHandle=ActiveHandle;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.NewStackCount=NewStackCount;
		Parms.OldStackCount=OldStackCount;
		ProcessEvent(FindFunctionChecked(NAME_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD),&Parms);
	}
	static FName NAME_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD = FName(TEXT("Client_BroadcastGameplayEffectTimeChangeToHUD"));
	void UACFCoreComponent::Client_BroadcastGameplayEffectTimeChangeToHUD(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, float NewStartTime, float NewDuration)
	{
		ACFCoreComponent_eventClient_BroadcastGameplayEffectTimeChangeToHUD_Parms Parms;
		Parms.ActiveHandle=ActiveHandle;
		Parms.AssetTags=AssetTags;
		Parms.GrantedTags=GrantedTags;
		Parms.NewStartTime=NewStartTime;
		Parms.NewDuration=NewDuration;
		ProcessEvent(FindFunctionChecked(NAME_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD),&Parms);
	}
	static FName NAME_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD = FName(TEXT("Client_BroadcastGameplayTagChangeToHUD"));
	void UACFCoreComponent::Client_BroadcastGameplayTagChangeToHUD(FGameplayTag GameplayTag, int32 NewCount) const
	{
		ACFCoreComponent_eventClient_BroadcastGameplayTagChangeToHUD_Parms Parms;
		Parms.GameplayTag=GameplayTag;
		Parms.NewCount=NewCount;
		const_cast<UACFCoreComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD),&Parms);
	}
	void UACFCoreComponent::StaticRegisterNativesUACFCoreComponent()
	{
		UClass* Class = UACFCoreComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbilityWithClass", &UACFCoreComponent::execActivateAbilityWithClass },
			{ "ActivateAbilityWithTags", &UACFCoreComponent::execActivateAbilityWithTags },
			{ "AdjustAttributeForMaxChange", &UACFCoreComponent::execAdjustAttributeForMaxChange },
			{ "ClampAttributeValue", &UACFCoreComponent::execClampAttributeValue },
			{ "ClearAbilities", &UACFCoreComponent::execClearAbilities },
			{ "ClearAbility", &UACFCoreComponent::execClearAbility },
			{ "Client_BroadcastAttributeChangeToHUD", &UACFCoreComponent::execClient_BroadcastAttributeChangeToHUD },
			{ "Client_BroadcastCooldownEndToHUD", &UACFCoreComponent::execClient_BroadcastCooldownEndToHUD },
			{ "Client_BroadcastCooldownStartToHUD", &UACFCoreComponent::execClient_BroadcastCooldownStartToHUD },
			{ "Client_BroadcastGameplayEffectAddedToHUD", &UACFCoreComponent::execClient_BroadcastGameplayEffectAddedToHUD },
			{ "Client_BroadcastGameplayEffectRemovedToHUD", &UACFCoreComponent::execClient_BroadcastGameplayEffectRemovedToHUD },
			{ "Client_BroadcastGameplayEffectStackChangeToHUD", &UACFCoreComponent::execClient_BroadcastGameplayEffectStackChangeToHUD },
			{ "Client_BroadcastGameplayEffectTimeChangeToHUD", &UACFCoreComponent::execClient_BroadcastGameplayEffectTimeChangeToHUD },
			{ "Client_BroadcastGameplayTagChangeToHUD", &UACFCoreComponent::execClient_BroadcastGameplayTagChangeToHUD },
			{ "Die", &UACFCoreComponent::execDie },
			{ "GetActiveAbilitiesWithTags", &UACFCoreComponent::execGetActiveAbilitiesWithTags },
			{ "GetAttributeValue", &UACFCoreComponent::execGetAttributeValue },
			{ "GetCurrentAttributeValue", &UACFCoreComponent::execGetCurrentAttributeValue },
			{ "GetHealth", &UACFCoreComponent::execGetHealth },
			{ "GetMana", &UACFCoreComponent::execGetMana },
			{ "GetMaxHealth", &UACFCoreComponent::execGetMaxHealth },
			{ "GetMaxMana", &UACFCoreComponent::execGetMaxMana },
			{ "GetMaxStamina", &UACFCoreComponent::execGetMaxStamina },
			{ "GetStamina", &UACFCoreComponent::execGetStamina },
			{ "GrantAbility", &UACFCoreComponent::execGrantAbility },
			{ "HasAnyMatchingGameplayTags", &UACFCoreComponent::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", &UACFCoreComponent::execHasMatchingGameplayTag },
			{ "IsAlive", &UACFCoreComponent::execIsAlive },
			{ "IsUsingAbilityWithClass", &UACFCoreComponent::execIsUsingAbilityWithClass },
			{ "IsUsingAbilityWithTags", &UACFCoreComponent::execIsUsingAbilityWithTags },
			{ "SetAttributeValue", &UACFCoreComponent::execSetAttributeValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics
	{
		struct ACFCoreComponent_eventActivateAbilityWithClass_Parms
		{
			TSubclassOf<UACFGameplayAbility>  AbilityClass;
			UACFGameplayAbility* ActivatedAbility;
			bool bAllowRemoteActivation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventActivateAbilityWithClass_Parms, AbilityClass), Z_Construct_UClass_UACFGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_ActivatedAbility = { "ActivatedAbility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventActivateAbilityWithClass_Parms, ActivatedAbility), Z_Construct_UClass_UACFGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventActivateAbilityWithClass_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventActivateAbilityWithClass_Parms), &Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventActivateAbilityWithClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventActivateAbilityWithClass_Parms), &Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_ActivatedAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_bAllowRemoteActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/**\n\x09* Attempts to activate the ability that is passed in. This will check costs and requirements before doing so.\n\x09*\n\x09* Returns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\x09*\n\x09* @param AbilityClass Gameplay Ability Class to activate\n\x09* @param ActivatedAbility The Gameplay Ability that was triggered on success\n\x09* @param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.\n\x09* @return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\x09*/" },
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Attempts to activate the ability that is passed in. This will check costs and requirements before doing so.\n\nReturns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\n@param AbilityClass Gameplay Ability Class to activate\n@param ActivatedAbility The Gameplay Ability that was triggered on success\n@param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.\n@return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "ActivateAbilityWithClass", nullptr, nullptr, sizeof(ACFCoreComponent_eventActivateAbilityWithClass_Parms), Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics
	{
		struct ACFCoreComponent_eventActivateAbilityWithTags_Parms
		{
			FGameplayTagContainer AbilityTags;
			UACFGameplayAbility* ActivatedAbility;
			bool bAllowRemoteActivation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRemoteActivation_MetaData[];
#endif
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_AbilityTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventActivateAbilityWithTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_AbilityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_AbilityTags_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_ActivatedAbility = { "ActivatedAbility", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventActivateAbilityWithTags_Parms, ActivatedAbility), Z_Construct_UClass_UACFGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_bAllowRemoteActivation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventActivateAbilityWithTags_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventActivateAbilityWithTags_Parms), &Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_bAllowRemoteActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_bAllowRemoteActivation_MetaData)) };
	void Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventActivateAbilityWithTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventActivateAbilityWithTags_Parms), &Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_AbilityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_ActivatedAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_bAllowRemoteActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/**\n\x09* Attempts to activate a **single** gameplay ability that matches the given tag and DoesAbilitySatisfyTagRequirements().\n\x09*\n\x09* It differs from GAS ASC TryActivateAbilitiesByTag which tries to activate *every* ability, whereas this version will pick a\n\x09* random one and attempt to activate it.\n\x09*\n\x09* Returns true if the ability attempts to activate, and the reference to the Activated Ability if any.\n\x09*\n\x09* @param AbilityTags Set of Gameplay Tags to search for\n\x09* @param ActivatedAbility The Gameplay Ability that was triggered on success\n\x09* @param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.\n\x09* @return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation.\n\x09*/" },
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Attempts to activate a **single** gameplay ability that matches the given tag and DoesAbilitySatisfyTagRequirements().\n\nIt differs from GAS ASC TryActivateAbilitiesByTag which tries to activate *every* ability, whereas this version will pick a\nrandom one and attempt to activate it.\n\nReturns true if the ability attempts to activate, and the reference to the Activated Ability if any.\n\n@param AbilityTags Set of Gameplay Tags to search for\n@param ActivatedAbility The Gameplay Ability that was triggered on success\n@param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.\n@return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "ActivateAbilityWithTags", nullptr, nullptr, sizeof(ACFCoreComponent_eventActivateAbilityWithTags_Parms), Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics
	{
		struct ACFCoreComponent_eventAdjustAttributeForMaxChange_Parms
		{
			UACFAttributeSetBase* AttributeSet;
			FGameplayAttribute AffectedAttributeProperty;
			FGameplayAttribute MaxAttribute;
			float NewMaxValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedAttributeProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedAttributeProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAttribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000008080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventAdjustAttributeForMaxChange_Parms, AttributeSet), Z_Construct_UClass_UACFAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty = { "AffectedAttributeProperty", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventAdjustAttributeForMaxChange_Parms, AffectedAttributeProperty), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute = { "MaxAttribute", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventAdjustAttributeForMaxChange_Parms, MaxAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_NewMaxValue = { "NewMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventAdjustAttributeForMaxChange_Parms, NewMaxValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::NewProp_NewMaxValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSC|Attributes" },
		{ "Comment", "/**\n\x09* Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.\n\x09* (e.g. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before)\n\x09*\n\x09* @param AttributeSet The AttributeSet owner for the affected attributes\n\x09* @param AffectedAttributeProperty The affected Attribute property\n\x09* @param MaxAttribute The related MaxAttribute\n\x09* @param NewMaxValue The new value for the MaxAttribute\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.\n(e.g. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before)\n\n@param AttributeSet The AttributeSet owner for the affected attributes\n@param AffectedAttributeProperty The affected Attribute property\n@param MaxAttribute The related MaxAttribute\n@param NewMaxValue The new value for the MaxAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "AdjustAttributeForMaxChange", nullptr, nullptr, sizeof(ACFCoreComponent_eventAdjustAttributeForMaxChange_Parms), Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics
	{
		struct ACFCoreComponent_eventClampAttributeValue_Parms
		{
			FGameplayAttribute Attribute;
			float MinValue;
			float MaxValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClampAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClampAttributeValue_Parms, MinValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClampAttributeValue_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::NewProp_MaxValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSC|Attributes" },
		{ "Comment", "/** Clamps the Attribute from MinValue to MaxValue */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Clamps the Attribute from MinValue to MaxValue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "ClampAttributeValue", nullptr, nullptr, sizeof(ACFCoreComponent_eventClampAttributeValue_Parms), Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics
	{
		struct ACFCoreComponent_eventClearAbilities_Parms
		{
			TArray<TSubclassOf<UACFGameplayAbility> > Abilities;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UACFGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClearAbilities_Parms, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::NewProp_Abilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/**\n\x09* Remove an set of abilities from the Actor's Ability System Component\n\x09*\n\x09* @param Abilities Array of Ability Class to remove\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Remove an set of abilities from the Actor's Ability System Component\n\n@param Abilities Array of Ability Class to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "ClearAbilities", nullptr, nullptr, sizeof(ACFCoreComponent_eventClearAbilities_Parms), Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_ClearAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_ClearAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics
	{
		struct ACFCoreComponent_eventClearAbility_Parms
		{
			TSubclassOf<UACFGameplayAbility>  Ability;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClearAbility_Parms, Ability), Z_Construct_UClass_UACFGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/**\n\x09* Remove an ability from the Actor's Ability System Component\n\x09*\n\x09* @param Ability The Gameplay Ability Class to remove\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Remove an ability from the Actor's Ability System Component\n\n@param Ability The Gameplay Ability Class to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "ClearAbility", nullptr, nullptr, sizeof(ACFCoreComponent_eventClearAbility_Parms), Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_ClearAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_ClearAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastAttributeChangeToHUD_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastAttributeChangeToHUD_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastAttributeChangeToHUD_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Client_BroadcastAttributeChangeToHUD", nullptr, nullptr, sizeof(ACFCoreComponent_eventClient_BroadcastAttributeChangeToHUD_Parms), Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastCooldownEndToHUD_Parms, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastCooldownEndToHUD_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastCooldownEndToHUD_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::NewProp_AbilitySpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Client_BroadcastCooldownEndToHUD", nullptr, nullptr, sizeof(ACFCoreComponent_eventClient_BroadcastCooldownEndToHUD_Parms), Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastCooldownStartToHUD_Parms, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_CooldownTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastCooldownStartToHUD_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_CooldownTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_CooldownTags_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastCooldownStartToHUD_Parms, TimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastCooldownStartToHUD_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_AbilitySpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_CooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Client_BroadcastCooldownStartToHUD", nullptr, nullptr, sizeof(ACFCoreComponent_eventClient_BroadcastCooldownStartToHUD_Parms), Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectAddedToHUD_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectAddedToHUD_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectAddedToHUD_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::NewProp_GrantedTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Client_BroadcastGameplayEffectAddedToHUD", nullptr, nullptr, sizeof(ACFCoreComponent_eventClient_BroadcastGameplayEffectAddedToHUD_Parms), Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectRemovedToHUD_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectRemovedToHUD_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectRemovedToHUD_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::NewProp_GrantedTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Client_BroadcastGameplayEffectRemovedToHUD", nullptr, nullptr, sizeof(ACFCoreComponent_eventClient_BroadcastGameplayEffectRemovedToHUD_Parms), Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldStackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectStackChangeToHUD_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectStackChangeToHUD_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectStackChangeToHUD_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectStackChangeToHUD_Parms, NewStackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectStackChangeToHUD_Parms, OldStackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_NewStackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::NewProp_OldStackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Client_BroadcastGameplayEffectStackChangeToHUD", nullptr, nullptr, sizeof(ACFCoreComponent_eventClient_BroadcastGameplayEffectStackChangeToHUD_Parms), Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectTimeChangeToHUD_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectTimeChangeToHUD_Parms, AssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectTimeChangeToHUD_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_NewStartTime = { "NewStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectTimeChangeToHUD_Parms, NewStartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayEffectTimeChangeToHUD_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_ActiveHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_AssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_NewStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Client_BroadcastGameplayEffectTimeChangeToHUD", nullptr, nullptr, sizeof(ACFCoreComponent_eventClient_BroadcastGameplayEffectTimeChangeToHUD_Parms), Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayTagChangeToHUD_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventClient_BroadcastGameplayTagChangeToHUD_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::NewProp_NewCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Client_BroadcastGameplayTagChangeToHUD", nullptr, nullptr, sizeof(ACFCoreComponent_eventClient_BroadcastGameplayTagChangeToHUD_Parms), Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x41020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_Die_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_Die_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Actor" },
		{ "Comment", "/**\n\x09* Triggers death events for the owner actor\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Triggers death events for the owner actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics
	{
		struct ACFCoreComponent_eventGetActiveAbilitiesWithTags_Parms
		{
			FGameplayTagContainer GameplayTagContainer;
			TArray<UACFGameplayAbility*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_GameplayTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_GameplayTagContainer = { "GameplayTagContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetActiveAbilitiesWithTags_Parms, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_GameplayTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_GameplayTagContainer_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UACFGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetActiveAbilitiesWithTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_GameplayTagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/**\n\x09* Returns a list of currently active ability instances that match the given tags\n\x09*\n\x09* This only returns if the ability is currently running\n\x09*\n\x09* @param GameplayTagContainer The Ability Tags to search for\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Returns a list of currently active ability instances that match the given tags\n\nThis only returns if the ability is currently running\n\n@param GameplayTagContainer The Ability Tags to search for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetActiveAbilitiesWithTags", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetActiveAbilitiesWithTags_Parms), Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics
	{
		struct ACFCoreComponent_eventGetAttributeValue_Parms
		{
			FGameplayAttribute Attribute;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/** Returns the current value of an attribute (base value). That is, the value of the attribute with no stateful modifiers */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Returns the current value of an attribute (base value). That is, the value of the attribute with no stateful modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetAttributeValue_Parms), Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics
	{
		struct ACFCoreComponent_eventGetCurrentAttributeValue_Parms
		{
			FGameplayAttribute Attribute;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetCurrentAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetCurrentAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/** Returns current (final) value of an attribute */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Returns current (final) value of an attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetCurrentAttributeValue", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetCurrentAttributeValue_Parms), Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics
	{
		struct ACFCoreComponent_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetHealth", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetHealth_Parms), Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics
	{
		struct ACFCoreComponent_eventGetMana_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetMana", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetMana_Parms), Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics
	{
		struct ACFCoreComponent_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetMaxHealth_Parms), Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics
	{
		struct ACFCoreComponent_eventGetMaxMana_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetMaxMana", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetMaxMana_Parms), Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics
	{
		struct ACFCoreComponent_eventGetMaxStamina_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetMaxStamina", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetMaxStamina_Parms), Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics
	{
		struct ACFCoreComponent_eventGetStamina_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GetStamina", nullptr, nullptr, sizeof(ACFCoreComponent_eventGetStamina_Parms), Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics
	{
		struct ACFCoreComponent_eventGrantAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  Ability;
			int32 Level;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGrantAbility_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventGrantAbility_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/**\n\x09* Grants the Actor with the given ability, making it available for activation\n\x09*\n\x09* @param Ability The Gameplay Ability to give to the character\n\x09* @param Level The Gameplay Ability Level (defaults to 1)\n\x09*/" },
		{ "CPP_Default_Level", "1" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Grants the Actor with the given ability, making it available for activation\n\n@param Ability The Gameplay Ability to give to the character\n@param Level The Gameplay Ability Level (defaults to 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "GrantAbility", nullptr, nullptr, sizeof(ACFCoreComponent_eventGrantAbility_Parms), Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics
	{
		struct ACFCoreComponent_eventHasAnyMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/**\n\x09* Returns true if Actor's AbilitySystemComponent has any of the matching tags (expands to include parents of asset tags)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Returns true if Actor's AbilitySystemComponent has any of the matching tags (expands to include parents of asset tags)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, sizeof(ACFCoreComponent_eventHasAnyMatchingGameplayTags_Parms), Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics
	{
		struct ACFCoreComponent_eventHasMatchingGameplayTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck_MetaData)) };
	void Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/**\n\x09* Returns true if Actor's AbilitySystemComponent has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Returns true if Actor's AbilitySystemComponent has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, sizeof(ACFCoreComponent_eventHasMatchingGameplayTag_Parms), Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics
	{
		struct ACFCoreComponent_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/** Returns whether or not the Actor is considered alive (Health > 0) */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Returns whether or not the Actor is considered alive (Health > 0)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "IsAlive", nullptr, nullptr, sizeof(ACFCoreComponent_eventIsAlive_Parms), Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics
	{
		struct ACFCoreComponent_eventIsUsingAbilityWithClass_Parms
		{
			TSubclassOf<UACFGameplayAbility>  AbilityClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventIsUsingAbilityWithClass_Parms, AbilityClass), Z_Construct_UClass_UACFGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventIsUsingAbilityWithClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventIsUsingAbilityWithClass_Parms), &Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/** Returns whether one of the actors's active abilities are matching the provided Ability Class */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Returns whether one of the actors's active abilities are matching the provided Ability Class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "IsUsingAbilityWithClass", nullptr, nullptr, sizeof(ACFCoreComponent_eventIsUsingAbilityWithClass_Parms), Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics
	{
		struct ACFCoreComponent_eventIsUsingAbilityWithTags_Parms
		{
			FGameplayTagContainer AbilityTags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventIsUsingAbilityWithTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFCoreComponent_eventIsUsingAbilityWithTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFCoreComponent_eventIsUsingAbilityWithTags_Parms), &Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::NewProp_AbilityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Attributes" },
		{ "Comment", "/** Returns whether one of the character's active abilities are matching the provided tags */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Returns whether one of the character's active abilities are matching the provided tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "IsUsingAbilityWithTags", nullptr, nullptr, sizeof(ACFCoreComponent_eventIsUsingAbilityWithTags_Parms), Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics
	{
		struct ACFCoreComponent_eventSetAttributeValue_Parms
		{
			FGameplayAttribute Attribute;
			float NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventSetAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCoreComponent_eventSetAttributeValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSC|Attributes" },
		{ "Comment", "/** Sets the base value of an attribute. Existing active modifiers are NOT cleared and will act upon the new base value. */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Sets the base value of an attribute. Existing active modifiers are NOT cleared and will act upon the new base value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFCoreComponent, nullptr, "SetAttributeValue", nullptr, nullptr, sizeof(ACFCoreComponent_eventSetAttributeValue_Parms), Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFCoreComponent_NoRegister()
	{
		return UACFCoreComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFCoreComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAbilitySystemComponent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegisteredAttributeSetNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredAttributeSetNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredAttributeSetNames;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAttributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostGameplayEffectExecute_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostGameplayEffectExecute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreAttributeChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreAttributeChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityActivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectStackChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectStackChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectTimeChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectTimeChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayTagChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayTagChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCommit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCommit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFCoreComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFCoreComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithClass, "ActivateAbilityWithClass" }, // 245150037
		{ &Z_Construct_UFunction_UACFCoreComponent_ActivateAbilityWithTags, "ActivateAbilityWithTags" }, // 2088045671
		{ &Z_Construct_UFunction_UACFCoreComponent_AdjustAttributeForMaxChange, "AdjustAttributeForMaxChange" }, // 2616517294
		{ &Z_Construct_UFunction_UACFCoreComponent_ClampAttributeValue, "ClampAttributeValue" }, // 1365191864
		{ &Z_Construct_UFunction_UACFCoreComponent_ClearAbilities, "ClearAbilities" }, // 1452548766
		{ &Z_Construct_UFunction_UACFCoreComponent_ClearAbility, "ClearAbility" }, // 2933865608
		{ &Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastAttributeChangeToHUD, "Client_BroadcastAttributeChangeToHUD" }, // 3643859097
		{ &Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownEndToHUD, "Client_BroadcastCooldownEndToHUD" }, // 2065792169
		{ &Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastCooldownStartToHUD, "Client_BroadcastCooldownStartToHUD" }, // 2707832284
		{ &Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectAddedToHUD, "Client_BroadcastGameplayEffectAddedToHUD" }, // 4116151933
		{ &Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectRemovedToHUD, "Client_BroadcastGameplayEffectRemovedToHUD" }, // 1240132476
		{ &Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectStackChangeToHUD, "Client_BroadcastGameplayEffectStackChangeToHUD" }, // 846980495
		{ &Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayEffectTimeChangeToHUD, "Client_BroadcastGameplayEffectTimeChangeToHUD" }, // 2834552216
		{ &Z_Construct_UFunction_UACFCoreComponent_Client_BroadcastGameplayTagChangeToHUD, "Client_BroadcastGameplayTagChangeToHUD" }, // 4234212385
		{ &Z_Construct_UFunction_UACFCoreComponent_Die, "Die" }, // 1125104939
		{ &Z_Construct_UFunction_UACFCoreComponent_GetActiveAbilitiesWithTags, "GetActiveAbilitiesWithTags" }, // 1647088424
		{ &Z_Construct_UFunction_UACFCoreComponent_GetAttributeValue, "GetAttributeValue" }, // 2345408864
		{ &Z_Construct_UFunction_UACFCoreComponent_GetCurrentAttributeValue, "GetCurrentAttributeValue" }, // 2926064741
		{ &Z_Construct_UFunction_UACFCoreComponent_GetHealth, "GetHealth" }, // 4117536204
		{ &Z_Construct_UFunction_UACFCoreComponent_GetMana, "GetMana" }, // 1483723453
		{ &Z_Construct_UFunction_UACFCoreComponent_GetMaxHealth, "GetMaxHealth" }, // 2523839180
		{ &Z_Construct_UFunction_UACFCoreComponent_GetMaxMana, "GetMaxMana" }, // 1190062321
		{ &Z_Construct_UFunction_UACFCoreComponent_GetMaxStamina, "GetMaxStamina" }, // 1377990398
		{ &Z_Construct_UFunction_UACFCoreComponent_GetStamina, "GetStamina" }, // 3280741171
		{ &Z_Construct_UFunction_UACFCoreComponent_GrantAbility, "GrantAbility" }, // 3866429517
		{ &Z_Construct_UFunction_UACFCoreComponent_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 2635708632
		{ &Z_Construct_UFunction_UACFCoreComponent_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 3616836284
		{ &Z_Construct_UFunction_UACFCoreComponent_IsAlive, "IsAlive" }, // 248923056
		{ &Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithClass, "IsUsingAbilityWithClass" }, // 4019721002
		{ &Z_Construct_UFunction_UACFCoreComponent_IsUsingAbilityWithTags, "IsUsingAbilityWithTags" }, // 1209397284
		{ &Z_Construct_UFunction_UACFCoreComponent_SetAttributeValue, "SetAttributeValue" }, // 2832881400
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/Components/ACFCoreComponent.h" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent = { "OwnerAbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OwnerAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_RegisteredAttributeSetNames_Inner = { "RegisteredAttributeSetNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_RegisteredAttributeSetNames_MetaData[] = {
		{ "Comment", "// Keep track of registered attribute sets to avoid adding it twice\n" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Keep track of registered attribute sets to avoid adding it twice" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_RegisteredAttributeSetNames = { "RegisteredAttributeSetNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, RegisteredAttributeSetNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_RegisteredAttributeSetNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_RegisteredAttributeSetNames_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAbilities_Inner = { "StartupAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAbilities_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/** Default abilities for this actor. These are granted when the actor spawns */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Default abilities for this actor. These are granted when the actor spawns" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAbilities = { "StartupAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, StartupAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAbilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAttributes_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/** Default Gameplay Effect applied to the actor to initialize attributes on spawn/respawn */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Default Gameplay Effect applied to the actor to initialize attributes on spawn/respawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAttributes = { "StartupAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, StartupAttributes), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAttributes_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupEffects_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/** Default Gameplay Effects applied to the actor on spawn/respawn */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Default Gameplay Effects applied to the actor on spawn/respawn" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDamage_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09* Called when character takes damage, which may have killed them\n\x09*\n\x09* @param DamageAmount Amount of damage that was done, not clamped based on current health\n\x09* @param SourceCharacter The actual actor that did the damage\n\x09* @param DamageTags The gameplay tags of the event that did the damage\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when character takes damage, which may have killed them\n\n@param DamageAmount Amount of damage that was done, not clamped based on current health\n@param SourceCharacter The actual actor that did the damage\n@param DamageTags The gameplay tags of the event that did the damage" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDamage = { "OnDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnDamage), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDamage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnHealthChange_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09* Called when health is changed, either from healing or from being damaged\n\x09* For damage this is called in addition to OnDamaged/OnDeath\n\x09*\n\x09* @param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown\n\x09* @param EventTags The gameplay tags of the event that changed mana\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when health is changed, either from healing or from being damaged\nFor damage this is called in addition to OnDamaged/OnDeath\n\n@param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnHealthChange = { "OnHealthChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnHealthChange), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnHealthChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnHealthChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnStaminaChange_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09* Called when stamina is changed, either from regen  or from being used as a cost\n\x09*\n\x09* @param DeltaValue Change in stamina value, positive for heal, negative for cost. If 0 the delta is unknown\n\x09* @param EventTags The gameplay tags of the event that changed mana\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when stamina is changed, either from regen  or from being used as a cost\n\n@param DeltaValue Change in stamina value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnStaminaChange = { "OnStaminaChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnStaminaChange), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnStaminaChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnStaminaChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnManaChange_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09* Called when mana is changed, either from healing or from being used as a cost\n\x09*\n\x09* @param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown\n\x09* @param EventTags The gameplay tags of the event that changed mana\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when mana is changed, either from healing or from being used as a cost\n\n@param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnManaChange = { "OnManaChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnManaChange), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDefaultAttributeChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnManaChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnManaChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAttributeChange_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09* Called when any of the attributes owned by this character are changed\n\x09*\n\x09* @param Attribute The Attribute that was changed\n\x09* @param DeltaValue It it was an additive operation, returns the modifier value.\n\x09*                   Or if it was a change coming from damage meta attribute (for health),\n\x09*                   returns the damage done.\n\x09* @param EventTags The gameplay tags of the event that changed this attribute\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when any of the attributes owned by this character are changed\n\n@param Attribute The Attribute that was changed\n@param DeltaValue It it was an additive operation, returns the modifier value.\n                  Or if it was a change coming from damage meta attribute (for health),\n                  returns the damage done.\n@param EventTags The gameplay tags of the event that changed this attribute" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAttributeChange = { "OnAttributeChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnAttributeChange), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAttributeChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAttributeChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAttributeChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDeath_MetaData[] = {
		{ "Category", "ACF | Actor" },
		{ "Comment", "/**\n\x09\x09* Called when character dies\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when character dies" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnDeath), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnDeath__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDeath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute_MetaData[] = {
		{ "Category", "GSC|Attributes" },
		{ "Comment", "/**\n\x09* PostGameplayEffectExecute event fired off from native AttributeSets, define here\n\x09* any attribute change specific management you are not doing in c++ (like clamp)\n\x09*\n\x09* Only triggers after changes to the BaseValue of an Attribute from a GameplayEffect.\n\x09*\n\x09* @param Attribute The affected GameplayAttribute\n\x09* @param SourceActor The instigator Actor that started the whole chain (in case of damage, that would be the damage causer)\n\x09* @param TargetActor The owner Actor to which the Attribute change is applied\n\x09* @param SourceTags The aggregated SourceTags for this EffectSpec\n\x09* @param Payload Payload information with the original AttributeSet, the owning AbilitySystemComponent, calculated DeltaValue and the ClampMinimumValue from config if defined\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "PostGameplayEffectExecute event fired off from native AttributeSets, define here\nany attribute change specific management you are not doing in c++ (like clamp)\n\nOnly triggers after changes to the BaseValue of an Attribute from a GameplayEffect.\n\n@param Attribute The affected GameplayAttribute\n@param SourceActor The instigator Actor that started the whole chain (in case of damage, that would be the damage causer)\n@param TargetActor The owner Actor to which the Attribute change is applied\n@param SourceTags The aggregated SourceTags for this EffectSpec\n@param Payload Payload information with the original AttributeSet, the owning AbilitySystemComponent, calculated DeltaValue and the ClampMinimumValue from config if defined" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute = { "OnPostGameplayEffectExecute", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnPostGameplayEffectExecute), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPostGameplayEffectExecute__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPreAttributeChange_MetaData[] = {
		{ "Category", "GSC|Attributes" },
		{ "Comment", "/**\n\x09* PreAttributeChange event fired off from native AttributeSets, react here to\n\x09* changes of Attributes CurrentValue before the modification to the BaseValue\n\x09* happens.\n\x09*\n\x09* Called just before any modification happens to an attribute, whether using\n\x09* Attribute setters or using GameplayEffect.\n\x09*\n\x09* @param AttributeSet The AttributeSet that started the change\n\x09* @param Attribute The affected GameplayAttribute\n\x09* @param NewValue The new value\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "PreAttributeChange event fired off from native AttributeSets, react here to\nchanges of Attributes CurrentValue before the modification to the BaseValue\nhappens.\n\nCalled just before any modification happens to an attribute, whether using\nAttribute setters or using GameplayEffect.\n\n@param AttributeSet The AttributeSet that started the change\n@param Attribute The affected GameplayAttribute\n@param NewValue The new value" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPreAttributeChange = { "OnPreAttributeChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnPreAttributeChange), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnPreAttributeChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPreAttributeChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPreAttributeChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityActivated_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09 * Called when an ability is activated for the owner actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when an ability is activated for the owner actor" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityActivated = { "OnAbilityActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnAbilityActivated), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityActivated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityActivated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityEnded_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09 * Called when an ability is ended for the owner actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when an ability is ended for the owner actor." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityEnded = { "OnAbilityEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnAbilityEnded), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityEnded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityFailed_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09 * Called when an ability failed to activated for the owner actor, passes along the failed ability\n\x09 * and a tag explaining why.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when an ability failed to activated for the owner actor, passes along the failed ability\nand a tag explaining why." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityFailed = { "OnAbilityFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnAbilityFailed), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityFailed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectStackChange_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09 * Called when a GameplayEffect is added or removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when a GameplayEffect is added or removed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectStackChange = { "OnGameplayEffectStackChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnGameplayEffectStackChange), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectStackChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectStackChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectStackChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09 * Called when a GameplayEffect duration is changed (for instance when duration is refreshed)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when a GameplayEffect duration is changed (for instance when duration is refreshed)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange = { "OnGameplayEffectTimeChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnGameplayEffectTimeChange), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectTimeChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectAdded_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09 * Called when a GameplayEffect is added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when a GameplayEffect is added." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectAdded = { "OnGameplayEffectAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnGameplayEffectAdded), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectAdded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectRemoved_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/**\n\x09 * Called when a GameplayEffect is removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when a GameplayEffect is removed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectRemoved = { "OnGameplayEffectRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnGameplayEffectRemoved), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayEffectRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectRemoved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayTagChange_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/** Called whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events) */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayTagChange = { "OnGameplayTagChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnGameplayTagChange), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnGameplayTagStackChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayTagChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayTagChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityCommit_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/** Called whenever an ability is committed (cost / cooldown are applied) */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called whenever an ability is committed (cost / cooldown are applied)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityCommit = { "OnAbilityCommit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnAbilityCommit), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnAbilityCommit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityCommit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityCommit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownStart_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/** Called when an ability with a valid cooldown is committed and cooldown is applied */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when an ability with a valid cooldown is committed and cooldown is applied" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownStart = { "OnCooldownStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnCooldownStart), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownEnd_MetaData[] = {
		{ "Category", "ACF | Abilities" },
		{ "Comment", "/** Called when a cooldown gameplay tag is removed, meaning cooldown expired */" },
		{ "ModuleRelativePath", "Public/Core/Components/ACFCoreComponent.h" },
		{ "ToolTip", "Called when a cooldown gameplay tag is removed, meaning cooldown expired" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownEnd = { "OnCooldownEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFCoreComponent, OnCooldownEnd), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFOnCooldownEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFCoreComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OwnerAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_RegisteredAttributeSetNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_RegisteredAttributeSetNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_StartupEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnHealthChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnStaminaChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnManaChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAttributeChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPostGameplayEffectExecute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnPreAttributeChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectStackChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectTimeChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayEffectRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnGameplayTagChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnAbilityCommit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFCoreComponent_Statics::NewProp_OnCooldownEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFCoreComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFCoreComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFCoreComponent_Statics::ClassParams = {
		&UACFCoreComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFCoreComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UACFCoreComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFCoreComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFCoreComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFCoreComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFCoreComponent, 1135904202);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFCoreComponent>()
	{
		return UACFCoreComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFCoreComponent(Z_Construct_UClass_UACFCoreComponent, &UACFCoreComponent::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFCoreComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFCoreComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
