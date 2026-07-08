param(
	[string[]]$Folders,
	[int]$MinLongEdge = 1024,
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
	"compressionSettings": ["compressionSettings", "CompressionSettings"],
	"srgb": ["srgb", "sRGB", "SRGB"]
}

NORMAL_TOKENS = {"n", "nor", "normal", "normalmap"}
MASK_TOKENS = {"orm", "rma", "ero", "mask", "masks", "roughness", "metallic", "ao", "occlusion", "height"}
COLOR_TOKENS = {"basecolor", "base", "albedo", "diffuse", "color", "bc"}

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

def asset_tokens(asset_path):
	clean = asset_path.lower()
	for separator in ["/", "_", "-", "."]:
		clean = clean.replace(separator, " ")
	return set(clean.split())

def recommend(asset_path):
	tokens = asset_tokens(asset_path)
	if tokens & NORMAL_TOKENS:
		return {
			"kind": "normal",
			"compressionSettings": "TC_Normalmap",
			"srgb": False
		}
	if tokens & MASK_TOKENS:
		return {
			"kind": "mask",
			"compressionSettings": "TC_Masks",
			"srgb": False
		}
	if tokens & COLOR_TOKENS:
		return {
			"kind": "color",
			"compressionSettings": "TC_Default",
			"srgb": True
		}
	return None

def run():
	planned = []
	changed = []
	seen = set()
	property_map = None

	for folder in SETTINGS["Folders"]:
		for asset_path in find_assets(folder):
			if asset_path in seen:
				continue
			seen.add(asset_path)
			if get_asset_class(asset_path) != "Texture2D":
				continue
			recommendation = recommend(asset_path)
			if not recommendation:
				continue
			width, height = get_texture_size(asset_path)
			if max(width, height) < int(SETTINGS["MinLongEdge"]):
				continue
			if property_map is None:
				keys = list_property_keys(asset_path)
				property_map = {
					name: choose_property(keys, candidates)
					for name, candidates in PROP_CANDIDATES.items()
				}
			wanted = [value for value in property_map.values() if value]
			if not wanted:
				return {
					"apply": bool(SETTINGS["Apply"]),
					"error": "Compression and sRGB properties were not found through ObjectTools.list_properties."
				}
			props = get_properties(asset_path, wanted)
			values = {}
			row = {
				"assetPath": asset_path,
				"width": width,
				"height": height,
				"kind": recommendation["kind"]
			}
			compression_property = property_map.get("compressionSettings")
			if compression_property and compression_property in props and str(props[compression_property]) != recommendation["compressionSettings"]:
				row["oldCompressionSettings"] = props[compression_property]
				row["newCompressionSettings"] = recommendation["compressionSettings"]
				values[compression_property] = recommendation["compressionSettings"]
			srgb_property = property_map.get("srgb")
			if srgb_property and srgb_property in props and bool(props[srgb_property]) != bool(recommendation["srgb"]):
				row["oldSRGB"] = bool(props[srgb_property])
				row["newSRGB"] = bool(recommendation["srgb"])
				values[srgb_property] = bool(recommendation["srgb"])
			if not values:
				continue
			row["expectedEffect"] = "Fixes compression color space for the inferred texture kind; this may reduce cooked size or memory when settings were wrong, but it does not halve resolution."
			planned.append(row)
			if bool(SETTINGS["Apply"]):
				if not can_edit_asset(asset_path):
					row["applyError"] = "Asset is not editable or is checked out by another user."
					continue
				if set_properties(asset_path, values):
					changed.append(asset_path)

	planned.sort(key=lambda item: max(int(item["width"]), int(item["height"])), reverse=True)
	if bool(SETTINGS["Apply"]) and changed:
		save_assets(changed)

	limit = int(SETTINGS["Limit"])
	return {
		"apply": bool(SETTINGS["Apply"]),
		"method": "CompressionSettings and sRGB heuristic fix",
		"folders": SETTINGS["Folders"],
		"plannedCount": len(planned),
		"changedCount": len(changed),
		"truncated": len(planned) > limit,
		"planned": planned[:limit],
		"changedAssets": changed[:limit],
		"note": "Default mode is dry-run. Review every heuristic match before using -Apply."
	}
"@

$Result = Invoke-UnrealTextureMcpProgrammaticScript -Script $Script -Endpoint $Endpoint -TimeoutSec $TimeoutSec
$Result | ConvertTo-Json -Depth 100
