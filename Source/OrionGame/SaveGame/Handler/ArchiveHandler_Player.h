/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionArchiveHandler.h"
#include "Player/OrionPlayerIDType.h"

class UOrionArchivePlayer;

class FArchiveHandler_Player : public FOrionArchiveHandler
{
public:
	FArchiveHandler_Player(UOrionArchivePlayer* InPlayer, const FString& InUserPlayerID, const FString& InWorldID, const FOrionPlayerID& InPlayerID);

	virtual void AsyncLoadArchive(const FOnArchiveLoaded& OnArchiveLoaded) override;
	virtual bool LoadArchive() override;
	virtual void AsyncSaveArchive() override;
	virtual void DeleteArchive() override;
	virtual bool DoesArchiveExist() override;

public:
	UOrionArchivePlayer* GetPlayer() const { return ArchivePlayer.Get(); };

private:
	TStrongObjectPtr<UOrionArchivePlayer> ArchivePlayer;

	FString SlotName;
	FOrionPlayerID PlayerID;
};
