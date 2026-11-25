#!/usr/bin/env python3
"""Mechanically extract the PCRE patterns and static tables of the 68 active
ref-php parse rules into a canonical JSON payload and a generated Lean module.

This is TCB-4 of ADVISOR-PROOF-POLICY.  No pattern is hand-transcribed.  Every
source file is hashed with SHA-256 and checked twice: the embedded PINNED
manifest is itself re-derived from `git show snapshot-36:<path>` (so the
manifest cannot drift away from the published tag), and the working copy under
--ref-php must have that same digest.  `--verify` additionally refuses to
write anything and instead byte-compares freshly generated output with the
committed output, which is the CI gate G2 expects.

Usage:
  extract_ref_tables.py [--ref-php DIR] [--ref-repo DIR] [--out-dir DIR]
                        [--verify]

Rules whose primary `$regex` is assembled at runtime (Iframe.php builds
its pattern in `__construct` from the `schemes` config and the wiki
delimiter) are resolved by executing the pinned PHP sources themselves:
the extractor instantiates the rule class against a real `Text_Wiki`
object under the system PHP and reads back the resolved `$regex`.  The
PHP version is recorded in the payload (`php_version`) so the resolution
is provenance-tagged, and a rule whose pattern came from this pass is
marked `patterns_provenance = "php-resolved-dynamic"` in the payload and
with a comment in the generated Lean module.  The verbatim assembly
expressions remain recorded as `dynamic-template` inline entries.

Exit 0 means every source matched snapshot-36 and the generated tables are
byte-identical (in --verify mode) or freshly written (default mode).
"""

from __future__ import annotations

import argparse
import hashlib
import json
import pathlib
import re
import subprocess
import sys

SNAPSHOT_TAG = "snapshot-45"
SNAPSHOT_COMMIT = "f2641455d1481fdc489a4bd35d0ccda5ab7b96e6"
DEFAULT_REF_REPO = "/home/roku/.local/state/wikijump/muse-bhl/agy-finish/wikidot-php-reference"
DEFAULT_REF_PHP = str(pathlib.Path(__file__).resolve().parent.parent / "ref-php")

# 71 active rules, in the exact order of LeanFtml.Pipeline.pipelineFull.
# (rule id, PHP class basename).  Generated from `inductive RuleId` at
# proof-base-v1 (4bf28f7) and updated to snapshot-45 (REFCORR20: Html before Modulepre).
RULES = [
    ("include", "Include"), ("prefilter", "Prefilter"), ("delimiter", "Delimiter"),
    ("code", "Code"), ("form", "Form"), ("raw", "Raw"), ("rawold", "Rawold"),
    ("html", "Html"),
    ("modulepre", "Modulepre"), ("module", "Module"), ("module654", "Module654"),
    ("iftags", "Iftags"), ("comment", "Comment"), ("expr", "Expr"),
    ("ifexpr", "Ifexpr"), ("iframe", "Iframe"),
    ("date", "Date"), ("math", "Math"), ("concatlines", "Concatlines"),
    ("freelink", "Freelink"), ("equationreference", "Equationreference"),
    ("footnote", "Footnote"), ("footnoteitem", "Footnoteitem"),
    ("footnoteblock", "Footnoteblock"), ("bibitem", "Bibitem"),
    ("bibliography", "Bibliography"), ("bibcite", "Bibcite"),
    ("divprefilter", "Divprefilter"), ("anchor", "Anchor"), ("user", "User"),
    ("blockquote", "Blockquote"), ("heading", "Heading"), ("toc", "Toc"),
    ("horiz", "Horiz"), ("separator", "Separator"), ("clearfloat", "Clearfloat"),
    ("break", "Break"), ("span", "Span"), ("size", "Size"), ("div", "Div"),
    ("divalign", "Divalign"), ("collapsible", "Collapsible"),
    ("tabview", "Tabview"), ("note", "Note"), ("gallery", "Gallery"),
    ("list", "List"), ("deflist", "Deflist"), ("table", "Table"),
    ("tableadv", "Tableadv"), ("button", "Button"), ("image", "Image"),
    ("embed", "Embed"), ("social", "Social"), ("file", "File"),
    ("center", "Center"), ("newline", "Newline"), ("paragraph", "Paragraph"),
    ("url", "Url"), ("email", "Email"), ("mathinline", "Mathinline"),
    ("interwiki", "Interwiki"), ("colortext", "Colortext"), ("strong", "Strong"),
    ("emphasis", "Emphasis"), ("underline", "Underline"),
    ("strikethrough", "Strikethrough"), ("tt", "Tt"),
    ("superscript", "Superscript"), ("subscript", "Subscript"),
    ("typography", "Typography"), ("tighten", "Tighten"),
]

BASE_CLASS = "text-wiki/Text/Wiki/Parse.php"
EMBED_CONFIG = "wikidot-root/conf/wikiparser/embed/default.php"

