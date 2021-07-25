// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Components/ACFCoreComponent.h"
#include "Core/Interfaces/ACFActorInterface.h"
#include "Core/Game/Player/ACFHUD.h"
#include "Core/Game/Player/ACFPlayerController.h"
#include "Core/Widgets/ACFUWHUD.h"
#include "AbilitySystem/Abilities/ACFGameplayAbility.h"
#include <AbilitySystemInterface.h>
#include <Engine/EngineTypes.h>
#include <AbilitySystem/ACFAbilityTypes.h>

// Sets default values for this component's properties
UACFCoreComponent::UACFCoreComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
	SetIsReplicatedByDefault(true);
}

// Called when the game starts
void UACFCoreComponent::BeginPlay()
{
	Super::BeginPlay();

	//..
	SetupOwner();
}

void UACFCoreComponent::SetupOwner()
{
	if (!GetOwner())
	{
		return;
	}

	OwnerActor = GetOwner();
	if (!OwnerActor)
	{
		return;
	}

	OwnerPawn = Cast<APawn>(OwnerActor);
	OwnerCharacter = Cast<ACharacter>(OwnerActor);

	IAbilitySystemInterface* AbilitySystemInterface = Cast<IAbilitySystemInterface>(OwnerActor);
	if (!AbilitySystemInterface)
	{
		return;
	}

	OwnerAbilitySystemComponent = AbilitySystemInterface->GetAbilitySystemComponent();
}

void UACFCoreComponent::SetupAbilityActor(AActor* InOwnerActor, AActor* InAvatarActor)
{
	SetupAbilityActor(OwnerAbilitySystemComponent, InOwnerActor, InAvatarActor);
}

void UACFCoreComponent::SetupAbilityActor(UAbilitySystemComponent* ASC, AActor* InOwnerActor, AActor* InAvatarActor)
{
	if (!InOwnerActor)
	{
		ACF_LOG(Error, TEXT("UACFCoreComponent::SetupAbilityActor() InOwnerActor is nullptr"))
		return;
	}

	if (!InAvatarActor)
	{
		ACF_LOG(Error, TEXT("UACFCoreComponent::SetupAbilityActor InAvatarActor is nullptr"))
		return;
	}

	if (ASC)
	{
		ASC->InitAbilityActorInfo(InOwnerActor, InAvatarActor);

		InitializeAttributes();
		AddStartupEffects();
		AddStartupAbilities();

		TArray<FGameplayAttribute> Attributes;
		ASC->GetAllAttributes(Attributes);

		for (FGameplayAttribute Attribute : Attributes)
		{
			ACF_LOG(Verbose, TEXT("Setup callback for %s (%s)"), *Attribute.GetName(), *InAvatarActor->GetName());
			/*if (Attribute == UGSCAttributeSet::GetDamageAttribute() || Attribute == UGSCAttributeSet::GetStaminaDamageAttribute())
			{
				ASC->GetGameplayAttributeValueChangeDelegate(Attribute).AddUObject(this, &UACFCoreComponent::OnDamageAttributeChanged);
			}
			else
			{
				ASC->GetGameplayAttributeValueChangeDelegate(Attribute).AddUObject(this, &UACFCoreComponent::OnAttributeChanged);
			}*/
		}

		// Handle GameplayEffects added / remove
		ASC->OnActiveGameplayEffectAddedDelegateToSelf.AddUObject(this, &UACFCoreComponent::OnActiveGameplayEffectAdded);
		ASC->OnAnyGameplayEffectRemovedDelegate().AddUObject(this, &UACFCoreComponent::OnAnyGameplayEffectRemoved);

		// Handle generic GameplayTags added / removed
		ASC->RegisterGenericGameplayTagEvent().AddUObject(this, &UACFCoreComponent::OnAnyGameplayTagChanged);

		// Handle Ability Commit events
		ASC->AbilityCommittedCallbacks.AddUObject(this, &UACFCoreComponent::OnAbilityCommitted);
	}
}

TMap<FString, const UAttributeSet*> UACFCoreComponent::GetAttributeSets() const
{
	TMap<FString, const UAttributeSet*> Sets;
	if (!OwnerActor)
	{
		return Sets;
	}

	IACFActorInterface* ActornInterface = Cast<IACFActorInterface>(OwnerActor);
	if (ActornInterface)
	{
		Sets = ActornInterface->GetAttributeSets();
	}

	return Sets;
}

bool UACFCoreComponent::IsStartupAttributesApplied() const
{
	return bStartupAttributesApplied;
}

