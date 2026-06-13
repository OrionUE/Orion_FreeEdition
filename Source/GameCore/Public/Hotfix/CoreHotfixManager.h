/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OnlineHotfixManager.h"

#include "CoreHotfixManager.generated.h"

UCLASS()
class UCoreHotfixManager : public UOnlineHotfixManager
{
	GENERATED_BODY()

public:
	UCoreHotfixManager();
	
	void RequestPatchAssetsFromIniFiles();
};
