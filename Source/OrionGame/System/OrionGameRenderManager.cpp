/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameRenderManager.h"

#include "Settings/User/OrionSettingsLocal.h"
#include "Settings/User/Performance/GameDLSSSubsystem.h"

FOrionGameRenderManager::FOrionGameRenderManager()
{
	bInitialized = false;

	SetupRTX();
}

FOrionGameRenderManager::~FOrionGameRenderManager()
{
}

void FOrionGameRenderManager::Initialize(UWorld* InWorld)
{
	if (bInitialized)
		return;

	SetupAntiAliasingMethod(InWorld);

	if (UGameDLSSSubsystem* DLSSSubsystem = InWorld->GetGameInstance()->GetSubsystem<UGameDLSSSubsystem>())
	{
		DLSSSubsystem->InitDLSS();
	}

	bInitialized = true;
}

bool FOrionGameRenderManager::IsRayTracingSupported() const
{
	return GRHISupportsRayTracing;
}

void FOrionGameRenderManager::EnableRTX(UWorld* InWorld, bool bEnabled)
{
	if (bEnabled)
	{
		GEngine->Exec(InWorld, TEXT("r.RayTracing.ForceAllRayTracingEffects -1"));
		GEngine->Exec(InWorld, TEXT("r.Lumen.HardwareRayTracing 1"));
	}
	else
	{
		GEngine->Exec(InWorld, TEXT("r.RayTracing.ForceAllRayTracingEffects 0"));
		GEngine->Exec(InWorld, TEXT("r.Lumen.HardwareRayTracing 0"));
	}
}

bool FOrionGameRenderManager::CanChangeAntiAliasingMethod(UWorld* InWorld, EAntiAliasingMethod InAntiAliasingMethod) const
{
	if (UGameDLSSSubsystem* DLSSSubsystem = InWorld->GetGameInstance()->GetSubsystem<UGameDLSSSubsystem>())
	{
		// 启动 DLSS Upscale 后不允许用户设置抗锯齿模式
		return !DLSSSubsystem->IsDLSSUpscaleEnable();
	}

	return false;
}

void FOrionGameRenderManager::SetAntiAliasingMethod(UWorld* InWorld, EAntiAliasingMethod InAntiAliasingMethod)
{
	if (InWorld)
	{
		GEngine->Exec(InWorld, *FString::Printf(TEXT("r.AntiAliasingMethod %i"), InAntiAliasingMethod));
	}
}

void FOrionGameRenderManager::SetupRTX()
{
	if (IsRayTracingSupported())
	{
		const auto LumenUseHardwareRayTracingCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Lumen.HardwareRayTracing"));
		const auto RayTracingForceAllRayTracingEffectsCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.RayTracing.ForceAllRayTracingEffects"));

		UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get();
		if (SettingsLocal->GetRTXEnabled())
		{
			int32 ForceAllRayTracingValue;
			RayTracingForceAllRayTracingEffectsCVar->GetValue(ForceAllRayTracingValue);
			if (ForceAllRayTracingValue == 0)
			{
				RayTracingForceAllRayTracingEffectsCVar->Set(-1);
			}

			bool bUseLumenRTX = LumenUseHardwareRayTracingCVar->GetBool();
			if (!bUseLumenRTX)
			{
				LumenUseHardwareRayTracingCVar->Set(1);
			}
		}
		else
		{
			int32 ForceAllRayTracingValue;
			RayTracingForceAllRayTracingEffectsCVar->GetValue(ForceAllRayTracingValue);
			if (ForceAllRayTracingValue == -1)
			{
				RayTracingForceAllRayTracingEffectsCVar->Set(0);
			}

			bool bUseLumenRTX = LumenUseHardwareRayTracingCVar->GetBool();
			if (bUseLumenRTX)
			{
				LumenUseHardwareRayTracingCVar->Set(0);
			}
		}
	}
}

void FOrionGameRenderManager::SetupAntiAliasingMethod(UWorld* InWorld)
{
	SetAntiAliasingMethod(InWorld, UOrionSettingsLocal::Get()->GetDesiredAntiAliasingMethod());
}
