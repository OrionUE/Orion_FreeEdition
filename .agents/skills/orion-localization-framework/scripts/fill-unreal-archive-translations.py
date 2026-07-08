#!/usr/bin/env python3
"""Fill missing Unreal .archive translations with AI-reviewed text.

The script is project-local but path-agnostic: pass --project-root and it will
operate on Content/Localization/<Target>/<Culture>/<Target>.archive.

By default this script does not call external machine translation services. Use
it to apply AI-authored overrides, protect Unreal placeholders/tags, generate
gap reports, and optionally convert AI-reviewed zh-Hans text to zh-Hant.
"""

from __future__ import annotations

import argparse
import csv
import json
import re
import time
from collections import Counter
from pathlib import Path
from typing import Any


CULTURES = [
    "en",
    "zh-Hans",
    "fr",
    "it",
    "de",
    "es",
    "ar",
    "ja",
    "ko",
    "pl",
    "pt-BR",
    "es-419",
    "ru",
    "zh-Hant",
]

GOOGLE_TARGETS = {
    "en": "en",
    "zh-Hans": "zh-CN",
    "zh-Hant": "zh-TW",
    "fr": "fr",
    "it": "it",
    "de": "de",
    "es": "es",
    "es-419": "es",
    "ar": "ar",
    "ja": "ja",
    "ko": "ko",
    "pl": "pl",
    "pt-BR": "pt",
    "ru": "ru",
}

BING_TARGETS = {
    "en": "en",
    "zh-Hans": "zh-Hans",
    "zh-Hant": "zh-Hant",
    "fr": "fr",
    "it": "it",
    "de": "de",
    "es": "es",
    "es-419": "es",
    "ar": "ar",
    "ja": "ja",
    "ko": "ko",
    "pl": "pl",
    "pt-BR": "pt",
    "ru": "ru",
}

TARGETS = {
    "Game": "Game",
    "EngineOverrides": "EngineOverrides",
}

PH_RE = re.compile(
    r"(\{[^{}\r\n]+\}|"
    r"</?[^>\r\n]+>|"
    r"%\([^)]+\)[#0\- +]?\d*(?:\.\d+)?[diouxXeEfFgGcrs]|"
    r"%[#0\- +]?\d*(?:\.\d+)?[diouxXeEfFgGcrs]|"
    r"\\[nrt]|"
    r"[A-Z]:[\\/][^\s]+|"
    r"/(?:Game|Engine|Script|Plugin|Plugins|Content)/[^\s]+)"
)

WORD_RE = re.compile(r"[A-Za-z\u4e00-\u9fff]+")
ASCII_WORD_RE = re.compile(r"[A-Za-z]{2,}")
HAN_RE = re.compile(r"[\u4e00-\u9fff]")
PATH_SYMBOL_PATTERN = r"[A-Z0-9_./" + re.escape(chr(92)) + r":+\- ]{1,24}"

BRAND_TERMS = [
    "Steam",
    "Steam Audio",
    "DLSS",
    "NVIDIA",
    "Niagara",
    "Unreal",
    "Fab",
    "IronSight Games",
    "Definitive FPS Kit",
    "M4A1",
    "XM7",
    "AR-10",
    "AR-15",
    "M16",
    "SIG MCX",
    "SIG MPX",
    "Glock 18",
    "Glock 17",
    "Desert Eagle",
    "Deagle",
    "M1911",
    "Kimber",
    "KeyMod",
    "M-LOK",
    "STANAG",
    "NATO",
    ".300 AAC Blackout",
    ".300 blk",
    ".45 ACP",
    ".40 S&W",
    "10mm Auto",
    "9mm Luger",
    ".38 Super",
    ".50 Action Express",
]

NONTRANSLATABLE_EXACT = {
    "Android",
    "Anti-Aliasing",
    "Apostrophe",
    "Backspace",
    "Bake Acoustics",
    "Bang!",
    "Bilibili",
    "Bibo",
    "Caps",
    "Caps Lock",
    "Caret",
    "Chronos",
    "Closse",
    "DirectX 11",
    "DirectX 12",
    "Discord",
    "Dirt 2",
    "Dollar",
    "Dual Shock 4",
    "Final =",
    "Enter",
    "Esc",
    "Exclamation",
    "Fn+Delete",
    "Gamepad",
    "Gamepad L1",
    "Gamepad L2",
    "Gamepad L3",
    "Gamepad R1",
    "HTC Vive",
    "Ins",
    "Joycons",
    "Max",
    "Min",
    "Minute",
    "Multi-Viewport",
    "Nomad-X",
    "Mouse Y",
    "Nintendo Switch",
    "Num *",
    "Num +",
    "Oculus Touch",
    "OpenGL",
    "Playstation®4",
    "Playstation®5",
    "Project Acoustics SDO",
    "Project Acoustics Spatializer",
    "Ration",
    "Revolver etc.",
    "Spectra-X",
    "Springfield",
    "SquareL",
    "Steam Audio Material",
    "Subtotal",
    "TAC - Sport",
    "Thumbnailer",
    "Total",
    "Total =",
    "Valve Index",
    "Vanguard Chrono",
    "Virtual",
    "Windows Mixed Reality",
    "XInput + DualShock",
    "XBox One",
    "Xbox One",
    "Xbox Series X",
    "YouTube",
    "dfk super store",
    "eelDev",
    "fab store bundle",
    "native",
    "pow",
    "sub",
    "{Current} / {Total} ({Speed}/sec)",
    "{0} x{1}",
    "{Rate}/分",
}

