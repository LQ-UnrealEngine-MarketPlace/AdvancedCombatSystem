// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "Core/Interfaces/ACFActorInterface.h"
#include "ACFPawnBase.generated.h"

class UACFCoreComponent;
class UACFAbilitySystemComponent;
class UACFAbilityComboManagerComponent;
class UACFAbilityQueueComponent;
class UACFLocomotionComponent;
class UAttributeSet;

UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFPawnBase : public APawn, public IAbilitySystemInterface, public IACFActorInterface
{
	GENERATED_BODY()

protected:
	/** Companion Core Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACF | Components", meta = (AllowPrivateAccess = "true"))
	UACFCoreComponent* CoreComponent;

	/** Actor AbilitySystemComponent */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACF | Components", meta = (AllowPrivateAccess = "true"))
	UACFAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	TMap<FString, const UAttributeSet*> AttributeSets;

public:
	// Sets default values for this pawn's properties
	AACFPawnBase();

	// Setup AttributeSets here
	virtual void PreInitializeComponents() override;

	// Implement IACFActorInterface
	UACFCoreComponent* GetCoreComponent() const override;
	UACFAbilityComboManagerComponent* GetAbilityComboManagerComponent() const override;
	UACFAbilityQueueComponent* GetAbilityQueueComponent() const override;
	UACFLocomotionComponent* GetLocomotionComponent() const override;
	TMap<FString, const UAttributeSet*> GetAttributeSets() const override;
	// ~ IACFActorInterface

	// Implement IAbilitySystemInterface
	UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	// ~ IAbiltiySystemInterface

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Create and register attribute sets */
	void SetupAttributeSets();
};
