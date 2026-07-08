/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrionBrowserModule.h"
#include "OrionBrowserConfig.h"
#include "OrionBrowserLog.h"
#include "OrionWebBrowserSingleton.h"
#include "Containers/Ticker.h"
#include "DynamicRHI.h"
#include "HAL/PlatformTime.h"
#include "Misc/App.h"
#include "Misc/CommandLine.h"
#include "Misc/CoreDelegates.h"
#include "Misc/EngineVersion.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#if ORION_WITH_CEF3
#	include "OrionCEF3Utils.h"
#	if CEF_VERSION_MAJOR >= 147
#		include "include/cef_version_info.h"
#	else
#		include "include/cef_version.h"
#	endif
#	if PLATFORM_MAC
#		include "include/wrapper/cef_library_loader.h"
#	endif
#endif

DEFINE_LOG_CATEGORY(LogOrionBrowser);

static FOrionWebBrowserSingleton* WebBrowserSingleton = nullptr;

FString IOrionBrowserModule::MakeUserAgentApplication(const FString& ApplicationName, const FString& ApplicationVersion)
{
	return FString::Printf(TEXT("%s/%s UnrealEngine/%s"), *ApplicationName, ApplicationVersion.IsEmpty() ? TEXT("1.0") : *ApplicationVersion, *FEngineVersion::Current().ToString());
}

FOrionBrowserInitSettings::FOrionBrowserInitSettings()
	: ProductVersion(IOrionBrowserModule::MakeUserAgentApplication(FApp::GetProjectName(), FApp::GetBuildVersion()))
{
}

class FOrionBrowserModule : public IOrionBrowserModule
{
private:
	// IModuleInterface Interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

public:
	virtual bool IsWebModuleAvailable() const override;
	virtual IOrionWebBrowserSingleton* GetSingleton() override;
	virtual bool CustomInitialize(const FOrionBrowserInitSettings& WebBrowserInitSettings) override;
	virtual bool Prewarm() override;
	virtual bool IsSingletonInitialized() const override;

private:
	void RegisterStartupPrewarm();
	void UnregisterStartupPrewarm();
	void ScheduleStartupPrewarm();
	void HandleEngineLoopInitComplete();
	bool HandleStartupPrewarmTick(float DeltaTime);
	bool ShouldRunStartupPrewarm() const;
	bool CanUseBrowserRuntime() const;
	bool CanPrewarmNow() const;

	FDelegateHandle EngineLoopInitCompleteHandle;
	FTSTicker::FDelegateHandle StartupPrewarmTickerHandle;
	double StartupPrewarmStartTime = 0.0;

#if ORION_WITH_CEF3
	bool bLoadedCEFModule = false;
	bool bMatchingCEFVersion = false;
#if PLATFORM_MAC
	// Dynamically load the CEF framework library.
	CefScopedLibraryLoader *CEFLibraryLoader = nullptr;
#endif
#endif
};

IMPLEMENT_MODULE(FOrionBrowserModule, OrionBrowser);

void FOrionBrowserModule::StartupModule()
{
#if ORION_WITH_CEF3
	if (!IsRunningCommandlet())
	{
		OrionCEF3Utils::BackupCEF3Logfile(FPaths::ProjectLogDir());
	}
	bLoadedCEFModule = OrionCEF3Utils::LoadCEF3Modules(true);
	if (!bLoadedCEFModule)
	{
		return;
	}
#if PLATFORM_MAC
	// Dynamically load the CEF framework library into this dylibs memory space.
	// CEF now loads function pointers at runtime so we need this to be dylib specific.
	CEFLibraryLoader = new CefScopedLibraryLoader();
	if (!CEFLibraryLoader->LoadInMain(TCHAR_TO_ANSI(*OrionCEF3Utils::GetCEF3ModulePath())))
	{
		UE_LOGF(LogOrionBrowser, Error, "Chromium loader initialization failed");
		return;
	}
#endif // PLATFORM_MAC
	const int CefVersionMajor = cef_version_info(0);
	const int CefVersionMinor = cef_version_info(1);
	const int CefVersionPatch = cef_version_info(2);
	const int CefCommitNumber = cef_version_info(3);
	UE_LOGF(LogOrionBrowser, Log, "Loaded CEF3 version %i.%i.%i.%i from %ls", CefVersionMajor, CefVersionMinor, CefVersionPatch, CefCommitNumber, *OrionCEF3Utils::GetCEF3ModulePath());
	if (CefVersionMajor != CEF_VERSION_MAJOR || CefVersionMinor != CEF_VERSION_MINOR || CefVersionPatch != CEF_VERSION_PATCH || CefCommitNumber != CEF_COMMIT_NUMBER)
	{
		UE_LOGF(LogOrionBrowser, Warning, "CEF3 loaded version mismatch! Module was built against %i.%i.%i.%i, check if library loading path is correct", CEF_VERSION_MAJOR, CEF_VERSION_MINOR, CEF_VERSION_PATCH, CEF_COMMIT_NUMBER);
	}
	else
	{
		bMatchingCEFVersion = true;
	}
#endif
	RegisterStartupPrewarm();
}