WEAPON_OR_ASSET_NAMES = {
    "FN Five-Seven",
    ".50 ae",
    "BackupSight",
    "Beretta m9a1",
    "Bullpup (FN F2000, Steyr AUG)",
    "ClassicHIP_TAN",
    "DeltaPointScope",
    "FireScope",
    "Flashrider_IETC-MK4",
    "Flashrider_IEVRC",
    "Glock G5",
    "HoloSight_HSAT66_TAN",
    "HoloSight_VTH56_TAN",
    "M4A1 / AR-15 / HK416 / ETC",
    "MiniRiser",
    "NormalSoft",
    "Sight_Classic_LCS-V1",
    "Sight_Classic_LCS-V2",
    "Sight_Classic_LCS-V3",
    "Supp_BSOC",
    "Supp_BSOC_TAN",
    "UniversalBulletVR",
    "XBR-9 Valkyrie",
    "colt 1911",
    "winchester",
}

SAME_AS_SOURCE_OK_BY_CULTURE = {
    "de": {
        "Absorption",
        "Audio",
        "Auto",
        "Hardware",
        "Info",
        "Maximum",
        "Minimum",
        "Name",
        "Option",
        "Penetration",
        "Sprint",
        "Standard",
        "Tag",
        "Video",
        "Vibration",
    },
    "fr": {
        "Absorption",
        "Audio",
        "Base",
        "Composite",
        "Description",
        "Dialogue",
        "Gameplay",
        "Introduction",
        "Menus",
        "Navigation",
        "Options",
        "Performance",
        "Rare",
        "Ricochet",
        "Saturation",
        "Sessions",
        "Social",
        "Standard",
        "Textures",
        "Vibration",
        "Volume",
    },
}

COMMON_LATIN_SAME_AS_SOURCE = {
    "Audio",
    "Base",
    "Error",
    "Gas",
    "Hardware",
    "Lava",
    "Material",
    "Metal",
    "Minimum",
    "Normal",
    "No",
    "Ok",
    "Plasma",
    "Rifle",
    "Social",
    "Sprint",
    "Video",
    "Volume",
    "audio",
}

for _culture in ("de", "es", "es-419", "fr", "it", "pl", "pt-BR", "ru"):
    SAME_AS_SOURCE_OK_BY_CULTURE.setdefault(_culture, set()).update(COMMON_LATIN_SAME_AS_SOURCE)

SAME_AS_SOURCE_OK_BY_CULTURE["de"].update({
    "Alpha",
    "Asphalt",
    "Auto-Set",
    "Controller",
    "Lava",
    "Sand",
    "Terrorist",
    "Vegetation",
    "name",
})
SAME_AS_SOURCE_OK_BY_CULTURE["es"].update({
    "Audio",
    "Material",
})
SAME_AS_SOURCE_OK_BY_CULTURE["es-419"].update({
    "Audio",
})
SAME_AS_SOURCE_OK_BY_CULTURE["fr"].update({
    "Alpha",
    "Cubes",
    "Exemple",
    "Maximum",
    "Minimum",
    "Option",
    "description",
    "domination",
    "note",
    "performance",
})
SAME_AS_SOURCE_OK_BY_CULTURE["it"].update({
    "Auto",
    "Controller",
    "Gameplay",
    "ROund",
    "Standard",
})
SAME_AS_SOURCE_OK_BY_CULTURE["pl"].update({
    "Spec",
})
SAME_AS_SOURCE_OK_BY_CULTURE["pt-BR"].update({
    "Como veio ao mundo!!",
    "Menus",
    "Squibs",
})
SAME_AS_SOURCE_OK_BY_CULTURE["ru"].update({
    "Alpha",
    "Auto",
    "Controller",
    "Standard",
})

SOURCE_NORMALIZATION = {
    "Selecter Fire Mode": "Select Fire Mode",
}

