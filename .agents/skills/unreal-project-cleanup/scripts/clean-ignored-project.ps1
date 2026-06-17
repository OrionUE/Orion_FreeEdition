param(
	[string]$ProjectRoot = (Get-Location).Path,
	[switch]$Apply,
	[int]$ListLimit = 200
)

$ErrorActionPreference = "Stop"

function Resolve-RootPath
{
	param(
		[string]$Path
	)

	return (Resolve-Path -LiteralPath $Path).Path
}

function Convert-ToRelativePath
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

function Join-ProjectPath
{
	param(
		[string]$Root,
		[string]$RelativePath
	)

	$NativePath = $RelativePath -replace '/', [System.IO.Path]::DirectorySeparatorChar
	return (Join-Path $Root $NativePath)
}

function Test-IsUnderRelativePath
{
	param(
		[string]$RelativePath,
		[string]$Prefix
	)

	$NormalizedPath = ($RelativePath -replace '\\', '/').Trim('/')
	$NormalizedPrefix = ($Prefix -replace '\\', '/').Trim('/')

	return $NormalizedPath.Equals($NormalizedPrefix, [System.StringComparison]::OrdinalIgnoreCase) -or
		$NormalizedPath.StartsWith($NormalizedPrefix + '/', [System.StringComparison]::OrdinalIgnoreCase)
}

function Test-DirectoryHasContent
{
	param(
		[string]$Path
	)

	if (-not (Test-Path -LiteralPath $Path -PathType Container))
	{
		return $false
	}

	$FirstChild = Get-ChildItem -LiteralPath $Path -Force -ErrorAction SilentlyContinue | Select-Object -First 1
	return $null -ne $FirstChild
}

function Test-IsGeneratedPath
{
	param(
		[string]$RelativePath
	)

	$Path = ($RelativePath -replace '\\', '/').Trim('/')
	$Patterns = @(
		'^(?:\.vs|\.idea|Binaries|Intermediate|DerivedDataCache|Saved)(?:/|$)',
		'^Plugins/.+/(?:Binaries|Intermediate)(?:/|$)',
		'(^|/)__pycache__(/|$)'
	)

	foreach ($Pattern in $Patterns)
	{
		if ($Path -match $Pattern)
		{
			return $true
		}
	}

	return $false
}

function Test-IsCleanableDirectory
{
	param(
		[string]$RelativePath,
		[bool]$SavedOrionHasContent
	)

	$Path = ($RelativePath -replace '\\', '/').Trim('/')
	if ([string]::IsNullOrWhiteSpace($Path))
	{
		return $false
	}

	if (Test-IsUnderRelativePath -RelativePath $Path -Prefix 'Docs')
	{
		return $false
	}

	if ($SavedOrionHasContent -and (Test-IsUnderRelativePath -RelativePath $Path -Prefix 'Saved/OrionUE'))
	{
		return $false
	}

	if (Test-IsGeneratedPath -RelativePath $Path)
	{
		return $true
	}

	return (Test-IsUnderRelativePath -RelativePath $Path -Prefix 'Build')
}

function Get-ProtectionReason
{
	param(
		[string]$RelativePath,
		[string]$Extension,
		[bool]$SavedOrionHasContent,
		[System.Collections.Generic.HashSet[string]]$ProtectedExtensions
	)

	if (Test-IsUnderRelativePath -RelativePath $RelativePath -Prefix 'Docs')
	{
		return 'protected Docs directory'
	}

	if ($SavedOrionHasContent -and (Test-IsUnderRelativePath -RelativePath $RelativePath -Prefix 'Saved/OrionUE'))
	{
		return 'protected non-empty Saved/OrionUE'
	}

	if ((-not (Test-IsGeneratedPath -RelativePath $RelativePath)) -and $ProtectedExtensions.Contains($Extension.ToLowerInvariant()))
	{
		return 'protected user-authored document/model/texture/media extension'
	}

	return $null
}

