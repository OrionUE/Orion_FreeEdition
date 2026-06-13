/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "ArchiveEntry.generated.h"

class UOrionArchiveContext;

DECLARE_DELEGATE_OneParam(FOnOperationArchiveChanged, UOrionArchiveContext* /*CurrentSelectArchive*/);

//////////////////////////////////////////////////////////////////////////
// UArchiveEntry
//////////////////////////////////////////////////////////////////////////

UCLASS(Abstract)
class ORIONGAME_API UArchiveEntry : public UObject
{
	GENERATED_BODY()
};

//////////////////////////////////////////////////////////////////////////
// UArchiveEntry_Item
//////////////////////////////////////////////////////////////////////////

UCLASS()
class ORIONGAME_API UArchiveEntry_Item : public UArchiveEntry
{
	GENERATED_BODY()

public:
	virtual void Initialize(UOrionArchiveContext* InArchiveContext, const FOnOperationArchiveChanged& InOperationArchiveChangedDelegate);
	virtual void OperationArchiveChanged();

	bool Equals(const UOrionArchiveContext* OtherArchiveContext) const;
	bool IsValid() const;

public:
	FString GetWorldName() const;
	
	FDateTime GetLastUpdateTime() const;
	FString GetLastUpdateTimeString() const;
	
protected:
	FOnOperationArchiveChanged OnOperationArchiveChanged;
	
	TWeakObjectPtr<UOrionArchiveContext> ArchiveContext;
};

//////////////////////////////////////////////////////////////////////////
// UArchiveEntry_NewGame
//////////////////////////////////////////////////////////////////////////

UCLASS()
class ORIONGAME_API UArchiveEntry_NewGame : public UArchiveEntry
{
	GENERATED_BODY()
};
