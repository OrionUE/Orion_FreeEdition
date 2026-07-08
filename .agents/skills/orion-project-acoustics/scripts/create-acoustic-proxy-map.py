import json
import os
import re
import shutil
import sys
import traceback

import unreal


ACOUSTIC_GEOMETRY_TAG = "AcousticsGeometry"
ACOUSTIC_NAVIGATION_TAG = "AcousticsNavigation"
PROXY_TAG = "AcousticProxy"
DEFAULT_CUBE_PATH = "/Engine/BasicShapes/Cube.Cube"
DEFAULT_REPORT = "Saved/OrionUE/ProjectAcoustics/acoustic-proxy-map-report.json"
PROXY_STATIC_MESH_FOLDER = "ProxyStaticMesh"
ENVIRONMENT_FOLDER = "Env"
DEFAULT_ENVIRONMENT_ACTORS = (
	{
		"class_name": "SkyLight",
		"label": "PA_SkyLight",
		"location": (0.0, 0.0, 500.0),
		"rotation": (0.0, 0.0, 0.0),
	},
	{
		"class_name": "DirectionalLight",
		"label": "PA_DirectionalLight",
		"location": (0.0, 0.0, 1000.0),
		"rotation": (-45.0, -35.0, 0.0),
	},
	{
		"class_name": "SkyAtmosphere",
		"label": "PA_SkyAtmosphere",
		"location": (0.0, 0.0, 0.0),
		"rotation": (0.0, 0.0, 0.0),
	},
	{
		"class_name": "ExponentialHeightFog",
		"label": "PA_HeightFog",
		"location": (0.0, 0.0, 200.0),
		"rotation": (0.0, 0.0, 0.0),
	},
)


def parse_bool(value, default=False):
	if value is None or value == "":
		return default
	return str(value).strip().lower() in ("1", "true", "yes", "on")


def parse_int(value, default_value):
	try:
		return int(value)
	except (TypeError, ValueError):
		return default_value


def parse_static_mesh_mode(value):
	text = re.sub(r"[^a-z0-9]+", "_", str(value or "").strip().lower()).strip("_")
	if text in ("source_mesh", "sourcemesh", "render_mesh", "rendermesh", "source"):
		return "source_mesh"
	return "bounds"


def parse_landscape_mode(value):
	text = re.sub(r"[^a-z0-9]+", "_", str(value or "").strip().lower()).strip("_")
	if text in ("skip", "none", "heightfield", "height_field"):
		return "skip"
	return "bounds"


def log(message):
	unreal.log("[AcousticProxyMap] " + str(message))


def warn(message):
	unreal.log_warning("[AcousticProxyMap] " + str(message))


def error(message):
	unreal.log_error("[AcousticProxyMap] " + str(message))


def sanitize_asset_part(value):
	value = re.sub(r"[^A-Za-z0-9_]+", "_", str(value or "").strip())
	value = re.sub(r"_+", "_", value).strip("_")
	return value or "Map"


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


def normalize_optional_package_path(value):
	text = str(value or "").strip()
	if not text or text.lower() in ("none", "null"):
		return ""
	return normalize_package_path(text)


def default_destination_for_source(source_map):
	source_name = sanitize_asset_part(source_map.rsplit("/", 1)[-1])
	return "/Game/Acoustics/AcousticProxyMaps/" + source_name + "_AcousticProxy"


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
	if isinstance(obj, dict):
		if isinstance(names, str):
			return obj.get(names, default_value)
		for name in names:
			if name in obj:
				return obj.get(name, default_value)
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


def resolve_object_reference(value):
	if value is None:
		return None
	if hasattr(value, "get_class"):
		return value
	for method_name in ("get", "load_synchronous", "LoadSynchronous"):
		method = getattr(value, method_name, None)
		if method:
			try:
				resolved = method()
				if resolved is not None:
					return resolved
			except Exception:
				pass
	text = str(value or "").strip()
	if not text or text == "None":
		return None
	load_object = getattr(unreal, "load_object", None)
	if load_object:
		try:
			resolved = load_object(None, text)
			if resolved is not None:
				return resolved
		except Exception:
			pass
	editor_asset_library = getattr(unreal, "EditorAssetLibrary", None)
	load_asset = getattr(editor_asset_library, "load_asset", None)
	if load_asset:
		try:
			resolved = load_asset(text)
			if resolved is not None:
				return resolved
		except Exception:
			pass
	return None


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


def make_rotator(pitch=0.0, yaw=0.0, roll=0.0):
	return unreal.Rotator(float(roll), float(pitch), float(yaw))


def rotator_from_value(value, default=None):
	if default is None:
		default = make_rotator()
	if value is None:
		return default
	for attrs in (("pitch", "yaw", "roll"), ("Pitch", "Yaw", "Roll")):
		try:
			return make_rotator(float(getattr(value, attrs[0])), float(getattr(value, attrs[1])), float(getattr(value, attrs[2])))
		except Exception:
			pass
	rotator_method = getattr(value, "rotator", None)
	if rotator_method:
		try:
			return rotator_from_value(rotator_method(), default)
		except Exception:
			pass
	try:
		return make_rotator(float(value[0]), float(value[1]), float(value[2]))
	except Exception:
		return default


def vector_to_list(value):
	value = vector_from_value(value)
	return [float(value.x), float(value.y), float(value.z)]


def rotator_to_list(value):
	value = rotator_from_value(value)
	return [float(value.pitch), float(value.yaw), float(value.roll)]


def make_vector(size):
	return unreal.Vector(float(size[0]), float(size[1]), float(size[2]))


def get_component_transform(component):
	for method_name in ("get_world_transform", "get_component_transform"):
		method = getattr(component, method_name, None)
		if method:
			try:
				return method()
			except Exception:
				pass
	return None


def component_world_location(component, transform=None):
	for method_name in ("get_world_location", "get_component_location"):
		method = getattr(component, method_name, None)
		if method:
			try:
				return vector_from_value(method())
			except Exception:
				pass
	if transform is None:
		transform = get_component_transform(component)
	return get_transform_location(transform, unreal.Vector(0.0, 0.0, 0.0))


def component_world_rotation(component, transform=None):
	for method_name in ("get_world_rotation", "get_component_rotation"):
		method = getattr(component, method_name, None)
		if method:
			try:
				return rotator_from_value(method())
			except Exception:
				pass
	if transform is None:
		transform = get_component_transform(component)
	return get_transform_rotation(transform, make_rotator())


def get_transform_location(transform, fallback):
	if transform is None:
		return vector_from_value(fallback)
	for name in ("translation", "location"):
		value = get_prop(transform, name, None)
		if value is not None:
			return vector_from_value(value)
	try:
		return transform.translation
	except Exception:
		return vector_from_value(fallback)


def get_transform_rotation(transform, fallback):
	if transform is None:
		return rotator_from_value(fallback)
	for name in ("rotation", "rotator"):
		value = get_prop(transform, name, None)
		if value is not None:
			return rotator_from_value(value)
	try:
		return transform.rotation.rotator()
	except Exception:
		return rotator_from_value(fallback)


def get_transform_scale(transform, fallback=(1.0, 1.0, 1.0)):
	if transform is None:
		return vector_from_value(fallback, unreal.Vector(1.0, 1.0, 1.0))
	value = get_prop(transform, ("scale3d", "scale"), None)
	if value is not None:
		return vector_from_value(value, unreal.Vector(1.0, 1.0, 1.0))
	return vector_from_value(fallback, unreal.Vector(1.0, 1.0, 1.0))


def transform_position(transform, local_position, fallback_origin):
	local_position = vector_from_value(local_position)
	if transform is not None:
		for method_name in ("transform_position", "transform_location"):
			method = getattr(transform, method_name, None)
			if method:
				try:
					return method(local_position)
				except Exception:
					pass
		try:
			return unreal.MathLibrary.transform_location(transform, local_position)
		except Exception:
			pass
	scale = get_transform_scale(transform)
	origin = get_transform_location(transform, fallback_origin)
	return unreal.Vector(origin.x + local_position.x * scale.x, origin.y + local_position.y * scale.y, origin.z + local_position.z * scale.z)


