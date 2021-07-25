// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Game/Player/ACFPlayerController.h"
#include "Core/Game/Player/ACFPlayerState.h"

AACFPlayerController::AACFPlayerController()
{
	//CheatClass = UGSCCheatManager::StaticClass();
}

void AACFPlayerController::CreateHUD()
{

}

void AACFPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	CreateHUD();
}

void AACFPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AACFPlayerState* LPlayerState = GetPlayerState<AACFPlayerState>();
	if (LPlayerState)
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		LPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(LPlayerState, InPawn);
	}
}
