// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Core/Animations/ACFAnimationData.h"
#include "ACFAnimInstance.generated.h"

class AACFCharacterBase;
class UCharacterMovementComponent;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	float IdleXY = 0.f;

	FVector VelocityVector;

public:
	UACFAnimInstance(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	AACFCharacterBase* CharacterOwner;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	UCharacterMovementComponent* OwnerCharacterMovementComponent;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	UACFLocomotionComponent* OwnerLocomotionComponent;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim States")
	FGameplayTagContainer ModificationTags;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim States")
	FGameplayTag BasePose;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim States")
	FGameplayTag OverlayPose;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	FRotator RawAimOffset;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	EAimOffsets AimOffsetType;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	EAimOffsetClamp AimOffsetBehavior;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	FVector LookAtLocation;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	FVector2D FinalAimOffset;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	float AimClamp = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	ERotationMethod RotationMethod;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	float DeltaTick = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	FRotator PreviousRotation;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Anim Offset")
	FRotator PreviousFrameAim;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Locomotion")
	float Velocity = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Locomotion")
	float ForwardVelocity = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Locomotion")
	float StrafeVelocity = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Locomotion")
	float UpVelocity = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Locomotion")
	float Direction = 0.f;
	
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Input")
	FVector InputAcceleration;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bFirstPerson = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bIdle = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bInAir = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bStanding = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bSwimming = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bCrouching = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bGrounded = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bWalkingState = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bFlying = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	bool bFalling = false;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | State")
	TEnumAsByte<EMovementMode> MovementMode;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Leans")
	float Lean = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Leans")
	FVector2D AimDelta;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Setup")
	float TargetFrameRate = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Setup")
	float LeanSmooth = 0.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Setup")
	float AimSmooth = 0.f;

private:
	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	void RecastOwnerComponent();

	void GetComponentVariables();

	void SetMovementVectorsAndStates();

	void SetupLeaning();

	void SetupAimOffset();

	void SetupMovementStates();

	float NormalizeLean(float InValue);

	bool IsStanding();
};
