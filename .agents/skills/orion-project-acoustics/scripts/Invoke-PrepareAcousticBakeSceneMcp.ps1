param(
	[string]$SourceMap,
	[string]$GeometryReport = "",
	[string]$Endpoint = "http://127.0.0.1:18765/mcp",
	[string]$Report = "Saved\OrionUE\ProjectAcoustics\prepare-acoustic-bake-scene-mcp-report.json",
	[switch]$LoadLevel,
	[switch]$NoSave
)

$ErrorActionPreference = "Stop"

function Resolve-OutputPath
{
	param([string]$Path)

	if ([System.IO.Path]::IsPathRooted($Path))
	{
		return $Path
	}

	return Join-Path (Get-Location).Path $Path
}

function Invoke-OrionAcousticsMcpRawJsonRpc
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

function New-OrionAcousticsMcpSession
{
	param(
		[string]$Endpoint,
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
				name = "orion-project-acoustics"
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
	Invoke-OrionAcousticsMcpRawJsonRpc -Endpoint $Endpoint -Headers $Headers -Body $NotificationBody -TimeoutSec $TimeoutSec | Out-Null

	return [pscustomobject]@{
		Endpoint = $Endpoint
		Headers = $Headers
		NextId = 2
		TimeoutSec = $TimeoutSec
	}
}

function Invoke-OrionAcousticsMcpTool
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
	$Result = Invoke-OrionAcousticsMcpRawJsonRpc -Endpoint $Session.Endpoint -Headers $Session.Headers -Body $Body -TimeoutSec $Session.TimeoutSec
	if ($Result.PSObject.Properties.Name -contains "error")
	{
		throw ($Result.error | ConvertTo-Json -Depth 20 -Compress)
	}
	return $Result.result
}

function ConvertFrom-OrionAcousticsMcpToolResult
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

function Invoke-OrionAcousticsMcpCallTool
{
	param(
		[Parameter(Mandatory=$true)]
		[pscustomobject]$Session,
		[Parameter(Mandatory=$true)]
		[string]$ToolsetName,
		[Parameter(Mandatory=$true)]
		[string]$ToolName,
		[hashtable]$Arguments = @{}
	)

	$Result = Invoke-OrionAcousticsMcpTool -Session $Session -Name "call_tool" -Arguments @{
		toolset_name = $ToolsetName
		tool_name = $ToolName
		arguments = $Arguments
	}
	$Converted = ConvertFrom-OrionAcousticsMcpToolResult -Result $Result
	if ($null -ne $Converted -and $Converted.PSObject.Properties.Name -contains "returnValue")
	{
		return $Converted.returnValue
	}
	return $Converted
}

function Get-SuggestedTransform
{
	param([string]$GeometryReport)

	if (-not [string]::IsNullOrWhiteSpace($GeometryReport))
	{
		$ResolvedGeometryReport = Resolve-OutputPath -Path $GeometryReport
		if (Test-Path -LiteralPath $ResolvedGeometryReport)
		{
			$ReportJson = Get-Content -LiteralPath $ResolvedGeometryReport -Raw | ConvertFrom-Json
			$Transform = $ReportJson.summary.geometryBounds.suggestedNavMeshBoundsVolumeTransform
			if ($Transform)
			{
				return @{
					location = @{
						x = [double]$Transform.location.x
						y = [double]$Transform.location.y
						z = [double]$Transform.location.z
					}
					rotation = @{
						pitch = [double]$Transform.rotation.pitch
						yaw = [double]$Transform.rotation.yaw
						roll = [double]$Transform.rotation.roll
					}
					scale = @{
						x = [double]$Transform.scale.x
						y = [double]$Transform.scale.y
						z = [double]$Transform.scale.z
					}
				}
			}
		}
	}

	return @{
		location = @{ x = 0.0; y = 0.0; z = 0.0 }
		rotation = @{ pitch = 0.0; yaw = 0.0; roll = 0.0 }
		scale = @{ x = 50.0; y = 50.0; z = 10.0 }
	}
}

if ([string]::IsNullOrWhiteSpace($SourceMap))
{
	throw "Pass -SourceMap, for example /Game/Acoustics/AcousticProxyMaps/MilitaryCamp_AcousticProxy."
}

$ResolvedReport = Resolve-OutputPath -Path $Report
$ReportParent = Split-Path -Parent $ResolvedReport
if ($ReportParent)
{
	New-Item -ItemType Directory -Force -Path $ReportParent | Out-Null
}

$Summary = [ordered]@{
	completed = $false
	sourceMap = $SourceMap
	endpoint = $Endpoint
	usedMcp = $true
	loadedLevel = $false
	currentLevel = ""
	navMeshBoundsVolumesSeenBefore = 0
	navMeshBoundsVolumesSeenAfter = 0
	navMeshBoundsVolumeCreated = $false
	navMeshBoundsVolumeNavigationTagAlreadyPresent = 0
	navMeshBoundsVolumeNavigationTagRemoved = 0
	recastNavMeshActorsSeen = 0
	recastNavMeshTagAdded = 0
	recastNavMeshTagAlreadyPresent = 0
	saved = $false
	navMeshBoundsVolumeLabels = @()
	recastNavMeshLabels = @()
	warnings = @()
}
$ReportPayload = [ordered]@{
	summary = $Summary
	error = ""
	traceback = ""
}

