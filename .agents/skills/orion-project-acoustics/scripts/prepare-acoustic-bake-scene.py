import json
import os
import traceback

import unreal


ACOUSTIC_GEOMETRY_TAG = "AcousticsGeometry"
ACOUSTIC_NAVIGATION_TAG = "AcousticsNavigation"
DEFAULT_REPORT = "Saved/OrionUE/ProjectAcoustics/prepare-acoustic-bake-scene-report.json"
DEFAULT_NAV_VOLUME_LABEL = "PA_NavMeshBounds_Acoustic"


def parse_bool(value, default=False):
	if value is None or value == "":
		return default
	return str(value).strip().lower() in ("1", "true", "yes", "on")


def log(message):
	unreal.log("[PrepareAcousticBakeScene] " + str(message))


def warn(message):
	unreal.log_warning("[PrepareAcousticBakeScene] " + str(message))


def error(message):
	unreal.log_error("[PrepareAcousticBakeScene] " + str(message))


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


def vector_from_value(value, default=None):
	if default is None:
		default = unreal.Vector(0.0, 0.0, 0.0)
	if value is None:
		return default
	for attrs in (("x", "y", "z"), ("X", "Y", "Z")):
		try:
			return unreal.Vector(float(getattr(value, attrs[0])), float(getattr(value, attrs[1])), float(getattr(value, attrs[2])))
		except Exception:
			pass
	try:
		return unreal.Vector(float(value[0]), float(value[1]), float(value[2]))
	except Exception:
		return default


def make_vector(x_value, y_value, z_value):
	return unreal.Vector(float(x_value), float(y_value), float(z_value))


def vector_payload(value):
	return {
		"x": float(value.x),
		"y": float(value.y),
		"z": float(value.z),
	}


def tags_as_strings(actor):
	tags = get_prop(actor, ("tags", "Tags"), [])
	return [str(tag) for tag in list(tags or [])]


def actor_has_tag(actor, tag):
	for method_name in ("actor_has_tag", "ActorHasTag"):
		method = getattr(actor, method_name, None)
		if method:
			try:
				if method(tag):
					return True
			except Exception:
				pass
	return tag in tags_as_strings(actor)


def add_actor_tag(actor, tag, apply):
	if actor_has_tag(actor, tag):
		return False
	if not apply:
		return False
	tags = list(get_prop(actor, ("tags", "Tags"), []) or [])
	tags.append(tag)
	if not set_prop(actor, ("tags", "Tags"), tags):
		raise RuntimeError("Failed to set Tags on actor: {0}".format(actor_label(actor)))
	try:
		actor.modify()
	except Exception:
		pass
	return True


def remove_actor_tag(actor, tag, apply):
	if not actor_has_tag(actor, tag):
		return False
	if not apply:
		return False
	tags = [existing_tag for existing_tag in list(get_prop(actor, ("tags", "Tags"), []) or []) if str(existing_tag) != tag]
	if not set_prop(actor, ("tags", "Tags"), tags):
		raise RuntimeError("Failed to remove Tag from actor: {0}".format(actor_label(actor)))
	try:
		actor.modify()
	except Exception:
		pass
	return True


def actor_components_by_class(actor, component_class):
	if actor is None or component_class is None:
		return []
	try:
		return list(actor.get_components_by_class(component_class))
	except Exception:
		return []


def all_actor_components(actor):
	actor_component_class = getattr(unreal, "ActorComponent", None)
	return actor_components_by_class(actor, actor_component_class)


def component_static_mesh(component):
	if component is None:
		return None
	for method_name in ("get_static_mesh", "GetStaticMesh"):
		method = getattr(component, method_name, None)
		if method:
			try:
				static_mesh = method()
				if static_mesh is not None:
					return static_mesh
			except Exception:
				pass
	return get_prop(component, ("static_mesh", "StaticMesh"), None)


def is_static_mesh_component(component):
	if component is None:
		return False
	try:
		if isinstance(component, unreal.StaticMeshComponent):
			return True
	except Exception:
		pass
	class_name = object_class_name(component).lower()
	return "staticmeshcomponent" in class_name or "static_mesh_component" in class_name or component_static_mesh(component) is not None


