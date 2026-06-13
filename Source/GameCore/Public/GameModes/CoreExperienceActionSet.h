/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"
#include "CoreExperienceActionSet.generated.h"

class UGameFeatureAction;

/**
 * 游戏体验动作集合
 */
UCLASS(NotBlueprintable)
class GAMECORE_API UCoreExperienceActionSet : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UCoreExperienceActionSet();

	//~UObject interface
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
	//~End of UObject interface

	//~UPrimaryDataAsset interface
#if WITH_EDITORONLY_DATA
	virtual void UpdateAssetBundleData() override;
#endif
	//~End of UPrimaryDataAsset interface

public:
	// List of Game Feature Plugins this experience wants to have active
	// 启用的GameFeatures（需要激活GameFeature插件中游戏体验的列表，如输入 ShooterCore，则激活该模块）
	UPROPERTY(EditAnywhere, Category="Feature Dependencies")
	TArray<FString> GameFeaturesToEnable;
	
	// List of actions to perform as this experience is loaded/activated/deactivated/unloaded
	// 加载此体验时的操作 loaded/activated/deactivated/unloaded
	UPROPERTY(EditAnywhere, Instanced, Category="Actions to Perform")
	TArray<TObjectPtr<UGameFeatureAction>> Actions;
};
