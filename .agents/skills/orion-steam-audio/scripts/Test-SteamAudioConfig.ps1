[CmdletBinding()]
param(
	[string]$ProjectRoot = (Get-Location).Path,
	[switch]$FailOnIssue
)

$ErrorActionPreference = "Stop"

function Resolve-ProjectRoot
{
	param([string]$StartPath)

	$Current = [System.IO.Path]::GetFullPath($StartPath)
	while ($true)
	{
		if ((Test-Path -LiteralPath $Current -PathType Container) -and (Get-ChildItem -LiteralPath $Current -Filter *.uproject -File -ErrorAction SilentlyContinue | Select-Object -First 1))
		{
			return $Current
		}

		$Parent = Split-Path -Parent $Current
		if ([string]::IsNullOrWhiteSpace($Parent) -or $Parent -eq $Current)
		{
			throw "Could not locate a .uproject from '$StartPath'."
		}

		$Current = $Parent
	}
}

function Read-TextIfExists
{
	param([string]$Path)

	if (Test-Path -LiteralPath $Path -PathType Leaf)
	{
		return [System.IO.File]::ReadAllText($Path)
	}

	return $null
}

function Get-IniSectionMap
{
	param(
		[string]$Text,
		[string]$Section
	)

	$Map = [ordered]@{}
	if ([string]::IsNullOrEmpty($Text))
	{
		return $Map
	}

	$Escaped = [Regex]::Escape($Section)
	$Match = [Regex]::Match($Text, "(?ms)^\[$Escaped\]\s*(.*?)(?=^\[|\z)")
	if (!$Match.Success)
	{
		return $Map
	}

	$Lines = $Match.Groups[1].Value -split "`r?`n"
	foreach ($Line in $Lines)
	{
		$Trimmed = $Line.Trim()
		if ($Trimmed.Length -eq 0 -or $Trimmed.StartsWith(";") -or $Trimmed.StartsWith("#"))
		{
			continue
		}

		$Pair = [Regex]::Match($Trimmed, "^[+\-]?([^=]+)=(.*)$")
		if ($Pair.Success)
		{
			$Map[$Pair.Groups[1].Value.Trim()] = $Pair.Groups[2].Value.Trim()
		}
	}

	return $Map
}

function Get-SteamAudioSdkVersion
{
	param([string]$VersionHeader)

	$Text = Read-TextIfExists -Path $VersionHeader
	if ([string]::IsNullOrEmpty($Text))
	{
		return $null
	}

	$Major = [Regex]::Match($Text, "STEAMAUDIO_VERSION_MAJOR\s+(\d+)")
	$Minor = [Regex]::Match($Text, "STEAMAUDIO_VERSION_MINOR\s+(\d+)")
	$Patch = [Regex]::Match($Text, "STEAMAUDIO_VERSION_PATCH\s+(\d+)")
	if ($Major.Success -and $Minor.Success -and $Patch.Success)
	{
		return "$($Major.Groups[1].Value).$($Minor.Groups[1].Value).$($Patch.Groups[1].Value)"
	}

	return $null
}

$Root = Resolve-ProjectRoot -StartPath $ProjectRoot
$Errors = New-Object System.Collections.Generic.List[string]
$Warnings = New-Object System.Collections.Generic.List[string]

$PluginRoot = Join-Path $Root "Plugins\Audio\SteamAudio"
$UpluginPath = Join-Path $PluginRoot "SteamAudio.uplugin"
$DefaultEnginePath = Join-Path $Root "Config\DefaultEngine.ini"
$DefaultGamePath = Join-Path $Root "Config\DefaultGame.ini"
$VersionHeaderPath = Join-Path $PluginRoot "Source\SteamAudioSDK\include\phonon_version.h"

if (!(Test-Path -LiteralPath $UpluginPath -PathType Leaf))
{
	$Errors.Add("Missing Plugins/Audio/SteamAudio/SteamAudio.uplugin.")
}

$PluginDescriptor = $null
if (Test-Path -LiteralPath $UpluginPath -PathType Leaf)
{
	$PluginDescriptor = Get-Content -Raw -LiteralPath $UpluginPath | ConvertFrom-Json
}

$DefaultEngineText = Read-TextIfExists -Path $DefaultEnginePath
$DefaultGameText = Read-TextIfExists -Path $DefaultGamePath

if ([string]::IsNullOrEmpty($DefaultEngineText))
{
	$Errors.Add("Missing Config/DefaultEngine.ini.")
}

if ([string]::IsNullOrEmpty($DefaultGameText))
{
	$Errors.Add("Missing Config/DefaultGame.ini.")
}

$PlatformSections = @(
	"/Script/WindowsTargetPlatform.WindowsTargetSettings",
	"/Script/MacTargetPlatform.MacTargetSettings",
	"/Script/LinuxTargetPlatform.LinuxTargetSettings",
	"/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"
)