def combine_rotation(transform, local_rotation, fallback_rotation):
	base_rotation = get_transform_rotation(transform, fallback_rotation)
	local_rotation = rotator_from_value(local_rotation)
	try:
		return unreal.MathLibrary.compose_rotators(local_rotation, base_rotation)
	except Exception:
		return make_rotator(
			base_rotation.pitch + local_rotation.pitch,
			base_rotation.yaw + local_rotation.yaw,
			base_rotation.roll + local_rotation.roll)


def scaled_size(transform, size):
	scale = get_transform_scale(transform)
	return [
		max(abs(float(size[0]) * scale.x), 1.0),
		max(abs(float(size[1]) * scale.y), 1.0),
		max(abs(float(size[2]) * scale.z), 1.0),
	]


def box_min_max(value):
	for min_name, max_name in (("min", "max"), ("Min", "Max")):
		min_value = get_prop(value, min_name, None)
		max_value = get_prop(value, max_name, None)
		if min_value is not None and max_value is not None:
			return vector_from_value(min_value), vector_from_value(max_value)
	return None, None


def bounds_origin_extent(value):
	origin = vector_from_value(get_prop(value, ("origin", "Origin"), None))
	extent = vector_from_value(get_prop(value, ("box_extent", "BoxExtent"), None))
	if extent.x > 0.0 and extent.y > 0.0 and extent.z > 0.0:
		return origin, extent
	return None, None


def local_bounds_shape_from_min_max(local_min, local_max, transform, fallback_location, shape_name):
	local_center = unreal.Vector(
		(local_min.x + local_max.x) * 0.5,
		(local_min.y + local_max.y) * 0.5,
		(local_min.z + local_max.z) * 0.5)
	local_size = [
		max(local_max.x - local_min.x, 1.0),
		max(local_max.y - local_min.y, 1.0),
		max(local_max.z - local_min.z, 1.0),
	]
	return {
		"shape": shape_name,
		"location": vector_to_list(transform_position(transform, local_center, fallback_location)),
		"rotation": rotator_to_list(get_transform_rotation(transform, make_rotator())),
		"size": scaled_size(transform, local_size),
	}


def actor_tags(actor):
	tags = get_prop(actor, ("tags", "Tags"), [])
	return [str(tag) for tag in tags or []]


def set_actor_tags(actor, tags):
	clean_tags = []
	seen = set()
	for tag in tags:
		text = str(tag)
		if text and text not in seen:
			clean_tags.append(text)
			seen.add(text)
	set_prop(actor, ("tags", "Tags"), clean_tags)


def set_actor_folder(actor, folder_path):
	if actor is None:
		return False
	try:
		actor.set_folder_path(unreal.Name(folder_path))
		return True
	except Exception:
		return set_prop(actor, ("folder_path", "FolderPath"), unreal.Name(folder_path))


def merge_tags(*tag_lists):
	merged = []
	seen = set()
	for tags in tag_lists:
		for tag in tags or []:
			text = str(tag)
			if text and text not in seen:
				merged.append(text)
				seen.add(text)
	return merged


def object_class_name(obj):
	if obj is None:
		return ""
	try:
		return obj.get_class().get_name()
	except Exception:
		return type(obj).__name__


def actor_label(actor):
	if actor is None:
		return ""
	if isinstance(actor, dict):
		return str(actor.get("label") or actor.get("name") or "")
	try:
		return actor.get_actor_label()
	except Exception:
		try:
			return actor.get_name()
		except Exception:
			return str(actor)


def get_actor_transform(actor):
	for method_name in ("get_actor_transform", "GetActorTransform"):
		method = getattr(actor, method_name, None)
		if method:
			try:
				return method()
			except Exception:
				pass
	location = unreal.Vector(0.0, 0.0, 0.0)
	rotation = make_rotator()
	scale = unreal.Vector(1.0, 1.0, 1.0)
	try:
		location = actor.get_actor_location()
	except Exception:
		pass
	try:
		rotation = actor.get_actor_rotation()
	except Exception:
		pass
	try:
		scale = actor.get_actor_scale3d()
	except Exception:
		pass
	return unreal.Transform(location, rotation, scale)


def make_transform(location=None, rotation=None, scale=None):
	return unreal.Transform(
		vector_from_value(location, unreal.Vector(0.0, 0.0, 0.0)),
		rotator_from_value(rotation, make_rotator()),
		vector_from_value(scale, unreal.Vector(1.0, 1.0, 1.0)))


def compose_world_transform(local_transform, parent_transform):
	if parent_transform is None:
		return local_transform
	if local_transform is None:
		return parent_transform
	try:
		return unreal.MathLibrary.compose_transforms(local_transform, parent_transform)
	except Exception:
		local_location = get_transform_location(local_transform, unreal.Vector(0.0, 0.0, 0.0))
		local_rotation = get_transform_rotation(local_transform, make_rotator())
		local_scale = get_transform_scale(local_transform)
		parent_scale = get_transform_scale(parent_transform)
		return make_transform(
			transform_position(parent_transform, local_location, local_location),
			combine_rotation(parent_transform, local_rotation, local_rotation),
			unreal.Vector(local_scale.x * parent_scale.x, local_scale.y * parent_scale.y, local_scale.z * parent_scale.z))


def transform_shape(shape, parent_transform):
	if parent_transform is None:
		return shape
	transformed = dict(shape)
	location = make_vector(shape["location"])
	rotation = rotator_from_value(shape["rotation"])
	transformed["location"] = vector_to_list(transform_position(parent_transform, location, location))
	transformed["rotation"] = rotator_to_list(combine_rotation(parent_transform, rotation, rotation))
	transformed["size"] = scaled_size(parent_transform, shape["size"])
	return transformed


def source_static_mesh_shape(transform):
	return {
		"shape": "SourceStaticMesh",
		"location": vector_to_list(get_transform_location(transform, unreal.Vector(0.0, 0.0, 0.0))),
		"rotation": rotator_to_list(get_transform_rotation(transform, make_rotator())),
		"scale": vector_to_list(get_transform_scale(transform)),
	}


def component_materials(component):
	materials = []
	count = 0
	try:
		count = int(component.get_num_materials())
	except Exception:
		count = 0
	for index in range(max(count, 1)):
		try:
			material = component.get_material(index)
		except Exception:
			material = None
		if material and material not in materials:
			materials.append(material)
	return materials


def object_path(obj):
	if obj is None:
		return ""
	try:
		return obj.get_path_name()
	except Exception:
		return str(obj)


def object_key(obj):
	path = object_path(obj)
	if path and path != "None":
		return path
	return "{0}:{1}".format(type(obj).__name__, id(obj))


def actor_components_by_class(actor, component_class):
	if actor is None or component_class is None:
		return []
	try:
		return list(actor.get_components_by_class(component_class))
	except Exception:
		return []


def all_actor_components(actor):
	actor_component_class = getattr(unreal, "ActorComponent", None)
	if actor_component_class is None:
		return []
	return actor_components_by_class(actor, actor_component_class)


def component_owner_actor(component):
	for method_name in ("get_owner", "GetOwner"):
		method = getattr(component, method_name, None)
		if method:
			try:
				owner = method()
				if owner is not None:
					return owner
			except Exception:
				pass
	return get_prop(component, ("owner", "Owner"), None)


def component_physical_material(component):
	body_instance = get_prop(component, ("body_instance", "BodyInstance"), None)
	if body_instance is not None:
		for method_name in ("get_simple_physical_material", "GetSimplePhysicalMaterial"):
			method = getattr(body_instance, method_name, None)
			if method:
				try:
					return method()
				except Exception:
					pass
		value = get_prop(body_instance, ("phys_material_override", "PhysMaterialOverride"), None)
		if value is not None:
			return value
	return None


