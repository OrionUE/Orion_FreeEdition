/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

class IOrionWebBrowserSingleton;

/**
 * WebBrowser initialization settings, can be used to override default init behaviors.
 */
struct FOrionBrowserInitSettings
{
public:
	/**
	 * Default constructor. Initializes all members with default behavior values.
	 */
	ORIONBROWSER_API FOrionBrowserInitSettings();

	// The string which is appended to the browser's user-agent value.
	FString ProductVersion;
};

/**
 * WebBrowserModule interface
 */
class IOrionBrowserModule : public IModuleInterface
{
public:
	/**
	 * Get or load the Web Browser Module
	 * 
	 * @return The loaded module
	 */
	static inline IOrionBrowserModule& Get() { return FModuleManager::LoadModuleChecked< IOrionBrowserModule >("OrionBrowser"); }
	
	/**
	 * Check whether the module has already been loaded
	 * 
	 * @return True if the module is loaded
	 */
	static inline bool IsAvailable() { return FModuleManager::Get().IsModuleLoaded("OrionBrowser"); }

	/**
	 * Returns a string suitable for use as the application (or product) part of a browser's user agent string.
	 * Includes the formatted application/product name and version, followed by the engine name and version.
	 *
	 * @param ApplicationName the application/product name
	 * @param ApplicationVersion the application/product version, will default to 1.0 if empty
	 * @return The user agent application string
	 */
	ORIONBROWSER_API static FString MakeUserAgentApplication(const FString& ApplicationName, const FString& ApplicationVersion = FString());

	/**
	 * Customize initialization settings. You must call this before the first GetSingleton call, in order to override init settings.
	 * 
	 * @param WebBrowserInitSettings The custom settings.
	 * @return true if the settings were used to initialize the singleton. False if the call was ignored due to singleton already existing.
	 */
	virtual bool CustomInitialize(const FOrionBrowserInitSettings& WebBrowserInitSettings) = 0;

	/**
	 * Initialize the browser runtime without creating a visible browser window.
	 *
	 * @return True if the singleton already exists or was created successfully.
	 */
	virtual bool Prewarm() = 0;

	/**
	 * Check whether the Web Browser Singleton has already been created.
	 *
	 * @return True if the singleton exists.
	 */
	virtual bool IsSingletonInitialized() const = 0;

	/**
	 * Get the Web Browser Singleton
	 * 
	 * @return The Web Browser Singleton
	 */
	virtual IOrionWebBrowserSingleton* GetSingleton() = 0;


	/**
	 * Check whether the web module loaded its requirements successfully
	 *
	 * @return True if the module load worked
	 */
	virtual bool IsWebModuleAvailable() const = 0;
};
