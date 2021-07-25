// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ACFComboWindowNotifyState.generated.h"

/**
 * 
 */
UCLASS( meta = (DisplayName = "Combo Window"))
class ADVANCEDCOMBATSYSTEM_API UACFComboWindowNotifyState : public UAnimNotifyState
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

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;

	virtual FString GetEditorComment() override;
	virtual FString GetNotifyName_Implementation() const override;
};
