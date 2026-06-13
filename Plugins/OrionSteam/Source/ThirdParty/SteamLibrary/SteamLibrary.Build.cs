/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using System;
using System.IO;
using Microsoft.Win32;
using UnrealBuildTool;

// for UE5.0 and newer
using EpicGames.Core;

public class SteamLibrary : ModuleRules
{
	public string SDKBaseDir
	{
		get { return ModuleDirectory; }
	}

	public virtual string SDKBinariesDir
	{
		get
		{
			return Path.Combine(SDKBaseDir, "redistributable_bin");
		}
	}

	public virtual string SDKLibsDir
	{
		get { return Path.Combine(SDKBaseDir, "redistributable_bin"); }
	}

	public virtual string SDKIncludesDir
	{
		get
		{
			return Path.Combine(SDKBaseDir, "include");
		}
	}
	
	public static bool IsSteamInstalled()
	{
		const string SteamRegistryKey = @"HKEY_CURRENT_USER\Software\Valve\Steam";
		object SteamInstallPath = Registry.GetValue(SteamRegistryKey, "SteamPath", null);

		return (SteamInstallPath != null);
	}

	private static string GetSteamInstallPath()
	{
		string Result = "";
		const string SteamRegistryKey = @"HKEY_CURRENT_USER\Software\Valve\Steam";
		object SteamInstallPath = Registry.GetValue(SteamRegistryKey, "SteamPath", null);

		if (SteamInstallPath != null)
		{
			Result = SteamInstallPath.ToString();
		}

		return Result;
	}

		
	public SteamLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		bool bSupportedPlatform = Target.Platform == UnrealTargetPlatform.Linux || Target.Platform == UnrealTargetPlatform.Win64 || Target.Platform == UnrealTargetPlatform.Mac;

		ConfigHierarchy Config = ConfigCache.ReadHierarchy(ConfigHierarchyType.Engine, DirectoryReference.FromFile(Target.ProjectFile), Target.Platform);

