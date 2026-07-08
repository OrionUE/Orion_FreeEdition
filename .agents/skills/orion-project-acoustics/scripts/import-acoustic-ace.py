import os
import re
import sys

import unreal


def _get_arg(name):
	command_line = unreal.SystemLibrary.get_command_line()
	match = re.search(r"-{0}=(\"[^\"]+\"|\S+)".format(re.escape(name)), command_line)
	if match:
		return match.group(1).strip('"')

	prefix = "-{0}=".format(name)
	for arg in sys.argv:
		if arg.startswith(prefix):
			return arg[len(prefix):].strip('"')

	return ""


def _main():
	ace_file = os.path.abspath(_get_arg("AceFile"))
	if not ace_file or not os.path.isfile(ace_file):
		raise RuntimeError("Pass -AceFile=<Content/Acoustics/file.ace> and ensure the file exists.")

	asset_name = os.path.splitext(os.path.basename(ace_file))[0]
	destination_path = "/Game/Acoustics"
	asset_path = "{0}/{1}".format(destination_path, asset_name)

	task = unreal.AssetImportTask()
	task.filename = ace_file
	task.destination_path = destination_path
	task.destination_name = asset_name
	task.automated = True
	task.replace_existing = True
	task.save = True

	unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks([task])

	if not unreal.EditorAssetLibrary.does_asset_exist(asset_path):
		bridge = unreal.AcousticsPythonBridge.get()
		if bridge is None:
			raise RuntimeError("Failed to create UAcousticsData asset; AcousticsPythonBridge is unavailable.")
		bridge.create_ace_asset(ace_file)

	if not unreal.EditorAssetLibrary.does_asset_exist(asset_path):
		raise RuntimeError("Failed to import ACE as UAcousticsData asset: {0}".format(asset_path))

	unreal.EditorAssetLibrary.save_asset(asset_path, only_if_is_dirty=False)
	unreal.log("Imported ProjectAcoustics ACE asset: {0}".format(asset_path))


_main()
