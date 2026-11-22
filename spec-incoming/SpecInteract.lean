/-
  LeanFtml.SpecInteract — live-pinned behavioral propositions for the
  interactive family (Equationreference, Anchor, Collapsible, Tabview,
  Button, Iframe, Date, File, Div), harvested by the SUSPECT-INTERACT
  skeptic lane on 2026-11-22.

  Each statement below is a CONFIRMED behavior: a fresh saved-page probe on
  `sandbox-for-codex` (double anonymous GET, stable, source-matching) matched
  this tree's reference render byte-for-byte at the construct level, and the
  mirror function named in the statement is the Lean image of that render.
  The probe page is cited directly above the statement it pins.

  The two DIVERGENCES this lane found are deliberately NOT stated here:
  changing the mirror to satisfy them is coordinator adoption work, recorded
  in `conformance-suspect-interact/CANDIDATES.md` and `CORRECTION.md`
  (C-SUSPECT-INTERACT-1 Collapsible label and -2 Button class/style both keep
  a single quote raw on live, while the mirrors still use the ENT_QUOTES
  escape). Once those mirrors are updated, companion propositions belong here.

  Frame-level surface (the fossil button template's space before `>`, the
  sandbox wdfiles host on a `/local--files/` href, pretty-print newlines,
  random tab ids) is excluded exactly as in `conformance-suspect-interact/
  compare.py`; it is owned by later pipeline rules and serving, not by the
  family's mirrors.
-/

import LeanFtml.InteractiveRender
import LeanFtml.ContainRules

namespace LeanFtml

set_option maxRecDepth 8192

/-! ## Date boundary shapes — fresh pins from this lane -/

/- `muse-probe-suspect-interact-d1-date-negzero` (`[[date -0]]`): a negative
    zero magnitude is canonicalized away; the span class is `time_0`, not
    `time_-0`, and the visible text is the epoch. -/
theorem suspect_date_negzero :
    canonTimestamp (litBytes "-0") = litBytes "0" := rfl

/- `muse-probe-suspect-interact-d2-date-overneg`
    (`[[date -99999999999999999999]]`): a magnitude beyond the signed 64-bit
    bound clamps to the negative bound with its 19 digits intact. -/
theorem suspect_date_overnegative :
    canonTimestamp (litBytes "-99999999999999999999") =
      litBytes "-9223372036854775808" := rfl

/- The same d1 probe at the render boundary: the canonical timestamp is what
    reaches the class suffix, and the formatted text is the epoch. -/
theorem suspect_date_negzero_render :
    renderDate [("timestamp".toList, OptVal.str "-0".toList)] =
      litBytes "<span class=\"odate time_0\">" ++
        litBytes "01 Jan 1970 00:00</span>" := by
  have hraw : optStrBytes
      [("timestamp".toList, OptVal.str "-0".toList)] "timestamp".toList =
      litBytes "-0" := rfl
  have hts : canonTimestamp (litBytes "-0") = litBytes "0" := rfl
  have hcast : phpIntCast (litBytes "0") = 0 := rfl
  have hfmt : formatTimestamp 0 = litBytes "01 Jan 1970 00:00" := rfl
  have hform : optStrBytes
      [("timestamp".toList, OptVal.str "-0".toList)] "format".toList = [] := rfl
  have hne : (litBytes "0").isEmpty = false := rfl
  unfold renderDate
  simp only [hraw, hts, hcast, hfmt, hform, hne, Bool.false_eq_true,
    ↓reduceIte, List.append_assoc]
  rfl

/-! ## Raw single quotes in attribute and label values

    Live pins a1 (Anchor class), i1/i2 (Iframe class and src), t1 (Tabview
    label), b3 (Button text), f1 (File anchor), v1/v2 (Div class and data-x).
    All six renderers share the ENT_COMPAT byte escape, which leaves `'`
    literal; Div goes further and interpolates values raw. -/

/- The byte-level fact the ENT_COMPAT family folds to: an apostrophe is not
    an escapable byte. -/
theorem suspect_compat_keeps_apostrophe :
    htmlSpecialCharsCompat (litBytes "it's") = litBytes "it's" := rfl

theorem suspect_compat_keeps_apostrophe_short :
    htmlSpecialCharsCompat (litBytes "a'b") = litBytes "a'b" := rfl

/- `muse-probe-suspect-interact-v1-div-class-apostrophe`:
    `[[div class="a'b"]]` renders with the quote raw (Div interpolates its
    attribute values without escaping). -/
theorem suspect_div_class_apostrophe :
    renderDiv [("args".toList, OptVal.map
        [("class".toList, OptVal.str "a'b".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
      litBytes "<div class=\"a'b\">" := rfl

/- `muse-probe-suspect-interact-v2-div-data-apostrophe`: the same for a
    lowercased `data-*` attribute. -/
theorem suspect_div_data_apostrophe :
    renderDiv [("args".toList, OptVal.map
        [("data-x".toList, OptVal.str "a'b".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
      litBytes "<div data-x=\"a'b\">" := rfl

/- `muse-probe-suspect-interact-a1-anchor-class-apostrophe`: the Anchor
    start branch's `ENT_COMPAT` escape leaves the quote raw. -/
theorem suspect_anchor_class_apostrophe :
    renderAnchor [("type".toList, OptVal.str "start".toList),
      ("attrs".toList, OptVal.map
        [("class".toList, OptVal.str "a'b".toList),
         ("href".toList, OptVal.str "/x".toList)])] =
      litBytes "<a class=\"a'b\" href=\"/x\">" := rfl

/- `muse-probe-suspect-interact-i1-iframe-class-apostrophe`: only `src` is
    percent-encoded; a non-src attribute is escaped `ENT_COMPAT`, so the
    quote stays literal. -/
theorem suspect_iframe_class_apostrophe :
    iframePart ("class".toList, OptVal.str "a'b".toList) =
      litBytes "class=\"a'b\"" := rfl

/- `muse-probe-suspect-interact-i2-iframe-src-apostrophe`: the src value also
    keeps the raw quote; there is no entity and no percent-encoding of ASCII. -/
theorem suspect_iframe_src_apostrophe :
    iframePart ("src".toList, OptVal.str "http://example.com/a'b".toList) =
      litBytes "src=\"http://example.com/a'b\"" := rfl

/- `muse-probe-suspect-interact-t1-tabview-label-apostrophe`: a tab label's
    entity escape is `ENT_COMPAT`, so `<em>it's</em>` is emitted. -/
theorem suspect_tabview_label_apostrophe :
    tabviewTabItem (OptVal.map
      [("title".toList, OptVal.str "it's".toList),
       ("tabId".toList, OptVal.int 0)]) =
      litBytes "<li class=\"selected\">" ++
        litBytes "<a href=\"javascript:;\"><em>it's</em></a></li>" := rfl

/- `muse-probe-suspect-interact-f1-file-anchor-apostrophe`: the File anchor
    value likewise keeps the raw quote (the href's absolute wdfiles host is
    serving-layer surface, excluded from this proposition). -/
theorem suspect_file_anchor_apostrophe :
    renderFile [("file".toList, OptVal.str "dir/a.txt".toList),
      ("anchor".toList, OptVal.str "it's".toList)] =
      litBytes "<a href=\"/local--files/dir/a.txt\">it's</a>" := rfl

end LeanFtml
