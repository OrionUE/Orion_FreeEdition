[CmdletBinding()]
param(
	[string]$ProjectRoot,
	[string]$PackageRoot,
	[string]$GameExe,
	[string]$EngineRoot,
	[string]$ProjectName,
	[string]$RuntimeAppName,
	[string]$TargetExeName,
	[string[]]$AdditionalArgs = @(),
	[string]$Platform = "Windows",
	[string]$ShaderFormat = "PCD3D_SM6",
	[string[]]$QualityPresets = @("Low", "Medium", "High", "Epic", "Cinematic"),
	[int]$RoamSeconds = 90,
	[int]$StartupWaitSeconds = 25,
	[int]$CaptureFinishDelaySeconds = 2,
	[int]$CaptureGrid = 5,
	[int]$CaptureThirdPersonDistance = 900,
	[int]$CaptureCameraHeight = 450,
	[int]$CaptureMaxComponentExtent = 200000,
	[ValidateSet("All", "Incremental", "Maps")]
	[string]$CollectionMode = "All",
	[Alias("Map", "Maps")]
	[string[]]$MapsToCollect = @(),
	[string]$MapListPath,
	[string]$MapIncludeRegex,
	[string]$MapExcludeRegex,
	[switch]$SkipStableKeyCopy,
	[switch]$CopyStableKeysOnly,
	[switch]$SkipRoam,
	[switch]$ListMapsOnly,
	[switch]$ConvertAfterCollection,
	[switch]$CopySpcToBuild
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

function Resolve-ProjectRoot {
	param([string]$Value)
	if ($Value) {
		return (Resolve-Path -LiteralPath $Value).Path
	}
	return (Resolve-Path -LiteralPath (Join-Path $PSScriptRoot "..\..\..\..")).Path
}

function Get-ProjectNameFromRoot {
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

function Convert-UmapToLongPackageName {
	param(
		[string]$ProjectRootValue,
		[System.IO.FileInfo]$MapFile
	)

	$ProjectContent = Join-Path $ProjectRootValue "Content"
	$MapPath = $MapFile.FullName
	if ($MapPath.StartsWith($ProjectContent, [System.StringComparison]::OrdinalIgnoreCase)) {
		$Relative = $MapPath.Substring($ProjectContent.Length).TrimStart("\", "/")
		$RelativeWithoutExtension = $Relative.Substring(0, $Relative.Length - $MapFile.Extension.Length)
		return "/Game/" + ($RelativeWithoutExtension -replace "\\", "/")
	}

	$Directory = $MapFile.Directory
	while ($Directory -and $Directory.FullName.Length -gt $ProjectRootValue.Length) {
		if ($Directory.Name -eq "Content") {
			$PluginRoot = $Directory.Parent
			$PluginFile = Get-ChildItem -LiteralPath $PluginRoot.FullName -Filter "*.uplugin" -File -ErrorAction SilentlyContinue | Select-Object -First 1
			if ($PluginFile) {
				$PluginName = [System.IO.Path]::GetFileNameWithoutExtension($PluginFile.Name)
				$Relative = $MapPath.Substring($Directory.FullName.Length).TrimStart("\", "/")
				$RelativeWithoutExtension = $Relative.Substring(0, $Relative.Length - $MapFile.Extension.Length)
				return "/" + $PluginName + "/" + ($RelativeWithoutExtension -replace "\\", "/")
			}
		}
		$Directory = $Directory.Parent
	}

	return $null
}

function New-MapInfo {
	param(
		[string]$PackagePath,
		[string]$FilePath
	)

	[pscustomobject]@{
		PackagePath = $PackagePath
		FilePath = $FilePath
		Name = [System.IO.Path]::GetFileNameWithoutExtension($FilePath)
		SanitizedName = ($PackagePath.Trim("/") -replace "[^A-Za-z0-9_]+", "_")
	}
}

function Get-AllMapInfos {
	param([string]$ProjectRootValue)

	$Roots = @((Join-Path $ProjectRootValue "Content"), (Join-Path $ProjectRootValue "Plugins"))
	$MapInfos = foreach ($Root in $Roots) {
		if (Test-Path -LiteralPath $Root) {
			Get-ChildItem -LiteralPath $Root -Recurse -File -Filter "*.umap" |
				Where-Object { $_.FullName -notmatch "\\(Intermediate|Saved|DerivedDataCache|__ExternalActors__|__ExternalObjects__)\\?" } |
				ForEach-Object {
					$PackagePath = Convert-UmapToLongPackageName $ProjectRootValue $_
					if ($PackagePath) {
						New-MapInfo $PackagePath $_.FullName
					}
				}
		}
	}

	$MapInfos = $MapInfos | Sort-Object PackagePath -Unique
	if ($MapIncludeRegex) {
		$MapInfos = $MapInfos | Where-Object { $_.PackagePath -match $MapIncludeRegex }
	}
	if ($MapExcludeRegex) {
		$MapInfos = $MapInfos | Where-Object { $_.PackagePath -notmatch $MapExcludeRegex }
	}
	return @($MapInfos)
}

function Resolve-MapSelections {
	param(
		[object[]]$AllMapInfos,
		[string[]]$Selections
	)

	$Resolved = @()
	$Missing = @()
	foreach ($Selection in $Selections) {
		$Trimmed = $Selection.Trim()
		if (!$Trimmed) {
			continue
		}

		$ResolvedPath = $null
		if (Test-Path -LiteralPath $Trimmed -PathType Leaf) {
			$ResolvedPath = (Resolve-Path -LiteralPath $Trimmed).Path
		}

		$NormalizedSelection = ($Trimmed -replace "\\", "/").TrimEnd("/")
		if ($NormalizedSelection.EndsWith(".umap", [System.StringComparison]::OrdinalIgnoreCase)) {
			$NormalizedSelection = $NormalizedSelection.Substring(0, $NormalizedSelection.Length - 5)
		}

		$Matches = @($AllMapInfos | Where-Object {
			$NormalizedPackage = ($_.PackagePath -replace "\\", "/").TrimEnd("/")
			$NormalizedFile = ($_.FilePath -replace "\\", "/")
			$NormalizedFileNoExtension = $NormalizedFile
			if ($NormalizedFileNoExtension.EndsWith(".umap", [System.StringComparison]::OrdinalIgnoreCase)) {
				$NormalizedFileNoExtension = $NormalizedFileNoExtension.Substring(0, $NormalizedFileNoExtension.Length - 5)
			}

			$_.PackagePath -eq $Trimmed -or
				$_.Name -eq $Trimmed -or
				($ResolvedPath -and $_.FilePath -eq $ResolvedPath) -or
				$NormalizedPackage -eq $NormalizedSelection -or
				$NormalizedFile -eq $NormalizedSelection -or
				$NormalizedFileNoExtension -eq $NormalizedSelection
		})

		if (!$Matches) {
			if ($Trimmed.Contains("*")) {
				$Wildcard = $NormalizedSelection
				$Matches = @($AllMapInfos | Where-Object {
					$_.PackagePath -like $Wildcard -or
						$_.Name -like $Wildcard -or
						($_.FilePath -replace "\\", "/") -like $Wildcard
				})
			}
			else {
				$Matches = @($AllMapInfos | Where-Object {
					$_.PackagePath.IndexOf($Trimmed, [System.StringComparison]::OrdinalIgnoreCase) -ge 0 -or
						$_.Name.IndexOf($Trimmed, [System.StringComparison]::OrdinalIgnoreCase) -ge 0
				})
			}
		}

		if ($Matches) {
			$Resolved += $Matches
		}
		else {
			$Missing += $Trimmed
		}
	}

	if ($Missing) {
		throw "Map selection did not match discovered maps: $($Missing -join ', ')"
	}

	return @($Resolved | Sort-Object PackagePath -Unique)
}

function Get-MapInfos {
	param([string]$ProjectRootValue)

	$MapInfos = @(Get-AllMapInfos $ProjectRootValue)
	if ($MapListPath) {
		$Selections = @(Get-Content -LiteralPath $MapListPath |
			Where-Object { $_ -and !$_.TrimStart().StartsWith("#") } |
			ForEach-Object { $_.Trim() })
		$MapInfos = @(Resolve-MapSelections $MapInfos $Selections)
	}

	return @($MapInfos)
}

function Test-InternalWin64Exe {
	param(
		[System.IO.FileInfo]$Candidate,
		[string]$ExpectedBaseName
	)

	if ($ExpectedBaseName -and $Candidate.BaseName -ne $ExpectedBaseName) {
		return $false
	}

	if (!$Candidate.Directory -or $Candidate.Directory.Name -ne "Win64") {
		return $false
	}

	$Parent = $Candidate.Directory.Parent
	return $Parent -and $Parent.Name -eq "Binaries"
}

function Find-GameExe {
	param(
		[string]$PackageRootValue,
		[string]$ExplicitExe,
		[string]$TargetName
	)

	if ($ExplicitExe) {
		return (Resolve-Path -LiteralPath $ExplicitExe).Path
	}
	if (!$PackageRootValue) {
		throw "Pass -GameExe or -PackageRoot."
	}

	$Root = (Resolve-Path -LiteralPath $PackageRootValue).Path
	$Candidates = Get-ChildItem -LiteralPath $Root -Recurse -File -Filter "*.exe" |
		Where-Object { $_.FullName -notmatch "\\(Engine|CrashReportClient|BootstrapPackagedGame)\\?" }

	if ($TargetName) {
		$InternalNamed = $Candidates |
			Where-Object { Test-InternalWin64Exe $_ $TargetName } |
			Select-Object -First 1
		if ($InternalNamed) {
			return $InternalNamed.FullName
		}

		$Named = $Candidates | Where-Object { $_.BaseName -eq $TargetName } | Sort-Object { $_.FullName.Length } -Descending | Select-Object -First 1
		if ($Named) {
			return $Named.FullName
		}
	}

	$Steam = $Candidates |
		Where-Object { $_.BaseName -like "*Steam*" -and (Test-InternalWin64Exe $_ $null) } |
		Select-Object -First 1
	if ($Steam) {
		return $Steam.FullName
	}

	$Steam = $Candidates | Where-Object { $_.BaseName -like "*Steam*" } | Sort-Object { $_.FullName.Length } -Descending | Select-Object -First 1
	if ($Steam) {
		return $Steam.FullName
	}

	$Any = $Candidates | Sort-Object { $_.FullName.Length } -Descending | Select-Object -First 1
	if ($Any) {
		return $Any.FullName
	}

	throw "No packaged game executable found under $Root"
}

function Copy-StableKeys {
	param(
		[string]$ProjectRootValue,
		[string]$ProjectNameValue,
		[string]$PlatformValue,
		[string]$ShaderFormatValue,
		[string]$CollectedDirValue
	)

	$CandidateDirs = @(
		(Join-Path $ProjectRootValue ("Saved\Cooked\{0}\{1}\Metadata\PipelineCaches" -f $PlatformValue, $ProjectNameValue)),
		(Join-Path $ProjectRootValue ("Saved\Cooked\WindowsClient\{0}\Metadata\PipelineCaches" -f $ProjectNameValue))
	)

	$Copied = 0
	foreach ($Dir in $CandidateDirs) {
		if (Test-Path -LiteralPath $Dir) {
			$Files = Get-ChildItem -LiteralPath $Dir -File -Filter ("*-$ShaderFormatValue.shk")
			foreach ($File in $Files) {
				Copy-Item -LiteralPath $File.FullName -Destination (Join-Path $CollectedDirValue $File.Name) -Force
				$Copied++
			}
		}
	}

	if ($Copied -eq 0) {
		Write-Warning "No .shk files copied. Cook the project first and verify ShaderFormat=$ShaderFormatValue."
	}
	else {
		Write-Host "Copied $Copied .shk file(s) to $CollectedDirValue"
	}
}

function Get-QualityIndex {
	param([string]$Quality)
	switch -Regex ($Quality) {
		"^Low$" { return 0 }
		"^Medium$" { return 1 }
		"^High$" { return 2 }
		"^Epic$" { return 3 }
		"^Cinematic$" { return 4 }
		"^\d+$" { return [int]$Quality }
		default { throw "Unknown quality preset: $Quality" }
	}
}

function Copy-NewRecordings {
	param(
		[string]$ProjectRootValue,
		[string]$RuntimeAppNameValue,
		[string]$CollectedDirValue,
		[datetime]$Since,
		[string]$Quality,
		[string]$MapPath,
		[string]$ShaderFormatValue,
		[string]$ProjectNameValue
	)

	$SearchRoots = New-Object System.Collections.Generic.List[string]
	if ($env:LOCALAPPDATA) {
		$SearchRoots.Add((Join-Path $env:LOCALAPPDATA "$RuntimeAppNameValue\Saved"))
	}
	if ($PackageRoot) {
		$ResolvedPackageRoot = (Resolve-Path -LiteralPath $PackageRoot).Path
		$SearchRoots.Add((Join-Path $ResolvedPackageRoot "Saved"))
		$SearchRoots.Add((Join-Path $ResolvedPackageRoot "$ProjectNameValue\Saved"))
		if ($RuntimeAppNameValue -ne $ProjectNameValue) {
			$SearchRoots.Add((Join-Path $ResolvedPackageRoot "$RuntimeAppNameValue\Saved"))
		}
	}
	$SearchRoots.Add((Join-Path $ProjectRootValue "Saved"))

	$MapLeaf = Get-RecordingMapLeaf $MapPath
	$Stamp = Get-Date -Format "yyyyMMdd-HHmmss"
	$Copied = 0

	foreach ($Root in $SearchRoots | Select-Object -Unique) {
		if (!(Test-Path -LiteralPath $Root)) {
			continue
		}

		$Files = Get-ChildItem -LiteralPath $Root -Recurse -File -Filter "*.upipelinecache" -ErrorAction SilentlyContinue |
			Where-Object { $_.LastWriteTime -ge $Since -and $_.Name -notmatch "\.stable\.upipelinecache$" }

		foreach ($File in $Files) {
			$Name = "RecordedPSO-{0}_{1}_{2}_{3}_{4}.rec.upipelinecache" -f $RuntimeAppNameValue, $ShaderFormatValue, $Quality, $MapLeaf, $Stamp
			$Destination = Join-Path $CollectedDirValue $Name
			if (Test-Path -LiteralPath $Destination) {
				$Destination = Join-Path $CollectedDirValue ("{0}_{1}{2}" -f [System.IO.Path]::GetFileNameWithoutExtension($Name), $Copied, [System.IO.Path]::GetExtension($Name))
			}
			Copy-Item -LiteralPath $File.FullName -Destination $Destination -Force
			$Copied++
		}
	}

	return $Copied
}

function Get-RecordingMapLeaf {
	param([string]$MapPath)

	return ($MapPath.Trim("/") -replace "[^A-Za-z0-9_]+", "_")
}

function Convert-ToProjectRelativePath {
	param(
		[string]$ProjectRootValue,
		[string]$PathValue
	)

	$Root = (Resolve-Path -LiteralPath $ProjectRootValue).Path.TrimEnd("\", "/")
	$FullPath = (Resolve-Path -LiteralPath $PathValue).Path
	if ($FullPath.StartsWith($Root, [System.StringComparison]::OrdinalIgnoreCase)) {
		return $FullPath.Substring($Root.Length).TrimStart("\", "/")
	}

	return $FullPath
}

function Convert-UnixSecondsToUtc {
	param([int64]$UnixSeconds)

	$UnixEpoch = [datetime]::SpecifyKind(([datetime]"1970-01-01 00:00:00"), [System.DateTimeKind]::Utc)
	return $UnixEpoch.AddSeconds($UnixSeconds)
}

function Get-GitLastChangeUtc {
	param(
		[string]$ProjectRootValue,
		[string]$FilePath
	)

	if (!(Get-Command git -ErrorAction SilentlyContinue)) {
		return $null
	}

	$RelativePath = Convert-ToProjectRelativePath $ProjectRootValue $FilePath
	$GitRoot = & git -C $ProjectRootValue rev-parse --show-toplevel 2>$null
	if ($LASTEXITCODE -ne 0 -or !$GitRoot) {
		return $null
	}

	$Output = & git -C $ProjectRootValue log -1 --format=%ct -- $RelativePath 2>$null
	if ($LASTEXITCODE -ne 0 -or !$Output) {
		return $null
	}

	$UnixSeconds = [int64](@($Output)[0])
	return Convert-UnixSecondsToUtc $UnixSeconds
}

function Test-GitLocalMapChange {
	param(
		[string]$ProjectRootValue,
		[string]$FilePath
	)

	if (!(Get-Command git -ErrorAction SilentlyContinue)) {
		return $false
	}

	$RelativePath = Convert-ToProjectRelativePath $ProjectRootValue $FilePath
	$Output = & git -C $ProjectRootValue status --porcelain -- $RelativePath 2>$null
	if ($LASTEXITCODE -ne 0) {
		return $false
	}

	return [bool]$Output
}

function Get-MapSourceTimestampUtc {
	param(
		[string]$ProjectRootValue,
		[object]$MapInfo
	)

	if (!$MapInfo.FilePath -or !(Test-Path -LiteralPath $MapInfo.FilePath -PathType Leaf)) {
		return [datetime]::MinValue
	}

	$FileTimestampUtc = (Get-Item -LiteralPath $MapInfo.FilePath).LastWriteTimeUtc
	$GitTimestampUtc = Get-GitLastChangeUtc $ProjectRootValue $MapInfo.FilePath
	if (!$GitTimestampUtc) {
		return $FileTimestampUtc
	}

	if (Test-GitLocalMapChange $ProjectRootValue $MapInfo.FilePath) {
		if ($FileTimestampUtc -gt $GitTimestampUtc) {
			return $FileTimestampUtc
		}
	}

	return $GitTimestampUtc
}

function Get-LatestRecordingTimeUtc {
	param(
		[string]$CollectedDirValue,
		[string]$RuntimeAppNameValue,
		[string]$ShaderFormatValue,
		[string]$Quality,
		[string]$MapPath
	)

	$MapLeaf = Get-RecordingMapLeaf $MapPath
	$Pattern = "RecordedPSO-{0}_{1}_{2}_{3}_*.rec.upipelinecache" -f $RuntimeAppNameValue, $ShaderFormatValue, $Quality, $MapLeaf
	$Files = @(Get-ChildItem -LiteralPath $CollectedDirValue -File -Filter $Pattern -ErrorAction SilentlyContinue)
	if (!$Files) {
		return $null
	}

	return ($Files | Sort-Object LastWriteTimeUtc -Descending | Select-Object -First 1).LastWriteTimeUtc
}

function Select-CollectionMaps {
	param(
		[string]$ProjectRootValue,
		[object[]]$DiscoveredMapInfos,
		[string]$Mode,
		[string[]]$Selections,
		[string]$CollectedDirValue,
		[string]$RuntimeAppNameValue,
		[string]$ShaderFormatValue,
		[string[]]$QualityPresetValues,
		[bool]$HasMapList
	)

	$CandidateMapInfos = @($DiscoveredMapInfos)
	if (@($Selections).Count -gt 0) {
		$Mode = "Maps"
		$CandidateMapInfos = @(Resolve-MapSelections $DiscoveredMapInfos $Selections)
	}
	elseif ($Mode -eq "Maps" -and !$HasMapList) {
		throw "CollectionMode=Maps requires -Maps/-Map or -MapListPath."
	}

	if ($Mode -eq "All" -or $Mode -eq "Maps") {
		return @($CandidateMapInfos | ForEach-Object {
			[pscustomobject]@{
				MapInfo = $_
				Reason = $Mode
				SourceTimeUtc = $null
				LatestRecordingUtc = $null
			}
		})
	}

	$Selected = @()
	foreach ($MapInfo in $CandidateMapInfos) {
		$SourceTimeUtc = Get-MapSourceTimestampUtc $ProjectRootValue $MapInfo
		$MissingQualities = @()
		$OutdatedQualities = @()
		$LatestTimes = @()

		foreach ($Quality in $QualityPresetValues) {
			$LatestRecordingUtc = Get-LatestRecordingTimeUtc $CollectedDirValue $RuntimeAppNameValue $ShaderFormatValue $Quality $MapInfo.PackagePath
			if (!$LatestRecordingUtc) {
				$MissingQualities += $Quality
				continue
			}

			$LatestTimes += $LatestRecordingUtc
			if ($LatestRecordingUtc -lt $SourceTimeUtc) {
				$OutdatedQualities += $Quality
			}
		}

		$LatestOverallUtc = $null
		if ($LatestTimes) {
			$LatestOverallUtc = $LatestTimes | Sort-Object -Descending | Select-Object -First 1
		}

		if ($MissingQualities -or $OutdatedQualities) {
			$ReasonParts = @()
			if ($MissingQualities) {
				$ReasonParts += "missing qualities: $($MissingQualities -join ',')"
			}
			if ($OutdatedQualities) {
				$ReasonParts += "outdated qualities: $($OutdatedQualities -join ',')"
			}

			$Selected += [pscustomobject]@{
				MapInfo = $MapInfo
				Reason = $ReasonParts -join "; "
				SourceTimeUtc = $SourceTimeUtc
				LatestRecordingUtc = $LatestOverallUtc
			}
		}
		else {
			Write-Host "Skipping current map: $($MapInfo.PackagePath)"
		}
	}

	return @($Selected)
}

function Get-CimProcessCreationTimeUtc {
	param([object]$ProcessInfo)

	if (!$ProcessInfo.CreationDate) {
		return [datetime]::MinValue
	}

	if ($ProcessInfo.CreationDate -is [datetime]) {
		return $ProcessInfo.CreationDate.ToUniversalTime()
	}

	return ([System.Management.ManagementDateTimeConverter]::ToDateTime($ProcessInfo.CreationDate)).ToUniversalTime()
}

function Get-DescendantProcessIds {
	param([int[]]$RootProcessIds)

	$AllProcesses = @(Get-CimInstance Win32_Process -ErrorAction SilentlyContinue)
	$Pending = New-Object "System.Collections.Generic.Queue[int]"
	$Seen = @{}
	foreach ($RootProcessId in $RootProcessIds) {
		if ($RootProcessId -gt 0 -and !$Seen.ContainsKey($RootProcessId)) {
			$Seen[$RootProcessId] = $true
			$Pending.Enqueue($RootProcessId)
		}
	}

	while ($Pending.Count -gt 0) {
		$ParentProcessId = $Pending.Dequeue()
		foreach ($ChildProcess in $AllProcesses | Where-Object { $_.ParentProcessId -eq $ParentProcessId }) {
			$ChildProcessId = [int]$ChildProcess.ProcessId
			if (!$Seen.ContainsKey($ChildProcessId)) {
				$Seen[$ChildProcessId] = $true
				$Pending.Enqueue($ChildProcessId)
			}
		}
	}

	return @($Seen.Keys | ForEach-Object { [int]$_ })
}

function Get-RelatedGameProcessIds {
	param(
		[int]$RootProcessId,
		[string]$ExecutablePath,
		[datetime]$StartedAfter
	)

	$Ids = @(Get-DescendantProcessIds @($RootProcessId))
	$ExecutableName = [System.IO.Path]::GetFileName($ExecutablePath)
	$ResolvedExecutablePath = (Resolve-Path -LiteralPath $ExecutablePath).Path
	$StartedAfterUtc = $StartedAfter.ToUniversalTime().AddSeconds(-5)

	$ExecutableProcesses = @(Get-CimInstance Win32_Process -ErrorAction SilentlyContinue |
		Where-Object { $_.Name -ieq $ExecutableName -and $_.ExecutablePath })
	foreach ($ExecutableProcess in $ExecutableProcesses) {
		if (!($ExecutableProcess.ExecutablePath -ieq $ResolvedExecutablePath)) {
			continue
		}

		$CreationTimeUtc = Get-CimProcessCreationTimeUtc $ExecutableProcess
		if ($CreationTimeUtc -lt $StartedAfterUtc) {
			continue
		}

		$Ids += [int]$ExecutableProcess.ProcessId
		$Ids += Get-DescendantProcessIds @([int]$ExecutableProcess.ProcessId)
	}

	return @($Ids | Sort-Object -Unique)
}

function Stop-PsoProcessTree {
	param(
		[System.Diagnostics.Process]$Process,
		[string]$ExecutablePath,
		[datetime]$StartedAfter
	)

	$RootProcessId = 0
	if ($Process) {
		$RootProcessId = $Process.Id
	}

	$ProcessIds = @(Get-RelatedGameProcessIds $RootProcessId $ExecutablePath $StartedAfter)
	if (!$ProcessIds) {
		return
	}

	$Processes = @($ProcessIds | ForEach-Object { Get-Process -Id $_ -ErrorAction SilentlyContinue })
	foreach ($LiveProcess in $Processes) {
		try {
			if (!$LiveProcess.HasExited -and $LiveProcess.MainWindowHandle -ne 0) {
				$LiveProcess.CloseMainWindow() | Out-Null
			}
		}
		catch {
		}
	}

	$Deadline = (Get-Date).AddSeconds(10)
	while ((Get-Date) -lt $Deadline) {
		$StillRunning = @($Processes | Where-Object {
			try {
				!$_.HasExited
			}
			catch {
				$false
			}
		})
		if (!$StillRunning) {
			return
		}
		Start-Sleep -Milliseconds 250
	}

	foreach ($LiveProcess in $Processes) {
		try {
			if (!$LiveProcess.HasExited) {
				Stop-Process -Id $LiveProcess.Id -Force -ErrorAction SilentlyContinue
			}
		}
		catch {
		}
	}
}

$ResolvedProjectRoot = Resolve-ProjectRoot $ProjectRoot
$ProjectName = Get-ProjectNameFromRoot $ResolvedProjectRoot $ProjectName
if (!$RuntimeAppName) {
	$RuntimeAppName = $ProjectName
}

$CollectedDir = Join-Path $ResolvedProjectRoot "CollectedPSOs"
New-Item -ItemType Directory -Force -Path $CollectedDir | Out-Null

$DiscoveredMapInfos = @(Get-MapInfos $ResolvedProjectRoot)
$CollectionDecisions = @(Select-CollectionMaps `
	-ProjectRootValue $ResolvedProjectRoot `
	-DiscoveredMapInfos $DiscoveredMapInfos `
	-Mode $CollectionMode `
	-Selections $MapsToCollect `
	-CollectedDirValue $CollectedDir `
	-RuntimeAppNameValue $RuntimeAppName `
	-ShaderFormatValue $ShaderFormat `
	-QualityPresetValues $QualityPresets `
	-HasMapList ([bool]$MapListPath))
$SelectedMapInfos = @($CollectionDecisions | ForEach-Object { $_.MapInfo })
$LogDir = Join-Path $ResolvedProjectRoot "Saved\Logs\PSO"
New-Item -ItemType Directory -Force -Path $LogDir | Out-Null
$MapOut = Join-Path $LogDir ("pso-maps-{0}.txt" -f (Get-Date -Format "yyyyMMdd-HHmmss"))
$CollectionDecisions |
	ForEach-Object { "{0}`t{1}" -f $_.MapInfo.PackagePath, $_.Reason } |
	Set-Content -LiteralPath $MapOut -Encoding UTF8

Write-Host "Discovered $($DiscoveredMapInfos.Count) map(s)."
Write-Host "Selected $($SelectedMapInfos.Count) map(s) for CollectionMode=$CollectionMode."
Write-Host "Selected map list: $MapOut"
if ($ListMapsOnly) {
	$SelectedMapInfos | ForEach-Object { $_.PackagePath }
	return
}

if (!$SkipStableKeyCopy) {
	Copy-StableKeys $ResolvedProjectRoot $ProjectName $Platform $ShaderFormat $CollectedDir
}
elseif ($CopyStableKeysOnly) {
	throw "-CopyStableKeysOnly cannot be combined with -SkipStableKeyCopy."
}

if ($CopyStableKeysOnly) {
	Write-Host "Stable key copy completed. Skipping packaged game launch because -CopyStableKeysOnly was set."
	return
}

if (!$SelectedMapInfos) {
	throw "No maps selected for collection."
}

$ResolvedGameExe = Find-GameExe $PackageRoot $GameExe $TargetExeName
Write-Host "GameExe: $ResolvedGameExe"

$TotalRecordings = 0
foreach ($Quality in $QualityPresets) {
	$QualityIndex = Get-QualityIndex $Quality
	$QualityExec = "sg.ViewDistanceQuality=$QualityIndex;sg.AntiAliasingQuality=$QualityIndex;sg.ShadowQuality=$QualityIndex;sg.GlobalIlluminationQuality=$QualityIndex;sg.ReflectionQuality=$QualityIndex;sg.PostProcessQuality=$QualityIndex;sg.TextureQuality=$QualityIndex;sg.EffectsQuality=$QualityIndex;sg.FoliageQuality=$QualityIndex;sg.ShadingQuality=$QualityIndex"

	foreach ($MapInfo in $SelectedMapInfos) {
		$Map = $MapInfo.PackagePath
		$Start = Get-Date
		$RunLog = Join-Path $LogDir ("pso-run-{0}-{1}-{2}.log" -f $Quality, (($Map.Trim("/") -replace "[^A-Za-z0-9_]+", "_")), (Get-Date -Format "yyyyMMdd-HHmmss"))
		$LaunchArgs = @(
			$Map,
			"-windowed",
			"-ResX=1280",
			"-ResY=720",
			"-NoVSync",
			"-NoLoadingScreen",
			"-clearPSODriverCache",
			"-logPSO",
			"-abslog=$RunLog"
		)
		if (!$SkipRoam) {
			$LaunchArgs += @(
				"-OrionPSOCapture",
				"-OrionPSOCaptureExit",
				"-OrionPSOCaptureStartDelay=$StartupWaitSeconds",
				"-OrionPSOCaptureDuration=$RoamSeconds",
				"-OrionPSOCaptureFinishDelay=$CaptureFinishDelaySeconds",
				"-OrionPSOCaptureGrid=$CaptureGrid",
				"-OrionPSOCaptureThirdPersonDistance=$CaptureThirdPersonDistance",
				"-OrionPSOCaptureCameraHeight=$CaptureCameraHeight",
				"-OrionPSOCaptureMaxComponentExtent=$CaptureMaxComponentExtent"
			)
		}
		$LaunchArgs += @($AdditionalArgs)
		$LaunchArgs += ("-ExecCmds=`"{0}`"" -f $QualityExec)

		Write-Host "Running [$Quality] $Map"
		$Process = $null
		try {
			$Process = Start-Process -FilePath $ResolvedGameExe -ArgumentList $LaunchArgs -WorkingDirectory (Split-Path -Parent $ResolvedGameExe) -PassThru
			if (!$SkipRoam) {
				$CaptureTimeoutMs = [int](($StartupWaitSeconds + $RoamSeconds + $CaptureFinishDelaySeconds + 60) * 1000)
				$Process.WaitForExit($CaptureTimeoutMs) | Out-Null
			}
			elseif (!$Process.HasExited) {
				Start-Sleep -Seconds $RoamSeconds
			}
		}
		finally {
			Stop-PsoProcessTree $Process $ResolvedGameExe $Start
		}

		Start-Sleep -Seconds 3
		$Copied = Copy-NewRecordings $ResolvedProjectRoot $RuntimeAppName $CollectedDir $Start $Quality $Map $ShaderFormat $ProjectName
		$TotalRecordings += $Copied
		Write-Host "Copied $Copied recording file(s) for [$Quality] $Map"
	}
}

Write-Host "Total recording files copied: $TotalRecordings"

if ($ConvertAfterCollection) {
	$ConvertScript = Join-Path $PSScriptRoot "Convert-PSOs-5.8.ps1"
	& $ConvertScript -ProjectRoot $ResolvedProjectRoot -EngineRoot $EngineRoot -ProjectName $ProjectName -Platform $Platform -ShaderFormat $ShaderFormat -CopyToBuild:$CopySpcToBuild
}
