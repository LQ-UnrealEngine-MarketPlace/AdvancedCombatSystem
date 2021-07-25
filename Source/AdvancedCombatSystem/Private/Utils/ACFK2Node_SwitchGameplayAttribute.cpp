// Fill out your copyright notice in the Description page of Project Settings.


#include "Utils/ACFK2Node_SwitchGameplayAttribute.h"
#include "Core/Libraries/ACFFunctionLibrary.h"
#include <BlueprintActionDatabaseRegistrar.h>
#include <BlueprintNodeSpawner.h>

UACFK2Node_SwitchGameplayAttribute::UACFK2Node_SwitchGameplayAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FunctionName = TEXT("NotEqual_GameplayAttributeGameplayAttribute");
	FunctionClass = UACFFunctionLibrary::StaticClass();
	OrphanedPinSaveMode = ESaveOrphanPinMode::SaveNone;
}

void UACFK2Node_SwitchGameplayAttribute::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	bool bIsDirty = false;
	const FName PropertyName = (PropertyChangedEvent.Property ? PropertyChangedEvent.Property->GetFName() : NAME_None);
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UACFK2Node_SwitchGameplayAttribute, PinAttributes) || PropertyName == FName("AttributeName"))
	{
		bIsDirty = true;
	}

	if (bIsDirty)
	{
		ReconstructNode();
		GetGraph()->NotifyGraphChanged();
	}
	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UACFK2Node_SwitchGameplayAttribute::PostLoad()
{
	Super::PostLoad();
	if (UEdGraphPin* FunctionPin = FindPin(FunctionName))
	{
		FunctionPin->DefaultObject = FunctionClass->GetDefaultObject();
	}
}

FText UACFK2Node_SwitchGameplayAttribute::GetTooltipText() const
{
	return NSLOCTEXT("K2Node", "SwitchGameplayAttribute_ToolTip", "Selects an output that matches the input value");
}

FText UACFK2Node_SwitchGameplayAttribute::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return NSLOCTEXT("K2Node", "Switch_GameplayAttribute", "Switch on Gameplay Attribute");
}

void UACFK2Node_SwitchGameplayAttribute::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	// actions get registered under specific object-keys; the idea is that
	// actions might have to be updated (or deleted) if their object-key is
	// mutated (or removed)... here we use the node's class (so if the node
	// type disappears, then the action should go with it)
	UClass* ActionKey = GetClass();
	// to keep from needlessly instantiating a UBlueprintNodeSpawner, first
	// check to make sure that the registrar is looking for actions of this type
	// (could be regenerating actions for a specific asset, and therefore the
	// registrar would only accept actions corresponding to that asset)
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner != nullptr);

		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

void UACFK2Node_SwitchGameplayAttribute::AddPinToSwitchNode()
{
	const FName PinName = GetUniquePinName();
	PinNames.Add(PinName);

	UEdGraphPin* NewPin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, PinName);
	NewPin->bAllowFriendlyName = false;
	NewPin->PinFriendlyName = FText::FromName(PinName);

	if (PinAttributes.Num() < PinNames.Num())
	{
		PinAttributes.Add(FGameplayAttribute());
	}
}

FName UACFK2Node_SwitchGameplayAttribute::GetUniquePinName()
{
	FName NewPinName;
	int32 Index = 0;
	while (true)
	{
		NewPinName = *FString::Printf(TEXT("Case_%d"), Index++);
		if (!FindPin(NewPinName))
		{
			break;
		}
	}
	return NewPinName;
}

FEdGraphPinType UACFK2Node_SwitchGameplayAttribute::GetPinType() const
{
	FEdGraphPinType PinType;
	PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
	PinType.PinSubCategoryObject = FGameplayAttribute::StaticStruct();
	return PinType;
}

FEdGraphPinType UACFK2Node_SwitchGameplayAttribute::GetInnerCaseType() const
{
	// This type should match the second argument of UACFFunctionLibrary::NotEqual_GameplayAttributeGameplayAttribute !
	FEdGraphPinType PinType;
	PinType.PinCategory = UEdGraphSchema_K2::PC_String;
	return PinType;
}

FName UACFK2Node_SwitchGameplayAttribute::GetPinNameGivenIndex(int32 Index) const
{
	check(Index);
	return PinNames[Index];
}

void UACFK2Node_SwitchGameplayAttribute::CreateFunctionPin()
{
	// Set properties on the function pin
	UEdGraphPin* FunctionPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Object, FunctionClass, FunctionName);
	FunctionPin->bDefaultValueIsReadOnly = true;
	FunctionPin->bNotConnectable = true;
	FunctionPin->bHidden = true;

	UFunction* Function = FindUField<UFunction>(FunctionClass, FunctionName);
	const bool bIsStaticFunc = Function->HasAllFunctionFlags(FUNC_Static);
	if (bIsStaticFunc)
	{
		// Wire up the self to the CDO of the class if it's not us
		if (UBlueprint* BP = GetBlueprint())
		{
			UClass* FunctionOwnerClass = Function->GetOuterUClass();
			if (!BP->SkeletonGeneratedClass->IsChildOf(FunctionOwnerClass))
			{
				FunctionPin->DefaultObject = FunctionOwnerClass->GetDefaultObject();
			}
		}
	}
}

void UACFK2Node_SwitchGameplayAttribute::CreateSelectionPin()
{
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
	UEdGraphPin* Pin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, FGameplayAttribute::StaticStruct(), TEXT("Selection"));
	K2Schema->SetPinAutogeneratedDefaultValueBasedOnType(Pin);
}

void UACFK2Node_SwitchGameplayAttribute::CreateCasePins()
{
	while (PinAttributes.Num() > PinNames.Num())
	{
		const FName PinName = GetUniquePinName();
		PinNames.Add(PinName);
	}

	if (PinNames.Num() > PinAttributes.Num())
	{
		PinNames.SetNum(PinAttributes.Num());
	}

	for (int32 Index = 0; Index < PinAttributes.Num(); ++Index)
	{
		if (PinAttributes[Index].IsValid())
		{
			PinNames[Index] = *PinAttributes[Index].GetName();
		}
		else
		{
			PinNames[Index] = GetUniquePinName();
		}

		UEdGraphPin* NewPin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, PinNames[Index]);
		NewPin->bAllowFriendlyName = false;
		if (PinAttributes[Index].IsValid())
		{
			FGameplayAttribute Attribute = PinAttributes[Index];
			FString FriendlyName = Attribute.GetAttributeSetClass()->GetName() + "." + Attribute.GetName();
			NewPin->PinFriendlyName = FText::FromString(FriendlyName);
		}
		else
		{
			NewPin->PinFriendlyName = FText::FromName(PinNames[Index]);
		}
	}
}

void UACFK2Node_SwitchGameplayAttribute::RemovePin(UEdGraphPin* TargetPin)
{
	checkSlow(TargetPin);

	FName PinName = TargetPin->PinName;
	// Clean-up pin name array
	int32 Index = PinNames.IndexOfByKey(PinName);
	if (Index >= 0)
	{
		if (Index < PinAttributes.Num())
		{
			PinAttributes.RemoveAt(Index);
		}
		PinNames.RemoveAt(Index);
	}
}
