# Portable render command experiment helper.
param(
	[string]$ProjectRoot = (Resolve-Path (Join-Path $PSScriptRoot '..\..\..\..')).Path,
	[string]$TestCsv,
	[Parameter(Mandatory = $true)]
	[string]$EngineExe,
	[string]$ProjectFile,
	[string]$FpsChartRoot = (Join-Path $env:LOCALAPPDATA 'UnrealEngine\5.8\Saved\Profiling\FPSChartStats'),
	[string]$CsvRoot = (Join-Path $env:LOCALAPPDATA 'UnrealEngine\5.8\Saved\Profiling\CSV'),
	[string]$SteamDllDir = '',
	[string]$PluginBinariesDir = '',
	[string]$PlatformText = 'Windows D3D12 SM6',
	[Parameter(Mandatory = $true)]
	[string]$Map,
	[string]$Resolution = '1280x720',
	[int]$TimeoutSeconds = 720,
	[double]$ControlThresholdPercent = 2.0,
	[int]$A1StartFrame = 300,
	[int]$A1StopFrame = 580,
	[int]$A2StartFrame = 620,
	[int]$A2StopFrame = 900,
	[int]$ApplyFrame = 960,
	[int]$BStartFrame = 980,
	[int]$BStopFrame = 1260,
	[int]$QuitFrame = 1290
)

$ErrorActionPreference = 'Stop'

if ([string]::IsNullOrWhiteSpace($TestCsv))
{
	throw 'TestCsv is required. Provide a CSV with command,value,module,type,prefix and metadata columns.'
}

if ([string]::IsNullOrWhiteSpace($ProjectFile))
{
	$ProjectFile = (Get-ChildItem -LiteralPath $ProjectRoot -Filter '*.uproject' -File -ErrorAction SilentlyContinue | Select-Object -First 1).FullName
}

if ([string]::IsNullOrWhiteSpace($ProjectFile) -or -not (Test-Path -LiteralPath $ProjectFile))
{
	throw 'ProjectFile is required. Pass -ProjectFile or run from a project root containing exactly one .uproject file.'
}

$Project = $ProjectFile
$ResultsPath = Join-Path $ProjectRoot '.agents\skills\unreal-render-commands\references\render-command-experiments\experiment_results.csv'
$CandidatesPath = Join-Path $ProjectRoot '.agents\skills\unreal-render-commands\references\render-command-experiments\current_project_candidates.csv'
$EngineIni = Join-Path $ProjectRoot 'Saved\Codex\RenderCommandExperiment\BaselineConfig\DefaultEngine_RenderBaseline.ini'
$ScalabilityIni = Join-Path $ProjectRoot 'Saved\Codex\RenderCommandExperiment\BaselineConfig\DefaultScalability_RenderBaseline.ini'

if (-not [string]::IsNullOrWhiteSpace($SteamDllDir))
{
	$SteamApiDll = Join-Path $SteamDllDir 'steam_api64.dll'
	if (-not (Test-Path -LiteralPath $SteamApiDll))
	{
		throw "Missing steam_api64.dll at $SteamApiDll"
	}
	$env:Path = "$SteamDllDir;$env:Path"
}

if (-not [string]::IsNullOrWhiteSpace($PluginBinariesDir))
{
	$env:Path = "$PluginBinariesDir;$env:Path"
}

function Format-InvariantNumber([double]$Value, [int]$Digits = 2)
{
	return $Value.ToString("F$Digits", [Globalization.CultureInfo]::InvariantCulture)
}

