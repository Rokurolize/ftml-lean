"""Independent-of-Lean reading of the heading-family render cascades.

The predicates follow Render/Xhtml/{Heading,Toc,Anchor}.php, not the
Lean classifier. run_fuzz.py requires this list to equal the PHP
driver's phpClass for every token case.
"""

from __future__ import annotations


def isset(opts: dict, key: str) -> bool:
    return key in opts and opts[key] is not None


def as_str(opts: dict, key: str) -> str:
    if not isset(opts, key):
        return ""
    value = opts[key]
    if value is True:
        return "1"
    if value is False:
        return ""
    if isinstance(value, (list, dict)):
        return ""
    return str(value)


def php_empty(value) -> bool:
    if value is None or value is False or value == "" or value == "0" or value == 0:
        return True
    if isinstance(value, (list, dict)) and len(value) == 0:
        return True
    return False


def heading_classes(opts: dict) -> list[str]:
    typ = as_str(opts, "type")
    if typ == "start":
        out = ["hdRStart"]
        if isset(opts, "id") and as_str(opts, "id") != "":
            out.append("hdRId")
        if isset(opts, "collapse"):
            out.append("hdROnclick")
        return out
    if typ == "start-notoc":
        return ["hdRNotoc"]
    if typ == "end":
        out = ["hdREnd"]
        if isset(opts, "collapse"):
            out.append("hdREndMinus" if php_empty(opts["collapse"]) else "hdREndPlus")
        return out
    if typ == "startContent":
        out = ["hdRContent"]
        if isset(opts, "collapse"):
            out.append("hdRScript")
        if isset(opts, "collapse") and opts["collapse"] is True:
            out.append("hdRHidden")
        return out
    if typ == "endContent":
        return ["hdRContentEnd"]
    return ["hdRFall"]


def align_truthy(opts: dict) -> bool:
    if not isset(opts, "align"):
        return False
    text = as_str(opts, "align")
    return text != "" and text != "0"


def toc_classes(opts: dict) -> list[str]:
    typ = as_str(opts, "type")
    align = as_str(opts, "align") if isset(opts, "align") else ""
    truthy = align_truthy(opts)
    if typ == "list_start":
        out = ["tocRStart"]
        if not truthy:
            out.append("tocRTable")
        elif align == "f<":
            out.append("tocRFLeft")
        elif align == "f>":
            out.append("tocRFRight")
        else:
            out.append("tocROther")
        attr = opts.get("attr")
        authored = isinstance(attr, dict) and isinstance(attr.get("title"), str)
        out.append("tocRTitleAuthored" if authored else "tocRTitleDefault")
        return out
    if typ == "list_end":
        return ["tocREnd", "tocREndBare" if truthy else "tocREndTable"]
    if typ == "item_start":
        return ["tocRItem", "tocSentinel"]
    if typ == "item_end":
        return ["tocRItemEnd", "tocSentinel"]
    return ["tocRFall"]


def anchor_classes(opts: dict) -> list[str]:
    if not isset(opts, "type"):
        return ["anRNamed"]
    typ = as_str(opts, "type")
    if typ == "start":
        attrs = opts.get("attrs")
        if isinstance(attrs, dict):
            return ["anRStartGiven"]
        return ["anRStartDefault"]
    if typ == "end":
        return ["anREnd"]
    if typ == "invalid_named":
        return ["anRInvalid"]
    if typ == "literal":
        return ["anRLiteral"]
    return ["anRFallName"]


def render_classes(rule: str, opts: dict) -> list[str]:
    if rule == "Heading":
        return heading_classes(opts)
    if rule == "Toc":
        return toc_classes(opts)
    if rule == "Anchor":
        return anchor_classes(opts)
    return []


RENDER_CLASSES = [
    "hdRStart", "hdRNotoc", "hdREnd", "hdRContent", "hdRContentEnd", "hdRFall",
    "hdRId", "hdROnclick", "hdREndMinus", "hdREndPlus", "hdRScript", "hdRHidden",
    "tocRStart", "tocRTable", "tocRFLeft", "tocRFRight", "tocROther",
    "tocRTitleDefault", "tocRTitleAuthored",
    "tocREnd", "tocREndTable", "tocREndBare",
    "tocRItem", "tocRItemEnd", "tocSentinel", "tocRFall",
    "anRNamed", "anRStartGiven", "anRStartDefault", "anREnd",
    "anRInvalid", "anRLiteral", "anRFallName",
]

PARSE_CLASSES = [
    "hdMiss", "hdL1", "hdL2", "hdL3", "hdL4", "hdL5", "hdL6", "hdToc", "hdNotoc",
    "tocMiss", "tocPNull", "tocPEmpty", "tocPFLeft", "tocPFRight", "tocKeep", "tocSkip",
    "anPlaceholder", "anBlank", "anValid", "anLiteral", "anInvalid",
    "anNested", "anPara", "anScored", "anPlain",
    "anLead", "anTrail", "anNestedClose", "anJoinStrip",
    "anHrefAbsent", "anHrefVerb", "anHrefDelim", "anHrefSlug", "anStarTarget",
    "anIdDrop", "anIdBare", "anIdKept", "anIdSpace", "anIdPrefix",
    "anFixedDrop", "anFixedDelim", "anFixedKeep",
    "anDataDelim", "anDataKeep", "anOtherDrop",
]

ALL_CLASSES = PARSE_CLASSES + RENDER_CLASSES
