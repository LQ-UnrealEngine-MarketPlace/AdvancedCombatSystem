// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Widgets/ACFUserWidget.h"
#include "Core/Components/ACFCoreComponent.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Utils/ACFLog.h"

void UACFUserWidget::SetOwnerActor(AActor* Actor)
{
	OwnerActor = Actor;
	OwnerCoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(Actor);
}

float UACFUserWidget::GetPercentForAttributes(FGameplayAttribute Attribute, FGameplayAttribute MaxAttribute)
{
	if (!OwnerCoreComponent)
	{
		ACF_LOG(Error, TEXT("UACFUserWidget::GetPercentForAttributes() Owner has no CoreComponent"))
		return 0.f;
	}

	const float AttributeValue = OwnerCoreComponent->GetAttributeValue(Attribute);
	const float MaxAttributeValue = OwnerCoreComponent->GetAttributeValue(MaxAttribute);

	if (MaxAttributeValue == 0.f)
	{
		ACF_LOG(Warning, TEXT("UACFUserWidget::GetPercentForAttributes() MaxAttribute %s value is 0. Prevents dividing by zero"), *MaxAttribute.GetName())
		return 0.f;
	}

	return AttributeValue / MaxAttributeValue;
}
