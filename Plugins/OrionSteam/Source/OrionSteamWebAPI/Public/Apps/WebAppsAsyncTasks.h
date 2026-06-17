/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Interfaces/IHttpResponse.h"
#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBetas
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBetas : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBetas(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 appID)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "GetAppBetas", Key)
	{
		m_RequestString.Add("appid", appID);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBetas() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBetas"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBuilds
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBuilds : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBuilds(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPICallback Callback, FString Key, int32 AppID, int32 Count)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "GetAppBuilds", Key)
	{
		m_RequestString.Add("appid", AppID);
		m_RequestString.Add("count", Count);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBuilds() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppBuilds"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppDepotVersions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppDepotVersions : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppDepotVersions(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPICallback Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "GetAppDepotVersion", Key)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppDepotVersions() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppDepotVersions"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppList : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppList(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPIAppListCallback Callback, FString Key)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, FOnOrionSteamWebAPICallback(), "ISteamApps", "GetAppList", Key, 2, EVerb::GET, true), OnOrionSteamWebAPIAppListCallback(Callback)
	{
	}

private:
	FOnOrionSteamWebAPIAppListCallback OnOrionSteamWebAPIAppListCallback;

	FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppList() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsGetAppList"));
	}

	virtual void Finalize() override
	{
		TArray<FWebAppsGetAppList> Result;

		TSharedPtr<FJsonObject> JsonParsed;
		const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(m_Response->GetContentAsString());

		if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
		{
			const TSharedPtr<FJsonValue> AppListArray = JsonParsed->TryGetField(TEXT("applist"));
			if (AppListArray.IsValid() && AppListArray->Type == EJson::Object)
			{
				for (auto It = AppListArray->AsObject()->Values.CreateConstIterator(); It; ++It)
				{
					if (It->Value->Type == EJson::Array)
					{
						TArray<TSharedPtr<FJsonValue>> ValuesAsArray = It.Value()->AsArray();

						for (const auto& Element : ValuesAsArray)
						{
							if (Element->Type == EJson::Object)
							{
								FString Appid;
								FString ProductName;
								Element->AsObject()->TryGetStringField(TEXT("appid"), Appid);
								Element->AsObject()->TryGetStringField(TEXT("name"), ProductName);

								Result.Add(FWebAppsGetAppList{ Appid, ProductName });
							}
						}
					}
				}
			}
		}

		OnOrionSteamWebAPIAppListCallback.Execute(Result, bWasSuccessful);
	};
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsGetCheatingReports
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsGetCheatingReports : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetCheatingReports(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPICallback Callback, FString Key, int32 AppId, int32 TimeBegin, int32 timeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "GetCheatingReports", Key)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("timebegin", TimeBegin);
		m_RequestString.Add("timeend", timeEnd);
		m_RequestString.Add("includereports", bIncludeReports);
		m_RequestString.Add("includebans", bIncludeBans);
		m_RequestString.Add("reportidmin", ReportidMin);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetCheatingReports() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsGetCheatingReports"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsGetPlayersBanned
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsGetPlayersBanned : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetPlayersBanned(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPICallback Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "GetPlayersBanned", Key)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetPlayersBanned() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsGetPlayersBanned"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsGetServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsGetServerList : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetServerList(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPICallback Callback, FString Key, FString Filter, int32 Limit)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "GetServerList", Key)
	{
		m_RequestString.Add("filter", Filter);
		m_RequestString.Add("limit", Limit);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetServerList() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsGetServerList"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsGetServersAtAddress
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsGetServersAtAddress : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetServersAtAddress(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPICallback Callback, FString Addr)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "GetServersAtAddress", "", 1, EVerb::GET, true)
	{
		m_RequestString.Add("addr", Addr);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsGetServersAtAddress() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsGetServersAtAddress"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsSetAppBuildLive
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsSetAppBuildLive : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsSetAppBuildLive(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPICallback Callback, FString Key, int32 AppId, int32 BuildId, FString BetaKey, FString Description)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "SetAppBuildLive", Key)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("buildid", BuildId);
		m_RequestString.Add("betaKey", BetaKey);
		m_RequestString.Add("description", Description);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsSetAppBuildLive() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsSetAppBuildLive"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAppsUpToDateCheck
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAppsUpToDateCheck : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAppsUpToDateCheck(UOrionSteamWebAPISubsystem* Subsystem, FOnOrionSteamWebAPICallback Callback, int32 AppId, int32 Version)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamApps", "UpToDateCheck")
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("version", Version);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAppsUpToDateCheck() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAppsUpToDateCheck"));
	}
};
