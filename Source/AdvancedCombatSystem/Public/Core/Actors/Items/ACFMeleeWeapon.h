// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Actors/Items/ACFWeapon.h"
#include "ACFMeleeWeapon.generated.h"

class UACMCollisionHandlerComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FACFOnWeaponHit, FHitResult, HitResult);

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFMeleeWeapon : public AACFWeapon
{
	GENERATED_BODY()

protected:
	 UACMCollisionHandlerComponent* CollisionHandlerComponent;

public:
	AACFMeleeWeapon();

private:
	UFUNCTION()
	void HandleAttackHit(FName TraceName, const FHitResult& HitResult);

protected:
	virtual void BeginPlay() override;

	virtual void OnItemEquipped_Implementation() override;

	virtual void OnItemUnEquipped_Implementation() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "ACF")
	FACFOnWeaponHit OnWeaponHit;

	UFUNCTION(BlueprintNativeEvent, Category = "ACF")
	void OnBeginWeaponAttack();

	UFUNCTION(BlueprintNativeEvent, Category = "ACF")
	void OnEndWeaponAttack();
};
