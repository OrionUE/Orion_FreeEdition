from __future__ import annotations

import json
import os
import re
import shutil
import subprocess
import sys
from dataclasses import dataclass, field
from pathlib import Path
from typing import Iterable, Sequence


EXCLUDED_DIRS = {
	".git",
	".svn",
	".hg",
	".vs",
	".idea",
	"Binaries",
	"Build",
	"DerivedDataCache",
	"Intermediate",
	"Saved",
	"node_modules",
	"__pycache__",
}

SOURCE_EXTENSIONS = {
	".h",
	".hpp",
	".hh",
	".hxx",
	".cpp",
	".cc",
	".cxx",
	".inl",
	".ipp",
	".cs",
	".uproject",
	".uplugin",
}

HEADER_EXTENSIONS = {".h", ".hpp", ".hh", ".hxx"}
PROJECT_ENGINE_ROOT_CACHE = Path("Saved") / "OrionUE" / "UnrealEngine" / "InstallDirectory.txt"


@dataclass
class ModuleInfo:
	name: str
	build_file: str
	root: str
	public_dependencies: list[str] = field(default_factory=list)
	private_dependencies: list[str] = field(default_factory=list)
	dynamically_loaded_dependencies: list[str] = field(default_factory=list)
	public_include_paths: list[str] = field(default_factory=list)
	private_include_paths: list[str] = field(default_factory=list)


def resolve_path(value: str | Path | None) -> Path | None:
	if value is None:
		return None
	path = Path(value).expanduser()
	try:
		return path.resolve()
	except OSError:
		return path.absolute()


def read_text(path: Path) -> str:
	return path.read_text(encoding="utf-8-sig", errors="ignore")


def write_json(data: object) -> None:
	print(json.dumps(data, ensure_ascii=False, indent=2))


def should_skip_dir(name: str) -> bool:
	return name in EXCLUDED_DIRS


def walk_limited(root: Path, max_depth: int = 12) -> Iterable[tuple[Path, list[str], list[str]]]:
	root = resolve_path(root)
	if root is None or not root.exists():
		return
	for current, dir_names, file_names in os.walk(root):
		current_path = Path(current)
		try:
			relative = current_path.relative_to(root)
			depth = 0 if str(relative) == "." else len(relative.parts)
		except ValueError:
			depth = 0
		dir_names[:] = [d for d in dir_names if not should_skip_dir(d)]
		if depth >= max_depth:
			dir_names[:] = []
		yield current_path, dir_names, file_names


def iter_files(root: Path, extensions: set[str] | None = None, max_depth: int = 12) -> Iterable[Path]:
	extensions = extensions or SOURCE_EXTENSIONS
	for current, _, file_names in walk_limited(root, max_depth=max_depth):
		for file_name in file_names:
			path = current / file_name
			if path.suffix in extensions:
				yield path


def discover_files(root: Path, suffix: str, max_depth: int = 10) -> list[Path]:
	matches: list[Path] = []
	for current, _, file_names in walk_limited(root, max_depth=max_depth):
		for file_name in file_names:
			if file_name.endswith(suffix):
				matches.append(current / file_name)
	return sorted(matches)


def find_upwards(start: Path, suffixes: Sequence[str]) -> list[Path]:
	start = resolve_path(start) or Path.cwd()
	current = start if start.is_dir() else start.parent
	results: list[Path] = []
	for directory in [current, *current.parents]:
		for suffix in suffixes:
			results.extend(sorted(directory.glob(f"*{suffix}")))
		if results:
			return results
	return []


def normalize_engine_root(candidate: Path) -> Path | None:
	candidate = resolve_path(candidate) or candidate
	if (candidate / "Engine" / "Build" / "Build.version").exists():
		return candidate
	if candidate.name == "Engine" and (candidate / "Build" / "Build.version").exists():
		return candidate.parent
	return None


def read_project_engine_root_cache(start: Path | None) -> Path | None:
	if start is None:
		return None

	start_path = resolve_path(start)
	if start_path is None:
		return None

	current = start_path if start_path.is_dir() else start_path.parent
	for directory in [current, *current.parents]:
		cache_path = directory / PROJECT_ENGINE_ROOT_CACHE
		if not cache_path.exists():
			continue

		try:
			lines = read_text(cache_path).splitlines()
		except OSError:
			return None

		for line in lines:
			value = line.strip().strip('"')
			if not value or value.startswith("#"):
				continue

			normalized = normalize_engine_root(Path(value))
			if normalized:
				return normalized
		return None
	return None


def load_json_file(path: Path) -> dict:
	try:
		return json.loads(read_text(path))
	except json.JSONDecodeError:
		return {}


def descriptor_modules(path: Path) -> list[str]:
	data = load_json_file(path)
	modules = data.get("Modules", [])
	if not isinstance(modules, list):
		return []
	names: list[str] = []
	for module in modules:
		if isinstance(module, dict) and isinstance(module.get("Name"), str):
			names.append(module["Name"])
	return names


def parse_string_array_arguments(text: str) -> list[str]:
	return re.findall(r'"([^"]+)"', text)


