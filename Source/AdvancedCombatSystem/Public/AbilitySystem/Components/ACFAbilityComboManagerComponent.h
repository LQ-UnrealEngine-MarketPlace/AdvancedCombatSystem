// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ACFAbilityComboManagerComponent.generated.h"

class AACFCharacterBase;
class UAbilitySystemComponent;
class UACFGameplayAbility;
class UACFAbilitySystemComponent;
//class UACFStatisticsComponent;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDCOMBATSYSTEM_API UACFAbilityComboManagerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	AACFCharacterBase* OwningCharacter;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	UACFAbilitySystemComponent* OwnerAbilitySystemComponent;

	//UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	//UACFStatisticsComponent* OwnerStatisticsComponent;

	/** Reference to ACFActiveAbility */
	TSubclassOf<UACFGameplayAbility> ActiveAbility;

public:
	/** The combo index for the currently active combo */
	UPROPERTY(BlueprintReadOnly, Replicated, Category = "ACF | Combo")
	int32 ComboIndex = 0;

	/** Whether or not the combo window is opened (eg. player can queue next combo within this window) */
	UPROPERTY(BlueprintReadOnly, Replicated, Category = "ACF | Combo")
	bool bComboWindowOpened = false;

	/** Should we queue the next combo montage for the currently active combo */
	UPROPERTY(BlueprintReadOnly, Replicated, Category = "ACF | Combo")
	bool bShouldTriggerCombo = false;

	/** Should we trigger the next combo montage */
	UPROPERTY(BlueprintReadOnly, Replicated, Category = "ACF | Combo")
	bool bRequestTriggerCombo = false;

	/** Should we trigger the next combo montage */
	UPROPERTY(BlueprintReadOnly, Replicated, Category = "ACF | Combo")
	bool bNextComboAbilityActivated = false;

public:	
	// Sets default values for this component's properties
	UACFAbilityComboManagerComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Setup GetOwner to character and sets references for ability system component and the owner itself. */
	void SetupOwner();

	/** Get the currently active combo ability */
	UACFGameplayAbility* GetCurrentActiveComboAbility();

	/** Part of the combo system, will increment the ComboIndex counter, only if the combo window has been opened */
	UFUNCTION(BlueprintCallable, Category = "ACF | Combo")
	void IncrementCombo();

	/** Part of the combo system, will reset the ComboIndex counter to 0 */
	UFUNCTION(BlueprintCallable, Category = "ACF | Combo")
	void ResetCombo();

	/** Part of the combo system, gate combo ability activation based on if character is already using the ability */
	UFUNCTION(BlueprintCallable, Category = "ACF | Combo")
	void ActivateComboAbility(TSubclassOf<UACFGameplayAbility> AbilityClass, bool bAllowRemoteActivation = true);

	void SetComboIndex(int32 InComboIndex);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(Server, Reliable, Category = "ACF | Combo")
	void Server_ActivateComboAbility(TSubclassOf<UACFGameplayAbility> AbilityClass, bool bAllowRemoteActivation = true);

	UFUNCTION(NetMulticast, Reliable, Category = "ACF | Combo")
	void NetMulticast_ActivateComboAbility(TSubclassOf<UACFGameplayAbility> AbilityClass, bool bAllowRemoteActivation = true);

	void ActivateComboAbility_Internal(TSubclassOf<UACFGameplayAbility> AbilityClass, bool bAllowRemoteActivation = true);

	UFUNCTION(Server, Reliable, Category = "ACF | Combo")
	void Server_SetComboIndex(int32 InComboIndex);

	UFUNCTION(NetMulticast, Reliable, Category = "ACF | Combo")
	void NetMulticast_SetComboIndex(int32 InComboIndex);

};