def static_mesh_body_setup(static_mesh):
	if static_mesh is None:
		return None
	for method_name in ("get_body_setup", "GetBodySetup"):
		method = getattr(static_mesh, method_name, None)
		if method:
			try:
				return method()
			except Exception:
				pass
	return get_prop(static_mesh, ("body_setup", "BodySetup"), None)


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
	if "staticmeshcomponent" in class_name or "static_mesh_component" in class_name:
		return True
	return component_static_mesh(component) is not None


def static_mesh_components(actor):
	components = actor_components_by_class(actor, unreal.StaticMeshComponent)
	if components:
		return components
	return [component for component in all_actor_components(actor) if is_static_mesh_component(component)]


def is_child_actor_component(component):
	class_name = object_class_name(component).lower()
	return "childactorcomponent" in class_name or "child_actor_component" in class_name


def child_actor_components(actor):
	child_actor_component_class = getattr(unreal, "ChildActorComponent", None)
	if child_actor_component_class is not None:
		components = actor_components_by_class(actor, child_actor_component_class)
		if components:
			return components
	return [component for component in all_actor_components(actor) if is_child_actor_component(component)]


def child_actor_from_component(component):
	for method_name in ("get_child_actor", "GetChildActor"):
		method = getattr(component, method_name, None)
		if method:
			try:
				actor = method()
				if actor is not None:
					return actor
			except Exception:
				pass
	return get_prop(component, ("child_actor", "ChildActor"), None)


def is_pcg_component(component):
	class_name = object_class_name(component).lower()
	return class_name == "pcgcomponent" or class_name.endswith("pcgcomponent")


def pcg_components(actor):
	return [component for component in all_actor_components(actor) if is_pcg_component(component)]


def pcg_managed_resources(component):
	resources = []
	container = get_prop(component, ("managed_resource_container", "ManagedResourceContainer"), None)
	if container is not None:
		resources.extend(list_prop(container, ("generated_resources", "GeneratedResources")))
	resources.extend(list_prop(component, ("generated_resources_DEPRECATED", "GeneratedResources_DEPRECATED")))
	unique_resources = []
	seen = set()
	for resource in resources:
		resource = resolve_object_reference(resource)
		if resource is None:
			continue
		key = object_key(resource)
		if key in seen:
			continue
		seen.add(key)
		unique_resources.append(resource)
	return unique_resources


def pcg_generated_components(resource):
	values = []
	values.append(get_prop(resource, ("generated_component", "GeneratedComponent"), None))
	values.extend(list_prop(resource, ("generated_components", "GeneratedComponents")))
	components = []
	seen = set()
	for value in values:
		component = resolve_object_reference(value)
		if component is None:
			continue
		key = object_key(component)
		if key in seen:
			continue
		seen.add(key)
		components.append(component)
	return components


def pcg_generated_actors(resource):
	values = []
	values.extend(list_prop(resource, ("generated_actors_array", "GeneratedActorsArray")))
	values.extend(list_prop(resource, ("generated_actors", "GeneratedActors")))
	actors = []
	seen = set()
	for value in values:
		actor = resolve_object_reference(value)
		if actor is None:
			continue
		key = object_key(actor)
		if key in seen:
			continue
		seen.add(key)
		actors.append(actor)
	return actors


def aggregate_geometry(body_setup):
	return get_prop(body_setup, ("agg_geom", "AggGeom"), None)


def list_prop(obj, names):
	value = get_prop(obj, names, [])
	if value is None:
		return []
	try:
		return list(value)
	except TypeError:
		return []


def static_mesh_bounds_shape(static_mesh, transform, fallback_location):
	for method_name in ("get_bounding_box", "GetBoundingBox"):
		method = getattr(static_mesh, method_name, None)
		if method:
			try:
				local_min, local_max = box_min_max(method())
				if local_min is not None and local_max is not None:
					return local_bounds_shape_from_min_max(local_min, local_max, transform, fallback_location, "StaticMeshBoundsFallback")
			except Exception:
				pass
	for method_name in ("get_bounds", "GetBounds"):
		method = getattr(static_mesh, method_name, None)
		if method:
			try:
				origin, extent = bounds_origin_extent(method())
				if origin is not None and extent is not None:
					local_min = unreal.Vector(origin.x - extent.x, origin.y - extent.y, origin.z - extent.z)
					local_max = unreal.Vector(origin.x + extent.x, origin.y + extent.y, origin.z + extent.z)
					return local_bounds_shape_from_min_max(local_min, local_max, transform, fallback_location, "StaticMeshBoundsFallback")
			except Exception:
				pass
	for prop_name in ("extended_bounds", "ExtendedBounds"):
		value = get_prop(static_mesh, prop_name, None)
		if value is not None:
			origin, extent = bounds_origin_extent(value)
			if origin is not None and extent is not None:
				local_min = unreal.Vector(origin.x - extent.x, origin.y - extent.y, origin.z - extent.z)
				local_max = unreal.Vector(origin.x + extent.x, origin.y + extent.y, origin.z + extent.z)
				return local_bounds_shape_from_min_max(local_min, local_max, transform, fallback_location, "StaticMeshBoundsFallback")
	return None


def component_bounds_shape(component, transform, static_mesh):
	for method_name in ("get_local_bounds", "GetLocalBounds"):
		method = getattr(component, method_name, None)
		if method:
			try:
				result = method()
				if isinstance(result, tuple) and len(result) >= 2:
					local_min = vector_from_value(result[0])
					local_max = vector_from_value(result[1])
					local_center = unreal.Vector(
						(local_min.x + local_max.x) * 0.5,
						(local_min.y + local_max.y) * 0.5,
						(local_min.z + local_max.z) * 0.5)
					local_size = [
						max(local_max.x - local_min.x, 1.0),
						max(local_max.y - local_min.y, 1.0),
						max(local_max.z - local_min.z, 1.0),
					]
					return {
						"shape": "ComponentLocalBoundsFallback",
						"location": vector_to_list(transform_position(transform, local_center, component_world_location(component, transform))),
						"rotation": rotator_to_list(get_transform_rotation(transform, component_world_rotation(component, transform))),
						"size": scaled_size(transform, local_size),
					}
			except Exception:
				pass
	static_mesh_shape = static_mesh_bounds_shape(static_mesh, transform, component_world_location(component, transform))
	if static_mesh_shape:
		return static_mesh_shape
	try:
		bounds = component.bounds
	except Exception:
		bounds = get_prop(component, "bounds", None)
	if bounds is None:
		return None
	origin = vector_from_value(get_prop(bounds, ("origin", "Origin"), None))
	extent = vector_from_value(get_prop(bounds, ("box_extent", "BoxExtent"), None))
	if extent.x <= 0.0 or extent.y <= 0.0 or extent.z <= 0.0:
		return None
	return {
		"shape": "ComponentWorldBoundsFallback",
		"location": vector_to_list(origin),
		"rotation": rotator_to_list(make_rotator()),
		"size": [max(extent.x * 2.0, 1.0), max(extent.y * 2.0, 1.0), max(extent.z * 2.0, 1.0)],
	}


def shape_from_box(component, transform, elem):
	center = vector_from_value(get_prop(elem, ("center", "Center"), None))
	rotation = rotator_from_value(get_prop(elem, ("rotation", "Rotation"), None))
	size = [
		float(get_prop(elem, ("x", "X"), 0.0) or 0.0),
		float(get_prop(elem, ("y", "Y"), 0.0) or 0.0),
		float(get_prop(elem, ("z", "Z"), 0.0) or 0.0),
	]
	if min(size) <= 0.0:
		return None
	return {
		"shape": "BoxCollision",
		"location": vector_to_list(transform_position(transform, center, component_world_location(component, transform))),
		"rotation": rotator_to_list(combine_rotation(transform, rotation, component_world_rotation(component, transform))),
		"size": scaled_size(transform, size),
	}


def shape_from_sphere(component, transform, elem):
	center = vector_from_value(get_prop(elem, ("center", "Center"), None))
	radius = float(get_prop(elem, ("radius", "Radius"), 0.0) or 0.0)
	if radius <= 0.0:
		return None
	size = [radius * 2.0, radius * 2.0, radius * 2.0]
	return {
		"shape": "SphereCollisionAsBox",
		"location": vector_to_list(transform_position(transform, center, component_world_location(component, transform))),
		"rotation": rotator_to_list(get_transform_rotation(transform, component_world_rotation(component, transform))),
		"size": scaled_size(transform, size),
	}


