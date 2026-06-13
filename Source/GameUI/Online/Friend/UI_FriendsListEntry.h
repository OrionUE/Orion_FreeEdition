/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Player/OrionPlayerIDType.h"

#include "UI_FriendsListEntry.generated.h"

class UUI_ButtonBase;
class UCommonTextBlock;
class UImage;

/**
 * 好友列表单个条目基类
 */
UCLASS(Abstract, NotBlueprintable, meta=(DisableNativeTick, DisplayName="Friends List Entry Base"))
class UUI_FriendsListEntryBase : public UCommonUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()

protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

protected:
	FOrionPlayerID PlayerID;

private:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UImage> Avatar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UCommonTextBlock> FriendName;
};

UCLASS(Abstract, Blueprintable, meta=(DisableNativeTick, DisplayName="Friends List Entry Frontend"))
class UUI_FriendsListEntry_Frontend : public UUI_FriendsListEntryBase
{
	GENERATED_BODY()
};

UCLASS(Abstract, Blueprintable, meta=(DisableNativeTick, DisplayName="Friends List Entry Invite"))
class UUI_FriendsListEntry_Invite : public UUI_FriendsListEntryBase
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

private:
	void InviteFriends();

private:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUI_ButtonBase> InviteButton;
};