void UACFCoreComponent::HandleDamage(float DamageAmount, const FGameplayTagContainer& DamageTags, AActor* SourceActor)
{
	OnDamage.Broadcast(DamageAmount, SourceActor, DamageTags);

	// TODO: Damage Attribute not replicated, have to figure out a way to broadcast to clients (mostly to keep SourceActor)
	// Broadcast damage to status bar (if any)
	// BroadcastDamageToStatusBar(DamageAmount, DamageTags, SourceActor);
}

void UACFCoreComponent::HandleHealthChange(float DeltaValue, const FGameplayTagContainer& EventTags)
{
	// We only call the BP callbacks if this is not the initial ability setup
	if (!bStartupAbilitiesGranted)
	{
		return;
	}

	OnHealthChange.Broadcast(DeltaValue, EventTags);
	if (!IsAlive())
	{
		Die();
	}
}

void UACFCoreComponent::HandleStaminaChange(float DeltaValue, const FGameplayTagContainer& EventTags)
{
	// We only call the BP callbacks if this is not the initial ability setup
	if (!bStartupAbilitiesGranted)
	{
		return;
	}

	OnStaminaChange.Broadcast(DeltaValue, EventTags);
}

void UACFCoreComponent::HandleManaChange(float DeltaValue, const FGameplayTagContainer& EventTags)
{
	// We only call the BP callbacks if this is not the initial ability setup
	if (!bStartupAbilitiesGranted)
	{
		return;
	}

	OnManaChange.Broadcast(DeltaValue, EventTags);
}

void UACFCoreComponent::HandleAttributeChange(FGameplayAttribute Attribute, float DeltaValue, const FGameplayTagContainer& EventTags)
{
	OnAttributeChange.Broadcast(Attribute, DeltaValue, EventTags);
}

void UACFCoreComponent::OnAttributeChanged(const FOnAttributeChangeData& Data)
{
	const float NewValue = Data.NewValue;
	const float OldValue = Data.OldValue;
	const FGameplayEffectModCallbackData* ModData = Data.GEModData;
	FGameplayTagContainer SourceTags = FGameplayTagContainer();
	if (ModData)
	{
		SourceTags = *ModData->EffectSpec.CapturedSourceTags.GetAggregatedTags();
	}

	// Broadcast attribute change to component
	OnAttributeChange.Broadcast(Data.Attribute, NewValue - OldValue, SourceTags);

	// Broadcast any attribute change to player hud
	if (OwnerCharacter && OwnerCharacter->IsA(AACFPlayerCharacter::StaticClass()))
	{
		 ACF_LOG
		 (
		 	Verbose,
		 	TEXT("Authority for %s is %s || Local Role: %s, Remote Role: %s"),
		 	*OwnerPawn->GetName(), OwnerPawn->HasAuthority() ? TEXT("true") : TEXT("false"),
		 	*EnumToString<ENetRole>(OwnerPawn->GetLocalRole()),
		 	*EnumToString<ENetRole>(OwnerPawn->GetRemoteRole())
		 )
		
		//BroadcastAttributeChangeToHUD(Data.Attribute, NewValue, OldValue);
	}
}

void UACFCoreComponent::OnDamageAttributeChanged(const FOnAttributeChangeData& Data)
{
	// if we ever need to broadcast via delegate
}

void UACFCoreComponent::Die()
{
	OnDeath.Broadcast();
}

float UACFCoreComponent::GetHealth() const
{
	if (!OwnerAbilitySystemComponent)
	{
		return 0.f;
	}

	return GetAttributeValue(UACFAttributeSet::GetHealthAttribute());
}

float UACFCoreComponent::GetMaxHealth() const
{
	if (!OwnerAbilitySystemComponent)
	{
		return 0.f;
	}

	return GetAttributeValue(UACFAttributeSet::GetMaxHealthAttribute());
}

float UACFCoreComponent::GetStamina() const
{
	if (!OwnerAbilitySystemComponent)
	{
		return 0.f;
	}

	return GetAttributeValue(UACFAttributeSet::GetStaminaAttribute());
}

float UACFCoreComponent::GetMaxStamina() const
{
	if (!OwnerAbilitySystemComponent)
	{
		return 0.f;
	}

	return GetAttributeValue(UACFAttributeSet::GetMaxStaminaAttribute());
}

float UACFCoreComponent::GetMana() const
{
	if (!OwnerAbilitySystemComponent)
	{
		return 0.f;
	}

	return GetAttributeValue(UACFAttributeSet::GetManaAttribute());
}

float UACFCoreComponent::GetMaxMana() const
{
	if (!OwnerAbilitySystemComponent)
	{
		return 0.f;
	}

	return GetAttributeValue(UACFAttributeSet::GetMaxManaAttribute());
}

