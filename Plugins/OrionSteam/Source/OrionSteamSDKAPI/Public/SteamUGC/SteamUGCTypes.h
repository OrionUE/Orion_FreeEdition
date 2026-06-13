/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "SteamUGCTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamUGCContentDescriptorID : uint8
{
	k_EUGCContentDescriptor_NudityOrSexualContent = 0,
	k_EUGCContentDescriptor_FrequentViolenceOrGore,
	k_EUGCContentDescriptor_AdultOnlySexualContent,
	k_EUGCContentDescriptor_GratuitousSexualContent,
	k_EUGCContentDescriptor_AnyMatureContent,
};

// Matching UGC types for queries
UENUM(BlueprintType)
enum class ESteamUGCMatchingUGCType : uint8
{
	Items = 0,
	Items_Mtx = 1,
	Items_ReadyToUse = 2,
	Collections = 3,
	Artwork = 4,
	Videos = 5,
	Screenshots = 6,
	AllGuides = 7,
	WebGuides = 8,
	IntegratedGuides = 9,
	UsableInGame = 10,
	ControllerBindings = 11,
	GameManagedItems = 12,
	All = 13,
};

// Different lists of published UGC for a user.
// If the current logged in user is different than the specified user, then some options may not be allowed.
UENUM(BlueprintType)
enum class ESteamUserUGCList : uint8
{
	Published = 0,
	VotedOn,
	VotedUp,
	VotedDown,
	WillVoteLater,
	Favorited,
	Subscribed,
	UsedOrPlayed,
	Followed,
};

// Sort order for user published UGC lists (defaults to creation order descending)
UENUM(BlueprintType)
enum class ESteamUserUGCListSortOrder : uint8
{
	CreationOrderDesc = 0,
	CreationOrderAsc,
	TitleAsc,
	LastUpdatedDesc,
	SubscriptionDateDesc,
	VoteScoreDesc,
	ForModeration,
};

// Combination of sorting and filtering for queries across all UGC
UENUM(BlueprintType)
enum class ESteamUGCQuery : uint8
{
	k_EUGCQuery_RankedByVote = 0,
	k_EUGCQuery_RankedByPublicationDate = 1,
	k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate = 2,
	k_EUGCQuery_RankedByTrend = 3,
	k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate = 4,
	k_EUGCQuery_CreatedByFriendsRankedByPublicationDate = 5,
	k_EUGCQuery_RankedByNumTimesReported = 6,
	k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = 7,
	k_EUGCQuery_NotYetRated = 8,
	k_EUGCQuery_RankedByTotalVotesAsc = 9,
	k_EUGCQuery_RankedByVotesUp = 10,
	k_EUGCQuery_RankedByTextSearch = 11,
	k_EUGCQuery_RankedByTotalUniqueSubscriptions = 12,
	k_EUGCQuery_RankedByPlaytimeTrend = 13,
	k_EUGCQuery_RankedByTotalPlaytime = 14,
	k_EUGCQuery_RankedByAveragePlaytimeTrend = 15,
	k_EUGCQuery_RankedByLifetimeAveragePlaytime = 16,
	k_EUGCQuery_RankedByPlaytimeSessionsTrend = 17,
	k_EUGCQuery_RankedByLifetimePlaytimeSessions = 18,
	k_EUGCQuery_RankedByLastUpdatedDate = 19,
};

UENUM(BlueprintType)
enum class ESteamItemUpdateStatus : uint8
{
	// The item update handle was invalid, job might be finished, listen too SubmitItemUpdateResult_t
	Invalid = 0,
	// The item update is processing configuration data
	PreparingConfig = 1,
	// The item update is reading and processing content files
	PreparingContent = 2,
	// The item update is uploading content changes to Steam
	UploadingContent = 3,
	// The item update is uploading new preview file image
	UploadingPreviewFile = 4,
	// The item update is committing all changes
	CommittingChanges = 5
};

UENUM(BlueprintType, meta=(Bitflags))
enum class ESteamItemState : uint8
{
	None = 0,			  // item not tracked on client
	Subscribed = 1,		  // current user is subscribed to this item. Not just cached.
	LegacyItem = 2,		  // item was created with ISteamRemoteStorage
	Installed = 4,		  // item is installed and usable (but maybe out of date)
	NeedsUpdate = 8,	  // items needs an update. Either because it's not installed yet or creator updated content
	Downloading = 16,	  // item update is currently downloading
	DownloadPending = 32, // DownloadItem() was called for this item, content isn't available until DownloadItemResult_t is fired
	DisabledLocally = 64, // Item is disabled locally, so it shouldn't be considered subscribed
};

