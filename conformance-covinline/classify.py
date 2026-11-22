"""INLINE render-class classifier, matching LeanFtml/CoverageInline.

This is the Python half of the classification formalized in
lean-ftml/LeanFtml/CoverageInline.lean. It annotates each generated token
case with the class list the mirror's decision structure yields, so the fuzz
can tally agreements per class. It reads the same wire encoding as the Lean
r48 state driver: JSON strings are UTF-8 byte strings and {"$bytes":[...]}
is an explicit byte string.
"""

from __future__ import annotations


ALL_CLASSES = [
    "urlLink", "urlHash", "urlTarget", "urlFootnote",
    "iwKnown", "iwUnknown",
    "emReversed",
    "flUrl", "flSite", "flExists", "flMissing", "flNonbr", "flTarget",
    "imFirst", "imFlickr", "imUrlSource", "imLocalResized", "imLocalPlain",
    "imLinked", "imAlignFLeft", "imAlignFRight", "imAlignLeft",
    "imAlignRight", "imAlignCenter",
    "spStartBare", "spStartAttrs", "spEnd", "spFall",
    "szStart", "szEnd", "szFall",
    "ctHex", "ctNamed", "ctEmpty", "ctEnd", "ctFall",
    "ctInvalidStart", "ctInvalidOther",
]

IW_SITES = [
    b"wikipedia", b"wikipedia.pl", b"pl.wikipedia", b"google", b"dictionary",
]

EXISTING_PAGES = {
    "other-page", "empty-page", ":sandbox:other-page", "muse-probe-g14-target",
    "muse-probe-g14b-target", "muse-probe-r2link-free-exists",
    "muse-probe-r2link-free-exists2", "muse-probe-r2notes-x-inc-src",
}

IMAGE_SIZES = {b"small", b"medium", b"thumbnail", b"square"}
ALIGN = {
    b"f<": "imAlignFLeft", b"f>": "imAlignFRight", b"<": "imAlignLeft",
    b">": "imAlignRight", b"=": "imAlignCenter",
}


def opt_bytes(opts, key):
    if not isinstance(opts, dict) or key not in opts:
        return b""
    v = opts[key]
    if v is None:
        return b""
    if isinstance(v, str):
        return v.encode("utf-8")
    if isinstance(v, bool):
        return b"1" if v else b""
    if isinstance(v, int):
        return str(v).encode("ascii")
    if isinstance(v, dict) and "$bytes" in v:
        return bytes(v["$bytes"])
    return b""


def opt_val(opts, key):
    if not isinstance(opts, dict):
        return None
    return opts.get(key)


def php_truthy(bs: bytes) -> bool:
    return not (len(bs) == 0 or bs == b"0")


def php_empty(v) -> bool:
    if v is None:
        return True
    if isinstance(v, bool):
        return not v
    if isinstance(v, int):
        return v == 0
    if isinstance(v, str):
        return v == "" or v == "0"
    if isinstance(v, bytes):
        return len(v) == 0 or v == b"0"
    if isinstance(v, list):
        return len(v) == 0
    if isinstance(v, dict):
        return len(v) == 0
    return False


def type_is(opts, name: str) -> bool:
    return opt_bytes(opts, "type") == name.encode("ascii")


def pct_non_ascii(bs: bytes) -> bytes:
    out = bytearray()
    for b in bs:
        if b < 0x80:
            out.append(b)
        else:
            out.extend(("%%%02X" % b).encode("ascii"))
    return bytes(out)


def html_compat(bs: bytes) -> bytes:
    return (bs.replace(b"&", b"&amp;").replace(b'"', b"&quot;")
               .replace(b"<", b"&lt;").replace(b">", b"&gt;"))


def image_ext(bs: bytes) -> bool:
    low = bs.lower()
    return low.endswith(b".png") or low.endswith(b".jpg") or low.endswith(b".gif")


def image_href(link: bytes) -> bytes:
    if b"://" in link[1:]:
        return link
    if link.startswith(b"#"):
        return link
    return b"/" + link.lstrip(b"/")


