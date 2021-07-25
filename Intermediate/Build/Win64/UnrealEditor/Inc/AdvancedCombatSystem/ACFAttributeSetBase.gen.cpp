// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/Attributes/ACFAttributeSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAttributeSetBase() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAttributeSetBase_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAttributeSetBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
// End Cross Module References
	void UACFAttributeSetBase::StaticRegisterNativesUACFAttributeSetBase()
	{
	}
	UClass* Z_Construct_UClass_UACFAttributeSetBase_NoRegister()
	{
		return UACFAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UACFAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumValues_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumValues_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValues_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MinimumValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base AttributeSet Class to extend from.\n *\n * Doesn't hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:\n *\n * - AdjustAttributeForMaxChange()\n * - Clamp Values definition from Project Config\n * -\n */" },
		{ "IncludePath", "AbilitySystem/Attributes/ACFAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSetBase.h" },
		{ "ToolTip", "Base AttributeSet Class to extend from.\n\nDoesn't hold any Gameplay Attribute but defines any shared logic for AttributeSet, such as:\n\n- AdjustAttributeForMaxChange()\n- Clamp Values definition from Project Config" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues_ValueProp = { "MinimumValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues_Key_KeyProp = { "MinimumValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues_MetaData[] = {
		{ "Comment", "/** Cached map of minimum clamp values for each configured attributes*/" },
		{ "HideInDetailsView", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/ACFAttributeSetBase.h" },
		{ "ToolTip", "Cached map of minimum clamp values for each configured attributes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues = { "MinimumValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAttributeSetBase, MinimumValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAttributeSetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAttributeSetBase_Statics::NewProp_MinimumValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAttributeSetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAttributeSetBase_Statics::ClassParams = {
		&UACFAttributeSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFAttributeSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSetBase_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFAttributeSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAttributeSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFAttributeSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFAttributeSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFAttributeSetBase, 473675612);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFAttributeSetBase>()
	{
		return UACFAttributeSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFAttributeSetBase(Z_Construct_UClass_UACFAttributeSetBase, &UACFAttributeSetBase::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFAttributeSetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAttributeSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
