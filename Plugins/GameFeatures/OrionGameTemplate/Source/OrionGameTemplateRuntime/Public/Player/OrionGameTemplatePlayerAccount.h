/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Player/OrionPlayerAccount.h"

#include "OrionGameTemplatePlayerAccount.generated.h"

class UOrionGameTemplateArchivePlayer;

UCLASS()
class UOrionGameTemplatePlayerAccount : public UOrionPlayerAccount
{
	GENERATED_BODY()

public:
	UOrionGameTemplatePlayerAccount();

protected:
	virtual void Initialize(const FOrionPlayerID& InPlayerID) override;
	virtual void OnGetPlayerArchive(UOrionArchivePlayer* OutPlayerArchive) override;

protected:
	UPROPERTY()
	TObjectPtr<UOrionGameTemplateArchivePlayer> PlayerArchive;
};
