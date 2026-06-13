/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFrontendPlayerAccount.h"

#include "SaveGame/OrionFrontendArchivePlayer.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFrontendPlayerAccount)

UOrionFrontendPlayerAccount::UOrionFrontendPlayerAccount()
	: Super()
{
	PlayerArchiveClass = UOrionFrontendArchivePlayer::StaticClass();
}

void UOrionFrontendPlayerAccount::Initialize(const FOrionPlayerID& InPlayerID)
{
	Super::Initialize(InPlayerID);
}

void UOrionFrontendPlayerAccount::OnGetPlayerArchive(UOrionArchivePlayer* OutPlayerArchive)
{
	Super::OnGetPlayerArchive(OutPlayerArchive);
}
