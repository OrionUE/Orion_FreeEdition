/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionLoadingScreenManager.h"

#include "GameMapsSettings.h"
#include "ShaderPipelineCache.h"
#include "UI/Frontend/OrionFrontendStateComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionLoadingScreenManager)

bool UOrionLoadingScreenManager::CheckForAnyNeedToShowLoadingScreen(float DeltaTime)
{
	const bool bBaseNeedToShowLoadingScreen = Super::CheckForAnyNeedToShowLoadingScreen(DeltaTime);

	if (bStartUpLoadingScreen)
	{
		SetOrionFrontendStateComponent();

		if (FrontendStateComponent.IsValid())
		{
			return bBaseNeedToShowLoadingScreen || !FrontendStateComponent->GetIsUserInitializationFinished();
		}

		return true;
	}

	return bBaseNeedToShowLoadingScreen;
}

void UOrionLoadingScreenManager::SetIsStartUpLoadingScreen()
{
	bStartUpLoadingScreen = true;

#if WITH_EDITOR
	FString StartUpMapName = GetDefault<UGameMapsSettings>()->GetGameDefaultMap();
	if (StartUpMapName.Contains(GetWorld()->GetName()))
	{
		bStartUpLoadingScreen = true;
	}
	else
	{
		bStartUpLoadingScreen = false;
		return;
	}
#endif

	// 设置PSO编译速度为Background，防止加载视频卡顿
	FShaderPipelineCache::SetBatchMode(FShaderPipelineCache::BatchMode::Background);
}

void UOrionLoadingScreenManager::SetOrionFrontendStateComponent()
{
	if (!FrontendStateComponent.IsValid())
	{
		if (AGameStateBase* GameState = GetWorld()->GetGameState())
		{
			FrontendStateComponent = GameState->FindComponentByClass<UOrionFrontendStateComponent>();
		}
	}
}