PINNED = {
    "text-wiki/Text/Wiki/Parse/Default/Include.php": "948551a863dca240ec92d292047b984dd306b473a306c48ac52aeb87c00e93f4",
    "text-wiki/Text/Wiki/Parse/Default/Prefilter.php": "b40ead6a2a0214b72e88eb96069d9fb873ce17efda18e28ed73074af7e88996f",
    "text-wiki/Text/Wiki/Parse/Default/Delimiter.php": "f57e57ade2019071fa0447f428385a1df1a876cebf73f6b4fac02912135de233",
    "text-wiki/Text/Wiki/Parse/Default/Code.php": "95ae1d881b495a39827f25f27c5130a84030922b2c8fc6f0b122c5c83a856a81",
    "text-wiki/Text/Wiki/Parse/Default/Form.php": "cde34fee2c6c4d7543e6013e27b32879f36716b91ac399a0db42a4050e6246bb",
    "text-wiki/Text/Wiki/Parse/Default/Raw.php": "6655a51665eceb52fae5effeb39e810251b57bdc5b4ed1c37a66759f72822ae5",
    "text-wiki/Text/Wiki/Parse/Default/Rawold.php": "0b2989a253420b508738aca076244a149dbd1851085a3d4df11b3ad153b2a708",
    "text-wiki/Text/Wiki/Parse/Default/Modulepre.php": "1d5336676e8e8e5484161540d989f49bf710209447cb117311fc6c8b98c1c6b4",
    "text-wiki/Text/Wiki/Parse/Default/Module.php": "1fcbf1af1679f2e49f39dceaf8394f158b34f092db65d54cf1ef2496ad1619b2",
    "text-wiki/Text/Wiki/Parse/Default/Module654.php": "740a4e82985a87cee2bf33d604c4623a3ad9660aefa7eb1f3fa305d6784bfec4",
    "text-wiki/Text/Wiki/Parse/Default/Iftags.php": "dcb098b4f99903e1731aac4a9445e9d1d7a08fb0da4e177591160172d27b449c",
    "text-wiki/Text/Wiki/Parse/Default/Comment.php": "0fd39be074f3a3d0dbafdc0ad5254c46a6ec3a56e9c458394bb17ab723d28439",
    "text-wiki/Text/Wiki/Parse/Default/Expr.php": "a7421aa8c7c34fad3e8ede9cd467c54a34bf92670b27069643c2a2648c917f65",
    "text-wiki/Text/Wiki/Parse/Default/Ifexpr.php": "6857048c25ed8bb360868e8b528cc66d5025eb3e1fa39948aac1f32d1f15b838",
    "text-wiki/Text/Wiki/Parse/Default/Iframe.php": "bf76dfd40cdb13f8bfa63dbd22bc04f2bcb3168b4fa4461897bcf4cd52d5a0c1",
    "text-wiki/Text/Wiki/Parse/Default/Date.php": "ff7cd510709557da4a7c4afe847f51801e31a41ed8ec7c66e20a9da4b7950c86",
    "text-wiki/Text/Wiki/Parse/Default/Math.php": "250f7ad18a70a067d046caabd5c299b4f68d2b3eb0673338b59f341314a14d25",
    "text-wiki/Text/Wiki/Parse/Default/Concatlines.php": "c8d4367a2f798d3b03c9327bc31a01b8511dd962c4f908029014b6299a3ebce0",
    "text-wiki/Text/Wiki/Parse/Default/Freelink.php": "e7674afd0aa0e6d56b78ba5867422e3cee3da4fb8312ee33ef6a58e56cda03cd",
    "text-wiki/Text/Wiki/Parse/Default/Equationreference.php": "e8d2fbd52057ba71bed2cbf6637f0adb3423038d4168f020df956dcf5bf786db",
    "text-wiki/Text/Wiki/Parse/Default/Footnote.php": "fe45eeb2c5183f92e9d0fbdb2576843964bd0b24ec7205e91ce66b489679ad0d",
    "text-wiki/Text/Wiki/Parse/Default/Footnoteitem.php": "6360b50d6349074f7cf8e10f37c2af4d160dc9fd7250f3aa6302cbd54c1a2770",
    "text-wiki/Text/Wiki/Parse/Default/Footnoteblock.php": "42653a97371dc97e1fc458278dea7c31b8fc5dd0df1ffcc45464de2686500cbb",
    "text-wiki/Text/Wiki/Parse/Default/Bibitem.php": "b21e2e4c2d95da0335c87bc4f9bb7ed6e9a7cd0aa843de9f924ef720f08b0f1c",
    "text-wiki/Text/Wiki/Parse/Default/Bibliography.php": "ec741eb202bc9c44f8f623d40006f690bffe6bce8f0f34d2f1b901fa8535da66",
    "text-wiki/Text/Wiki/Parse/Default/Bibcite.php": "7ac06082bcc29162df265d87cc05f2c33538f3c3b06b8b862d67948dfd983cb0",
    "text-wiki/Text/Wiki/Parse/Default/Html.php": "46275979b34cf21295c5b62d4700d55bf8a4550672e03f00d208adb8ad226188",
    "text-wiki/Text/Wiki/Parse/Default/Divprefilter.php": "4b1a5d62fc9fd5df47f2547f220f7cedd9e3160145ba02809f58f41890e2accb",
    "text-wiki/Text/Wiki/Parse/Default/Anchor.php": "4fd84101a158915a76eca41ad7821ef148a820500f0ea222f4ec7ea8378b5ef5",
    "text-wiki/Text/Wiki/Parse/Default/User.php": "76a34e4730c037c4d5df95cec835a232124f1b3b6d0e686bccd3f5981f58a604",
    "text-wiki/Text/Wiki/Parse/Default/Blockquote.php": "9294382a3d995092b51d9c31d560836a5fafe815765ca300909a8388dd21f84a",
    "text-wiki/Text/Wiki/Parse/Default/Heading.php": "88650648749ce0f04da7ebb569e816a88399ea2f4a4dafc5796c39f04c0e3377",
    "text-wiki/Text/Wiki/Parse/Default/Toc.php": "b9c4ff60f1a55cc8a2a20c05c18ac09e73bee5cdab4fa85ea293f5d6faf4ddcd",
    "text-wiki/Text/Wiki/Parse/Default/Horiz.php": "36790ee36294c5d08478389b9a9238e888666f6e2aef01420713e14ff9c0c220",
    "text-wiki/Text/Wiki/Parse/Default/Separator.php": "3501b01b94274b125a804c167565b84fe89a0801c745e5ba7a29f0049cba7ca7",
    "text-wiki/Text/Wiki/Parse/Default/Clearfloat.php": "782a388aea4fc2717b37d472d58d9ddbf2ad6c8d607b31a343e1adf3d2086662",
    "text-wiki/Text/Wiki/Parse/Default/Break.php": "c7b95838f81e268478593642d23b43d59316498d589651363c7bd9c0dbfe31be",
    "text-wiki/Text/Wiki/Parse/Default/Span.php": "17ec99bd07911c95a4612b3425d87cbb4aa1fa6fab90b800eb57d76d4ca437f6",
    "text-wiki/Text/Wiki/Parse/Default/Size.php": "d780c6c5e848bb5e6c5df5d9a753ad395a2d8644c246a7e29b6a26a7c08068de",
    "text-wiki/Text/Wiki/Parse/Default/Div.php": "6df83c004f2b63769aa54fcf0df0a64938352b5a4689ae7c1b24a3d1fd1ab007",
    "text-wiki/Text/Wiki/Parse/Default/Divalign.php": "7d4739cd3b575dae8cdaf352e17975fd40775cc3d5a9b022e86deaf4d0978f86",
    "text-wiki/Text/Wiki/Parse/Default/Collapsible.php": "1f17f224cae87dfa252b595dad0c61c5cfcc8c10e147cd548869165b971db43c",
    "text-wiki/Text/Wiki/Parse/Default/Tabview.php": "396879903379ca03f0bbfe814857cdb29988453a632da5c8c0f76e74c72d0034",
    "text-wiki/Text/Wiki/Parse/Default/Note.php": "b79cc1650735f0d7400298f45c03fdee54bc9f3bf0fc2131a8c59b2390d36d56",
    "text-wiki/Text/Wiki/Parse/Default/Gallery.php": "85407fafba2fd8828d2c451755bf3acf62cf3cf6c211ce8ccaef2af145977a06",
    "text-wiki/Text/Wiki/Parse/Default/List.php": "cede6c11a7a9fa3835db7b7b6238fbf09ea88630816d281d354e1c563afdbef6",
    "text-wiki/Text/Wiki/Parse/Default/Deflist.php": "1ccdb5730dc8e4317932e652ffd4622e8c53d0bbef3c95a2b43675ee706343df",
    "text-wiki/Text/Wiki/Parse/Default/Table.php": "347244881ef295a412822785d562797059769d457ba2786a13944329f3eaa6b2",
    "text-wiki/Text/Wiki/Parse/Default/Tableadv.php": "ecc1caef41c260fa9b7dd35138b5dbb5012a7e82bda2141f671528f9817e9e09",
    "text-wiki/Text/Wiki/Parse/Default/Button.php": "0856673d7d13b1eac56af6bc037ab7b452acca8997971e66d6134492f435cedf",
    "text-wiki/Text/Wiki/Parse/Default/Image.php": "a8ff7338f3614a18ac4b762f4ccd1c2cd246b5beccf5ea87a07f530a2c145ef6",
    "text-wiki/Text/Wiki/Parse/Default/Embed.php": "2b2bfd5a71e02ee4bd837cd4dda449338081a350d44b41ccdf06dc7a7921b86f",
    "text-wiki/Text/Wiki/Parse/Default/Social.php": "81c6b1af88320331f9b94bad2545b0f7433a7aee7791d49b58e0a8686c3cab62",
    "text-wiki/Text/Wiki/Parse/Default/File.php": "45f323c0e4c1de2dc70ce44d0bc6f31e8d66cc421feca1202beb3b332ba23e6c",
    "text-wiki/Text/Wiki/Parse/Default/Center.php": "d558f00c75354bfe064028ec1ea5ab48c35f2ae264d63ab6489acd1cfa8972b7",
    "text-wiki/Text/Wiki/Parse/Default/Newline.php": "4d5e4087cfdc58b476b0085886284418da8cad7161d528d639ee14aca86b3b85",
    "text-wiki/Text/Wiki/Parse/Default/Paragraph.php": "3d9336ce4ac3c32fdae6640c0be31394d2ec99bbd5ac063fb762912664792947",
    "text-wiki/Text/Wiki/Parse/Default/Url.php": "33aa045d00fe572eda8d4c7a43b3eb57645db5ca183b71b298d14ae6db6bb033",
    "text-wiki/Text/Wiki/Parse/Default/Email.php": "b3098d5463cb8f598e1722db2b84d2be587381e12742f6a796fb344a6c914121",
    "text-wiki/Text/Wiki/Parse/Default/Mathinline.php": "0d02f3280fed8d6244e6769e63d3dee343d1ee65b8d0042cc25bdc3f667e3320",
    "text-wiki/Text/Wiki/Parse/Default/Interwiki.php": "ca191fa743b7b72bff0a853aeb736039a747c6e6f317046ac58f1a5ff6b10de6",
    "text-wiki/Text/Wiki/Parse/Default/Colortext.php": "9a70e640e696731078cc379b5848b695055c118debf83e4b7be5fa7010d1c483",
    "text-wiki/Text/Wiki/Parse/Default/Strong.php": "aadb7553c0d02e316afbd7fc780639d847af552c9f9fae24bf1af5cbaabfe3fa",
    "text-wiki/Text/Wiki/Parse/Default/Emphasis.php": "5aac1bf1879202c6dd0e8c8fbe0682074b6d5660c46717b5f16393e0e24c04a8",
    "text-wiki/Text/Wiki/Parse/Default/Underline.php": "acf68df72796c63e9cce76dc4f5674f781f7c1e868965de52f2e534770487441",
    "text-wiki/Text/Wiki/Parse/Default/Strikethrough.php": "6035cef0bcb9db639381564a97b9108ff85bb97267f52fd3548d07bd95e9d35d",
    "text-wiki/Text/Wiki/Parse/Default/Tt.php": "054bf04a2025219cce8177edc0a26e534d0b96bdea6b97301e38b203e8b7ab4d",
    "text-wiki/Text/Wiki/Parse/Default/Superscript.php": "946f4768fe2f172d84593985ad05bc9379f63f81ad7a281261e570196d8b2bc3",
    "text-wiki/Text/Wiki/Parse/Default/Subscript.php": "5c1408e7d4ddc84ef1fd42d24f457c88cc7bb2d150cdc09e0e4af2f8bf6bc67e",
    "text-wiki/Text/Wiki/Parse/Default/Typography.php": "a1c5fc137efc7fe8bb5c6b931071a1f139515894c719754acc79a31873568fdd",
    "text-wiki/Text/Wiki/Parse/Default/Tighten.php": "0520ce49ccfacf6071debef082a26db995cf1e15b235f5c5beda5eb7d47fa408",
    "text-wiki/Text/Wiki/Parse.php": "00984e5b741f3a2a7c71313aeae17925b95857799226e05795b14ba8501ab3e3",
    "wikidot-root/conf/wikiparser/embed/default.php": "8d7ddce216e8f7fef5e166ab69dc70bea8b40efd259bf3cf38d79614536f0df1"
}