function Parse-FpsChartLog([string]$Path)
{
	$Text = [IO.File]::ReadAllText($Path)
	if ($Text -notmatch '(?m)(\d+)\s+frames collected over\s+([0-9.]+)\s+seconds.*?for a\s+([0-9.]+)\s+FPS average')
	{
		throw "Failed to parse FPS in $Path"
	}
	$Frames = [int]$Matches[1]
	$Duration = [double]::Parse($Matches[2], [Globalization.CultureInfo]::InvariantCulture)
	$Fps = [double]::Parse($Matches[3], [Globalization.CultureInfo]::InvariantCulture)

	if ($Text -notmatch '(?m)Average GPU frametime:\s+([0-9.]+)\s+ms')
	{
		throw "Failed to parse GPU in $Path"
	}
	$Gpu = [double]::Parse($Matches[1], [Globalization.CultureInfo]::InvariantCulture)

	if ($Text -notmatch '(?m)Average RenderThread frametime:\s+([0-9.]+)\s+ms')
	{
		throw "Failed to parse RenderThread in $Path"
	}
	$RenderThread = [double]::Parse($Matches[1], [Globalization.CultureInfo]::InvariantCulture)

	if ($Text -notmatch '(?m)Average GameThread frametime:\s+([0-9.]+)\s+ms')
	{
		throw "Failed to parse GameThread in $Path"
	}
	$GameThread = [double]::Parse($Matches[1], [Globalization.CultureInfo]::InvariantCulture)

	if ($Text -notmatch '(?m)Total hitch count:\s+([0-9]+)')
	{
		throw "Failed to parse hitch count in $Path"
	}
	$Hitches = [int]$Matches[1]

	return [pscustomobject]@{
		Path = $Path
		Frames = $Frames
		Duration = $Duration
		Fps = $Fps
		Gpu = $Gpu
		RenderThread = $RenderThread
		GameThread = $GameThread
		Hitches = $Hitches
	}
}

function Get-ExistingPathSet([string]$Root, [string]$Filter, [switch]$Directory)
{
	$Set = @{}
	if (Test-Path -LiteralPath $Root)
	{
		if ($Directory)
		{
			Get-ChildItem -LiteralPath $Root -Directory -Filter $Filter -ErrorAction SilentlyContinue | ForEach-Object { $Set[$_.FullName] = $true }
		}
		else
		{
			Get-ChildItem -LiteralPath $Root -File -Filter $Filter -ErrorAction SilentlyContinue | ForEach-Object { $Set[$_.FullName] = $true }
		}
	}
	return $Set
}

function Get-NewFpsLogs($BeforeSet)
{
	$Dirs = Get-ChildItem -LiteralPath $FpsChartRoot -Directory -ErrorAction SilentlyContinue |
		Where-Object { -not $BeforeSet.ContainsKey($_.FullName) } |
		Sort-Object CreationTime
	$Logs = @()
	foreach ($Dir in $Dirs)
	{
		$Log = Get-ChildItem -LiteralPath $Dir.FullName -File -Filter '*-FPS-WindowsEditor.log' -ErrorAction SilentlyContinue | Select-Object -First 1
		if ($Log)
		{
			$Logs += $Log.FullName
		}
	}
	return @($Logs)
}

function Get-NewCsvProfile($BeforeSet)
{
	$Files = Get-ChildItem -LiteralPath $CsvRoot -File -Filter 'Profile*.csv' -ErrorAction SilentlyContinue |
		Where-Object { -not $BeforeSet.ContainsKey($_.FullName) } |
		Sort-Object CreationTime
	if ($Files.Count -gt 0)
	{
		return $Files[-1].FullName
	}
	return ''
}

function New-EmptyRow($Headers)
{
	$Ordered = [ordered]@{}
	foreach ($Header in $Headers)
	{
		$Ordered[$Header] = ''
	}
	return [pscustomobject]$Ordered
}

function Set-Field($Row, [string]$Name, [string]$Value)
{
	if ($Row.PSObject.Properties.Name -contains $Name)
	{
		$Row.$Name = $Value
	}
}

