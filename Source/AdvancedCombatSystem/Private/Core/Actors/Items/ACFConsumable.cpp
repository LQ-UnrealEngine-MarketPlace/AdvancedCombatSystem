// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFConsumable.h"

AACFConsumable::AACFConsumable()
{
	ItemDetails.Type = EItemType::Consumable;
	ItemDetails.Name = FText::FromString("Base Consumable");
	SetReplicates(true);
}
