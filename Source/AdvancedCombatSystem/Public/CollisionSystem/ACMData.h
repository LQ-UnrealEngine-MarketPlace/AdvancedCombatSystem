// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ACMData.generated.h"

class USoundCue;
class UParticleSystem;
class UNiagaraComponent;
class UNiagaraSystem;
class AActor;

UENUM(BlueprintType)
enum class EDebugType : uint8
{
	DontShowDebugInfos  UMETA(DisplayName = "Don't Show Debug Info"),
	ShowInfoDuringSwing UMETA(DisplayName = "Show Info During Swing"),
	AlwaysShowDebug     UMETA(DisplayName = "Always Show Debug Info"),
};

UENUM(BlueprintType)
enum class EDamageType : uint8
{
	Point UMETA(DisplayName = "Point Damage"),
	Area  UMETA(DisplayName = "Area Damage"),
};

USTRUCT(BlueprintType)
struct FHitActors
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACM")
	TArray<AActor*> AlreadyHitActors;
};

USTRUCT(BlueprintType)
struct FTrailEffect
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ACM")
	UParticleSystemComponent* ParticleSystemComponents;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ACM")
	UNiagaraComponent* NiagaraComponent;
};

USTRUCT(BlueprintType)
struct FTraceInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACM")
	FName StartSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACM")
	FName EndSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACM")
	float Radius = 0.f;

	/** Select if it is Area or Point Damage */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACM", meta = (EditCondition = "bAutoApplyDamage"))
	EDamageType DamageType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACM")
	USoundCue* AttackSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACM")
	UParticleSystem* AttackParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACM")
	UNiagaraSystem* AttackNiagara;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACM")
	float TrailLength = 1.f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACM", meta = (EditCondition = "bAutoApplyDamage"))
	//TSubclassOf<UDamageType>
};