ENUM_CLASS_FLAGS(ESteamItemState);

UENUM(BlueprintType)
enum class ESteamItemStatistic : uint8
{
	NumSubscriptions = 0,
	NumFavorites = 1,
	NumFollowers = 2,
	NumUniqueSubscriptions = 3,
	NumUniqueFavorites = 4,
	NumUniqueFollowers = 5,
	NumUniqueWebsiteViews = 6,
	ReportScore = 7,
	NumSecondsPlayed = 8,
	NumPlaytimeSessions = 9,
	NumComments = 10,
	NumSecondsPlayedDuringTimePeriod = 11,
	NumPlaytimeSessionsDuringTimePeriod = 12,
};

UENUM(BlueprintType)
enum class ESteamItemPreviewType : uint8
{
	// standard image file expected (e.g. jpg, png, gif, etc.)
	Image = 0,
	// video id is stored
	YouTubeVideo = 1,
	// model id is stored
	Sketchfab = 2,
	// standard image file expected - cube map in the layout
	EnvironmentMap_HorizontalCross = 3,
	// standard image file expected
	EnvironmentMap_LatLong = 4,
	// you can specify your own types above this value
	ReservedMax = 254,
};

UENUM(BlueprintType)
enum class ESteamWorkshopFileType : uint8
{
	First = 0,
	Community = 0,				 // normal Workshop item that can be subscribed to
	Microtransaction = 1,		 // Workshop item that is meant to be voted on for the purpose of selling in-game
	Collection = 2,				 // a collection of Workshop or Greenlight items
	Art = 3,					 // artwork
	Video = 4,					 // external video
	Screenshot = 5,				 // screenshot
	Game = 6,					 // Greenlight game entry
	Software = 7,				 // Greenlight software entry
	Concept = 8,				 // Greenlight concept
	WebGuide = 9,				 // Steam web guide
	IntegratedGuide = 10,		 // application integrated guide
	Merch = 11,					 // Workshop merchandise meant to be voted on for the purpose of being sold
	ControllerBinding = 12,		 // Steam Controller bindings
	SteamworksAccessInvite = 13, // internal
	SteamVideo = 14,			 // Steam video
	GameManagedItem = 15,		 // managed completely by the game, not the user, and not shown on the web
	Clip = 16,					 // internal

	// Update Max if you add values.
	Max = 17
};

