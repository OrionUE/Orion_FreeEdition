/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "UI/Frontend/OrionFrontendStateComponent.h"
#include "UI/LoadingScreen/OrionLoadingScreenManager.h"

#include "BBL_UI.generated.h"

UCLASS(MinimalAPI, Abstract, meta=(DisplayName="Frontend State Component"))
class UBBL_FrontendStateComponent : public UOrionFrontendStateComponent
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI)
class UGameLoadingScreenManager : public UOrionLoadingScreenManager
{
	GENERATED_BODY()
};
