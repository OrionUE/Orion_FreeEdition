param(
	[string]$SettingsAsset = "/Game/Acoustics/SourceDataOverride/AcousticsSettings_Default",
	[string[]]$Attenuation = @(),
	[string]$TargetMap,
	[string]$Project,
	[string]$EditorCmd,
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\configure-acoustic-source-data-override-report.json",
	[string]$Log = "Saved\OrionUE\ProjectAcoustics\configure-acoustic-source-data-override.log",
	[ValidateSet("Default", "True", "False")]
	[string]$ApplyAcousticsVolumes = "Default",
	[ValidateSet("Default", "True", "False")]
	[string]$EnablePortaling = "Default",
	[ValidateSet("Default", "True", "False")]
	[string]$EnableOcclusion = "Default",
	[ValidateSet("Default", "True", "False")]
	[string]$EnableReverb = "Default",
	[ValidateSet("Default", "True", "False")]
	[string]$ApplyDynamicOpenings = "Default",
	[ValidateSet("Default", "True", "False")]
	[string]$ShowAcousticParameters = "Default",
	[switch]$AllAttenuationAssets,
	[switch]$ReplaceExisting,
	[switch]$Apply,
	[switch]$NoSave,
	[switch]$AllowRunningEditor
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

function Convert-TriState
{
	param([string]$Value)

	if ($Value -eq "Default")
	{
		return ""
	}

	return $Value
}

if ([string]::IsNullOrWhiteSpace($SettingsAsset))
{
	throw "Pass -SettingsAsset, for example /Game/Acoustics/SourceDataOverride/AcousticsSettings_Default."
}

if ($Apply -and -not $NoSave)
{
	$RunningEditor = Get-Process -Name UnrealEditor -ErrorAction SilentlyContinue | Select-Object -First 1
	if ($RunningEditor -and -not $AllowRunningEditor)
	{
		throw "UnrealEditor is running and may lock .uasset saves. Close the editor before running this save operation, or pass -NoSave for a dry live-session update, or pass -AllowRunningEditor only if you accept partial-save risk."
	}
	if ($RunningEditor)
	{
		Write-Warning "A running UnrealEditor process may hold attenuation assets. -AllowRunningEditor was passed, so this run may fail or partially save assets if Windows reports Error Code 32."
	}
}

$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
$Script = Join-Path $PSScriptRoot "configure-acoustic-source-data-override.py"
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

$env:ORION_ACOUSTIC_SDO_SETTINGS_ASSET = $SettingsAsset
$env:ORION_ACOUSTIC_SDO_ATTENUATIONS = ($Attenuation -join ";")
$env:ORION_ACOUSTIC_SDO_TARGET_MAP = $TargetMap
$env:ORION_ACOUSTIC_SDO_REPORT = $ResolvedReport
$env:ORION_ACOUSTIC_SDO_APPLY = if ($Apply) { "1" } else { "0" }
$env:ORION_ACOUSTIC_SDO_SAVE = if ($Apply -and -not $NoSave) { "1" } else { "0" }
$env:ORION_ACOUSTIC_SDO_REPLACE_EXISTING = if ($ReplaceExisting) { "1" } else { "0" }
$env:ORION_ACOUSTIC_SDO_SCAN_ALL_ATTENUATIONS = if ($AllAttenuationAssets) { "1" } else { "0" }
$env:ORION_ACOUSTIC_SDO_APPLY_ACOUSTICS_VOLUMES = Convert-TriState -Value $ApplyAcousticsVolumes
$env:ORION_ACOUSTIC_SDO_ENABLE_PORTALING = Convert-TriState -Value $EnablePortaling
$env:ORION_ACOUSTIC_SDO_ENABLE_OCCLUSION = Convert-TriState -Value $EnableOcclusion
$env:ORION_ACOUSTIC_SDO_ENABLE_REVERB = Convert-TriState -Value $EnableReverb
$env:ORION_ACOUSTIC_SDO_APPLY_DYNAMIC_OPENINGS = Convert-TriState -Value $ApplyDynamicOpenings
$env:ORION_ACOUSTIC_SDO_SHOW_ACOUSTIC_PARAMETERS = Convert-TriState -Value $ShowAcousticParameters

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
	Write-Warning "UnrealEditor-Cmd returned exit code $EditorExitCode after the SourceDataOverride report completed. Check the log for unrelated shutdown/startup errors."
}

Write-Host "Acoustic SourceDataOverride report: $ResolvedReport"
Write-Host "Log: $ResolvedLog"
Write-Host "Settings asset: $SettingsAsset"
