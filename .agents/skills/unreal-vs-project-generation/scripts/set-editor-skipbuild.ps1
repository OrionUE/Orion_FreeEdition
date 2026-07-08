param(
	[ValidateSet("Check", "Apply", "Remove")]
	[string]$Mode = "Check",
	[string]$ProjectRoot = "",
	[string]$ProjectName = "",
	[string[]]$EditorConfigurations = @("Debug_Editor", "DebugGame_Editor", "Development_Editor"),
	[string[]]$Architectures = @("x64")
)

$ErrorActionPreference = "Stop"

if ([string]::IsNullOrWhiteSpace($ProjectRoot))
{
	$ProjectRoot = (Resolve-Path -LiteralPath (Join-Path $PSScriptRoot "..\..\..\..")).Path
}
else
{
	$ProjectRoot = (Resolve-Path -LiteralPath $ProjectRoot).Path
}

if ([string]::IsNullOrWhiteSpace($ProjectName))
{
	$ProjectFile = Get-ChildItem -LiteralPath $ProjectRoot -Filter "*.uproject" -File | Select-Object -First 1
	if ($null -eq $ProjectFile)
	{
		throw "No .uproject file found under $ProjectRoot"
	}

	$ProjectName = [System.IO.Path]::GetFileNameWithoutExtension($ProjectFile.Name)
}

$VcxprojPath = Join-Path $ProjectRoot "Intermediate\ProjectFiles\$ProjectName.vcxproj"
if (-not (Test-Path -LiteralPath $VcxprojPath))
{
	throw "Project file not found: $VcxprojPath"
}

$Lines = [System.IO.File]::ReadAllLines($VcxprojPath)
$ChangedCount = 0
$MatchedTargets = New-Object System.Collections.Generic.List[string]
$SkipBuildTargets = New-Object System.Collections.Generic.List[string]
$CurrentTarget = $null

for ($Index = 0; $Index -lt $Lines.Length; ++$Index)
{
	$Line = $Lines[$Index]

	if ($Line -like "*<PropertyGroup Condition=*")
	{
		$CurrentTarget = $null

		foreach ($Configuration in $EditorConfigurations)
		{
			foreach ($Architecture in $Architectures)
			{
				$Needle = "'$Configuration|$Architecture'"
				if ($Line.Contains($Needle))
				{
					$CurrentTarget = "$Configuration|$Architecture"
					$MatchedTargets.Add($CurrentTarget)
					break
				}
			}

			if ($null -ne $CurrentTarget)
			{
				break
			}
		}
	}

	if ($null -ne $CurrentTarget -and $Line.Contains("<NMakeBuildCommandLine>"))
	{
		$bHasSkipBuild = $Line.Contains("-SkipBuild")
		if ($bHasSkipBuild)
		{
			$SkipBuildTargets.Add($CurrentTarget)
		}

		if ($Mode -eq "Apply" -and -not $bHasSkipBuild)
		{
			$Lines[$Index] = $Line.Replace("</NMakeBuildCommandLine>", " -SkipBuild</NMakeBuildCommandLine>")
			++$ChangedCount
		}
		elseif ($Mode -eq "Remove" -and $bHasSkipBuild)
		{
			$Lines[$Index] = $Line -replace "\s+-SkipBuild(?=</NMakeBuildCommandLine>)", ""
			++$ChangedCount
		}
	}

	if ($null -ne $CurrentTarget -and $Line.Contains("</PropertyGroup>"))
	{
		$CurrentTarget = $null
	}
}

if ($Mode -ne "Check")
{
	$Utf8NoBom = New-Object System.Text.UTF8Encoding($false)
	[System.IO.File]::WriteAllLines($VcxprojPath, $Lines, $Utf8NoBom)
}

$UniqueTargets = $MatchedTargets | Sort-Object -Unique
$UniqueSkipBuildTargets = $SkipBuildTargets | Sort-Object -Unique

Write-Output "Checked $VcxprojPath"
Write-Output "Matched editor targets: $($UniqueTargets -join ', ')"
Write-Output "Targets with -SkipBuild before changes: $($UniqueSkipBuildTargets -join ', ')"
Write-Output "$Mode changed $ChangedCount NMakeBuildCommandLine entr$(if ($ChangedCount -eq 1) { 'y' } else { 'ies' })."
