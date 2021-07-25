// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ACFHUD.generated.h"

class UUserWidget;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	TSubclassOf<UUserWidget> HUDWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	TSubclassOf<UUserWidget> AbilityQueueWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	TSubclassOf<UUserWidget> ComboWidgetClass;

	UPROPERTY()
	class UUserWidget* HUDWidget;

	UPROPERTY()
	class UUserWidget* DebugWidget;

	UPROPERTY()
	class UUserWidget* ComboDebugWidget;

public:
	AACFHUD(const FObjectInitializer& ObjectInitializer);

protected:
	void InitDefaultWidgetClasses();

public:
	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	UUserWidget* CreateHUDWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	void ShowHUDWidget() const;

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	void HideHUDWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	UUserWidget* GetHUDWidget() const;

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	UUserWidget* CreateAbilityQueueWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	void ShowAbilityQueueWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	void HideAbilityQueueWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	UUserWidget* GetAbilityQueueWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	bool IsAbilityQueueWidgetVisible();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	UUserWidget* CreateComboWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	void ShowComboWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	void HideComboWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	void ToggleComboWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	UUserWidget* GetComboWidget();

	UFUNCTION(BlueprintCallable, Category = "ACF | HUD")
	bool IsComboWidgetVisible();
};
