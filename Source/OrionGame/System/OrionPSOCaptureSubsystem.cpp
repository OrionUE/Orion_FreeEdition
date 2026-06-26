/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "System/OrionPSOCaptureSubsystem.h"

#include "Camera/CameraActor.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/GameInstance.h"
#include "Engine/GameViewportClient.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "HAL/PlatformMisc.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "PipelineFileCache.h"
#include "ShaderPipelineCache.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionPSOCaptureSubsystem)

DEFINE_LOG_CATEGORY_STATIC(LogOrionPSOCapture, Log, All);

namespace OrionPSOCapture
{
	constexpr float MinWorldExtent = 2500.0f;
	constexpr float MinDurationSeconds = 5.0f;
	constexpr int32 MinGridSize = 2;
	constexpr int32 MaxGridSize = 9;

	bool ParseFloatCommandLineValue(const TCHAR* Name, float& Value)
	{
		const FString Match = FString::Printf(TEXT("%s="), Name);
		return FParse::Value(FCommandLine::Get(), *Match, Value);
	}

	bool ParseIntCommandLineValue(const TCHAR* Name, int32& Value)
	{
		const FString Match = FString::Printf(TEXT("%s="), Name);
		return FParse::Value(FCommandLine::Get(), *Match, Value);
	}
}

void UOrionPSOCaptureSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	if (!ShouldEnableCapture(InWorld))
	{
		return;
	}

	OrionPSOCapture::ParseFloatCommandLineValue(TEXT("OrionPSOCaptureStartDelay"), StartDelaySeconds);
	OrionPSOCapture::ParseFloatCommandLineValue(TEXT("OrionPSOCaptureDuration"), DurationSeconds);
	OrionPSOCapture::ParseFloatCommandLineValue(TEXT("OrionPSOCaptureFinishDelay"), FinishDelaySeconds);
	OrionPSOCapture::ParseFloatCommandLineValue(TEXT("OrionPSOCaptureThirdPersonDistance"), ThirdPersonDistance);
	OrionPSOCapture::ParseFloatCommandLineValue(TEXT("OrionPSOCaptureCameraHeight"), CameraHeight);
	OrionPSOCapture::ParseFloatCommandLineValue(TEXT("OrionPSOCaptureMaxComponentExtent"), MaxComponentExtent);
	OrionPSOCapture::ParseIntCommandLineValue(TEXT("OrionPSOCaptureGrid"), GridSize);

	StartDelaySeconds = FMath::Max(StartDelaySeconds, 0.0f);
	DurationSeconds = FMath::Max(DurationSeconds, OrionPSOCapture::MinDurationSeconds);
	FinishDelaySeconds = FMath::Max(FinishDelaySeconds, 0.0f);
	ThirdPersonDistance = FMath::Max(ThirdPersonDistance, 100.0f);
	CameraHeight = FMath::Max(CameraHeight, 100.0f);
	MaxComponentExtent = FMath::Max(MaxComponentExtent, OrionPSOCapture::MinWorldExtent);
	GridSize = FMath::Clamp(GridSize, OrionPSOCapture::MinGridSize, OrionPSOCapture::MaxGridSize);

	bExitWhenFinished = FParse::Param(FCommandLine::Get(), TEXT("OrionPSOCaptureExit"));
	bCaptureEnabled = true;

	UE_LOG(LogOrionPSOCapture, Display,
		TEXT("PSO capture enabled for map %s. StartDelay=%.2f Duration=%.2f Grid=%d ThirdPersonDistance=%.1f CameraHeight=%.1f Exit=%d"),
		*InWorld.GetMapName(),
		StartDelaySeconds,
		DurationSeconds,
		GridSize,
		ThirdPersonDistance,
		CameraHeight,
		bExitWhenFinished ? 1 : 0);
}

void UOrionPSOCaptureSubsystem::Deinitialize()
{
	TargetPath.Reset();
	CaptureCamera = nullptr;
	CapturePlayerController = nullptr;

	Super::Deinitialize();
}