		if (bSupportedPlatform)
		{
			PublicIncludePaths.Add(SDKIncludesDir);
			PublicSystemIncludePaths.Add(SDKIncludesDir);
			PrivateIncludePaths.Add(SDKIncludesDir);

			PublicDefinitions.Add("WITH_ORIONSTEAM=1");

			bool bOverrideMinHandshakeVersion = true;
			Config.GetBool("OrionOnlineSubsystemSteam", "bOverrideMinHandshakeVersion", out bOverrideMinHandshakeVersion);

			if (bOverrideMinHandshakeVersion)
			{
				int MinHandshakeVersion = 0;
				Config.GetInt32("OrionOnlineSubsystemSteam", "MinHandshakeVersion", out MinHandshakeVersion);
				if (MinHandshakeVersion >= 0)
				{
					PublicDefinitions.Add("HANDSHAKE_MIN_VERSION_OVERRIDE="+MinHandshakeVersion);
				}
			}

			bool bOverrideCurrentHandshakeVersion = true;
			Config.GetBool("OrionOnlineSubsystemSteam", "bOverrideCurrentHandshakeVersion", out bOverrideCurrentHandshakeVersion);

			if (bOverrideCurrentHandshakeVersion)
			{
				int CurrentHandshakeVersion = 0;
				Config.GetInt32("OrionOnlineSubsystemSteam", "CurrentHandshakeVersion", out CurrentHandshakeVersion);
				if (CurrentHandshakeVersion >= 0)
				{
					PublicDefinitions.Add("HANDSHAKE_VERSION_OVERRIDE="+CurrentHandshakeVersion);
				}
			}

			if (Target.Platform == UnrealTargetPlatform.Win64)
			{
				PublicAdditionalLibraries.Add(Path.Combine(SDKLibsDir, "win64", "steam_api64.lib"));
				PublicDelayLoadDLLs.Add("steam_api64.dll");
				RuntimeDependencies.Add(Path.Combine(SDKBinariesDir, "win64", "steam_api64.dll"));

				bool bIsSteamInstalled = IsSteamInstalled();

				if (bIsSteamInstalled)
				{
					Console.WriteLine("Steam Client is installed on this computer.");

					bool bCopySteamDlls = true;
		
					if (!Config.GetBool("OrionOnlineSubsystemSteam", "bCopySteamDlls", out bCopySteamDlls))
					{
						bCopySteamDlls = true;
					}

					if (Target.Type == TargetType.Server && bCopySteamDlls)
					{
						Console.WriteLine("Is server configuration -- Copying steam libs is enabled.");

						string SteamClientDllPath = GetSteamInstallPath(); 

						if (File.Exists(Path.Combine(SteamClientDllPath, "steamclient.dll")))
						{
							Console.WriteLine("Found steamclient.dll, adding file to packaging process.");
							RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "steamclient.dll"),  Path.Combine(SteamClientDllPath, "steamclient.dll"));
						}
						else
						{
							Console.WriteLine("Couldn't find steamclient.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
							throw new BuildException("Couldn't find steamclient.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
						}

						if (File.Exists(Path.Combine(SteamClientDllPath, "steamclient64.dll")))
						{
							Console.WriteLine("Found steamclient64.dll, adding file to packaging process.");
							RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "steamclient64.dll"),  Path.Combine(SteamClientDllPath, "steamclient64.dll"));
						}
						else
						{
							Console.WriteLine("Couldn't find steamclient64.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
							throw new BuildException("Couldn't find steamclient64.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
						}

						if (File.Exists(Path.Combine(SteamClientDllPath, "tier0_s.dll")))
						{
							Console.WriteLine("Found tier0_s.dll, adding file to packaging process.");
							RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "tier0_s.dll"),  Path.Combine(SteamClientDllPath, "tier0_s.dll"));
						}
						else
						{
							Console.WriteLine("Couldn't find tier0_s.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
							throw new BuildException("Couldn't find tier0_s.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
						}

						if (File.Exists(Path.Combine(SteamClientDllPath, "tier0_s64.dll")))
						{
							Console.WriteLine("Found tier0_s64.dll, adding file to packaging process.");
							RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "tier0_s64.dll"),  Path.Combine(SteamClientDllPath, "tier0_s64.dll"));
						}
						else
						{
							Console.WriteLine("Couldn't find tier0_s64.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
							throw new BuildException("Couldn't find tier0_s64.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
						}

						if (File.Exists(Path.Combine(SteamClientDllPath, "vstdlib_s.dll")))
						{
							Console.WriteLine("Found vstdlib_s.dll, adding file to packaging process.");
							RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "vstdlib_s.dll"),  Path.Combine(SteamClientDllPath, "vstdlib_s.dll"));
						}
						else
						{
							Console.WriteLine("Couldn't find vstdlib_s.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
							throw new BuildException("Couldn't find vstdlib_s.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
						}

						if (File.Exists(Path.Combine(SteamClientDllPath, "vstdlib_s64.dll")))
						{
							Console.WriteLine("Found vstdlib_s64.dll, adding file to packaging process.");
							RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "vstdlib_s64.dll"),  Path.Combine(SteamClientDllPath, "vstdlib_s64.dll"));
						}
						else
						{
							Console.WriteLine("Couldn't find vstdlib_s64.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
							throw new BuildException("Couldn't find vstdlib_s64.dll, make sure Steam Client is enabled or disable bCopySteamDlls in Project Settings.");
						}
					}
				}
				else
				{
					Console.WriteLine("Steam is not installed on this computer -- skipping steam client libs.");
				}
			}
			else if (Target.Platform == UnrealTargetPlatform.Linux)
			{
				PrivateRuntimeLibraryPaths.Add(SDKBinariesDir);
				PublicAdditionalLibraries.Add(Path.Combine(SDKBinariesDir, "linux64", "libsteam_api.so"));
				RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "libsteam_api.so"), Path.Combine(SDKBinariesDir, "linux64", "libsteam_api.so"));
				RuntimeDependencies.Add(Path.Combine(SDKBinariesDir, "linux64", "libsteam_api.so"));
			}
			else if (Target.Platform == UnrealTargetPlatform.Mac)
			{
				PublicDelayLoadDLLs.Add(Path.Combine(SDKBinariesDir, "osx", "libsteam_api.dylib"));
				RuntimeDependencies.Add(Path.Combine(SDKBinariesDir, "osx", "libsteam_api.dylib"));
				RuntimeDependencies.Add("$(BinaryOutputDir)/libsteam_api.dylib", Path.Combine(SDKBinariesDir, "osx", "libsteam_api.dylib"));
			}
		}
		else
		{
			PublicDefinitions.Add("WITH_ORIONSTEAM=0");
		}
	}
}
