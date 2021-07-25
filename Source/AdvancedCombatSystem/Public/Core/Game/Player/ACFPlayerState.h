// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include <AbilitySystemInterface.h>
#include "ACFPlayerState.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
protected:
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	TMap<FString, const UAttributeSet*> AttributeSets;

public:
	// Set default values in constructor
	AACFPlayerState();

	// Implement IAbilitySystemInterface
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	void GetAttributeSet(TMap<FString, const UAttributeSet*>& OutAttributeSets);

	TMap<FString, const UAttributeSet*> GetAttributeSets();

protected:
	void SetupAttributeSets();
};
