param(
	[string]$SourceMap,
	[string]$DestinationMap,
	[string]$Project,
	[string]$EditorCmd,
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\acoustic-proxy-map-report.json",
	[string]$Log = "Saved\OrionUE\ProjectAcoustics\acoustic-proxy-map.log",
	[int]$MaxInstancesPerComponent = 5000,
	[int]$MaxLevelInstanceDepth = 8,
	[int]$MaxChildActorDepth = 8,
	[ValidateSet("Bounds", "SourceMesh")]
	[string]$StaticMeshMode = "SourceMesh",
	[ValidateSet("Bounds", "Heightfield", "Skip")]
	[string]$LandscapeMode = "Heightfield",
	[int]$LandscapeStep = 1,
	[string]$LandscapeReport = "",
	[string]$LandscapeLog = "",
	[string]$LandscapeGeneratedAssetRoot = "/Game/Acoustics/Generated/Landscape",
	[bool]$FallbackBounds = $true,
	[bool]$IncludeInstanced = $true,
	[switch]$Apply,
	[switch]$Overwrite,
	[switch]$OnlyAcousticTagged,
	[switch]$IncludeMovable
)

$ErrorActionPreference = "Stop"

function Resolve-OutputPath
{
	param([string]$Path)

	if ([System.IO.Path]::IsPathRooted($Path))
	{
		return $Path
	}

	return Join-Path (Get-Location).Path $Path
}

function Get-DefaultProject
{
	$Projects = @(Get-ChildItem -LiteralPath (Get-Location).Path -Filter "*.uproject" -File)
	if ($Projects.Count -eq 1)
	{
		return $Projects[0].FullName
	}

	if ($Projects.Count -eq 0)
	{
		throw "No .uproject file found in the current directory. Pass -Project explicitly."
	}

	throw "Multiple .uproject files found in the current directory. Pass -Project explicitly."
}

function Get-DefaultEditorCmd
{
	if ($env:UNREAL_EDITOR_CMD)
	{
		return $env:UNREAL_EDITOR_CMD
	}

	$RunningEditor = Get-Process -Name UnrealEditor -ErrorAction SilentlyContinue | Where-Object { $_.Path } | Select-Object -First 1
	if ($RunningEditor)
	{
		$Candidate = Join-Path (Split-Path -Parent $RunningEditor.Path) "UnrealEditor-Cmd.exe"
		if (Test-Path -LiteralPath $Candidate)
		{
			return $Candidate
		}
	}

	$ProjectEngineRootFile = Join-Path (Get-Location).Path "Saved\OrionUE\UnrealEngine\InstallDirectory.txt"
	if (Test-Path -LiteralPath $ProjectEngineRootFile)
	{
		$EngineRoot = (Get-Content -LiteralPath $ProjectEngineRootFile -Raw).Trim()
		if ($EngineRoot)
		{
			$Candidate = Join-Path $EngineRoot "Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
			if (Test-Path -LiteralPath $Candidate)
			{
				return $Candidate
			}
		}
	}

	return "UnrealEditor-Cmd.exe"
}

if ([string]::IsNullOrWhiteSpace($SourceMap))
{
	throw "Pass -SourceMap, for example /Game/YourFolder/Maps/YourMap."
}

$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
$Script = Join-Path $PSScriptRoot "create-acoustic-proxy-map.py"
$ResolvedReport = Resolve-OutputPath -Path $Report
$ResolvedLog = Resolve-OutputPath -Path $Log
$ResolvedLandscapeReport = if ($LandscapeReport) { Resolve-OutputPath -Path $LandscapeReport } else { [System.IO.Path]::ChangeExtension($ResolvedReport, ".landscape.json") }
$ResolvedLandscapeLog = if ($LandscapeLog) { Resolve-OutputPath -Path $LandscapeLog } else { [System.IO.Path]::ChangeExtension($ResolvedLog, ".landscape.log") }

foreach ($OutputPath in @($ResolvedReport, $ResolvedLog, $ResolvedLandscapeReport, $ResolvedLandscapeLog))
{
	$Parent = Split-Path -Parent $OutputPath
	if ($Parent)
	{
		New-Item -ItemType Directory -Force -Path $Parent | Out-Null
	}
}