float UACFCoreComponent::GetAttributeValue(FGameplayAttribute Attribute) const
{
	if (!OwnerAbilitySystemComponent)
	{
		ACF_LOG(Warning, TEXT("UACFCoreComponent::GetAttributeValue() Owner's AbilitySystemComponent seems to be invalid. this will return 0.f."))
		return 0.0f;
	}

	if (!OwnerAbilitySystemComponent->HasAttributeSetForAttribute(Attribute))
	{
		const UObject* Owner = Cast<UObject>(this);
		const FString OwnerName = OwnerActor ? OwnerActor->GetName() : Owner->GetName();
		ACF_LOG(Warning, TEXT("UACFCoreComponent::GetAttributeValue() Attribute %s doesn't seem to be part of the AttributeSet attached to %s"), *Attribute.GetName(), *OwnerName)
		return 0.0f;
	}

	return OwnerAbilitySystemComponent->GetNumericAttributeBase(Attribute);
}

float UACFCoreComponent::GetCurrentAttributeValue(FGameplayAttribute Attribute) const
{
	if (!OwnerAbilitySystemComponent)
	{
		return 0.0f;
	}

	if (!OwnerAbilitySystemComponent->HasAttributeSetForAttribute(Attribute))
	{
		const UObject* Owner = Cast<UObject>(this);
		const FString OwnerName = OwnerActor ? OwnerActor->GetName() : Owner->GetName();
		ACF_LOG(Warning, TEXT("GetCurrentAttributeValue() Attribute %s doesn't seem to be part of the AttributeSet attached to %s"), *Attribute.GetName(), *OwnerName)
		return 0.0f;
	}

	return OwnerAbilitySystemComponent->GetNumericAttribute(Attribute);
}

bool UACFCoreComponent::IsAlive() const
{
	return GetHealth() > 0.f;
}

void UACFCoreComponent::GrantAbility(TSubclassOf<UGameplayAbility> Ability, int32 Level /*= 1*/)
{
	if (!OwnerActor || !OwnerAbilitySystemComponent || !Ability)
	{
		return;
	}

	// ensure only run on server
	if (OwnerAbilitySystemComponent->GetOwnerRole() != ROLE_Authority)
	{
		return;
	}

	FGameplayAbilitySpec Spec;
	Spec.Ability = Ability.GetDefaultObject();

	FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability, Level, INDEX_NONE, OwnerActor);
}

void UACFCoreComponent::ClearAbility(TSubclassOf<UACFGameplayAbility> Ability)
{
	if (!OwnerActor || !OwnerAbilitySystemComponent || !Ability)
	{
		return;
	}

	if (OwnerAbilitySystemComponent->GetOwnerRole() != ROLE_Authority)
	{
		return;
	}

	// Remove any abilities added from a previous call.
	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
	for (const FGameplayAbilitySpec& Spec : OwnerAbilitySystemComponent->GetActivatableAbilities())
	{
		const bool bIsSourceObject = Spec.SourceObject == OwnerActor;
		if (bIsSourceObject && Spec.Ability->GetClass() == Ability)
		{
			AbilitiesToRemove.Add(Spec.Handle);
		}
	}

	// Do in two passes so the removal happens after we have the full list
	for (const FGameplayAbilitySpecHandle AbilityToRemove : AbilitiesToRemove)
	{
		OwnerAbilitySystemComponent->ClearAbility(AbilityToRemove);
	}
}

void UACFCoreComponent::ClearAbilities(TArray<TSubclassOf<UACFGameplayAbility>> Abilities)
{
	if (!OwnerActor || !OwnerAbilitySystemComponent)
	{
		return;
	}

	if (OwnerAbilitySystemComponent->GetOwnerRole() != ROLE_Authority)
	{
		return;
	}

	// Remove any abilities added from a previous call.
	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
	for (const FGameplayAbilitySpec& Spec : OwnerAbilitySystemComponent->GetActivatableAbilities())
	{
		const bool bIsSourceObject = Spec.SourceObject == OwnerActor;
		if (bIsSourceObject && Abilities.Contains(Spec.Ability->GetClass()))
		{
			AbilitiesToRemove.Add(Spec.Handle);
		}
	}

	// Do in two passes so the removal happens after we have the full list
	for (const FGameplayAbilitySpecHandle AbilityToRemove : AbilitiesToRemove)
	{
		OwnerAbilitySystemComponent->ClearAbility(AbilityToRemove);
	}
}

bool UACFCoreComponent::HasAnyMatchingGameplayTags(const FGameplayTagContainer TagContainer) const
{
	if (OwnerAbilitySystemComponent)
	{
		return OwnerAbilitySystemComponent->HasAnyMatchingGameplayTags(TagContainer);
	}

	return false;
}

bool UACFCoreComponent::HasMatchingGameplayTag(const FGameplayTag TagToCheck) const
{
	if (OwnerAbilitySystemComponent)
	{
		return OwnerAbilitySystemComponent->HasMatchingGameplayTag(TagToCheck);
	}

	return false;
}

