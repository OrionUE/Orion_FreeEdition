/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "LoadingProcessInterface.h"
#include "Blueprint/UserWidget.h"

#include "UI_LoadingScreenHost.generated.h"

UCLASS()
class UUI_LoadingScreenHost : public UUserWidget, public ILoadingPercentInterface
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

private:
	TSharedPtr<class FDisableAnyInputPreProcessor> InputProcessor;
};
