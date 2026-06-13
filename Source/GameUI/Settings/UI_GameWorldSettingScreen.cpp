/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_GameWorldSettingScreen.h"

#include "CommonButtonBase.h"
#include "GameModes/Phases/OrionGamePhaseSubsystem_Gameplay.h"
#include "Player/OrionLocalPlayer.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"
#include "Settings/Game/OrionGameWorldSettingRegistry.h"
#include "NativeGameplayTags.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_GameWorldSettingScreen)

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_FrontEnd_GamePhase_CreateSession, "FrontEnd.GamePhase.CreateSession");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_FrontEnd_GamePhase_Archive_ArchiveSetting, "FrontEnd.GamePhase.Archive.ArchiveSetting");

void UUI_GameWorldSettingScreen::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	ConfirmButton->OnClicked().AddUObject(this, &ThisClass::OnClickedConfirmButton);
	CancelButton->OnClicked().AddUObject(this, &ThisClass::OnClickedCancelButton);
	if (CancelChangesButton)
		CancelChangesButton->OnClicked().AddUObject(this, &ThisClass::OnClickedCancelChangesButton);
}

UGameSettingRegistry* UUI_GameWorldSettingScreen::CreateRegistry()
{
	if (UOrionLocalPlayer* LocalPlayer = CastChecked<UOrionLocalPlayer>(GetOwningLocalPlayer()))
	{
		return UOrionGameWorldSettingRegistry::Get(LocalPlayer);
	}

	return NewObject<UOrionGameWorldSettingRegistry>();
}

void UUI_GameWorldSettingScreen::ApplyChanges()
{
	ChangeTracker.ApplyChanges();
	ClearDirtyState();
	GetRegistry()->SaveChanges();
}

FReply UUI_GameWorldSettingScreen::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (bIsSecondBackHandler && InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
	{
		HandleBackAction();
	}
	
	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

bool UUI_GameWorldSettingScreen::NativeOnHandleBackAction()
{
	DeactivateWidget();

	return true;
}

void UUI_GameWorldSettingScreen::OnClickedConfirmButton()
{
	ApplyChanges();

	UGamePhaseSubsystemBase* PhaseSubsystem = GetWorld()->GetSubsystem<UOrionGamePhaseSubsystem_Gameplay>();
	check(PhaseSubsystem);
	if (PhaseSubsystem->IsPhaseActive(TAG_FrontEnd_GamePhase_CreateSession))
	{
		OnCreateSession();
	}
	else if (PhaseSubsystem->IsPhaseActive(TAG_FrontEnd_GamePhase_Archive_ArchiveSetting))
	{
		DeactivateWidget();
	}
}

void UUI_GameWorldSettingScreen::OnClickedCancelButton()
{
	CancelChanges();

	UOrionArchiveManagerSubsystem* ArchiveManager = GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>();
	ArchiveManager->QuitWorld();

	DeactivateWidget();
}

void UUI_GameWorldSettingScreen::OnClickedCancelChangesButton()
{
	CancelChanges();

	DeactivateWidget();
}
