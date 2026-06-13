from __future__ import annotations

import argparse
import re
from pathlib import Path

from unreal_nav_common import collect_roots, line_number_for_offset, module_info_for_file, read_text, search, write_json


def extract_block(text: str, brace_offset: int) -> str:
	depth = 0
	for index in range(brace_offset, len(text)):
		character = text[index]
		if character == "{":
			depth += 1
		elif character == "}":
			depth -= 1
			if depth == 0:
				return text[brace_offset : index + 1]
	return text[brace_offset:]


def nearby_macro(lines: list[str], line_number: int) -> str | None:
	start = max(0, line_number - 8)
	for line in reversed(lines[start : line_number]):
		stripped = line.strip()
		if stripped.startswith(("UCLASS", "USTRUCT", "UINTERFACE")):
			return stripped
	return None


def collect_annotated_members(block: str, macro: str) -> list[str]:
	lines = block.splitlines()
	members: list[str] = []
	for index, line in enumerate(lines):
		if macro not in line:
			continue
		chunk = [line.strip()]
		for follow in lines[index + 1 : index + 6]:
			stripped = follow.strip()
			if not stripped:
				continue
			chunk.append(stripped)
			if ";" in stripped or ")" in stripped:
				break
		members.append(" ".join(chunk))
	return members


def inspect_class(class_name: str, roots: list[Path], limit: int) -> list[dict]:
	candidates = search(class_name, roots, regex=False, limit=limit * 10)
	results: list[dict] = []
	decl_pattern = re.compile(
		rf"\b(?:class|struct)\s+(?:(?:[A-Za-z_][A-Za-z0-9_]*_API)\s+)?(?P<name>{re.escape(class_name)})\b(?P<tail>[^{{;]*)(?P<brace>{{)?",
		re.MULTILINE,
	)
	for candidate in candidates:
		path = Path(candidate["file"])
		if path.suffix.lower() not in {".h", ".hpp", ".hh", ".hxx"}:
			continue
		text = read_text(path)
		lines = text.splitlines()
		for match in decl_pattern.finditer(text):
			line_number = line_number_for_offset(text, match.start())
			tail = match.group("tail") or ""
			parent_match = re.search(r":\s*public\s+([A-Za-z_][A-Za-z0-9_:<>]*)", tail)
			brace_offset = match.end("brace") - 1 if match.group("brace") else match.end()
			block = extract_block(text, brace_offset) if match.group("brace") else ""
			module = module_info_for_file(path)
			results.append(
				{
					"class": class_name,
					"file": str(path),
					"line": line_number,
					"module": module.name if module else None,
					"module_build_file": module.build_file if module else None,
					"parent": parent_match.group(1) if parent_match else None,
					"reflection_macro": nearby_macro(lines, line_number),
					"uproperties": collect_annotated_members(block, "UPROPERTY"),
					"ufunctions": collect_annotated_members(block, "UFUNCTION"),
					"delegates": [line.strip() for line in block.splitlines() if "DECLARE_" in line and "DELEGATE" in line],
					"overrides": [line.strip() for line in block.splitlines() if "override" in line],
				}
			)
			if len(results) >= limit:
				return results
	return results


def main() -> int:
	parser = argparse.ArgumentParser(description="Inspect an Unreal class or struct declaration from local source.")
	parser.add_argument("class_name", help="Class or struct name, for example UActorComponent.")
	parser.add_argument("--root", action="append", help="Root to inspect. Can be passed multiple times.")
	parser.add_argument("--engine-root", default=None, help="Optional Unreal Engine root to include.")
	parser.add_argument("--limit", type=int, default=5, help="Maximum class declarations to print.")
	parser.add_argument("--json", action="store_true", help="Output machine-readable JSON.")
	args = parser.parse_args()

	roots = collect_roots(args.root, args.engine_root)
	results = inspect_class(args.class_name, roots, args.limit)
	if args.json:
		write_json(results)
		return 0 if results else 1
	for result in results:
		print(f"{result['class']} - {result['file']}:{result['line']}")
		print(f"  module: {result['module'] or '<unknown>'}")
		print(f"  parent: {result['parent'] or '<unknown>'}")
		print(f"  reflection: {result['reflection_macro'] or '<none found>'}")
		if result["ufunctions"]:
			print("  UFUNCTION:")
			for item in result["ufunctions"][:10]:
				print(f"    - {item}")
		if result["uproperties"]:
			print("  UPROPERTY:")
			for item in result["uproperties"][:10]:
				print(f"    - {item}")
		if result["delegates"]:
			print("  delegates:")
			for item in result["delegates"][:10]:
				print(f"    - {item}")
		if result["overrides"]:
			print("  overrides:")
			for item in result["overrides"][:15]:
				print(f"    - {item}")
	return 0 if results else 1


if __name__ == "__main__":
	raise SystemExit(main())
