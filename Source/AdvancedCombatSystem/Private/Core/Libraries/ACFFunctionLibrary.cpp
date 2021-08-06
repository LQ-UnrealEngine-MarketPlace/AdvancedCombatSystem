// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Libraries/ACFFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"

UACFAbilitySystemComponent* UACFFunctionLibrary::GetAbilitySystemComponentFromActor(const AActor* Actor)
{
	return UACFAbilitySystemComponent::GetAbilitySystemComponentFromActor(Actor);
}

UACFAbilityComboManagerComponent* UACFFunctionLibrary::GetComboManagerComponentFromActor(const AActor* Actor)
{
	if (!Actor)
	{
		return nullptr;
	}

	const IACFActorInterface* ActorInterface = Cast<IACFActorInterface>(Actor);
	if (ActorInterface)
	{
		return ActorInterface->GetAbilityComboManagerComponent();
	}

	ACF_LOG(Warning, TEXT("UACFFunctionLibrary::GetComboManagerComponentFromActor: FindComponentByClass() on %s"), *Actor->GetName())
	return Cast<UACFAbilityComboManagerComponent>(Actor->FindComponentByClass(UACFAbilityComboManagerComponent::StaticClass()));
}

UACFCoreComponent* UACFFunctionLibrary::GetCoreComponentFromActor(const AActor* Actor)
{
	if (!Actor)
	{
		return nullptr;
	}

	const IACFActorInterface* ActorInterface = Cast<IACFActorInterface>(Actor);
	if (ActorInterface)
	{
		return ActorInterface->GetCoreComponent();
	}

	ACF_LOG(Warning, TEXT("UACFFunctionLibrary::GetCoreComponentFromActor: FindComponentByClass() on %s"), *Actor->GetName())
	return Cast<UACFCoreComponent>(Actor->FindComponentByClass(UACFCoreComponent::StaticClass()));
}

UACFAbilityQueueComponent* UACFFunctionLibrary::GetAbilityQueueComponentFromActor(const AActor* Actor)
{
	if (!Actor)
	{
		return nullptr;
	}

	const IACFActorInterface* ActorInterface = Cast<IACFActorInterface>(Actor);
	if (ActorInterface)
	{
		return ActorInterface->GetAbilityQueueComponent();
	}

	ACF_LOG(Warning, TEXT("UACFFunctionLibrary::GetAbilityQueueComponentFromActor: FindComponentByClass() on %s"), *Actor->GetName())
	return Cast<UACFAbilityQueueComponent>(Actor->FindComponentByClass(UACFAbilityQueueComponent::StaticClass()));
}

UACFLocomotionComponent* UACFFunctionLibrary::GetLocomotionComponentFromActor(const AActor* Actor)
{
	if (!Actor)
	{
		return nullptr;
	}

	const IACFActorInterface* ActorInterface = Cast<IACFActorInterface>(Actor);
	if (ActorInterface)
	{
		return ActorInterface->GetLocomotionComponent();
	}

	ACF_LOG(Warning, TEXT("UACFFunctionLibrary::GetLocomotionComponent: FindComponentByClass: on %s"), *Actor->GetName())
	return Cast<UACFLocomotionComponent>(Actor->FindComponentByClass(UACFLocomotionComponent::StaticClass()));
}

bool UACFFunctionLibrary::AddLooseGameplayTagsToActor(AActor* Actor, const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor);

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->AddLooseGameplayTags(GameplayTags);
		return true;
	}

	return false;
}

bool UACFFunctionLibrary::RemoveLooseGameplayTagsFromActor(AActor* Actor, const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor);

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->RemoveLooseGameplayTags(GameplayTags);
		return true;
	}

	return false;
}

bool UACFFunctionLibrary::HasMatchingGameplayTag(AActor* Actor, const FGameplayTag GameplayTag)
{
	UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor);

	if (!AbilitySystemComponent)
	{
		return false;
	}

	return AbilitySystemComponent->HasMatchingGameplayTag(GameplayTag);
}

bool UACFFunctionLibrary::HasAnyMatchingGameplayTags(AActor* Actor, const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor);

	if (!AbilitySystemComponent)
	{
		return false;
	}

	return AbilitySystemComponent->HasAnyMatchingGameplayTags(GameplayTags);
}

FString UACFFunctionLibrary::GetDebugStringFromAttribute(FGameplayAttribute Attribute)
{
	return Attribute.GetName();
}

void UACFFunctionLibrary::GetAllAttributes(TSubclassOf<UAttributeSet> AttributeSetClass, TArray<FGameplayAttribute>& OutAttributes)
{
	UClass* Class = AttributeSetClass.Get();
	for (TFieldIterator<FProperty> It(Class); It; ++It)
	{
		if (FFloatProperty* FloatProperty = CastField<FFloatProperty>(*It))
		{
			OutAttributes.Push(FGameplayAttribute(FloatProperty));
		}
		else if (FGameplayAttribute::IsGameplayAttributeDataProperty(*It))
		{
			OutAttributes.Push(FGameplayAttribute(*It));
		}
	}
}

bool UACFFunctionLibrary::NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute A, FString B)
{
	return A.GetName() != B;
}

void UACFFunctionLibrary::ExecuteGameplayCueForActor(AActor* Actor, FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context)
{
	UACFAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActor(Actor);
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->ExecuteGameplayCue(GameplayCueTag, Context);
	}
}

void UACFFunctionLibrary::ExecuteGameplayCueWithParams(AActor* Actor, FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters)
{
	UACFAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActor(Actor);
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->ExecuteGameplayCue(GameplayCueTag, GameplayCueParameters);
	}
}

void UACFFunctionLibrary::AddGameplayCue(AActor* Actor, FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context)
{
	UACFAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActor(Actor);
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->AddGameplayCue(GameplayCueTag, Context);
	}
}

void UACFFunctionLibrary::AddGameplayCueWithParams(AActor* Actor, FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter)
{
	UACFAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActor(Actor);
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->AddGameplayCue(GameplayCueTag, GameplayCueParameter);
	}
}

void UACFFunctionLibrary::RemoveGameplayCue(AActor* Actor, FGameplayTag GameplayCueTag)
{
	UACFAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActor(Actor);
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->RemoveGameplayCue(GameplayCueTag);
	}
}

void UACFFunctionLibrary::RemoveAllGameplayCues(AActor* Actor)
{
	UACFAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActor(Actor);
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->RemoveAllGameplayCues();
	}
}