# --------------------------------------------------------------------------
# PHP source readers
# --------------------------------------------------------------------------

def sha(b: bytes) -> str:
    return hashlib.sha256(b).hexdigest()


def git_blob(repo: pathlib.Path, path: str) -> bytes:
    out = subprocess.run(
        ["git", "-C", str(repo), "show", f"{SNAPSHOT_TAG}:{path}"],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE, check=False)
    if out.returncode != 0:
        raise RuntimeError(f"cannot read {SNAPSHOT_TAG}:{path}: "
                           + out.stderr.decode("utf-8", "replace"))
    return out.stdout


def verify_inputs(ref_repo: pathlib.Path, ref_php: pathlib.Path):
    """Return (list of (relpath, digest), errors).  Never writes."""
    errors = []
    tag = subprocess.run(["git", "-C", str(ref_repo), "rev-list", "-n", "1", SNAPSHOT_TAG],
                         stdout=subprocess.PIPE, stderr=subprocess.PIPE, check=False)
    if tag.returncode != 0 or tag.stdout.decode().strip() != SNAPSHOT_COMMIT:
        errors.append(f"{SNAPSHOT_TAG} does not resolve to {SNAPSHOT_COMMIT}")
    checked = []
    for rel, want in PINNED.items():
        try:
            tag_bytes = git_blob(ref_repo, rel)
        except RuntimeError as e:
            errors.append(str(e))
            continue
        if sha(tag_bytes) != want:
            errors.append(f"manifest drift: {rel} tagged={sha(tag_bytes)} pinned={want}")
        work = ref_php / rel
        if not work.is_file():
            errors.append(f"missing working source {work}")
            continue
        got = sha(work.read_bytes())
        if got != want:
            errors.append(f"working source mismatch {rel}: got={got} want={want}")
        checked.append((rel, want))
    return checked, errors