function Write-LimitedList
{
	param(
		[string]$Title,
		[object[]]$Items,
		[int]$Limit
	)

	Write-Host ""
	Write-Host "$Title ($($Items.Count))"

	if ($Items.Count -eq 0)
	{
		Write-Host "  <none>"
		return
	}

	$Items | Select-Object -First $Limit | ForEach-Object {
		if ($_.PSObject.Properties.Name -contains 'Reason')
		{
			Write-Host "  $($_.RelativePath) [$($_.Reason)]"
		}
		else
		{
			Write-Host "  $($_.RelativePath)"
		}
	}

	if ($Items.Count -gt $Limit)
	{
		Write-Host "  ... $($Items.Count - $Limit) more"
	}
}

function Add-CandidateDirectory
{
	param(
		[System.Collections.Generic.Dictionary[string, object]]$DirectoryMap,
		[string]$Root,
		[string]$Directory,
		[bool]$SavedOrionHasContent
	)

	$Current = $Directory
	while (-not [string]::IsNullOrWhiteSpace($Current))
	{
		$Relative = Convert-ToRelativePath -Root $Root -FullPath $Current
		if (-not (Test-IsCleanableDirectory -RelativePath $Relative -SavedOrionHasContent $SavedOrionHasContent))
		{
			break
		}

		if ($DirectoryMap.ContainsKey($Current))
		{
			break
		}

		if (-not $DirectoryMap.ContainsKey($Current))
		{
			$DirectoryMap[$Current] = [pscustomobject]@{
				FullPath = $Current
				RelativePath = $Relative
			}
		}

		$Parent = Split-Path -Parent $Current
		if ($Parent -eq $Current)
		{
			break
		}

		$Current = $Parent
	}
}

function Add-CandidateDirectoryTree
{
	param(
		[System.Collections.Generic.Dictionary[string, object]]$DirectoryMap,
		[string]$Root,
		[string]$RootDirectory,
		[bool]$SavedOrionHasContent
	)

	if (-not (Test-Path -LiteralPath $RootDirectory -PathType Container))
	{
		return
	}

	Get-ChildItem -LiteralPath $RootDirectory -Force -Recurse -Directory -ErrorAction SilentlyContinue | ForEach-Object {
		Add-CandidateDirectory -DirectoryMap $DirectoryMap -Root $Root -Directory $_.FullName -SavedOrionHasContent $SavedOrionHasContent
	}

	Add-CandidateDirectory -DirectoryMap $DirectoryMap -Root $Root -Directory $RootDirectory -SavedOrionHasContent $SavedOrionHasContent
}

$Root = Resolve-RootPath -Path $ProjectRoot
$GitRoot = (& git -C $Root rev-parse --show-toplevel).Trim()
if ($LASTEXITCODE -ne 0)
{
	throw "ProjectRoot is not inside a Git repository: $Root"
}

$GitRoot = Resolve-RootPath -Path $GitRoot
if (-not $Root.Equals($GitRoot, [System.StringComparison]::OrdinalIgnoreCase))
{
	Write-Host "Using Git root: $GitRoot"
	$Root = $GitRoot
}

$SavedOrionPath = Join-Path $Root 'Saved\OrionUE'
$SavedOrionHasContent = Test-DirectoryHasContent -Path $SavedOrionPath
$ProtectedExtensions = [System.Collections.Generic.HashSet[string]]::new([System.StringComparer]::OrdinalIgnoreCase)
@(
	'.md', '.markdown', '.txt', '.rtf', '.pdf', '.doc', '.docx', '.xls', '.xlsx', '.ppt', '.pptx', '.csv', '.html', '.htm', '.drawio',
	'.png', '.jpg', '.jpeg', '.tga', '.tif', '.tiff', '.psd', '.kra', '.exr', '.hdr', '.svg',
	'.fbx', '.obj', '.gltf', '.glb', '.blend', '.max', '.ma', '.mb', '.usd', '.usda', '.usdc', '.abc', '.ztl', '.spp', '.sbs', '.sbsar',
	'.wav', '.mp3', '.flac', '.ogg', '.mp4', '.mov', '.bk2'
) | ForEach-Object {
	[void]$ProtectedExtensions.Add($_)
}

$IgnoredPaths = & git -C $Root -c core.quotePath=false ls-files -o -i --exclude-standard
if ($LASTEXITCODE -ne 0)
{
	throw "Failed to enumerate ignored files with git ls-files."
}

