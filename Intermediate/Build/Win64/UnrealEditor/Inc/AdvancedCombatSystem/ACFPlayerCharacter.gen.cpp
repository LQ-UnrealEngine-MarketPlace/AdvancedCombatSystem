// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Actors/Characters/ACFPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFPlayerCharacter() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFPlayerCharacter_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFPlayerCharacter();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFCharacterBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
// End Cross Module References
	void AACFPlayerCharacter::StaticRegisterNativesAACFPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AACFPlayerCharacter_NoRegister()
	{
		return AACFPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AACFPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AACFCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/Actors/Characters/ACFPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/Characters/ACFPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFPlayerCharacter_Statics::ClassParams = {
		&AACFPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AACFPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACFPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACFPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACFPlayerCharacter, 2465307405);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<AACFPlayerCharacter>()
	{
		return AACFPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACFPlayerCharacter(Z_Construct_UClass_AACFPlayerCharacter, &AACFPlayerCharacter::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("AACFPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