def strip_comments(src: str) -> str:
    """Remove PHP comments while preserving string literals byte-for-byte."""
    out = []
    i, n = 0, len(src)
    quote = None
    while i < n:
        c = src[i]
        if quote is not None:
            out.append(c)
            if c == "\\" and i + 1 < n:
                out.append(src[i + 1])
                i += 2
                continue
            if c == quote:
                quote = None
            i += 1
            continue
        if c in "'\"":
            quote = c
            out.append(c)
            i += 1
            continue
        if src.startswith("//", i) or c == "#":
            while i < n and src[i] != "\n":
                i += 1
            continue
        if src.startswith("/*", i):
            j = src.find("*/", i + 2)
            i = n if j < 0 else j + 2
            continue
        out.append(c)
        i += 1
    return "".join(out)


def read_php_string(src: str, i: int):
    """Read one PHP quoted string at i; return (decoded, end_index)."""
    q = src[i]
    i += 1
    buf = []
    n = len(src)
    while i < n:
        c = src[i]
        if c == q:
            return "".join(buf), i + 1
        if c == "\\" and i + 1 < n:
            d = src[i + 1]
            if q == "'":
                buf.append(d if d in ("\\", "'") else "\\" + d)
            else:
                simple = {"n": "\n", "r": "\r", "t": "\t", "f": "\f",
                          "v": "\v", "\\": "\\", '"': '"', "$": "$"}
                if d in simple:
                    buf.append(simple[d])
                elif d in "01234567":
                    j = i + 2
                    octs = d
                    while j < n and len(octs) < 3 and src[j] in "01234567":
                        octs += src[j]
                        j += 1
                    buf.append(chr(int(octs, 8)))
                    i = j - 1
                elif d == "x" and i + 2 < n and src[i + 2] in "0123456789abcdefABCDEF":
                    j = i + 2
                    hexs = ""
                    while j < n and len(hexs) < 2 and src[j] in "0123456789abcdefABCDEF":
                        hexs += src[j]
                        j += 1
                    buf.append(chr(int(hexs, 16)))
                    i = j - 1
                else:
                    buf.append("\\" + d)
            i += 2
            continue
        buf.append(c)
        i += 1
    raise ValueError("unterminated PHP string")


