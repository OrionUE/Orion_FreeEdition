import json
import os
import traceback

import unreal


DEFAULT_REPORT = "Saved/OrionUE/ProjectAcoustics/configure-acoustic-source-data-override-report.json"
DEFAULT_SETTINGS_ASSET = "/Game/Acoustics/SourceDataOverride/AcousticsSettings_Default"
ACOUSTICS_SOURCE_SETTINGS_CLASS_PATH = "/Script/ProjectAcousticsNative.AcousticsSourceDataOverrideSourceSettings"
ACOUSTICS_SOURCE_SETTINGS_FACTORY_CLASS_PATH = "/Script/ProjectAcousticsNativeEditor.AcousticsSourceDataOverrideSourceSettingsFactory"
AUDIO_COMPONENT_CLASS_PATH = "/Script/Engine.AudioComponent"


SOURCE_SETTING_BOOL_FIELDS = {
	"applyAcousticsVolumes": ("apply_acoustics_volumes", "ApplyAcousticsVolumes"),
	"enablePortaling": ("enable_portaling", "EnablePortaling"),
	"enableOcclusion": ("enable_occlusion", "EnableOcclusion"),
	"enableReverb": ("enable_reverb", "EnableReverb"),
	"applyDynamicOpenings": ("apply_dynamic_openings", "ApplyDynamicOpenings"),
	"showAcousticParameters": ("show_acoustic_parameters", "ShowAcousticParameters"),
}


def parse_bool(value, default=False):
	if value is None or value == "":
		return default
	return str(value).strip().lower() in ("1", "true", "yes", "on")


def parse_optional_bool(value):
	if value is None:
		return None
	value_text = str(value).strip()
	if value_text == "" or value_text.lower() == "default":
		return None
	if value_text.lower() in ("1", "true", "yes", "on"):
		return True
	if value_text.lower() in ("0", "false", "no", "off"):
		return False
	raise RuntimeError("Invalid boolean value: {0}".format(value))


def parse_path_list(value):
	if value is None or str(value).strip() == "":
		return []
	return [
		normalize_asset_path(token)
		for token in str(value).replace("\n", ";").split(";")
		if token.strip()
	]


def log(message):
	unreal.log("[ConfigureAcousticSourceDataOverride] " + str(message))


def warn(message):
	unreal.log_warning("[ConfigureAcousticSourceDataOverride] " + str(message))


def error(message):
	unreal.log_error("[ConfigureAcousticSourceDataOverride] " + str(message))


def project_output_path(path_value):
	path = str(path_value or DEFAULT_REPORT).replace("\\", "/")
	if os.path.isabs(path):
		return path
	return os.path.join(unreal.Paths.project_dir(), path).replace("\\", "/")


def write_json(path_value, payload):
	path = project_output_path(path_value)
	parent = os.path.dirname(path)
	if parent and not os.path.isdir(parent):
		os.makedirs(parent, exist_ok=True)
	with open(path, "w", encoding="utf-8") as output_file:
		json.dump(payload, output_file, ensure_ascii=False, indent=2)
	return path


def normalize_asset_path(value, default_value=""):
	path = str(value or default_value or "").strip().replace("\\", "/")
	if not path:
		return ""
	if path.endswith(".uasset") or path.endswith(".umap"):
		content_index = path.lower().rfind("/content/")
		if content_index >= 0:
			path = "/Game/" + path[content_index + len("/content/"):]
		elif path.lower().startswith("content/"):
			path = "/Game/" + path[len("content/"):]
		path = os.path.splitext(path)[0]
	if "." in path:
		path = path.split(".", 1)[0]
	if not path.startswith("/"):
		if path.lower().startswith("content/"):
			path = "/Game/" + path[len("content/"):]
		else:
			path = "/Game/" + path
	return path.rstrip("/")


def canonical_package_path_from_object_path(path_value):
	path = str(path_value or "").replace("\\", "/")
	if "." in path:
		path = path.split(".", 1)[0]
	if ":" in path:
		path = path.split(":", 1)[0]
	return path


def split_asset_path(asset_path):
	normalized = normalize_asset_path(asset_path)
	if not normalized or normalized == "/":
		raise RuntimeError("Invalid asset path: {0}".format(asset_path))
	if "/" not in normalized.strip("/"):
		raise RuntimeError("Asset path must include a folder: {0}".format(asset_path))
	package_path, asset_name = normalized.rsplit("/", 1)
	if not package_path or not asset_name:
		raise RuntimeError("Invalid asset path: {0}".format(asset_path))
	return package_path, asset_name


