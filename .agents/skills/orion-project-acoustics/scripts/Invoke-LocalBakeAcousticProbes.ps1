param(
	[string]$SourceMap,
	[string]$Project,
	[string]$EditorCmd,
	[string]$ConfigFile,
	[string]$VoxFile,
	[string]$Prefix,
	[string]$ProcessorDir = ".agents\skills\orion-project-acoustics\assets\ProjectAcousticsProcessors\Windows",
	[string]$WorkingRoot = "Saved\OrionUE\ProjectAcoustics\LocalBake",
	[string]$BakeDir,
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\local-bake-report.json",
	[string]$Log = "Saved\OrionUE\ProjectAcoustics\local-bake.log",
	[string]$ProbeReport,
	[int]$NumThreads = 0,
	[double]$EstimatedMinutes = 0.0,
	[double]$CalibrationProbeCountA = 250.0,
	[double]$CalibrationMinutesA = 210.0,
	[double]$CalibrationProbeCountB = 1150.0,
	[double]$CalibrationMinutesB = 5760.0,
	[int]$PollSeconds = 30,
	[string]$ExcludeProbeIndices = "",
	[string]$ReuseProbeArtifactsFromBakeDir,
	[switch]$AllowPartialProbeArtifactReuse,
	[switch]$PrepareOnly,
	[switch]$Resume,
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

function Read-XmlElementText
{
	param(
		[string]$Path,
		[string]$ElementName
	)

	$Text = Get-Content -LiteralPath $Path -Raw
	$Pattern = "<$ElementName>(.*?)</$ElementName>"
	$Match = [regex]::Match($Text, $Pattern, [System.Text.RegularExpressions.RegexOptions]::Singleline)
	if (-not $Match.Success)
	{
		return ""
	}

	return $Match.Groups[1].Value.Trim()
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

function Set-XmlChildTextByLocalName
{
	param(
		[System.Xml.XmlNode]$Node,
		[string]$Name,
		[string]$Text
	)

	$Child = Get-XmlChildByLocalName -Node $Node -Name $Name
	if (-not $Child)
	{
		throw "Missing child element '$Name' in '$($Node.LocalName)'."
	}

	$Child.InnerText = $Text
}

function Convert-ManualProbeListToVoxelGrid
{
	param([string]$Path)

	$Result = [ordered]@{
		manualOverride = $false
		convertedToVoxelGrid = $false
		convertedCount = 0
		note = ""
	}

	$XmlText = Get-Content -LiteralPath $Path -Raw
	if ($XmlText -notmatch "OrionManualProbeListOverride\s*=\s*true")
	{
		$Result.note = "No manual ProbeList override marker."
		return $Result
	}

	$Result.manualOverride = $true
	[xml]$Xml = $XmlText
	$ProbeList = $Xml.SelectSingleNode("//*[local-name()='ProbeList']")
	$VoxelData = $Xml.SelectSingleNode("//*[local-name()='VoxelData']")
	if (-not $ProbeList -or -not $VoxelData)
	{
		throw "Manual ProbeList override exists, but ProbeList or VoxelData is missing in $Path."
	}

	$VoxelizationBounds = Get-XmlChildByLocalName -Node $VoxelData -Name "Voxelization_Bounding_Box"
	$MinCorner = Get-XmlChildByLocalName -Node $VoxelizationBounds -Name "MinCorner"
	if (-not $MinCorner)
	{
		throw "Manual ProbeList override exists, but VoxelData/Voxelization_Bounding_Box/MinCorner is missing in $Path."
	}

	$Culture = [System.Globalization.CultureInfo]::InvariantCulture
	$NumberStyles = [System.Globalization.NumberStyles]::Float
	$IntegerTolerance = 0.000001

	$CellSize = [double]::Parse((Get-XmlChildTextByLocalName -Node $VoxelData -Name "Cell_Size"), $Culture)
	$MinX = [double]::Parse((Get-XmlChildTextByLocalName -Node $MinCorner -Name "X"), $Culture)
	$MinY = [double]::Parse((Get-XmlChildTextByLocalName -Node $MinCorner -Name "Y"), $Culture)
	$MinZ = [double]::Parse((Get-XmlChildTextByLocalName -Node $MinCorner -Name "Z"), $Culture)
	$XResolution = [int]::Parse((Get-XmlChildTextByLocalName -Node $VoxelData -Name "X_Resolution"), $Culture)
	$YResolution = [int]::Parse((Get-XmlChildTextByLocalName -Node $VoxelData -Name "Y_Resolution"), $Culture)
	$ZResolution = [int]::Parse((Get-XmlChildTextByLocalName -Node $VoxelData -Name "Z_Resolution"), $Culture)

	if ($CellSize -le 0 -or $XResolution -le 0 -or $YResolution -le 0 -or $ZResolution -le 0)
	{
		throw "Invalid VoxelData in $Path."
	}

	$ValueNodes = @($ProbeList.ChildNodes | Where-Object { $_.NodeType -eq [System.Xml.XmlNodeType]::Element -and $_.LocalName -match "^value\d+$" })
	if ($ValueNodes.Count -eq 0)
	{
		$Result.note = "Manual ProbeList override has no value nodes."
		return $Result
	}

	$ParsedValues = New-Object System.Collections.Generic.List[object]
	$AllValuesAlreadyGrid = $true
	foreach ($ValueNode in $ValueNodes)
	{
		$I = [double]0
		$J = [double]0
		$K = [double]0
		if (-not [double]::TryParse((Get-XmlChildTextByLocalName -Node $ValueNode -Name "i"), $NumberStyles, $Culture, [ref]$I) `
			-or -not [double]::TryParse((Get-XmlChildTextByLocalName -Node $ValueNode -Name "j"), $NumberStyles, $Culture, [ref]$J) `
			-or -not [double]::TryParse((Get-XmlChildTextByLocalName -Node $ValueNode -Name "k"), $NumberStyles, $Culture, [ref]$K))
		{
			throw "Invalid ProbeList value in $Path at $($ValueNode.LocalName)."
		}

		$RoundedI = [Math]::Round($I)
		$RoundedJ = [Math]::Round($J)
		$RoundedK = [Math]::Round($K)
		$bAlreadyGrid = `
			[Math]::Abs($I - $RoundedI) -le $IntegerTolerance -and `
			[Math]::Abs($J - $RoundedJ) -le $IntegerTolerance -and `
			[Math]::Abs($K - $RoundedK) -le $IntegerTolerance -and `
			$RoundedI -ge 0 -and $RoundedI -lt $XResolution -and `
			$RoundedJ -ge 0 -and $RoundedJ -lt $YResolution -and `
			$RoundedK -ge 0 -and $RoundedK -lt $ZResolution

		if (-not $bAlreadyGrid)
		{
			$AllValuesAlreadyGrid = $false
		}

		$ParsedValues.Add([pscustomobject]@{
			Node = $ValueNode
			I = $I
			J = $J
			K = $K
		})
	}

	if ($AllValuesAlreadyGrid)
	{
		$Result.note = "Manual ProbeList already uses voxel grid indices."
		return $Result
	}

	foreach ($ParsedValue in $ParsedValues)
	{
		$GridI = [int][Math]::Round(($ParsedValue.I - $MinX) / $CellSize)
		$GridJ = [int][Math]::Round(($ParsedValue.J - $MinY) / $CellSize)
		$GridK = [int][Math]::Round(($ParsedValue.K - $MinZ) / $CellSize)
		if ($GridI -lt 0 -or $GridI -ge $XResolution -or $GridJ -lt 0 -or $GridJ -ge $YResolution -or $GridK -lt 0 -or $GridK -ge $ZResolution)
		{
			throw ("Converted ProbeList value is outside voxel grid in {0} at {1}: ({2}, {3}, {4})" -f $Path, $ParsedValue.Node.LocalName, $GridI, $GridJ, $GridK)
		}

		Set-XmlChildTextByLocalName -Node $ParsedValue.Node -Name "i" -Text ([string]$GridI)
		Set-XmlChildTextByLocalName -Node $ParsedValue.Node -Name "j" -Text ([string]$GridJ)
		Set-XmlChildTextByLocalName -Node $ParsedValue.Node -Name "k" -Text ([string]$GridK)
	}

	$Xml.Save($Path)
	$Result.convertedToVoxelGrid = $true
	$Result.convertedCount = $ParsedValues.Count
	$Result.note = "Converted manual ProbeList from Triton positions to voxel grid indices for LocalProcessor."
	return $Result
}

function Convert-ProbeIndexList
{
	param([string]$Value)

	if ([string]::IsNullOrWhiteSpace($Value))
	{
		return @()
	}

	$Indices = New-Object System.Collections.Generic.List[int]
	foreach ($Token in ($Value -split "[,;\s]+"))
	{
		if ([string]::IsNullOrWhiteSpace($Token))
		{
			continue
		}

		$Index = 0
		if (-not [int]::TryParse($Token, [ref]$Index))
		{
			throw "Invalid probe index in -ExcludeProbeIndices: $Token"
		}

		$Indices.Add($Index)
	}

	return @($Indices)
}

function Remove-ProbeListIndices
{
	param(
		[string]$Path,
		[int[]]$ExcludeIndices
	)

	[xml]$Xml = Get-Content -LiteralPath $Path -Raw
	$ProbeList = $Xml.SelectSingleNode("//*[local-name()='ProbeList']")
	if (-not $ProbeList)
	{
		if ($ExcludeIndices.Count -gt 0)
		{
			throw "Cannot exclude probes because ProbeList is missing in $Path."
		}

		return [pscustomobject]@{
			ProbeCountBefore = 0
			ProbeCountAfter = 0
			ExcludedProbeIndices = @()
			ExcludedCount = 0
			KeptProbeIndexMap = @()
		}
	}

	$ExcludeSet = @{}
	foreach ($Index in $ExcludeIndices)
	{
		$ExcludeSet[[int]$Index] = $true
	}

	$ValueNodes = @($ProbeList.ChildNodes | Where-Object {
		$_.NodeType -eq [System.Xml.XmlNodeType]::Element -and $_.LocalName -match "^value(\d+)$"
	} | Sort-Object { [int]([regex]::Match($_.LocalName, "\d+").Value) })

	$KeptEntries = New-Object System.Collections.Generic.List[object]
	$Excluded = New-Object System.Collections.Generic.List[int]
	$NewIndex = 0
	foreach ($ValueNode in $ValueNodes)
	{
		$OriginalIndex = [int]([regex]::Match($ValueNode.LocalName, "\d+").Value)
		if ($ExcludeSet.ContainsKey($OriginalIndex))
		{
			$Excluded.Add($OriginalIndex)
			continue
		}

		$KeptEntries.Add([pscustomobject]@{
			OriginalIndex = $OriginalIndex
			NewIndex = $NewIndex
			Node = $ValueNode
		})
		$NewIndex++
	}

	if ($Excluded.Count -gt 0)
	{
		foreach ($ValueNode in $ValueNodes)
		{
			[void]$ProbeList.RemoveChild($ValueNode)
		}

		foreach ($Entry in $KeptEntries)
		{
			$NewNode = $Xml.CreateElement("value$($Entry.NewIndex)")
			foreach ($Child in $Entry.Node.ChildNodes)
			{
				[void]$NewNode.AppendChild($Child.CloneNode($true))
			}
			[void]$ProbeList.AppendChild($NewNode)
		}

		$NumProbes = $Xml.SelectSingleNode("//*[local-name()='NumProbes']")
		if (-not $NumProbes)
		{
			throw "Cannot exclude probes because NumProbes is missing in $Path."
		}

		$NumProbes.InnerText = [string]$KeptEntries.Count
		$Xml.Save($Path)
	}

	return [pscustomobject]@{
		ProbeCountBefore = $ValueNodes.Count
		ProbeCountAfter = $KeptEntries.Count
		ExcludedProbeIndices = @($Excluded)
		ExcludedCount = $Excluded.Count
		KeptProbeIndexMap = @($KeptEntries | ForEach-Object {
			[pscustomobject]@{
				OriginalIndex = $_.OriginalIndex
				NewIndex = $_.NewIndex
			}
		})
	}
}

function Copy-ReusedProbeArtifacts
{
	param(
		[string]$SourceBakeDir,
		[string]$DestinationBakeDir,
		[string]$Prefix,
		[object[]]$ProbeIndexMap,
		[bool]$AllowPartialReuse
	)

	if ([string]::IsNullOrWhiteSpace($SourceBakeDir))
	{
		return [pscustomobject]@{
			CopiedCount = 0
			MissingOriginalIndices = @()
		}
	}

	$ResolvedSourceBakeDir = Resolve-OutputPath -Path $SourceBakeDir
	if (-not (Test-Path -LiteralPath $ResolvedSourceBakeDir))
	{
		throw "Missing probe artifact reuse source BakeDir: $ResolvedSourceBakeDir"
	}

	$CopiedCount = 0
	$Missing = New-Object System.Collections.Generic.List[int]
	foreach ($Entry in $ProbeIndexMap)
	{
		$SourceEnc = Join-Path $ResolvedSourceBakeDir ("{0}_task{1}.enc" -f $Prefix, $Entry.OriginalIndex)
		$DestinationEnc = Join-Path $DestinationBakeDir ("{0}_task{1}.enc" -f $Prefix, $Entry.NewIndex)
		if (-not (Test-Path -LiteralPath $SourceEnc))
		{
			$Missing.Add([int]$Entry.OriginalIndex)
			continue
		}

		Copy-Item -LiteralPath $SourceEnc -Destination $DestinationEnc -Force
		$CopiedCount++
	}

	if ($Missing.Count -gt 0)
	{
		if (-not $AllowPartialReuse)
		{
			throw "Cannot reuse probe artifacts because source BakeDir is missing .enc files for original indices: $($Missing -join ', ')"
		}
	}

	return [pscustomobject]@{
		CopiedCount = $CopiedCount
		MissingOriginalIndices = @($Missing.ToArray())
	}
}

function Get-PowerLawEstimateMinutes
{
	param(
		[int]$ProbeCount,
		[double]$ProbeCountA,
		[double]$MinutesA,
		[double]$ProbeCountB,
		[double]$MinutesB
	)

	if ($ProbeCount -le 0 -or $ProbeCountA -le 0 -or $ProbeCountB -le 0 -or $MinutesA -le 0 -or $MinutesB -le 0 -or $ProbeCountA -eq $ProbeCountB)
	{
		return 0.0
	}

	$Power = [Math]::Log($MinutesB / $MinutesA) / [Math]::Log($ProbeCountB / $ProbeCountA)
	$Coefficient = $MinutesA / [Math]::Pow($ProbeCountA, $Power)
	return $Coefficient * [Math]::Pow($ProbeCount, $Power)
}

function Write-LocalBakeReport
{
	param(
		[string]$Status,
		[hashtable]$Data,
		[string]$Path
	)

	$Parent = Split-Path -Parent $Path
	if ($Parent)
	{
		New-Item -ItemType Directory -Force -Path $Parent | Out-Null
	}

	$Summary = [ordered]@{
		status = $Status
		sourceMap = $Data.SourceMap
		prefix = $Data.Prefix
		probeCount = $Data.ProbeCount
		estimatedMinutes = [Math]::Round([double]$Data.EstimatedMinutes, 3)
		estimatedHours = [Math]::Round(([double]$Data.EstimatedMinutes / 60.0), 3)
		elapsedMinutes = [Math]::Round([double]$Data.ElapsedMinutes, 3)
		estimatedRemainingMinutes = [Math]::Round([double]$Data.EstimatedRemainingMinutes, 3)
		completedProbeArtifacts = $Data.CompletedProbeArtifacts
		processorDir = $Data.ProcessorDir
		bakeDir = $Data.BakeDir
		probeCountBeforeExclusion = $Data.ProbeCountBeforeExclusion
		excludedProbeCount = $Data.ExcludedProbeCount
		excludedProbeIndices = $Data.ExcludedProbeIndices
		probeArtifactReuseSourceBakeDir = $Data.ProbeArtifactReuseSourceBakeDir
		reusedProbeArtifacts = $Data.ReusedProbeArtifacts
		missingReusedProbeArtifactIndices = $Data.MissingReusedProbeArtifactIndices
		allowPartialProbeArtifactReuse = $Data.AllowPartialProbeArtifactReuse
		resumeRequested = $Data.ResumeRequested
		effectiveResume = $Data.EffectiveResume
		acousticsDataDir = $Data.AcousticsDataDir
		configFile = $Data.ConfigFile
		voxFile = $Data.VoxFile
		copiedConfigFile = $Data.CopiedConfigFile
		copiedVoxFile = $Data.CopiedVoxFile
		probeListManualOverride = $Data.ProbeListManualOverride
		probeListConvertedToVoxelGrid = $Data.ProbeListConvertedToVoxelGrid
		probeListConvertedCount = $Data.ProbeListConvertedCount
		probeListConversionNote = $Data.ProbeListConversionNote
		stdoutLog = $Data.StdoutLog
		stderrLog = $Data.StderrLog
		outputAceFile = $Data.OutputAceFile
		contentAceFile = $Data.ContentAceFile
		importedAsset = $Data.ImportedAsset
		exitCode = $Data.ExitCode
		error = $Data.Error
	}

	@{ summary = $Summary } | ConvertTo-Json -Depth 6 | Set-Content -LiteralPath $Path -Encoding UTF8
}

function Quote-ProcessArgument
{
	param([string]$Value)

	if ($Value -match "[\s`"]")
	{
		return '"' + ($Value -replace '"', '\"') + '"'
	}

	return $Value
}

function Get-LocalProcessorExitCode
{
	param(
		[System.Diagnostics.Process]$Process,
		[string]$StdoutLog
	)

	$ExitCode = $Process.ExitCode
	if ($null -ne $ExitCode)
	{
		return [int]$ExitCode
	}

	if ((Test-Path -LiteralPath $StdoutLog) -and (Select-String -LiteralPath $StdoutLog -Pattern "LocalProcessor finished successfully\." -Quiet))
	{
		return 0
	}

	return $null
}

function Get-LocalBakeAceCandidate
{
	param(
		[string]$BakeDir,
		[string]$Prefix,
		[string]$ExpectedAceFile
	)

	if (Test-Path -LiteralPath $ExpectedAceFile)
	{
		return $ExpectedAceFile
	}

	$ExtensionlessOutput = Join-Path $BakeDir $Prefix
	if (Test-Path -LiteralPath $ExtensionlessOutput)
	{
		return $ExtensionlessOutput
	}

	$AceCandidates = @(Get-ChildItem -LiteralPath $BakeDir -Filter "*.ace" -File -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending)
	if ($AceCandidates.Count -gt 0)
	{
		return $AceCandidates[0].FullName
	}

	return ""
}

function Get-NormalizedLocalBakeAceFile
{
	param(
		[string]$OutputFile,
		[string]$BakeDir,
		[string]$Prefix
	)

	if ([string]::IsNullOrWhiteSpace($OutputFile) -or -not (Test-Path -LiteralPath $OutputFile))
	{
		return $OutputFile
	}

	if ([System.IO.Path]::GetExtension($OutputFile) -ieq ".ace")
	{
		return $OutputFile
	}

	$NormalizedAceFile = Join-Path $BakeDir "${Prefix}.ace"
	Copy-Item -LiteralPath $OutputFile -Destination $NormalizedAceFile -Force
	return $NormalizedAceFile
}

if ([string]::IsNullOrWhiteSpace($SourceMap) -and ([string]::IsNullOrWhiteSpace($ConfigFile) -or [string]::IsNullOrWhiteSpace($VoxFile)))
{
	throw "Pass -SourceMap or both -ConfigFile and -VoxFile."
}

$ResolvedProcessorDir = Resolve-OutputPath -Path $ProcessorDir
$ProcessorExe = Join-Path $ResolvedProcessorDir "Triton.LocalProcessor.exe"
if (-not (Test-Path -LiteralPath $ProcessorExe))
{
	throw "Missing LocalBake processor: $ProcessorExe"
}

$RequiredProcessorFiles = @("ClientTelemetry.dll", "libfbxsdk.dll", "Triton.LocalProcessor.exe", "Usage.txt")
foreach ($RequiredProcessorFile in $RequiredProcessorFiles)
{
	$RequiredPath = Join-Path $ResolvedProcessorDir $RequiredProcessorFile
	if (-not (Test-Path -LiteralPath $RequiredPath))
	{
		throw "Missing LocalBake processor dependency: $RequiredPath"
	}
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
$ResolvedWorkingRoot = Resolve-OutputPath -Path $WorkingRoot
$ResolvedReport = Resolve-OutputPath -Path $Report
$ResolvedLog = Resolve-OutputPath -Path $Log
$ResolvedLogParent = Split-Path -Parent $ResolvedLog
if ($ResolvedLogParent)
{
	New-Item -ItemType Directory -Force -Path $ResolvedLogParent | Out-Null
}

if (-not (Test-Path -LiteralPath $ResolvedConfigFile))
{
	throw "Missing ProjectAcoustics config file: $ResolvedConfigFile"
}
if (-not (Test-Path -LiteralPath $ResolvedVoxFile))
{
	throw "Missing ProjectAcoustics vox file: $ResolvedVoxFile"
}

$OutputPrefixFromXml = Read-XmlElementText -Path $ResolvedConfigFile -ElementName "OutputFilePrefix"
if (-not [string]::IsNullOrWhiteSpace($OutputPrefixFromXml))
{
	$Prefix = $OutputPrefixFromXml
}

$ProbeCountText = Read-XmlElementText -Path $ResolvedConfigFile -ElementName "NumProbes"
$ProbeCount = 0
[void][int]::TryParse($ProbeCountText, [ref]$ProbeCount)

if (-not [string]::IsNullOrWhiteSpace($ProbeReport))
{
	$ResolvedProbeReport = Resolve-OutputPath -Path $ProbeReport
	if (Test-Path -LiteralPath $ResolvedProbeReport)
	{
		$ProbeReportJson = Get-Content -LiteralPath $ResolvedProbeReport -Raw | ConvertFrom-Json
		if ($ProbeReportJson.summary.localCpuCalibration -and $ProbeReportJson.summary.localCpuCalibration.valid)
		{
			$CalibrationProbeCountA = [double]$ProbeReportJson.summary.localCpuCalibration.probeCountA
			$CalibrationMinutesA = [double]$ProbeReportJson.summary.localCpuCalibration.minutesA
			$CalibrationProbeCountB = [double]$ProbeReportJson.summary.localCpuCalibration.probeCountB
			$CalibrationMinutesB = [double]$ProbeReportJson.summary.localCpuCalibration.minutesB
		}
		elseif ($ProbeReportJson.summary.estimatedProcessingMinutes -and $EstimatedMinutes -le 0)
		{
			$EstimatedMinutes = [double]$ProbeReportJson.summary.estimatedProcessingMinutes
		}
	}
}

if ($EstimatedMinutes -le 0 -and $ProbeCount -gt 0)
{
	$EstimatedMinutes = Get-PowerLawEstimateMinutes `
		-ProbeCount $ProbeCount `
		-ProbeCountA $CalibrationProbeCountA `
		-MinutesA $CalibrationMinutesA `
		-ProbeCountB $CalibrationProbeCountB `
		-MinutesB $CalibrationMinutesB
}

if ([string]::IsNullOrWhiteSpace($BakeDir))
{
	$Timestamp = Get-Date -Format "yyyyMMdd-HHmmss"
	$BakeDir = Join-Path $ResolvedWorkingRoot "${Prefix}_${Timestamp}"
}
$ResolvedBakeDir = Resolve-OutputPath -Path $BakeDir
New-Item -ItemType Directory -Force -Path $ResolvedBakeDir | Out-Null

foreach ($RequiredProcessorFile in $RequiredProcessorFiles)
{
	Copy-Item -LiteralPath (Join-Path $ResolvedProcessorDir $RequiredProcessorFile) -Destination (Join-Path $ResolvedBakeDir $RequiredProcessorFile) -Force
}

$CopiedConfigFile = Join-Path $ResolvedBakeDir (Split-Path -Leaf $ResolvedConfigFile)
$CopiedVoxFile = Join-Path $ResolvedBakeDir (Split-Path -Leaf $ResolvedVoxFile)
Copy-Item -LiteralPath $ResolvedConfigFile -Destination $CopiedConfigFile -Force
Copy-Item -LiteralPath $ResolvedVoxFile -Destination $CopiedVoxFile -Force
$ProbeListConversion = Convert-ManualProbeListToVoxelGrid -Path $CopiedConfigFile
$ParsedExcludeProbeIndices = Convert-ProbeIndexList -Value $ExcludeProbeIndices
$ProbeFilter = Remove-ProbeListIndices -Path $CopiedConfigFile -ExcludeIndices $ParsedExcludeProbeIndices
if ($ProbeFilter.ProbeCountAfter -gt 0)
{
	$ProbeCount = [int]$ProbeFilter.ProbeCountAfter
}

$ProbeArtifactReuse = Copy-ReusedProbeArtifacts `
	-SourceBakeDir $ReuseProbeArtifactsFromBakeDir `
	-DestinationBakeDir $ResolvedBakeDir `
	-Prefix $Prefix `
	-ProbeIndexMap $ProbeFilter.KeptProbeIndexMap `
	-AllowPartialReuse ([bool]$AllowPartialProbeArtifactReuse)
$ReusedProbeArtifacts = [int]$ProbeArtifactReuse.CopiedCount
$MissingReusedProbeArtifactIndices = @($ProbeArtifactReuse.MissingOriginalIndices)
$bEffectiveResume = [bool]$Resume -or ($ReusedProbeArtifacts -gt 0)

$StdoutLog = Join-Path $ResolvedBakeDir "Triton.LocalProcessor.stdout.log"
$StderrLog = Join-Path $ResolvedBakeDir "Triton.LocalProcessor.stderr.log"
$OutputAceFile = Join-Path $ResolvedBakeDir "${Prefix}.ace"
$Data = @{
	SourceMap = $SourceMap
	Prefix = $Prefix
	ProbeCount = $ProbeCount
	EstimatedMinutes = $EstimatedMinutes
	ElapsedMinutes = 0.0
	EstimatedRemainingMinutes = $EstimatedMinutes
	CompletedProbeArtifacts = $ReusedProbeArtifacts
	ProcessorDir = $ResolvedProcessorDir
	BakeDir = $ResolvedBakeDir
	ProbeCountBeforeExclusion = $ProbeFilter.ProbeCountBefore
	ExcludedProbeCount = $ProbeFilter.ExcludedCount
	ExcludedProbeIndices = @($ProbeFilter.ExcludedProbeIndices)
	ProbeArtifactReuseSourceBakeDir = $ReuseProbeArtifactsFromBakeDir
	ReusedProbeArtifacts = $ReusedProbeArtifacts
	MissingReusedProbeArtifactIndices = @($MissingReusedProbeArtifactIndices)
	AllowPartialProbeArtifactReuse = [bool]$AllowPartialProbeArtifactReuse
	ResumeRequested = [bool]$Resume
	EffectiveResume = $bEffectiveResume
	AcousticsDataDir = $AcousticsDataDir
	ConfigFile = $ResolvedConfigFile
	VoxFile = $ResolvedVoxFile
	CopiedConfigFile = $CopiedConfigFile
	CopiedVoxFile = $CopiedVoxFile
	ProbeListManualOverride = $ProbeListConversion.manualOverride
	ProbeListConvertedToVoxelGrid = $ProbeListConversion.convertedToVoxelGrid
	ProbeListConvertedCount = $ProbeListConversion.convertedCount
	ProbeListConversionNote = $ProbeListConversion.note
	StdoutLog = $StdoutLog
	StderrLog = $StderrLog
	OutputAceFile = $OutputAceFile
	ContentAceFile = ""
	ImportedAsset = ""
	ExitCode = $null
	Error = ""
}

Write-LocalBakeReport -Status "Prepared" -Data $Data -Path $ResolvedReport

Write-Host "LocalBake prepared:"
Write-Host "  BakeDir: $ResolvedBakeDir"
Write-Host "  Config: $CopiedConfigFile"
Write-Host "  Vox: $CopiedVoxFile"
Write-Host "  ProbeCount: $ProbeCount"
if ($ReusedProbeArtifacts -gt 0)
{
	Write-Host "  Reused probe artifacts: $ReusedProbeArtifacts"
}
if ($MissingReusedProbeArtifactIndices.Count -gt 0)
{
	Write-Host "  Missing reused probe artifacts to recompute: $($MissingReusedProbeArtifactIndices -join ', ')"
}
if ($EstimatedMinutes -gt 0)
{
	Write-Host ("  Estimated time: {0:n1} hours ({1:n2} days)" -f ($EstimatedMinutes / 60.0), ($EstimatedMinutes / 1440.0))
}

if ($PrepareOnly)
{
	Write-Host "PrepareOnly requested; LocalBake was not started."
	return
}

$ProcessorArgs = @(
	"--configfile",
	(Split-Path -Leaf $CopiedConfigFile),
	"--WorkingDir",
	$ResolvedBakeDir,
	"--OutputName",
	$Prefix
)

if ($NumThreads -gt 0)
{
	$ProcessorArgs += "--NumThreads"
	$ProcessorArgs += [string]$NumThreads
}

if ($bEffectiveResume)
{
	$ProcessorArgs += "--Resume"
	$ProcessorArgs += "true"
}

$ArgumentList = ($ProcessorArgs | ForEach-Object { Quote-ProcessArgument -Value $_ }) -join " "
$StartTime = Get-Date
$Process = Start-Process `
	-FilePath (Join-Path $ResolvedBakeDir "Triton.LocalProcessor.exe") `
	-ArgumentList $ArgumentList `
	-WorkingDirectory $ResolvedBakeDir `
	-RedirectStandardOutput $StdoutLog `
	-RedirectStandardError $StderrLog `
	-PassThru `
	-WindowStyle Hidden

Write-Host "LocalBake started. PID=$($Process.Id)"

while (-not $Process.HasExited)
{
	$Elapsed = (Get-Date) - $StartTime
	$CompletedArtifacts = @(Get-ChildItem -LiteralPath $ResolvedBakeDir -Filter "*.enc" -File -ErrorAction SilentlyContinue).Count
	$RemainingMinutes = 0.0
	$Percent = 0.0

	if ($ProbeCount -gt 0 -and $CompletedArtifacts -gt 0)
	{
		$Percent = [Math]::Min(99.0, ($CompletedArtifacts / [double]$ProbeCount) * 100.0)
		$RemainingMinutes = ($Elapsed.TotalMinutes / [double]$CompletedArtifacts) * [Math]::Max($ProbeCount - $CompletedArtifacts, 0)
	}
	elseif ($EstimatedMinutes -gt 0)
	{
		$Percent = [Math]::Min(99.0, ($Elapsed.TotalMinutes / $EstimatedMinutes) * 100.0)
		$RemainingMinutes = [Math]::Max($EstimatedMinutes - $Elapsed.TotalMinutes, 0.0)
	}

	$Data.ElapsedMinutes = $Elapsed.TotalMinutes
	$Data.EstimatedRemainingMinutes = $RemainingMinutes
	$Data.CompletedProbeArtifacts = $CompletedArtifacts
	Write-Progress -Activity "ProjectAcoustics LocalBake" -Status ("{0}/{1} probe artifacts, remaining {2:n1}h" -f $CompletedArtifacts, $ProbeCount, ($RemainingMinutes / 60.0)) -PercentComplete $Percent
	Write-LocalBakeReport -Status "Running" -Data $Data -Path $ResolvedReport
	Start-Sleep -Seconds ([Math]::Max(5, $PollSeconds))
	$Process.Refresh()
}

Write-Progress -Activity "ProjectAcoustics LocalBake" -Completed
$Process.WaitForExit()
$Process.Refresh()
$Data.ExitCode = Get-LocalProcessorExitCode -Process $Process -StdoutLog $StdoutLog
$Data.ElapsedMinutes = ((Get-Date) - $StartTime).TotalMinutes
$Data.EstimatedRemainingMinutes = 0.0
$Data.CompletedProbeArtifacts = @(Get-ChildItem -LiteralPath $ResolvedBakeDir -Filter "*.enc" -File -ErrorAction SilentlyContinue).Count

if ($Data.ExitCode -ne 0)
{
	$Data.Error = "Triton.LocalProcessor exited with code $($Data.ExitCode)."
	Write-LocalBakeReport -Status "Failed" -Data $Data -Path $ResolvedReport
	exit $Data.ExitCode
}

if ($ProbeCount -gt 0 -and $Data.CompletedProbeArtifacts -lt $ProbeCount)
{
	$Data.Error = "LocalBake stopped before all probe artifacts were generated: $($Data.CompletedProbeArtifacts)/$ProbeCount. Resume the same BakeDir before importing ACE."
	Write-LocalBakeReport -Status "Failed" -Data $Data -Path $ResolvedReport
	exit 21
}

$AceCandidate = Get-LocalBakeAceCandidate -BakeDir $ResolvedBakeDir -Prefix $Prefix -ExpectedAceFile $OutputAceFile
if (-not [string]::IsNullOrWhiteSpace($AceCandidate))
{
	$OutputAceFile = $AceCandidate
	$Data.OutputAceFile = $OutputAceFile
}

$OutputAceFile = Get-NormalizedLocalBakeAceFile -OutputFile $OutputAceFile -BakeDir $ResolvedBakeDir -Prefix $Prefix
$Data.OutputAceFile = $OutputAceFile

if (-not (Test-Path -LiteralPath $OutputAceFile))
{
	$Data.Error = "LocalBake completed but no .ace file was found in $ResolvedBakeDir."
	Write-LocalBakeReport -Status "Failed" -Data $Data -Path $ResolvedReport
	exit 20
}

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
	$Data.ContentAceFile = $ContentAceFile

	if (-not $SkipUAssetImport)
	{
		$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
		$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
		$ImportScript = Resolve-OutputPath -Path ".agents\skills\orion-project-acoustics\scripts\import-acoustic-ace.py"
		$ImportLog = Join-Path $ResolvedBakeDir "ImportAcousticAce.log"
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
			$Data.Error = "ACE was copied to Content/Acoustics, but UAcousticsData import failed with exit code $ImportExitCode. See $ImportLog."
			Write-LocalBakeReport -Status "AceCopiedImportFailed" -Data $Data -Path $ResolvedReport
			exit $ImportExitCode
		}
		$Data.ImportedAsset = "/Game/Acoustics/$([System.IO.Path]::GetFileNameWithoutExtension($ContentAceFile))"
	}
}

Write-LocalBakeReport -Status "Completed" -Data $Data -Path $ResolvedReport
Write-Host "LocalBake completed:"
Write-Host "  ACE: $OutputAceFile"
if ($Data.ContentAceFile)
{
	Write-Host "  Content ACE: $($Data.ContentAceFile)"
}
if ($Data.ImportedAsset)
{
	Write-Host "  Imported asset: $($Data.ImportedAsset)"
}
Write-Host "  Report: $ResolvedReport"
Write-Host "  Processor stdout: $StdoutLog"
Write-Host "  Processor stderr: $StderrLog"
