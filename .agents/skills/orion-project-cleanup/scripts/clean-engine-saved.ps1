param(
	[ValidateSet('User', 'InstalledEngine')]
	[string]$Target = 'User',

	[string]$EngineVersion = '5.8',

	[string]$EngineRoot = '',

	[string]$SavedRoot = '',

	[ValidateSet('All', 'Config', 'WindowsEditorConfig', 'ContentBrowser', 'Logs', 'Crashes')]
	[string]$Scope = 'All',

	[switch]$Apply,

	[switch]$AllowRunningEditor,

	[switch]$AllowInstalledEngineSaved,

	[switch]$AllowCustomSavedRoot,

	[int]$ListLimit = 200
)

$ErrorActionPreference = 'Stop'

function Resolve-ExistingPathOrNull
{
	param(
		[string]$Path
	)

	if ([string]::IsNullOrWhiteSpace($Path))
	{
		return $null
	}

	if (-not (Test-Path -LiteralPath $Path))
	{
		return $null
	}

	return (Resolve-Path -LiteralPath $Path).Path
}

function Join-NativePath
{
	param(
		[string]$Base,
		[string]$RelativePath
	)

	$NativeRelativePath = $RelativePath -replace '/', [System.IO.Path]::DirectorySeparatorChar
	return Join-Path $Base $NativeRelativePath
}

function Convert-ToDisplayPath
{
	param(
		[string]$Root,
		[string]$FullPath
	)

	$RootWithSeparator = $Root.TrimEnd([System.IO.Path]::DirectorySeparatorChar, [System.IO.Path]::AltDirectorySeparatorChar) + [System.IO.Path]::DirectorySeparatorChar
	if ($FullPath.StartsWith($RootWithSeparator, [System.StringComparison]::OrdinalIgnoreCase))
	{
		return ($FullPath.Substring($RootWithSeparator.Length) -replace '\\', '/')
	}

	return ($FullPath -replace '\\', '/')
}

function Test-IsUnderPath
{
	param(
		[string]$Path,
		[string]$Parent
	)

	$ParentWithSeparator = $Parent.TrimEnd([System.IO.Path]::DirectorySeparatorChar, [System.IO.Path]::AltDirectorySeparatorChar) + [System.IO.Path]::DirectorySeparatorChar
	return $Path.Equals($Parent, [System.StringComparison]::OrdinalIgnoreCase) -or
		$Path.StartsWith($ParentWithSeparator, [System.StringComparison]::OrdinalIgnoreCase)
}

function Get-DefaultUserSavedRoot
{
	param(
		[string]$Version
	)

	if ([string]::IsNullOrWhiteSpace($env:LOCALAPPDATA))
	{
		throw 'LOCALAPPDATA is not set; pass -SavedRoot explicitly.'
	}

	return Join-Path $env:LOCALAPPDATA "UnrealEngine\$Version\Saved"
}

function Get-TargetSavedRoot
{
	if (-not [string]::IsNullOrWhiteSpace($SavedRoot))
	{
		return $SavedRoot
	}

	if ($Target -eq 'User')
	{
		return Get-DefaultUserSavedRoot -Version $EngineVersion
	}

	if ([string]::IsNullOrWhiteSpace($EngineRoot))
	{
		throw 'Target InstalledEngine requires -EngineRoot, or pass -SavedRoot explicitly.'
	}

	return Join-Path $EngineRoot 'Engine\Saved'
}

function Assert-SafeSavedRoot
{
	param(
		[string]$Root
	)

	$ResolvedRoot = Resolve-ExistingPathOrNull -Path $Root
	if ($null -eq $ResolvedRoot)
	{
		return $null
	}

	if (-not (Split-Path -Leaf $ResolvedRoot).Equals('Saved', [System.StringComparison]::OrdinalIgnoreCase))
	{
		throw "Refusing to clean a path that is not a Saved directory: $ResolvedRoot"
	}

	if ($AllowCustomSavedRoot)
	{
		return $ResolvedRoot
	}

	if (-not [string]::IsNullOrWhiteSpace($env:LOCALAPPDATA))
	{
		$UserUnrealRoot = Join-Path $env:LOCALAPPDATA 'UnrealEngine'
		$ResolvedUserUnrealRoot = Resolve-ExistingPathOrNull -Path $UserUnrealRoot
		if (($null -ne $ResolvedUserUnrealRoot) -and (Test-IsUnderPath -Path $ResolvedRoot -Parent $ResolvedUserUnrealRoot))
		{
			return $ResolvedRoot
		}
	}

	if ($AllowInstalledEngineSaved)
	{
		if ($Target -ne 'InstalledEngine')
		{
			throw 'Use -Target InstalledEngine with -AllowInstalledEngineSaved when cleaning an installed engine Saved directory.'
		}

		if ([string]::IsNullOrWhiteSpace($EngineRoot))
		{
			throw 'Installed engine cleanup requires -EngineRoot for safety verification.'
		}

		$ResolvedEngineRoot = Resolve-ExistingPathOrNull -Path $EngineRoot
		if ($null -eq $ResolvedEngineRoot)
		{
			throw "EngineRoot does not exist: $EngineRoot"
		}

		$ExpectedEngineSavedRoot = Join-Path $ResolvedEngineRoot 'Engine\Saved'
		$ResolvedExpectedEngineSavedRoot = Resolve-ExistingPathOrNull -Path $ExpectedEngineSavedRoot
		if (($null -ne $ResolvedExpectedEngineSavedRoot) -and $ResolvedRoot.Equals($ResolvedExpectedEngineSavedRoot, [System.StringComparison]::OrdinalIgnoreCase))
		{
			return $ResolvedRoot
		}

		throw "SavedRoot is not the Engine\Saved directory under EngineRoot: $ResolvedRoot"
	}

	throw "Refusing to clean outside LOCALAPPDATA\UnrealEngine without explicit allow switch: $ResolvedRoot"
}

