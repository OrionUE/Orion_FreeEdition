/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "UObject/Interface.h"

#include "UIThemeInterface.generated.h"

class UUIThemeData;

UINTERFACE(BlueprintType)
class GAMEUI_API UUIThemeInterface : public UInterface
{
	GENERATED_BODY()
};

class GAMEUI_API IUIThemeInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="UI Theme")
	void ApplyTheme(UUIThemeData* Theme);
};