void FOrionBrowserModule::ShutdownModule()
{
	UnregisterStartupPrewarm();

	if (WebBrowserSingleton != nullptr)
	{
		delete WebBrowserSingleton;
		WebBrowserSingleton = nullptr;
	}

#if ORION_WITH_CEF3
	OrionCEF3Utils::UnloadCEF3Modules();
	bLoadedCEFModule = false;
	bMatchingCEFVersion = false;
#if PLATFORM_MAC
	delete CEFLibraryLoader;
	CEFLibraryLoader = nullptr;
#endif // PLATFORM_MAC
#endif
}

bool FOrionBrowserModule::CustomInitialize(const FOrionBrowserInitSettings& WebBrowserInitSettings)
{
	if (WebBrowserSingleton == nullptr)
	{
		WebBrowserSingleton = new FOrionWebBrowserSingleton(WebBrowserInitSettings);
		return true;
	}
	return false;
}

bool FOrionBrowserModule::Prewarm()
{
	if (WebBrowserSingleton != nullptr)
	{
		return true;
	}

	if (!CanUseBrowserRuntime() || !CanPrewarmNow())
	{
		return false;
	}

	UE_LOGF(LogOrionBrowser, Log, "Prewarming Orion CEF browser runtime");
	WebBrowserSingleton = new FOrionWebBrowserSingleton(FOrionBrowserInitSettings());
	return WebBrowserSingleton != nullptr;
}

bool FOrionBrowserModule::IsSingletonInitialized() const
{
	return WebBrowserSingleton != nullptr;
}

IOrionWebBrowserSingleton* FOrionBrowserModule::GetSingleton()
{
	if (WebBrowserSingleton == nullptr)
	{
		WebBrowserSingleton = new FOrionWebBrowserSingleton(FOrionBrowserInitSettings());
	}
	return WebBrowserSingleton;
}


bool FOrionBrowserModule::IsWebModuleAvailable() const
{
#if ORION_WITH_CEF3
	return bLoadedCEFModule && bMatchingCEFVersion;
#else
	return false;
#endif
}

void FOrionBrowserModule::RegisterStartupPrewarm()
{
	if (!ShouldRunStartupPrewarm())
	{
		return;
	}

	if (CanPrewarmNow())
	{
		ScheduleStartupPrewarm();
		return;
	}

	if (!EngineLoopInitCompleteHandle.IsValid())
	{
		EngineLoopInitCompleteHandle = FCoreDelegates::OnFEngineLoopInitComplete.AddRaw(this, &FOrionBrowserModule::HandleEngineLoopInitComplete);
	}
}

void FOrionBrowserModule::UnregisterStartupPrewarm()
{
	if (EngineLoopInitCompleteHandle.IsValid())
	{
		FCoreDelegates::OnFEngineLoopInitComplete.Remove(EngineLoopInitCompleteHandle);
		EngineLoopInitCompleteHandle.Reset();
	}

	if (StartupPrewarmTickerHandle.IsValid())
	{
		FTSTicker::RemoveTicker(StartupPrewarmTickerHandle);
		StartupPrewarmTickerHandle.Reset();
	}
}

void FOrionBrowserModule::ScheduleStartupPrewarm()
{
	if (WebBrowserSingleton != nullptr || StartupPrewarmTickerHandle.IsValid() || !ShouldRunStartupPrewarm())
	{
		return;
	}

	StartupPrewarmStartTime = FPlatformTime::Seconds();
	StartupPrewarmTickerHandle = FTSTicker::GetCoreTicker().AddTicker(
		FTickerDelegate::CreateRaw(this, &FOrionBrowserModule::HandleStartupPrewarmTick),
		OrionBrowserConfig::GetStartupPrewarmDelaySeconds());
}

void FOrionBrowserModule::HandleEngineLoopInitComplete()
{
	if (EngineLoopInitCompleteHandle.IsValid())
	{
		FCoreDelegates::OnFEngineLoopInitComplete.Remove(EngineLoopInitCompleteHandle);
		EngineLoopInitCompleteHandle.Reset();
	}

	ScheduleStartupPrewarm();
}

bool FOrionBrowserModule::HandleStartupPrewarmTick(float /*DeltaTime*/)
{
	if (WebBrowserSingleton != nullptr || !ShouldRunStartupPrewarm())
	{
		StartupPrewarmTickerHandle.Reset();
		return false;
	}

	if (!CanPrewarmNow())
	{
		const float MaxWaitSeconds = OrionBrowserConfig::GetStartupPrewarmMaxWaitSeconds();
		if (MaxWaitSeconds <= 0.0f || FPlatformTime::Seconds() - StartupPrewarmStartTime < MaxWaitSeconds)
		{
			return true;
		}

		UE_LOGF(LogOrionBrowser, Warning, "Startup prewarm skipped because the browser runtime was not ready after %.2f seconds", MaxWaitSeconds);
		StartupPrewarmTickerHandle.Reset();
		return false;
	}

	Prewarm();
	StartupPrewarmTickerHandle.Reset();
	return false;
}

bool FOrionBrowserModule::ShouldRunStartupPrewarm() const
{
	if (!OrionBrowserConfig::ShouldPrewarmOnStartup())
	{
		return false;
	}

	return CanUseBrowserRuntime();
}

bool FOrionBrowserModule::CanUseBrowserRuntime() const
{
	if (IsRunningCommandlet() || !FApp::CanEverRender() || FParse::Param(FCommandLine::Get(), TEXT("nocef")))
	{
		return false;
	}

	return IsWebModuleAvailable();
}

bool FOrionBrowserModule::CanPrewarmNow() const
{
	return IsInGameThread() && GDynamicRHI != nullptr;
}
