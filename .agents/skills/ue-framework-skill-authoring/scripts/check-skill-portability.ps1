param(
	[Parameter(Mandatory = $true)]
	[string]$Path,

	[string[]]$BannedLiteral = @(),

	[switch]$CheckCRLF,

	[switch]$RequireRouting
)

$ErrorActionPreference = 'Stop'

if (-not (Test-Path -LiteralPath $Path -PathType Container))
{
	throw "Skill path does not exist: $Path"
}

$Root = (Resolve-Path -LiteralPath $Path).Path
$RootWithSeparator = $Root.TrimEnd([char[]]@(
	[System.IO.Path]::DirectorySeparatorChar,
	[System.IO.Path]::AltDirectorySeparatorChar
)) + [System.IO.Path]::DirectorySeparatorChar
$AllowedExtensions = @('.md', '.yaml', '.yml', '.ps1', '.py', '.json', '.txt')
$Files = Get-ChildItem -LiteralPath $Root -Recurse -File | Where-Object {
	$AllowedExtensions -contains $_.Extension.ToLowerInvariant()
}

$Findings = New-Object System.Collections.Generic.List[object]
$PathPatterns = @(
	@{ Name = 'windows-drive-path'; Regex = '(?<![A-Za-z0-9_])[A-Za-z]:[\\/][^\s\)`"''<>]+' },
	@{ Name = 'unc-path'; Regex = '\\\\[^\\/\s]+[\\/][^\\/\s]+' },
	@{ Name = 'unix-home-path'; Regex = '/(Users|home)/[^/\s\)`"''<>]+' }
)

foreach ($File in $Files)
{
	if ($File.FullName.StartsWith($RootWithSeparator, [System.StringComparison]::OrdinalIgnoreCase))
	{
		$Relative = $File.FullName.Substring($RootWithSeparator.Length)
	}
	else
	{
		$Relative = $File.FullName
	}

	$Bytes = [System.IO.File]::ReadAllBytes($File.FullName)
	$Text = [System.Text.Encoding]::UTF8.GetString($Bytes)
	$Lines = $Text -split "`r?`n"

	for ($Index = 0; $Index -lt $Lines.Count; $Index++)
	{
		$Line = $Lines[$Index]
		$LineNumber = $Index + 1

		foreach ($Pattern in $PathPatterns)
		{
			if ([System.Text.RegularExpressions.Regex]::IsMatch($Line, $Pattern.Regex))
			{
				$Findings.Add([pscustomobject]@{
					File = $Relative
					Line = $LineNumber
					Kind = $Pattern.Name
					Text = $Line.Trim()
				})
			}
		}

		foreach ($Literal in $BannedLiteral)
		{
			if ([string]::IsNullOrWhiteSpace($Literal))
			{
				continue
			}

			if ($Line.IndexOf($Literal, [System.StringComparison]::OrdinalIgnoreCase) -ge 0)
			{
				$Findings.Add([pscustomobject]@{
					File = $Relative
					Line = $LineNumber
					Kind = 'banned-literal'
					Text = $Line.Trim()
				})
			}
		}
	}

	if ($CheckCRLF -and ($Text -match "(?<!`r)`n"))
	{
		$Findings.Add([pscustomobject]@{
			File = $Relative
			Line = 0
			Kind = 'lone-lf'
			Text = 'File contains LF without CR.'
		})
	}
}

if ($RequireRouting)
{
	$SkillFile = Join-Path $Root 'SKILL.md'
	if (-not (Test-Path -LiteralPath $SkillFile -PathType Leaf))
	{
		$Findings.Add([pscustomobject]@{
			File = 'SKILL.md'
			Line = 0
			Kind = 'missing-skill-md'
			Text = 'SKILL.md is required.'
		})
	}
	else
	{
		$SkillText = [System.IO.File]::ReadAllText($SkillFile)
		$ChineseRoutingTitle = [string]([char]0x8DEF) + [string]([char]0x7531)
		$ChineseRoutingPattern = '(?m)^##\s+' + [System.Text.RegularExpressions.Regex]::Escape($ChineseRoutingTitle) + '\s*$'
		$EnglishRoutingPattern = '(?m)^##\s+Routing\s*$'

		if (($SkillText -notmatch $ChineseRoutingPattern) -and ($SkillText -notmatch $EnglishRoutingPattern))
		{
			$Findings.Add([pscustomobject]@{
				File = 'SKILL.md'
				Line = 0
				Kind = 'missing-routing-section'
				Text = 'SKILL.md must contain a routing section.'
			})
		}
	}
}

if ($Findings.Count -gt 0)
{
	$Findings | Format-Table -AutoSize | Out-String | Write-Host
	throw "Portability check failed with $($Findings.Count) finding(s)."
}

Write-Host "OK: $($Files.Count) file(s) checked."
