[CmdletBinding()]
param(
	[string]$ProjectRoot,
	[string]$EngineRoot,
	[string]$ProjectName,
	[string]$CollectedDir,
	[string]$Platform = "Windows",
	[string]$ShaderFormat = "PCD3D_SM6",
	[ValidateSet("All", "Quality", "Map", "Chunk")]
	[string]$GroupBy = "Quality",
	[string]$GroupName,
	[int]$ChunkSize = 16,
	[switch]$BisectFailures
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

function Resolve-ProjectRoot {
	param([string]$Value)

	if ($Value) {
		return (Resolve-Path -LiteralPath $Value).Path
	}

	$Candidate = (Resolve-Path -LiteralPath (Join-Path $PSScriptRoot "..\..\..\..")).Path
	if (Get-ChildItem -LiteralPath $Candidate -Filter "*.uproject" -File -ErrorAction SilentlyContinue | Select-Object -First 1) {
		return $Candidate
	}

	$Current = (Get-Location).Path
	while ($Current) {
		if (Get-ChildItem -LiteralPath $Current -Filter "*.uproject" -File -ErrorAction SilentlyContinue | Select-Object -First 1) {
			return $Current
		}

		$Parent = Split-Path -Parent $Current
		if ($Parent -eq $Current) {
			break
		}
		$Current = $Parent
	}

	throw "Could not locate a project root. Pass -ProjectRoot."
}

function Resolve-EngineRoot {
	param(
		[string]$ProjectRootValue,
		[string]$Value
	)

	if ($Value) {
		return (Resolve-Path -LiteralPath $Value).Path
	}

	if ($env:UE_ENGINE_ROOT) {
		return (Resolve-Path -LiteralPath $env:UE_ENGINE_ROOT).Path
	}

	$InstallFile = Join-Path $ProjectRootValue "Saved\OrionUE\UnrealEngine\InstallDirectory.txt"
	if (Test-Path -LiteralPath $InstallFile) {
		$SavedRoot = (Get-Content -LiteralPath $InstallFile -TotalCount 1).Trim()
		if ($SavedRoot) {
			return (Resolve-Path -LiteralPath $SavedRoot).Path
		}
	}

	throw "Could not locate EngineRoot. Pass -EngineRoot or set UE_ENGINE_ROOT."
}

function Get-ProjectName {
	param(
		[string]$ProjectRootValue,
		[string]$Value
	)

	if ($Value) {
		return $Value
	}

	$ProjectFile = Get-ChildItem -LiteralPath $ProjectRootValue -Filter "*.uproject" -File | Select-Object -First 1
	if (!$ProjectFile) {
		throw "No .uproject found under $ProjectRootValue"
	}

	return [System.IO.Path]::GetFileNameWithoutExtension($ProjectFile.Name)
}

function Convert-ToSafeName {
	param([string]$Value)

	$Safe = $Value -replace "[^A-Za-z0-9_.-]+", "_"
	if (!$Safe) {
		return "Group"
	}

	return $Safe.Trim("_")
}

function Assert-ChildPath {
	param(
		[string]$ParentPath,
		[string]$ChildPath
	)

	$ParentFullPath = (Resolve-Path -LiteralPath $ParentPath).Path.TrimEnd("\", "/")
	$ChildFullPath = [System.IO.Path]::GetFullPath($ChildPath)
	if (!$ChildFullPath.StartsWith($ParentFullPath, [System.StringComparison]::OrdinalIgnoreCase)) {
		throw "Refusing to touch path outside diagnostic root: $ChildFullPath"
	}
}

function Get-RecordingInfo {
	param(
		[string]$RuntimeProjectName,
		[string]$ShaderFormatValue,
		[System.IO.FileInfo]$File
	)

	$Pattern = "^RecordedPSO-$([regex]::Escape($RuntimeProjectName))_$([regex]::Escape($ShaderFormatValue))_(?<Quality>[^_]+)_(?<Map>.+)_(?<Stamp>\d{8}-\d{6})\.rec\.upipelinecache$"
	if ($File.Name -notmatch $Pattern) {
		$Pattern = "^RecordedPSO-.+?_$([regex]::Escape($ShaderFormatValue))_(?<Quality>[^_]+)_(?<Map>.+)_(?<Stamp>\d{8}-\d{6})\.rec\.upipelinecache$"
	}

	if ($File.Name -match $Pattern) {
		return [pscustomobject]@{
			File = $File
			Quality = $Matches["Quality"]
			Map = $Matches["Map"]
			Stamp = $Matches["Stamp"]
		}
	}

	return [pscustomobject]@{
		File = $File
		Quality = "Unknown"
		Map = [System.IO.Path]::GetFileNameWithoutExtension($File.Name)
		Stamp = ""
	}
}

function New-RecordingGroups {
	param(
		[object[]]$RecordingInfos,
		[string]$Mode,
		[string]$OnlyGroupName,
		[int]$BatchSizeValue
	)

	if ($Mode -eq "All") {
		return @([pscustomobject]@{
			Name = "All"
			Records = @($RecordingInfos)
		})
	}

	if ($Mode -eq "Quality") {
		$Groups = @($RecordingInfos | Group-Object Quality | Sort-Object Name | ForEach-Object {
			[pscustomobject]@{
				Name = "Quality_$($_.Name)"
				Records = @($_.Group)
			}
		})
	}
	elseif ($Mode -eq "Map") {
		$Groups = @($RecordingInfos | Group-Object Map | Sort-Object Name | ForEach-Object {
			[pscustomobject]@{
				Name = "Map_$($_.Name)"
				Records = @($_.Group)
			}
		})
	}
	else {
		if ($BatchSizeValue -lt 1) {
			throw "-ChunkSize must be greater than 0."
		}

		$SortedInfos = @($RecordingInfos | Sort-Object { $_.File.Name })
		$Groups = @()
		for ($Index = 0; $Index -lt $SortedInfos.Count; $Index += $BatchSizeValue) {
			$End = [Math]::Min($Index + $BatchSizeValue - 1, $SortedInfos.Count - 1)
			$Groups += [pscustomobject]@{
				Name = "Chunk_{0:D3}_{1:D3}" -f ($Index + 1), ($End + 1)
				Records = @($SortedInfos[$Index..$End])
			}
		}
	}

	if ($OnlyGroupName) {
		$Groups = @($Groups | Where-Object { $_.Name -eq $OnlyGroupName -or $_.Name -like $OnlyGroupName })
		if (!$Groups) {
			throw "No group matched -GroupName '$OnlyGroupName'."
		}
	}

	return @($Groups)
}

function Invoke-EditorCommand {
	param(
		[string]$EditorCmd,
		[string[]]$Arguments
	)

	& $EditorCmd @Arguments *> $null
	return [int]$LASTEXITCODE
}

function Copy-BatchInputs {
	param(
		[object[]]$Records,
		[System.IO.FileInfo[]]$StableKeyFiles,
		[string]$BatchDir
	)

	New-Item -ItemType Directory -Force -Path $BatchDir | Out-Null
	foreach ($Record in $Records) {
		Copy-Item -LiteralPath $Record.File.FullName -Destination (Join-Path $BatchDir $Record.File.Name) -Force
	}
	foreach ($StableKeyFile in $StableKeyFiles) {
		Copy-Item -LiteralPath $StableKeyFile.FullName -Destination (Join-Path $BatchDir $StableKeyFile.Name) -Force
	}
}

function Read-FailureSummary {
	param([string]$LogPath)

	if (!(Test-Path -LiteralPath $LogPath)) {
		return ""
	}

	$Matches = Select-String -LiteralPath $LogPath -Pattern "Assertion failed|PipelineCacheUtilities.cpp|PipelineFileCache.cpp|not in the correct format|UShaderPipelineCacheToolsCommandlet failed|Error:" -ErrorAction SilentlyContinue |
		Select-Object -First 8
	return (($Matches | ForEach-Object { $_.Line.Trim() }) -join " | ")
}

function Invoke-PsoBatchTest {
	param(
		[object]$Group,
		[string]$DiagnosticRoot,
		[string]$EditorCmd,
		[string]$ProjectFile,
		[string]$ProjectNameValue,
		[string]$ShaderFormatValue,
		[string]$PlatformValue,
		[string]$ChunkInfoDir,
		[System.IO.FileInfo[]]$StableKeyFiles
	)

	$SafeName = Convert-ToSafeName $Group.Name
	$BatchDir = Join-Path $DiagnosticRoot $SafeName
	Assert-ChildPath $DiagnosticRoot $BatchDir
	if (Test-Path -LiteralPath $BatchDir) {
		Remove-Item -LiteralPath $BatchDir -Recurse -Force
	}
	New-Item -ItemType Directory -Force -Path $BatchDir | Out-Null

	$Records = @($Group.Records)
	Copy-BatchInputs $Records $StableKeyFiles $BatchDir

	$OutputSpc = Join-Path $BatchDir ("PSO_{0}_{1}_{2}.spc" -f $ProjectNameValue, $ShaderFormatValue, $SafeName)
	$ExpandLog = Join-Path $BatchDir "expand.log"
	$BuildLog = Join-Path $BatchDir "build.log"
	$BuildOutput = Join-Path $BatchDir ("{0}_{1}_{2}.stable.upipelinecache" -f $ProjectNameValue, $ShaderFormatValue, $SafeName)
	$RecordedPattern = Join-Path $BatchDir "*.rec.upipelinecache"
	$StableKeysPattern = Join-Path $BatchDir ("*-{0}.shk" -f $ShaderFormatValue)

	$ExpandArgs = @(
		$ProjectFile,
		"-run=ShaderPipelineCacheTools",
		"expand",
		$RecordedPattern,
		$StableKeysPattern,
		$OutputSpc,
		"-unattended",
		"-nop4",
		"-NoSound",
		"-NoSplash",
		("-abslog={0}" -f $ExpandLog)
	)

	Write-Host "Expand group $($Group.Name): $($Records.Count) recording(s)"
	$ExpandExitCode = Invoke-EditorCommand $EditorCmd $ExpandArgs
	if ($ExpandExitCode -ne 0 -or !(Test-Path -LiteralPath $OutputSpc)) {
		return [pscustomobject]@{
			Group = $Group.Name
			Count = $Records.Count
			Status = "EXPAND_FAIL"
			ExpandExitCode = $ExpandExitCode
			BuildExitCode = $null
			Spc = $OutputSpc
			Log = $ExpandLog
			Summary = Read-FailureSummary $ExpandLog
		}
	}

	$BuildArgs = @(
		$ProjectFile,
		"-run=ShaderPipelineCacheTools",
		"build",
		$OutputSpc
	)
	foreach ($StableKeyFile in $StableKeyFiles) {
		$BuildArgs += (Join-Path $BatchDir $StableKeyFile.Name)
	}
	if ($ChunkInfoDir) {
		$BuildArgs += ("-chunkinfodir={0}" -f $ChunkInfoDir)
	}
	$BuildArgs += @(
		("-library={0}" -f $ProjectNameValue),
		("-platform={0}" -f $PlatformValue),
		$BuildOutput,
		"-unattended",
		"-nop4",
		"-NoSound",
		"-NoSplash",
		("-abslog={0}" -f $BuildLog)
	)

	Write-Host "Build-test group $($Group.Name)"
	$BuildExitCode = Invoke-EditorCommand $EditorCmd $BuildArgs
	$Status = "PASS"
	if ($BuildExitCode -ne 0 -or !(Test-Path -LiteralPath $BuildOutput)) {
		$Status = "BUILD_FAIL"
	}

	return [pscustomobject]@{
		Group = $Group.Name
		Count = $Records.Count
		Status = $Status
		ExpandExitCode = $ExpandExitCode
		BuildExitCode = $BuildExitCode
		Spc = $OutputSpc
		Log = $BuildLog
		Summary = Read-FailureSummary $BuildLog
	}
}

function Invoke-Bisect {
	param(
		[object[]]$Records,
		[string]$Prefix,
		[hashtable]$Context
	)

	if ($Records.Count -le 1) {
		$SingleGroup = [pscustomobject]@{
			Name = "$Prefix`_single"
			Records = @($Records)
		}
		return @(Invoke-PsoBatchTest @Context -Group $SingleGroup)
	}

	$Mid = [Math]::Floor($Records.Count / 2)
	$Left = @($Records[0..($Mid - 1)])
	$Right = @($Records[$Mid..($Records.Count - 1)])
	$Results = @()

	foreach ($Part in @(
		[pscustomobject]@{ Name = "$Prefix`_left"; Records = $Left },
		[pscustomobject]@{ Name = "$Prefix`_right"; Records = $Right }
	)) {
		$Result = Invoke-PsoBatchTest @Context -Group $Part
		$Results += $Result
		if ($Result.Status -ne "PASS") {
			$Results += Invoke-Bisect -Records @($Part.Records) -Prefix $Part.Name -Context $Context
			return @($Results)
		}
	}

	$Results += [pscustomobject]@{
		Group = "$Prefix`_combination"
		Count = $Records.Count
		Status = "COMBINATION_ONLY"
		ExpandExitCode = $null
		BuildExitCode = $null
		Spc = ""
		Log = ""
		Summary = "Both halves passed; failure requires a combination of records."
	}
	return @($Results)
}

$ResolvedProjectRoot = Resolve-ProjectRoot $ProjectRoot
$ResolvedEngineRoot = Resolve-EngineRoot $ResolvedProjectRoot $EngineRoot
$ResolvedProjectName = Get-ProjectName $ResolvedProjectRoot $ProjectName
$ProjectFile = Get-ChildItem -LiteralPath $ResolvedProjectRoot -Filter "*.uproject" -File | Select-Object -First 1
if (!$ProjectFile) {
	throw "No .uproject found under $ResolvedProjectRoot"
}

if (!$CollectedDir) {
	$CollectedDir = Join-Path $ResolvedProjectRoot "CollectedPSOs"
}
$ResolvedCollectedDir = (Resolve-Path -LiteralPath $CollectedDir).Path

$EditorCmd = Join-Path $ResolvedEngineRoot "Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
if (!(Test-Path -LiteralPath $EditorCmd)) {
	throw "UnrealEditor-Cmd.exe not found: $EditorCmd"
}

$StableKeyFiles = @(Get-ChildItem -LiteralPath $ResolvedCollectedDir -File -Filter "*.shk" |
	Where-Object { $_.Name -like "*-$ShaderFormat.shk" } |
	Sort-Object FullName)
if (!$StableKeyFiles) {
	throw "No .shk files for shader format $ShaderFormat found in $ResolvedCollectedDir"
}

$RecordFiles = @(Get-ChildItem -LiteralPath $ResolvedCollectedDir -File -Filter "*.rec.upipelinecache" | Sort-Object Name)
if (!$RecordFiles) {
	throw "No .rec.upipelinecache files found in $ResolvedCollectedDir"
}

$RecordingInfos = @($RecordFiles | ForEach-Object { Get-RecordingInfo $ResolvedProjectName $ShaderFormat $_ })
$Groups = @(New-RecordingGroups $RecordingInfos $GroupBy $GroupName $ChunkSize)

$Timestamp = Get-Date -Format "yyyyMMdd-HHmmss"
$DiagnosticRoot = Join-Path $ResolvedProjectRoot ("Saved\OrionUE\PSO\spc-batches-{0}-{1}" -f $GroupBy, $Timestamp)
New-Item -ItemType Directory -Force -Path $DiagnosticRoot | Out-Null

$ChunkInfoDir = $null
$CandidateChunkInfoDir = Join-Path $ResolvedProjectRoot ("Saved\Cooked\{0}\{1}\Content" -f $Platform, $ResolvedProjectName)
if (Test-Path -LiteralPath $CandidateChunkInfoDir) {
	$ChunkInfoDir = (Resolve-Path -LiteralPath $CandidateChunkInfoDir).Path
}

$Context = @{
	DiagnosticRoot = (Resolve-Path -LiteralPath $DiagnosticRoot).Path
	EditorCmd = $EditorCmd
	ProjectFile = $ProjectFile.FullName
	ProjectNameValue = $ResolvedProjectName
	ShaderFormatValue = $ShaderFormat
	PlatformValue = $Platform
	ChunkInfoDir = $ChunkInfoDir
	StableKeyFiles = $StableKeyFiles
}

Write-Host "ProjectRoot: $ResolvedProjectRoot"
Write-Host "EngineRoot:  $ResolvedEngineRoot"
Write-Host "Collected:   $ResolvedCollectedDir"
Write-Host "Groups:      $($Groups.Count) ($GroupBy)"
Write-Host "Output:      $DiagnosticRoot"

$Results = @()
foreach ($Group in $Groups) {
	$Result = Invoke-PsoBatchTest @Context -Group $Group
	$Results += $Result
	if ($BisectFailures -and $Result.Status -ne "PASS" -and @($Group.Records).Count -gt 1) {
		$Results += Invoke-Bisect -Records @($Group.Records) -Prefix (Convert-ToSafeName $Group.Name) -Context $Context
	}
}

$ResultsPath = Join-Path $DiagnosticRoot "results.csv"
$Results | Export-Csv -LiteralPath $ResultsPath -NoTypeInformation -Encoding UTF8
$Results | Format-Table Group, Count, Status, ExpandExitCode, BuildExitCode, Summary -AutoSize
Write-Host "Results: $ResultsPath"
