/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Common/UI_ListView.h"

#include "UI_FriendsListView.generated.h"

UCLASS(meta=(EntryClass=UI_FriendsListEntryBase, DisplayName="Friends List View"))
class UUI_FriendsListView : public UUI_ListView
{
	GENERATED_BODY()

protected:
	virtual UUserWidget& OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable) override;
};