def shape_from_capsule(component, transform, elem):
	center = vector_from_value(get_prop(elem, ("center", "Center"), None))
	rotation = rotator_from_value(get_prop(elem, ("rotation", "Rotation"), None))
	radius = float(get_prop(elem, ("radius", "Radius"), 0.0) or 0.0)
	length = float(get_prop(elem, ("length", "Length"), 0.0) or 0.0)
	if radius <= 0.0:
		return None
	size = [radius * 2.0, radius * 2.0, max(length + radius * 2.0, radius * 2.0)]
	return {
		"shape": "CapsuleCollisionAsBox",
		"location": vector_to_list(transform_position(transform, center, component_world_location(component, transform))),
		"rotation": rotator_to_list(combine_rotation(transform, rotation, component_world_rotation(component, transform))),
		"size": scaled_size(transform, size),
	}


def shape_from_convex(component, transform, elem):
	points = []
	for point in list_prop(elem, ("vertex_data", "VertexData")):
		points.append(vector_from_value(point))
	if not points:
		return None
	min_x = min(point.x for point in points)
	min_y = min(point.y for point in points)
	min_z = min(point.z for point in points)
	max_x = max(point.x for point in points)
	max_y = max(point.y for point in points)
	max_z = max(point.z for point in points)
	center = unreal.Vector((min_x + max_x) * 0.5, (min_y + max_y) * 0.5, (min_z + max_z) * 0.5)
	size = [max_x - min_x, max_y - min_y, max_z - min_z]
	if min(size) <= 0.0:
		return None
	return {
		"shape": "ConvexCollisionBounds",
		"location": vector_to_list(transform_position(transform, center, component_world_location(component, transform))),
		"rotation": rotator_to_list(get_transform_rotation(transform, component_world_rotation(component, transform))),
		"size": scaled_size(transform, size),
	}


def collision_shapes_for_component(component, transform, fallback_bounds):
	static_mesh = component_static_mesh(component)
	body_setup = static_mesh_body_setup(static_mesh)
	agg_geom = aggregate_geometry(body_setup)
	shapes = []
	if agg_geom is not None:
		for elem in list_prop(agg_geom, ("box_elems", "BoxElems")):
			shape = shape_from_box(component, transform, elem)
			if shape:
				shapes.append(shape)
		for elem in list_prop(agg_geom, ("sphere_elems", "SphereElems")):
			shape = shape_from_sphere(component, transform, elem)
			if shape:
				shapes.append(shape)
		for elem in list_prop(agg_geom, ("sphyl_elems", "SphylElems")):
			shape = shape_from_capsule(component, transform, elem)
			if shape:
				shapes.append(shape)
		for elem in list_prop(agg_geom, ("convex_elems", "ConvexElems")):
			shape = shape_from_convex(component, transform, elem)
			if shape:
				shapes.append(shape)
	if not shapes and fallback_bounds:
		shape = component_bounds_shape(component, transform, static_mesh)
		if shape:
			shapes.append(shape)
	return shapes


def has_collision_enabled(component):
	for method_name in ("get_collision_enabled", "GetCollisionEnabled"):
		method = getattr(component, method_name, None)
		if method:
			try:
				value = str(method())
				return "NO_COLLISION" not in value.upper()
			except Exception:
				pass
	value = get_prop(component, ("collision_enabled", "CollisionEnabled"), None)
	if value is None:
		return True
	return "NO_COLLISION" not in str(value).upper()


def is_movable(component):
	value = get_prop(component, ("mobility", "Mobility"), "")
	return "MOVABLE" in str(value).upper()


def component_instance_transforms(component, include_instanced, max_instances):
	if not include_instanced:
		return [get_component_transform(component)]
	if not isinstance(component, unreal.InstancedStaticMeshComponent):
		return [get_component_transform(component)]
	count = 0
	try:
		count = int(component.get_instance_count())
	except Exception:
		count = int(get_prop(component, "per_instance_sm_data", []) and len(get_prop(component, "per_instance_sm_data", [])) or 0)
	if count <= 0:
		return [get_component_transform(component)]
	if count > max_instances:
		warn("Skipping instances over cap on component {0}: {1} > {2}".format(component.get_name(), count, max_instances))
		return []
	transforms = []
	for index in range(count):
		try:
			result = component.get_instance_transform(index, world_space=True)
		except TypeError:
			try:
				result = component.get_instance_transform(index, True)
			except Exception:
				result = None
		except Exception:
			result = None
		if isinstance(result, tuple):
			result = result[-1]
		if result is not None:
			transforms.append(result)
	return transforms


def is_level_instance_actor(actor):
	class_name = object_class_name(actor).lower()
	if "levelinstance" in class_name or "packedlevelactor" in class_name:
		return hasattr(actor, "get_world_asset") or get_prop(actor, ("world_asset", "WorldAsset"), None) is not None
	return False


def level_instance_world_asset_path(actor):
	world_asset = None
	for method_name in ("get_world_asset", "GetWorldAsset"):
		method = getattr(actor, method_name, None)
		if method:
			try:
				world_asset = method()
				break
			except Exception:
				pass
	if world_asset is None:
		world_asset = get_prop(actor, ("world_asset", "WorldAsset"), None)
	path = object_path(world_asset)
	if not path or path == "None":
		path = str(world_asset or "")
	return normalize_optional_package_path(path)


def current_editor_world():
	editor_subsystem_class = getattr(unreal, "UnrealEditorSubsystem", None)
	if editor_subsystem_class:
		try:
			editor_subsystem = unreal.get_editor_subsystem(editor_subsystem_class)
			if editor_subsystem and hasattr(editor_subsystem, "get_editor_world"):
				world = editor_subsystem.get_editor_world()
				if world:
					return world
		except Exception:
			pass
	method = getattr(unreal.EditorLevelLibrary, "get_editor_world", None)
	if method:
		try:
			return method()
		except Exception:
			pass
	return None


def current_streaming_levels():
	world = current_editor_world()
	if not world:
		return []
	for method_name in ("get_streaming_levels", "GetStreamingLevels"):
		method = getattr(world, method_name, None)
		if method:
			try:
				return [level for level in method() or [] if level]
			except Exception:
				pass
	value = get_prop(world, ("streaming_levels", "StreamingLevels"), [])
	return [level for level in value or [] if level]


def streaming_level_world_asset_path(streaming_level):
	for method_name in ("get_world_asset_package_name", "get_world_asset_package_f_name"):
		method = getattr(streaming_level, method_name, None)
		if method:
			try:
				path = normalize_optional_package_path(method())
				if path:
					return path
			except Exception:
				pass
	for method_name in ("get_world_asset", "GetWorldAsset"):
		method = getattr(streaming_level, method_name, None)
		if method:
			try:
				path = normalize_optional_package_path(object_path(method()))
				if path:
					return path
			except Exception:
				pass
	for prop_name in ("world_asset", "WorldAsset", "world_asset_package_name", "WorldAssetPackageName", "package_name_to_load", "PackageNameToLoad"):
		path = normalize_optional_package_path(get_prop(streaming_level, prop_name, ""))
		if path:
			return path
	return ""


def streaming_level_transform(streaming_level):
	for method_name in ("get_level_transform", "GetLevelTransform"):
		method = getattr(streaming_level, method_name, None)
		if method:
			try:
				return method()
			except Exception:
				pass
	return get_prop(streaming_level, ("level_transform", "LevelTransform"), None)


def streaming_level_label(streaming_level, child_map):
	try:
		name = streaming_level.get_name()
		if name:
			return name
	except Exception:
		pass
	return sanitize_asset_part(child_map.rsplit("/", 1)[-1])


def is_landscape_actor(actor):
	class_name = object_class_name(actor)
	return class_name in ("Landscape", "LandscapeStreamingProxy") or class_name.endswith("LandscapeProxy")


