// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ACFCoreComponent.generated.h"

class UACFGameplayAbility;
class UGameplayAbility;
class UGameplayEffect;
class UAbilitySystemComponent;
class UACFAttributeSetBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FACFOnDeath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FACFOnDefaultAttributeChange, float, DeltaValue, const struct FGameplayTagContainer, EventTags);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FACFOnAttributeChange, FGameplayAttribute, Attribute, float, DeltaValue, const struct FGameplayTagContainer, EventTags);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FACFOnPreAttributeChange, UACFAttributeSetBase*, AttributeSet, FGameplayAttribute, Attribute, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FACFOnPostGameplayEffectExecute, FGameplayAttribute, Attribute, AActor*, SourceActor, AActor*, TargetActor, const FGameplayTagContainer&, SourceTags, const FACFGameplayEffectExecuteData, Payload);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FACFOnAbilityActivated, const UGameplayAbility*, Ability);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FACFOnAbilityEnded, const UGameplayAbility*, Ability);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FACFOnAbilityFailed, const UGameplayAbility*, Ability, const FGameplayTagContainer&, ReasonTags);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FACFOnGameplayEffectStackChange, FGameplayTagContainer, AssetTags, FGameplayTagContainer, GrantedTags, FActiveGameplayEffectHandle, ActiveHandle, int32, NewStackCount, int32, OldStackCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FACFOnGameplayEffectAdded, FGameplayTagContainer, AssetTags, FGameplayTagContainer, GrantedTags, FActiveGameplayEffectHandle, ActiveHandle);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FACFOnGameplayEffectRemoved, FGameplayTagContainer, AssetTags, FGameplayTagContainer, GrantedTags, FActiveGameplayEffectHandle, ActiveHandle);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FACFOnGameplayTagStackChange, FGameplayTag, GameplayTag, int32, NewTagCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FACFOnAbilityCommit, UGameplayAbility*, Ability);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FACFOnCooldownChanged, UGameplayAbility*, Ability, const FGameplayTagContainer, CooldownTags, float, TimeRemaining, float, Duration);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FACFOnCooldownEnd, UGameplayAbility*, Ability, FGameplayTag, CooldownTag, float, Duration);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FACFOnDamage, float, DamageAmount, AActor*, SourceCharacter, const struct FGameplayTagContainer&, DamageTags);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FACFOnGameplayEffectTimeChange, FGameplayTagContainer, AssetTags, FGameplayTagContainer, GrantedTags, FActiveGameplayEffectHandle, ActiveHandle, float, NewStartTime, float, NewDuration);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDCOMBATSYSTEM_API UACFCoreComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	AActor* OwnerActor;

	UPROPERTY()
	APawn* OwnerPawn;

	UPROPERTY()
	ACharacter* OwnerCharacter;

	UPROPERTY()
	UAbilitySystemComponent* OwnerAbilitySystemComponent;

	// Keep track of registered attribute sets to avoid adding it twice
	UPROPERTY()
	TArray<FString> RegisteredAttributeSetNames;

	/** Default abilities for this actor. These are granted when the actor spawns */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "ACF | Abilities")
	TArray<TSubclassOf<UGameplayAbility>> StartupAbilities;

	/** Default Gameplay Effect applied to the actor to initialize attributes on spawn/respawn */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "ACF | Abilities")
	TSubclassOf<UGameplayEffect> StartupAttributes;

	/** Default Gameplay Effects applied to the actor on spawn/respawn */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "ACF | Abilities")
	TArray<TSubclassOf<UGameplayEffect>> StartupEffects;

