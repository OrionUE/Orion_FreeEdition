/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionArchiveType.h"

DECLARE_DELEGATE_OneParam(FOnArchiveLoaded, bool /*bSuccess*/);

class FOrionArchiveHandler : public TSharedFromThis<FOrionArchiveHandler>
{
public:
	FOrionArchiveHandler(const FString& InUserID, const FString& InWorldID)
		: UserID(InUserID),
		  WorldID(InWorldID)
	{
	}

	virtual ~FOrionArchiveHandler() { }

	virtual void AsyncLoadArchive(const FOnArchiveLoaded& OnArchiveLoaded) = 0;
	virtual bool LoadArchive() = 0;
	virtual void AsyncSaveArchive() = 0;
	virtual void DeleteArchive() = 0;
	virtual bool DoesArchiveExist() = 0;

protected:
	FString UserID;
	FString WorldID;

	EOrionArchiveType ArchiveType;
};
