/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/CoreExperienceUserFacingDefinition.h"

#include "OrionExperienceUserFacingDefinition.generated.h"

/**
 * Description of settings used to start a new session
 */
UCLASS(BlueprintType)
class ORIONGAME_API UOrionExperienceUserFacingDefinition : public UCoreExperienceUserFacingDefinition
{
	GENERATED_BODY()

public:
	/** If true, a replay will be recorded of the game */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Experience")
	bool bRecordReplay = false;

	/** Max number of players for this session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Experience")
	int32 MaxPlayerCount = 5;

public:
	virtual UCommonSession_HostSessionRequest* CreateHostingRequest(const UObject* WorldContextObject) const override;
};
