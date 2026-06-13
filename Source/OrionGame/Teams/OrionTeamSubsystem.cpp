/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionTeamSubsystem.h"

#include "OrionTeamInfoBase.h"
#include "OrionTeamPrivateInfo.h"
#include "OrionTeamPublicInfo.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionTeamSubsystem)

////////////////////////////////////////////////////////
// FOrionTeamTrackingInfo

void FOrionTeamTrackingInfo::SetTeamInfo(AOrionTeamInfoBase* Info)
{
	if (AOrionTeamPublicInfo* NewPublicInfo = Cast<AOrionTeamPublicInfo>(Info))
	{
		ensure((PublicInfo == nullptr) || (PublicInfo == NewPublicInfo));
		PublicInfo = NewPublicInfo;

		UOrionTeamDisplayAsset* OldDisplayAsset = DisplayAsset;
		DisplayAsset = NewPublicInfo->GetTeamDisplayAsset();

		if (OldDisplayAsset != DisplayAsset)
		{
			OnTeamDisplayAssetChanged.Broadcast(DisplayAsset);
		}
	}
	else if (AOrionTeamPrivateInfo* NewPrivateInfo = Cast<AOrionTeamPrivateInfo>(Info))
	{
		ensure((PrivateInfo == nullptr) || (PrivateInfo == NewPrivateInfo));
		PrivateInfo = NewPrivateInfo;
	}
	else
	{
		checkf(false, TEXT("Expected a public or private team info but got %s"), *GetPathNameSafe(Info))
	}
}

void FOrionTeamTrackingInfo::RemoveTeamInfo(AOrionTeamInfoBase* Info)
{
	if (PublicInfo == Info)
	{
		PublicInfo = nullptr;
	}
	else if (PrivateInfo == Info)
	{
		PrivateInfo = nullptr;
	}
	else
	{
		ensureMsgf(false, TEXT("Expected a previously registered team info but got %s"), *GetPathNameSafe(Info));
	}
}

////////////////////////////////////////////////////////
// UOrionTeamSubsystem

UOrionTeamSubsystem::UOrionTeamSubsystem()
{
}

void UOrionTeamSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UOrionTeamSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

bool UOrionTeamSubsystem::RegisterTeamInfo(AOrionTeamInfoBase* TeamInfo)
{
	if (!ensure(TeamInfo))
	{
		return false;
	}

	const int32 TeamId = TeamInfo->GetTeamId();
	if (ensure(TeamId != INDEX_NONE))
	{
		FOrionTeamTrackingInfo& Entry = TeamMap.FindOrAdd(TeamId);
		Entry.SetTeamInfo(TeamInfo);

		return true;
	}

	return false;
}

bool UOrionTeamSubsystem::UnregisterTeamInfo(AOrionTeamInfoBase* TeamInfo)
{
	if (!ensure(TeamInfo))
	{
		return false;
	}

	const int32 TeamId = TeamInfo->GetTeamId();
	if (ensure(TeamId != INDEX_NONE))
	{
		if (FOrionTeamTrackingInfo* Entry = TeamMap.Find(TeamId))
		{
			Entry->RemoveTeamInfo(TeamInfo);

			return true;
		}
	}

	return false;
}

void UOrionTeamSubsystem::NotifyTeamDisplayAssetModified(UOrionTeamDisplayAsset* ModifiedAsset)
{
	for (const auto& KVP : TeamMap)
	{
		const int32 TeamId = KVP.Key;
		const FOrionTeamTrackingInfo& TrackingInfo = KVP.Value;

		TrackingInfo.OnTeamDisplayAssetChanged.Broadcast(TrackingInfo.DisplayAsset);
	}
}
