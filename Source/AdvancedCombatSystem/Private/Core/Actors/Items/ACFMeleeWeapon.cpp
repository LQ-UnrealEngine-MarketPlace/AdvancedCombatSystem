// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFMeleeWeapon.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Core/Components/ACFCoreComponent.h"

AACFMeleeWeapon::AACFMeleeWeapon()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	ItemDetails.Type = EItemType::MeleeWeapon;
	ItemDetails.Name = FText::FromString("Base Melee Weapon");

	// CollisionComponent = CreateDefaultSubobject<UACFCollisionManagerComponent>(TEXT("Collisions Manager"));
}

void AACFMeleeWeapon::HandleAttackHit(FName TraceName, const FHitResult& HitResult)
{
	OnWeaponHit.Broadcast(HitResult);
}

void AACFMeleeWeapon::BeginPlay()
{
	Super::BeginPlay();

	/*if (CollisionComponent) 
	{
		CollisionComponent->SetupCollisionManager(Mesh);
	}*/
}

void AACFMeleeWeapon::OnBeginWeaponAttack_Implementation()
{

}

void AACFMeleeWeapon::OnEndWeaponAttack_Implementation()
{

}

void AACFMeleeWeapon::OnItemUnEquipped_Implementation()
{

}

void AACFMeleeWeapon::OnItemEquipped_Implementation()
{

}
