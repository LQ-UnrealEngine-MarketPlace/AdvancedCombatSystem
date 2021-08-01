// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UACFUWHUD;
#ifdef ADVANCEDCOMBATSYSTEM_ACFPlayerController_generated_h
#error "ACFPlayerController.generated.h already included, missing '#pragma once' in ACFPlayerController.h"
#endif
#define ADVANCEDCOMBATSYSTEM_ACFPlayerController_generated_h

#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_SPARSE_DATA
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHUDWidget);


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHUDWidget);


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACFPlayerController(); \
	friend struct Z_Construct_UClass_AACFPlayerController_Statics; \
public: \
	DECLARE_CLASS(AACFPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(AACFPlayerController)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAACFPlayerController(); \
	friend struct Z_Construct_UClass_AACFPlayerController_Statics; \
public: \
	DECLARE_CLASS(AACFPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(AACFPlayerController)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AACFPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AACFPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFPlayerController(AACFPlayerController&&); \
	NO_API AACFPlayerController(const AACFPlayerController&); \
public:


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AACFPlayerController(AACFPlayerController&&); \
	NO_API AACFPlayerController(const AACFPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACFPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACFPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACFPlayerController)


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UIHUDWidget() { return STRUCT_OFFSET(AACFPlayerController, UIHUDWidget); }


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_14_PROLOG
#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_RPC_WRAPPERS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_INCLASS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_SPARSE_DATA \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDCOMBATSYSTEM_API UClass* StaticClass<class AACFPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID repo_Plugins_AdvancedCombatSystem_Source_AdvancedCombatSystem_Public_Core_Game_Player_ACFPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
