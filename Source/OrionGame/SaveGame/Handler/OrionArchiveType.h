/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#define GAMEWORLD_SETTINGS_SLOT_NAME TEXT("WorldOption")
#define LEVELMETA_SETTINGS_SLOT_NAME TEXT("LevelMeta")
#define PLAYERS_SAVEGAME_SLOT_NAME TEXT("Players")

DECLARE_DELEGATE_OneParam(FOnGetPlayerArchive, class UOrionArchivePlayer* /*OutPlayerArchive*/);

UENUM()
enum class EOrionArchiveType : uint8
{
	WorldOption,
	LevelMeta,
	Player,
};