def object_class_name(obj):
	if obj is None:
		return ""
	try:
		return obj.get_class().get_name()
	except Exception:
		pass
	try:
		return obj.__class__.__name__
	except Exception:
		return ""


def object_path(obj):
	if obj is None:
		return ""
	for method_name in ("get_path_name", "GetPathName"):
		method = getattr(obj, method_name, None)
		if method:
			try:
				return str(method())
			except Exception:
				pass
	try:
		return str(obj)
	except Exception:
		return ""


def actor_label(actor):
	for method_name in ("get_actor_label", "GetActorLabel"):
		method = getattr(actor, method_name, None)
		if method:
			try:
				label = method()
				if label:
					return str(label)
			except Exception:
				pass
	try:
		return actor.get_name()
	except Exception:
		return object_class_name(actor)


def get_prop(obj, names, default_value=None):
	if obj is None:
		return default_value
	if isinstance(names, str):
		names = (names,)
	for name in names:
		try:
			return obj.get_editor_property(name)
		except Exception:
			pass
		try:
			return getattr(obj, name)
		except Exception:
			pass
	return default_value


def set_prop(obj, names, value):
	if obj is None:
		return False
	if isinstance(names, str):
		names = (names,)
	for name in names:
		try:
			obj.set_editor_property(name, value)
			return True
		except Exception:
			pass
		try:
			setattr(obj, name, value)
			return True
		except Exception:
			pass
	return False


def load_class(class_path):
	loaded_class = None
	try:
		loaded_class = unreal.load_class(None, class_path)
	except Exception:
		loaded_class = None
	if loaded_class is None:
		try:
			loaded_class = unreal.find_object(None, class_path)
		except Exception:
			loaded_class = None
	if loaded_class is None:
		raise RuntimeError("Failed to load class: {0}".format(class_path))
	return loaded_class


def is_instance_of(obj, target_class):
	if obj is None or target_class is None:
		return False
	try:
		current_class = obj.get_class()
		if current_class == target_class:
			return True
		if hasattr(current_class, "is_child_of"):
			return current_class.is_child_of(target_class)
	except Exception:
		pass
	return object_class_name(obj) == target_class.get_name()


def load_level(package_path):
	level_subsystem_class = getattr(unreal, "LevelEditorSubsystem", None)
	if level_subsystem_class:
		try:
			level_subsystem = unreal.get_editor_subsystem(level_subsystem_class)
			if level_subsystem and hasattr(level_subsystem, "load_level"):
				return level_subsystem.load_level(package_path)
		except Exception:
			pass
	return unreal.EditorLevelLibrary.load_level(package_path)


def get_all_level_actors():
	editor_actor_subsystem_class = getattr(unreal, "EditorActorSubsystem", None)
	if editor_actor_subsystem_class:
		try:
			editor_actor_subsystem = unreal.get_editor_subsystem(editor_actor_subsystem_class)
			if editor_actor_subsystem and hasattr(editor_actor_subsystem, "get_all_level_actors"):
				return list(editor_actor_subsystem.get_all_level_actors())
		except Exception:
			pass
	return list(unreal.EditorLevelLibrary.get_all_level_actors())


def get_actor_audio_components(actor, audio_component_class):
	try:
		return list(actor.get_components_by_class(audio_component_class))
	except Exception:
		pass
	try:
		return [
			component for component in actor.get_components_by_class(unreal.ActorComponent)
			if object_class_name(component).endswith("AudioComponent")
		]
	except Exception:
		return []


def mark_modified(obj):
	try:
		obj.modify()
	except Exception:
		pass
	try:
		obj.mark_package_dirty()
	except Exception:
		pass


def save_loaded_asset(asset):
	try:
		if unreal.EditorAssetLibrary.save_loaded_asset(asset, only_if_is_dirty=False):
			return True
	except Exception:
		pass
	path = canonical_package_path_from_object_path(object_path(asset))
	if path:
		try:
			return bool(unreal.EditorAssetLibrary.save_asset(path, only_if_is_dirty=False))
		except Exception:
			pass
	return False


