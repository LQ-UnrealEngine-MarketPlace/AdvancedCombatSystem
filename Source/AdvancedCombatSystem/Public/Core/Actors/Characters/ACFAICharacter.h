// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Actors/Characters/ACFCharacterBase.h"
#include "ACFAICharacter.generated.h"

/**
* Specialized AI character class, with additional features like UI StatusBar, AbilitySystem initialization on Character etc.
*
* It differs from PlayerCharacter mainly by not relying on PlayerState for ASC
*/
UCLASS()
class ADVANCEDCOMBATSYSTEM_API AACFAICharacter : public AACFCharacterBase
{
	GENERATED_BODY()
	
public:
	// Set default values in constructor
	AACFAICharacter(const FObjectInitializer& ObjectInitializer);

	// Overrides this to create AttributeSet instead of doing it in constructor
	// https://answers.unrealengine.com/questions/944127/duplicating-a-pawn-that-use-gameplayablilities-plu.html
	virtual void PreInitializeComponents() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Create and register attribute sets */
	void SetupAttributeSets();
};
