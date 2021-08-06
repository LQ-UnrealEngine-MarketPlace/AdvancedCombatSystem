// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../ACFAnimationData.h"
#include <Net/UnrealNetwork.h>
#include "ACFLocomotionComponent.generated.h"

class AACFCharacterBase;
class UCharacterMovementComponent;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDCOMBATSYSTEM_API UACFLocomotionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditDefaultsOnly, Category = "ACF | Debug")
	FDebugLineParams DebugLineParams;
#endif

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

private:
	void RecastOwner();

	void HandleRotationSpeedChange();

	void HandleRotationMethodChange();

	void LookAtIfPlayerControlled();

	void LookAtWithoutCamera();

	UFUNCTION()
	void OnRep_RotationMethod();

	UFUNCTION()
	void OnRep_RotationSpeed();

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

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void NetMulticast_SetLookAtLocation(FVector InLocation);

public:	
	// Sets default values for this component's properties
	UACFLocomotionComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category = "ACF |  Poses")
	void SetupBasePose(FGameplayTag InBasePose);

	UFUNCTION(BlueprintCallable, Category = "ACF | Poses")
	void SetOverlayPose(FGameplayTag InOverlayPose);

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

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
