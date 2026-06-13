/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Modules/ModuleInterface.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOrionOnlineSubsystemSteam, Log, All);

class FOrionOnlineSubsystemSteamModule : public IModuleInterface
{
public:
	FOrionOnlineSubsystemSteamModule()
		: m_SteamFactory(nullptr)
	{
	}

	virtual ~FOrionOnlineSubsystemSteamModule() override
	{
	}

	// IModuleInterface

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool SupportsDynamicReloading() override
	{
		return false;
	}

	virtual bool SupportsAutomaticShutdown() override
	{
		return false;
	}

private:
	class FOrionOnlineFactorySteam* m_SteamFactory;
};
