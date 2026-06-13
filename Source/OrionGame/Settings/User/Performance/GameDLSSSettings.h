/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DeveloperSettingsBackedByCVars.h"

#include "GameDLSSSettings.generated.h"

UENUM(BlueprintType)
enum class EGameDLSSUpscaleMode : uint8
{
	BuiltIn,
	DLSS,
	NIS
};

UENUM(BlueprintType)
enum class EGameDLSSMode : uint8
{
	None,
	Auto,
	DLAA,
	UltraQuality,
	Quality,
	Balanced,
	Performance,
	UltraPerformance
};

UCLASS(Config=Game, defaultconfig, meta=(DisplayName="Game DLSS Settings"))
class UGameDLSSSettings : public UDeveloperSettingsBackedByCVars
{
	GENERATED_BODY()

public:
	UGameDLSSSettings();

	/** 是否重新指定DLSS Upscale模式，默认为DLSS */
	UPROPERTY(EditAnywhere, Config, Category="Upscale")
	bool bReassignDLSSUpscaleMode = false;

	UPROPERTY(EditAnywhere, Config, meta=(EditCondition="bReassignDLSSUpscaleMode"), Category="Upscale")
	EGameDLSSUpscaleMode DLSSUpscaleMode = EGameDLSSUpscaleMode::DLSS;

	/** 如果当前硬件支持，是否启用DLSS光线重构 */
	UPROPERTY(EditAnywhere, Config, Category="DLSSRR")
	bool bUseDLSSRayReconstruction = true;
};
