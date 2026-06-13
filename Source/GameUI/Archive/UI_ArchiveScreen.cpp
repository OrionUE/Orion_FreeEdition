/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_ArchiveScreen.h"

#include "UI_ArchiveActionBar.h"
#include "UI_ArchiveListView.h"
#include "SaveGame/ArchiveEntry.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_ArchiveScreen)

void UUI_ArchiveScreen::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (GetOwningLocalPlayer())
		ArchiveManager = GetOwningLocalPlayer()->GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>();

	ArchiveEntry_NewGame = NewObject<UArchiveEntry_NewGame>(this);
}

void UUI_ArchiveScreen::NativeConstruct()
{
	Super::NativeConstruct();

	ListView_Archive->OnArchiveListEntryItemClicked.BindUObject(this, &ThisClass::OnArchiveListEntryItemClicked);
	ArchiveActionBar->OnDeleteArchive.BindUObject(this, &ThisClass::OnDeleteArchive);
	ArchiveActionBar->OnArchiveActionBarDeactivated.BindUObject(this, &ThisClass::OnArchiveActionBarDeactivated);

	ListView_Archive->SetCurrentSelectedIndex(true, -1);
}

UWidget* UUI_ArchiveScreen::NativeGetDesiredFocusTarget() const
{
	if (UWidget* Target = BP_GetDesiredFocusTarget())
	{
		return Target;
	}

	return ListView_Archive;
}

void UUI_ArchiveScreen::RefreshArchiveList()
{
	if (!ArchiveManager || RefreshHandle.IsValid())
		return;

	ArchiveManager->RefreshArchive();

	RefreshHandle = FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UUI_ArchiveScreen_RefreshArchiveList);

		if (ArchiveManager->IsFinishedRefresh())
		{
			ArchiveManager->GetArchiveEntries(MutableView(ArchiveEntries));
			ArchiveEntries.Add(ArchiveEntry_NewGame);

			ListView_Archive->SetListItems(ArchiveEntries);
			ListView_Archive->RegenerateAllEntries();
			ListView_Archive->SetCurrentSelectedIndex();

			RefreshHandle.Reset();

			return false;
		}

		return true;
	}));
}

void UUI_ArchiveScreen::OnArchiveListEntryItemClicked()
{
	ArchiveActionBar->ActivateWidget();
}

void UUI_ArchiveScreen::OnDeleteArchive()
{
	ArchiveManager->DeleteCurrentArchive();
	ArchiveActionBar->DeactivateWidget();
	ListView_Archive->SetCurrentSelectedIndex(true, -1);
	RefreshArchiveList();
}

void UUI_ArchiveScreen::OnArchiveActionBarDeactivated()
{
	ListView_Archive->UnselectedCurrentEntry();
}
