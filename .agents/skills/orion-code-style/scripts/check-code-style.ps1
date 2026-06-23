param(
	[Parameter(Mandatory=$true, Position=0)]
	[string[]]$Path
)

$ErrorActionPreference = "Stop"
$ProjectRoot = (Resolve-Path (Join-Path $PSScriptRoot "..\..\..\..")).Path
$DefaultGamePath = Join-Path $ProjectRoot "Config\DefaultGame.ini"
$HeaderConfigPath = Join-Path $PSScriptRoot "..\config\copyright-header.json"

$CodeExtensions = @(".h", ".cpp", ".cs", ".ps1")
$HeaderExtensions = @(".h", ".cpp", ".cs")
$Failures = New-Object System.Collections.Generic.List[string]

function Add-Failure
{
	param(
		[string]$File,
		[string]$Message
	)

	$Failures.Add("${File}: ${Message}")
}

function Get-DefaultCopyrightNotice
{
	if (-not (Test-Path -LiteralPath $DefaultGamePath))
	{
		return $null
	}

	$CopyrightLine = Get-Content -LiteralPath $DefaultGamePath | Where-Object { $_ -match '^CopyrightNotice\s*=' } | Select-Object -First 1
	if (-not $CopyrightLine)
	{
		return $null
	}

	return ($CopyrightLine -replace '^CopyrightNotice\s*=', '').Trim()
}

function Set-HeaderField
{
	param(
		[hashtable]$Fields,
		[string]$Name,
		[object]$Value
	)

	if ([string]::IsNullOrWhiteSpace($Name) -or $null -eq $Value)
	{
		return
	}

	$StringValue = [string]$Value
	if (-not [string]::IsNullOrWhiteSpace($StringValue))
	{
		$Fields[$Name] = $StringValue
	}
}

function Expand-HeaderTemplate
{
	param(
		[string]$Template,
		[hashtable]$Fields
	)

	$Result = $Template
	foreach ($Key in $Fields.Keys)
	{
		$Pattern = "\{" + [regex]::Escape($Key) + "\}"
		$Result = [regex]::Replace($Result, $Pattern, [string]$Fields[$Key])
	}

	return ($Result -replace "`r?`n", "`n").TrimEnd("`r", "`n")
}

function Get-ExpectedCopyrightHeader
{
	$Fields = @{}
	$DefaultCopyright = Get-DefaultCopyrightNotice
	Set-HeaderField -Fields $Fields -Name "CopyrightNotice" -Value $DefaultCopyright

	$Template = $null
	if (Test-Path -LiteralPath $HeaderConfigPath)
	{
		$Config = Get-Content -LiteralPath $HeaderConfigPath -Raw | ConvertFrom-Json
		if ($Config.PSObject.Properties.Name -contains "template")
		{
			$Template = [string]$Config.template
		}

		if ($Config.PSObject.Properties.Name -contains "fields")
		{
			foreach ($Property in $Config.fields.PSObject.Properties)
			{
				Set-HeaderField -Fields $Fields -Name $Property.Name -Value $Property.Value
			}
		}
	}

	if ([string]::IsNullOrWhiteSpace($Template))
	{
		if ($Fields.ContainsKey("CopyrightNotice"))
		{
			return [pscustomobject]@{
				Kind = "CopyrightNotice"
				Text = $Fields["CopyrightNotice"]
			}
		}

		return $null
	}

	$HeaderText = Expand-HeaderTemplate -Template $Template -Fields $Fields
	if ($HeaderText -match '\{[A-Za-z_][A-Za-z0-9_]*\}')
	{
		throw "Unresolved placeholder in copyright header config: $HeaderText"
	}

	return [pscustomobject]@{
		Kind = "Template"
		Text = $HeaderText
	}
}

function Get-TargetFiles
{
	param([string]$InputPath)

	$Resolved = Resolve-Path -LiteralPath $InputPath
	foreach ($Item in $Resolved)
	{
		if (Test-Path -LiteralPath $Item.Path -PathType Container)
		{
			Get-ChildItem -LiteralPath $Item.Path -Recurse -File | Where-Object { $CodeExtensions -contains $_.Extension }
		}
		else
		{
			$FileItem = Get-Item -LiteralPath $Item.Path
			if ($CodeExtensions -contains $FileItem.Extension)
			{
				$FileItem
			}
		}
	}
}

