// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ACFPlayerController.generated.h"

class UACFUWHUD;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "ACF | UI")
	UACFUWHUD* UIHUDWidget;

public:
	// Set default values in constructor
	AACFPlayerController();

	virtual void CreateHUD();

	virtual void OnRep_PlayerState() override;

protected:
	virtual void OnPossess(APawn* InPawn) override;

public:
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "ACF | UI")
	UACFUWHUD* GetHUDWidget();
};