SHORT_OVERRIDES: dict[str, dict[str, str]] = {
    "Join Session Timeout": {
        "zh-Hans": "加入会话超时",
        "zh-Hant": "加入會話逾時",
        "en": "Join Session Timeout",
        "fr": "Délai d'attente de la session",
        "it": "Timeout della sessione",
        "de": "Zeitüberschreitung der Sitzung",
        "es": "Tiempo de espera de la sesión agotado",
        "es-419": "Tiempo de espera de la sesión agotado",
        "ar": "انتهت مهلة الانضمام إلى الجلسة",
        "ja": "セッション参加がタイムアウトしました",
        "ko": "세션 참가 시간 초과",
        "pl": "Przekroczono czas dołączania do sesji",
        "pt-BR": "Tempo esgotado ao entrar na sessão",
    },
    "Popup": {
        "zh-Hans": "提示",
        "zh-Hant": "提示",
        "en": "Notification",
        "fr": "Notification",
        "it": "Notifica",
        "de": "Benachrichtigung",
        "es": "Notificación",
        "es-419": "Notificación",
        "ar": "إشعار",
        "ja": "通知",
        "ko": "알림",
        "pl": "Powiadomienie",
        "pt-BR": "Notificação",
    },
    "Popup body": {
        "zh-Hans": "提示内容",
        "zh-Hant": "提示內容",
        "en": "Notification message",
        "fr": "Message de notification",
        "it": "Messaggio di notifica",
        "de": "Benachrichtigungstext",
        "es": "Mensaje de notificación",
        "es-419": "Mensaje de notificación",
        "ar": "نص الإشعار",
        "ja": "通知メッセージ",
        "ko": "알림 메시지",
        "pl": "Treść powiadomienia",
        "pt-BR": "Mensagem da notificação",
    },
    "Couldn't find a suitable session": {
        "zh-Hans": "未找到合适的会话",
        "zh-Hant": "找不到合適的工作階段",
        "en": "Couldn't find a suitable session",
        "fr": "Aucune session appropriée n'a été trouvée",
        "it": "Nessuna sessione adatta trovata",
        "de": "Keine passende Sitzung gefunden",
        "es": "No se ha encontrado una sesión adecuada",
        "es-419": "No se encontró una sesión adecuada",
        "ar": "تعذر العثور على جلسة مناسبة",
        "ja": "適切なセッションが見つかりませんでした",
        "ko": "적합한 세션을 찾을 수 없습니다",
        "pl": "Nie znaleziono odpowiedniej sesji",
        "pt-BR": "Não foi encontrada uma sessão adequada",
    },
    "Select Fire Mode": {
        "zh-Hans": "选择射击模式",
        "zh-Hant": "選擇射擊模式",
        "en": "Select Fire Mode",
        "fr": "Sélectionner le mode de tir",
        "it": "Seleziona modalità di fuoco",
        "de": "Feuermodus auswählen",
        "es": "Seleccionar modo de disparo",
        "es-419": "Seleccionar modo de disparo",
        "ar": "اختيار نمط الإطلاق",
        "ja": "射撃モードを選択",
        "ko": "사격 모드 선택",
        "pl": "Wybierz tryb ognia",
        "pt-BR": "Selecionar modo de disparo",
    },
    "View Mode Change": {
        "zh-Hans": "切换视角模式",
        "zh-Hant": "切換視角模式",
        "en": "Change View Mode",
        "fr": "Changer le mode de vue",
        "it": "Cambia modalità visuale",
        "de": "Ansichtsmodus wechseln",
        "es": "Cambiar modo de vista",
        "es-419": "Cambiar modo de vista",
        "ar": "تغيير نمط العرض",
        "ja": "視点モードを切り替え",
        "ko": "시점 모드 변경",
        "pl": "Zmień tryb widoku",
        "pt-BR": "Alterar modo de visão",
    },
    "Projectile Type:": {
        "zh-Hans": "弹道类型：",
        "zh-Hant": "彈道類型：",
        "en": "Projectile Type:",
        "fr": "Type de projectile :",
        "it": "Tipo di proiettile:",
        "de": "Projektiltyp:",
        "es": "Tipo de proyectil:",
        "es-419": "Tipo de proyectil:",
        "ar": "نوع المقذوف:",
        "ja": "弾種：",
        "ko": "투사체 유형:",
        "pl": "Typ pocisku:",
        "pt-BR": "Tipo de projétil:",
    },
    "Game Entry Title": {
        "zh-Hans": "游戏条目标题",
        "zh-Hant": "遊戲條目標題",
        "en": "Game Entry Title",
        "fr": "Titre de l'entrée de jeu",
        "it": "Titolo voce partita",
        "de": "Titel des Spieleintrags",
        "es": "Título de entrada de partida",
        "es-419": "Título de entrada de partida",
        "ar": "عنوان عنصر اللعبة",
        "ja": "ゲーム項目タイトル",
        "ko": "게임 항목 제목",
        "pl": "Tytuł pozycji gry",
        "pt-BR": "Título da entrada de jogo",
    },
    "Mouse": {
        "zh-Hans": "鼠标",
        "zh-Hant": "滑鼠",
        "en": "Mouse",
        "fr": "Souris",
        "it": "Mouse",
        "de": "Maus",
        "es": "Ratón",
        "es-419": "Mouse",
        "ar": "الماوس",
        "ja": "マウス",
        "ko": "마우스",
        "pl": "Mysz",
        "pt-BR": "Mouse",
    },
    "Balanced": {
        "zh-Hans": "平衡",
        "zh-Hant": "平衡",
        "en": "Balanced",
        "fr": "Équilibré",
        "it": "Bilanciato",
        "de": "Ausgewogen",
        "es": "Equilibrado",
        "es-419": "Equilibrado",
        "ar": "متوازن",
        "ja": "バランス",
        "ko": "균형",
        "pl": "Zrównoważony",
        "pt-BR": "Equilibrado",
    },
    "Interpolated": {
        "zh-Hans": "插值",
        "zh-Hant": "插值",
        "en": "Interpolated",
        "fr": "Interpolé",
        "it": "Interpolato",
        "de": "Interpoliert",
        "es": "Interpolado",
        "es-419": "Interpolado",
        "ar": "مُستوفى",
        "ja": "補間",
        "ko": "보간됨",
        "pl": "Interpolowany",
        "pt-BR": "Interpolado",
    },
    "Last": {
        "zh-Hans": "最后",
        "zh-Hant": "最後",
        "en": "Last",
        "fr": "Dernier",
        "it": "Ultimo",
        "de": "Letzte",
        "es": "Último",
        "es-419": "Último",
        "ar": "الأخير",
        "ja": "最後",
        "ko": "마지막",
        "pl": "Ostatni",
        "pt-BR": "Último",
    },
    "Normal": {
        "zh-Hans": "普通",
        "zh-Hant": "普通",
        "en": "Normal",
        "fr": "Normal",
        "it": "Normale",
        "de": "Normal",
        "es": "Normal",
        "es-419": "Normal",
        "ar": "عادي",
        "ja": "通常",
        "ko": "일반",
        "pl": "Normalny",
        "pt-BR": "Normal",
    },
    "Social": {
        "zh-Hans": "社交",
        "zh-Hant": "社交",
        "en": "Social",
        "fr": "Social",
        "it": "Sociale",
        "de": "Sozial",
        "es": "Social",
        "es-419": "Social",
        "ar": "اجتماعي",
        "ja": "ソーシャル",
        "ko": "소셜",
        "pl": "Społecznościowe",
        "pt-BR": "Social",
    },
    "Press any key to continue or Press escape to cancel.": {
        "zh-Hans": "按任意键继续，或按 Esc 取消。",
        "zh-Hant": "按任意鍵繼續，或按 Esc 取消。",
        "en": "Press any key to continue or press Esc to cancel.",
        "fr": "Appuyez sur une touche pour continuer ou sur Échap pour annuler.",
        "it": "Premi un tasto per continuare o Esc per annullare.",
        "de": "Drücke eine beliebige Taste, um fortzufahren, oder Esc zum Abbrechen.",
        "es": "Pulsa cualquier tecla para continuar o Esc para cancelar.",
        "es-419": "Presiona cualquier tecla para continuar o Esc para cancelar.",
        "ar": "اضغط على أي مفتاح للمتابعة أو على Esc للإلغاء.",
        "ja": "続行するには任意のキー、キャンセルするには Esc を押してください。",
        "ko": "계속하려면 아무 키나 누르고, 취소하려면 Esc를 누르세요.",
        "pl": "Naciśnij dowolny klawisz, aby kontynuować, lub Esc, aby anulować.",
        "pt-BR": "Pressione qualquer tecla para continuar ou Esc para cancelar.",
    },
    "DLSS Mode": {
        "zh-Hans": "DLSS 模式",
        "zh-Hant": "DLSS 模式",
        "en": "DLSS Mode",
        "fr": "Mode DLSS",
        "it": "Modalità DLSS",
        "de": "DLSS-Modus",
        "es": "Modo DLSS",
        "es-419": "Modo DLSS",
        "ar": "وضع DLSS",
        "ja": "DLSS モード",
        "ko": "DLSS 모드",
        "pl": "Tryb DLSS",
        "pt-BR": "Modo DLSS",
    },
    "Mag Check": {
        "zh-Hans": "检查弹匣",
        "zh-Hant": "檢查彈匣",
        "en": "Mag Check",
        "fr": "Vérification du chargeur",
        "it": "Controllo caricatore",
        "de": "Magazinkontrolle",
        "es": "Comprobar cargador",
        "es-419": "Comprobar cargador",
        "ar": "فحص المخزن",
        "ja": "マガジン確認",
        "ko": "탄창 확인",
        "pl": "Sprawdzenie magazynka",
        "pt-BR": "Verificar carregador",
    },
    "TEXTURE & SURFACE": {
        "zh-Hans": "纹理与表面",
        "zh-Hant": "紋理與表面",
        "en": "Texture & Surface",
        "fr": "Texture et surface",
        "it": "Texture e superficie",
        "de": "Textur und Oberfläche",
        "es": "Textura y superficie",
        "es-419": "Textura y superficie",
        "ar": "الخامة والسطح",
        "ja": "テクスチャと表面",
        "ko": "텍스처 및 표면",
        "pl": "Tekstura i powierzchnia",
        "pt-BR": "Textura e superfície",
    },
    "Acid": {
        "es": "Ácido",
        "es-419": "Ácido",
        "it": "Acido",
    },
    "Ceramic": {
        "es": "Cerámica",
        "es-419": "Cerámica",
    },
    "Electrical": {
        "es": "Eléctrico",
        "es-419": "Eléctrico",
    },
    "Extra Small": {
        "es": "Muy pequeño",
        "es-419": "Muy pequeño",
    },
    "Fabric": {
        "de": "Stoff",
        "it": "Tessuto",
    },
    "Item :": {
        "pt-BR": "Item:",
    },
    "Liquid": {
        "es": "Líquido",
        "es-419": "Líquido",
        "it": "Liquido",
    },
    "Off": {
        "es": "Desactivado",
        "es-419": "Desactivado",
    },
    "Operator Skin": {
        "pl": "Skórka operatora",
    },
    "Ore": {
        "it": "Minerale",
    },
    "Ore: {0}/{1}": {
        "it": "Minerale: {0}/{1}",
    },
    "Plastic": {
        "es": "Plástico",
        "es-419": "Plástico",
    },
    "RifleTest子弹": {
        "pl": "Pocisk RifleTest",
    },
    "ROund": {
        "es": "Ronda",
        "es-419": "Ronda",
        "it": "Round",
    },
    "Rare": {
        "es": "Raro",
        "es-419": "Raro",
        "it": "Raro",
    },
    "Epic": {
        "it": "Epico",
    },
    "Bolt-action Medium": {
        "de": "Mittlerer Repetierer",
    },
    "Reflex": {
        "de": "Reflexvisier",
    },
    "Stock": {
        "de": "Schaft",
        "fr": "Crosse",
    },
    "Silenced": {
        "es": "Con silenciador",
        "es-419": "Con silenciador",
    },
    "Squeezed": {
        "es": "Comprimido",
        "es-419": "Comprimido",
    },
    "Supported": {
        "es-419": "Compatible",
    },
    "Unlimited": {
        "es": "Ilimitado",
        "es-419": "Ilimitado",
    },
}


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser()
    parser.add_argument("--project-root", default=".")
    parser.add_argument("--targets", nargs="*", default=list(TARGETS))
    parser.add_argument("--cultures", nargs="*", default=CULTURES)
    parser.add_argument("--max-items", type=int, default=0, help="Limit translated archive entries for smoke tests.")
    parser.add_argument("--checkpoint-every", type=int, default=25)
    parser.add_argument("--sleep", type=float, default=0.05)
    parser.add_argument("--backend", choices=["manual", "deep-google", "bing"], default="manual")
    parser.add_argument(
        "--allow-external-mt",
        action="store_true",
        help="Explicitly allow external MT backends as reference drafts only; AI review is still required before release.",
    )
    parser.add_argument("--force-same-source", action="store_true", help="Translate entries whose translation equals source.")
    args = parser.parse_args()
    if args.backend != "manual" and not args.allow_external_mt:
        parser.error("External MT backends require --allow-external-mt and must not be used as final translations.")
    return args


