from __future__ import annotations

import argparse
from dataclasses import asdict
from pathlib import Path

from unreal_nav_common import detect_engine_root, discover_files, discover_modules, descriptor_modules, resolve_path, write_json


def main() -> int:
	parser = argparse.ArgumentParser(description="Discover Unreal project, plugin, target, module, and engine-source context.")
	parser.add_argument("--root", default=".", help="Project, plugin, or source root to inspect.")
	parser.add_argument("--engine-root", default=None, help="Optional Unreal Engine root. If omitted, environment and parent folders are checked.")
	parser.add_argument("--max-depth", type=int, default=10, help="Maximum recursive search depth.")
	parser.add_argument("--json", action="store_true", help="Output machine-readable JSON.")
	args = parser.parse_args()

	root = resolve_path(args.root) or Path.cwd()
	engine_root = detect_engine_root(root, args.engine_root)
	uprojects = discover_files(root, ".uproject", max_depth=args.max_depth)
	uplugins = discover_files(root, ".uplugin", max_depth=args.max_depth)
	targets = discover_files(root, ".Target.cs", max_depth=args.max_depth)
	modules = discover_modules(root, max_depth=args.max_depth)

	data = {
		"root": str(root),
		"engine_root": str(engine_root) if engine_root else None,
		"project_files": [{"path": str(path), "declared_modules": descriptor_modules(path)} for path in uprojects],
		"plugin_files": [{"path": str(path), "declared_modules": descriptor_modules(path)} for path in uplugins],
		"target_files": [str(path) for path in targets],
		"modules": [asdict(module) for module in modules],
	}

	if args.json:
		write_json(data)
		return 0

	print(f"Root: {data['root']}")
	print(f"Engine root: {data['engine_root'] or '<not found>'}")
	print("\nProject files:")
	for item in data["project_files"]:
		print(f"  - {item['path']}")
		if item["declared_modules"]:
			print(f"    modules: {', '.join(item['declared_modules'])}")
	print("\nPlugin files:")
	for item in data["plugin_files"]:
		print(f"  - {item['path']}")
		if item["declared_modules"]:
			print(f"    modules: {', '.join(item['declared_modules'])}")
	print("\nTargets:")
	for item in data["target_files"]:
		print(f"  - {item}")
	print("\nModules:")
	for module in data["modules"]:
		print(f"  - {module['name']}: {module['build_file']}")
	return 0


if __name__ == "__main__":
	raise SystemExit(main())
