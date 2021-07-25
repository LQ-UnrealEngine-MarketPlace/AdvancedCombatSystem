// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/Abilities/ACFGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGameplayAbility() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec();
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "OnAbilityEnded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UACFGameplayAbility::execApplyEffectContainer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainer(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGameplayAbility::execApplyEffectContainerSpec)
	{
		P_GET_STRUCT_REF(FRPGGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainerSpec(Z_Param_Out_ContainerSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGameplayAbility::execMakeEffectContainerSpec)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpec(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGameplayAbility::execMakeEffectContainerSpecFromContainer)
	{
		P_GET_STRUCT_REF(FRPGGameplayEffectContainer,Z_Param_Out_Container);
		P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRPGGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpecFromContainer(Z_Param_Out_Container,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
		P_NATIVE_END;
	}
	void UACFGameplayAbility::StaticRegisterNativesUACFGameplayAbility()
	{
		UClass* Class = UACFGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffectContainer", &UACFGameplayAbility::execApplyEffectContainer },
			{ "ApplyEffectContainerSpec", &UACFGameplayAbility::execApplyEffectContainerSpec },
			{ "MakeEffectContainerSpec", &UACFGameplayAbility::execMakeEffectContainerSpec },
			{ "MakeEffectContainerSpecFromContainer", &UACFGameplayAbility::execMakeEffectContainerSpecFromContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics
	{
		struct ACFGameplayAbility_eventApplyEffectContainer_Parms
		{
			FGameplayTag ContainerTag;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			TArray<FActiveGameplayEffectHandle> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventApplyEffectContainer_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventApplyEffectContainer_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventApplyEffectContainer_Parms, OverrideGameplayLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventApplyEffectContainer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_ContainerTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_OverrideGameplayLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "ACF | Ability" },
		{ "Comment", "/** Applies a gameplay effect container, by creating and then applying the spec */" },
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "Applies a gameplay effect container, by creating and then applying the spec" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGameplayAbility, nullptr, "ApplyEffectContainer", nullptr, nullptr, sizeof(ACFGameplayAbility_eventApplyEffectContainer_Parms), Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics
	{
		struct ACFGameplayAbility_eventApplyEffectContainerSpec_Parms
		{
			FRPGGameplayEffectContainerSpec ContainerSpec;
			TArray<FActiveGameplayEffectHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventApplyEffectContainerSpec_Parms, ContainerSpec), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventApplyEffectContainerSpec_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Ability" },
		{ "Comment", "/** Applies a gameplay effect container spec that was previously created */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "Applies a gameplay effect container spec that was previously created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGameplayAbility, nullptr, "ApplyEffectContainerSpec", nullptr, nullptr, sizeof(ACFGameplayAbility_eventApplyEffectContainerSpec_Parms), Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics
	{
		struct ACFGameplayAbility_eventMakeEffectContainerSpec_Parms
		{
			FGameplayTag ContainerTag;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			FRPGGameplayEffectContainerSpec ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventMakeEffectContainerSpec_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventMakeEffectContainerSpec_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventMakeEffectContainerSpec_Parms, OverrideGameplayLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventMakeEffectContainerSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ContainerTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_OverrideGameplayLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "ACF | Ability" },
		{ "Comment", "/** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */" },
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGameplayAbility, nullptr, "MakeEffectContainerSpec", nullptr, nullptr, sizeof(ACFGameplayAbility_eventMakeEffectContainerSpec_Parms), Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics
	{
		struct ACFGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms
		{
			FRPGGameplayEffectContainer Container;
			FGameplayEventData EventData;
			int32 OverrideGameplayLevel;
			FRPGGameplayEffectContainerSpec ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, Container), Z_Construct_UScriptStruct_FRPGGameplayEffectContainer, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, OverrideGameplayLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_OverrideGameplayLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "ACF | Ability" },
		{ "Comment", "/** Make gameplay effect container spec to be applied later, using the passed in container */" },
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "Make gameplay effect container spec to be applied later, using the passed in container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGameplayAbility, nullptr, "MakeEffectContainerSpecFromContainer", nullptr, nullptr, sizeof(ACFGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms), Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFGameplayAbility_NoRegister()
	{
		return UACFGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UACFGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAbilityCost_MetaData[];
#endif
		static void NewProp_bIgnoreAbilityCost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAbilityCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAbilityQueue_MetaData[];
#endif
		static void NewProp_bEnableAbilityQueue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAbilityQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContainerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EffectContainerMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityEnded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainer, "ApplyEffectContainer" }, // 4082864415
		{ &Z_Construct_UFunction_UACFGameplayAbility_ApplyEffectContainerSpec, "ApplyEffectContainerSpec" }, // 3611725975
		{ &Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpec, "MakeEffectContainerSpec" }, // 672808238
		{ &Z_Construct_UFunction_UACFGameplayAbility_MakeEffectContainerSpecFromContainer, "MakeEffectContainerSpecFromContainer" }, // 1975457938
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subclass of ability blueprint type with game-specific data\n * This class uses GameplayEffectContainers to allow easier execution of gameplay effects based on a triggering tag\n * Most games will need to implement a subclass to support their game-specific code\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "Subclass of ability blueprint type with game-specific data\nThis class uses GameplayEffectContainers to allow easier execution of gameplay effects based on a triggering tag\nMost games will need to implement a subclass to support their game-specific code" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bIgnoreAbilityCost_MetaData[] = {
		{ "Category", "ACF | Debugs" },
		{ "Comment", "/** if true, the ability can be activated even it the cost is going into negative values */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "if true, the ability can be activated even it the cost is going into negative values" },
	};
#endif
	void Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bIgnoreAbilityCost_SetBit(void* Obj)
	{
		((UACFGameplayAbility*)Obj)->bIgnoreAbilityCost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bIgnoreAbilityCost = { "bIgnoreAbilityCost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFGameplayAbility), &Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bIgnoreAbilityCost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bIgnoreAbilityCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bIgnoreAbilityCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bEnableAbilityQueue_MetaData[] = {
		{ "Category", "ACF | Ability" },
		{ "Comment", "/**\n\x09 * Enable other abilities to be queued and activated when this ability ends.\n\x09 *\n\x09 * It is recommended to leave this variable to false, and instead use the AbilityQueueNotifyState (AbilityQueueWindow)\n\x09 * within montages to further tune when the Queue System is opened and closed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "Enable other abilities to be queued and activated when this ability ends.\n\nIt is recommended to leave this variable to false, and instead use the AbilityQueueNotifyState (AbilityQueueWindow)\nwithin montages to further tune when the Queue System is opened and closed." },
	};
#endif
	void Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bEnableAbilityQueue_SetBit(void* Obj)
	{
		((UACFGameplayAbility*)Obj)->bEnableAbilityQueue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bEnableAbilityQueue = { "bEnableAbilityQueue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFGameplayAbility), &Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bEnableAbilityQueue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bEnableAbilityQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bEnableAbilityQueue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap_ValueProp = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRPGGameplayEffectContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap_Key_KeyProp = { "EffectContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData[] = {
		{ "Category", "ACF | GameplayEffects" },
		{ "Comment", "/** Map of gameplay tags to gameplay effect containers */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "Map of gameplay tags to gameplay effect containers" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFGameplayAbility, EffectContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_OnAbilityEnded_MetaData[] = {
		{ "Category", "GSC|Ability" },
		{ "Comment", "/**\n\x09 * Called when the ability ends.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility.h" },
		{ "ToolTip", "Called when the ability ends." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_OnAbilityEnded = { "OnAbilityEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFGameplayAbility, OnAbilityEnded), Z_Construct_UDelegateFunction_AdvancedCombatSystem_OnAbilityEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_OnAbilityEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_OnAbilityEnded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bIgnoreAbilityCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_bEnableAbilityQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_EffectContainerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_Statics::NewProp_OnAbilityEnded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFGameplayAbility_Statics::ClassParams = {
		&UACFGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFGameplayAbility, 764513470);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFGameplayAbility>()
	{
		return UACFGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFGameplayAbility(Z_Construct_UClass_UACFGameplayAbility, &UACFGameplayAbility::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
