/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamUGCTypes.h"

#if WITH_ORIONSTEAM
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTrackingForAllItems : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnStopPlaytimeTrackingForAllItems m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems Callback, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults()
	{
	}

	FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTrackingForAllItems(UOrionSteamAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTrackingForAllItems() = delete;

protected:
	StopPlaytimeTrackingResult_t m_CallbackResults;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTrackingForAllItems"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTracking : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnStopPlaytimeTracking m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTracking(const FOnStopPlaytimeTracking Callback, const TArray<FPublishedFileID> FileIDs, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_FileIDs(FileIDs)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTracking(UOrionSteamAsyncAction* AsyncObject, const TArray<FPublishedFileID> FileIDs, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_FileIDs(FileIDs)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTracking() = delete;

protected:
	StopPlaytimeTrackingResult_t m_CallbackResults;
	TArray<FPublishedFileID> m_FileIDs;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCStopPlaytimeTracking"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCStartPlaytimeTracking : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnStartPlaytimeTracking m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCStartPlaytimeTracking(const FOnStartPlaytimeTracking Callback, const TArray<FPublishedFileID> FileIDs, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_FileIDs(FileIDs)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCStartPlaytimeTracking(UOrionSteamAsyncAction* AsyncObject, const TArray<FPublishedFileID> FileIDs, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_FileIDs(FileIDs)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCStartPlaytimeTracking() = delete;

protected:
	StartPlaytimeTrackingResult_t m_CallbackResults;
	TArray<FPublishedFileID> m_FileIDs;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCStartPlaytimeTracking"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCUnsubscribeItem : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnUnsubscribeItem m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCUnsubscribeItem(const FOnUnsubscribeItem Callback, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCUnsubscribeItem(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_FileID(PublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCUnsubscribeItem() = delete;

protected:
	RemoteStorageSubscribePublishedFileResult_t m_CallbackResults;
	FPublishedFileID m_FileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCUnsubscribeItem"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCSubscribeItem : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnSubscribeItem m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCSubscribeItem(const FOnSubscribeItem Callback, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCSubscribeItem(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_FileID(PublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCSubscribeItem() = delete;

protected:
	RemoteStorageSubscribePublishedFileResult_t m_CallbackResults;
	FPublishedFileID m_FileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCSubscribeItem"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCRemoveItemFromFavorites : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRemoveItemFromFavorites m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCRemoveItemFromFavorites(const FOnRemoveItemFromFavorites Callback, const int32 AppID, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_AppID(AppID), m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCRemoveItemFromFavorites(UOrionSteamAsyncAction* AsyncObject, const int32 AppID, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_AppID(AppID), m_FileID(FileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCRemoveItemFromFavorites() = delete;

protected:
	UserFavoriteItemsListChanged_t m_CallbackResults;
	int32 m_AppID;
	FPublishedFileID m_FileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCRemoveItemFromFavorites"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCAddItemToFavorites : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnAddItemToFavorites m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCAddItemToFavorites(const FOnAddItemToFavorites Callback, const int32 AppID, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_AppID(AppID), m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCAddItemToFavorites(UOrionSteamAsyncAction* AsyncObject, const int32 AppID, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_AppID(AppID), m_FileID(FileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCAddItemToFavorites() = delete;

protected:
	UserFavoriteItemsListChanged_t m_CallbackResults;
	int32 m_AppID;
	FPublishedFileID m_FileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCAddItemToFavorites"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCGetUserItemVote : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnGetUserItemVote m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCGetUserItemVote(const FOnGetUserItemVote Callback, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCGetUserItemVote(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_FileID(FileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCGetUserItemVote() = delete;

protected:
	GetUserItemVoteResult_t m_CallbackResults;
	FPublishedFileID m_FileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCGetUserItemVote"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCSetUserItemVote : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnSetUserItemVote m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCSetUserItemVote(FOnSetUserItemVote Callback, const bool bVoteUp, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), bVoteUp(bVoteUp), m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCSetUserItemVote(UOrionSteamAsyncAction* AsyncObject, const bool bVoteUp, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), bVoteUp(bVoteUp), m_FileID(FileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCSetUserItemVote() = delete;

protected:
	SetUserItemVoteResult_t m_CallbackResults;
	bool bVoteUp;
	FPublishedFileID m_FileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCSetUserItemVote"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCSubmitItemUpdate : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnSubmitItemUpdate m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCSubmitItemUpdate(const FOnSubmitItemUpdate Callback, const FUGCUpdateHandle Handle, const FString ChangeNote, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_UGCUpdateHandle(Handle), m_ChangeNote(ChangeNote)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCSubmitItemUpdate(UOrionSteamAsyncAction* AsyncObject, const FUGCUpdateHandle Handle, const FString ChangeNote, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_UGCUpdateHandle(Handle), m_ChangeNote(ChangeNote)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCSubmitItemUpdate() = delete;

protected:
	SubmitItemUpdateResult_t m_CallbackResults;
	FUGCUpdateHandle m_UGCUpdateHandle;
	FString m_ChangeNote;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCSubmitItemUpdate"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCCreateItem : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnCreateItem m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCCreateItem(FOnCreateItem Callback, const int32 AppID, const ESteamWorkshopFileType FileType, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_ConsumerAppID(AppID), m_FileType(FileType)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCCreateItem(UOrionSteamAsyncAction* AsyncObject, const int32 AppID, const ESteamWorkshopFileType FileType, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_ConsumerAppID(AppID), m_FileType(FileType)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCCreateItem() = delete;

protected:
	CreateItemResult_t m_CallbackResults;
	int32 m_ConsumerAppID;
	ESteamWorkshopFileType m_FileType;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCCreateItem"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCSendQueryUGCRequest : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnSendQueryUGCRequest m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCSendQueryUGCRequest(const FOnSendQueryUGCRequest Callback, const FUGCQueryHandle Handle, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_UGCQueryHandle(Handle)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCSendQueryUGCRequest(UOrionSteamAsyncAction* AsyncObject, const FUGCQueryHandle Handle, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_UGCQueryHandle(Handle)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCSendQueryUGCRequest() = delete;

protected:
	SteamUGCQueryCompleted_t m_CallbackResults;
	FUGCQueryHandle m_UGCQueryHandle;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCSendQueryUGCRequest"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCAddAppDependency : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnAddAppDependencyResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCAddAppDependency(const FOnAddAppDependencyResult Callback, const FPublishedFileID PublishedFileID, const int32 AppID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_PublishedFileID(PublishedFileID), m_AppID(AppID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCAddAppDependency(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, const int32 AppID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_PublishedFileID(PublishedFileID), m_AppID(AppID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCAddAppDependency() = delete;

protected:
	AddAppDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	int32 m_AppID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCAddAppDependency"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCRemoveAppDependency : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRemoveAppDependencyResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCRemoveAppDependency(const FOnRemoveAppDependencyResult Callback, const FPublishedFileID PublishedFileID, const int32 AppID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_PublishedFileID(PublishedFileID), m_AppID(AppID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCRemoveAppDependency(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, const int32 AppID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_PublishedFileID(PublishedFileID), m_AppID(AppID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCRemoveAppDependency() = delete;

protected:
	RemoveAppDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	int32 m_AppID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCRemoveAppDependency"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCAddUGCDependency : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnAddUGCDependencyResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCAddUGCDependency(const FOnAddUGCDependencyResult Callback, const FPublishedFileID PublishedFileId, const FPublishedFileID ChildPublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_PublishedFileID(PublishedFileId), m_ChildPublishedFileID(ChildPublishedFileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCAddUGCDependency(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID PublishedFileId, const FPublishedFileID ChildPublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_PublishedFileID(PublishedFileId), m_ChildPublishedFileID(ChildPublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCAddUGCDependency() = delete;

protected:
	AddUGCDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	FPublishedFileID m_ChildPublishedFileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCAddUGCDependency"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCRemoveUGCDependency : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRemoveUGCDependencyResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCRemoveUGCDependency(const FOnRemoveUGCDependencyResult Callback, const FPublishedFileID ParentPublishedFileId, const FPublishedFileID ChildPublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_ParentPublishedFileID(ParentPublishedFileId), m_ChildPublishedFileID(ChildPublishedFileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCRemoveUGCDependency(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID ParentPublishedFileId, const FPublishedFileID ChildPublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_ParentPublishedFileID(ParentPublishedFileId), m_ChildPublishedFileID(ChildPublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCRemoveUGCDependency() = delete;

protected:
	RemoveUGCDependencyResult_t m_CallbackResults;
	FPublishedFileID m_ParentPublishedFileID;
	FPublishedFileID m_ChildPublishedFileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCRemoveUGCDependency"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCDeleteItem : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnDeleteItemResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCDeleteItem(const FOnDeleteItemResult Callback, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_PublishedFileID(PublishedFileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCDeleteItem(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_PublishedFileID(PublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCDeleteItem() = delete;

protected:
	DeleteItemResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCDeleteItem"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCGetWorkshopEULAStatus : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnGetWorkshopEULAStatus m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCGetWorkshopEULAStatus(const FOnGetWorkshopEULAStatus Callback, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults()
	{
	}

	FOnlineAsyncTaskOrionSteamUGCGetWorkshopEULAStatus(UOrionSteamAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCGetWorkshopEULAStatus() = delete;

protected:
	WorkshopEULAStatus_t m_CallbackResults;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCGetWorkshopEULAStatus"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCGetAppDependencies : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnGetAppDependenciesResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCGetAppDependencies(const FOnGetAppDependenciesResult Callback, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_PublishedFileID(PublishedFileID)
	{
	}

	FOnlineAsyncTaskOrionSteamUGCGetAppDependencies(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_PublishedFileID(PublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUGCGetAppDependencies() = delete;

protected:
	GetAppDependenciesResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCGetAppDependencies"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUGCDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUGCDownloadItem : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnDownloadItem m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUGCDownloadItem(const FOnDownloadItem Callback, const FPublishedFileID PublishedFileID, const bool bHighPriority, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_PublishedFileID(PublishedFileID), bHighPriority(bHighPriority)
	{
		OnDownloadItemResultCallback.Register(this, &FOnlineAsyncTaskOrionSteamUGCDownloadItem::OnDownloadItemResult);
	}

	FOnlineAsyncTaskOrionSteamUGCDownloadItem(UOrionSteamAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, const bool bHighPriority, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_PublishedFileID(PublishedFileID), bHighPriority(bHighPriority)
	{
		OnDownloadItemResultCallback.Register(this, &FOnlineAsyncTaskOrionSteamUGCDownloadItem::OnDownloadItemResult);
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

	virtual ~FOnlineAsyncTaskOrionSteamUGCDownloadItem() override
	{
		OnDownloadItemResultCallback.Unregister();
	}

private:
	FOnlineAsyncTaskOrionSteamUGCDownloadItem() = delete;

protected:
	DownloadItemResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	bool bHighPriority;

protected:
#if WITH_ORIONSTEAM
	STEAM_CALLBACK_MANUAL(FOnlineAsyncTaskOrionSteamUGCDownloadItem, OnDownloadItemResult, DownloadItemResult_t, OnDownloadItemResultCallback);
#endif
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUGCDownloadItem"));
	}
};
#endif
