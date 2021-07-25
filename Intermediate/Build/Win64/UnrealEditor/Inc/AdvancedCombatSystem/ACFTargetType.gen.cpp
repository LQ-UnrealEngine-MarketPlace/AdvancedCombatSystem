// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/ACFTargetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFTargetType() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTargetType_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTargetType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFCharacterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTargetType_UseOwner_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTargetType_UseOwner();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTargetType_UseEventData_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTargetType_UseEventData();
// End Cross Module References
	DEFINE_FUNCTION(UACFTargetType::execGetTargets)
	{
		P_GET_OBJECT(AACFCharacterBase,Z_Param_TargetingCharacter);
		P_GET_OBJECT(AActor,Z_Param_TargetingActor);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHitResults);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargets_Implementation(Z_Param_TargetingCharacter,Z_Param_TargetingActor,Z_Param_EventData,Z_Param_Out_OutHitResults,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	static FName NAME_UACFTargetType_GetTargets = FName(TEXT("GetTargets"));
	void UACFTargetType::GetTargets(AACFCharacterBase* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const
	{
		ACFTargetType_eventGetTargets_Parms Parms;
		Parms.TargetingCharacter=TargetingCharacter;
		Parms.TargetingActor=TargetingActor;
		Parms.EventData=EventData;
		Parms.OutHitResults=OutHitResults;
		Parms.OutActors=OutActors;
		const_cast<UACFTargetType*>(this)->ProcessEvent(FindFunctionChecked(NAME_UACFTargetType_GetTargets),&Parms);
		OutHitResults=Parms.OutHitResults;
		OutActors=Parms.OutActors;
	}
	void UACFTargetType::StaticRegisterNativesUACFTargetType()
	{
		UClass* Class = UACFTargetType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargets", &UACFTargetType::execGetTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFTargetType_GetTargets_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingCharacter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_TargetingCharacter = { "TargetingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFTargetType_eventGetTargets_Parms, TargetingCharacter), Z_Construct_UClass_AACFCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_TargetingActor = { "TargetingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFTargetType_eventGetTargets_Parms, TargetingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFTargetType_eventGetTargets_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFTargetType_eventGetTargets_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFTargetType_eventGetTargets_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_TargetingCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_TargetingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_OutHitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called to determine targets to apply gameplay effects to */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFTargetType.h" },
		{ "ToolTip", "Called to determine targets to apply gameplay effects to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFTargetType, nullptr, "GetTargets", nullptr, nullptr, sizeof(ACFTargetType_eventGetTargets_Parms), Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFTargetType_GetTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFTargetType_GetTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFTargetType_NoRegister()
	{
		return UACFTargetType::StaticClass();
	}
	struct Z_Construct_UClass_UACFTargetType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFTargetType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFTargetType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFTargetType_GetTargets, "GetTargets" }, // 2939090276
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTargetType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class that is used to determine targeting for abilities\n * It is meant to be blueprinted to run target logic\n * This does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\n * This can be used as a basis for a game-specific targeting blueprint\n * If your targeting is more complicated you may need to instance into the world once or as a pooled actor\n */" },
		{ "IncludePath", "AbilitySystem/ACFTargetType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFTargetType.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Class that is used to determine targeting for abilities\nIt is meant to be blueprinted to run target logic\nThis does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\nThis can be used as a basis for a game-specific targeting blueprint\nIf your targeting is more complicated you may need to instance into the world once or as a pooled actor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFTargetType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFTargetType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFTargetType_Statics::ClassParams = {
		&UACFTargetType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFTargetType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFTargetType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFTargetType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFTargetType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFTargetType, 836216496);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFTargetType>()
	{
		return UACFTargetType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFTargetType(Z_Construct_UClass_UACFTargetType, &UACFTargetType::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFTargetType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFTargetType);
	void UACFTargetType_UseOwner::StaticRegisterNativesUACFTargetType_UseOwner()
	{
	}
	UClass* Z_Construct_UClass_UACFTargetType_UseOwner_NoRegister()
	{
		return UACFTargetType_UseOwner::StaticClass();
	}
	struct Z_Construct_UClass_UACFTargetType_UseOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFTargetType_UseOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFTargetType,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTargetType_UseOwner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Trivial target type that uses the owner */" },
		{ "IncludePath", "AbilitySystem/ACFTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFTargetType.h" },
		{ "ToolTip", "Trivial target type that uses the owner" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFTargetType_UseOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFTargetType_UseOwner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFTargetType_UseOwner_Statics::ClassParams = {
		&UACFTargetType_UseOwner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFTargetType_UseOwner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFTargetType_UseOwner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFTargetType_UseOwner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFTargetType_UseOwner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFTargetType_UseOwner, 245097114);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFTargetType_UseOwner>()
	{
		return UACFTargetType_UseOwner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFTargetType_UseOwner(Z_Construct_UClass_UACFTargetType_UseOwner, &UACFTargetType_UseOwner::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFTargetType_UseOwner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFTargetType_UseOwner);
	void UACFTargetType_UseEventData::StaticRegisterNativesUACFTargetType_UseEventData()
	{
	}
	UClass* Z_Construct_UClass_UACFTargetType_UseEventData_NoRegister()
	{
		return UACFTargetType_UseEventData::StaticClass();
	}
	struct Z_Construct_UClass_UACFTargetType_UseEventData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFTargetType_UseEventData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFTargetType,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTargetType_UseEventData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Trivial target type that pulls the target out of the event data */" },
		{ "IncludePath", "AbilitySystem/ACFTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ACFTargetType.h" },
		{ "ToolTip", "Trivial target type that pulls the target out of the event data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFTargetType_UseEventData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFTargetType_UseEventData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFTargetType_UseEventData_Statics::ClassParams = {
		&UACFTargetType_UseEventData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFTargetType_UseEventData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFTargetType_UseEventData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFTargetType_UseEventData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFTargetType_UseEventData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFTargetType_UseEventData, 3150513369);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFTargetType_UseEventData>()
	{
		return UACFTargetType_UseEventData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFTargetType_UseEventData(Z_Construct_UClass_UACFTargetType_UseEventData, &UACFTargetType_UseEventData::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFTargetType_UseEventData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFTargetType_UseEventData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
