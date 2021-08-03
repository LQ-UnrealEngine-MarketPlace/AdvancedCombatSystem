// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCombatSystem/Public/Core/Actors/Projectiles/ACFProjectileBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACFProjectileBase() {}
// Cross Module References
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFProjectileBase_NoRegister();
	ADVANCEDCOMBATSYSTEM_API UClass* Z_Construct_UClass_AACFProjectileBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvancedCombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
// End Cross Module References
	void AACFProjectileBase::StaticRegisterNativesAACFProjectileBase()
	{
	}
	UClass* Z_Construct_UClass_AACFProjectileBase_NoRegister()
	{
		return AACFProjectileBase::StaticClass();
	}
	struct Z_Construct_UClass_AACFProjectileBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTrace_MetaData[];
#endif
		static void NewProp_bDebugTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshHiddenInGame_MetaData[];
#endif
		static void NewProp_bStaticMeshHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshHiddenInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionTraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileInitialSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileInitialSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileGravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileGravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileGameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileGameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionGameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplosionGameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndAbilityGameplayEventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndAbilityGameplayEventTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectSpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectSpecHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACFProjectileBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** Projectile movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bDebugTrace_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** Whether to draw debug traces on explosion sphere */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "Whether to draw debug traces on explosion sphere" },
	};
#endif
	void Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bDebugTrace_SetBit(void* Obj)
	{
		((AACFProjectileBase*)Obj)->bDebugTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bDebugTrace = { "bDebugTrace", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AACFProjectileBase), &Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bDebugTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bDebugTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bDebugTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bStaticMeshHiddenInGame_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** Whether to display the static mesh in game */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "Whether to display the static mesh in game" },
	};
#endif
	void Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bStaticMeshHiddenInGame_SetBit(void* Obj)
	{
		((AACFProjectileBase*)Obj)->bStaticMeshHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bStaticMeshHiddenInGame = { "bStaticMeshHiddenInGame", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AACFProjectileBase), &Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bStaticMeshHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bStaticMeshHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bStaticMeshHiddenInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionTraceRadius_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** Radius of the explosion sphere to detect overlapped pawns */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "Radius of the explosion sphere to detect overlapped pawns" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionTraceRadius = { "ExplosionTraceRadius", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, ExplosionTraceRadius), METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionTraceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileInitialSpeed_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** Initial speed of projectile */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "Initial speed of projectile" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileInitialSpeed = { "ProjectileInitialSpeed", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, ProjectileInitialSpeed), METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileInitialSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileInitialSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGravityScale_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** Gravity Scale for this projectile. Set to 0 to disable gravity */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "Gravity Scale for this projectile. Set to 0 to disable gravity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGravityScale = { "ProjectileGravityScale", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, ProjectileGravityScale), METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DestroyDelay_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** The amount of time (in seconds) before destroying this projectile on explosion, to let the explosion cue vfx play */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "The amount of time (in seconds) before destroying this projectile on explosion, to let the explosion cue vfx play" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DestroyDelay = { "DestroyDelay", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, DestroyDelay), METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DestroyDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DestroyDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGameplayCueTag_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** The GameplayTag associated with the GameplayCue to add for projectile (attached to root component on begin play) */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "The GameplayTag associated with the GameplayCue to add for projectile (attached to root component on begin play)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGameplayCueTag = { "ProjectileGameplayCueTag", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, ProjectileGameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGameplayCueTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionGameplayCueTag_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** The GameplayTag associated with the GameplayCue to add for explosion (triggered when projectile overlap pawns or hit WorldStatic/Dynamic) */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "The GameplayTag associated with the GameplayCue to add for explosion (triggered when projectile overlap pawns or hit WorldStatic/Dynamic)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionGameplayCueTag = { "ExplosionGameplayCueTag", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, ExplosionGameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionGameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionGameplayCueTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_EndAbilityGameplayEventTag_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** The Event GameplayTag to send back to instigator to end the ability when the projectile is destroyed (after DestroyDelay on explosion) */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "The Event GameplayTag to send back to instigator to end the ability when the projectile is destroyed (after DestroyDelay on explosion)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_EndAbilityGameplayEventTag = { "EndAbilityGameplayEventTag", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, EndAbilityGameplayEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_EndAbilityGameplayEventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_EndAbilityGameplayEventTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DamageEffectSpecHandle_MetaData[] = {
		{ "Category", "ACF | Projectile" },
		{ "Comment", "/** The GameplayEffect spec handle to apply to overlapped actors */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/Actors/Projectiles/ACFProjectileBase.h" },
		{ "ToolTip", "The GameplayEffect spec handle to apply to overlapped actors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DamageEffectSpecHandle = { "DamageEffectSpecHandle", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AACFProjectileBase, DamageEffectSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DamageEffectSpecHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DamageEffectSpecHandle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACFProjectileBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bDebugTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_bStaticMeshHiddenInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionTraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileInitialSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DestroyDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ProjectileGameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_ExplosionGameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_EndAbilityGameplayEventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACFProjectileBase_Statics::NewProp_DamageEffectSpecHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACFProjectileBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACFProjectileBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACFProjectileBase_Statics::ClassParams = {
		&AACFProjectileBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AACFProjectileBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AACFProjectileBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AACFProjectileBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACFProjectileBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACFProjectileBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACFProjectileBase, 3953521211);
	template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<AACFProjectileBase>()
	{
		return AACFProjectileBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACFProjectileBase(Z_Construct_UClass_AACFProjectileBase, &AACFProjectileBase::StaticClass, TEXT("/Script/AdvancedCombatSystem"), TEXT("AACFProjectileBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACFProjectileBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
