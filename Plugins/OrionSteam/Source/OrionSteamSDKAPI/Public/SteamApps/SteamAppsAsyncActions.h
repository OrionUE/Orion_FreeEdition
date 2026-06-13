/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SteamAppsTypes.h"
#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamAppsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFileDetailsResultAsyncDelegate, const FFileDetailsResult&, Data, bool, bWasSuccessful);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamAppsAsyncActionGetFileDetails : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnFileDetailsResultAsyncDelegate OnCallback;

public:
	/**
	 * Asynchronously retrieves metadata details about a specific file in the depot manifest.
	 * Currently provides:
	 * The file size in bytes.
	 * The file's SHA1 hash.
	 * The file's flags.
	 *
	 * @param	FileName	The absolute path and name to the file.
	 * @param	Timeout		How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Get File Details"), Category="OrionSteam|Apps|Async")
	static UOrionSteamAppsAsyncActionGetFileDetails* GetFileDetailsAsync(UObject* WorldContextObject, FString FileName, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FFileDetailsResult& Data, bool bWasSuccessful);
};
