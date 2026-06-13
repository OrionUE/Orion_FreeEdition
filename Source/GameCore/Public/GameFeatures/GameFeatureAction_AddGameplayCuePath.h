/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFeatureAction.h"

#include "GameFeatureAction_AddGameplayCuePath.generated.h"

/**
 * GameFeatureAction - 添加GameplayCues文件路径
 * GameFeatureAction responsible for adding gameplay cue paths to the gameplay cue manager.
 */
UCLASS(MinimalAPI, meta=(DisplayName="Add Gameplay Cue Path"))
class UGameFeatureAction_AddGameplayCuePath final : public UGameFeatureAction
{
	GENERATED_BODY()

public:
	UGameFeatureAction_AddGameplayCuePath();

	//~UObject interface
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
	//~End of UObject interface

	const TArray<FDirectoryPath>& GetDirectoryPathsToAdd() const { return DirectoryPathsToAdd; }

private:
	UPROPERTY(EditAnywhere, Category="GameFeature|GameplayCues", meta=(RelativeToGameContentDir, LongPackageName))
	TArray<FDirectoryPath> DirectoryPathsToAdd;
};
