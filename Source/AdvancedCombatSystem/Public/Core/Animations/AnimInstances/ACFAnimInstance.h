// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ACFAnimInstance.generated.h"

class AACFCharacterBase;
class UCharacterMovementComponent;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	AACFCharacterBase* ACFCharacter;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | Components")
	UCharacterMovementComponent* MovementComp;
};