function Append-RowsToCsv([string]$Path, $Rows, $Headers)
{
	$Rows = @($Rows)
	if ($Rows.Count -eq 0)
	{
		return
	}

	$Utf8NoBom = New-Object System.Text.UTF8Encoding($false)
	$Csv = $Rows | Select-Object $Headers | ConvertTo-Csv -NoTypeInformation
	$Lines = if ((Test-Path -LiteralPath $Path) -and ((Get-Item -LiteralPath $Path).Length -gt 0))
	{
		@($Csv | Select-Object -Skip 1)
	}
	else
	{
		@($Csv)
	}

	if ($Lines.Count -gt 0)
	{
		[IO.File]::AppendAllText($Path, (($Lines -join "`r`n") + "`r`n"), $Utf8NoBom)
	}
}

function Get-Recommendation($Test, [double]$Delta)
{
	if ($Delta -le -1.0)
	{
		return 'reject_for_now_aab_loss_or_scene_not_benefiting'
	}
	if ($Test.adoption_status_hint -and $Delta -ge 0.5)
	{
		return $Test.adoption_status_hint
	}
	if ($Delta -ge 2.0)
	{
		return 'aab_quality_tradeoff_candidate_visual_review_required'
	}
	if ($Delta -ge 0.5)
	{
		return 'aab_possible_candidate_small_gain_visual_review_required'
	}
	return 'neutral_aab_no_material_gain'
}

function Assert-FrameProtocol()
{
	if (-not ($A1StartFrame -lt $A1StopFrame -and $A1StopFrame -lt $A2StartFrame -and $A2StartFrame -lt $A2StopFrame -and $A2StopFrame -lt $ApplyFrame -and $ApplyFrame -lt $BStartFrame -and $BStartFrame -lt $BStopFrame -and $BStopFrame -lt $QuitFrame))
	{
		throw 'Invalid A/A/B frame protocol. Expected A1 < A2 < Apply < B < Quit.'
	}
}

function Assert-TestCsv($Tests)
{
	if ($Tests.Count -eq 0)
	{
		throw 'TestCsv contains no rows.'
	}

	$Columns = @($Tests[0].PSObject.Properties.Name)
	foreach ($RequiredColumn in @('command', 'value'))
	{
		if ($Columns -notcontains $RequiredColumn)
		{
			throw "TestCsv must contain a '$RequiredColumn' column. Do not pass experiment result tables or plan tables directly."
		}
	}

	foreach ($Test in $Tests)
	{
		if ([string]::IsNullOrWhiteSpace([string]$Test.command))
		{
			throw 'TestCsv contains a row with an empty command.'
		}
		if ([string]::IsNullOrWhiteSpace([string]$Test.value))
		{
			throw "TestCsv row for '$($Test.command)' has an empty value. Use an explicit scalar value such as 0, 1, 0.5, or 2048."
		}
	}
}

$ResultHeaders = @((Import-Csv -LiteralPath $ResultsPath | Select-Object -First 1).PSObject.Properties.Name)
$CandidateHeaders = @((Import-Csv -LiteralPath $CandidatesPath | Select-Object -First 1).PSObject.Properties.Name)
$Tests = @(Import-Csv -LiteralPath $TestCsv)
Assert-TestCsv -Tests $Tests
Assert-FrameProtocol
$CsvCaptureFrames = $QuitFrame + 30
$Shell = New-Object -ComObject WScript.Shell
$RunSummaries = @()

