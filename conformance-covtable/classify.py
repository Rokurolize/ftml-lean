"""Independent classification of table-family sources and render tokens.

The class names are LeanFtml.TableClass. Source classification re-reads the
reference's branch tests (empty cell, marker prefix, validation order,
attribute filter, id isolation, nesting). Token classification re-reads the
render cascades in Render/Xhtml/Table.php and Tableadv.php. Both return
classes in tableAllClasses order.
"""

from __future__ import annotations

import re

ALL_CLASSES = [
    "tbMiss", "tbHit",
    "tbRowContent", "tbRowEmpty", "tbSpanOne", "tbSpanCarry", "tbSpanDiscard",
    "tbCellRight", "tbCellCenter", "tbCellLeft", "tbCellHeader", "tbCellPlain",
    "tbRTableStart", "tbRTableEnd", "tbRCaptionStart", "tbRCaptionEnd",
    "tbRRowStart", "tbRRowEnd", "tbRCellStart", "tbRCellEnd", "tbRFall",
    "tbRTh", "tbRTd", "tbRColspan", "tbRRowspan", "tbRAlign", "tbRFormat",
    "taNoRow", "taStrayRow", "taNoCell", "taStrayCell", "taOk",
    "taCellHeader", "taCellPlain", "taCellPara", "taCellTrim",
    "taNested", "taFlat", "taEnumQuoted",
    "taAttrBadKey", "taAttrBlocked", "taAttrUnsafe", "taAttrSpanOffCell",
    "taAttrEmptyVal", "taAttrSpanZero", "taAttrNormDrop", "taAttrKeep",
    "taIdEmpty", "taIdAlready", "taIdLeadWs", "taIdPrefix",
    "taAttrRank",
    "taRStart", "taRRowStart", "taRCellStart", "taRCellEnd", "taRRowEnd", "taREnd",
    "taRFall", "taRTh", "taRTd", "taRAttrs",
]

SAFE = {
    "accept", "alt", "autocapitalize", "autoplay", "background", "bgcolor",
    "border", "buffered", "checked", "cite", "class", "cols", "colspan",
    "contenteditable", "controls", "coords", "datetime", "decoding", "default",
    "dir", "dirname", "disabled", "download", "draggable", "for", "form",
    "frameborder", "headers", "height", "hidden", "high", "href", "hreflang",
    "id", "inputmode", "ismap", "itemprop", "kind", "label", "lang", "list",
    "loop", "low", "max", "maxlength", "min", "minlength", "multiple", "muted",
    "name", "optimum", "pattern", "placeholder", "poster", "preload",
    "readonly", "required", "reversed", "role", "rows", "rowspan", "scope",
    "selected", "shape", "size", "sizes", "span", "spellcheck", "src",
    "srclang", "start", "step", "style", "tabindex", "target", "title",
    "translate", "type", "usemap", "value", "width", "wrap",
}

FRAMES = [
    '[[table]][[row]][[cell]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[hcell]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[hcell]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="2"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="2"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="0"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="0"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="abc"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="abc"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell align="center"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell align="center"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell foo="1"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell foo="1"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
]

_ORDER = {name: i for i, name in enumerate(ALL_CLASSES)}
_ROW = re.compile(r"\[\[row([^\]]*)\]\](.*?)\[\[/row\]\]", re.I | re.S)
_CELL = re.compile(r"\[\[(cell|hcell)([^\]]*)\]\](.*?)\[\[/(cell|hcell)\]\]", re.I | re.S)
_TABLE = re.compile(r"\[\[table((?:\"[^\"]*\"|[^\]])*)\]\](.*?)\[\[/table\]\]", re.I | re.S)
_ATTR = re.compile(r"([A-Za-z0-9-]+)=\"([^\"]*)\"")
_FRAME_CELL = re.compile(
    r"\[\[(cell|hcell)([^\]]*)\]\]\[\[table\"\]\]\[\[/table\]\]\"\]\]\[\[/(cell|hcell)\]\]"
)


def canon(names) -> list[str]:
    have = set(names)
    return [c for c in ALL_CLASSES if c in have]