def get_source_settings_status(source_settings_object, settings_asset_path):
	if source_settings_object is None:
		return {
			"path": "",
			"isSharedSettingsAsset": False,
			"applyAcousticsVolumes": None,
			"enablePortaling": None,
			"enableOcclusion": None,
			"enableReverb": None,
			"applyDynamicOpenings": None,
			"showAcousticParameters": None,
		}

	source_settings = get_prop(source_settings_object, ("settings", "Settings"), None)
	status = {
		"path": object_path(source_settings_object),
		"isSharedSettingsAsset": canonical_package_path_from_object_path(object_path(source_settings_object)) == settings_asset_path,
	}
	for field_key, names in SOURCE_SETTING_BOOL_FIELDS.items():
		status[field_key] = get_prop(source_settings, names, None)
	return status


def get_attenuation_status(attenuation_settings, options):
	if attenuation_settings is None:
		return {
			"sourceDataOverride": None,
			"projectAcousticsSettings": [],
		}

	plugin_settings = get_prop(attenuation_settings, ("plugin_settings", "PluginSettings"), None)
	settings_array = get_prop(
		plugin_settings,
		("source_data_override_plugin_settings_array", "SourceDataOverridePluginSettingsArray"),
		[]) if plugin_settings is not None else []
	project_settings = [
		settings for settings in list(settings_array or [])
		if is_instance_of(settings, options["settings_class"])
	]
	return {
		"sourceDataOverride": get_prop(
			attenuation_settings,
			("enable_source_data_override", "b_enable_source_data_override", "bEnableSourceDataOverride"),
			None),
		"projectAcousticsSettings": [
			get_source_settings_status(settings, options["settings_asset"])
			for settings in project_settings
		],
	}


def update_source_settings_asset(settings_asset, options, summary):
	if settings_asset is None:
		return False

	source_settings = get_prop(settings_asset, ("settings", "Settings"), None)
	if source_settings is None:
		summary["warnings"].append("Missing Settings struct on {0}.".format(options["settings_asset"]))
		return False

	changed = False
	for field_key, names in SOURCE_SETTING_BOOL_FIELDS.items():
		desired_value = options["source_setting_values"].get(field_key, None)
		if desired_value is None:
			continue

		current_value = get_prop(source_settings, names, None)
		if current_value == desired_value:
			continue

		summary["settingsAssetFieldsWouldUpdate"].append({
			"field": field_key,
			"before": current_value,
			"after": desired_value,
		})
		if options["apply"]:
			if not set_prop(source_settings, names, desired_value):
				raise RuntimeError("Failed to set {0} on {1}.".format(field_key, options["settings_asset"]))
			changed = True

	if changed:
		if not set_prop(settings_asset, ("settings", "Settings"), source_settings):
			raise RuntimeError("Failed to write Settings struct on {0}.".format(options["settings_asset"]))
		mark_modified(settings_asset)
		summary["settingsAssetUpdated"] = True
		if options["save"]:
			summary["settingsAssetSaved"] = bool(save_loaded_asset(settings_asset))
			if not summary["settingsAssetSaved"]:
				summary["warnings"].append("Failed to save settings asset {0}.".format(options["settings_asset"]))

	return changed


def get_or_create_settings_asset(options, summary):
	asset_path = options["settings_asset"]
	if unreal.EditorAssetLibrary.does_asset_exist(asset_path):
		asset = unreal.EditorAssetLibrary.load_asset(asset_path)
		if asset is None:
			raise RuntimeError("Failed to load settings asset: {0}".format(asset_path))
		if not is_instance_of(asset, options["settings_class"]):
			raise RuntimeError("Asset is not UAcousticsSourceDataOverrideSourceSettings: {0}".format(asset_path))
		summary["settingsAssetExisted"] = True
		summary["settingsAssetStatusBefore"] = get_source_settings_status(asset, asset_path)
		update_source_settings_asset(asset, options, summary)
		summary["settingsAssetStatusAfter"] = get_source_settings_status(asset, asset_path)
		return asset

	summary["settingsAssetWouldCreate"] = True
	if not options["apply"]:
		return None

	package_path, asset_name = split_asset_path(asset_path)
	unreal.EditorAssetLibrary.make_directory(package_path)

	factory = None
	try:
		factory_class = load_class(ACOUSTICS_SOURCE_SETTINGS_FACTORY_CLASS_PATH)
		factory = unreal.new_object(factory_class)
	except Exception as exc:
		summary["warnings"].append("Failed to create settings factory, trying create_asset without factory: {0}".format(exc))

	asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
	asset = asset_tools.create_asset(asset_name, package_path, options["settings_class"], factory)
	if asset is None:
		raise RuntimeError("Failed to create settings asset: {0}".format(asset_path))

	summary["settingsAssetCreated"] = True
	summary["settingsAssetStatusBefore"] = get_source_settings_status(asset, asset_path)
	update_source_settings_asset(asset, options, summary)
	summary["settingsAssetStatusAfter"] = get_source_settings_status(asset, asset_path)
	if options["save"]:
		summary["settingsAssetSaved"] = bool(save_loaded_asset(asset))
		if not summary["settingsAssetSaved"]:
			summary["warnings"].append("Failed to save settings asset {0}.".format(asset_path))
	return asset


