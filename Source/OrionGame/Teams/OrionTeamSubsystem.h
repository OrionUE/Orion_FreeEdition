/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "System/CoreWorldSubsystem.h"

#include "OrionTeamSubsystem.generated.h"

class AOrionTeamPrivateInfo;
class AOrionTeamPublicInfo;
class UOrionTeamDisplayAsset;
class AOrionTeamInfoBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOrionTeamDisplayAssetChangedDelegate, const UOrionTeamDisplayAsset*, DisplayAsset);

USTRUCT()
struct FOrionTeamTrackingInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TObjectPtr<AOrionTeamPublicInfo> PublicInfo = nullptr;

	UPROPERTY()
	TObjectPtr<AOrionTeamPrivateInfo> PrivateInfo = nullptr;

	UPROPERTY()
	TObjectPtr<UOrionTeamDisplayAsset> DisplayAsset = nullptr;

	UPROPERTY()
	FOnOrionTeamDisplayAssetChangedDelegate OnTeamDisplayAssetChanged;

public:
	void SetTeamInfo(AOrionTeamInfoBase* Info);
	void RemoveTeamInfo(AOrionTeamInfoBase* Info);
};

UCLASS(Abstract)
class ORIONGAME_API UOrionTeamSubsystem : public UCoreWorldSubsystem
{
	GENERATED_BODY()

public:
	UOrionTeamSubsystem();

	//~USubsystem interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	//~End of USubsystem interface

public:
	/** Tries to register a new team */
	bool RegisterTeamInfo(AOrionTeamInfoBase* TeamInfo);

	/** Tries to unregister a team, will return false if it didn't work */
	bool UnregisterTeamInfo(AOrionTeamInfoBase* TeamInfo);

	/** Called when a team display asset has been edited */
	void NotifyTeamDisplayAssetModified(UOrionTeamDisplayAsset* ModifiedAsset);

private:
	UPROPERTY()
	TMap<int32, FOrionTeamTrackingInfo> TeamMap;
};
