// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ACMCollisionManagerComponent.generated.h"

class UACMCollisionHandlerComponent;

UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACMCollisionManagerComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<UACMCollisionHandlerComponent*> ActiveComponents;

	UPROPERTY()
	TArray<UACMCollisionHandlerComponent*> PendingDeletes;

public:	
	// Sets default values for this actor's properties
	UACMCollisionManagerComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddComponent(UACMCollisionHandlerComponent* ComponentToAdd);

	void RemoveComponent(UACMCollisionHandlerComponent* ComponentToAdd);
};
