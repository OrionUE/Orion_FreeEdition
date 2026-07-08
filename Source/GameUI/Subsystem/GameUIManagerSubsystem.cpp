/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameUIManagerSubsystem.h"

#if !UE_BUILD_SHIPPING
#include "Blueprint/UserWidget.h"
#include "Development/DevelopmentHUDLayout.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameUILogChannels.h"
#include "HAL/IConsoleManager.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameUIManagerSubsystem)

#if !UE_BUILD_SHIPPING
namespace
{
	bool ParseDevelopmentHUDVisibility(const TArray<FString>& Args)
	{
		if (Args.Num() == 0)
		{
			return true;
		}

		const FString Argument = Args[0].TrimStartAndEnd();
		return !(Argument.Equals(TEXT("0")) ||
			Argument.Equals(TEXT("false"), ESearchCase::IgnoreCase) ||
			Argument.Equals(TEXT("off"), ESearchCase::IgnoreCase) ||
			Argument.Equals(TEXT("hide"), ESearchCase::IgnoreCase) ||
			Argument.Equals(TEXT("hidden"), ESearchCase::IgnoreCase));
	}

	UWorld* ResolveDevelopmentHUDWorld(UWorld* InWorld)
	{
		if (InWorld && InWorld->IsGameWorld())
		{
			return InWorld;
		}

		if (GEngine)
		{
			for (const FWorldContext& WorldContext : GEngine->GetWorldContexts())
			{
				UWorld* World = WorldContext.World();
				if (World && World->IsGameWorld())
				{
					return World;
				}
			}
		}

		return InWorld;
	}

	APlayerController* FindDevelopmentHUDPlayerController(UWorld* World)
	{
		if (!World)
		{
			return nullptr;
		}

		for (FConstPlayerControllerIterator It = World->GetPlayerControllerIterator(); It; ++It)
		{
			APlayerController* PlayerController = It->Get();
			if (PlayerController && PlayerController->IsLocalController())
			{
				return PlayerController;
			}
		}

		return World->GetFirstPlayerController();
	}

	void HandleShowDevelopmentHUDCommand(const TArray<FString>& Args, UWorld* InWorld)
	{
		UWorld* World = ResolveDevelopmentHUDWorld(InWorld);
		APlayerController* PlayerController = FindDevelopmentHUDPlayerController(World);
		if (!PlayerController)
		{
			UE_LOG(LogGameUI, Warning, TEXT("Orion.ShowDevelopmentHUD failed because no local player controller was found."));
			return;
		}

		UGameInstance* GameInstance = PlayerController->GetGameInstance();
		if (!GameInstance)
		{
			UE_LOG(LogGameUI, Warning, TEXT("Orion.ShowDevelopmentHUD failed because the local player controller has no game instance."));
			return;
		}

		UGameUIManagerSubsystem* UIManagerSubsystem = GameInstance->GetSubsystem<UGameUIManagerSubsystem>();
		if (!UIManagerSubsystem)
		{
			UE_LOG(LogGameUI, Warning, TEXT("Orion.ShowDevelopmentHUD failed because GameUIManagerSubsystem is unavailable."));
			return;
		}

		UIManagerSubsystem->SetDevelopmentHUDRequestedVisible(PlayerController, ParseDevelopmentHUDVisibility(Args));
	}
}

static FAutoConsoleCommandWithWorldAndArgs CVarShowDevelopmentHUD(
	TEXT("Orion.ShowDevelopmentHUD"),
	TEXT("Show or hide the development HUD panel. 0 hides it, 1 creates, adds, opens, and shows it."),
	FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(HandleShowDevelopmentHUDCommand)
);
#endif

UGameUIManagerSubsystem::UGameUIManagerSubsystem()
{
}

#if !UE_BUILD_SHIPPING
void UGameUIManagerSubsystem::CreateHUDLayout(APlayerController* OwingPlayer)
{
	GetOrCreateDevelopmentHUD(OwingPlayer);

#if !WITH_EDITOR
	if (!ShouldShowScreenMessagesInPackage)
	{
		GEngine->Exec(OwingPlayer->GetWorld(), TEXT("DisableAllScreenMessages"));
	}
#endif
}

void UGameUIManagerSubsystem::AddDevelopmentHUDToViewport(APlayerController* OwingPlayer)
{
	UDevelopmentHUDLayout* HUDLayout = GetOrCreateDevelopmentHUD(OwingPlayer);
	if (!HUDLayout)
	{
		return;
	}

	if (!HUDLayout->IsInViewport())
	{
		HUDLayout->AddToPlayerScreen(DevelopmentHUDZOrder);
	}

	const bool bVisible = bHasDevelopmentHUDVisibilityRequest ? bDevelopmentHUDRequestedVisible : ShouldShowDevelopmentHUDInPackage;
	HUDLayout->SetDevelopmentHUDVisible(bVisible, false);
}

void UGameUIManagerSubsystem::RemoveDevelopmentHUDToViewport()
{
	if (DevelopmentHUD)
	{
		DevelopmentHUD->SetDevelopmentHUDVisible(false, true);
		DevelopmentHUD->RemoveFromParent();
		DevelopmentHUD = nullptr;
	}
}

void UGameUIManagerSubsystem::SetDevelopmentHUDRequestedVisible(APlayerController* OwningPlayer, bool bVisible)
{
	bHasDevelopmentHUDVisibilityRequest = true;
	bDevelopmentHUDRequestedVisible = bVisible;

	UDevelopmentHUDLayout* HUDLayout = bVisible ? GetOrCreateDevelopmentHUD(OwningPlayer) : DevelopmentHUD.Get();
	if (!HUDLayout)
	{
		return;
	}

	if (bVisible && !HUDLayout->IsInViewport())
	{
		HUDLayout->AddToPlayerScreen(DevelopmentHUDZOrder);
	}

	HUDLayout->SetDevelopmentHUDVisible(bVisible, true);
}

UDevelopmentHUDLayout* UGameUIManagerSubsystem::GetOrCreateDevelopmentHUD(APlayerController* OwningPlayer)
{
	if (!OwningPlayer)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Development HUD creation skipped because the owning player is missing."));
		return nullptr;
	}

	if (ShouldRecreateDevelopmentHUD(OwningPlayer))
	{
		if (DevelopmentHUD)
		{
			DevelopmentHUD->RemoveFromParent();
			DevelopmentHUD = nullptr;
		}

		TSubclassOf<UDevelopmentHUDLayout> DevelopmentHUDClass = DevelopmentHUDSoftClass.LoadSynchronous();
		if (!DevelopmentHUDClass)
		{
			UE_LOG(LogGameUI, Warning, TEXT("Development HUD class failed to load: %s"), *DevelopmentHUDSoftClass.ToString());
			return nullptr;
		}

		DevelopmentHUD = CreateWidget<UDevelopmentHUDLayout>(OwningPlayer, DevelopmentHUDClass);
	}

	return DevelopmentHUD;
}

bool UGameUIManagerSubsystem::ShouldRecreateDevelopmentHUD(APlayerController* OwningPlayer) const
{
	if (!DevelopmentHUD)
	{
		return true;
	}

	if (!OwningPlayer)
	{
		return false;
	}

	return DevelopmentHUD->GetOwningPlayer() != OwningPlayer || DevelopmentHUD->GetWorld() != OwningPlayer->GetWorld();
}
#endif
