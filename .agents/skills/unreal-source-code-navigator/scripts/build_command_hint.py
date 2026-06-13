from __future__ import annotations

import argparse
from pathlib import Path

from unreal_nav_common import detect_engine_root, discover_files, platform_name, resolve_path, write_json


def choose_project(root: Path, explicit: str | None) -> Path | None:
	if explicit:
		return resolve_path(explicit)
	projects = discover_files(root, ".uproject", max_depth=4)
	return projects[0] if projects else None


def choose_target(root: Path, explicit: str | None) -> str | None:
	if explicit:
		return explicit
	targets = discover_files(root, ".Target.cs", max_depth=6)
	editor_targets = [path for path in targets if path.name.endswith("Editor.Target.cs")]
	chosen = editor_targets[0] if editor_targets else (targets[0] if targets else None)
	return chosen.name[: -len(".Target.cs")] if chosen else None


def build_script(engine_root: str, platform: str) -> str:
	if platform == "Win64":
		return f'"{engine_root}/Engine/Build/BatchFiles/Build.bat"'
	if platform == "Mac":
		return f'"{engine_root}/Engine/Build/BatchFiles/Mac/Build.sh"'
	return f'"{engine_root}/Engine/Build/BatchFiles/Linux/Build.sh"'


def editor_cmd(engine_root: str, platform: str) -> str:
	if platform == "Win64":
		return f'"{engine_root}/Engine/Binaries/Win64/UnrealEditor-Cmd.exe"'
	if platform == "Mac":
		return f'"{engine_root}/Engine/Binaries/Mac/UnrealEditor-Cmd"'
	return f'"{engine_root}/Engine/Binaries/Linux/UnrealEditor-Cmd"'


def main() -> int:
	parser = argparse.ArgumentParser(description="Print Unreal build and Editor-Cmd command hints without executing them.")
	parser.add_argument("--root", default=".", help="Project or plugin root.")
	parser.add_argument("--project", default=None, help="Optional .uproject path.")
	parser.add_argument("--engine-root", default=None, help="Optional Unreal Engine root.")
	parser.add_argument("--target", default=None, help="Target name, for example MyGameEditor.")
	parser.add_argument("--platform", default=None, choices=["Win64", "Mac", "Linux"], help="Target platform. Defaults to host platform.")
	parser.add_argument("--config", default="Development", help="Build configuration.")
	parser.add_argument("--json", action="store_true", help="Output machine-readable JSON.")
	args = parser.parse_args()

	root = resolve_path(args.root) or Path.cwd()
	project = choose_project(root, args.project)
	target = choose_target(root, args.target) or "<TargetName>"
	platform = args.platform or platform_name()
	engine = detect_engine_root(root, args.engine_root)
	engine_text = str(engine) if engine else "<EngineRoot>"
	project_text = str(project) if project else "<ProjectFile>"
	build = f"{build_script(engine_text, platform)} {target} {platform} {args.config} -Project=\"{project_text}\" -WaitMutex"
	editor = f"{editor_cmd(engine_text, platform)} \"{project_text}\" -Unattended -NullRHI -ExecCmds=\"quit\""
	data = {"build_command": build, "editor_cmd_smoke_test": editor, "platform": platform, "target": target, "config": args.config}
	if args.json:
		write_json(data)
		return 0
	print(f"Platform: {platform}")
	print(f"Target: {target}")
	print(f"Config: {args.config}")
	print("\nBuild command:")
	print(build)
	print("\nEditor-Cmd smoke test:")
	print(editor)
	return 0


if __name__ == "__main__":
	raise SystemExit(main())
