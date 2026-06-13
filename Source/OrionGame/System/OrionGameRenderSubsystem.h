/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "System/CoreWorldSubsystem.h"

#include "OrionGameRenderSubsystem.generated.h"

class FOrionGameRenderManager;

UCLASS()
class UOrionGameRenderSubsystem : public UCoreWorldSubsystem
{
	GENERATED_BODY()

public:
	UOrionGameRenderSubsystem();

	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

public:
	UFUNCTION(BlueprintPure, BlueprintCallable)
	bool IsRayTracingSupported();

	UFUNCTION(BlueprintCallable)
	void EnableRTX(bool bEnabled);

	bool CanChangeAntiAliasingMethod(EAntiAliasingMethod InAntiAliasingMethod = AAM_None) const;

	void SetAntiAliasingMethod(EAntiAliasingMethod InAntiAliasingMethod);

protected:
	FOrionGameRenderManager* RenderManager;
};
