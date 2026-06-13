/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Editor/UnrealEdEngine.h"
#include "OrionEditorEngine.generated.h"

/**
 * 游戏编辑器引擎
 */
UCLASS()
class UOrionEditorEngine : public UUnrealEdEngine
{
	GENERATED_BODY()

public:
	UOrionEditorEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual void Init(IEngineLoop* InEngineLoop) override;
	virtual void Start() override;
	virtual void Tick(float DeltaSeconds, bool bIdleMode) override;

	virtual FGameInstancePIEResult PreCreatePIEInstances(const bool bAnyBlueprintErrors, const bool bStartInSpectatorMode, const float PIEStartTime, const bool bSupportsOnlinePIE, int32& InNumOnlinePIEInstances) override;

private:
	/**
	 * 在首帧执行设置
	 */
	void FirstTickSetup();

	bool bFirstTickSetup = false;
};