bool UACFCoreComponent::IsUsingAbilityWithClass(TSubclassOf<UACFGameplayAbility> AbilityClass)
{
	if (!AbilityClass)
	{
		ACF_LOG(Error, TEXT("UACFCoreComponent::IsUsingAbilityByClass() provided AbilityClass is null"))
		return false;
	}

	if (!OwnerAbilitySystemComponent)
	{
		ACF_LOG(Error, TEXT("UACFCoreComponent::IsUsingAbilityByClass() ASC is invalid"))
		return false;
	}

	UACFAbilitySystemComponent* ASC = Cast<UACFAbilitySystemComponent>(OwnerAbilitySystemComponent);
	if (!ASC)
	{
		ACF_LOG(Error, TEXT("UACFCoreComponent::IsUsingAbilityByClass() ASC is not a UACFAbilitySystemComponent"))
		return false;
	}

	return ASC->K2_GetActiveAbilitiesWithClass(AbilityClass).Num() > 0;
}

bool UACFCoreComponent::IsUsingAbilityWithTags(FGameplayTagContainer AbilityTags)
{
	if (!OwnerAbilitySystemComponent)
	{
		ACF_LOG(Error, TEXT("UACFCoreComponent::IsUsingAbilityByClass() ASC is invalid"))
		return false;
	}

	UACFAbilitySystemComponent* ASC = Cast<UACFAbilitySystemComponent>(OwnerAbilitySystemComponent);
	if (!ASC)
	{
		ACF_LOG(Error, TEXT("UACFCoreComponent::IsUsingAbilityByClass() ASC is not a UACFAbilitySystemComponent"))
		return false;
	}

	return ASC->K2_GetActiveAbilitiesWithTags(AbilityTags).Num() > 0;
}

TArray<UACFGameplayAbility*> UACFCoreComponent::GetActiveAbilitiesWithTags(const FGameplayTagContainer GameplayTagContainer) const
{
	TArray<UACFGameplayAbility*> Result;
	if (!OwnerAbilitySystemComponent)
	{
		return Result;
	}

	UACFAbilitySystemComponent* ASC = Cast<UACFAbilitySystemComponent>(OwnerAbilitySystemComponent);
	if (!ASC)
	{
		return Result;
	}

	return ASC->K2_GetActiveAbilitiesWithTags(GameplayTagContainer);
}

bool UACFCoreComponent::ActivateAbilityWithClass(TSubclassOf<UACFGameplayAbility> AbilityClass, UACFGameplayAbility*& ActivatedAbility, bool bAllowRemoteActivation /*= true*/)
{
	if (!OwnerAbilitySystemComponent)
	{
		return false;
	}

	UACFAbilitySystemComponent* ASC = Cast<UACFAbilitySystemComponent>(OwnerAbilitySystemComponent);
	if (!ASC)
	{
		return false;
	}

	return ASC->ActivateAbilityWithClass(AbilityClass, ActivatedAbility, bAllowRemoteActivation);
}

bool UACFCoreComponent::ActivateAbilityWithTags(const FGameplayTagContainer AbilityTags, UACFGameplayAbility*& ActivatedAbility, const bool bAllowRemoteActivation /*= true*/)
{
	if (!OwnerAbilitySystemComponent)
	{
		return false;
	}

	UACFAbilitySystemComponent* ASC = Cast<UACFAbilitySystemComponent>(OwnerAbilitySystemComponent);
	if (!ASC)
	{
		return false;
	}

	return ASC->ActivateAbilityWithTags(AbilityTags, ActivatedAbility, bAllowRemoteActivation);
}

void UACFCoreComponent::SetAttributeValue(FGameplayAttribute Attribute, float NewValue)
{
	if (!OwnerAbilitySystemComponent)
	{
		ACF_LOG(Warning, TEXT("UACFCoreComponent::SetAttributeValue() Owner's AbilitySystemComponent is invalid, abort set attribute."));
		return;
	}

	OwnerAbilitySystemComponent->SetNumericAttributeBase(Attribute, NewValue);
}

void UACFCoreComponent::ClampAttributeValue(FGameplayAttribute Attribute, float MinValue, float MaxValue)
{
	const float CurrentValue = GetAttributeValue(Attribute);
	const float NewValue = FMath::Clamp(CurrentValue, MinValue, MaxValue);
	SetAttributeValue(Attribute, NewValue);
}