function Get-RelativeTargetsForScope
{
	switch ($Scope)
	{
		'All' { return @('*') }
		'Config' { return @('Config') }
		'WindowsEditorConfig' { return @('Config/WindowsEditor') }
		'ContentBrowser' { return @('Config/WindowsEditor/EditorSettings.ini') }
		'Logs' { return @('Logs') }
		'Crashes' { return @('Crashes') }
		default { throw "Unsupported scope: $Scope" }
	}
}

function Get-DeleteCandidates
{
	param(
		[string]$Root
	)

	$Candidates = New-Object System.Collections.Generic.List[object]
	$RelativeTargets = Get-RelativeTargetsForScope

	foreach ($RelativeTarget in $RelativeTargets)
	{
		if ($RelativeTarget -eq '*')
		{
			Get-ChildItem -LiteralPath $Root -Force -ErrorAction SilentlyContinue | ForEach-Object {
				$Candidates.Add([pscustomobject]@{
					FullPath = $_.FullName
					RelativePath = Convert-ToDisplayPath -Root $Root -FullPath $_.FullName
					IsDirectory = $_.PSIsContainer
				})
			}

			continue
		}

		$FullTarget = Join-NativePath -Base $Root -RelativePath $RelativeTarget
		if (-not (Test-Path -LiteralPath $FullTarget))
		{
			continue
		}

		$ResolvedTarget = (Resolve-Path -LiteralPath $FullTarget).Path
		$Item = Get-Item -LiteralPath $ResolvedTarget -Force
		$Candidates.Add([pscustomobject]@{
			FullPath = $ResolvedTarget
			RelativePath = Convert-ToDisplayPath -Root $Root -FullPath $ResolvedTarget
			IsDirectory = $Item.PSIsContainer
		})
	}

	return $Candidates.ToArray()
}

function Write-LimitedCandidates
{
	param(
		[object[]]$Candidates
	)

	Write-Host ""
	Write-Host "Delete candidates ($($Candidates.Count))"

	if ($Candidates.Count -eq 0)
	{
		Write-Host '  <none>'
		return
	}

	$Candidates | Select-Object -First $ListLimit | ForEach-Object {
		$Kind = if ($_.IsDirectory) { 'dir' } else { 'file' }
		Write-Host "  [$Kind] $($_.RelativePath)"
	}

	if ($Candidates.Count -gt $ListLimit)
	{
		Write-Host "  ... $($Candidates.Count - $ListLimit) more"
	}
}

function Assert-EditorNotRunningForApply
{
	if (-not $Apply)
	{
		return
	}

	$RunningEditors = @(Get-Process UnrealEditor* -ErrorAction SilentlyContinue)
	if (($RunningEditors.Count -gt 0) -and (-not $AllowRunningEditor))
	{
		$ProcessList = ($RunningEditors | ForEach-Object { "$($_.ProcessName):$($_.Id)" }) -join ', '
		throw "Unreal Editor is running ($ProcessList). Close it first, or pass -AllowRunningEditor if you accept settings being rewritten on exit."
	}
}

$RequestedSavedRoot = Get-TargetSavedRoot
$ResolvedSavedRoot = Assert-SafeSavedRoot -Root $RequestedSavedRoot

if ($null -eq $ResolvedSavedRoot)
{
	Write-Host "Saved root does not exist: $RequestedSavedRoot"
	Write-Host 'Nothing to clean.'
	return
}

Assert-EditorNotRunningForApply
$Candidates = Get-DeleteCandidates -Root $ResolvedSavedRoot
$Mode = if ($Apply) { 'APPLY' } else { 'DRY RUN' }

Write-Host "Mode: $Mode"
Write-Host "Target: $Target"
Write-Host "Scope: $Scope"
Write-Host "Saved root: $ResolvedSavedRoot"
Write-LimitedCandidates -Candidates $Candidates

if (-not $Apply)
{
	Write-Host ""
	Write-Host 'Dry-run only. Re-run with -Apply to delete the candidates above.'
	return
}

$DeletedCount = 0
foreach ($Candidate in $Candidates)
{
	if (-not (Test-Path -LiteralPath $Candidate.FullPath))
	{
		continue
	}

	$ResolvedCandidate = (Resolve-Path -LiteralPath $Candidate.FullPath).Path
	if (-not (Test-IsUnderPath -Path $ResolvedCandidate -Parent $ResolvedSavedRoot))
	{
		throw "Refusing to delete outside Saved root: $ResolvedCandidate"
	}

	if ($ResolvedCandidate.Equals($ResolvedSavedRoot, [System.StringComparison]::OrdinalIgnoreCase))
	{
		throw "Refusing to delete Saved root itself: $ResolvedSavedRoot"
	}

	Remove-Item -LiteralPath $ResolvedCandidate -Force -Recurse
	$DeletedCount++
}

Write-Host ""
Write-Host "Deleted candidates: $DeletedCount"
