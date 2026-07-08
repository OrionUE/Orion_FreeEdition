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

IMPORT_DATA_CANDIDATES = ["assetImportData", "AssetImportData"]

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

def get_property(asset_path, property_name):
	raw_values = call(OBJECT_TOOLS + ".get_properties", {
		"instance": asset_path,
		"properties": [property_name]
	})
	values = json.loads(raw_values)
	return values[property_name] if property_name in values else None

def run():
	candidates = []
	seen = set()
	import_data_property = None
	import_data_checked = False

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
			if not import_data_checked:
				keys = list_property_keys(asset_path)
				import_data_property = choose_property(keys, IMPORT_DATA_CANDIDATES)
				import_data_checked = True
			source_hint = None
			source_error = None
			if import_data_property:
				try:
					source_hint = get_property(asset_path, import_data_property)
				except Exception as error:
					source_error = str(error)
			candidates.append({
				"assetPath": asset_path,
				"width": width,
				"height": height,
				"targetWidthApprox": max(int(width / 2), 1),
				"targetHeightApprox": max(int(height / 2), 1),
				"assetImportData": source_hint,
				"assetImportDataError": source_error,
				"expectedEffect": "External source image is downscaled, then the texture is reimported. This changes source art and the uasset bulk data, so it is the least reversible method."
			})

	candidates.sort(key=lambda item: max(int(item["width"]), int(item["height"])), reverse=True)
	limit = int(SETTINGS["Limit"])
	return {
		"apply": False,
		"method": "Plan source image downscale plus reimport",
		"folders": SETTINGS["Folders"],
		"plannedCount": len(candidates),
		"truncated": len(candidates) > limit,
		"candidates": candidates[:limit],
		"caveat": "This MCP script intentionally does not resize files or reimport assets. Use it only to choose candidates, then run a separate reviewed image pipeline and reimport in the editor.",
		"note": "Read-only. No source images, assets, or import data were changed."
	}
"@

$Result = Invoke-UnrealTextureMcpProgrammaticScript -Script $Script -Endpoint $Endpoint -TimeoutSec $TimeoutSec
$Result | ConvertTo-Json -Depth 100
