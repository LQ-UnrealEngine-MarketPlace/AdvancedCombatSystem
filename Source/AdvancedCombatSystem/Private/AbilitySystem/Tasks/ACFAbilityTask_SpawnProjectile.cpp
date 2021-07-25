// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Tasks/ACFAbilityTask_SpawnProjectile.h"
#include "Core/Actors/Projectiles/ACFProjectileBase.h"

UACFAbilityTask_SpawnProjectile* UACFAbilityTask_SpawnProjectile::SpawnProjectile(UGameplayAbility* OwningAbility, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, TSubclassOf<AACFProjectileBase> Class)
{
	UACFAbilityTask_SpawnProjectile* MyObj = NewAbilityTask<UACFAbilityTask_SpawnProjectile>(OwningAbility);
	MyObj->CachedSpawnTransform = SpawnTransform;
	MyObj->CachedCollisionHandlingOverride = CollisionHandlingOverride;
	return MyObj;
}

bool UACFAbilityTask_SpawnProjectile::BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AACFProjectileBase> InClass, AACFProjectileBase*& SpawnedActor)
{
	if (Ability && Ability->GetCurrentActorInfo()->IsNetAuthority() && ShouldBroadcastAbilityTaskDelegates())
	{
		UWorld* const World = GEngine->GetWorldFromContextObject(OwningAbility, EGetWorldErrorMode::LogAndReturnNull);
		if (World)
		{
			AActor* OwningActor = Ability->GetOwningActorFromActorInfo();
			APawn* AvatarPawn = Cast<APawn>(Ability->GetAvatarActorFromActorInfo());
			SpawnedActor = World->SpawnActorDeferred<AACFProjectileBase>(InClass, CachedSpawnTransform, OwningActor, AvatarPawn, CachedCollisionHandlingOverride);
		}
	}

	if (SpawnedActor == nullptr)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			DidNotSpawn.Broadcast(nullptr);
		}
		return false;
	}

	return true;
}

void UACFAbilityTask_SpawnProjectile::FinishSpawningActor(UGameplayAbility* OwningAbility, AACFProjectileBase* SpawnedActor)
{

	if (SpawnedActor)
	{
		SpawnedActor->FinishSpawning(CachedSpawnTransform);

		if (ShouldBroadcastAbilityTaskDelegates())
		{
			Success.Broadcast(SpawnedActor);
		}
	}

	EndTask();
}
