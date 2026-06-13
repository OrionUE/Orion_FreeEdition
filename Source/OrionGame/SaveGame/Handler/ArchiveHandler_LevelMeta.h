/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionArchiveHandler.h"

class UOrionArchiveLevelMeta;

class FArchiveHandler_LevelMeta : public FOrionArchiveHandler
{
public:
	FArchiveHandler_LevelMeta(UOrionArchiveLevelMeta* InLevelMeta, const FString& InUserPlayerID, const FString& InWorldID);

	virtual void AsyncLoadArchive(const FOnArchiveLoaded& OnArchiveLoaded) override;
	virtual bool LoadArchive() override;
	virtual void AsyncSaveArchive() override;
	virtual void DeleteArchive() override;
	virtual bool DoesArchiveExist() override;

public:
	UOrionArchiveLevelMeta* GetLevelMeta() const { return ArchiveLevelMeta.Get(); }

private:
	TStrongObjectPtr<UOrionArchiveLevelMeta> ArchiveLevelMeta;

	FString SlotName;
};
