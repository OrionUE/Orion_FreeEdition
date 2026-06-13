/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SteamFriendsTypes.h"
#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamFriendsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadClanActivityCountsAsyncDelegate, const FDownloadClanActivityCountsResult&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestClanOfficerListAsyncDelegate, const FClanOfficerListResponse&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinClanChatRoomAsyncDelegate, const FJoinClanChatRoomCompletionResult&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnumerateFollowingListAsyncDelegate, const FFriendsEnumerateFollowingList&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIsFollowingAsyncDelegate, const FFriendsIsFollowing&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetFollowerCountAsyncDelegate, const FFriendsGetFollowerCount&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestUserInformationAsyncDelegate);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamFriendsAsyncActionDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFriendsAsyncActionDownloadClanActivityCounts : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnDownloadClanActivityCountsAsyncDelegate OnCallback;

public:
	/**
	 * Refresh the Steam Group activity data or get the data from groups other than one that the current
	 * user is a member.
	 * After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.
	 *
	 * @param	SteamIDClans	A list of steam groups to get the updated data for.
	 * @param	Timeout			How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Download Clan Activity Counts"), Category="OrionSteam|Friends|Async")
	static UOrionSteamFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamFriendsAsyncActionRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFriendsAsyncActionRequestClanOfficerList : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnRequestClanOfficerListAsyncDelegate OnCallback;

public:
	/**
	 * Requests information about a Steam group officers (administrators and moderators).
	 * You can only ask about Steam groups that a user is a member of.
	 * This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.
	 *
	 * @param	SteamIDClan		The Steam group to get the officers list for.
	 * @param	Timeout			How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Request Clan Officer List"), Category="OrionSteam|Friends|Async")
	static UOrionSteamFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FClanOfficerListResponse& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamFriendsAsyncActionJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFriendsAsyncActionJoinClanChatRoom : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnJoinClanChatRoomAsyncDelegate OnCallback;

public:
	/**
	 * Allows the user to join Steam group (clan) chats right within the game.
	 * The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.
	 * You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.
	 *
	 * @param	SteamIDClan		The Steam ID of the Steam group to join.
	 * @param	Timeout			How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Join Clan Chat Room"), Category="OrionSteam|Friends|Async")
	static UOrionSteamFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamFriendsAsyncActionEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFriendsAsyncActionEnumerateFollowingList : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnEnumerateFollowingListAsyncDelegate OnCallback;

public:
	/**
	 * Gets the list of users that the current user is following.
	 * You can be following people that are not your friends.
	 * Following allows you to receive updates when the person does things like
	 * post a new piece of content to the Steam Workshop.
	 *
	 * @param	StartIndex	The index to start receiving followers from. This should be 0 on the initial call.
	 * @param	Timeout		How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Enumerate Following List"), Category="OrionSteam|Friends|Async")
	static UOrionSteamFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(UObject* WorldContextObject, int32 StartIndex, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFriendsAsyncActionIsFollowing : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnIsFollowingAsyncDelegate OnCallback;

public:
	/**
	 * Checks if the current user is following the specified user.
	 *
	 * @param	SteamID		The Steam ID of the check if we are following.
	 * @param	Timeout		How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Is Following"), Category="OrionSteam|Friends|Async")
	static UOrionSteamFriendsAsyncActionIsFollowing* IsFollowingAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FFriendsIsFollowing& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamFriendsAsyncActionGetFollowerCount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFriendsAsyncActionGetFollowerCount : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnGetFollowerCountAsyncDelegate OnCallback;

public:
	/**
	 * Gets the number of users following the specified user.
	 *
	 * @param	SteamID		The user to get the follower count for.
	 * @param	Timeout		How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Get Follower Count"), Category="OrionSteam|Friends|Async")
	static UOrionSteamFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FFriendsGetFollowerCount& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamFriendsAsyncActionRequestUserInformation
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFriendsAsyncActionRequestUserInformation : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnRequestUserInformationAsyncDelegate OnCallback;

public:
	/**
	 * Requests the persona name and optionally the avatar of a specified user.
	 *
	 * Using this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.
	 *
	 * @param	Timeout		How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Request User Information (Async)"), Category="OrionSteam|Friends|Async")
	static UOrionSteamFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout = 10.f);

protected:
	FSteamID m_SteamIDUser;
	bool m_bRequireNameOnly;

public:
	virtual void Activate() override;

	UFUNCTION()
	void HandleCallback();

private:
#if WITH_ORIONSTEAM
	STEAM_CALLBACK_MANUAL(UOrionSteamFriendsAsyncActionRequestUserInformation, OnPersonaStateChange, PersonaStateChange_t, OnPersonaStateChangeCallback);
#endif
};
