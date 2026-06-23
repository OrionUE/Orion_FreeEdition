/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataTable.h"

class UCommonInputSubsystem;
class UInputAction;
class ULocalPlayer;

namespace GameUI::ActionIcon
{
	bool ShouldHideKeyboardMouseIcon(const UCommonInputSubsystem* CommonInputSubsystem, const FDataTableRowHandle& InputAction);
	bool ShouldHideKeyboardMouseIcon(const UCommonInputSubsystem* CommonInputSubsystem, const TArray<FDataTableRowHandle>& InputActions);
	bool ShouldHideKeyboardMouseIcon(const UCommonInputSubsystem* CommonInputSubsystem, const UInputAction* InputAction, const ULocalPlayer* LocalPlayer);
}