try
{
	$Session = New-OrionAcousticsMcpSession -Endpoint $Endpoint -TimeoutSec 300
	$CurrentLevel = Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.scene.SceneTools" -ToolName "get_current_level"
	$Summary.currentLevel = [string]$CurrentLevel
	if ($CurrentLevel -ne $SourceMap)
	{
		if (-not $LoadLevel)
		{
			throw "Current editor level is '$CurrentLevel'. Pass -LoadLevel to switch to '$SourceMap'."
		}

		Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.scene.SceneTools" -ToolName "load_level" -Arguments @{ level_path = $SourceMap } | Out-Null
		$Summary.loadedLevel = $true
		$Summary.currentLevel = $SourceMap
	}

	$FindArgs = @{
		name = ""
		tag = ""
		collision_channels = @()
		actor_type = @{ refPath = "/Script/NavigationSystem.NavMeshBoundsVolume" }
	}
	$NavVolumes = @(Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.scene.SceneTools" -ToolName "find_actors" -Arguments $FindArgs)
	$Summary.navMeshBoundsVolumesSeenBefore = $NavVolumes.Count
	if ($NavVolumes.Count -eq 0)
	{
		$NewActor = Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.scene.SceneTools" -ToolName "add_to_scene_from_class" -Arguments @{
			actor_type = @{ refPath = "/Script/NavigationSystem.NavMeshBoundsVolume" }
			name = "PA_NavMeshBounds_Acoustic"
			xform = Get-SuggestedTransform -GeometryReport $GeometryReport
			snap_to_ground = $false
		}
		$NavVolumes = @($NewActor)
		$Summary.navMeshBoundsVolumeCreated = $true
	}

	foreach ($NavVolume in $NavVolumes)
	{
		Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.actor.ActorTools" -ToolName "set_label" -Arguments @{ actor = $NavVolume; label = "PA_NavMeshBounds_Acoustic" } | Out-Null
		$HasTag = Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.actor.ActorTools" -ToolName "has_tag" -Arguments @{ actor = $NavVolume; tag = "AcousticsNavigation" }
		if ($HasTag)
		{
			$Summary.navMeshBoundsVolumeNavigationTagAlreadyPresent += 1
			Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.actor.ActorTools" -ToolName "remove_tag" -Arguments @{ actor = $NavVolume; tag = "AcousticsNavigation" } | Out-Null
			$Summary.navMeshBoundsVolumeNavigationTagRemoved += 1
		}
		$Label = Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.actor.ActorTools" -ToolName "get_label" -Arguments @{ actor = $NavVolume }
		$Summary.navMeshBoundsVolumeLabels += [string]$Label
	}

	$Summary.navMeshBoundsVolumesSeenAfter = $NavVolumes.Count
	$RecastFindArgs = @{
		name = ""
		tag = ""
		collision_channels = @()
		actor_type = @{ refPath = "/Script/NavigationSystem.RecastNavMesh" }
	}
	$RecastNavMeshes = @(Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.scene.SceneTools" -ToolName "find_actors" -Arguments $RecastFindArgs)
	if ($RecastNavMeshes.Count -eq 0)
	{
		$RecastNavMeshes = @(Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.scene.SceneTools" -ToolName "find_actors" -Arguments @{
			name = "RecastNavMesh"
			tag = ""
			collision_channels = @()
		})
	}

	$Summary.recastNavMeshActorsSeen = $RecastNavMeshes.Count
	foreach ($RecastNavMesh in $RecastNavMeshes)
	{
		$HasTag = Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.actor.ActorTools" -ToolName "has_tag" -Arguments @{ actor = $RecastNavMesh; tag = "AcousticsNavigation" }
		if ($HasTag)
		{
			$Summary.recastNavMeshTagAlreadyPresent += 1
		}
		else
		{
			Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.actor.ActorTools" -ToolName "add_tag" -Arguments @{ actor = $RecastNavMesh; tag = "AcousticsNavigation" } | Out-Null
			$Summary.recastNavMeshTagAdded += 1
		}

		$Label = Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.actor.ActorTools" -ToolName "get_label" -Arguments @{ actor = $RecastNavMesh }
		$Summary.recastNavMeshLabels += [string]$Label
	}
	if ($RecastNavMeshes.Count -eq 0)
	{
		$Summary.warnings += "No RecastNavMesh actor was found. Adjust NavMeshBoundsVolume and build navigation before ProjectAcoustics bake."
	}

	if (-not $NoSave)
	{
		$Summary.saved = [bool](Invoke-OrionAcousticsMcpCallTool -Session $Session -ToolsetName "editor_toolset.toolsets.asset.AssetTools" -ToolName "save_assets" -Arguments @{ asset_paths = @($SourceMap) })
		if (-not $Summary.saved)
		{
			throw "AssetTools.save_assets returned false for $SourceMap."
		}
	}

	$Summary.completed = $true
}
catch
{
	$ReportPayload.error = $_.Exception.Message
	$ReportPayload.traceback = $_.ScriptStackTrace
}
finally
{
	$ReportPayload | ConvertTo-Json -Depth 100 | Set-Content -LiteralPath $ResolvedReport -Encoding UTF8
}

if (-not [string]::IsNullOrWhiteSpace($ReportPayload.error))
{
	throw $ReportPayload.error
}

Write-Host "Acoustic bake scene MCP preparation report: $ResolvedReport"
