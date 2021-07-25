// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Widgets/ACFUserWidget.h"
#include "ACFUWDebugAbilityCombo.generated.h"

class AACFCharacterBase;
class UACFAbilityComboManagerComponent;
class UTextBlock;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFUWDebugAbilityCombo : public UACFUserWidget
{
	GENERATED_BODY()
	
protected:
	TWeakObjectPtr<AACFCharacterBase> OwnerCharacter;
	TWeakObjectPtr<UACFAbilityComboManagerComponent> OwnerComboManagerComponent;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | UI", meta = (BindWidget))
	UTextBlock* ComboWindowOpenedText = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | UI", meta = (BindWidget))
	UTextBlock* ShouldTriggerComboText = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | UI", meta = (BindWidget))
	UTextBlock* RequestTriggerComboText = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | UI", meta = (BindWidget))
	UTextBlock* NextComboAbilityActivatedText = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "ACF | UI", meta = (BindWidget))
	UTextBlock* ComboIndexText = nullptr;

	FLinearColor WhiteColor = FLinearColor(1.f, 1.f, 1.f, 1.f);
	FLinearColor GreenColor = FLinearColor(0.729412f, 0.854902f, 0.333333f, 1.f);
	FLinearColor RedColor = FLinearColor(1.f, 0.388235f, 0.278431f, 1.f);

protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:
	/**
	* Set the Owner Character for this UserWidget.
	*
	* Used to pull out information needed for display
	*
	*/
	void SetOwnerCharacter(AACFCharacterBase* Character);
};
