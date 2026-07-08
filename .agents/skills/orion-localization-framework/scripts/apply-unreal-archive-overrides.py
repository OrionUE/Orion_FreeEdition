#!/usr/bin/env python3
"""Apply AI-reviewed translations to Unreal .archive files.

The script is intentionally backend-free: it never calls translation services.
Rows are expected to contain translations already reviewed by Codex or a human.
"""

from __future__ import annotations

import argparse
import csv
import json
import re
import time
from pathlib import Path
from typing import Any


PLACEHOLDER_RE = re.compile(r"(\{[^{}\r\n]+\}|</?[^>\r\n]+>|\\[nrt])")


def parse_args() -> argparse.Namespace:
	parser = argparse.ArgumentParser()
	parser.add_argument("--project-root", default=".")
	parser.add_argument("--csv", required=True, help="CSV with AI-reviewed archive overrides.")
	parser.add_argument("--require-all", action="store_true", help="Fail if any CSV row does not match an archive entry.")
	parser.add_argument("--allow-placeholder-mismatch", action="store_true")
	parser.add_argument("--report", default="Saved/OrionUE/Localization/archive_override_report.csv")
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


def tokens(text: str) -> set[str]:
	return set(PLACEHOLDER_RE.findall(text or ""))


def normalize(value: str | None) -> str:
	return "" if value is None else value


def main() -> int:
	args = parse_args()
	project_root = Path(args.project_root).resolve()
	input_path = (project_root / args.csv).resolve() if not Path(args.csv).is_absolute() else Path(args.csv)
	report_path = project_root / args.report
	report_path.parent.mkdir(parents=True, exist_ok=True)

	with input_path.open("r", encoding="utf-8-sig", newline="") as csv_file:
		rows = list(csv.DictReader(csv_file))

	grouped: dict[tuple[str, str, str], list[dict[str, str]]] = {}
	for row in rows:
		target = normalize(row.get("target")) or "Game"
		archive = normalize(row.get("archive")) or target
		culture = normalize(row.get("culture"))
		if not culture:
			raise ValueError("CSV row missing culture")
		grouped.setdefault((target, archive, culture), []).append(row)

	report_rows: list[dict[str, str]] = []
	failed = False

	for (target, archive, culture), group_rows in grouped.items():
		archive_path = project_root / "Content" / "Localization" / target / culture / f"{archive}.archive"
		if not archive_path.exists():
			for row in group_rows:
				report_rows.append({**row, "status": "archive_missing", "old_translation": "", "new_translation": ""})
			failed = failed or args.require_all
			continue

		data = read_json_archive(archive_path)
		entries = list(iter_entries(data))
		changed = 0
		for row in group_rows:
			namespace = normalize(row.get("namespace"))
			key = normalize(row.get("key"))
			source = normalize(row.get("source"))
			translation = normalize(row.get("translation"))
			if not key or not translation:
				report_rows.append({**row, "status": "invalid_row", "old_translation": "", "new_translation": translation})
				failed = True
				continue

			matches = []
			for entry_namespace, entry in entries:
				entry_source = normalize((entry.get("Source") or {}).get("Text"))
				if namespace and entry_namespace != namespace:
					continue
				if entry.get("Key") != key:
					continue
				if source and entry_source != source:
					continue
				matches.append((entry_namespace, entry, entry_source))

			if not matches:
				report_rows.append({**row, "status": "not_found", "old_translation": "", "new_translation": translation})
				failed = failed or args.require_all
				continue

			if len(matches) > 1:
				report_rows.append({**row, "status": "ambiguous", "old_translation": "", "new_translation": translation})
				failed = True
				continue

			entry_namespace, entry, entry_source = matches[0]
			source_tokens = tokens(entry_source)
			translation_tokens = tokens(translation)
			if not args.allow_placeholder_mismatch and source_tokens != translation_tokens:
				report_rows.append({
					**row,
					"status": "placeholder_mismatch",
					"old_translation": normalize((entry.get("Translation") or {}).get("Text")),
					"new_translation": translation,
				})
				failed = True
				continue

			translation_obj = entry.setdefault("Translation", {})
			old_translation = normalize(translation_obj.get("Text"))
			translation_obj["Text"] = translation
			changed += int(old_translation != translation)
			report_rows.append({
				**row,
				"namespace": entry_namespace,
				"source": entry_source,
				"status": "changed" if old_translation != translation else "unchanged",
				"old_translation": old_translation,
				"new_translation": translation,
			})

		if changed:
			write_json_archive(archive_path, data)
		print(f"{target}:{culture} changed={changed} rows={len(group_rows)}")

	fieldnames = list(dict.fromkeys(
		["target", "archive", "culture", "namespace", "key", "source", "translation", "status", "old_translation", "new_translation"]
		+ [key for row in report_rows for key in row.keys()]
	))
	with report_path.open("w", encoding="utf-8-sig", newline="") as report_file:
		writer = csv.DictWriter(report_file, fieldnames=fieldnames)
		writer.writeheader()
		writer.writerows(report_rows)

	print(f"report={report_path}")
	return 1 if failed else 0


if __name__ == "__main__":
	raise SystemExit(main())
