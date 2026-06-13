param(
	[Parameter(Mandatory = $true)]
	[string]$ProjectFile,

	[Parameter(Mandatory = $true)]
	[string]$EngineDir,

	[string]$SteamBuildTargetName = "",

	[string]$OutputRoot = "",

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
	$PackageDir = Convert-ToLauncherPath -Path (Join-Path $OutputRootFullPath $ConfigurationName) -TrailingSlash
	$ProfileName = "${ProjectName}Steam_$ConfigurationName"

	$Template = [System.IO.File]::ReadAllText($TemplatePath)
	$Content = $Template.Replace("{{ProfileGuid}}", $ProfileGuid)
	$Content = $Content.Replace("{{DeviceGroupGuid}}", $DeviceGroupGuid)
	$Content = $Content.Replace("{{SessionGuid}}", $SessionGuid)
	$Content = $Content.Replace("{{ProjectName}}", $ProjectName)
	$Content = $Content.Replace("{{ProjectFilePath}}", $ProjectFileForLauncher)
	$Content = $Content.Replace("{{PackageDir}}", $PackageDir)
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

if ([string]::IsNullOrWhiteSpace($OutputRoot))
{
	$OutputRootFullPath = Join-Path ([System.IO.Path]::GetDirectoryName($ProjectFileFullPath)) "Packages"
}
else
{
	$OutputRootFullPath = $ExecutionContext.SessionState.Path.GetUnresolvedProviderPathFromPSPath($OutputRoot)
}

$SkillRoot = Split-Path -Parent (Split-Path -Parent $PSCommandPath)
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
