/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonUserWidget.h"

#include "UI_FriendsScreen.generated.h"

class UOrionFriendItemBase;
class UUI_FriendsListView;

UCLASS(Abstract, meta=(DisplayName="Friends Screen"))
class UUI_FriendsScreen : public UCommonUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;

public:
	void RefreshFriendsList();

private:
	UPROPERTY(Transient)
	TArray<TObjectPtr<UOrionFriendItemBase>> FriendItemsList;
	
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUI_FriendsListView> ListView_Friends;
};
