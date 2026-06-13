/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Subsystems/EngineSubsystem.h"

#include "CoreExperienceManager.generated.h"

/**
 * Manager for experiences - primarily for arbitration between multiple PIE sessions
 *
 * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/ip7igcmsi8a25n14
 *
 * @note 该基类为抽象类，需继承该类以创建该子系统
 */
UCLASS(Abstract)
class GAMECORE_API UCoreExperienceManager : public UEngineSubsystem
{
	GENERATED_BODY()

public:
#if WITH_EDITOR
	void OnPlayInEditorBegun();

	static void NotifyOfPluginActivation(const FString& PluginURL);
	static bool RequestToDeactivatePlugin(const FString& PluginURL);
#else
	static void NotifyOfPluginActivation(const FString& PluginURL) { }
	static bool RequestToDeactivatePlugin(const FString& PluginURL) { return true; }
#endif

private:
	// The map of requests to active count for a given game feature plugin
	// (to allow first in, last out activation management during PIE)
	TMap<FString, int32> GameFeaturePluginRequestCountMap;
};
