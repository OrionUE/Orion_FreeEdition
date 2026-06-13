/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "OrionSteamSDKAPI/OrionSteamUtilities.h"
#include "OrionSteamSDKAPIModule.generated.h"

class UOrionSteamMatchmakingServersAsyncActionRequestServerList;
class UOrionSteamMatchmakingServersAsyncActionPingServer;
class UOrionSteamMatchmakingServersAsyncActionServerRules;
class FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer;
class FOnlineAsyncTaskOrionSteamMatchmakingServersServerList;
class FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules;

DECLARE_LOG_CATEGORY_EXTERN(LogOrionSteam, Log, All);

class ORIONSTEAMSDKAPI_API FOrionSteamSDKAPIModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

public:
	static FString s_PluginName;
	static FString s_PluginVersion;
};

UCLASS(abstract)
class ORIONSTEAMSDKAPI_API UOrionSteam : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamInterface : public UObject
{
	GENERATED_BODY()
public:
	UOrionSteamInterface() {};
	virtual ~UOrionSteamInterface() override {};

	void QueueAsyncTask(class FOnlineAsyncTask* AsyncTask);
};

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamSubsystem : public UObject
{
	GENERATED_BODY()

	friend class UOrionSteamMatchmakingServersAsyncActionRequestServerList;
	friend class UOrionSteamMatchmakingServersAsyncActionPingServer;
	friend class UOrionSteamMatchmakingServersAsyncActionServerRules;
	friend class FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer;
	friend class FOnlineAsyncTaskOrionSteamMatchmakingServersServerList;
	friend class FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules;

public:
	UOrionSteamSubsystem() {};
	virtual ~UOrionSteamSubsystem() override {};

	void QueueAsyncTask(FOnlineAsyncTask* AsyncTask);

	static UOrionSteamSubsystem* Get();

protected:
	FOnlineAsyncTaskOrionSteamMatchmakingServersServerList* CurrentMatchmakingServersServerList;
	FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer* CurrentMatchmakingServersPingServer;
	FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules* CurrentMatchmakingServersServerRules;

private:
	bool bInitialized = false;
};