def enable_source_data_override(attenuation_settings, options, summary, context):
	current_value = get_prop(
		attenuation_settings,
		("enable_source_data_override", "b_enable_source_data_override", "bEnableSourceDataOverride"),
		None)
	if current_value is True:
		return False

	summary["sourceDataOverrideWouldEnable"] += 1
	if not options["apply"]:
		return True

	if not set_prop(
		attenuation_settings,
		("enable_source_data_override", "b_enable_source_data_override", "bEnableSourceDataOverride"),
		True):
		raise RuntimeError("Failed to enable SourceDataOverride for {0}.".format(context))
	summary["sourceDataOverrideEnabled"] += 1
	return True


def assign_settings_asset_to_plugin_settings(plugin_settings, options, summary, context):
	settings_array = get_prop(
		plugin_settings,
		("source_data_override_plugin_settings_array", "SourceDataOverridePluginSettingsArray"),
		None)
	settings_array = list(settings_array or [])
	project_settings = [
		settings for settings in settings_array
		if is_instance_of(settings, options["settings_class"])
	]
	matching_settings = [
		settings for settings in project_settings
		if canonical_package_path_from_object_path(object_path(settings)) == options["settings_asset"]
	]

	if matching_settings and len(project_settings) == 1:
		return False, "alreadyAssigned"

	if project_settings and not matching_settings and not options["replace_existing"]:
		summary["settingsReferencesKeptExisting"] += 1
		summary["warnings"].append(
			"Kept existing ProjectAcoustics source settings on {0}; pass -ReplaceExisting to assign {1}.".format(
				context,
				options["settings_asset"]))
		return False, "keptExisting"

	summary["settingsReferencesWouldAssign"] += 1
	if project_settings:
		summary["settingsReferencesWouldReplace"] += len(project_settings)
	else:
		summary["settingsReferencesWouldAdd"] += 1

	if not options["apply"]:
		return True, "wouldAssign"

	if options["settings_asset_object"] is None:
		raise RuntimeError("Settings asset object is unavailable for {0}.".format(context))

	new_settings_array = [
		settings for settings in settings_array
		if not is_instance_of(settings, options["settings_class"])
	]
	new_settings_array.append(options["settings_asset_object"])
	if not set_prop(
		plugin_settings,
		("source_data_override_plugin_settings_array", "SourceDataOverridePluginSettingsArray"),
		new_settings_array):
		raise RuntimeError("Failed to write SourceDataOverridePluginSettingsArray for {0}.".format(context))

	if project_settings:
		summary["settingsReferencesReplaced"] += len(project_settings)
	else:
		summary["settingsReferencesAdded"] += 1
	return True, "assigned"


def process_attenuation_settings(attenuation_settings, options, summary, context):
	if attenuation_settings is None:
		return False, "missingAttenuationSettings"

	changed = enable_source_data_override(attenuation_settings, options, summary, context)
	plugin_settings = get_prop(attenuation_settings, ("plugin_settings", "PluginSettings"), None)
	if plugin_settings is None:
		summary["warnings"].append("Missing PluginSettings struct for {0}.".format(context))
		return changed, "missingPluginSettings"

	settings_changed, assignment_status = assign_settings_asset_to_plugin_settings(plugin_settings, options, summary, context)
	changed = changed or settings_changed

	if options["apply"] and settings_changed:
		if not set_prop(attenuation_settings, ("plugin_settings", "PluginSettings"), plugin_settings):
			raise RuntimeError("Failed to write PluginSettings for {0}.".format(context))

	return changed, assignment_status


