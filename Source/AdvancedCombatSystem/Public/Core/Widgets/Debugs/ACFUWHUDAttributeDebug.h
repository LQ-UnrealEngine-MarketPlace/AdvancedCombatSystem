// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Widgets/ACFUWHUD.h"
#include "ACFUWHUDAttributeDebug.generated.h"

class UHorizontalBox;
class UVerticalBox;
class AActor;

/**
 * 
 */
UCLASS()
class ADVANCEDCOMBATSYSTEM_API UACFUWHUDAttributeDebug : public UACFUWHUD
{
	GENERATED_BODY()
	
protected:
	/**
	* Convenience UHorizontalBox that serves as a "template" for attribute row,
	* so that we can customize its styling in Blueprints (font size, color, etc.)
	*/
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "ACF | UI")
	UHorizontalBox* AttributeRowTemplate = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "ACF | UI")
	UVerticalBox* AttributesVerticalBox = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "ACF | UI")
	UTextBlock* DebugActorsTitle = nullptr;

	UPROPERTY()
	TArray<AActor*> DebugActors;

	UPROPERTY()
	AActor* CurrentDebugActor;

	UPROPERTY()
	TArray<UTextBlock*> AttributeValues;

	UPROPERTY()
	TMap<FGameplayAttribute, UTextBlock*> AttributeValueMaps;

public:
	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	FMargin DefaultPadding = FMargin(0.0f, 8.0f);

	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	float NameMinDesiredWidth = 200.0f;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	float ValueMinDesiredWidth = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	int32 MinimumIntegralDigits = 1;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	int32 MaximumIntegralDigits = 324;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	int32 MinimumFractionalDigits = 0;

	UPROPERTY(EditDefaultsOnly, Category = "ACF | UI")
	int32 MaximumFractionalDigits = 3;

protected:
	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	void NextDebugCharacter();

	UFUNCTION(BlueprintCallable, Category = "ACF | UI")
	void PrevDebugCharacter();

	void SetDebugActor(AActor* Actor);

	FText FloatToText(float Value) const;

public:
	virtual void HandleAttributeChange(FGameplayAttribute Attribute, float NewValue, float OldValue) override;
};
