"""Independent classifier for the container family.

The token half reads a render token the way CoverageContain.lean's
`containClassOf` does, which on the values the parsers store is the
reference cascade (PHP `!empty` of a bool flag, strict label tests,
integer `tabId`). The source half reads an authored fragment the way
the reference `process` methods branch, for the shapes this lane
generates. A generator bug that lands a case in the wrong class fails
here, before either side is executed.
"""

from __future__ import annotations

import re

ALL_CLASSES = [
    "bqRunDeleted", "bqLineDropped", "bqText", "bqNestStart", "bqNestEnd", "bqDrain",
    "bqRenderStart", "bqRenderEnd", "bqRenderFall",
    "dvPlain", "dvScored", "dvVanished", "dvBare", "dvAttrOrder", "dvEmptyUnset",
    "dvRVanished", "dvRStartBare", "dvRStartEsc", "dvRStartClear", "dvREnd", "dvRFall",
    "coParseClaim",
    "coFolded", "coOpened",
    "coShowDefault", "coShowAuthored",
    "coHideDefault", "coHideAuthored",
    "coLocTop", "coLocBottom", "coLocBoth",
    "coStart", "coEnd", "coFall",
    "tvTitleUntitled", "tvTitleRawEmpty", "tvTitleCollapsed",
    "tvTitlePositional", "tvTitleAttribute",
    "tvClassKept", "tvClassDropped", "tvAttrEcho",
    "tvStart",
    "tvSelected", "tvUnselected",
    "tvLabelDefault", "tvLabelEmpty", "tvLabelText",
    "tvPanelShown", "tvPanelHidden",
    "tvPanelEnd", "tvEnd", "tvFall",
]


def _s(v) -> str:
    if v is None:
        return ""
    if isinstance(v, bool):
        return "1" if v else ""
    if isinstance(v, int):
        return str(v)
    if isinstance(v, str):
        return v
    if isinstance(v, dict) and "$bytes" in v:
        return bytes(v["$bytes"]).decode("latin1")
    return str(v)


def _missing(opts, key) -> bool:
    return key not in opts or opts[key] is None


def classify_blockquote(opts: dict) -> list[str]:
    t = "" if _missing(opts, "type") else _s(opts["type"])
    if t == "start":
        return ["bqRenderStart"]
    if t == "end":
        return ["bqRenderEnd"]
    return ["bqRenderFall"]


def _php_empty(v) -> bool:
    if v is None or v is False or v == 0 or v == "" or v == "0":
        return True
    if isinstance(v, (list, dict)) and len(v) == 0:
        return True
    return False


def _div_cleared(key, value) -> bool:
    raw = _s(value)
    if "\xFF" in raw:
        return True
    return key == "id" and raw == "u-"


def classify_div(opts: dict) -> list[str]:
    if "vanished" in opts and not _php_empty(opts["vanished"]):
        # The mirror agrees when the value is the bool the parse stores.
        if opts["vanished"] is True:
            return ["dvRVanished"]
        return ["dvRVanished"]
    t = "" if _missing(opts, "type") else _s(opts["type"])
    if t == "start":
        args = opts.get("args")
        if not isinstance(args, dict) or len(args) == 0:
            return ["dvRStartBare"]
        if any(_div_cleared(k, v) for k, v in args.items()):
            return ["dvRStartClear"]
        return ["dvRStartEsc"]
    if t == "end":
        return ["dvREnd"]
    return ["dvRFall"]


def _label(args: dict, key: str) -> str:
    if _missing(args, key):
        return "default"
    v = args[key]
    if isinstance(v, str) and (v == "" or v == "0"):
        return "default"
    if isinstance(v, bytes) and (v == b"" or v == b"0"):
        return "default"
    # A non-string scalar is not strictly `=== ''` or `=== '0'`.
    if isinstance(v, str) or isinstance(v, bytes):
        return "authored"
    return "authored"


def classify_collapsible(opts: dict) -> list[str]:
    args = opts.get("args")
    if not isinstance(args, dict):
        args = {}
    folded = args.get("folded")
    opened = folded == "no" or folded == "false"
    out = ["coOpened" if opened else "coFolded"]
    out.append("coShowDefault" if _label(args, "show") == "default" else "coShowAuthored")
    out.append("coHideDefault" if _label(args, "hide") == "default" else "coHideAuthored")
    loc = args.get("hideLocation")
    if loc == "bottom":
        out.append("coLocBottom")
    elif loc == "both":
        out.append("coLocBoth")
    else:
        out.append("coLocTop")
    t = "" if _missing(opts, "type") else _s(opts["type"])
    if t == "start":
        out.append("coStart")
    elif t == "end":
        out.append("coEnd")
    else:
        out.append("coFall")
    return out


def _loose_zero(v) -> bool:
    """PHP `== 0` for the scalars this lane feeds a tab id."""
    if v is None or v is False:
        return True
    if v is True:
        return False
    if isinstance(v, int):
        return v == 0
    if isinstance(v, str):
        if v == "":
            return True
        if re.fullmatch(r"[+-]?(0+)", v):
            return True
        return False
    return False


def _tab_item_classes(tab: dict) -> list[str]:
    if "tabId" not in tab:
        selected = True
    else:
        selected = _loose_zero(tab["tabId"])
    out = ["tvSelected" if selected else "tvUnselected"]
    if "title" not in tab or tab["title"] is None:
        out.append("tvLabelDefault")
    elif tab["title"] == "":
        out.append("tvLabelEmpty")
    else:
        out.append("tvLabelText")
    return out


