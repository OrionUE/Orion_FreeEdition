import argparse
import csv
import json
import os
import re
from pathlib import Path


GROUP_RE = re.compile(r"TEXTUREGROUP_[A-Za-z0-9_]+")
SECTION_RE = re.compile(r"^\s*\[([^\]]+)\]")


def unique_in_order(values):
	seen = set()
	result = []
	for value in values:
		if value and value not in seen:
			seen.add(value)
			result.append(value)
	return result


def read_text(path):
	return Path(path).read_text(encoding="utf-8-sig", errors="ignore")


def parse_texture_defines(path):
	groups = []
	display_names = {}
	in_enum = False
	for line in read_text(path).splitlines():
		stripped = line.strip()
		if stripped.startswith("enum TextureGroup"):
			in_enum = True
			continue
		if not in_enum:
			continue
		if stripped.startswith("};"):
			break
		if not stripped.startswith("TEXTUREGROUP_"):
			continue
		match = GROUP_RE.match(stripped)
		if not match:
			continue
		group = match.group(0)
		if group == "TEXTUREGROUP_MAX":
			continue
		groups.append(group)
		display_match = re.search(r'DisplayName\s*=\s*"([^"]+)"', line)
		if display_match:
			display_names[group] = display_match.group(1)
	return unique_in_order(groups), display_names


def parse_texture_lod_groups(path):
	sections = {}
	current_section = "<NoSection>"
	all_groups = []
	for line in read_text(path).splitlines():
		section_match = SECTION_RE.match(line)
		if section_match:
			current_section = section_match.group(1)
			sections.setdefault(current_section, [])
			continue
		if "TextureLODGroups" not in line:
			continue
		group_match = GROUP_RE.search(line)
		if not group_match:
			continue
		group = group_match.group(0)
		sections.setdefault(current_section, []).append(group)
		all_groups.append(group)

	sections = {
		section: unique_in_order(groups)
		for section, groups in sections.items()
		if groups
	}
	return {
		"allGroups": unique_in_order(all_groups),
		"sections": sections,
	}


def load_project_report(path):
	report_path = Path(path)
	if not report_path.exists():
		return {
			"path": str(report_path),
			"exists": False,
			"rootMode": "",
			"textureAssetCount": 0,
			"groupCount": 0,
			"usedGroups": [],
			"groupCounts": {},
		}

	data = json.loads(read_text(report_path))
	group_counts = {}
	for row in data.get("groups", []):
		group_counts[row.get("group", "")] = row.get("count", 0)
	return {
		"path": str(report_path),
		"exists": True,
		"rootMode": data.get("rootMode", ""),
		"textureAssetCount": data.get("textureAssetCount", 0),
		"groupCount": data.get("groupCount", 0),
		"usedGroups": data.get("usedGroups", []),
		"groupCounts": group_counts,
	}


def configured_sections_for_group(config_sections, group):
	return [
		section
		for section, groups in config_sections.items()
		if group in groups
	]


def build_summary(engine_enum_groups, engine_base_groups, project_report, project_config_groups, display_names):
	all_groups = unique_in_order(
		engine_enum_groups
		+ engine_base_groups["allGroups"]
		+ project_report["usedGroups"]
		+ project_config_groups["allGroups"]
	)
	engine_enum_set = set(engine_enum_groups)
	engine_base_set = set(engine_base_groups["allGroups"])
	project_set = set(project_report["usedGroups"])
	project_config_set = set(project_config_groups["allGroups"])
	group_counts = project_report["groupCounts"]
	rows = []
	for group in all_groups:
		rows.append({
			"group": group,
			"displayName": display_names.get(group, ""),
			"inEngineEnum": group in engine_enum_set,
			"inEngineBaseDeviceProfiles": group in engine_base_set,
			"inProjectAssets": group in project_set,
			"projectAssetCount": group_counts.get(group, 0),
			"inProjectDeviceProfiles": group in project_config_set,
			"projectConfigSections": configured_sections_for_group(project_config_groups["sections"], group),
		})
	return rows


def write_json(path, data):
	output_path = Path(path)
	output_path.parent.mkdir(parents=True, exist_ok=True)
	text = json.dumps(data, ensure_ascii=False, indent=2)
	output_path.write_text(text + "\n", encoding="utf-8", newline="\r\n")


def write_csv(path, rows):
	output_path = Path(path)
	output_path.parent.mkdir(parents=True, exist_ok=True)
	with output_path.open("w", encoding="utf-8-sig", newline="") as csv_file:
		writer = csv.writer(csv_file)
		writer.writerow((
			"group",
			"displayName",
			"inEngineEnum",
			"inEngineBaseDeviceProfiles",
			"inProjectAssets",
			"projectAssetCount",
			"inProjectDeviceProfiles",
			"projectConfigSections",
		))
		for row in rows:
			writer.writerow((
				row["group"],
				row["displayName"],
				row["inEngineEnum"],
				row["inEngineBaseDeviceProfiles"],
				row["inProjectAssets"],
				row["projectAssetCount"],
				row["inProjectDeviceProfiles"],
				";".join(row["projectConfigSections"]),
			))


