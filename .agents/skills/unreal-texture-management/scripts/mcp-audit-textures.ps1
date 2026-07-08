param(
	[string[]]$Folders,
	[int]$MinLongEdge = 2048,
	[int]$Limit = 200,
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
} | ConvertTo-Json -Depth 10 -Compress

$Script = @"
import json

SETTINGS = json.loads(r'''$SettingsJson''')
ASSET_TOOLS = "editor_toolset.toolsets.asset.AssetTools"
OBJECT_TOOLS = "editor_toolset.toolsets.object.ObjectTools"
TEXTURE_TOOLS = "editor_toolset.toolsets.texture.TextureTools"

PROP_CANDIDATES = {
	"maxTextureSize": ["maxTextureSize", "MaxTextureSize"],
	"lodBias": ["lodBias", "LODBias"],
	"lodGroup": ["lodGroup", "LODGroup"],
	"compressionSettings": ["compressionSettings", "CompressionSettings"],
	"mipGenSettings": ["mipGenSettings", "MipGenSettings"],
	"srgb": ["srgb", "sRGB", "SRGB"],
	"virtualTextureStreaming": ["virtualTextureStreaming", "VirtualTextureStreaming"]
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
	if not property_names:
		return {}
	raw_values = call(OBJECT_TOOLS + ".get_properties", {
		"instance": asset_path,
		"properties": property_names
	})
	return json.loads(raw_values)

def run():
	rows = []
	skipped_classes = {}
	seen = set()
	property_map = None

	for folder in SETTINGS["Folders"]:
		for asset_path in find_assets(folder):
			if asset_path in seen:
				continue
			seen.add(asset_path)
			asset_class = get_asset_class(asset_path)
			if asset_class != "Texture2D":
				skipped_classes[asset_class] = skipped_classes.get(asset_class, 0) + 1
				continue
			width, height = get_texture_size(asset_path)
			long_edge = max(width, height)
			if long_edge < int(SETTINGS["MinLongEdge"]):
				continue
			if property_map is None:
				keys = list_property_keys(asset_path)
				property_map = {
					name: choose_property(keys, candidates)
					for name, candidates in PROP_CANDIDATES.items()
				}
			wanted = [value for value in property_map.values() if value]
			props = get_properties(asset_path, wanted)
			row = {
				"assetPath": asset_path,
				"width": width,
				"height": height,
				"longEdge": long_edge
			}
			for logical_name, real_name in property_map.items():
				if real_name and real_name in props:
					row[logical_name] = props[real_name]
			rows.append(row)

	rows.sort(key=lambda item: item["longEdge"], reverse=True)
	limit = int(SETTINGS["Limit"])
	return {
		"apply": False,
		"folders": SETTINGS["Folders"],
		"minLongEdge": int(SETTINGS["MinLongEdge"]),
		"textureCount": len(rows),
		"truncated": len(rows) > limit,
		"textures": rows[:limit],
		"skippedClasses": skipped_classes,
		"note": "Read-only audit. No asset properties were changed or saved."
	}
"@

$Result = Invoke-UnrealTextureMcpProgrammaticScript -Script $Script -Endpoint $Endpoint -TimeoutSec $TimeoutSec
$Result | ConvertTo-Json -Depth 100