def static_mesh_components(actor):
	static_mesh_component_class = getattr(unreal, "StaticMeshComponent", None)
	components = actor_components_by_class(actor, static_mesh_component_class)
	if components:
		return [component for component in components if component_static_mesh(component) is not None]
	return [component for component in all_actor_components(actor) if is_static_mesh_component(component) and component_static_mesh(component) is not None]


def is_landscape_actor(actor):
	class_name = object_class_name(actor)
	return class_name in ("Landscape", "LandscapeStreamingProxy") or class_name.endswith("LandscapeProxy")


def is_nav_mesh_bounds_volume(actor):
	class_name = object_class_name(actor).lower()
	if "navmeshboundsvolume" in class_name or "nav_mesh_bounds_volume" in class_name:
		return True
	nav_volume_class = getattr(unreal, "NavMeshBoundsVolume", None)
	if nav_volume_class is None:
		return False
	try:
		return isinstance(actor, nav_volume_class)
	except Exception:
		return False


def is_recast_nav_mesh(actor):
	class_name = object_class_name(actor).lower()
	return "recastnavmesh" in class_name or "recast_nav_mesh" in class_name


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


def actor_bounds(actor):
	for args in ((False, True), (False,), ()):
		try:
			result = actor.get_actor_bounds(*args)
			if result and len(result) >= 2:
				origin = vector_from_value(result[0])
				extent = vector_from_value(result[1])
				if extent.x > 0.0 or extent.y > 0.0 or extent.z > 0.0:
					return origin, extent
		except Exception:
			pass
	try:
		box = actor.get_components_bounding_box(True)
		origin = vector_from_value(get_prop(box, ("origin", "Origin"), None))
		extent = vector_from_value(get_prop(box, ("extent", "Extent"), None))
		if extent.x > 0.0 or extent.y > 0.0 or extent.z > 0.0:
			return origin, extent
	except Exception:
		pass
	return None


def merge_bounds(bounds, origin, extent):
	min_value = make_vector(origin.x - extent.x, origin.y - extent.y, origin.z - extent.z)
	max_value = make_vector(origin.x + extent.x, origin.y + extent.y, origin.z + extent.z)
	if bounds is None:
		return {
			"min": min_value,
			"max": max_value,
		}
	bounds["min"] = make_vector(min(bounds["min"].x, min_value.x), min(bounds["min"].y, min_value.y), min(bounds["min"].z, min_value.z))
	bounds["max"] = make_vector(max(bounds["max"].x, max_value.x), max(bounds["max"].y, max_value.y), max(bounds["max"].z, max_value.z))
	return bounds


def bounds_center_and_extent(bounds):
	if bounds is None:
		return make_vector(0.0, 0.0, 0.0), make_vector(5000.0, 5000.0, 1000.0)
	min_value = bounds["min"]
	max_value = bounds["max"]
	center = make_vector(
		(min_value.x + max_value.x) * 0.5,
		(min_value.y + max_value.y) * 0.5,
		(min_value.z + max_value.z) * 0.5)
	extent = make_vector(
		max((max_value.x - min_value.x) * 0.5, 500.0),
		max((max_value.y - min_value.y) * 0.5, 500.0),
		max((max_value.z - min_value.z) * 0.5, 500.0))
	return center, extent


def bounds_payload(bounds):
	center, extent = bounds_center_and_extent(bounds)
	payload = {
		"center": vector_payload(center),
		"extent": vector_payload(extent),
		"suggestedNavMeshBoundsVolumeTransform": {
			"location": vector_payload(center),
			"rotation": {
				"pitch": 0.0,
				"yaw": 0.0,
				"roll": 0.0,
			},
			"scale": vector_payload(make_vector(max(extent.x / 100.0, 5.0), max(extent.y / 100.0, 5.0), max(extent.z / 100.0, 5.0))),
		},
	}
	if bounds is not None:
		payload["min"] = vector_payload(bounds["min"])
		payload["max"] = vector_payload(bounds["max"])
	return payload


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


