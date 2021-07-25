// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Widgets/Debugs/ACFUWDebugAbilityQueue.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Utils/ACFLog.h"
#include <Animation/AnimInstance.h>
#include <Components/CanvasPanel.h>
#include <Components/TextBlock.h>
#include <Components/VerticalBox.h>

void UACFUWDebugAbilityQueue::NativeConstruct()
{
	Super::NativeConstruct();
}

void UACFUWDebugAbilityQueue::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!OwnerAbilityQueueComponent.IsValid())
	{
		ACF_UI_VLOG(this, Warning, TEXT("UACFUWDebugAbilityQueue::NativeTick() OwnerAbilityQueueComponent is invalid"))
		return;
	}

	if (AbilityQueueEnabledText)
	{
		const bool bAbilityQueueEnabled = OwnerAbilityQueueComponent->bAbilityQueueEnabled;
		AbilityQueueEnabledText->SetText(bAbilityQueueEnabled ? FText::FromString("true") : FText::FromString("false"));
		AbilityQueueEnabledText->SetColorAndOpacity(FSlateColor(bAbilityQueueEnabled ? GreenColor : RedColor));
	}

	if (AbilityQueueOpenedText)
	{
		const bool bAbilityQueueOpened = OwnerAbilityQueueComponent->IsAbilityQueueOpened();
		AbilityQueueOpenedText->SetText(bAbilityQueueOpened ? FText::FromString("true") : FText::FromString("false"));
		AbilityQueueOpenedText->SetColorAndOpacity(FSlateColor(bAbilityQueueOpened ? GreenColor : RedColor));
	}

	if (CurrentQueuedAbilityText)
	{
		const UACFGameplayAbility* Ability = OwnerAbilityQueueComponent->GetCurrentQueuedAbility();
		CurrentQueuedAbilityText->SetText(Ability ? FText::FromString(Ability->GetName()) : FText::FromString("None"));
		CurrentQueuedAbilityText->SetColorAndOpacity(Ability ? GreenColor : WhiteColor);
	}

	if (AllowAllAbilitiesText)
	{
		const bool bAllowAllAbilities = OwnerAbilityQueueComponent->IsAllAbilitiesAllowedForAbilityQueue();
		AllowAllAbilitiesText->SetText(bAllowAllAbilities ? FText::FromString("true") : FText::FromString("false"));
		AllowAllAbilitiesText->SetColorAndOpacity(bAllowAllAbilities ? GreenColor : RedColor);
	}
}

void UACFUWDebugAbilityQueue::ClearFromMontageRow()
{
	if (AbilityQueueFromMontagesBox)
	{
		AbilityQueueFromMontagesBox->RemoveChildAt(0);

		if (AbilityQueueFromMontagesPanel)
		{
			const int32 ChildrenCount = AbilityQueueFromMontagesBox->GetChildrenCount();
			if (ChildrenCount == 0)
			{
				AbilityQueueFromMontagesPanel->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
	}
}

void UACFUWDebugAbilityQueue::SetOwnerCharacter(AACFCharacterBase* Character)
{
	OwnerCharacter = Character;
	OwnerAbilityQueueComponent = UACFFunctionLibrary::GetAbilityQueueComponentFromActor(Character);
}

void UACFUWDebugAbilityQueue::UpdateAllowedAbilities(TArray<TSubclassOf<UACFGameplayAbility>> AllowedAbilities)
{
	if (AllowedAbilitiesBox && AllowedAbilityTemplateText)
	{
		ACF_UI_VLOG(this, Verbose, TEXT("UACFUWDebugAbilityQueue::UpdateAllowedAbilities() clearing children"))
		AllowedAbilitiesBox->ClearChildren();

		if (OwnerAbilityQueueComponent.IsValid() && OwnerAbilityQueueComponent->IsAllAbilitiesAllowedForAbilityQueue())
		{
			ACF_UI_VLOG(this, Verbose, TEXT("UACFUWDebugAbilityQueue::UpdateAllowedAbilities() All abilities are allowed"))

			UTextBlock* Text = DuplicateObject(AllowedAbilityTemplateText, this);
			if (Text)
			{
				Text->SetText(FText::FromString("All"));
				AllowedAbilitiesBox->AddChild(Text);
			}
			return;
		}

		for (const TSubclassOf<UACFGameplayAbility> Ability : AllowedAbilities)
		{
			if (!Ability)
			{
				continue;
			}

			ACF_UI_VLOG(this, Verbose, TEXT("UACFUWDebugAbilityQueue::UpdateAllowedAbilities() Adding child for %s"), *Ability->GetName())

			UTextBlock* Text = DuplicateObject(AllowedAbilityTemplateText, this);
			if (Text)
			{
				Text->SetText(FText::FromString(Ability->GetName()));
				AllowedAbilitiesBox->AddChild(Text);
			}
		}
	}
}

void UACFUWDebugAbilityQueue::AddAbilityQueueFromMontageRow(UAnimSequenceBase* Anim, bool bStartClearTimer /*= true*/)
{
	if (AbilityQueueFromMontagesBox && AbilityQueueFromMontageTemplateText)
	{
		ACF_UI_VLOG(this, Verbose, TEXT("UACFUWDebugAbilityQueue::AddAbilityQueueFromMontageRow()"))
		// AllowedAbilitiesBox->ClearChildren();

		UTextBlock* Text = DuplicateObject(AbilityQueueFromMontageTemplateText, this);
		if (Text)
		{
			ACF_UI_VLOG(this, Verbose, TEXT("UACFUWDebugAbilityQueue::AddAbilityQueueFromMontageRow() Add Child Text"))
			// Text->SetText(FText::FromString("Ability Queue Opened from Montage: " + Anim->GetName()));
			Text->SetText(FText::FromString(Anim->GetName()));
			Text->SetVisibility(ESlateVisibility::HitTestInvisible);
			AbilityQueueFromMontagesBox->AddChild(Text);

			// Ensure initial visibility when rows are added, if it's collapsed on clear (when no rows present)
			if (AbilityQueueFromMontagesPanel)
			{
				AbilityQueueFromMontagesPanel->SetVisibility(ESlateVisibility::HitTestInvisible);
			}

			if (bStartClearTimer)
			{
				StartClearFromMontageRowTimer();
			}
		}
	}
}

void UACFUWDebugAbilityQueue::StartClearFromMontageRowTimer()
{
	ACF_UI_VLOG(this, Verbose, TEXT("UACFUWDebugAbilityQueue::StartClearFromMontageRowTimer()"))
	FTimerHandle TimerHandle;
	ClearFromMontageTimerHandles.Add(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UACFUWDebugAbilityQueue::ClearFromMontageRow, ClearFromMontageDelay, false);
}
