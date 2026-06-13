/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSharedTypes.h"
#include "OrionOnlineSubsystemSteamUtilities.generated.h"

#if WITH_ORIONSTEAM
namespace OrionSteam
{
	FString SteamResultString(EResult Result);
	FString SteamChatMemberStateChangeString(EChatMemberStateChange StateChange);
	FString SteamChatRoomEnterResponseString(EChatRoomEnterResponse Response);
	FString SteamMatchMakingServerResponseString(EMatchMakingServerResponse Response);
	FString SteamP2PConnectError(EP2PSessionError InError);
	FString SteamVoiceResult(EVoiceResult Result);
	EOnlineServerConnectionStatus::Type SteamConnectionResult(const EResult Result);
}
#endif

UCLASS(abstract)
class ORIONONLINESUBSYSTEMSTEAM_API UOrionOnlineSteamSubsystemUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"), Category="OrionSteam|Utilities")
	static bool SendSessionInviteToFriend(int32 LocalUserNum, const FString& FriendSteamId);

	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"), Category="OrionSteam|Utilities")
	static void GetSessionSettings(UObject* WorldContextObject, TArray<FSteamSessionSetting>& SessionSettings, FString& SessionName, int32& MaxPlayers, bool& bAllowInvites, bool& bUsesPresence, bool& bAllowJoinInProgress, bool& bAllowJoinViaPresence, bool& bAllowJoinViaPresenceFriendsOnly, bool& bAntiCheatProtected, bool& bUsesStats, bool& bShouldAdvertise, bool& bUseLobbiesIfAvailable, bool& bUseLobbiesVoiceChatIfAvailable);

	UFUNCTION(BlueprintCallable, Category="OrionSteam|Utilities")
	static void GetExtraSessionSettings(TArray<FSteamSessionSetting>& SessionSettings);

	UFUNCTION(BlueprintCallable, Category="OrionSteam|Utilities")
	static void FindFriendSessions();

	static TArray<FSteamSessionSetting> GetCurrentSessionSetings();
};
