/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Foundation/UI_ActivatableWidget.h"

#include "UI_ArchiveScreen.generated.h"

class UUI_ArchiveActionBar;
class UUI_ArchiveListView;
class UArchiveEntry_NewGame;
class UArchiveEntry;
class UOrionArchiveManagerSubsystem;

UCLASS(Abstract, meta=(DisableNativeTick, DisplayName="Archive Screen"))
class UUI_ArchiveScreen : public UUI_ActivatableWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;

protected:
	UFUNCTION(BlueprintCallable)
	void RefreshArchiveList();

	void OnArchiveListEntryItemClicked();
	void OnDeleteArchive();
	void OnArchiveActionBarDeactivated();

protected:
	UPROPERTY(Transient)
	TArray<TObjectPtr<UArchiveEntry>> ArchiveEntries;

	UPROPERTY(Transient)
	TObjectPtr<UArchiveEntry_NewGame> ArchiveEntry_NewGame;

	TObjectPtr<UOrionArchiveManagerSubsystem> ArchiveManager;

private:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUI_ArchiveListView> ListView_Archive;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUI_ArchiveActionBar> ArchiveActionBar;

private:
	FTSTicker::FDelegateHandle RefreshHandle;
};
