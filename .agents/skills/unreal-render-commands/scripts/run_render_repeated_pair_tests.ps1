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
	[int]$TimeoutSeconds = 600,
	[int]$PairCount = 2,
	[double]$ControlThresholdPercent = 2.0,
	[double]$PairSpreadThresholdPercent = 5.0,
	[int]$ApplyFrame = 120,
	[int]$StartFrame = 900,
	[int]$StopFrame = 1180,
	[int]$QuitFrame = 1210
)

$ErrorActionPreference = 'Stop'

if ([string]::IsNullOrWhiteSpace($TestCsv))
{
	throw 'TestCsv is required. Provide a CSV with command,value,module,type,prefix and metadata columns.'
}

if ($PairCount -lt 1)
{
	throw 'PairCount must be at least 1.'
}

if (-not ($ApplyFrame -lt $StartFrame -and $StartFrame -lt $StopFrame -and $StopFrame -lt $QuitFrame))
{
	throw 'Invalid repeated-pair frame protocol. Expected Apply < Start < Stop < Quit.'
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
$CsvCaptureFrames = $QuitFrame + 30

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

function Get-Median([double[]]$Values)
{
	if ($Values.Count -eq 0)
	{
		return 0.0
	}
	$Sorted = @($Values | Sort-Object)
	$Middle = [int]($Sorted.Count / 2)
	if (($Sorted.Count % 2) -eq 1)
	{
		return [double]$Sorted[$Middle]
	}
	return ([double]$Sorted[$Middle - 1] + [double]$Sorted[$Middle]) / 2.0
}

function Get-Recommendation($Test, [double]$Delta)
{
	if ($Delta -le -1.0)
	{
		return 'reject_for_now_repeated_pair_loss_or_scene_not_benefiting'
	}
	if ($Test.adoption_status_hint -and $Delta -ge 0.5)
	{
		return $Test.adoption_status_hint
	}
	if ($Delta -ge 2.0)
	{
		return 'repeated_pair_quality_tradeoff_candidate_visual_review_required'
	}
	if ($Delta -ge 0.5)
	{
		return 'repeated_pair_possible_candidate_small_gain_visual_review_required'
	}
	return 'neutral_repeated_pair_no_material_gain'
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

function Invoke-RenderSample($Test, [string]$Mode, [int]$PairIndex, [string]$RunIdBase)
{
	$Safe = ($Test.command + '_' + $Test.value + '_' + $Mode + '_' + $PairIndex) -replace '[^A-Za-z0-9]+', '_'
	$LogPath = Join-Path $ProjectRoot "Saved\Logs\RenderCommandExperiment_RP_$Safe.log"
	$BeforeFpsDirs = Get-ExistingPathSet -Root $FpsChartRoot -Filter '*' -Directory
	$BeforeCsvFiles = Get-ExistingPathSet -Root $CsvRoot -Filter 'Profile*.csv'
	$CommandAssignment = "$($Test.command)=$($Test.value)"
	if ($Mode -eq 'test')
	{
		$CsvExec = "$($ApplyFrame):$CommandAssignment,$($StartFrame):StartFPSChart,$($StopFrame):StopFPSChart,$($QuitFrame):Quit"
	}
	else
	{
		$CsvExec = "$($StartFrame):StartFPSChart,$($StopFrame):StopFPSChart,$($QuitFrame):Quit"
	}
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

	Write-Host "Launching repeated-pair $Mode sample $PairIndex for $CommandAssignment"
	$Process = Start-Process -FilePath $EngineExe -ArgumentList $Args -WorkingDirectory $ProjectRoot -WindowStyle Normal -PassThru
	$Start = Get-Date
	$Shell = New-Object -ComObject WScript.Shell
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
		if ($CapturedLogsDuringRun.Count -ge 1)
		{
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
			throw "Timed out while running repeated-pair $Mode sample $PairIndex for $CommandAssignment"
		}
		$Process.Refresh()
	}
	Start-Sleep -Seconds 3

	$NewLogs = @(Get-NewFpsLogs -BeforeSet $BeforeFpsDirs)
	if ($NewLogs.Count -lt 1)
	{
		throw "Expected one FPSChart log for repeated-pair $Mode sample $PairIndex for $CommandAssignment, found 0. Launch log: $LogPath"
	}

	$Log = $NewLogs[-1]
	$Stats = Parse-FpsChartLog -Path $Log
	$ProfileCsv = Get-NewCsvProfile -BeforeSet $BeforeCsvFiles
	return [pscustomobject]@{
		Mode = $Mode
		PairIndex = $PairIndex
		RunId = "$RunIdBase`_$Mode`_$PairIndex"
		LogPath = $LogPath
		FpsChartLog = $Log
		ProfileCsv = $ProfileCsv
		Stats = $Stats
	}
}

$ResultHeaders = @((Import-Csv -LiteralPath $ResultsPath | Select-Object -First 1).PSObject.Properties.Name)
$CandidateHeaders = @((Import-Csv -LiteralPath $CandidatesPath | Select-Object -First 1).PSObject.Properties.Name)
$Tests = @(Import-Csv -LiteralPath $TestCsv)
Assert-TestCsv -Tests $Tests
$RunSummaries = @()

foreach ($Test in $Tests)
{
	$CommandAssignment = "$($Test.command)=$($Test.value)"
	$Safe = ($Test.command + '_' + $Test.value) -replace '[^A-Za-z0-9]+', '_'
	$Timestamp = Get-Date -Format 'yyyyMMdd_HHmmss'
	$RunIdBase = "rp_$Safe`_$Timestamp"
	$Samples = @()
	for ($PairIndex = 1; $PairIndex -le $PairCount; $PairIndex++)
	{
		if (($PairIndex % 2) -eq 1)
		{
			$Samples += Invoke-RenderSample -Test $Test -Mode 'baseline' -PairIndex $PairIndex -RunIdBase $RunIdBase
			$Samples += Invoke-RenderSample -Test $Test -Mode 'test' -PairIndex $PairIndex -RunIdBase $RunIdBase
		}
		else
		{
			$Samples += Invoke-RenderSample -Test $Test -Mode 'test' -PairIndex $PairIndex -RunIdBase $RunIdBase
			$Samples += Invoke-RenderSample -Test $Test -Mode 'baseline' -PairIndex $PairIndex -RunIdBase $RunIdBase
		}
	}

	$PairDeltas = @()
	for ($PairIndex = 1; $PairIndex -le $PairCount; $PairIndex++)
	{
		$Baseline = $Samples | Where-Object { $_.PairIndex -eq $PairIndex -and $_.Mode -eq 'baseline' } | Select-Object -First 1
		$TestSample = $Samples | Where-Object { $_.PairIndex -eq $PairIndex -and $_.Mode -eq 'test' } | Select-Object -First 1
		if (-not $Baseline -or -not $TestSample)
		{
			throw "Missing baseline/test sample for pair $PairIndex of $CommandAssignment"
		}
		$PairDeltas += (($TestSample.Stats.Fps - $Baseline.Stats.Fps) / $Baseline.Stats.Fps) * 100.0
	}
	$BaselineFpsValues = @($Samples | Where-Object { $_.Mode -eq 'baseline' } | ForEach-Object { [double]$_.Stats.Fps })
	$TestFpsValues = @($Samples | Where-Object { $_.Mode -eq 'test' } | ForEach-Object { [double]$_.Stats.Fps })
	$MedianBaselineFps = Get-Median -Values $BaselineFpsValues
	$MedianTestFps = Get-Median -Values $TestFpsValues
	$MedianDelta = Get-Median -Values ([double[]]$PairDeltas)
	$PairDeltaMin = ($PairDeltas | Measure-Object -Minimum).Minimum
	$PairDeltaMax = ($PairDeltas | Measure-Object -Maximum).Maximum
	$PairDeltaSpread = [Math]::Abs([double]$PairDeltaMax - [double]$PairDeltaMin)
	$bPairSpreadStable = $PairDeltaSpread -le $PairSpreadThresholdPercent
	$bIsControl = ($Test.test_method -like '*control*') -or ($Test.recommendation -like '*control*') -or ($Test.candidate_module -like 'Control*') -or ($Test.module -like 'Control*')
	$bControlStable = if ($bIsControl) { [Math]::Abs($MedianDelta) -le $ControlThresholdPercent } else { $true }
	$ComparisonMethod = if ($bIsControl)
	{
		if ($bControlStable) { 'repeated_pair_control_stable' } else { 'repeated_pair_control_unstable' }
	}
	elseif (-not $bPairSpreadStable)
	{
		'repeated_pair_high_variance'
	}
	else
	{
		'repeated_pair_multi_process'
	}
	$Recommendation = if ($bIsControl)
	{
		if ($bControlStable) { 'valid_control_do_not_adopt' } else { 'invalid_control_do_not_adopt_protocol_unstable' }
	}
	elseif (-not $bPairSpreadStable)
	{
		'invalid_retest_required_repeated_pair_high_variance'
	}
	else
	{
		Get-Recommendation -Test $Test -Delta $MedianDelta
	}

	$RepresentativeBaseline = $Samples | Where-Object { $_.Mode -eq 'baseline' } | Select-Object -Last 1
	$RepresentativeTest = $Samples | Where-Object { $_.Mode -eq 'test' } | Select-Object -Last 1
	$ResultRow = New-EmptyRow -Headers $ResultHeaders
	Set-Field $ResultRow 'command' $Test.command
	Set-Field $ResultRow 'value' $Test.value
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
	Set-Field $ResultRow 'baseline_fps' (Format-InvariantNumber $MedianBaselineFps)
	Set-Field $ResultRow 'test_fps' (Format-InvariantNumber $MedianTestFps)
	Set-Field $ResultRow 'fps_delta_percent' (Format-InvariantNumber $MedianDelta)
	Set-Field $ResultRow 'quality_impact' $Test.quality_impact
	Set-Field $ResultRow 'recommendation' $Recommendation
	Set-Field $ResultRow 'project_setting_value' $Test.project_setting_value
	Set-Field $ResultRow 'notes' ("Repeated-pair multi-process result on benchmark map. PairCount={0}; pair deltas={1}; median delta={2}%; pair spread threshold={3}%. Baseline median={4} FPS, test median={5} FPS. Odd pairs run baseline->test, even pairs run test->baseline." -f $PairCount, (($PairDeltas | ForEach-Object { Format-InvariantNumber $_ }) -join ';'), (Format-InvariantNumber $MedianDelta), (Format-InvariantNumber $PairSpreadThresholdPercent), (Format-InvariantNumber $MedianBaselineFps), (Format-InvariantNumber $MedianTestFps))
	Set-Field $ResultRow 'usage' $CommandAssignment
	Set-Field $ResultRow 'help' $Test.help
	Set-Field $ResultRow 'flags' $Test.flags
	Set-Field $ResultRow 'run_id' $RunIdBase
	Set-Field $ResultRow 'map' $Map
	Set-Field $ResultRow 'resolution' $Resolution
	Set-Field $ResultRow 'avg_gpu_ms' (Format-InvariantNumber $RepresentativeTest.Stats.Gpu)
	Set-Field $ResultRow 'avg_renderthread_ms' (Format-InvariantNumber $RepresentativeTest.Stats.RenderThread)
	Set-Field $ResultRow 'avg_gamethread_ms' (Format-InvariantNumber $RepresentativeTest.Stats.GameThread)
	Set-Field $ResultRow 'frames' ([string]$RepresentativeTest.Stats.Frames)
	Set-Field $ResultRow 'duration_seconds' (Format-InvariantNumber $RepresentativeTest.Stats.Duration)
	Set-Field $ResultRow 'hitch_count' ([string]$RepresentativeTest.Stats.Hitches)
	Set-Field $ResultRow 'profile_csv' $RepresentativeTest.ProfileCsv
	Set-Field $ResultRow 'fpschart_log' $RepresentativeTest.FpsChartLog
	Set-Field $ResultRow 'launch_notes' "Repeated-pair multi-process: command set at frame $ApplyFrame for test launches only; capture frames $StartFrame-$StopFrame; quit frame $QuitFrame."
	Set-Field $ResultRow 'comparison_method' $ComparisonMethod
	Set-Field $ResultRow 'paired_baseline_fpschart_log' $RepresentativeBaseline.FpsChartLog
	Set-Field $ResultRow 'paired_test_fpschart_log' $RepresentativeTest.FpsChartLog
	Set-Field $ResultRow 'paired_baseline_avg_gpu_ms' (Format-InvariantNumber $RepresentativeBaseline.Stats.Gpu)
	Set-Field $ResultRow 'paired_test_avg_gpu_ms' (Format-InvariantNumber $RepresentativeTest.Stats.Gpu)
	Append-RowsToCsv -Path $ResultsPath -Rows @($ResultRow) -Headers $ResultHeaders

	if (-not $bIsControl -and $ComparisonMethod -eq 'repeated_pair_multi_process')
	{
		$CandidateRow = New-EmptyRow -Headers $CandidateHeaders
		Set-Field $CandidateRow 'module' $Test.candidate_module
		Set-Field $CandidateRow 'command' $Test.command
		Set-Field $CandidateRow 'value' $Test.value
		Set-Field $CandidateRow 'runtime_editable' 'true'
		Set-Field $CandidateRow 'scalability' $Test.in_scalability
		Set-Field $CandidateRow 'setting_target' $Test.config_target
		Set-Field $CandidateRow 'baseline_fps' (Format-InvariantNumber $MedianBaselineFps)
		Set-Field $CandidateRow 'test_fps' (Format-InvariantNumber $MedianTestFps)
		Set-Field $CandidateRow 'fps_delta_percent' (Format-InvariantNumber $MedianDelta)
		Set-Field $CandidateRow 'quality_risk' $Test.quality_impact
		Set-Field $CandidateRow 'adoption_status' $Recommendation
		Set-Field $CandidateRow 'priority' $Test.candidate_priority
		Set-Field $CandidateRow 'notes' 'Result generated by scripts/run_render_repeated_pair_tests.ps1. Visual review required before project config adoption.'
		Append-RowsToCsv -Path $CandidatesPath -Rows @($CandidateRow) -Headers $CandidateHeaders
	}

	$RunSummaries += [pscustomobject]@{
		Command = $CommandAssignment
		PairCount = $PairCount
		MedianBaselineFps = Format-InvariantNumber $MedianBaselineFps
		MedianTestFps = Format-InvariantNumber $MedianTestFps
		MedianDeltaPercent = Format-InvariantNumber $MedianDelta
		PairDeltas = (($PairDeltas | ForEach-Object { Format-InvariantNumber $_ }) -join ';')
		ComparisonMethod = $ComparisonMethod
		Recommendation = $Recommendation
	}
	Write-Host ("Completed repeated-pair {0}: baseline median {1} FPS, test median {2} FPS, median delta {3}%, method={4}" -f $CommandAssignment, (Format-InvariantNumber $MedianBaselineFps), (Format-InvariantNumber $MedianTestFps), (Format-InvariantNumber $MedianDelta), $ComparisonMethod)
}

Write-Host 'RESULTS_BEGIN'
$RunSummaries | ConvertTo-Json -Depth 4
Write-Host 'RESULTS_END'
