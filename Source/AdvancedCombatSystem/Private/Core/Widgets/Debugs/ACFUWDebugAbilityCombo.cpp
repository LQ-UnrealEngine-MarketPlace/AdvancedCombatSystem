// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Widgets/Debugs/ACFUWDebugAbilityCombo.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "AbilitySystem/Components/ACFAbilityComboManagerComponent.h"
#include <Components/TextBlock.h>

void UACFUWDebugAbilityCombo::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!OwnerComboManagerComponent.IsValid())
	{
		return;
	}

	if (ComboWindowOpenedText)
	{
		ComboWindowOpenedText->SetText(FText::FromString(OwnerComboManagerComponent->bComboWindowOpened ? TEXT("true") : TEXT("false")));
		ComboWindowOpenedText->SetColorAndOpacity(FSlateColor(OwnerComboManagerComponent->bComboWindowOpened ? GreenColor : RedColor));
	}

	if (ShouldTriggerComboText)
	{
		ShouldTriggerComboText->SetText(FText::FromString(OwnerComboManagerComponent->bShouldTriggerCombo ? TEXT("true") : TEXT("false")));
		ShouldTriggerComboText->SetColorAndOpacity(FSlateColor(OwnerComboManagerComponent->bShouldTriggerCombo ? GreenColor : RedColor));
	}

	if (RequestTriggerComboText)
	{
		RequestTriggerComboText->SetText(FText::FromString(OwnerComboManagerComponent->bRequestTriggerCombo ? TEXT("true") : TEXT("false")));
		RequestTriggerComboText->SetColorAndOpacity(FSlateColor(OwnerComboManagerComponent->bRequestTriggerCombo ? GreenColor : RedColor));
	}

	if (NextComboAbilityActivatedText)
	{
		NextComboAbilityActivatedText->SetText(FText::FromString(OwnerComboManagerComponent->bNextComboAbilityActivated ? TEXT("true") : TEXT("false")));
		NextComboAbilityActivatedText->SetColorAndOpacity(FSlateColor(OwnerComboManagerComponent->bNextComboAbilityActivated ? GreenColor : RedColor));
	}

	if (ComboIndexText)
	{
		ComboIndexText->SetText(FText::FromString(FString::FromInt(OwnerComboManagerComponent->ComboIndex)));
		ComboIndexText->SetColorAndOpacity(FSlateColor(OwnerComboManagerComponent->ComboIndex == 0 ? WhiteColor : GreenColor));
	}
}

void UACFUWDebugAbilityCombo::SetOwnerCharacter(AACFCharacterBase* Character)
{
	OwnerCharacter = Character;
	OwnerComboManagerComponent = UACFFunctionLibrary::GetComboManagerComponentFromActor(Character);
}