def is_safe(key: str) -> bool:
    return key.startswith("data-") or key in SAFE


def normalize(value: str) -> str:
    stripped = "".join(ch for ch in value if not (ord(ch) < 0x20 or ord(ch) == 0x7F))
    return re.sub(r"\s+", " ", stripped).strip()


def id_class(value: str) -> str:
    if value == "":
        return "taIdEmpty"
    if value.startswith("u-"):
        return "taIdAlready"
    if value[:1].isspace():
        return "taIdLeadWs"
    return "taIdPrefix"


def attr_class(key: str, value: str, owner: str) -> str:
    if re.fullmatch(r"[a-z][a-z0-9-]*", key) is None:
        return "taAttrBadKey"
    if key in ("title", "hidden"):
        return "taAttrBlocked"
    if not is_safe(key):
        return "taAttrUnsafe"
    if owner != "cell" and key in ("colspan", "rowspan"):
        return "taAttrSpanOffCell"
    if value == "":
        return "taAttrEmptyVal"
    if owner == "cell" and key in ("colspan", "rowspan") and value == "0":
        return "taAttrSpanZero"
    if key == "id":
        if value.startswith("u-"):
            norm = normalize(value)
        else:
            prefix = "u- " if value[:1].isspace() else "u-"
            norm = normalize(prefix + normalize(value))
    else:
        norm = normalize(value)
    if norm == "" and key in ("class", "id", "role", "style", "type"):
        return "taAttrNormDrop"
    return "taAttrKeep"


def _attrs(head: str, owner: str) -> list[str]:
    out = []
    for key, value in _ATTR.findall(head):
        kind = attr_class(key, value, owner)
        out.append(kind)
        if kind == "taAttrKeep" and key == "id":
            out.append(id_class(value))
    return out


def plain_classes(src: str) -> list[str]:
    lines = [ln for ln in src.split("\n") if ln.startswith("||")]
    if not lines:
        return ["tbMiss"]
    out = ["tbHit"]
    for row in lines:
        parts = row.split("||")
        inner = parts[1:-1]
        span = 1
        has = False
        for cell in inner:
            if cell == "":
                span += 1
                continue
            has = True
            if cell.startswith("> "):
                out.append("tbCellRight")
            elif cell.startswith("= "):
                out.append("tbCellCenter")
            elif cell.startswith("< "):
                out.append("tbCellLeft")
            elif cell.startswith("~ "):
                out.append("tbCellHeader")
            else:
                out.append("tbCellPlain")
            out.append("tbSpanCarry" if span > 1 else "tbSpanOne")
            span = 1
        if has:
            out.append("tbRowContent")
        else:
            out.append("tbRowEmpty")
            out.append("tbSpanDiscard")
    return out


def _success_cell(head: str, body: str, closer: str) -> list[str]:
    out = ["taCellHeader" if closer == "hcell" else "taCellPlain"]
    out.append("taCellPara" if "\n\n" in body else "taCellTrim")
    out.extend(_attrs(head, "cell"))
    return out


def enum_classes(src: str) -> list[str]:
    frame = next(fr for fr in FRAMES if fr in src)
    m = _FRAME_CELL.search(frame)
    if m is None:
        raise SystemExit(f"frame cell not parsed: {frame}")
    _opener, head, closer = m.group(1), m.group(2), m.group(3)
    out = ["taEnumQuoted", "taOk", "taAttrRank", "taCellTrim"]
    out.append("taCellHeader" if closer == "hcell" else "taCellPlain")
    out.extend(_attrs(head, "cell"))
    return out


def nested_classes(src: str) -> list[str]:
    # The generated nest is one outer cell whose body is one inner table.
    return ["taNested", "taOk", "taAttrRank", "taCellPlain", "taCellTrim"]


