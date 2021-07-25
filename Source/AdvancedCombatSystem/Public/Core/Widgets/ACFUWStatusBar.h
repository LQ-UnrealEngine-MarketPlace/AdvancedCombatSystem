// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Widgets/ACFUserWidget.h"
#include <AttributeSet.h>
#include <GameplayTagContainer.h>
#include "ACFUWStatusBar.generated.h"

class UWidgetComponent;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFUWStatusBar : public UACFUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Category = "ACF")
	UWidgetComponent* OwnerWidgetComponent;

public:
	void SetOwnerWidgetComponent(UWidgetComponent* InWidgetComponent);
	
	/** Event triggered by Companion Core Component whenever an attribute value is changed */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue);

	/** Event triggered by Companion Core Component whenever an attribute value is changed */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF | UI")
	void OnGameplayTagChange(FGameplayTag GameplayTag, int32 NewCount);
};
