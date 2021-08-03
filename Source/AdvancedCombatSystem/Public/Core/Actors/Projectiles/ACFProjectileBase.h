// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <GameplayTagContainer.h>
#include <GameplayEffectTypes.h>
#include "ACFProjectileBase.generated.h"

class UProjectileMovementComponent;

UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AACFProjectileBase();

	/** Projectile movement component */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "ACF | Projectile")
	UProjectileMovementComponent* ProjectileMovement;

	/** Whether to draw debug traces on explosion sphere */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	bool bDebugTrace = false;

	/** Whether to display the static mesh in game */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	bool bStaticMeshHiddenInGame = false;

	/** Radius of the explosion sphere to detect overlapped pawns */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	float ExplosionTraceRadius = 200.f;

	/** Initial speed of projectile */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	float ProjectileInitialSpeed = 3000.f;

	/** Gravity Scale for this projectile. Set to 0 to disable gravity */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	float ProjectileGravityScale = 5.f;

	/** The amount of time (in seconds) before destroying this projectile on explosion, to let the explosion cue vfx play */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	float DestroyDelay = 1.f;

	/** The GameplayTag associated with the GameplayCue to add for projectile (attached to root component on begin play) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	FGameplayTag ProjectileGameplayCueTag;

	/** The GameplayTag associated with the GameplayCue to add for explosion (triggered when projectile overlap pawns or hit WorldStatic/Dynamic) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	FGameplayTag ExplosionGameplayCueTag;

	/** The Event GameplayTag to send back to instigator to end the ability when the projectile is destroyed (after DestroyDelay on explosion) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	FGameplayTag EndAbilityGameplayEventTag;

	/** The GameplayEffect spec handle to apply to overlapped actors */
	UPROPERTY(BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "ACF | Projectile")
	FGameplayEffectSpecHandle DamageEffectSpecHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
