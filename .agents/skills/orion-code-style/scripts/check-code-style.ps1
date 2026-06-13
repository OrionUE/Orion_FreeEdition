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

	if ($Text -match '(?m)TODO:\s*$')
	{
		Add-Failure -File $RelativePath -Message "contains empty TODO placeholder"
	}

	if (($HeaderExtensions -contains $File.Extension) -and $ExpectedHeader -and $ExpectedHeader.Text -and $Text.Length -gt 0)
	{
		$NormalizedHeader = $ExpectedHeader.Text -replace "`r?`n", "`n"
		$HeaderLineCount = ($NormalizedHeader -split "`n").Count + 2
		$FirstLines = (($Text -replace "`r?`n", "`n") -split "`n" | Select-Object -First $HeaderLineCount) -join "`n"
		if (-not $FirstLines.Contains($NormalizedHeader))
		{
			Add-Failure -File $RelativePath -Message "header does not include expected copyright header from config/default"
		}
	}
}

if ($Failures.Count -gt 0)
{
	$Failures | ForEach-Object { Write-Error $_ }
	exit 1
}

Write-Host "Orion code style check passed for $($Files.Count) file(s)."
