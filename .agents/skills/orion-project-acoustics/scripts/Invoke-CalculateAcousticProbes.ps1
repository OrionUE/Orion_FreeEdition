param(
	[string]$SourceMap,
	[ValidateSet("Fastest", "Quality")]
	[string]$Preset = "Fastest",
	[string]$Project,
	[string]$EditorCmd,
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\calculate-acoustic-probes-report.json",
	[string]$Log = "Saved\OrionUE\ProjectAcoustics\calculate-acoustic-probes.log",
	[string]$ProbeHealthReport,
	[string]$PreviousBakeDir,
	[string]$ContentDir,
	[string]$Prefix,
	[double]$CalibrationProbeCountA = 250.0,
	[double]$CalibrationMinutesA = 210.0,
	[double]$CalibrationProbeCountB = 1150.0,
	[double]$CalibrationMinutesB = 5760.0,
	[switch]$Overwrite,
	[switch]$AppendToExistingProbeList,
	[double]$AppendProbeDuplicateToleranceCm = 50.0,
	[switch]$AppendOnlyInTaggedRegion,
	[string]$AppendProbeRegionTag = "AcousticsProbeAppendRegion",
	[double]$AppendProbeRegionBoundsPaddingCm = 0.0,
	[switch]$StopOnLargeNavigationMesh,
	[switch]$SkipProbeHealthCheck,
	[switch]$FailOnKnownBadProbes,
	[switch]$DisableLocalCpuBakeTimeCalibration
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

function Get-SiblingReportPath
{
	param(
		[string]$Path,
		[string]$Suffix
	)

	$Parent = Split-Path -Parent $Path
	$Leaf = Split-Path -Leaf $Path
	$BaseName = [System.IO.Path]::GetFileNameWithoutExtension($Leaf)
	if ([string]::IsNullOrWhiteSpace($BaseName))
	{
		$BaseName = $Leaf
	}

	return Join-Path $Parent "${BaseName}${Suffix}"
}

function Add-SummaryProperty
{
	param(
		[object]$Summary,
		[string]$Name,
		[object]$Value
	)

	$Summary | Add-Member -NotePropertyName $Name -NotePropertyValue $Value -Force
}

if ([string]::IsNullOrWhiteSpace($SourceMap))
{
	throw "Pass -SourceMap, for example /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy."
}

if ($Overwrite -and $AppendToExistingProbeList)
{
	throw "-Overwrite cannot be combined with -AppendToExistingProbeList. Use -Overwrite for full regeneration, or -AppendToExistingProbeList to merge new Nav probes into the existing ProbeList."
}

$UseAppendProbeRegion = $AppendOnlyInTaggedRegion -or $PSBoundParameters.ContainsKey("AppendProbeRegionTag")
if ($UseAppendProbeRegion -and -not $AppendToExistingProbeList)
{
	throw "-AppendOnlyInTaggedRegion or -AppendProbeRegionTag requires -AppendToExistingProbeList."
}

if ($UseAppendProbeRegion -and [string]::IsNullOrWhiteSpace($AppendProbeRegionTag))
{
	throw "-AppendProbeRegionTag cannot be empty when regional append is enabled."
}

if ($AppendProbeRegionBoundsPaddingCm -lt 0.0)
{
	$AppendProbeRegionBoundsPaddingCm = 0.0
}

if (Get-Process -Name UnrealEditor -ErrorAction SilentlyContinue)
{
	Write-Warning "A running UnrealEditor process can hold ProjectAcousticsBakeUI.dll. If the commandlet is missing or stale, save and close the editor, rebuild ProjectAcousticsBakeUI, then rerun this script."
}

$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
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

$CommandletArgs = @(
	$ResolvedProject,
	"-run=ProjectAcousticsProbeBake",
	"-SourceMap=$SourceMap",
	"-Preset=$Preset",
	"-Report=$ResolvedReport",
	"-unattended",
	"-nop4",
	"-nosplash",
	"-NullRHI",
	"-log=$ResolvedLog"
)

if ($Overwrite)
{
	$CommandletArgs += "-Overwrite"
}

if ($AppendToExistingProbeList)
{
	$CommandletArgs += "-AppendToExistingProbeList"
	$CommandletArgs += "-AppendProbeDuplicateToleranceCm=$AppendProbeDuplicateToleranceCm"
	if ($UseAppendProbeRegion)
	{
		$CommandletArgs += "-AppendProbeRegionTag=$AppendProbeRegionTag"
		$CommandletArgs += "-AppendProbeRegionBoundsPaddingCm=$AppendProbeRegionBoundsPaddingCm"
	}
}

if ($StopOnLargeNavigationMesh)
{
	$CommandletArgs += "-StopOnLargeNavigationMesh"
}

if (-not $DisableLocalCpuBakeTimeCalibration)
{
	$CommandletArgs += "-UseLocalCpuBakeTimeCalibration"
	$CommandletArgs += "-CalibrationProbeCountA=$CalibrationProbeCountA"
	$CommandletArgs += "-CalibrationMinutesA=$CalibrationMinutesA"
	$CommandletArgs += "-CalibrationProbeCountB=$CalibrationProbeCountB"
	$CommandletArgs += "-CalibrationMinutesB=$CalibrationMinutesB"
}

if (-not [string]::IsNullOrWhiteSpace($ContentDir))
{
	$CommandletArgs += "-ContentDir=$ContentDir"
}

if (-not [string]::IsNullOrWhiteSpace($Prefix))
{
	$CommandletArgs += "-Prefix=$Prefix"
}

& $ResolvedEditorCmd @CommandletArgs
$EditorExitCode = $LASTEXITCODE
$ReportCompleted = $false
$ReportJson = $null
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
	Write-Warning "UnrealEditor-Cmd returned exit code $EditorExitCode after the acoustic probes report completed. Check the log for unrelated shutdown/startup errors."
}

