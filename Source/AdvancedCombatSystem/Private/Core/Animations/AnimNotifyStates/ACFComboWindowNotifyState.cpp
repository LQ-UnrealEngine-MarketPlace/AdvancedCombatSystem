// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Animations/AnimNotifyStates/ACFComboWindowNotifyState.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include "Core/Components/ACFCoreComponent.h"
#include "AbilitySystem/Abilities/ACFGameplayAbility.h"
#include "AbilitySystem/Components/ACFAbilityComboManagerComponent.h"
#include "Utils/ACFLog.h"
#include <GameFramework/Actor.h>
#include <Components/SkeletalMeshComponent.h>
#include <Animation/AnimSequenceBase.h>

AActor* UACFComboWindowNotifyState::GetOwnerActor(USkeletalMeshComponent* MeshComponent) const
{
	AActor* OwnerActor = MeshComponent->GetOwner();
	if (!OwnerActor)
	{
		return nullptr;
	}

	const FString OwnerActorName = OwnerActor->GetName();
	if (OwnerActorName.StartsWith(AnimationEditorPreviewActorString))
	{
		return nullptr;
	}

	return OwnerActor;
}

void UACFComboWindowNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
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
	if (ComboManagerComponent)
	{
		ComboManagerComponent->bComboWindowOpened = true;
	}
}

void UACFComboWindowNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
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
	if (ComboManagerComponent)
	{
		ACF_LOG(Verbose, TEXT("NotifyEnd: bNextComboAbilityActivated %s (%s)"), ComboManagerComponent->bNextComboAbilityActivated ? TEXT("true") : TEXT("false"), *Owner->GetName())
		ACF_LOG(Verbose, TEXT("NotifyEnd: bEndCombo %s (%s)"), bEndCombo ? TEXT("true") : TEXT("false"), *Owner->GetName())
		if (!ComboManagerComponent->bNextComboAbilityActivated || bEndCombo)
		{
			ACF_LOG(Verbose, TEXT("NotifyEnd: ResetCombo  (%s)"), *Owner->GetName())
			ComboManagerComponent->ResetCombo();
		}

		ComboManagerComponent->bComboWindowOpened = false;
		ComboManagerComponent->bRequestTriggerCombo = false;
		ComboManagerComponent->bShouldTriggerCombo = false;
		ComboManagerComponent->bNextComboAbilityActivated = false;
	}
}

void UACFComboWindowNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
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

	if (ComboManagerComponent->bComboWindowOpened && ComboManagerComponent->bShouldTriggerCombo && ComboManagerComponent->bRequestTriggerCombo && !bEndCombo)
	{
		UACFCoreComponent* CoreComponent = UACFFunctionLibrary::GetCoreComponentFromActor(Owner);
		// prevent reactivate of ability in this tick window (especially on networked environment with some lags)
		if (CoreComponent && !ComboManagerComponent->bNextComboAbilityActivated)
		{
			UACFGameplayAbility* ComboAbility = ComboManagerComponent->GetCurrentActiveComboAbility();
			if (ComboAbility)
			{
				UACFGameplayAbility* ActivatedAbility;
				const bool bSuccess = CoreComponent->ActivateAbilityWithClass(ComboAbility->GetClass(), ActivatedAbility);
				if (bSuccess)
				{
					ComboManagerComponent->bNextComboAbilityActivated = true;
				}
				else
				{
					ACF_LOG(Warning, TEXT("ComboWindowNotifyState:NotifyTick Ability %s didn't activate"), *ComboAbility->GetClass()->GetName())
				}
			}
		}
	}
}

FString UACFComboWindowNotifyState::GetEditorComment()
{
	return TEXT("probably not yet implemented");
}

FString UACFComboWindowNotifyState::GetNotifyName_Implementation() const
{
	return bEndCombo ? "ACF Combo Window (ending)     " : "ACF Combo Window    ";
}
