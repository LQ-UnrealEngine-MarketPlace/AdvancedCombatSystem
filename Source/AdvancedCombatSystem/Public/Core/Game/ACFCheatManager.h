// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ACFCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFCheatManager : public UCheatManager
{
	GENERATED_BODY()
	
public:
	/**
	 * Toggles the display of Ability Queue System Debug Widget
	 */
	UFUNCTION(exec)
	void ToggleAbilityQueueDebug();

	/**
	 * Runs command "ToggleDebugAbilitySystem"
	 */
	UFUNCTION(exec)
	void ToggleDebugAbilitySystem() const;

	/**
	 * Runs command "AbilitySystem.Debug.NextCategory"
	 */
	UFUNCTION(exec)
	void ToggleNextAbilitySystemCategory() const;

	/**
	* Toggles the display of Combo Debug Widget
	*/
	UFUNCTION(exec)
	void ToggleAbilityComboDebug();

protected:
	// Little helper to execute command via PlayerController
	void ExecuteConsoleCommand(FString Command) const;
};
