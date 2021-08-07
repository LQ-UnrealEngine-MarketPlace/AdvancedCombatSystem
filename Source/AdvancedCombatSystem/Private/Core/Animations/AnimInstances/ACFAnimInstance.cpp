// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Animations/AnimInstances/ACFAnimInstance.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include <Kismet/KismetMathLibrary.h>

UACFAnimInstance::UACFAnimInstance(const FObjectInitializer& ObjectInitializer) : UAnimInstance(ObjectInitializer)
{
	TargetFrameRate = 60.f;
	LeanSmooth = 6.f;
	AimSmooth = 6.f;
}

void UACFAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	RecastOwnerComponent();
}

void UACFAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	DeltaTick = DeltaSeconds;

	GetComponentVariables();
	SetMovementVectorsAndStates();
	SetupLeaning();
	SetupAimOffset();
	SetupMovementStates();
}

void UACFAnimInstance::RecastOwnerComponent()
{
	CharacterOwner = Cast<AACFCharacterBase>(TryGetPawnOwner());
	if (CharacterOwner)
	{
		OwnerCharacterMovementComponent = CharacterOwner->GetCharacterMovement();
		OwnerLocomotionComponent = UACFFunctionLibrary::GetLocomotionComponentFromActor(CharacterOwner);
	}
}

void UACFAnimInstance::GetComponentVariables()
{
	if (OwnerLocomotionComponent)
	{
		ModificationTags = OwnerLocomotionComponent->AnimModTags;
		BasePose = OwnerLocomotionComponent->BasePose;
		OverlayPose = OwnerLocomotionComponent->OverlayPose;
		AimOffsetType = OwnerLocomotionComponent->AimOffsetType;
		AimOffsetBehavior = OwnerLocomotionComponent->AimOffsetBehavior;
		RawAimOffset = OwnerLocomotionComponent->AimOffset;
		RotationMethod = OwnerLocomotionComponent->RotationMethod;
		bFirstPerson = OwnerLocomotionComponent->bFirstPerson;
		LookAtLocation = OwnerLocomotionComponent->LookAtLocation;
		AimClamp = OwnerLocomotionComponent->AimClamp;
	}
	else
	{
		RecastOwnerComponent();
	}
}

void UACFAnimInstance::SetMovementVectorsAndStates()
{
	if (!CharacterOwner)
	{
		ACF_LOG(Warning, TEXT("UACFAnimInstance::SetMovementVectorsAndState: CharacterOwner is invalid so fire RecastOwnerComponent()"))
		RecastOwnerComponent();
		SetMovementVectorsAndStates();
		return;
	}

	Velocity = CharacterOwner->GetVelocity().Size();
	VelocityVector = CharacterOwner->GetVelocity();
	FRotator Rotation = CharacterOwner->GetActorRotation();

	UpVelocity = Rotation.UnrotateVector(CharacterOwner->GetVelocity()).Z;
	ForwardVelocity = Rotation.UnrotateVector(CharacterOwner->GetVelocity()).X;
	StrafeVelocity = Rotation.UnrotateVector(CharacterOwner->GetVelocity()).Y;
	IdleXY = FVector(VelocityVector.X, VelocityVector.Y, 0.f).Size();
	bIdle = FMath::IsNearlyZero(IdleXY);
	if (!bIdle)
	{
		Direction = CalculateDirection(CharacterOwner->GetVelocity(), CharacterOwner->GetActorRotation());
	}

	if (OwnerCharacterMovementComponent)
	{
		InputAcceleration =OwnerCharacterMovementComponent->GetCurrentAcceleration();
	}
}

void UACFAnimInstance::SetupLeaning()
{
	if (!CharacterOwner)
	{
		ACF_LOG(Warning, TEXT("UACFAnimInstance::SetupLeaning: CharacterOwner is invalid so fire RecastOwnerComponent()"))
		RecastOwnerComponent();
		SetupLeaning();
		return;
	}
}

void UACFAnimInstance::SetupAimOffset()
{
	if (!CharacterOwner)
	{
		ACF_LOG(Warning, TEXT("UACFAnimInstance::SetupAimOffset: CharacterOwner is invalid so fire RecastOwnerComponent()"))
		RecastOwnerComponent();
		SetupAimOffset();
		return;
	}

	FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(RawAimOffset, CharacterOwner->GetActorRotation());
	const float Min = AimClamp * -1.f;
	const float Max = AimClamp;

	float TargetX = Delta.Yaw;
	const float TargetY = Delta.Pitch;

	if (!UKismetMathLibrary::InRange_FloatFloat(Delta.Yaw, Min, Max, true, true))
	{
		switch (AimOffsetBehavior)
		{
		case EAimOffsetClamp::Nearest:
			TargetX = FMath::Clamp(Delta.Yaw, Min, Max);
			break;

		case EAimOffsetClamp::Left:
			TargetX = Min;
			break;

		case EAimOffsetClamp::Right:
			TargetX = Max;
			break;

		default:
			checkNoEntry();
		}
	}

	FinalAimOffset = FMath::Vector2DInterpTo(FinalAimOffset, FVector2D(TargetX, TargetY), DeltaTick, AimSmooth);
	Delta = UKismetMathLibrary::NormalizedDeltaRotator(PreviousFrameAim, RawAimOffset);
	AimDelta = FMath::Vector2DInterpTo(AimDelta, FVector2D(NormalizeLean(Delta.Yaw), NormalizeLean(Delta.Pitch)), DeltaTick, LeanSmooth);
	PreviousFrameAim = RawAimOffset;
}

void UACFAnimInstance::SetupMovementStates()
{
	if (OwnerCharacterMovementComponent)
	{
		bFalling = OwnerCharacterMovementComponent->IsFalling();
		bCrouching = OwnerCharacterMovementComponent->IsCrouching();
		bFlying = OwnerCharacterMovementComponent->IsFlying();
		bSwimming = OwnerCharacterMovementComponent->IsSwimming();
		bWalkingState = OwnerCharacterMovementComponent->IsWalking();
		bGrounded = OwnerCharacterMovementComponent->IsMovingOnGround();
		bInAir = bFalling || bFlying;
		MovementMode = OwnerCharacterMovementComponent->MovementMode;
	}

	bStanding = IsStanding();
}

float UACFAnimInstance::NormalizeLean(float InValue)
{
	return (InValue* (1.f / DeltaTick)) / TargetFrameRate;
}

bool UACFAnimInstance::IsStanding()
{
	return !bCrouching;
}
