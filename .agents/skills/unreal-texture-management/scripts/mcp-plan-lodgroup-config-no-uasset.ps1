param(
	[string[]]$Folders,
	[int]$MinLongEdge = 1024,
	[int]$Limit = 20,
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
	"lodGroup": ["lodGroup", "LODGroup"],
	"lodBias": ["lodBias", "LODBias"],
	"maxTextureSize": ["maxTextureSize", "MaxTextureSize"]
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
	raw_values = call(OBJECT_TOOLS + ".get_properties", {
		"instance": asset_path,
		"properties": property_names
	})
	return json.loads(raw_values)

def add_group_row(groups, group_name, asset_path, width, height, props, property_map):
	if group_name not in groups:
		groups[group_name] = {
			"lodGroup": group_name,
			"count": 0,
			"maxLongEdge": 0,
			"totalLongEdge": 0,
			"sampleTextures": []
		}
	group = groups[group_name]
	long_edge = max(width, height)
	group["count"] += 1
	group["maxLongEdge"] = max(group["maxLongEdge"], long_edge)
	group["totalLongEdge"] += long_edge
	if len(group["sampleTextures"]) < int(SETTINGS["Limit"]):
		group["sampleTextures"].append({
			"assetPath": asset_path,
			"width": width,
			"height": height,
			"lodBias": props[property_map["lodBias"]] if property_map.get("lodBias") and property_map["lodBias"] in props else None,
			"maxTextureSize": props[property_map["maxTextureSize"]] if property_map.get("maxTextureSize") and property_map["maxTextureSize"] in props else None
		})

def run():
	groups = {}
	seen = set()
	property_map = None
	texture_count = 0

	for folder in SETTINGS["Folders"]:
		for asset_path in find_assets(folder):
			if asset_path in seen:
				continue
			seen.add(asset_path)
			if get_asset_class(asset_path) != "Texture2D":
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
			if not property_map.get("lodGroup"):
				return {
					"apply": False,
					"error": "Texture LODGroup property was not found through ObjectTools.list_properties."
				}
			wanted = [value for value in property_map.values() if value]
			props = get_properties(asset_path, wanted)
			group_name = str(props[property_map["lodGroup"]])
			add_group_row(groups, group_name, asset_path, width, height, props, property_map)
			texture_count += 1

	group_rows = list(groups.values())
	for group in group_rows:
		group["averageLongEdge"] = round(group["totalLongEdge"] / group["count"], 2) if group["count"] else 0
		group["suggestedNoUAssetStrategies"] = [
			"DeviceProfile TextureLODGroups: add one LODBias for this group to approximate half resolution at cook/runtime.",
			"DeviceProfile TextureLODGroups: set MaxLODSize for this group to about maxLongEdge / 2 when the whole group should be capped.",
			"Scalability TextureQuality r.Streaming.MipBias=1 can reduce runtime mip demand only; it does not shrink cooked package size."
		]
	group_rows.sort(key=lambda item: item["maxLongEdge"], reverse=True)
	return {
		"apply": False,
		"method": "No-uasset LODGroup configuration planning",
		"folders": SETTINGS["Folders"],
		"minLongEdge": int(SETTINGS["MinLongEdge"]),
		"textureCount": texture_count,
		"groupCount": len(group_rows),
		"groups": group_rows,
		"caveat": "Unreal TextureLODGroups are group-based, not folder-based. This avoids changing uassets, but it affects every texture in the same LODGroup unless these folders already use a unique group.",
		"note": "Read-only. No asset or config file was changed."
	}
"@

$Result = Invoke-UnrealTextureMcpProgrammaticScript -Script $Script -Endpoint $Endpoint -TimeoutSec $TimeoutSec
$Result | ConvertTo-Json -Depth 100
