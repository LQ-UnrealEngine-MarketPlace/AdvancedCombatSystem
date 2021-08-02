// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ACFItemTypes.h"
#include "ACFItem.generated.h"

class AACFCharacterBase;
class UTexture2D;

UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFItem : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "ACF")
	AACFCharacterBase* ItemOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | Item")
	FItemDetails ItemDetails;

public:	
	// Sets default values for this actor's properties
	AACFItem();

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE UTexture2D* GetThumbnailImage() const { return ItemDetails.ThumbNail; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE FText GetItemName() const { return ItemDetails.Name; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE FText GetItemDescription() const { return ItemDetails.Description; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE EItemType GetItemType() { return ItemDetails.Type; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE AACFCharacterBase* GetItemOwner() { return ItemOwner; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE FGuid GetGUID() const { return ItemDetails.GUID; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE FItemDetails GetItemDetails() const { return ItemDetails; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE FGameplayTag GetItemSlot() const { return ItemDetails.SlotTag; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE float GetItemWeigh() const { return ItemDetails.Weight; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE EItemRarity GetItemRarity() const { return ItemDetails.Rarity; }

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE TArray<TSubclassOf<UACFGameplayAbility>> GetGrantedAbilities() const { return ItemDetails.GrantedAbilities; }
};