$PlatformAudio = [ordered]@{}
foreach ($Section in $PlatformSections)
{
	$Map = Get-IniSectionMap -Text $DefaultEngineText -Section $Section
	if ($Map.Count -gt 0)
	{
		$PlatformAudio[$Section] = [ordered]@{
			SpatializationPlugin = $Map["SpatializationPlugin"]
			SourceDataOverridePlugin = $Map["SourceDataOverridePlugin"]
			ReverbPlugin = $Map["ReverbPlugin"]
			OcclusionPlugin = $Map["OcclusionPlugin"]
		}
	}
}

$SteamAudioSettings = Get-IniSectionMap -Text $DefaultEngineText -Section "/Script/SteamAudio.SteamAudioSettings"
if ($SteamAudioSettings.Count -eq 0)
{
	$Warnings.Add("Missing [/Script/SteamAudio.SteamAudioSettings] in Config/DefaultEngine.ini.")
}
else
{
	if ($SteamAudioSettings["SceneType"] -and $SteamAudioSettings["SceneType"] -ne "DEFAULT")
	{
		$Warnings.Add("SceneType is not DEFAULT. For release startup safety, prefer DEFAULT and use runtime guarded GPU enablement.")
	}

	if ($SteamAudioSettings["ReflectionEffectType"] -and $SteamAudioSettings["ReflectionEffectType"] -ne "CONVOLUTION")
	{
		$Warnings.Add("ReflectionEffectType is not CONVOLUTION. For release startup safety, prefer CONVOLUTION and use runtime guarded GPU enablement.")
	}
}

$AlwaysCookSteamAudioMaterials = $false
if (![string]::IsNullOrEmpty($DefaultGameText))
{
	$AlwaysCookSteamAudioMaterials = $DefaultGameText -match 'DirectoriesToAlwaysCook=\(Path="/SteamAudio/Materials"\)'
}

if (!$AlwaysCookSteamAudioMaterials)
{
	$Warnings.Add("Config/DefaultGame.ini does not always cook /SteamAudio/Materials.")
}

$WindowsAudio = $PlatformAudio["/Script/WindowsTargetPlatform.WindowsTargetSettings"]
if ($WindowsAudio)
{
	if ($WindowsAudio.SpatializationPlugin -ne "Steam Audio Spatialization")
	{
		$Warnings.Add("Windows SpatializationPlugin is not Steam Audio Spatialization.")
	}

	if ($WindowsAudio.ReverbPlugin -eq "Project Acoustics" -and $WindowsAudio.SpatializationPlugin -ne "Project Acoustics")
	{
		$Errors.Add("Windows uses Project Acoustics Reverb without Project Acoustics Spatialization.")
	}

	if ($WindowsAudio.OcclusionPlugin -eq "Steam Audio Occlusion" -and $WindowsAudio.SourceDataOverridePlugin -eq "Project Acoustics")
	{
		$Warnings.Add("Windows has Steam Audio Occlusion and Project Acoustics SourceDataOverride enabled; verify occlusion is not duplicated.")
	}
}
else
{
	$Warnings.Add("Windows audio platform section was not found.")
}

$ThirdPartyFiles = @(
	"Source\SteamAudioSDK\lib\windows-x64\phonon.dll",
	"Source\SteamAudioSDK\lib\windows-x64\TrueAudioNext.dll",
	"Source\SteamAudioSDK\lib\windows-x64\GPUUtilities.dll",
	"Source\SteamAudioSDK\lib\windows-x64\phonon.lib"
)

$MissingThirdPartyFiles = @()
foreach ($RelativePath in $ThirdPartyFiles)
{
	$FullPath = Join-Path $PluginRoot $RelativePath
	if (!(Test-Path -LiteralPath $FullPath -PathType Leaf))
	{
		$MissingThirdPartyFiles += $RelativePath
	}
}

foreach ($Missing in $MissingThirdPartyFiles)
{
	$Errors.Add("Missing SteamAudioSDK file: $Missing")
}

$Result = [ordered]@{
	projectRoot = $Root
	plugin = [ordered]@{
		found = Test-Path -LiteralPath $UpluginPath -PathType Leaf
		versionName = if ($PluginDescriptor) { $PluginDescriptor.VersionName } else { $null }
		sdkVersion = Get-SteamAudioSdkVersion -VersionHeader $VersionHeaderPath
		modules = if ($PluginDescriptor) { $PluginDescriptor.Modules } else { @() }
	}
	config = [ordered]@{
		platformAudio = $PlatformAudio
		steamAudioSettings = $SteamAudioSettings
		alwaysCookSteamAudioMaterials = $AlwaysCookSteamAudioMaterials
	}
	thirdParty = [ordered]@{
		missing = $MissingThirdPartyFiles
	}
	errors = $Errors.ToArray()
	warnings = $Warnings.ToArray()
	status = if ($Errors.Count -eq 0) { "ok" } else { "error" }
}

$Result | ConvertTo-Json -Depth 8

if ($FailOnIssue -and ($Errors.Count -gt 0 -or $Warnings.Count -gt 0))
{
	exit 1
}

if ($Errors.Count -gt 0)
{
	exit 1
}
