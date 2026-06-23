/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameplayTagContainer.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameReplaySubsystem.generated.h"

/**
 * 游戏回放子系统
 * Subsystem to handle recording/loading replays
 */
UCLASS()
class GAMEREPLAYSSYSTEM_API UGameReplaySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UGameReplaySubsystem();

	/** Returns true if this platform supports replays at all */
	UFUNCTION(BlueprintCallable, BlueprintPure=false, Category=Replays)
	static bool DoesPlatformSupportReplays();

	/** Returns the trait tag for platform support, used in options */
	static FGameplayTag GetPlatformSupportTraitTag();
};
