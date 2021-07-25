// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/Components/ACFAbilityQueueComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAbilityQueueComponent() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityQueueComponent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityQueueComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
// End Cross Module References
	void UACFAbilityQueueComponent::StaticRegisterNativesUACFAbilityQueueComponent()
	{
	}
	UClass* Z_Construct_UClass_UACFAbilityQueueComponent_NoRegister()
	{
		return UACFAbilityQueueComponent::StaticClass();
	}
	struct Z_Construct_UClass_UACFAbilityQueueComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedAbility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueuedAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbilityQueueEnabled_MetaData[];
#endif
		static void NewProp_bAbilityQueueEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbilityQueueEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAbilityQueueComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityQueueComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ACF" },
		{ "IncludePath", "AbilitySystem/Components/ACFAbilityQueueComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityQueueComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_QueuedAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityQueueComponent.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_QueuedAbility = { "QueuedAbility", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityQueueComponent, QueuedAbility), Z_Construct_UClass_UACFGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_QueuedAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_QueuedAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerPawn_MetaData[] = {
		{ "Category", "ACF | Components" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityQueueComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityQueueComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData[] = {
		{ "Category", "ACF | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityQueueComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent = { "OwnerAbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityQueueComponent, OwnerAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_MetaData[] = {
		{ "Category", "ACF | Ability Queue System" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Components/ACFAbilityQueueComponent.h" },
	};
#endif
	void Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_SetBit(void* Obj)
	{
		((UACFAbilityQueueComponent*)Obj)->bAbilityQueueEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled = { "bAbilityQueueEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFAbilityQueueComponent), &Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAbilityQueueComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_QueuedAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_OwnerAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityQueueComponent_Statics::NewProp_bAbilityQueueEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAbilityQueueComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAbilityQueueComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAbilityQueueComponent_Statics::ClassParams = {
		&UACFAbilityQueueComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UACFAbilityQueueComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityQueueComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFAbilityQueueComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFAbilityQueueComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFAbilityQueueComponent, 1752012668);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFAbilityQueueComponent>()
	{
		return UACFAbilityQueueComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFAbilityQueueComponent(Z_Construct_UClass_UACFAbilityQueueComponent, &UACFAbilityQueueComponent::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFAbilityQueueComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAbilityQueueComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
