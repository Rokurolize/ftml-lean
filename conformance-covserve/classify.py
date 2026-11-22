"""Independent classifier for the serving render family.

The decision order is the reference token() cascade, the same order
CoverageServe.lean enumerates: Gallery size then sources/rows, User
not-found, Button allowlist then modifiers, Embed allowlist then the
scheme cascade. Embed's allowlist hit is approximated by the anyiframe
shape plus a non-empty match test; the PHP driver classifies Embed with
the real pattern list, and a disagreement is a class mismatch.
"""

from __future__ import annotations

ALL_CLASSES = [
    "gaSizeSmall", "gaSizeMedium", "gaSizeThumbnail", "gaSizeSquare",
    "gaSizeOriginal", "gaSizeDefault",
    "gaPageMiss", "gaNoItem",
    "gaFlickr", "gaLocalSlashed", "gaLocalPlain", "gaExternal",
    "gaStarSrc", "gaAlt", "gaLinkUrl", "gaLinkPage", "gaLinkStar",
    "usNotFound",
    "btEdit", "btEditAppend", "btEditSections", "btHistory", "btPrint",
    "btFiles", "btTags", "btSource", "btTalk", "btBacklinks",
    "btRename", "btDelete", "btParent", "btEditMeta", "btWatchers", "btSetTags",
    "btInvalid", "btSetTagsEmpty",
    "btStyle", "btClassCustom", "btTextCustom",
    "emNoMatch", "emEvent", "emSrcJavascript", "emSrcVbscript",
    "emAttrJavascript", "emAttrVbscript", "emPass", "emLangStrip",
]

_SIZES = {
    "small": "gaSizeSmall",
    "medium": "gaSizeMedium",
    "thumbnail": "gaSizeThumbnail",
    "square": "gaSizeSquare",
    "original": "gaSizeOriginal",
}

_BUTTONS = {
    "edit": "btEdit",
    "edit-append": "btEditAppend",
    "edit-sections": "btEditSections",
    "history": "btHistory",
    "print": "btPrint",
    "files": "btFiles",
    "tags": "btTags",
    "source": "btSource",
    "talk": "btTalk",
    "backlinks": "btBacklinks",
    "rename": "btRename",
    "delete": "btDelete",
    "parent": "btParent",
    "edit-meta": "btEditMeta",
    "watchers": "btWatchers",
    "set-tags": "btSetTags",
}


def _s(opts: dict, key: str) -> str:
    v = opts.get(key, "")
    if v is None or v is False:
        return ""
    if v is True:
        return "1"
    return str(v)


def truthy(s: str) -> bool:
    return s not in ("", "0")


def _from1(pat: str, s: str) -> bool:
    return s.find(pat) >= 1


def _attrs(text: str) -> dict:
    parts = text.strip().split('="')
    attrs = {}
    key = None
    for i, val in enumerate(parts):
        if i == 0:
            key = val.strip()
            continue
        pos = val.rfind('"')
        if pos < 0:
            attrs[key] = ""
            key = val[1:].strip()
        else:
            raw = val[:pos]
            attrs[key] = raw.replace("\\0", "\0").replace("\\", "") if "\\" in raw else raw
            # PHP stripslashes: backslash-0 is NUL, a backslash drops, the next byte stays.
            attrs[key] = _stripslashes(val[:pos])
            key = val[pos + 1 :].strip()
    return attrs


def _stripslashes(s: str) -> str:
    out = []
    i = 0
    while i < len(s):
        if s[i] == "\\" and i + 1 < len(s):
            nxt = s[i + 1]
            out.append("\0" if nxt == "0" else nxt)
            i += 2
        elif s[i] == "\\" and i + 1 == len(s):
            i += 1
        else:
            out.append(s[i])
            i += 1
    return "".join(out)


def _link(raw: str) -> tuple[str, bool]:
    star = raw.startswith("*")
    body = raw[1:] if star else raw
    kind = "url" if _from1("://", body) else "page"
    return kind, star


