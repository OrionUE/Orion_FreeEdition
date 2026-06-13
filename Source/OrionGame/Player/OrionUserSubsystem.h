/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonUserSubsystem.h"
#include "OrionPlayerIDType.h"

#include "OrionUserSubsystem.generated.h"

UCLASS()
class UOrionUserSubsystem : public UCommonUserSubsystem
{
	GENERATED_BODY()

public:
	UOrionUserSubsystem();

	static UOrionUserSubsystem& Get(const UObject* WorldContextObject = nullptr);
	
	void InitializeUser();

	FOrionPlayerID GetPlayerID();

protected:
	void SetPlayerID();

protected:
	FOrionPlayerID PlayerID;

private:
	static TObjectPtr<UOrionUserSubsystem> UserSubsystem;
};