def process_sound_attenuation_asset(asset, options, summary, context):
	if asset is None:
		return False

	asset_path = canonical_package_path_from_object_path(object_path(asset))
	if asset_path in options["processed_attenuation_assets"]:
		return False
	options["processed_attenuation_assets"].add(asset_path)
	summary["attenuationAssetsScanned"] += 1

	if object_class_name(asset) != "SoundAttenuation":
		summary["warnings"].append("Skipped non-SoundAttenuation asset {0} ({1}).".format(asset_path, object_class_name(asset)))
		return False

	attenuation_settings = get_prop(asset, ("attenuation", "Attenuation"), None)
	if attenuation_settings is None:
		summary["warnings"].append("Missing Attenuation settings on asset {0}.".format(asset_path))
		return False

	before_status = get_attenuation_status(attenuation_settings, options)
	changed, assignment_status = process_attenuation_settings(attenuation_settings, options, summary, context)
	after_status = get_attenuation_status(attenuation_settings, options)
	summary["attenuationAssetDetails"].append({
		"asset": asset_path,
		"changed": bool(changed),
		"assignmentStatus": assignment_status,
		"before": before_status,
		"after": after_status,
	})
	if changed:
		summary["attenuationAssetsWouldUpdate"] += 1
		if options["apply"]:
			if not set_prop(asset, ("attenuation", "Attenuation"), attenuation_settings):
				raise RuntimeError("Failed to write Attenuation settings on asset {0}.".format(asset_path))
			mark_modified(asset)
			summary["attenuationAssetsUpdated"] += 1
			if options["save"]:
				if save_loaded_asset(asset):
					summary["attenuationAssetsSaved"] += 1
				else:
					summary["warnings"].append("Failed to save attenuation asset {0}.".format(asset_path))
	return changed


def process_explicit_attenuation_assets(options, summary):
	for asset_path in options["attenuation_assets"]:
		try:
			asset = unreal.EditorAssetLibrary.load_asset(asset_path)
		except Exception:
			asset = None
		if asset is None:
			summary["warnings"].append("Failed to load attenuation asset {0}.".format(asset_path))
			continue
		process_sound_attenuation_asset(
			asset,
			options,
			summary,
			"asset {0}".format(asset_path))


def process_all_sound_attenuation_assets(options, summary):
	registry = unreal.AssetRegistryHelpers.get_asset_registry()
	try:
		asset_filter = unreal.ARFilter(
			class_names=["SoundAttenuation"],
			package_paths=["/Game"],
			recursive_paths=True)
		assets = registry.get_assets(asset_filter)
	except Exception as exc:
		summary["warnings"].append("Failed to query all SoundAttenuation assets: {0}".format(exc))
		return

	for asset_data in assets:
		try:
			asset = asset_data.get_asset()
		except Exception:
			asset = None
		if asset is not None:
			process_sound_attenuation_asset(
				asset,
				options,
				summary,
				"asset {0}".format(object_path(asset)))


def process_target_map_references(options, summary):
	if not options["target_map"]:
		return
	if not load_level(options["target_map"]):
		raise RuntimeError("Failed to load target map: {0}".format(options["target_map"]))

	actors = get_all_level_actors()
	summary["actorsScanned"] = len(actors)
	for actor in actors:
		components = get_actor_audio_components(actor, options["audio_component_class"])
		for component in components:
			summary["audioComponentsScanned"] += 1
			attenuation_asset = get_prop(component, ("attenuation_settings", "AttenuationSettings"), None)
			if attenuation_asset is None:
				continue
			context = "{0}.{1} attenuation {2}".format(
				actor_label(actor),
				object_class_name(component),
				object_path(attenuation_asset))
			process_sound_attenuation_asset(attenuation_asset, options, summary, context)


