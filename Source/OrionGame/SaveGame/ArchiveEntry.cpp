/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "ArchiveEntry.h"

#include "SaveGame/OrionArchiveContext.h"
#include "SaveGame/OrionArchiveLevelMeta.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ArchiveEntry)

//////////////////////////////////////////////////////////////////////////
// UArchiveEntry_Item
//////////////////////////////////////////////////////////////////////////

void UArchiveEntry_Item::Initialize(UOrionArchiveContext* InArchiveContext, const FOnOperationArchiveChanged& InOperationArchiveChangedDelegate)
{
	ArchiveContext = InArchiveContext;
	OnOperationArchiveChanged = InOperationArchiveChangedDelegate;
}

void UArchiveEntry_Item::OperationArchiveChanged()
{
	OnOperationArchiveChanged.ExecuteIfBound(ArchiveContext.Get());
}

bool UArchiveEntry_Item::Equals(const UOrionArchiveContext* OtherArchiveContext) const
{
	return ArchiveContext == OtherArchiveContext;
}

bool UArchiveEntry_Item::IsValid() const
{
	return ArchiveContext.IsValid() && ArchiveContext->IsFinishedGetArchive();
}

FString UArchiveEntry_Item::GetWorldName() const
{
	return ArchiveContext->GetLevelMetaArchive()->GetWorldName();
}

FDateTime UArchiveEntry_Item::GetLastUpdateTime() const
{
	return ArchiveContext->GetLevelMetaArchive()->GetLastUpdateTime();
}

FString UArchiveEntry_Item::GetLastUpdateTimeString() const
{
	FDateTime LastUpdateTime = ArchiveContext->GetLevelMetaArchive()->GetLastUpdateTime();

	// 格式：年/月/日 小时:分钟
	return LastUpdateTime.ToString(TEXT("%Y/%m/%d %H:%M"));
}
