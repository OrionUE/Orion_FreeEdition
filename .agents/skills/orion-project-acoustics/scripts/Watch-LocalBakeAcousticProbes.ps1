param(
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\local-bake-report.json",
	[string]$MonitorReport,
	[string]$Project,
	[string]$EditorCmd,
	[int]$PollSeconds = 30,
	[int]$FinalizeGracePolls = 2,
	[switch]$Once,
	[switch]$SkipAceCopyToContent,
	[switch]$SkipUAssetImport
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

function Get-DefaultMonitorReport
{
	param([string]$ResolvedReport)

	$Parent = Split-Path -Parent $ResolvedReport
	$FileName = [System.IO.Path]::GetFileNameWithoutExtension($ResolvedReport)
	if ([string]::IsNullOrWhiteSpace($Parent))
	{
		return "$FileName.monitor.json"
	}

	return Join-Path $Parent "$FileName.monitor.json"
}

function Read-LocalBakeSummary
{
	param([string]$Path)

	if (-not (Test-Path -LiteralPath $Path))
	{
		throw "LocalBake report does not exist: $Path"
	}

	$Json = Get-Content -LiteralPath $Path -Raw | ConvertFrom-Json
	if (-not $Json.summary)
	{
		throw "LocalBake report has no summary: $Path"
	}

	return $Json.summary
}

function Get-ProcessorProcessForBakeDir
{
	param([string]$BakeDir)

	if ([string]::IsNullOrWhiteSpace($BakeDir))
	{
		return $null
	}

	$ExpectedPath = Join-Path $BakeDir "Triton.LocalProcessor.exe"
	$Processors = @(Get-Process -Name Triton.LocalProcessor -ErrorAction SilentlyContinue | Where-Object {
		try
		{
			$_.Path -and ([System.IO.Path]::GetFullPath($_.Path) -ieq [System.IO.Path]::GetFullPath($ExpectedPath))
		}
		catch
		{
			$false
		}
	})

	return $Processors | Select-Object -First 1
}

function Get-ArtifactCount
{
	param([string]$BakeDir)

	if ([string]::IsNullOrWhiteSpace($BakeDir) -or -not (Test-Path -LiteralPath $BakeDir))
	{
		return 0
	}

	return @(Get-ChildItem -LiteralPath $BakeDir -Filter "*.enc" -File -ErrorAction SilentlyContinue).Count
}

function Get-OutputAceFile
{
	param(
		[object]$Summary,
		[string]$BakeDir,
		[string]$Prefix
	)

	if ($Summary.outputAceFile -and (Test-Path -LiteralPath ([string]$Summary.outputAceFile)))
	{
		return [string]$Summary.outputAceFile
	}

	if (-not [string]::IsNullOrWhiteSpace($BakeDir) -and -not [string]::IsNullOrWhiteSpace($Prefix))
	{
		$ExpectedAce = Join-Path $BakeDir "$Prefix.ace"
		if (Test-Path -LiteralPath $ExpectedAce)
		{
			return $ExpectedAce
		}

		$ExtensionlessOutput = Join-Path $BakeDir $Prefix
		if (Test-Path -LiteralPath $ExtensionlessOutput)
		{
			return $ExtensionlessOutput
		}
	}

	if (-not [string]::IsNullOrWhiteSpace($BakeDir) -and (Test-Path -LiteralPath $BakeDir))
	{
		$AceCandidates = @(Get-ChildItem -LiteralPath $BakeDir -Filter "*.ace" -File -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending)
		if ($AceCandidates.Count -gt 0)
		{
			return $AceCandidates[0].FullName
		}
	}

	return ""
}

function Get-RecentRatePerMinute
{
	param([System.Collections.IEnumerable]$History)

	$Points = @($History)
	if ($Points.Count -lt 2)
	{
		return 0.0
	}

	$First = $Points[0]
	$Last = $Points[$Points.Count - 1]
	$DeltaArtifacts = [double]$Last.completedArtifacts - [double]$First.completedArtifacts
	$DeltaMinutes = ([datetime]$Last.time - [datetime]$First.time).TotalMinutes
	if ($DeltaArtifacts -le 0 -or $DeltaMinutes -le 0)
	{
		return 0.0
	}

	return $DeltaArtifacts / $DeltaMinutes
}

function Write-MonitorReport
{
	param(
		[string]$Path,
		[hashtable]$Data
	)

	$Parent = Split-Path -Parent $Path
	if ($Parent)
	{
		New-Item -ItemType Directory -Force -Path $Parent | Out-Null
	}

	$Summary = [ordered]@{
		status = $Data.Status
		sourceStatus = $Data.SourceStatus
		sourceReport = $Data.SourceReport
		sourceMap = $Data.SourceMap
		prefix = $Data.Prefix
		probeCount = $Data.ProbeCount
		completedProbeArtifacts = $Data.CompletedProbeArtifacts
		percentComplete = [Math]::Round([double]$Data.PercentComplete, 3)
		elapsedMinutes = [Math]::Round([double]$Data.ElapsedMinutes, 3)
		estimatedRemainingMinutes = [Math]::Round([double]$Data.EstimatedRemainingMinutes, 3)
		estimatedRemainingHours = [Math]::Round(([double]$Data.EstimatedRemainingMinutes / 60.0), 3)
		cumulativeRemainingMinutes = [Math]::Round([double]$Data.CumulativeRemainingMinutes, 3)
		recentRemainingMinutes = [Math]::Round([double]$Data.RecentRemainingMinutes, 3)
		recentArtifactsPerMinute = [Math]::Round([double]$Data.RecentArtifactsPerMinute, 6)
		processorRunning = $Data.ProcessorRunning
		processorPid = $Data.ProcessorPid
		processorCpuSeconds = [Math]::Round([double]$Data.ProcessorCpuSeconds, 3)
		bakeDir = $Data.BakeDir
		outputAceFile = $Data.OutputAceFile
		contentAceFile = $Data.ContentAceFile
		importedAsset = $Data.ImportedAsset
		monitorStartedAt = $Data.MonitorStartedAt
		lastUpdatedAt = (Get-Date).ToString("o")
		error = $Data.Error
	}

	@{ summary = $Summary } | ConvertTo-Json -Depth 6 | Set-Content -LiteralPath $Path -Encoding UTF8
}

function Get-NormalizedLocalBakeAceFile
{
	param(
		[string]$OutputFile,
		[string]$BakeDir
	)

	if ([string]::IsNullOrWhiteSpace($OutputFile) -or -not (Test-Path -LiteralPath $OutputFile))
	{
		return $OutputFile
	}

	if ([System.IO.Path]::GetExtension($OutputFile) -ieq ".ace")
	{
		return $OutputFile
	}

	$NormalizedAceFile = Join-Path $BakeDir "$([System.IO.Path]::GetFileName($OutputFile)).ace"
	Copy-Item -LiteralPath $OutputFile -Destination $NormalizedAceFile -Force
	return $NormalizedAceFile
}

function Import-AcousticAce
{
	param(
		[string]$OutputAceFile,
		[string]$BakeDir
	)

	if (-not (Test-Path -LiteralPath $OutputAceFile))
	{
		throw "Cannot finalize LocalBake because no ACE file exists: $OutputAceFile"
	}

	$OutputAceFile = Get-NormalizedLocalBakeAceFile -OutputFile $OutputAceFile -BakeDir $BakeDir
	$ContentAceFile = $OutputAceFile
	if (-not $SkipAceCopyToContent)
	{
		$ContentAcousticsDir = Join-Path (Get-Location).Path "Content\Acoustics"
		New-Item -ItemType Directory -Force -Path $ContentAcousticsDir | Out-Null
		$ContentAceFile = Join-Path $ContentAcousticsDir (Split-Path -Leaf $OutputAceFile)
		if (Test-Path -LiteralPath $ContentAceFile)
		{
			Set-ItemProperty -LiteralPath $ContentAceFile -Name IsReadOnly -Value $false
		}
		Copy-Item -LiteralPath $OutputAceFile -Destination $ContentAceFile -Force
	}

	$ImportedAsset = ""
	if (-not $SkipUAssetImport)
	{
		$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
		$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
		$ImportScript = Resolve-OutputPath -Path ".agents\skills\orion-project-acoustics\scripts\import-acoustic-ace.py"
		$ImportLog = Join-Path $BakeDir "ImportAcousticAce.monitor.log"
		$ImportArgs = @(
			$ResolvedProject,
			"-run=pythonscript",
			"-script=$ImportScript",
			"-AceFile=$ContentAceFile",
			"-unattended",
			"-nop4",
			"-nosplash",
			"-NullRHI",
			"-log=$ImportLog"
		)
		& $ResolvedEditorCmd @ImportArgs
		$ImportExitCode = $LASTEXITCODE
		if ($ImportExitCode -ne 0)
		{
			throw "ACE was copied to Content/Acoustics, but UAcousticsData import failed with exit code $ImportExitCode. See $ImportLog."
		}

		$ImportedAsset = "/Game/Acoustics/$([System.IO.Path]::GetFileNameWithoutExtension($ContentAceFile))"
	}

	return [pscustomobject]@{
		ContentAceFile = $ContentAceFile
		ImportedAsset = $ImportedAsset
	}
}

$ResolvedReport = Resolve-OutputPath -Path $Report
if ([string]::IsNullOrWhiteSpace($MonitorReport))
{
	$MonitorReport = Get-DefaultMonitorReport -ResolvedReport $ResolvedReport
}
$ResolvedMonitorReport = Resolve-OutputPath -Path $MonitorReport
$MonitorStartedAt = Get-Date
$History = New-Object System.Collections.Generic.Queue[object]
$NoProcessorAfterAcePolls = 0

while ($true)
{
	$Summary = Read-LocalBakeSummary -Path $ResolvedReport
	$SourceStatus = [string]$Summary.status
	$BakeDir = [string]$Summary.bakeDir
	$Prefix = [string]$Summary.prefix
	$ProbeCount = [int]$Summary.probeCount
	$CompletedArtifacts = Get-ArtifactCount -BakeDir $BakeDir
	$Processor = Get-ProcessorProcessForBakeDir -BakeDir $BakeDir
	$bProcessorRunning = $null -ne $Processor
	$ProcessorPid = if ($Processor) { $Processor.Id } else { $null }
	$ProcessorCpuSeconds = if ($Processor) { [double]$Processor.CPU } else { 0.0 }
	$OutputAceFile = Get-OutputAceFile -Summary $Summary -BakeDir $BakeDir -Prefix $Prefix

	$ElapsedMinutes = 0.0
	if ($Summary.elapsedMinutes -and [double]$Summary.elapsedMinutes -gt 0)
	{
		$ElapsedMinutes = [double]$Summary.elapsedMinutes
	}
	elseif ($Processor -and $Processor.StartTime)
	{
		$ElapsedMinutes = ((Get-Date) - $Processor.StartTime).TotalMinutes
	}
	else
	{
		$ElapsedMinutes = ((Get-Date) - $MonitorStartedAt).TotalMinutes
	}

	$History.Enqueue([pscustomobject]@{
		time = Get-Date
		completedArtifacts = $CompletedArtifacts
	})
	while ($History.Count -gt 20)
	{
		[void]$History.Dequeue()
	}

	$RecentRate = Get-RecentRatePerMinute -History $History
	$RemainingArtifacts = [Math]::Max($ProbeCount - $CompletedArtifacts, 0)
	$CumulativeRemainingMinutes = 0.0
	if ($CompletedArtifacts -gt 0 -and $ElapsedMinutes -gt 0)
	{
		$CumulativeRemainingMinutes = ($ElapsedMinutes / [double]$CompletedArtifacts) * $RemainingArtifacts
	}
	elseif ($Summary.estimatedRemainingMinutes -and [double]$Summary.estimatedRemainingMinutes -gt 0)
	{
		$CumulativeRemainingMinutes = [double]$Summary.estimatedRemainingMinutes
	}

	$RecentRemainingMinutes = 0.0
	$bUseRecentEstimate = $false
	if ($RecentRate -gt 0)
	{
		$RecentRemainingMinutes = $RemainingArtifacts / $RecentRate
		$HistoryPoints = @($History)
		$HistorySpanMinutes = if ($HistoryPoints.Count -ge 2) { ([datetime]$HistoryPoints[$HistoryPoints.Count - 1].time - [datetime]$HistoryPoints[0].time).TotalMinutes } else { 0.0 }
		$HistoryDeltaArtifacts = if ($HistoryPoints.Count -ge 2) { [double]$HistoryPoints[$HistoryPoints.Count - 1].completedArtifacts - [double]$HistoryPoints[0].completedArtifacts } else { 0.0 }
		$bUseRecentEstimate = $HistorySpanMinutes -ge 2.0 -and $HistoryDeltaArtifacts -ge 3.0
	}

	$EstimatedRemainingMinutes = $CumulativeRemainingMinutes
	if ($bUseRecentEstimate -and $CumulativeRemainingMinutes -gt 0)
	{
		$EstimatedRemainingMinutes = ($CumulativeRemainingMinutes * 0.7) + ($RecentRemainingMinutes * 0.3)
	}
	elseif ($bUseRecentEstimate)
	{
		$EstimatedRemainingMinutes = $RecentRemainingMinutes
	}
	$PercentComplete = if ($ProbeCount -gt 0) { [Math]::Min(100.0, ($CompletedArtifacts / [double]$ProbeCount) * 100.0) } else { 0.0 }
	$MonitorStatus = if ($SourceStatus) { $SourceStatus } else { "Unknown" }
	$ContentAceFile = [string]$Summary.contentAceFile
	$ImportedAsset = [string]$Summary.importedAsset
	$ErrorText = [string]$Summary.error

	Write-Progress `
		-Activity "ProjectAcoustics LocalBake Monitor" `
		-Status ("{0}/{1} probe artifacts, remaining {2:n1}h, status {3}" -f $CompletedArtifacts, $ProbeCount, ($EstimatedRemainingMinutes / 60.0), $MonitorStatus) `
		-PercentComplete ([Math]::Min(99.0, $PercentComplete))

	$MonitorData = @{
		Status = $MonitorStatus
		SourceStatus = $SourceStatus
		SourceReport = $ResolvedReport
		SourceMap = [string]$Summary.sourceMap
		Prefix = $Prefix
		ProbeCount = $ProbeCount
		CompletedProbeArtifacts = $CompletedArtifacts
		PercentComplete = $PercentComplete
		ElapsedMinutes = $ElapsedMinutes
		EstimatedRemainingMinutes = $EstimatedRemainingMinutes
		CumulativeRemainingMinutes = $CumulativeRemainingMinutes
		RecentRemainingMinutes = $RecentRemainingMinutes
		RecentArtifactsPerMinute = $RecentRate
		ProcessorRunning = $bProcessorRunning
		ProcessorPid = $ProcessorPid
		ProcessorCpuSeconds = $ProcessorCpuSeconds
		BakeDir = $BakeDir
		OutputAceFile = $OutputAceFile
		ContentAceFile = $ContentAceFile
		ImportedAsset = $ImportedAsset
		MonitorStartedAt = $MonitorStartedAt.ToString("o")
		Error = $ErrorText
	}
	Write-MonitorReport -Path $ResolvedMonitorReport -Data $MonitorData

	Write-Host ("[{0}] {1}/{2} ({3:n2}%), status={4}, remaining={5:n1}h, processor={6}" -f (Get-Date -Format "HH:mm:ss"), $CompletedArtifacts, $ProbeCount, $PercentComplete, $MonitorStatus, ($EstimatedRemainingMinutes / 60.0), $bProcessorRunning)

	if ($Once)
	{
		return
	}

	if ($MonitorStatus -eq "Completed")
	{
		Write-Progress -Activity "ProjectAcoustics LocalBake Monitor" -Completed
		Write-Host "LocalBake monitor observed Completed status."
		return
	}

	if ($MonitorStatus -eq "AceCopiedImportFailed")
	{
		if (-not [string]::IsNullOrWhiteSpace($OutputAceFile) -and (Test-Path -LiteralPath $OutputAceFile))
		{
			$FinalizeResult = Import-AcousticAce -OutputAceFile $OutputAceFile -BakeDir $BakeDir
			$MonitorData.Status = "Completed"
			$MonitorData.ContentAceFile = $FinalizeResult.ContentAceFile
			$MonitorData.ImportedAsset = $FinalizeResult.ImportedAsset
			$MonitorData.Error = ""
			Write-MonitorReport -Path $ResolvedMonitorReport -Data $MonitorData
			Write-Progress -Activity "ProjectAcoustics LocalBake Monitor" -Completed
			Write-Host "LocalBake monitor imported ACE after source import failure."
			return
		}

		throw $ErrorText
	}

	if ($MonitorStatus -eq "Failed" -and [string]::IsNullOrWhiteSpace($OutputAceFile))
	{
		throw $ErrorText
	}

	$bHasCompleteProbeArtifacts = $ProbeCount -gt 0 -and $CompletedArtifacts -ge $ProbeCount
	if (-not $bProcessorRunning -and -not [string]::IsNullOrWhiteSpace($OutputAceFile) -and (Test-Path -LiteralPath $OutputAceFile) -and $bHasCompleteProbeArtifacts)
	{
		$NoProcessorAfterAcePolls++
		if ($NoProcessorAfterAcePolls -ge $FinalizeGracePolls)
		{
			$FinalizeResult = Import-AcousticAce -OutputAceFile $OutputAceFile -BakeDir $BakeDir
			$MonitorData.Status = "Completed"
			$MonitorData.ContentAceFile = $FinalizeResult.ContentAceFile
			$MonitorData.ImportedAsset = $FinalizeResult.ImportedAsset
			$MonitorData.Error = ""
			Write-MonitorReport -Path $ResolvedMonitorReport -Data $MonitorData
			Write-Progress -Activity "ProjectAcoustics LocalBake Monitor" -Completed
			Write-Host "LocalBake monitor finalized ACE import."
			return
		}
	}
	else
	{
		$NoProcessorAfterAcePolls = 0
	}

	if (-not $bProcessorRunning -and $MonitorStatus -eq "Failed" -and -not $bHasCompleteProbeArtifacts)
	{
		throw "LocalBake stopped before all probes were collated: $CompletedArtifacts/$ProbeCount probe artifacts. Resume the same BakeDir before importing ACE."
	}

	Start-Sleep -Seconds ([Math]::Max(5, $PollSeconds))
}
