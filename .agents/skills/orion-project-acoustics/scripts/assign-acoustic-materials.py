import json
import os
import re
import traceback

import unreal


ACOUSTIC_GEOMETRY_TAG = "AcousticsGeometry"
DEFAULT_REPORT = "Saved/OrionUE/ProjectAcoustics/assign-acoustic-materials-report.json"
DEFAULT_CONFIG_RELATIVE_PATH = "Config/ProjectAcoustics.ini"
DEFAULT_MATERIALS_RELATIVE_PATH = "Plugins/Audio/ProjectAcoustics/Resources/DefaultMaterialProperties.json"
USE_PHYSICAL_MATERIALS_SECTION = "UsePhysicalMaterials"
MATERIALS_SECTION = "Materials"


def parse_bool(value, default=False):
	if value is None or value == "":
		return default
	return str(value).strip().lower() in ("1", "true", "yes", "on")


def log(message):
	unreal.log("[AssignAcousticMaterials] " + str(message))


def warn(message):
	unreal.log_warning("[AssignAcousticMaterials] " + str(message))


def error(message):
	unreal.log_error("[AssignAcousticMaterials] " + str(message))


def project_path(path_value):
	path = str(path_value or "").replace("\\", "/")
	if os.path.isabs(path):
		return path
	return os.path.join(unreal.Paths.project_dir(), path).replace("\\", "/")


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
	with open(path, "w", encoding="utf-8", newline="\r\n") as output_file:
		json.dump(payload, output_file, ensure_ascii=False, indent=2)
		output_file.write("\n")
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


def map_name_from_package_path(package_path):
	normalized = normalize_package_path(package_path)
	if not normalized:
		return ""
	return normalized.rsplit("/", 1)[-1]


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


def object_name(obj):
	if obj is None:
		return ""
	for method_name in ("get_name", "GetName"):
		method = getattr(obj, method_name, None)
		if method:
			try:
				return str(method())
			except Exception:
				pass
	return str(obj)


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
		return str(obj.get_outermost().get_name())
	except Exception:
		return object_name(obj)


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
		return components
	return [component for component in all_actor_components(actor) if is_static_mesh_component(component)]


def is_static_component(component):
	mobility = get_prop(component, ("mobility", "Mobility"), None)
	if mobility is None:
		return True
	try:
		return int(mobility) == 0
	except Exception:
		pass
	try:
		if hasattr(mobility, "value"):
			return int(mobility.value) == 0
	except Exception:
		pass
	mobility_text = str(mobility).lower()
	if "movable" in mobility_text or "stationary" in mobility_text:
		return False
	return mobility_text == "0" or mobility_text.endswith("static") or ".static" in mobility_text


def is_landscape_actor(actor):
	class_name = object_class_name(actor)
	return class_name in ("Landscape", "LandscapeStreamingProxy") or class_name.endswith("LandscapeProxy")


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


def get_materials_from_component(component):
	materials = []
	for method_name in ("get_materials", "GetMaterials"):
		method = getattr(component, method_name, None)
		if method:
			try:
				materials = [material for material in list(method()) if material is not None]
				if materials:
					return materials
			except Exception:
				pass
	num_materials = 0
	for method_name in ("get_num_materials", "GetNumMaterials"):
		method = getattr(component, method_name, None)
		if method:
			try:
				num_materials = int(method())
				break
			except Exception:
				pass
	for material_index in range(num_materials):
		for method_name in ("get_material", "GetMaterial"):
			method = getattr(component, method_name, None)
			if method:
				try:
					material = method(material_index)
					if material is not None:
						materials.append(material)
					break
				except Exception:
					pass
	return materials


def get_material_physical_material(material):
	if material is None:
		return None
	for method_name in ("get_physical_material", "GetPhysicalMaterial"):
		method = getattr(material, method_name, None)
		if method:
			try:
				phys_material = method()
				if is_non_default_physical_material(phys_material):
					return phys_material
			except Exception:
				pass
	phys_material = get_prop(material, ("phys_material", "PhysMaterial", "physical_material", "PhysicalMaterial"), None)
	if is_non_default_physical_material(phys_material):
		return phys_material
	return None


