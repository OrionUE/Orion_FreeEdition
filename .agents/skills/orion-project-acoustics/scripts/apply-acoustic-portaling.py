import json
import os
import traceback

import unreal


DEFAULT_REPORT = "Saved/OrionUE/ProjectAcoustics/apply-acoustic-portaling-report.json"
ACOUSTICS_SOURCE_SETTINGS_CLASS_PATH = "/Script/ProjectAcousticsNative.AcousticsSourceDataOverrideSourceSettings"
ACOUSTICS_AUDIO_COMPONENT_CLASS_PATH = "/Script/ProjectAcousticsNative.AcousticsAudioComponent"
AUDIO_COMPONENT_CLASS_PATH = "/Script/Engine.AudioComponent"


def parse_bool(value, default=False):
	if value is None or value == "":
		return default
	return str(value).strip().lower() in ("1", "true", "yes", "on")


def log(message):
	unreal.log("[ApplyAcousticPortaling] " + str(message))


def warn(message):
	unreal.log_warning("[ApplyAcousticPortaling] " + str(message))


def error(message):
	unreal.log_error("[ApplyAcousticPortaling] " + str(message))


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


def normalize_package_path(value):
	path = str(value or "").strip().replace("\\", "/")
	if not path:
		return ""
	if path.endswith(".umap"):
		content_index = path.lower().rfind("/content/")
		if content_index >= 0:
			path = "/Game/" + path[content_index + len("/content/"):-len(".umap")]
		elif path.lower().startswith("content/"):
			path = "/Game/" + path[len("content/"):-len(".umap")]
	if "." in path:
		path = path.split(".", 1)[0]
	if not path.startswith("/"):
		if path.lower().startswith("content/"):
			path = "/Game/" + path[len("content/"):]
		else:
			path = "/Game/" + path
	return path.rstrip("/")


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


def set_prop_if_needed(obj, names, value):
	current_value = get_prop(obj, names, None)
	if current_value == value:
		return False, True
	return set_prop(obj, names, value), True


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


def save_current_level(package_path):
	level_subsystem_class = getattr(unreal, "LevelEditorSubsystem", None)
	if level_subsystem_class:
		try:
			level_subsystem = unreal.get_editor_subsystem(level_subsystem_class)
			if level_subsystem and hasattr(level_subsystem, "save_current_level"):
				if level_subsystem.save_current_level():
					return True
		except Exception:
			pass
	try:
		if unreal.EditorLevelLibrary.save_current_level():
			return True
	except Exception:
		pass
	return unreal.EditorAssetLibrary.save_asset(package_path, only_if_is_dirty=False)


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
	path = object_path(asset)
	if "." in path:
		path = path.split(".", 1)[0]
	if path:
		try:
			return bool(unreal.EditorAssetLibrary.save_asset(path, only_if_is_dirty=False))
		except Exception:
			pass
	return False


def get_or_create_source_settings(plugin_settings, outer, options, summary, context):
	settings_class = options["settings_class"]
	settings_array = get_prop(
		plugin_settings,
		(
			"source_data_override_plugin_settings_array",
			"SourceDataOverridePluginSettingsArray",
		),
		None)
	if settings_array is None:
		settings_array = []
	else:
		settings_array = list(settings_array)

	project_settings = None
	for settings in settings_array:
		if is_instance_of(settings, settings_class):
			project_settings = settings
			break

	changed = False
	if project_settings is None:
		summary["sourceSettingsWouldAdd"] += 1
		if not options["apply"]:
			return None, True
		project_settings = unreal.new_object(settings_class, outer=outer)
		settings_array.append(project_settings)
		if not set_prop(
			plugin_settings,
			(
				"source_data_override_plugin_settings_array",
				"SourceDataOverridePluginSettingsArray",
			),
			settings_array):
			raise RuntimeError("Failed to add ProjectAcoustics source settings for {0}.".format(context))
		summary["sourceSettingsAdded"] += 1
		changed = True

	return project_settings, changed


