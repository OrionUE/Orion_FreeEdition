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
	[int]$BaselineStartFrame = 300,
	[int]$BaselineStopFrame = 580,
	[int]$ApplyFrame = 640,
	[int]$TestStartFrame = 660,
	[int]$TestStopFrame = 940,
	[int]$QuitFrame = 970
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
$ResultsPath = Join-Path $ProjectRoot '.agents\skills\ue5-render-commands\references\render-command-experiments\experiment_results.csv'
$CandidatesPath = Join-Path $ProjectRoot '.agents\skills\ue5-render-commands\references\render-command-experiments\current_project_candidates.csv'
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
		return 'reject_for_now_paired_ab_loss_or_scene_not_benefiting'
	}
	if ($Test.adoption_status_hint -and $Delta -ge 0.5)
	{
		return $Test.adoption_status_hint
	}
	if ($Delta -ge 2.0)
	{
		return 'quality_tradeoff_candidate_visual_review_required'
	}
	if ($Delta -ge 0.5)
	{
		return 'possible_candidate_small_gain_visual_review_required'
	}
	return 'neutral_paired_ab_no_material_gain'
}

function Assert-FrameProtocol()
{
	if (-not ($BaselineStartFrame -lt $BaselineStopFrame -and $BaselineStopFrame -lt $ApplyFrame -and $ApplyFrame -lt $TestStartFrame -and $TestStartFrame -lt $TestStopFrame -and $TestStopFrame -lt $QuitFrame))
	{
		throw 'Invalid frame protocol. Expected BaselineStart < BaselineStop < Apply < TestStart < TestStop < Quit.'
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
$AppendRows = @()
$AppendCandidateRows = @()
$RunSummaries = @()

foreach ($Test in $Tests)
{
	$Safe = ($Test.command + '_' + $Test.value) -replace '[^A-Za-z0-9]+', '_'
	$Timestamp = Get-Date -Format 'yyyyMMdd_HHmmss'
	$RunId = "ab_$Safe`_$Timestamp"
	$LogPath = Join-Path $ProjectRoot "Saved\Logs\RenderCommandExperiment_AB_$Safe.log"
	$BeforeFpsDirs = Get-ExistingPathSet -Root $FpsChartRoot -Filter '*' -Directory
	$BeforeCsvFiles = Get-ExistingPathSet -Root $CsvRoot -Filter 'Profile*.csv'
	$CommandAssignment = "$($Test.command)=$($Test.value)"
	$CsvExec = "$($BaselineStartFrame):StartFPSChart,$($BaselineStopFrame):StopFPSChart,$($ApplyFrame):$CommandAssignment,$($TestStartFrame):StartFPSChart,$($TestStopFrame):StopFPSChart,$($QuitFrame):Quit"
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

	Write-Host "Launching paired A/B: $CommandAssignment"
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
		if ($CapturedLogsDuringRun.Count -ge 2)
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
			$CapturedLogs = @(Get-NewFpsLogs -BeforeSet $BeforeFpsDirs)
			if ($CapturedLogs.Count -ge 2)
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
			throw "Timed out while running $CommandAssignment"
		}
		$Process.Refresh()
	}
	Start-Sleep -Seconds 3

	$NewLogs = @(Get-NewFpsLogs -BeforeSet $BeforeFpsDirs)
	if ($NewLogs.Count -lt 2)
	{
		throw "Expected two FPSChart logs for $CommandAssignment, found $($NewLogs.Count). Launch log: $LogPath"
	}

	$BaselineLog = $NewLogs[-2]
	$TestLog = $NewLogs[-1]
	$BaselineStats = Parse-FpsChartLog -Path $BaselineLog
	$TestStats = Parse-FpsChartLog -Path $TestLog
	$Delta = (($TestStats.Fps - $BaselineStats.Fps) / $BaselineStats.Fps) * 100.0
	$ProfileCsv = Get-NewCsvProfile -BeforeSet $BeforeCsvFiles
	$Html = ''
	$HtmlFile = Get-ChildItem -LiteralPath (Split-Path -Parent $TestLog) -File -Filter '*.html' -ErrorAction SilentlyContinue | Select-Object -First 1
	if ($HtmlFile)
	{
		$Html = $HtmlFile.FullName
	}

	$Recommendation = Get-Recommendation -Test $Test -Delta $Delta
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
	Set-Field $ResultRow 'baseline_fps' (Format-InvariantNumber $BaselineStats.Fps)
	Set-Field $ResultRow 'test_fps' (Format-InvariantNumber $TestStats.Fps)
	Set-Field $ResultRow 'fps_delta_percent' (Format-InvariantNumber $Delta)
	Set-Field $ResultRow 'quality_impact' $Test.quality_impact
	Set-Field $ResultRow 'recommendation' $Recommendation
	Set-Field $ResultRow 'project_setting_value' $Test.project_setting_value
	Set-Field $ResultRow 'notes' ("Paired A/B same-process result on benchmark map: baseline {0} FPS, test {1} FPS, delta {2}%. Baseline GPU {3} ms, test GPU {4} ms. Treat as quality/performance tradeoff until visual review." -f (Format-InvariantNumber $BaselineStats.Fps), (Format-InvariantNumber $TestStats.Fps), (Format-InvariantNumber $Delta), (Format-InvariantNumber $BaselineStats.Gpu), (Format-InvariantNumber $TestStats.Gpu))
	Set-Field $ResultRow 'usage' "$CommandAssignment"
	Set-Field $ResultRow 'help' $Test.help
	Set-Field $ResultRow 'flags' $Test.flags
	Set-Field $ResultRow 'run_id' $RunId
	Set-Field $ResultRow 'map' $Map
	Set-Field $ResultRow 'resolution' $Resolution
	Set-Field $ResultRow 'avg_gpu_ms' (Format-InvariantNumber $TestStats.Gpu)
	Set-Field $ResultRow 'avg_renderthread_ms' (Format-InvariantNumber $TestStats.RenderThread)
	Set-Field $ResultRow 'avg_gamethread_ms' (Format-InvariantNumber $TestStats.GameThread)
	Set-Field $ResultRow 'frames' ([string]$TestStats.Frames)
	Set-Field $ResultRow 'duration_seconds' (Format-InvariantNumber $TestStats.Duration)
	Set-Field $ResultRow 'hitch_count' ([string]$TestStats.Hitches)
	Set-Field $ResultRow 'profile_csv' $ProfileCsv
	Set-Field $ResultRow 'fpschart_log' $TestLog
	Set-Field $ResultRow 'fpschart_html' $Html
	$LaunchNotes = "Paired A/B same process with delayed warmup: baseline frames $BaselineStartFrame-$BaselineStopFrame, set $CommandAssignment at frame $ApplyFrame, test frames $TestStartFrame-$TestStopFrame, quit frame $QuitFrame. Launch log: $LogPath"
	if ($bForcedExitAfterCapture)
	{
		$LaunchNotes = "$LaunchNotes Process did not exit before timeout after both FPSChart windows were captured; forced exit after capture and kept the result."
	}
	Set-Field $ResultRow 'launch_notes' $LaunchNotes
	Set-Field $ResultRow 'comparison_method' 'paired_ab_same_process_warmup_delayed'
	Set-Field $ResultRow 'paired_baseline_fpschart_log' $BaselineLog
	Set-Field $ResultRow 'paired_test_fpschart_log' $TestLog
	Set-Field $ResultRow 'paired_baseline_avg_gpu_ms' (Format-InvariantNumber $BaselineStats.Gpu)
	Set-Field $ResultRow 'paired_test_avg_gpu_ms' (Format-InvariantNumber $TestStats.Gpu)
	$AppendRows += $ResultRow

	$CandidateRow = New-EmptyRow -Headers $CandidateHeaders
	Set-Field $CandidateRow 'module' $Test.candidate_module
	Set-Field $CandidateRow 'command' $Test.command
	Set-Field $CandidateRow 'value' $Test.value
	Set-Field $CandidateRow 'runtime_editable' 'true'
	Set-Field $CandidateRow 'scalability' $Test.in_scalability
	Set-Field $CandidateRow 'setting_target' $Test.config_target
	Set-Field $CandidateRow 'baseline_fps' (Format-InvariantNumber $BaselineStats.Fps)
	Set-Field $CandidateRow 'test_fps' (Format-InvariantNumber $TestStats.Fps)
	Set-Field $CandidateRow 'fps_delta_percent' (Format-InvariantNumber $Delta)
	Set-Field $CandidateRow 'quality_risk' $Test.quality_impact
	Set-Field $CandidateRow 'adoption_status' $Recommendation
	Set-Field $CandidateRow 'priority' $Test.candidate_priority
	Set-Field $CandidateRow 'notes' 'Result generated by scripts/run_render_ab_tests.ps1. Visual review required before project config adoption.'
	$AppendCandidateRows += $CandidateRow
	Append-RowsToCsv -Path $ResultsPath -Rows @($ResultRow) -Headers $ResultHeaders
	Append-RowsToCsv -Path $CandidatesPath -Rows @($CandidateRow) -Headers $CandidateHeaders

	$RunSummaries += [pscustomobject]@{
		Command = $CommandAssignment
		BaselineFps = Format-InvariantNumber $BaselineStats.Fps
		TestFps = Format-InvariantNumber $TestStats.Fps
		DeltaPercent = Format-InvariantNumber $Delta
		BaselineGpuMs = Format-InvariantNumber $BaselineStats.Gpu
		TestGpuMs = Format-InvariantNumber $TestStats.Gpu
		Recommendation = $Recommendation
		BaselineLog = $BaselineLog
		TestLog = $TestLog
	}
	Write-Host ("Completed {0}: {1} -> {2} FPS ({3}%)" -f $CommandAssignment, (Format-InvariantNumber $BaselineStats.Fps), (Format-InvariantNumber $TestStats.Fps), (Format-InvariantNumber $Delta))
}

Write-Host 'RESULTS_BEGIN'
$RunSummaries | ConvertTo-Json -Depth 4
Write-Host 'RESULTS_END'
