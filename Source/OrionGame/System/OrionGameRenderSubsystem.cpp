/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameRenderSubsystem.h"

#include "OrionGameInstance.h"
#include "OrionGameRenderManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameRenderSubsystem)

UOrionGameRenderSubsystem::UOrionGameRenderSubsystem()
{
}

void UOrionGameRenderSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	UOrionGameInstance* OrionGameInstance = Cast<UOrionGameInstance>(GetWorld()->GetGameInstance());
	check(OrionGameInstance);

	RenderManager = &OrionGameInstance->GetRenderManager();
	check(RenderManager);
	if (!RenderManager->GetIsInitialized())
	{
		RenderManager->Initialize(GetWorld());
	}
}

bool UOrionGameRenderSubsystem::IsRayTracingSupported()
{
	return RenderManager->IsRayTracingSupported();
}

void UOrionGameRenderSubsystem::EnableRTX(bool bEnabled)
{
	RenderManager->EnableRTX(GetWorld(), bEnabled);
}

bool UOrionGameRenderSubsystem::CanChangeAntiAliasingMethod(EAntiAliasingMethod InAntiAliasingMethod) const
{
	return RenderManager->CanChangeAntiAliasingMethod(GetWorld(), InAntiAliasingMethod);
}

void UOrionGameRenderSubsystem::SetAntiAliasingMethod(EAntiAliasingMethod InAntiAliasingMethod)
{
	RenderManager->SetAntiAliasingMethod(GetWorld(), InAntiAliasingMethod);
}