function Test-CodeFileEnding
{
	param(
		[System.IO.FileInfo]$File,
		[string]$RelativePath,
		[byte[]]$Bytes,
		[string]$Text
	)

	if ($Bytes.Length -eq 0)
	{
		return
	}

	$EndsWithCrLf = $Bytes.Length -ge 2 -and $Bytes[$Bytes.Length - 2] -eq 13 -and $Bytes[$Bytes.Length - 1] -eq 10
	if (-not $EndsWithCrLf)
	{
		Add-Failure -File $RelativePath -Message "must end with a single CRLF newline"
		return
	}

	$NormalizedText = $Text -replace "`r?`n", "`n"
	if ($NormalizedText -match "`n`n$")
	{
		Add-Failure -File $RelativePath -Message "has extra blank lines at end of file; keep only one final newline"
	}
}

function Test-NamespaceIndentation
{
	param(
		[string]$RelativePath,
		[string]$Text
	)

	$Lines = $Text -split "`r?`n"
	$NamespaceDepths = New-Object System.Collections.Generic.List[int]
	$BraceDepth = 0
	$PendingNamespace = $false

	for ($LineIndex = 0; $LineIndex -lt $Lines.Count; ++$LineIndex)
	{
		$Line = $Lines[$LineIndex]
		$Trimmed = $Line.Trim()
		$LineNumber = $LineIndex + 1
		$StartedPendingNamespace = $false

		if ($NamespaceDepths.Count -gt 0 -and -not [string]::IsNullOrWhiteSpace($Line))
		{
			$IsNamespaceBoundary = $Trimmed -match '^}\s*(//.*)?$'
			$IsPreprocessor = $Trimmed.StartsWith("#")
			if (-not $Line.StartsWith("`t") -and -not $IsNamespaceBoundary -and -not $IsPreprocessor)
			{
				Add-Failure -File $RelativePath -Message "line $LineNumber is inside a namespace but is not Tab-indented"
				return
			}
		}

		$StartsNamespaceWithBrace = $false
		if ($Trimmed -match '^namespace(\s+[A-Za-z_][A-Za-z0-9_:]*)?\s*\{')
		{
			$StartsNamespaceWithBrace = $true
			$PendingNamespace = $false
		}
		elseif ($Trimmed -match '^namespace(\s+[A-Za-z_][A-Za-z0-9_:]*)?\s*(//.*)?$')
		{
			$PendingNamespace = $true
			$StartedPendingNamespace = $true
		}

		$OpenCount = ([regex]::Matches($Line, '\{')).Count
		$CloseCount = ([regex]::Matches($Line, '\}')).Count

		if ($PendingNamespace -and $Trimmed -eq "{")
		{
			$NamespaceDepths.Add($BraceDepth + 1)
			$PendingNamespace = $false
		}
		elseif ($StartsNamespaceWithBrace -and $OpenCount -gt 0)
		{
			$NamespaceDepths.Add($BraceDepth + 1)
		}
		elseif ($PendingNamespace -and -not $StartedPendingNamespace -and -not [string]::IsNullOrWhiteSpace($Trimmed))
		{
			$PendingNamespace = $false
		}

		$BraceDepth += $OpenCount - $CloseCount
		while ($NamespaceDepths.Count -gt 0 -and $BraceDepth -lt $NamespaceDepths[$NamespaceDepths.Count - 1])
		{
			$NamespaceDepths.RemoveAt($NamespaceDepths.Count - 1)
		}
	}
}

function Test-GeneratedHeaderLayout
{
	param(
		[string]$RelativePath,
		[string]$Text
	)

	$Lines = $Text -split "`r?`n"
	$GeneratedIncludeIndexes = New-Object System.Collections.Generic.List[int]

	for ($LineIndex = 0; $LineIndex -lt $Lines.Count; ++$LineIndex)
	{
		if ($Lines[$LineIndex] -match '^\s*#\s*include\s+"[^"]+\.generated\.h"')
		{
			$GeneratedIncludeIndexes.Add($LineIndex)
		}
	}

	if ($GeneratedIncludeIndexes.Count -eq 0)
	{
		return
	}

	if ($GeneratedIncludeIndexes.Count -gt 1)
	{
		Add-Failure -File $RelativePath -Message "contains multiple .generated.h includes"
		return
	}

	$GeneratedIndex = $GeneratedIncludeIndexes[0]
	for ($LineIndex = $GeneratedIndex + 1; $LineIndex -lt $Lines.Count; ++$LineIndex)
	{
		if ($Lines[$LineIndex] -match '^\s*#\s*include\s+')
		{
			$LineNumber = $LineIndex + 1
			Add-Failure -File $RelativePath -Message "line $LineNumber includes a header after .generated.h; keep .generated.h as the final include"
			return
		}
	}

	if ($GeneratedIndex -gt 0 -and -not [string]::IsNullOrWhiteSpace($Lines[$GeneratedIndex - 1]))
	{
		$LineNumber = $GeneratedIndex + 1
		Add-Failure -File $RelativePath -Message "line $LineNumber must be separated from regular includes by a blank line before .generated.h"
		return
	}

	if ($GeneratedIndex + 1 -lt $Lines.Count -and -not [string]::IsNullOrWhiteSpace($Lines[$GeneratedIndex + 1]))
	{
		$LineNumber = $GeneratedIndex + 1
		Add-Failure -File $RelativePath -Message "line $LineNumber must be followed by a blank line before declarations"
		return
	}
}

