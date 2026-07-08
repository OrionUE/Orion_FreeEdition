param(
	[string]$TargetMap,
	[string]$AcousticsData,
	[string]$Step5Report,
	[string]$Project,
	[string]$EditorCmd,
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\apply-acoustic-runtime-report.json",
	[string]$Log = "Saved\OrionUE\ProjectAcoustics\apply-acoustic-runtime.log",
	[string]$Folder = "Acoustics",
	[string]$AcousticsSpaceLabel = "AcousticsSpace",
	[string]$AcousticsDebugRendererLabel = "AcousticsDebugRenderer",
	[switch]$Apply,
	[switch]$NoSave,
	[switch]$AllowProxyMap
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

function Get-AcousticsDataFromStep5Report
{
	param([string]$Path)

	if ([string]::IsNullOrWhiteSpace($Path))
	{
		return ""
	}

	$ResolvedPath = Resolve-OutputPath -Path $Path
	if (-not (Test-Path -LiteralPath $ResolvedPath))
	{
		throw "Step 5 report does not exist: $ResolvedPath"
	}

	$Json = Get-Content -LiteralPath $ResolvedPath -Raw | ConvertFrom-Json
	if ($Json.summary.importedAsset)
	{
		return [string]$Json.summary.importedAsset
	}

	throw "Step 5 report does not contain summary.importedAsset: $ResolvedPath"
}

if ([string]::IsNullOrWhiteSpace($TargetMap))
{
	throw "Pass -TargetMap with the real gameplay map, for example /Game/MC_Environment/Maps/MilitaryCamp."
}

if ([string]::IsNullOrWhiteSpace($AcousticsData))
{
	$AcousticsData = Get-AcousticsDataFromStep5Report -Path $Step5Report
}

if ([string]::IsNullOrWhiteSpace($AcousticsData))
{
	throw "Pass -AcousticsData or -Step5Report. Example: /Game/Acoustics/MilitaryCamp_AcousticProxy_AcousticsData."
}

if ($Apply)
{
	$RunningEditor = Get-Process -Name UnrealEditor -ErrorAction SilentlyContinue | Select-Object -First 1
	if ($RunningEditor)
	{
		Write-Warning "A running UnrealEditor process may hold the target .umap file lock. Close the editor or run this step through a live editor session if saving fails with Error Code 32."
	}
}

$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
$Script = Join-Path $PSScriptRoot "apply-acoustic-runtime.py"
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

$env:ORION_ACOUSTIC_RUNTIME_TARGET_MAP = $TargetMap
$env:ORION_ACOUSTIC_RUNTIME_DATA = $AcousticsData
$env:ORION_ACOUSTIC_RUNTIME_REPORT = $ResolvedReport
$env:ORION_ACOUSTIC_RUNTIME_APPLY = if ($Apply) { "1" } else { "0" }
$env:ORION_ACOUSTIC_RUNTIME_SAVE = if ($Apply -and -not $NoSave) { "1" } else { "0" }
$env:ORION_ACOUSTIC_RUNTIME_ALLOW_PROXY_MAP = if ($AllowProxyMap) { "1" } else { "0" }
$env:ORION_ACOUSTIC_RUNTIME_FOLDER = $Folder
$env:ORION_ACOUSTIC_RUNTIME_SPACE_LABEL = $AcousticsSpaceLabel
$env:ORION_ACOUSTIC_RUNTIME_DEBUG_RENDERER_LABEL = $AcousticsDebugRendererLabel

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
	Write-Warning "UnrealEditor-Cmd returned exit code $EditorExitCode after the acoustic runtime report completed. Check the log for unrelated shutdown/startup errors."
}

Write-Host "Acoustic runtime setup report: $ResolvedReport"
Write-Host "Log: $ResolvedLog"
Write-Host "Target map: $TargetMap"
Write-Host "AcousticsData: $AcousticsData"