void UOrionPSOCaptureSubsystem::Tick(float DeltaTime)
{
	if (!bCaptureEnabled || bCaptureFinished)
	{
		return;
	}

	if (!bCaptureStarted)
	{
		StartupElapsedSeconds += DeltaTime;
		if (StartupElapsedSeconds >= StartDelaySeconds)
		{
			bCaptureStarted = TryStartCapture();
		}
		return;
	}

	CaptureElapsedSeconds += DeltaTime;
	UpdateCaptureCamera();

	if (CaptureElapsedSeconds >= DurationSeconds + FinishDelaySeconds)
	{
		FinishCapture();
	}
}

ETickableTickType UOrionPSOCaptureSubsystem::GetTickableTickType() const
{
	return ETickableTickType::Conditional;
}

bool UOrionPSOCaptureSubsystem::IsTickable() const
{
	return bCaptureEnabled && !bCaptureFinished && !IsTemplate();
}

TStatId UOrionPSOCaptureSubsystem::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UOrionPSOCaptureSubsystem, STATGROUP_Tickables);
}

UWorld* UOrionPSOCaptureSubsystem::GetTickableGameObjectWorld() const
{
	return GetWorld();
}

bool UOrionPSOCaptureSubsystem::ShouldEnableCapture(const UWorld& InWorld) const
{
	return InWorld.IsGameWorld() &&
		InWorld.GetNetMode() != NM_DedicatedServer &&
		FParse::Param(FCommandLine::Get(), TEXT("OrionPSOCapture"));
}

bool UOrionPSOCaptureSubsystem::TryStartCapture()
{
	UWorld* World = GetWorld();
	if (!World || !World->HasBegunPlay())
	{
		return false;
	}

	CapturePlayerController = World->GetFirstPlayerController();
	if (!CapturePlayerController)
	{
		UE_LOG(LogOrionPSOCapture, Warning, TEXT("PSO capture is waiting for a local player controller."));
		return false;
	}

	BuildCapturePath();
	if (TargetPath.Num() < 2)
	{
		UE_LOG(LogOrionPSOCapture, Error, TEXT("PSO capture could not build a valid path."));
		FinishCapture();
		return false;
	}

	const FVector InitialTarget = TargetPath[0];
	const FVector NextTarget = TargetPath[1];
	const FVector Direction = (NextTarget - InitialTarget).GetSafeNormal();
	const FVector CameraLocation = InitialTarget - Direction * ThirdPersonDistance + FVector(0.0f, 0.0f, CameraHeight);
	const FRotator CameraRotation = (InitialTarget - CameraLocation).Rotation();

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.ObjectFlags |= RF_Transient;
	CaptureCamera = World->SpawnActor<ACameraActor>(CameraLocation, CameraRotation, SpawnParameters);
	if (!CaptureCamera)
	{
		UE_LOG(LogOrionPSOCapture, Error, TEXT("PSO capture failed to spawn capture camera."));
		FinishCapture();
		return false;
	}

#if WITH_EDITOR
	CaptureCamera->SetActorLabel(TEXT("OrionPSOCaptureCamera"));
#endif
	CaptureCamera->SetActorHiddenInGame(false);
	CapturePlayerController->SetCinematicMode(true, false, false, true, true);
	CapturePlayerController->SetViewTarget(CaptureCamera);

	if (UGameInstance* GameInstance = World->GetGameInstance())
	{
		if (UGameViewportClient* GameViewportClient = GameInstance->GetGameViewportClient())
		{
			GameViewportClient->bDisableWorldRendering = false;
		}
	}

	FShaderPipelineCache::ResumeBatching();
	FShaderPipelineCache::SetBatchMode(FShaderPipelineCache::BatchMode::Background);

	UE_LOG(LogOrionPSOCapture, Display,
		TEXT("PSO capture started. Points=%d BoundsCenter=%s Duration=%.2f"),
		TargetPath.Num(),
		*CaptureBoundsCenter.ToString(),
		DurationSeconds);

	return true;
}