$env:ORION_ACOUSTIC_PROXY_SOURCE_MAP = $SourceMap
$env:ORION_ACOUSTIC_PROXY_DESTINATION_MAP = $DestinationMap
$env:ORION_ACOUSTIC_PROXY_REPORT = $ResolvedReport
$env:ORION_ACOUSTIC_PROXY_APPLY = if ($Apply) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PROXY_OVERWRITE = if ($Overwrite) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PROXY_ONLY_ACOUSTIC_TAGGED = if ($OnlyAcousticTagged) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PROXY_INCLUDE_MOVABLE = if ($IncludeMovable) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PROXY_INCLUDE_INSTANCED = if ($IncludeInstanced) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PROXY_FALLBACK_BOUNDS = if ($FallbackBounds) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PROXY_MAX_INSTANCES_PER_COMPONENT = [string]$MaxInstancesPerComponent
$env:ORION_ACOUSTIC_PROXY_MAX_LEVEL_INSTANCE_DEPTH = [string]$MaxLevelInstanceDepth
$env:ORION_ACOUSTIC_PROXY_MAX_CHILD_ACTOR_DEPTH = [string]$MaxChildActorDepth
$env:ORION_ACOUSTIC_PROXY_STATIC_MESH_MODE = $StaticMeshMode
$env:ORION_ACOUSTIC_PROXY_LANDSCAPE_MODE = if ($LandscapeMode -eq "Heightfield") { "Skip" } else { $LandscapeMode }

if (Test-Path -LiteralPath $ResolvedReport)
{
	Remove-Item -LiteralPath $ResolvedReport -Force
}

& $ResolvedEditorCmd $ResolvedProject -run=PythonScript -Script="$Script" -unattended -nop4 -nosplash -NullRHI -log="$ResolvedLog"
$EditorExitCode = $LASTEXITCODE
$ReportCompleted = $false
if (Test-Path -LiteralPath $ResolvedReport)
{
	try
	{
		$ReportJson = Get-Content -LiteralPath $ResolvedReport -Raw | ConvertFrom-Json
		$ReportCompleted = ($ReportJson.summary.completed -eq $true)
	}
	catch
	{
		$ReportCompleted = $false
	}
}

if ($EditorExitCode -ne 0 -and -not $ReportCompleted)
{
	exit $EditorExitCode
}

if ($EditorExitCode -ne 0)
{
	Write-Warning "UnrealEditor-Cmd returned exit code $EditorExitCode after the acoustic proxy report completed. Check the log for unrelated shutdown/startup errors."
}

if ($Apply -and $LandscapeMode -eq "Heightfield")
{
	$ActualDestinationMap = $DestinationMap
	try
	{
		$ReportJson = Get-Content -LiteralPath $ResolvedReport -Raw | ConvertFrom-Json
		if ($ReportJson.summary.destinationMap)
		{
			$ActualDestinationMap = [string]$ReportJson.summary.destinationMap
		}
	}
	catch
	{
		if ([string]::IsNullOrWhiteSpace($ActualDestinationMap))
		{
			throw "Could not read destination map from report: $ResolvedReport"
		}
	}

	if ([string]::IsNullOrWhiteSpace($ActualDestinationMap))
	{
		throw "Destination map is empty. Pass -DestinationMap or let the Python report provide summary.destinationMap."
	}

	if (Test-Path -LiteralPath $ResolvedLandscapeReport)
	{
		Remove-Item -LiteralPath $ResolvedLandscapeReport -Force
	}

	$LandscapeCommandletArgs = @(
		$ResolvedProject,
		"-run=ProjectAcousticsLandscapeProxy",
		"-SourceMap=$SourceMap",
		"-DestinationMap=$ActualDestinationMap",
		"-Report=$ResolvedLandscapeReport",
		"-LandscapeStep=$LandscapeStep",
		"-MaxLevelInstanceDepth=$MaxLevelInstanceDepth",
		"-GeneratedAssetRoot=$LandscapeGeneratedAssetRoot",
		"-unattended",
		"-nop4",
		"-nosplash",
		"-NullRHI",
		"-log=$ResolvedLandscapeLog"
	)
	& $ResolvedEditorCmd @LandscapeCommandletArgs
	$LandscapeExitCode = $LASTEXITCODE
	if ($LandscapeExitCode -ne 0)
	{
		exit $LandscapeExitCode
	}

	Write-Host "Landscape proxy report: $ResolvedLandscapeReport"
	Write-Host "Landscape log: $ResolvedLandscapeLog"
}

Write-Host "Acoustic proxy map report: $ResolvedReport"
Write-Host "Log: $ResolvedLog"
