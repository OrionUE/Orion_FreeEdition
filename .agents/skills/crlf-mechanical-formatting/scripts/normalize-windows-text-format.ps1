param(
	[Parameter(Mandatory=$true, Position=0)]
	[string[]]$Path,

	[string[]]$IncludeExtension = @(".h", ".cpp", ".cs", ".ps1", ".uplugin", ".uproject", ".xml"),

	[string[]]$ExcludeRegex = @("(^|/)Intermediate/", "(^|/)Binaries/", "(^|/)Saved/", "(^|/)DerivedDataCache/"),

	[int]$SpacesPerTab = 4,

	[int]$XmlSpacesPerTab = 2,

	[switch]$CheckOnly
)

$ErrorActionPreference = "Stop"
$Utf8NoBom = New-Object System.Text.UTF8Encoding($false)
$CrLf = [string]::Concat([char]13, [char]10)
$Lf = [string][char]10
$Changed = New-Object System.Collections.Generic.List[string]

function Test-ExcludedPath
{
	param([string]$RelativePath)

	$NormalizedPath = $RelativePath -replace "\\", "/"
	foreach ($Pattern in $ExcludeRegex)
	{
		if ($NormalizedPath -match $Pattern)
		{
			return $true
		}
	}

	return $false
}

function Get-TargetFiles
{
	param([string]$InputPath)

	$ResolvedItems = Resolve-Path -LiteralPath $InputPath
	foreach ($ResolvedItem in $ResolvedItems)
	{
		if (Test-Path -LiteralPath $ResolvedItem.Path -PathType Container)
		{
			Get-ChildItem -LiteralPath $ResolvedItem.Path -Recurse -File | Where-Object { $IncludeExtension -contains $_.Extension.ToLowerInvariant() }
		}
		else
		{
			$Item = Get-Item -LiteralPath $ResolvedItem.Path
			if ($IncludeExtension -contains $Item.Extension.ToLowerInvariant())
			{
				$Item
			}
		}
	}
}

function Convert-IndentPrefix
{
	param(
		[string]$Line,
		[int]$CurrentSpacesPerTab
	)

	if ($Line -match '^(\t*) \*')
	{
		return $Line
	}

	$Match = [regex]::Match($Line, '^[\t ]+')
	if (-not $Match.Success)
	{
		return $Line
	}

	$Prefix = $Match.Value
	$Rest = $Line.Substring($Prefix.Length)
	$NewPrefixBuilder = New-Object System.Text.StringBuilder
	$SpaceRun = 0

	foreach ($Char in $Prefix.ToCharArray())
	{
		if ($Char -eq "`t")
		{
			if ($SpaceRun -gt 0)
			{
				$TabCount = [Math]::Ceiling($SpaceRun / [double]$CurrentSpacesPerTab)
				[void]$NewPrefixBuilder.Append("`t" * [int]$TabCount)
				$SpaceRun = 0
			}

			[void]$NewPrefixBuilder.Append("`t")
		}
		else
		{
			++$SpaceRun
		}
	}

	if ($SpaceRun -gt 0)
	{
		$TabCount = [Math]::Ceiling($SpaceRun / [double]$CurrentSpacesPerTab)
		[void]$NewPrefixBuilder.Append("`t" * [int]$TabCount)
	}

	return $NewPrefixBuilder.ToString() + $Rest
}

function Restore-TopCopyrightHeader
{
	param([string[]]$Lines)

	if ($Lines.Count -eq 0 -or $Lines[0] -ne "/*")
	{
		return $Lines
	}

	for ($Index = 1; $Index -lt $Lines.Count; ++$Index)
	{
		if ($Lines[$Index] -match '^[\t ]+\*/$')
		{
			$Lines[$Index] = " */"
			break
		}

		if ($Lines[$Index] -match '^[\t ]+\*')
		{
			$Lines[$Index] = " *" + $Lines[$Index].Substring($Matches[0].Length)
		}
	}

	return $Lines
}

$ProjectRoot = (Resolve-Path ".").Path
$ProjectRootWithSlash = $ProjectRoot.TrimEnd("\") + "\"
$Files = @()
foreach ($InputPath in $Path)
{
	$Files += Get-TargetFiles -InputPath $InputPath
}

$Files = $Files | Sort-Object -Property FullName -Unique
foreach ($File in $Files)
{
	if ($File.FullName.StartsWith($ProjectRootWithSlash, [System.StringComparison]::OrdinalIgnoreCase))
	{
		$RelativePath = $File.FullName.Substring($ProjectRootWithSlash.Length)
	}
	else
	{
		$RelativePath = $File.FullName
	}

	if (Test-ExcludedPath -RelativePath $RelativePath)
	{
		continue
	}

	$Original = [System.IO.File]::ReadAllText($File.FullName)
	$Normalized = [regex]::Replace($Original, '\r\n|\n|\r', $Lf)
	$Lines = $Normalized.Split([string[]]@($Lf), [System.StringSplitOptions]::None)
	$CurrentSpacesPerTab = if ($File.Extension.Equals(".xml", [System.StringComparison]::OrdinalIgnoreCase)) { $XmlSpacesPerTab } else { $SpacesPerTab }

	for ($LineIndex = 0; $LineIndex -lt $Lines.Count; ++$LineIndex)
	{
		$Lines[$LineIndex] = Convert-IndentPrefix -Line $Lines[$LineIndex] -CurrentSpacesPerTab $CurrentSpacesPerTab
	}

	$Lines = Restore-TopCopyrightHeader -Lines $Lines
	$NewText = [string]::Join($CrLf, $Lines)
	if ($NewText -ne $Original)
	{
		$Changed.Add($RelativePath)
		if (-not $CheckOnly)
		{
			[System.IO.File]::WriteAllBytes($File.FullName, $Utf8NoBom.GetBytes($NewText))
		}
	}
}

if ($CheckOnly)
{
	if ($Changed.Count -gt 0)
	{
		$Changed | ForEach-Object { Write-Host "Would change: $_" }
		exit 1
	}

	Write-Host "No formatting changes required for $($Files.Count) file(s)."
	exit 0
}

$Changed | ForEach-Object { Write-Host "Changed: $_" }
Write-Host "Normalized Windows text format for $($Changed.Count) file(s)."
