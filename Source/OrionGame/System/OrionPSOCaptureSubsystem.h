/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Subsystems/WorldSubsystem.h"
#include "Tickable.h"

#include "OrionPSOCaptureSubsystem.generated.h"

class ACameraActor;
class APlayerController;

/**
 * Drives packaged-game PSO collection with an in-world third-person capture camera.
 */
UCLASS()
class ORIONGAME_API UOrionPSOCaptureSubsystem : public UWorldSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:
	//~UWorldSubsystem interface
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	virtual void Deinitialize() override;
	//~End of UWorldSubsystem interface

	//~FTickableGameObject interface
	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;
	virtual UWorld* GetTickableGameObjectWorld() const override;
	//~End of FTickableGameObject interface

private:
	bool ShouldEnableCapture(const UWorld& InWorld) const;
	bool TryStartCapture();
	void BuildCapturePath();
	FBox BuildWorldBounds() const;
	void UpdateCaptureCamera();
	FVector GetTargetPointAt(float PathPosition) const;
	void FinishCapture();

private:
	UPROPERTY(Transient)
	TObjectPtr<ACameraActor> CaptureCamera;

	UPROPERTY(Transient)
	TObjectPtr<APlayerController> CapturePlayerController;

	TArray<FVector> TargetPath;
	FVector CaptureBoundsCenter = FVector::ZeroVector;

	float StartupElapsedSeconds = 0.0f;
	float CaptureElapsedSeconds = 0.0f;
	float StartDelaySeconds = 3.0f;
	float DurationSeconds = 60.0f;
	float FinishDelaySeconds = 1.0f;
	float ThirdPersonDistance = 900.0f;
	float CameraHeight = 450.0f;
	float MaxComponentExtent = 200000.0f;

	int32 GridSize = 5;

	bool bCaptureEnabled = false;
	bool bCaptureStarted = false;
	bool bCaptureFinished = false;
	bool bExitWhenFinished = false;
};
