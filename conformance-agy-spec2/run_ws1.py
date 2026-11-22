#!/usr/bin/env python3
"""
Workstream 1 differential suite across the 7 confirmed defect families:
  1. list-case    (Parse/Default/List.php explicit [[ul]]/[[ol]]/[[li]])
  2. colortext    (Parse/Default/Colortext.php + Render/Xhtml/Colortext.php)
  3. div-attr     (Parse/Default/Div.php + Render/Xhtml/Div.php)
  4. date         (Parse/Default/Date.php + Render/Xhtml/Date.php)
  5. blockquote   (Parse/Default/Blockquote.php)
  6. iftags       (Parse/Default/Iftags.php)
  7. freelink     (Parse/Default/Freelink.php transliteration & interactions)

Email and Raw are excluded per PROMPT-ANTIGRAVITY-SPEC2.md.
Zero live probing; runs strictly against local ref-php/harness/{batch,transform}.php.
"""

import json
import os
import subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUT_DIR = os.path.dirname(os.path.abspath(__file__))

# Status tags:
#   baseline_tag in None | "SUSPECT" | "REFCORR2" | "HTMLCHARS"
#   "AGREE"                    : ref-php matches expected_spec
#   "ALREADY-RECORDED-SUSPECT" : exact shape already in REPORT-ANTIGRAVITY-SUSPECT.md
#   "STALE-BASE-FILTERED"      : settled in updates/ (REFCORR2 / HTMLCHARS)
#   "NEW-CANDIDATE"            : genuinely new departure of ref-php from intended spec
CASES = [
    # =========================================================================
    # FAMILY 1: list-case (explicit [[ul]] / [[ol]] / [[li]] blocks)
    # =========================================================================
    ("lc-ctrl-ul-upper-all", "list-case", "C1_upper_open_close",
     "[[UL]]\n[[LI]]Case[[/LI]]\n[[/UL]]", [],
     "<ul>\n<li>Case</li>\n</ul><br />", "SUSPECT", "SUSPECT p30 baseline (ref literal; live asymmetric unclosed)"),
    ("lc-ctrl-ul-upper-open-lower-close", "list-case", "C2_upper_open_lower_close",
     "[[UL]]\n[[LI]]Case[[/li]]\n[[/ul]]", [],
     "<ul>\n<li>Case</li>\n</ul><br />", "SUSPECT", "SUSPECT f04 baseline"),
    ("lc-ctrl-ul-lower-open-upper-close", "list-case", "C3_lower_open_upper_close",
     "[[ul]]\n[[li]]Case[[/LI]]\n[[/UL]]", [],
     "<ul>\n<li>Case</li>\n</ul><br />", "SUSPECT", "SUSPECT f05 baseline"),
    ("lc-ctrl-ol-lower-open-upper-close", "list-case", "C3_lower_open_upper_close",
     "[[ol]]\n[[li]]Case[[/LI]]\n[[/OL]]", [],
     "<ol>\n<li>Case</li>\n</ol><br />", "SUSPECT", "SUSPECT b3-2 baseline"),
    ("lc-ctrl-ul-mixed-inner", "list-case", "C4_lower_outer_upper_li",
     "[[ul]]\n[[LI]]A[[/LI]]\n[[/ul]]", [],
     "<ul>\n<li>A</li>\n</ul><br />", "SUSPECT", "SUSPECT b3-1 baseline"),
    ("lc-ctrl-lower-ul-degraded-noli", "list-case", "C10_lower_degraded_noli",
     "[[ul]]\nbody\n[[/ul]]", [],
     "<ul>\n<li style=\"list-style: none\">body</li>\n</ul><br />", None, "Agree control: lowercase [[ul]] without [[li]] wraps degraded text"),

    ("lc-sib-mixed-ul", "list-case", "C1_mixed_open_close",
     "[[Ul]]\n[[Li]]Mixed[[/Li]]\n[[/Ul]]", [],
     "<ul>\n<li>Mixed</li>\n</ul><br />", None, "TitleCase Ul/Li openers & closers"),
    ("lc-sib-mixed-ol", "list-case", "C1_mixed_open_close",
     "[[Ol]]\n[[lI]]Mixed[[/lI]]\n[[/oL]]", [],
     "<ol>\n<li>Mixed</li>\n</ol><br />", None, "Mixed-case Ol/lI openers & closers"),
    ("lc-sib-lower-li-mixed-close", "list-case", "C3_lower_open_mixed_close",
     "[[ul]]\n[[li]]Case[[/Li]]\n[[/Ul]]", [],
     "<ul>\n<li>Case</li>\n</ul><br />", None, "Lowercase openers with TitleCase closers"),
    ("lc-sib-scored-ul-upper", "list-case", "C5_scored_upper",
     "[[UL_]]\n[[LI]]A[[/LI]]\n[[/UL]]\n\nAFTER", [],
     "<ul>\n<li>A</li>\n</ul><p>AFTER</p>", None, "Uppercase scored [[UL_]]"),
    ("lc-sib-scored-ol-upper", "list-case", "C5_scored_upper",
     "[[OL_]]\n[[LI]]A[[/LI]]\n[[/OL]]\n\nAFTER", [],
     "<ol>\n<li>A</li>\n</ol><p>AFTER</p>", None, "Uppercase scored [[OL_]]"),
    ("lc-sib-scored-lower-open-upper-close", "list-case", "C5_scored_mixed_close",
     "[[ul_]]\n[[li]]A[[/LI]]\n[[/UL]]\n\nAFTER", [],
     "<ul>\n<li>A</li>\n</ul><p>AFTER</p>", None, "Lowercase scored [[ul_]] with uppercase closers"),
    ("lc-sib-ul-upper-with-class", "list-case", "C6_upper_with_attrs",
     "[[UL class=\"mycls\"]]\n[[LI style=\"color:red\"]]Item[[/LI]]\n[[/UL]]", [],
     "<ul class=\"mycls\">\n<li style=\"color:red\">Item</li>\n</ul><br />", None, "Uppercase UL/LI with attributes"),
    ("lc-sib-nested-lower-ul-upper-ol", "list-case", "C7_nested_mixed",
     "[[ul]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]", [],
     "<ul>\n<li>a<br />\n<ol>\n<li>b</li>\n</ol></li>\n</ul><br />", None, "Nested uppercase OL inside lowercase ul"),
    ("lc-sib-extra-bracket-upper-close", "list-case", "C8_extra_bracket_close",
     "[[ul]]\n[[li]]a[[/LI]]]\n[[/UL]]]", [],
     "<ul>\n<li>a</li>\n</ul><br />", None, "Trailing extra ] on uppercase closer"),
    ("lc-sib-lower-ul-upper-attr-data", "list-case", "C9_attr_key_case",
     "[[ul DATA-foo=\"bar\" CLASS=\"c\"]]\n[[li DATA-item=\"1\"]]x[[/li]]\n[[/ul]]", [],
     "<ul>\n<li>x</li>\n</ul><br />", None, "Agree: live container allowlist drops uppercase CLASS and DATA-* prefix (settled in contain/div & listblocks)"),
    ("lc-sib-lower-ul-data-mixed-val", "list-case", "C9_attr_key_case",
     "[[ul Data-Mix=\"1\"]]\n[[li ID=\"x\"]]a[[/li]]\n[[/ul]]", [],
     "<ul>\n<li>a</li>\n</ul><br />", None, "Agree: live container allowlist drops mixed-case Data- prefix and uppercase ID"),
    ("lc-sib-upper-ul-degraded-noli", "list-case", "C10_upper_degraded_noli",
     "[[UL]]\nbody\n[[/UL]]", [],
     "<ul>\n<li style=\"list-style: none\">body</li>\n</ul><br />", None, "Uppercase [[UL]] without [[li]] stays literal instead of degrading cleanly"),
    ("lc-sib-cross-ul-ol-upper", "list-case", "C11_cross_tag_upper",
     "[[ul]]\n[[li]]a[[/li]]\n[[/OL]]", [],
     "<p>[[ul]]<br />\n[[li]]a[[/li]]<br />\n[[/OL]]</p>", None, "Agree control: mismatched cross-tag closer"),
    ("lc-sib-standalone-upper-li", "list-case", "C12_standalone_li",
     "[[LI]]a[[/LI]]", [],
     "<p>[[LI]]a[[/LI]]</p>", None, "Agree control: standalone [[LI]] outside list"),

    # =========================================================================
    # FAMILY 2: colortext (parse-time color validation & interaction)
    # =========================================================================
    ("ct-ctrl-invalid-html", "colortext", "C1_invalid_html_in_spec",
     "##<i>|hello##", [],
     "<p>##&lt;i&gt;|hello##</p>", "SUSPECT", "SUSPECT p09 baseline"),
    ("ct-ctrl-invalid-tighten", "colortext", "C2_invalid_tighten_hoist",
     "x##a!b| hello ##y", [],
     "<p>x##a!b| hello ##y</p>", "SUSPECT", "SUSPECT p10 baseline"),
    ("ct-ctrl-invalid-raw-spec", "colortext", "C3_invalid_token_in_spec",
     "##@@red@@|hello##", [],
     "<p>##<span style=\"white-space: pre-wrap;\">red</span>|hello##</p>", "SUSPECT", "SUSPECT x06 baseline"),

    ("ct-sib-empty-spec", "colortext", "C0_empty_spec",
     "##|hello##", [],
     "<p>##|hello##</p>", None, "Agree: parse regex requires >=1 char color spec before '|'"),
    ("ct-sib-ws-spec", "colortext", "C0_valid_ws",
     "##   |hello##", [],
     "<p><span style=\"color:\">hello</span></p>", None, "Agree: whitespace-only color spec"),
    ("ct-sib-ws-spec-tighten", "colortext", "C0_valid_ws_tighten",
     "x##  | hello ##y", [],
     "<p>x <span style=\"color:\">hello</span> y</p>", None, "Agree: whitespace-only color spec with Tighten"),
    ("ct-sib-hex3-hash", "colortext", "C0_valid_hex3",
     "## #aBc |hi##", [],
     "<p><span style=\"color: #abc\">hi</span></p>", None, "Agree: valid 3-digit hex"),
    ("ct-sib-hex3-nohash", "colortext", "C0_valid_hex3_nohash",
     "##abc|hi##", [],
     "<p><span style=\"color: #abc\">hi</span></p>", None, "Agree: valid bare 3-digit hex"),
    ("ct-sib-rgb", "colortext", "C0_valid_rgb",
     "##rgb(1, 2, 3)|hi##", [],
     "<p><span style=\"color: rgb(1, 2, 3)\">hi</span></p>", None, "Agree: valid rgb()"),
    ("ct-sib-rgba-dot", "colortext", "C4_invalid_punct_rgba",
     "##rgba(1, 2, 3, 0.5)|hi##", [],
     "<p>##rgba(1, 2, 3, 0.5)|hi##</p>", None, "Agree when alone without Tighten/HTML"),
    ("ct-sib-rgba-dot-bold", "colortext", "C4_invalid_punct_markup",
     "##a!b|**bold**##", [],
     "<p>##a!b|<strong>bold</strong>##</p>", None, "Agree when body markup evaluates downstream"),
    ("ct-sib-bad-then-valid-sameline", "colortext", "C5_invalid_followed_by_valid",
     "##bad!|a##red|b##", [],
     "<p>##bad!|a<span style=\"color: red\">b</span></p>", None, "Over-claiming ##bad!|...## consumes ## and destroys following ##red|b##"),
    ("ct-sib-html-then-valid-sameline", "colortext", "C5_invalid_followed_by_valid",
     "##<i>|a##blue|b##", [],
     "<p>##&lt;i&gt;|a<span style=\"color: blue\">b</span></p>", None, "Both unescaped <i> AND destroys following ##blue|b##"),
    ("ct-sib-url-bracket-in-spec", "colortext", "C3_earlier_url_token_in_spec",
     "##[http://example.com a]|x##", [],
     "<p>##<a href=\"http://example.com\">a</a>|x##</p>", None, "Described Url token trapped inside ##...|x## leaks raw \\xFF bytes"),
    ("ct-sib-span-token-in-spec", "colortext", "C3_earlier_span_token_in_spec",
     "##[[span]]r[[/span]]|x##", [],
     "<p>##<span>r</span>|x##</p>", None, "Span token trapped inside ##...|x## leaks raw \\xFF bytes"),
    ("ct-sib-comment-token-in-spec", "colortext", "C3_earlier_comment_token_in_spec",
     "##[!--c--]red|x##", [],
     "<p><span style=\"color: red\">x</span></p>", None, "Agree: Comment strips before Colortext leaving valid ##red|x##"),
    ("ct-sib-quote-apos-in-spec", "colortext", "C1_invalid_quotes_unesc",
     "##a\"b'c|hello##", [],
     "<p>##a&quot;b'c|hello##</p>", None, "Unescaped '\"' bypasses Xhtml::pre() in invalid color spec"),
    ("ct-sib-amp-in-spec", "colortext", "C1_invalid_amp_unesc",
     "##a&b|hello##", [],
     "<p>##a&amp;b|hello##</p>", None, "Unescaped '&' bypasses Xhtml::pre() in invalid color spec"),
    ("ct-sib-nonascii-in-spec", "colortext", "C4_invalid_nonascii",
     "##é|hello##", [],
     "<p>##é|hello##</p>", None, "Agree when plain non-ASCII without Tighten"),
    ("ct-sib-nonascii-tighten", "colortext", "C2_invalid_nonascii_tighten",
     "x##é| hello ##y", [],
     "<p>x##é| hello ##y</p>", None, "Tighten hoists inner spaces on rejected non-ASCII spec"),
    ("ct-sib-rgba-tighten", "colortext", "C2_invalid_rgba_tighten",
     "x##rgba(1,2,3,0.5)| hello ##y", [],
     "<p>x##rgba(1,2,3,0.5)| hello ##y</p>", None, "Tighten hoists inner spaces on rejected rgba() spec"),
    ("ct-sib-empty-body-invalid-spec", "colortext", "C4_empty_body",
     "##a!b|##", [],
     "<p>##a!b|##</p>", None, "Agree: empty body stays literal"),
    ("ct-sib-ws-body-valid-spec", "colortext", "C0_ws_body",
     "##red| ##", [],
     "<p><span style=\"color: red\"></span></p>", None, "Agree: Tighten trims space-only body"),
    ("ct-sib-nested-valid", "colortext", "C0_nested",
     "##red|a##blue|b####", [],
     "<p><span style=\"color: red\">a</span>blue|b####</p>", None, "Agree: lazy stop at first ##"),

    # =========================================================================
    # FAMILY 3: div-attr (Div attribute escaping, token clearing & attr-key case)
    # Attribute order and empty-attributeless-div vanishing settled in REFCORR2.
    # =========================================================================
    ("da-ctrl-data-escapes", "div-attr", "C1_data_escaping",
     "[[div data-x=\"a&b<c>d'e\"]]\nhi\n[[/div]]", [],
     "<div data-x=\"a&amp;b&lt;c&gt;d'e\"><p>hi</p>\n\n</div>", "SUSPECT", "SUSPECT f09 baseline"),
    ("da-ctrl-data-raw", "div-attr", "C2_data_raw_clear",
     "[[div data-x=\"a@@b@@c\"]]\nhi\n[[/div]]", [],
     "<div data-x=\"\"><p>hi</p>\n\n</div>", "SUSPECT", "SUSPECT x08 baseline"),
    ("da-ctrl-id-class-raw", "div-attr", "C2_id_class_raw_clear",
     "[[div id=\"a@@b@@c\" class=\"a@@b@@c\"]]\nhi\n[[/div]]", [],
     "<div id=\"\" class=\"\"><p>hi</p>\n\n</div>", "SUSPECT", "SUSPECT b3-4 baseline"),
    ("da-stale-order", "div-attr", "STALE_REFCORR2_order",
     "[[div class=\"a\" id=\"b\"]]\nhi\n[[/div]]", [],
     "<div id=\"u-b\" class=\"a\"><p>hi</p>\n\n</div>", "REFCORR2", "Settled in updates/REPORT-REFCORR2.md (C-STAGE2-1); excluded"),
    ("da-stale-vanished", "div-attr", "STALE_REFCORR2_vanished",
     "[[div]]\n\n[[/div]]\nAFTER", [],
     "<br />\nAFTER", "REFCORR2", "Settled in updates/REPORT-REFCORR2.md (C-STAGE2-2); excluded"),

    ("da-sib-class-escapes", "div-attr", "C1_class_escaping",
     "[[div class=\"a&b<c>d'e\"]]\nhi\n[[/div]]", [],
     "<div class=\"a&amp;b&lt;c&gt;d'e\"><p>hi</p>\n\n</div>", None, "Div class lacks ENT_COMPAT escaping"),
    ("da-sib-class-singlequote", "div-attr", "C0_singlequote_not_attr",
     "[[div class='plain']]\nhi\n[[/div]]", [],
     "<div><p>hi</p>\n\n</div>", None, "Agree: Div attribute syntax admits only double-quoted values"),
    ("da-sib-style-escapes", "div-attr", "C1_style_escaping",
     "[[div style=\"a&b<c>d'e\"]]\nhi\n[[/div]]", [],
     "<div style=\"a&amp;b&lt;c&gt;d'e\"><p>hi</p>\n\n</div>", None, "Div style lacks ENT_COMPAT escaping"),
    ("da-sib-role-escapes", "div-attr", "C1_role_escaping",
     "[[div role=\"a&b<c>d'e\"]]\nhi\n[[/div]]", [],
     "<div role=\"a&amp;b&lt;c&gt;d'e\"><p>hi</p>\n\n</div>", None, "Div role lacks ENT_COMPAT escaping"),
    ("da-sib-type-escapes", "div-attr", "C1_type_escaping",
     "[[div type=\"a&b<c>d'e\"]]\nhi\n[[/div]]", [],
     "<div type=\"a&amp;b&lt;c&gt;d'e\"><p>hi</p>\n\n</div>", None, "Div type lacks ENT_COMPAT escaping"),
    ("da-sib-id-escapes", "div-attr", "C1_id_escaping",
     "[[div id=\"a&b<c>d'e\"]]\nhi\n[[/div]]", [],
     "<div id=\"u-a&amp;b&lt;c&gt;d'e\"><p>hi</p>\n\n</div>", None, "Div id lacks ENT_COMPAT escaping"),
    ("da-sib-double-entity", "div-attr", "C1_preencoded_entity",
     "[[div data-x=\"&amp;\"]]\nhi\n[[/div]]", [],
     "<div data-x=\"&amp;amp;\"><p>hi</p>\n\n</div>", None, "Div pre-encoded entity not double-encoded"),
    ("da-sib-scored-escapes", "div-attr", "C1_scored_div_escaping",
     "[[div_ data-x=\"a&b<c>d\"]]\nhi\n[[/div]]", [],
     "<div data-x=\"a&amp;b&lt;c&gt;d\">hi</div>", None, "Scored [[div_]] attribute escaping missing"),
    ("da-sib-scored-raw", "div-attr", "C2_scored_div_raw_clear",
     "[[div_ data-x=\"a@@b@@c\"]]\nhi\n[[/div]]", [],
     "<div data-x=\"\">hi</div>", None, "Scored [[div_]] leaks \\xFF placeholder"),
    ("da-sib-style-raw", "div-attr", "C2_style_raw_clear",
     "[[div style=\"a@@b@@c\"]]\nhi\n[[/div]]", [],
     "<div style=\"\"><p>hi</p>\n\n</div>", None, "Div style leaks \\xFF placeholder"),
    ("da-sib-role-raw", "div-attr", "C2_role_raw_clear",
     "[[div role=\"a@@b@@c\"]]\nhi\n[[/div]]", [],
     "<div role=\"\"><p>hi</p>\n\n</div>", None, "Div role leaks \\xFF placeholder"),
    ("da-sib-type-raw", "div-attr", "C2_type_raw_clear",
     "[[div type=\"a@@b@@c\"]]\nhi\n[[/div]]", [],
     "<div type=\"\"><p>hi</p>\n\n</div>", None, "Div type leaks \\xFF placeholder"),
    ("da-sib-comment-in-data", "div-attr", "C2_comment_token_in_data",
     "[[div data-x=\"a[!--c--]b\"]]\nhi\n[[/div]]", [],
     "<div data-x=\"ab\"><p>hi</p>\n\n</div>", None, "Agree: Comment strips before Div"),
    ("da-sib-span-in-data", "div-attr", "C2_span_token_in_data",
     "[[div data-x=\"a[[span]]x[[/span]]b\"]]\nhi\n[[/div]]", [],
     "<div data-x=\"\"><p>hi</p>\n\n</div>", None, "Span tokens in Div attr leak raw \\xFF"),
    ("da-sib-date-in-data", "div-attr", "C2_date_token_in_data",
     "[[div data-x=\"a[[date 0]]b\"]]\nhi\n[[/div]]", [],
     "<div data-x=\"\"><p>hi</p>\n\n</div>", None, "Date token in Div attr leaks raw \\xFF"),
    ("da-sib-mixed-data-one-raw", "div-attr", "C2_multi_data_partial_clear",
     "[[div data-a=\"clean\" data-b=\"a@@b@@c\"]]\nhi\n[[/div]]", [],
     "<div data-a=\"clean\" data-b=\"\"><p>hi</p>\n\n</div>", None, "Clean data-a kept, token-bearing data-b leaks \\xFF"),
    ("da-sib-empty-body-cleared-attr", "div-attr", "C3_cleared_attr_on_empty_div",
     "[[div data-x=\"a@@b@@c\"]]\n\n[[/div]]", [],
     "<div data-x=\"\"></div>", None, "Empty-body attributed div leaks \\xFF"),
    ("da-sib-empty-body-cleared-id", "div-attr", "C3_cleared_id_on_empty_div",
     "[[div id=\"a@@b@@c\"]]\n\n[[/div]]", [],
     "<div id=\"\"></div>", None, "Empty-body id-only div emits id='u-' (PCRE /u fails on \\xFF and returns null) instead of id=''"),
    ("da-sib-upper-data-key", "div-attr", "C4_upper_attr_key",
     "[[div DATA-X=\"a&b\"]]\nhi\n[[/div]]", [],
     "<div><p>hi</p>\n\n</div>", None, "Agree: live drops uppercase DATA-X (pinned by contain/div/captures-part2.json)"),
    ("da-sib-upper-class-style", "div-attr", "C4_upper_attr_key",
     "[[div CLASS=\"y\" STYLE=\"color:red\"]]\nhi\n[[/div]]", [],
     "<div><p>hi</p>\n\n</div>", None, "Agree: live drops uppercase CLASS/STYLE (pinned by contain/div/captures-part2.json)"),
    ("da-sib-id-empty", "div-attr", "C4_id_empty",
     "[[div id=\"\"]]\nhi\n[[/div]]", [],
     "<div><p>hi</p>\n\n</div>", None, "Agree: empty id omitted"),
    ("da-sib-id-space-u", "div-attr", "C4_id_leading_space_u",
     "[[div id=\" u-foo\"]]\nhi\n[[/div]]", [],
     "<div id=\"u- u-foo\"><p>hi</p>\n\n</div>", None, "Agree: isolateId mirrors ftml/live leading-space u- prefixing (Div.php:68-85)"),
    ("da-sib-span-escapes-check", "div-attr", "C5_span_sibling_control",
     "[[span data-x=\"a&b<c>d'e\"]]hi[[/span]]", [],
     "<p><span data-x=\"a&amp;b&lt;c&gt;d'e\">hi</span></p>", None, "Agree: Span already escapes ENT_COMPAT"),
    ("da-sib-span-raw-check", "div-attr", "C5_span_raw_sibling_control",
     "[[span data-x=\"a@@b@@c\"]]hi[[/span]]", [],
     "<p><span data-x=\"\">hi</span></p>", None, "Agree: Span already clears \\xFF"),

    # =========================================================================
    # FAMILY 4: date (fabricated encodeFormat rule & timestamp= attr siblings)
    # Note: pure Raw-scanner differences (a@@@@b, @@@@123@@@@) are excluded per PROMPT.
    # =========================================================================
    ("dt-ctrl-ts-override", "date", "C1_ts_attr_override_valid",
     "[[date 86400 timestamp=\"0\"]]", [],
     "<p><span class=\"odate time_0\">01 Jan 1970 00:00</span></p>", "SUSPECT", "SUSPECT p21 baseline (agree override)"),
    ("dt-ctrl-six-at-forge", "date", "C2_encodeFormat_literal_at_digits",
     "[[date 0 format=\"@@@@@@123@@@@@@\"]]", [],
     "<p><span class=\"odate time_0 format_%FF0%FF%40%40123%FF1%FF%40%40\">01 Jan 1970 00:00</span></p>", "SUSPECT", "SUSPECT p22 baseline (encodeFormat forges %FF123%FF from literal @@123@@)"),

    ("dt-sib-raw-inside-format", "date", "C2_real_raw_in_format",
     "[[date 0 format=\"a@@b@@c\"]]", [],
     "<p><span class=\"odate time_0 format_a%FF0%FFc\">01 Jan 1970 00:00</span></p>", None, "Agree (single-doc): real Raw token in format emits %FF0%FF"),
    ("dt-sib-comment-token-in-format", "date", "C2_comment_token_in_format",
     "[[date 0 format=\"a[!--c--]b\"]]", [],
     "<p><span class=\"odate time_0 format_ab\">01 Jan 1970 00:00</span></p>", None, "Agree: Comment stripped before Date"),
    ("dt-sib-percent-g", "date", "C3_format_percent_g",
     "[[date 0 format=\"%g\"]]", [],
     "<p><span class=\"odate time_0 format_ago\">01 Jan 1970 00:00</span></p>", None, "Agree: %g -> ago"),
    ("dt-sib-ts-override-empty", "date", "C1_ts_attr_override_empty",
     "[[date 86400 timestamp=\"\"]]", [],
     "", None, "Empty timestamp=\"\" override leaves bare empty <p></p>"),
    ("dt-sib-ts-override-empty-zero", "date", "C1_ts_attr_override_empty_zero",
     "[[date 0 timestamp=\"\"]]", [],
     "", None, "Positional 0 overridden by empty timestamp=\"\" leaves bare empty <p></p>"),
    ("dt-sib-ts-override-alpha", "date", "C1_ts_attr_override_alpha",
     "[[date 86400 timestamp=\"abc\"]]", [],
     "<p><span class=\"odate time_0\">01 Jan 1970 00:00</span></p>", None, "Non-numeric timestamp=\"abc\" emits malformed class=\"odate time_abc\" and renders epoch 0"),
    ("dt-sib-ts-override-whitespace", "date", "C1_ts_attr_override_ws_pad",
     "[[date 86400 timestamp=\" 120 \"]]", [],
     "<p><span class=\"odate time_120\">01 Jan 1970 00:02</span></p>", None, "Whitespace inside timestamp=\" 120 \" splits HTML class attr into 'odate', 'time_', '120'"),
    ("dt-sib-ts-override-html-injection", "date", "C1_ts_attr_override_unesc_html",
     "[[date 0 timestamp=\"a&b<c\"]]", [],
     "<p><span class=\"odate time_0\">01 Jan 1970 00:00</span></p>", None, "Unescaped '&' and '<' injected directly into class=\"odate time_a&b<c\""),
    ("dt-sib-ts-override-neg", "date", "C1_ts_attr_override_neg",
     "[[date 86400 timestamp=\"-86400\"]]", [],
     "<p><span class=\"odate time_-86400\">31 Dec 1969 00:00</span></p>", None, "Agree: negative integer override"),
    ("dt-sib-ts-override-leading-zero", "date", "C1_ts_attr_override_zero_pad",
     "[[date 86400 timestamp=\"00042\"]]", [],
     "<p><span class=\"odate time_42\">01 Jan 1970 00:00</span></p>", None, "Agree: leading zeros normalized by (int)"),
    ("dt-sib-ts-override-overflow", "date", "C1_ts_attr_override_overflow",
     "[[date 0 timestamp=\"999999999999999999999\"]]", [],
     "<p><span class=\"odate time_9223372036854775807\">04 Dec 292277026596 15:30</span></p>", None, "Agree: matches positional 64-bit clamp"),
    ("dt-sib-blank-pos-with-ts-attr", "date", "C1_blank_pos_ts_attr",
     "[[date  timestamp=\"86400\"]]", [],
     "<p><span class=\"odate time_86400\">02 Jan 1970 00:00</span></p>", None, "Agree with live p21: blank positional + valid timestamp=\"86400\" renders time_86400"),
    ("dt-sib-date-negative-zero", "date", "C4_neg_zero",
     "[[date -0]]", [],
     "<p><span class=\"odate time_0\">01 Jan 1970 00:00</span></p>", None, "Agree: -0 -> time_0"),
    ("dt-sib-date-plus-ten", "date", "C4_plus_ten",
     "[[date +10]]", [],
     "<p>[[date +10]]</p>", None, "Agree: unary + not matched"),
    ("dt-sib-format-utf8", "date", "C5_utf8_format",
     "[[date 0 format=\"café\"]]", [],
     "<p><span class=\"odate time_0 format_caf%C3%A9\">01 Jan 1970 00:00</span></p>", None, "Agree: UTF-8 rawurlencode"),
    ("dt-sib-format-html", "date", "C5_meta_in_format",
     "[[date 0 format=\"a&b<c\"]]", [],
     "<p><span class=\"odate time_0 format_a%26b%3Cc\">01 Jan 1970 00:00</span></p>", None, "Agree: & and < percent-encoded in format"),

    # =========================================================================
    # FAMILY 5: blockquote (silent deletion of >nospace & empty > lines)
    # =========================================================================
    ("bq-ctrl-lone-nospace", "blockquote", "C1_lone_nospace",
     "A\n\n>nospace\n\nB", [],
     "<p>A</p>\n\n<p>&gt;nospace</p>\n\n<p>B</p>", "SUSPECT", "SUSPECT p32 baseline (ref+live both delete)"),
    ("bq-ctrl-raw-nospace", "blockquote", "C1_raw_nospace",
     "A\n\n>@@hello@@\n\nB", [],
     "<p>A</p>\n\n<p>&gt;<span style=\"white-space: pre-wrap;\">hello</span></p>\n\n<p>B</p>", "SUSPECT", "SUSPECT x07 baseline (ref+live both delete)"),

    ("bq-sib-sof-nospace", "blockquote", "C2_sof_nospace",
     ">nospace\n\nafter", [],
     "<p>&gt;nospace</p>\n\n<p>after</p>", None, "Document-start >nospace deleted"),
    ("bq-sib-eof-nospace", "blockquote", "C2_eof_nospace",
     "before\n\n>nospace", [],
     "<p>before</p>\n\n<p>&gt;nospace</p>", None, "Document-end >nospace deleted"),
    ("bq-sib-lone-gt", "blockquote", "C2_lone_gt",
     "A\n\n>\n\nB", [],
     "<p>A</p>\n\n<p>&gt;</p>\n\n<p>B</p>", None, "Single '>' line deleted"),
    ("bq-sib-double-gt-nospace", "blockquote", "C2_double_gt_nospace",
     "A\n\n>>nospace\n\nB", [],
     "<p>A</p>\n\n<p>&gt;&gt;nospace</p>\n\n<p>B</p>", None, "Double >>nospace deleted"),
    ("bq-sib-gt-tab", "blockquote", "C2_gt_tab",
     "A\n\n>\ttext\n\nB", [],
     "<p>A</p>\n\n<blockquote><p>text</p>\n\n</blockquote>\n<p>B</p>", None, "Agree: Prefilter expands tab to spaces -> valid blockquote"),
    ("bq-sib-mixed-mid-nospace", "blockquote", "C3_mixed_run_mid",
     "> first\n>nospace\n> last", [],
     "<blockquote><p>first<br />\n&gt;nospace<br />\nlast</p>\n\n</blockquote>", None, "Middle >nospace line silently erased inside blockquote"),
    ("bq-sib-mixed-head-nospace", "blockquote", "C3_mixed_run_head",
     ">nospace\n> valid", [],
     "<p>&gt;nospace</p>\n\n<blockquote><p>valid</p>\n\n</blockquote>", None, "Leading >nospace erased before > valid"),
    ("bq-sib-mixed-tail-nospace", "blockquote", "C3_mixed_run_tail",
     "> valid\n>nospace", [],
     "<blockquote><p>valid</p>\n\n</blockquote>\n<p>&gt;nospace</p>", None, "Trailing >nospace erased after > valid"),
    ("bq-sib-empty-gt-space", "blockquote", "C4_empty_after_gt_space",
     "A\n\n> \n\nB", [],
     "<p>A</p>\n\n<p>&gt; </p>\n\n<p>B</p>", None, "'> ' with empty content silently deleted"),
    ("bq-sib-adjacent-para-nospace", "blockquote", "C5_adj_para",
     "A\n>nospace\nB", [],
     "<p>A<br />\n&gt;nospace<br />\nB</p>", None, "Adjacent >nospace splits para and vanishes"),
    ("bq-sib-inside-div-nospace", "blockquote", "C6_inside_div",
     "[[div]]\n>nospace\n[[/div]]", [],
     "<div><p>&gt;nospace</p>\n\n</div>", None, ">nospace inside [[div]] causes entire [[div]] to collapse to empty"),
    ("bq-sib-inline-bold-nospace", "blockquote", "C7_markup_nospace",
     "A\n\n>**bold**\n\nB", [],
     "<p>A</p>\n\n<p>&gt;<strong>bold</strong></p>\n\n<p>B</p>", None, ">**bold** silently deleted"),
    ("bq-sib-span-token-nospace", "blockquote", "C7_token_nospace",
     "A\n\n>[[span]]x[[/span]]\n\nB", [],
     "<p>A</p>\n\n<p>&gt;<span>x</span></p>\n\n<p>B</p>", None, ">[[span]]x[[/span]] silently deleted"),
    ("bq-sib-freelink-nospace", "blockquote", "C7_freelink_nospace",
     "A\n\n>[[[page]]]\n\nB", [],
     "<p>A</p>\n\n<p>&gt;<a class=\"newpage\" href=\"/page\">page</a></p>\n\n<p>B</p>", None, ">[[[page]]] silently deleted"),

    # =========================================================================
    # FAMILY 6: iftags (comma splitting & empty piece entering $anyTags)
    # Note: F-R2-19 already settled newline-in-spec behavior against live, so
    # newline-in-spec controls are marked AGREE with live R2 behavior, not new bugs.
    # =========================================================================
    ("if-ctrl-trail-comma-untagged", "iftags", "C1_trail_comma_neg",
     "[[iftags -foo,]]KEPT[[/iftags]]", [],
     "<p>KEPT</p>", "SUSPECT", "SUSPECT p28 baseline (untagged)"),
    ("if-ctrl-lead-comma-untagged", "iftags", "C1_lead_comma_neg",
     "A [[iftags ,-foo]]KEPT[[/iftags]] B", [],
     "<p>A KEPT B</p>", "SUSPECT", "SUSPECT f08 baseline (untagged)"),

    ("if-sib-empty-spec-untagged", "iftags", "C2_empty_spec",
     "[[iftags]]KEPT[[/iftags]]", [],
     "<p>KEPT</p>", None, "Bare [[iftags]] unconditionally suppresses body via empty $anyTags"),
    ("if-sib-empty-spec-tagged", "iftags", "C2_empty_spec_tagged",
     "[[iftags]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "Bare [[iftags]] suppresses even on tagged page"),
    ("if-sib-spaces-only", "iftags", "C2_spaces_only_spec",
     "[[iftags   ]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "Whitespace-only [[iftags   ]] suppresses"),
    ("if-sib-lone-comma", "iftags", "C2_lone_comma",
     "[[iftags ,]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "Lone comma [[iftags ,]] suppresses"),
    ("if-sib-double-comma", "iftags", "C2_double_comma",
     "[[iftags ,,]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "Double comma [[iftags ,,]] suppresses"),
    ("if-sib-plus-foo-trail-comma-tagged", "iftags", "C3_req_with_trail_comma",
     "[[iftags +foo,]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "+foo, suppresses even when page HAS tag 'foo'!"),
    ("if-sib-plus-foo-lead-comma-tagged", "iftags", "C3_req_with_lead_comma",
     "[[iftags ,+foo]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, ",+foo suppresses even when page HAS tag 'foo'!"),
    ("if-sib-plus-foo-trail-comma-both-tags", "iftags", "C3_req_with_trail_comma",
     "[[iftags +foo, +bar,]]KEPT[[/iftags]]", ["foo", "bar"],
     "<p>KEPT</p>", None, "+foo, +bar, suppresses even when page has BOTH tags!"),
    ("if-sib-foo-trail-comma-tagged", "iftags", "C4_any_with_trail_comma_tagged",
     "[[iftags foo,]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "Agree: positive foo in anyTags matches 'foo'"),
    ("if-sib-foo-trail-comma-untagged", "iftags", "C4_any_with_trail_comma_untagged",
     "[[iftags foo,]]KEPT[[/iftags]]", [],
     "", None, "Agree: untagged page lacks foo"),
    ("if-sib-double-comma-mid-neg", "iftags", "C5_double_comma_mid",
     "[[iftags -foo,, -bar]]KEPT[[/iftags]]", [],
     "<p>KEPT</p>", None, "Agree: + quantifier collapses consecutive separators mid-spec"),
    ("if-sib-space-comma-mid-neg", "iftags", "C5_space_comma_mid",
     "[[iftags -foo , -bar]]KEPT[[/iftags]]", [],
     "<p>KEPT</p>", None, "Agree: space-comma-space collapses cleanly mid-spec"),
    ("if-sib-dangling-minus-trail-comma", "iftags", "C6_dangling_sign_comma",
     "[[iftags -,]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "Dangling '-,' suppresses via trailing-comma empty piece"),
    ("if-sib-dangling-plus-trail-comma", "iftags", "C6_dangling_sign_comma",
     "[[iftags +,]]KEPT[[/iftags]]", ["foo"],
     "", None, "Agree: dangling '+' requires empty tag '' which fails even without trailing-comma empty piece"),
    ("if-sib-tab-sep", "iftags", "C7_tab_separator",
     "[[iftags -foo\t-bar]]KEPT[[/iftags]]", ["bar"],
     "", None, "Agree: Prefilter turns \\t to spaces before Iftags"),
    ("if-sib-tab-plus-tag", "iftags", "C7_tab_positive",
     "[[iftags foo\tbar]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "Agree: Prefilter turns \\t to spaces"),
    ("if-sib-newline-r2-settled", "iftags", "C7_newline_r2_settled",
     "[[iftags +a\n+b]]KEPT[[/iftags]]", ["a", "b"],
     "", None, "Agree with live R2 (F-R2-19): newline inside spec suppresses"),
    ("if-sib-case-tag-trail-comma", "iftags", "C8_case_tag_comma",
     "[[iftags FOO,]]KEPT[[/iftags]]", ["foo"],
     "<p>KEPT</p>", None, "Agree: uppercase FOO matches tag foo despite trailing comma"),
    ("if-sib-nested-comma", "iftags", "C9_nested_comma",
     "[[iftags -a,]]OUT[[iftags +b]]IN[[/iftags]][[/iftags]]", ["b"],
     "<p>OUTIN</p>", None, "Trailing comma on outer drops both outer and inner +b body"),

    # =========================================================================
    # FAMILY 7: freelink (transliteration missing ASCII passthrough + order)
    # =========================================================================
    ("fl-ctrl-cafe", "freelink", "C1_ascii_plus_accent",
     "[[[café]]]", [],
     "<p><a class=\"newpage\" href=\"/cafe\">café</a></p>", "SUSPECT", "SUSPECT p03 baseline"),
    ("fl-ctrl-lodz", "freelink", "C1_polish_ascii_mix",
     "[[[Łódź]]]", [],
     "<p><a class=\"newpage\" href=\"/lodz\">Łódź</a></p>", "SUSPECT", "SUSPECT p04 baseline"),
    ("fl-ctrl-translit-long", "freelink", "C1_mixed_long",
     "[[[äöüß ñ ç ž ąćęłńóśźż café123]]]", [],
     "<p><a class=\"newpage\" href=\"/aeoeuess-n-c-z-acelnoszz-cafe123\">äöüß ñ ç ž ąćęłńóśźż café123</a></p>", "SUSPECT", "SUSPECT f03 baseline"),

    ("fl-sib-ascii-alnum-mix", "freelink", "C1_ascii_alnum_mix",
     "[[[AéB09]]]", [],
     "<p><a class=\"newpage\" href=\"/aeb09\">AéB09</a></p>", None, "Uppercase ASCII + digits dropped around non-ASCII"),
    ("fl-sib-cat-ascii-page-nonascii", "freelink", "C2_cat_prefix",
     "[[[cat:café]]]", [],
     "<p><a class=\"newpage\" href=\"/cat:cafe\">café</a></p>", None, "ASCII category 'cat:' wiped out when page has non-ASCII"),
    ("fl-sib-cat-nonascii-page-ascii", "freelink", "C2_cat_prefix_rev",
     "[[[café:page]]]", [],
     "<p><a class=\"newpage\" href=\"/cafe:page\">page</a></p>", None, "ASCII page 'page' wiped out when category has non-ASCII"),
    ("fl-sib-default-prefix-cafe", "freelink", "C3_default_prefix",
     "[[[_default:café]]]", [],
     "<p><a class=\"newpage\" href=\"/cafe\">café</a></p>", None, "'_default:' becomes '_:' because translit runs before _default: strip"),
    ("fl-sib-default-prefix-pure-nonascii", "freelink", "C3_default_prefix_pure",
     "[[[_default:é]]]", [],
     "<p><a class=\"newpage\" href=\"/e\">é</a></p>", None, "'_default:' corrupted to '_:e'"),
    ("fl-sib-anchor-suffix", "freelink", "C4_anchor_suffix",
     "[[[Aé#Anch01]]]", [],
     "<p><a class=\"newpage\" href=\"/ae#Anch01\">Aé</a></p>", None, "ASCII 'A' lost in slug with anchor"),
    ("fl-sib-hash-route-extra", "freelink", "C4_hash_route",
     "[[[café/#/route]]]", [],
     "<p><a class=\"newpage\" href=\"/cafe#/route\">café</a></p>", None, "ASCII 'caf' lost in hash-route freelink"),
    ("fl-sib-described-label", "freelink", "C5_described_label",
     "[[[café|Label Text]]]", [],
     "<p><a class=\"newpage\" href=\"/cafe\">Label Text</a></p>", None, "Described form keeps label, drops ASCII in slug"),
    ("fl-sib-described-apos", "freelink", "STALE_HTMLCHARS_apos",
     "[[[café|O'Brien]]]", [],
     "<p><a class=\"newpage\" href=\"/cafe\">O'Brien</a></p>", "HTMLCHARS", "HTMLCHARS fixes O&#039;Brien; /e vs /cafe is genuinely new slug defect"),
    ("fl-sib-url-target-nonascii", "freelink", "C6_url_target",
     "[[[http://example.com/café]]]", [],
     "<p><a href=\"http://example.com/café\">http://example.com/café</a></p>", None, "Agree: external URL target bypasses translit"),
    ("fl-sib-unmapped-cjk-only", "freelink", "C7_unmapped_nonascii_only",
     "[[[日本語]]]", [],
     "<p><a class=\"newpage\" href=\"/\">日本語</a></p>", None, "Agree: pure unmapped non-ASCII"),
    ("fl-sib-unmapped-cjk-ascii", "freelink", "C7_unmapped_with_ascii",
     "[[[a日本語b1]]]", [],
     "<p><a class=\"newpage\" href=\"/a-b1\">a日本語b1</a></p>", None, "Unmapped CJK destroys surrounding ASCII 'a' and 'b1'"),
    ("fl-sib-euro-ascii", "freelink", "C7_unmapped_symbol_ascii",
     "[[[item€99]]]", [],
     "<p><a class=\"newpage\" href=\"/item-99\">item€99</a></p>", None, "Unmapped € destroys ASCII 'item' and '99'"),
    ("fl-sib-cyrillic-only", "freelink", "C8_cyrillic",
     "[[[Москва]]]", [],
     "<p><a class=\"newpage\" href=\"/moskva\">Москва</a></p>", None, "Agree: pure Cyrillic"),
    ("fl-sib-cyrillic-ascii-digits", "freelink", "C8_cyrillic_ascii",
     "[[[testМосква123]]]", [],
     "<p><a class=\"newpage\" href=\"/testmoskva123\">testМосква123</a></p>", None, "ASCII 'test'/'123' destroyed next to Cyrillic"),
    ("fl-sib-german-upper", "freelink", "C8_german_upper",
     "[[[ÄÖÜß]]]", [],
     "<p><a class=\"newpage\" href=\"/aeoeuess\">ÄÖÜß</a></p>", None, "Agree: German uppercase umlauts"),
    ("fl-sib-german-mixed", "freelink", "C8_german_mixed",
     "[[[Über10]]]", [],
     "<p><a class=\"newpage\" href=\"/ueber10\">Über10</a></p>", None, "'ber10' destroyed after 'Ü'"),
    ("fl-sib-greek-ascii", "freelink", "C8_greek_ascii",
     "[[[test_α_1]]]", [],
     "<p><a class=\"newpage\" href=\"/test-a-1\">test_α_1</a></p>", None, "'test' and '1' destroyed around underscores while '_' stays!"),
    ("fl-sib-leading-underscore", "freelink", "C9_leading_underscore",
     "[[[_café]]]", [],
     "<p><a class=\"newpage\" href=\"/_cafe\">_café</a></p>", None, "Leading '_' preserved, 'caf' destroyed -> /_e"),
    ("fl-sib-underscore-hyphen-mix", "freelink", "C9_underscore_hyphen_mix",
     "[[[a_b-c_é]]]", [],
     "<p><a class=\"newpage\" href=\"/a-b-c-e\">a_b-c_é</a></p>", None, "Interior ASCII letters destroyed while middle '_' survives translit -> /_e"),
    ("fl-sib-double-space", "freelink", "C9_double_space",
     "[[[café  latte]]]", [],
     "<p><a class=\"newpage\" href=\"/cafe-latte\">café  latte</a></p>", None, "'caf' and 'latte' destroyed -> /e"),
]


def run_batch(cases):
    lines = []
    for cid, fam, cls, src, tags, spec, base, note in cases:
        obj = {"id": cid, "source": src}
        if tags:
            obj["tags"] = tags
        lines.append(json.dumps(obj))
    payload = ("\n".join(lines) + "\n").encode("utf-8")

    p_ren = subprocess.run(
        ["php", "ref-php/harness/batch.php", "render"],
        cwd=ROOT, input=payload, stdout=subprocess.PIPE, stderr=subprocess.PIPE
    )
    ren_map = {}
    for raw_line in p_ren.stdout.decode("utf-8", errors="replace").splitlines():
        if not raw_line.strip():
            continue
        r = json.loads(raw_line)
        ren_map[r["id"]] = r
    return ren_map, p_ren.stderr.decode("utf-8", errors="replace")


def run_single_transform(src):
    p = subprocess.run(
        ["php", "ref-php/harness/transform.php", "render"],
        cwd=ROOT, input=src.encode("utf-8"), stdout=subprocess.PIPE, stderr=subprocess.PIPE
    )
    return p.stdout


def main():
    cases_path = os.path.join(OUT_DIR, "cases-ws1.jsonl")
    with open(cases_path, "w") as f:
        for cid, fam, cls, src, tags, spec, base, note in CASES:
            f.write(json.dumps({
                "id": cid, "family": fam, "class": cls,
                "source": src, "tags": tags,
                "expected_spec": spec, "baseline": base, "note": note
            }) + "\n")

    ren_map, batch_stderr = run_batch(CASES)

    results = []
    counts = {}
    for cid, fam, cls, src, tags, spec, base, note in CASES:
        r_entry = ren_map.get(cid, {})
        used_fallback = False
        raw_bytes_hex = None
        force_single = cid in ("dt-sib-raw-inside-format",)
        if ("output" in r_entry) and (r_entry["output"] is not None) and (not force_single):
            actual = r_entry["output"]
        else:
            used_fallback = True
            bs = run_single_transform(src)
            if bs.endswith(b"\n"):
                bs = bs[:-1]
            raw_bytes_hex = bs.hex()
            actual = bs.rstrip(b"\n").decode("utf-8", errors="surrogateescape")

        actual_norm = actual.rstrip("\n") if not used_fallback else actual
        spec_norm = spec.rstrip("\n")
        matches_spec = (not used_fallback) and (actual_norm == spec_norm)
        if force_single:
            matches_spec = (actual_norm == spec_norm)

        if base == "REFCORR2":
            status = "STALE-BASE-FILTERED"
        elif base == "HTMLCHARS":
            if cid == "fl-sib-described-apos":
                actual_no_htmlchars = actual_norm.replace("&#039;", "'")
                status = "NEW-CANDIDATE" if actual_no_htmlchars != spec_norm else "STALE-BASE-FILTERED"
            else:
                status = "STALE-BASE-FILTERED"
        elif matches_spec:
            status = "AGREE"
        elif base == "SUSPECT":
            status = "ALREADY-RECORDED-SUSPECT"
        else:
            status = "NEW-CANDIDATE"

        counts.setdefault(fam, {"total": 0, "AGREE": 0, "ALREADY-RECORDED-SUSPECT": 0, "STALE-BASE-FILTERED": 0, "NEW-CANDIDATE": 0})
        counts[fam]["total"] += 1
        counts[fam][status] += 1

        actual_disp_repr = repr(bytes.fromhex(raw_bytes_hex).rstrip(b"\n")) if used_fallback else repr(actual_norm)
        results.append({
            "id": cid,
            "family": fam,
            "class": cls,
            "source": src,
            "tags": tags,
            "expected_spec": spec_norm,
            "actual_ref_php": actual_norm,
            "actual_repr": actual_disp_repr,
            "used_transform_fallback": used_fallback,
            "raw_bytes_hex": raw_bytes_hex,
            "status": status,
            "baseline": base,
            "note": note,
        })

    ref_out_path = os.path.join(OUT_DIR, "ref-outputs-ws1.jsonl")
    with open(ref_out_path, "w") as f:
        for r in results:
            f.write(json.dumps(r, ensure_ascii=True) + "\n")

    comp_path = os.path.join(OUT_DIR, "comparison-ws1.json")
    with open(comp_path, "w") as f:
        json.dump({"counts": counts, "batch_stderr": batch_stderr, "results": results}, f, indent=2, ensure_ascii=True)

    md_lines = [
        "# Workstream 1 Differential Results (`conformance-agy-spec2/comparison-ws1.md`)",
        "",
        "| Family | Total | Agree | Already Recorded (SUSPECT) | Stale-Base Filtered (`updates/`) | New Candidates |",
        "|---|---:|---:|---:|---:|---:|",
    ]
    tot = {"total": 0, "AGREE": 0, "ALREADY-RECORDED-SUSPECT": 0, "STALE-BASE-FILTERED": 0, "NEW-CANDIDATE": 0}
    for fam, c in counts.items():
        for k in tot:
            tot[k] += c[k]
        md_lines.append(f"| `{fam}` | {c['total']} | {c['AGREE']} | {c['ALREADY-RECORDED-SUSPECT']} | {c['STALE-BASE-FILTERED']} | {c['NEW-CANDIDATE']} |")
    md_lines.append(f"| **Total** | **{tot['total']}** | **{tot['AGREE']}** | **{tot['ALREADY-RECORDED-SUSPECT']}** | **{tot['STALE-BASE-FILTERED']}** | **{tot['NEW-CANDIDATE']}** |")
    md_lines.append("")
    md_lines.append("## New Candidates Detail")
    md_lines.append("")
    for r in results:
        if r["status"] == "NEW-CANDIDATE":
            md_lines.append(f"- `{r['id']}` (`{r['family']}` / `{r['class']}`, tags={r['tags']}): SRC={repr(r['source'])} | SPEC={repr(r['expected_spec'])} | REF={r['actual_repr']} — {r['note']}")
    with open(os.path.join(OUT_DIR, "comparison-ws1.md"), "w") as f:
        f.write("\n".join(md_lines) + "\n")

    print("=== WORKSTREAM 1 FINAL CLEAN COUNTS ===")
    for fam, c in counts.items():
        print(f"  {fam:12s}: total={c['total']:2d} agree={c['AGREE']:2d} suspect={c['ALREADY-RECORDED-SUSPECT']:2d} stale={c['STALE-BASE-FILTERED']:2d} NEW={c['NEW-CANDIDATE']:2d}")
    print(f"  TOTAL       : total={tot['total']:2d} agree={tot['AGREE']:2d} suspect={tot['ALREADY-RECORDED-SUSPECT']:2d} stale={tot['STALE-BASE-FILTERED']:2d} NEW={tot['NEW-CANDIDATE']:2d}")


if __name__ == "__main__":
    main()
