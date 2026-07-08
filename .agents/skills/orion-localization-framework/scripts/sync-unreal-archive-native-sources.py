#!/usr/bin/env python3
"""Sync non-native Unreal .archive Source fields to the native culture text.

UE exports PO and compiles LocRes with ELocTextExportSourceMethod::NativeText for
non-native cultures. If the native culture archive translates the source text,
target culture archive entries must use that native translation as Source, or
their translations are treated as stale when bSkipSourceCheck=false.
"""

from __future__ import annotations

import argparse
import csv
import copy
import json
import time
from pathlib import Path
from typing import Any


def parse_args() -> argparse.Namespace:
	parser = argparse.ArgumentParser()
	parser.add_argument("--project-root", default=".")
	parser.add_argument("--target", default="Game")
	parser.add_argument("--archive", default="")
	parser.add_argument("--native-culture", required=True)
	parser.add_argument("--cultures", default="", help="Comma-separated cultures. Defaults to every archive folder except native culture.")
	parser.add_argument("--allow-key-only", action="store_true", help="When a native namespace/key is unique, sync stale target entries even if their old Source no longer matches the native Source.")
	parser.add_argument("--report", default="Saved/OrionUE/Localization/archive_native_source_sync_report.csv")
	return parser.parse_args()


def read_json_archive(path: Path) -> Any:
	raw = path.read_bytes()
	if raw.startswith((b"\xff\xfe", b"\xfe\xff")):
		return json.loads(raw.decode("utf-16"))
	if raw.startswith(b"\xef\xbb\xbf"):
		return json.loads(raw.decode("utf-8-sig"))
	return json.loads(raw.decode("utf-8"))


def write_json_archive(path: Path, data: Any) -> None:
	text = json.dumps(data, ensure_ascii=False, indent=2)
	text = text.replace("\r\n", "\n").replace("\n", "\r\n") + "\r\n"
	temp_path = path.with_name(f"{path.name}.tmp")
	for attempt in range(6):
		try:
			temp_path.write_text(text, encoding="utf-16")
			temp_path.replace(path)
			return
		except OSError:
			if attempt == 5:
				raise
			time.sleep(0.5 * (attempt + 1))


def iter_entries(node: Any, namespace: str = ""):
	if isinstance(node, dict):
		current_namespace = node.get("Namespace") or namespace
		for child in node.get("Children", []) or []:
			yield current_namespace, child
		for subnamespace in node.get("Subnamespaces", []) or []:
			yield from iter_entries(subnamespace, subnamespace.get("Namespace") or current_namespace)


def obj_text(value: Any) -> str:
	return ((value or {}).get("Text") or "") if isinstance(value, dict) else ""


def exact_key(value: Any) -> str:
	return json.dumps(value or {}, ensure_ascii=False, sort_keys=True, separators=(",", ":"))


def main() -> int:
	args = parse_args()
	project_root = Path(args.project_root).resolve()
	target_name = args.target
	archive_name = args.archive or target_name
	target_dir = project_root / "Content" / "Localization" / target_name
	native_archive_path = target_dir / args.native_culture / f"{archive_name}.archive"
	if not native_archive_path.exists():
		raise FileNotFoundError(native_archive_path)

	native_data = read_json_archive(native_archive_path)
	native_by_source: dict[tuple[str, str, str], dict[str, Any]] = {}
	native_by_key: dict[tuple[str, str], dict[str, Any] | None] = {}
	for namespace, entry in iter_entries(native_data):
		key = entry.get("Key") or ""
		source = entry.get("Source") or {}
		translation = entry.get("Translation") or {}
		if not key or not obj_text(source):
			continue
		expected_source = translation if obj_text(translation) and exact_key(source) != exact_key(translation) else source
		native_key = (namespace, key)
		if native_key in native_by_key:
			native_by_key[native_key] = None
		else:
			native_by_key[native_key] = {
				"source": source,
				"translation": expected_source,
			}
		native_by_source[(namespace, key, exact_key(source))] = {
			"source": source,
			"translation": expected_source,
		}

	if args.cultures:
		cultures = [culture.strip() for culture in args.cultures.split(",") if culture.strip()]
	else:
		cultures = sorted(
			path.name
			for path in target_dir.iterdir()
			if path.is_dir() and path.name != args.native_culture and (path / f"{archive_name}.archive").exists()
		)

	report_rows: list[dict[str, str]] = []
	for culture in cultures:
		archive_path = target_dir / culture / f"{archive_name}.archive"
		if not archive_path.exists():
			report_rows.append({
				"culture": culture,
				"namespace": "",
				"key": "",
				"status": "archive_missing",
				"old_source": "",
				"new_source": "",
				"translation": "",
			})
			continue

		data = read_json_archive(archive_path)
		changed = 0
		for namespace, entry in iter_entries(data):
			key = entry.get("Key") or ""
			source = entry.get("Source") or {}
			source_key = exact_key(source)
			native_match = native_by_source.get((namespace, key, source_key))
			b_key_only_match = False
			if not native_match and args.allow_key_only:
				native_match = native_by_key.get((namespace, key))
				b_key_only_match = native_match is not None
			if not native_match:
				continue

			old_source = obj_text(source)
			new_source = copy.deepcopy(native_match["translation"])
			new_source_text = obj_text(new_source)
			if exact_key(source) == exact_key(new_source):
				status = "already_synced"
			else:
				entry["Source"] = new_source
				changed += 1
				status = "changed_key_only" if b_key_only_match else "changed"

			report_rows.append({
				"culture": culture,
				"namespace": namespace,
				"key": key,
				"status": status,
				"old_source": old_source,
				"new_source": new_source_text,
				"translation": obj_text(entry.get("Translation")),
			})

		if changed:
			write_json_archive(archive_path, data)
		print(f"{target_name}:{culture} source_changed={changed}")

	report_path = project_root / args.report
	report_path.parent.mkdir(parents=True, exist_ok=True)
	fieldnames = ["culture", "namespace", "key", "status", "old_source", "new_source", "translation"]
	with report_path.open("w", encoding="utf-8-sig", newline="") as report_file:
		writer = csv.DictWriter(report_file, fieldnames=fieldnames)
		writer.writeheader()
		writer.writerows(report_rows)

	print(f"report={report_path}")
	return 0


if __name__ == "__main__":
	raise SystemExit(main())
