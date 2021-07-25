// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFAbilityTask_SpawnProjectile() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_UACFAbilityTask_SpawnProjectile();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFProjectileBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedCombatSystem_eventSpawnActorDelegate_Parms
		{
			AActor* SpawnedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedCombatSystem_eventSpawnActorDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedCombatSystem, nullptr, "SpawnActorDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedCombatSystem_eventSpawnActorDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UACFAbilityTask_SpawnProjectile::execFinishSpawningActor)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(AACFProjectileBase,Z_Param_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityTask_SpawnProjectile::execBeginSpawningActor)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_GET_OBJECT_REF(AACFProjectileBase,Z_Param_Out_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_InClass,Z_Param_Out_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UACFAbilityTask_SpawnProjectile::execSpawnProjectile)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
		P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingOverride);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UACFAbilityTask_SpawnProjectile**)Z_Param__Result=UACFAbilityTask_SpawnProjectile::SpawnProjectile(Z_Param_OwningAbility,Z_Param_SpawnTransform,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingOverride),Z_Param_Class);
		P_NATIVE_END;
	}
	void UACFAbilityTask_SpawnProjectile::StaticRegisterNativesUACFAbilityTask_SpawnProjectile()
	{
		UClass* Class = UACFAbilityTask_SpawnProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSpawningActor", &UACFAbilityTask_SpawnProjectile::execBeginSpawningActor },
			{ "FinishSpawningActor", &UACFAbilityTask_SpawnProjectile::execFinishSpawningActor },
			{ "SpawnProjectile", &UACFAbilityTask_SpawnProjectile::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics
	{
		struct ACFAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			TSubclassOf<AACFProjectileBase>  InClass;
			AACFProjectileBase* SpawnedActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, InClass), Z_Construct_UClass_AACFProjectileBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AACFProjectileBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ACFAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACFAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_SpawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityTask_SpawnProjectile, nullptr, "BeginSpawningActor", nullptr, nullptr, sizeof(ACFAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms), Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics
	{
		struct ACFAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			AACFProjectileBase* SpawnedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AACFProjectileBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityTask_SpawnProjectile, nullptr, "FinishSpawningActor", nullptr, nullptr, sizeof(ACFAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms), Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics
	{
		struct ACFAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms
		{
			UGameplayAbility* OwningAbility;
			FTransform SpawnTransform;
			ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
			TSubclassOf<AACFProjectileBase>  Class;
			UACFAbilityTask_SpawnProjectile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingOverride_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingOverride;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_CollisionHandlingOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_CollisionHandlingOverride = { "CollisionHandlingOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, CollisionHandlingOverride), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, Class), Z_Construct_UClass_AACFProjectileBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACFAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, ReturnValue), Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_SpawnTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_CollisionHandlingOverride_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_CollisionHandlingOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|GSC|Tasks" },
		{ "Comment", "/** Spawn new projectile on the network authority (server) */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Spawn new projectile on the network authority (server)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACFAbilityTask_SpawnProjectile, nullptr, "SpawnProjectile", nullptr, nullptr, sizeof(ACFAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms), Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_NoRegister()
	{
		return UACFAbilityTask_SpawnProjectile::StaticClass();
	}
	struct Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_BeginSpawningActor, "BeginSpawningActor" }, // 639385466
		{ &Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_FinishSpawningActor, "FinishSpawningActor" }, // 1075141843
		{ &Z_Construct_UFunction_UACFAbilityTask_SpawnProjectile_SpawnProjectile, "SpawnProjectile" }, // 3615681594
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""Convenience task for spawning actor projectiles on the network authority.\n*/" },
		{ "IncludePath", "AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Convenience task for spawning actor projectiles on the network authority." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_SpawnProjectile, Success), Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn_MetaData[] = {
		{ "Comment", "/** Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare) */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn = { "DidNotSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UACFAbilityTask_SpawnProjectile, DidNotSpawn), Z_Construct_UDelegateFunction_AdvancedCombatSystem_SpawnActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACFAbilityTask_SpawnProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::ClassParams = {
		&UACFAbilityTask_SpawnProjectile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UACFAbilityTask_SpawnProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UACFAbilityTask_SpawnProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UACFAbilityTask_SpawnProjectile, 2909708673);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<UACFAbilityTask_SpawnProjectile>()
	{
		return UACFAbilityTask_SpawnProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UACFAbilityTask_SpawnProjectile(Z_Construct_UClass_UACFAbilityTask_SpawnProjectile, &UACFAbilityTask_SpawnProjectile::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("UACFAbilityTask_SpawnProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACFAbilityTask_SpawnProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
