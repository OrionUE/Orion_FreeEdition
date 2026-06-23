/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonSessionSubsystem.h"

#include "CoreSessionSearchResult.h"
#include "OrionSteamSharedTypes.h"
#include "OrionSteamSDKAPI/SteamTypes.h"

#include "SessionSearchResultSteam.generated.h"

UCLASS()
class ORIONGAME_API USessionSearchResultSteam final : public UCommonSession_SearchResult
{
	GENERATED_BODY()

public:
	virtual FName GetServerName() const override;

	virtual FString GetDescription() const override;

	virtual void GetStringSetting(FName Key, FString& Value, bool& bFoundValue) const override;

	virtual void GetIntSetting(FName Key, int32& Value, bool& bFoundValue) const override;

	virtual int32 GetNumOpenPrivateConnections() const override;

	virtual int32 GetNumOpenPublicConnections() const override;

	virtual int32 GetMaxPublicConnections() const override;

	virtual int32 GetPingInMs() const override;

	UFUNCTION(BlueprintCallable, Category="Session")
	int32 GetCurrentPlayers() const;

public:
	void SetSessionResult(const FCoreSessionResult& InSessionResult);

	UFUNCTION(BlueprintCallable, Category="Session")
	void SetSessionResult(const FSteamSessionResult& InSessionResult);

	UFUNCTION(BlueprintCallable, Category="Session")
	FCoreSessionResult GetSessionResult() const;

	UFUNCTION(BlueprintCallable, Category="Session")
	FBlueprintSessionResult GetBlueprintSessionResult() const;

protected:
	FCoreSessionResult SessionResult;
};
