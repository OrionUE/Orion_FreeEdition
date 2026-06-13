#!/usr/bin/env python3
"""Generate relative-path indexes for an Unreal Engine source checkout."""

from __future__ import annotations

import argparse
import csv
import json
import os
import sys
from datetime import datetime, timezone
from pathlib import Path
from typing import Any


DEFAULT_OUT_DIR = Path(__file__).resolve().parents[1] / "references" / "generated"


def bool_text(value: Any) -> str:
    if value is True:
        return "true"
    if value is False:
        return "false"
    if value is None:
        return ""
    return str(value)


def relative_path(path: Path, root: Path) -> str:
    return path.relative_to(root).as_posix()


def module_name_from_build_cs(path: Path) -> str:
    suffix = ".build.cs"
    name = path.name
    if name.lower().endswith(suffix):
        return name[: -len(suffix)]
    return path.stem


def iter_build_cs(root: Path):
    return (
        item
        for item in root.rglob("*")
        if item.is_file() and item.name.lower().endswith(".build.cs")
    )


def read_descriptor(path: Path) -> dict[str, Any]:
    try:
        return json.loads(path.read_text(encoding="utf-8-sig"))
    except Exception:
        return {}


def write_csv(path: Path, fieldnames: list[str], rows: list[dict[str, Any]]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8", newline="") as handle:
        writer = csv.DictWriter(handle, fieldnames=fieldnames, lineterminator="\r\n")
        writer.writeheader()
        for row in rows:
            writer.writerow({field: row.get(field, "") for field in fieldnames})


def write_text(path: Path, text: str) -> None:
    normalized = text.replace("\r\n", "\n").replace("\r", "\n").rstrip("\n") + "\n"
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(normalized.replace("\n", "\r\n"), encoding="utf-8")


def has_child_dir(path: Path, child: str) -> str:
    return "true" if (path / child).is_dir() else "false"


def module_category(build_cs: Path, root: Path) -> tuple[str, str]:
    parts = relative_path(build_cs, root).split("/")
    if len(parts) >= 4 and parts[0] == "Engine" and parts[1] == "Source":
        category = parts[2]
        group = parts[3] if len(parts) > 4 else ""
        return category, group
    return "", ""


def gather_engine_modules(root: Path) -> list[dict[str, Any]]:
    source_root = root / "Engine" / "Source"
    rows: list[dict[str, Any]] = []

    for build_cs in sorted(iter_build_cs(source_root), key=lambda item: item.as_posix().lower()):
        category, group = module_category(build_cs, root)
        source_dir = build_cs.parent
        rows.append(
            {
                "module_name": module_name_from_build_cs(build_cs),
                "source_category": category,
                "module_group": group,
                "relative_build_cs": relative_path(build_cs, root),
                "relative_source_dir": relative_path(source_dir, root),
                "has_public": has_child_dir(source_dir, "Public"),
                "has_private": has_child_dir(source_dir, "Private"),
                "has_classes": has_child_dir(source_dir, "Classes"),
            }
        )

    return rows


def descriptor_module_rows(
    root: Path,
    descriptor: Path,
    data: dict[str, Any],
    covered_build_cs: set[Path],
) -> tuple[dict[str, Any], list[dict[str, Any]]]:
    folder = descriptor.parent
    plugin_rel_parts = relative_path(folder, root).split("/")
    plugin_path_category = plugin_rel_parts[2] if len(plugin_rel_parts) > 2 else ""
    modules = data.get("Modules") if isinstance(data, dict) else []
    modules = modules if isinstance(modules, list) else []
    module_names = [module.get("Name", "") for module in modules if isinstance(module, dict)]
    module_by_name = {
        module.get("Name", ""): module
        for module in modules
        if isinstance(module, dict) and module.get("Name")
    }
    plugin_name = descriptor.name.removesuffix(".uplugin")

    plugin_row = {
        "plugin_name": plugin_name,
        "friendly_name": data.get("FriendlyName", "") if isinstance(data, dict) else "",
        "category": data.get("Category", "") if isinstance(data, dict) else "",
        "path_category": plugin_path_category,
        "relative_descriptor": relative_path(descriptor, root),
        "relative_plugin_dir": relative_path(folder, root),
        "enabled_by_default": bool_text(data.get("EnabledByDefault") if isinstance(data, dict) else None),
        "can_contain_content": bool_text(data.get("CanContainContent") if isinstance(data, dict) else None),
        "is_beta_version": bool_text(data.get("IsBetaVersion") if isinstance(data, dict) else None),
        "is_experimental_version": bool_text(data.get("IsExperimentalVersion") if isinstance(data, dict) else None),
        "installed": bool_text(data.get("Installed") if isinstance(data, dict) else None),
        "module_count": str(len(module_names)),
        "module_names": ";".join(module_names),
    }

    module_rows: list[dict[str, Any]] = []
    source_root = folder / "Source"
    if source_root.is_dir():
        for build_cs in sorted(iter_build_cs(source_root), key=lambda item: item.as_posix().lower()):
            covered_build_cs.add(build_cs)
            module_name = module_name_from_build_cs(build_cs)
            descriptor_module = module_by_name.get(module_name, {})
            source_dir = build_cs.parent
            module_rows.append(
                {
                    "plugin_name": plugin_name,
                    "module_name": module_name,
                    "has_descriptor": "true",
                    "descriptor_type": descriptor_module.get("Type", ""),
                    "loading_phase": descriptor_module.get("LoadingPhase", ""),
                    "relative_build_cs": relative_path(build_cs, root),
                    "relative_source_dir": relative_path(source_dir, root),
                    "relative_plugin_dir": relative_path(folder, root),
                    "path_category": plugin_path_category,
                    "has_public": has_child_dir(source_dir, "Public"),
                    "has_private": has_child_dir(source_dir, "Private"),
                    "has_classes": has_child_dir(source_dir, "Classes"),
                }
            )

    return plugin_row, module_rows


def gather_plugins(root: Path) -> tuple[list[dict[str, Any]], list[dict[str, Any]]]:
    plugins_root = root / "Engine" / "Plugins"
    plugin_rows: list[dict[str, Any]] = []
    module_rows: list[dict[str, Any]] = []
    covered_build_cs: set[Path] = set()

    if not plugins_root.is_dir():
        return plugin_rows, module_rows

    for descriptor in sorted(plugins_root.rglob("*.uplugin"), key=lambda item: item.as_posix().lower()):
        plugin_row, descriptor_modules = descriptor_module_rows(
            root,
            descriptor,
            read_descriptor(descriptor),
            covered_build_cs,
        )
        plugin_rows.append(plugin_row)
        module_rows.extend(descriptor_modules)

    for build_cs in sorted(iter_build_cs(plugins_root), key=lambda item: item.as_posix().lower()):
        if build_cs in covered_build_cs:
            continue

        source_dir = build_cs.parent
        plugin_dir = source_dir
        for parent in build_cs.parents:
            if parent.name == "Source":
                plugin_dir = parent.parent
                break

        plugin_rel_parts = relative_path(plugin_dir, root).split("/")
        plugin_path_category = plugin_rel_parts[2] if len(plugin_rel_parts) > 2 else ""
        module_rows.append(
            {
                "plugin_name": plugin_dir.name,
                "module_name": module_name_from_build_cs(build_cs),
                "has_descriptor": "false",
                "descriptor_type": "",
                "loading_phase": "",
                "relative_build_cs": relative_path(build_cs, root),
                "relative_source_dir": relative_path(source_dir, root),
                "relative_plugin_dir": relative_path(plugin_dir, root),
                "path_category": plugin_path_category,
                "has_public": has_child_dir(source_dir, "Public"),
                "has_private": has_child_dir(source_dir, "Private"),
                "has_classes": has_child_dir(source_dir, "Classes"),
            }
        )

    return plugin_rows, module_rows


def count_by(rows: list[dict[str, Any]], field: str) -> dict[str, int]:
    counts: dict[str, int] = {}
    for row in rows:
        key = str(row.get(field, ""))
        counts[key] = counts.get(key, 0) + 1
    return counts


def render_count_table(counts: dict[str, int]) -> str:
    if not counts:
        return "| `(none)` | 0 |"
    return "\n".join(f"| `{name}` | {count} |" for name, count in sorted(counts.items()))


def render_overview(
    engine_modules: list[dict[str, Any]],
    plugins: list[dict[str, Any]],
    plugin_modules: list[dict[str, Any]],
) -> str:
    generated_at = datetime.now(timezone.utc).strftime("%Y-%m-%dT%H:%M:%SZ")
    return f"""# Unreal Source Index Overview

Generated at: `{generated_at}`

All paths are relative to the Unreal Engine root and start with `Engine/...`.

## Index Files

| File | Purpose |
| --- | --- |
| `engine-modules.csv` | `.Build.cs` modules under `Engine/Source`. |
| `engine-plugins.csv` | `.uplugin` descriptors under `Engine/Plugins`. |
| `engine-plugin-modules.csv` | Plugin `.Build.cs` modules under `Engine/Plugins`. |

## Counts

| Area | Count |
| --- | ---: |
| Engine source modules | {len(engine_modules)} |
| Engine plugins | {len(plugins)} |
| Engine plugin modules | {len(plugin_modules)} |

## Engine Source Module Categories

| Category | Module count |
| --- | ---: |
{render_count_table(count_by(engine_modules, "source_category"))}

## Plugin Path Categories

| Category | Plugin count |
| --- | ---: |
{render_count_table(count_by(plugins, "path_category"))}

## Common Lookup Patterns

```bash
rg -n "^Core," engine-modules.csv
rg -n "GameplayAbilities|GameFeatures|ReplicationGraph" engine-plugins.csv engine-plugin-modules.csv
rg -n "EnhancedInput|CommonInput|InputCore" engine-modules.csv engine-plugins.csv engine-plugin-modules.csv
```
"""


def resolve_engine_root(value: str | None) -> Path | None:
    root_value = value
    if not root_value:
        for env_name in ("UE_ENGINE_ROOT", "UNREAL_ENGINE_ROOT", "UE_ROOT"):
            root_value = os.environ.get(env_name)
            if root_value:
                break
    return Path(root_value).resolve() if root_value else None


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Generate portable Unreal Engine source index CSV files.")
    parser.add_argument("--engine-root", "--ue-root", dest="engine_root", help="Unreal Engine root containing Engine/Source.")
    parser.add_argument("--out", default=str(DEFAULT_OUT_DIR), help="Output directory for generated index files.")
    return parser.parse_args()


def main() -> int:
    args = parse_args()
    root = resolve_engine_root(args.engine_root)
    if not root:
        print("error: pass --engine-root or set UE_ENGINE_ROOT, UNREAL_ENGINE_ROOT, or UE_ROOT", file=sys.stderr)
        return 2

    if not (root / "Engine" / "Source").is_dir():
        print(f"error: {root} does not look like an Unreal Engine root with Engine/Source", file=sys.stderr)
        return 2

    out_dir = Path(args.out).resolve()
    engine_modules = gather_engine_modules(root)
    plugins, plugin_modules = gather_plugins(root)

    write_csv(
        out_dir / "engine-modules.csv",
        [
            "module_name",
            "source_category",
            "module_group",
            "relative_build_cs",
            "relative_source_dir",
            "has_public",
            "has_private",
            "has_classes",
        ],
        engine_modules,
    )
    write_csv(
        out_dir / "engine-plugins.csv",
        [
            "plugin_name",
            "friendly_name",
            "category",
            "path_category",
            "relative_descriptor",
            "relative_plugin_dir",
            "enabled_by_default",
            "can_contain_content",
            "is_beta_version",
            "is_experimental_version",
            "installed",
            "module_count",
            "module_names",
        ],
        plugins,
    )
    write_csv(
        out_dir / "engine-plugin-modules.csv",
        [
            "plugin_name",
            "module_name",
            "has_descriptor",
            "descriptor_type",
            "loading_phase",
            "relative_build_cs",
            "relative_source_dir",
            "relative_plugin_dir",
            "path_category",
            "has_public",
            "has_private",
            "has_classes",
        ],
        plugin_modules,
    )
    write_text(out_dir / "source-index-overview.md", render_overview(engine_modules, plugins, plugin_modules))

    print(f"engine modules: {len(engine_modules)}")
    print(f"plugins: {len(plugins)}")
    print(f"plugin modules: {len(plugin_modules)}")
    print(f"output: {out_dir}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
