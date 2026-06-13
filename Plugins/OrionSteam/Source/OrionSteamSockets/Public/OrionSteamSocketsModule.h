/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOrionSteamSockets, Log, All);

class ORIONSTEAMSOCKETS_API FOrionSteamSocketsModule : public IModuleInterface
{
public:
	FOrionSteamSocketsModule()
		: m_bEnabled(false)
	{
	}

	virtual ~FOrionSteamSocketsModule() override
	{
	}

	// IModuleInterface

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool SupportsDynamicReloading() override
	{
		return false;
	}

	static inline class FOrionSteamSocketsModule& Get()
	{
		return FModuleManager::LoadModuleChecked<class FOrionSteamSocketsModule>("OrionSteamSockets");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("OrionSteamSockets");
	}

	bool IsOrionSteamSocketsEnabled() const
	{
		return m_bEnabled;
	}

private:
	bool m_bEnabled;
};
