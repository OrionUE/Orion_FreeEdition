param(
	[string]$SourceMap,
	[string]$Project,
	[string]$EditorCmd,
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\assign-acoustic-materials-report.json",
	[string]$Log = "Saved\OrionUE\ProjectAcoustics\assign-acoustic-materials.log",
	[string]$Config = "Config\ProjectAcoustics.ini",
	[string]$KnownMaterials = "Plugins\Audio\ProjectAcoustics\Resources\DefaultMaterialProperties.json",
	[switch]$Apply
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
	throw "Pass -SourceMap, for example /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy."
}

$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
$Script = Join-Path $PSScriptRoot "assign-acoustic-materials.py"
$ResolvedReport = Resolve-OutputPath -Path $Report
$ResolvedLog = Resolve-OutputPath -Path $Log
$ResolvedConfig = Resolve-OutputPath -Path $Config
$ResolvedKnownMaterials = Resolve-OutputPath -Path $KnownMaterials

foreach ($OutputPath in @($ResolvedReport, $ResolvedLog, $ResolvedConfig))
{
	$Parent = Split-Path -Parent $OutputPath
	if ($Parent)
	{
		New-Item -ItemType Directory -Force -Path $Parent | Out-Null
	}
}

if (-not (Test-Path -LiteralPath $ResolvedKnownMaterials))
{
	throw "Known ProjectAcoustics material table not found: $ResolvedKnownMaterials"
}

if (Test-Path -LiteralPath $ResolvedReport)
{
	Remove-Item -LiteralPath $ResolvedReport -Force
}

$env:ORION_ACOUSTIC_MATERIAL_SOURCE_MAP = $SourceMap
$env:ORION_ACOUSTIC_MATERIAL_REPORT = $ResolvedReport
$env:ORION_ACOUSTIC_MATERIAL_APPLY = if ($Apply) { "1" } else { "0" }
$env:ORION_ACOUSTIC_MATERIAL_CONFIG = $ResolvedConfig
$env:ORION_ACOUSTIC_MATERIAL_KNOWN_MATERIALS = $ResolvedKnownMaterials

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
	Write-Warning "UnrealEditor-Cmd returned exit code $EditorExitCode after the acoustic material report completed. Check the log for unrelated shutdown/startup errors."
}

Write-Host "Acoustic material assignment report: $ResolvedReport"
Write-Host "Log: $ResolvedLog"
Write-Host "ProjectAcoustics config: $ResolvedConfig"
