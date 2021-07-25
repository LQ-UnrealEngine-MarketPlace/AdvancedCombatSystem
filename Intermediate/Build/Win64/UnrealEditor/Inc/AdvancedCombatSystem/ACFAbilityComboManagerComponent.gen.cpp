// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAbilityComboManagerComponent() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityComboManagerComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityComboManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFCharacterBase_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilitySystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UACFAbilityComboManagerComponent::execNetMulticast_SetComboIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InComboIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMulticast_SetComboIndex_Implementation(Z_Param_InComboIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityComboManagerComponent::execServer_SetComboIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InComboIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetComboIndex_Implementation(Z_Param_InComboIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityComboManagerComponent::execNetMulticast_ActivateComboAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMulticast_ActivateComboAbility_Implementation(Z_Param_AbilityClass,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityComboManagerComponent::execServer_ActivateComboAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ActivateComboAbility_Implementation(Z_Param_AbilityClass,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityComboManagerComponent::execActivateComboAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateComboAbility(Z_Param_AbilityClass,Z_Param_bAllowRemoteActivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityComboManagerComponent::execResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityComboManagerComponent::execIncrementCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementCombo();
		P_NATIVE_END;
	}
	static FName NAME_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility = FName(TEXT("NetMulticast_ActivateComboAbility"));
	void UACFAbilityComboManagerComponent::NetMulticast_ActivateComboAbility(TSubclassOf<UACFGameplayAbility>  AbilityClass, bool bAllowRemoteActivation)
	{
		ACFAbilityComboManagerComponent_eventNetMulticast_ActivateComboAbility_Parms Parms;
		Parms.AbilityClass=AbilityClass;
		Parms.bAllowRemoteActivation=bAllowRemoteActivation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility),&Parms);
	}
	static FName NAME_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex = FName(TEXT("NetMulticast_SetComboIndex"));
	void UACFAbilityComboManagerComponent::NetMulticast_SetComboIndex(int32 InComboIndex)
	{
		ACFAbilityComboManagerComponent_eventNetMulticast_SetComboIndex_Parms Parms;
		Parms.InComboIndex=InComboIndex;
		ProcessEvent(FindFunctionChecked(NAME_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex),&Parms);
	}
	static FName NAME_UACFAbilityComboManagerComponent_Server_ActivateComboAbility = FName(TEXT("Server_ActivateComboAbility"));
	void UACFAbilityComboManagerComponent::Server_ActivateComboAbility(TSubclassOf<UACFGameplayAbility>  AbilityClass, bool bAllowRemoteActivation)
	{
		ACFAbilityComboManagerComponent_eventServer_ActivateComboAbility_Parms Parms;
		Parms.AbilityClass=AbilityClass;
		Parms.bAllowRemoteActivation=bAllowRemoteActivation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UACFAbilityComboManagerComponent_Server_ActivateComboAbility),&Parms);
	}
	static FName NAME_UACFAbilityComboManagerComponent_Server_SetComboIndex = FName(TEXT("Server_SetComboIndex"));
	void UACFAbilityComboManagerComponent::Server_SetComboIndex(int32 InComboIndex)
	{
		ACFAbilityComboManagerComponent_eventServer_SetComboIndex_Parms Parms;
		Parms.InComboIndex=InComboIndex;
		ProcessEvent(FindFunctionChecked(NAME_UACFAbilityComboManagerComponent_Server_SetComboIndex),&Parms);
	}
	void UACFAbilityComboManagerComponent::StaticRegisterNativesUACFAbilityComboManagerComponent()
	{
		UClass* Class = UACFAbilityComboManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateComboAbility", &UACFAbilityComboManagerComponent::execActivateComboAbility },
			{ "IncrementCombo", &UACFAbilityComboManagerComponent::execIncrementCombo },
			{ "NetMulticast_ActivateComboAbility", &UACFAbilityComboManagerComponent::execNetMulticast_ActivateComboAbility },
			{ "NetMulticast_SetComboIndex", &UACFAbilityComboManagerComponent::execNetMulticast_SetComboIndex },
			{ "ResetCombo", &UACFAbilityComboManagerComponent::execResetCombo },
			{ "Server_ActivateComboAbility", &UACFAbilityComboManagerComponent::execServer_ActivateComboAbility },
			{ "Server_SetComboIndex", &UACFAbilityComboManagerComponent::execServer_SetComboIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics
	{
		struct ACFAbilityComboManagerComponent_eventActivateComboAbility_Parms
		{
			TSubclassOf<UACFGameplayAbility>  AbilityClass;
			bool bAllowRemoteActivation;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityComboManagerComponent_eventActivateComboAbility_Parms, AbilityClass), Z_Construct_UClass_UACFGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((ACFAbilityComboManagerComponent_eventActivateComboAbility_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFAbilityComboManagerComponent_eventActivateComboAbility_Parms), &Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Combo" },
		{ "Comment", "/** Part of the combo system, gate combo ability activation based on if character is already using the ability */" },
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "Part of the combo system, gate combo ability activation based on if character is already using the ability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityComboManagerComponent, nullptr, "ActivateComboAbility", nullptr, nullptr, sizeof(ACFAbilityComboManagerComponent_eventActivateComboAbility_Parms), Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityComboManagerComponent_IncrementCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityComboManagerComponent_IncrementCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Combo" },
		{ "Comment", "/** Part of the combo system, will increment the ComboIndex counter, only if the combo window has been opened */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "Part of the combo system, will increment the ComboIndex counter, only if the combo window has been opened" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_IncrementCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityComboManagerComponent, nullptr, "IncrementCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityComboManagerComponent_IncrementCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_IncrementCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityComboManagerComponent_IncrementCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityComboManagerComponent_IncrementCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityComboManagerComponent_eventNetMulticast_ActivateComboAbility_Parms, AbilityClass), Z_Construct_UClass_UACFGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((ACFAbilityComboManagerComponent_eventNetMulticast_ActivateComboAbility_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFAbilityComboManagerComponent_eventNetMulticast_ActivateComboAbility_Parms), &Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Combo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityComboManagerComponent, nullptr, "NetMulticast_ActivateComboAbility", nullptr, nullptr, sizeof(ACFAbilityComboManagerComponent_eventNetMulticast_ActivateComboAbility_Parms), Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InComboIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::NewProp_InComboIndex = { "InComboIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityComboManagerComponent_eventNetMulticast_SetComboIndex_Parms, InComboIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::NewProp_InComboIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Combo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityComboManagerComponent, nullptr, "NetMulticast_SetComboIndex", nullptr, nullptr, sizeof(ACFAbilityComboManagerComponent_eventNetMulticast_SetComboIndex_Parms), Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityComboManagerComponent_ResetCombo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityComboManagerComponent_ResetCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Combo" },
		{ "Comment", "/** Part of the combo system, will reset the ComboIndex counter to 0 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "Part of the combo system, will reset the ComboIndex counter to 0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityComboManagerComponent, nullptr, "ResetCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityComboManagerComponent_ResetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_ResetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityComboManagerComponent_ResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityComboManagerComponent_ResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityComboManagerComponent_eventServer_ActivateComboAbility_Parms, AbilityClass), Z_Construct_UClass_UACFGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
	{
		((ACFAbilityComboManagerComponent_eventServer_ActivateComboAbility_Parms*)Obj)->bAllowRemoteActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFAbilityComboManagerComponent_eventServer_ActivateComboAbility_Parms), &Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::NewProp_AbilityClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::NewProp_bAllowRemoteActivation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Combo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityComboManagerComponent, nullptr, "Server_ActivateComboAbility", nullptr, nullptr, sizeof(ACFAbilityComboManagerComponent_eventServer_ActivateComboAbility_Parms), Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InComboIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::NewProp_InComboIndex = { "InComboIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityComboManagerComponent_eventServer_SetComboIndex_Parms, InComboIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::NewProp_InComboIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Combo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityComboManagerComponent, nullptr, "Server_SetComboIndex", nullptr, nullptr, sizeof(ACFAbilityComboManagerComponent_eventServer_SetComboIndex_Parms), Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFAbilityComboManagerComponent_NoRegister()
	{
		return UACFAbilityComboManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComboIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComboWindowOpened_MetaData[];
#endif
		static void NewProp_bComboWindowOpened_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComboWindowOpened;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldTriggerCombo_MetaData[];
#endif
		static void NewProp_bShouldTriggerCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTriggerCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequestTriggerCombo_MetaData[];
#endif
		static void NewProp_bRequestTriggerCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestTriggerCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNextComboAbilityActivated_MetaData[];
#endif
		static void NewProp_bNextComboAbilityActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNextComboAbilityActivated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAbilityComboManagerComponent_ActivateComboAbility, "ActivateComboAbility" }, // 3568892374
		{ &Z_Construct_UFunction_UACFAbilityComboManagerComponent_IncrementCombo, "IncrementCombo" }, // 2645352579
		{ &Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_ActivateComboAbility, "NetMulticast_ActivateComboAbility" }, // 2744125167
		{ &Z_Construct_UFunction_UACFAbilityComboManagerComponent_NetMulticast_SetComboIndex, "NetMulticast_SetComboIndex" }, // 2726224550
		{ &Z_Construct_UFunction_UACFAbilityComboManagerComponent_ResetCombo, "ResetCombo" }, // 2747585349
		{ &Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_ActivateComboAbility, "Server_ActivateComboAbility" }, // 3640862567
		{ &Z_Construct_UFunction_UACFAbilityComboManagerComponent_Server_SetComboIndex, "Server_SetComboIndex" }, // 2605430909
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "Comment", "//class UACFStatisticsComponent;\n" },
		{ "IncludePath", "AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "class UACFStatisticsComponent;" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "Category", "ACF | Components" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityComboManagerComponent, OwningCharacter), Z_Construct_UClass_AACFCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData[] = {
		{ "Category", "ACF | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwnerAbilitySystemComponent = { "OwnerAbilitySystemComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityComboManagerComponent, OwnerAbilitySystemComponent), Z_Construct_UClass_UACFAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_ComboIndex_MetaData[] = {
		{ "Category", "ACF | Combo" },
		{ "Comment", "/** The combo index for the currently active combo */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "The combo index for the currently active combo" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_ComboIndex = { "ComboIndex", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityComboManagerComponent, ComboIndex), METADATA_PARAMS(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_ComboIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_ComboIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bComboWindowOpened_MetaData[] = {
		{ "Category", "ACF | Combo" },
		{ "Comment", "/** Whether or not the combo window is opened (eg. player can queue next combo within this window) */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "Whether or not the combo window is opened (eg. player can queue next combo within this window)" },
	};
#endif
	void Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bComboWindowOpened_SetBit(void* Obj)
	{
		((UACFAbilityComboManagerComponent*)Obj)->bComboWindowOpened = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bComboWindowOpened = { "bComboWindowOpened", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFAbilityComboManagerComponent), &Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bComboWindowOpened_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bComboWindowOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bComboWindowOpened_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_MetaData[] = {
		{ "Category", "ACF | Combo" },
		{ "Comment", "/** Should we queue the next combo montage for the currently active combo */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "Should we queue the next combo montage for the currently active combo" },
	};
#endif
	void Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_SetBit(void* Obj)
	{
		((UACFAbilityComboManagerComponent*)Obj)->bShouldTriggerCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bShouldTriggerCombo = { "bShouldTriggerCombo", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFAbilityComboManagerComponent), &Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bShouldTriggerCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_MetaData[] = {
		{ "Category", "ACF | Combo" },
		{ "Comment", "/** Should we trigger the next combo montage */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "Should we trigger the next combo montage" },
	};
#endif
	void Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_SetBit(void* Obj)
	{
		((UACFAbilityComboManagerComponent*)Obj)->bRequestTriggerCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bRequestTriggerCombo = { "bRequestTriggerCombo", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFAbilityComboManagerComponent), &Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bRequestTriggerCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_MetaData[] = {
		{ "Category", "ACF | Combo" },
		{ "Comment", "/** Should we trigger the next combo montage */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityComboManagerComponent.h" },
		{ "ToolTip", "Should we trigger the next combo montage" },
	};
#endif
	void Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_SetBit(void* Obj)
	{
		((UACFAbilityComboManagerComponent*)Obj)->bNextComboAbilityActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated = { "bNextComboAbilityActivated", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFAbilityComboManagerComponent), &Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwningCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_OwnerAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_ComboIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bComboWindowOpened,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bShouldTriggerCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bRequestTriggerCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::NewProp_bNextComboAbilityActivated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAbilityComboManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::ClassParams = {
		&UACFAbilityComboManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFAbilityComboManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFAbilityComboManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFAbilityComboManagerComponent, 343078559);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFAbilityComboManagerComponent>()
	{
		return UACFAbilityComboManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFAbilityComboManagerComponent(Z_Construct_UClass_UACFAbilityComboManagerComponent, &UACFAbilityComboManagerComponent::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFAbilityComboManagerComponent"), false, nullptr, nullptr, nullptr);

	void UACFAbilityComboManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ComboIndex(TEXT("ComboIndex"));
		static const FName Name_bComboWindowOpened(TEXT("bComboWindowOpened"));
		static const FName Name_bShouldTriggerCombo(TEXT("bShouldTriggerCombo"));
		static const FName Name_bRequestTriggerCombo(TEXT("bRequestTriggerCombo"));
		static const FName Name_bNextComboAbilityActivated(TEXT("bNextComboAbilityActivated"));

		const bool bIsValid = true
			&& Name_ComboIndex == ClassReps[(int32)ENetFields_Private::ComboIndex].Property->GetFName()
			&& Name_bComboWindowOpened == ClassReps[(int32)ENetFields_Private::bComboWindowOpened].Property->GetFName()
			&& Name_bShouldTriggerCombo == ClassReps[(int32)ENetFields_Private::bShouldTriggerCombo].Property->GetFName()
			&& Name_bRequestTriggerCombo == ClassReps[(int32)ENetFields_Private::bRequestTriggerCombo].Property->GetFName()
			&& Name_bNextComboAbilityActivated == ClassReps[(int32)ENetFields_Private::bNextComboAbilityActivated].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFAbilityComboManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAbilityComboManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
