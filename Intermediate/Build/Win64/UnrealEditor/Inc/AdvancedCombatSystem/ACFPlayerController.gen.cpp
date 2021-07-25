// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Game/Player/ACFPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFPlayerController() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFPlayerController_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUWHUD_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AACFPlayerController::execGetHUDWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFUWHUD**)Z_Param__Result=P_THIS->GetHUDWidget();
		P_NATIVE_END;
	}
	void AACFPlayerController::StaticRegisterNativesAACFPlayerController()
	{
		UClass* Class = AACFPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHUDWidget", &AACFPlayerController::execGetHUDWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics
	{
		struct ACFPlayerController_eventGetHUDWidget_Parms
		{
			UACFUWHUD* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFPlayerController_eventGetHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UACFUWHUD_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Game/Player/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AACFPlayerController, nullptr, "GetHUDWidget", nullptr, nullptr, sizeof(ACFPlayerController_eventGetHUDWidget_Parms), Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AACFPlayerController_GetHUDWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AACFPlayerController_GetHUDWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AACFPlayerController_NoRegister()
	{
		return AACFPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AACFPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIHUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIHUDWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AACFPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AACFPlayerController_GetHUDWidget, "GetHUDWidget" }, // 2942568253
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Core/Game/Player/ACFPlayerController.h" },
		{ "ModuleRelativePath", "Public/Core/Game/Player/ACFPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFPlayerController_Statics::NewProp_UIHUDWidget_MetaData[] = {
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Game/Player/ACFPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFPlayerController_Statics::NewProp_UIHUDWidget = { "UIHUDWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFPlayerController, UIHUDWidget), Z_Construct_UClass_UACFUWHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AACFPlayerController_Statics::NewProp_UIHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::NewProp_UIHUDWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFPlayerController_Statics::NewProp_UIHUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFPlayerController_Statics::ClassParams = {
		&AACFPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AACFPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AACFPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AACFPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACFPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACFPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACFPlayerController, 1461727824);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<AACFPlayerController>()
	{
		return AACFPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACFPlayerController(Z_Construct_UClass_AACFPlayerController, &AACFPlayerController::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("AACFPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