public:	
	// Sets default values for this component's properties
	UACFCoreComponent();

	/** Setup GetOwner to character and sets references for ability system component and the owner itself. */
	void SetupOwner();

	/** Initialize and setup Actor for AbilitySystem and startup abilities / effects */
	void SetupAbilityActor(AActor* InOwnerActor, AActor* InAvatarActor);

	/** Initialize and setup Actor for AbilitySystem and startup abilities / effects */
	void SetupAbilityActor(UAbilitySystemComponent* ASC, AActor* InOwnerActor, AActor* InAvatarActor);

	// IGSCAbilitySystemInterface
	virtual TMap<FString, const UAttributeSet*> GetAttributeSets() const;
	virtual bool IsStartupAttributesApplied() const;

	// Called from AttributeSet, and trigger BP events
	virtual void HandleDamage(float DamageAmount, const FGameplayTagContainer& DamageTags, AActor* SourceActor);
	virtual void HandleHealthChange(float DeltaValue, const FGameplayTagContainer& EventTags);
	virtual void HandleStaminaChange(float DeltaValue, const FGameplayTagContainer& EventTags);
	virtual void HandleManaChange(float DeltaValue, const FGameplayTagContainer& EventTags);
	virtual void HandleAttributeChange(FGameplayAttribute Attribute, float DeltaValue, const FGameplayTagContainer& EventTags);
	// ~IGSCAbilitySystemInterface

	/**
	* Called when character takes damage, which may have killed them
	*
	* @param DamageAmount Amount of damage that was done, not clamped based on current health
	* @param SourceCharacter The actual actor that did the damage
	* @param DamageTags The gameplay tags of the event that did the damage
	*/
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnDamage OnDamage;

	/**
	* Called when health is changed, either from healing or from being damaged
	* For damage this is called in addition to OnDamaged/OnDeath
	*
	* @param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown
	* @param EventTags The gameplay tags of the event that changed mana
	*/
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnDefaultAttributeChange OnHealthChange;

	/**
	* Called when stamina is changed, either from regen  or from being used as a cost
	*
	* @param DeltaValue Change in stamina value, positive for heal, negative for cost. If 0 the delta is unknown
	* @param EventTags The gameplay tags of the event that changed mana
	*/
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnDefaultAttributeChange OnStaminaChange;


	/**
	* Called when mana is changed, either from healing or from being used as a cost
	*
	* @param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown
	* @param EventTags The gameplay tags of the event that changed mana
	*/
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnDefaultAttributeChange OnManaChange;

	/**
	* Called when any of the attributes owned by this character are changed
	*
	* @param Attribute The Attribute that was changed
	* @param DeltaValue It it was an additive operation, returns the modifier value.
	*                   Or if it was a change coming from damage meta attribute (for health),
	*                   returns the damage done.
	* @param EventTags The gameplay tags of the event that changed this attribute
	*/
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnAttributeChange OnAttributeChange;

	// Generic Attribute change callback for attributes
	virtual void OnAttributeChanged(const FOnAttributeChangeData& Data);

	// Generic "meta" Attribute change callback for damage attributes
	virtual void OnDamageAttributeChanged(const FOnAttributeChangeData& Data);

