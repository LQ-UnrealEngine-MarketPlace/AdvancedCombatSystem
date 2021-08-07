// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ACFAnimationData.generated.h"

class UACFGameplayAbility;
class UGameplayEffect;


UENUM(BlueprintType)
enum class ELocomotionState : uint8
{
	Idle = 0,
	Walk = 1,
	Jog = 2,
	Sprint = 3,
	Wilderness = 4
};

UENUM(BlueprintType)
enum class EAimOffsetClamp : uint8
{
	Nearest = 0 UMETA(DisplayName = "Nearest"),
	Left = 1    UMETA(DisplayName = "Left"),
	Right = 2   UMETA(DisplayName = "Right"),
};

UENUM(BlueprintType)
enum class EAimOffsets :uint8
{
	None = 0	UMETA(DisplayName = "NONE"),
	Aim = 1		UMETA(DisplayName = "Aim"),
	Look = 2	UMETA(DisplayName = "Look")
};

UENUM(BlueprintType)
enum class ERotationMethod : uint8
{
	None = 0			    UMETA(DisplayName = "NONE"),
	RotateToVelocity = 1	UMETA(DisplayName = "Rotate To Velocity"),
	AbsoluteRotation = 2	UMETA(DisplayName = "Absolute Rotation"),
	DesiredRotation	= 3 	UMETA(DisplayName = "Desired Rotation"),
	DesiredAtAngle	= 4 	UMETA(DisplayName = "Desired At Angle")
};

USTRUCT(BlueprintType)
struct FDebugLineParams
{
	GENERATED_BODY()

	/** LookAtLineColor Debug */
	UPROPERTY(EditDefaultsOnly, Category = "ACF | Debug")
	FLinearColor LookAtLineColor;

	/** AimLineColor Debug */
	UPROPERTY(EditDefaultsOnly, Category = "ACF | Debug")
	FLinearColor AimLineColor;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | Debug")
	bool bLinePersists = false;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | Debug")
	float LineThickness = 0.f;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | Debug")
	float LineLifeTime = 0.f;
};

USTRUCT(BlueprintType)
struct FAimOffset
{
	GENERATED_BODY()

	FAimOffset() {};

	FAimOffset(FRotator InAimOffset)
	{
		AimOffset = InAimOffset;
	}

	UPROPERTY(BlueprintReadWrite, Category = "ACF | Animations")
	FRotator AimOffset;
};

USTRUCT(BlueprintType)
struct FACFLocomotionState
{
	GENERATED_BODY()

	FACFLocomotionState() {};

	FACFLocomotionState(ELocomotionState InLocomotionState, float InMaxStateSpeed)
	{
		LocomotionState = InLocomotionState;
		MaxStateSpeed = InMaxStateSpeed;
	}

	FACFLocomotionState(ELocomotionState InLocomotionState, TSubclassOf<UGameplayEffect> InLocomotionCost)
	{
		LocomotionState = InLocomotionState;
		LocomotionCost = InLocomotionCost;
	}

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | Locomotion")
	ELocomotionState LocomotionState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | Locomotion")
	float MaxStateSpeed = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | Locomotion")
	TSubclassOf<UGameplayEffect> LocomotionCost;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | Locomotion")
	FName CameraMovement;

	FORCEINLINE	bool operator < (const FACFLocomotionState& Other) const
	{
		return this->MaxStateSpeed < Other.MaxStateSpeed;
	}

	FORCEINLINE bool operator == (const FACFLocomotionState& Other) const
	{
		return this->LocomotionState == Other.LocomotionState;
	}

	FORCEINLINE bool operator != (const ELocomotionState& Other) const
	{
		return this->LocomotionState != LocomotionState;
	}

	FORCEINLINE bool operator == (const ELocomotionState& Other) const
	{
		return this->LocomotionState == LocomotionState;
	}

	FORCEINLINE bool operator != (const FACFLocomotionState& Other) const
	{
		return this->LocomotionState != Other.LocomotionState;
	}
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FACFOnLocomotionStateChanged, ELocomotionState, State);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FACFOnFirstPerson, bool, bIsFirstPersonView);