def get_component_physical_material(component):
	if component is None:
		return None
	for method_name in ("get_physical_material", "GetPhysicalMaterial"):
		method = getattr(component, method_name, None)
		if method:
			try:
				phys_material = method()
				if is_non_default_physical_material(phys_material):
					return phys_material
			except Exception:
				pass
	for name in ("phys_material_override", "PhysMaterialOverride", "physical_material_override", "PhysicalMaterialOverride"):
		phys_material = get_prop(component, name, None)
		if is_non_default_physical_material(phys_material):
			return phys_material
	body_instance = get_prop(component, ("body_instance", "BodyInstance"), None)
	if body_instance is not None:
		for method_name in ("get_simple_physical_material", "GetSimplePhysicalMaterial"):
			method = getattr(body_instance, method_name, None)
			if method:
				try:
					phys_material = method()
					if is_non_default_physical_material(phys_material):
						return phys_material
				except Exception:
					pass
		for name in ("phys_material_override", "PhysMaterialOverride", "physical_material_override", "PhysicalMaterialOverride"):
			phys_material = get_prop(body_instance, name, None)
			if is_non_default_physical_material(phys_material):
				return phys_material
	return None


def get_landscape_physical_material(actor):
	for name in ("phys_material_override", "PhysMaterialOverride", "physical_material_override", "PhysicalMaterialOverride"):
		phys_material = get_prop(actor, name, None)
		if is_non_default_physical_material(phys_material):
			return phys_material
	body_instance = get_prop(actor, ("body_instance", "BodyInstance"), None)
	if body_instance is not None:
		for name in ("phys_material_override", "PhysMaterialOverride", "physical_material_override", "PhysicalMaterialOverride"):
			phys_material = get_prop(body_instance, name, None)
			if is_non_default_physical_material(phys_material):
				return phys_material
	for method_name in ("get_landscape_material", "GetLandscapeMaterial"):
		method = getattr(actor, method_name, None)
		if method:
			try:
				material = method()
				phys_material = get_material_physical_material(material)
				if phys_material is not None:
					return phys_material
			except Exception:
				pass
	return None


def get_landscape_material(actor):
	for method_name in ("get_landscape_material", "GetLandscapeMaterial"):
		method = getattr(actor, method_name, None)
		if method:
			try:
				return method()
			except Exception:
				pass
	return get_prop(actor, ("landscape_material", "LandscapeMaterial"), None)


def get_landscape_layer_info_objects(actor):
	layer_infos = []
	for method_name in ("get_target_layers", "GetTargetLayers"):
		method = getattr(actor, method_name, None)
		if method:
			try:
				target_layers = method()
				for item in list(target_layers or []):
					layer_info = get_prop(item, ("layer_info_obj", "LayerInfoObj"), None)
					if layer_info is not None:
						layer_infos.append(layer_info)
				if layer_infos:
					return layer_infos
			except Exception:
				pass
	target_layers = get_prop(actor, ("target_layers", "TargetLayers"), None)
	try:
		for item in list(target_layers or []):
			layer_info = get_prop(item, ("layer_info_obj", "LayerInfoObj"), None)
			if layer_info is not None:
				layer_infos.append(layer_info)
	except Exception:
		pass
	return layer_infos


def is_non_default_physical_material(phys_material):
	if phys_material is None:
		return False
	name = object_name(phys_material)
	path = object_path(phys_material)
	normalized_name = name.lower()
	normalized_path = path.lower()
	if normalized_name in ("defaultphysicalmaterial", "default_physical_material"):
		return False
	if normalized_path.endswith("/defaultphysicalmaterial.defaultphysicalmaterial"):
		return False
	return True


def normalize_match_name(value):
	name = str(value or "").strip().lower()
	name = name.replace("\\", "/")
	name = name.rsplit("/", 1)[-1]
	if "." in name:
		name = name.rsplit(".", 1)[-1]
	name = re.sub(r"^(phys_|physm_|physmat_|physical_|pm_|pmat_|mat_|m_|mi_|mm_|inst_|mi-)+", "", name)
	name = re.sub(r"[^a-z0-9]+", " ", name)
	name = re.sub(r"\b(phys|physical|material|mat|mi|m|inst|instance|proxy|acoustic|simple|collision|surface)\b", " ", name)
	name = re.sub(r"\s+", " ", name).strip()
	return name


def name_tokens(value):
	return set(normalize_match_name(value).split())


