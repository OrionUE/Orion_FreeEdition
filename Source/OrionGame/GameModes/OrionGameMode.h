/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/CoreGameMode.h"

#include "OrionGameMode.generated.h"

/**
 * AOrionGameMode
 * 
 * 游戏模式基类
 *
 * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/tyraebi7rh8t9us8
 */
UCLASS()
class ORIONGAME_API AOrionGameMode : public ACoreGameMode
{
	GENERATED_BODY()

public:
	AOrionGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~AGameModeBase interface
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	virtual void FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation) override;
	virtual bool PlayerCanRestart_Implementation(APlayerController* Player) override;
	//~End of AGameModeBase interface

	/** Agnostic version of PlayerCanRestart that can be used for both player bots and players */
	virtual bool ControllerCanRestart(AController* Controller) override;

protected:
	void HandleMatchAssignmentIfNotExpectingOne();

protected:
	FName ExperienceDefinitionType;
};
