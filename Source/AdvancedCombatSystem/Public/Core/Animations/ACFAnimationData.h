// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ACFAnimationData.generated.h"

UENUM(BlueprintType)
enum class ELocomotionState : uint8
{
	Idle = 0,
	Walk = 1,
	Jog = 2,
	Sprint = 3,
	Wilderness = 4
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

	FACFLocomotionState(ELocomotionState InState, float InMaxStateSpeed) 
	{
		State = InState;
		MaxStateSpeed = InMaxStateSpeed;
	}

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | Locomotion")
	ELocomotionState State;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | Locomotion")
	float MaxStateSpeed = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | Locomotion")
	FName CameraMovement;

	FORCEINLINE bool operator < (const FACFLocomotionState& Other) const
	{
		return this->MaxStateSpeed < Other.MaxStateSpeed;
	}

	FORCEINLINE bool operator == (const FACFLocomotionState& Other) const
	{
		return this->State == Other.State;
	}

	FORCEINLINE bool operator != (const ELocomotionState& Other) const
	{
		return this->State != Other;
	}

	FORCEINLINE bool operator == (const ELocomotionState& Other) const
	{
		return this->State == Other;
	}

	FORCEINLINE bool operator != (const FACFLocomotionState& Other) const
	{
		return this->State != Other.State;
	}
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FACFOnLocomotionStateChanged, ELocomotionState, State);