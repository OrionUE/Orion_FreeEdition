/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SteamFriendsTypes.h"
#include "OrionSteamSDKAPI/OrionSteamAsync.h"

#if WITH_ORIONSTEAM
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamFriendsDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamFriendsDownloadClanActivityCounts : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnDownloadClanActivityCounts m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamFriendsDownloadClanActivityCounts(const FOnDownloadClanActivityCounts Callback, const TArray<FSteamID> SteamIDClans, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamIDClans(SteamIDClans)
	{
	}

	FOnlineAsyncTaskOrionSteamFriendsDownloadClanActivityCounts(UOrionSteamAsyncAction* AsyncObject, const TArray<FSteamID> SteamIDClans, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamIDClans(SteamIDClans)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamFriendsDownloadClanActivityCounts() = delete;

protected:
	DownloadClanActivityCountsResult_t m_CallbackResults;
	TArray<FSteamID> m_SteamIDClans;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamFriendsDownloadClanActivityCounts"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamRequestClanOfficerList : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRequestClanOfficerList m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamRequestClanOfficerList(const FOnRequestClanOfficerList Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamID(SteamId)
	{
	}

	FOnlineAsyncTaskOrionSteamRequestClanOfficerList(UOrionSteamAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamID(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamRequestClanOfficerList() = delete;

protected:
	ClanOfficerListResponse_t m_CallbackResults;
	FSteamID m_SteamID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamRequestClanOfficerList"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamFriendsJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamFriendsJoinClanChatRoom : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnJoinClanChatRoom m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamFriendsJoinClanChatRoom(FOnJoinClanChatRoom Callback, const FSteamID SteamIdClan, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamIDClan(SteamIdClan)
	{
	}

	FOnlineAsyncTaskOrionSteamFriendsJoinClanChatRoom(UOrionSteamAsyncAction* AsyncObject, const FSteamID SteamIdClan, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamIDClan(SteamIdClan)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamFriendsJoinClanChatRoom() = delete;

protected:
	JoinClanChatRoomCompletionResult_t m_CallbackResults;
	FSteamID m_SteamIDClan;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamFriendsJoinClanChatRoom"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamFriendsEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamFriendsEnumerateFollowingList : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnEnumerateFollowingList m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamFriendsEnumerateFollowingList(const FOnEnumerateFollowingList Callback, const int32 StartIndex, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_StartIndex(StartIndex)
	{
	}

	FOnlineAsyncTaskOrionSteamFriendsEnumerateFollowingList(UOrionSteamAsyncAction* AsyncObject, const int32 StartIndex, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_StartIndex(StartIndex)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamFriendsEnumerateFollowingList() = delete;

protected:
	FriendsEnumerateFollowingList_t m_CallbackResults;
	int32 m_StartIndex;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamFriendsEnumerateFollowingList"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamFriendsIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamFriendsIsFollowing : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnIsFollowing m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamFriendsIsFollowing(FOnIsFollowing Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamID(SteamId)
	{
	}

	FOnlineAsyncTaskOrionSteamFriendsIsFollowing(UOrionSteamAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamID(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamFriendsIsFollowing() = delete;

protected:
	FriendsIsFollowing_t m_CallbackResults;
	FSteamID m_SteamID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamFriendsIsFollowing"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamFriendsGetFollowerCount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamFriendsGetFollowerCount : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnGetFollowerCount m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamFriendsGetFollowerCount(FOnGetFollowerCount Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamID(SteamId)
	{
	}

	FOnlineAsyncTaskOrionSteamFriendsGetFollowerCount(UOrionSteamAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamID(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamFriendsGetFollowerCount() = delete;

protected:
	FriendsGetFollowerCount_t m_CallbackResults;
	FSteamID m_SteamID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamFriendsGetFollowerCount"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamRequestEquippedProfileItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamRequestEquippedProfileItems : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRequestEquippedProfileItems m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamRequestEquippedProfileItems(const FOnRequestEquippedProfileItems Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamId(SteamId)
	{
	}

	FOnlineAsyncTaskOrionSteamRequestEquippedProfileItems(UOrionSteamAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamId(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamRequestEquippedProfileItems() = delete;

protected:
	EquippedProfileItems_t m_CallbackResults;
	FSteamID m_SteamId;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamRequestEquippedProfileItems"));
	}
};
#endif