void UACFCoreComponent::AdjustAttributeForMaxChange(UACFAttributeSetBase* AttributeSet, const FGameplayAttribute AffectedAttributeProperty, const FGameplayAttribute MaxAttribute, float NewMaxValue)
{
	if (!OwnerAbilitySystemComponent)
	{
		ACF_LOG(Warning, TEXT("UACFCoreComponent::AdjustAttributeForMaxChange() No Owner AbilitySystemComponent, abort AdjustAttributeForMaxChange."));
		return;
	}

	FGameplayAttributeData* AttributeData = AffectedAttributeProperty.GetGameplayAttributeData(AttributeSet);
	if (!AttributeData)
	{
		ACF_LOG(Warning, TEXT("UACFCoreComponent::AdjustAttributeForMaxChange() AttributeData returned by AffectedAttributeProperty.GetGameplayAttributeData() seems to be invalid."))
		return;
	}

	FGameplayAttributeData* MaxAttributeData = MaxAttribute.GetGameplayAttributeData(AttributeSet);
	if (!AttributeData)
	{
		ACF_LOG(Warning, TEXT("UACFCoreComponent::AdjustAttributeForMaxChange() MaxAttributeData returned by MaxAttribute.GetGameplayAttributeData() seems to be invalid."))
		return;
	}

	AttributeSet->AdjustAttributeForMaxChange(*AttributeData, *MaxAttributeData, NewMaxValue, AffectedAttributeProperty);
}

void UACFCoreComponent::PreAttributeChange(UACFAttributeSetBase* AttributeSet, const FGameplayAttribute& Attribute, float NewValue)
{
	OnPreAttributeChange.Broadcast(AttributeSet, Attribute, NewValue);
}

void UACFCoreComponent::PostGameplayEffectExecute(UACFAttributeSetBase* AttributeSet, const FGameplayEffectModCallbackData& Data)
{
	if (!AttributeSet)
	{
		ACF_LOG(Error, TEXT("UACFCoreComponent:PostGameplayEffectExecute() Owner's AttributeSet is invalid"));
		return;
	}

	AActor* SourceActor = nullptr;
	AActor* TargetActor = nullptr;
	AttributeSet->GetSourceAndTargetFromContext<AActor>(Data, SourceActor, TargetActor);

	const FGameplayTagContainer SourceTags = AttributeSet->GetSourceTagsFromContext(Data);
	const FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();

	// Get Minimum Clamp value for this attribute, if it is available
	const float ClampMinimumValue = AttributeSet->GetClampMinimumValueFor(Data.EvaluatedData.Attribute);

	// Compute the delta between old and new, if it is available
	float DeltaValue = 0;
	if (Data.EvaluatedData.ModifierOp == EGameplayModOp::Type::Additive)
	{
		// If this was additive, store the raw delta value to be passed along later
		DeltaValue = Data.EvaluatedData.Magnitude;
	}

	// Delegate any attribute handling to Blueprints
	FACFGameplayEffectExecuteData Payload;
	Payload.AttributeSet = AttributeSet;
	Payload.AbilitySystemComponent = AttributeSet->GetOwningAbilitySystemComponent();
	Payload.DeltaValue = DeltaValue;
	Payload.ClampMinimumValue = ClampMinimumValue;
	OnPostGameplayEffectExecute.Broadcast(Data.EvaluatedData.Attribute, SourceActor, TargetActor, SourceTags, Payload);
}

void UACFCoreComponent::InitializeAttributes()
{
	if (!OwnerActor)
	{
		return;
	}

	if (OwnerActor->GetLocalRole() != ROLE_Authority || !OwnerAbilitySystemComponent)
	{
		return;
	}

	if (!StartupAttributes)
	{
		ACF_LOG(Error, TEXT("Missing DefaultAttributes for %s. Please fill in the pawn's Blueprint."), *GetName());
		return;
	}

	FGameplayEffectContextHandle EffectContext = OwnerAbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	const FGameplayEffectSpecHandle NewHandle = OwnerAbilitySystemComponent->MakeOutgoingSpec(StartupAttributes, 1, EffectContext);
	if (NewHandle.IsValid())
	{
		OwnerAbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), OwnerAbilitySystemComponent);
	}

	bStartupAttributesApplied = true;
}

void UACFCoreComponent::AddStartupAbilities()
{
	if (!OwnerActor)
	{
		return;
	}

	// Grant abilities, but only on the server
	if (OwnerActor->GetLocalRole() != ROLE_Authority || !OwnerAbilitySystemComponent || bStartupAbilitiesGranted)
	{
		return;
	}

	for (TSubclassOf<UGameplayAbility>& StartupAbility : StartupAbilities)
	{
		GrantAbility(StartupAbility);
	}

	bStartupAbilitiesGranted = true;
}

