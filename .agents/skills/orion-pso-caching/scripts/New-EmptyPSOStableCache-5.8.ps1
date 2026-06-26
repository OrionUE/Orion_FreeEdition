<#
	Copyright (c) 2026 Orion. All Rights Reserved.
	https://orionue.com
#>

[CmdletBinding()]
param(
	[string]$ProjectRoot,
	[string]$ProjectName,
	[string]$Platform = "Windows",
	[string]$ShaderFormat = "PCD3D_SM6",
	[string]$OutputPath,
	[switch]$NoBackup
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

function Resolve-ProjectRoot {
	param([string]$Value)

	if ($Value) {
		return (Resolve-Path -LiteralPath $Value).Path
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

function Write-UInt64 {
	param(
		[System.IO.BinaryWriter]$Writer,
		[uint64]$Value
	)

	$Writer.Write($Value)
}

$ResolvedProjectRoot = Resolve-ProjectRoot $ProjectRoot
$ResolvedProjectName = Get-ProjectName $ResolvedProjectRoot $ProjectName

if (!$OutputPath) {
	$BuildPipelineDir = Join-Path $ResolvedProjectRoot ("Build\{0}\PipelineCaches" -f $Platform)
	$OutputPath = Join-Path $BuildPipelineDir ("PSO_{0}_{1}.spc" -f $ResolvedProjectName, $ShaderFormat)
}

$ResolvedOutputDir = Split-Path -Parent $OutputPath
New-Item -ItemType Directory -Force -Path $ResolvedOutputDir | Out-Null

$BackupPath = $null
if ((Test-Path -LiteralPath $OutputPath) -and !$NoBackup) {
	$Stamp = Get-Date -Format "yyyyMMdd-HHmmss"
	$BackupDir = Join-Path $ResolvedProjectRoot ("Saved\OrionUE\PSO\spc-backups\{0}" -f $Stamp)
	New-Item -ItemType Directory -Force -Path $BackupDir | Out-Null
	$BackupPath = Join-Path $BackupDir ("{0}.before-empty.spc" -f [System.IO.Path]::GetFileNameWithoutExtension($OutputPath))
	Move-Item -LiteralPath $OutputPath -Destination $BackupPath -Force
}

$Magic = [System.Text.Encoding]::ASCII.GetBytes("STBLCACH")
$TargetPlatformBytes = [System.Text.Encoding]::ASCII.GetBytes($ShaderFormat + [char]0)

$MemoryStream = New-Object System.IO.MemoryStream
$Writer = New-Object System.IO.BinaryWriter($MemoryStream)
try {
	$Writer.Write($Magic)
	$Writer.Write([int32]8)
	$Writer.Write([int32]648)
	$Writer.Write([int64]0)
	$Writer.Write([int64]0)
	Write-UInt64 -Writer $Writer -Value 4
	Write-UInt64 -Writer $Writer -Value 0
	$Writer.Write([int32]$TargetPlatformBytes.Length)
	$Writer.Write($TargetPlatformBytes)
	$Writer.Write([uint32]31)
	$Writer.Flush()

	[System.IO.File]::WriteAllBytes($OutputPath, $MemoryStream.ToArray())
}
finally {
	$Writer.Dispose()
	$MemoryStream.Dispose()
}

$OutputItem = Get-Item -LiteralPath $OutputPath
[pscustomobject]@{
	ProjectRoot = $ResolvedProjectRoot
	OutputPath = $OutputItem.FullName
	Length = $OutputItem.Length
	BackupPath = $BackupPath
	ShaderFormat = $ShaderFormat
}
