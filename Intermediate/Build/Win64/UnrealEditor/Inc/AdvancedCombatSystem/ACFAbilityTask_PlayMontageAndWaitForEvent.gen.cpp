// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAbilityTask_PlayMontageAndWaitForEvent() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventACFPlayMontageAndWaitForEventDelegate_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFPlayMontageAndWaitForEventDelegate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventACFPlayMontageAndWaitForEventDelegate_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "ACFPlayMontageAndWaitForEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventACFPlayMontageAndWaitForEventDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UACFAbilityTask_PlayMontageAndWaitForEvent::execPlayMontageAndWaitForEvent)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_EventTags);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
		P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFAbilityTask_PlayMontageAndWaitForEvent**)Z_Param__Result=UACFAbilityTask_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_EventTags,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityTask_PlayMontageAndWaitForEvent::execUnbindAllDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllDelegate();
		P_NATIVE_END;
	}
	void UACFAbilityTask_PlayMontageAndWaitForEvent::StaticRegisterNativesUACFAbilityTask_PlayMontageAndWaitForEvent()
	{
		UClass* Class = UACFAbilityTask_PlayMontageAndWaitForEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayMontageAndWaitForEvent", &UACFAbilityTask_PlayMontageAndWaitForEvent::execPlayMontageAndWaitForEvent },
			{ "UnbindAllDelegate", &UACFAbilityTask_PlayMontageAndWaitForEvent::execUnbindAllDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics
	{
		struct ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAnimMontage* MontageToPlay;
			FGameplayTagContainer EventTags;
			float Rate;
			FName StartSection;
			bool bStopWhenAbilityEnds;
			float AnimRootMotionTranslationScale;
			UACFAbilityTask_PlayMontageAndWaitForEvent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, StartSection), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms), &Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms, ReturnValue), Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "ACF | Abiltiy| Tasks" },
		{ "Comment", "/**\n\x09* Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty),\n\x09* the EventReceived delegate will fire with a tag and event data.\n\x09*\n\x09* If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped\n\x09* when the ability is explicitly cancelled.\n\x09*\n\x09* On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\n\x09* OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\x09*\n\x09* @param TaskInstanceName Set to override the name of this task, for later querying\n\x09* @param MontageToPlay The montage to play on the character\n\x09* @param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback\n\x09* @param Rate Change to play the montage faster or slower\n\x09* @param StartSection Change to montage section to play during montage\n\x09* @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n\x09* @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n\x09*/" },
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty),\nthe EventReceived delegate will fire with a tag and event data.\n\nIf StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped\nwhen the ability is explicitly cancelled.\n\nOn normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\nOnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\n@param TaskInstanceName Set to override the name of this task, for later querying\n@param MontageToPlay The montage to play on the character\n@param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback\n@param Rate Change to play the montage faster or slower\n@param StartSection Change to montage section to play during montage\n@param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n@param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent, nullptr, "PlayMontageAndWaitForEvent", nullptr, nullptr, sizeof(ACFAbilityTask_PlayMontageAndWaitForEvent_eventPlayMontageAndWaitForEvent_Parms), Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_UnbindAllDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_UnbindAllDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability | Tasks" },
		{ "Comment", "/**\n\x09* Unbinds all animation delegate on this Ability Task (except OnCanceled)\n\x09*/" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Unbinds all animation delegate on this Ability Task (except OnCanceled)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_UnbindAllDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent, nullptr, "UnbindAllDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_UnbindAllDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_UnbindAllDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_UnbindAllDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_UnbindAllDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_NoRegister()
	{
		return UACFAbilityTask_PlayMontageAndWaitForEvent::StaticClass();
	}
	struct Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[];
#endif
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent, "PlayMontageAndWaitForEvent" }, // 1862543534
		{ &Z_Construct_UFunction_UACFAbilityTask_PlayMontageAndWaitForEvent_UnbindAllDelegate, "UnbindAllDelegate" }, // 877403380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This task combines PlayMontageAndWait and WaitForEvent into one task, so you can wait for multiple\n* types of activations such as from a melee combo\n*\n* Much of this code is copied from one of those two ability tasks\n*\n* This is a good task to look at as an example when creating game-specific tasks\n*\n* It is expected that each game will have a set of game-specific tasks to do what they want\n*/" },
		{ "IncludePath", "AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This task combines PlayMontageAndWait and WaitForEvent into one task, so you can wait for multiple\ntypes of activations such as from a melee combo\n\nMuch of this code is copied from one of those two ability tasks\n\nThis is a good task to look at as an example when creating game-specific tasks\n\nIt is expected that each game will have a set of game-specific tasks to do what they want" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/** The montage completely finished playing */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "The montage completely finished playing" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, OnCompleted), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut_MetaData[] = {
		{ "Comment", "/** The montage started blending out */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "The montage started blending out" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, OnBlendOut), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted_MetaData[] = {
		{ "Comment", "/** The montage was interrupted */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "The montage was interrupted" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, OnInterrupted), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled_MetaData[] = {
		{ "Comment", "/** The ability task was explicitly cancelled by another ability */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "The ability task was explicitly cancelled by another ability" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, OnCancelled), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived_MetaData[] = {
		{ "Comment", "/** One of the triggering gameplay events happened */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "One of the triggering gameplay events happened" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, EventReceived), Z_Construct_UDelegateFunction_AdvancedCombatSystem_ACFPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay_MetaData[] = {
		{ "Comment", "/** Montage that is playing */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Montage that is playing" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags_MetaData[] = {
		{ "Comment", "/** List of tags to match against gameplay events */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "List of tags to match against gameplay events" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate_MetaData[] = {
		{ "Comment", "/** Playback rate */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Playback rate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, Rate), METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection_MetaData[] = {
		{ "Comment", "/** Section to start montage from */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Section to start montage from" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, StartSection), METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "Comment", "/** Modifies how root motion movement to apply */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Modifies how root motion movement to apply" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_PlayMontageAndWaitForEvent, AnimRootMotionTranslationScale), METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_MetaData[] = {
		{ "Comment", "/** Rather montage should be aborted if ability ends */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_PlayMontageAndWaitForEvent.h" },
		{ "ToolTip", "Rather montage should be aborted if ability ends" },
	};
#endif
	void Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((UACFAbilityTask_PlayMontageAndWaitForEvent*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UACFAbilityTask_PlayMontageAndWaitForEvent), &Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnBlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnInterrupted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_OnCancelled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAbilityTask_PlayMontageAndWaitForEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::ClassParams = {
		&UACFAbilityTask_PlayMontageAndWaitForEvent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFAbilityTask_PlayMontageAndWaitForEvent, 3845029326);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFAbilityTask_PlayMontageAndWaitForEvent>()
	{
		return UACFAbilityTask_PlayMontageAndWaitForEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent(Z_Construct_UClass_UACFAbilityTask_PlayMontageAndWaitForEvent, &UACFAbilityTask_PlayMontageAndWaitForEvent::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFAbilityTask_PlayMontageAndWaitForEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAbilityTask_PlayMontageAndWaitForEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