void UACFCoreComponent::RemoveStartupAbilities()
{
	if (!OwnerActor)
	{
		return;
	}

	if (OwnerActor->GetLocalRole() != ROLE_Authority || !OwnerAbilitySystemComponent || !bStartupAbilitiesGranted)
	{
		return;
	}

	// Remove any abilities added from a previous call. This checks the ability is in the startup 'CharacterAbilities' array.
	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
	for (const FGameplayAbilitySpec& Spec : OwnerAbilitySystemComponent->GetActivatableAbilities())
	{
		if ((Spec.SourceObject == this) && StartupAbilities.Contains(Spec.Ability->GetClass()))
		{
			AbilitiesToRemove.Add(Spec.Handle);
		}
	}

	// Do in two passes so the removal happens after we have the full list
	for (const FGameplayAbilitySpecHandle AbilityToRemove : AbilitiesToRemove)
	{
		OwnerAbilitySystemComponent->ClearAbility(AbilityToRemove);
	}

	bStartupAbilitiesGranted = false;
}

void UACFCoreComponent::AddStartupEffects()
{
	if (!OwnerActor)
	{
		return;
	}

	if (OwnerActor->GetLocalRole() != ROLE_Authority || !OwnerAbilitySystemComponent || bStartupEffectsApplied)
	{
		return;
	}

	FGameplayEffectContextHandle EffectContext = OwnerAbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (const TSubclassOf<UGameplayEffect> GameplayEffect : StartupEffects)
	{
		FGameplayEffectSpecHandle NewHandle = OwnerAbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, 1, EffectContext);
		if (NewHandle.IsValid())
		{
			OwnerAbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), OwnerAbilitySystemComponent);
		}
	}

	bStartupEffectsApplied = true;
}

void UACFCoreComponent::OnActiveGameplayEffectAdded(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle)
{
	if (!OwnerAbilitySystemComponent)
	{
		return;
	}

	FGameplayTagContainer AssetTags;
	SpecApplied.GetAllAssetTags(AssetTags);

	FGameplayTagContainer GrantedTags;
	SpecApplied.GetAllGrantedTags(GrantedTags);

	OnGameplayEffectAdded.Broadcast(AssetTags, GrantedTags, ActiveHandle);

	OwnerAbilitySystemComponent->OnGameplayEffectStackChangeDelegate(ActiveHandle)->AddUObject(this, &UACFCoreComponent::OnActiveGameplayEffectStackChanged);
	OwnerAbilitySystemComponent->OnGameplayEffectTimeChangeDelegate(ActiveHandle)->AddUObject(this, &UACFCoreComponent::OnActiveGameplayEffectTimeChanged);

	// Broadcast any GameplayEffect change to HUD
	//BroadcastGameplayEffectAddedToHUD(ActiveHandle, AssetTags, GrantedTags);
}

void UACFCoreComponent::OnActiveGameplayEffectStackChanged(FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 PreviousStackCount)
{
	if (!OwnerAbilitySystemComponent)
	{
		return;
	}

	const FActiveGameplayEffect* GameplayEffect = OwnerAbilitySystemComponent->GetActiveGameplayEffect(ActiveHandle);
	if (!GameplayEffect)
	{
		return;
	}

	FGameplayTagContainer AssetTags;
	GameplayEffect->Spec.GetAllAssetTags(AssetTags);

	FGameplayTagContainer GrantedTags;
	GameplayEffect->Spec.GetAllGrantedTags(GrantedTags);

	OnGameplayEffectStackChange.Broadcast(AssetTags, GrantedTags, ActiveHandle, NewStackCount, PreviousStackCount);
	//BroadcastGameplayEffectStackChangeToHUD(ActiveHandle, AssetTags, GrantedTags, NewStackCount, PreviousStackCount);
}

void UACFCoreComponent::OnActiveGameplayEffectTimeChanged(FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration)
{
	if (!OwnerAbilitySystemComponent)
	{
		return;
	}

	const FActiveGameplayEffect* GameplayEffect = OwnerAbilitySystemComponent->GetActiveGameplayEffect(ActiveHandle);
	if (!GameplayEffect)
	{
		return;
	}

	FGameplayTagContainer AssetTags;
	GameplayEffect->Spec.GetAllAssetTags(AssetTags);

	FGameplayTagContainer GrantedTags;
	GameplayEffect->Spec.GetAllGrantedTags(GrantedTags);

	OnGameplayEffectTimeChange.Broadcast(AssetTags, GrantedTags, ActiveHandle, NewStartTime, NewDuration);
	//BroadcastGameplayEffectTimeChangeToHUD(ActiveHandle, AssetTags, GrantedTags, NewStartTime, NewDuration);
}

