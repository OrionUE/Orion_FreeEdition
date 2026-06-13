/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionGameModeType.h"
#include "Engine/DataAsset.h"

#include "OrionExperienceLevelMetaDefinition.generated.h"

UCLASS(Abstract)
class ORIONGAME_API UOrionExperienceLevelMetaDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	EOrionGameModeType GameModeType = EOrionGameModeType::None;

public:
	EOrionGameModeType GetGameModeType() const { return GameModeType; }

public:
	UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
	virtual void CreateNewGame(const UObject* WorldContextObject) const;
};
