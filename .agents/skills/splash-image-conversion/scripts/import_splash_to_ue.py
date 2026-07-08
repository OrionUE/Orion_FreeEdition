#!/usr/bin/env python3
# Copyright (c) 2026 Orion. All Rights Reserved.
# https://orionue.com

from __future__ import annotations

from pathlib import Path

import unreal


SPLASH_DESTINATION_PATH = "/Game/Splash"
SPLASH_BASE_NAMES = ("Splash", "EdSplash")


def get_project_content_dir() -> Path:
	return Path(unreal.Paths.convert_relative_path_to_full(unreal.Paths.project_content_dir()))


def make_import_task(source_path: Path, base_name: str) -> unreal.AssetImportTask:
	task = unreal.AssetImportTask()
	task.filename = str(source_path)
	task.destination_path = SPLASH_DESTINATION_PATH
	task.destination_name = base_name
	task.automated = True
	task.replace_existing = True
	task.save = False
	return task


def set_texture_group_ui(texture: unreal.Texture2D) -> None:
	candidates = []
	if hasattr(unreal, "TextureGroup") and hasattr(unreal.TextureGroup, "TEXTUREGROUP_UI"):
		candidates.append(unreal.TextureGroup.TEXTUREGROUP_UI)
	candidates.append("TEXTUREGROUP_UI")

	errors = []
	for candidate in candidates:
		try:
			texture.set_editor_property("lod_group", candidate)
			return
		except Exception as error:
			errors.append(str(error))

	raise RuntimeError("Failed to set Texture LODGroup to UI: {0}".format("; ".join(errors)))


def is_ui_texture_group(lod_group: object) -> bool:
	return "TEXTUREGROUP_UI" in str(lod_group) or str(lod_group).endswith(".UI")


def import_splash_texture(base_name: str) -> str:
	source_path = get_project_content_dir() / "Splash" / "{0}.png".format(base_name)
	if not source_path.is_file():
		raise RuntimeError("Missing Splash source image: {0}".format(source_path))

	task = make_import_task(source_path, base_name)
	unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks([task])

	asset_path = "{0}/{1}".format(SPLASH_DESTINATION_PATH, base_name)
	if not unreal.EditorAssetLibrary.does_asset_exist(asset_path):
		raise RuntimeError("Failed to import Splash texture asset: {0}".format(asset_path))

	texture = unreal.EditorAssetLibrary.load_asset(asset_path)
	if not isinstance(texture, unreal.Texture2D):
		raise RuntimeError("Imported asset is not a Texture2D: {0}".format(asset_path))

	set_texture_group_ui(texture)
	if not unreal.EditorAssetLibrary.save_loaded_asset(texture, only_if_is_dirty=False):
		raise RuntimeError("Failed to save Splash texture asset: {0}".format(asset_path))

	reloaded = unreal.EditorAssetLibrary.load_asset(asset_path)
	lod_group = reloaded.get_editor_property("lod_group")
	if not is_ui_texture_group(lod_group):
		raise RuntimeError("Unexpected Splash texture LODGroup: {0} | {1}".format(asset_path, lod_group))
	unreal.log("Imported Splash texture: {0} | LODGroup={1}".format(asset_path, lod_group))
	return asset_path


def main() -> None:
	imported_assets = [import_splash_texture(base_name) for base_name in SPLASH_BASE_NAMES]
	for asset_path in imported_assets:
		unreal.log("Saved Splash texture asset: {0}".format(asset_path))


main()
