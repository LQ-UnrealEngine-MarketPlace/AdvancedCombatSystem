// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Game/Player/ACFHUD.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include <GameFramework/PlayerController.h>
#include <Blueprint/UserWidget.h>
#include "Core/Widgets/Debugs/ACFUWDebugAbilityCombo.h"

AACFHUD::AACFHUD(const FObjectInitializer& ObjectInitializer)
{
	InitDefaultWidgetClasses();
}

void AACFHUD::InitDefaultWidgetClasses()
{
	ACF_LOG(Log, TEXT("AACFHUD::InitDefaultWidgetClasses()"));

	// Replace "..." with BlueprintInstance
	HUDWidgetClass = StaticLoadClass(UObject::StaticClass(), nullptr, TEXT("/AdvancedCombatSystem/Widgets/HUD/..."));
	if (!HUDWidgetClass)
	{
		ACF_LOG(Error, TEXT("AACFHUD::InitDefaultWidgetClasses() Failed to load HUDWidgetClass. If it was moved, please update the reference location in C++."));
	}

	// Replace "..." with BlueprintInstance
	AbilityQueueWidgetClass = StaticLoadClass(UObject::StaticClass(), nullptr, TEXT("/AdvancedCombatSystem/Widgets/Debugs/..."));
	if (!AbilityQueueWidgetClass)
	{
		ACF_LOG(Error, TEXT("AACFHUD::InitDefaultWidgetClasses() Failed to load AbilityQueueWidgetClass. If it was moved, please update the reference location in C++."));
	}

	// Replace "..." with BlueprintInstance
	ComboWidgetClass = StaticLoadClass(UObject::StaticClass(), nullptr, TEXT("/AdvancedCombatSystem/Widgets/Debugs/..."));
	if (!AbilityQueueWidgetClass)
	{
		ACF_LOG(Error, TEXT("AACFHUD::InitDefaultWidgetClasses() Failed to load ComboWidgetClass. If it was moved, please update the reference location in C++."));
	}
}

UUserWidget* AACFHUD::CreateHUDWidget()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetOwner());
	if (!PlayerController)
	{
		ACF_LOG(Error, TEXT("AACFHUD::CreateHUDWidget() Failed to get owner Player Controller"));
		return nullptr;
	}

	if (!HUDWidgetClass)
	{
		ACF_LOG(Error, TEXT("AACFHUD::CreateHUDWidget() Failed to load HUDWidgetClass, not creating widget. Please configure it in your HUD Class or Blueprint"));
		return nullptr;
	}

	UUserWidget* Widget = CreateWidget(PlayerController, HUDWidgetClass);
	HUDWidget = Widget;

	return Widget;
}

void AACFHUD::ShowHUDWidget() const
{
	if (HUDWidget)
	{
		HUDWidget->AddToViewport();
	}
}

void AACFHUD::HideHUDWidget()
{
	if (HUDWidget)
	{
		HUDWidget->RemoveFromViewport();
		HUDWidget = nullptr;
	}
}

UUserWidget* AACFHUD::GetHUDWidget() const
{
	return HUDWidget;
}

UUserWidget* AACFHUD::CreateAbilityQueueWidget()
{
	ACF_VLOG(this, Log, TEXT("AACFHUD::CreateAbilityQueueWidget()"))
	APlayerController* PlayerController = Cast<APlayerController>(GetOwner());
	if (!PlayerController)
	{
		ACF_VLOG(this, Log, TEXT("AACFHUD::CreateAbilityQueueWidget() No Player Controller"))
		return nullptr;
	}

	AACFCharacterBase* Character = Cast<AACFCharacterBase>(PlayerController->GetPawn());
	if (!Character)
	{
		return nullptr;
	}

	if (!AbilityQueueWidgetClass)
	{
		ACF_LOG(Warning, TEXT("AACFHUD:CreateAbilityQueueWidget() Failed to load AbilityQueueWidgetClass, not creating widget. Please configure it in your HUD Class or Blueprint"));
	}

	UACFUWDebugAbilityQueue* Widget = Cast<UACFUWDebugAbilityQueue>(CreateWidget(PlayerController, AbilityQueueWidgetClass));
	if (!Widget)
	{
		return nullptr;
	}

	Widget->SetOwnerCharacter(Character);

	DebugWidget = Widget;

	ACF_VLOG(this, Log, TEXT("AACFHUD::CreateAbilityQueueWidget() Created Widget %s"), *Widget->GetName())
	return Widget;
}

void AACFHUD::ShowAbilityQueueWidget()
{
	if (!DebugWidget)
	{
		CreateAbilityQueueWidget();
	}

	if (DebugWidget)
	{
		DebugWidget->AddToViewport();
	}
}

void AACFHUD::HideAbilityQueueWidget()
{
	if (DebugWidget)
	{
		DebugWidget->RemoveFromViewport();
		DebugWidget = nullptr;
	}
}

UUserWidget* AACFHUD::GetAbilityQueueWidget()
{
	return DebugWidget;
}

bool AACFHUD::IsAbilityQueueWidgetVisible()
{
	if (!DebugWidget)
	{
		return false;
	}

	return DebugWidget->IsVisible();
}

UUserWidget* AACFHUD::CreateComboWidget()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetOwner());
	if (!PlayerController)
	{
		return nullptr;
	}

	if (!ComboWidgetClass)
	{
		ACF_LOG(Warning, TEXT("AACFHUD::CreateHUDWidget() Failed to load ComboDebugWidgetClass, not creating widget. Please configure it in your HUD Class or Blueprint"));
		return nullptr;
	}

	AACFPlayerCharacter* Character = Cast<AACFPlayerCharacter>(PlayerController->GetPawn());
	if (!Character)
	{
		ACF_LOG(Warning, TEXT("AACFHUD::CreateHUDWidget() Failed to get character reference, not creating widget."));
		return nullptr;
	}

	UACFUWDebugAbilityCombo* Widget = Cast<UACFUWDebugAbilityCombo>(CreateWidget(PlayerController, ComboWidgetClass));
	if (!Widget)
	{
		return nullptr;
	}

	Widget->SetOwnerCharacter(Character);
	ComboDebugWidget = Widget;

	return Widget;
}

void AACFHUD::ShowComboWidget()
{
	if (!ComboDebugWidget)
	{
		CreateComboWidget();
	}

	if (ComboDebugWidget)
	{
		ComboDebugWidget->AddToViewport();
	}
}

void AACFHUD::HideComboWidget()
{
	if (ComboDebugWidget)
	{
		ComboDebugWidget->RemoveFromViewport();
		ComboDebugWidget = nullptr;
	}
}

void AACFHUD::ToggleComboWidget()
{
	if (IsComboWidgetVisible())
	{
		HideComboWidget();
	}
	else
	{
		ShowComboWidget();
	}
}

UUserWidget* AACFHUD::GetComboWidget()
{
	return ComboDebugWidget;
}

bool AACFHUD::IsComboWidgetVisible()
{
	if (!ComboDebugWidget)
	{
		return false;
	}

	return ComboDebugWidget->IsVisible();
}
