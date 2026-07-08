param(
	[string]$Endpoint = "http://127.0.0.1:18765/mcp",
	[string]$ProtocolVersion = "2025-11-25",
	[switch]$CreateProbeAsset,
	[string]$ProbePackagePath = "/Game/Audio/MetaSounds/MCP",
	[string]$ProbeAssetName = ("MS_MCP_MetaSoundProbe_" + (Get-Date -Format "yyyyMMddHHmmss"))
)

$ErrorActionPreference = "Stop"
$script:NextRequestId = 1
$Headers = @{
	"Mcp-Protocol-Version" = $ProtocolVersion
}

function ConvertFrom-McpResponse
{
	param(
		[Parameter(Mandatory = $true)]
		[object]$Response
	)

	$Content = [string]$Response.Content
	$DataLines = @()
	foreach ($Line in ($Content -split "`r?`n"))
	{
		if ($Line.StartsWith("data: "))
		{
			$DataLines += $Line.Substring(6)
		}
	}

	if ($DataLines.Count -gt 0)
	{
		$Content = ($DataLines -join "`n").Trim()
	}

	if ([string]::IsNullOrWhiteSpace($Content))
	{
		return $null
	}

	return $Content | ConvertFrom-Json
}

function New-McpRequestId
{
	$Id = $script:NextRequestId
	$script:NextRequestId++
	return $Id
}

function Invoke-McpRequest
{
	param(
		[Parameter(Mandatory = $true)]
		[string]$Method,
		[object]$Params = @{},
		[switch]$Notification
	)

	$Request = @{
		jsonrpc = "2.0"
		method = $Method
		params = $Params
	}
	if (-not $Notification)
	{
		$Request["id"] = New-McpRequestId
	}

	$Body = $Request | ConvertTo-Json -Depth 32
	$Response = Invoke-WebRequest -UseBasicParsing -Uri $Endpoint -Method Post -Headers $Headers -ContentType "application/json; charset=utf-8" -Body $Body
	$Json = ConvertFrom-McpResponse -Response $Response
	if ($Json -and $Json.error)
	{
		throw ($Json.error | ConvertTo-Json -Depth 16)
	}

	return $Json
}

function Invoke-McpTool
{
	param(
		[string]$ToolName,
		[hashtable]$Arguments = @{},
		[string]$ToolsetName = ""
	)

	$CallArguments = @{
		tool_name = $ToolName
		arguments = $Arguments
	}
	if (-not [string]::IsNullOrWhiteSpace($ToolsetName))
	{
		$CallArguments["toolset_name"] = $ToolsetName
	}

	$Response = Invoke-McpRequest -Method "tools/call" -Params @{
		name = "call_tool"
		arguments = $CallArguments
	}
	return $Response.result
}

function Get-McpText
{
	param(
		[object]$ToolResult
	)

	if (-not $ToolResult -or -not $ToolResult.content)
	{
		return ""
	}

	$Parts = @()
	foreach ($Item in $ToolResult.content)
	{
		if ($Item.type -eq "text")
		{
			$Parts += [string]$Item.text
		}
	}
	return ($Parts -join "`n")
}

Write-Host "Initializing MCP session: $Endpoint"
$InitRequest = @{
	jsonrpc = "2.0"
	id = New-McpRequestId
	method = "initialize"
	params = @{
		protocolVersion = $ProtocolVersion
		clientInfo = @{
			name = "unreal-metasound-skill"
			version = "1.0.0"
		}
		capabilities = @{}
	}
} | ConvertTo-Json -Depth 16

$InitResponse = Invoke-WebRequest -UseBasicParsing -Uri $Endpoint -Method Post -Headers $Headers -ContentType "application/json; charset=utf-8" -Body $InitRequest
$SessionId = @($InitResponse.Headers["Mcp-Session-Id"])[0]
if ([string]::IsNullOrWhiteSpace($SessionId))
{
	throw "MCP initialize did not return Mcp-Session-Id."
}

$Headers["Mcp-Session-Id"] = $SessionId
[void](Invoke-McpRequest -Method "notifications/initialized" -Params @{} -Notification)

$ToolsetName = "OrionProjectToolsets.OrionMetaSoundToolset"
$Toolsets = Invoke-McpTool -ToolName "list_toolsets"
$ToolsetText = Get-McpText -ToolResult $Toolsets
$HasMetaSoundToolset = $ToolsetText.Contains($ToolsetName)

Write-Host "MetaSound Toolset present: $HasMetaSoundToolset"
if (-not $HasMetaSoundToolset)
{
	Write-Host "Missing $ToolsetName. Build the project MCP plugin, restart Unreal Editor, then rerun this script."
	exit 2
}

$Description = Invoke-McpTool -ToolName "describe_toolset" -Arguments @{ toolset_name = $ToolsetName }
Write-Host "Toolset description:"
Write-Host (Get-McpText -ToolResult $Description)

if ($CreateProbeAsset)
{
	Write-Host "Creating probe MetaSound Source: $ProbePackagePath/$ProbeAssetName"
	$CreateResult = Invoke-McpTool -ToolsetName $ToolsetName -ToolName "CreateSourceAsset" -Arguments @{
		PackagePath = $ProbePackagePath
		AssetName = $ProbeAssetName
		OutputFormat = "Mono"
		bIsOneShot = $true
		bAddProjectAcousticsInterface = $true
		bSave = $true
	}
	Write-Host ($CreateResult | ConvertTo-Json -Depth 32)

	$ObjectPath = "$ProbePackagePath/$ProbeAssetName.$ProbeAssetName"
	Write-Host "Describing probe MetaSound Source: $ObjectPath"
	$DescribeResult = Invoke-McpTool -ToolsetName $ToolsetName -ToolName "DescribeAsset" -Arguments @{
		MetaSoundPath = $ObjectPath
	}
	Write-Host ($DescribeResult | ConvertTo-Json -Depth 32)
}
