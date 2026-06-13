/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Character/CoreCharacter.h"

#include "OrionCharacter.generated.h"

class UOrionAbilitySystemComponent;

/**
 * AOrionCharacter
 */
UCLASS()
class ORIONGAME_API AOrionCharacter : public ACoreCharacter
{
	GENERATED_BODY()

public:
	AOrionCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void CheckPawnControlInitState() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Orion|Character")
	UOrionAbilitySystemComponent* GetOrionAbilitySystemComponent() const;
};
