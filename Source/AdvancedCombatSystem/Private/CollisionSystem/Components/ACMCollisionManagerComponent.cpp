// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionSystem/Components/ACMCollisionManagerComponent.h"
#include "CollisionSystem/Components/ACMCollisionHandlerComponent.h"

// Sets default values
UACMCollisionManagerComponent::UACMCollisionManagerComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = false;

}

void UACMCollisionManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	for (UACMCollisionHandlerComponent* PendingDelete : PendingDeletes)
	{
		ActiveComponents.Remove(PendingDelete);
	}

	PendingDeletes.Empty();

	for (UACMCollisionHandlerComponent* ActiveComponent : ActiveComponents)
	{
		(ActiveComponent->IsValidLowLevel()) ? ActiveComponent->UpdateCollisions() : PendingDeletes.Add(ActiveComponent); 
	}
}

void UACMCollisionManagerComponent::AddComponent(UACMCollisionHandlerComponent* ComponentToAdd)
{
	ActiveComponents.AddUnique(ComponentToAdd);
	if (PendingDeletes.Contains(ComponentToAdd))
	{
		PendingDeletes.Remove(ComponentToAdd);
	}
}

void UACMCollisionManagerComponent::RemoveComponent(UACMCollisionHandlerComponent* ComponentToAdd)
{
	if (ActiveComponents.Contains(ComponentToAdd))
	{
		PendingDeletes.Add(ComponentToAdd);
	}
}

