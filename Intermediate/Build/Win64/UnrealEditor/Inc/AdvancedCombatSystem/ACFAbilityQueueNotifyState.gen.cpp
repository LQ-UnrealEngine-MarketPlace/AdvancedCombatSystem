// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Animations/AnimNotifyStates/ACFAbilityQueueNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAbilityQueueNotifyState() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityQueueNotifyState_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityQueueNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility_NoRegister();
// End Cross Module References
	void UACFAbilityQueueNotifyState::StaticRegisterNativesUACFAbilityQueueNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UACFAbilityQueueNotifyState_NoRegister()
	{
		return UACFAbilityQueueNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAllAbilities_MetaData[];
#endif
		static void NewProp_bAllowAllAbilities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAllAbilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Core/Animations/AnimNotifyStates/ACFAbilityQueueNotifyState.h" },
		{ "ModuleRelativePath", "Public/Core/Animations/AnimNotifyStates/ACFAbilityQueueNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_MetaData[] = {
		{ "Category", "ACF | AnimNotify" },
		{ "Comment", "/**\n\x09 * If true, enable queueing of all abilities, otherwise only allow Abilities that are defined in AllowedAbilities array.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Animations/AnimNotifyStates/ACFAbilityQueueNotifyState.h" },
		{ "ToolTip", "If true, enable queueing of all abilities, otherwise only allow Abilities that are defined in AllowedAbilities array." },
	};
#endif
	void Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_SetBit(void* Obj)
	{
		((UACFAbilityQueueNotifyState*)Obj)->bAllowAllAbilities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities = { "bAllowAllAbilities", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFAbilityQueueNotifyState), &Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_Inner = { "AllowedAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UACFGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_MetaData[] = {
		{ "Category", "ACF | AnimNotify" },
		{ "Comment", "/**\n\x09 * The set of Abilities that can be queued for this window (has no effect if bAllowAllAbilities is set to true)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/Animations/AnimNotifyStates/ACFAbilityQueueNotifyState.h" },
		{ "ToolTip", "The set of Abilities that can be queued for this window (has no effect if bAllowAllAbilities is set to true)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities = { "AllowedAbilities", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityQueueNotifyState, AllowedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAbilityQueueNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::ClassParams = {
		&UACFAbilityQueueNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFAbilityQueueNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFAbilityQueueNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFAbilityQueueNotifyState, 750528542);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFAbilityQueueNotifyState>()
	{
		return UACFAbilityQueueNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFAbilityQueueNotifyState(Z_Construct_UClass_UACFAbilityQueueNotifyState, &UACFAbilityQueueNotifyState::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFAbilityQueueNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAbilityQueueNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
