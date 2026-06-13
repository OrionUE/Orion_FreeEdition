/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionArchivePlayer.h"

#include "Handler/ArchiveHandler_Player.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionArchivePlayer)

TSharedRef<FArchiveHandler_Player> UOrionArchivePlayer::CreatePlayer(const FString& InUserID, const FString& InWorldID, const FOrionPlayerID& InPlayerID, const TSubclassOf<UOrionArchivePlayer>& InPlayerArchiveClass)
{
	UOrionArchivePlayer* ArchivePlayer = NewObject<UOrionArchivePlayer>(GetTransientPackage(), InPlayerArchiveClass);

	TSharedRef<FArchiveHandler_Player> NewPlayerHandler = MakeShared<FArchiveHandler_Player>(FArchiveHandler_Player(ArchivePlayer, InUserID, InWorldID, InPlayerID));
	return NewPlayerHandler;
}

TSharedRef<FArchiveHandler_Player> UOrionArchivePlayer::AsyncLoadPlayer(const FString& InUserID, const FString& InWorldID, const FOrionPlayerID& InPlayerID, const FOnArchiveLoaded& OnArchiveLoaded)
{
	TSharedRef<FArchiveHandler_Player> NewPlayerHandler = MakeShared<FArchiveHandler_Player>(FArchiveHandler_Player(nullptr, InUserID, InWorldID, InPlayerID));
	NewPlayerHandler->AsyncLoadArchive(OnArchiveLoaded);
	return NewPlayerHandler;
}
