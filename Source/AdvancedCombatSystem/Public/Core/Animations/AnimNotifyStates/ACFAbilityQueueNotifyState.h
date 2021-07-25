// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ACFAbilityQueueNotifyState.generated.h"

class UACFGameplayAbility;
class USkeletalMeshComponent;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFAbilityQueueNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	/**
	 * If true, enable queueing of all abilities, otherwise only allow Abilities that are defined in AllowedAbilities array.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | AnimNotify")
	bool bAllowAllAbilities = false;

	/**
	 * The set of Abilities that can be queued for this window (has no effect if bAllowAllAbilities is set to true)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | AnimNotify")
	TArray<TSubclassOf<UACFGameplayAbility>> AllowedAbilities;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	virtual FString GetNotifyName_Implementation() const override;
};
