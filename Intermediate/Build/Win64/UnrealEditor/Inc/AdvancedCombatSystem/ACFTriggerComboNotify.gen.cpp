// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Animations/AnimNotifies/ACFTriggerComboNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFTriggerComboNotify() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTriggerComboNotify_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFTriggerComboNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
// End Cross Module References
	void UACFTriggerComboNotify::StaticRegisterNativesUACFTriggerComboNotify()
	{
	}
	UClass* Z_Construct_UClass_UACFTriggerComboNotify_NoRegister()
	{
		return UACFTriggerComboNotify::StaticClass();
	}
	struct Z_Construct_UClass_UACFTriggerComboNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEndCombo_MetaData[];
#endif
		static void NewProp_bEndCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndCombo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFTriggerComboNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTriggerComboNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Core/Animations/AnimNotifies/ACFTriggerComboNotify.h" },
		{ "ModuleRelativePath", "Public/Core/Animations/AnimNotifies/ACFTriggerComboNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFTriggerComboNotify_Statics::NewProp_bEndCombo_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Whether this montage is ending a combo (last montage in the combo chain) */" },
		{ "ModuleRelativePath", "Public/Core/Animations/AnimNotifies/ACFTriggerComboNotify.h" },
		{ "ToolTip", "Whether this montage is ending a combo (last montage in the combo chain)" },
	};
#endif
	void Z_Construct_UClass_UACFTriggerComboNotify_Statics::NewProp_bEndCombo_SetBit(void* Obj)
	{
		((UACFTriggerComboNotify*)Obj)->bEndCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFTriggerComboNotify_Statics::NewProp_bEndCombo = { "bEndCombo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFTriggerComboNotify), &Z_Construct_UClass_UACFTriggerComboNotify_Statics::NewProp_bEndCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFTriggerComboNotify_Statics::NewProp_bEndCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFTriggerComboNotify_Statics::NewProp_bEndCombo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFTriggerComboNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFTriggerComboNotify_Statics::NewProp_bEndCombo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFTriggerComboNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFTriggerComboNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFTriggerComboNotify_Statics::ClassParams = {
		&UACFTriggerComboNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFTriggerComboNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFTriggerComboNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFTriggerComboNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFTriggerComboNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFTriggerComboNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFTriggerComboNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFTriggerComboNotify, 143394326);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFTriggerComboNotify>()
	{
		return UACFTriggerComboNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFTriggerComboNotify(Z_Construct_UClass_UACFTriggerComboNotify, &UACFTriggerComboNotify::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFTriggerComboNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFTriggerComboNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
