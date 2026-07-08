import csv
import glob
import json
import os
import re
import sys

import unreal


EXCLUDED_ROOTS = (
	"/Engine",
	"/Script",
	"/Memory",
	"/Temp",
	"/Transient",
	"/Config",
	"/Collections",
	"/Developers",
)

EXTRA_TEXTURE_CLASSES = (
	"BinkMediaTexture",
	"CurveLinearColorAtlas",
	"MediaTexture",
	"RuntimeVirtualTexture",
	"TextureLightProfile",
	"VolumeTexture",
)


def parse_bool(value):
	return str(value).strip().lower() in ("1", "true", "yes", "on")


def parse_roots(value):
	roots = []
	for part in re.split(r"[;,]", str(value or "")):
		root = part.strip()
		if root:
			roots.append(root.rstrip("/"))
	return roots


def project_content_roots():
	project_dir = unreal.Paths.convert_relative_path_to_full(unreal.Paths.project_dir())
	roots = ["/Game"]
	for plugin_path in glob.glob(os.path.join(project_dir, "Plugins", "**", "*.uplugin"), recursive=True):
		try:
			with open(plugin_path, "r", encoding="utf-8-sig", errors="ignore") as plugin_file:
				descriptor = json.load(plugin_file)
		except Exception:
			continue
		if not descriptor.get("CanContainContent", False):
			continue
		plugin_name = os.path.splitext(os.path.basename(plugin_path))[0]
		roots.append("/" + plugin_name)
	return sorted(set(roots))


def parse_int_env(name, default_value):
	try:
		return int(os.environ.get(name, str(default_value)))
	except ValueError:
		return default_value


def tag_value(asset_data, key):
	try:
		value = asset_data.get_tag_value(key)
		if isinstance(value, tuple):
			if len(value) >= 2 and value[0]:
				return str(value[1])
			return ""
		if value is None:
			return ""
		return str(value)
	except Exception:
		return ""


def class_name(asset_data):
	for attr_name in ("asset_class_path", "asset_class"):
		try:
			value = getattr(asset_data, attr_name)
			if hasattr(value, "asset_name"):
				return str(value.asset_name)
			if value:
				text = str(value)
				if "." in text:
					return text.rsplit(".", 1)[-1].strip("'")
				return text.strip("'")
		except Exception:
			continue
	return ""


def package_path(asset_data):
	try:
		return str(asset_data.package_name)
	except Exception:
		return str(asset_data.object_path).split(".", 1)[0]


def object_path(asset_data):
	try:
		return str(asset_data.object_path)
	except Exception:
		package = package_path(asset_data)
		name = package.rsplit("/", 1)[-1]
		return package + "." + name


def is_under_roots(path, roots):
	if not roots:
		return True
	for root in roots:
		if path == root or path.startswith(root + "/"):
			return True
	return False


def is_excluded(path, include_engine):
	if include_engine:
		return False
	return any(path == root or path.startswith(root + "/") for root in EXCLUDED_ROOTS)


def normalize_group(value):
	match = re.search(r"TEXTUREGROUP_[A-Za-z0-9_]+", str(value or ""))
	if match:
		return match.group(0)
	return str(value or "").strip()


def is_texture_asset(asset_data, asset_class_name):
	if asset_class_name.startswith("Texture"):
		return True
	return asset_class_name in EXTRA_TEXTURE_CLASSES


def parse_dimensions(asset_data):
	value = tag_value(asset_data, "Dimensions")
	patterns = (
		r"^\s*(\d+)\s*x\s*(\d+)\s*$",
		r"X\s*=\s*(\d+).*Y\s*=\s*(\d+)",
	)
	for pattern in patterns:
		match = re.search(pattern, value, re.IGNORECASE)
		if match:
			return int(match.group(1)), int(match.group(2))
	return 0, 0


def load_lod_group(asset_data):
	try:
		asset = asset_data.get_asset()
		for property_name in ("lod_group", "lodGroup", "LODGroup"):
			try:
				return normalize_group(asset.get_editor_property(property_name))
			except Exception:
				continue
	except Exception:
		return ""
	return ""


def collect_assets(asset_registry, roots, include_engine):
	seen = set()
	if roots:
		source_assets = []
		for root in roots:
			source_assets.extend(asset_registry.get_assets_by_path(root, recursive=True, include_only_on_disk_assets=False))
	else:
		try:
			source_assets = asset_registry.get_all_assets(include_only_on_disk_assets=False)
		except TypeError:
			source_assets = asset_registry.get_all_assets()

	for asset_data in source_assets:
		package = package_path(asset_data)
		if package in seen:
			continue
		seen.add(package)
		if is_excluded(package, include_engine):
			continue
		if not is_under_roots(package, roots):
			continue
		yield asset_data


def parse_configured_groups():
	project_dir = unreal.Paths.convert_relative_path_to_full(unreal.Paths.project_dir())
	config_pattern = os.path.join(project_dir, "Config", "**", "*.ini")
	group_pattern = re.compile(r"TextureLODGroups\s*=\s*\([^)]*Group\s*=\s*(TEXTUREGROUP_[A-Za-z0-9_]+)")
	by_file = {}
	all_groups = set()
	for ini_path in glob.glob(config_pattern, recursive=True):
		relative_path = os.path.relpath(ini_path, project_dir).replace("\\", "/")
		groups = []
		try:
			with open(ini_path, "r", encoding="utf-8-sig", errors="ignore") as ini_file:
				for line in ini_file:
					match = group_pattern.search(line)
					if match:
						group = match.group(1)
						groups.append(group)
						all_groups.add(group)
		except OSError:
			continue
		if groups:
			by_file[relative_path] = sorted(set(groups))
	return sorted(all_groups), by_file


