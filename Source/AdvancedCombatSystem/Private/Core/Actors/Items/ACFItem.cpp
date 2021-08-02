// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFItem.h"

// Sets default values
AACFItem::AACFItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ItemDetails.GUID = FGuid::NewGuid();
	SetReplicates(true);
}