def _panel_hidden(opts: dict) -> bool:
    if "tabId" not in opts or opts["tabId"] is None:
        return False
    return not _loose_zero(opts["tabId"])


def classify_tabview(opts: dict) -> list[str]:
    t = "" if _missing(opts, "type") else _s(opts["type"])
    if t == "start":
        tabs = opts.get("tabs")
        if not isinstance(tabs, list):
            tabs = []
        out = ["tvStart"]
        for tab in tabs:
            out.extend(_tab_item_classes(tab if isinstance(tab, dict) else {}))
        return out
    if t == "tabStart":
        return ["tvPanelHidden" if _panel_hidden(opts) else "tvPanelShown"]
    if t == "tabEnd":
        return ["tvPanelEnd"]
    if t == "end":
        return ["tvEnd"]
    return ["tvFall"]


def classify_token(rule: str, opts: dict) -> list[str]:
    if rule == "Blockquote":
        return classify_blockquote(opts)
    if rule == "Div":
        return classify_div(opts)
    if rule == "Collapsible":
        return classify_collapsible(opts)
    if rule == "Tabview":
        return classify_tabview(opts)
    return []


_BQ_LINE = re.compile(r"^(>+)(.*)$")


def classify_bq_source(src: str) -> list[str]:
    """One quote run, the shape this lane generates, after the prefilter pad."""
    lines = ("\n" + src).split("\n")
    # A run is a maximal sequence of `>` lines. Take the first.
    run = []
    started = False
    for line in lines:
        if line.startswith(">"):
            started = True
            run.append(line)
        elif started:
            break
    if not run:
        return []
    parsed = []
    dropped = False
    for line in run:
        m = _BQ_LINE.match(line)
        if not m:
            continue
        marks, rest = m.group(1), m.group(2)
        if rest.startswith(" "):
            parsed.append((len(marks), rest[1:].strip()))
        else:
            dropped = True
    if not any(text != "" for _, text in parsed):
        return ["bqRunDeleted"]
    levels = [lv for lv, _ in parsed]
    shallower = any(levels[i] < max(levels[:i]) for i in range(1, len(levels)))
    # The reference pops whenever the line is shallower than the stack, which
    # for a run that only steps up and then down is exactly a later decrease.
    down = any(levels[i] < levels[i - 1] for i in range(1, len(levels)))
    out = ["bqText", "bqNestStart", "bqDrain"]
    if dropped:
        out.append("bqLineDropped")
    if down or shallower:
        out.append("bqNestEnd")
    return out


_DIV = re.compile(
    r"\[\[div(_?)([^\]]*)\]\]\n?(.*?)\n?\[\[/div\]\]",
    re.I | re.S,
)


def classify_div_source(src: str) -> list[str]:
    m = _DIV.search(src)
    if not m:
        return []
    scored = m.group(1) == "_"
    attr = m.group(2) or ""
    body = m.group(3) or ""
    # Quoted attributes only; that is all this lane generates.
    pairs = re.findall(r'([A-Za-z][A-Za-z0-9-]*)\s*=\s*"([^"]*)"', attr)
    kept = []
    unset = False
    for key, value in pairs:
        if key.lower() in ("class", "id", "style", "role", "type") or key.lower().startswith("data-"):
            if value.strip() == "":
                unset = True
            else:
                kept.append(key)
        # unknown keys are dropped and are not an unset of an admitted key
    out = ["dvScored" if scored else "dvPlain"]
    if not kept and body.strip() == "":
        out.append("dvVanished")
    elif not kept:
        out.append("dvBare")
    else:
        out.append("dvAttrOrder")
    if unset:
        out.append("dvEmptyUnset")
    return out


def classify_co_source(src: str) -> list[str]:
    if re.search(r"\[\[collapsible\b", src, re.I) and re.search(r"\[\[/collapsible\]\]", src, re.I):
        return ["coParseClaim"]
    return []


def classify_tv_source(src: str) -> list[str]:
    m = re.search(r"\[\[(?:tabview|tabs)([^\]]*)\]\]", src, re.I)
    if not m:
        return []
    attr = m.group(1) or ""
    out = []
    if attr.strip():
        out.append("tvAttrEcho")
        cm = re.search(r'class\s*=\s*"([^"]*)"', attr, re.I)
        if cm and cm.group(1) not in ("", "0"):
            out.append("tvClassKept")
        else:
            out.append("tvClassDropped")
    else:
        out.append("tvClassDropped")
    tm = re.search(r"\[\[tab(?!view|s\b)([^\]]*)\]\]", src, re.I)
    if not tm:
        return out
    head = (tm.group(1) or "").strip()
    title_attr = re.search(r'title\s*=\s*"([^"]*)"', head, re.I)
    if title_attr:
        raw = title_attr.group(1).strip()
        out.append("tvTitleAttribute")
    else:
        raw = head.strip()
        # A head that is only `key="value"` is the ff-hack, an attribute source.
        if re.fullmatch(r'[A-Za-z0-9_-]+="[^"]*"', raw or ""):
            out.append("tvTitleAttribute")
            raw = ""
        else:
            out.append("tvTitlePositional")
    if raw == "":
        out.append("tvTitleUntitled")
    elif "@@" in raw or "@<" in raw or "\xFF" in raw:
        out.append("tvTitleRawEmpty")
    else:
        out.append("tvTitleCollapsed")
    return out


def classify_source(kind: str, src: str) -> list[str]:
    if kind == "bq":
        return classify_bq_source(src)
    if kind == "div":
        return classify_div_source(src)
    if kind == "co":
        return classify_co_source(src)
    if kind == "tv":
        return classify_tv_source(src)
    return []
