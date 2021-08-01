// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACFCharacterBase;
class AActor;
struct FGameplayEventData;
struct FHitResult;
#ifdef ADVANCEDCOMBATSYSTEM_ACFTargetType_generated_h
#error "ACFTargetType.generated.h already included, missing '#pragma once' in ACFTargetType.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFTargetType_generated_h

#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_SPARSE_DATA
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_RPC_WRAPPERS \
	virtual void GetTargets_Implementation(AACFCharacterBase* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const; \
 \
	DECLARE_FUNCTION(execGetTargets);


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetTargets_Implementation(AACFCharacterBase* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const; \
 \
	DECLARE_FUNCTION(execGetTargets);


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_EVENT_PARMS \
	struct ACFTargetType_eventGetTargets_Parms \
	{ \
		AACFCharacterBase* TargetingCharacter; \
		AActor* TargetingActor; \
		FGameplayEventData EventData; \
		TArray<FHitResult> OutHitResults; \
		TArray<AActor*> OutActors; \
	};


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_CALLBACK_WRAPPERS
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFTargetType(); \
	friend struct Z_Construct_UClass_UACFTargetType_Statics; \
public: \
	DECLARE_CLASS(UACFTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFTargetType)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUACFTargetType(); \
	friend struct Z_Construct_UClass_UACFTargetType_Statics; \
public: \
	DECLARE_CLASS(UACFTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFTargetType)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFTargetType(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFTargetType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFTargetType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFTargetType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFTargetType(UACFTargetType&&); \
	NO_API UACFTargetType(const UACFTargetType&); \
public:


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFTargetType(UACFTargetType&&); \
	NO_API UACFTargetType(const UACFTargetType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFTargetType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFTargetType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFTargetType)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_PRIVATE_PROPERTY_OFFSET
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_19_PROLOG \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_EVENT_PARMS


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_RPC_WRAPPERS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_CALLBACK_WRAPPERS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_INCLASS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_CALLBACK_WRAPPERS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_INCLASS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFTargetType>();

#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_SPARSE_DATA
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_RPC_WRAPPERS
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFTargetType_UseOwner(); \
	friend struct Z_Construct_UClass_UACFTargetType_UseOwner_Statics; \
public: \
	DECLARE_CLASS(UACFTargetType_UseOwner, UACFTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFTargetType_UseOwner)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUACFTargetType_UseOwner(); \
	friend struct Z_Construct_UClass_UACFTargetType_UseOwner_Statics; \
public: \
	DECLARE_CLASS(UACFTargetType_UseOwner, UACFTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFTargetType_UseOwner)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFTargetType_UseOwner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFTargetType_UseOwner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFTargetType_UseOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFTargetType_UseOwner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFTargetType_UseOwner(UACFTargetType_UseOwner&&); \
	NO_API UACFTargetType_UseOwner(const UACFTargetType_UseOwner&); \
public:


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFTargetType_UseOwner(UACFTargetType_UseOwner&&); \
	NO_API UACFTargetType_UseOwner(const UACFTargetType_UseOwner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFTargetType_UseOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFTargetType_UseOwner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFTargetType_UseOwner)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_PRIVATE_PROPERTY_OFFSET
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_34_PROLOG
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_RPC_WRAPPERS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_INCLASS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_INCLASS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFTargetType_UseOwner>();

#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_SPARSE_DATA
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_RPC_WRAPPERS
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACFTargetType_UseEventData(); \
	friend struct Z_Construct_UClass_UACFTargetType_UseEventData_Statics; \
public: \
	DECLARE_CLASS(UACFTargetType_UseEventData, UACFTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFTargetType_UseEventData)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUACFTargetType_UseEventData(); \
	friend struct Z_Construct_UClass_UACFTargetType_UseEventData_Statics; \
public: \
	DECLARE_CLASS(UACFTargetType_UseEventData, UACFTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UACFTargetType_UseEventData)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACFTargetType_UseEventData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACFTargetType_UseEventData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFTargetType_UseEventData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFTargetType_UseEventData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFTargetType_UseEventData(UACFTargetType_UseEventData&&); \
	NO_API UACFTargetType_UseEventData(const UACFTargetType_UseEventData&); \
public:


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UACFTargetType_UseEventData(UACFTargetType_UseEventData&&); \
	NO_API UACFTargetType_UseEventData(const UACFTargetType_UseEventData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACFTargetType_UseEventData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACFTargetType_UseEventData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACFTargetType_UseEventData)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_PRIVATE_PROPERTY_OFFSET
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_48_PROLOG
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_RPC_WRAPPERS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_INCLASS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_INCLASS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class UACFTargetType_UseEventData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_AbilitySystem_ACFTargetType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
