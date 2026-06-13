/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/SaveGame.h"
#include "Handler/OrionArchiveHandler.h"

#include "OrionArchivePlayer.generated.h"

struct FOrionPlayerID;

class FArchiveHandler_Player;

USTRUCT(BlueprintType)
struct FOrionArchivePlayerData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PlayerName;

	UPROPERTY()
	FTransform LastTransform;
};

UCLASS()
class ORIONGAME_API UOrionArchivePlayer : public USaveGame
{
	GENERATED_BODY()

public:
	/** 创建新的Player存档 */
	static TSharedRef<FArchiveHandler_Player> CreatePlayer(const FString& InUserID, const FString& InWorldID, const FOrionPlayerID& InPlayerID, const TSubclassOf<UOrionArchivePlayer>& InPlayerArchiveClass);

	/** 加载Player存档 */
	static TSharedRef<FArchiveHandler_Player> AsyncLoadPlayer(const FString& InUserID, const FString& InWorldID, const FOrionPlayerID& InPlayerID, const FOnArchiveLoaded& OnArchiveLoaded);

public:
	UPROPERTY()
	int32 Version;

	UPROPERTY()
	FDateTime Timestamp;

	UPROPERTY()
	FOrionArchivePlayerData Data;
};
