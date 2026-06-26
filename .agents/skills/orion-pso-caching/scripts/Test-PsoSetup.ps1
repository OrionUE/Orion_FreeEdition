[CmdletBinding()]
param(
	[string]$ProjectRoot,
	[string]$EngineRoot,
	[string]$ProjectName,
	[string]$Platform = "Windows",
	[string]$ShaderFormat = "PCD3D_SM6"
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

function Read-TextIfExists {
	param([string]$Path)
	if (Test-Path -LiteralPath $Path) {
		return [System.IO.File]::ReadAllText((Resolve-Path -LiteralPath $Path).Path)
	}
	return ""
}

function Test-ContainsLine {
	param(
		[string]$Text,
		[string]$Pattern
	)
	return [regex]::IsMatch($Text, "(?im)^\s*$([regex]::Escape($Pattern))\s*$")
}

$ResolvedProjectRoot = Resolve-ProjectRoot $ProjectRoot
$ProjectFile = Get-ChildItem -LiteralPath $ResolvedProjectRoot -Filter "*.uproject" -File | Select-Object -First 1
if (!$ProjectFile) {
	throw "No .uproject found under $ResolvedProjectRoot"
}

if (!$ProjectName) {
	$ProjectName = [System.IO.Path]::GetFileNameWithoutExtension($ProjectFile.Name)
}

if (!$EngineRoot) {
	$InstallFile = Join-Path $ResolvedProjectRoot "Saved\OrionUE\UnrealEngine\InstallDirectory.txt"
	if (Test-Path -LiteralPath $InstallFile) {
		$EngineRoot = (Get-Content -LiteralPath $InstallFile -TotalCount 1).Trim()
	}
}

$Failures = New-Object System.Collections.Generic.List[string]
$Warnings = New-Object System.Collections.Generic.List[string]

Write-Host "ProjectRoot: $ResolvedProjectRoot"
Write-Host "ProjectName: $ProjectName"
Write-Host "Platform:    $Platform"
Write-Host "Shader:      $ShaderFormat"

if ($EngineRoot) {
	$EditorCmd = Join-Path $EngineRoot "Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
	if (Test-Path -LiteralPath $EditorCmd) {
		Write-Host "EngineRoot:  $EngineRoot"
	}
	else {
		$Failures.Add("UnrealEditor-Cmd.exe not found under EngineRoot: $EngineRoot")
	}
}
else {
	$Warnings.Add("EngineRoot was not detected.")
}

$PlatformEngineIni = Join-Path $ResolvedProjectRoot ("Config\{0}\{0}Engine.ini" -f $Platform)
$DefaultGameIni = Join-Path $ResolvedProjectRoot "Config\DefaultGame.ini"
$PlatformText = Read-TextIfExists $PlatformEngineIni
$GameText = Read-TextIfExists $DefaultGameIni

if (!$PlatformText) {
	$Failures.Add("Missing platform Engine.ini: $PlatformEngineIni")
}
else {
	foreach ($Required in @(
		"NeedsShaderStableKeys=true",
		"r.PSOPrecaching=1",
		"r.ShaderPipelineCache.Enabled=1"
	)) {
		if (!(Test-ContainsLine $PlatformText $Required)) {
			$Failures.Add("Missing required setting in platform Engine.ini: $Required")
		}
	}

	if ($PlatformText -match "(?im)^\s*r\.PSOPrecache\.ProxyCreationWhenPSOReady\s*=") {
		$Warnings.Add("Legacy r.PSOPrecache.ProxyCreationWhenPSOReady is present. UE 5.8 prefers r.PSOPrecache.ProxyCreationStrategy.")
	}

	if (!($PlatformText -match "(?im)^\s*r\.ShaderPipelineCacheTools\.IncludeComputePSODuringCook\s*=\s*0\s*$")) {
		$Warnings.Add("Direct stable PSO fallback requires r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0 to stop Cook deleting Content\PipelineCaches output.")
	}
}

if (!$GameText) {
	$Failures.Add("Missing Config\DefaultGame.ini")
}
else {
	foreach ($Required in @(
		"bShareMaterialShaderCode=True",
		"bSharedMaterialNativeLibraries=True"
	)) {
		if (!(Test-ContainsLine $GameText $Required)) {
			$Failures.Add("Missing required setting in DefaultGame.ini: $Required")
		}
	}

	if (!($GameText -match '(?im)^\s*\+DirectoriesToAlwaysStageAsUFS=\(Path="PipelineCaches"\)\s*$')) {
		$Warnings.Add('Direct stable PSO fallback requires +DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches") in DefaultGame.ini.')
	}
}

$CookPipelineDir = Join-Path $ResolvedProjectRoot ("Saved\Cooked\{0}\{1}\Metadata\PipelineCaches" -f $Platform, $ProjectName)
if (Test-Path -LiteralPath $CookPipelineDir) {
	$ShkCount = @(Get-ChildItem -LiteralPath $CookPipelineDir -File -Filter ("*-$ShaderFormat.shk")).Count
	Write-Host "Cook .shk:  $ShkCount file(s) in $CookPipelineDir"
	if ($ShkCount -lt 2) {
		$Warnings.Add("Expected at least Global and project .shk files for $ShaderFormat after cook.")
	}
}
else {
	$Warnings.Add("Cook pipeline directory does not exist yet: $CookPipelineDir")
}

$CollectedDir = Join-Path $ResolvedProjectRoot "CollectedPSOs"
$BuildPipelineDir = Join-Path $ResolvedProjectRoot ("Build\{0}\PipelineCaches" -f $Platform)
$ContentPipelineDir = Join-Path $ResolvedProjectRoot ("Content\PipelineCaches\{0}" -f $Platform)
Write-Host "Collected:   $CollectedDir"
Write-Host "Build PSO:   $BuildPipelineDir"
Write-Host "Content PSO: $ContentPipelineDir"

if (Test-Path -LiteralPath $BuildPipelineDir) {
	$BuildInputCount = @(Get-ChildItem -LiteralPath $BuildPipelineDir -File |
		Where-Object {
			$_.Name.EndsWith(".spc", [System.StringComparison]::OrdinalIgnoreCase) -or
			$_.Name.EndsWith(".stablepc.csv", [System.StringComparison]::OrdinalIgnoreCase) -or
			$_.Name.EndsWith(".stablepc.csv.compressed", [System.StringComparison]::OrdinalIgnoreCase)
		}).Count
	if ($BuildInputCount -gt 0) {
		$Warnings.Add("Build PipelineCaches contains $BuildInputCount .spc/.stablepc input file(s). Remove them before direct stable fallback packaging.")
	}
}

if (Test-Path -LiteralPath $ContentPipelineDir) {
	$DirectStableCount = @(Get-ChildItem -LiteralPath $ContentPipelineDir -File -Filter "*.stable.upipelinecache").Count
	Write-Host "Direct PSO:  $DirectStableCount stable.upipelinecache file(s)"
}

foreach ($Warning in $Warnings) {
	Write-Warning $Warning
}

if ($Failures.Count -gt 0) {
	foreach ($Failure in $Failures) {
		Write-Error $Failure
	}
	exit 1
}

Write-Host "PSO setup check passed."