def adv_classes(src: str) -> list[str]:
    if any(fr in src for fr in FRAMES):
        return enum_classes(src)
    if src.count("[[table") >= 2 or src.count("[[TABLE") >= 2:
        return nested_classes(src)
    m = _TABLE.search(src)
    if m is None:
        return plain_classes(src)
    body = m.group(2)
    rows = list(_ROW.finditer(body))
    if not rows:
        return ["taNoRow", "taFlat"]
    residue = _ROW.sub("", body)
    if residue.strip() != "":
        return ["taStrayRow", "taFlat"]
    for row in rows:
        rbody = row.group(2)
        cells = list(_CELL.finditer(rbody))
        if not cells:
            return ["taNoCell", "taFlat"]
        if _CELL.sub("", rbody).strip() != "":
            return ["taStrayCell", "taFlat"]
    out = ["taOk", "taFlat", "taAttrRank"]
    out.extend(_attrs(m.group(1), "table"))
    for row in rows:
        out.extend(_attrs(row.group(1), "row"))
        for cell in _CELL.finditer(row.group(2)):
            out.extend(_success_cell(cell.group(2), cell.group(3), cell.group(4)))
    return out


def source_classes(src: str) -> list[str]:
    if "[[table" in src.lower() or any(fr in src for fr in FRAMES):
        return canon(adv_classes(src))
    return canon(plain_classes(src))


def _isset(opts: dict, key: str) -> bool:
    return key in opts and opts[key] is not None


def _as_str(value) -> str:
    if value is None:
        return ""
    if isinstance(value, bool):
        return "1" if value else ""
    if isinstance(value, int):
        return str(value)
    return str(value)


def _nat(opts: dict, key: str) -> int:
    if key not in opts or opts[key] is None:
        return 1
    value = opts[key]
    if isinstance(value, bool):
        return 1
    if isinstance(value, int) and value >= 0:
        return value
    if isinstance(value, str) and value.isdigit():
        return int(value)
    return 1


def table_render_classes(opts: dict) -> list[str]:
    typ = _as_str(opts.get("type"))
    base = {
        "table_start": "tbRTableStart",
        "table_end": "tbRTableEnd",
        "caption_start": "tbRCaptionStart",
        "caption_end": "tbRCaptionEnd",
        "row_start": "tbRRowStart",
        "row_end": "tbRRowEnd",
        "cell_start": "tbRCellStart",
        "cell_end": "tbRCellEnd",
    }.get(typ, "tbRFall")
    out = [base]
    attr = _as_str(opts["attr"]) if "attr" in opts else ""
    header = attr == "header"
    if typ in ("cell_start", "cell_end"):
        out.append("tbRTh" if header else "tbRTd")
    if typ == "cell_start" and _nat(opts, "span") > 1:
        out.append("tbRColspan")
    if typ == "cell_start" and _nat(opts, "rowspan") > 1:
        out.append("tbRRowspan")
    if typ == "cell_start" and attr != "" and not header:
        out.append("tbRAlign")
    if typ in ("table_start", "caption_start", "row_start", "cell_start") and _isset(opts, "format"):
        out.append("tbRFormat")
    return canon(out)


def _php_empty(value) -> bool:
    if value is None or value is False:
        return True
    if value is True:
        return False
    if isinstance(value, int):
        return value == 0
    if isinstance(value, str):
        return value == "" or value == "0"
    if isinstance(value, (list, dict)):
        return len(value) == 0
    return False


def tableadv_render_classes(opts: dict) -> list[str]:
    typ = _as_str(opts.get("type"))
    base = {
        "start": "taRStart",
        "rowStart": "taRRowStart",
        "cellStart": "taRCellStart",
        "cellEnd": "taRCellEnd",
        "rowEnd": "taRRowEnd",
        "end": "taREnd",
    }.get(typ, "taRFall")
    out = [base]
    if typ in ("cellStart", "cellEnd"):
        out.append("taRTd" if _php_empty(opts.get("header")) else "taRTh")
    attrs = opts.get("attrs")
    has = isinstance(attrs, dict) and len(attrs) > 0
    if typ in ("start", "rowStart", "cellStart") and has:
        out.append("taRAttrs")
    return canon(out)


def token_classes(rule: str, opts: dict) -> list[str]:
    if rule == "Table":
        return table_render_classes(opts)
    if rule == "Tableadv":
        return tableadv_render_classes(opts)
    return []