void UOrionPSOCaptureSubsystem::BuildCapturePath()
{
	const FBox Bounds = BuildWorldBounds();
	CaptureBoundsCenter = Bounds.GetCenter();

	const FVector Extent = Bounds.GetExtent();
	const float MinX = CaptureBoundsCenter.X - FMath::Max(Extent.X, OrionPSOCapture::MinWorldExtent);
	const float MaxX = CaptureBoundsCenter.X + FMath::Max(Extent.X, OrionPSOCapture::MinWorldExtent);
	const float MinY = CaptureBoundsCenter.Y - FMath::Max(Extent.Y, OrionPSOCapture::MinWorldExtent);
	const float MaxY = CaptureBoundsCenter.Y + FMath::Max(Extent.Y, OrionPSOCapture::MinWorldExtent);
	const float LowerTargetZ = Bounds.Min.Z + FMath::Clamp(Extent.Z * 0.35f, 150.0f, 2500.0f);
	const float UpperTargetZ = Bounds.Min.Z + FMath::Clamp(Extent.Z * 0.70f, 400.0f, 5000.0f);

	TargetPath.Reset(GridSize * GridSize * 2);

	for (int32 LayerIndex = 0; LayerIndex < 2; ++LayerIndex)
	{
		const float TargetZ = (LayerIndex == 0) ? LowerTargetZ : UpperTargetZ;
		const bool bReverseLayer = (LayerIndex % 2) != 0;

		for (int32 RowIndex = 0; RowIndex < GridSize; ++RowIndex)
		{
			const int32 EffectiveRow = bReverseLayer ? GridSize - 1 - RowIndex : RowIndex;
			const float RowAlpha = (GridSize == 1) ? 0.0f : static_cast<float>(EffectiveRow) / static_cast<float>(GridSize - 1);
			const float Y = FMath::Lerp(MinY, MaxY, RowAlpha);
			const bool bReverseColumns = ((RowIndex + LayerIndex) % 2) != 0;

			for (int32 ColumnIndex = 0; ColumnIndex < GridSize; ++ColumnIndex)
			{
				const int32 EffectiveColumn = bReverseColumns ? GridSize - 1 - ColumnIndex : ColumnIndex;
				const float ColumnAlpha = (GridSize == 1) ? 0.0f : static_cast<float>(EffectiveColumn) / static_cast<float>(GridSize - 1);
				const float X = FMath::Lerp(MinX, MaxX, ColumnAlpha);
				TargetPath.Add(FVector(X, Y, TargetZ));
			}
		}
	}
}

FBox UOrionPSOCaptureSubsystem::BuildWorldBounds() const
{
	UWorld* World = GetWorld();
	FBox Bounds(ForceInit);

	if (World)
	{
		for (TActorIterator<AActor> ActorIt(World); ActorIt; ++ActorIt)
		{
			const AActor* Actor = *ActorIt;
			if (!IsValid(Actor) || Actor == CaptureCamera || Actor->IsHidden())
			{
				continue;
			}

			TArray<UPrimitiveComponent*> PrimitiveComponents;
			Actor->GetComponents<UPrimitiveComponent>(PrimitiveComponents);

			for (const UPrimitiveComponent* PrimitiveComponent : PrimitiveComponents)
			{
				if (!PrimitiveComponent || !PrimitiveComponent->IsRegistered() || !PrimitiveComponent->IsVisible())
				{
					continue;
				}

				const FBox ComponentBox = PrimitiveComponent->Bounds.GetBox();
				const FVector ComponentExtent = ComponentBox.GetExtent();
				if (!ComponentBox.IsValid || ComponentExtent.GetMax() < 1.0f || ComponentExtent.GetMax() > MaxComponentExtent)
				{
					continue;
				}

				Bounds += ComponentBox;
			}
		}
	}

	if (!Bounds.IsValid)
	{
		FVector FallbackCenter = FVector::ZeroVector;
		if (World)
		{
			if (const APlayerController* PlayerController = World->GetFirstPlayerController())
			{
				FallbackCenter = PlayerController->GetFocalLocation();
			}
		}
		Bounds = FBox::BuildAABB(FallbackCenter, FVector(OrionPSOCapture::MinWorldExtent));
	}

	const FVector Extent = Bounds.GetExtent();
	if (Extent.GetMax() < OrionPSOCapture::MinWorldExtent)
	{
		Bounds = Bounds.ExpandBy(OrionPSOCapture::MinWorldExtent);
	}

	return Bounds;
}

