/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OnlineAsyncTaskManager.h"
#include "SteamWebTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OrionSteamWebAPI/OrionSteamWebAPISettings.h"
#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "Interfaces/IHttpRequest.h"
#include <HttpModule.h>
#include "Runtime/Launch/Resources/Version.h"
#include "OrionSteamWebAPIAsync.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOrionSteamWebAPIFailure);

class UOrionSteamWebAPISubsystem;

class FOnlineAsyncTaskOrionSteamWebAPI : public FOnlineAsyncTaskBasic<class UOrionSteamSubsystem>
{
public:
	FOnlineAsyncTaskOrionSteamWebAPI(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString InterfaceName, FString FunctionName, FString APIKey = "", int32 APIVersion = 1, EVerb Verb = EVerb::GET, bool bPublicURL = false)
		: OnCallback(Callback), m_Subsystem(Subsystem), bInit(false), bReceivedCallback(false), m_InterfaceName(InterfaceName), m_FunctionName(FunctionName), m_RequestString(FRequestString(APIKey)), m_APIv(APIVersion), bUsePublicURL(bPublicURL)
	{
		switch (Verb)
		{
		case EVerb::GET:
			m_Verb = TEXT("GET");
			break;
		case EVerb::POST:
			m_Verb = TEXT("POST");
			break;
		case EVerb::PUT:
			m_Verb = TEXT("PUT");
			break;
		}
	}

	virtual ~FOnlineAsyncTaskOrionSteamWebAPI() override
	{
		m_HTTPRequest->OnProcessRequestComplete().Unbind();
	}

public:
	FOnOrionSteamWebAPICallback OnCallback;

protected:
	UOrionSteamWebAPISubsystem* m_Subsystem;
#if !UE_VERSION_OLDER_THAN(4, 26, 0)
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> m_HTTPRequest = FHttpModule::Get().CreateRequest();
#else
	TSharedRef<IHttpRequest> m_HTTPRequest = FHttpModule::Get().CreateRequest();
#endif
	FHttpRequestPtr m_Request;
	FHttpResponsePtr m_Response;
	bool bInit;
	bool bReceivedCallback;

public:
	FString m_InterfaceName;
	FString m_FunctionName;
	FRequestString m_RequestString;
	int32 m_APIv;
	FString m_Verb;
	bool bUsePublicURL;

protected:
	virtual FString ToString() const override
	{
		return "";
	}
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void OnProcessRequestComplete(FHttpRequestPtr request, FHttpResponsePtr response, bool bConnectedSuccessfully);

private:
	float AsyncTimeout = GetDefault<UOrionSteamWebAPISettings>()->AsyncTaskTimeout;
};

class FOnlineAsyncTaskManagerOrionSteamWebAPI : public FOnlineAsyncTaskManager
{
public:
	FOnlineAsyncTaskManagerOrionSteamWebAPI()
		: OrionSteamWebAPISubsystem(nullptr)
	{
	}

	FOnlineAsyncTaskManagerOrionSteamWebAPI(class UOrionSteamWebAPISubsystem* subsystem)
		: OrionSteamWebAPISubsystem(subsystem)
	{
	}

	virtual ~FOnlineAsyncTaskManagerOrionSteamWebAPI() override
	{
	}

private:
	class UOrionSteamWebAPISubsystem* OrionSteamWebAPISubsystem;

protected:
	virtual void OnlineTick() override;
};

UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UOrionSteamWebAPIAsyncAction()
		: m_WorldContextObject(nullptr)
	{
		OnCallbackInternal.BindUFunction(this, "HandleCallback");
	}

	virtual ~UOrionSteamWebAPIAsyncAction() override
	{
		OnCallbackInternal.Unbind();
	}

public:
	UPROPERTY(BlueprintAssignable)
	FOnOrionSteamWebAPIAsyncCallback OnCallback;

	FOnOrionSteamWebAPICallback OnCallbackInternal;

public:
	UFUNCTION()
	virtual void HandleCallback(const FString& data, bool bWasSuccessful);

protected:
	TWeakObjectPtr<UObject> m_WorldContextObject;
};
