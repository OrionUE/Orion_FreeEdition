from __future__ import annotations

import argparse
import re
from pathlib import Path

from unreal_nav_common import collect_roots, read_text, search, write_json


BIND_KEYWORDS = (
	"AddDynamic",
	"AddUObject",
	"AddLambda",
	"AddSP",
	"BindDynamic",
	"BindUObject",
	"BindLambda",
	"BindSP",
	"RemoveDynamic",
	"RemoveAll",
	"Remove",
	"Clear",
)


def inspect_delegate(name: str, roots, limit: int) -> dict:
	records = search(name, roots, regex=False, limit=limit * 20)
	declarations: list[dict] = []
	usages: list[dict] = []
	declare_pattern = re.compile(r"DECLARE_[A-Z0-9_]*DELEGATE[^(]*\([^;]*\b" + re.escape(name) + r"\b")
	for record in records:
		path = Path(record["file"])
		try:
			text = read_text(path)
		except OSError:
			continue
		line = record["text"]
		if declare_pattern.search(line) or ("DECLARE_" in line and "DELEGATE" in line):
			declarations.append(record)
		elif any(keyword in line for keyword in BIND_KEYWORDS):
			usages.append(record)
		if len(declarations) >= limit and len(usages) >= limit:
			break
	return {"delegate": name, "declarations": declarations[:limit], "binding_examples": usages[:limit]}


def main() -> int:
	parser = argparse.ArgumentParser(description="Inspect Unreal delegate declarations and binding examples.")
	parser.add_argument("delegate_name", help="Delegate or event name to inspect.")
	parser.add_argument("--root", action="append", help="Root to inspect. Can be passed multiple times.")
	parser.add_argument("--engine-root", default=None, help="Optional Unreal Engine root to include.")
	parser.add_argument("--limit", type=int, default=10, help="Maximum declaration and binding records.")
	parser.add_argument("--json", action="store_true", help="Output machine-readable JSON.")
	args = parser.parse_args()

	roots = collect_roots(args.root, args.engine_root)
	result = inspect_delegate(args.delegate_name, roots, args.limit)
	if args.json:
		write_json(result)
		return 0
	print(f"Delegate: {result['delegate']}")
	print("\nDeclarations:")
	for item in result["declarations"]:
		print(f"  - {item['file']}:{item['line']}: {item['text']}")
	print("\nBinding examples:")
	for item in result["binding_examples"]:
		print(f"  - {item['file']}:{item['line']}: {item['text']}")
	return 0 if result["declarations"] or result["binding_examples"] else 1


if __name__ == "__main__":
	raise SystemExit(main())
