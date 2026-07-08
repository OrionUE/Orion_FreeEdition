param()

$ErrorActionPreference = "Stop"

function Invoke-UnrealTextureMcpRawJsonRpc
{
	param(
		[Parameter(Mandatory=$true)]
		[string]$Endpoint,
		[Parameter(Mandatory=$true)]
		[hashtable]$Headers,
		[Parameter(Mandatory=$true)]
		[hashtable]$Body,
		[int]$TimeoutSec = 300
	)

	$JsonBody = $Body | ConvertTo-Json -Depth 100 -Compress
	$Response = Invoke-WebRequest `
		-Uri $Endpoint `
		-Method Post `
		-Headers $Headers `
		-ContentType "application/json" `
		-Body $JsonBody `
		-TimeoutSec $TimeoutSec `
		-UseBasicParsing

	$ContentText = [string]$Response.Content
	if ([string]::IsNullOrWhiteSpace($ContentText))
	{
		return $null
	}

	$Payloads = New-Object System.Collections.Generic.List[string]
	foreach ($Line in ($ContentText -split "`r?`n"))
	{
		if ($Line -match '^data:\s*(.+)$')
		{
			$Payloads.Add($Matches[1])
		}
	}

	if ($Payloads.Count -gt 0)
	{
		$LastObject = $null
		foreach ($Payload in $Payloads)
		{
			if ($Payload -eq "[DONE]")
			{
				continue
			}
			$LastObject = $Payload | ConvertFrom-Json
		}
		return $LastObject
	}

	return ([string]$Response.Content | ConvertFrom-Json)
}

function New-UnrealTextureMcpSession
{
	param(
		[string]$Endpoint = "http://127.0.0.1:18765/mcp",
		[int]$TimeoutSec = 300
	)

	$Headers = @{
		"Accept" = "application/json, text/event-stream"
		"Mcp-Protocol-Version" = "2025-11-25"
	}

	$InitializeBody = @{
		jsonrpc = "2.0"
		id = 1
		method = "initialize"
		params = @{
			protocolVersion = "2025-11-25"
			capabilities = @{}
			clientInfo = @{
				name = "orion-unreal-texture-management"
				version = "1.0.0"
			}
		}
	}

	$JsonBody = $InitializeBody | ConvertTo-Json -Depth 100 -Compress
	$InitializeResponse = Invoke-WebRequest `
		-Uri $Endpoint `
		-Method Post `
		-Headers $Headers `
		-ContentType "application/json" `
		-Body $JsonBody `
		-TimeoutSec $TimeoutSec `
		-UseBasicParsing

	$SessionHeader = $InitializeResponse.Headers["Mcp-Session-Id"]
	if ($SessionHeader -is [array])
	{
		$SessionHeader = $SessionHeader[0]
	}
	if ([string]::IsNullOrWhiteSpace([string]$SessionHeader))
	{
		throw "MCP initialize response did not include Mcp-Session-Id."
	}

	$Headers["Mcp-Session-Id"] = [string]$SessionHeader
	$NotificationBody = @{
		jsonrpc = "2.0"
		method = "notifications/initialized"
		params = @{}
	}
	Invoke-UnrealTextureMcpRawJsonRpc -Endpoint $Endpoint -Headers $Headers -Body $NotificationBody -TimeoutSec $TimeoutSec | Out-Null

	return [pscustomobject]@{
		Endpoint = $Endpoint
		Headers = $Headers
		NextId = 2
		TimeoutSec = $TimeoutSec
	}
}

function Invoke-UnrealTextureMcpTool
{
	param(
		[Parameter(Mandatory=$true)]
		[pscustomobject]$Session,
		[Parameter(Mandatory=$true)]
		[string]$Name,
		[hashtable]$Arguments = @{}
	)

	$Body = @{
		jsonrpc = "2.0"
		id = $Session.NextId
		method = "tools/call"
		params = @{
			name = $Name
			arguments = $Arguments
		}
	}
	$Session.NextId = $Session.NextId + 1
	$Result = Invoke-UnrealTextureMcpRawJsonRpc -Endpoint $Session.Endpoint -Headers $Session.Headers -Body $Body -TimeoutSec $Session.TimeoutSec
	if ($Result.PSObject.Properties.Name -contains "error")
	{
		throw ($Result.error | ConvertTo-Json -Depth 20 -Compress)
	}
	return $Result.result
}

function Get-UnrealTextureMcpToolNames
{
	param(
		[Parameter(Mandatory=$true)]
		[pscustomobject]$Session
	)

	$Body = @{
		jsonrpc = "2.0"
		id = $Session.NextId
		method = "tools/list"
		params = @{}
	}
	$Session.NextId = $Session.NextId + 1
	$Result = Invoke-UnrealTextureMcpRawJsonRpc -Endpoint $Session.Endpoint -Headers $Session.Headers -Body $Body -TimeoutSec $Session.TimeoutSec
	if ($Result.PSObject.Properties.Name -contains "error")
	{
		throw ($Result.error | ConvertTo-Json -Depth 20 -Compress)
	}
	return @($Result.result.tools | ForEach-Object { [string]$_.name })
}