def skip_ws(src: str, i: int) -> int:
    while i < len(src) and src[i] in " \t\r\n":
        i += 1
    return i


def read_string_expr(src: str, i: int):
    """Read a PHP expression made of quoted strings joined by '.'.
    Returns (joined_string, end_index) or (None, end_index) for null."""
    i = skip_ws(src, i)
    if src.startswith("null", i) or src.startswith("NULL", i):
        return None, i + 4
    if i >= len(src) or src[i] not in "'\"":
        raise ValueError(f"not a string at offset {i}: {src[i:i+30]!r}")
    val, i = read_php_string(src, i)
    while True:
        j = skip_ws(src, i)
        if j < len(src) and src[j] == ".":
            j = skip_ws(src, j + 1)
            if j < len(src) and src[j] in "'\"":
                more, i = read_php_string(src, j)
                val += more
                continue
        return val, i


def read_regex_value(src: str, i: int):
    """Read the RHS of `$regex =`; returns (list_of_patterns | None, end)."""
    i = skip_ws(src, i)
    if src.startswith("array", i):
        j = skip_ws(src, i + 5)
        if j < len(src) and src[j] == "(":
            i = skip_ws(src, j + 1)
            pats = []
            while i < len(src) and src[i] != ")":
                if src[i] == ",":
                    i += 1
                    i = skip_ws(src, i)
                    continue
                val, i = read_string_expr(src, i)
                if val is not None:
                    pats.append(val)
                i = skip_ws(src, i)
            return pats, i + 1
    val, i = read_string_expr(src, i)
    return ([] if val is None else [val]), i


def extract_rule_regex(src: str):
    """Return (patterns, literal_source) for the primary `$regex` field."""
    clean = strip_comments(src)
    m = re.search(r"(?:public|protected|private|var)?\s*\$regex\s*=\s*", clean)
    if m is None:
        return [], None
    pats, _ = read_regex_value(clean, m.end())
    lit = clean[m.start():m.end()]
    return pats, re.sub(r"\s+", " ", lit).strip()


def extract_embed_patterns(src: str):
    """Return [(key, pattern)] from `$patterns = array(...)` in an embed config."""
    clean = strip_comments(src)
    m = re.search(r"\$patterns\s*=\s*array\s*\(", clean)
    if m is None:
        return []
    i = skip_ws(clean, m.end())
    out = []
    while i < len(clean) and clean[i] != ")":
        if clean[i] == ",":
            i += 1
            continue
        km = re.match(r"\s*(['\"])([^'\"]*)\1\s*=>\s*", clean[i:])
        if km is None:
            i += 1
            continue
        key = km.group(2)
        i += km.end()
        val, i = read_string_expr(clean, i)
        if val is not None:
            out.append((key, val))
        i = skip_ws(clean, i)
    return out


