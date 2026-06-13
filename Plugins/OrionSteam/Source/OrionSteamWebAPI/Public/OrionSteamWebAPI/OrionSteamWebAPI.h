/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Modules/ModuleManager.h"
#include "SteamWebUtilities.h"
#include "OrionSteamWebAPISettings.h"
#include "Containers/Ticker.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Misc/EngineVersionComparison.h"
#include "OrionSteamWebAPI.generated.h"

class FOrionSteamWebAPIModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool Tick(float DeltaTime);

public:
	class FOnlineAsyncTaskManagerOrionSteamWebAPI* OnlineAsyncTaskThreadRunnable;
	class FRunnableThread* OnlineAsyncTaskThread;

private:
#if UE_VERSION_NEWER_THAN(4, 27, 2)
	FTSTicker::FDelegateHandle m_Ticker;
#else
	FDelegateHandle m_Ticker;
#endif
};

UCLASS(abstract)
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPI : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	class FOnlineAsyncTaskManagerOrionSteamWebAPI* OnlineAsyncTaskThreadRunnable;
	class FRunnableThread* OnlineAsyncTaskThread;
	ESubsystemWeb SubsystemType;

public:
	UOrionSteamWebAPISubsystem()
		: SubsystemType(ESubsystemWeb::OrionSteamWebAPI)
	{
	}

public:
	void QueueAsyncTask(class FOnlineAsyncTask* asyncTask);
	void QueueAsyncOutgoingItem(class FOnlineAsyncItem* asyncItem);

protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
};
