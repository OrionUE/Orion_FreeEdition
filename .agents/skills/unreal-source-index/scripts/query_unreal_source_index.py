#!/usr/bin/env python3
"""Query generated Unreal Engine source index CSV files."""

from __future__ import annotations

import argparse
import csv
import sys
from pathlib import Path


DEFAULT_INDEX_DIR = Path(__file__).resolve().parents[1] / "references" / "generated"
INDEX_FILES = {
    "modules": "engine-modules.csv",
    "plugins": "engine-plugins.csv",
    "plugin-modules": "engine-plugin-modules.csv",
}


def row_text(row: dict[str, str]) -> str:
    return " ".join(str(value) for value in row.values())


def selected_files(kind: str) -> list[tuple[str, Path]]:
    if kind == "all":
        return [(name, Path(filename)) for name, filename in INDEX_FILES.items()]
    return [(kind, Path(INDEX_FILES[kind]))]


def format_row(kind: str, row: dict[str, str]) -> str:
    if kind == "modules":
        return (
            f"module={row.get('module_name', '')} "
            f"category={row.get('source_category', '')} "
            f"build={row.get('relative_build_cs', '')} "
            f"source={row.get('relative_source_dir', '')}"
        )
    if kind == "plugins":
        return (
            f"plugin={row.get('plugin_name', '')} "
            f"category={row.get('category', '')} "
            f"descriptor={row.get('relative_descriptor', '')} "
            f"modules={row.get('module_names', '')}"
        )
    return (
        f"plugin={row.get('plugin_name', '')} "
        f"module={row.get('module_name', '')} "
        f"type={row.get('descriptor_type', '')} "
        f"build={row.get('relative_build_cs', '')} "
        f"source={row.get('relative_source_dir', '')}"
    )


def query_file(path: Path, kind: str, needle: str, case_sensitive: bool, max_results: int) -> int:
    if not path.is_file():
        print(f"warning: missing index file: {path}", file=sys.stderr)
        return 0

    match_count = 0
    needle_cmp = needle if case_sensitive else needle.lower()
    with path.open("r", encoding="utf-8-sig", newline="") as handle:
        reader = csv.DictReader(handle)
        for row in reader:
            haystack = row_text(row)
            haystack_cmp = haystack if case_sensitive else haystack.lower()
            if needle_cmp not in haystack_cmp:
                continue
            print(f"[{kind}] {format_row(kind, row)}")
            match_count += 1
            if match_count >= max_results:
                break
    return match_count


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Query generated Unreal Engine source index CSV files.")
    parser.add_argument("query", help="Text to search for in index rows.")
    parser.add_argument("--index-dir", default=str(DEFAULT_INDEX_DIR), help="Directory containing generated index CSV files.")
    parser.add_argument("--kind", choices=["all", "modules", "plugins", "plugin-modules"], default="all")
    parser.add_argument("--case-sensitive", action="store_true")
    parser.add_argument("--max", type=int, default=50, help="Maximum matches per index file.")
    return parser.parse_args()


def main() -> int:
    args = parse_args()
    index_dir = Path(args.index_dir).resolve()
    total = 0
    for kind, filename in selected_files(args.kind):
        total += query_file(index_dir / filename, kind, args.query, args.case_sensitive, args.max)
    if total == 0:
        print("no matches")
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