Write-Host "Acoustic probes report: $ResolvedReport"
Write-Host "Log: $ResolvedLog"

if ($ReportJson -and $ReportJson.summary)
{
	$Summary = $ReportJson.summary
	Write-Host ("Probe count: {0}" -f $Summary.probeCount)
	if ($Summary.appendToExistingProbeList)
	{
		Write-Host ("Append probes: existing={0}, generated={1}, appended={2}, duplicateSkipped={3}, toleranceCm={4}" -f $Summary.existingProbeCount, $Summary.generatedProbeCount, $Summary.appendedProbeCount, $Summary.duplicateProbeCount, $Summary.appendProbeDuplicateToleranceCm)
		if (-not [string]::IsNullOrWhiteSpace([string]$Summary.appendProbeRegionTag))
		{
			Write-Host ("Append region: tag={0}, actors={1}, candidatesInRegion={2}, outOfRegionSkipped={3}, paddingCm={4}" -f $Summary.appendProbeRegionTag, $Summary.appendProbeRegionActorCount, $Summary.appendProbeRegionCandidateCount, $Summary.appendProbeOutOfRegionCount, $Summary.appendProbeRegionBoundsPaddingCm)
		}
	}
	Write-Host ("Estimated bake time: {0:n1} hours ({1:n2} days), model={2}" -f $Summary.estimatedProcessingHours, $Summary.estimatedProcessingDays, $Summary.estimationModel)
	if ($Summary.localCpuCalibration -and $Summary.localCpuCalibration.valid)
	{
		Write-Host ("Local CPU calibration: {0} probes={1:n1}h, {2} probes={3:n1}h, power={4:n3}" -f $Summary.localCpuCalibration.probeCountA, ($Summary.localCpuCalibration.minutesA / 60.0), $Summary.localCpuCalibration.probeCountB, ($Summary.localCpuCalibration.minutesB / 60.0), $Summary.localCpuCalibration.power)
	}
}