def landscape_components(actor):
	try:
		components = list(actor.get_components_by_class(unreal.ActorComponent))
	except Exception:
		components = []
	collision_components = []
	render_components = []
	for component in components:
		class_name = object_class_name(component)
		if class_name == "LandscapeHeightfieldCollisionComponent":
			collision_components.append(component)
		elif class_name == "LandscapeComponent":
			render_components.append(component)
	return collision_components or render_components


def landscape_materials(actor, component):
	materials = component_materials(component)
	if materials:
		return materials
	for prop_name in ("landscape_material", "LandscapeMaterial"):
		material = get_prop(actor, prop_name, None)
		if material:
			return [material]
	return []


def landscape_component_shape(component, parent_transform):
	bounds = get_prop(component, ("bounds", "Bounds"), None)
	if bounds is None:
		return None
	origin = vector_from_value(get_prop(bounds, ("origin", "Origin"), None))
	extent = vector_from_value(get_prop(bounds, ("box_extent", "BoxExtent"), None))
	if extent.x <= 0.0 or extent.y <= 0.0:
		return None
	size = [max(extent.x * 2.0, 1.0), max(extent.y * 2.0, 1.0), max(extent.z * 2.0, 50.0)]
	shape = {
		"shape": "LandscapeComponentBounds",
		"location": vector_to_list(origin),
		"rotation": rotator_to_list(make_rotator()),
		"size": size,
	}
	return transform_shape(shape, parent_transform)


def landscape_actor_bounds_shape(actor, parent_transform):
	result = None
	for args in ((True, False), (False, False), (True,), (False,)):
		try:
			result = actor.get_actor_bounds(*args)
			break
		except Exception:
			pass
	if not result or not isinstance(result, tuple) or len(result) < 2:
		return None
	origin = vector_from_value(result[0])
	extent = vector_from_value(result[1])
	if extent.x <= 0.0 or extent.y <= 0.0:
		return None
	size = [max(extent.x * 2.0, 1.0), max(extent.y * 2.0, 1.0), max(extent.z * 2.0, 50.0)]
	shape = {
		"shape": "LandscapeActorBounds",
		"location": vector_to_list(origin),
		"rotation": rotator_to_list(make_rotator()),
		"size": size,
	}
	return transform_shape(shape, parent_transform)