$DeleteCandidates = New-Object System.Collections.Generic.List[object]
$ProtectedCandidates = New-Object System.Collections.Generic.List[object]

foreach ($IgnoredPath in $IgnoredPaths)
{
	if ([string]::IsNullOrWhiteSpace($IgnoredPath))
	{
		continue
	}

	$FullPath = Join-ProjectPath -Root $Root -RelativePath $IgnoredPath
	if (-not [System.IO.File]::Exists($FullPath))
	{
		continue
	}

	$RelativePath = ($IgnoredPath -replace '\\', '/').TrimStart('/')
	$Extension = [System.IO.Path]::GetExtension($FullPath)
	$ProtectionReason = Get-ProtectionReason -RelativePath $RelativePath -Extension $Extension -SavedOrionHasContent $SavedOrionHasContent -ProtectedExtensions $ProtectedExtensions

	if ($null -ne $ProtectionReason)
	{
		$ProtectedCandidates.Add([pscustomobject]@{
			FullPath = $FullPath
			RelativePath = $RelativePath
			Reason = $ProtectionReason
		})
		continue
	}

	$DeleteCandidates.Add([pscustomobject]@{
		FullPath = $FullPath
		RelativePath = $RelativePath
	})
}

$DirectoryMap = [System.Collections.Generic.Dictionary[string, object]]::new([System.StringComparer]::OrdinalIgnoreCase)
foreach ($Candidate in $DeleteCandidates)
{
	$Parent = Split-Path -Parent $Candidate.FullPath
	Add-CandidateDirectory -DirectoryMap $DirectoryMap -Root $Root -Directory $Parent -SavedOrionHasContent $SavedOrionHasContent
}

foreach ($CommonDirectory in @('.vs', '.idea', 'Binaries', 'Intermediate', 'DerivedDataCache', 'Saved', 'Build'))
{
	$FullPath = Join-ProjectPath -Root $Root -RelativePath $CommonDirectory
	if (Test-Path -LiteralPath $FullPath -PathType Container)
	{
		Add-CandidateDirectoryTree -DirectoryMap $DirectoryMap -Root $Root -RootDirectory $FullPath -SavedOrionHasContent $SavedOrionHasContent
	}
}

$DeleteCandidateArray = $DeleteCandidates.ToArray()
$ProtectedCandidateArray = $ProtectedCandidates.ToArray()
$DirectoryCandidates = @($DirectoryMap.Values) | Sort-Object { $_.FullPath.Length } -Descending
$Mode = if ($Apply) { 'APPLY' } else { 'DRY RUN' }

Write-Host "Mode: $Mode"
Write-Host "Project root: $Root"
Write-Host "Saved/OrionUE has content: $SavedOrionHasContent"

Write-LimitedList -Title 'Delete candidates' -Items $DeleteCandidateArray -Limit $ListLimit
Write-LimitedList -Title 'Protected ignored files' -Items $ProtectedCandidateArray -Limit $ListLimit
Write-LimitedList -Title 'Empty directory candidates' -Items @($DirectoryCandidates) -Limit $ListLimit

if (-not $Apply)
{
	Write-Host ""
	Write-Host "Dry-run only. Re-run with -Apply to delete delete candidates and empty cleanable directories."
	return
}

foreach ($Candidate in $DeleteCandidateArray)
{
	if (Test-Path -LiteralPath $Candidate.FullPath -PathType Leaf)
	{
		Remove-Item -LiteralPath $Candidate.FullPath -Force
	}
}

$RemovedDirectoryCount = 0
foreach ($Directory in $DirectoryCandidates)
{
	if (-not (Test-Path -LiteralPath $Directory.FullPath -PathType Container))
	{
		continue
	}

	$FirstChild = Get-ChildItem -LiteralPath $Directory.FullPath -Force -ErrorAction SilentlyContinue | Select-Object -First 1
	if ($null -ne $FirstChild)
	{
		continue
	}

	Remove-Item -LiteralPath $Directory.FullPath -Force
	$RemovedDirectoryCount++
}

Write-Host ""
Write-Host "Deleted files: $($DeleteCandidateArray.Count)"
Write-Host "Removed empty directories: $RemovedDirectoryCount"
Write-Host "Protected ignored files: $($ProtectedCandidateArray.Count)"
