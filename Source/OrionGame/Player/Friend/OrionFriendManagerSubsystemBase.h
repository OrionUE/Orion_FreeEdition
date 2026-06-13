/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Player/OrionPlayerIDType.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "OrionFriendManagerSubsystemBase.generated.h"

class UOrionFriendItemBase;

UCLASS(Abstract)
class UOrionFriendManagerSubsystemBase : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UOrionFriendManagerSubsystemBase();

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

public:
	virtual void RefreshFriendItems() PURE_VIRTUAL(, );

protected:
	virtual void SortFriendItemsList() PURE_VIRTUAL(, );

	virtual UOrionFriendItemBase* CreateFriendItem(const FOrionPlayerID& InPlayerID, int32 InFriendIndex);

public:
	/**
	 * 获取并刷新好友条目列表
	 * @param InOutFriendItems		好友条目列表
	 */
	virtual void GetAndRefreshAllFriendItem(TArray<UOrionFriendItemBase*>& InOutFriendItems);

	/**
	 * 获取指定好友的好友条目对象
	 * @tparam T					好友条目类
	 * @param InPlayerID			好友ID
	 * @return						好友条目对象
	 */
	template<typename T>
	T* GetFriendItem(const FOrionPlayerID& InPlayerID) const;

	UOrionFriendItemBase* GetFriendItem(const FOrionPlayerID& InPlayerID) const;

public:
	/**
	 * 获取玩家头像 32*32 像素
	 * @param InPlayerID			玩家ID
	 * @param bRefreshFriendList	是否刷新好友列表
	 * @return						玩家头像
	 */
	virtual UTexture2D* GetPlayerSmallAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList = false);

	/**
	 * 获取玩家头像 64*64 像素
	 * @param InPlayerID			玩家ID
	 * @param bRefreshFriendList	是否刷新好友列表
	 * @return						玩家头像
	 */
	virtual UTexture2D* GetPlayerMediumAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList = false);

	/**
	 * 获取玩家头像 128*128 像素
	 * @param InPlayerID			玩家ID
	 * @param bRefreshFriendList	是否刷新好友列表
	 * @return						玩家头像
	 */
	virtual UTexture2D* GetPlayerLargeAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList = false);

	/**
	 * 获取玩家名称
	 * @param InPlayerID			玩家ID
	 * @param bRefreshFriendList	是否刷新好友列表
	 * @return						
	 */
	virtual FString GetPlayerName(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList = false);

protected:
	UPROPERTY(Transient)
	TMap<FOrionPlayerID, TObjectPtr<UOrionFriendItemBase>> FriendItemsList;
};

template <typename T>
T* UOrionFriendManagerSubsystemBase::GetFriendItem(const FOrionPlayerID& InPlayerID) const
{
	return Cast<T>(GetFriendItem(InPlayerID));
}
