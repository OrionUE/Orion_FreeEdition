param(
	[string]$TargetMap,
	[string]$Project,
	[string]$EditorCmd,
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\apply-acoustic-portaling-report.json",
	[string]$Log = "Saved\OrionUE\ProjectAcoustics\apply-acoustic-portaling.log",
	[switch]$Apply,
	[switch]$NoSave,
	[switch]$AllowProxyMap,
	[switch]$AllAttenuationAssets,
	[switch]$ForceComponentOverrides
)

$ErrorActionPreference = "Stop"

function Resolve-OutputPath
{
	param([string]$Path)

	if ([string]::IsNullOrWhiteSpace($Path))
	{
		return $Path
	}

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

if ([string]::IsNullOrWhiteSpace($TargetMap))
{
	throw "Pass -TargetMap with the real gameplay map, for example /Game/MC_Environment/Maps/MilitaryCamp."
}

if ($Apply)
{
	$RunningEditor = Get-Process -Name UnrealEditor -ErrorAction SilentlyContinue | Select-Object -First 1
	if ($RunningEditor)
	{
		Write-Warning "A running UnrealEditor process may hold the target .umap or attenuation asset locks. Close the editor if saving fails with Error Code 32."
	}
}

$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
$Script = Join-Path $PSScriptRoot "apply-acoustic-portaling.py"
$ResolvedReport = Resolve-OutputPath -Path $Report
$ResolvedLog = Resolve-OutputPath -Path $Log

foreach ($OutputPath in @($ResolvedReport, $ResolvedLog))
{
	$Parent = Split-Path -Parent $OutputPath
	if ($Parent)
	{
		New-Item -ItemType Directory -Force -Path $Parent | Out-Null
	}
}

if (Test-Path -LiteralPath $ResolvedReport)
{
	Remove-Item -LiteralPath $ResolvedReport -Force
}

$env:ORION_ACOUSTIC_PORTALING_TARGET_MAP = $TargetMap
$env:ORION_ACOUSTIC_PORTALING_REPORT = $ResolvedReport
$env:ORION_ACOUSTIC_PORTALING_APPLY = if ($Apply) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PORTALING_SAVE = if ($Apply -and -not $NoSave) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PORTALING_ALLOW_PROXY_MAP = if ($AllowProxyMap) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PORTALING_SCAN_ALL_ATTENUATIONS = if ($AllAttenuationAssets) { "1" } else { "0" }
$env:ORION_ACOUSTIC_PORTALING_FORCE_COMPONENT_OVERRIDES = if ($ForceComponentOverrides) { "1" } else { "0" }

& $ResolvedEditorCmd $ResolvedProject -run=PythonScript -Script="$Script" -unattended -nop4 -nosplash -NullRHI -NoSound -log="$ResolvedLog"
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
	Write-Warning "UnrealEditor-Cmd returned exit code $EditorExitCode after the acoustic portaling report completed. Check the log for unrelated shutdown/startup errors."
}

Write-Host "Acoustic portaling report: $ResolvedReport"
Write-Host "Log: $ResolvedLog"
Write-Host "Target map: $TargetMap"
