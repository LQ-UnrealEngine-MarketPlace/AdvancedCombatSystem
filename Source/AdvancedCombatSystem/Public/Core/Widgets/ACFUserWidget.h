// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <AttributeSet.h>
#include "ACFUserWidget.generated.h"

class AActor;
class UACFCoreComponent;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "ACF")
	AActor* OwnerActor;

	UPROPERTY(BlueprintReadOnly, Category = "ACF")
	UACFCoreComponent* OwnerCoreComponent;

public:
	void SetOwnerActor(AActor* Actor);

	/** Helper function to return percentage from Attribute / MaxAttribute */
	UFUNCTION(BlueprintPure, Category = "ACF | UI")
	float GetPercentForAttributes(FGameplayAttribute Attribute, FGameplayAttribute MaxAttribute);
};
