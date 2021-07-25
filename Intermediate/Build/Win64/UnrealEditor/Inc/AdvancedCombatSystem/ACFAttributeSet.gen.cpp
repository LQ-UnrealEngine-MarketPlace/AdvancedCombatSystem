// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/Attributes/ACFAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAttributeSet() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAttributeSet_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAttributeSet();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAttributeSetBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_StaminaRegenRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStaminaRegenRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StaminaRegenRate(Z_Param_Out_OldStaminaRegenRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_MaxStamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxStamina(Z_Param_Out_OldMaxStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_Stamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_ManaRegenRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegenRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ManaRegenRate(Z_Param_Out_OldManaRegenRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_HealthRegenRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegenRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HealthRegenRate(Z_Param_Out_OldHealthRegenRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UACFAttributeSet::StaticRegisterNativesUACFAttributeSet()
	{
		UClass* Class = UACFAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Health", &UACFAttributeSet::execOnRep_Health },
			{ "OnRep_HealthRegenRate", &UACFAttributeSet::execOnRep_HealthRegenRate },
			{ "OnRep_Mana", &UACFAttributeSet::execOnRep_Mana },
			{ "OnRep_ManaRegenRate", &UACFAttributeSet::execOnRep_ManaRegenRate },
			{ "OnRep_MaxHealth", &UACFAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UACFAttributeSet::execOnRep_MaxMana },
			{ "OnRep_MaxStamina", &UACFAttributeSet::execOnRep_MaxStamina },
			{ "OnRep_Stamina", &UACFAttributeSet::execOnRep_Stamina },
			{ "OnRep_StaminaRegenRate", &UACFAttributeSet::execOnRep_StaminaRegenRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics
	{
		struct ACFAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics
	{
		struct ACFAttributeSet_eventOnRep_HealthRegenRate_Parms
		{
			FGameplayAttributeData OldHealthRegenRate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegenRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate = { "OldHealthRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_HealthRegenRate_Parms, OldHealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_HealthRegenRate", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_HealthRegenRate_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics
	{
		struct ACFAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_Mana_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics
	{
		struct ACFAttributeSet_eventOnRep_ManaRegenRate_Parms
		{
			FGameplayAttributeData OldManaRegenRate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegenRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate = { "OldManaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_ManaRegenRate_Parms, OldManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_ManaRegenRate", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_ManaRegenRate_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics
	{
		struct ACFAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_MaxHealth_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics
	{
		struct ACFAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_MaxMana_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics
	{
		struct ACFAttributeSet_eventOnRep_MaxStamina_Parms
		{
			FGameplayAttributeData OldMaxStamina;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_MaxStamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_MaxStamina", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_MaxStamina_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics
	{
		struct ACFAttributeSet_eventOnRep_Stamina_Parms
		{
			FGameplayAttributeData OldStamina;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_Stamina", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_Stamina_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics
	{
		struct ACFAttributeSet_eventOnRep_StaminaRegenRate_Parms
		{
			FGameplayAttributeData OldStaminaRegenRate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldStaminaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldStaminaRegenRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate = { "OldStaminaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAttributeSet_eventOnRep_StaminaRegenRate_Parms, OldStaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAttributeSet, nullptr, "OnRep_StaminaRegenRate", nullptr, nullptr, sizeof(ACFAttributeSet_eventOnRep_StaminaRegenRate_Parms), Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFAttributeSet_NoRegister()
	{
		return UACFAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UACFAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFAttributeSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_Health, "OnRep_Health" }, // 1840179909
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 701224657
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 2497292011
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_ManaRegenRate, "OnRep_ManaRegenRate" }, // 695754568
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 540109805
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 3100902996
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 636529107
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 3364707832
		{ &Z_Construct_UFunction_UACFAttributeSet_OnRep_StaminaRegenRate, "OnRep_StaminaRegenRate" }, // 380329860
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains basic Attributes used in most games, Health, Stamina, Mana.\n * Characters taking damage or using Mana or Stamina as a resource will use this AttributeSet.\n *\n * Attributes:\n *\n * Health - How much current health the Character has\n * MaxHealth - Maximum amount of Health for the Character\n * HealthRegenRate - Backing attribute to determine the amount of health regenerated per Gameplay Effect period\n *\n * Stamina - Mainly used as a resource for Abilities\n * MaxStamina - Maximum amount of Stamina for the Character\n * StaminaRegenRate - Backing attribute to get the amount of stamina regenerated when used by a Gameplay Effect\n *\n * Mana - Mainly used as a resource for Abilities\n * MaxMana - Maximum amount of Mana for the Character\n * ManaRegenRate - Backing attribute for mana regeneration\n *\n * Damage - Meta attribute used by DamageExecution or Gameplay Effect to calculate final damage, which then turns into -Health\n * StaminaDamage - Meta attribute used by DamageExecution or Gameplay Effect to calculate final damage, which then turns into -Stamina\n */" },
		{ "IncludePath", "AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "Contains basic Attributes used in most games, Health, Stamina, Mana.\nCharacters taking damage or using Mana or Stamina as a resource will use this AttributeSet.\n\nAttributes:\n\nHealth - How much current health the Character has\nMaxHealth - Maximum amount of Health for the Character\nHealthRegenRate - Backing attribute to determine the amount of health regenerated per Gameplay Effect period\n\nStamina - Mainly used as a resource for Abilities\nMaxStamina - Maximum amount of Stamina for the Character\nStaminaRegenRate - Backing attribute to get the amount of stamina regenerated when used by a Gameplay Effect\n\nMana - Mainly used as a resource for Abilities\nMaxMana - Maximum amount of Mana for the Character\nManaRegenRate - Backing attribute for mana regeneration\n\nDamage - Meta attribute used by DamageExecution or Gameplay Effect to calculate final damage, which then turns into -Health\nStaminaDamage - Meta attribute used by DamageExecution or Gameplay Effect to calculate final damage, which then turns into -Stamina" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// Current Health, when 0 we expect owner to die unless prevented by an ability. Capped by MaxHealth.\n// Positive changes can directly use this.\n// Negative changes to Health should go through Damage meta attribute.\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "Current Health, when 0 we expect owner to die unless prevented by an ability. Capped by MaxHealth.\nPositive changes can directly use this.\nNegative changes to Health should go through Damage meta attribute." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// MaxHealth is its own attribute since GameplayEffects may modify it\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "MaxHealth is its own attribute since GameplayEffects may modify it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// Health regen rate will passively increase Health every period\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "Health regen rate will passively increase Health every period" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_HealthRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_HealthRegenRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// Current stamina, used to execute abilities. Capped by MaxStamina.\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "Current stamina, used to execute abilities. Capped by MaxStamina." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// MaxStamina is its own attribute since GameplayEffects may modify it\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "MaxStamina is its own attribute since GameplayEffects may modify it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// Stamina regen rate will passively increase Stamina every period\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "Stamina regen rate will passively increase Stamina every period" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", "OnRep_StaminaRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, StaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaRegenRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// Current Mana, used to execute special abilities. Capped by MaxMana.\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "Current Mana, used to execute special abilities. Capped by MaxMana." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// MaxMana is its own attribute since GameplayEffects may modify it\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "MaxMana is its own attribute since GameplayEffects may modify it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// Mana regen rate will passively increase Mana every period\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "Mana regen rate will passively increase Mana every period" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", "OnRep_ManaRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, ManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_ManaRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_ManaRegenRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// Damage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Health\n// Temporary value that only exists on the Server. Not replicated.\n" },
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "Damage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Health\nTemporary value that only exists on the Server. Not replicated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaDamage_MetaData[] = {
		{ "Category", "ACF | Attribute Set" },
		{ "Comment", "// StaminaDamage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Stamina\n// Temporary value that only exists on the Server. Not replicated.\n" },
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSet.h" },
		{ "ToolTip", "StaminaDamage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Stamina\nTemporary value that only exists on the Server. Not replicated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaDamage = { "StaminaDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSet, StaminaDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_HealthRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_ManaRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSet_Statics::NewProp_StaminaDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAttributeSet_Statics::ClassParams = {
		&UACFAttributeSet::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFAttributeSet, 2339684309);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFAttributeSet>()
	{
		return UACFAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFAttributeSet(Z_Construct_UClass_UACFAttributeSet, &UACFAttributeSet::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFAttributeSet"), false, nullptr, nullptr, nullptr);

	void UACFAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_HealthRegenRate(TEXT("HealthRegenRate"));
		static const FName Name_Stamina(TEXT("Stamina"));
		static const FName Name_MaxStamina(TEXT("MaxStamina"));
		static const FName Name_StaminaRegenRate(TEXT("StaminaRegenRate"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_ManaRegenRate(TEXT("ManaRegenRate"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_HealthRegenRate == ClassReps[(int32)ENetFields_Private::HealthRegenRate].Property->GetFName()
			&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
			&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
			&& Name_StaminaRegenRate == ClassReps[(int32)ENetFields_Private::StaminaRegenRate].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_ManaRegenRate == ClassReps[(int32)ENetFields_Private::ManaRegenRate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UACFAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
