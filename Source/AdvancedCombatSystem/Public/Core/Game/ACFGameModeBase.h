// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ACFGameModeBase.generated.h"

class UACMCollisionManagerComponent;
class AACFPlayerController;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACF")
	UACMCollisionManagerComponent*  CollisionManagerComponent;
	
public:
	// Set default values in constructor
	AACFGameModeBase();

	UFUNCTION(BlueprintPure, Category = "ACF")
	FORCEINLINE UACMCollisionManagerComponent* GetCollisionManager() const { return CollisionManagerComponent; }

	UFUNCTION(BlueprintCallable, Category = "ACF")
	TArray<AACFPlayerController*> GetAllPlayerControllers();
};
