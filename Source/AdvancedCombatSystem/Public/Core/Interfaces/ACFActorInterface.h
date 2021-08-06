// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ACFActorInterface.generated.h"

class UACFCoreComponent;
class UACFAbilityComboManagerComponent;
class UACFAbilityQueueComponent;
class UACFLocomotionComponent;
class UAttributeSet;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UACFActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ADVANCEDCOMBATSYSTEM_API IACFActorInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/** Returns the companion core component to use for this actor. */
	virtual UACFCoreComponent* GetCoreComponent() const = 0;

	/** Returns the combo manager component to use for this actor. */
	virtual UACFAbilityComboManagerComponent* GetAbilityComboManagerComponent() const = 0;

	/** Returns the ability queue component to use for this actor. */
	virtual UACFAbilityQueueComponent* GetAbilityQueueComponent() const = 0;

	/** Returns the locomotion component to use for this actor. */
	virtual UACFLocomotionComponent* GetLocomotionComponent() const = 0;

	/** Returns the AttributeSets array initialized in constructor from config */
	virtual TMap<FString, const UAttributeSet*> GetAttributeSets() const = 0;
};