def set_actor_label(actor, label):
	for args in ((label, True), (label,)):
		try:
			actor.set_actor_label(*args)
			return
		except Exception:
			pass


def spawn_nav_mesh_bounds_volume(center, extent):
	nav_volume_class = getattr(unreal, "NavMeshBoundsVolume", None)
	if nav_volume_class is None:
		raise RuntimeError("unreal.NavMeshBoundsVolume is not available in this editor Python environment.")
	actor = unreal.EditorLevelLibrary.spawn_actor_from_class(nav_volume_class, center, unreal.Rotator(0.0, 0.0, 0.0))
	if actor is None:
		raise RuntimeError("Failed to spawn NavMeshBoundsVolume.")
	set_actor_label(actor, DEFAULT_NAV_VOLUME_LABEL)
	actor.set_actor_scale3d(make_vector(max(extent.x / 100.0, 5.0), max(extent.y / 100.0, 5.0), max(extent.z / 100.0, 5.0)))
	return actor


def prepare_scene(options):
	summary = {
		"completed": False,
		"sourceMap": options["source_map"],
		"apply": options["apply"],
		"save": options["save"],
		"actorsScanned": 0,
		"staticMeshActorsSeen": 0,
		"landscapeActorsSeen": 0,
		"geometryActorsSeen": 0,
		"geometryTagAlreadyPresent": 0,
		"geometryTagWouldAdd": 0,
		"geometryTagAdded": 0,
		"navMeshBoundsVolumesSeen": 0,
		"navMeshBoundsVolumesSeenAfter": 0,
		"navMeshBoundsVolumeWouldCreate": False,
		"navMeshBoundsVolumeCreated": False,
		"navMeshBoundsVolumeNavigationTagAlreadyPresent": 0,
		"navMeshBoundsVolumeNavigationTagWouldRemove": 0,
		"navMeshBoundsVolumeNavigationTagRemoved": 0,
		"recastNavMeshActorsSeen": 0,
		"recastNavMeshActorsWithNavigationTag": 0,
		"recastNavMeshActorsWithNavigationTagAfter": 0,
		"recastNavMeshTagAlreadyPresent": 0,
		"recastNavMeshTagWouldAdd": 0,
		"recastNavMeshTagAdded": 0,
		"manualNavMeshBoundsVolumeAdjustmentRequired": True,
		"navMeshBoundsVolumeNavigationTagUnsupportedByBakeUI": True,
		"saved": False,
		"saveError": "",
		"geometryBounds": {},
		"taggedGeometryActorSample": [],
		"navMeshBoundsVolumeActors": [],
		"warnings": [
			"ProjectAcoustics Bake UI source rejects NavMeshBoundsVolume as the final Navigation target; keep NavMeshBoundsVolume for navmesh generation and tag RecastNavMesh with AcousticsNavigation."
		],
	}
	if not load_level(options["source_map"]):
		raise RuntimeError("Failed to load source map: {0}".format(options["source_map"]))

	actors = get_all_level_actors()
	summary["actorsScanned"] = len(actors)
	geometry_bounds = None
	nav_volumes = []
	recast_nav_meshes = []

	for actor in actors:
		if actor is None:
			continue
		static_mesh_count = len(static_mesh_components(actor))
		is_landscape = is_landscape_actor(actor)
		is_geometry_actor = static_mesh_count > 0 or is_landscape
		if static_mesh_count > 0:
			summary["staticMeshActorsSeen"] += 1
		if is_landscape:
			summary["landscapeActorsSeen"] += 1
		if is_recast_nav_mesh(actor):
			recast_nav_meshes.append(actor)
			summary["recastNavMeshActorsSeen"] += 1
			if actor_has_tag(actor, ACOUSTIC_NAVIGATION_TAG):
				summary["recastNavMeshActorsWithNavigationTag"] += 1
		if is_nav_mesh_bounds_volume(actor):
			nav_volumes.append(actor)
			continue
		if not is_geometry_actor:
			continue

		summary["geometryActorsSeen"] += 1
		current_bounds = actor_bounds(actor)
		if current_bounds:
			geometry_bounds = merge_bounds(geometry_bounds, current_bounds[0], current_bounds[1])
		if actor_has_tag(actor, ACOUSTIC_GEOMETRY_TAG):
			summary["geometryTagAlreadyPresent"] += 1
			continue
		summary["geometryTagWouldAdd"] += 1
		if len(summary["taggedGeometryActorSample"]) < 40:
			summary["taggedGeometryActorSample"].append(actor_label(actor))
		if add_actor_tag(actor, ACOUSTIC_GEOMETRY_TAG, options["apply"]):
			summary["geometryTagAdded"] += 1

	summary["geometryBounds"] = bounds_payload(geometry_bounds)
	summary["navMeshBoundsVolumesSeen"] = len(nav_volumes)
	if not nav_volumes:
		summary["navMeshBoundsVolumeWouldCreate"] = True
		if options["apply"]:
			center, extent = bounds_center_and_extent(geometry_bounds)
			created_nav_volume = spawn_nav_mesh_bounds_volume(center, extent)
			nav_volumes.append(created_nav_volume)
			summary["navMeshBoundsVolumeCreated"] = True

	for nav_volume in nav_volumes:
		summary["navMeshBoundsVolumeActors"].append(actor_label(nav_volume))
		if actor_has_tag(nav_volume, ACOUSTIC_NAVIGATION_TAG):
			summary["navMeshBoundsVolumeNavigationTagAlreadyPresent"] += 1
			summary["navMeshBoundsVolumeNavigationTagWouldRemove"] += 1
			if remove_actor_tag(nav_volume, ACOUSTIC_NAVIGATION_TAG, options["apply"]):
				summary["navMeshBoundsVolumeNavigationTagRemoved"] += 1

	summary["navMeshBoundsVolumesSeenAfter"] = len(nav_volumes)
	for recast_nav_mesh in recast_nav_meshes:
		if actor_has_tag(recast_nav_mesh, ACOUSTIC_NAVIGATION_TAG):
			summary["recastNavMeshTagAlreadyPresent"] += 1
			continue
		summary["recastNavMeshTagWouldAdd"] += 1
		if add_actor_tag(recast_nav_mesh, ACOUSTIC_NAVIGATION_TAG, options["apply"]):
			summary["recastNavMeshTagAdded"] += 1

	summary["recastNavMeshActorsWithNavigationTagAfter"] = sum(1 for recast_nav_mesh in recast_nav_meshes if actor_has_tag(recast_nav_mesh, ACOUSTIC_NAVIGATION_TAG))
	if not recast_nav_meshes:
		summary["warnings"].append("No RecastNavMesh actor was found. Build navigation after adjusting NavMeshBoundsVolume, then rerun this step so AcousticsNavigation can be applied to RecastNavMesh.")

	if options["apply"] and options["save"]:
		summary["saved"] = bool(save_current_level(options["source_map"]))
		if not summary["saved"]:
			summary["saveError"] = "Failed to save current level: {0}".format(options["source_map"])
			return summary

	summary["completed"] = True
	return summary


def main():
	source_map = normalize_package_path(os.environ.get("ORION_ACOUSTIC_BAKE_PREP_SOURCE_MAP"))
	report_path = os.environ.get("ORION_ACOUSTIC_BAKE_PREP_REPORT", DEFAULT_REPORT)
	options = {
		"source_map": source_map,
		"apply": parse_bool(os.environ.get("ORION_ACOUSTIC_BAKE_PREP_APPLY"), False),
		"save": parse_bool(os.environ.get("ORION_ACOUSTIC_BAKE_PREP_SAVE"), True),
	}
	report = {
		"summary": {},
		"error": "",
		"traceback": "",
	}
	try:
		if not source_map:
			raise RuntimeError("ORION_ACOUSTIC_BAKE_PREP_SOURCE_MAP is required.")
		report["summary"] = prepare_scene(options)
		if report["summary"].get("saveError"):
			report["error"] = report["summary"]["saveError"]
		log("Prepared acoustic bake scene: {0}".format(source_map))
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
