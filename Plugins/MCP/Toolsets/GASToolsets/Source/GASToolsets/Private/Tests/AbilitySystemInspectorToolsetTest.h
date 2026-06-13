// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Tests/AttributeSetToolsetTest.h"

#include "AbilitySystemInspectorToolsetTest.generated.h"

/// Minimal actor used in automation tests.
/// Owns an AbilitySystemComponent and the test attribute set.
UCLASS(Hidden, MinimalAPI)
class AGASToolsetsTestActor : public AActor, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGASToolsetsTestActor()
	{
		AbilitySystemComponent =
			CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	}

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return AbilitySystemComponent;
	}

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
};
