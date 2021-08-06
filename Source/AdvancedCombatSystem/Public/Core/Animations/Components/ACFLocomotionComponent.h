// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../ACFAnimationData.h"
#include <Net/UnrealNetwork.h>
#include <GameFramework/CharacterMovementComponent.h>
#include "ACFLocomotionComponent.generated.h"

class AACFCharacterBase;
class UCharacterMovementComponent;
class UACFGameplayAbility;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDCOMBATSYSTEM_API UACFLocomotionComponent : public UActorComponent
{
	GENERATED_BODY()

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditDefaultsOnly, Category = "ACF | Debug")
	FDebugLineParams DebugLineParams;
#endif

	UPROPERTY(ReplicatedUsing = OnRep_LocomotionState)
	FACFLocomotionState TargetLocomotionState;

	ELocomotionState CurrentLocomotionState;

	UACFGameplayAbility* CurrentLocomotionAbility;

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | Debug")
	bool bDebug = false;
#endif

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "ACF | Animation")
	FGameplayTag BasePose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "ACF | Animation")
	FGameplayTag OverlayPose;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AGR| Animation")
	bool bFirstPerson = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | Animation")
	FRotator AimOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | Animation")
	FVector LookAtLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "ACF | Animation")
	FGameplayTagContainer AnimModTags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing = OnRep_RotationMethod, Category = "ACF | Animation")
	ERotationMethod RotationMethod = ERotationMethod::None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing = OnRep_RotationSpeed, Category = "ACF | Animation")
	float RotationSpeed = 360.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, Category = "ACF | Animation")
	float TurnStartAngle = 90.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, Category = "ACF | Animation")
	float TurnStopTolerance = 1.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, Category = "ACF | Animation")
	EAimOffsets AimOffsetType = EAimOffsets::None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, Category = "ACF | Animation")
	EAimOffsetClamp AimOffsetBehavior = EAimOffsetClamp::Nearest;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Animation")
	float AimClamp = 135.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Animation")
	bool CameraBased = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Animation")
	FName AimSocketName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Animation")
	FName LookAtSocketName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Animation")
	TEnumAsByte<ECollisionChannel> TraceChannel = ECollisionChannel::ECC_Visibility;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Animation")
	AACFCharacterBase* CharacterOwner;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Animation")
	UCharacterMovementComponent* OwnerCharacterMovementComponent;

	UPROPERTY(BlueprintAssignable, Category = "ACF | FPP")
	FACFOnFirstPerson OnFirstPerson;

	UPROPERTY(BlueprintAssignable, Category = "ACF | Locomotion")
	FACFOnLocomotionStateChanged OnLocomotionStateChanged;

	UPROPERTY(BlueprintAssignable, Category = "ACF | Locomotion")
	FACFOnLocomotionStateChanged OnTargetLocomotionStateChanged;

	/** Default Locomotion State */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Locomotion")
	ELocomotionState DefaultLocomotionState = ELocomotionState::Jog;

	/** Indicates the max speed for each Locomotion State */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Locomotion")
	TArray<FACFLocomotionState> LocomotionStates;

	/** Indicates if the character follows control rotation and strafes */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Locomotion")
	bool bShouldStrafe = false;

	/** Indicates whether the character is strafing or not */
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Locomotion")
	bool bIsStrafing = false;

private:
	void RecastOwner();

	void HandleRotationSpeedChange();

	void HandleRotationMethodChange();

	void LookAtIfPlayerControlled();

	void LookAtWithoutCamera();

	void UpdateCharacterMaxSpeed();

	void UpdateLocomotionState();

	UFUNCTION()
	void HandleStateChanged(const ELocomotionState NewLocomotionState);

	UFUNCTION()
	void OnRep_RotationMethod();

	UFUNCTION()
	void OnRep_RotationSpeed();

	UFUNCTION()
	void OnRep_LocomotionState();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetBasePose(FGameplayTag InBasePose);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetOverlayPose(FGameplayTag InOverlayPose);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetRotation(ERotationMethod InRotationMethod, float InRotationSpeed = 0.f, float InTurnStartAngle = 0.f, float InTurnStopToTolerance = 0.f);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetupAimOffset(EAimOffsets InAimOffsetType, EAimOffsetClamp InAimBehavior);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetAimOffet(FRotator InAimOffset);

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void NetMulticast_SetAimOffsets(FRotator InAimOffset);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetLookAtLocation(FVector InLocation);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void NetMulticast_SetLookAtLocation(FVector InLocation);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void NetMulticast_ShouldStrafe(bool bInShouldStrafe);