void UACFCoreComponent::OnAnyGameplayEffectRemoved(const FActiveGameplayEffect& EffectRemoved)
{
	if (!OwnerAbilitySystemComponent)
	{
		return;
	}

	FGameplayTagContainer AssetTags;
	EffectRemoved.Spec.GetAllAssetTags(AssetTags);

	FGameplayTagContainer GrantedTags;
	EffectRemoved.Spec.GetAllGrantedTags(GrantedTags);

	OnGameplayEffectStackChange.Broadcast(AssetTags, GrantedTags, EffectRemoved.Handle, 0, 1);
	OnGameplayEffectRemoved.Broadcast(AssetTags, GrantedTags, EffectRemoved.Handle);


	// Broadcast any GameplayEffect change to HUD
	//BroadcastGameplayEffectStackChangeToHUD(EffectRemoved.Handle, AssetTags, GrantedTags, 0, 1);
	//BroadcastGameplayEffectRemovedToHUD(EffectRemoved.Handle, AssetTags, GrantedTags);
}

void UACFCoreComponent::OnAnyGameplayTagChanged(FGameplayTag GameplayTag, int32 NewCount) const
{
	OnGameplayTagChange.Broadcast(GameplayTag, NewCount);

	// Broadcast any gameplay tag changes to HUD
	//BroadcastGameplayTagChangeToHUD(GameplayTag, NewCount);
}

void UACFCoreComponent::OnAbilityCommitted(UGameplayAbility* ActivatedAbility)
{
	if (!ActivatedAbility)
	{
		return;
	}

	// Trigger AbilityCommit event
	OnAbilityCommit.Broadcast(ActivatedAbility);

	HandleCooldownOnAbilityCommit(ActivatedAbility);
}

void UACFCoreComponent::OnCooldownGameplayTagChanged(const FGameplayTag GameplayTag, int32 NewCount, FGameplayAbilitySpecHandle AbilitySpecHandle, float Duration)
{
	if (NewCount != 0)
	{
		return;
	}

	if (!OwnerAbilitySystemComponent)
	{
		return;
	}

	FGameplayAbilitySpec* AbilitySpec = OwnerAbilitySystemComponent->FindAbilitySpecFromHandle(AbilitySpecHandle);
	UGameplayAbility* Ability = AbilitySpec->Ability;

	// Broadcast cooldown expiration to HUD
	if (IsValid(Ability))
	{
		OnCooldownEnd.Broadcast(Ability, GameplayTag, Duration);
		//BroadcastCooldownEndToHUD(AbilitySpecHandle, GameplayTag, Duration);
	}

	OwnerAbilitySystemComponent->RegisterGameplayTagEvent(GameplayTag, EGameplayTagEventType::NewOrRemoved).RemoveAll(this);
}

void UACFCoreComponent::HandleCooldownOnAbilityCommit(UGameplayAbility* ActivatedAbility)
{
	if (!OwnerAbilitySystemComponent)
	{
		return;
	}

	if (!IsValid(ActivatedAbility))
	{
		ACF_LOG(Warning, TEXT("UACFCoreComponent::HandleCooldownOnAbilityCommit() Activated ability not valid"))
		return;
	}

	// Figure out cooldown
	UGameplayEffect* CooldownGE = ActivatedAbility->GetCooldownGameplayEffect();
	if (!CooldownGE)
	{
		return;
	}

	if (!ActivatedAbility->IsInstantiated())
	{
		return;
	}

	const FGameplayTagContainer* CooldownTags = ActivatedAbility->GetCooldownTags();
	if (!CooldownTags || CooldownTags->Num() <= 0)
	{
		return;
	}

	FGameplayAbilityActorInfo ActorInfo = ActivatedAbility->GetActorInfo();
	const FGameplayAbilitySpecHandle AbilitySpecHandle = ActivatedAbility->GetCurrentAbilitySpecHandle();

	float TimeRemaining = 0.f;
	float Duration = 0.f;
	ActivatedAbility->GetCooldownTimeRemainingAndDuration(AbilitySpecHandle, &ActorInfo, TimeRemaining, Duration);

	OnCooldownStart.Broadcast(ActivatedAbility, *CooldownTags, TimeRemaining, Duration);

	// Broadcast start of cooldown to HUD
	//BroadcastCooldownStartToHUD(AbilitySpecHandle, *CooldownTags, TimeRemaining, Duration);

	// Register delegate to monitor any change to cooldown gameplay tag to be able to figure out when a cooldown expires
	TArray<FGameplayTag> GameplayTags;
	CooldownTags->GetGameplayTagArray(GameplayTags);
	for (const FGameplayTag GameplayTag : GameplayTags)
	{
		// OwnerAbilitySystemComponent->RegisterGameplayTagEvent(GameplayTag, EGameplayTagEventType::NewOrRemoved).RemoveAll(this);
		OwnerAbilitySystemComponent->RegisterGameplayTagEvent(GameplayTag, EGameplayTagEventType::NewOrRemoved).AddUObject(this, &UACFCoreComponent::OnCooldownGameplayTagChanged, AbilitySpecHandle, Duration);
	}
}