def find_project_acoustics_source_settings(plugin_settings, options):
	settings_array = get_prop(
		plugin_settings,
		(
			"source_data_override_plugin_settings_array",
			"SourceDataOverridePluginSettingsArray",
		),
		None)
	if settings_array is None:
		return None

	for settings in list(settings_array):
		if is_instance_of(settings, options["settings_class"]):
			return settings

	return None


def get_source_settings_portaling(source_settings_object):
	if source_settings_object is None:
		return None

	source_settings = get_prop(source_settings_object, ("settings", "Settings"), None)
	if source_settings is None:
		return None

	return get_prop(source_settings, ("enable_portaling", "EnablePortaling"), None)


def get_attenuation_status(attenuation_settings, options):
	if attenuation_settings is None:
		return {
			"sourceDataOverride": None,
			"hasProjectAcousticsSettings": False,
			"enablePortaling": None,
		}

	plugin_settings = get_prop(attenuation_settings, ("plugin_settings", "PluginSettings"), None)
	source_settings = find_project_acoustics_source_settings(plugin_settings, options) if plugin_settings is not None else None

	return {
		"sourceDataOverride": get_prop(
			attenuation_settings,
			(
				"enable_source_data_override",
				"b_enable_source_data_override",
				"bEnableSourceDataOverride",
			),
			None),
		"hasProjectAcousticsSettings": source_settings is not None,
		"enablePortaling": get_source_settings_portaling(source_settings),
	}


def enable_portaling_on_source_settings(source_settings_object, options, summary, context):
	if source_settings_object is None:
		return False

	source_settings = get_prop(source_settings_object, ("settings", "Settings"), None)
	if source_settings is None:
		summary["warnings"].append("Missing Settings struct on {0}.".format(context))
		return False

	current_value = get_prop(source_settings, ("enable_portaling", "EnablePortaling"), None)
	if current_value is True:
		return False

	summary["portalingWouldEnable"] += 1
	if not options["apply"]:
		return True

	if not set_prop(source_settings, ("enable_portaling", "EnablePortaling"), True):
		raise RuntimeError("Failed to set EnablePortaling for {0}.".format(context))
	if not set_prop(source_settings_object, ("settings", "Settings"), source_settings):
		raise RuntimeError("Failed to write source settings for {0}.".format(context))
	summary["portalingEnabled"] += 1
	mark_modified(source_settings_object)
	return True


def enable_source_data_override(attenuation_settings, options, summary, context):
	current_value = get_prop(
		attenuation_settings,
		(
			"enable_source_data_override",
			"b_enable_source_data_override",
			"bEnableSourceDataOverride",
		),
		None)
	if current_value is True:
		return False

	summary["sourceDataOverrideWouldEnable"] += 1
	if not options["apply"]:
		return True

	if not set_prop(
		attenuation_settings,
		(
			"enable_source_data_override",
			"b_enable_source_data_override",
			"bEnableSourceDataOverride",
		),
		True):
		raise RuntimeError("Failed to enable SourceDataOverride for {0}.".format(context))
	summary["sourceDataOverrideEnabled"] += 1
	return True


def process_attenuation_settings(attenuation_settings, outer, options, summary, context):
	if attenuation_settings is None:
		return False

	changed = enable_source_data_override(attenuation_settings, options, summary, context)
	plugin_settings = get_prop(attenuation_settings, ("plugin_settings", "PluginSettings"), None)
	if plugin_settings is None:
		summary["warnings"].append("Missing PluginSettings struct for {0}.".format(context))
		return changed

	source_settings, source_settings_changed = get_or_create_source_settings(plugin_settings, outer, options, summary, context)
	changed = changed or source_settings_changed
	changed = enable_portaling_on_source_settings(source_settings, options, summary, context) or changed

	if options["apply"]:
		if not set_prop(attenuation_settings, ("plugin_settings", "PluginSettings"), plugin_settings):
			raise RuntimeError("Failed to write PluginSettings for {0}.".format(context))

	return changed


