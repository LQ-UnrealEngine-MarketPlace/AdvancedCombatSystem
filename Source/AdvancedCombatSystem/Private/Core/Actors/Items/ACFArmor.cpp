// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFArmor.h"

AACFArmor::AACFArmor()
{
	ItemDetails.Type = EItemType::Armor;
	ItemDetails.Name = FText::FromString("Base Armor");
}
