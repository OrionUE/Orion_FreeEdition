/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_ArchiveActionBar.h"

#include "CommonButtonBase.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_ArchiveActionBar)

void UUI_ArchiveActionBar::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	PlayButton->OnClicked().AddUObject(this, &ThisClass::OnClickedPlayButton);
}

void UUI_ArchiveActionBar::NativeConstruct()
{
	Super::NativeConstruct();

	bSetVisibilityOnActivated = true;
	bSetVisibilityOnDeactivated = true;
	SetIsFocusable(true);
	SetVisibility(DeactivatedVisibility);
}

void UUI_ArchiveActionBar::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();

	OnArchiveActionBarDeactivated.ExecuteIfBound();
}

void UUI_ArchiveActionBar::OnClickedPlayButton()
{
	if (UOrionArchiveManagerSubsystem* ArchiveManager = GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>())
	{
		ArchiveManager->LoadGame();
	}
}

void UUI_ArchiveActionBar::DeleteArchive()
{
	OnDeleteArchive.ExecuteIfBound();
}
