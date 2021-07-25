// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Animations/AnimNotifies/ACFTriggerComboNotify.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "AbilitySystem/Components/ACFAbilityComboManagerComponent.h"

AActor* UACFTriggerComboNotify::GetOwnerActor(USkeletalMeshComponent* MeshComponent) const
{
	AActor* OwnerActor = MeshComponent->GetOwner();
	if (!OwnerActor)
	{
		return nullptr;
	}

	const FString ActorName = OwnerActor->GetName();
	if (ActorName.StartsWith(AnimationEditorPreviewActorString))
	{
		return nullptr;
	}

	return OwnerActor;
}

void UACFTriggerComboNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	AActor* Owner = GetOwnerActor(MeshComp);
	if (!Owner)
	{
		return;
	}

	// run only on server
	if (!Owner->HasAuthority())
	{
		return;
	}

	UACFAbilityComboManagerComponent* ComboManagerComponent = UACFFunctionLibrary::GetComboManagerComponentFromActor(Owner);
	if (!ComboManagerComponent)
	{
		return;
	}

	ComboManagerComponent->bRequestTriggerCombo = true;
}

FString UACFTriggerComboNotify::GetNotifyName_Implementation() const
{
	return bEndCombo ? "ACF End Combo" : "ACF Trigger Combo";
}
