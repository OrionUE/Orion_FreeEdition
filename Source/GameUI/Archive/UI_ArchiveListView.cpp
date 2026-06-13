/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_ArchiveListView.h"

#include "UI_ArchiveListEntry.h"
#include "SaveGame/ArchiveEntry.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_ArchiveListView)

UUserWidget& UUI_ArchiveListView::OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable)
{
	UUserWidget& EntryWidget = Super::OnGenerateEntryWidgetInternal(Item, DesiredEntryClass, OwnerTable);

	if (UUI_ArchiveListEntryBase* Entry = Cast<UUI_ArchiveListEntryBase>(&EntryWidget))
	{
		Entry->OnArchiveListEntryClicked.BindUObject(this, &ThisClass::OnListEntryItemClicked);

		if (CurrentSelectedItem == Item)
		{
			Entry->OnBeginSelected();
		}
		else
		{
			Entry->OnEndSelected();
		}
	}

	return EntryWidget;
}

void UUI_ArchiveListView::OnListEntryItemClicked(UArchiveEntry* SelectedEntry)
{
	if (SelectedEntry != CurrentSelectedItem)
	{
		UnselectedCurrentEntry();

		CurrentSelectedItem = SelectedEntry;
	}

	OnArchiveListEntryItemClicked.ExecuteIfBound();
}

void UUI_ArchiveListView::SetCurrentSelectedIndex(bool bOverrideIndex, int32 OverrideIndex)
{
	if (bOverrideIndex)
	{
		CurrentSelectedItem = Cast<UArchiveEntry>(GetItemAt(OverrideIndex));
		SetSelectedItem(CurrentSelectedItem.Get());
	}
	else
	{
		SetSelectedItem(CurrentSelectedItem.Get());
	}

	if (UArchiveEntry_Item* CurrentSelectedArchiveItem = Cast<UArchiveEntry_Item>(CurrentSelectedItem))
	{
		CurrentSelectedArchiveItem->OperationArchiveChanged();
	}
}

void UUI_ArchiveListView::UnselectedCurrentEntry()
{
	if (UUI_ArchiveListEntryBase* LastListEntry = Cast<UUI_ArchiveListEntryBase>(GetEntryWidgetFromItem(CurrentSelectedItem.Get())))
	{
		LastListEntry->OnEndSelected();
	}
}
