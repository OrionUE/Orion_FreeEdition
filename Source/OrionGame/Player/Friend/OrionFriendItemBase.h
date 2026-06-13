/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Player/OrionPlayerIDType.h"

#include "OrionFriendItemBase.generated.h"

/**
 * 单个好友条目
 * 用于存储一个好友的信息
 */
UCLASS()
class UOrionFriendItemBase : public UObject
{
	GENERATED_BODY()

public:
	UOrionFriendItemBase();

public:
	/** 初始化设置好友条目 */
	virtual void SetupFriendItem(const FOrionPlayerID& InPlayerID, int32 InFriendIndex);

	/** 获取好友头像 32*32 像素 */
	virtual UTexture2D* GetSmallAvatar() const PURE_VIRTUAL(, return nullptr;);

	/** 获取好友头像 64*64 像素 */
	virtual UTexture2D* GetMediumAvatar() const PURE_VIRTUAL(, return nullptr;);

	/** 获取好友头像 128*128 像素 */
	virtual UTexture2D* GetLargeAvatar() const PURE_VIRTUAL(, return nullptr;);

	/** 获取好友名称 */
	virtual FString GetNickname() const PURE_VIRTUAL(, return TEXT(""););

	/** 获取好友ID */
	FOrionPlayerID GetPlayerID() const { return PlayerID; }

	/** 获取好友序号 */
	int32 GetFriendIndex() const { return FriendIndex; }
	/** 设置该好友序号 */
	void SetFriendIndex(int32 InFriendIndex) { FriendIndex = InFriendIndex; }

protected:
	FOrionPlayerID PlayerID;

	int32 FriendIndex = INDEX_NONE;
};
