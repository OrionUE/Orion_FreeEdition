/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionAudioGenerationComponent.h"

#include "OrionFireAndForgetAudioGenerationComponent.generated.h"

/**
 * 一次性音频生成组件，使用 UE fire-and-forget 声音播放路径，适合枪声、脚步声和命中声等高频短音效。
 */
UCLASS(ClassGroup=(Audio), BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent))
class ORIONAUDIOSYSTEM_API UOrionFireAndForgetAudioGenerationComponent : public UOrionAudioGenerationComponent
{
	GENERATED_BODY()

public:
	UOrionFireAndForgetAudioGenerationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual UAudioComponent* PlayAudioLocally(const FOrionAudioPlaybackRequest& PlaybackRequest) override;
};
