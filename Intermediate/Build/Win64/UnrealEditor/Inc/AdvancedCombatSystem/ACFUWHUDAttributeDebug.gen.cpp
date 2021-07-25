// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFUWHUDAttributeDebug() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUWHUDAttributeDebug_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUWHUDAttributeDebug();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFUWHUD();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	DEFINE_FUNCTION(UACFUWHUDAttributeDebug::execPrevDebugCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrevDebugCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFUWHUDAttributeDebug::execNextDebugCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextDebugCharacter();
		P_NATIVE_END;
	}
	void UACFUWHUDAttributeDebug::StaticRegisterNativesUACFUWHUDAttributeDebug()
	{
		UClass* Class = UACFUWHUDAttributeDebug::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextDebugCharacter", &UACFUWHUDAttributeDebug::execNextDebugCharacter },
			{ "PrevDebugCharacter", &UACFUWHUDAttributeDebug::execPrevDebugCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFUWHUDAttributeDebug_NextDebugCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUDAttributeDebug_NextDebugCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUDAttributeDebug_NextDebugCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUDAttributeDebug, nullptr, "NextDebugCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUDAttributeDebug_NextDebugCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUDAttributeDebug_NextDebugCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUDAttributeDebug_NextDebugCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUDAttributeDebug_NextDebugCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFUWHUDAttributeDebug_PrevDebugCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFUWHUDAttributeDebug_PrevDebugCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFUWHUDAttributeDebug_PrevDebugCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFUWHUDAttributeDebug, nullptr, "PrevDebugCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFUWHUDAttributeDebug_PrevDebugCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFUWHUDAttributeDebug_PrevDebugCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFUWHUDAttributeDebug_PrevDebugCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFUWHUDAttributeDebug_PrevDebugCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFUWHUDAttributeDebug_NoRegister()
	{
		return UACFUWHUDAttributeDebug::StaticClass();
	}
	struct Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeRowTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeRowTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesVerticalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesVerticalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugActorsTitle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugActorsTitle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDebugActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDebugActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeValues;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeValueMaps_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValueMaps_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValueMaps_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeValueMaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameMinDesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NameMinDesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueMinDesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueMinDesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumIntegralDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumIntegralDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFractionalDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFractionalDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UACFUWHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFUWHUDAttributeDebug_NextDebugCharacter, "NextDebugCharacter" }, // 1295629808
		{ &Z_Construct_UFunction_UACFUWHUDAttributeDebug_PrevDebugCharacter, "PrevDebugCharacter" }, // 3039362307
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeRowTemplate_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ACF | UI" },
		{ "Comment", "/**\n\x09* Convenience UHorizontalBox that serves as a \"template\" for attribute row,\n\x09* so that we can customize its styling in Blueprints (font size, color, etc.)\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
		{ "ToolTip", "Convenience UHorizontalBox that serves as a \"template\" for attribute row,\nso that we can customize its styling in Blueprints (font size, color, etc.)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeRowTemplate = { "AttributeRowTemplate", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, AttributeRowTemplate), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeRowTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeRowTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributesVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributesVerticalBox = { "AttributesVerticalBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, AttributesVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributesVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributesVerticalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActorsTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ACF | UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActorsTitle = { "DebugActorsTitle", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, DebugActorsTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActorsTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActorsTitle_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActors_Inner = { "DebugActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActors = { "DebugActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, DebugActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_CurrentDebugActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_CurrentDebugActor = { "CurrentDebugActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, CurrentDebugActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_CurrentDebugActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_CurrentDebugActor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValues_Inner = { "AttributeValues", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValues_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValues = { "AttributeValues", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, AttributeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValues_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps_ValueProp = { "AttributeValueMaps", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps_Key_KeyProp = { "AttributeValueMaps_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps = { "AttributeValueMaps", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, AttributeValueMaps), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DefaultPadding_MetaData[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DefaultPadding = { "DefaultPadding", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, DefaultPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DefaultPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DefaultPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_NameMinDesiredWidth_MetaData[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_NameMinDesiredWidth = { "NameMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, NameMinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_NameMinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_NameMinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_ValueMinDesiredWidth_MetaData[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_ValueMinDesiredWidth = { "ValueMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, ValueMinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_ValueMinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_ValueMinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumIntegralDigits_MetaData[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, MinimumIntegralDigits), METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumIntegralDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumIntegralDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumIntegralDigits_MetaData[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, MaximumIntegralDigits), METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumIntegralDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumIntegralDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumFractionalDigits_MetaData[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumFractionalDigits = { "MinimumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, MinimumFractionalDigits), METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumFractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumFractionalDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumFractionalDigits_MetaData[] = {
		{ "Category", "ACF | UI" },
		{ "ModuleRelativePath", "Public/Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumFractionalDigits = { "MaximumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFUWHUDAttributeDebug, MaximumFractionalDigits), METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumFractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumFractionalDigits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeRowTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributesVerticalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActorsTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DebugActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_CurrentDebugActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_AttributeValueMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_DefaultPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_NameMinDesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_ValueMinDesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MinimumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::NewProp_MaximumFractionalDigits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFUWHUDAttributeDebug>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::ClassParams = {
		&UACFUWHUDAttributeDebug::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFUWHUDAttributeDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFUWHUDAttributeDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFUWHUDAttributeDebug, 1518225331);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFUWHUDAttributeDebug>()
	{
		return UACFUWHUDAttributeDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFUWHUDAttributeDebug(Z_Construct_UClass_UACFUWHUDAttributeDebug, &UACFUWHUDAttributeDebug::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFUWHUDAttributeDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFUWHUDAttributeDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
