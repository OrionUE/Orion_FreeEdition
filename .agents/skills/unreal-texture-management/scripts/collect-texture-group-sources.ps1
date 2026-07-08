param(
	[string]$ProjectRoot,
	[string]$EngineRoot,
	[string]$ProjectReport = "Saved\OrionUE\TextureManagement\texture-groups-report.json",
	[string]$ProjectConfig = "Config\DefaultDeviceProfiles.ini",
	[string]$Report = "Saved\OrionUE\TextureManagement\texture-group-sources-report.json",
	[string]$Csv = "Saved\OrionUE\TextureManagement\texture-group-sources-report.csv",
	[string]$Markdown = "Saved\OrionUE\TextureManagement\texture-group-sources-report.md"
)

$ErrorActionPreference = "Stop"

function Get-DefaultProjectRoot
{
	$Projects = @(Get-ChildItem -LiteralPath (Get-Location).Path -Filter "*.uproject" -File)
	if ($Projects.Count -eq 1)
	{
		return (Get-Location).Path
	}

	if ($Projects.Count -eq 0)
	{
		throw "No .uproject file found in the current directory. Pass -ProjectRoot explicitly."
	}

	throw "Multiple .uproject files found in the current directory. Pass -ProjectRoot explicitly."
}

function Test-EngineRoot
{
	param([string]$Candidate)

	if (-not $Candidate)
	{
		return $false
	}

	return (Test-Path -LiteralPath (Join-Path $Candidate "Engine\Config\BaseDeviceProfiles.ini")) -and
		(Test-Path -LiteralPath (Join-Path $Candidate "Engine\Source\Runtime\Engine\Classes\Engine\TextureDefines.h"))
}

function Get-EngineRootFromEditorCmd
{
	param([string]$EditorCmd)

	if (-not $EditorCmd -or -not (Test-Path -LiteralPath $EditorCmd))
	{
		return ""
	}

	$Path = (Resolve-Path -LiteralPath $EditorCmd).Path
	for ($Index = 0; $Index -lt 4; ++$Index)
	{
		$Path = Split-Path -Parent $Path
	}

	if (Test-EngineRoot -Candidate $Path)
	{
		return $Path
	}

	return ""
}

function Get-DefaultEngineRoot
{
	if (Test-EngineRoot -Candidate $env:UNREAL_ENGINE_ROOT)
	{
		return (Resolve-Path -LiteralPath $env:UNREAL_ENGINE_ROOT).Path
	}

	$FromEditorCmd = Get-EngineRootFromEditorCmd -EditorCmd $env:UNREAL_EDITOR_CMD
	if ($FromEditorCmd)
	{
		return $FromEditorCmd
	}

	$Candidates = @(
		"E:\UnrealEngine\UE_5.8",
		"C:\Program Files\Epic Games\UE_5.8",
		"C:\Program Files\Epic Games\UE_5.7",
		"C:\Program Files\Epic Games\UE_5.6"
	)

	foreach ($Candidate in $Candidates)
	{
		if (Test-EngineRoot -Candidate $Candidate)
		{
			return (Resolve-Path -LiteralPath $Candidate).Path
		}
	}

	throw "Unable to locate Unreal Engine root. Pass -EngineRoot explicitly."
}

$ResolvedProjectRoot = if ($ProjectRoot) { (Resolve-Path -LiteralPath $ProjectRoot).Path } else { Get-DefaultProjectRoot }
$ResolvedEngineRoot = if ($EngineRoot) { (Resolve-Path -LiteralPath $EngineRoot).Path } else { Get-DefaultEngineRoot }

if (-not (Test-EngineRoot -Candidate $ResolvedEngineRoot))
{
	throw "Invalid Unreal Engine root: $ResolvedEngineRoot"
}

$Script = Join-Path $PSScriptRoot "collect-texture-group-sources.py"
& python $Script `
	--project-root $ResolvedProjectRoot `
	--engine-root $ResolvedEngineRoot `
	--project-report $ProjectReport `
	--project-config $ProjectConfig `
	--json $Report `
	--csv $Csv `
	--markdown $Markdown

if ($LASTEXITCODE -ne 0)
{
	exit $LASTEXITCODE
}
