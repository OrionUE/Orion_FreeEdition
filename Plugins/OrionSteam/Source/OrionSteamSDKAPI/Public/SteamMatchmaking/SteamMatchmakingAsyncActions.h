/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SteamMatchmakingTypes.h"
#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#if UE_VERSION_OLDER_THAN(5, 2, 0)
#include "Public/OnlineSessionSettings.h"
#else
#include "OnlineSessionSettings.h"
#endif
#include "OnlineSubsystemUtils.h"
#if UE_VERSION_NEWER_THAN(5, 2, 1)
#include <FindSessionsCallbackProxy.h>
#else
#include <OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h>
#endif
#include "SteamMatchmakingAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestLobbyListAsyncDelegate, const FLobbyMatchList&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateLobbyAsyncDelegate, const FCreateLobbyData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinLobbyAsyncDelegate, const FJoinLobbyData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJoinOrionSteamSessionDelegate, const FString&, JoinFailReason);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnCreateSessionComplete, FName, bool);

using FOnCreateSessionCompleteDelegate = FOnCreateSessionComplete::FDelegate;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamMatchmakingAsyncActionCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamMatchmakingAsyncActionCreateLobby : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnCreateLobbyAsyncDelegate OnCallback;

public:
	/**
	 * Create a new matchmaking lobby.
	 *
	 * @param	LobbyType		The type and visibility of this lobby. This can be changed later via SetLobbyType.
	 * @param	MaxMembers		The maximum number of players that can join this lobby. This can not be above 250.
	 * @param	Timeout			How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Create Lobby"), Category="OrionSteam|Matchmaking|Async")
	static UOrionSteamMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(UObject* WorldContextObject, ESteamLobbyType LobbyType, int32 MaxMembers, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FCreateLobbyData& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamMatchmakingAsyncActionRequestLobbyList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamMatchmakingAsyncActionRequestLobbyList : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnRequestLobbyListAsyncDelegate OnCallback;

public:
	/**
	 * Get a filtered list of relevant lobbies.
	 * There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.
	 * To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.
	 * If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.
	 * This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.
	 *
	 * @param	Timeout		How long we wait for this function to finish before aborting
	 *
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Request Lobby List"), Category="OrionSteam|Matchmaking|Async")
	static UOrionSteamMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(UObject* WorldContextObject, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FLobbyMatchList& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamMatchmakingAsyncActionJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamMatchmakingAsyncActionJoinLobby : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnJoinLobbyAsyncDelegate OnCallback;

public:
	/**
	 * Joins an existing lobby.
	 * The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.
	 *
	 * @param	SteamIDLobby	The Steam ID of the lobby to join.
	 * @param	Timeout			How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", DisplayName="Join Lobby"), Category="OrionSteam|Matchmaking|Async")
	static UOrionSteamMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(UObject* WorldContextObject, FSteamID SteamIDLobby, float Timeout = 10.f);

public:
	UFUNCTION()
	void HandleCallback(const FJoinLobbyData& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamCreateSessionExtra
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamCreateSessionExtra : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnFailure;

public:
	UOrionSteamCreateSessionExtra();
	/**
	 * Creates an online session
	 *
	 * Automatically detects if we're running a dedicated or listen server
	 *
	 * Listen servers will create a Lobby Session, use "FindOrionSteamSession" to find Listen Servers
	 *
	 *    @param SessionPassword						Optional session password
	 *    @param SessionName							Name of our session
	 *    @param MaxPlayers							Number of public connections
	 *    @param bUseLAN								Used for LAN server
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", AutoCreateRefTerm="SessionSettings", DisplayName="Create Orion Steam Session (Extra)"), Category="OrionSteam|Matchmaking|Async")
	static UOrionSteamCreateSessionExtra* CreateOrionSteamSessionExtra(UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> SessionSettings, FString SessionPassword, FString SessionName = "OrionSteamSession", int32 MaxPlayers = 5, bool bUseLAN = false, bool bAllowInvites = true, bool bUsesPresence = true, bool bAllowJoinViaPresence = true, bool bAllowJoinViaPresenceFriendsOnly = false, bool bAntiCheatProtected = false, bool bUsesStats = false, bool bShouldAdvertise = true, bool bUseLobbiesVoiceChatIfAvailable = true);

protected:
	FOnlineSessionSettings m_SessionSettings;
	IOnlineSessionPtr m_SessionsPtr;

private:
	FOnCreateSessionCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;

public:
	virtual void Activate() override;

public:
	void OnCompleted(FName SessionName, bool bSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamCreateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamCreateSession : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnFailure;

public:
	UOrionSteamCreateSession();
	/**
	 * Creates an online session
	 *
	 * Automatically detects if we're running a dedicated or listen server
	 *
	 * Listen servers will create a Lobby Session, use "FindOrionSteamSession" to find Listen Servers
	 *
	 *    @param SessionPassword						Optional session password
	 *    @param SessionName							Name of our session
	 *    @param MaxPlayers							Number of public connections
	 *    @param bUseLAN								Used for LAN server
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", AutoCreateRefTerm="SessionSettings", DisplayName="Create Orion Steam Session"), Category="OrionSteam|Matchmaking|Async")
	static UOrionSteamCreateSession* CreateOrionSteamSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> SessionSettings, FString SessionPassword, FString SessionName = "OrionSteamSession", int32 MaxPlayers = 5, bool bUseLAN = false, bool bAllowJoinViaPresence = true, bool bAntiCheatProtected = false, bool bShouldAdvertise = true);

protected:
	FOnlineSessionSettings m_SessionSettings;
	IOnlineSessionPtr m_SessionsPtr;

private:
	FOnCreateSessionCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;

public:
	virtual void Activate() override;

public:
	void OnCompleted(FName SessionName, bool bSuccessful);
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindSteamSessionsResultDelegate, const TArray<FSteamSessionResult>&, Results);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamFindSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamFindSession : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FFindSteamSessionsResultDelegate OnCallback;

public:
	UOrionSteamFindSession();
	/**
	 * Find Online Sessions
	 *
	 * This is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info
	 *
	 * @param	MaxResults				Max Number of Servers
	 * @param	ServerType				Search for Listen or Dedicated servers
	 * @param	DistanceFilter			Distance Filter for Listen servers (does not work for dedicated servers)
	 * @param	bUseLAN					Search for LAN servers only
	 * @param	bEmptyServersOnly		Only empty servers
	 * @param	bSecureServersOnly		Only secure servers
	 * @param	Timeout					How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true", AutoCreateRefTerm="SearchSettings"), Category="OrionSteam|Matchmaking|Async")
	static UOrionSteamFindSession* FindOrionSteamSessions(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> SearchSettings, int32 MaxResults = 50, bool bUseLAN = false, ESteamSessionFindType ServerType = ESteamSessionFindType::Listen, ESteamLobbyDistanceFilter DistanceFilter = ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide, bool bEmptyServersOnly = false, bool bSecureServersOnly = false, float Timeout = 10.f);

protected:
	TMap<FString, FSteamSessionSearchSetting> m_AdditionalSearchSettings;
	TSharedPtr<class FOnlineSessionSearchSteam> m_SearchSettings;
	TArray<FBlueprintSessionResult> m_SearchResults;
	int m_MaxResults;
	bool m_bUseLAN;
	ESteamSessionFindType m_ServerType;
	ESteamLobbyDistanceFilter m_DistanceFilter;
	bool m_bEmptyServersOnly;
	bool m_bSecureServersOnly;

private:
	FOnFindSessionsCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;

public:
	virtual void Activate() override;

public:
	UFUNCTION()
	void OnCompleted(bool bSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamJoinSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UCLASS()
class UOrionSteamJoinSession : public UOrionSteamAsyncAction
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FJoinOrionSteamSessionDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
	FJoinOrionSteamSessionDelegate OnFailure;

public:
	UOrionSteamJoinSession();

public:
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", WorldContext="WorldContextObject"), Category="OrionSteam|Matchmaking|Async")
	static UOrionSteamJoinSession* JoinOrionSteamSession(UObject* WorldContextObject, class APlayerController* PlayerController, FString SessionPassword, const FBlueprintSessionResult& SearchResult);

	virtual void Activate() override;
	void OnCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

private:
	TWeakObjectPtr<APlayerController> m_PlayerControllerWeakPtr;
	FOnlineSessionSearchResult m_OnlineSearchResult;
	FOnJoinSessionCompleteDelegate m_Delegate;
	FString m_SessionPassword;
	FDelegateHandle m_DelegateHandle;

	UPROPERTY()
	TObjectPtr<UObject> m_WorldContextObject;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamDestroySession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamDestroySession : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnFailure;

public:
	UOrionSteamDestroySession();
	/**
	 * Destroy an Online Session
	 * @param	Timeout		How long we wait for this function to finish before aborting
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true"), Category="OrionSteam|Matchmaking|Async")
	static UOrionSteamDestroySession* DestroyOrionSteamSession(UObject* WorldContextObject, float Timeout = 10.f);

protected:
	FName SessionName;

private:
	FOnDestroySessionCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;

public:
	virtual void Activate() override;

public:
	UFUNCTION()
	void OnCompleted(FName sessionName, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamUpdateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamUpdateSession : public UOrionSteamAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnCallback;

public:
	UOrionSteamUpdateSession();

	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", BlueprintInternalUseOnly="true"), Category="OrionSteam|Matchmaking|Async", meta=(AutoCreateRefTerm="Settings"))
	static UOrionSteamUpdateSession* UpdateOrionSteamSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> Settings, FString SessionName = "OrionSteamSession", int32 MaxPlayers = 4, bool bAllowJoinInProgress = true);

protected:
	UPROPERTY()
	TObjectPtr<UObject> m_WorldContextObject;

private:
	FOnUpdateSessionCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;

public:
	virtual void Activate() override;

public:
	UFUNCTION()
	void OnCompleted(FName SessionName, bool bWasSuccessful);
};
