// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Actors/Pawns/ACFPawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFPawnBase() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFPawnBase_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFPawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFCoreComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFActorInterface_NoRegister();
// End Cross Module References
	void AACFPawnBase::StaticRegisterNativesAACFPawnBase()
	{
	}
	UClass* Z_Construct_UClass_AACFPawnBase_NoRegister()
	{
		return AACFPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_AACFPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoreComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
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
	UObject* (*const Z_Construct_UClass_AACFPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/Actors/Pawns/ACFPawnBase.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/Pawns/ACFPawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPawnBase_Statics::NewProp_CoreComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ACF | Components" },
		{ "Comment", "/** Companion Core Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Pawns/ACFPawnBase.h" },
		{ "ToolTip", "Companion Core Component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFPawnBase_Statics::NewProp_CoreComponent = { "CoreComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFPawnBase, CoreComponent), Z_Construct_UClass_UACFCoreComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AACFPawnBase_Statics::NewProp_CoreComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFPawnBase_Statics::NewProp_CoreComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ACF | Components" },
		{ "Comment", "/** Actor AbilitySystemComponent */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Pawns/ACFPawnBase.h" },
		{ "ToolTip", "Actor AbilitySystemComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFPawnBase, AbilitySystemComponent), Z_Construct_UClass_UACFAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets_ValueProp = { "AttributeSets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets_Key_KeyProp = { "AttributeSets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Pawns/ACFPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets = { "AttributeSets", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFPawnBase, AttributeSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFPawnBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPawnBase_Statics::NewProp_CoreComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPawnBase_Statics::NewProp_AttributeSets,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACFPawnBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AACFPawnBase, IAbilitySystemInterface), false },
			{ Z_Construct_UClass_UACFActorInterface_NoRegister, (int32)VTABLE_OFFSET(AACFPawnBase, IACFActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFPawnBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFPawnBase_Statics::ClassParams = {
		&AACFPawnBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AACFPawnBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFPawnBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AACFPawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AACFPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACFPawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACFPawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACFPawnBase, 1575198846);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<AACFPawnBase>()
	{
		return AACFPawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACFPawnBase(Z_Construct_UClass_AACFPawnBase, &AACFPawnBase::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("AACFPawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFPawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
