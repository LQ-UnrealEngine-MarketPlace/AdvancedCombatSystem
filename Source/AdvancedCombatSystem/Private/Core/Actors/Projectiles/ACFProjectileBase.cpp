// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Projectiles/ACFProjectileBase.h"
#include <GameFramework/ProjectileMovementComponent.h>

// Sets default values
AACFProjectileBase::AACFProjectileBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Momvent Component"));

}

// Called when the game starts or when spawned
void AACFProjectileBase::BeginPlay()
{
	Super::BeginPlay();
	
}

