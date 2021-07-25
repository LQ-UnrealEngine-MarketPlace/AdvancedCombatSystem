// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Widgets/Debugs/ACFUWHUDAttributeDebug.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "Core/Actors/Pawns/ACFPawnBase.h"
#include "AbilitySystem/Components/ACFAbilitySystemComponent.h"
#include <Components/TextBlock.h>
#include <Components/Image.h>
#include <Components/HorizontalBox.h>
#include <Components/HorizontalBoxSlot.h>
#include <Blueprint/WidgetLayoutLibrary.h>
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetTextLibrary.h>

void UACFUWHUDAttributeDebug::NativeConstruct()
{
	Super::NativeConstruct();

	if (!OwnerCoreComponent)
	{
		return;
	}

	if (!AttributeRowTemplate || !AttributesVerticalBox)
	{
		return;
	}

	TArray<AActor*> Characters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AACFCharacterBase::StaticClass(), Characters);

	TArray<AActor*> Pawns;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AACFPawnBase::StaticClass(), Pawns);

	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("ACFActor"), TaggedActors);

	DebugActors.Append(Characters);
	DebugActors.Append(Pawns);
	for (auto TaggedActor : TaggedActors)
	{
		DebugActors.AddUnique(TaggedActor);
	}

	SetDebugActor(OwnerCoreComponent->GetOwnerActor());

	UACFAbilitySystemComponent* ASC = Cast<UACFAbilitySystemComponent>(OwnerCoreComponent->GetOwnerASC());
	TArray<FGameplayAttribute> Attributes;
	ASC->GetAllAttributes(Attributes);

	for (auto Attribute : Attributes)
	{
		UHorizontalBox* Row = DuplicateObject(AttributeRowTemplate, this);
		if (Row)
		{
			UTextBlock* AttributeName = DuplicateObject(Cast<UTextBlock>(Row->GetChildAt(0)), this);
			UImage* Image = DuplicateObject(Cast<UImage>(Row->GetChildAt(1)), this);
			UTextBlock* AttributeValue = DuplicateObject(Cast<UTextBlock>(Row->GetChildAt(2)), this);
			AttributeName->SetText(FText::FromString(Attribute.GetName()));
			AttributeValue->SetText(FloatToText(OwnerCoreComponent->GetAttributeValue(Attribute)));

			AttributeValueMaps.Add(Attribute, AttributeValue);

			Row->ClearChildren();
			Row->SetVisibility(ESlateVisibility::Visible);
			Row->AddChild(AttributeName);
			Row->AddChild(Image);
			Row->AddChild(AttributeValue);

			UHorizontalBoxSlot* AttributeNameSlot = UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(AttributeName);
			UHorizontalBoxSlot* AttributeValueSlot = UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(AttributeName);
			AttributeNameSlot->SetPadding(DefaultPadding);
			AttributeValueSlot->SetPadding(DefaultPadding);

			AttributesVerticalBox->AddChild(Row);
		}
	}
}

void UACFUWHUDAttributeDebug::NextDebugCharacter()
{

}

void UACFUWHUDAttributeDebug::PrevDebugCharacter()
{

}

void UACFUWHUDAttributeDebug::SetDebugActor(AActor* Actor)
{
	CurrentDebugActor = Actor;
}

FText UACFUWHUDAttributeDebug::FloatToText(float Value) const
{
	return UKismetTextLibrary::Conv_FloatToText(
		Value,
		ERoundingMode::HalfToEven,
		false,
		false,
		MinimumIntegralDigits,
		MaximumIntegralDigits,
		MinimumFractionalDigits,
		MaximumFractionalDigits
	);
}

void UACFUWHUDAttributeDebug::HandleAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue)
{
	Super::HandleAttributeChange(Attribute, NewValue, OldValue);

	if (!OwnerCoreComponent)
	{
		ACF_LOG(Warning, TEXT("UACFUWHUDAttributeDebug::HandleAttributeChange() OwnerCoreComponent is invalid"))
		return;
	}
	
	UTextBlock* AttributeValue = *AttributeValueMaps.Find(Attribute);
	const float Value = OwnerCoreComponent->GetAttributeValue(Attribute);
	AttributeValue->SetText(FloatToText(Value));
}
