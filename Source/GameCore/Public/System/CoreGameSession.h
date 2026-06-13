/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/GameSession.h"

#include "CoreGameSession.generated.h"

UCLASS(Config=Game)
class GAMECORE_API ACoreGameSession : public AGameSession
{
	GENERATED_BODY()

public:
	ACoreGameSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual bool ProcessAutoLogin() override;

	virtual void HandleMatchHasStarted() override;
	virtual void HandleMatchHasEnded() override;
};
