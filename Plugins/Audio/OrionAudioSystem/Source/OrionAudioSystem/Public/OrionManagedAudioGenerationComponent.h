/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionAudioGenerationComponent.h"

#include "OrionManagedAudioGenerationComponent.generated.h"

/**
 * 托管音频生成组件，追踪生成出的 UAudioComponent，支持运行时覆盖衰减和手动生命周期控制。
 */
UCLASS(ClassGroup=(Audio), BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent))
class ORIONAUDIOSYSTEM_API UOrionManagedAudioGenerationComponent : public UOrionAudioGenerationComponent
{
	GENERATED_BODY()

public:
	UOrionManagedAudioGenerationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/** 开关自定义衰减覆盖，并实时应用到当前组件已经生成的音频。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Attenuation")
	void SetAudioAttenuationOverrideEnabled(bool bEnabled);

	/** 设置自定义衰减覆盖，并实时应用到当前组件已经生成的音频。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Attenuation")
	void SetAudioAttenuationOverrides(const FSoundAttenuationSettings& NewAttenuationOverrides);

	/** 对当前仍有效的已生成音频重新应用组件衰减配置。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Attenuation")
	void ApplyAttenuationToActiveAudio();

	/** 设置托管音频组件是否在播放完成或停止后自动销毁，并应用到当前追踪的音频。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Lifecycle")
	void SetAutoDestroyGeneratedAudio(bool bShouldAutoDestroy);

	/** 停止并销毁当前组件追踪的所有托管音频组件。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Lifecycle")
	void StopAndDestroyGeneratedAudio();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Attenuation")
	bool bOverrideAttenuation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Attenuation", meta=(EditCondition="bOverrideAttenuation", EditConditionHides))
	FSoundAttenuationSettings AttenuationOverrides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Lifecycle")
	bool bAutoDestroyGeneratedAudio = true;

protected:
	UFUNCTION(Server, Reliable)
	void ServerSetManagedAudioGenerationState(bool bNewOverrideAttenuation, const FSoundAttenuationSettings& NewAttenuationOverrides, bool bNewAutoDestroyGeneratedAudio);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSetManagedAudioGenerationState(bool bNewOverrideAttenuation, const FSoundAttenuationSettings& NewAttenuationOverrides, bool bNewAutoDestroyGeneratedAudio);

protected:
	virtual void PopulatePlaybackRequest(FOrionAudioPlaybackRequest& PlaybackRequest) const override;
	virtual UAudioComponent* PlayAudioLocally(const FOrionAudioPlaybackRequest& PlaybackRequest) override;
	virtual void OnAudioSourceStateChanged() override;

private:
	void SetManagedAudioGenerationState(bool bNewOverrideAttenuation, const FSoundAttenuationSettings& NewAttenuationOverrides, bool bNewAutoDestroyGeneratedAudio, bool bBroadcastChange);
	void BroadcastManagedAudioGenerationState();
	void ApplyAutoDestroyToGeneratedAudio();
	void TrackGeneratedAudioComponent(UAudioComponent* AudioComponent);
	void PruneGeneratedAudioComponents();

private:
	TArray<TWeakObjectPtr<UAudioComponent>> GeneratedAudioComponents;
};
