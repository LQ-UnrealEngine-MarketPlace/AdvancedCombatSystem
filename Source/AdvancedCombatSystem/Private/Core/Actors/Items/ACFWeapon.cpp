// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFWeapon.h"

AACFWeapon::AACFWeapon()
{
	PrimaryActorTick.bCanEverTick = false;
	SetReplicates(true);

	HandlePosition = CreateDefaultSubobject<USceneComponent>(TEXT("Handle Position"));
	SetRootComponent(HandlePosition);
}

void AACFWeapon::AlignWeapon()
{
	if (HandlePosition)
	{
		FHitResult OutHitResult;
		SkeletalMeshComponent->SetRelativeTransform(AttachmentOffset, true, &OutHitResult, ETeleportType::TeleportPhysics);
	}
	else
	{
		ACF_LOG(Warning, TEXT("AACFWeapon::AlignWeapon has NO Handle Component!"));
	}
}

void AACFWeapon::BeginPlay()
{
	Super::BeginPlay();

	SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SkeletalMeshComponent->AttachToComponent(HandlePosition, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false));
	AlignWeapon();

	UWorld* World = GetWorld();
	if (LeftHandWeaponClass && !LeftHandWeapon)
	{
		LeftHandWeapon = Cast<AACFWeapon>(World->SpawnActor(LeftHandWeaponClass));
		LeftHandWeapon->SetActorHiddenInGame(true);
	}
}

void AACFWeapon::OnItemUnEquipped_Implementation()
{
	Super::OnItemUnEquipped_Implementation();
	AlignWeapon();
}

void AACFWeapon::OnItemEquipped_Implementation()
{
	Super::OnItemEquipped_Implementation();
	AlignWeapon();
}
