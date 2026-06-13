/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionArchiveHandler.h"

class UOrionSettingsWorldOption;

class FArchiveHandler_WorldOption : public FOrionArchiveHandler
{
public:
	FArchiveHandler_WorldOption(UOrionSettingsWorldOption* InWorldOption, const FString& InUserPlayerID, const FString& InWorldID);

	virtual void AsyncLoadArchive(const FOnArchiveLoaded& OnArchiveLoaded) override;
	virtual bool LoadArchive() override;
	virtual void AsyncSaveArchive() override;
	virtual void DeleteArchive() override;
	virtual bool DoesArchiveExist() override;

public:
	UOrionSettingsWorldOption* GetWorldOption() const { return ArchiveWorldOption.Get(); }

private:
	TStrongObjectPtr<UOrionSettingsWorldOption> ArchiveWorldOption;

	FString SlotName;
};
