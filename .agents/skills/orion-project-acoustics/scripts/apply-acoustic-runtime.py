import json
import os
import traceback

import unreal


DEFAULT_REPORT = "Saved/OrionUE/ProjectAcoustics/apply-acoustic-runtime-report.json"
DEFAULT_FOLDER = "Acoustics"
ACOUSTICS_SPACE_CLASS_PATH = "/Script/ProjectAcoustics.AcousticsSpace"
ACOUSTICS_DEBUG_RENDERER_CLASS_PATH = "/Script/ProjectAcousticsBakeUI.AcousticsDebugRenderer"


def parse_bool(value, default=False):
	if value is None or value == "":
		return default
	return str(value).strip().lower() in ("1", "true", "yes", "on")


def log(message):
	unreal.log("[ApplyAcousticRuntime] " + str(message))


def warn(message):
	unreal.log_warning("[ApplyAcousticRuntime] " + str(message))


def error(message):
	unreal.log_error("[ApplyAcousticRuntime] " + str(message))


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


def normalize_asset_path(value):
	path = str(value or "").strip().replace("\\", "/")
	if not path:
		return ""
	if path.endswith(".uasset"):
		content_index = path.lower().rfind("/content/")
		if content_index >= 0:
			path = "/Game/" + path[content_index + len("/content/"):-len(".uasset")]
		elif path.lower().startswith("content/"):
			path = "/Game/" + path[len("content/"):-len(".uasset")]
	if not path.startswith("/"):
		if path.lower().startswith("content/"):
			path = "/Game/" + path[len("content/"):]
		else:
			path = "/Game/" + path
	leaf = path.rsplit("/", 1)[-1]
	if "." in leaf:
		object_name = leaf.split(".", 1)[1]
		package_name = leaf.split(".", 1)[0]
		if object_name == package_name:
			path = path.rsplit("/", 1)[0] + "/" + package_name
	return path.rstrip("/")


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


def load_actor_class(class_path):
	actor_class = None
	try:
		actor_class = unreal.load_class(None, class_path)
	except Exception:
		actor_class = None
	if actor_class is None:
		try:
			actor_class = unreal.find_object(None, class_path)
		except Exception:
			actor_class = None
	if actor_class is None:
		raise RuntimeError("Failed to load actor class: {0}".format(class_path))
	return actor_class


def actor_is_class(actor, actor_class, fallback_name):
	if actor is None:
		return False
	try:
		current_class = actor.get_class()
		if current_class == actor_class:
			return True
		if hasattr(current_class, "is_child_of") and current_class.is_child_of(actor_class):
			return True
	except Exception:
		pass
	return object_class_name(actor) == fallback_name


def find_actors_by_class(actors, actor_class, fallback_name):
	return [actor for actor in actors if actor_is_class(actor, actor_class, fallback_name)]


def set_actor_label(actor, label):
	for args in ((label, True), (label,)):
		try:
			actor.set_actor_label(*args)
			return True
		except Exception:
			pass
	return False


def set_actor_folder(actor, folder):
	if not folder:
		return False
	for value in (folder,):
		try:
			actor.set_folder_path(value)
			return True
		except Exception:
			pass
	try:
		actor.set_editor_property("folder_path", folder)
		return True
	except Exception:
		return False


def mark_actor_modified(actor):
	try:
		actor.modify()
	except Exception:
		pass
	try:
		actor.mark_package_dirty()
	except Exception:
		pass


def spawn_actor(actor_class, label):
	location = unreal.Vector(0.0, 0.0, 0.0)
	rotation = unreal.Rotator(0.0, 0.0, 0.0)
	editor_actor_subsystem_class = getattr(unreal, "EditorActorSubsystem", None)
	if editor_actor_subsystem_class:
		try:
			editor_actor_subsystem = unreal.get_editor_subsystem(editor_actor_subsystem_class)
			if editor_actor_subsystem and hasattr(editor_actor_subsystem, "spawn_actor_from_class"):
				actor = editor_actor_subsystem.spawn_actor_from_class(actor_class, location, rotation)
				if actor:
					set_actor_label(actor, label)
					return actor
		except Exception:
			pass
	actor = unreal.EditorLevelLibrary.spawn_actor_from_class(actor_class, location, rotation)
	if actor is None:
		raise RuntimeError("Failed to spawn actor: {0}".format(label))
	set_actor_label(actor, label)
	return actor


