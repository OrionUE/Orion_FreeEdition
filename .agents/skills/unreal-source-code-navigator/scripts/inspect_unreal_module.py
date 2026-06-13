from __future__ import annotations

import argparse
from dataclasses import asdict

from unreal_nav_common import collect_roots, discover_modules, write_json


def main() -> int:
	parser = argparse.ArgumentParser(description="Inspect Unreal module Build.cs dependencies.")
	parser.add_argument("module", nargs="?", help="Module name. Omit to list discovered modules.")
	parser.add_argument("--root", action="append", help="Root to inspect. Can be passed multiple times.")
	parser.add_argument("--engine-root", default=None, help="Optional Unreal Engine root to include.")
	parser.add_argument("--max-depth", type=int, default=14, help="Maximum recursive search depth.")
	parser.add_argument("--json", action="store_true", help="Output machine-readable JSON.")
	args = parser.parse_args()

	roots = collect_roots(args.root, args.engine_root)
	modules = []
	for root in roots:
		modules.extend(discover_modules(root, max_depth=args.max_depth))
	if args.module:
		modules = [module for module in modules if module.name.lower() == args.module.lower()]

	data = [asdict(module) for module in modules]
	if args.json:
		write_json(data)
		return 0 if data else 1
	for module in data:
		print(f"{module['name']} - {module['build_file']}")
		print(f"  public dependencies: {', '.join(module['public_dependencies']) or '<none>'}")
		print(f"  private dependencies: {', '.join(module['private_dependencies']) or '<none>'}")
		print(f"  dynamically loaded: {', '.join(module['dynamically_loaded_dependencies']) or '<none>'}")
		if module["public_include_paths"]:
			print(f"  public include paths: {', '.join(module['public_include_paths'])}")
		if module["private_include_paths"]:
			print(f"  private include paths: {', '.join(module['private_include_paths'])}")
	return 0 if data else 1


if __name__ == "__main__":
	raise SystemExit(main())
