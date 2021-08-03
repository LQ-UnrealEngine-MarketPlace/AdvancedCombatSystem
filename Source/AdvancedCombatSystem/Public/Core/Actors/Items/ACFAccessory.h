// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ACFEquippableItem.h"
#include "ACFItemTypes.h"
#include "ACFAccessory.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFAccessory : public AACFEquippableItem
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	FName AttachmentSocker;
	
public:
	AACFAccessory();

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE FName GetAttachmentSocket() const { return AttachmentSocker; }
};