def collect_proxy_instructions(options):
	instructions = []
	summary = {
		"mapsScanned": 0,
		"maxLevelInstanceDepthSeen": 0,
		"maxNestedMapDepthSeen": 0,
		"actorsScanned": 0,
		"levelInstanceActorsSeen": 0,
		"levelInstanceMapsQueued": 0,
		"levelInstanceMapsSkipped": 0,
		"streamingLevelsSeen": 0,
		"streamingLevelMapsQueued": 0,
		"streamingLevelMapsSkipped": 0,
		"childActorComponentsSeen": 0,
		"childActorsQueued": 0,
		"childActorsSkipped": 0,
		"maxChildActorDepthSeen": 0,
		"pcgComponentsSeen": 0,
		"pcgManagedResourcesSeen": 0,
		"pcgGeneratedComponentsSeen": 0,
		"pcgGeneratedActorsSeen": 0,
		"componentsScanned": 0,
		"componentsUsed": 0,
		"componentsSkipped": 0,
		"landscapeActorsScanned": 0,
		"landscapeComponentsScanned": 0,
		"landscapeComponentsUsed": 0,
		"landscapeComponentsSkipped": 0,
		"landscapeShapeCount": 0,
		"landscapeActorBoundsFallbackCount": 0,
		"proxyShapeCount": 0,
		"multiMaterialComponentCount": 0,
		"fallbackBoundsCount": 0,
		"sourceMeshProxyCount": 0,
		"landscapeSkippedByModeCount": 0,
	}
	skipped = []
	multi_material = []
	scanned_maps = []

	def effective_source_label(prefix, actor):
		label = actor_label(actor)
		return "{0}{1}".format(prefix, label) if prefix else label

	def append_multi_material(actor, component, materials, source_label):
		material_paths = [object_path(material) for material in materials]
		if len(material_paths) > 1:
			summary["multiMaterialComponentCount"] += 1
			multi_material.append({
				"actor": source_label,
				"component": component.get_name(),
				"materials": material_paths,
				"chosenMaterial": material_paths[0],
			})
		return material_paths

	def increment_map_skip(source_kind):
		if source_kind == "streaming_level":
			summary["streamingLevelMapsSkipped"] += 1
		elif source_kind == "level_instance":
			summary["levelInstanceMapsSkipped"] += 1

	def collect_static_component(actor, component, tags, source_label, source_map, parent_transform, visited_components):
		if component is None:
			return
		component_key = object_key(component)
		if component_key in visited_components:
			return
		visited_components.add(component_key)
		summary["componentsScanned"] += 1
		if not options["include_movable"] and is_movable(component):
			summary["componentsSkipped"] += 1
			skipped.append({"actor": source_label, "component": component.get_name(), "reason": "movable", "sourceMap": source_map})
			return
		if not has_collision_enabled(component):
			summary["componentsSkipped"] += 1
			skipped.append({"actor": source_label, "component": component.get_name(), "reason": "no_collision", "sourceMap": source_map})
			return
		static_mesh = component_static_mesh(component)
		if static_mesh is None:
			summary["componentsSkipped"] += 1
			skipped.append({"actor": source_label, "component": component.get_name(), "reason": "no_static_mesh", "sourceMap": source_map})
			return
		materials = component_materials(component)
		material_paths = append_multi_material(actor, component, materials, source_label)
		instance_transforms = component_instance_transforms(component, options["include_instanced"], options["max_instances_per_component"])
		if not instance_transforms:
			summary["componentsSkipped"] += 1
			skipped.append({"actor": source_label, "component": component.get_name(), "reason": "instance_cap_or_no_instance_transform", "sourceMap": source_map})
			return
		component_shape_count = 0
		for instance_index, transform in enumerate(instance_transforms):
			transform = compose_world_transform(transform, parent_transform)
			if options["static_mesh_mode"] == "source_mesh":
				instructions.append({
					"sourceActor": source_label,
					"sourceActorPath": actor.get_path_name(),
					"sourceMap": source_map,
					"sourceComponent": component.get_name(),
					"sourceMesh": object_path(static_mesh),
					"sourceTags": tags,
					"instanceIndex": instance_index,
					"shapeIndex": 0,
					"shape": source_static_mesh_shape(transform),
					"materials": material_paths,
					"physicalMaterial": object_path(component_physical_material(component)),
				})
				component_shape_count += 1
				summary["sourceMeshProxyCount"] += 1
				continue
			shapes = collision_shapes_for_component(component, transform, options["fallback_bounds"])
			if not shapes:
				continue
			for shape_index, shape in enumerate(shapes):
				if shape["shape"].endswith("BoundsFallback"):
					summary["fallbackBoundsCount"] += 1
				instructions.append({
					"sourceActor": source_label,
					"sourceActorPath": actor.get_path_name(),
					"sourceMap": source_map,
					"sourceComponent": component.get_name(),
					"sourceMesh": object_path(static_mesh),
					"sourceTags": tags,
					"instanceIndex": instance_index,
					"shapeIndex": shape_index,
					"shape": shape,
					"materials": material_paths,
					"physicalMaterial": object_path(component_physical_material(component)),
				})
				component_shape_count += 1
		if component_shape_count > 0:
			summary["componentsUsed"] += 1
			summary["proxyShapeCount"] += component_shape_count
		else:
			summary["componentsSkipped"] += 1
			skipped.append({"actor": source_label, "component": component.get_name(), "reason": "no_simple_collision_or_component_bounds", "sourceMap": source_map})

	def collect_landscape_actor(actor, tags, source_label, source_map, parent_transform):
		summary["landscapeActorsScanned"] += 1
		if options["landscape_mode"] == "skip":
			summary["landscapeSkippedByModeCount"] += 1
			return
		components = landscape_components(actor)
		landscape_shape_count = 0
		if not components:
			skipped.append({"actor": source_label, "component": "", "reason": "no_landscape_collision_components_using_actor_bounds", "sourceMap": source_map})
		else:
			for component in components:
				summary["landscapeComponentsScanned"] += 1
				if not has_collision_enabled(component):
					summary["landscapeComponentsSkipped"] += 1
					skipped.append({"actor": source_label, "component": component.get_name(), "reason": "landscape_no_collision", "sourceMap": source_map})
					continue
				shape = landscape_component_shape(component, parent_transform)
				if not shape:
					summary["landscapeComponentsSkipped"] += 1
					skipped.append({"actor": source_label, "component": component.get_name(), "reason": "landscape_no_bounds", "sourceMap": source_map})
					continue
				materials = landscape_materials(actor, component)
				material_paths = append_multi_material(actor, component, materials, source_label)
				instructions.append({
					"sourceActor": source_label,
					"sourceActorPath": actor.get_path_name(),
					"sourceMap": source_map,
					"sourceComponent": component.get_name(),
					"sourceMesh": "Landscape",
					"sourceTags": tags,
					"instanceIndex": 0,
					"shapeIndex": landscape_shape_count,
					"shape": shape,
					"materials": material_paths,
					"physicalMaterial": object_path(component_physical_material(component)),
				})
				landscape_shape_count += 1
				summary["landscapeComponentsUsed"] += 1
				summary["landscapeShapeCount"] += 1
				summary["proxyShapeCount"] += 1
		if landscape_shape_count > 0:
			return
		shape = landscape_actor_bounds_shape(actor, parent_transform)
		if not shape:
			summary["landscapeComponentsSkipped"] += 1
			skipped.append({"actor": source_label, "component": "", "reason": "landscape_no_actor_bounds", "sourceMap": source_map})
			return
		materials = []
		if components:
			materials = landscape_materials(actor, components[0])
		else:
			materials = landscape_materials(actor, None)
		material_paths = [object_path(material) for material in materials]
		instructions.append({
			"sourceActor": source_label,
			"sourceActorPath": actor.get_path_name(),
			"sourceMap": source_map,
			"sourceComponent": "ActorBounds",
			"sourceMesh": "Landscape",
			"sourceTags": tags,
			"instanceIndex": 0,
			"shapeIndex": 0,
			"shape": shape,
			"materials": material_paths,
			"physicalMaterial": "",
		})
		summary["landscapeActorBoundsFallbackCount"] += 1
		summary["landscapeShapeCount"] += 1
		summary["proxyShapeCount"] += 1

	def collect_map_recursive(source_map, parent_transform, inherited_tags, source_prefix, depth, stack, source_kind="root"):
		source_map = normalize_package_path(source_map)
		if not source_map:
			increment_map_skip(source_kind)
			return
		if depth > options["max_level_instance_depth"]:
			increment_map_skip(source_kind)
			skipped.append({"actor": source_prefix.rstrip("/") or source_map, "component": "", "reason": "max_level_instance_depth", "sourceMap": source_map})
			return
		if source_map in stack:
			increment_map_skip(source_kind)
			skipped.append({"actor": source_prefix.rstrip("/") or source_map, "component": "", "reason": "recursive_level_instance_loop", "sourceMap": source_map})
			return
		log("Scanning map: {0}".format(source_map))
		if not load_level(source_map):
			if depth == 0:
				raise RuntimeError("Failed to load source map: {0}".format(source_map))
			increment_map_skip(source_kind)
			skipped.append({"actor": source_prefix.rstrip("/") or source_map, "component": "", "reason": "failed_to_load_map", "sourceMap": source_map})
			return
		summary["mapsScanned"] += 1
		summary["maxLevelInstanceDepthSeen"] = max(summary["maxLevelInstanceDepthSeen"], depth)
		summary["maxNestedMapDepthSeen"] = max(summary["maxNestedMapDepthSeen"], depth)
		scanned_maps.append({"map": source_map, "depth": depth, "prefix": source_prefix})
		actors = unreal.EditorLevelLibrary.get_all_level_actors()
		summary["actorsScanned"] += len(actors)
		child_maps = []
		visited_actors = set()
		visited_components = set()

		def collect_pcg_generated_outputs(actor, tags, source_label, child_depth):
			for pcg_component in pcg_components(actor):
				summary["pcgComponentsSeen"] += 1
				resources = pcg_managed_resources(pcg_component)
				summary["pcgManagedResourcesSeen"] += len(resources)
				for resource in resources:
					for component in pcg_generated_components(resource):
						summary["pcgGeneratedComponentsSeen"] += 1
						if not is_static_mesh_component(component):
							skipped.append({"actor": source_label, "component": object_path(component), "reason": "pcg_generated_component_not_static_mesh", "sourceMap": source_map})
							continue
						component_owner = component_owner_actor(component) or actor
						component_label = source_label
						if object_key(component_owner) != object_key(actor):
							component_label = "{0}/PCG/{1}".format(source_label, actor_label(component_owner))
						collect_static_component(component_owner, component, tags, component_label, source_map, parent_transform, visited_components)
					for generated_actor in pcg_generated_actors(resource):
						summary["pcgGeneratedActorsSeen"] += 1
						generated_label = "{0}/PCGActor/{1}".format(source_label, actor_label(generated_actor))
						collect_actor_geometry(generated_actor, tags, generated_label, child_depth + 1)

		def collect_child_actors(actor, tags, source_label, child_depth):
			if child_depth >= options["max_child_actor_depth"]:
				for child_component in child_actor_components(actor):
					summary["childActorComponentsSeen"] += 1
					summary["childActorsSkipped"] += 1
					skipped.append({"actor": source_label, "component": child_component.get_name(), "reason": "max_child_actor_depth", "sourceMap": source_map})
				return
			for child_component in child_actor_components(actor):
				summary["childActorComponentsSeen"] += 1
				child_actor = child_actor_from_component(child_component)
				if child_actor is None:
					summary["childActorsSkipped"] += 1
					skipped.append({"actor": source_label, "component": child_component.get_name(), "reason": "child_actor_component_no_child_actor", "sourceMap": source_map})
					continue
				summary["childActorsQueued"] += 1
				child_label = "{0}/{1}/{2}".format(source_label, child_component.get_name(), actor_label(child_actor))
				collect_actor_geometry(child_actor, tags, child_label, child_depth + 1)

		def collect_actor_geometry(actor, inherited_actor_tags, source_label, child_depth):
			actor = resolve_object_reference(actor)
			if actor is None:
				return
			actor_key = object_key(actor)
			if actor_key in visited_actors:
				return
			visited_actors.add(actor_key)
			tags = merge_tags(inherited_actor_tags, actor_tags(actor))
			summary["maxChildActorDepthSeen"] = max(summary["maxChildActorDepthSeen"], child_depth)
			if is_level_instance_actor(actor):
				summary["levelInstanceActorsSeen"] += 1
				child_map = level_instance_world_asset_path(actor)
				if child_map:
					child_maps.append({
						"sourceMap": child_map,
						"parentTransform": compose_world_transform(get_actor_transform(actor), parent_transform),
						"tags": tags,
						"sourcePrefix": source_label + "/",
						"sourceKind": "level_instance",
					})
					summary["levelInstanceMapsQueued"] += 1
				else:
					summary["levelInstanceMapsSkipped"] += 1
					skipped.append({"actor": source_label, "component": "", "reason": "level_instance_no_world_asset", "sourceMap": source_map})
			should_process_actor = not options["only_acoustic_tagged"] or ACOUSTIC_GEOMETRY_TAG in tags or ACOUSTIC_NAVIGATION_TAG in tags
			if should_process_actor:
				if is_landscape_actor(actor):
					collect_landscape_actor(actor, tags, source_label, source_map, parent_transform)
				else:
					for component in static_mesh_components(actor):
						collect_static_component(actor, component, tags, source_label, source_map, parent_transform, visited_components)
					collect_pcg_generated_outputs(actor, tags, source_label, child_depth)
			collect_child_actors(actor, tags, source_label, child_depth)

		for actor in actors:
			if actor is None:
				continue
			collect_actor_geometry(actor, inherited_tags, effective_source_label(source_prefix, actor), 0)
		for streaming_level in current_streaming_levels():
			summary["streamingLevelsSeen"] += 1
			child_map = streaming_level_world_asset_path(streaming_level)
			if child_map:
				child_label = effective_source_label(source_prefix, {"label": streaming_level_label(streaming_level, child_map)})
				child_maps.append({
					"sourceMap": child_map,
					"parentTransform": compose_world_transform(streaming_level_transform(streaming_level), parent_transform),
					"tags": inherited_tags,
					"sourcePrefix": child_label + "/",
					"sourceKind": "streaming_level",
				})
				summary["streamingLevelMapsQueued"] += 1
			else:
				summary["streamingLevelMapsSkipped"] += 1
				skipped.append({"actor": streaming_level_label(streaming_level, source_map), "component": "", "reason": "streaming_level_no_world_asset", "sourceMap": source_map})
		for child in child_maps:
			collect_map_recursive(
				child["sourceMap"],
				child["parentTransform"],
				child["tags"],
				child["sourcePrefix"],
				depth + 1,
				stack + [source_map],
				child["sourceKind"])

	collect_map_recursive(options["source_map"], None, [], "", 0, [], "root")
	summary["scannedMaps"] = scanned_maps[:1000]
	summary["scannedMapsTruncated"] = len(scanned_maps) > 1000
	return instructions, summary, skipped, multi_material


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