UACFUWHUD* UACFCoreComponent::GetHUDWidget() const
{
	if (!OwnerActor)
	{
		ACF_LOG(Warning, TEXT("UACFCoreComponent::GetHUDWidget() CoreComponent has not been attached to any actors"))
		return nullptr;
	}

	ACharacter* Character = Cast<ACharacter>(OwnerActor);
	if (!Character)
	{
		ACF_LOG(Warning, TEXT("UACFCoreComponent::GetHUDWidget() cannot cast OwnerActor to Character"))
		return nullptr;
	}

	AACFPlayerController* PlayerController = Cast<AACFPlayerController>(Character->GetController());
	if (!PlayerController)
	{
		return nullptr;
	}

	return PlayerController->GetHUDWidget();
}

void UACFCoreComponent::Client_BroadcastAttributeChangeToHUD_Implementation(const FGameplayAttribute Attribute, float NewValue, float OldValue)
{
	UACFUWHUD* HUDWidget = GetHUDWidget();
	if (HUDWidget)
	{
		HUDWidget->HandleAttributeChange(Attribute, NewValue, OldValue);
	}
}

void UACFCoreComponent::Client_BroadcastGameplayEffectStackChangeToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, int32 NewStackCount, int32 OldStackCount)
{
	UACFUWHUD* HUDWidget = GetHUDWidget();
	if (HUDWidget)
	{
		HUDWidget->HandleGameplayEffectStackChange(AssetTags, GrantedTags, ActiveHandle, NewStackCount, OldStackCount);
	}
}

void UACFCoreComponent::Client_BroadcastGameplayEffectTimeChangeToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, float NewStartTime, float NewDuration)
{
	UACFUWHUD* HUDWidget = GetHUDWidget();
	if (HUDWidget)
	{
		HUDWidget->HandleGameplayEffectTimeChange(AssetTags, GrantedTags, ActiveHandle, NewStartTime, NewDuration);
	}
}

void UACFCoreComponent::Client_BroadcastGameplayEffectAddedToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags)
{
	UACFUWHUD* HUDWidget = GetHUDWidget();
	if (HUDWidget)
	{
		HUDWidget->HandleGameplayEffectAdded(AssetTags, GrantedTags, ActiveHandle);
	}
}

void UACFCoreComponent::Client_BroadcastGameplayEffectRemovedToHUD_Implementation(FActiveGameplayEffectHandle ActiveHandle, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags)
{
	UACFUWHUD* HUDWidget = GetHUDWidget();
	if (HUDWidget)
	{
		HUDWidget->HandleGameplayEffectRemoved(AssetTags, GrantedTags, ActiveHandle);
	}
}

void UACFCoreComponent::Client_BroadcastGameplayTagChangeToHUD_Implementation(FGameplayTag GameplayTag, int32 NewCount) const
{
	UACFUWHUD* HUDWidget = GetHUDWidget();
	if (HUDWidget)
	{
		HUDWidget->HandleGameplayTagChange(GameplayTag, NewCount);
	}
}

void UACFCoreComponent::Client_BroadcastCooldownEndToHUD_Implementation(FGameplayAbilitySpecHandle AbilitySpecHandle, FGameplayTag GameplayTag, float Duration)
{
	UACFUWHUD* HUDWidget = GetHUDWidget();
	if (!HUDWidget)
	{
		return;
	}

	if (!OwnerAbilitySystemComponent)
	{
		return;
	}

	FGameplayAbilitySpec* AbilitySpec = OwnerAbilitySystemComponent->FindAbilitySpecFromHandle(AbilitySpecHandle);
	HUDWidget->HandleCooldownEnd(AbilitySpec->Ability, GameplayTag, Duration);
}

void UACFCoreComponent::Client_BroadcastCooldownStartToHUD_Implementation(FGameplayAbilitySpecHandle AbilitySpecHandle, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration)
{
	UACFUWHUD* HUDWidget = GetHUDWidget();
	if (!HUDWidget)
	{
		return;
	}

	if (!OwnerAbilitySystemComponent)
	{
		return;
	}

	FGameplayAbilitySpec* AbilitySpec = OwnerAbilitySystemComponent->FindAbilitySpecFromHandle(AbilitySpecHandle);
	HUDWidget->HandleCooldownStart(AbilitySpec->Ability, CooldownTags, TimeRemaining, Duration);
}

AActor* UACFCoreComponent::GetOwnerActor()
{
	return OwnerActor;
}

UAbilitySystemComponent* UACFCoreComponent::GetOwnerASC()
{
	return OwnerAbilitySystemComponent;
}

template<class TEnum>
FString UACFCoreComponent::EnumToString(const int32 Type)
{
	static UEnum* e = StaticEnum<TEnum>();
	return e->GetNameStringByValue(Type);
}