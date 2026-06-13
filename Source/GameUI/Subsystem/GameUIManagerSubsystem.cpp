/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameUIManagerSubsystem.h"

#if !UE_BUILD_SHIPPING
#include "Blueprint/UserWidget.h"
#include "Development/DevelopmentHUDLayout.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameUIManagerSubsystem)

UGameUIManagerSubsystem::UGameUIManagerSubsystem()
{
}

#if !UE_BUILD_SHIPPING
void UGameUIManagerSubsystem::CreateHUDLayout(APlayerController* OwingPlayer)
{
	if (!DevelopmentHUD)
	{
		TSubclassOf<UUserWidget> DevelopmentHUDClass = DevelopmentHUDSoftClass.LoadSynchronous();
		DevelopmentHUD = CreateWidget<UDevelopmentHUDLayout>(OwingPlayer, DevelopmentHUDClass);
	}
	else
	{
		DevelopmentHUD->SetOwningPlayer(OwingPlayer);
	}

#if !WITH_EDITOR
	if (!ShouldShowScreenMessagesInPackage)
	{
		GEngine->Exec(OwingPlayer->GetWorld(), TEXT("DisableAllScreenMessages"));
	}
#endif
}

void UGameUIManagerSubsystem::AddDevelopmentHUDToViewport(APlayerController* OwingPlayer) const
{
	check(DevelopmentHUD);
	DevelopmentHUD->AddToPlayerScreen(DevelopmentHUDZOrder);

	if (!ShouldShowDevelopmentHUDInPackage)
	{
		GEngine->Exec(OwingPlayer->GetWorld(), TEXT("Orion.ShowDevelopmentHUD 0"));
	}
}

void UGameUIManagerSubsystem::RemoveDevelopmentHUDToViewport() const
{
	if (DevelopmentHUD)
	{
		TWeakPtr<SWidget> DevelopmentHUDSlateWidget = DevelopmentHUD->GetCachedWidget();
		if (DevelopmentHUDSlateWidget.IsValid())
		{
			DevelopmentHUD->RemoveFromParent();
		}
	}
}
#endif