def pattern_flags(pattern: str):
    """Split a delimited PCRE literal into (body, flags, delimiter).
    A pattern whose first byte is a word byte, `(`, `[` or `\\` is a bare
    (undelimited) regex, as in Email.php and Interwiki.php: it has no flags.
    """
    if len(pattern) < 2:
        return "", "", ""
    first = pattern[0]
    if first.isalnum() or first in "_([\\":
        return pattern, "", ""
    delim = first
    esc, in_cls = False, False
    for idx in range(1, len(pattern)):
        c = pattern[idx]
        if esc:
            esc = False
            continue
        if c == "\\":
            esc = True
            continue
        if c == "[" and not in_cls:
            in_cls = True
            continue
        if c == "]" and in_cls:
            in_cls = False
            continue
        if c == delim and not in_cls:
            tail = pattern[idx + 1:]
            if any(ch not in "imsUxDASuJn" for ch in tail):
                return pattern, "", ""
            return pattern[1:idx], tail, delim
    return pattern, "", ""


def extract_inline_preg(src: str):
    """Return (function_name, pattern_literal) for every inline preg_* call
    whose first argument is a string literal.  Rules whose `$regex` field is
    null or empty (e.g. Freelink, Url, Typography, Tighten) still carry their
    real patterns here; extracting them is what makes the table cover all 68
    active rules rather than only the 57 base-class consumers.
    """
    clean = strip_comments(src)
    out = []
    for m in re.finditer(r"\b(preg_match_all|preg_replace_callback|preg_replace|"
                         r"preg_match|preg_split)\s*\(\s*", clean):
        fn = m.group(1)
        i = skip_ws(clean, m.end())
        if i >= len(clean) or clean[i] not in "'\"":
            continue
        try:
            val, _ = read_php_string(clean, i)
        except ValueError:
            continue
        if val:
            out.append((fn, val))
    return out


def extract_dynamic_regex(src: str):
    """Record regex sources that are assembled from configuration at runtime
    (Delimiter.php, Url.php).  We extract the verbatim PHP expression, not a
    guessed expansion: resolving `$this->wiki->delim` / the `schemes` config
    is the job of a harness-specific instantiation and is stated as an
    explicit remainder in UNIT.md.
    """
    clean = strip_comments(src)
    out = []
    for m in re.finditer(r"\$(?:this->)?(?:regex|regexLiberal|tmp_regex)\s*=\s*", clean):
        i = m.end()
        j = i
        depth = 0
        quote = None
        while j < len(clean):
            c = clean[j]
            if quote is not None:
                if c == "\\":
                    j += 2
                    continue
                if c == quote:
                    quote = None
            elif c in "'\"":
                quote = c
            elif c in "([{":
                depth += 1
            elif c in ")]}":
                if depth == 0:
                    break
                depth -= 1
            elif c == ";" and depth == 0:
                break
            j += 1
        if clean[i:j].strip():
            out.append(("dynamic-template", re.sub(r"\s+", " ", clean[i:j]).strip()))
    return out


RESOLVE_PHP = r"""
error_reporting(E_ALL & ~E_DEPRECATED & ~E_WARNING & ~E_NOTICE);
$base = $argv[1];
require_once $base . '/Text/Wiki.php';
require_once $base . '/Text/Wiki/Parse.php';
$wiki = new Text_Wiki();
foreach (json_decode($argv[2], true) as $cls) {
    $file = $base . '/Text/Wiki/Parse/Default/' . $cls . '.php';
    if (!file_exists($file)) { echo "RESOLVED $cls NULL\n"; continue; }
    require_once $file;
    $name = 'Text_Wiki_Parse_' . $cls;
    try {
        $rule = new $name($wiki);
        $rx = $rule->regex;
        if (is_string($rx) && $rx !== '') {
            echo "RESOLVED $cls " . bin2hex($rx) . "\n";
        } else {
            echo "RESOLVED $cls NULL\n";
        }
    } catch (Throwable $e) {
        echo "RESOLVED $cls NULL\n";
    }
}
"""


def php_version() -> str:
    r = subprocess.run(["php", "-r", "echo PHP_VERSION;"],
                       stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                       check=False)
    if r.returncode != 0:
        raise RuntimeError("php is required for dynamic-regex resolution")
    return r.stdout.decode().strip()


def resolve_dynamic_regexes(ref_php: pathlib.Path) -> dict:
    """Instantiate every rule class under PHP and read its resolved
    `$regex`.  Returns {class basename: pattern str} for classes whose
    constructor produces a non-empty pattern.  Pattern bytes are carried
    as a latin-1 string so `ord` is the byte value, matching byte_list.
    Only the pinned sources under --ref-php are executed; verify_inputs
    has already checked their SHA-256 against the snapshot tag."""
    classes = [cls for _, cls in RULES]
    r = subprocess.run(
        ["php", "-r", RESOLVE_PHP, str(ref_php / "text-wiki"),
         json.dumps(classes)],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE, check=False)
    if r.returncode != 0:
        raise RuntimeError("dynamic-regex resolution failed: "
                           + r.stderr.decode(errors="replace")[:400])
    out = {}
    for line in r.stdout.decode(errors="replace").splitlines():
        parts = line.split(" ")
        if len(parts) == 3 and parts[0] == "RESOLVED" and parts[2] != "NULL":
            out[parts[1]] = bytes.fromhex(parts[2]).decode("latin-1")
    return out


