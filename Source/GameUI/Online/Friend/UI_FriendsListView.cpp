/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_FriendsListView.h"

#include "UI_FriendsListEntry.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_FriendsListView)

UUserWidget& UUI_FriendsListView::OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable)
{
	return Super::OnGenerateEntryWidgetInternal(Item, DesiredEntryClass, OwnerTable);
}