def apply_runtime(options):
	summary = {
		"completed": False,
		"targetMap": options["target_map"],
		"apply": options["apply"],
		"save": options["save"],
		"folder": options["folder"],
		"acousticsData": options["acoustics_data"],
		"acousticsDataExists": False,
		"acousticsDataClass": "",
		"targetMapLooksLikeAcousticProxy": False,
		"actorsScanned": 0,
		"acousticsSpaceActorsSeen": 0,
		"acousticsDebugRendererActorsSeen": 0,
		"acousticsSpaceCreated": False,
		"acousticsSpaceWouldCreate": False,
		"acousticsDebugRendererCreated": False,
		"acousticsDebugRendererWouldCreate": False,
		"acousticsSpaceLabel": "",
		"acousticsDebugRendererLabel": "",
		"acousticsSpaceFolderSet": False,
		"acousticsDebugRendererFolderSet": False,
		"acousticsDataAssigned": False,
		"acousticsDataWouldAssign": False,
		"previousAcousticsData": "",
		"saved": False,
		"saveError": "",
		"warnings": [],
	}
	target_leaf = options["target_map"].rsplit("/", 1)[-1]
	summary["targetMapLooksLikeAcousticProxy"] = options["target_map"].lower().find("/acousticproxymaps/") >= 0 or target_leaf.endswith("_AcousticProxy")
	if summary["targetMapLooksLikeAcousticProxy"] and not options["allow_proxy_map"]:
		raise RuntimeError("Step 6 must target the real gameplay map, not an AcousticProxy map: {0}".format(options["target_map"]))

	if not unreal.EditorAssetLibrary.does_asset_exist(options["acoustics_data"]):
		raise RuntimeError("UAcousticsData asset does not exist: {0}".format(options["acoustics_data"]))
	acoustics_data = unreal.EditorAssetLibrary.load_asset(options["acoustics_data"])
	if acoustics_data is None:
		raise RuntimeError("Failed to load UAcousticsData asset: {0}".format(options["acoustics_data"]))
	summary["acousticsDataExists"] = True
	summary["acousticsDataClass"] = object_class_name(acoustics_data)
	if summary["acousticsDataClass"] != "AcousticsData":
		summary["warnings"].append("Asset class is {0}; expected AcousticsData.".format(summary["acousticsDataClass"]))

	if not load_level(options["target_map"]):
		raise RuntimeError("Failed to load target map: {0}".format(options["target_map"]))

	space_class = load_actor_class(ACOUSTICS_SPACE_CLASS_PATH)
	debug_renderer_class = load_actor_class(ACOUSTICS_DEBUG_RENDERER_CLASS_PATH)
	actors = get_all_level_actors()
	summary["actorsScanned"] = len(actors)
	space_actors = find_actors_by_class(actors, space_class, "AcousticsSpace")
	debug_renderer_actors = find_actors_by_class(actors, debug_renderer_class, "AcousticsDebugRenderer")
	summary["acousticsSpaceActorsSeen"] = len(space_actors)
	summary["acousticsDebugRendererActorsSeen"] = len(debug_renderer_actors)
	if len(space_actors) > 1:
		summary["warnings"].append("Multiple AcousticsSpace actors exist; the script updates the first one and leaves duplicates untouched.")
	if len(debug_renderer_actors) > 1:
		summary["warnings"].append("Multiple AcousticsDebugRenderer actors exist; the script uses the first one and leaves duplicates untouched.")

	space_actor = space_actors[0] if space_actors else None
	debug_renderer = debug_renderer_actors[0] if debug_renderer_actors else None
	if space_actor is None:
		summary["acousticsSpaceWouldCreate"] = True
		if options["apply"]:
			space_actor = spawn_actor(space_class, options["space_label"])
			summary["acousticsSpaceCreated"] = True
	if debug_renderer is None:
		summary["acousticsDebugRendererWouldCreate"] = True
		if options["apply"]:
			debug_renderer = spawn_actor(debug_renderer_class, options["debug_renderer_label"])
			summary["acousticsDebugRendererCreated"] = True

	if space_actor is not None:
		summary["acousticsSpaceLabel"] = actor_label(space_actor)
		current_data = get_prop(space_actor, ("acoustics_data", "AcousticsData"), None)
		summary["previousAcousticsData"] = object_path(current_data)
		if current_data != acoustics_data:
			summary["acousticsDataWouldAssign"] = True
			if options["apply"]:
				if not set_prop(space_actor, ("acoustics_data", "AcousticsData"), acoustics_data):
					raise RuntimeError("Failed to set AcousticsData on AcousticsSpace.")
				summary["acousticsDataAssigned"] = True
		if options["apply"]:
			set_actor_label(space_actor, options["space_label"])
			summary["acousticsSpaceFolderSet"] = set_actor_folder(space_actor, options["folder"])
			mark_actor_modified(space_actor)
	if debug_renderer is not None:
		summary["acousticsDebugRendererLabel"] = actor_label(debug_renderer)
		if options["apply"]:
			set_actor_label(debug_renderer, options["debug_renderer_label"])
			summary["acousticsDebugRendererFolderSet"] = set_actor_folder(debug_renderer, options["folder"])
			mark_actor_modified(debug_renderer)

	if options["apply"] and options["save"]:
		summary["saved"] = bool(save_current_level(options["target_map"]))
		if not summary["saved"]:
			summary["saveError"] = "Failed to save current level: {0}".format(options["target_map"])
			return summary

	summary["completed"] = True
	return summary