def new_level(package_path):
	level_subsystem_class = getattr(unreal, "LevelEditorSubsystem", None)
	if level_subsystem_class:
		try:
			level_subsystem = unreal.get_editor_subsystem(level_subsystem_class)
			if level_subsystem and hasattr(level_subsystem, "new_level"):
				return level_subsystem.new_level(package_path)
		except Exception:
			pass
	return unreal.EditorLevelLibrary.new_level(package_path)


def content_path_for_game_package(package_path, extension):
	if not package_path.startswith("/Game/"):
		raise RuntimeError("Only /Game packages can be mapped to project Content files: {0}".format(package_path))
	relative_path = package_path[len("/Game/"):]
	parts = [part for part in relative_path.split("/") if part]
	if not parts or any(part in (".", "..") for part in parts):
		raise RuntimeError("Unsafe package path: {0}".format(package_path))
	content_dir = os.path.abspath(unreal.Paths.project_content_dir())
	file_path = os.path.abspath(os.path.join(content_dir, *parts) + extension)
	if os.path.commonpath([content_dir, file_path]) != content_dir:
		raise RuntimeError("Resolved package path escapes Content: {0}".format(package_path))
	return file_path


def package_directory(package_path):
	if not package_path.startswith("/Game/"):
		raise RuntimeError("Only /Game packages are supported: {0}".format(package_path))
	return package_path.rsplit("/", 1)[0]


def external_package_directory(package_path, root_name):
	if not package_path.startswith("/Game/"):
		raise RuntimeError("Only /Game packages can be mapped to external package directories: {0}".format(package_path))
	relative_path = package_path[len("/Game/"):]
	parts = [part for part in relative_path.split("/") if part]
	if not parts or any(part in (".", "..") for part in parts):
		raise RuntimeError("Unsafe package path: {0}".format(package_path))
	content_dir = os.path.abspath(unreal.Paths.project_content_dir())
	directory = os.path.abspath(os.path.join(content_dir, root_name, *parts))
	if os.path.commonpath([content_dir, directory]) != content_dir:
		raise RuntimeError("Resolved external package path escapes Content: {0}".format(package_path))
	return directory


def collect_unreal_garbage():
	try:
		unreal.SystemLibrary.collect_garbage()
	except Exception:
		pass


def remove_stale_destination_files(package_path):
	removed_all = True
	map_file = content_path_for_game_package(package_path, ".umap")
	if os.path.isfile(map_file):
		try:
			os.remove(map_file)
			log("Removed stale destination map file: {0}".format(map_file))
		except OSError as exc:
			removed_all = False
			warn("Could not remove destination map file {0}: {1}".format(map_file, exc))
	for root_name in ("__ExternalActors__", "__ExternalObjects__"):
		directory = external_package_directory(package_path, root_name)
		if os.path.isdir(directory):
			try:
				shutil.rmtree(directory)
				log("Removed stale destination external directory: {0}".format(directory))
			except OSError as exc:
				removed_all = False
				warn("Could not remove destination external directory {0}: {1}".format(directory, exc))
	return removed_all


def refresh_asset_registry_for_package(package_path):
	asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()
	if asset_registry is None:
		return
	try:
		if hasattr(asset_registry, "wait_for_premade_asset_registry"):
			asset_registry.wait_for_premade_asset_registry()
	except Exception:
		pass
	try:
		asset_registry.scan_paths_synchronous([package_directory(package_path)], True)
	except Exception as exc:
		warn("Could not rescan destination package path {0}: {1}".format(package_directory(package_path), exc))
	try:
		map_file = content_path_for_game_package(package_path, ".umap")
		if os.path.isfile(map_file):
			asset_registry.scan_files_synchronous([map_file], True)
	except Exception as exc:
		warn("Could not rescan destination package file {0}: {1}".format(package_path, exc))
	try:
		asset_registry.wait_for_completion()
	except Exception:
		pass


def destination_is_available(package_path):
	map_file = content_path_for_game_package(package_path, ".umap")
	return not unreal.EditorAssetLibrary.does_asset_exist(package_path) and not os.path.exists(map_file)


def find_available_destination_map(destination_map):
	for index in range(1, 1000):
		candidate = "{0}_{1:03d}".format(destination_map, index)
		refresh_asset_registry_for_package(candidate)
		if destination_is_available(candidate):
			return candidate
	raise RuntimeError("Failed to find available destination map name for: {0}".format(destination_map))


def prepare_destination_map(destination_map, options):
	refresh_asset_registry_for_package(destination_map)
	if options["overwrite"]:
		if unreal.EditorAssetLibrary.does_asset_exist(destination_map):
			if not unreal.EditorAssetLibrary.delete_asset(destination_map):
				warn("Editor asset delete failed for {0}; trying stale file cleanup.".format(destination_map))
			collect_unreal_garbage()
		if not remove_stale_destination_files(destination_map):
			raise RuntimeError("Destination could not be overwritten because one or more files are locked: {0}. Close Unreal Editor or release the files, then rerun Step 1.".format(destination_map))
		refresh_asset_registry_for_package(destination_map)
		if destination_is_available(destination_map):
			return destination_map
		raise RuntimeError("Destination remained reserved after overwrite cleanup: {0}. Refusing to write an alternate AcousticProxy map.".format(destination_map))
	if not destination_is_available(destination_map):
		raise RuntimeError("Destination map already exists: {0}. Pass -Overwrite to replace it.".format(destination_map))
	return destination_map


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


def apply_proxy_materials(component, instruction, label):
	for material_index, material_path in enumerate(instruction["materials"]):
		material = unreal.EditorAssetLibrary.load_asset(material_path) if material_path else None
		if material:
			try:
				component.set_material(material_index, material)
			except Exception:
				if material_index == 0:
					warn("Could not set material on {0}: {1}".format(label, material_path))
	physical_material = unreal.EditorAssetLibrary.load_asset(instruction["physicalMaterial"]) if instruction["physicalMaterial"] else None
	if physical_material:
		body_instance = get_prop(component, ("body_instance", "BodyInstance"), None)
		if body_instance is not None and not set_prop(body_instance, ("phys_material_override", "PhysMaterialOverride"), physical_material):
			warn("Could not set physical material override on {0}: {1}".format(label, instruction["physicalMaterial"]))


def set_actor_label(actor, label):
	try:
		actor.set_actor_label(label, mark_dirty=True)
	except TypeError:
		actor.set_actor_label(label)


