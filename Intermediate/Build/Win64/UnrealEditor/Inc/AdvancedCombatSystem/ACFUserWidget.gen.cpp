// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Widgets/ACFUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUserWidget() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUserWidget_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFCoreComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UACFUserWidget::execGetPercentForAttributes)
	{
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_MaxAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentForAttributes(Z_Param_Attribute,Z_Param_MaxAttribute);
		P_NATIVE_END;
	}
	void UACFUserWidget::StaticRegisterNativesUACFUserWidget()
	{
		UClass* Class = UACFUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPercentForAttributes", &UACFUserWidget::execGetPercentForAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics
	{
		struct ACFUserWidget_eventGetPercentForAttributes_Parms
		{
			FGameplayAttribute Attribute;
			FGameplayAttribute MaxAttribute;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAttribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUserWidget_eventGetPercentForAttributes_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::NewProp_MaxAttribute = { "MaxAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUserWidget_eventGetPercentForAttributes_Parms, MaxAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUserWidget_eventGetPercentForAttributes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::NewProp_MaxAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Helper function to return percentage from Attribute / MaxAttribute */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUserWidget.h" },
		{ "ToolTip", "Helper function to return percentage from Attribute / MaxAttribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUserWidget, nullptr, "GetPercentForAttributes", nullptr, nullptr, sizeof(ACFUserWidget_eventGetPercentForAttributes_Parms), Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFUserWidget_NoRegister()
	{
		return UACFUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UACFUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCoreComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCoreComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFUserWidget_GetPercentForAttributes, "GetPercentForAttributes" }, // 3414124102
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/Widgets/ACFUserWidget.h" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "Category", "ACF" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUserWidget, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerCoreComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerCoreComponent = { "OwnerCoreComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUserWidget, OwnerCoreComponent), Z_Construct_UClass_UACFCoreComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerCoreComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerCoreComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUserWidget_Statics::NewProp_OwnerCoreComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFUserWidget_Statics::ClassParams = {
		&UACFUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFUserWidget, 30809736);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFUserWidget>()
	{
		return UACFUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFUserWidget(Z_Construct_UClass_UACFUserWidget, &UACFUserWidget::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