def load_known_materials(path):
	with open(path, "r", encoding="utf-8") as input_file:
		payload = json.load(input_file)
	known = {}
	for item in payload.get("CoefficientList", []):
		name = str(item.get("Name", "")).strip()
		if not name:
			continue
		known[name] = float(item.get("Absorptivity", 0.1))
	equivalents = {}
	for item in payload.get("EquivalenceList", []):
		base_name = str(item.get("BaseName", "")).strip()
		if not base_name or base_name not in known:
			continue
		for equivalent in item.get("EquivalentTo", []):
			equivalent_name = str(equivalent).strip()
			if equivalent_name:
				equivalents[normalize_match_name(equivalent_name)] = base_name
	return known, equivalents


def create_matcher(known_materials, equivalents):
	known_by_normalized = {}
	for material_name in known_materials.keys():
		known_by_normalized[normalize_match_name(material_name)] = material_name
	phrase_lookup = []
	for normalized_name, material_name in known_by_normalized.items():
		if normalized_name:
			phrase_lookup.append((normalized_name, material_name))
	for normalized_name, material_name in equivalents.items():
		if normalized_name:
			phrase_lookup.append((normalized_name, material_name))
	phrase_lookup.sort(key=lambda pair: len(pair[0]), reverse=True)
	return known_by_normalized, phrase_lookup


def choose_by_keyword(normalized_name, tokens):
	def has_any(*values):
		return any(value in tokens or value in normalized_name for value in values)

	if has_any("basicshape", "worldgrid"):
		return "Default", "special", "engine default preview material"
	if has_any("decal", "stripe", "paintline", "floorstripe", "marking", "markings", "floormarking", "keepclear", "noentry", "noparking"):
		return "concrete painted", "keyword", "painted hard-surface marking or decal"
	if has_any("wire", "fence", "locker", "grate", "mesh", "catwalk", "stair", "stairs", "ladder", "valve", "valves", "sign", "signs"):
		return "steel", "keyword", "thin metal, industrial fixture, or signage surface"
	if has_any("snow"):
		return "snow fresh", "keyword", "snow-like outdoor surface"
	if has_any("water", "river", "lake", "pond", "sea", "ocean", "pool", "ice"):
		return "water surface", "keyword", "water or dense smooth surface"
	if has_any("grass", "turf", "moss", "lawn"):
		return "grass", "keyword", "soft vegetation ground"
	if has_any("leaf", "leaves", "foliage", "bush", "shrub", "plant", "vine"):
		return "wood tree", "keyword", "foliage equivalent from ProjectAcoustics library"
	if has_any("gravel", "rock", "pebble"):
		return "gravel", "keyword", "gravel or compacted stony ground"
	if has_any("sand"):
		return "sand", "keyword", "sand ground"
	if has_any("mud", "dirt", "earth", "soil", "terrain", "ground", "landscape", "clay"):
		if has_any("loose", "rough", "soft"):
			return "soil rough", "keyword", "loose or rough soil"
		return "soil packed", "keyword", "packed soil or dirt"
	if has_any("asphalt", "road", "tarmac"):
		return "asphalt", "keyword", "asphalt road surface"
	if has_any("floor", "level1floor", "pavement"):
		if has_any("paint", "painted", "marking", "markings"):
			return "concrete painted", "keyword", "painted industrial floor"
		return "concrete", "keyword", "industrial hard floor"
	if has_any("concrete", "cement", "terrazzo"):
		if has_any("paint", "sealed"):
			return "concrete painted", "keyword", "painted or sealed concrete"
		if has_any("rough"):
			return "concrete rough", "keyword", "rough concrete"
		return "concrete", "keyword", "generic concrete"
	if has_any("debris", "fragment", "fragments", "rubble", "crumble"):
		return "concrete rough", "keyword", "hard debris or broken masonry"
	if has_any("block", "cinder"):
		if has_any("coarse", "rough"):
			return "concreteblock coarse", "keyword", "coarse concrete block"
		return "concreteblock painted", "keyword", "concrete block"
	if has_any("stone", "granite", "limestone", "slate"):
		return "concrete painted", "keyword", "hard stone closest built-in category"
	if has_any("brick", "masonry"):
		if has_any("paint", "painted"):
			return "brick painted", "keyword", "painted brickwork"
		return "brick unglazed", "keyword", "unpainted brickwork"
	if has_any("drywall", "gypsum", "sheetrock"):
		return "gypsum board", "keyword", "gypsum or drywall board"
	if has_any("plaster", "stucco"):
		return "plaster brick", "keyword", "plaster wall"
	if has_any("tile", "ceramic", "marble", "porcelain"):
		return "tile glazed", "keyword", "glazed tile or ceramic"
	if has_any("glass", "window", "mirror", "ceilinglight", "celinglight"):
		if has_any("window"):
			return "glass window", "keyword", "ordinary window glass"
		return "glass heavy pane", "keyword", "heavy glass pane"
	if has_any("metal", "steel", "iron", "aluminum", "aluminium", "copper", "brass", "bronze", "zinc"):
		return "steel", "keyword", "generic metal surface"
	if has_any("carpet", "rug"):
		return "carpet heavy", "keyword", "carpet or rug"
	if has_any("fabric", "cloth", "canvas", "curtain", "drape", "drapery", "tent", "awning", "textile", "tarp", "tarpaulin"):
		if has_any("heavy", "thick"):
			return "drapery heavy", "keyword", "heavy fabric"
		if has_any("light", "thin"):
			return "drapery light", "keyword", "light fabric"
		return "drapery medium", "keyword", "medium fabric"
	if has_any("foam", "fiber", "fibre", "fiberglass", "glasswool", "mineral", "wool", "insulation", "acousticpanel", "acoustic tile", "felt", "book", "paper", "paperset", "cardboard"):
		return "fiberboard shreddedwood", "keyword", "porous absorptive material closest built-in category"
	if has_any("rubber", "tire", "tyre", "wheel", "cableramp", "cable ramp"):
		return "rubber", "keyword", "rubber surface"
	if has_any("leather"):
		return "leather", "keyword", "leather surface"
	if has_any("plastic", "poly", "pvc", "vinyl", "nylon", "resin", "acrylic", "cone", "trafficcone", "spraypaint", "bottle", "bottles", "trash", "garbage", "chair", "gloss"):
		if has_any("polystyrene", "styrofoam"):
			return "polystyrene", "keyword", "polystyrene"
		return "plastic", "keyword", "generic plastic"
	if has_any("wood", "timber", "plywood", "plank", "board", "door"):
		if has_any("plywood"):
			return "wood plywood panel", "keyword", "plywood panel"
		if has_any("panel"):
			return "wood panel", "keyword", "wood panel"
		if has_any("varnish", "varnished"):
			return "wood varnished", "keyword", "varnished wood"
		return "wood", "keyword", "generic wood"
	return "Default", "fallback", "no confident keyword match"


