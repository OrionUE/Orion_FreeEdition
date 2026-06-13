/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Common/UI_ListView.h"

#include "UI_ArchiveListView.generated.h"

class UArchiveEntry;

DECLARE_DELEGATE(FOnArchiveListEntryItemClicked);

UCLASS(meta=(EntryClass=UUI_ArchiveListEntryBase, DisplayName="Archive List View"))
class UUI_ArchiveListView : public UUI_ListView
{
	GENERATED_BODY()

protected:
	virtual UUserWidget& OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable) override;

	void OnListEntryItemClicked(UArchiveEntry* SelectedEntry);

public:
	void SetCurrentSelectedIndex(bool bOverrideIndex = false, int32 OverrideIndex = -1);

	void UnselectedCurrentEntry();

public:
	FOnArchiveListEntryItemClicked OnArchiveListEntryItemClicked;

protected:
	TWeakObjectPtr<UArchiveEntry> CurrentSelectedItem;
};
