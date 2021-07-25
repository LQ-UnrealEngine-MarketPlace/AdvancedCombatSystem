// Fill out your copyright notice in the Description page of Project Settings.LogAdvancedCombatFrameworkAI

#pragma once

#include "CoreMinimal.h"

// Intended categories:
//	Log - This happened. What gameplay programmers may care about to debug
//	Verbose - This is why this happened. What you may turn on to debug the ability system code.
//

ADVANCEDCOMBATSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(LogAdvancedCombatFramework, Display, All);
ADVANCEDCOMBATSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(VLogAdvancedCombatFramework, Display, All);
ADVANCEDCOMBATSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(LogAdvancedCombatFrameworkUI, Display, All);
ADVANCEDCOMBATSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(VLogAdvancedCombatFrameworkUI, Display, All);
ADVANCEDCOMBATSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(LogAdvancedCombatFrameworkAI, Display, All);
ADVANCEDCOMBATSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(VLogAdvancedCombatFrameworkAI, Display, All);

#if NO_LOGGING || !PLATFORM_DESKTOP

// Without logging enabled we pass ability system through to UE_LOG which only handles Fatal verbosity in NO_LOGGING
#define ACF_LOG(Verbosity, Format, ...) \
{ \
    UE_LOG(LogAdvancedCombatFramework, Verbosity, Format, ##__VA_ARGS__); \
    }

#define ACF_VLOG(Actor, Verbosity, Format, ...) \
{ \
    UE_LOG(VLogAdvancedCombatFramework, Verbosity, Format, ##__VA_ARGS__); \
    UE_VLOG(Actor, VLogAdvancedCombatFramework, Verbosity, Format, ##__VA_ARGS__); \
}

#define ACF_UI_LOG(Verbosity, Format, ...) \
{ \
    UE_LOG(LogAdvancedCombatFrameworkUI, Verbosity, Format, ##__VA_ARGS__); \
    }

#define ACF_UI_VLOG(Actor, Verbosity, Format, ...) \
{ \
    UE_LOG(VLogAdvancedCombatFrameworkUI, Verbosity, Format, ##__VA_ARGS__); \
    UE_VLOG(Actor, VLogAdvancedCombatFrameworkUI, Verbosity, Format, ##__VA_ARGS__); \
}

#define ACF_AI_LOG(Verbosity, Format, ...) \
{ \
    UE_LOG(LogAdvancedCombatFrameworkAI, Verbosity, Format, ##__VA_ARGS__); \
    }

#define ACF_AI_VLOG(Actor, Verbosity, Format, ...) \
{ \
    UE_LOG(VLogAdvancedCombatFrameworkAI, Verbosity, Format, ##__VA_ARGS__); \
    UE_VLOG(Actor, VLogAdvancedCombatFrameworkAI, Verbosity, Format, ##__VA_ARGS__); \
}

#else

#define ACF_LOG(Verbosity, Format, ...) \
{ \
    UE_LOG(LogAdvancedCombatFramework, Verbosity, Format, ##__VA_ARGS__); \
    }

#define ACF_VLOG(Actor, Verbosity, Format, ...) \
{ \
    UE_LOG(VLogAdvancedCombatFramework, Verbosity, Format, ##__VA_ARGS__); \
    UE_VLOG(Actor, VLogAdvancedCombatFramework, Verbosity, Format, ##__VA_ARGS__); \
}

#define ACF_UI_LOG(Verbosity, Format, ...) \
{ \
    UE_LOG(LogAdvancedCombatFrameworkUI, Verbosity, Format, ##__VA_ARGS__); \
    }

#define ACF_UI_VLOG(Actor, Verbosity, Format, ...) \
{ \
    UE_LOG(VLogAdvancedCombatFrameworkUI, Verbosity, Format, ##__VA_ARGS__); \
    UE_VLOG(Actor, VLogAdvancedCombatFrameworkUI, Verbosity, Format, ##__VA_ARGS__); \
}

#define ACF_AI_LOG(Verbosity, Format, ...) \
{ \
    UE_LOG(LogAdvancedCombatFrameworkAI, Verbosity, Format, ##__VA_ARGS__); \
    }

#define ACF_AI_VLOG(Actor, Verbosity, Format, ...) \
{ \
    UE_LOG(VLogAdvancedCombatFrameworkAI, Verbosity, Format, ##__VA_ARGS__); \
    UE_VLOG(Actor, VLogAdvancedCombatFrameworkAI, Verbosity, Format, ##__VA_ARGS__); \
}

#endif //NO_LOGGING
