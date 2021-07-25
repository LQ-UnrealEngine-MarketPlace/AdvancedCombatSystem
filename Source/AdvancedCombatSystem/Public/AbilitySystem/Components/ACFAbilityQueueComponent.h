// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <GameplayTagContainer.h>
#include "ACFAbilityQueueComponent.generated.h"

class UAbilitySystemComponent;
class UACFGameplayAbility;
class UACFUWDebugAbilityQueue;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDCOMBATSYSTEM_API UACFAbilityQueueComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	/** Ability Queue System */
	bool bAbilityQueueOpened = false;
	bool bAllowAbilitiesForAbilityQueue = false;

	UPROPERTY()
	const UACFGameplayAbility* QueuedAbility = nullptr;
	TArray<TSubclassOf<UACFGameplayAbility>> QueuedAllowedAbilities;

public:	
	// Sets default values for this component's properties
	UACFAbilityQueueComponent();

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	APawn* OwnerPawn;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	UAbilitySystemComponent* OwnerAbilitySystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF | Ability Queue System")
	bool bAbilityQueueEnabled = true;

public:
	/** Setup GetOwner to character and sets references for ability system component and the owner itself. */
	void SetupOwner();

	/**
	 * Set the bAbilityQueue to true and opens the ability queue system for activation
	 */
	void OpenAbilityQueue();

	/**
	 * Set the bAbilityQueue to false which prevents the ability queue system to activate
	 */
	void CloseAbilityQueue();

	/**
	 * Updates the Allowed Abilities for the ability queue system
	 */
	void UpdateAllowedAbilitiesForAbilityQueue(TArray<TSubclassOf<UACFGameplayAbility>> AllowedAbilities);

	/**
	 * Updates the bQueueAllowAllAbilities which prevents the check for queued abilities to be within the QueuedAllowedAbilities array
	 */
	void SetAllowAllAbilitiesForAbilityQueue(bool bAllowAllAbilities);

	bool IsAbilityQueueOpened() const;

	bool IsAllAbilitiesAllowedForAbilityQueue() const;

	UACFGameplayAbility* GetCurrentQueuedAbility();

	TArray<TSubclassOf<UACFGameplayAbility>> GetQueuedAllowedAbilities() const;

	/**
	* Called when an ability is ended for the owner actor.
	*
	* The native implementation handles the ability queuing system, and invoke related BP event.
	*/
	void OnAbilityEnded(const UACFGameplayAbility* Ability);

	/**
	* Called when an ability failed to activated for the owner actor, passes along the failed ability
	* and a tag explaining why.
	*
	* The native implementation handles the ability queuing system, and invoke related BP event.
	*/
	void OnAbilityFailed(const UACFGameplayAbility* Ability, const FGameplayTagContainer& ReasonTags);

	/**
	* Returns the Debug Widget from HUD associated with this character (if any)
	*/
	virtual UACFUWDebugAbilityQueue* GetDebugWidgetFromHUD();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/**
	* Reset all variables involved in the Ability Queue System to their original default values.
	*/
	virtual void ResetAbilityQueueState();

	/**
	* Notify Debug Ability Queue Widget by updating its allowed abilities
	*/
	virtual void UpdateDebugWidgetAllowedAbilities();	
};
