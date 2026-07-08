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

function Get-EditorTargetName
{
	param([string]$Line)

	foreach ($Configuration in $EditorConfigurations)
	{
		foreach ($Architecture in $Architectures)
		{
			$Needle = "'$Configuration|$Architecture'"
			if ($Line.Contains($Needle))
			{
				return "$Configuration|$Architecture"
			}
		}
	}

	return $null
}

function Update-CommandLine
{
	param(
		[string]$Line,
		[string]$ElementName
	)

	$ClosingTag = "</$ElementName>"
	$bHasNoEngineChanges = $Line.Contains("-NoEngineChanges")

	if ($Mode -eq "Apply" -and -not $bHasNoEngineChanges)
	{
		return @{
			Line = $Line.Replace($ClosingTag, " -NoEngineChanges$ClosingTag")
			Changed = $true
			HadFlag = $false
		}
	}

	if ($Mode -eq "Remove" -and $bHasNoEngineChanges)
	{
		return @{
			Line = ($Line -replace "\s+-NoEngineChanges(?=$ClosingTag)", "")
			Changed = $true
			HadFlag = $true
		}
	}

	return @{
		Line = $Line
		Changed = $false
		HadFlag = $bHasNoEngineChanges
	}
}

$Lines = [System.IO.File]::ReadAllLines($VcxprojPath)
$ChangedCount = 0
$MatchedTargets = New-Object System.Collections.Generic.List[string]
$TargetsWithNoEngineChanges = New-Object System.Collections.Generic.List[string]
$CurrentPropertyTarget = $null
$CurrentCompileTarget = $null

for ($Index = 0; $Index -lt $Lines.Length; ++$Index)
{
	$Line = $Lines[$Index]

	if ($Line -like "*<PropertyGroup Condition=*")
	{
		$CurrentPropertyTarget = Get-EditorTargetName -Line $Line
		if ($null -ne $CurrentPropertyTarget)
		{
			$MatchedTargets.Add($CurrentPropertyTarget)
		}
	}

	if ($Line -like "*<ItemDefinitionGroup Condition=*")
	{
		$CurrentCompileTarget = Get-EditorTargetName -Line $Line
		if ($null -ne $CurrentCompileTarget)
		{
			$MatchedTargets.Add($CurrentCompileTarget)
		}
	}

	if ($null -ne $CurrentPropertyTarget -and $Line.Contains("<NMakeBuildCommandLine>"))
	{
		$Result = Update-CommandLine -Line $Line -ElementName "NMakeBuildCommandLine"
		$Lines[$Index] = $Result.Line
		if ($Result.HadFlag)
		{
			$TargetsWithNoEngineChanges.Add("$CurrentPropertyTarget Build")
		}
		if ($Result.Changed)
		{
			++$ChangedCount
		}
	}

	if ($null -ne $CurrentPropertyTarget -and $Line.Contains("<NMakeReBuildCommandLine>"))
	{
		$Result = Update-CommandLine -Line $Line -ElementName "NMakeReBuildCommandLine"
		$Lines[$Index] = $Result.Line
		if ($Result.HadFlag)
		{
			$TargetsWithNoEngineChanges.Add("$CurrentPropertyTarget ReBuild")
		}
		if ($Result.Changed)
		{
			++$ChangedCount
		}
	}

	if ($null -ne $CurrentCompileTarget -and $Line.Contains("<NMakeCompileFileCommandLine>"))
	{
		$Result = Update-CommandLine -Line $Line -ElementName "NMakeCompileFileCommandLine"
		$Lines[$Index] = $Result.Line
		if ($Result.HadFlag)
		{
			$TargetsWithNoEngineChanges.Add("$CurrentCompileTarget CompileFile")
		}
		if ($Result.Changed)
		{
			++$ChangedCount
		}
	}

	if ($null -ne $CurrentPropertyTarget -and $Line.Contains("</PropertyGroup>"))
	{
		$CurrentPropertyTarget = $null
	}

	if ($null -ne $CurrentCompileTarget -and $Line.Contains("</ItemDefinitionGroup>"))
	{
		$CurrentCompileTarget = $null
	}
}

if ($Mode -ne "Check" -and $ChangedCount -gt 0)
{
	$Utf8NoBom = New-Object System.Text.UTF8Encoding($false)
	[System.IO.File]::WriteAllLines($VcxprojPath, $Lines, $Utf8NoBom)
}

$UniqueTargets = $MatchedTargets | Sort-Object -Unique
$UniqueGuardedTargets = $TargetsWithNoEngineChanges | Sort-Object -Unique

Write-Output "Checked $VcxprojPath"
Write-Output "Matched editor targets: $($UniqueTargets -join ', ')"
Write-Output "Entries with -NoEngineChanges before changes: $($UniqueGuardedTargets -join ', ')"
Write-Output "$Mode changed $ChangedCount command entr$(if ($ChangedCount -eq 1) { 'y' } else { 'ies' })."
