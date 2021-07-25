// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Characters/ACFPlayerCharacter.h"
#include "Core/Game/Player/ACFPlayerState.h"
#include <AbilitySystem/ACFAbilityTypes.h>

AACFPlayerCharacter::AACFPlayerCharacter(const FObjectInitializer& ObjectInitializer)
{

}

void AACFPlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AACFPlayerState* LPlayerState = GetPlayerState<AACFPlayerState>();
	if (LPlayerState)
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		SetupAbilitySystemComponent(LPlayerState, true);
	}
}

void AACFPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind player input to the AbilitySystemComponent. Also called in OnRep_PlayerState because of a potential race condition.
	BindASCInput();
}

void AACFPlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AACFPlayerState* LPlayerState = GetPlayerState<AACFPlayerState>();
	if (LPlayerState)
	{
		SetupAbilitySystemComponent(LPlayerState, false);
	}
}

void AACFPlayerCharacter::BindASCInput()
{
	if (bASCInputBound)
	{
		return;
	}

	if (AbilitySystemComponent.IsValid() && IsValid(InputComponent))
	{
		AbilitySystemComponent->BindAbilityActivationToInputComponent(
			InputComponent,
			FGameplayAbilityInputBinds(FString("ConfirmTarget"),
				FString("CancelTarget"),
				FString("EACFAbilityInputID"),
				static_cast<int32>(EACFAbilityInputID::Confirm),
				static_cast<int32>(EACFAbilityInputID::Cancel))
		);

		bASCInputBound = true;
	}
}

void AACFPlayerCharacter::SetupAbilitySystemComponent(AACFPlayerState* InPlayerState, const bool bShouldSetupAbilityActor)
{
	if (!InPlayerState)
	{
		ACF_LOG(Error, TEXT("AACFPlayerCharacter::SetupAbilitySystemComponent InPlayerState parameter is nullptr"))
		return;
	}

	AbilitySystemComponent = Cast<UAbilitySystemComponent>(InPlayerState->GetAbilitySystemComponent());
	CoreComponent->SetupOwner();
	AbilityQueueComponent->SetupOwner();
	AbilityComboManagerComponent->SetupOwner();

	// Update parent's reference to AttributeSets
	AttributeSets = InPlayerState->GetAttributeSets();

	if (bShouldSetupAbilityActor)
	{
		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initiating twice for heroes that have PlayerControllers.
		CoreComponent->SetupAbilityActor(InPlayerState->GetAbilitySystemComponent(), InPlayerState, this);
	}
	else
	{
		// Partial Setup
		//
		// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
		AbilitySystemComponent->InitAbilityActorInfo(InPlayerState, this);

		// Bind player input to the AbilitySystemComponent. Also called in SetupPlayerInputComponent because of a potential race condition.
		BindASCInput();

		// If we handle players disconnecting and rejoining in the future, we'll have to change this so that possession from rejoining doesn't reset attributes.
		// For now assume possession = spawn/respawn.
		CoreComponent->InitializeAttributes();
	}

	// UI init
	/*AACFPlayerController* PC = Cast<AACFPlayerController>(GetController());
	if (PC)
	{
		PC->CreateHUD();
	}*/
}