def read_json_utf16(path: Path) -> Any:
    return json.loads(path.read_text(encoding="utf-16"))


def write_json_utf16_crlf(path: Path, data: Any) -> None:
    text = json.dumps(data, ensure_ascii=False, indent=2)
    text = text.replace("\r\n", "\n").replace("\n", "\r\n") + "\r\n"
    tmp = path.with_name(f"{path.name}.tmp")
    for attempt in range(6):
        try:
            tmp.write_text(text, encoding="utf-16")
            tmp.replace(path)
            return
        except OSError:
            if attempt == 5:
                raise
            time.sleep(0.5 * (attempt + 1))


def iter_archive_entries(node: Any):
    if isinstance(node, dict):
        if "Source" in node and "Translation" in node:
            yield node
        for key in ("Children", "Subnamespaces"):
            child = node.get(key)
            if isinstance(child, list):
                for item in child:
                    yield from iter_archive_entries(item)
            elif isinstance(child, dict):
                for item in child.values():
                    yield from iter_archive_entries(item)
    elif isinstance(node, list):
        for item in node:
            yield from iter_archive_entries(item)


def normalize_source(source: str) -> str:
    return SOURCE_NORMALIZATION.get(source, source)


def compact(text: str) -> str:
    return re.sub(r"\s+", " ", text or "").strip()


