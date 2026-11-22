"""NOTES render-class classifier, matching CoverageNotes.lean / the PHP cascades."""

from __future__ import annotations


def _opt(opts, key, default=None):
    if not isinstance(opts, dict):
        return default
    return opts[key] if key in opts else default


def _type(opts) -> str | None:
    t = _opt(opts, "type", None)
    return t if isinstance(t, str) else None


def title_branch(title) -> str:
    """PHP === null, then === '' . Missing and JSON null are default."""
    if title is None and not isinstance(title, str):
        return "default"
    # caller passes a sentinel for missing vs null; both are default.
    if title is None:
        return "default"
    if title == "":
        return "blank"
    return "authored"


def title_present(opts) -> tuple[bool, object]:
    if not isinstance(opts, dict) or "title" not in opts:
        return False, None
    return True, opts["title"]


def classify_title(opts) -> str:
    present, val = title_present(opts)
    if not present or val is None:
        return "default"
    if val == "":
        return "blank"
    return "authored"


def php_empty(val) -> bool:
    if val is None:
        return True
    if isinstance(val, bool):
        return not val
    if isinstance(val, int):
        return val == 0
    if isinstance(val, str):
        return val == "" or val == "0"
    if isinstance(val, list):
        return len(val) == 0
    if isinstance(val, dict):
        return len(val) == 0
    return False


def classify_token(rule: str, opts, footnotes, bibitem_ids) -> str | None:
    if rule == "Footnote":
        return "fnCite"
    if rule == "Footnoteitem":
        t = _type(opts)
        if t == "parabreak":
            return "fniParabreak"
        if t == "start":
            ident = opts.get("id") if isinstance(opts, dict) else None
            try:
                n = int(ident)
            except (TypeError, ValueError):
                n = 0
            body = ""
            if n > 0 and isinstance(footnotes, list) and n - 1 < len(footnotes):
                body = footnotes[n - 1]
            if body is None:
                body = ""
            if isinstance(body, str) and body != "":
                return "fniStartBody"
            if isinstance(body, list) and len(body) > 0:
                return "fniStartBody"
            return "fniStartEmpty"
        if t == "end":
            return "fniEnd"
        return "fniFallthrough"
    if rule == "Footnoteblock":
        if not footnotes:
            return "fnbNoNotes"
        t = _type(opts)
        if t == "start":
            br = classify_title(opts if isinstance(opts, dict) else {})
            return {
                "default": "fnbStartDefault",
                "blank": "fnbStartBlank",
                "authored": "fnbStartTitled",
            }[br]
        if t == "end":
            return "fnbEnd"
        return "fnbFallthrough"
    if rule == "Bibitem":
        t = _type(opts)
        if t == "start":
            present = isinstance(opts, dict) and "empty" in opts
            val = opts.get("empty") if present else None
            if php_empty(None if not present else val):
                return "bibiStartSpace"
            return "bibiStartTight"
        if t == "end":
            return "bibiEnd"
        return "bibiFallthrough"
    if rule == "Bibliography":
        t = _type(opts)
        if t == "nl":
            return "bibNl"
        if t == "start":
            br = classify_title(opts if isinstance(opts, dict) else {})
            return {
                "default": "bibStartDefault",
                "blank": "bibStartBlank",
                "authored": "bibStartTitled",
            }[br]
        if t == "end":
            return "bibEnd"
        return "bibFallthrough"
    if rule == "Bibcite":
        label = ""
        if isinstance(opts, dict):
            label = opts.get("label") or ""
        found = False
        if isinstance(bibitem_ids, list):
            for pair in bibitem_ids:
                if isinstance(pair, (list, tuple)) and len(pair) == 2 and pair[0] == label:
                    found = True
                    break
                if isinstance(pair, dict) and pair.get("label") == label:
                    found = True
                    break
        return "bibcResolved" if found else "bibcMissing"
    return None


NOTES_RULES = {
    "Footnote",
    "Footnoteitem",
    "Footnoteblock",
    "Bibitem",
    "Bibliography",
    "Bibcite",
}

ALL_CLASSES = [
    "fnCite",
    "fniParabreak",
    "fniStartEmpty",
    "fniStartBody",
    "fniEnd",
    "fniFallthrough",
    "fnbNoNotes",
    "fnbStartDefault",
    "fnbStartBlank",
    "fnbStartTitled",
    "fnbEnd",
    "fnbFallthrough",
    "bibiStartSpace",
    "bibiStartTight",
    "bibiEnd",
    "bibiFallthrough",
    "bibNl",
    "bibStartDefault",
    "bibStartBlank",
    "bibStartTitled",
    "bibEnd",
    "bibFallthrough",
    "bibcMissing",
    "bibcResolved",
]
