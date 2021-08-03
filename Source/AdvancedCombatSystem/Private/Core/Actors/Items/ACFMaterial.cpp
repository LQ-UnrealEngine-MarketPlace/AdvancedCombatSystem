// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFMaterial.h"

AACFMaterial::AACFMaterial()
{
	ItemDetails.Type = EItemType::Material;
	ItemDetails.Name = FText::FromString("Base Material");
}