def add_group(groups, group_name, asset_class_name, package, width, height, sample_limit):
	if not group_name:
		group_name = "<MissingLODGroup>"
	if group_name not in groups:
		groups[group_name] = {
			"group": group_name,
			"count": 0,
			"maxLongEdge": 0,
			"totalLongEdge": 0,
			"classCounts": {},
			"sampleAssets": [],
		}
	row = groups[group_name]
	long_edge = max(width, height)
	row["count"] += 1
	row["maxLongEdge"] = max(row["maxLongEdge"], long_edge)
	row["totalLongEdge"] += long_edge
	row["classCounts"][asset_class_name] = row["classCounts"].get(asset_class_name, 0) + 1
	if len(row["sampleAssets"]) < sample_limit:
		row["sampleAssets"].append({
			"assetPath": package,
			"class": asset_class_name,
			"width": width,
			"height": height,
		})


def write_csv(csv_path, groups):
	if not csv_path:
		return
	parent = os.path.dirname(csv_path)
	if parent:
		os.makedirs(parent, exist_ok=True)
	with open(csv_path, "w", encoding="utf-8-sig", newline="") as csv_file:
		writer = csv.writer(csv_file)
		writer.writerow(("group", "count", "maxLongEdge", "averageLongEdge", "classCounts", "sampleAsset"))
		for group in groups:
			sample = group["sampleAssets"][0]["assetPath"] if group["sampleAssets"] else ""
			writer.writerow((
				group["group"],
				group["count"],
				group["maxLongEdge"],
				group["averageLongEdge"],
				json.dumps(group["classCounts"], ensure_ascii=False, sort_keys=True),
				sample,
			))


def main():
	explicit_roots = parse_roots(os.environ.get("ORION_TEXTURE_GROUP_ROOTS", ""))
	scan_all_mounted = parse_bool(os.environ.get("ORION_TEXTURE_GROUP_ALL_MOUNTED", "0"))
	if explicit_roots:
		roots = explicit_roots
		root_mode = "explicit roots"
	elif scan_all_mounted:
		roots = []
		root_mode = "all non-engine mounted roots"
	else:
		roots = project_content_roots()
		root_mode = "project content and project plugins"
	include_engine = parse_bool(os.environ.get("ORION_TEXTURE_GROUP_INCLUDE_ENGINE", "0"))
	sample_limit = parse_int_env("ORION_TEXTURE_GROUP_SAMPLE_LIMIT", 20)
	report_path = os.environ.get("ORION_TEXTURE_GROUP_REPORT", "")
	csv_path = os.environ.get("ORION_TEXTURE_GROUP_CSV", "")
	load_missing_groups = parse_bool(os.environ.get("ORION_TEXTURE_GROUP_LOAD_MISSING", "1"))

	asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()
	asset_registry.search_all_assets(True)

	groups = {}
	texture_asset_count = 0
	missing_dimension_count = 0
	missing_group_count = 0

	for asset_data in collect_assets(asset_registry, roots, include_engine):
		asset_class_name = class_name(asset_data)
		if not is_texture_asset(asset_data, asset_class_name):
			continue

		package = package_path(asset_data)
		width, height = parse_dimensions(asset_data)
		if width == 0 or height == 0:
			missing_dimension_count += 1

		group_name = normalize_group(tag_value(asset_data, "LODGroup") or tag_value(asset_data, "lodGroup") or tag_value(asset_data, "lODGroup"))
		if not group_name and load_missing_groups:
			group_name = load_lod_group(asset_data)
		if not group_name:
			missing_group_count += 1

		texture_asset_count += 1
		add_group(groups, group_name, asset_class_name, package, width, height, sample_limit)

	group_rows = list(groups.values())
	for group in group_rows:
		group["averageLongEdge"] = round(group["totalLongEdge"] / group["count"], 2) if group["count"] else 0
		group["classCounts"] = dict(sorted(group["classCounts"].items()))
		del group["totalLongEdge"]
	group_rows.sort(key=lambda item: (item["count"], item["group"]), reverse=True)

	configured_groups, configured_by_file = parse_configured_groups()
	result = {
		"rootMode": root_mode,
		"roots": roots if roots else ["<all non-engine mounted roots>"],
		"includeEngine": include_engine,
		"textureAssetCount": texture_asset_count,
		"groupCount": len(group_rows),
		"missingDimensionCount": missing_dimension_count,
		"missingGroupCount": missing_group_count,
		"usedGroups": [group["group"] for group in group_rows],
		"groups": group_rows,
		"configuredTextureLODGroups": configured_groups,
		"configuredTextureLODGroupsByFile": configured_by_file,
		"note": "Read-only Asset Registry scan. No assets or config files were modified.",
	}

	text = json.dumps(result, ensure_ascii=False, indent=2)
	print(text)
	if report_path:
		parent = os.path.dirname(report_path)
		if parent:
			os.makedirs(parent, exist_ok=True)
		with open(report_path, "w", encoding="utf-8", newline="\r\n") as report_file:
			report_file.write(text)
			report_file.write("\n")
	write_csv(csv_path, group_rows)


if __name__ == "__main__":
	try:
		main()
	except Exception as exc:
		print("ERROR: " + str(exc))
		sys.exit(1)