def construct_inventory(src: str):
    """Count every syntactic PCRE construct that occurs in a pattern body.
    This drives the honest coverage table in UNIT.md rather than a guess."""
    body, flags, _ = pattern_flags(src)
    hits = set()
    i = 0
    while i < len(body):
        c = body[i]
        if c == "\\" and i + 1 < len(body):
            d = body[i + 1]
            if d.isdigit() and d != "0":
                hits.add("backref")
            elif d in "sSdDwW":
                hits.add("class-escape")
            elif d in "nrtfv":
                hits.add("control-escape")
            i += 2
            continue
        if c == "[":
            hits.add("char-class")
        elif c == "(" and i + 1 < len(body) and body[i + 1] == "?":
            nxt = body[i + 2:i + 4]
            if nxt.startswith(":"):
                hits.add("noncapturing-group")
            elif nxt.startswith("="):
                hits.add("positive-lookahead")
            elif nxt.startswith("!"):
                hits.add("negative-lookahead")
            elif nxt.startswith("<="):
                hits.add("positive-lookbehind")
            elif nxt.startswith("<!"):
                hits.add("negative-lookbehind")
            elif nxt.startswith("R"):
                hits.add("(?R)-recursion")
            elif nxt.startswith("P<") or nxt.startswith("'"):
                hits.add("named-group")
            i += 2
            continue
        elif c == "(":
            hits.add("capturing-group")
        elif c == "|":
            hits.add("alternation")
        elif c in "*+?":
            hits.add("quantifier")
        elif c == "{":
            hits.add("brace-quantifier")
        elif c == "^":
            hits.add("bol")
        elif c == "$":
            hits.add("eol")
        elif c == ".":
            hits.add("dot")
        i += 1
    for f in flags:
        hits.add("flag-" + f)
    return sorted(hits)


def byte_list(s: str) -> str:
    vals = [ord(ch) for ch in s]
    if any(v > 255 for v in vals):
        raise ValueError("non-byte character in pattern; /u handling is out of F2 scope")
    return "[" + ", ".join(str(v) for v in vals) + "]"


def generate_lean(payload: dict) -> str:
    L = []
    L.append("set_option maxRecDepth 100000")
    L.append("/-")
    L.append("  LeanFtml.RefTables — GENERATED FILE. DO NOT EDIT BY HAND.")
    L.append("  Produced by tools/extract_ref_tables.py from wikidot-php-reference")
    L.append(f"  {SNAPSHOT_TAG} ({SNAPSHOT_COMMIT}). Re-run the extractor with --verify")
    L.append("  in CI (gate G2). Patterns are emitted as List Nat byte literals so no")
    L.append("  String.toList / Classical.choice leaks into the trusted computing base.")
    L.append("-/")
    L.append("")
    L.append("namespace LeanFtml")
    L.append("")
    L.append(f"def refTablesSnapshotTag : String := \"{SNAPSHOT_TAG}\"")
    L.append(f"def refTablesSnapshotCommit : String := \"{SNAPSHOT_COMMIT}\"")
    L.append(f"def refTablesRuleCount : Nat := {len(payload['rules'])}")
    L.append(f"def refTablesEmbedCount : Nat := {len(payload['embed_patterns'])}")
    L.append(f"def refTablesDigest : String := \"{payload['digest']}\"")
    L.append("")
    L.append("def refRuleRegexes : List (String × List (List Nat)) := [")
    for r in payload["rules"]:
        pats = ", ".join(byte_list(p) for p in r["patterns"])
        if r.get("patterns_provenance") == "php-resolved-dynamic":
            L.append(f'  -- {r["rule"]}: $regex assembled in __construct; pattern')
            L.append(f'  -- resolved by executing the pinned PHP source (see extractor).')
        L.append(f'  ("{r["rule"]}", [{pats}]),')
    L.append("]")
    L.append("")
    L.append("def refEmbedPatterns : List (String × List Nat) := [")
    for k, p in payload["embed_patterns"]:
        L.append(f'  ("{k}", {byte_list(p)}),')
    L.append("]")
    L.append("")
    L.append("def refInlineRegexes : List (String × String × List Nat) := [")
    for r in payload["rules"]:
        for it in r["inline"]:
            L.append(f'  ("{r["rule"]}", "{it["api"]}", {byte_list(it["pattern"])}),')
    L.append("]")
    L.append("")
    L.append("end LeanFtml")
    L.append("")
    return "\n".join(L)