function Test-IsGitNewFile
{
	param([string]$RelativePath)

	$GitStatus = & git -C $ProjectRoot status --porcelain -- $RelativePath 2>$null
	if ($LASTEXITCODE -ne 0 -or -not $GitStatus)
	{
		return $false
	}

	foreach ($Line in $GitStatus)
	{
		if ($Line.StartsWith("??"))
		{
			return $true
		}

		if ($Line.Length -ge 2 -and ($Line[0] -eq 'A' -or $Line[1] -eq 'A'))
		{
			return $true
		}
	}

	return $false
}

$Files = @()
foreach ($InputPath in $Path)
{
	$Files += Get-TargetFiles -InputPath $InputPath
}

$Files = $Files | Sort-Object -Property FullName -Unique
$ExpectedHeader = Get-ExpectedCopyrightHeader

foreach ($File in $Files)
{
	$Bytes = [System.IO.File]::ReadAllBytes($File.FullName)
	$Text = [System.Text.Encoding]::UTF8.GetString($Bytes)
	$ProjectRootWithSlash = $ProjectRoot.TrimEnd('\') + '\'
	if ($File.FullName.StartsWith($ProjectRootWithSlash, [System.StringComparison]::OrdinalIgnoreCase))
	{
		$RelativePath = $File.FullName.Substring($ProjectRootWithSlash.Length)
	}
	else
	{
		$RelativePath = $File.FullName
	}

	$HasLoneLf = $false
	for ($Index = 0; $Index -lt $Bytes.Length; ++$Index)
	{
		if ($Bytes[$Index] -eq 10 -and ($Index -eq 0 -or $Bytes[$Index - 1] -ne 13))
		{
			$HasLoneLf = $true
			break
		}
	}
	if ($HasLoneLf)
	{
		Add-Failure -File $RelativePath -Message "contains LF-only line endings"
	}

	if ($CodeExtensions -contains $File.Extension)
	{
		Test-CodeFileEnding -File $File -RelativePath $RelativePath -Bytes $Bytes -Text $Text
	}

	$Lines = $Text -split "`r?`n"
	for ($LineIndex = 0; $LineIndex -lt $Lines.Count; ++$LineIndex)
	{
		$Line = $Lines[$LineIndex]
		if ($Line -match '^ +\S' -and $Line -notmatch '^ \*')
		{
			$LineNumber = $LineIndex + 1
			Add-Failure -File $RelativePath -Message "line $LineNumber contains indentation that starts with spaces; use Tab indentation"
			break
		}
	}

	if ($File.Extension -in @(".h", ".cpp"))
	{
		Test-NamespaceIndentation -RelativePath $RelativePath -Text $Text
	}

	if ($File.Extension -eq ".h")
	{
		Test-GeneratedHeaderLayout -RelativePath $RelativePath -Text $Text
	}

	if ($Text -match '(?m)TODO:\s*$')
	{
		Add-Failure -File $RelativePath -Message "contains empty TODO placeholder"
	}

	if (($HeaderExtensions -contains $File.Extension) -and $ExpectedHeader -and $ExpectedHeader.Text -and $Text.Length -gt 0 -and (Test-IsGitNewFile -RelativePath $RelativePath))
	{
		$NormalizedHeader = $ExpectedHeader.Text -replace "`r?`n", "`n"
		$HeaderLineCount = ($NormalizedHeader -split "`n").Count + 2
		$FirstLines = (($Text -replace "`r?`n", "`n") -split "`n" | Select-Object -First $HeaderLineCount) -join "`n"
		if (-not $FirstLines.Contains($NormalizedHeader))
		{
			Add-Failure -File $RelativePath -Message "new code file header does not include expected copyright header from config/default"
		}
	}
}

if ($Failures.Count -gt 0)
{
	$Failures | ForEach-Object { Write-Error $_ }
	exit 1
}

Write-Host "Orion code style check passed for $($Files.Count) file(s)."