public:
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACF | Locomotion", meta = (DisplayName = "Set Strafe Movement"))
	void Server_SetStrafeMovement(const bool bInShouldStrafe);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACF | Locomotion", meta = (DisplayName = "Accelerate To Next State"))
	void Server_AccelerateToNextState();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACF | Locomotion", meta = (DisplayName = "Brake To Previous State"))
	void Server_BrakeToPreviousState();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACF | Locomotion", meta = (DisplayName = "Set Locomotion State"))
	void Server_SetLocomotionState(const ELocomotionState InLocomotionState);

public:	
	// Sets default values for this component's properties
	UACFLocomotionComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category = "ACF |  Poses")
	void SetupBasePose(FGameplayTag InBasePose);

	UFUNCTION(BlueprintCallable, Category = "ACF | Poses")
	void SetOverlayPose(FGameplayTag InOverlayPose);

	UFUNCTION(BlueprintCallable, Category = "ACF | FPP")
	void SetupFPP(bool bInFirstPerson);

	UFUNCTION(BlueprintCallable, Category = "ACF | Rotation")
	void SetupRotation(const ERotationMethod InRotationMethod = ERotationMethod::None, const float InRotationSpeed = 360.f, const float InTurnStartAngle = 90.f, const float InTurnStopTolerance = 5.f);

	UFUNCTION(BlueprintCallable, Category = "ACF | AimOffset")
	void SetupAimOffset(const EAimOffsets InAimOffsetType = EAimOffsets::None, const EAimOffsetClamp InAimBehavior = EAimOffsetClamp::Nearest, const float InAimClamp = 90.f, const bool InCameraBased = true, const FName InAimSocketName = "hand_r", const FName InLookAtSocketName = "head");

	UFUNCTION(BlueprintCallable, Category = "ACF | AnimTags")
	void AddTag(FGameplayTag InGameplayTag);

	UFUNCTION(BlueprintCallable, Category = "ACF | AnimTags")
	bool RemoveTag(FGameplayTag InGameplayTag);

	UFUNCTION(BlueprintCallable, Category = "ACF | Tick")
	void AimTick();

	UFUNCTION(BlueprintCallable, Category = "ACF | Tick")
	void TurnInPlaceTick();

	UFUNCTION(BlueprintPure, Category = "ACF | Locomotion")
	float GetCharacterMaxSpeed() const { return OwnerCharacterMovementComponent->MaxWalkSpeed; }

	UFUNCTION(BlueprintPure, Category = "ACF | Locomotion")
	TSubclassOf<UACFGameplayAbility> GetLocomotionAbilityByState(const ELocomotionState InLocomotionState);

	UFUNCTION(BlueprintPure, Category = "ACF | Locomotion")
	float GetCharacterMaxSpeedByState(ELocomotionState InLocomotioState) 
	{ 
		FACFLocomotionState* LocomotionStatePtr = LocomotionStates.FindByKey(InLocomotioState);
		return (LocomotionStatePtr) ? LocomotionStatePtr->MaxStateSpeed : 0.f;
	}

	UFUNCTION(BlueprintPure, Category = "ACF | Locomotion")
	FORCEINLINE ELocomotionState GetCurrentLocomotionState() const { return CurrentLocomotionState; }

	UFUNCTION(BlueprintPure, Category = "ACF | Locomotion")
	FORCEINLINE ELocomotionState GetTargetLocomotionState() const { return TargetLocomotionState.LocomotionState; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