def write_markdown(path, data):
	output_path = Path(path)
	output_path.parent.mkdir(parents=True, exist_ok=True)
	lines = [
		"# Texture Group Sources Report",
		"",
		f"- Engine root: `{data['engineRoot']}`",
		f"- Engine enum groups: {len(data['engineEnumGroups'])}",
		f"- Engine BaseDeviceProfiles groups: {len(data['engineBaseDeviceProfiles']['allGroups'])}",
		f"- Project texture report root mode: `{data['projectTextureReport']['rootMode']}`",
		f"- Project asset groups: {data['projectTextureReport']['groupCount']}",
		f"- Project texture assets: {data['projectTextureReport']['textureAssetCount']}",
		"",
		"| Group | Engine enum | Engine base config | Project assets | Count | Project config sections |",
		"| --- | --- | --- | --- | ---: | --- |",
	]
	for row in data["groups"]:
		sections = ", ".join(row["projectConfigSections"])
		lines.append(
			f"| `{row['group']}` | {row['inEngineEnum']} | {row['inEngineBaseDeviceProfiles']} | "
			f"{row['inProjectAssets']} | {row['projectAssetCount']} | {sections} |"
		)
	output_path.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\r\n")


def main():
	parser = argparse.ArgumentParser(description="Collect Unreal texture group sources from engine enum, engine config, project assets, and project config.")
	parser.add_argument("--project-root", default=os.getcwd())
	parser.add_argument("--engine-root", required=True)
	parser.add_argument("--project-report", default="Saved/OrionUE/TextureManagement/texture-groups-report.json")
	parser.add_argument("--project-config", default="Config/DefaultDeviceProfiles.ini")
	parser.add_argument("--json", default="Saved/OrionUE/TextureManagement/texture-group-sources-report.json")
	parser.add_argument("--csv", default="Saved/OrionUE/TextureManagement/texture-group-sources-report.csv")
	parser.add_argument("--markdown", default="Saved/OrionUE/TextureManagement/texture-group-sources-report.md")
	args = parser.parse_args()

	project_root = Path(args.project_root).resolve()
	engine_root = Path(args.engine_root).resolve()
	texture_defines = engine_root / "Engine" / "Source" / "Runtime" / "Engine" / "Classes" / "Engine" / "TextureDefines.h"
	engine_base_device_profiles = engine_root / "Engine" / "Config" / "BaseDeviceProfiles.ini"
	project_report_path = Path(args.project_report)
	project_config_path = Path(args.project_config)
	json_path = Path(args.json)
	csv_path = Path(args.csv)
	markdown_path = Path(args.markdown)

	if not texture_defines.exists():
		raise FileNotFoundError(f"TextureDefines.h not found: {texture_defines}")
	if not engine_base_device_profiles.exists():
		raise FileNotFoundError(f"BaseDeviceProfiles.ini not found: {engine_base_device_profiles}")
	if not project_report_path.is_absolute():
		project_report_path = project_root / project_report_path
	if not project_config_path.is_absolute():
		project_config_path = project_root / project_config_path
	if not json_path.is_absolute():
		json_path = project_root / json_path
	if not csv_path.is_absolute():
		csv_path = project_root / csv_path
	if not markdown_path.is_absolute():
		markdown_path = project_root / markdown_path

	engine_enum_groups, display_names = parse_texture_defines(texture_defines)
	engine_base_groups = parse_texture_lod_groups(engine_base_device_profiles)
	project_report = load_project_report(project_report_path)
	project_config_groups = parse_texture_lod_groups(project_config_path)
	group_rows = build_summary(engine_enum_groups, engine_base_groups, project_report, project_config_groups, display_names)

	result = {
		"engineRoot": str(engine_root),
		"projectRoot": str(project_root),
		"engineEnumSource": str(texture_defines),
		"engineBaseDeviceProfilesSource": str(engine_base_device_profiles),
		"projectConfigSource": str(project_config_path),
		"engineEnumGroups": engine_enum_groups,
		"engineBaseDeviceProfiles": engine_base_groups,
		"projectTextureReport": project_report,
		"projectDeviceProfiles": project_config_groups,
		"groups": group_rows,
		"note": "Read-only report. This script does not modify assets or config files.",
	}

	write_json(json_path, result)
	write_csv(csv_path, group_rows)
	write_markdown(markdown_path, result)
	print(f"Texture group sources report: {json_path}")
	print(f"Texture group sources CSV: {csv_path}")
	print(f"Texture group sources Markdown: {markdown_path}")


if __name__ == "__main__":
	main()
