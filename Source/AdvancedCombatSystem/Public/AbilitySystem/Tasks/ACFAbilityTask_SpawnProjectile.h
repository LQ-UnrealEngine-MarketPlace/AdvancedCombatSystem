// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "ACFAbilityTask_SpawnProjectile.generated.h"

class AACFProjectileBase;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnActorDelegate, AActor*, SpawnedActor);

/**
*	Convenience task for spawning actor projectiles on the network authority.
*/
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFAbilityTask_SpawnProjectile : public UAbilityTask
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintAssignable)
	FSpawnActorDelegate	Success;

	/** Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare) */
	UPROPERTY(BlueprintAssignable)
	FSpawnActorDelegate	DidNotSpawn;

	/** Spawn new projectile on the network authority (server) */
	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"), Category = "Ability|GSC|Tasks")
	static UACFAbilityTask_SpawnProjectile* SpawnProjectile(UGameplayAbility* OwningAbility, FTransform  SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, TSubclassOf<AACFProjectileBase> Class);

	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"), Category = "Abilities")
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AACFProjectileBase> InClass, AACFProjectileBase*& SpawnedActor);

	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"), Category = "Abilities")
	void FinishSpawningActor(UGameplayAbility* OwningAbility, AACFProjectileBase* SpawnedActor);

protected:
	FGameplayAbilityTargetDataHandle CachedTargetDataHandle;
	FTransform CachedSpawnTransform;
	ESpawnActorCollisionHandlingMethod CachedCollisionHandlingOverride;
};
