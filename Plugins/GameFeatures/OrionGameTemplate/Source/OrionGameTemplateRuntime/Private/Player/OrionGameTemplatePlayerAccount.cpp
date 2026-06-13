/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Player/OrionGameTemplatePlayerAccount.h"

#include "Player/OrionGameTemplateArchivePlayer.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplatePlayerAccount)

UOrionGameTemplatePlayerAccount::UOrionGameTemplatePlayerAccount()
	: Super()
{
	PlayerArchiveClass = UOrionGameTemplateArchivePlayer::StaticClass();
}

void UOrionGameTemplatePlayerAccount::Initialize(const FOrionPlayerID& InPlayerID)
{
	Super::Initialize(InPlayerID);
}

void UOrionGameTemplatePlayerAccount::OnGetPlayerArchive(UOrionArchivePlayer* OutPlayerArchive)
{
	Super::OnGetPlayerArchive(OutPlayerArchive);

	PlayerArchive = Cast<UOrionGameTemplateArchivePlayer>(OutPlayerArchive);
}
