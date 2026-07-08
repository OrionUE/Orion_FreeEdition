param(
	[string]$SourceMap,
	[string]$ConfigFile,
	[string]$VoxFile,
	[string]$Prefix,
	[string]$WorkingRoot = "Saved\OrionUE\ProjectAcoustics\LocalBake",
	[string]$PreviousBakeDir,
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\probe-health-report.json",
	[switch]$FailOnKnownBadProbes
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

function Get-MapName
{
	param([string]$MapPath)

	if ([string]::IsNullOrWhiteSpace($MapPath))
	{
		return ""
	}

	$Normalized = $MapPath.Replace("\", "/").Trim()
	$Leaf = ($Normalized -split "/")[-1]
	if ($Leaf.Contains("."))
	{
		$Leaf = ($Leaf -split "\.")[0]
	}
	return $Leaf
}

function Get-ProjectAcousticsConfigPath
{
	$SavedConfig = Join-Path (Get-Location).Path "Saved\Config\ProjectAcoustics.cfg"
	if (Test-Path -LiteralPath $SavedConfig)
	{
		return $SavedConfig
	}

	$LegacyConfig = Join-Path (Get-Location).Path "Config\ProjectAcoustics.cfg"
	if (Test-Path -LiteralPath $LegacyConfig)
	{
		return $LegacyConfig
	}

	return ""
}

function Get-PrefixFromProjectConfig
{
	param(
		[string]$MapName,
		[string]$FallbackPrefix
	)

	$ProjectAcousticsConfig = Get-ProjectAcousticsConfigPath
	if ([string]::IsNullOrWhiteSpace($ProjectAcousticsConfig))
	{
		return $FallbackPrefix
	}

	$Line = Select-String -LiteralPath $ProjectAcousticsConfig -Pattern "^\s*level_prefix_map\s*=" | Select-Object -Last 1
	if (-not $Line)
	{
		return $FallbackPrefix
	}

	$JsonText = ($Line.Line -replace "^\s*level_prefix_map\s*=\s*", "").Trim()
	if ([string]::IsNullOrWhiteSpace($JsonText))
	{
		return $FallbackPrefix
	}

	try
	{
		$Map = $JsonText | ConvertFrom-Json
		$Property = $Map.PSObject.Properties | Where-Object { $_.Name -eq $MapName } | Select-Object -First 1
		if ($Property -and -not [string]::IsNullOrWhiteSpace([string]$Property.Value))
		{
			return [string]$Property.Value
		}
	}
	catch
	{
		return $FallbackPrefix
	}

	return $FallbackPrefix
}

function Get-DefaultAcousticsDataDir
{
	return Join-Path (Get-Location).Path "Saved\OrionUE\ProjectAcoustics\AcousticsData"
}

function Get-LegacyAcousticsDataDirs
{
	return @(
		(Join-Path (Get-Location).Path "Plugins\Audio\ProjectAcoustics\AcousticsData"),
		(Join-Path (Get-Location).Path "Plugins\ProjectAcoustics\AcousticsData")
	)
}

function Resolve-AcousticsDataDirForPrefix
{
	param([string]$Prefix)

	$Candidates = @((Get-DefaultAcousticsDataDir)) + @(Get-LegacyAcousticsDataDirs)
	foreach ($Candidate in $Candidates)
	{
		$CandidateConfigFile = Join-Path $Candidate "${Prefix}_config.xml"
		$CandidateVoxFile = Join-Path $Candidate "${Prefix}.vox"
		if ((Test-Path -LiteralPath $CandidateConfigFile) -and (Test-Path -LiteralPath $CandidateVoxFile))
		{
			return $Candidate
		}
	}

	foreach ($Candidate in $Candidates)
	{
		if (Test-Path -LiteralPath $Candidate)
		{
			return $Candidate
		}
	}

	return Get-DefaultAcousticsDataDir
}

function Get-XmlChildByLocalName
{
	param(
		[System.Xml.XmlNode]$Node,
		[string]$Name
	)

	if (-not $Node)
	{
		return $null
	}

	return @($Node.ChildNodes | Where-Object { $_.NodeType -eq [System.Xml.XmlNodeType]::Element -and $_.LocalName -eq $Name } | Select-Object -First 1)[0]
}

function Get-XmlChildTextByLocalName
{
	param(
		[System.Xml.XmlNode]$Node,
		[string]$Name
	)

	$Child = Get-XmlChildByLocalName -Node $Node -Name $Name
	if (-not $Child)
	{
		return ""
	}

	return $Child.InnerText.Trim()
}

function Convert-ToNullableDouble
{
	param([string]$Value)

	$Parsed = [double]0
	$Styles = [System.Globalization.NumberStyles]::Float
	$Culture = [System.Globalization.CultureInfo]::InvariantCulture
	if ([double]::TryParse($Value, $Styles, $Culture, [ref]$Parsed))
	{
		return $Parsed
	}

	return $null
}

function Convert-ToNullableInt
{
	param([string]$Value)

	$DoubleValue = Convert-ToNullableDouble -Value $Value
	if ($null -eq $DoubleValue)
	{
		return $null
	}

	$Rounded = [Math]::Round([double]$DoubleValue)
	if ([Math]::Abs([double]$DoubleValue - $Rounded) -gt 0.000001)
	{
		return $null
	}

	if ($Rounded -lt [int]::MinValue -or $Rounded -gt [int]::MaxValue)
	{
		return $null
	}

	return [int]$Rounded
}

function Read-ProbeConfig
{
	param([string]$Path)

	$XmlText = Get-Content -LiteralPath $Path -Raw
	[xml]$Xml = $XmlText

	$NumProbesNode = $Xml.SelectSingleNode("//*[local-name()='NumProbes']")
	$ProbeList = $Xml.SelectSingleNode("//*[local-name()='ProbeList']")
	$VoxelData = $Xml.SelectSingleNode("//*[local-name()='VoxelData']")

	$NumProbes = 0
	$bHasNumProbes = ($null -ne $NumProbesNode) -and [int]::TryParse($NumProbesNode.InnerText.Trim(), [ref]$NumProbes)
	$ValueNodes = @()
	if ($null -ne $ProbeList)
	{
		$ValueNodes = @($ProbeList.ChildNodes | Where-Object {
			$_.NodeType -eq [System.Xml.XmlNodeType]::Element -and $_.LocalName -match "^value(\d+)$"
		} | Sort-Object { [int]([regex]::Match($_.LocalName, "\d+").Value) })
	}

	$CellSize = $null
	$XResolution = $null
	$YResolution = $null
	$ZResolution = $null
	$MinCorner = $null
	if ($null -ne $VoxelData)
	{
		$CellSize = Convert-ToNullableDouble -Value (Get-XmlChildTextByLocalName -Node $VoxelData -Name "Cell_Size")
		$XResolution = Convert-ToNullableInt -Value (Get-XmlChildTextByLocalName -Node $VoxelData -Name "X_Resolution")
		$YResolution = Convert-ToNullableInt -Value (Get-XmlChildTextByLocalName -Node $VoxelData -Name "Y_Resolution")
		$ZResolution = Convert-ToNullableInt -Value (Get-XmlChildTextByLocalName -Node $VoxelData -Name "Z_Resolution")

		$VoxelizationBounds = Get-XmlChildByLocalName -Node $VoxelData -Name "Voxelization_Bounding_Box"
		$MinCornerNode = Get-XmlChildByLocalName -Node $VoxelizationBounds -Name "MinCorner"
		if ($MinCornerNode)
		{
			$MinCorner = [ordered]@{
				x = Convert-ToNullableDouble -Value (Get-XmlChildTextByLocalName -Node $MinCornerNode -Name "X")
				y = Convert-ToNullableDouble -Value (Get-XmlChildTextByLocalName -Node $MinCornerNode -Name "Y")
				z = Convert-ToNullableDouble -Value (Get-XmlChildTextByLocalName -Node $MinCornerNode -Name "Z")
			}
		}
	}

	$ProbeValues = New-Object System.Collections.Generic.List[object]
	foreach ($ValueNode in $ValueNodes)
	{
		$Index = [int]([regex]::Match($ValueNode.LocalName, "\d+").Value)
		$IText = Get-XmlChildTextByLocalName -Node $ValueNode -Name "i"
		$JText = Get-XmlChildTextByLocalName -Node $ValueNode -Name "j"
		$KText = Get-XmlChildTextByLocalName -Node $ValueNode -Name "k"

		$ProbeValues.Add([pscustomobject]@{
			index = $Index
			i = Convert-ToNullableInt -Value $IText
			j = Convert-ToNullableInt -Value $JText
			k = Convert-ToNullableInt -Value $KText
			rawI = $IText
			rawJ = $JText
			rawK = $KText
		})
	}

	return [pscustomobject]@{
		numProbes = $NumProbes
		hasNumProbes = $bHasNumProbes
		hasProbeList = ($null -ne $ProbeList)
		hasVoxelData = ($null -ne $VoxelData)
		manualProbeListOverride = ($XmlText -match "OrionManualProbeListOverride\s*=\s*true")
		valueCount = $ValueNodes.Count
		values = @($ProbeValues.ToArray())
		voxelData = [pscustomobject]@{
			cellSize = $CellSize
			xResolution = $XResolution
			yResolution = $YResolution
			zResolution = $ZResolution
			minCorner = $MinCorner
		}
	}
}

function Find-PreviousBakeLogs
{
	param(
		[string]$BakeRoot,
		[string]$BakePrefix,
		[string]$ExplicitBakeDir
	)

	$Logs = New-Object System.Collections.Generic.List[string]
	if (-not [string]::IsNullOrWhiteSpace($ExplicitBakeDir))
	{
		$ResolvedExplicitBakeDir = Resolve-OutputPath -Path $ExplicitBakeDir
		if (Test-Path -LiteralPath $ResolvedExplicitBakeDir)
		{
			Get-ChildItem -LiteralPath $ResolvedExplicitBakeDir -Filter "Triton.LocalProcessor.stdout.log*" -File -ErrorAction SilentlyContinue |
				ForEach-Object { $Logs.Add($_.FullName) }
		}
		return @($Logs.ToArray())
	}

	$ResolvedBakeRoot = Resolve-OutputPath -Path $BakeRoot
	if (-not (Test-Path -LiteralPath $ResolvedBakeRoot) -or [string]::IsNullOrWhiteSpace($BakePrefix))
	{
		return @()
	}

	Get-ChildItem -LiteralPath $ResolvedBakeRoot -Directory -ErrorAction SilentlyContinue |
		Where-Object { $_.Name -like "$BakePrefix*" } |
		Sort-Object LastWriteTime -Descending |
		ForEach-Object {
			Get-ChildItem -LiteralPath $_.FullName -Filter "Triton.LocalProcessor.stdout.log*" -File -ErrorAction SilentlyContinue |
				ForEach-Object { $Logs.Add($_.FullName) }
		}

	return @($Logs.ToArray())
}

function Read-KnownFailedProbeIndices
{
	param([string[]]$LogFiles)

	$IndexSet = @{}
	$ReasonSet = @{}
	$SourceLogs = New-Object System.Collections.Generic.List[string]

	foreach ($LogFile in $LogFiles)
	{
		if (-not (Test-Path -LiteralPath $LogFile))
		{
			continue
		}

		$Text = Get-Content -LiteralPath $LogFile -Raw
		$bFoundInThisLog = $false

		foreach ($Match in [regex]::Matches($Text, "Missing/Mismatched probe indices:\s*([0-9,\s]+)"))
		{
			foreach ($Token in ($Match.Groups[1].Value -split "[,\s]+"))
			{
				if ([string]::IsNullOrWhiteSpace($Token))
				{
					continue
				}

				$Index = 0
				if ([int]::TryParse($Token, [ref]$Index))
				{
					$IndexSet[$Index] = $true
					$bFoundInThisLog = $true
				}
			}
		}

		foreach ($Match in [regex]::Matches($Text, "Problem opening \.ENC file .*?_task(\d+)\.enc"))
		{
			$Index = [int]$Match.Groups[1].Value
			$IndexSet[$Index] = $true
			$bFoundInThisLog = $true
		}

		$FailureMatches = [regex]::Matches(
			$Text,
			"Setting simulation region for probe \[(\d+)\].{0,6000}?(no air voxel could be found|Failed to add sound probe|Simulator initialization failed)",
			[System.Text.RegularExpressions.RegexOptions]::Singleline)
		foreach ($Match in $FailureMatches)
		{
			$Index = [int]$Match.Groups[1].Value
			$IndexSet[$Index] = $true
			$ReasonSet[$Index] = "LocalProcessor failed to initialize probe; no adjacent air voxel was available near the source cell."
			$bFoundInThisLog = $true
		}

		if ($Text -match "no air voxel could be found")
		{
			$ReasonSet[-1] = "At least one task reported: no air voxel could be found on either side of the source location cell."
			$bFoundInThisLog = $true
		}

		if ($bFoundInThisLog)
		{
			$SourceLogs.Add($LogFile)
		}
	}

	$Indices = @($IndexSet.Keys | Sort-Object)
	return [pscustomobject]@{
		indices = @($Indices)
		sourceLogs = @($SourceLogs.ToArray())
		reasonSummary = if ($ReasonSet.Count -gt 0) { "LocalProcessor could not initialize one or more probes, usually because the probe voxel was inside solid geometry or too close to sealed geometry with no adjacent air voxel." } else { "" }
	}
}

function Write-HealthReport
{
	param(
		[object]$Summary,
		[string]$Path
	)

	$Parent = Split-Path -Parent $Path
	if ($Parent)
	{
		New-Item -ItemType Directory -Force -Path $Parent | Out-Null
	}

	@{ summary = $Summary } | ConvertTo-Json -Depth 8 | Set-Content -LiteralPath $Path -Encoding UTF8
}

$MapName = Get-MapName -MapPath $SourceMap
if ([string]::IsNullOrWhiteSpace($Prefix))
{
	$FallbackPrefix = if ([string]::IsNullOrWhiteSpace($MapName)) { "" } else { "${MapName}_AcousticsData" }
	$Prefix = Get-PrefixFromProjectConfig -MapName $MapName -FallbackPrefix $FallbackPrefix
}

$AcousticsDataDir = Resolve-AcousticsDataDirForPrefix -Prefix $Prefix
if ([string]::IsNullOrWhiteSpace($ConfigFile))
{
	$ConfigFile = Join-Path $AcousticsDataDir "${Prefix}_config.xml"
}
if ([string]::IsNullOrWhiteSpace($VoxFile))
{
	$VoxFile = Join-Path $AcousticsDataDir "${Prefix}.vox"
}

$ResolvedConfigFile = Resolve-OutputPath -Path $ConfigFile
$ResolvedVoxFile = Resolve-OutputPath -Path $VoxFile
$ResolvedReport = Resolve-OutputPath -Path $Report

$Errors = New-Object System.Collections.Generic.List[string]
$Warnings = New-Object System.Collections.Generic.List[string]
$Config = $null
if (-not (Test-Path -LiteralPath $ResolvedConfigFile))
{
	$Errors.Add("Missing ProjectAcoustics config file: $ResolvedConfigFile")
}
else
{
	$Config = Read-ProbeConfig -Path $ResolvedConfigFile
}

if (-not (Test-Path -LiteralPath $ResolvedVoxFile))
{
	$Errors.Add("Missing ProjectAcoustics vox file: $ResolvedVoxFile")
}

$DuplicateGridCells = @()
$OutOfBoundsGridIndices = @()
$NonIntegerGridIndices = @()
$MissingValueIndices = @()
$UnexpectedValueIndices = @()
$KnownFailedProbeCells = @()

if ($Config)
{
	if (-not $Config.hasNumProbes)
	{
		$Errors.Add("Missing or invalid NumProbes in $ResolvedConfigFile.")
	}
	if (-not $Config.hasProbeList)
	{
		$Errors.Add("Missing ProbeList in $ResolvedConfigFile.")
	}
	if (-not $Config.hasVoxelData)
	{
		$Errors.Add("Missing VoxelData in $ResolvedConfigFile.")
	}

	if ($Config.hasNumProbes -and $Config.valueCount -ne $Config.numProbes)
	{
		$Errors.Add("ProbeList count does not match NumProbes: valueCount=$($Config.valueCount), NumProbes=$($Config.numProbes).")
	}

	$IndexSet = @{}
	foreach ($ProbeValue in $Config.values)
	{
		$IndexSet[[int]$ProbeValue.index] = $true
		if ($Config.hasNumProbes -and ($ProbeValue.index -lt 0 -or $ProbeValue.index -ge $Config.numProbes))
		{
			$UnexpectedValueIndices += [int]$ProbeValue.index
		}

		if ($null -eq $ProbeValue.i -or $null -eq $ProbeValue.j -or $null -eq $ProbeValue.k)
		{
			$NonIntegerGridIndices += [int]$ProbeValue.index
		}
	}

	if ($Config.hasNumProbes)
	{
		for ($Index = 0; $Index -lt $Config.numProbes; $Index++)
		{
			if (-not $IndexSet.ContainsKey($Index))
			{
				$MissingValueIndices += $Index
			}
		}
	}

	if ($MissingValueIndices.Count -gt 0)
	{
		$Errors.Add("ProbeList is missing value nodes for indices: $($MissingValueIndices -join ', ').")
	}
	if ($UnexpectedValueIndices.Count -gt 0)
	{
		$Errors.Add("ProbeList contains indices outside NumProbes: $($UnexpectedValueIndices -join ', ').")
	}
	if ($NonIntegerGridIndices.Count -gt 0)
	{
		$Errors.Add("ProbeList contains non-integer grid coordinates at indices: $($NonIntegerGridIndices -join ', ').")
	}

	$bHasUsableVoxelGrid =
		$null -ne $Config.voxelData.xResolution -and $Config.voxelData.xResolution -gt 0 -and
		$null -ne $Config.voxelData.yResolution -and $Config.voxelData.yResolution -gt 0 -and
		$null -ne $Config.voxelData.zResolution -and $Config.voxelData.zResolution -gt 0

	if ($bHasUsableVoxelGrid)
	{
		$GridCellSet = @{}
		foreach ($ProbeValue in $Config.values)
		{
			if ($null -eq $ProbeValue.i -or $null -eq $ProbeValue.j -or $null -eq $ProbeValue.k)
			{
				continue
			}

			if ($ProbeValue.i -lt 0 -or $ProbeValue.i -ge $Config.voxelData.xResolution -or
				$ProbeValue.j -lt 0 -or $ProbeValue.j -ge $Config.voxelData.yResolution -or
				$ProbeValue.k -lt 0 -or $ProbeValue.k -ge $Config.voxelData.zResolution)
			{
				$OutOfBoundsGridIndices += [int]$ProbeValue.index
				continue
			}

			$Key = "{0},{1},{2}" -f $ProbeValue.i, $ProbeValue.j, $ProbeValue.k
			if ($GridCellSet.ContainsKey($Key))
			{
				$DuplicateGridCells += [pscustomobject]@{
					index = [int]$ProbeValue.index
					duplicatesIndex = [int]$GridCellSet[$Key]
					i = [int]$ProbeValue.i
					j = [int]$ProbeValue.j
					k = [int]$ProbeValue.k
				}
			}
			else
			{
				$GridCellSet[$Key] = [int]$ProbeValue.index
			}
		}
	}
	else
	{
		$Errors.Add("VoxelData resolution is missing or invalid in $ResolvedConfigFile.")
	}

	if ($OutOfBoundsGridIndices.Count -gt 0)
	{
		$Errors.Add("ProbeList contains grid coordinates outside VoxelData resolution at indices: $($OutOfBoundsGridIndices -join ', ').")
	}
	if ($DuplicateGridCells.Count -gt 0)
	{
		$Warnings.Add("ProbeList contains duplicate grid cells. LocalProcessor can still run, but duplicate source cells waste bake time and may indicate bad manual edits.")
	}
}

$PreviousLogs = Find-PreviousBakeLogs -BakeRoot $WorkingRoot -BakePrefix $Prefix -ExplicitBakeDir $PreviousBakeDir
$KnownFailures = Read-KnownFailedProbeIndices -LogFiles $PreviousLogs
$KnownFailedProbeIndices = @($KnownFailures.indices)
if ($KnownFailedProbeIndices.Count -gt 0)
{
	$Warnings.Add("Previous LocalBake logs show stable failed probe indices: $($KnownFailedProbeIndices -join ', ').")
	if ($FailOnKnownBadProbes)
	{
		$Errors.Add("Known failed probe indices exist and -FailOnKnownBadProbes was requested.")
	}

	if ($Config)
	{
		$ProbeValueByIndex = @{}
		foreach ($ProbeValue in $Config.values)
		{
			$ProbeValueByIndex[[int]$ProbeValue.index] = $ProbeValue
		}

		foreach ($Index in $KnownFailedProbeIndices)
		{
			if ($ProbeValueByIndex.ContainsKey([int]$Index))
			{
				$ProbeValue = $ProbeValueByIndex[[int]$Index]
				$KnownFailedProbeCells += [pscustomobject]@{
					index = [int]$Index
					i = $ProbeValue.i
					j = $ProbeValue.j
					k = $ProbeValue.k
				}
			}
		}
	}
}

$Status = "Passed"
if ($Errors.Count -gt 0)
{
	$Status = "Failed"
}
elseif ($Warnings.Count -gt 0)
{
	$Status = "Warning"
}

$Recommendation = "Proceed to Step 5."
if ($Errors.Count -gt 0)
{
	$Recommendation = "Fix the ProbeList/config issues before Step 5, then regenerate or re-apply probe edits."
}
elseif ($KnownFailedProbeIndices.Count -gt 0)
{
	$Recommendation = "Move/delete these probes in Step 4.1, regenerate probes, or pass them to Step 5 via -ExcludeProbeIndices if you intentionally accept the missing acoustic samples."
}

$Summary = [ordered]@{
	status = $Status
	sourceMap = $SourceMap
	prefix = $Prefix
	acousticsDataDir = $AcousticsDataDir
	configFile = $ResolvedConfigFile
	configFileExists = (Test-Path -LiteralPath $ResolvedConfigFile)
	voxFile = $ResolvedVoxFile
	voxFileExists = (Test-Path -LiteralPath $ResolvedVoxFile)
	numProbes = if ($Config) { $Config.numProbes } else { 0 }
	probeListValueCount = if ($Config) { $Config.valueCount } else { 0 }
	manualProbeListOverride = if ($Config) { $Config.manualProbeListOverride } else { $false }
	voxelData = if ($Config) { $Config.voxelData } else { $null }
	missingValueIndices = @($MissingValueIndices)
	unexpectedValueIndices = @($UnexpectedValueIndices)
	nonIntegerGridIndices = @($NonIntegerGridIndices)
	outOfBoundsGridIndices = @($OutOfBoundsGridIndices)
	duplicateGridCellCount = @($DuplicateGridCells).Count
	duplicateGridCells = @($DuplicateGridCells)
	knownFailedProbeCount = @($KnownFailedProbeIndices).Count
	knownFailedProbeIndices = @($KnownFailedProbeIndices)
	knownFailedProbeCells = @($KnownFailedProbeCells)
	knownFailureReason = $KnownFailures.reasonSummary
	previousBakeLogsScanned = @($PreviousLogs)
	previousBakeLogsWithFailures = @($KnownFailures.sourceLogs)
	definitiveAirVoxelCheck = [ordered]@{
		availableInWindowsStep4 = $false
		reason = "The bundled Windows Triton.LocalProcessor.exe exposes only full LocalProcessor options, not a documented single-probe dry-run or probe subset health check. This report can catch structural config issues and known stable failures from logs; a new no-air-voxel failure is only proven when LocalProcessor initializes that probe."
	}
	errors = @($Errors.ToArray())
	warnings = @($Warnings.ToArray())
	recommendation = $Recommendation
}

Write-HealthReport -Summary $Summary -Path $ResolvedReport

Write-Host "Probe health report: $ResolvedReport"
Write-Host "Probe health status: $Status"
if ($KnownFailedProbeIndices.Count -gt 0)
{
	Write-Warning "Known failed probe indices: $($KnownFailedProbeIndices -join ', ')"
}
if ($Errors.Count -gt 0)
{
	foreach ($ErrorItem in $Errors)
	{
		Write-Error $ErrorItem -ErrorAction Continue
	}
	exit 2
}
