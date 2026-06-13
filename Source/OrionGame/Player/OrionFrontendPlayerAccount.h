/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionPlayerAccount.h"

#include "OrionFrontendPlayerAccount.generated.h"

UCLASS()
class ORIONGAME_API UOrionFrontendPlayerAccount : public UOrionPlayerAccount
{
	GENERATED_BODY()

public:
	UOrionFrontendPlayerAccount();

protected:
	virtual void Initialize(const FOrionPlayerID& InPlayerID) override;
	virtual void OnGetPlayerArchive(UOrionArchivePlayer* OutPlayerArchive) override;
};
