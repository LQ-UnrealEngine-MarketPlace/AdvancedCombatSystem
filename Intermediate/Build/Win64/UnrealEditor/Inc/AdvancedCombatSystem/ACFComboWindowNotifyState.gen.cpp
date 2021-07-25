// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Animations/AnimNotifyStates/ACFComboWindowNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFComboWindowNotifyState() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFComboWindowNotifyState_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFComboWindowNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
// End Cross Module References
	void UACFComboWindowNotifyState::StaticRegisterNativesUACFComboWindowNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UACFComboWindowNotifyState_NoRegister()
	{
		return UACFComboWindowNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UACFComboWindowNotifyState_Statics
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
	UObject* (*const Z_Construct_UClass_UACFComboWindowNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFComboWindowNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Combo Window" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Core/Animations/AnimNotifyStates/ACFComboWindowNotifyState.h" },
		{ "ModuleRelativePath", "Public/Core/Animations/AnimNotifyStates/ACFComboWindowNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFComboWindowNotifyState_Statics::NewProp_bEndCombo_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Whether this montage is ending a combo (last montage in the combo chain) */" },
		{ "ModuleRelativePath", "Public/Core/Animations/AnimNotifyStates/ACFComboWindowNotifyState.h" },
		{ "ToolTip", "Whether this montage is ending a combo (last montage in the combo chain)" },
	};
#endif
	void Z_Construct_UClass_UACFComboWindowNotifyState_Statics::NewProp_bEndCombo_SetBit(void* Obj)
	{
		((UACFComboWindowNotifyState*)Obj)->bEndCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFComboWindowNotifyState_Statics::NewProp_bEndCombo = { "bEndCombo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFComboWindowNotifyState), &Z_Construct_UClass_UACFComboWindowNotifyState_Statics::NewProp_bEndCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFComboWindowNotifyState_Statics::NewProp_bEndCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFComboWindowNotifyState_Statics::NewProp_bEndCombo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFComboWindowNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFComboWindowNotifyState_Statics::NewProp_bEndCombo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFComboWindowNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFComboWindowNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFComboWindowNotifyState_Statics::ClassParams = {
		&UACFComboWindowNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFComboWindowNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFComboWindowNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFComboWindowNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFComboWindowNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFComboWindowNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFComboWindowNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFComboWindowNotifyState, 1598047105);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFComboWindowNotifyState>()
	{
		return UACFComboWindowNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFComboWindowNotifyState(Z_Construct_UClass_UACFComboWindowNotifyState, &UACFComboWindowNotifyState::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFComboWindowNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFComboWindowNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
