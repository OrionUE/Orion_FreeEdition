/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameTemplateGameMode.h"

#include "Player/OrionPlayerController.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateGameMode)

AOrionGameTemplateGameMode::AOrionGameTemplateGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ExperienceDefinitionType = TEXT("BBL_ExperienceDefinition");
	PlayerControllerClass = AOrionPlayerController::StaticClass();
	ReplaySpectatorPlayerControllerClass = AOrionReplayPlayerController::StaticClass();
}