def choose_acoustic_material(name, known_materials, equivalents, known_by_normalized, phrase_lookup):
	normalized_name = normalize_match_name(name)
	if normalized_name in known_by_normalized:
		material_name = known_by_normalized[normalized_name]
		return {
			"acousticMaterial": material_name,
			"absorption": known_materials[material_name],
			"matchMethod": "exact",
			"reason": "exact ProjectAcoustics material name",
		}
	if normalized_name in equivalents:
		material_name = equivalents[normalized_name]
		return {
			"acousticMaterial": material_name,
			"absorption": known_materials[material_name],
			"matchMethod": "equivalent",
			"reason": "ProjectAcoustics equivalence list",
		}
	for phrase, material_name in phrase_lookup:
		if not phrase:
			continue
		if phrase in normalized_name or phrase.replace(" ", "") in normalized_name.replace(" ", ""):
			return {
				"acousticMaterial": material_name,
				"absorption": known_materials[material_name],
				"matchMethod": "phrase",
				"reason": "matched ProjectAcoustics material phrase: {0}".format(phrase),
			}
	material_name, method, reason = choose_by_keyword(normalized_name, name_tokens(name))
	return {
		"acousticMaterial": material_name,
		"absorption": known_materials.get(material_name, known_materials.get("Default", 0.1)),
		"matchMethod": method,
		"reason": reason,
	}


def add_unique(collection, value, max_count=12):
	if not value:
		return
	if value in collection:
		return
	if len(collection) < max_count:
		collection.append(value)


