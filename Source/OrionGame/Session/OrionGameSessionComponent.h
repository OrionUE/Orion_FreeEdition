/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Session/CoreSessionComponent.h"

#include "OrionGameSessionComponent.generated.h"

UCLASS()
class ORIONGAME_API UOrionGameSessionComponent : public UCoreSessionComponent
{
	GENERATED_BODY()

public:
	virtual void JoinInvitedSession_Implementation(UCommonSession_SearchResult* InSessionSearchResult) override;
	virtual void QuitSession_Implementation() override;
};
