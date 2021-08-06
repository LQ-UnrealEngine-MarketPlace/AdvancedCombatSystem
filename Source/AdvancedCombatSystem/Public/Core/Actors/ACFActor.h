// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Interfaces/ACFActorInterface.h"
#include <AbilitySystemInterface.h>
#include "ACFActor.generated.h"

class UACFCoreComponent;
class UACFAbilitySystemComponent;
class UAbilitySystemComponent;
class UACFLocomotionComponent;
class UAttributeSet;

UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFActor : public AActor, public IAbilitySystemInterface, public IACFActorInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AACFActor();

	// Setup AttributeSets here
	virtual void PreInitializeComponents() override;

	/** Companion Core Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACF | Components", meta = (AllowPrivateAccess = "true"))
	UACFCoreComponent* CoreComponent;

	/** Actor AbilitySystemComponent */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACF | Components", meta = (AllowPrivateAccess = "true"))
	UACFAbilitySystemComponent* AbilitySystemComponent;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY()
	TMap<FString, const UAttributeSet*> AttributeSets;

	// Implement IACFActorInterface
	UACFCoreComponent* GetCoreComponent() const override;
	UACFAbilityComboManagerComponent* GetAbilityComboManagerComponent() const override;
	UACFAbilityQueueComponent* GetAbilityQueueComponent() const override;
	UACFLocomotionComponent* GetLocomotionComponent() const override;
	TMap<FString, const UAttributeSet*> GetAttributeSets() const override;
	// ~IACFActorInterface

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Create and register attribute sets */
	void SetupAttributeSets();
};
