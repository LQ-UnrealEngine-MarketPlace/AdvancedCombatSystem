// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Actors/Items/ACFEquippableItem.h"
#include "ACFWeapon.generated.h"

class USceneComponent;
/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFWeapon : public AACFEquippableItem
{
	GENERATED_BODY()
	
	//friend class UACFEquipmentComponent;

	UPROPERTY()
	AACFWeapon* LeftHandWeapon;

public:
	AACFWeapon();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | Weapon")
	USceneComponent* HandlePosition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACF | Weapon")
	TSubclassOf<AACFWeapon> LeftHandWeaponClass;

	/** Offset when attaching this to character's hands */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Weapon")
	FTransform AttachmentOffset;

	/** Tag to identify weappon type */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Weapon")
	FGameplayTag WeaponTypeTag;

	/** Tag to define animation pose */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Weapon")
	FGameplayTag MovesetOverlay;

	/** A map to define types of Ability Actions */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Weapon")
	TMap<FGameplayTag, UGameplayAbility*> MovesetAbilities;

	/** Defined socket name in which this can be attached on character's body */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Weapon")
	FName OnBodySocketName;

	/** Defined socket name in which this can be attached on character's equippable location */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Weapon")
	FName EquippedSocketName;

	/** Tag to define weapon category */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Weapon")
	FGameplayTag WeaponCategory;

	/** Define an angle that this weapon can handle to block the coming attack */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Weapon")
	float BlockingAngle = 180.f;

private:
	void AlignWeapon();

protected:
	virtual void BeginPlay() override;

	virtual void OnItemEquipped_Implementation() override;
	virtual void OnItemUnEquipped_Implementation() override;
};