def parse_build_cs(path: Path) -> ModuleInfo:
	text = read_text(path)
	name = path.name[: -len(".Build.cs")]
	info = ModuleInfo(name=name, build_file=str(path), root=str(path.parent))
	fields = {
		"PublicDependencyModuleNames": info.public_dependencies,
		"PrivateDependencyModuleNames": info.private_dependencies,
		"DynamicallyLoadedModuleNames": info.dynamically_loaded_dependencies,
		"PublicIncludePaths": info.public_include_paths,
		"PrivateIncludePaths": info.private_include_paths,
	}
	for field_name, target in fields.items():
		add_range_pattern = re.compile(
			rf"{re.escape(field_name)}\s*\.\s*AddRange\s*\(\s*new\s+string\s*\[\]\s*\{{(?P<body>.*?)\}}\s*\)",
			re.DOTALL,
		)
		add_pattern = re.compile(rf"{re.escape(field_name)}\s*\.\s*Add\s*\(\s*\"(?P<value>[^\"]+)\"\s*\)")
		for match in add_range_pattern.finditer(text):
			for value in parse_string_array_arguments(match.group("body")):
				if value not in target:
					target.append(value)
		for match in add_pattern.finditer(text):
			value = match.group("value")
			if value not in target:
				target.append(value)
	return info


def discover_modules(root: Path, max_depth: int = 12) -> list[ModuleInfo]:
	modules: list[ModuleInfo] = []
	for current, _, file_names in walk_limited(root, max_depth=max_depth):
		for file_name in file_names:
			if file_name.endswith(".Build.cs"):
				modules.append(parse_build_cs(current / file_name))
	return sorted(modules, key=lambda item: item.name.lower())


def find_build_file_for_source(path: Path) -> Path | None:
	path = resolve_path(path)
	if path is None:
		return None
	start = path if path.is_dir() else path.parent
	for directory in [start, *start.parents]:
		exact = directory / f"{directory.name}.Build.cs"
		if exact.exists():
			return exact
		matches = sorted(directory.glob("*.Build.cs"))
		if matches:
			return matches[0]
	return None


def detect_engine_root(start: Path | None = None, explicit: str | Path | None = None) -> Path | None:
	candidates: list[Path] = []
	if explicit:
		candidates.append(Path(explicit))
	cached_engine_root = read_project_engine_root_cache(start)
	if cached_engine_root:
		candidates.append(cached_engine_root)
	for env_name in ("UE_ROOT", "UNREAL_ENGINE_ROOT", "UNREAL_ENGINE", "UE_ENGINE_DIR"):
		env_value = os.environ.get(env_name)
		if env_value:
			candidates.append(Path(env_value))
	if start:
		start_path = resolve_path(start)
		if start_path:
			candidates.extend([start_path, *start_path.parents])
	for candidate in candidates:
		normalized = normalize_engine_root(candidate)
		if normalized:
			return normalized
	return None


def collect_roots(root_values: Sequence[str] | None, engine_root: str | None = None) -> list[Path]:
	roots: list[Path] = []
	for value in root_values or [str(Path.cwd())]:
		path = resolve_path(value)
		if path and path.exists() and path not in roots:
			roots.append(path)
	detected_engine = detect_engine_root(roots[0] if roots else Path.cwd(), engine_root)
	if detected_engine and detected_engine.exists() and detected_engine not in roots:
		roots.append(detected_engine)
	return roots


def rg_available() -> str | None:
	return shutil.which("rg")


def run_rg(pattern: str, roots: Sequence[Path], *, regex: bool = False, limit: int = 50) -> list[dict]:
	rg = rg_available()
	if not rg:
		return []
	command = [
		rg,
		"--line-number",
		"--column",
		"--no-heading",
		"--color",
		"never",
		"--glob",
		"!Binaries/**",
		"--glob",
		"!Intermediate/**",
		"--glob",
		"!Saved/**",
		"--glob",
		"!DerivedDataCache/**",
	]
	if not regex:
		command.append("--fixed-strings")
	command.append(pattern)
	command.extend(str(root) for root in roots)
	try:
		result = subprocess.run(command, check=False, text=True, capture_output=True, encoding="utf-8", errors="ignore")
	except OSError:
		return []
	records: list[dict] = []
	for line in result.stdout.splitlines():
		if len(records) >= limit:
			break
		match = re.match(r"^(?P<file>.+):(?P<line>\d+):(?P<column>\d+):(?P<text>.*)$", line)
		if not match:
			continue
		records.append(
			{
				"file": match.group("file"),
				"line": int(match.group("line")),
				"column": int(match.group("column")),
				"text": match.group("text").strip(),
			}
		)
	return records


def fallback_search(pattern: str, roots: Sequence[Path], *, regex: bool = False, limit: int = 50) -> list[dict]:
	compiled = re.compile(pattern) if regex else None
	records: list[dict] = []
	for root in roots:
		for path in iter_files(root, SOURCE_EXTENSIONS, max_depth=14):
			try:
				lines = read_text(path).splitlines()
			except OSError:
				continue
			for index, line in enumerate(lines, start=1):
				matched = bool(compiled.search(line)) if compiled else pattern in line
				if matched:
					column = line.find(pattern) + 1 if not regex else 1
					records.append({"file": str(path), "line": index, "column": max(column, 1), "text": line.strip()})
					if len(records) >= limit:
						return records
	return records


def search(pattern: str, roots: Sequence[Path], *, regex: bool = False, limit: int = 50) -> list[dict]:
	records = run_rg(pattern, roots, regex=regex, limit=limit)
	if records:
		return records
	return fallback_search(pattern, roots, regex=regex, limit=limit)


def line_number_for_offset(text: str, offset: int) -> int:
	return text.count("\n", 0, offset) + 1


def module_info_for_file(path: Path) -> ModuleInfo | None:
	build_file = find_build_file_for_source(path)
	return parse_build_cs(build_file) if build_file else None


def print_records(records: Sequence[dict], *, json_output: bool = False) -> None:
	if json_output:
		write_json(records)
		return
	for record in records:
		print(f"{record['file']}:{record['line']}:{record.get('column', 1)}: {record['text']}")


def platform_name() -> str:
	if sys.platform.startswith("win"):
		return "Win64"
	if sys.platform == "darwin":
		return "Mac"
	return "Linux"