public:
	/**
		* Called when character dies
		*/
	UPROPERTY(BlueprintAssignable, Category = "ACF | Actor")
	FACFOnDeath OnDeath;

	/**
	* Triggers death events for the owner actor
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Actor")
	virtual void Die();

	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual float GetMaxStamina() const;

	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual float GetMana() const;

	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual float GetMaxMana() const;

	/** Returns the current value of an attribute (base value). That is, the value of the attribute with no stateful modifiers */
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual float GetAttributeValue(FGameplayAttribute Attribute) const;

	/** Returns current (final) value of an attribute */
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual float GetCurrentAttributeValue(FGameplayAttribute Attribute) const;

	/** Returns whether or not the Actor is considered alive (Health > 0) */
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual bool IsAlive() const;

	/**
	* Grants the Actor with the given ability, making it available for activation
	*
	* @param Ability The Gameplay Ability to give to the character
	* @param Level The Gameplay Ability Level (defaults to 1)
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual void GrantAbility(TSubclassOf<UGameplayAbility> Ability, int32 Level = 1);

	/** Remove an ability from the Character's ASC */

	/**
	* Remove an ability from the Actor's Ability System Component
	*
	* @param Ability The Gameplay Ability Class to remove
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual void ClearAbility(TSubclassOf<UACFGameplayAbility> Ability);

	/**
	* Remove an set of abilities from the Actor's Ability System Component
	*
	* @param Abilities Array of Ability Class to remove
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual void ClearAbilities(TArray<TSubclassOf<UACFGameplayAbility>> Abilities);

	/**
	* Returns true if Actor's AbilitySystemComponent has any of the matching tags (expands to include parents of asset tags)
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer TagContainer) const;

	/**
	* Returns true if Actor's AbilitySystemComponent has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual bool HasMatchingGameplayTag(const FGameplayTag TagToCheck) const;

	/** Returns whether one of the actors's active abilities are matching the provided Ability Class */
	UFUNCTION(BlueprintPure, Category = "ACF | Attributes")
	bool IsUsingAbilityWithClass(TSubclassOf<UACFGameplayAbility> AbilityClass);

	/** Returns whether one of the character's active abilities are matching the provided tags */
	UFUNCTION(BlueprintPure, Category = "ACF | Attributes")
	bool IsUsingAbilityWithTags(FGameplayTagContainer AbilityTags);

	/**
	* Returns a list of currently active ability instances that match the given tags
	*
	* This only returns if the ability is currently running
	*
	* @param GameplayTagContainer The Ability Tags to search for
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual TArray<UACFGameplayAbility*> GetActiveAbilitiesWithTags(const FGameplayTagContainer GameplayTagContainer) const;

	/**
	* Attempts to activate the ability that is passed in. This will check costs and requirements before doing so.
	*
	* Returns true if it thinks it activated, but it may return false positives due to failure later in activation.
	*
	* @param AbilityClass Gameplay Ability Class to activate
	* @param ActivatedAbility The Gameplay Ability that was triggered on success
	* @param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.
	* @return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation.
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual bool ActivateAbilityWithClass(TSubclassOf<UACFGameplayAbility> AbilityClass, UACFGameplayAbility*& ActivatedAbility, bool bAllowRemoteActivation = true);

	/**
	* Attempts to activate a **single** gameplay ability that matches the given tag and DoesAbilitySatisfyTagRequirements().
	*
	* It differs from GAS ASC TryActivateAbilitiesByTag which tries to activate *every* ability, whereas this version will pick a
	* random one and attempt to activate it.
	*
	* Returns true if the ability attempts to activate, and the reference to the Activated Ability if any.
	*
	* @param AbilityTags Set of Gameplay Tags to search for
	* @param ActivatedAbility The Gameplay Ability that was triggered on success
	* @param bAllowRemoteActivation If true, it will remotely activate local/server abilities, if false it will only try to locally activate abilities.
	* @return bSuccess Returns true if it thinks it activated, but it may return false positives due to failure later in activation.
	*/
	UFUNCTION(BlueprintCallable, Category = "ACF | Attributes")
	virtual bool ActivateAbilityWithTags(const FGameplayTagContainer AbilityTags, UACFGameplayAbility*& ActivatedAbility, const bool bAllowRemoteActivation = true);

	/* AttributeSet Events */

	/** Sets the base value of an attribute. Existing active modifiers are NOT cleared and will act upon the new base value. */
	UFUNCTION(BlueprintCallable, Category = "GSC|Attributes")
	virtual void SetAttributeValue(FGameplayAttribute Attribute, float NewValue);

	/** Clamps the Attribute from MinValue to MaxValue */
	UFUNCTION(BlueprintCallable, Category = "GSC|Attributes")
	virtual void ClampAttributeValue(FGameplayAttribute Attribute, float MinValue, float MaxValue);

	/**
	* Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.
	* (e.g. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before)
	*
	* @param AttributeSet The AttributeSet owner for the affected attributes
	* @param AffectedAttributeProperty The affected Attribute property
	* @param MaxAttribute The related MaxAttribute
	* @param NewMaxValue The new value for the MaxAttribute
	*/
	UFUNCTION(BlueprintCallable, Category = "GSC|Attributes")
	virtual void AdjustAttributeForMaxChange(UPARAM(ref) UACFAttributeSetBase* AttributeSet, const FGameplayAttribute AffectedAttributeProperty, const FGameplayAttribute MaxAttribute, float NewMaxValue);

	/* AttributeSet Events */

	virtual void PreAttributeChange(UACFAttributeSetBase* AttributeSet, const FGameplayAttribute& Attribute, float NewValue);
	virtual void PostGameplayEffectExecute(UACFAttributeSetBase* AttributeSet, const FGameplayEffectModCallbackData& Data);

	/**
	* PostGameplayEffectExecute event fired off from native AttributeSets, define here
	* any attribute change specific management you are not doing in c++ (like clamp)
	*
	* Only triggers after changes to the BaseValue of an Attribute from a GameplayEffect.
	*
	* @param Attribute The affected GameplayAttribute
	* @param SourceActor The instigator Actor that started the whole chain (in case of damage, that would be the damage causer)
	* @param TargetActor The owner Actor to which the Attribute change is applied
	* @param SourceTags The aggregated SourceTags for this EffectSpec
	* @param Payload Payload information with the original AttributeSet, the owning AbilitySystemComponent, calculated DeltaValue and the ClampMinimumValue from config if defined
	*/
	UPROPERTY(BlueprintAssignable, Category = "GSC|Attributes")
	FACFOnPostGameplayEffectExecute OnPostGameplayEffectExecute;

	/**
	* PreAttributeChange event fired off from native AttributeSets, react here to
	* changes of Attributes CurrentValue before the modification to the BaseValue
	* happens.
	*
	* Called just before any modification happens to an attribute, whether using
	* Attribute setters or using GameplayEffect.
	*
	* @param AttributeSet The AttributeSet that started the change
	* @param Attribute The affected GameplayAttribute
	* @param NewValue The new value
	*/
	UPROPERTY(BlueprintAssignable, Category = "GSC|Attributes")
	FACFOnPreAttributeChange OnPreAttributeChange;

	/** Initialize the Actor's attributes. Only run on Server */
	virtual void InitializeAttributes();
	bool bStartupAttributesApplied = false;

