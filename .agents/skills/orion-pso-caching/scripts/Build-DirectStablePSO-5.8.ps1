[CmdletBinding()]
param(
	[string]$ProjectRoot,
	[string]$EngineRoot,
	[string]$ProjectName,
	[string]$CollectedDir,
	[string]$Platform = "Windows",
	[string]$ShaderFormat = "PCD3D_SM6",
	[string]$OutputPath,
	[switch]$CleanExisting,
	[switch]$CleanBuildPipelineCaches,
	[switch]$AllowBuildPipelineCaches,
	[switch]$NoConfigCheck
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

function Get-BuildPipelineCacheFiles {
	param([string]$BuildPipelineDir)

	if (!(Test-Path -LiteralPath $BuildPipelineDir)) {
		return @()
	}

	return @(Get-ChildItem -LiteralPath $BuildPipelineDir -File |
		Where-Object {
			$_.Name.EndsWith(".spc", [System.StringComparison]::OrdinalIgnoreCase) -or
			$_.Name.EndsWith(".stablepc.csv", [System.StringComparison]::OrdinalIgnoreCase) -or
			$_.Name.EndsWith(".stablepc.csv.compressed", [System.StringComparison]::OrdinalIgnoreCase)
		} |
		Sort-Object FullName)
}

function Test-DirectStableConfig {
	param(
		[string]$ProjectRootValue,
		[string]$PlatformValue
	)

	$PlatformEngineIni = Join-Path $ProjectRootValue ("Config\{0}\{0}Engine.ini" -f $PlatformValue)
	if (!(Test-Path -LiteralPath $PlatformEngineIni)) {
		throw "Missing platform Engine.ini: $PlatformEngineIni"
	}

	$Text = [System.IO.File]::ReadAllText((Resolve-Path -LiteralPath $PlatformEngineIni).Path)
	if (![regex]::IsMatch($Text, "(?im)^\s*r\.ShaderPipelineCacheTools\.IncludeComputePSODuringCook\s*=\s*0\s*$")) {
		throw "Direct stable PSO flow requires r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0 in $PlatformEngineIni."
	}

	$DefaultGameIni = Join-Path $ProjectRootValue "Config\DefaultGame.ini"
	if (!(Test-Path -LiteralPath $DefaultGameIni)) {
		throw "Missing Config\DefaultGame.ini"
	}

	$GameText = [System.IO.File]::ReadAllText((Resolve-Path -LiteralPath $DefaultGameIni).Path)
	if (![regex]::IsMatch($GameText, '(?im)^\s*\+DirectoriesToAlwaysStageAsUFS=\(Path="PipelineCaches"\)\s*$')) {
		throw 'Direct stable PSO flow requires +DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches") in Config\DefaultGame.ini.'
	}
}

$ResolvedProjectRoot = Resolve-ProjectRoot $ProjectRoot
$ResolvedEngineRoot = Resolve-EngineRoot $ResolvedProjectRoot $EngineRoot
$ResolvedProjectName = Get-ProjectName $ResolvedProjectRoot $ProjectName
$ResolvedProjectFile = Get-ChildItem -LiteralPath $ResolvedProjectRoot -Filter "*.uproject" -File | Select-Object -First 1
if (!$ResolvedProjectFile) {
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

$RecFiles = @(Get-ChildItem -LiteralPath $ResolvedCollectedDir -File -Filter "*.upipelinecache" |
	Where-Object { $_.Name -match "\.rec\.upipelinecache$" } |
	Sort-Object FullName)
if (!$RecFiles) {
	throw "No recorded .upipelinecache files found in $ResolvedCollectedDir"
}

if (!$OutputPath) {
	$OutputDir = Join-Path $ResolvedProjectRoot ("Content\PipelineCaches\{0}" -f $Platform)
	$OutputPath = Join-Path $OutputDir ("{0}_{1}.stable.upipelinecache" -f $ResolvedProjectName, $ShaderFormat)
}
$ResolvedOutputPath = [System.IO.Path]::GetFullPath($OutputPath)
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $ResolvedOutputPath) | Out-Null

if ($CleanExisting -and (Test-Path -LiteralPath $ResolvedOutputPath)) {
	Remove-Item -LiteralPath $ResolvedOutputPath -Force
}

$BuildPipelineDir = Join-Path $ResolvedProjectRoot ("Build\{0}\PipelineCaches" -f $Platform)
$BuildPipelineCacheFiles = @(Get-BuildPipelineCacheFiles $BuildPipelineDir)
if ($BuildPipelineCacheFiles.Count -gt 0) {
	if ($CleanBuildPipelineCaches) {
		$DisabledDir = Join-Path $ResolvedProjectRoot ("Saved\OrionUE\PSO\disabled-build-pipelinecaches\{0}" -f (Get-Date -Format "yyyyMMdd-HHmmss"))
		New-Item -ItemType Directory -Force -Path $DisabledDir | Out-Null
		foreach ($BuildPipelineCacheFile in $BuildPipelineCacheFiles) {
			Move-Item -LiteralPath $BuildPipelineCacheFile.FullName -Destination (Join-Path $DisabledDir $BuildPipelineCacheFile.Name) -Force
		}
		Write-Host "Moved Build pipeline cache inputs to: $DisabledDir"
	}
	elseif (!$AllowBuildPipelineCaches) {
		$Names = ($BuildPipelineCacheFiles | ForEach-Object { $_.FullName }) -join [Environment]::NewLine
		throw "Build pipeline cache input files are present. Move them first or pass -CleanBuildPipelineCaches to avoid Cook deleting direct stable output:$([Environment]::NewLine)$Names"
	}
}

if (!$NoConfigCheck) {
	Test-DirectStableConfig $ResolvedProjectRoot $Platform
}

$InputPattern = Join-Path $ResolvedCollectedDir "*.rec.upipelinecache"
$LogDir = Join-Path $ResolvedProjectRoot "Saved\Logs\PSO"
New-Item -ItemType Directory -Force -Path $LogDir | Out-Null
$CommandletLog = Join-Path $LogDir ("pso-direct-stable-{0}.log" -f (Get-Date -Format "yyyyMMdd-HHmmss"))

$Arguments = @(
	$ResolvedProjectFile.FullName,
	"-run=OrionPSOFilter",
	("-Input={0}" -f $InputPattern),
	("-Output={0}" -f $ResolvedOutputPath),
	("-ShaderFormat={0}" -f $ShaderFormat),
	"-unattended",
	"-nop4",
	"-NoSound",
	"-NoSplash",
	("-abslog={0}" -f $CommandletLog)
)

Write-Host "ProjectRoot: $ResolvedProjectRoot"
Write-Host "EngineRoot:  $ResolvedEngineRoot"
Write-Host "ProjectFile: $($ResolvedProjectFile.FullName)"
Write-Host "Inputs:      $($RecFiles.Count) recorded cache(s)"
Write-Host "Pattern:     $InputPattern"
Write-Host "Output:      $ResolvedOutputPath"
Write-Host "Log:         $CommandletLog"

& $EditorCmd @Arguments *> $null
if ($LASTEXITCODE -ne 0) {
	throw "OrionPSOFilter commandlet failed with exit code $LASTEXITCODE. See log: $CommandletLog"
}

if (!(Test-Path -LiteralPath $ResolvedOutputPath)) {
	throw "Expected direct stable PSO cache was not created: $ResolvedOutputPath"
}

Write-Host "Direct stable PSO cache complete: $ResolvedOutputPath"
