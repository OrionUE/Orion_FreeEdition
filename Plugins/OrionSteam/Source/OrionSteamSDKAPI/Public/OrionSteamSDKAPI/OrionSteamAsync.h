/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OnlineAsyncTaskManager.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OrionSteamSDKAPI/Steam.h"
#include "OrionSteamAsync.generated.h"

class UOrionSteamAsyncAction;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailure);

#if WITH_ORIONSTEAM
class ORIONSTEAMSDKAPI_API FOrionOnlineAsyncTaskSteam : public FOnlineAsyncTaskBasic<class UOrionSteamSubsystem>
{
public:
	FOrionOnlineAsyncTaskSteam(const SteamAPICall_t Handle, float Timeout = 10.f)
		: FOnlineAsyncTaskBasic(nullptr), bInit(false), bTimedOut(false), m_CallbackHandle(Handle), m_AsyncObject(nullptr), m_AsyncTimeout(Timeout)
	{
	}
	FOrionOnlineAsyncTaskSteam(const SteamAPICall_t Handle, UOrionSteamAsyncAction* AsyncObject = nullptr, float Timeout = 10.f)
		: FOnlineAsyncTaskBasic(nullptr), bInit(false), bTimedOut(false), m_CallbackHandle(Handle), m_AsyncObject(AsyncObject), m_AsyncTimeout(Timeout)
	{
	}

	virtual ~FOrionOnlineAsyncTaskSteam() override
	{
	}

private:
	FOrionOnlineAsyncTaskSteam();

public:
	bool bInit;
	bool bTimedOut;
	SteamAPICall_t m_CallbackHandle;
	UOrionSteamAsyncAction* m_AsyncObject;

protected:
	virtual void Tick() override;
	virtual FString ToString() const override
	{
		return "OrionSteamAyncTask";
	}

protected:
	float m_AsyncTimeout = 10.f;
};
#endif

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;
	virtual void SetReadyToDestroy() override;
};
