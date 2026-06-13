/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"

#include "CoreExperienceDefinition.generated.h"

class UCorePawnData;
class UCoreExperienceActionSet;
class UGameFeatureAction;

/**
 * 游戏体验 - 数据定义
 */
UCLASS(Const, Abstract)
class GAMECORE_API UCoreExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UCoreExperienceDefinition();

	//~UObject interface
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(FDataValidationContext& Context) const override;
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
	UPROPERTY(EditDefaultsOnly, Category="Gameplay")
	TArray<FString> GameFeaturesToEnable;
	
	// TODO: Make soft?
	// The default pawn class to spawn for players
	// 玩家默认生成的Pawn类
	UPROPERTY(EditDefaultsOnly, Category="Gameplay")
	TObjectPtr<const UCorePawnData> DefaultPawnData;

	// List of actions to perform as this experience is loaded/activated/deactivated/unloaded
	// 加载此体验时的操作 loaded/activated/deactivated/unloaded
	UPROPERTY(EditDefaultsOnly, Instanced, Category="Actions")
	TArray<TObjectPtr<UGameFeatureAction>> Actions;

	// List of additional action sets to compose into this experience
	// 加载到此游戏体验的其他操作集
	UPROPERTY(EditDefaultsOnly, Category=Gameplay)
	TArray<TObjectPtr<UCoreExperienceActionSet>> ActionSets;
};