UENUM(BlueprintType)
enum class ESteamRemoteStoragePublishedFileVisibility : uint8
{
	Public = 0,
	FriendsOnly = 1,
	Private = 2,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FSteamUGCDetails
{
	GENERATED_BODY()

public:
	FSteamUGCDetails()
		: Result(ESteamResult::None), FileType(ESteamWorkshopFileType::Max), CreatorAppID(0), ConsumerAppID(0), TimeCreated(0), TimeUpdated(0), TimeAddedToUserList(0), Visibility(), bBanned(false), bAcceptedForUse(false), bTagsTruncated(false), FileSize(0), PreviewFileSize(0), VotesUp(0), VotesDown(0), Score(0), NumChildren(0), TotalFilesSize(0)
	{
	}

#if WITH_ORIONSTEAM
	FSteamUGCDetails(const SteamUGCDetails_t& data)
		: PublishedFileID(data.m_nPublishedFileId),
		  Result(_SteamResult(data.m_eResult)),
		  FileType(static_cast<ESteamWorkshopFileType>(data.m_eFileType)),
		  CreatorAppID(data.m_nCreatorAppID),
		  ConsumerAppID(data.m_nConsumerAppID),
		  Title(UTF8_TO_TCHAR(data.m_rgchTitle)),
		  Description(UTF8_TO_TCHAR(data.m_rgchDescription)),
		  SteamIDOwner(data.m_ulSteamIDOwner),
		  TimeCreated(data.m_rtimeCreated),
		  TimeUpdated(data.m_rtimeUpdated),
		  TimeAddedToUserList(data.m_rtimeAddedToUserList),
		  Visibility(static_cast<ESteamRemoteStoragePublishedFileVisibility>(data.m_eVisibility)),
		  bBanned(data.m_bBanned),
		  bAcceptedForUse(data.m_bAcceptedForUse),
		  bTagsTruncated(data.m_bTagsTruncated),
		  File(data.m_hFile),
		  PreviewFile(data.m_hPreviewFile),
		  FileName(UTF8_TO_TCHAR(data.m_pchFileName)),
		  FileSize(data.m_nFileSize),
		  PreviewFileSize(data.m_nPreviewFileSize),
		  URL(UTF8_TO_TCHAR(data.m_rgchURL)),
		  VotesUp(data.m_unVotesUp),
		  VotesDown(data.m_unVotesDown),
		  Score(data.m_flScore),
		  NumChildren(data.m_unNumChildren),
		  TotalFilesSize(data.m_ulTotalFilesSize)
	{
		FString m_Tags = UTF8_TO_TCHAR(data.m_rgchTags);
		m_Tags.ParseIntoArray(Tags, TEXT(","), true);
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamWorkshopFileType FileType;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 CreatorAppID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 ConsumerAppID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FString Title;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FString Description;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FSteamID SteamIDOwner;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 TimeCreated;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 TimeUpdated;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 TimeAddedToUserList;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamRemoteStoragePublishedFileVisibility Visibility;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bBanned;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bAcceptedForUse;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bTagsTruncated;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	TArray<FString> Tags;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FSteamUGCHandle File;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FSteamUGCHandle PreviewFile;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FString FileName;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 FileSize;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 PreviewFileSize;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FString URL;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 VotesUp;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 VotesDown;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	float Score;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 NumChildren;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 TotalFilesSize;
};

USTRUCT(BlueprintType)
struct FCreateItemResult
{
	GENERATED_BODY()

public:
	FCreateItemResult()
		: Result(ESteamResult::None),
		  bUserNeedsToAcceptWorkshopLegalAgreement(false)
	{
	}

#if WITH_ORIONSTEAM
	FCreateItemResult(const CreateItemResult_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  PublishedFileID(Data.m_nPublishedFileId),
		  bUserNeedsToAcceptWorkshopLegalAgreement(Data.m_bUserNeedsToAcceptWorkshopLegalAgreement)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bUserNeedsToAcceptWorkshopLegalAgreement;
};

USTRUCT(BlueprintType)
struct FUserFavoriteItemsListChanged
{
	GENERATED_BODY()

public:
	FUserFavoriteItemsListChanged()
		: Result(ESteamResult::None),
		  bWasAddRequest(false)
	{
	}

#if WITH_ORIONSTEAM
	FUserFavoriteItemsListChanged(const UserFavoriteItemsListChanged_t& Data)
		: PublishedFileID(Data.m_nPublishedFileId),
		  Result(_SteamResult(Data.m_eResult)),
		  bWasAddRequest(Data.m_bWasAddRequest)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bWasAddRequest;
};

USTRUCT(BlueprintType)
struct FStartPlaytimeTrackingResult
{
	GENERATED_BODY()

public:
	FStartPlaytimeTrackingResult()
		: Result(ESteamResult::None)
	{
	}

#if WITH_ORIONSTEAM
	FStartPlaytimeTrackingResult(const StartPlaytimeTrackingResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FStopPlaytimeTrackingResult
{
	GENERATED_BODY()

public:
	FStopPlaytimeTrackingResult()
		: Result(ESteamResult::None)
	{
	}

#if WITH_ORIONSTEAM
	FStopPlaytimeTrackingResult(const StopPlaytimeTrackingResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FGetUserItemVoteResult
{
	GENERATED_BODY()

public:
	FGetUserItemVoteResult()
		: Result(ESteamResult::None),
		  bVotedUp(false),
		  bVotedDown(false),
		  bVoteSkipped(false)
	{
	}

#if WITH_ORIONSTEAM
	FGetUserItemVoteResult(const GetUserItemVoteResult_t& Data)
		: PublishedFileID(Data.m_nPublishedFileId),
		  Result(_SteamResult(Data.m_eResult)),
		  bVotedUp(Data.m_bVotedUp),
		  bVotedDown(Data.m_bVotedDown),
		  bVoteSkipped(Data.m_bVoteSkipped)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bVotedUp;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bVotedDown;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bVoteSkipped;
};

USTRUCT(BlueprintType)
struct FSetUserItemVoteResult
{
	GENERATED_BODY()

public:
	FSetUserItemVoteResult()
		: Result(ESteamResult::None),
		  bVoteUp(false)
	{
	}

#if WITH_ORIONSTEAM
	FSetUserItemVoteResult(const SetUserItemVoteResult_t& Data)
		: PublishedFileID(Data.m_nPublishedFileId),
		  Result(_SteamResult(Data.m_eResult)),
		  bVoteUp(Data.m_bVoteUp)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bVoteUp;
};

USTRUCT(BlueprintType)
struct FUGCUpdateHandle
{
	GENERATED_BODY()

public:
	FUGCUpdateHandle()
		: Value(0)
	{
	}

	FUGCUpdateHandle(uint64 InValue)
		: Value(InValue)
	{
	}

public:
	operator uint64()
	{
		return Value;
	}

private:
	uint64 Value;
};

USTRUCT(BlueprintType)
struct FUGCQueryHandle
{
	GENERATED_BODY()

public:
	FUGCQueryHandle()
		: Value(0)
	{
	}

	FUGCQueryHandle(uint64 InValue)
		: Value(InValue)
	{
	}

public:
	operator uint64() const
	{
		return Value;
	}

private:
	uint64 Value;
};

USTRUCT(BlueprintType)
struct FSubmitItemUpdateResult
{
	GENERATED_BODY()

public:
	FSubmitItemUpdateResult()
		: Result(ESteamResult::None),
		  bUserNeedsToAcceptWorkshopLegalAgreement(false)
	{
	}

#if WITH_ORIONSTEAM
	FSubmitItemUpdateResult(const SubmitItemUpdateResult_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  bUserNeedsToAcceptWorkshopLegalAgreement(Data.m_bUserNeedsToAcceptWorkshopLegalAgreement),
		  PublishedFileID(Data.m_nPublishedFileId)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bUserNeedsToAcceptWorkshopLegalAgreement;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
};

USTRUCT(BlueprintType)
struct FItemInstalled
{
	GENERATED_BODY()

public:
	FItemInstalled()
		: AppID(0), ManifestId(0)
	{
	}

#if WITH_ORIONSTEAM
	FItemInstalled(const ItemInstalled_t& Data)
		: AppID(Data.m_unAppID),
		  PublishedFileID(Data.m_nPublishedFileId), ManifestId(Data.m_unManifestID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 AppID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 ManifestId;
};

USTRUCT(BlueprintType)
struct FUserSubscribedItemsListChanged
{
	GENERATED_BODY()

public:
	FUserSubscribedItemsListChanged()
		: AppID(0)
	{
	}

#if WITH_ORIONSTEAM
	FUserSubscribedItemsListChanged(const UserSubscribedItemsListChanged_t& Data)
		: AppID(Data.m_nAppID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 AppID;
};

USTRUCT(BlueprintType)
struct FWorkshopEULAStatus
{
	GENERATED_BODY()

public:
	FWorkshopEULAStatus()
		: Result(ESteamResult::None),
		  AppID(0),
		  Version(0),
		  Action(0),
		  bAccepted(false),
		  bNeedsAction(false)
	{
	}

#if WITH_ORIONSTEAM
	FWorkshopEULAStatus(const WorkshopEULAStatus_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  AppID(Data.m_nAppID),
		  Version(Data.m_unVersion),
		  Action(Data.m_rtAction),
		  bAccepted(Data.m_bAccepted),
		  bNeedsAction(Data.m_bNeedsAction)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 AppID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 Version;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 Action;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bAccepted;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bNeedsAction;
};

USTRUCT(BlueprintType)
struct FDownloadItemResult
{
	GENERATED_BODY()

public:
	FDownloadItemResult()
		: AppID(0),
		  Result(ESteamResult::None)
	{
	}

#if WITH_ORIONSTEAM
	FDownloadItemResult(const DownloadItemResult_t& Data)
		: AppID(Data.m_unAppID),
		  PublishedFileID(Data.m_nPublishedFileId),
		  Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 AppID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FSteamUGCQueryCompleted
{
	GENERATED_BODY()

public:
	FSteamUGCQueryCompleted()
		: Result(ESteamResult::None),
		  NumResultsReturned(0),
		  TotalMatchingResults(0),
		  bCachedData(false)
	{
	}

#if WITH_ORIONSTEAM
	FSteamUGCQueryCompleted(const SteamUGCQueryCompleted_t& Data)
		: Handle(Data.m_handle),
		  Result(_SteamResult(Data.m_eResult)),
		  NumResultsReturned(Data.m_unNumResultsReturned),
		  TotalMatchingResults(Data.m_unTotalMatchingResults),
		  bCachedData(Data.m_bCachedData)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FUGCQueryHandle Handle;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 NumResultsReturned;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 TotalMatchingResults;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	bool bCachedData;
};

USTRUCT(BlueprintType)
struct FAddAppDependencyResult
{
	GENERATED_BODY()

public:
	FAddAppDependencyResult()
		: Result(ESteamResult::None),
		  AppID(0)
	{
	}

#if WITH_ORIONSTEAM
	FAddAppDependencyResult(const AddAppDependencyResult_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  PublishedFileID(Data.m_nPublishedFileId),
		  AppID(Data.m_nAppID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 AppID;
};

USTRUCT(BlueprintType)
struct FRemoveAppDependencyResult
{
	GENERATED_BODY()

public:
	FRemoveAppDependencyResult()
		: Result(ESteamResult::None),
		  AppID(0)
	{
	}

#if WITH_ORIONSTEAM
	FRemoveAppDependencyResult(const RemoveAppDependencyResult_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  PublishedFileID(Data.m_nPublishedFileId),
		  AppID(Data.m_nAppID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 AppID;
};

USTRUCT(BlueprintType)
struct FAddUGCDependencyResult
{
	GENERATED_BODY()

public:
	FAddUGCDependencyResult()
		: Result(ESteamResult::None)
	{
	}

#if WITH_ORIONSTEAM
	FAddUGCDependencyResult(const AddUGCDependencyResult_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  PublishedFileId(Data.m_nPublishedFileId),
		  ChildPublishedFileId(Data.m_nChildPublishedFileId)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileId;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID ChildPublishedFileId;
};

USTRUCT(BlueprintType)
struct FRemoveUGCDependencyResult
{
	GENERATED_BODY()

public:
	FRemoveUGCDependencyResult()
		: Result(ESteamResult::None)
	{
	}

#if WITH_ORIONSTEAM
	FRemoveUGCDependencyResult(const RemoveUGCDependencyResult_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  PublishedFileId(Data.m_nPublishedFileId),
		  ChildPublishedFileId(Data.m_nChildPublishedFileId)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileId;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID ChildPublishedFileId;
};

USTRUCT(BlueprintType)
struct FUGCDeleteItemResult
{
	GENERATED_BODY()

public:
	FUGCDeleteItemResult()
		: Result(ESteamResult::None)
	{
	}

#if WITH_ORIONSTEAM
	FUGCDeleteItemResult(const DeleteItemResult_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  PublishedFileId(Data.m_nPublishedFileId)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileId;
};

USTRUCT(BlueprintType)
struct FGetAppDependenciesResult
{
	GENERATED_BODY()

public:
	FGetAppDependenciesResult()
		: Result(ESteamResult::None),
		  NumAppDependencies(0),
		  TotalNumAppDependencies(0)
	{
	}

#if WITH_ORIONSTEAM
	FGetAppDependenciesResult(const GetAppDependenciesResult_t& Data)
		: Result(_SteamResult(Data.m_eResult)),
		  PublishedFileID(Data.m_nPublishedFileId),
		  NumAppDependencies(Data.m_nNumAppDependencies),
		  TotalNumAppDependencies(Data.m_nTotalNumAppDependencies)
	{
		for (int32 i = 0; i < 32; i++)
		{
			AppIDs.Add(Data.m_rgAppIDs[i]);
		}
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	FPublishedFileID PublishedFileID;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	TArray<int32> AppIDs;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 NumAppDependencies;
	UPROPERTY(BlueprintReadWrite, Category="UGC")
	int32 TotalNumAppDependencies;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAddItemToFavorites, const FUserFavoriteItemsListChanged&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCreateItem, const FCreateItemResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSetUserItemVote, const FSetUserItemVoteResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetUserItemVote, const FGetUserItemVoteResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRemoveItemFromFavorites, const FUserFavoriteItemsListChanged&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSubscribeItem, const FRemoteStorageSubscribePublishedFileResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSendQueryUGCRequest, const FSteamUGCQueryCompleted&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAddAppDependencyResult, const FAddAppDependencyResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRemoveAppDependencyResult, const FRemoveAppDependencyResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAddUGCDependencyResult, const FAddUGCDependencyResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRemoveUGCDependencyResult, const FRemoveUGCDependencyResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDeleteItemResult, const FUGCDeleteItemResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetAppDependenciesResult, const FGetAppDependenciesResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSubmitItemUpdate, const FSubmitItemUpdateResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStartPlaytimeTracking, const FStartPlaytimeTrackingResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStopPlaytimeTracking, const FStopPlaytimeTrackingResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStopPlaytimeTrackingForAllItems, const FStopPlaytimeTrackingResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUnsubscribeItem, const FRemoteStorageSubscribePublishedFileResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetWorkshopEULAStatus, const FWorkshopEULAStatus&, Data, bool, bWasSuccessful);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadItem, const FDownloadItemResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadItemResult, const FDownloadItemResult&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemInstalled, const FItemInstalled&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserSubscribedItemsListChanged, const FUserSubscribedItemsListChanged&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorkshopEULAStatus, const FWorkshopEULAStatus&, Data);
