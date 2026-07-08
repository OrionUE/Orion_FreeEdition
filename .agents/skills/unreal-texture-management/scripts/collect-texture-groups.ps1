param(
	[string]$EditorCmd,
	[string]$Project,
	[string[]]$Roots = @(),
	[string]$Report = "Saved\OrionUE\TextureManagement\texture-groups-report.json",
	[string]$Csv = "Saved\OrionUE\TextureManagement\texture-groups-report.csv",
	[string]$Log = "Saved\OrionUE\TextureManagement\texture-groups-report.log",
	[int]$SampleLimit = 20,
	[switch]$AllMountedNonEngine,
	[switch]$IncludeEngine
)

$ErrorActionPreference = "Stop"

function Resolve-OutputPath
{
	param([string]$Path)

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

	$Candidates = @(
		"E:\UnrealEngine\UE_5.8\Engine\Binaries\Win64\UnrealEditor-Cmd.exe",
		"C:\Program Files\Epic Games\UE_5.8\Engine\Binaries\Win64\UnrealEditor-Cmd.exe",
		"C:\Program Files\Epic Games\UE_5.7\Engine\Binaries\Win64\UnrealEditor-Cmd.exe",
		"C:\Program Files\Epic Games\UE_5.6\Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
	)

	foreach ($Candidate in $Candidates)
	{
		if (Test-Path -LiteralPath $Candidate)
		{
			return $Candidate
		}
	}

	return "UnrealEditor-Cmd.exe"
}

$ResolvedProject = if ($Project) { (Resolve-Path -LiteralPath $Project).Path } else { Get-DefaultProject }
$ResolvedEditorCmd = if ($EditorCmd) { $EditorCmd } else { Get-DefaultEditorCmd }
$Script = Join-Path $PSScriptRoot "collect-texture-groups.py"
$ResolvedReport = Resolve-OutputPath -Path $Report
$ResolvedCsv = Resolve-OutputPath -Path $Csv
$ResolvedLog = Resolve-OutputPath -Path $Log

foreach ($OutputPath in @($ResolvedReport, $ResolvedCsv, $ResolvedLog))
{
	$Parent = Split-Path -Parent $OutputPath
	if ($Parent)
	{
		New-Item -ItemType Directory -Force -Path $Parent | Out-Null
	}
}

$RootValues = @(
	foreach ($Root in $Roots)
	{
		foreach ($Part in ($Root -split "[;,]"))
		{
			$Trimmed = $Part.Trim()
			if ($Trimmed)
			{
				$Trimmed
			}
		}
	}
)

$env:ORION_TEXTURE_GROUP_ROOTS = ($RootValues -join ";")
$env:ORION_TEXTURE_GROUP_ALL_MOUNTED = if ($AllMountedNonEngine) { "1" } else { "0" }
$env:ORION_TEXTURE_GROUP_INCLUDE_ENGINE = if ($IncludeEngine) { "1" } else { "0" }
$env:ORION_TEXTURE_GROUP_SAMPLE_LIMIT = [string]$SampleLimit
$env:ORION_TEXTURE_GROUP_REPORT = $ResolvedReport
$env:ORION_TEXTURE_GROUP_CSV = $ResolvedCsv
$env:ORION_TEXTURE_GROUP_LOAD_MISSING = "1"

& $ResolvedEditorCmd $ResolvedProject -run=PythonScript -Script="$Script" -unattended -nop4 -nosplash -NullRHI -log="$ResolvedLog"
if ($LASTEXITCODE -ne 0)
{
	exit $LASTEXITCODE
}

Write-Host "Texture group report: $ResolvedReport"
Write-Host "Texture group CSV: $ResolvedCsv"
Write-Host "Log: $ResolvedLog"
