param(
	[string[]]$Folders,
	[string]$TargetLODGroup = "TEXTUREGROUP_World",
	[int]$MinLongEdge = 2048,
	[int]$Limit = 500,
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

$SettingsJson = @{
	Folders = $Folders
	TargetLODGroup = $TargetLODGroup
	MinLongEdge = $MinLongEdge
	Limit = $Limit
	Apply = [bool]$Apply
} | ConvertTo-Json -Depth 10 -Compress

$Script = @"
import json

SETTINGS = json.loads(r'''$SettingsJson''')
ASSET_TOOLS = "editor_toolset.toolsets.asset.AssetTools"
OBJECT_TOOLS = "editor_toolset.toolsets.object.ObjectTools"
TEXTURE_TOOLS = "editor_toolset.toolsets.texture.TextureTools"

PROP_CANDIDATES = {
	"lodGroup": ["lodGroup", "LODGroup"]
}

def call(tool_name, payload):
	return execute_tool(tool_name, json.dumps(payload))["returnValue"]

def find_assets(folder):
	return call(ASSET_TOOLS + ".find_assets", {
		"folder_path": folder,
		"name": "",
		"recursive": True
	})

def get_asset_class(asset_path):
	return call(ASSET_TOOLS + ".get_asset_class", {
		"asset_path": asset_path
	})

def can_edit_asset(asset_path):
	return bool(call(ASSET_TOOLS + ".can_edit_asset", {
		"asset_path": asset_path
	}))

def save_assets(asset_paths):
	return bool(call(ASSET_TOOLS + ".save_assets", {
		"asset_paths": asset_paths
	}))

def get_texture_size(asset_path):
	point = call(TEXTURE_TOOLS + ".get_size", {
		"texture": asset_path
	})
	x_value = point["x"] if "x" in point else point["X"]
	y_value = point["y"] if "y" in point else point["Y"]
	return int(x_value), int(y_value)

def list_property_keys(asset_path):
	raw_schema = call(OBJECT_TOOLS + ".list_properties", {
		"instance": asset_path
	})
	schema = json.loads(raw_schema)
	return list(schema["properties"].keys()) if "properties" in schema else []

def choose_property(keys, candidates):
	for candidate in candidates:
		if candidate in keys:
			return candidate
	return None

def get_properties(asset_path, property_names):
	raw_values = call(OBJECT_TOOLS + ".get_properties", {
		"instance": asset_path,
		"properties": property_names
	})
	return json.loads(raw_values)

def set_properties(asset_path, values):
	return bool(call(OBJECT_TOOLS + ".set_properties", {
		"instance": asset_path,
		"values": json.dumps(values)
	}))

def run():
	planned = []
	changed = []
	seen = set()
	lod_group_property = None

	for folder in SETTINGS["Folders"]:
		for asset_path in find_assets(folder):
			if asset_path in seen:
				continue
			seen.add(asset_path)
			if get_asset_class(asset_path) != "Texture2D":
				continue
			width, height = get_texture_size(asset_path)
			long_edge = max(width, height)
			if long_edge < int(SETTINGS["MinLongEdge"]):
				continue
			if lod_group_property is None:
				keys = list_property_keys(asset_path)
				lod_group_property = choose_property(keys, PROP_CANDIDATES["lodGroup"])
			if not lod_group_property:
				return {
					"apply": bool(SETTINGS["Apply"]),
					"error": "Texture LODGroup property was not found through ObjectTools.list_properties."
				}
			props = get_properties(asset_path, [lod_group_property])
			old_group = str(props[lod_group_property])
			if old_group == str(SETTINGS["TargetLODGroup"]):
				continue
			row = {
				"assetPath": asset_path,
				"width": width,
				"height": height,
				"oldLODGroup": old_group,
				"newLODGroup": SETTINGS["TargetLODGroup"],
				"expectedEffect": "Only changes the asset group. Half-resolution behavior comes from TextureLODGroups or DeviceProfile settings for that group."
			}
			planned.append(row)
			if bool(SETTINGS["Apply"]):
				if not can_edit_asset(asset_path):
					row["applyError"] = "Asset is not editable or is checked out by another user."
					continue
				if set_properties(asset_path, {lod_group_property: SETTINGS["TargetLODGroup"]}):
					changed.append(asset_path)

	planned.sort(key=lambda item: max(int(item["width"]), int(item["height"])), reverse=True)
	if bool(SETTINGS["Apply"]) and changed:
		save_assets(changed)

	limit = int(SETTINGS["Limit"])
	return {
		"apply": bool(SETTINGS["Apply"]),
		"method": "Set Texture LODGroup",
		"folders": SETTINGS["Folders"],
		"targetLODGroup": SETTINGS["TargetLODGroup"],
		"plannedCount": len(planned),
		"changedCount": len(changed),
		"truncated": len(planned) > limit,
		"planned": planned[:limit],
		"changedAssets": changed[:limit],
		"note": "Default mode is dry-run. Use -Apply to set LODGroup and save assets."
	}
"@

$Result = Invoke-UnrealTextureMcpProgrammaticScript -Script $Script -Endpoint $Endpoint -TimeoutSec $TimeoutSec
$Result | ConvertTo-Json -Depth 100