void UOrionPSOCaptureSubsystem::UpdateCaptureCamera()
{
	if (!CaptureCamera || TargetPath.Num() < 2)
	{
		return;
	}

	const float PathAlpha = FMath::Clamp(CaptureElapsedSeconds / DurationSeconds, 0.0f, 1.0f);
	const float PathPosition = PathAlpha * static_cast<float>(TargetPath.Num() - 1);
	const FVector Target = GetTargetPointAt(PathPosition);
	const FVector NextTarget = GetTargetPointAt(FMath::Min(PathPosition + 0.25f, static_cast<float>(TargetPath.Num() - 1)));
	FVector Direction = (NextTarget - Target).GetSafeNormal();

	if (Direction.IsNearlyZero())
	{
		Direction = (CaptureBoundsCenter - Target).GetSafeNormal();
	}
	if (Direction.IsNearlyZero())
	{
		Direction = FVector::ForwardVector;
	}

	const float ScanYawDegrees = FMath::Sin(CaptureElapsedSeconds * 0.75f) * 25.0f;
	const FVector CameraOffset = Direction.RotateAngleAxis(ScanYawDegrees, FVector::UpVector) * -ThirdPersonDistance + FVector(0.0f, 0.0f, CameraHeight);
	const FVector CameraLocation = Target + CameraOffset;
	const FVector LookAtLocation = Target + Direction * (ThirdPersonDistance * 0.35f);
	const FRotator CameraRotation = (LookAtLocation - CameraLocation).Rotation();

	CaptureCamera->SetActorLocationAndRotation(CameraLocation, CameraRotation, false, nullptr, ETeleportType::TeleportPhysics);
}

FVector UOrionPSOCaptureSubsystem::GetTargetPointAt(float PathPosition) const
{
	if (TargetPath.Num() == 0)
	{
		return FVector::ZeroVector;
	}

	const float ClampedPosition = FMath::Clamp(PathPosition, 0.0f, static_cast<float>(TargetPath.Num() - 1));
	const int32 StartIndex = FMath::FloorToInt(ClampedPosition);
	const int32 EndIndex = FMath::Min(StartIndex + 1, TargetPath.Num() - 1);
	const float LocalAlpha = ClampedPosition - static_cast<float>(StartIndex);
	const float SmoothAlpha = FMath::SmoothStep(0.0f, 1.0f, LocalAlpha);

	return FMath::Lerp(TargetPath[StartIndex], TargetPath[EndIndex], SmoothAlpha);
}

void UOrionPSOCaptureSubsystem::FinishCapture()
{
	if (bCaptureFinished)
	{
		return;
	}

	bCaptureFinished = true;

	const bool bSaved = FShaderPipelineCache::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode::BoundPSOsOnly);
	UE_LOG(LogOrionPSOCapture, Display, TEXT("PSO capture finished. SavePipelineFileCache(BoundPSOsOnly)=%d"), bSaved ? 1 : 0);

	if (bExitWhenFinished)
	{
		UE_LOG(LogOrionPSOCapture, Display, TEXT("PSO capture requested game exit."));
		FPlatformMisc::RequestExit(false);
	}
}
