// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Game/ACFCheatManager.h"
#include "Core/Game/Player/ACFHUD.h"
#include "Utils/ACFLog.h"
#include <GameFramework/PlayerController.h>

void UACFCheatManager::ToggleAbilityQueueDebug()
{
	ACF_LOG(Display, TEXT("Toggle Ability Queue System Debug Widget"))

	APlayerController* PlayerController = Cast<APlayerController>(GetOuterAPlayerController());
	if (!PlayerController)
	{
		ACF_VLOG(this, Warning, TEXT("UACFCheatManager::ToggleAbilityQueueDebug() No Player Controller"))
		return;
	}

	AACFHUD* HUD = Cast<AACFHUD>(PlayerController->GetHUD());
	if (!HUD)
	{
		ACF_VLOG(this, Warning, TEXT("UACFCheatManager::ToggleAbilityQueueDebug() Cannot get HUD"))
		return;
	}

	(HUD->IsAbilityQueueWidgetVisible()) ? HUD->HideAbilityQueueWidget() : HUD->ShowAbilityQueueWidget();
}

void UACFCheatManager::ToggleDebugAbilitySystem() const
{
	ExecuteConsoleCommand("ToggleDebugAbilitySystem");
}

void UACFCheatManager::ToggleNextAbilitySystemCategory() const
{
	ExecuteConsoleCommand("ToggleNextAbilitySystemCategory");
}

void UACFCheatManager::ToggleAbilityComboDebug()
{
	ACF_LOG(Display, TEXT("Toggle Combo Debug Widget"))

	APlayerController* PlayerController = Cast<APlayerController>(GetOuterAPlayerController());
	if (!PlayerController)
	{
		ACF_LOG(Warning, TEXT("UFDCheatManager:GSC_OpenComboDebug() No Player Controller"))
		return;
	}

	AACFHUD* HUD = Cast<AACFHUD>(PlayerController->GetHUD());
	if (!HUD)
	{
		ACF_LOG(Warning, TEXT("UFDCheatManager:GSC_OpenComboDebug() Cannot get HUD"))
		return;
	}

	(HUD->IsAbilityQueueWidgetVisible()) ? HUD->HideAbilityQueueWidget() : HUD->ShowAbilityQueueWidget();
}

void UACFCheatManager::ExecuteConsoleCommand(FString Command) const
{
	APlayerController* PlayerController = Cast<APlayerController>(GetOuterAPlayerController());
	if (!PlayerController)
	{
		ACF_VLOG(this, Warning, TEXT("UACFCheatManager::ExecuteConsoleCommand() No Player Controller"))
		return;
	}

	PlayerController->ConsoleCommand(Command, true);
}
