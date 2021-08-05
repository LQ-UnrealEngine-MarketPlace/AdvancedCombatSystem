// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFMeleeWeapon.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Core/Components/ACFCoreComponent.h"
#include "CollisionSystem/Components/ACMCollisionHandlerComponent.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"

AACFMeleeWeapon::AACFMeleeWeapon()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	ItemDetails.Type = EItemType::MeleeWeapon;
	ItemDetails.Name = FText::FromString("Base Melee Weapon");

	 CollisionHandlerComponent = CreateDefaultSubobject<UACMCollisionHandlerComponent>(TEXT("Collisions Handler Component"));
}

void AACFMeleeWeapon::HandleAttackHit(FName TraceName, const FHitResult& HitResult)
{
	OnWeaponHit.Broadcast(HitResult);
}

void AACFMeleeWeapon::BeginPlay()
{
	Super::BeginPlay();

	if (CollisionHandlerComponent)
	{
		CollisionHandlerComponent->SetupCollisionManager(SkeletalMeshComponent);
	}
}

void AACFMeleeWeapon::OnBeginWeaponAttack_Implementation()
{
	if (CollisionHandlerComponent)
	{
		CollisionHandlerComponent->Server_StartAllTraces();
	}
}

void AACFMeleeWeapon::OnEndWeaponAttack_Implementation()
{
	if (CollisionHandlerComponent)
	{
		CollisionHandlerComponent->Server_StopAllTraces();
	}
}

void AACFMeleeWeapon::OnItemUnEquipped_Implementation()
{
	Super::OnItemEquipped_Implementation();
	if (CollisionHandlerComponent)
	{
		CollisionHandlerComponent->OnCollisionDetected.RemoveDynamic(this, &AACFMeleeWeapon::HandleAttackHit);
		CollisionHandlerComponent->ClearCollisionChannels();
	}
}

void AACFMeleeWeapon::OnItemEquipped_Implementation()
{
	Super::OnItemUnEquipped_Implementation();
	AACFCharacterBase* OwnerCharacter = Cast<AACFCharacterBase>(ItemOwner);
	if (CollisionHandlerComponent)
	{
		CollisionHandlerComponent->SetActorOwner(ItemOwner);
		if (!CollisionHandlerComponent->OnCollisionDetected.IsAlreadyBound(this, &AACFMeleeWeapon::HandleAttackHit))
		{
			CollisionHandlerComponent->OnCollisionDetected.AddDynamic(this, & AACFMeleeWeapon::HandleAttackHit);
		}
		CollisionHandlerComponent->SetupCollisionManager(SkeletalMeshComponent);
		//CollisionHandlerComponent->SetupCollisionChannels(OwnerCharacter->GetEnemiesCollisionChannel());
	}
	else
	{
		ACF_LOG(Warning, TEXT("AACFMeleeWeapon::OnItemEquipped: %s has no CollisionHandlerComponent"), *CollisionHandlerComponent->GetName())
	}
}
