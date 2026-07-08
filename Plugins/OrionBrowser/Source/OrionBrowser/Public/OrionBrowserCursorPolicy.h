/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "UObject/ObjectMacros.h"

#include "OrionBrowserCursorPolicy.generated.h"

/**
 * Defines whether embedded web content may drive the Slate/platform mouse cursor.
 */
UENUM(BlueprintType)
enum class EOrionBrowserCursorPolicy : uint8
{
	PageControlled,
	GameControlled,
};
