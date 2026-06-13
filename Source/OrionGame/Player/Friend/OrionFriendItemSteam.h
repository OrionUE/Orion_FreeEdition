/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionFriendItemBase.h"

#include "OrionFriendItemSteam.generated.h"

#if WITH_STEAM
enum class EOrionSteamPersonaState : uint8;
#endif

UCLASS()
class ORIONGAME_API UOrionFriendItemSteam : public UOrionFriendItemBase
{
	GENERATED_BODY()

public:
	virtual UTexture2D* GetSmallAvatar() const override;
	virtual UTexture2D* GetMediumAvatar() const override;
	virtual UTexture2D* GetLargeAvatar() const override;

	virtual FString GetNickname() const override;

#if WITH_STEAM
	/** 获取当前好友状态 */
	EOrionSteamPersonaState GetPersonaState() const;

	/** 获取好友状态 */
	EOrionSteamPersonaState GetFriendPersonaState() const;
#endif
};