def ensure_mapping_entry(materials, key, source_kind, actor, material=None, phys_material=None):
	if not key:
		return None
	entry = materials.get(key)
	if entry is None:
		entry = {
			"key": key,
			"count": 0,
			"sourceKinds": [],
			"sampleActors": [],
			"sampleMaterials": [],
			"samplePhysicalMaterials": [],
			"materialPaths": [],
			"physicalMaterialPaths": [],
		}
		materials[key] = entry
	entry["count"] += 1
	add_unique(entry["sourceKinds"], source_kind)
	add_unique(entry["sampleActors"], actor_label(actor))
	if material is not None:
		add_unique(entry["sampleMaterials"], object_name(material))
		add_unique(entry["materialPaths"], object_path(material))
	if phys_material is not None:
		add_unique(entry["samplePhysicalMaterials"], object_name(phys_material))
		add_unique(entry["physicalMaterialPaths"], object_path(phys_material))
	return entry


def collect_static_mesh_component_materials(actor, component, materials, summary):
	summary["staticMeshComponentsScanned"] += 1
	component_phys_material = get_component_physical_material(component)
	if component_phys_material is not None:
		summary["componentPhysicalMaterialsUsed"] += 1
		ensure_mapping_entry(materials, object_name(component_phys_material), "componentPhysicalMaterial", actor, None, component_phys_material)
		return
	component_materials = get_materials_from_component(component)
	summary["materialSlotsScanned"] += len(component_materials)
	for material in component_materials:
		if material is None:
			continue
		phys_material = get_material_physical_material(material)
		if phys_material is not None:
			summary["materialPhysicalMaterialsUsed"] += 1
			ensure_mapping_entry(materials, object_name(phys_material), "materialPhysicalMaterial", actor, material, phys_material)
		else:
			summary["materialNamesUsed"] += 1
			ensure_mapping_entry(materials, object_name(material), "materialName", actor, material, None)


def collect_landscape_materials(actor, materials, summary):
	summary["landscapeActorsScanned"] += 1
	landscape_phys_material = get_landscape_physical_material(actor)
	if landscape_phys_material is not None:
		summary["landscapePhysicalMaterialsUsed"] += 1
		ensure_mapping_entry(materials, object_name(landscape_phys_material), "landscapePhysicalMaterial", actor, None, landscape_phys_material)
		return
	layer_infos = get_landscape_layer_info_objects(actor)
	for layer_info in layer_infos:
		phys_material = None
		for method_name in ("get_physical_material", "GetPhysicalMaterial"):
			method = getattr(layer_info, method_name, None)
			if method:
				try:
					phys_material = method()
					break
				except Exception:
					pass
		if is_non_default_physical_material(phys_material):
			summary["landscapeLayerPhysicalMaterialsUsed"] += 1
			ensure_mapping_entry(materials, object_name(phys_material), "landscapeLayerPhysicalMaterial", actor, layer_info, phys_material)
		else:
			summary["landscapeLayerNamesUsed"] += 1
			ensure_mapping_entry(materials, object_name(layer_info), "landscapeLayerName", actor, layer_info, None)
	if layer_infos:
		return
	landscape_material = get_landscape_material(actor)
	if landscape_material is not None:
		phys_material = get_material_physical_material(landscape_material)
		if phys_material is not None:
			summary["landscapeMaterialPhysicalMaterialsUsed"] += 1
			ensure_mapping_entry(materials, object_name(phys_material), "landscapeMaterialPhysicalMaterial", actor, landscape_material, phys_material)
		else:
			summary["landscapeMaterialNamesUsed"] += 1
			ensure_mapping_entry(materials, object_name(landscape_material), "landscapeMaterialName", actor, landscape_material, None)


def parse_ini(path):
	sections = []
	current = None
	if not os.path.exists(path):
		return sections
	with open(path, "r", encoding="utf-8-sig") as input_file:
		for raw_line in input_file.read().splitlines():
			line = raw_line.strip()
			if line.startswith("[") and line.endswith("]"):
				current = {
					"name": line[1:-1],
					"items": [],
				}
				sections.append(current)
			elif current is not None and line and not line.startswith(";") and "=" in raw_line:
				key, value = raw_line.split("=", 1)
				current["items"].append({
					"type": "kv",
					"key": key.strip(),
					"value": value.strip(),
				})
			elif current is not None:
				current["items"].append({
					"type": "line",
					"value": raw_line,
				})
	return sections