def has_translatable_words(text: str) -> bool:
    return bool(WORD_RE.search(text or ""))


def has_ascii_words(text: str) -> bool:
    return bool(ASCII_WORD_RE.search(text or ""))


def has_han(text: str) -> bool:
    return bool(HAN_RE.search(text or ""))


def is_only_markup_or_code(text: str) -> bool:
    stripped = (text or "").strip()
    if not stripped:
        return True
    without_tokens = PH_RE.sub("", stripped)
    without_tokens = re.sub(r"[\d\s\W_]+", "", without_tokens, flags=re.UNICODE)
    return without_tokens == ""


def is_nontranslatable(text: str) -> bool:
    stripped = compact(text)
    if is_only_markup_or_code(stripped):
        return True
    if stripped in WEAPON_OR_ASSET_NAMES:
        return True
    if re.fullmatch(PATH_SYMBOL_PATTERN, stripped) and not re.search(r"\b(To|From|Type|Mode|Value)\b", stripped):
        return True
    if stripped in BRAND_TERMS:
        return True
    if stripped in NONTRANSLATABLE_EXACT:
        return True
    if re.fullmatch(r"https?://\S+", stripped, flags=re.IGNORECASE):
        return True
    if re.fullmatch(r"(?:www\.)?[A-Za-z0-9-]+(?:\.[A-Za-z0-9-]+)+(?:/[^\s]*)?", stripped, flags=re.IGNORECASE):
        return True
    if re.fullmatch(r"[.]?\d+(?:[.]\d+)?\s*(?:ACP|NATO|Luger|Auto|mm|blk|Blackout|S&W)", stripped, flags=re.IGNORECASE):
        return True
    if re.fullmatch(r"Num(?:\s[0-9+\-*/.])?|Num Lock|PgUp|PgDn|Tab|Pause|Pan|Test|Debug(?:Game)?|Vulkan", stripped):
        return True
    if re.fullmatch(r"Gamepad(?:\s(?:Start|[ABXY]|[LR][123]))?", stripped):
        return True
    if re.fullmatch(r"Mouse(?:\s[XY])?", stripped):
        return True
    if re.fullmatch(r"(?:Oculus Touch|Valve Index|Vive)\s\([LR]\)\s(?:Menu|Trackpad [XY])", stripped):
        return True
    if re.fullmatch(r"[A-Za-z0-9_.:+#-]{1,18}", stripped) and any(ch.isdigit() for ch in stripped):
        return True
    if re.fullmatch(r"(?:Version|patch)\s+\d+(?:\.\d+)+", stripped, flags=re.IGNORECASE):
        return True
    if re.fullmatch(r"(?:bad-index\s*:)?\d+", stripped, flags=re.IGNORECASE):
        return True
    if re.fullmatch(r"\{\d+\}\s*FPS", stripped):
        return True
    if re.fullmatch(r"[4-9]\s\((?:Normal|Fast)\+*\)", stripped):
        return True
    if re.fullmatch(r"(?:Pivot|Rotation) [XYZ]", stripped):
        return True
    if "_" in stripped and re.fullmatch(r"[A-Za-z0-9_+\-]+", stripped):
        return True
    if re.fullmatch(r"[A-Z][A-Za-z0-9]+(?:[A-Z][A-Za-z0-9]+)+", stripped):
        return True
    return False


