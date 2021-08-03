// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Actors/Items/ACFEquippableItem.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "Core/Components/ACFCoreComponent.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Utils/ACFLog.h"
#include <Kismet/GameplayStatics.h>
#include <Sound/SoundCue.h>

AACFEquippableItem::AACFEquippableItem()
{

}

void AACFEquippableItem::Internal_OnEquipped(AACFCharacterBase* InOwner)
{
	if (InOwner)
	{
		ItemOwner = InOwner;
		SetOwner(ItemOwner);
		if (EquipSound /*&& ItemOwner->IsAlive()*/)
		{
			UGameplayStatics::PlaySoundAtLocation(this, EquipSound, GetActorLocation());
		}

		AddModifierToOwner(AttributeModifier);
		OnItemEquipped();
	}
	else
	{
		ACF_LOG(Log, TEXT("AACFEquippableItem::Internal_OnEquipped Owner is invalid"))
	}
}

void AACFEquippableItem::Internal_OnUnEquipped()
{
	RemoveModifierToOwner(AttributeModifier);
	if (UnequipSound /*&& ItemOwner->IsAlive()*/)
	{
		UGameplayStatics::PlaySoundAtLocation(this, UnequipSound, GetActorLocation());
	}

	OnItemUnEquipped();
}

void AACFEquippableItem::AddModifierToOwner(TSubclassOf<UGameplayEffect> InAttributesModifier)
{
	if (!ItemOwner)
	{
		ACF_LOG(Error, TEXT("AACFEquippabltItem::AddModifierToOwner does not have ItemOwner"))
		return;
	}

	UACFCoreComponent* CoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(ItemOwner);
	if (!CoreComponent)
	{
		ACF_LOG(Error, TEXT("AACFEquippabltItem::AddModifierToOwner, ItemOwner does not have CoreComponent"))
		return;
	}

	CoreComponent->ApplyGameplayEffectSpecToTarget(ItemOwner, InAttributesModifier);
}

void AACFEquippableItem::RemoveModifierToOwner(TSubclassOf<UGameplayEffect> InAttributesModifier)
{
	if (!ItemOwner)
	{
		ACF_LOG(Error, TEXT("AACFEquippabltItem::AddModifierToOwner does not have ItemOwner"))
			return;
	}

	UACFCoreComponent* CoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(ItemOwner);
	if (!CoreComponent)
	{
		ACF_LOG(Error, TEXT("AACFEquippabltItem::AddModifierToOwner, ItemOwner does not have CoreComponent"))
			return;
	}

	CoreComponent->ApplyGameplayEffectSpecToTarget(ItemOwner, InAttributesModifier);
}

void AACFEquippableItem::OnItemEquipped_Implementation()
{
	// Implementation goes here
}

void AACFEquippableItem::OnItemUnEquipped_Implementation()
{
	// Implementation goes here
}
