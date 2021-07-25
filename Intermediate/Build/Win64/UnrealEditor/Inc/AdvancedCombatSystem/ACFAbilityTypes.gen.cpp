// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/ACFAbilityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAbilityTypes() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UEnum* Z_Construct_UEnum_AdvancedCombatSystem_EACFAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FACFGameplayEffectUIData();
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	ADVANCEDCOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTargetType_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	static UEnum* EACFAbilityInputID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedCombatSystem_EACFAbilityInputID, Z_Construct_UPackage__Script_AdvancedCombatSystem(), TEXT("EACFAbilityInputID"));
		}
		return Singleton;
	}
	template<> ADVANCEDCOMBATSYSTEM_API UEnum* StaticEnum<EACFAbilityInputID>()
	{
		return EACFAbilityInputID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EACFAbilityInputID(EACFAbilityInputID_StaticEnum, TEXT("/Script/AdvancedCombatSystem"), TEXT("EACFAbilityInputID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedCombatSystem_EACFAbilityInputID_Hash() { return 370800878U; }
	UEnum* Z_Construct_UEnum_AdvancedCombatSystem_EACFAbilityInputID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedCombatSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EACFAbilityInputID"), 0, Get_Z_Construct_UEnum_AdvancedCombatSystem_EACFAbilityInputID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EACFAbilityInputID::None", (int64)EACFAbilityInputID::None },
				{ "EACFAbilityInputID::Confirm", (int64)EACFAbilityInputID::Confirm },
				{ "EACFAbilityInputID::Cancel", (int64)EACFAbilityInputID::Cancel },
				{ "EACFAbilityInputID::Ability1", (int64)EACFAbilityInputID::Ability1 },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ability1.DisplayName", "Ability1" },
				{ "Ability1.Name", "EACFAbilityInputID::Ability1" },
				{ "BlueprintType", "true" },
				{ "Cancel.DisplayName", "Cancel" },
				{ "Cancel.Name", "EACFAbilityInputID::Cancel" },
				{ "Comment", "/** List of Ability Inputs ID */" },
				{ "Confirm.DisplayName", "Confirm" },
				{ "Confirm.Name", "EACFAbilityInputID::Confirm" },
				{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EACFAbilityInputID::None" },
				{ "ToolTip", "List of Ability Inputs ID" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
				nullptr,
				"EACFAbilityInputID",
				"EACFAbilityInputID",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FACFGameplayEffectExecuteData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDCOMBATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData, Z_Construct_UPackage__Script_AdvancedCombatSystem(), TEXT("ACFGameplayEffectExecuteData"), sizeof(FACFGameplayEffectExecuteData), Get_Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Hash());
	}
	return Singleton;
}
template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<FACFGameplayEffectExecuteData>()
{
	return FACFGameplayEffectExecuteData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FACFGameplayEffectExecuteData(FACFGameplayEffectExecuteData::StaticStruct, TEXT("/Script/AdvancedCombatSystem"), TEXT("ACFGameplayEffectExecuteData"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFGameplayEffectExecuteData
{
	FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFGameplayEffectExecuteData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ACFGameplayEffectExecuteData")),new UScriptStruct::TCppStructOps<FACFGameplayEffectExecuteData>);
	}
} ScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFGameplayEffectExecuteData;
	struct Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMinimumValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure passed down to Actors Blueprint with PostGameplayEffectExecute Event */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "Structure passed down to Actors Blueprint with PostGameplayEffectExecute Event" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFGameplayEffectExecuteData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "ACF | AttributeSetPayload" },
		{ "Comment", "/** The owner AttributeSet from which the event was invoked */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "The owner AttributeSet from which the event was invoked" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectExecuteData, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "ACF | AttributeSetPayload" },
		{ "Comment", "/** The owner AbilitySystemComponent for this AttributeSet */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "The owner AbilitySystemComponent for this AttributeSet" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectExecuteData, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_DeltaValue_MetaData[] = {
		{ "Category", "ACF | AttributeSetPayload" },
		{ "Comment", "/** Calculated DeltaValue from OldValue to NewValue */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "Calculated DeltaValue from OldValue to NewValue" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectExecuteData, DeltaValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_DeltaValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_DeltaValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue_MetaData[] = {
		{ "Category", "ACF | AttributeSetPayload" },
		{ "Comment", "/** The configured Clamp MinimumValue for this Attribute, if defined */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "The configured Clamp MinimumValue for this Attribute, if defined" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue = { "ClampMinimumValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectExecuteData, ClampMinimumValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::NewProp_ClampMinimumValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
		nullptr,
		&NewStructOps,
		"ACFGameplayEffectExecuteData",
		sizeof(FACFGameplayEffectExecuteData),
		alignof(FACFGameplayEffectExecuteData),
		Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedCombatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ACFGameplayEffectExecuteData"), sizeof(FACFGameplayEffectExecuteData), Get_Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FACFGameplayEffectExecuteData_Hash() { return 4066314631U; }
class UScriptStruct* FACFGameplayEffectUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDCOMBATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FACFGameplayEffectUIData, Z_Construct_UPackage__Script_AdvancedCombatSystem(), TEXT("ACFGameplayEffectUIData"), sizeof(FACFGameplayEffectUIData), Get_Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Hash());
	}
	return Singleton;
}
template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<FACFGameplayEffectUIData>()
{
	return FACFGameplayEffectUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FACFGameplayEffectUIData(FACFGameplayEffectUIData::StaticStruct, TEXT("/Script/AdvancedCombatSystem"), TEXT("ACFGameplayEffectUIData"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFGameplayEffectUIData
{
	FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFGameplayEffectUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ACFGameplayEffectUIData")),new UScriptStruct::TCppStructOps<FACFGameplayEffectUIData>);
	}
} ScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFACFGameplayEffectUIData;
	struct Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackLimitCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackLimitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACFGameplayEffectUIData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "ACF | GameplayEffect" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectUIData, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_TotalDuration_MetaData[] = {
		{ "Category", "ACF | GameplayEffect" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectUIData, TotalDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_TotalDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_TotalDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_ExpectedEndTime_MetaData[] = {
		{ "Category", "ACF | GameplayEffect" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_ExpectedEndTime = { "ExpectedEndTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectUIData, ExpectedEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_ExpectedEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_ExpectedEndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "ACF | GameplayEffect" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectUIData, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackLimitCount_MetaData[] = {
		{ "Category", "ACF | GameplayEffect" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackLimitCount = { "StackLimitCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FACFGameplayEffectUIData, StackLimitCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackLimitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackLimitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_TotalDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_ExpectedEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::NewProp_StackLimitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
		nullptr,
		&NewStructOps,
		"ACFGameplayEffectUIData",
		sizeof(FACFGameplayEffectUIData),
		alignof(FACFGameplayEffectUIData),
		Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FACFGameplayEffectUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedCombatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ACFGameplayEffectUIData"), sizeof(FACFGameplayEffectUIData), Get_Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FACFGameplayEffectUIData_Hash() { return 536203845U; }
class UScriptStruct* FRPGGameplayEffectContainerSpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDCOMBATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec, Z_Construct_UPackage__Script_AdvancedCombatSystem(), TEXT("RPGGameplayEffectContainerSpec"), sizeof(FRPGGameplayEffectContainerSpec), Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash());
	}
	return Singleton;
}
template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<FRPGGameplayEffectContainerSpec>()
{
	return FRPGGameplayEffectContainerSpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRPGGameplayEffectContainerSpec(FRPGGameplayEffectContainerSpec::StaticStruct, TEXT("/Script/AdvancedCombatSystem"), TEXT("RPGGameplayEffectContainerSpec"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFRPGGameplayEffectContainerSpec
{
	FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFRPGGameplayEffectContainerSpec()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RPGGameplayEffectContainerSpec")),new UScriptStruct::TCppStructOps<FRPGGameplayEffectContainerSpec>);
	}
} ScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFRPGGameplayEffectContainerSpec;
	struct Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGameplayEffectSpecs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectSpecs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectSpecs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A \"processed\" version of RPGGameplayEffectContainer that can be passed around and eventually applied */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "A \"processed\" version of RPGGameplayEffectContainer that can be passed around and eventually applied" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGGameplayEffectContainerSpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData[] = {
		{ "Category", "ACF | GameplayEffectContainer" },
		{ "Comment", "/** Computed target data */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "Computed target data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGGameplayEffectContainerSpec, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData[] = {
		{ "Category", "ACF | GameplayEffectContainer" },
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGGameplayEffectContainerSpec, TargetGameplayEffectSpecs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
		nullptr,
		&NewStructOps,
		"RPGGameplayEffectContainerSpec",
		sizeof(FRPGGameplayEffectContainerSpec),
		alignof(FRPGGameplayEffectContainerSpec),
		Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedCombatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RPGGameplayEffectContainerSpec"), sizeof(FRPGGameplayEffectContainerSpec), Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainerSpec_Hash() { return 4018577425U; }
class UScriptStruct* FRPGGameplayEffectContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDCOMBATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer, Z_Construct_UPackage__Script_AdvancedCombatSystem(), TEXT("RPGGameplayEffectContainer"), sizeof(FRPGGameplayEffectContainer), Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash());
	}
	return Singleton;
}
template<> ADVANCEDCOMBATSYSTEM_API UScriptStruct* StaticStruct<FRPGGameplayEffectContainer>()
{
	return FRPGGameplayEffectContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRPGGameplayEffectContainer(FRPGGameplayEffectContainer::StaticStruct, TEXT("/Script/AdvancedCombatSystem"), TEXT("RPGGameplayEffectContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFRPGGameplayEffectContainer
{
	FScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFRPGGameplayEffectContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RPGGameplayEffectContainer")),new UScriptStruct::TCppStructOps<FRPGGameplayEffectContainer>);
	}
} ScriptStruct_AdvancedCombatSystem_StaticRegisterNativesFRPGGameplayEffectContainer;
	struct Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetType;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetGameplayEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct defining a list of gameplay effects, a tag, and targeting info\n * These containers are defined statically in blueprints or assets and then turn into Specs at runtime\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "Struct defining a list of gameplay effects, a tag, and targeting info\nThese containers are defined statically in blueprints or assets and then turn into Specs at runtime" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGGameplayEffectContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "ACF | GameplayEffectContainer" },
		{ "Comment", "/** Sets the way that targeting happens */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "Sets the way that targeting happens" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGGameplayEffectContainer, TargetType), Z_Construct_UClass_UACFTargetType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData[] = {
		{ "Category", "ACF | GameplayEffectContainer" },
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFAbilityTypes.h" },
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRPGGameplayEffectContainer, TargetGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
		nullptr,
		&NewStructOps,
		"RPGGameplayEffectContainer",
		sizeof(FRPGGameplayEffectContainer),
		alignof(FRPGGameplayEffectContainer),
		Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPGGameplayEffectContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedCombatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RPGGameplayEffectContainer"), sizeof(FRPGGameplayEffectContainer), Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRPGGameplayEffectContainer_Hash() { return 32748088U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
