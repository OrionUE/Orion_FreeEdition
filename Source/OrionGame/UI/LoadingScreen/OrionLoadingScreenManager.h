/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "LoadingScreenManager.h"

#include "OrionLoadingScreenManager.generated.h"

class UOrionFrontendStateComponent;

UCLASS(Abstract)
class ORIONGAME_API UOrionLoadingScreenManager : public ULoadingScreenManager
{
	GENERATED_BODY()

private:
	virtual bool CheckForAnyNeedToShowLoadingScreen(float DeltaTime) override;

	virtual void SetIsStartUpLoadingScreen() override;

	void SetOrionFrontendStateComponent();

private:
	TWeakObjectPtr<UOrionFrontendStateComponent> FrontendStateComponent;
};