def configure_source_data_override(options):
	summary = {
		"completed": False,
		"settingsAsset": options["settings_asset"],
		"targetMap": options["target_map"],
		"attenuationAssets": options["attenuation_assets"],
		"apply": options["apply"],
		"save": options["save"],
		"replaceExisting": options["replace_existing"],
		"scanAllAttenuationAssets": options["scan_all_attenuation_assets"],
		"sourceSettingValues": options["source_setting_values"],
		"settingsAssetWouldCreate": False,
		"settingsAssetCreated": False,
		"settingsAssetExisted": False,
		"settingsAssetUpdated": False,
		"settingsAssetSaved": False,
		"settingsAssetStatusBefore": {},
		"settingsAssetStatusAfter": {},
		"settingsAssetFieldsWouldUpdate": [],
		"actorsScanned": 0,
		"audioComponentsScanned": 0,
		"attenuationAssetsScanned": 0,
		"attenuationAssetsWouldUpdate": 0,
		"attenuationAssetsUpdated": 0,
		"attenuationAssetsSaved": 0,
		"attenuationAssetDetails": [],
		"sourceDataOverrideWouldEnable": 0,
		"sourceDataOverrideEnabled": 0,
		"settingsReferencesWouldAssign": 0,
		"settingsReferencesWouldAdd": 0,
		"settingsReferencesAdded": 0,
		"settingsReferencesWouldReplace": 0,
		"settingsReferencesReplaced": 0,
		"settingsReferencesKeptExisting": 0,
		"warnings": [],
	}

	options["settings_asset_object"] = get_or_create_settings_asset(options, summary)
	process_explicit_attenuation_assets(options, summary)
	if options["scan_all_attenuation_assets"]:
		process_all_sound_attenuation_assets(options, summary)
	process_target_map_references(options, summary)
	summary["completed"] = True
	return summary


def main():
	report_path = os.environ.get("ORION_ACOUSTIC_SDO_REPORT", DEFAULT_REPORT)
	report = {
		"summary": {},
		"error": "",
		"traceback": "",
	}
	try:
		settings_asset = normalize_asset_path(
			os.environ.get("ORION_ACOUSTIC_SDO_SETTINGS_ASSET"),
			DEFAULT_SETTINGS_ASSET)
		source_setting_values = {
			"applyAcousticsVolumes": parse_optional_bool(os.environ.get("ORION_ACOUSTIC_SDO_APPLY_ACOUSTICS_VOLUMES")),
			"enablePortaling": parse_optional_bool(os.environ.get("ORION_ACOUSTIC_SDO_ENABLE_PORTALING")),
			"enableOcclusion": parse_optional_bool(os.environ.get("ORION_ACOUSTIC_SDO_ENABLE_OCCLUSION")),
			"enableReverb": parse_optional_bool(os.environ.get("ORION_ACOUSTIC_SDO_ENABLE_REVERB")),
			"applyDynamicOpenings": parse_optional_bool(os.environ.get("ORION_ACOUSTIC_SDO_APPLY_DYNAMIC_OPENINGS")),
			"showAcousticParameters": parse_optional_bool(os.environ.get("ORION_ACOUSTIC_SDO_SHOW_ACOUSTIC_PARAMETERS")),
		}
		options = {
			"settings_asset": settings_asset,
			"attenuation_assets": parse_path_list(os.environ.get("ORION_ACOUSTIC_SDO_ATTENUATIONS")),
			"target_map": normalize_asset_path(os.environ.get("ORION_ACOUSTIC_SDO_TARGET_MAP")),
			"apply": parse_bool(os.environ.get("ORION_ACOUSTIC_SDO_APPLY"), False),
			"save": parse_bool(os.environ.get("ORION_ACOUSTIC_SDO_SAVE"), True),
			"replace_existing": parse_bool(os.environ.get("ORION_ACOUSTIC_SDO_REPLACE_EXISTING"), False),
			"scan_all_attenuation_assets": parse_bool(os.environ.get("ORION_ACOUSTIC_SDO_SCAN_ALL_ATTENUATIONS"), False),
			"source_setting_values": source_setting_values,
			"settings_class": load_class(ACOUSTICS_SOURCE_SETTINGS_CLASS_PATH),
			"audio_component_class": load_class(AUDIO_COMPONENT_CLASS_PATH),
			"processed_attenuation_assets": set(),
			"settings_asset_object": None,
		}
		report["summary"] = configure_source_data_override(options)
		log("Configured acoustic SourceDataOverride settings asset: {0}".format(settings_asset))
	except Exception as exc:
		report["error"] = str(exc)
		report["traceback"] = traceback.format_exc()
		error(report["error"])
	finally:
		output_path = write_json(report_path, report)
		log("Report: {0}".format(output_path))
	if report["error"]:
		raise RuntimeError(report["error"])


main()
