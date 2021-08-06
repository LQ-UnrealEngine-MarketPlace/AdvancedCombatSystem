// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Game/ACFGameModeBase.h"
#include "Core/Game/Player/ACFPlayerController.h"
#include "CollisionSystem/Components/ACMCollisionManagerComponent.h"
#include <Kismet/GameplayStatics.h>

AACFGameModeBase::AACFGameModeBase()
{
	CollisionManagerComponent = CreateDefaultSubobject<UACMCollisionManagerComponent>(TEXT("Collision Manager Component"));
}

TArray<AACFPlayerController*> AACFGameModeBase::GetAllPlayerControllers()
{
	TArray<AACFPlayerController*> PlayerControllers;
	int32 PlayerCount = GetNumPlayers();

	for (int32 Index = 0; Index < PlayerCount; Index++)
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, Index);
		if (PlayerController)
		{
			AACFPlayerController* ACFPlayerController = Cast<AACFPlayerController>(PlayerController);
			if (ACFPlayerController)
			{
				PlayerControllers.Add(ACFPlayerController);
			}
		}
	}

	return PlayerControllers;
}
