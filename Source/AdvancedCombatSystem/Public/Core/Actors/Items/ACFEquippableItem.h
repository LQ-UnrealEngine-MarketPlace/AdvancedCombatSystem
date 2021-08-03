// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Actors/Items/ACFItem.h"
#include <AttributeSet.h>
#include "ACFEquippableItem.generated.h"

class AACFCharacterBase;
class UGameplayEffect;
class UGameplayAbility;
class USkeletalMeshComponent;
class USoundCue;
/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFEquippableItem : public AACFItem
{
	GENERATED_BODY()

	//friend class UACFEquipmentComponent;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ACF")
	USkeletalMeshComponent* SkeletalMeshComponent;

public:
	/** Modifier applied once this item is equipped */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | Equippable")
	TSubclassOf<UGameplayEffect> AttributeModifier;

	/** Attributes requirement to equip this item */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | Equippable")
	TArray<FGameplayAttribute> AttributesRequirement;

	/** Player when Equip */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Equippable")
	USoundCue* EquipSound;

	/* Play when Unequip */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACF | Equippable")
	USoundCue* UnequipSound;

public:
	AACFEquippableItem();

	UFUNCTION(BlueprintCallable, Category = "ACF")
	FORCEINLINE USkeletalMeshComponent*  GetSkeletalMeshComponent() const { return SkeletalMeshComponent; }

private:
	UFUNCTION()
	void Internal_OnEquipped(AACFCharacterBase* InOwner);

	UFUNCTION()
	void Internal_OnUnEquipped();

protected:
	void AddModifierToOwner(TSubclassOf<UGameplayEffect> InAttributesModifier);
	void RemoveModifierToOwner(TSubclassOf<UGameplayEffect> InAttributesModifier);

	UFUNCTION(BlueprintNativeEvent, Category = "ACF")
	void OnItemEquipped();
	virtual void OnItemEquipped_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "ACF")
	void OnItemUnEquipped();
	virtual void OnItemUnEquipped_Implementation();
};
