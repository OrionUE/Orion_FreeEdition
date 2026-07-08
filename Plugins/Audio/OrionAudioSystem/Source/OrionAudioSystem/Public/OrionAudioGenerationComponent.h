/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/SceneComponent.h"
#include "Sound/SoundAttenuation.h"

#include "OrionAudioGenerationComponent.generated.h"

class UAudioComponent;
class USoundBase;
class USoundConcurrency;

/**
 * 一次世界位置音频播放位置的快照。
 */
USTRUCT(BlueprintType)
struct ORIONAUDIOSYSTEM_API FOrionAudioPlaybackRequest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Playback")
	FVector Location = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Playback")
	FRotator Rotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Playback")
	bool bAutoDestroyGeneratedAudio = true;
};

/**
 * 可附加到其他场景组件上的音频生成组件基类，负责统一蓝图入口、组件世界位置播放和多人广播。
 */
UCLASS(Abstract, ClassGroup=(Audio), BlueprintType, Blueprintable)
class ORIONAUDIOSYSTEM_API UOrionAudioGenerationComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UOrionAudioGenerationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;

	/** 在当前组件世界位置生成并播放音频；网络开启时由服务端广播给相关客户端。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Generation")
	UAudioComponent* PlayAudioAtCurrentWorldLocation();

	/** 在指定世界位置生成并播放当前组件维护的音频。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Generation")
	UAudioComponent* PlayAudioAtLocation(FVector Location, FRotator Rotation = FRotator::ZeroRotator);

	/** 设置组件维护的唯一播放声音。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Generation")
	void SetAudioSound(USoundBase* NewSound);

	/** 设置衰减资产，并实时应用到当前组件已经生成的音频。 */
	UFUNCTION(BlueprintCallable, Category="Orion Audio|Attenuation")
	void SetAudioAttenuationSettings(USoundAttenuation* NewAttenuationSettings);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Generation")
	TObjectPtr<USoundBase> Sound = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Generation", meta=(ClampMin="0.0", UIMin="0.0"))
	float VolumeMultiplier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Generation", meta=(ClampMin="0.0", UIMin="0.0"))
	float PitchMultiplier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Generation", meta=(ClampMin="0.0", UIMin="0.0"))
	float StartTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Generation")
	TObjectPtr<USoundConcurrency> ConcurrencySettings = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Attenuation")
	TObjectPtr<USoundAttenuation> AttenuationSettings = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Networking")
	bool bReplicatePlayback = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Networking")
	bool bUseReliableServerPlayback = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Networking")
	bool bUseReliableMulticast = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Orion Audio|Networking")
	bool bAutoEnableOwnerReplication = true;

protected:
	UFUNCTION(Server, Reliable)
	void ServerPlayAudioAtLocationReliable(const FOrionAudioPlaybackRequest& PlaybackRequest);

	UFUNCTION(Server, Unreliable)
	void ServerPlayAudioAtLocationUnreliable(const FOrionAudioPlaybackRequest& PlaybackRequest);

	UFUNCTION(NetMulticast, Unreliable)
	void MulticastPlayAudioAtLocation(const FOrionAudioPlaybackRequest& PlaybackRequest);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayAudioAtLocationReliable(const FOrionAudioPlaybackRequest& PlaybackRequest);

	UFUNCTION(Server, Reliable)
	void ServerSetAudioSourceState(USoundBase* NewSound, USoundAttenuation* NewAttenuationSettings);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSetAudioSourceState(USoundBase* NewSound, USoundAttenuation* NewAttenuationSettings);

protected:
	FOrionAudioPlaybackRequest BuildPlaybackRequest(const FVector& Location, const FRotator& Rotation) const;
	virtual void PopulatePlaybackRequest(FOrionAudioPlaybackRequest& PlaybackRequest) const;
	virtual UAudioComponent* PlayAudioLocally(const FOrionAudioPlaybackRequest& PlaybackRequest);
	virtual void OnAudioSourceStateChanged();
	void HandleServerPlaybackRequest(const FOrionAudioPlaybackRequest& PlaybackRequest);
	void BroadcastPlaybackRequest(const FOrionAudioPlaybackRequest& PlaybackRequest);
	void SetAudioSourceState(USoundBase* NewSound, USoundAttenuation* NewAttenuationSettings, bool bBroadcastChange);
	void BroadcastAudioSourceState();
	bool HasPlayableSound() const;
	bool ShouldUseNetworkedPlayback() const;
	bool CanPlayAudioLocally() const;
	const UObject* GetAudioWorldContextObject() const;
};