foreach ($Test in $Tests)
{
	$Safe = ($Test.command + '_' + $Test.value) -replace '[^A-Za-z0-9]+', '_'
	$Timestamp = Get-Date -Format 'yyyyMMdd_HHmmss'
	$RunId = "aab_$Safe`_$Timestamp"
	$LogPath = Join-Path $ProjectRoot "Saved\Logs\RenderCommandExperiment_AAB_$Safe.log"
	$BeforeFpsDirs = Get-ExistingPathSet -Root $FpsChartRoot -Filter '*' -Directory
	$BeforeCsvFiles = Get-ExistingPathSet -Root $CsvRoot -Filter 'Profile*.csv'
	$CommandAssignment = "$($Test.command)=$($Test.value)"
	$CsvExec = "$($A1StartFrame):StartFPSChart,$($A1StopFrame):StopFPSChart,$($A2StartFrame):StartFPSChart,$($A2StopFrame):StopFPSChart,$($ApplyFrame):$CommandAssignment,$($BStartFrame):StartFPSChart,$($BStopFrame):StopFPSChart,$($QuitFrame):Quit"
	$Args = @(
		$Project,
		$Map,
		'-game',
		'-windowed',
		'-ResX=1280',
		'-ResY=720',
		'-CustomConfig=RenderBaseline',
		"-DEFEngineIni=$EngineIni",
		"-DEFScalabilityIni=$ScalabilityIni",
		'-ExecCmds=t.MaxFPS=0,r.VSync=0,t.IdleWhenNotForeground=0,Slate.bAllowThrottling=0',
		"-csvCaptureFrames=$CsvCaptureFrames",
		"-csvExecCmds=$CsvExec",
		'-csvGpuStats',
		'-slno',
		'-ngxdisable',
		'-slnoswapchainprovider',
		'-NoSplash',
		'-nop4',
		'-nosound',
		'-log',
		"-abslog=$LogPath"
	)

	Write-Host "Launching A/A/B: $CommandAssignment"
	$Process = Start-Process -FilePath $EngineExe -ArgumentList $Args -WorkingDirectory $ProjectRoot -WindowStyle Normal -PassThru
	$Start = Get-Date
	$bForcedExitAfterCapture = $false
	while (-not $Process.HasExited)
	{
		Start-Sleep -Seconds 3
		try
		{
			[void]$Shell.AppActivate($Process.Id)
		}
		catch
		{
		}
		$CapturedLogsDuringRun = @(Get-NewFpsLogs -BeforeSet $BeforeFpsDirs)
		if ($CapturedLogsDuringRun.Count -ge 3)
		{
			$bForcedExitAfterCapture = $true
			try
			{
				[void]$Process.CloseMainWindow()
			}
			catch
			{
			}
			Start-Sleep -Seconds 5
			if (-not $Process.HasExited)
			{
				Stop-Process -Id $Process.Id -Force -ErrorAction SilentlyContinue
			}
			break
		}
		if (((Get-Date) - $Start).TotalSeconds -gt $TimeoutSeconds)
		{
			try
			{
				[void]$Process.CloseMainWindow()
			}
			catch
			{
			}
			Start-Sleep -Seconds 10
			if (-not $Process.HasExited)
			{
				Stop-Process -Id $Process.Id -Force -ErrorAction SilentlyContinue
			}
			throw "Timed out while running A/A/B $CommandAssignment"
		}
		$Process.Refresh()
	}
	Start-Sleep -Seconds 3

	$NewLogs = @(Get-NewFpsLogs -BeforeSet $BeforeFpsDirs)
	if ($NewLogs.Count -lt 3)
	{
		throw "Expected three FPSChart logs for A/A/B $CommandAssignment, found $($NewLogs.Count). Launch log: $LogPath"
	}

	$A1Log = $NewLogs[-3]
	$A2Log = $NewLogs[-2]
	$BLog = $NewLogs[-1]
	$A1Stats = Parse-FpsChartLog -Path $A1Log
	$A2Stats = Parse-FpsChartLog -Path $A2Log
	$BStats = Parse-FpsChartLog -Path $BLog
	$ControlDelta = (($A2Stats.Fps - $A1Stats.Fps) / $A1Stats.Fps) * 100.0
	$CommandDelta = (($BStats.Fps - $A2Stats.Fps) / $A2Stats.Fps) * 100.0
	$ProfileCsv = Get-NewCsvProfile -BeforeSet $BeforeCsvFiles
	$Html = ''
	$HtmlFile = Get-ChildItem -LiteralPath (Split-Path -Parent $BLog) -File -Filter '*.html' -ErrorAction SilentlyContinue | Select-Object -First 1
	if ($HtmlFile)
	{
		$Html = $HtmlFile.FullName
	}

	$bControlStable = [Math]::Abs($ControlDelta) -le $ControlThresholdPercent
	$ComparisonMethod = if ($bControlStable) { 'aab_same_process_controlled' } else { 'aab_control_drift_unstable' }
	$Recommendation = if ($bControlStable) { Get-Recommendation -Test $Test -Delta $CommandDelta } else { 'invalid_retest_required_aab_control_drift' }
	$ResultRow = New-EmptyRow -Headers $ResultHeaders
	Set-Field $ResultRow 'command' $Test.command
	Set-Field $ResultRow 'kind' 'CVar'
	Set-Field $ResultRow 'type' $Test.type
	Set-Field $ResultRow 'prefix' $Test.prefix
	Set-Field $ResultRow 'module' $Test.module
	Set-Field $ResultRow 'platform_text' 'Windows D3D12 SM6 <GPU>'
	Set-Field $ResultRow 'runtime_editable' 'true'
	Set-Field $ResultRow 'startup_only' 'false'
	Set-Field $ResultRow 'in_default_engine' $Test.in_default_engine
	Set-Field $ResultRow 'in_scalability' $Test.in_scalability
	Set-Field $ResultRow 'scalability_group' $Test.in_scalability
	Set-Field $ResultRow 'scalability_sections' $Test.scalability_sections
	Set-Field $ResultRow 'test_method' $Test.test_method
	Set-Field $ResultRow 'safe_test_values' $Test.safe_test_values
	Set-Field $ResultRow 'config_target' $Test.config_target
	Set-Field $ResultRow 'test_priority' $Test.test_priority
	Set-Field $ResultRow 'baseline_fps' (Format-InvariantNumber $A2Stats.Fps)
	Set-Field $ResultRow 'test_fps' (Format-InvariantNumber $BStats.Fps)
	Set-Field $ResultRow 'fps_delta_percent' (Format-InvariantNumber $CommandDelta)
	Set-Field $ResultRow 'quality_impact' $Test.quality_impact
	Set-Field $ResultRow 'recommendation' $Recommendation
	Set-Field $ResultRow 'project_setting_value' $Test.project_setting_value
	Set-Field $ResultRow 'notes' ("A/A/B same-process result on benchmark map: A1 {0} FPS, A2 {1} FPS, control delta {2}%, B {3} FPS, command delta vs A2 {4}%. Control threshold +/-{5}%." -f (Format-InvariantNumber $A1Stats.Fps), (Format-InvariantNumber $A2Stats.Fps), (Format-InvariantNumber $ControlDelta), (Format-InvariantNumber $BStats.Fps), (Format-InvariantNumber $CommandDelta), (Format-InvariantNumber $ControlThresholdPercent))
	Set-Field $ResultRow 'usage' $CommandAssignment
	Set-Field $ResultRow 'help' $Test.help
	Set-Field $ResultRow 'flags' $Test.flags
	Set-Field $ResultRow 'run_id' $RunId
	Set-Field $ResultRow 'map' $Map
	Set-Field $ResultRow 'resolution' $Resolution
	Set-Field $ResultRow 'avg_gpu_ms' (Format-InvariantNumber $BStats.Gpu)
	Set-Field $ResultRow 'avg_renderthread_ms' (Format-InvariantNumber $BStats.RenderThread)
	Set-Field $ResultRow 'avg_gamethread_ms' (Format-InvariantNumber $BStats.GameThread)
	Set-Field $ResultRow 'frames' ([string]$BStats.Frames)
	Set-Field $ResultRow 'duration_seconds' (Format-InvariantNumber $BStats.Duration)
	Set-Field $ResultRow 'hitch_count' ([string]$BStats.Hitches)
	Set-Field $ResultRow 'profile_csv' $ProfileCsv
	Set-Field $ResultRow 'fpschart_log' $BLog
	Set-Field $ResultRow 'fpschart_html' $Html
	$LaunchNotes = "A/A/B same process: A1 frames $A1StartFrame-$A1StopFrame, A2 frames $A2StartFrame-$A2StopFrame, set $CommandAssignment at frame $ApplyFrame, B frames $BStartFrame-$BStopFrame, quit frame $QuitFrame. Launch log: $LogPath"
	if ($bForcedExitAfterCapture)
	{
		$LaunchNotes = "$LaunchNotes Process was forced closed after all three FPSChart windows were captured."
	}
	Set-Field $ResultRow 'launch_notes' $LaunchNotes
	Set-Field $ResultRow 'comparison_method' $ComparisonMethod
	Set-Field $ResultRow 'paired_baseline_fpschart_log' $A2Log
	Set-Field $ResultRow 'paired_test_fpschart_log' $BLog
	Set-Field $ResultRow 'paired_baseline_avg_gpu_ms' (Format-InvariantNumber $A2Stats.Gpu)
	Set-Field $ResultRow 'paired_test_avg_gpu_ms' (Format-InvariantNumber $BStats.Gpu)
	Append-RowsToCsv -Path $ResultsPath -Rows @($ResultRow) -Headers $ResultHeaders

	if ($bControlStable)
	{
		$CandidateRow = New-EmptyRow -Headers $CandidateHeaders
		Set-Field $CandidateRow 'module' $Test.candidate_module
		Set-Field $CandidateRow 'command' $Test.command
		Set-Field $CandidateRow 'value' $Test.value
		Set-Field $CandidateRow 'runtime_editable' 'true'
		Set-Field $CandidateRow 'scalability' $Test.in_scalability
		Set-Field $CandidateRow 'setting_target' $Test.config_target
		Set-Field $CandidateRow 'baseline_fps' (Format-InvariantNumber $A2Stats.Fps)
		Set-Field $CandidateRow 'test_fps' (Format-InvariantNumber $BStats.Fps)
		Set-Field $CandidateRow 'fps_delta_percent' (Format-InvariantNumber $CommandDelta)
		Set-Field $CandidateRow 'quality_risk' $Test.quality_impact
		Set-Field $CandidateRow 'adoption_status' $Recommendation
		Set-Field $CandidateRow 'priority' $Test.candidate_priority
		Set-Field $CandidateRow 'notes' 'Result generated by scripts/run_render_aab_tests.ps1. Visual review required before project config adoption.'
		Append-RowsToCsv -Path $CandidatesPath -Rows @($CandidateRow) -Headers $CandidateHeaders
	}

	$RunSummaries += [pscustomobject]@{
		Command = $CommandAssignment
		A1Fps = Format-InvariantNumber $A1Stats.Fps
		A2Fps = Format-InvariantNumber $A2Stats.Fps
		ControlDeltaPercent = Format-InvariantNumber $ControlDelta
		BFps = Format-InvariantNumber $BStats.Fps
		CommandDeltaPercent = Format-InvariantNumber $CommandDelta
		ControlStable = $bControlStable
		ComparisonMethod = $ComparisonMethod
		Recommendation = $Recommendation
		A1Log = $A1Log
		A2Log = $A2Log
		BLog = $BLog
	}
	Write-Host ("Completed A/A/B {0}: A1 {1} FPS, A2 {2} FPS ({3}%), B {4} FPS ({5}%), stable={6}" -f $CommandAssignment, (Format-InvariantNumber $A1Stats.Fps), (Format-InvariantNumber $A2Stats.Fps), (Format-InvariantNumber $ControlDelta), (Format-InvariantNumber $BStats.Fps), (Format-InvariantNumber $CommandDelta), $bControlStable)
}

Write-Host 'RESULTS_BEGIN'
$RunSummaries | ConvertTo-Json -Depth 4
Write-Host 'RESULTS_END'
