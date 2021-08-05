// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFProjectile.h"
#include "CollisionSystem/Components/ACMCollisionHandlerComponent.h"
#include <Components/StaticMeshComponent.h>
#include <GameFramework/ProjectileMovementComponent.h>

AACFProjectile::AACFProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SetReplicates(true);
	SetReplicateMovement(true);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Momvent Component"));
	ProjectileMovementComponent->UpdatedComponent = RootComponent;
	ProjectileMovementComponent->InitialSpeed = ProjectileInitialSpeed;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->bAutoActivate = false;
	ProjectileMovementComponent->ProjectileGravityScale = ProjectileGravityScale;

	CollisionHandlerComponent = CreateDefaultSubobject<UACMCollisionHandlerComponent>(TEXT("Collsion Handler Component"));

	// Attach StaticMeshComponent to RootComponent;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Compoennt"));
	StaticMeshComponent->SetupAttachment(RootComponent);
	StaticMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));
	StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ItemDetails.Name = FText::FromString("Base Projectile");
}

void AACFProjectile::MakeStatic()
{
	ProjectileMovementComponent->SetActive(false);
	ProjectileMovementComponent->Velocity = FVector::ZeroVector;
	SetActorScale3D(FVector(1.f, 1.f, 1.f));
}

void AACFProjectile::HandleAttackHit(FName TraceName, const FHitResult& HitResult)
{
	AACFCharacterBase* DamagedActor = Cast<AACFCharacterBase>(HitResult.GetActor());

	if (bAttachOnHit)
	{
		FVector AttachLocation = GetActorLocation() + (GetActorForwardVector() * PenetrationLevel);
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = DamagedActor;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		AACFProjectile* CopiedProjectile = GetWorld()->SpawnActor<AACFProjectile>(GetClass(), AttachLocation, GetActorRotation(), SpawnParams);
		FAttachmentTransformRules AttachmentTransformRules = FAttachmentTransformRules::SnapToTargetIncludingScale;
		if (DamagedActor)
		{
			CopiedProjectile->AttachToComponent(DamagedActor->GetMesh(), AttachmentTransformRules, HitResult.BoneName);
		}
		else
		{
			CopiedProjectile->AttachToComponent(HitResult.Component.Get(), AttachmentTransformRules);
		}
		CopiedProjectile->SetActorRotation(GetActorRotation());
		CollisionHandlerComponent->Server_StopAllTraces();
		Destroy();
	}
}

void AACFProjectile::BeginPlay()
{
	Super::BeginPlay();

	if (CollisionHandlerComponent)
	{
		CollisionHandlerComponent->SetActorOwner(ItemOwner);
		CollisionHandlerComponent->SetupCollisionManager(StaticMeshComponent);
		CollisionHandlerComponent->SetupCollisionManager(StaticMeshComponent);
	}

	if (!bIsFlying)
	{
		MakeStatic();
		SetLifeSpan(AttachedLifeSpan);
	}
	else
	{
		ProjectileMovementComponent->SetActive(true);
		SetLifeSpan(ProjectileLifeSpan);
	}
}

void AACFProjectile::SetupProjectile(AACFCharacterBase* InOwner, float ProjectileMaxSpeed)
{
	if (!InOwner)
	{
		ACF_LOG(Error, TEXT("AACFProjectile::SetupProjectile InOwner is invalid"))
		bIsFlying = false;
		return;
	}

	bIsFlying = true;
	ItemOwner = InOwner;
	if (!ProjectileMovementComponent)
	{
		ACF_LOG(Error, TEXT("AACFProjectile::SetupProjectile ProjectileMovementComponent is invalid"))
		return;
	}

	ProjectileMovementComponent->MaxSpeed = ProjectileMaxSpeed;
}

void AACFProjectile::ActivateDamage()
{
	AACFCharacterBase* OwnerCharacter = Cast<AACFCharacterBase>(ItemOwner);
	if (CollisionHandlerComponent)
	{
		CollisionHandlerComponent->SetActorOwner(ItemOwner);
		CollisionHandlerComponent->SetupCollisionManager(StaticMeshComponent);
		//TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels = OwnerCharacter->GetEnemiesCollisionChannel();
		/*for (ECollisionChannel CollsionChannel : CollisionChannels)
		{
			CollisionHandlerComponent->AddCollisionChannel(CollsionChannel);
		}*/

		CollisionHandlerComponent->Server_StartAllTraces();
		CollisionHandlerComponent->OnCollisionDetected.AddDynamic(this, &AACFProjectile::HandleAttackHit);
	}
}