if ($ReportJson -and $ReportJson.summary -and $ReportCompleted -and -not $SkipProbeHealthCheck)
{
	$HealthScript = Join-Path (Get-Location).Path ".agents\skills\orion-project-acoustics\scripts\Test-AcousticProbeHealth.ps1"
	if (Test-Path -LiteralPath $HealthScript)
	{
		$ResolvedProbeHealthReport = if ([string]::IsNullOrWhiteSpace($ProbeHealthReport)) { Get-SiblingReportPath -Path $ResolvedReport -Suffix ".probe-health.json" } else { Resolve-OutputPath -Path $ProbeHealthReport }
		$HealthArgs = @(
			"-SourceMap", $SourceMap,
			"-Report", $ResolvedProbeHealthReport
		)

		if (-not [string]::IsNullOrWhiteSpace($ReportJson.summary.configFile))
		{
			$HealthArgs += @("-ConfigFile", [string]$ReportJson.summary.configFile)
		}
		if (-not [string]::IsNullOrWhiteSpace($ReportJson.summary.voxFile))
		{
			$HealthArgs += @("-VoxFile", [string]$ReportJson.summary.voxFile)
		}
		if (-not [string]::IsNullOrWhiteSpace($Prefix))
		{
			$HealthArgs += @("-Prefix", $Prefix)
		}
		if (-not [string]::IsNullOrWhiteSpace($PreviousBakeDir))
		{
			$HealthArgs += @("-PreviousBakeDir", $PreviousBakeDir)
		}
		if ($FailOnKnownBadProbes)
		{
			$HealthArgs += "-FailOnKnownBadProbes"
		}

		& powershell -NoProfile -ExecutionPolicy Bypass -File $HealthScript @HealthArgs
		$ProbeHealthExitCode = $LASTEXITCODE
		if (Test-Path -LiteralPath $ResolvedProbeHealthReport)
		{
			$ProbeHealthJson = Get-Content -LiteralPath $ResolvedProbeHealthReport -Raw | ConvertFrom-Json
			if ($ProbeHealthJson.summary)
			{
				Add-SummaryProperty -Summary $ReportJson.summary -Name "probeHealthReport" -Value $ResolvedProbeHealthReport
				Add-SummaryProperty -Summary $ReportJson.summary -Name "probeHealthStatus" -Value $ProbeHealthJson.summary.status
				Add-SummaryProperty -Summary $ReportJson.summary -Name "probeHealthKnownFailedProbeCount" -Value $ProbeHealthJson.summary.knownFailedProbeCount
				Add-SummaryProperty -Summary $ReportJson.summary -Name "probeHealthKnownFailedProbeIndices" -Value @($ProbeHealthJson.summary.knownFailedProbeIndices)
				Add-SummaryProperty -Summary $ReportJson.summary -Name "probeHealthErrorCount" -Value @($ProbeHealthJson.summary.errors).Count
				Add-SummaryProperty -Summary $ReportJson.summary -Name "probeHealthWarningCount" -Value @($ProbeHealthJson.summary.warnings).Count
				Add-SummaryProperty -Summary $ReportJson.summary -Name "probeHealthDefinitiveAirVoxelCheckAvailable" -Value $ProbeHealthJson.summary.definitiveAirVoxelCheck.availableInWindowsStep4
				@{ summary = $ReportJson.summary } | ConvertTo-Json -Depth 10 | Set-Content -LiteralPath $ResolvedReport -Encoding UTF8
				Write-Host ("Probe health status: {0}, known failed probes: {1}" -f $ProbeHealthJson.summary.status, $ProbeHealthJson.summary.knownFailedProbeCount)
			}
		}

		if ($ProbeHealthExitCode -ne 0)
		{
			exit $ProbeHealthExitCode
		}
	}
	else
	{
		Write-Warning "Probe health script is missing: $HealthScript"
	}
}