def same_as_source_is_valid(source: str, translation: str, culture: str) -> bool:
    stripped = compact(source)
    if stripped.casefold() != compact(translation).casefold():
        return False
    if stripped in SAME_AS_SOURCE_OK_BY_CULTURE.get(culture, set()):
        return True
    if culture == "zh-Hant" and has_han(stripped):
        converter = make_opencc_converter()
        return converter is not None and compact(converter.convert(stripped)) == compact(translation)
    return False


def translation_looks_like_source(source: str, translation: str) -> bool:
    return compact(source).casefold() == compact(translation).casefold()


def needs_translation(source: str, translation: str, culture: str, force_same: bool) -> bool:
    if not has_translatable_words(source):
        return False
    if is_nontranslatable(source):
        return False
    if not translation:
        return True
    if same_as_source_is_valid(source, translation, culture):
        return False
    if not force_same:
        return False
    if culture == "en":
        return has_han(source) and translation_looks_like_source(source, translation)
    if culture == "zh-Hans":
        return has_ascii_words(source) and not has_han(source) and translation_looks_like_source(source, translation)
    if culture == "zh-Hant":
        return (has_ascii_words(source) or has_han(source)) and translation_looks_like_source(source, translation)
    if culture in {"fr", "it", "de", "es", "ar", "ja", "ko", "pl", "pt-BR", "es-419", "ru"}:
        return (has_ascii_words(source) or has_han(source)) and translation_looks_like_source(source, translation)
    return False


