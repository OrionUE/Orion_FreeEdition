/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/WorldSettings.h"

#include "CoreWorldSettings.generated.h"

class UCoreExperienceDefinition;

/**
 * The default world settings object, used primarily to set the default gameplay experience to use when playing on this map.
 * 游戏世界设置
 * 设置当前关卡的Experience
 *
 * @note
 * 需要在DefaultEngine.ini添加此类的名称和路径
 * [/Script/Engine.Engine]
 * WorldSettingsClassName=/Script/ModuleName.WorldSettingsClassName
 */
UCLASS()
class GAMECORE_API ACoreWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:
	ACoreWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Returns the default experience to use when a server opens this map if it is not overridden by the user-facing experience
	 */
	FPrimaryAssetId GetDefaultGameplayExperience() const;

#if WITH_EDITOR
	virtual void CheckForErrors() override;
#endif

protected:
	// The default experience to use when a server opens this map if it is not overridden by the user-facing experience
	UPROPERTY(EditDefaultsOnly, Category=GameMode)
	TSoftClassPtr<UCoreExperienceDefinition> DefaultGameplayExperience;

public:
#if WITH_EDITORONLY_DATA
	// When set, the net mode will be forced to Standalone when you hit Play in the editor
	UPROPERTY(EditDefaultsOnly, Category=PIE)
	bool ForceStandaloneNetMode = false;
#endif
};
