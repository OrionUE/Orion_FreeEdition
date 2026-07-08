param(
	[Parameter(Mandatory = $true)]
	[string]$ProjectRoot,

	[switch]$AsCookCultures,

	[switch]$AsJsonArray
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

$script:SeenCultures = @{}
$script:ResolvedCultures = New-Object System.Collections.Generic.List[string]

function Add-Culture
{
	param(
		[Parameter(Mandatory = $true)]
		[string]$Culture
	)

	$Value = $Culture.Trim().Trim('"').Trim("'")
	if ([string]::IsNullOrWhiteSpace($Value))
	{
		return
	}

	if ($Value -notmatch '^[a-zA-Z]{2,3}(-[a-zA-Z0-9]{2,8})*$')
	{
		return
	}

	if (-not $script:SeenCultures.ContainsKey($Value))
	{
		$script:SeenCultures[$Value] = $true
		$script:ResolvedCultures.Add($Value) | Out-Null
	}
}

$ProjectRootFullPath = $ExecutionContext.SessionState.Path.GetUnresolvedProviderPathFromPSPath($ProjectRoot)
$DefaultGamePath = Join-Path $ProjectRootFullPath "Config\DefaultGame.ini"

if (Test-Path -LiteralPath $DefaultGamePath)
{
	foreach ($Line in [System.IO.File]::ReadLines($DefaultGamePath))
	{
		if ($Line -match '^\s*-CulturesToStage\s*=')
		{
			continue
		}

		if ($Line -match '^\s*\+?CulturesToStage\s*=\s*(.+?)\s*$')
		{
			Add-Culture -Culture $Matches[1]
		}
	}
}

$LocalizationRoot = Join-Path $ProjectRootFullPath "Content\Localization"
if (Test-Path -LiteralPath $LocalizationRoot)
{
	$LocalizationRootFullPath = $ExecutionContext.SessionState.Path.GetUnresolvedProviderPathFromPSPath($LocalizationRoot)
	$LocalizationItems = Get-ChildItem -LiteralPath $LocalizationRootFullPath -Recurse -Force -ErrorAction SilentlyContinue

	foreach ($Item in $LocalizationItems)
	{
		if ($Item.PSIsContainer)
		{
			Add-Culture -Culture $Item.Name
			continue
		}

		$RelativeDirectory = $Item.DirectoryName.Substring($LocalizationRootFullPath.Length).TrimStart([char]'\', [char]'/')
		if (-not [string]::IsNullOrWhiteSpace($RelativeDirectory))
		{
			foreach ($Segment in ($RelativeDirectory -split '[\\/]'))
			{
				Add-Culture -Culture $Segment
			}
		}

		Add-Culture -Culture ([System.IO.Path]::GetFileNameWithoutExtension($Item.Name))
	}
}

if ($script:ResolvedCultures.Count -eq 0)
{
	Add-Culture -Culture "en"
	Add-Culture -Culture "zh-Hans"
}

$Cultures = $script:ResolvedCultures.ToArray()

if ($AsJsonArray)
{
	ConvertTo-Json -InputObject $Cultures -Compress
	return
}

if ($AsCookCultures)
{
	[string]::Join("+", $Cultures)
	return
}

$Cultures