def protect(text: str) -> tuple[str, dict[str, str]]:
    replacements: dict[str, str] = {}

    def repl(match: re.Match[str]) -> str:
        token = f"__PH{len(replacements)}__"
        replacements[token] = match.group(0)
        return token

    protected = PH_RE.sub(repl, text)
    for term in sorted(BRAND_TERMS, key=len, reverse=True):
        if not term or term not in protected:
            continue
        token = f"__PH{len(replacements)}__"
        protected = protected.replace(term, token)
        replacements[token] = term
    return protected, replacements


def restore(text: str, replacements: dict[str, str]) -> str:
    restored = text
    for token, original in replacements.items():
        restored = restored.replace(token, original)
        restored = restored.replace(token.lower(), original)
    return restored


def postprocess(text: str, culture: str) -> str:
    result = text
    result = result.replace("Escapar", "Esc")
    result = result.replace("Escape", "Esc")
    result = result.replace("HKEY", "HKEY")
    if culture == "pt-BR":
        replacements = {
            "ecrã": "tela",
            "Ecrã": "Tela",
            "ficheiro": "arquivo",
            "Ficheiro": "Arquivo",
            "rato": "mouse",
            "Rato": "Mouse",
            "premir": "pressionar",
            "Premir": "Pressionar",
        }
        for old, new in replacements.items():
            result = result.replace(old, new)
    if culture == "es-419":
        replacements = {
            "Pulsa": "Presiona",
            "pulsa": "presiona",
            "Pulsar": "Presionar",
            "Ordenador": "Computadora",
            "ordenador": "computadora",
        }
        for old, new in replacements.items():
            result = result.replace(old, new)
    if culture == "es":
        result = result.replace("Presione", "Pulsa")
        result = result.replace("presione", "pulsa")
    return result


def load_cache(path: Path) -> dict[str, str]:
    if not path.exists():
        return {}
    return json.loads(path.read_text(encoding="utf-8"))