def spawn_environment_actor(actor_info):
	actor_class = getattr(unreal, actor_info["class_name"], None)
	if actor_class is None:
		warn("Environment actor class is not available: {0}".format(actor_info["class_name"]))
		return None
	location = make_vector(actor_info["location"])
	rotation = rotator_from_value(actor_info["rotation"])
	actor = unreal.EditorLevelLibrary.spawn_actor_from_class(actor_class, location, rotation)
	if actor is None:
		warn("Failed to spawn environment actor: {0}".format(actor_info["label"]))
		return None
	set_actor_label(actor, actor_info["label"])
	set_actor_folder(actor, ENVIRONMENT_FOLDER)
	return actor


def spawn_default_environment_actors():
	spawned = 0
	for actor_info in DEFAULT_ENVIRONMENT_ACTORS:
		if spawn_environment_actor(actor_info) is not None:
			spawned += 1
	return spawned


def spawn_proxy_actor(cube_mesh, instruction, index):
	shape = instruction["shape"]
	location = make_vector(shape["location"])
	rotation = rotator_from_value(shape["rotation"])
	is_source_mesh = shape.get("shape") == "SourceStaticMesh"
	if is_source_mesh:
		scale = make_vector(shape["scale"])
	else:
		size = shape["size"]
		scale = unreal.Vector(max(size[0], 1.0) / 100.0, max(size[1], 1.0) / 100.0, max(size[2], 1.0) / 100.0)
	actor = unreal.EditorLevelLibrary.spawn_actor_from_class(unreal.StaticMeshActor, location, rotation)
	if actor is None:
		raise RuntimeError("Failed to spawn proxy actor")
	label = "ACPX_{0:05d}_{1}".format(index, sanitize_asset_part(instruction["sourceActor"])[:48])
	set_actor_label(actor, label)
	set_actor_folder(actor, PROXY_STATIC_MESH_FOLDER)
	actor.set_actor_scale3d(scale)
	component = actor.get_component_by_class(unreal.StaticMeshComponent)
	if component is not None:
		mesh = None
		if is_source_mesh:
			mesh = unreal.EditorAssetLibrary.load_asset(instruction["sourceMesh"])
			if mesh is None:
				raise RuntimeError("Failed to load source mesh for proxy: {0}".format(instruction["sourceMesh"]))
		else:
			mesh = cube_mesh
		try:
			component.set_static_mesh(mesh)
		except Exception:
			pass
		apply_proxy_materials(component, instruction, label)
		try:
			component.set_collision_enabled(unreal.CollisionEnabled.NO_COLLISION)
		except Exception:
			pass
	tags = [PROXY_TAG]
	tags.append(ACOUSTIC_GEOMETRY_TAG)
	if ACOUSTIC_NAVIGATION_TAG in instruction["sourceTags"]:
		tags.append(ACOUSTIC_NAVIGATION_TAG)
	tags.append("SourceActor_" + sanitize_asset_part(instruction["sourceActor"])[:64])
	set_actor_tags(actor, tags)
	return actor


def create_proxy_map(destination_map, instructions, options):
	actual_destination_map = prepare_destination_map(destination_map, options)
	if not new_level(actual_destination_map):
		raise RuntimeError("Failed to create level: {0}".format(actual_destination_map))
	needs_cube_mesh = any(instruction["shape"].get("shape") != "SourceStaticMesh" for instruction in instructions)
	cube_mesh = None
	if needs_cube_mesh:
		cube_mesh = unreal.EditorAssetLibrary.load_asset(DEFAULT_CUBE_PATH)
		if cube_mesh is None:
			raise RuntimeError("Failed to load cube mesh: {0}".format(DEFAULT_CUBE_PATH))
	spawned = 0
	for index, instruction in enumerate(instructions, start=1):
		spawn_proxy_actor(cube_mesh, instruction, index)
		spawned += 1
	spawned_environment_actors = spawn_default_environment_actors()
	if not save_current_level(actual_destination_map):
		raise RuntimeError("Failed to save destination map: {0}".format(actual_destination_map))
	return spawned, actual_destination_map, spawned_environment_actors


def main():
	source_map = normalize_package_path(os.environ.get("ORION_ACOUSTIC_PROXY_SOURCE_MAP"))
	destination_map = normalize_package_path(os.environ.get("ORION_ACOUSTIC_PROXY_DESTINATION_MAP"))
	if not source_map:
		raise RuntimeError("ORION_ACOUSTIC_PROXY_SOURCE_MAP is required.")
	if not destination_map:
		destination_map = default_destination_for_source(source_map)
	if source_map == destination_map:
		raise RuntimeError("Destination map must be different from source map: {0}".format(source_map))
	options = {
		"apply": parse_bool(os.environ.get("ORION_ACOUSTIC_PROXY_APPLY"), False),
		"overwrite": parse_bool(os.environ.get("ORION_ACOUSTIC_PROXY_OVERWRITE"), False),
		"only_acoustic_tagged": parse_bool(os.environ.get("ORION_ACOUSTIC_PROXY_ONLY_ACOUSTIC_TAGGED"), False),
		"include_movable": parse_bool(os.environ.get("ORION_ACOUSTIC_PROXY_INCLUDE_MOVABLE"), False),
		"include_instanced": parse_bool(os.environ.get("ORION_ACOUSTIC_PROXY_INCLUDE_INSTANCED"), True),
		"fallback_bounds": parse_bool(os.environ.get("ORION_ACOUSTIC_PROXY_FALLBACK_BOUNDS"), True),
		"max_instances_per_component": parse_int(os.environ.get("ORION_ACOUSTIC_PROXY_MAX_INSTANCES_PER_COMPONENT"), 5000),
		"max_level_instance_depth": parse_int(os.environ.get("ORION_ACOUSTIC_PROXY_MAX_LEVEL_INSTANCE_DEPTH"), 8),
		"max_child_actor_depth": parse_int(os.environ.get("ORION_ACOUSTIC_PROXY_MAX_CHILD_ACTOR_DEPTH"), 8),
		"static_mesh_mode": parse_static_mesh_mode(os.environ.get("ORION_ACOUSTIC_PROXY_STATIC_MESH_MODE")),
		"landscape_mode": parse_landscape_mode(os.environ.get("ORION_ACOUSTIC_PROXY_LANDSCAPE_MODE")),
		"source_map": source_map,
	}
	report_path = os.environ.get("ORION_ACOUSTIC_PROXY_REPORT", DEFAULT_REPORT)

	log("Source map: {0}".format(source_map))
	log("Destination map: {0}".format(destination_map))
	log("Apply: {0}".format(options["apply"]))
	instructions, summary, skipped, multi_material = collect_proxy_instructions(options)
	summary["sourceMap"] = source_map
	summary["requestedDestinationMap"] = destination_map
	summary["destinationMap"] = destination_map
	summary["apply"] = options["apply"]
	summary["overwrite"] = options["overwrite"]
	summary["spawnedProxyActors"] = 0
	summary["spawnedEnvironmentActors"] = 0
	summary["proxyStaticMeshFolder"] = PROXY_STATIC_MESH_FOLDER
	summary["environmentFolder"] = ENVIRONMENT_FOLDER
	if options["apply"]:
		summary["spawnedProxyActors"], summary["destinationMap"], summary["spawnedEnvironmentActors"] = create_proxy_map(destination_map, instructions, options)
	summary["completed"] = True
	payload = {
		"summary": summary,
		"options": options,
		"skipped": skipped[:1000],
		"multiMaterialComponents": multi_material[:1000],
		"proxies": instructions[:1000],
		"truncatedLists": {
			"skipped": len(skipped) > 1000,
			"multiMaterialComponents": len(multi_material) > 1000,
			"proxies": len(instructions) > 1000,
		},
	}
	written_report = write_json(report_path, payload)
	log("Report: {0}".format(written_report))
	log("Proxy shapes: {0}".format(summary["proxyShapeCount"]))
	if options["apply"]:
		log("Spawned proxy actors: {0}".format(summary["spawnedProxyActors"]))
	return 0


if __name__ == "__main__":
	try:
		sys.exit(main())
	except Exception as exc:
		error(str(exc))
		error(traceback.format_exc())
		raise
