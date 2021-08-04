// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../ACMData.h"
#include "ACMCollisionHandlerComponent.generated.h"

class AActor;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FACMOnActorDamaged, AActor*, damageReceiver);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FACMOnCollisionDetected, FName, TraceName, const FHitResult&, HitResult);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDCOMBATSYSTEM_API UACMCollisionHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	AActor* OwnerActor;

	UPROPERTY()
	UMeshComponent* DmaageMesh;

	UPROPERTY()
	TMap<FName, FTraceInfo> ActivatedTraces;

	UPROPERTY()
	TMap<FName, FHitActors> AlreadyHitActors;

	UPROPERTY()
	bool bIsStarted = false;

	UPROPERTY()
	TMap<FName, FTrailEffect> EffectComponents;

	UPROPERTY()
	FTimerHandle AllTraceTimer;

	UPROPERTY()
	TMap<FName, FTimerHandle> TraceTimers;

	UPROPERTY()
	bool bSingledTimedTraceStared = false;

	UPROPERTY()
	bool bAllTimedTraceStarted = false;

private:
	UFUNCTION(NetMulticast, WithValidation, Reliable, Category = "ACF")
	void NetMulticast_PlayTrails(const FName& Trail);
	
	UFUNCTION(NetMulticast, WithValidation, Reliable, Category = "ACF")
	void NetMulticast_StopTrails(const FName& Trail);

	void ApplyDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace);

	void ApplyPointDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace);

	void ApplyAreaDamage(const FHitResult& HitResult, const FTraceInfo& CurrentTrace);

	void SetStarted(bool InStarted);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM | Debug")
	EDebugType ShowDebugInfo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM | Debug")
	FLinearColor DebugInactiveColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM | Debug")
	FLinearColor DebugActiveColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM")
	bool bAllowMultipleHitsPerSwing = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM")
	TMap<FName, FTraceInfo> DamageTraces;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM")
	TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels;

	/** Actors to be ignored */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM")
	TArray<AActor*> IgnoredActors;

	/** If this hit, it should ignore based on IgnoredActors */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM")
	bool bIgnoreOwned = true;

	/** If hit, this will apply GameplayEffectToTarget */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM")
	bool bAutoApplyGameplayEffect = true;

protected:
	virtual void BeginPlay() override;

public:	
	// Sets default values for this component's properties
	UACMCollisionHandlerComponent();

	UFUNCTION(BlueprintCallable, Category = "ACM")
	void SetupCollisionManager(UMeshComponent* InDamageMesh);

	UFUNCTION(BlueprintCallable, Category = "ACM")
	void AddActorToIgnore(AActor* IgnoredActor);

	UFUNCTION(BlueprintCallable, Category = "ACM")
	void AddCollisionChannel(TEnumAsByte<ECollisionChannel> InTraceChannel);

	UFUNCTION(BlueprintCallable, Category = "ACM")
	void SetupCollisionChannels(TArray<TEnumAsByte<ECollisionChannel>> InTraceChannels);

	UFUNCTION(BlueprintCallable, Category = "ACM")
	void ClearCollisionChannels();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACM")
	void Server_StartAllTraces();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACM")
	void Server_StopAllTraces();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACM")
	void Server_StartSingleTrace(const FName& Name);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACM")
	void Server_StopSingleTrace(const FName& Name);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACM")
	void Server_TimedSingleTrace(const FName& TraceName, float Duration);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "ACM")
	void Server_StartAllTimedTraces(float Duration);

	UFUNCTION(BlueprintCallable, Category = "ACM")
	TMap<FName, FTraceInfo> GetDamageTraces() const { return DamageTraces; }

	UFUNCTION(BlueprintPure, Category = "ACM")
	FORCEINLINE AActor* GetActorOwner() const { return (!OwnerActor) ? OwnerActor : GetOwner(); }

	/** This is used to override the default owner. Useful to deal damage by character not the weapon */
	UFUNCTION(BlueprintCallable, Category = "ACM")
	void SetActorOwner(AActor* NewOwner) { OwnerActor = NewOwner; }

	UFUNCTION(BlueprintCallable, Category = "ACM")
	void SetTraceConfig(const FName& TraceName, const FTraceInfo& TraceInfo) { DamageTraces.Add(TraceName, TraceInfo); }

	UFUNCTION(BlueprintCallable, Category = "ACM")
	bool TryGetTraceConfig(const FName& TraceName, FTraceInfo& OutTraceInfo) const
	{
		if (DamageTraces.Contains(TraceName))
		{
			OutTraceInfo = *DamageTraces.Find(TraceName);
			return true;
		}

		return false;
	}

	UPROPERTY(BlueprintAssignable, Category = "ACM")
	FACMOnCollisionDetected OnCollisionDetected;

	UPROPERTY(BlueprintAssignable, Category = "ACM")
	FACMOnActorDamaged OnActorDamaged;

public:
	FRotator GetLineRotation(FVector StartLine, FVector EndLine);

	void UpdateCollisions();
};
