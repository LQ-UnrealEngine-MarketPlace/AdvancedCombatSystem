// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ACFTriggerComboNotify.generated.h"

class AActor;
class USkeletalMeshComponent;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFTriggerComboNotify : public UAnimNotify
{
	GENERATED_BODY()

	// Used to check if the owner actor of this notify is the preview actor of Persona, in which case we don't do anything
	// to prevent log warning when getting components via Companion interfaces
	FString AnimationEditorPreviewActorString = "AnimationEditorPreviewActor";

	AActor* GetOwnerActor(USkeletalMeshComponent* MeshComponent) const;

public:
	/** Whether this montage is ending a combo (last montage in the combo chain) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify")
	bool bEndCombo = false;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	virtual FString GetNotifyName_Implementation() const override;
};
