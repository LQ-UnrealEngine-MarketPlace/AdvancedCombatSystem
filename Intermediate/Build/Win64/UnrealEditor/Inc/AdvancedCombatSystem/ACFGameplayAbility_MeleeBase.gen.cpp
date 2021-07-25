// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFGameplayAbility_MeleeBase() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility_MeleeBase_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility_MeleeBase();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityComboManagerComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UACFGameplayAbility_MeleeBase::execGetNextComboMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetNextComboMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGameplayAbility_MeleeBase::execOnEventReceived)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventReceived(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGameplayAbility_MeleeBase::execOnMontageCompleted)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageCompleted(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFGameplayAbility_MeleeBase::execOnMontageCancelled)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageCancelled(Z_Param_EventTag,Z_Param_EventData);
		P_NATIVE_END;
	}
	void UACFGameplayAbility_MeleeBase::StaticRegisterNativesUACFGameplayAbility_MeleeBase()
	{
		UClass* Class = UACFGameplayAbility_MeleeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextComboMontage", &UACFGameplayAbility_MeleeBase::execGetNextComboMontage },
			{ "OnEventReceived", &UACFGameplayAbility_MeleeBase::execOnEventReceived },
			{ "OnMontageCancelled", &UACFGameplayAbility_MeleeBase::execOnMontageCancelled },
			{ "OnMontageCompleted", &UACFGameplayAbility_MeleeBase::execOnMontageCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics
	{
		struct ACFGameplayAbility_MeleeBase_eventGetNextComboMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_MeleeBase_eventGetNextComboMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GSC|Ability|Melee" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGameplayAbility_MeleeBase, nullptr, "GetNextComboMontage", nullptr, nullptr, sizeof(ACFGameplayAbility_MeleeBase_eventGetNextComboMontage_Parms), Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics
	{
		struct ACFGameplayAbility_MeleeBase_eventOnEventReceived_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_MeleeBase_eventOnEventReceived_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_MeleeBase_eventOnEventReceived_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGameplayAbility_MeleeBase, nullptr, "OnEventReceived", nullptr, nullptr, sizeof(ACFGameplayAbility_MeleeBase_eventOnEventReceived_Parms), Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics
	{
		struct ACFGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGameplayAbility_MeleeBase, nullptr, "OnMontageCancelled", nullptr, nullptr, sizeof(ACFGameplayAbility_MeleeBase_eventOnMontageCancelled_Parms), Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics
	{
		struct ACFGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFGameplayAbility_MeleeBase, nullptr, "OnMontageCompleted", nullptr, nullptr, sizeof(ACFGameplayAbility_MeleeBase_eventOnMontageCompleted_Parms), Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFGameplayAbility_MeleeBase_NoRegister()
	{
		return UACFGameplayAbility_MeleeBase::StaticClass();
	}
	struct Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComboManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComboManagerComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Montages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitForEventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaitForEventTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_GetNextComboMontage, "GetNextComboMontage" }, // 2469516892
		{ &Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnEventReceived, "OnEventReceived" }, // 3502044942
		{ &Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCancelled, "OnMontageCancelled" }, // 4077742119
		{ &Z_Construct_UFunction_UACFGameplayAbility_MeleeBase_OnMontageCompleted, "OnMontageCompleted" }, // 1269944461
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_AbilityComboManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_AbilityComboManagerComponent = { "AbilityComboManagerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFGameplayAbility_MeleeBase, AbilityComboManagerComponent), Z_Construct_UClass_UACFAbilityComboManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_AbilityComboManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_AbilityComboManagerComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Montages_Inner = { "Montages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Montages_MetaData[] = {
		{ "Category", "Montages" },
		{ "Comment", "/** List of animation montages you want to cycle through when activating this ability */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
		{ "ToolTip", "List of animation montages you want to cycle through when activating this ability" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFGameplayAbility_MeleeBase, Montages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Montages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "Montages" },
		{ "Comment", "/** Change to play the montage faster or slower */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
		{ "ToolTip", "Change to play the montage faster or slower" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFGameplayAbility_MeleeBase, Rate), METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag_MetaData[] = {
		{ "Category", "Montages" },
		{ "Comment", "/** Any gameplay events matching this tag will activate the OnEventReceived callback and apply the gameplay effect containers for this ability */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ACFGameplayAbility_MeleeBase.h" },
		{ "ToolTip", "Any gameplay events matching this tag will activate the OnEventReceived callback and apply the gameplay effect containers for this ability" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag = { "WaitForEventTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFGameplayAbility_MeleeBase, WaitForEventTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_AbilityComboManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Montages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Montages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::NewProp_WaitForEventTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFGameplayAbility_MeleeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::ClassParams = {
		&UACFGameplayAbility_MeleeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFGameplayAbility_MeleeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFGameplayAbility_MeleeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFGameplayAbility_MeleeBase, 1471267440);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFGameplayAbility_MeleeBase>()
	{
		return UACFGameplayAbility_MeleeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFGameplayAbility_MeleeBase(Z_Construct_UClass_UACFGameplayAbility_MeleeBase, &UACFGameplayAbility_MeleeBase::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFGameplayAbility_MeleeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFGameplayAbility_MeleeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
