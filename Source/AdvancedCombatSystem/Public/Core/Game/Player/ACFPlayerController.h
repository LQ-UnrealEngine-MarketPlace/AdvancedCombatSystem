// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ACFPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Set default values in constructor
	AACFPlayerController();

	virtual void CreateHUD();

	virtual void OnRep_PlayerState() override;

protected:
	virtual void OnPossess(APawn* InPawn) override;
};