def main():
	target_map = normalize_package_path(os.environ.get("ORION_ACOUSTIC_RUNTIME_TARGET_MAP"))
	acoustics_data = normalize_asset_path(os.environ.get("ORION_ACOUSTIC_RUNTIME_DATA"))
	report_path = os.environ.get("ORION_ACOUSTIC_RUNTIME_REPORT", DEFAULT_REPORT)
	options = {
		"target_map": target_map,
		"acoustics_data": acoustics_data,
		"apply": parse_bool(os.environ.get("ORION_ACOUSTIC_RUNTIME_APPLY"), False),
		"save": parse_bool(os.environ.get("ORION_ACOUSTIC_RUNTIME_SAVE"), True),
		"allow_proxy_map": parse_bool(os.environ.get("ORION_ACOUSTIC_RUNTIME_ALLOW_PROXY_MAP"), False),
		"folder": os.environ.get("ORION_ACOUSTIC_RUNTIME_FOLDER", DEFAULT_FOLDER),
		"space_label": os.environ.get("ORION_ACOUSTIC_RUNTIME_SPACE_LABEL", "AcousticsSpace"),
		"debug_renderer_label": os.environ.get("ORION_ACOUSTIC_RUNTIME_DEBUG_RENDERER_LABEL", "AcousticsDebugRenderer"),
	}
	report = {
		"summary": {},
		"error": "",
		"traceback": "",
	}
	try:
		if not target_map:
			raise RuntimeError("ORION_ACOUSTIC_RUNTIME_TARGET_MAP is required.")
		if not acoustics_data:
			raise RuntimeError("ORION_ACOUSTIC_RUNTIME_DATA is required.")
		report["summary"] = apply_runtime(options)
		if report["summary"].get("saveError"):
			report["error"] = report["summary"]["saveError"]
		log("Applied acoustic runtime setup: {0}".format(target_map))
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
