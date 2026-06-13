/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFriendUtilities.h"

#include "OrionFriendManagerSubsystemBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFriendUtilities)

FString UOrionFriendUtilities::GetPlayerNickname(UObject* WorldContextObject, const FOrionPlayerID& InPlayerID)
{
	if (UWorld* World = WorldContextObject->GetWorld())
	{
		if (UOrionFriendManagerSubsystemBase* FriendManager = World->GetGameInstance()->GetSubsystem<UOrionFriendManagerSubsystemBase>())
		{
			return FriendManager->GetPlayerName(InPlayerID);
		}
	}

	return TEXT("");
}

UTexture2D* UOrionFriendUtilities::GetPlayerSmallAvatar(UObject* WorldContextObject, const FOrionPlayerID& InPlayerID)
{
	if (UWorld* World = WorldContextObject->GetWorld())
	{
		if (UOrionFriendManagerSubsystemBase* FriendManager = World->GetGameInstance()->GetSubsystem<UOrionFriendManagerSubsystemBase>())
		{
			return FriendManager->GetPlayerSmallAvatar(InPlayerID);
		}
	}

	return nullptr;
}

UTexture2D* UOrionFriendUtilities::GetPlayerMediumAvatar(UObject* WorldContextObject, const FOrionPlayerID& InPlayerID)
{
	if (UWorld* World = WorldContextObject->GetWorld())
	{
		if (UOrionFriendManagerSubsystemBase* FriendManager = World->GetGameInstance()->GetSubsystem<UOrionFriendManagerSubsystemBase>())
		{
			return FriendManager->GetPlayerMediumAvatar(InPlayerID);
		}
	}

	return nullptr;
}

UTexture2D* UOrionFriendUtilities::GetPlayerLargeAvatar(UObject* WorldContextObject, const FOrionPlayerID& InPlayerID)
{
	if (UWorld* World = WorldContextObject->GetWorld())
	{
		if (UOrionFriendManagerSubsystemBase* FriendManager = World->GetGameInstance()->GetSubsystem<UOrionFriendManagerSubsystemBase>())
		{
			return FriendManager->GetPlayerLargeAvatar(InPlayerID);
		}
	}

	return nullptr;
}
