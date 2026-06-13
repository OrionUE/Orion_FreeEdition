/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionUserSubsystem.h"

#if WITH_STEAM
#include "OrionSteamSDKAPI/OrionSteamUserLibrary.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionUserSubsystem)

TObjectPtr<UOrionUserSubsystem> UOrionUserSubsystem::UserSubsystem = nullptr;

UOrionUserSubsystem::UOrionUserSubsystem()
{
	UserSubsystem = nullptr;
}

UOrionUserSubsystem& UOrionUserSubsystem::Get(const UObject* WorldContextObject)
{
	if (UserSubsystem == nullptr)
	{
		const UWorld* World;
		if (WorldContextObject)
		{
			World = WorldContextObject->GetWorld();
		}
		else
		{
			World = GEngine->GetCurrentPlayWorld();
		}

		check(World);

		const UGameInstance* GameInstance = World->GetGameInstance();
		check(GameInstance);

		UserSubsystem = GameInstance->GetSubsystem<UOrionUserSubsystem>();
		checkf(UserSubsystem, TEXT("UserSubsystem未初始化或未注册"));
	}

	return *UserSubsystem;
}

void UOrionUserSubsystem::InitializeUser()
{
	SetPlayerID();
}

FOrionPlayerID UOrionUserSubsystem::GetPlayerID()
{
	if (PlayerID.IsEmpty())
	{
		SetPlayerID();
	}

	return PlayerID;
}

void UOrionUserSubsystem::SetPlayerID()
{
#if WITH_EDITOR
	PlayerID = FOrionPlayerID(TEXT("Editor"));
#elif WITH_STEAM
	PlayerID = FOrionPlayerID(UOrionSteamUserLibrary::GetLocalUserId());
#endif
}