def save_cache(path: Path, cache: dict[str, str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    text = json.dumps(cache, ensure_ascii=False, indent=2)
    path.write_text(text.replace("\n", "\r\n") + "\r\n", encoding="utf-8")


def make_opencc_converter():
    try:
        from opencc import OpenCC
    except Exception:
        return None

    return OpenCC("s2t")


def build_archive_lookup(path: Path) -> dict[tuple[str, str, str], str]:
    if not path.exists():
        return {}
    data = read_json_utf16(path)
    lookup: dict[tuple[str, str, str], str] = {}
    for entry in iter_archive_entries(data):
        source = entry.get("Source", {}).get("Text", "")
        translation = entry.get("Translation", {}).get("Text", "")
        if translation:
            lookup[(entry.get("Namespace", ""), entry.get("Key", ""), source)] = translation
    return lookup


def make_translator(backend: str):
    if backend == "manual":
        return ("manual", None)

    if backend == "bing":
        import translators as ts

        return ("bing", ts)

    from deep_translator import GoogleTranslator

    return ("deep-google", GoogleTranslator)


def split_for_translation(text: str, limit: int = 4200) -> list[str]:
    if len(text) <= limit:
        return [text]
    pieces: list[str] = []
    current = ""
    for paragraph in re.split(r"(\r?\n\r?\n)", text):
        if len(paragraph) > limit:
            for sentence in re.split(r"(?<=[.!?。！？])(\s+)", paragraph):
                if len(current) + len(sentence) > limit and current:
                    pieces.append(current)
                    current = sentence
                else:
                    current += sentence
            continue
        if len(current) + len(paragraph) > limit and current:
            pieces.append(current)
            current = paragraph
        else:
            current += paragraph
    if current:
        pieces.append(current)
    return pieces


def translate_text(
    source: str,
    culture: str,
    cache: dict[str, str],
    translators: dict[str, Any],
    backend_name: str,
    backend_module: Any,
    sleep: float,
) -> str:
    normalized = normalize_source(source)
    override = SHORT_OVERRIDES.get(normalized, {}).get(culture)
    if override is not None:
        return override
    if is_nontranslatable(normalized):
        return source

    protected, replacements = protect(normalized)
    cache_key = f"{culture}\n{protected}"
    if cache_key in cache:
        return cache[cache_key]

    if backend_name == "manual":
        raise RuntimeError(
            "AI-authored translation required. Add this source to SHORT_OVERRIDES "
            "or import an AI-reviewed translation map; external MT is disabled by default."
        )

    if backend_name == "bing":
        target = BING_TARGETS[culture]
        translator = None
    else:
        target = GOOGLE_TARGETS[culture]
        if culture not in translators:
            translators[culture] = backend_module(source="auto", target=target)
        translator = translators[culture]
    translated_pieces: list[str] = []
    split_limit = 900 if backend_name == "bing" else 4200
    for piece in split_for_translation(protected, split_limit):
        if backend_name == "bing":
            translated_pieces.append(
                backend_module.translate_text(
                    piece,
                    translator="bing",
                    from_language="auto",
                    to_language=target,
                    timeout=30,
                )
            )
        else:
            translated_pieces.append(translator.translate(piece))
        if sleep > 0:
            time.sleep(sleep)
    translated = "".join(translated_pieces)
    translated = restore(translated, replacements)
    translated = postprocess(translated, culture)
    cache[cache_key] = translated
    return translated


def main() -> int:
    args = parse_args()
    project_root = Path(args.project_root).resolve()
    out_dir = project_root / "Saved" / "OrionUE" / "Localization"
    cache_path = out_dir / "translation_cache.json"
    cache = load_cache(cache_path)
    backend_name, backend_module = make_translator(args.backend)
    translators: dict[str, Any] = {}
    opencc_converter = make_opencc_converter()

    rows: list[dict[str, str]] = []
    issues: list[dict[str, str]] = []
    changed_total = 0
    skipped = 0
    by_culture: Counter[str] = Counter()
    limit = args.max_items if args.max_items > 0 else None

    for target_name in args.targets:
        archive_base = TARGETS[target_name]
        target_root = project_root / "Content" / "Localization" / target_name
        zh_hans_lookup = build_archive_lookup(target_root / "zh-Hans" / f"{archive_base}.archive")
        for culture in args.cultures:
            archive_path = target_root / culture / f"{archive_base}.archive"
            if not archive_path.exists():
                continue
            data = read_json_utf16(archive_path)
            changed = 0
            for entry in iter_archive_entries(data):
                if limit is not None and changed_total >= limit:
                    break
                source = entry.get("Source", {}).get("Text", "")
                trans_obj = entry.setdefault("Translation", {})
                translation = trans_obj.get("Text", "")
                if not needs_translation(source, translation, culture, args.force_same_source):
                    skipped += 1
                    continue
                try:
                    if culture == "zh-Hant" and opencc_converter is not None:
                        zh_hans_translation = zh_hans_lookup.get((entry.get("Namespace", ""), entry.get("Key", ""), source), "")
                        if zh_hans_translation and not translation_looks_like_source(source, zh_hans_translation):
                            new_translation = opencc_converter.convert(zh_hans_translation)
                        else:
                            new_translation = translate_text(
                                source,
                                culture,
                                cache,
                                translators,
                                backend_name,
                                backend_module,
                                args.sleep,
                            )
                    else:
                        new_translation = translate_text(
                            source,
                            culture,
                            cache,
                            translators,
                            backend_name,
                            backend_module,
                            args.sleep,
                        )
                except Exception as exc:  # keep partial progress resumable
                    issues.append({
                        "target": target_name,
                        "culture": culture,
                        "key": entry.get("Key", ""),
                        "source": source,
                        "error": f"{type(exc).__name__}: {exc}",
                    })
                    save_cache(cache_path, cache)
                    continue
                trans_obj["Text"] = new_translation
                changed += 1
                changed_total += 1
                by_culture[f"{target_name}:{culture}"] += 1
                rows.append({
                    "target": target_name,
                    "culture": culture,
                    "namespace": entry.get("Namespace", ""),
                    "key": entry.get("Key", ""),
                    "source_preview": compact(source)[:220],
                    "translation_preview": compact(new_translation)[:220],
                })
                if args.checkpoint_every > 0 and changed_total % args.checkpoint_every == 0:
                    write_json_utf16_crlf(archive_path, data)
                    save_cache(cache_path, cache)
                    print(f"checkpoint changed_total={changed_total} current={target_name}:{culture}", flush=True)
            if changed:
                write_json_utf16_crlf(archive_path, data)
            if limit is not None and changed_total >= limit:
                break
        if limit is not None and changed_total >= limit:
            break

    save_cache(cache_path, cache)
    out_dir.mkdir(parents=True, exist_ok=True)
    with (out_dir / "translation_fill_report.csv").open("w", encoding="utf-8-sig", newline="") as f:
        writer = csv.DictWriter(
            f,
            fieldnames=["target", "culture", "namespace", "key", "source_preview", "translation_preview"],
        )
        writer.writeheader()
        writer.writerows(rows)
    with (out_dir / "translation_fill_issues.csv").open("w", encoding="utf-8-sig", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=["target", "culture", "key", "source", "error"])
        writer.writeheader()
        writer.writerows(issues)

    print(f"changed_total={changed_total}")
    print(f"skipped={skipped}")
    print(f"issues={len(issues)}")
    for key, value in by_culture.most_common():
        print(f"{key}={value}")
    return 1 if issues and changed_total == 0 else 0


if __name__ == "__main__":
    raise SystemExit(main())
