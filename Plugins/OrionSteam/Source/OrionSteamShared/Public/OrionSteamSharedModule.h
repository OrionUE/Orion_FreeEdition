/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "OrionSteamSharedPackage.h"

#define LOADING_STEAM_CLIENT_LIBRARY_DYNAMICALLY (PLATFORM_WINDOWS || PLATFORM_MAC || (PLATFORM_LINUX && !IS_MONOLITHIC))
#define LOADING_STEAM_SERVER_LIBRARY_DYNAMICALLY (PLATFORM_WINDOWS || (PLATFORM_LINUX && !IS_MONOLITHIC) || PLATFORM_MAC)
#define LOADING_STEAM_LIBRARIES_DYNAMICALLY (LOADING_STEAM_CLIENT_LIBRARY_DYNAMICALLY || LOADING_STEAM_SERVER_LIBRARY_DYNAMICALLY)

DECLARE_LOG_CATEGORY_EXTERN(LogOrionSteamShared, Log, All);

class ORIONSTEAMSHARED_API FOrionSteamSharedModule : public IModuleInterface
{
public:
	FOrionSteamSharedModule()
		: m_SteamDLLHandle(nullptr),
		  m_SteamServerDLLHandle(nullptr),
		  m_bForceLoadSteamClientDll(false),
		  m_SteamClientObserver(nullptr),
		  m_SteamServerObserver(nullptr)
	{
	}

	virtual ~FOrionSteamSharedModule() override
	{
	}

	// IModuleInterface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool SupportsDynamicReloading() override
	{
		return false;
	}

	TSharedPtr<class FOrionOnlineSteamClientInstanceHandler> ObtainSteamClientInstanceHandle();
	TSharedPtr<class FOrionOnlineSteamServerInstanceHandler> ObtainSteamServerInstanceHandle();

	bool AreSteamDllsLoaded() const;
	FString GetSteamModulePath() const;
	bool IsLoadingServerClientDlls() const
	{
		return m_bForceLoadSteamClientDll;
	}
	bool CanLoadClientDllsOnServer() const;

	static inline class FOrionSteamSharedModule& Get()
	{
		return FModuleManager::LoadModuleChecked<class FOrionSteamSharedModule>("OrionSteamShared");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("OrionSteamShared");
	}

private:
	void* m_SteamDLLHandle;
	void* m_SteamServerDLLHandle;
	bool m_bForceLoadSteamClientDll;

	TWeakPtr<FOrionOnlineSteamClientInstanceHandler> m_SteamClientObserver;
	TWeakPtr<FOrionOnlineSteamServerInstanceHandler> m_SteamServerObserver;

	void LoadSteamModules();
	void UnloadSteamModules();
};

class ORIONSTEAMSHARED_API FOrionSteamInstanceHandlerBase
{
public:
	virtual ~FOrionSteamInstanceHandlerBase()
	{
	}

	virtual bool IsInitialized() const
	{
		return m_bInitialized;
	}
	int32 GetGamePort() const
	{
		return m_GamePort;
	}

protected:
	FOrionSteamInstanceHandlerBase();

	bool m_bInitialized;
	int32 m_GamePort;

	virtual bool CanCleanUp() const;
	virtual void Destroy();
	virtual void InternalShutdown() = 0;
};

class ORIONSTEAMSHARED_API FOrionOnlineSteamClientInstanceHandler final : public FOrionSteamInstanceHandlerBase
{
public:
	virtual ~FOrionOnlineSteamClientInstanceHandler() override
	{
		Destroy();
	}

	PACKAGE_SCOPE : FOrionOnlineSteamClientInstanceHandler(FOrionSteamSharedModule* SteamInitializer);

protected:
	virtual void InternalShutdown() override;

private:
	FOrionOnlineSteamClientInstanceHandler()
		: FOrionSteamInstanceHandlerBase()
	{
	}
};

class ORIONSTEAMSHARED_API FOrionOnlineSteamServerInstanceHandler final : public FOrionSteamInstanceHandlerBase
{
public:
	virtual ~FOrionOnlineSteamServerInstanceHandler() override
	{
		Destroy();
	}

	int32 GetQueryPort() const
	{
		return m_QueryPort;
	}

	PACKAGE_SCOPE : FOrionOnlineSteamServerInstanceHandler(FOrionSteamSharedModule* SteamInitializer);

protected:
	int32 m_QueryPort;
	virtual void InternalShutdown() override;

private:
	FOrionOnlineSteamServerInstanceHandler()
		: FOrionSteamInstanceHandlerBase(),
		  m_QueryPort(-1)
	{
	}
};
