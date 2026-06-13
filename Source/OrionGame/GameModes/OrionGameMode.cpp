/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameMode.h"

#include "Engine/LevelScriptActor.h"
#include "OrionGameState.h"
#include "OrionLogChannels.h"
#include "OrionWorldSettings.h"
#include "LoadingProcessInterface.h"
#include "Session/OrionGameSession.h"
#include "Player/OrionPlayerController.h"
#include "Player/OrionPlayerState.h"
#include "Character/OrionCharacter.h"
#include "Development/OrionDeveloperSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Player/OrionPlayerSpawningManagerComponent.h"
#include "System/OrionAssetManager.h"
#include "UI/OrionHUD.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameMode)

AOrionGameMode::AOrionGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GameStateClass = AOrionGameState::StaticClass();
	GameSessionClass = AOrionGameSession::StaticClass();
	PlayerControllerClass = AOrionPlayerController::StaticClass();
	ReplaySpectatorPlayerControllerClass = AOrionReplayPlayerController::StaticClass();
	PlayerStateClass = AOrionPlayerState::StaticClass();
	DefaultPawnClass = AOrionCharacter::StaticClass();
	HUDClass = AOrionHUD::StaticClass();

	ExperienceDefinitionType = TEXT("OrionExperienceDefinition");
}

void AOrionGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	if (Cast<ILevelLoadingProcessInterface>(GetWorld()->GetLevelScriptActor()))
	{
		bStartPlayersAsSpectators = true;
	}
	else
	{
		bStartPlayersAsSpectators = false;
	}

	// Wait for the next frame to give time to initialize startup settings
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::HandleMatchAssignmentIfNotExpectingOne);
}

void AOrionGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	ErrorMessage = GameSession->ApproveLogin(Options);
	FGameModeEvents::GameModePreLoginEvent.Broadcast(this, UniqueId, ErrorMessage);
}

AActor* AOrionGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	if (UOrionPlayerSpawningManagerComponent* PlayerSpawningComponent = GameState->FindComponentByClass<UOrionPlayerSpawningManagerComponent>())
	{
		return PlayerSpawningComponent->ChoosePlayerStart(Player);
	}

	return Super::ChoosePlayerStart_Implementation(Player);
}

void AOrionGameMode::FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation)
{
	if (UOrionPlayerSpawningManagerComponent* PlayerSpawningComponent = GameState->FindComponentByClass<UOrionPlayerSpawningManagerComponent>())
	{
		PlayerSpawningComponent->FinishRestartPlayer(NewPlayer, StartRotation);
	}

	Super::FinishRestartPlayer(NewPlayer, StartRotation);
}

bool AOrionGameMode::PlayerCanRestart_Implementation(APlayerController* Player)
{
	return Super::PlayerCanRestart_Implementation(Player);
}

bool AOrionGameMode::ControllerCanRestart(AController* Controller)
{
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{	
		if (!AGameModeBase::PlayerCanRestart_Implementation(PC))
		{
			return false;
		}
	}
	else
	{
		// Bot version of Super::PlayerCanRestart_Implementation
		if ((Controller == nullptr) || Controller->IsPendingKillPending())
		{
			return false;
		}
	}

	if (UOrionPlayerSpawningManagerComponent* PlayerSpawningComponent = GameState->FindComponentByClass<UOrionPlayerSpawningManagerComponent>())
	{
		return PlayerSpawningComponent->ControllerCanRestart(Controller);
	}

	return true;
}

void AOrionGameMode::HandleMatchAssignmentIfNotExpectingOne()
{
	FPrimaryAssetId ExperienceID;
	FString ExperienceIDSource;

	// Precedence order (highest wins)
	//  - Matchmaking assignment (if present)
	//  - URL Options override
	//  - Developer Settings (PIE only)
	//  - Command Line override
	//  - World Settings
	//  - Dedicated server
	//  - Default experience

	UWorld* World = GetWorld();

	if (!ExperienceID.IsValid() && UGameplayStatics::HasOption(OptionsString, TEXT("Experience")))
	{
		const FString ExperienceFromOptions = UGameplayStatics::ParseOption(OptionsString, TEXT("Experience"));
		ExperienceID = FPrimaryAssetId(FPrimaryAssetType(ExperienceDefinitionType), FName(*ExperienceFromOptions));
		ExperienceIDSource = TEXT("OptionsString");
	}

	if (!ExperienceID.IsValid() && World->IsPlayInEditor())
	{
		ExperienceID = GetDefault<UOrionDeveloperSettings>()->ExperienceOverride;
		ExperienceIDSource = TEXT("DeveloperSettings");
	}

	// See if the command line wants to set the experience
	if (!ExperienceID.IsValid())
	{
		FString ExperienceFromCommandLine;
		if (FParse::Value(FCommandLine::Get(), TEXT("Experience="), ExperienceFromCommandLine))
		{
			ExperienceID = FPrimaryAssetId::ParseTypeAndName(ExperienceFromCommandLine);
			if (!ExperienceID.PrimaryAssetType.IsValid())
			{
				ExperienceID = FPrimaryAssetId(FPrimaryAssetType(ExperienceDefinitionType), FName(*ExperienceFromCommandLine));
			}
			ExperienceIDSource = TEXT("CommandLine");
		}
	}

	// See if the world settings has a default experience
	if (!ExperienceID.IsValid())
	{
		if (AOrionWorldSettings* TypedWorldSettings = Cast<AOrionWorldSettings>(GetWorldSettings()))
		{
			ExperienceID = TypedWorldSettings->GetDefaultGameplayExperience();
			ExperienceIDSource = TEXT("WorldSettings");
		}
	}

	UOrionAssetManager& AssetManager = UOrionAssetManager::Get();
	FAssetData Dummy;
	if (ExperienceID.IsValid() && !AssetManager.GetPrimaryAssetData(ExperienceID, /*out*/ Dummy))
	{
		UE_LOG(LogOrionExperience, Error, TEXT("EXPERIENCE: Wanted to use %s but couldn't find it, falling back to the default)"), *ExperienceID.ToString());
		ExperienceID = FPrimaryAssetId();
	}

	// Final fallback to the default experience
	if (!ExperienceID.IsValid())
	{
		if (TryDedicatedServerLogin())
		{
			// This will start to host as a dedicated server
			return;
		}

		// TODO: Pull this from a config setting or something
		ExperienceID = FPrimaryAssetId(FPrimaryAssetType(ExperienceDefinitionType), FName("BP_DefaultExperience"));
		ExperienceIDSource = TEXT("Default");
	}

	OnMatchAssignmentGiven(ExperienceID, ExperienceIDSource);
}