function ConvertFrom-UnrealTextureMcpToolResult
{
	param([object]$Result)

	$Candidates = New-Object System.Collections.Generic.List[object]
	if ($null -eq $Result)
	{
		return $null
	}

	if ($Result.PSObject.Properties.Name -contains "structuredContent")
	{
		$Candidates.Add($Result.structuredContent)
	}
	if ($Result.PSObject.Properties.Name -contains "returnValue")
	{
		$Candidates.Add($Result.returnValue)
	}
	if ($Result.PSObject.Properties.Name -contains "content")
	{
		foreach ($ContentItem in @($Result.content))
		{
			if ($ContentItem.PSObject.Properties.Name -contains "text")
			{
				$Candidates.Add([string]$ContentItem.text)
			}
		}
	}

	foreach ($Candidate in $Candidates)
	{
		if ($Candidate -is [string])
		{
			$Text = [string]$Candidate
			for ($Index = 0; $Index -lt 2; ++$Index)
			{
				try
				{
					$Parsed = $Text | ConvertFrom-Json
					if ($Parsed -is [string])
					{
						$Text = [string]$Parsed
						continue
					}
					return $Parsed
				}
				catch
				{
					break
				}
			}
			return $Candidate
		}
		if ($null -ne $Candidate)
		{
			return $Candidate
		}
	}

	return $Result
}

function Invoke-UnrealTextureMcpProgrammaticScript
{
	param(
		[Parameter(Mandatory=$true)]
		[string]$Script,
		[string]$Endpoint = "http://127.0.0.1:18765/mcp",
		[int]$TimeoutSec = 300
	)

	$Session = New-UnrealTextureMcpSession -Endpoint $Endpoint -TimeoutSec $TimeoutSec
	$ToolNames = Get-UnrealTextureMcpToolNames -Session $Session
	$ProgrammaticExecuteTool = @($ToolNames | Where-Object { $_ -match 'ProgrammaticToolset\.execute_tool_script$' } | Select-Object -First 1)

	if (-not $ProgrammaticExecuteTool -and ($ToolNames -contains "load_toolset"))
	{
		$CandidateToolsets = @(
			"editor_toolset.toolsets.programmatic.ProgrammaticToolset",
			"toolset_registry.toolsets.programmatic.ProgrammaticToolset",
			"ToolsetRegistry.ProgrammaticToolset"
		)
		foreach ($Candidate in $CandidateToolsets)
		{
			try
			{
				Invoke-UnrealTextureMcpTool -Session $Session -Name "load_toolset" -Arguments @{ toolset_name = $Candidate } | Out-Null
				break
			}
			catch
			{
			}
		}
		$ToolNames = Get-UnrealTextureMcpToolNames -Session $Session
		$ProgrammaticExecuteTool = @($ToolNames | Where-Object { $_ -match 'ProgrammaticToolset\.execute_tool_script$' } | Select-Object -First 1)
	}

	if ($ProgrammaticExecuteTool)
	{
		$EnvironmentTool = $ProgrammaticExecuteTool -replace '\.execute_tool_script$', '.get_execution_environment'
		if ($ToolNames -contains $EnvironmentTool)
		{
			Invoke-UnrealTextureMcpTool -Session $Session -Name $EnvironmentTool -Arguments @{} | Out-Null
		}
		$Result = Invoke-UnrealTextureMcpTool -Session $Session -Name $ProgrammaticExecuteTool -Arguments @{ script = $Script }
		return ConvertFrom-UnrealTextureMcpToolResult -Result $Result
	}

	if ($ToolNames -contains "call_tool")
	{
		$CandidateToolsets = @(
			"editor_toolset.toolsets.programmatic.ProgrammaticToolset",
			"toolset_registry.toolsets.programmatic.ProgrammaticToolset",
			"ToolsetRegistry.ProgrammaticToolset"
		)
		foreach ($Candidate in $CandidateToolsets)
		{
			try
			{
				Invoke-UnrealTextureMcpTool -Session $Session -Name "call_tool" -Arguments @{
					toolset_name = $Candidate
					tool_name = "get_execution_environment"
					arguments = @{}
				} | Out-Null
				$Result = Invoke-UnrealTextureMcpTool -Session $Session -Name "call_tool" -Arguments @{
					toolset_name = $Candidate
					tool_name = "execute_tool_script"
					arguments = @{ script = $Script }
				}
				return ConvertFrom-UnrealTextureMcpToolResult -Result $Result
			}
			catch
			{
			}
		}
	}

	throw "ProgrammaticToolset.execute_tool_script was not available from this MCP session."
}