def _row(line: str) -> dict | None:
    if not line.startswith(": "):
        return None
    body = line[2:].strip()
    sp = body.find(" ")
    if sp < 0:
        src0, attr = body, {}
    else:
        src0, attr = body[:sp], _attrs(body[sp + 1 :])
    star = src0.startswith("*")
    src = src0[1:] if star else src0
    alt = "alt" in attr
    if "flickr:" in src:
        return {"kind": "flickr", "star": star, "alt": alt, "link": "none", "linkStar": False}
    if "://" not in src:
        kind = "localSlashed" if "/" in src else "localPlain"
        if "link" in attr:
            lk, ls = _link(attr["link"])
        else:
            lk, ls = "none", False
        return {"kind": kind, "star": star, "alt": alt, "link": lk, "linkStar": ls}
    return {"kind": "external", "star": star, "alt": alt, "link": "url", "linkStar": False}


def _mods(row: dict) -> list[str]:
    if row["kind"] == "flickr":
        return ["gaFlickr"]
    kind = {
        "external": "gaExternal",
        "localSlashed": "gaLocalSlashed",
        "localPlain": "gaLocalPlain",
    }[row["kind"]]
    out = [kind]
    if row["star"]:
        out.append("gaStarSrc")
    if row["alt"]:
        out.append("gaAlt")
    if row["kind"] == "external":
        out.append("gaLinkUrl")
    elif row["link"] == "url":
        out.append("gaLinkUrl")
        if row["linkStar"]:
            out.append("gaLinkStar")
    elif row["link"] == "page":
        out.append("gaLinkPage")
        if row["linkStar"]:
            out.append("gaLinkStar")
    return out


def gallery_class(opts: dict) -> list[str]:
    sources = _s(opts, "sources")
    if not truthy(sources):
        return ["gaPageMiss"]
    rows = [r for r in (_row(line) for line in sources.split("\n")) if r]
    if any(r["kind"] == "flickr" for r in rows):
        return ["gaFlickr"]
    if not rows:
        return ["gaNoItem"]
    out = [_SIZES.get(_s(opts, "size"), "gaSizeDefault")]
    for r in rows:
        out.extend(_mods(r))
    return out


def button_class(opts: dict) -> list[str]:
    ty = _s(opts, "type").lower()
    text = _s(opts, "text")
    if ty not in _BUTTONS:
        return ["btInvalid"]
    if ty == "set-tags" and not truthy(text):
        return ["btSetTagsEmpty"]
    out = [_BUTTONS[ty]]
    if truthy(_s(opts, "style")):
        out.append("btStyle")
    if truthy(_s(opts, "class")):
        out.append("btClassCustom")
    if truthy(text):
        out.append("btTextCustom")
    return out


def embed_class(opts: dict) -> list[str]:
    """Shape test for the fixtures this lane generates.

    A content string is an allowlist hit when it is an anyiframe
    (the last broad pattern) or already contains an iframe the real
    list accepts. The PHP driver re-decides with the real list.
    """
    import re
    content = _s(opts, "content").strip()
    anyiframe = re.compile(
        r"^<iframe(\s+[a-z0-9_]+\s*=\s*['\"][^'\"]*['\"])+>\s*</iframe>$",
        re.I | re.S,
    )
    if not anyiframe.match(content):
        return ["emNoMatch"]
    stripped = re.sub(r'language="JavaScript[^"]*"', "", content, flags=re.I)
    lang = stripped != content
    if re.search(r"<[^>]*\s*on[a-z]+\s*=[^>]+>", stripped, re.I | re.S):
        return ["emEvent"]
    src = re.search(
        r"(?<![a-zA-Z0-9_-])src\s*=\s*([\"'])([^\"']*)\1", stripped, re.I
    )
    if src:
        scheme = src.group(2).strip().lower()
        if scheme.startswith("javascript:"):
            return ["emSrcJavascript"]
        if scheme.startswith("vbscript:"):
            return ["emSrcVbscript"]
    for name, val in re.findall(
        r"(?<![a-zA-Z0-9_-])([a-zA-Z0-9_-]+)\s*=\s*\"([^\"]*)\"", stripped
    ):
        if name.lower() == "src":
            continue
        lv = val.lower()
        if "javascript:" in lv:
            return ["emAttrJavascript"]
        if "vbscript:" in lv:
            return ["emAttrVbscript"]
    out = ["emPass"]
    if lang:
        out.append("emLangStrip")
    return out


def classify(rule: str, opts: dict) -> list[str]:
    opts = opts or {}
    if rule == "Gallery":
        return gallery_class(opts)
    if rule == "User":
        return ["usNotFound"]
    if rule == "Button":
        return button_class(opts)
    if rule == "Embed":
        return embed_class(opts)
    return []
