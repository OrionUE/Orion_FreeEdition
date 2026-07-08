param(
	[string[]]$Folders,
	[int]$SourceThreshold = 4096,
	[int]$TargetMaxTextureSize = 2048,
	[int]$MinimumTarget = 256,
	[int]$Limit = 500,
	[switch]$SkipUI,
	[switch]$Apply,
	[string]$Endpoint = "http://127.0.0.1:18765/mcp",
	[int]$TimeoutSec = 300
)

$ErrorActionPreference = "Stop"
. (Join-Path $PSScriptRoot "Invoke-UnrealTextureMcpScript.ps1")

$Folders = @(
	foreach ($Folder in $Folders)
	{
		foreach ($Part in ($Folder -split ","))
		{
			$Trimmed = $Part.Trim()
			if ($Trimmed)
			{
				$Trimmed
			}
		}
	}
)

if (-not $Folders -or $Folders.Count -eq 0)
{
	throw "Pass -Folders with one or more Unreal content browser folders."
}

if ($TargetMaxTextureSize -lt $MinimumTarget)
{
	throw "TargetMaxTextureSize must be greater than or equal to MinimumTarget."
}

$SettingsJson = @{
	Folders = $Folders
	SourceThreshold = $SourceThreshold
	TargetMaxTextureSize = $TargetMaxTextureSize
	MinimumTarget = $MinimumTarget
	Limit = $Limit
	SkipUI = [bool]$SkipUI
	Apply = [bool]$Apply
} | ConvertTo-Json -Depth 10 -Compress

$Script = @"
import json

SETTINGS = json.loads(r'''$SettingsJson''')
ASSET_TOOLS = "editor_toolset.toolsets.asset.AssetTools"
OBJECT_TOOLS = "editor_toolset.toolsets.object.ObjectTools"
TEXTURE_TOOLS = "editor_toolset.toolsets.texture.TextureTools"

def call(tool_name, payload):
	return execute_tool(tool_name, json.dumps(payload))["returnValue"]

def to_object_path(asset_path):
	asset_name = asset_path.rsplit("/", 1)[-1]
	if "." in asset_name:
		return asset_path
	return asset_path + "." + asset_name

def object_ref(asset_path):
	return {"refPath": to_object_path(asset_path)}

def find_assets(folder):
	return call(ASSET_TOOLS + ".find_assets", {
		"folder_path": folder,
		"name": "",
		"asset_type": {"refPath": "/Script/Engine.Texture2D"},
		"recursive": True
	})

def can_edit_asset(asset_path):
	return bool(call(ASSET_TOOLS + ".can_edit_asset", {
		"asset_path": asset_path
	}))

def asset_exists(asset_path):
	return bool(call(ASSET_TOOLS + ".exists", {
		"path": asset_path
	}))

def save_assets(asset_paths):
	return bool(call(ASSET_TOOLS + ".save_assets", {
		"asset_paths": asset_paths
	}))

def get_texture_size(asset_path):
	point = call(TEXTURE_TOOLS + ".get_size", {
		"texture": object_ref(asset_path)
	})
	x_value = point["x"] if "x" in point else point["X"]
	y_value = point["y"] if "y" in point else point["Y"]
	return int(x_value), int(y_value)

def get_asset_tags(asset_path):
	return call(ASSET_TOOLS + ".get_asset_tags", {
		"asset_path": asset_path
	})

def set_properties(asset_path, values):
	return bool(call(OBJECT_TOOLS + ".set_properties", {
		"instance": object_ref(asset_path),
		"values": json.dumps(values)
	}))

def parse_dimensions(tags, asset_path):
	value = tags.get("Dimensions") or tags.get("dimensions") or ""
	if "x" in value:
		left, right = value.lower().split("x", 1)
		try:
			return int(left), int(right)
		except ValueError:
			pass
	return get_texture_size(asset_path)

def parse_int(value, default_value):
	try:
		return int(value)
	except Exception:
		return default_value

def run():
	planned = []
	skipped = []
	changed = []
	seen = set()
	target_max = max(int(SETTINGS["TargetMaxTextureSize"]), int(SETTINGS["MinimumTarget"]))

	for folder in SETTINGS["Folders"]:
		for asset_path in find_assets(folder):
			if asset_path in seen:
				continue
			seen.add(asset_path)
			if not asset_exists(asset_path):
				skipped.append({
					"assetPath": asset_path,
					"reason": "Asset path was returned by find_assets but no longer exists"
				})
				continue
			tags = get_asset_tags(asset_path)
			width, height = parse_dimensions(tags, asset_path)
			long_edge = max(width, height)
			if long_edge < int(SETTINGS["SourceThreshold"]):
				continue
			lod_group = str(tags.get("LODGroup") or tags.get("lODGroup") or tags.get("lodGroup") or "")
			if bool(SETTINGS["SkipUI"]) and "UI" in lod_group:
				skipped.append({
					"assetPath": asset_path,
					"reason": "Skipped UI LODGroup"
				})
				continue
			old_max = parse_int(tags.get("MaxTextureSize") or tags.get("maxTextureSize") or "0", 0)
			if old_max > 0 and old_max <= target_max:
				continue
			row = {
				"assetPath": asset_path,
				"width": width,
				"height": height,
				"oldMaxTextureSize": old_max,
				"newMaxTextureSize": target_max,
				"lodGroup": lod_group,
				"expectedEffect": "Caps textures at or above SourceThreshold to TargetMaxTextureSize for cooked output."
			}
			planned.append(row)
			if bool(SETTINGS["Apply"]):
				if not can_edit_asset(asset_path):
					row["applyError"] = "Asset is not editable or is checked out by another user."
					continue
				if set_properties(asset_path, {"maxTextureSize": target_max}):
					changed.append(asset_path)

	planned.sort(key=lambda item: max(int(item["width"]), int(item["height"])), reverse=True)
	if bool(SETTINGS["Apply"]) and changed:
		save_assets(changed)

	limit = int(SETTINGS["Limit"])
	return {
		"apply": bool(SETTINGS["Apply"]),
		"method": "Cap MaxTextureSize",
		"folders": SETTINGS["Folders"],
		"sourceThreshold": int(SETTINGS["SourceThreshold"]),
		"targetMaxTextureSize": target_max,
		"plannedCount": len(planned),
		"changedCount": len(changed),
		"truncated": len(planned) > limit,
		"planned": planned[:limit],
		"skipped": skipped[:limit],
		"changedAssets": changed[:limit],
		"note": "Default mode is dry-run. Use -Apply to set MaxTextureSize and save assets."
	}
"@

$Result = Invoke-UnrealTextureMcpProgrammaticScript -Script $Script -Endpoint $Endpoint -TimeoutSec $TimeoutSec
$Result | ConvertTo-Json -Depth 100