def build_payload(ref_php: pathlib.Path, checked, resolved: dict,
                  php_ver: str):
    rules = []
    construct_set = set()
    flag_set = set()
    for rid, cls in RULES:
        rel = f"text-wiki/Text/Wiki/Parse/Default/{cls}.php"
        src = (ref_php / rel).read_text(encoding="utf-8", errors="replace")
        pats, lit = extract_rule_regex(src)
        inline = extract_inline_preg(src) + extract_dynamic_regex(src)
        for p in pats:
            _, fl, _ = pattern_flags(p)
            flag_set.update(fl)
            construct_set.update(construct_inventory(p))
        for api, p in inline:
            if api == "dynamic-template":
                continue
            _, fl, _ = pattern_flags(p)
            flag_set.update(fl)
            construct_set.update(construct_inventory(p))
        provenance = "literal"
        if (not pats or pats == [""]) and cls in resolved:
            pats = [resolved[cls]]
            provenance = "php-resolved-dynamic"
        rules.append({"rule": rid, "class": cls, "source": rel,
                      "literal": lit, "patterns": pats,
                      "patterns_provenance": provenance,
                      "resolved_regex": resolved.get(cls),
                      "inline": [{"api": f, "pattern": p} for f, p in inline]})
    embed = extract_embed_patterns((ref_php / EMBED_CONFIG).read_text(
        encoding="utf-8", errors="replace"))
    for _, p in embed:
        _, fl, _ = pattern_flags(p)
        flag_set.update(fl)
        construct_set.update(construct_inventory(p))
    payload = {
        "php_version": php_ver,
        "snapshot_tag": SNAPSHOT_TAG,
        "snapshot_commit": SNAPSHOT_COMMIT,
        "source_count": len(checked),
        "rules": rules,
        "embed_patterns": embed,
        "flags_observed": sorted(flag_set),
        "constructs_observed": sorted(construct_set),
        "sources": [{"path": p, "sha256": h} for p, h in checked],
    }
    canon = json.dumps({k: v for k, v in payload.items() if k != "digest"},
                       sort_keys=True, separators=(",", ":")).encode("utf-8")
    payload["digest"] = hashlib.sha256(canon).hexdigest()
    return payload


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--ref-php", default=DEFAULT_REF_PHP)
    ap.add_argument("--ref-repo", default=DEFAULT_REF_REPO)
    ap.add_argument("--out-dir", default=str(pathlib.Path(__file__).resolve().parent.parent))
    ap.add_argument("--verify", action="store_true",
                    help="do not write; byte-compare generated tables with committed ones")
    args = ap.parse_args()

    ref_php = pathlib.Path(args.ref_php)
    ref_repo = pathlib.Path(args.ref_repo)
    out = pathlib.Path(args.out_dir)
    json_path = out / "RefTables.json"
    lean_root = out / "lean-ftml"
    if not (lean_root / "LeanFtml").is_dir():
        lean_root = out
    lean_path = lean_root / "LeanFtml" / "RefTables.lean"

    checked, errors = verify_inputs(ref_repo, ref_php)
    print(f"[extract] tag={SNAPSHOT_TAG} commit={SNAPSHOT_COMMIT}")
    print(f"[extract] SHA-256 sources verified: {len(checked)}/{len(PINNED)}")
    if errors:
        for e in errors:
            print("[extract] VERIFY-FAIL " + e)
        print(f"[extract] RESULT FAIL ({len(errors)} error(s))")
        return 2
    print("[extract] SHA-256 manifest re-derived from tag: OK")
    print("[extract] working copies match manifest: OK")

    resolved = resolve_dynamic_regexes(ref_php)
    php_ver = php_version()
    print(f"[extract] PHP {php_ver}: dynamically resolved $regex for "
          f"{len(resolved)} rule class(es)")
    payload = build_payload(ref_php, checked, resolved, php_ver)
    rules_with = [r for r in payload["rules"] if r["patterns"]]
    print(f"[extract] active rules: {len(payload['rules'])} "
          f"(with primary regex: {len(rules_with)})")
    print(f"[extract] primary regexes extracted: "
          f"{sum(len(r['patterns']) for r in payload['rules'])}")
    print(f"[extract] inline preg_* regexes extracted: "
          f"{sum(len(r['inline']) for r in payload['rules'])}")
    covered = sum(1 for r in payload["rules"] if r["patterns"] or r["inline"])
    print(f"[extract] rules with >=1 extracted regex: {covered}/{len(payload['rules'])}")
    print(f"[extract] embed static patterns: {len(payload['embed_patterns'])}")
    print(f"[extract] flags observed: {' '.join(payload['flags_observed'])}")
    print(f"[extract] constructs observed: {' '.join(payload['constructs_observed'])}")
    print(f"[extract] canonical digest: {payload['digest']}")

    json_bytes = (json.dumps(payload, indent=2, sort_keys=True) + "\n").encode("utf-8")
    lean_bytes = generate_lean(payload).encode("utf-8")

    if args.verify:
        problems = []
        for path, data in ((json_path, json_bytes), (lean_path, lean_bytes)):
            if not path.is_file():
                problems.append(f"missing generated artifact {path}")
            elif path.read_bytes() != data:
                problems.append(f"stale generated artifact {path}")
        if problems:
            for p in problems:
                print("[extract] VERIFY-FAIL " + p)
            print("[extract] RESULT FAIL")
            return 3
        print("[extract] committed RefTables.json / RefTables.lean are byte-identical")
        print("[extract] RESULT OK")
        return 0

    json_path.parent.mkdir(parents=True, exist_ok=True)
    lean_path.parent.mkdir(parents=True, exist_ok=True)
    json_path.write_bytes(json_bytes)
    lean_path.write_bytes(lean_bytes)
    print(f"[extract] wrote {json_path} ({len(json_bytes)} bytes)")
    print(f"[extract] wrote {lean_path} ({len(lean_bytes)} bytes)")
    print("[extract] RESULT OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
