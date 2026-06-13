/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameInstance.h"

#include "CommonUserSubsystem.h"
#include "OrionGameRenderManager.h"
#include "Audio/OrionAudioInputManager.h"
#include "Player/OrionLocalPlayer.h"
#include "Player/OrionPlayerController.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameInstance)

UOrionGameInstance::UOrionGameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

AOrionPlayerController* UOrionGameInstance::GetOrionPrimaryPlayerController() const
{
	return Cast<AOrionPlayerController>(UCommonGameInstance::GetPrimaryPlayerController(false));
}

void UOrionGameInstance::HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext)
{
	Super::HandlerUserInitialized(UserInfo, bSuccess, Error, RequestedPrivilege, OnlineContext);

	// If login succeeded, tell the local player to load their settings
	if (bSuccess && ensure(UserInfo))
	{
		UOrionLocalPlayer* LocalPlayer = Cast<UOrionLocalPlayer>(GetLocalPlayerByIndex(UserInfo->LocalPlayerIndex));

		// There will not be a local player attached to the dedicated server user
		if (LocalPlayer)
		{
			LocalPlayer->LoadSharedSettingsFromDisk();
		}
	}
}

void UOrionGameInstance::Init()
{
	Super::Init();

	RenderManager = new FOrionGameRenderManager();
	AudioInputManager = new FOrionAudioInputManager();
}