def get_or_add_section(sections, name):
	for section in sections:
		if section["name"] == name:
			return section
	section = {
		"name": name,
		"items": [],
	}
	sections.append(section)
	return section


def set_section_value(section, key, value):
	for item in section["items"]:
		if item.get("type") == "kv" and item.get("key") == key:
			item["value"] = value
			return
	insert_index = len(section["items"])
	while insert_index > 0:
		item = section["items"][insert_index - 1]
		if item.get("type") != "line" or item.get("value", "").strip():
			break
		insert_index -= 1
	section["items"].insert(insert_index, {
		"type": "kv",
		"key": key,
		"value": value,
	})


def write_ini(path, sections):
	parent = os.path.dirname(path)
	if parent and not os.path.isdir(parent):
		os.makedirs(parent, exist_ok=True)
	lines = []
	for section in sections:
		if lines:
			lines.append("")
		lines.append("[{0}]".format(section["name"]))
		section_items = list(section["items"])
		while section_items and section_items[-1].get("type") == "line" and not section_items[-1].get("value", "").strip():
			section_items.pop()
		for item in section_items:
			if item.get("type") == "kv":
				lines.append("{0}={1}".format(item.get("key", ""), item.get("value", "")))
			else:
				lines.append(item.get("value", ""))
	while lines and not lines[-1].strip():
		lines.pop()
	with open(path, "w", encoding="utf-8", newline="\r\n") as output_file:
		output_file.write("\n".join(lines))
		output_file.write("\n")


def apply_config(config_path, map_name, material_entries):
	sections = parse_ini(config_path)
	use_physical_section = get_or_add_section(sections, USE_PHYSICAL_MATERIALS_SECTION)
	set_section_value(use_physical_section, map_name, "true")
	materials_section = get_or_add_section(sections, MATERIALS_SECTION)
	for entry in material_entries:
		value = "{0},{1:.6f}".format(entry["acousticMaterial"], float(entry["absorption"]))
		set_section_value(materials_section, entry["key"], value)
	write_ini(config_path, sections)


