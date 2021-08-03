// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Actors/Items/ACFItem.h"
#include <GameplayTagContainer.h>
#include <GameplayEffectTypes.h>
#include <Components/StaticMeshComponent.h>
#include "ACFProjectile.generated.h"

class UProjectileMovementComponent;
class AACFCharacterBase;
class UStaticMesh;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFProjectile : public AACFItem
{
	GENERATED_BODY()
	
	bool bIsFlying = false;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACF | Projectile")
	UStaticMeshComponent* StaticMeshComponent;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACF | Projectile")
	UProjectileMovementComponent* ProjectileMovementComponent;

	/** Whether to draw debug traces on explosion sphere */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	bool bDebugTrace = false;

	/** Whether to display the static mesh in game */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	bool bStaticMeshHiddenInGame = false;

	/** Radius of the explosion sphere to detect overlapped pawns */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	float ExplosionTraceRadius = 200.f;

	/** Initial speed of projectile */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	float ProjectileInitialSpeed = 3000.f;

	/** Gravity Scale for this projectile. Set to 0 to disable gravity */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	float ProjectileGravityScale = 5.f;

	/** The amount of time (in seconds) before destroying this projectile on explosion, to let the explosion cue vfx play */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	float DestroyDelay = 1.f;

	/** The GameplayTag associated with the GameplayCue to add for projectile (attached to root component on begin play) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	FGameplayTag ProjectileGameplayCueTag;

	/** The GameplayTag associated with the GameplayCue to add for explosion (triggered when projectile overlap pawns or hit WorldStatic/Dynamic) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	FGameplayTag ExplosionGameplayCueTag;

	/** The Event GameplayTag to send back to instigator to end the ability when the projectile is destroyed (after DestroyDelay on explosion) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	FGameplayTag EndAbilityGameplayEventTag;

	/** The GameplayEffect spec handle to apply to overlapped actors */
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	FGameplayEffectSpecHandle DamageEffectSpecHandle;

	/** If this projectile must remain attached to the character's body when hit */
	UPROPERTY(EditDefaultsOnly, Category = "ACF | Projectile")
	bool bAttachOnHit = true;

	/** How deep is the projectile must penetrate the character body when hit */
	UPROPERTY(EditDefaultsOnly, Category = "ACF | Projectile")
	float PenetrationLevel = 30.f;

	/** How long projectile is visible before pending to destroy */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Projectile")
	float ProjectileLifeSpan = 5.f;

	/** How long projectile is visible when hit before pending to destroy */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Projectile")
	float AttachedLifeSpan = 10.f;

private:
	void MakeStatic();

	UFUNCTION()
	void HandleAttackHit(FName TraceName, const FHitResult& HitResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this actor's properties
	AACFProjectile();

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovementComponent() { return ProjectileMovementComponent; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE UStaticMesh* GetStaticMesh() { return StaticMeshComponent->GetStaticMesh(); }

	UFUNCTION(BlueprintCallable, Category = "ACF")
	void SetupProjectile(AACFCharacterBase* InOwner, float ProjectileMaxSpeed);

	UFUNCTION(BlueprintCallable, Category = "ACF")
	void ActivateDamage();
};
