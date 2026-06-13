/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionFriendManagerSubsystemBase.h"

#include "OrionFriendManagerSteam.generated.h"

#if WITH_STEAM
enum class EOrionSteamPersonaState : uint8;
#endif

UCLASS()
class ORIONGAME_API UOrionFriendManagerSteam : public UOrionFriendManagerSubsystemBase
{
	GENERATED_BODY()

public:
	UOrionFriendManagerSteam();

protected:
	virtual void RefreshFriendItems() override;
	virtual void SortFriendItemsList() override;
	virtual UOrionFriendItemBase* CreateFriendItem(const FOrionPlayerID& InPlayerID, int32 InFriendIndex) override;

public:
	virtual UTexture2D* GetPlayerSmallAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList = false) override;
	virtual UTexture2D* GetPlayerMediumAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList = false) override;
	virtual UTexture2D* GetPlayerLargeAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList = false) override;
	virtual FString GetPlayerName(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList = false) override;

public:
#if WITH_STEAM
	/**
	 * 以好友状态为条件，获取好友条目列表
	 * @param InOutFriendItems		好友条目列表
	 * @param InFriendState			好友状态
	 */
	void GetAndRefreshFriendItemByState(TArray<UOrionFriendItemBase*>& InOutFriendItems, EOrionSteamPersonaState InFriendState);
#endif
};
