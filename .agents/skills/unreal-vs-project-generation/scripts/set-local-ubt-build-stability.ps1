param(
	[ValidateSet("Check", "Apply", "Remove")]
	[string]$Mode = "Check",
	[string]$ProjectRoot = "",
	[int]$MaxParallelActions = 8
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

$ConfigPath = Join-Path $ProjectRoot "Saved\UnrealBuildTool\BuildConfiguration.xml"
$NamespaceUri = "https://www.unrealengine.com/BuildConfiguration"

function New-UbtBuildConfigurationDocument
{
	$Document = New-Object System.Xml.XmlDocument
	$Declaration = $Document.CreateXmlDeclaration("1.0", "utf-8", $null)
	[void]$Document.AppendChild($Declaration)
	$Root = $Document.CreateElement("Configuration", $NamespaceUri)
	[void]$Document.AppendChild($Root)
	return $Document
}

function Save-UbtBuildConfigurationDocument
{
	param(
		[System.Xml.XmlDocument]$Document,
		[string]$Path
	)

	$Directory = Split-Path -Parent $Path
	if (-not (Test-Path -LiteralPath $Directory))
	{
		New-Item -ItemType Directory -Path $Directory | Out-Null
	}

	$Settings = New-Object System.Xml.XmlWriterSettings
	$Settings.Encoding = New-Object System.Text.UTF8Encoding($false)
	$Settings.Indent = $true
	$Settings.NewLineChars = "`r`n"
	$Settings.NewLineHandling = [System.Xml.NewLineHandling]::Replace

	$Writer = [System.Xml.XmlWriter]::Create($Path, $Settings)
	try
	{
		$Document.Save($Writer)
	}
	finally
	{
		$Writer.Close()
	}
}

if (Test-Path -LiteralPath $ConfigPath)
{
	$Document = New-Object System.Xml.XmlDocument
	$Document.PreserveWhitespace = $false
	$Document.Load($ConfigPath)
}
else
{
	$Document = New-UbtBuildConfigurationDocument
}

$NamespaceManager = New-Object System.Xml.XmlNamespaceManager($Document.NameTable)
$NamespaceManager.AddNamespace("ubt", $NamespaceUri)

$Root = $Document.DocumentElement
if ($null -eq $Root -or $Root.LocalName -ne "Configuration")
{
	throw "Invalid UBT BuildConfiguration root in $ConfigPath"
}

$BuildConfigurationNode = $Root.SelectSingleNode("ubt:BuildConfiguration", $NamespaceManager)
if ($null -eq $BuildConfigurationNode -and $Mode -eq "Apply")
{
	$BuildConfigurationNode = $Document.CreateElement("BuildConfiguration", $NamespaceUri)
	[void]$Root.AppendChild($BuildConfigurationNode)
}

$DesiredValues = [ordered]@{
	"bAllowUBAExecutor" = "false"
	"bAllowXGE" = "false"
	"MaxParallelActions" = [string]$MaxParallelActions
}

$CurrentValues = [ordered]@{}
foreach ($Name in $DesiredValues.Keys)
{
	$CurrentNode = $null
	if ($null -ne $BuildConfigurationNode)
	{
		$CurrentNode = $BuildConfigurationNode.SelectSingleNode("ubt:$Name", $NamespaceManager)
	}

	$CurrentValues[$Name] = if ($null -ne $CurrentNode) { $CurrentNode.InnerText } else { "<missing>" }
}

$ChangedCount = 0
if ($Mode -eq "Apply")
{
	foreach ($Name in $DesiredValues.Keys)
	{
		$Node = $BuildConfigurationNode.SelectSingleNode("ubt:$Name", $NamespaceManager)
		if ($null -eq $Node)
		{
			$Node = $Document.CreateElement($Name, $NamespaceUri)
			[void]$BuildConfigurationNode.AppendChild($Node)
		}

		if ($Node.InnerText -ne $DesiredValues[$Name])
		{
			$Node.InnerText = $DesiredValues[$Name]
			++$ChangedCount
		}
	}
}
elseif ($Mode -eq "Remove" -and $null -ne $BuildConfigurationNode)
{
	foreach ($Name in $DesiredValues.Keys)
	{
		$Node = $BuildConfigurationNode.SelectSingleNode("ubt:$Name", $NamespaceManager)
		if ($null -ne $Node)
		{
			[void]$BuildConfigurationNode.RemoveChild($Node)
			++$ChangedCount
		}
	}

	if (-not $BuildConfigurationNode.HasChildNodes)
	{
		[void]$Root.RemoveChild($BuildConfigurationNode)
	}
}

if ($Mode -ne "Check" -and $ChangedCount -gt 0)
{
	Save-UbtBuildConfigurationDocument -Document $Document -Path $ConfigPath
}

Write-Output "Checked $ConfigPath"
foreach ($Name in $DesiredValues.Keys)
{
	Write-Output "$Name before: $($CurrentValues[$Name]); desired: $($DesiredValues[$Name])"
}
Write-Output "$Mode changed $ChangedCount BuildConfiguration entr$(if ($ChangedCount -eq 1) { 'y' } else { 'ies' })."