def assign_materials(options):
	summary = {
		"completed": False,
		"sourceMap": options["source_map"],
		"mapName": map_name_from_package_path(options["source_map"]),
		"apply": options["apply"],
		"usePhysicalMaterialsEnabled": False,
		"configPath": options["config_path"],
		"knownMaterialsPath": options["known_materials_path"],
		"actorsScanned": 0,
		"actorsSkippedWithoutGeometryTag": 0,
		"geometryActorsScanned": 0,
		"staticMeshActorsScanned": 0,
		"staticMeshComponentsScanned": 0,
		"landscapeActorsScanned": 0,
		"materialSlotsScanned": 0,
		"componentPhysicalMaterialsUsed": 0,
		"materialPhysicalMaterialsUsed": 0,
		"materialNamesUsed": 0,
		"landscapePhysicalMaterialsUsed": 0,
		"landscapeLayerPhysicalMaterialsUsed": 0,
		"landscapeLayerNamesUsed": 0,
		"landscapeMaterialPhysicalMaterialsUsed": 0,
		"landscapeMaterialNamesUsed": 0,
		"uniqueMaterialKeys": 0,
		"exactMatches": 0,
		"equivalentMatches": 0,
		"phraseMatches": 0,
		"keywordMatches": 0,
		"specialMatches": 0,
		"contextMatches": 0,
		"fallbackMatches": 0,
		"mappingsWouldWrite": 0,
		"mappingsWritten": 0,
		"warnings": [],
		"referenceNotes": [
			"Primary source: ProjectAcoustics Resources/DefaultMaterialProperties.json.",
			"Fallback keyword groups align unknown names to the closest built-in ProjectAcoustics acoustic material.",
		],
	}
	if not os.path.exists(options["known_materials_path"]):
		raise RuntimeError("Known material table was not found: {0}".format(options["known_materials_path"]))
	known_materials, equivalents = load_known_materials(options["known_materials_path"])
	known_by_normalized, phrase_lookup = create_matcher(known_materials, equivalents)
	if not load_level(options["source_map"]):
		raise RuntimeError("Failed to load source map: {0}".format(options["source_map"]))
	actors = get_all_level_actors()
	summary["actorsScanned"] = len(actors)
	materials = {}
	for actor in actors:
		if actor is None:
			continue
		mesh_components = [component for component in static_mesh_components(actor) if is_static_component(component)]
		is_landscape = is_landscape_actor(actor)
		if not mesh_components and not is_landscape:
			continue
		if not actor_has_tag(actor, ACOUSTIC_GEOMETRY_TAG):
			summary["actorsSkippedWithoutGeometryTag"] += 1
			continue
		summary["geometryActorsScanned"] += 1
		if mesh_components:
			summary["staticMeshActorsScanned"] += 1
			for component in mesh_components:
				collect_static_mesh_component_materials(actor, component, materials, summary)
		if is_landscape:
			collect_landscape_materials(actor, materials, summary)
	material_entries = []
	for key in sorted(materials.keys(), key=lambda value: value.lower()):
		entry = materials[key]
		choice = choose_acoustic_material(key, known_materials, equivalents, known_by_normalized, phrase_lookup)
		if choice["matchMethod"] == "fallback":
			context_name = " ".join([key] + entry["sampleActors"][:6] + entry["sampleMaterials"][:6])
			context_choice = choose_acoustic_material(context_name, known_materials, equivalents, known_by_normalized, phrase_lookup)
			if context_choice["matchMethod"] != "fallback":
				context_choice["matchMethod"] = "context"
				context_choice["reason"] = "matched sample actor or material context after ambiguous key"
				choice = context_choice
		entry.update(choice)
		material_entries.append(entry)
		match_method = entry["matchMethod"]
		if match_method == "exact":
			summary["exactMatches"] += 1
		elif match_method == "equivalent":
			summary["equivalentMatches"] += 1
		elif match_method == "phrase":
			summary["phraseMatches"] += 1
		elif match_method == "keyword":
			summary["keywordMatches"] += 1
		elif match_method == "special":
			summary["specialMatches"] += 1
		elif match_method == "context":
			summary["contextMatches"] += 1
		else:
			summary["fallbackMatches"] += 1
	summary["uniqueMaterialKeys"] = len(material_entries)
	summary["mappingsWouldWrite"] = len(material_entries)
	if summary["geometryActorsScanned"] == 0:
		summary["warnings"].append("No actors with AcousticsGeometry were found. Run Step 2 before assigning acoustic materials.")
	if summary["uniqueMaterialKeys"] == 0:
		summary["warnings"].append("No ProjectAcoustics material keys were collected from the target map.")
	if options["apply"]:
		apply_config(options["config_path"], summary["mapName"], material_entries)
		summary["mappingsWritten"] = len(material_entries)
		summary["usePhysicalMaterialsEnabled"] = True
	summary["completed"] = True
	return {
		"summary": summary,
		"materials": material_entries,
		"knownAcousticMaterials": [
			{
				"name": name,
				"absorption": known_materials[name],
			}
			for name in sorted(known_materials.keys(), key=lambda value: value.lower())
		],
	}


def main():
	options = {
		"source_map": normalize_package_path(os.environ.get("ORION_ACOUSTIC_MATERIAL_SOURCE_MAP", "")),
		"report": os.environ.get("ORION_ACOUSTIC_MATERIAL_REPORT", DEFAULT_REPORT),
		"apply": parse_bool(os.environ.get("ORION_ACOUSTIC_MATERIAL_APPLY"), False),
		"config_path": project_path(os.environ.get("ORION_ACOUSTIC_MATERIAL_CONFIG", DEFAULT_CONFIG_RELATIVE_PATH)),
		"known_materials_path": project_path(os.environ.get("ORION_ACOUSTIC_MATERIAL_KNOWN_MATERIALS", DEFAULT_MATERIALS_RELATIVE_PATH)),
	}
	payload = None
	try:
		if not options["source_map"]:
			raise RuntimeError("ORION_ACOUSTIC_MATERIAL_SOURCE_MAP is required.")
		payload = assign_materials(options)
	except Exception as exc:
		error(str(exc))
		error(traceback.format_exc())
		payload = {
			"summary": {
				"completed": False,
				"sourceMap": options.get("source_map", ""),
				"apply": options.get("apply", False),
				"error": str(exc),
				"traceback": traceback.format_exc(),
			},
			"materials": [],
		}
	finally:
		report_path = write_json(options["report"], payload)
		log("Report written: {0}".format(report_path))


if __name__ == "__main__":
	main()