def collapse_space_tab(bs: bytes) -> bytes:
    return b" ".join(p for p in bs.replace(b"\t", b" ").split(b" ") if p)


def norm_color(raw: bytes):
    collapsed = collapse_space_tab(raw).lower()
    hexpart = collapsed[1:] if collapsed.startswith(b"#") else collapsed
    if len(hexpart) in (3, 6) and all(
        (48 <= c <= 57) or (65 <= c <= 70) or (97 <= c <= 102) for c in hexpart
    ):
        return b"#" + hexpart
    allowed = all(
        (65 <= c <= 90) or (97 <= c <= 122) or (48 <= c <= 57) or
        c in b"#(),- " for c in collapsed
    )
    return collapsed if allowed else None


def classify(rule: str, opts) -> list[str]:
    if rule == "Url":
        href = html_compat(pct_non_ascii(opt_bytes(opts, "href")))
        target = opt_bytes(opts, "target")
        out = ["urlLink"]
        if href == b"#":
            out.append("urlHash")
        if php_truthy(target):
            out.append("urlTarget")
        if type_is(opts, "footnote"):
            out.append("urlFootnote")
        return out
    if rule == "Interwiki":
        return ["iwKnown"] if opt_bytes(opts, "site") in IW_SITES else ["iwUnknown"]
    if rule == "Email":
        return ["emReversed"]
    if rule == "Freelink":
        url = opt_bytes(opts, "url")
        site = opt_bytes(opts, "site")
        page = opt_bytes(opts, "page").decode("latin1")
        if php_truthy(url):
            out = ["flUrl"]
        elif php_truthy(site):
            out = ["flSite"]
        elif page in EXISTING_PAGES:
            out = ["flExists"]
        else:
            out = ["flMissing"]
        if not php_empty(opt_val(opts, "nonbr")):
            out.append("flNonbr")
        if not php_empty(opt_val(opts, "target")):
            out.append("flTarget")
        return out
    if rule == "Image":
        src = opt_bytes(opts, "src")
        attr = opt_val(opts, "attr")
        if not isinstance(attr, dict):
            attr = {}
        if src.startswith(b":first"):
            out = ["imFirst"]
        elif b"flickr:" in src:
            out = ["imFlickr"]
        elif b"://" in src:
            out = ["imUrlSource"]
        else:
            size = opt_bytes(attr, "size")
            size = size if size in IMAGE_SIZES else None
            if size is None and not image_ext(src):
                size = b"medium"
            out = ["imLocalResized" if size is not None else "imLocalPlain"]
        link = opt_val(attr, "link")
        if link is not None and not php_empty(link):
            href = image_href(opt_bytes(attr, "link"))
            if php_truthy(href):
                out.append("imLinked")
        align = opt_bytes(opts, "align")
        if align in ALIGN:
            out.append(ALIGN[align])
        return out
    if rule == "Span":
        if type_is(opts, "start"):
            args = opt_val(opts, "args")
            return ["spStartBare" if not args else "spStartAttrs"]
        if type_is(opts, "end"):
            return ["spEnd"]
        return ["spFall"]
    if rule == "Size":
        if type_is(opts, "start"):
            return ["szStart"]
        if type_is(opts, "end"):
            return ["szEnd"]
        return ["szFall"]
    if rule == "Colortext":
        color = norm_color(opt_bytes(opts, "color"))
        if type_is(opts, "start"):
            if color is None:
                return ["ctInvalidStart"]
            if color == b"":
                return ["ctEmpty"]
            hexpart = color[1:] if color.startswith(b"#") else color
            if len(hexpart) in (3, 6) and all(
                (48 <= c <= 57) or (65 <= c <= 70) or (97 <= c <= 102)
                for c in hexpart
            ):
                return ["ctHex"]
            return ["ctNamed"]
        if color is None:
            return ["ctInvalidOther"]
        if type_is(opts, "end"):
            return ["ctEnd"]
        return ["ctFall"]
    return []