def process_sound_attenuation_asset(asset, options, summary, context):
	if asset is None:
		return False

	asset_path = object_path(asset)
	if asset_path in options["processed_attenuation_assets"]:
		return False
	options["processed_attenuation_assets"].add(asset_path)
	summary["attenuationAssetsScanned"] += 1

	attenuation_settings = get_prop(asset, ("attenuation", "Attenuation"), None)
	if attenuation_settings is None:
		summary["warnings"].append("Missing Attenuation settings on asset {0}.".format(asset_path))
		return False

	before_status = get_attenuation_status(attenuation_settings, options)
	changed = process_attenuation_settings(attenuation_settings, asset, options, summary, context)
	after_status = get_attenuation_status(attenuation_settings, options)
	summary["attenuationAssetDetails"].append({
		"asset": asset_path,
		"changed": bool(changed),
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


def process_component_override(component, options, summary, context):
	override_enabled = get_prop(
		component,
		(
			"override_attenuation",
			"b_override_attenuation",
			"bOverrideAttenuation",
		),
		False)
	if not override_enabled and not options["force_component_overrides"]:
		return False

	changed = False
	if not override_enabled and options["force_component_overrides"]:
		summary["componentOverridesWouldEnable"] += 1
		if options["apply"]:
			if not set_prop(
				component,
				(
					"override_attenuation",
					"b_override_attenuation",
					"bOverrideAttenuation",
				),
				True):
				raise RuntimeError("Failed to enable attenuation override for {0}.".format(context))
			summary["componentOverridesEnabled"] += 1
			changed = True

	attenuation_settings = get_prop(component, ("attenuation_overrides", "AttenuationOverrides"), None)
	if attenuation_settings is None:
		summary["warnings"].append("Missing AttenuationOverrides on {0}.".format(context))
		return changed

	settings_changed = process_attenuation_settings(attenuation_settings, component, options, summary, context)
	if settings_changed:
		changed = True
		summary["componentOverridesWouldUpdate"] += 1
		if options["apply"]:
			if not set_prop(component, ("attenuation_overrides", "AttenuationOverrides"), attenuation_settings):
				raise RuntimeError("Failed to write AttenuationOverrides for {0}.".format(context))
			summary["componentOverridesUpdated"] += 1
	return changed


def process_acoustics_audio_component(component, options, summary, context):
	if not is_instance_of(component, options["acoustics_audio_component_class"]):
		return False

	summary["acousticsAudioComponentsScanned"] += 1
	source_settings = get_prop(component, ("settings", "Settings"), None)
	if source_settings is None:
		summary["warnings"].append("Missing AcousticsAudioComponent Settings on {0}.".format(context))
		return False

	current_value = get_prop(source_settings, ("enable_portaling", "EnablePortaling"), None)
	if current_value is True:
		return False

	summary["acousticsAudioComponentsWouldUpdate"] += 1
	if not options["apply"]:
		return True

	if not set_prop(source_settings, ("enable_portaling", "EnablePortaling"), True):
		raise RuntimeError("Failed to set AcousticsAudioComponent EnablePortaling for {0}.".format(context))
	if not set_prop(component, ("settings", "Settings"), source_settings):
		raise RuntimeError("Failed to write AcousticsAudioComponent Settings for {0}.".format(context))
	summary["acousticsAudioComponentsUpdated"] += 1
	return True


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


def apply_portaling(options):
	summary = {
		"completed": False,
		"targetMap": options["target_map"],
		"apply": options["apply"],
		"save": options["save"],
		"scanAllAttenuationAssets": options["scan_all_attenuation_assets"],
		"forceComponentOverrides": options["force_component_overrides"],
		"targetMapLooksLikeAcousticProxy": False,
		"actorsScanned": 0,
		"audioComponentsScanned": 0,
		"acousticsAudioComponentsScanned": 0,
		"acousticsAudioComponentsWouldUpdate": 0,
		"acousticsAudioComponentsUpdated": 0,
		"attenuationAssetsScanned": 0,
		"attenuationAssetsWouldUpdate": 0,
		"attenuationAssetsUpdated": 0,
		"attenuationAssetsSaved": 0,
		"attenuationAssetDetails": [],
		"componentOverridesWouldEnable": 0,
		"componentOverridesEnabled": 0,
		"componentOverridesWouldUpdate": 0,
		"componentOverridesUpdated": 0,
		"sourceDataOverrideWouldEnable": 0,
		"sourceDataOverrideEnabled": 0,
		"sourceSettingsWouldAdd": 0,
		"sourceSettingsAdded": 0,
		"portalingWouldEnable": 0,
		"portalingEnabled": 0,
		"mapWouldUpdate": False,
		"mapSaved": False,
		"saveError": "",
		"warnings": [],
	}

	target_leaf = options["target_map"].rsplit("/", 1)[-1]
	summary["targetMapLooksLikeAcousticProxy"] = (
		options["target_map"].lower().find("/acousticproxymaps/") >= 0
		or target_leaf.endswith("_AcousticProxy"))
	if summary["targetMapLooksLikeAcousticProxy"] and not options["allow_proxy_map"]:
		raise RuntimeError("Portaling should target the real gameplay map, not an AcousticProxy map: {0}".format(options["target_map"]))

	if not load_level(options["target_map"]):
		raise RuntimeError("Failed to load target map: {0}".format(options["target_map"]))

	if options["scan_all_attenuation_assets"]:
		process_all_sound_attenuation_assets(options, summary)

	actors = get_all_level_actors()
	summary["actorsScanned"] = len(actors)
	map_changed = False

	for actor in actors:
		components = get_actor_audio_components(actor, options["audio_component_class"])
		for component in components:
			summary["audioComponentsScanned"] += 1
			context = "{0}.{1}".format(actor_label(actor), object_class_name(component))

			attenuation_asset = get_prop(component, ("attenuation_settings", "AttenuationSettings"), None)
			if attenuation_asset is not None:
				process_sound_attenuation_asset(
					attenuation_asset,
					options,
					summary,
					"component {0} attenuation {1}".format(context, object_path(attenuation_asset)))

			component_changed = process_acoustics_audio_component(component, options, summary, context)
			component_changed = process_component_override(component, options, summary, context) or component_changed
			if component_changed:
				map_changed = True
				if options["apply"]:
					mark_modified(component)
					try:
						mark_modified(actor)
					except Exception:
						pass

	summary["mapWouldUpdate"] = map_changed
	if options["apply"] and options["save"] and map_changed:
		summary["mapSaved"] = bool(save_current_level(options["target_map"]))
		if not summary["mapSaved"]:
			summary["saveError"] = "Failed to save current level: {0}".format(options["target_map"])
			return summary

	summary["completed"] = True
	return summary


def main():
	target_map = normalize_package_path(os.environ.get("ORION_ACOUSTIC_PORTALING_TARGET_MAP"))
	report_path = os.environ.get("ORION_ACOUSTIC_PORTALING_REPORT", DEFAULT_REPORT)
	report = {
		"summary": {},
		"error": "",
		"traceback": "",
	}
	try:
		if not target_map:
			raise RuntimeError("ORION_ACOUSTIC_PORTALING_TARGET_MAP is required.")
		options = {
			"target_map": target_map,
			"apply": parse_bool(os.environ.get("ORION_ACOUSTIC_PORTALING_APPLY"), False),
			"save": parse_bool(os.environ.get("ORION_ACOUSTIC_PORTALING_SAVE"), True),
			"allow_proxy_map": parse_bool(os.environ.get("ORION_ACOUSTIC_PORTALING_ALLOW_PROXY_MAP"), False),
			"scan_all_attenuation_assets": parse_bool(os.environ.get("ORION_ACOUSTIC_PORTALING_SCAN_ALL_ATTENUATIONS"), False),
			"force_component_overrides": parse_bool(os.environ.get("ORION_ACOUSTIC_PORTALING_FORCE_COMPONENT_OVERRIDES"), False),
			"settings_class": load_class(ACOUSTICS_SOURCE_SETTINGS_CLASS_PATH),
			"audio_component_class": load_class(AUDIO_COMPONENT_CLASS_PATH),
			"acoustics_audio_component_class": load_class(ACOUSTICS_AUDIO_COMPONENT_CLASS_PATH),
			"processed_attenuation_assets": set(),
		}
		report["summary"] = apply_portaling(options)
		if report["summary"].get("saveError"):
			report["error"] = report["summary"]["saveError"]
		log("Applied acoustic portaling setup: {0}".format(target_map))
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