public:
	// ~ Ability Events ~

	/**
	 * Called when an ability is activated for the owner actor
	 */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnAbilityActivated OnAbilityActivated;

	/**
	 * Called when an ability is ended for the owner actor.
	 */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnAbilityEnded OnAbilityEnded;

	/**
	 * Called when an ability failed to activated for the owner actor, passes along the failed ability
	 * and a tag explaining why.
	 */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnAbilityFailed OnAbilityFailed;

	/**
	 * Called when a GameplayEffect is added or removed.
	 */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnGameplayEffectStackChange OnGameplayEffectStackChange;

	/**
	 * Called when a GameplayEffect duration is changed (for instance when duration is refreshed)
	 */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnGameplayEffectTimeChange OnGameplayEffectTimeChange;

	/**
	 * Called when a GameplayEffect is added.
	 */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnGameplayEffectAdded OnGameplayEffectAdded;

	/**
	 * Called when a GameplayEffect is removed.
	 */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnGameplayEffectRemoved OnGameplayEffectRemoved;

	/** Called whenever a tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events) */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnGameplayTagStackChange OnGameplayTagChange;

	/** Called whenever an ability is committed (cost / cooldown are applied) */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnAbilityCommit OnAbilityCommit;

	/** Called when an ability with a valid cooldown is committed and cooldown is applied */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnCooldownChanged OnCooldownStart;

	/** Called when a cooldown gameplay tag is removed, meaning cooldown expired */
	UPROPERTY(BlueprintAssignable, Category = "ACF | Abilities")
	FACFOnCooldownEnd OnCooldownEnd;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/** Grant abilities on the Server. The Ability Specs will be replicated to the owning client */
	virtual void AddStartupAbilities();
	bool bStartupAbilitiesGranted = false;

	/** Removes all StartupAbilities. Can only be called by the Server. Removing on the Server will remove from Client too */
	virtual void RemoveStartupAbilities();

	/** Apply GameplayEffects on startup (such as regenerations) */
	virtual void AddStartupEffects();
	bool bStartupEffectsApplied = false;

	/** Triggered by ASC when GEs are added */
	virtual void OnActiveGameplayEffectAdded(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);

	/** Triggered by ASC when GEs stack count changes */
	virtual void OnActiveGameplayEffectStackChanged(FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 PreviousStackCount);

	/** Triggered by ASC when GEs stack count changes */
	virtual void OnActiveGameplayEffectTimeChanged(FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration);

	/** Triggered by ASC when any GEs are removed */
	virtual void OnAnyGameplayEffectRemoved(const FActiveGameplayEffect& EffectRemoved);

	/** Trigger by ASC when any gameplay tag is added or removed (but not if just count is increased. Only for 'new' and 'removed' events) */
	void OnAnyGameplayTagChanged(FGameplayTag GameplayTag, int32 NewCount) const;

	/** Trigger by ASC when an ability is committed (cost / cooldown are applied)  */
	void OnAbilityCommitted(UGameplayAbility* ActivatedAbility);

	/** Trigger by ASC when a cooldown tag is changed (new or removed)  */
	virtual void OnCooldownGameplayTagChanged(const FGameplayTag GameplayTag, int32 NewCount, FGameplayAbilitySpecHandle AbilitySpecHandle, float Duration);

	/** Manage cooldown events trigger when an ability is committed */
	void HandleCooldownOnAbilityCommit(UGameplayAbility* ActivatedAbility);
		
public:
	AActor* GetOwnerActor();
	UAbilitySystemComponent* GetOwnerASC();

public:
	template<class TEnum>
	FString EnumToString(const int32 Type);
};

