// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Core/Interfaces/ACFActorInterface.h"
#include "ACFCharacterBase.generated.h"

class UAbilitySystemComponent;
class UACFAbilityQueueComponent;
class UACFAbilityComboManagerComponent;
class UACFAbilitySystemComponent;
class UACFLocomotionComponent;

UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFCharacterBase : public ACharacter, public IAbilitySystemInterface, public IACFActorInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "ACF | Components", meta = (AllowPrivateAccess = "true"))
	UACFCoreComponent* CoreComponent = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "ACF | Components", meta = (AllowPrivateAccess = "true"))
	UACFAbilityComboManagerComponent* AbilityComboManagerComponent = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "ACF | Components", meta = (AllowPrivateAccess = "true"))
	UACFAbilityQueueComponent* AbilityQueueComponent = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "ACF | Components", meta = (AllowPrivateAccess = "true"))
	UACFLocomotionComponent* LocomotionComponent = nullptr;

	UPROPERTY()
	TMap<FString, const UAttributeSet*> AttributeSets;

public:
	// Sets default values for this character's properties
	AACFCharacterBase();

public:	
	// Implement IAbilitySystemInterface
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	// ~ IAbilitySystemInterface

	// Implement IACFActorInterface
	UACFCoreComponent* GetCoreComponent() const override;
	UACFAbilityComboManagerComponent* GetAbilityComboManagerComponent() const override;
	UACFAbilityQueueComponent* GetAbilityQueueComponent() const override;
	UACFLocomotionComponent* GetLocomotionComponent() const override;
	TMap<FString, const UAttributeSet*> GetAttributeSets() const override;
	// ~IACFActorInterface

	/**
	 * Returns the ability system component for this character.
	 *
	 * Version of function in AbilitySystemGlobals that returns correct type
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ACF | Components")
	virtual UACFAbilitySystemComponent* GetAbilitySystemComponent();

	/**
	 * Called when the Pawn is being restarted (usually by being possessed by a Controller)
	 *
	 * Note that this event will most likely trigger on first spawn also
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "ACF| Character")
	void OnRespawn();

	/** Overrides APawn:Restart() to be able to call the event above */
	virtual void Restart() override;

protected:
	TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
};
