param(
	[Parameter(Mandatory = $true)]
	[string]$ProjectFile,

	[Parameter(Mandatory = $true)]
	[string]$EngineDir,

	[string]$SteamBuildTargetName = "",

	[string]$OutputRoot = "",

	[string]$Timestamp = "",

	[string[]]$CookedCultures = @(),

	[ValidateSet("All", "Development", "Shipping", "Debug")]
	[string]$Configuration = "All"
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

function New-LauncherGuid
{
	return [Guid]::NewGuid().ToString("N").ToUpperInvariant()
}

function Convert-ToLauncherPath
{
	param(
		[Parameter(Mandatory = $true)]
		[string]$Path,

		[switch]$TrailingSlash
	)

	$ResolvedPath = $ExecutionContext.SessionState.Path.GetUnresolvedProviderPathFromPSPath($Path)
	$LauncherPath = $ResolvedPath -replace "\\", "/"

	if ($TrailingSlash -and -not $LauncherPath.EndsWith("/"))
	{
		$LauncherPath += "/"
	}

	return $LauncherPath
}

function Convert-ToJsonString
{
	param(
		[Parameter(Mandatory = $true)]
		[string]$Value
	)

	return ($Value | ConvertTo-Json -Compress)
}

function Convert-ToCookedCulturesJson
{
	param(
		[Parameter(Mandatory = $true)]
		[string[]]$Cultures
	)

	$Lines = foreach ($Culture in $Cultures)
	{
		"`t`t$(Convert-ToJsonString -Value $Culture)"
	}

	return ($Lines -join ",`r`n")
}
function Get-PackageDirectory
{
	param(
		[Parameter(Mandatory = $true)]
		[string]$ConfigurationName
	)

	$BuildFolder = "$ConfigurationName$SteamBuildTargetName"
	$PlatformFolder = "Windows-$PackageTimestamp"
	return Join-Path (Join-Path $OutputRootFullPath $BuildFolder) $PlatformFolder
}

function Install-Profile
{
	param(
		[Parameter(Mandatory = $true)]
		[string]$TemplatePath,

		[Parameter(Mandatory = $true)]
		[string]$ConfigurationName
	)

	$ProfileGuid = New-LauncherGuid
	$DeviceGroupGuid = New-LauncherGuid
	$SessionGuid = New-LauncherGuid
	$PackageDir = Convert-ToLauncherPath -Path (Get-PackageDirectory -ConfigurationName $ConfigurationName) -TrailingSlash
	$ProfileName = "${ProjectName}Steam_$ConfigurationName"

	$Template = [System.IO.File]::ReadAllText($TemplatePath)
	$Content = $Template.Replace("{{ProfileGuid}}", $ProfileGuid)
	$Content = $Content.Replace("{{DeviceGroupGuid}}", $DeviceGroupGuid)
	$Content = $Content.Replace("{{SessionGuid}}", $SessionGuid)
	$Content = $Content.Replace("{{ProjectName}}", $ProjectName)
	$Content = $Content.Replace("{{ProjectFilePath}}", $ProjectFileForLauncher)
	$Content = $Content.Replace("{{PackageDir}}", $PackageDir)
	$Content = $Content.Replace("{{CookedCulturesJson}}", $CookedCulturesJson)
	$Content = $Content.Replace("{{InitialCulture}}", $InitialCulture)
	$Content = $Content.Replace("{{SteamBuildTargetName}}", $SteamBuildTargetName)
	$Content = $Content.Replace("{{UnrealEditorCmdPath}}", $UnrealEditorCmdPath)
	$Content = $Content.Replace("{{SessionOwner}}", $env:USERNAME)

	$FileName = "$($ProfileName.ToUpperInvariant())_$ProfileGuid.ulp2"
	$OutputFile = Join-Path $ProfileDir $FileName
	[System.IO.File]::WriteAllText($OutputFile, $Content, [System.Text.UTF8Encoding]::new($false))
	Write-Output $OutputFile
}

$ProjectFileFullPath = $ExecutionContext.SessionState.Path.GetUnresolvedProviderPathFromPSPath($ProjectFile)
if (-not (Test-Path -LiteralPath $ProjectFileFullPath -PathType Leaf))
{
	throw "Project file does not exist: $ProjectFileFullPath"
}

$EngineDirFullPath = $ExecutionContext.SessionState.Path.GetUnresolvedProviderPathFromPSPath($EngineDir)
if (-not (Test-Path -LiteralPath $EngineDirFullPath -PathType Container))
{
	throw "EngineDir does not exist: $EngineDirFullPath"
}

$ProjectName = [System.IO.Path]::GetFileNameWithoutExtension($ProjectFileFullPath)
if ([string]::IsNullOrWhiteSpace($SteamBuildTargetName))
{
	$SteamBuildTargetName = "${ProjectName}Steam"
}

if ([string]::IsNullOrWhiteSpace($Timestamp))
{
	$PackageTimestamp = Get-Date -Format "yyyyMMdd-HHmmss"
}
else
{
	$PackageTimestamp = $Timestamp
}

if ($PackageTimestamp -notmatch "^\d{8}-\d{6}$")
{
	throw "Timestamp must match yyyyMMdd-HHmmss: $PackageTimestamp"
}

$ProjectRootFullPath = [System.IO.Path]::GetDirectoryName($ProjectFileFullPath)
if ([string]::IsNullOrWhiteSpace($OutputRoot))
{
	$ProjectParentFullPath = [System.IO.Directory]::GetParent($ProjectRootFullPath).FullName
	$OutputRootFullPath = Join-Path $ProjectParentFullPath "Packages"
}
else
{
	$OutputRootFullPath = $ExecutionContext.SessionState.Path.GetUnresolvedProviderPathFromPSPath($OutputRoot)
}

$SkillRoot = Split-Path -Parent (Split-Path -Parent $PSCommandPath)
$ResolvedCookedCultures = New-Object System.Collections.Generic.List[string]
$SeenCookedCultures = @{}
foreach ($Culture in $CookedCultures)
{
	$Value = $Culture.Trim()
	if (-not [string]::IsNullOrWhiteSpace($Value) -and -not $SeenCookedCultures.ContainsKey($Value))
	{
		$SeenCookedCultures[$Value] = $true
		$ResolvedCookedCultures.Add($Value) | Out-Null
	}
}

if ($ResolvedCookedCultures.Count -eq 0)
{
	$CultureScript = Join-Path $SkillRoot "scripts/resolve-packaging-cultures.ps1"
	if (Test-Path -LiteralPath $CultureScript)
	{
		foreach ($Culture in (& $CultureScript -ProjectRoot $ProjectRootFullPath))
		{
			$Value = $Culture.Trim()
			if (-not [string]::IsNullOrWhiteSpace($Value) -and -not $SeenCookedCultures.ContainsKey($Value))
			{
				$SeenCookedCultures[$Value] = $true
				$ResolvedCookedCultures.Add($Value) | Out-Null
			}
		}
	}
}

if ($ResolvedCookedCultures.Count -eq 0)
{
	foreach ($Culture in @("en", "zh-Hans"))
	{
		$ResolvedCookedCultures.Add($Culture) | Out-Null
	}
}

$CookedCulturesJson = Convert-ToCookedCulturesJson -Cultures $ResolvedCookedCultures.ToArray()
$InitialCulture = $ResolvedCookedCultures[0]
$TemplateDir = Join-Path $SkillRoot "assets/profile-templates"
$ProfileDir = Join-Path $EngineDirFullPath "Programs/UnrealFrontend/Profiles"
$UnrealEditorCmdPath = Convert-ToLauncherPath -Path (Join-Path $EngineDirFullPath "Binaries/Win64/UnrealEditor-Cmd.exe")
$ProjectFileForLauncher = Convert-ToLauncherPath -Path $ProjectFileFullPath

New-Item -ItemType Directory -Force -Path $ProfileDir | Out-Null

$Configurations =
	if ($Configuration -eq "All")
	{
		@("Development", "Shipping", "Debug")
	}
	else
	{
		@($Configuration)
	}

foreach ($ConfigName in $Configurations)
{
	$TemplatePath = Join-Path $TemplateDir "$ConfigName.ulp2.template.json"
	if (-not (Test-Path -LiteralPath $TemplatePath -PathType Leaf))
	{
		throw "Template not found: $TemplatePath"
	}

	Install-Profile -TemplatePath $TemplatePath -ConfigurationName $ConfigName
}
