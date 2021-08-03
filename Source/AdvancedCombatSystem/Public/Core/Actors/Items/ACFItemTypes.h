// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "ACFItemTypes.generated.h"

class AACFItem;
class UTexture2D;
class UACFGameplayAbility;
class USoundCue;
class UParticleSystem;
class UNiagaraSystem;

UENUM(BlueprintType)
enum class EItemType : uint8
{
	None = 0         UMETA(DisplayName = "None"),
	Armor = 1        UMETA(DisplayName = "Armor"),
	MeleeWeapon = 2  UMETA(DisplayName = "Melee Weapon"),
	RangedWeapon = 3 UMETA(DisplayName = "Ranged Weapon"),
	Consumable = 4   UMETA(DisplayName = "Consumable"),
	Material = 5     UMETA(DisplayName = "Material"),
	Accessory = 6    UMETA(DisplayName = "Accessory"),
	Other = 7        UMETA(DisplayName = "Other"),
};

UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	None = 0         UMETA(DisplayName = "None"),
	Common = 1       UMETA(DisplayName = "Common"),
	Rare = 2         UMETA(DisplayName = "Rare"),
	Epic = 3         UMETA(DisplayName = "Epic"),
	Legendary = 4    UMETA(DisplayName = "Legendary"),
	Mythical = 5     UMETA(DisplayName = "Mythical"),
};

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

	FItemData() {};

	FItemData(TSubclassOf<AACFItem> InClass, int32 InCount, int32 InIndex = 0)
	{
		Class = InClass;
		Count = InCount;
		Index = InIndex;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	TSubclassOf<AACFItem> Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	int32 Count = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	int32 Level = 1;

	UPROPERTY(BlueprintReadWrite, Category = "ACF")
	int32 Index = 0;

	FORCEINLINE bool operator == (const FItemData& Other) const
	{
		return this->Class == Other.Class;
	}

	FORCEINLINE bool operator != (const FItemData& Other) const
	{
		return this->Class != Other.Class;
	}

	FORCEINLINE bool operator == (const TSubclassOf<AACFItem>& Other) const
	{
		return this->Class == Other;
	}

	FORCEINLINE bool operator != (const TSubclassOf<AACFItem>& Other) const
	{
		return this->Class != Other;
	}

	/** Returns true if count is greater than 0 */
	bool IsValid() const
	{
		return Count > 0;
	}

	/** Append an item data, this adds the count and overrides everything else */
	void UpdateItemData(const FItemData& Other, int32 MaxCount, int32 MaxLevel)
	{
		if (MaxCount <= 0)
		{
			MaxCount = MAX_int32;
		}

		if (MaxLevel <= 0)
		{
			MaxLevel = MAX_int32;
		}

		Count = FMath::Clamp(Count + Other.Count, 1, MaxCount);
		Level = FMath::Clamp(Other.Level, 1, MaxLevel);
	}
};

USTRUCT(BlueprintType)
struct FItemDetails : public FTableRowBase
{
	GENERATED_BODY()

	/** Icon to be displayed in UI */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	UTexture2D* ThumbNail;

	/** Name of the Item */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	FText Name;

	/** Item's rarity */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	EItemRarity Rarity;

	/** A long description of the Item */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	FText Description;

	/** Type of the Item */
	UPROPERTY(BlueprintReadOnly, Category = "ACF")
	EItemType Type;

	/** Granted Abilities to this Item */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	TArray<TSubclassOf<UACFGameplayAbility>> GrantedAbilities;

	/** Stackable amount units when this item is in the Inventory */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF")
	int32 MaxCount = 1;

	/** Item's weight in the Inventory */
	UPROPERTY(EditAnywhere , BlueprintReadWrite, Category = "ACF")
	float Weight = 0.1f;

	/** Mesh to be used when spawned in world as world mesh, not mandatory */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	UStaticMesh* WorldMesh;

	/** The Item is droppable */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	bool bDroppable = true;

	/** Unique Identity for the item in the Level */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACF")
	FGuid GUID;

	/** The Item is craftable */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	bool bCraftable = true;

	/** The Items are required to craft this */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF", meta = (EditCondition = "bCraftable == true"))
	TArray<FItemData> RequiredItems;

	/** The is upgradable */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	bool bUpgradable = false;

	/** The Items required to upgrade this */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF", meta = (EditCondition = "bUpgradable == true"))
	TArray<FItemData> RequiredItemsToUpdagrade;

	/** Next Level of this Item */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF", meta = (EditCondition = "bUpgradable == true"))
	TSubclassOf<AACFItem> NextLevelClass;

	/** If upgrading this item will cost by */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	float UpgradeCurrerencyCost = 0.f;

	/** Base Price for both settling and buying this item*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF")
	float CurrencyValue = 5.f;

	/** Slot in which this item is equipped */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ACF | Item")
	FGameplayTag SlotTag;
};

USTRUCT(BlueprintType)
struct FWeaponEffects : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF")
	USoundCue* AttackSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF")
	UParticleSystem* AttackParticle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ACF")
	UNiagaraSystem* AttackNiagara;
};