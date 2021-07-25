// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Widgets/ACFUWStatusBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUWStatusBar() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUWStatusBar_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUWStatusBar();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUserWidget();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	static FName NAME_UACFUWStatusBar_OnAttributeChange = FName(TEXT("OnAttributeChange"));
	void UACFUWStatusBar::OnAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue)
	{
		ACFUWStatusBar_eventOnAttributeChange_Parms Parms;
		Parms.Attribute=Attribute;
		Parms.NewValue=NewValue;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWStatusBar_OnAttributeChange),&Parms);
	}
	static FName NAME_UACFUWStatusBar_OnGameplayTagChange = FName(TEXT("OnGameplayTagChange"));
	void UACFUWStatusBar::OnGameplayTagChange(FGameplayTag GameplayTag, int32 NewCount)
	{
		ACFUWStatusBar_eventOnGameplayTagChange_Parms Parms;
		Parms.GameplayTag=GameplayTag;
		Parms.NewCount=NewCount;
		ProcessEvent(FindFunctionChecked(NAME_UACFUWStatusBar_OnGameplayTagChange),&Parms);
	}
	void UACFUWStatusBar::StaticRegisterNativesUACFUWStatusBar()
	{
	}
	struct Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWStatusBar_eventOnAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWStatusBar_eventOnAttributeChange_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWStatusBar_eventOnAttributeChange_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever an attribute value is changed */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWStatusBar.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever an attribute value is changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWStatusBar, nullptr, "OnAttributeChange", nullptr, nullptr, sizeof(ACFUWStatusBar_eventOnAttributeChange_Parms), Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWStatusBar_eventOnGameplayTagChange_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFUWStatusBar_eventOnGameplayTagChange_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::NewProp_NewCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "Comment", "/** Event triggered by Companion Core Component whenever an attribute value is changed */" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWStatusBar.h" },
		{ "ToolTip", "Event triggered by Companion Core Component whenever an attribute value is changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWStatusBar, nullptr, "OnGameplayTagChange", nullptr, nullptr, sizeof(ACFUWStatusBar_eventOnGameplayTagChange_Parms), Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFUWStatusBar_NoRegister()
	{
		return UACFUWStatusBar::StaticClass();
	}
	struct Z_Construct_UClass_UACFUWStatusBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidgetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFUWStatusBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFUWStatusBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFUWStatusBar_OnAttributeChange, "OnAttributeChange" }, // 422840007
		{ &Z_Construct_UFunction_UACFUWStatusBar_OnGameplayTagChange, "OnGameplayTagChange" }, // 459505246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWStatusBar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/Widgets/ACFUWStatusBar.h" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWStatusBar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWStatusBar_Statics::NewProp_OwnerWidgetComponent_MetaData[] = {
		{ "Category", "ACF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/ACFUWStatusBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWStatusBar_Statics::NewProp_OwnerWidgetComponent = { "OwnerWidgetComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWStatusBar, OwnerWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWStatusBar_Statics::NewProp_OwnerWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWStatusBar_Statics::NewProp_OwnerWidgetComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFUWStatusBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWStatusBar_Statics::NewProp_OwnerWidgetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFUWStatusBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFUWStatusBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFUWStatusBar_Statics::ClassParams = {
		&UACFUWStatusBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFUWStatusBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWStatusBar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFUWStatusBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWStatusBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFUWStatusBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFUWStatusBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFUWStatusBar, 2737484111);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFUWStatusBar>()
	{
		return UACFUWStatusBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFUWStatusBar(Z_Construct_UClass_UACFUWStatusBar, &UACFUWStatusBar::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFUWStatusBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFUWStatusBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
