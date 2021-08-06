// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Actors/Characters/ACFCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFCharacterBase() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFCharacterBase_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilitySystemComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFCoreComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityComboManagerComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityQueueComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFLocomotionComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFActorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AACFCharacterBase::execGetAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
		P_NATIVE_END;
	}
	static FName NAME_AACFCharacterBase_OnRespawn = FName(TEXT("OnRespawn"));
	void AACFCharacterBase::OnRespawn()
	{
		ProcessEvent(FindFunctionChecked(NAME_AACFCharacterBase_OnRespawn),NULL);
	}
	void AACFCharacterBase::StaticRegisterNativesAACFCharacterBase()
	{
		UClass* Class = AACFCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilitySystemComponent", &AACFCharacterBase::execGetAbilitySystemComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics
	{
		struct ACFCharacterBase_eventGetAbilitySystemComponent_Parms
		{
			UACFAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFCharacterBase_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UACFAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | Components" },
		{ "Comment", "/**\n\x09 * Returns the ability system component for this character.\n\x09 *\n\x09 * Version of function in AbilitySystemGlobals that returns correct type\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFCharacterBase.h" },
		{ "ToolTip", "Returns the ability system component for this character.\n\nVersion of function in AbilitySystemGlobals that returns correct type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacterBase, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, sizeof(ACFCharacterBase_eventGetAbilitySystemComponent_Parms), Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AACFCharacterBase_OnRespawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFCharacterBase_OnRespawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF| Character" },
		{ "Comment", "/**\n\x09 * Called when the Pawn is being restarted (usually by being possessed by a Controller)\n\x09 *\n\x09 * Note that this event will most likely trigger on first spawn also\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFCharacterBase.h" },
		{ "ToolTip", "Called when the Pawn is being restarted (usually by being possessed by a Controller)\n\nNote that this event will most likely trigger on first spawn also" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFCharacterBase_OnRespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFCharacterBase, nullptr, "OnRespawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACFCharacterBase_OnRespawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFCharacterBase_OnRespawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACFCharacterBase_OnRespawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACFCharacterBase_OnRespawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AACFCharacterBase_NoRegister()
	{
		return AACFCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AACFCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoreComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComboManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComboManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityQueueComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityQueueComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocomotionComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeSets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFCharacterBase_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 481904791
		{ &Z_Construct_UFunction_AACFCharacterBase_OnRespawn, "OnRespawn" }, // 521759210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/Actors/Characters/ACFCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_CoreComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ACF | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_CoreComponent = { "CoreComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFCharacterBase, CoreComponent), Z_Construct_UClass_UACFCoreComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_CoreComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_CoreComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityComboManagerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ACF | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityComboManagerComponent = { "AbilityComboManagerComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFCharacterBase, AbilityComboManagerComponent), Z_Construct_UClass_UACFAbilityComboManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityComboManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityComboManagerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityQueueComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ACF | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityQueueComponent = { "AbilityQueueComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFCharacterBase, AbilityQueueComponent), Z_Construct_UClass_UACFAbilityQueueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityQueueComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityQueueComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_LocomotionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ACF | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_LocomotionComponent = { "LocomotionComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFCharacterBase, LocomotionComponent), Z_Construct_UClass_UACFLocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_LocomotionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_LocomotionComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets_ValueProp = { "AttributeSets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets_Key_KeyProp = { "AttributeSets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets = { "AttributeSets", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFCharacterBase, AttributeSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_CoreComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityComboManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AbilityQueueComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_LocomotionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFCharacterBase_Statics::NewProp_AttributeSets,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AACFCharacterBase, IAbilitySystemInterface), false },
			{ Z_Construct_UClass_UACFActorInterface_NoRegister, (int32)VTABLE_OFFSET(AACFCharacterBase, IACFActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFCharacterBase_Statics::ClassParams = {
		&AACFCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AACFCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AACFCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACFCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACFCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACFCharacterBase, 1645833346);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<AACFCharacterBase>()
	{
		return AACFCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACFCharacterBase(Z_Construct_UClass_AACFCharacterBase, &AACFCharacterBase::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("AACFCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
