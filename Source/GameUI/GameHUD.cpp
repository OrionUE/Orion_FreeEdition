/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameHUD.h"

#if !UE_BUILD_SHIPPING
#include "Development/DevelopmentHUDLayout.h"
#endif

#include "Subsystem/GameUIManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameHUD)

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

#if !UE_BUILD_SHIPPING
	if (UGameUIManagerSubsystem* UIManagerSubsystem = GetGameInstance()->GetSubsystem<UGameUIManagerSubsystem>())
	{
		UIManagerSubsystem->CreateHUDLayout(PlayerOwner);
		UIManagerSubsystem->AddDevelopmentHUDToViewport(PlayerOwner);
	}
#endif
}

void AGameHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

#if !UE_BUILD_SHIPPING
	if (UGameUIManagerSubsystem* UIManagerSubsystem = GetGameInstance()->GetSubsystem<UGameUIManagerSubsystem>())
	{
		UIManagerSubsystem->RemoveDevelopmentHUDToViewport();
	}
#endif
}
