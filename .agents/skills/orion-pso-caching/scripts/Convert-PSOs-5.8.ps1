[CmdletBinding()]
param(
	[string]$ProjectRoot,
	[string]$EngineRoot,
	[string]$ProjectName,
	[string]$CollectedDir,
	[string]$Platform = "Windows",
	[string]$ShaderFormat = "PCD3D_SM6",
	[string]$OutputName,
	[switch]$CopyToBuild,
	[switch]$CleanExisting,
	[switch]$StablePCCompressed,
	[switch]$SkipBuildValidation
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

function Invoke-StableCacheBuildValidation {
	param(
		[string]$EditorCmd,
		[string]$ProjectFilePath,
		[string]$ProjectRootValue,
		[string]$ProjectNameValue,
		[string]$PlatformValue,
		[string]$ShaderFormatValue,
		[string]$StableCachePath,
		[System.IO.FileInfo[]]$StableKeyFiles
	)

	$ValidationRoot = Join-Path $ProjectRootValue "Saved\OrionUE\PSO\convert-validation"
	$ValidationDir = Join-Path $ValidationRoot (Get-Date -Format "yyyyMMdd-HHmmss")
	New-Item -ItemType Directory -Force -Path $ValidationDir | Out-Null

	$ValidationLog = Join-Path $ValidationDir "build-validation.log"
	$ValidationOutput = Join-Path $ValidationDir ("{0}_{1}.stable.upipelinecache" -f $ProjectNameValue, $ShaderFormatValue)
	$ChunkInfoDir = Join-Path $ProjectRootValue ("Saved\Cooked\{0}\{1}\Content" -f $PlatformValue, $ProjectNameValue)

	$ValidationArgs = @(
		$ProjectFilePath,
		"-run=ShaderPipelineCacheTools",
		"build",
		$StableCachePath
	)
	foreach ($StableKeyFile in $StableKeyFiles) {
		$ValidationArgs += $StableKeyFile.FullName
	}
	if (Test-Path -LiteralPath $ChunkInfoDir) {
		$ValidationArgs += ("-chunkinfodir={0}" -f (Resolve-Path -LiteralPath $ChunkInfoDir).Path)
	}
	$ValidationArgs += @(
		("-library={0}" -f $ProjectNameValue),
		("-platform={0}" -f $PlatformValue),
		$ValidationOutput,
		"-unattended",
		"-nop4",
		"-NoSound",
		"-NoSplash",
		("-abslog={0}" -f $ValidationLog)
	)

	Write-Host "Validating stable cache readback before moving to Build..."
	Write-Host "Validation log: $ValidationLog"
	& $EditorCmd @ValidationArgs *> $null
	if ($LASTEXITCODE -ne 0 -or !(Test-Path -LiteralPath $ValidationOutput)) {
		throw "Stable cache build validation failed with exit code $LASTEXITCODE. Output was not moved to Build. See log: $ValidationLog. In this UE 5.8 project, use Build-DirectStablePSO-5.8.ps1 -CleanBuildPipelineCaches as the fallback instead of stablepc.csv.compressed."
	}

	Write-Host "Stable cache build validation passed: $ValidationOutput"
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
$ResolvedCollectedDir = (New-Item -ItemType Directory -Force -Path $CollectedDir).FullName

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

$ShkFiles = @(Get-ChildItem -LiteralPath $ResolvedCollectedDir -File -Filter "*.shk" |
	Where-Object { $_.Name -like "*-$ShaderFormat.shk" } |
	Sort-Object FullName)
if (!$ShkFiles) {
	throw "No .shk files for shader format $ShaderFormat found in $ResolvedCollectedDir"
}

if (!$OutputName) {
	if ($StablePCCompressed) {
		$OutputName = "PSO_{0}_{1}.stablepc.csv.compressed" -f $ResolvedProjectName, $ShaderFormat
	}
	else {
		$OutputName = "PSO_{0}_{1}.spc" -f $ResolvedProjectName, $ShaderFormat
	}
}
if ($StablePCCompressed) {
	if (!$OutputName.EndsWith(".stablepc.csv", [System.StringComparison]::OrdinalIgnoreCase) -and
		!$OutputName.EndsWith(".stablepc.csv.compressed", [System.StringComparison]::OrdinalIgnoreCase)) {
		$OutputName = "$OutputName.stablepc.csv.compressed"
	}
}
elseif ([System.IO.Path]::GetExtension($OutputName) -ne ".spc") {
	$OutputName = "$OutputName.spc"
}

if ($CopyToBuild) {
	$OutputDir = Join-Path $ResolvedProjectRoot "Saved\OrionUE\PSO\convert-output"
	New-Item -ItemType Directory -Force -Path $OutputDir | Out-Null
	$OutputPath = Join-Path $OutputDir $OutputName
}
else {
	$OutputPath = Join-Path $ResolvedCollectedDir $OutputName
}

if ($CleanExisting -and (Test-Path -LiteralPath $OutputPath)) {
	Remove-Item -LiteralPath $OutputPath -Force
}

$RecordedPattern = Join-Path $ResolvedCollectedDir "*.rec.upipelinecache"
$StableKeysPattern = Join-Path $ResolvedCollectedDir ("*-{0}.shk" -f $ShaderFormat)
$ConversionLogDir = Join-Path $ResolvedProjectRoot "Saved\Logs\PSO"
New-Item -ItemType Directory -Force -Path $ConversionLogDir | Out-Null
$ConversionLog = Join-Path $ConversionLogDir ("pso-convert-{0}.log" -f (Get-Date -Format "yyyyMMdd-HHmmss"))
$Arguments = @(
	$ResolvedProjectFile.FullName,
	"-run=ShaderPipelineCacheTools",
	"expand",
	$RecordedPattern,
	$StableKeysPattern,
	$OutputPath,
	"-unattended",
	"-nop4",
	"-NoSound",
	"-NoSplash",
	("-abslog={0}" -f $ConversionLog)
)

Write-Host "ProjectRoot: $ResolvedProjectRoot"
Write-Host "EngineRoot:  $ResolvedEngineRoot"
Write-Host "ProjectFile: $($ResolvedProjectFile.FullName)"
Write-Host "Inputs:      $($RecFiles.Count) recorded cache(s), $($ShkFiles.Count) stable key file(s)"
Write-Host "Patterns:    $RecordedPattern"
Write-Host "             $StableKeysPattern"
Write-Host "Format:      $(if ($StablePCCompressed) { 'stablepc.csv.compressed' } else { 'spc' })"
Write-Host "Output:      $OutputPath"
Write-Host "Log:         $ConversionLog"

& $EditorCmd @Arguments *> $null
if ($LASTEXITCODE -ne 0) {
	throw "ShaderPipelineCacheTools failed with exit code $LASTEXITCODE"
}

if (!(Test-Path -LiteralPath $OutputPath)) {
	throw "Expected stable cache was not created: $OutputPath"
}

if ($CopyToBuild -and !$SkipBuildValidation) {
	Invoke-StableCacheBuildValidation `
		-EditorCmd $EditorCmd `
		-ProjectFilePath $ResolvedProjectFile.FullName `
		-ProjectRootValue $ResolvedProjectRoot `
		-ProjectNameValue $ResolvedProjectName `
		-PlatformValue $Platform `
		-ShaderFormatValue $ShaderFormat `
		-StableCachePath $OutputPath `
		-StableKeyFiles $ShkFiles
}

if ($CopyToBuild) {
	$BuildPipelineDir = Join-Path $ResolvedProjectRoot ("Build\{0}\PipelineCaches" -f $Platform)
	New-Item -ItemType Directory -Force -Path $BuildPipelineDir | Out-Null
	$Destination = Join-Path $BuildPipelineDir ([System.IO.Path]::GetFileName($OutputPath))
	if (Test-Path -LiteralPath $Destination) {
		Remove-Item -LiteralPath $Destination -Force
	}
	Move-Item -LiteralPath $OutputPath -Destination $Destination -Force
	Write-Host "Moved stable cache to: $Destination"
}

Write-Host "PSO conversion complete."
