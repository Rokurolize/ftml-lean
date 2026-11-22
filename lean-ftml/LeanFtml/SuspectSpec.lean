/-
  LeanFtml.SuspectSpec — Live-validated specifications and differential
  proofs for Mission SUSPECT (`PROMPT-ANTIGRAVITY-SUSPECT.md` +
  `ADDENDUM-ANTIGRAVITY-SUSPECT.md`).

  All live expectations are pinned by permanent probe pages saved on
  `sandbox-for-codex` under the prefix `muse-probe-agy-suspect-*`
  (Batches 1–3: 56 probes total, all verified valid=true, stable=true,
  saved_source_matches=true).

  Dispositions per `ADDENDUM-ANTIGRAVITY-SUSPECT.md`:
  * `p01-fffd` (`muse-probe-agy-suspect-p01-fffd`) is already settled in
    `updates/REPORT-UFFFD.md` (`C-UFFFD-1` / `R-UFFFD-1`).
  * `p13-rawold-trailing-apos` (`muse-probe-agy-suspect-p13-rawold-trailing-apos`)
    and `p29-apos-freelink-url` (`muse-probe-agy-suspect-p29-apos-freelink-url`)
    are already settled in `updates/REPORT-HTMLCHARS.md`.
  Accordingly, duplicate Lean specs for those three already-settled
  items are omitted here.
-/

import LeanFtml.TokenState
import LeanFtml.Pipeline
import LeanFtml.RenderCore
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.LinkRules
import LeanFtml.BlockRules
import LeanFtml.ContainRules
import LeanFtml.ListRules
import LeanFtml.Inline1Rules
import LeanFtml.Inline2Rules
import LeanFtml.Inline3Rules
import LeanFtml.InlineSimpleRules
import LeanFtml.ListTableRules
import LeanFtml.InteractiveRules

namespace LeanFtml.SuspectSpec

open LeanFtml

/-! ## Local helpers -/

private def containsSub (pat : List Nat) : List Nat → Bool
  | [] => pat.isEmpty
  | bs@(_ :: rest) => pat.isPrefixOf bs || containsSub pat rest

private def getOptStr (opts : OptMap) (k : String) : Option (List Nat) :=
  match omGet opts k.toList with
  | some (OptVal.str cs) => some (cs.flatMap utf8Bytes)
  | some (OptVal.bytes bs) => some bs
  | _ => none

private def getOptMap (opts : OptMap) (k : String) : Option OptMap :=
  match omGet opts k.toList with
  | some (OptVal.map m) => some m
  | _ => none

private def countTokRule (rname : String) (toks : List TokenEntry) : Nat :=
  (toks.filter (fun t => t.rule == rname)).length

private def countTokType (rname tval : String) (toks : List TokenEntry) : Nat :=
  (toks.filter (fun t =>
    t.rule == rname && getOptStr t.opts "type" == some (litBytes tval))).length

private theorem not_containsSub_of_false {pat bs : List Nat}
    (h : containsSub pat bs = false) : containsSub pat bs ≠ true := by
  rw [h]; decide

/-! ===================================================================
    PART A — CONFIRMED LIVE-TRUE CONSTRUCTS
    Each theorem verifies that the existing Lean mirror satisfies the
    live-confirmed property established by its cited probe page(s).
    =================================================================== -/

/-- Live probe `muse-probe-agy-suspect-p05-tabview-attr`:
    `[[tabview class="foo"]]\n[[tab A]]\nbody\n[[/tab]]\n[[/tabview]]`
    emits duplicated ` class="foo" class="foo"` as literal text before the
    tabview widget and drops `class` from the rendered `.yui-navset` div. -/
theorem confirmed_p05_tabview_attr :
    let src := "[[tabview class=\"foo\"]]\n[[tab A]]\nbody\n[[/tab]]\n[[/tabview]]".toList
    let st := tabviewRule (ParseState.ofSource src)
    containsSub (litBytes " class=\"foo\" class=\"foo\"") (byteForm st.work) = true := by
  rfl

/-- Live probe `muse-probe-agy-suspect-p07-deflist-blank-merge`:
    consecutive colon-led definition lines separated by a blank line merge
    into a single `<dl>` containing two `<dt>`/`<dd>` pairs. (`Prefilter`
    supplies the surrounding `\n` boundaries.) -/
theorem confirmed_p07_deflist_blank_merge :
    let src := "\n: t1 : d1\n\n: t2 : d2\n".toList
    let st := deflistRule (ParseState.ofSource src)
    countTokType "Deflist" "list_start" st.tokens = 1 ∧
      countTokType "Deflist" "term_start" st.tokens = 2 ∧
      countTokType "Deflist" "narr_start" st.tokens = 2 := by
  decide

/-- Live probe `muse-probe-agy-suspect-p11-module-upper-nested`:
    an uppercase `[[MODULE outer]]` containing a nested `[[module inner]]`
    halts the module defense rewrite and leaves all three lines literal with
    zero Module/Module654 tokens. -/
theorem confirmed_p11_module_upper_nested :
    let src := "[[MODULE outer]]\n[[module inner]]\n[[/module]]".toList
    let st := module654Rule (moduleRule (modulepreRule (ParseState.ofSource src)))
    st.tokens.isEmpty = true ∧ byteForm st.work = litBytes "[[MODULE outer]]\n[[module inner]]\n[[/module]]" := by
  decide

/-- Live probe `muse-probe-agy-suspect-f07-modulepre-upper-tail`:
    `[[MODULE654 css]]tail` is left completely literal by `Modulepre`,
    confirming the `preg_replace('/^\[\[module654/', ...)` case-sensitive
    rewrite fails to trigger on `[[MODULE654`. -/
theorem confirmed_f07_modulepre_upper_tail :
    let src := "[[MODULE654 css]]tail".toList
    let st := module654Rule (moduleRule (modulepreRule (ParseState.ofSource src)))
    st.tokens.isEmpty = true ∧ byteForm st.work = litBytes "[[MODULE654 css]]tail" := by
  decide

/-- Live probe `muse-probe-agy-suspect-b3-mod654-upper-body`:
    `[[MODULE654 unknownmod]]\nbody\n[[/module]]` with a non-empty body
    consumes `[[/module]]` and emits one `Module654` token. -/
theorem confirmed_b3_mod654_upper_body :
    let src := "[[MODULE654 unknownmod]]\nbody\n[[/module]]".toList
    let st := module654Rule (moduleRule (modulepreRule (ParseState.ofSource src)))
    countTokRule "Module654" st.tokens = 1 ∧
      !containsSub (litBytes "[[/module]]") (byteForm st.work) = true := by
  decide

/-- Live probe `muse-probe-agy-suspect-p15-typo-dollar-unit`:
    `10 $` produces no `&#160;` typography token (the unescaped `$` regex
    bug acts as an end-of-line anchor in `/x` mode), while `10 €` produces
    an nbsp token in the working source. -/
theorem confirmed_p15_typo_dollar_unit :
    let stDollar := typographyRule (ParseState.ofSource "10 $".toList)
    let stEuro := typographyRule (ParseState.ofSource ['1', '0', ' ', Char.ofNat 0x20AC])
    byteForm stDollar.work = litBytes "10 $" ∧
      containsSub [0xFF] (byteForm stEuro.work) = true := by
  decide

/-- Live probe `muse-probe-agy-suspect-p21-date-ts-override`:
    `[[date 86400 timestamp="0"]]` allows the `timestamp` attribute to
    overwrite the positional timestamp `86400` in token options. -/
theorem confirmed_p21_date_ts_override :
    let src := "[[date 86400 timestamp=\"0\"]]".toList
    let st := dateRule (ParseState.ofSource src)
    (st.tokens.length == 1 &&
      (st.tokens.head?.bind (fun tok =>
        if tok.rule == "Date" then getOptStr tok.opts "timestamp" else none)) ==
        some (litBytes "0")) = true := rfl

/-- Live probes `muse-probe-agy-suspect-p28-iftags-trail-comma` and
    `muse-probe-agy-suspect-f08-iftags-lead-comma`:
    `preg_split(';[, ]+;', ...)` leaves an empty tag `""` from a trailing or
    leading comma, which enters `$anyTags` and suppresses the body on an
    untagged page despite `-foo` succeeding. -/
theorem confirmed_p28_f08_iftags_commas :
    let stTrail := iftagsRule (ParseState.ofSource "A [[iftags -foo,]]KEPT[[/iftags]] B".toList)
    let stLead := iftagsRule (ParseState.ofSource "A [[iftags ,-foo]]KEPT[[/iftags]] B".toList)
    byteForm stTrail.work = litBytes "A  B" ∧ byteForm stLead.work = litBytes "A  B" := by
  dsimp [iftagsRule]
  decide

/-- Live probe `muse-probe-agy-suspect-p31-div-sameline`:
    same-line `[[div]]hello[[/div]]` does not match `Div`'s newline-after-opener
    requirement and remains literal text with zero tokens. -/
theorem confirmed_p31_div_sameline :
    let st := divRule (ParseState.ofSource "[[div]]hello[[/div]]".toList)
    st.tokens.isEmpty = true ∧ byteForm st.work = litBytes "[[div]]hello[[/div]]" := by
  dsimp [divRule]
  decide

/-- Live probes `muse-probe-agy-suspect-p32-bq-lone-nospace` and
    `muse-probe-agy-suspect-x07-bq-raw-nospace`:
    a lone `>` line without a following space (`>nospace` or `>@@hello@@`
    after `Raw` tokenization) matches `Blockquote`'s outer regex `\n((\>).*\n)`
    and is silently deleted (emitting no blockquote tokens and leaving only `\n\n`). -/
theorem confirmed_p32_x07_bq_nospace_deletion :
    let stPlain := blockquoteRule (ParseState.ofSource "A\n\n>nospace\n\nB".toList)
    let stRaw := blockquoteRule (rawRule (ParseState.ofSource "A\n\n>@@hello@@\n\nB".toList))
    stPlain.tokens.isEmpty = true ∧
      byteForm stPlain.work = litBytes "A\n\n\n\nB" ∧
      countTokRule "Blockquote" stRaw.tokens = 0 ∧
      byteForm stRaw.work = litBytes "A\n\n\n\nB" := by
  decide

/-- Live probes `muse-probe-agy-suspect-p19-email-utf8` and
    `muse-probe-agy-suspect-f01-email-ee`:
    live performs bytewise `strrev` on the label (`C3 A9 C3 A9` -> `A9 [C3 A9] C3`,
    serving `<span class="wiki-email">moc.b|a#é</span>`). Notice `renderEmail`
    matches the bytewise reversal step before escaping/UTF-8 substitution. -/
theorem confirmed_p19_f01_email_bytewise_strrev :
    renderEmail [(['e','m','a','i','l'], OptVal.bytes [97,64,98,46,99,111,109]),
      (['t','e','x','t'], OptVal.bytes [0xC3, 0xA9, 0xC3, 0xA9])] =
    [60,115,112,97,110,32,99,108,97,115,115,61,34,119,105,107,105,45,101,109,97,105,108,34,62,
     109,111,99,46,98,124,97,35,0xA9,0xC3,0xA9,0xC3,60,47,115,112,97,110,62] := rfl

/-- Live probes `muse-probe-agy-suspect-x04-email-bracket-label`,
    `muse-probe-agy-suspect-x03-email-url-label`, and
    `muse-probe-agy-suspect-x05-email-raw-label`:
    unlike `Interwiki` (fixed by X44), live `Email` still admits `[` in a
    described label (truncating at `]`), and still over-claims earlier `\xFFn\xFF`
    placeholders (`Url` and `Raw`), leaking token numbers inside `wiki-email`. -/
theorem confirmed_x03_x04_x05_email_overclaim :
    let stBrk := emailRule (ParseState.ofSource "[a@b.com [x] label]".toList)
    let stUrl := emailRule (urlRule (ParseState.ofSource "[a@b.com http://example.com]".toList))
    let stRaw := emailRule (rawRule (ParseState.ofSource "[a@b.com @@raw@@]".toList))
    (stBrk.tokens.length == 1 &&
      (stBrk.tokens.head?.bind (fun t => getOptStr t.opts "text")) == some (litBytes "[x") &&
      (byteForm stBrk.work == phBytes 0 ++ litBytes " label]") &&
      countTokRule "Email" stUrl.tokens == 1 &&
      stUrl.tokens.any (fun tok => tok.rule == "Email" && getOptStr tok.opts "text" == some (phBytes 0)) &&
      countTokRule "Email" stRaw.tokens == 1 &&
      stRaw.tokens.any (fun tok => tok.rule == "Email" && getOptStr tok.opts "text" == some (phBytes 0))) = true := rfl

/-- Live probe `muse-probe-agy-suspect-x09-deflist-raw-empty`:
    when `: @@@@ : def` has an empty raw term, live omits `<dt>` (producing
    `<dl>\n<dd>def</dd>\n</dl>`), agreeing with `termRendersEmpty` stripping
    placeholder tokens when the raw token is empty. (`Raw` vs empty token
    existence itself is tested in `diverges_x01_raw_empty_emits_token`.) -/
theorem confirmed_x09_deflist_raw_empty_dt_omitted :
    termRendersEmpty (phBytes 0) = true ∧
    let st := deflistRule (rawRule (ParseState.ofSource "\n: @@@@ : def\n".toList))
    countTokType "Deflist" "list_start" st.tokens = 1 ∧
      countTokType "Deflist" "term_start" st.tokens = 0 := by
  decide

/-- Live probe `muse-probe-agy-suspect-p24-image-pct-typo` (parameterized
    because `Image` render is outside this pre-R4.8 worktree):
    `%%%foo%%` matches `preg_match("/^%%%[^%]+%%$/")` (3 leading `%` vs 2
    trailing `%`) and passes through verbatim as `src="%%%foo%%"`, while
    `%%foo%%` fails that regex and falls through to local-file handling,
    forcing a `medium.jpg` resize. -/
def LiveSpec_p24_image_pct_typo (renderImage : OptMap → List Nat) : Prop :=
  let o3 : OptMap := [("src".toList, OptVal.str "%%%foo%%".toList),
    ("align".toList, OptVal.null), ("attr".toList, OptVal.map [])]
  let o2 : OptMap := [("src".toList, OptVal.str "%%foo%%".toList),
    ("align".toList, OptVal.null), ("attr".toList, OptVal.map [])]
  containsSub (litBytes "src=\"%%%foo%%\"") (renderImage o3) = true ∧
    containsSub (litBytes "/medium.jpg") (renderImage o2) = true

/-- Live probe `muse-probe-agy-suspect-p25-image-jpeg-resize` (parameterized
    because `Image` render is outside this pre-R4.8 worktree):
    `/\.(png|jpg|gif)$/i` omits `jpeg`, so `.jpg` uses `/local--files/...`
    unresized while `.jpeg` forces `size = "medium"` resized output. -/
def LiveSpec_p25_image_jpeg_resize (renderImage : OptMap → List Nat) : Prop :=
  let oJpg : OptMap := [("src".toList, OptVal.str "page/a.jpg".toList),
    ("align".toList, OptVal.null), ("attr".toList, OptVal.map [])]
  let oJpeg : OptMap := [("src".toList, OptVal.str "page/a.jpeg".toList),
    ("align".toList, OptVal.null), ("attr".toList, OptVal.map [])]
  containsSub (litBytes "/local--files/page/a.jpg") (renderImage oJpg) = true ∧
    !containsSub (litBytes "/medium.jpg") (renderImage oJpg) = true ∧
    containsSub (litBytes "/local--resized-images/page/a.jpeg/medium.jpg") (renderImage oJpeg) = true

/-- Live probe `muse-probe-agy-suspect-p20-gallery-target-leak` (parameterized
    because `Gallery` render is outside this pre-R4.8 worktree):
    a `*url` on row 1 of `[[gallery]]` must NOT leak `target="_blank"` onto
    row 2. -/
def LiveSpec_p20_gallery_no_target_leak (renderGallery : OptMap → List Nat) : Prop :=
  let opts : OptMap :=
    [("size".toList, OptVal.str "thumbnail".toList),
     ("sources".toList, OptVal.str ": *https://example.com/1.png\n: https://example.com/2.png".toList)]
  let out := renderGallery opts
  containsSub (litBytes "https://example.com/1.png\" target=\"_blank\"") out = true ∧
    !containsSub (litBytes "https://example.com/2.png\" target=\"_blank\"") out = true


/-! ===================================================================
    PART B — DIVERGENCE LIVE SPECIFICATIONS & REFUTATION PROOFS
    Each `LiveSpec_*` states live Wikidot's pinned behavior, and each
    `diverges_*` theorem proves `¬ LiveSpec_* <mirrorFn>`.
    =================================================================== -/

/-- Live probe `muse-probe-agy-suspect-p02-uu-pair`:
    live does NOT strip `üü...üü` spans or inner HTML tags post-render. -/
def LiveSpec_postStripToc (fn : List Nat → List Nat) : Prop :=
  let uu : List Nat := [0xC3, 0xBC, 0xC3, 0xBC]
  let inp := litBytes "<p>a " ++ uu ++ litBytes "<strong>bold</strong>" ++ uu ++ litBytes " b</p>"
  fn inp = inp

theorem diverges_p02_postStripToc : ¬ LiveSpec_postStripToc postStripToc := by
  intro h
  dsimp [LiveSpec_postStripToc] at h
  have hfalse :
      postStripToc (litBytes "<p>a " ++ [0xC3, 0xBC, 0xC3, 0xBC] ++
        litBytes "<strong>bold</strong>" ++ [0xC3, 0xBC, 0xC3, 0xBC] ++ litBytes " b</p>") =
      litBytes "<p>a bold b</p>" := by
    dsimp [postStripToc]
    decide
  rw [hfalse] at h
  exact absurd h (by decide)

/-- Live probes `muse-probe-agy-suspect-p03-freelink-cafe`,
    `muse-probe-agy-suspect-p04-freelink-polish`, and
    `muse-probe-agy-suspect-f03-freelink-translit`:
    `freelink_transliterate` must preserve ASCII `[A-Za-z0-9]` verbatim
    and map Polish `Ł` to `l` (so `"café"` -> `"cafe"`, `"Łódź"` -> `"lodz"`,
    and `"café123"` -> `"cafe123"`). (Input bytes are UTF-8.) -/
def LiveSpec_freelink_transliterate (fn : List Nat → List Nat) : Prop :=
  toUnixName (fn [99, 97, 102, 0xC3, 0xA9]) = litBytes "cafe" ∧
    toUnixName (fn [0xC5, 0x81, 0xC3, 0xB3, 100, 0xC5, 0xBA]) = litBytes "lodz" ∧
    toUnixName (fn [99, 97, 102, 0xC3, 0xA9, 49, 50, 51]) = litBytes "cafe123"

set_option maxRecDepth 8192 in
theorem diverges_p03_p04_f03_freelink_transliterate :
    ¬ LiveSpec_freelink_transliterate transliterate := by
  intro ⟨h1, _, _⟩
  have hbad : toUnixName (transliterate [99, 97, 102, 0xC3, 0xA9]) = litBytes "e" := rfl
  rw [hbad] at h1
  exact absurd h1 (by decide)

/-- Live probe `muse-probe-agy-suspect-p06-deflist-raw-term`:
    `: @@term@@ : definition` has non-empty rendered content (`<span>term</span>`)
    so live emits `<dt>` (`term_start` / `term_end`) around the `Raw` token.
    Meanwhile `termRendersEmpty` blindly strips every `\xFFn\xFF` placeholder,
    dropping the term even when the token is a non-empty `Raw` span. -/
def LiveSpec_deflist_raw_term (fn : ParseState → ParseState) : Prop :=
  let st := fn (ParseState.ofSource "\n: @@term@@ : definition\n".toList)
  countTokType "Deflist" "term_start" st.tokens = 1 ∧
    countTokType "Deflist" "term_end" st.tokens = 1

theorem diverges_p06_deflist_raw_term :
    ¬ LiveSpec_deflist_raw_term (fun st => deflistRule (rawRule st)) := by
  intro ⟨hstart, _⟩
  have hbad :
      countTokType "Deflist" "term_start"
        (deflistRule (rawRule (ParseState.ofSource "\n: @@term@@ : definition\n".toList))).tokens = 0 := by
    decide
  rw [hbad] at hstart
  exact absurd hstart (by decide)

/-- Live probe `muse-probe-agy-suspect-p08-strong-quad-follow`:
    on `**** x **y**`, live matches `****` as the empty strong pair (before
    trying non-empty lazy pairing) and wraps only `y` in `<strong>y</strong>`,
    rendering `<p>x <strong>y</strong></p>`. -/
def LiveSpec_strong_quad_follow (fn : ParseState → ParseState) : Prop :=
  let st := fn (ParseState.ofSource "**** x **y**".toList)
  byteForm st.work = litBytes " x " ++ phBytes 0 ++ litBytes "y" ++ phBytes 1 ∧
    countTokRule "Strong" st.tokens = 2

theorem diverges_p08_strong_quad_follow : ¬ LiveSpec_strong_quad_follow strongRule := by
  intro ⟨hw, _⟩
  have hbad :
      byteForm (strongRule (ParseState.ofSource "**** x **y**".toList)).work =
        phBytes 0 ++ litBytes "** x **y" ++ phBytes 1 := by
    decide
  rw [hbad] at hw
  exact absurd hw (by decide)

/-- Live probes `muse-probe-agy-suspect-p09-color-invalid-unesc`,
    `muse-probe-agy-suspect-p10-color-invalid-hoist`, and
    `muse-probe-agy-suspect-x06-color-raw-spec`:
    live validates the `Colortext` spec `[A-Za-z0-9#(),\- \t]+` at **parse**
    time. Invalid specs (`<i>`, `a!b`, or an embedded `\xFF0\xFF` Raw token)
    must emit ZERO `Colortext` tokens so that:
    (1) `<i>` goes to `Xhtml::pre()` as literal text and escapes to `&lt;i&gt;` (`p09`);
    (2) `Tighten` does not hoist inner spaces past a false token (`p10`);
    (3) embedded `@@red@@` renders its `Raw` span instead of leaking raw `\xFF0\xFF` (`x06`). -/
def LiveSpec_colortext_parse_validates (colorFn : ParseState → ParseState) : Prop :=
  (colorFn (ParseState.ofSource "##<i>|hello##".toList)).tokens.isEmpty = true ∧
  (colorFn (ParseState.ofSource "x##a!b| hello ##y".toList)).tokens.isEmpty = true ∧
  countTokRule "Colortext"
    (colorFn (rawRule (ParseState.ofSource "##@@red@@|hello##".toList))).tokens = 0 ∧
  byteForm (tightenRule (colorFn (ParseState.ofSource "x##a!b| hello ##y".toList))).work =
    litBytes "x##a!b| hello ##y"

theorem diverges_p09_p10_x06_colortext_parse :
    ¬ LiveSpec_colortext_parse_validates colortextRule := by
  intro ⟨h09, _, _, _⟩
  have hbad :
      (colortextRule (ParseState.ofSource "##<i>|hello##".toList)).tokens.isEmpty = false := by
    decide
  rw [hbad] at h09
  exact absurd h09 (by decide)

/-- Direct cross-rule `Colortext` × `Tighten` (`p10`) and `Colortext` × `Raw` (`x06`)
    mismatch witnesses. -/
theorem diverges_p10_tighten_hoist_witness :
    byteForm (tightenRule (colortextRule (ParseState.ofSource "x##a!b| hello ##y".toList))).work =
      litBytes "x " ++ phBytes 0 ++ litBytes "hello" ++ phBytes 1 ++ litBytes " y" := by
  decide

theorem diverges_x06_color_raw_leaks_placeholder :
    let st := colortextRule (rawRule (ParseState.ofSource "##@@red@@|hello##".toList))
    byteForm st.work = phBytes 1 ++ litBytes "hello" ++ phBytes 2 ∧
      ∃ tok ∈ st.tokens, tok.rule = "Colortext" ∧
        getOptStr tok.opts "color" = some (phBytes 0) := by
  decide

/-- Live probe `muse-probe-agy-suspect-p12-module654-upper-empty`:
    on `[[MODULE654 unknownmod]]\n[[/module]]`, live emits the unknown-module
    error block AND preserves literal `[[/module]]` in `work` (matching
    `Module`'s non-empty body requirement `(.+?)`). -/
def LiveSpec_module654_upper_empty (fn : ParseState → ParseState) : Prop :=
  let st := fn (ParseState.ofSource "[[MODULE654 unknownmod]]\n[[/module]]".toList)
  st.tokens.length = 1 ∧
    containsSub (litBytes "[[/module]]") (byteForm st.work) = true

theorem diverges_p12_module654_upper_empty :
    ¬ LiveSpec_module654_upper_empty (fun st => module654Rule (moduleRule (modulepreRule st))) := by
  intro ⟨_, hclose⟩
  have hbad :
      containsSub (litBytes "[[/module]]")
        (byteForm (module654Rule (moduleRule (modulepreRule
          (ParseState.ofSource "[[MODULE654 unknownmod]]\n[[/module]]".toList)))).work) = false := by
    decide
  rw [hbad] at hclose
  exact absurd hclose (by decide)

/-- Live probe `muse-probe-agy-suspect-p14-span-double-u-id`:
    `[[span id="u-foo"]]hi[[/span]]` must not double-prefix `u-` when the
    authored `id` already begins with `u-`. -/
def LiveSpec_span_id_no_double_u (fn : ParseState → ParseState) : Prop :=
  let st := fn (ParseState.ofSource "[[span id=\"u-foo\"]]hi[[/span]]".toList)
  ∃ tok ∈ st.tokens, tok.rule = "Span" ∧
    (getOptMap tok.opts "args").bind (fun m => getOptStr m "id") = some (litBytes "u-foo")

theorem diverges_p14_span_double_u_id : ¬ LiveSpec_span_id_no_double_u spanRule := by
  intro ⟨tok, hmem, hrule, hid⟩
  have hcheck :
      (spanRule (ParseState.ofSource "[[span id=\"u-foo\"]]hi[[/span]]".toList)).tokens =
        [{ rule := "Span",
           opts := [("args".toList, OptVal.map [("id".toList, OptVal.str "u-u-foo".toList)]),
                    ("type".toList, OptVal.str "start".toList)] },
         { rule := "Span",
           opts := [("type".toList, OptVal.str "end".toList)] }] := by
    dsimp [spanRule]
    rfl
  rw [hcheck] at hmem
  rcases List.mem_cons.mp hmem with rfl | hmem2
  · simp [getOptMap, getOptStr, omGet, litBytes, utf8Bytes] at hid
  · rcases List.mem_cons.mp hmem2 with rfl | hmem3
    · simp [getOptMap, omGet] at hid
    · cases hmem3

/-- Live probes `muse-probe-agy-suspect-p16-interwiki-unknown-html` and
    `muse-probe-agy-suspect-f10-interwiki-unknown-apos`:
    when the interwiki site is unknown, live escapes the returned `$text`
    with `ENT_COMPAT, 'UTF-8'` (`&` -> `&amp;`, `<`/`>` -> `&lt;`/`&gt;`,
    apostrophe kept raw). -/
def LiveSpec_interwiki_unknown_escapes (fn : OptMap → List Nat) : Prop :=
  fn [("site".toList, OptVal.str "nosuchwiki".toList),
      ("page".toList, OptVal.str "Mallard".toList),
      ("text".toList, OptVal.str "<i>hi</i>".toList)] =
    litBytes "&lt;i&gt;hi&lt;/i&gt;" ∧
  fn [("site".toList, OptVal.str "nosuchwiki".toList),
      ("page".toList, OptVal.str "Mallard".toList),
      ("text".toList, OptVal.str "O'Brien & <b>x</b>".toList)] =
    litBytes "O'Brien &amp; &lt;b&gt;x&lt;/b&gt;"

theorem conforms_p16_f10_interwiki_unknown :
    LiveSpec_interwiki_unknown_escapes renderInterwiki := by
  constructor <;> decide

/-- Live probes `muse-probe-agy-suspect-p17-url-star-hash` and
    `muse-probe-agy-suspect-x10-url-star-mailto`:
    live does NOT suppress an explicit starred `target="_blank"` on either
    `#foo` or `mailto:...` links (while plain `[#foo plain]` still has no target). -/
def LiveSpec_url_star_keeps_target (fn : OptMap → List Nat) : Prop :=
  fn [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#foo".toList),
      ("text".toList, OptVal.str "named".toList),
      ("target".toList, OptVal.str "_blank".toList)] =
    litBytes "<a href=\"#foo\" target=\"_blank\">named</a>" ∧
  fn [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "mailto:a@b.com".toList),
      ("text".toList, OptVal.str "mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] =
    litBytes "<a href=\"mailto:a@b.com\" target=\"_blank\">mail</a>"

theorem diverges_p17_x10_url_star_target : ¬ LiveSpec_url_star_keeps_target renderUrl := by
  intro ⟨h1, _⟩
  have hbad :
      renderUrl [("type".toList, OptVal.str "descr".toList),
        ("href".toList, OptVal.str "#foo".toList),
        ("text".toList, OptVal.str "named".toList),
        ("target".toList, OptVal.str "_blank".toList)] =
      litBytes "<a href=\"#foo\">named</a>" := by
    unfold renderUrl
    dsimp
    rw [htmlSpecialCharsCompat_ascii _ (by decide),
        htmlSpecialCharsCompat_ascii _ (by decide)]
    decide
  rw [hbad] at h1
  exact absurd h1 (by decide)

/-- Live probes `muse-probe-agy-suspect-p18-email-html`,
    `muse-probe-agy-suspect-p19-email-utf8`,
    `muse-probe-agy-suspect-f01-email-ee`, and
    `muse-probe-agy-suspect-f02-email-apos-amp`:
    after bytewise `strrev` and `@` -> `|`, live escapes `&`, `<`, `>`
    (`ENT_NOQUOTES`), leaves `"` and `'` raw, and substitutes invalid UTF-8
    bytes produced by reversing multi-byte sequences (or leaked `\xFF`)
    with U+FFFD (`EF BF BD`). -/
def LiveSpec_email_render_escapes_and_substitutes (fn : OptMap → List Nat) : Prop :=
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.str ">i<".toList)] =
    litBytes "<span class=\"wiki-email\">moc.b|a#&lt;i&gt;</span>" ∧
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.str "a'b&c\"d".toList)] =
    litBytes "<span class=\"wiki-email\">moc.b|a#d\"c&amp;b'a</span>" ∧
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.bytes [0xC3, 0xA9, 0xC3, 0xA9])] =
    litBytes "<span class=\"wiki-email\">moc.b|a#" ++
      [0xEF, 0xBF, 0xBD, 0xC3, 0xA9, 0xEF, 0xBF, 0xBD] ++ litBytes "</span>"

theorem diverges_p18_p19_f01_f02_email_render :
    ¬ LiveSpec_email_render_escapes_and_substitutes renderEmail := by
  intro ⟨h1, _, _⟩
  have hbad :
      renderEmail [("email".toList, OptVal.str "a@b.com".toList),
        ("text".toList, OptVal.str ">i<".toList)] =
      litBytes "<span class=\"wiki-email\">moc.b|a#<i></span>" := rfl
  rw [hbad] at h1
  exact absurd h1 (by decide)

/-- Live probe `muse-probe-agy-suspect-p27-raw-triple-open-only`:
    unclosed `A @@@hello B` remains literal on live; `rawRule` wrongly strips
    `@@@` via `str_repeat('@', max(0, run - 4))`. -/
def LiveSpec_raw_triple_open_literal (fn : ParseState → ParseState) : Prop :=
  let st := fn (ParseState.ofSource "A @@@hello B".toList)
  st.tokens.isEmpty = true ∧ byteForm st.work = litBytes "A @@@hello B"

theorem diverges_p27_raw_triple_open_literal : ¬ LiveSpec_raw_triple_open_literal rawRule := by
  intro ⟨_, hw⟩
  have hbad : byteForm (rawRule (ParseState.ofSource "A @@@hello B".toList)).work =
      litBytes "A hello B" := by
    decide
  rw [hbad] at hw
  exact absurd hw (by decide)

/-- Live probes `muse-probe-agy-suspect-x01-raw-empty-interwiki`,
    `muse-probe-agy-suspect-x02-raw-in-date`, and
    `muse-probe-agy-suspect-p22-date-at-forge`:
    live's `Raw` matches `/(?<!@)@@(.*?)@@/`, so `@@@@` emits an empty `Raw`
    token `\xFFn\xFF` (triggering X44 `Interwiki` rejection in `x01`, and
    appearing as `%FFn%FF` in `x02` and `p22`). -/
def LiveSpec_raw_empty_emits_token (rawFn : ParseState → ParseState) : Prop :=
  let stRaw := rawFn (ParseState.ofSource "a@@@@b".toList)
  let stIw := interwikiRule (rawFn (ParseState.ofSource "[wikipedia:X a@@@@b]".toList))
  countTokRule "Raw" stRaw.tokens = 1 ∧
    byteForm stRaw.work = litBytes "a" ++ phBytes 0 ++ litBytes "b" ∧
    countTokRule "Interwiki" stIw.tokens = 0

theorem diverges_x01_raw_empty_emits_token : ¬ LiveSpec_raw_empty_emits_token rawRule := by
  intro ⟨hc, _, _⟩
  have hbad : countTokRule "Raw" (rawRule (ParseState.ofSource "a@@@@b".toList)).tokens = 0 := by
    decide
  rw [hbad] at hc
  exact absurd hc (by decide)

/-- Live probes `muse-probe-agy-suspect-p22-date-at-forge` and
    `muse-probe-agy-suspect-x02-raw-in-date`:
    `Date::encodeFormat` percent-encodes literal `@` as `%40` (even in `@@123@@`)
    and encodes real `\xFF` token delimiter bytes as `%FF`; it never converts
    literal ASCII `@@digits@@` into `%FFdigits%FF`. -/
def LiveSpec_date_encodeFormat_literal_at (fn : List Nat → List Nat) : Prop :=
  fn (litBytes "@@123@@") = litBytes "%40%40123%40%40" ∧
  fn ([0xFF] ++ litBytes "1" ++ [0xFF] ++ litBytes "@@123") =
    litBytes "%FF1%FF%40%40123"

theorem diverges_p22_x02_date_encodeFormat :
    ¬ LiveSpec_date_encodeFormat_literal_at encodeDateFormat := by
  intro ⟨h1, _⟩
  have hbad : encodeDateFormat (litBytes "@@123@@") = litBytes "%FF123%FF" := rfl
  rw [hbad] at h1
  exact absurd h1 (by decide)

/-- Live probes `muse-probe-agy-suspect-p23-div-attr-unesc` and
    `muse-probe-agy-suspect-f09-div-attr-escapes`:
    `Render/Xhtml/Div` must escape attribute values with `ENT_COMPAT, 'UTF-8'`
    (`&` -> `&amp;`, `<` -> `&lt;`, `>` -> `&gt;`, `"` -> `&quot;`, `'` raw). -/
def LiveSpec_div_attr_escapes (fn : OptMap → List Nat) : Prop :=
  fn [("args".toList, OptVal.map [("data-x".toList, OptVal.str "a\"b".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div data-x=\"a&quot;b\">" ∧
  fn [("args".toList, OptVal.map [("data-x".toList, OptVal.str "a&b<c>d'e\"f".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div data-x=\"a&amp;b&lt;c&gt;d'e&quot;f\">"

theorem conforms_p23_f09_div_attr_escapes : LiveSpec_div_attr_escapes renderDiv := by
  constructor <;> decide

/-- REFCORR4 Batch C discharges the render side of
    `LiveSpec_div_raw_attr_cleared`: the parse still carries the
    placeholder-bearing option values, but `renderDiv` emits empty
    values with every key kept (InteractiveRender's
    `div_start_placeholder_attrs_cleared` pins the exact bytes). -/
theorem conforms_x08_b3_div_raw_attr_render :
    renderDiv [("args".toList, OptVal.map
        [("data-x".toList, OptVal.bytes ([97] ++ phBytes 0 ++ [99]))]),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div data-x=\"\">" := rfl

/-- Live probes `muse-probe-agy-suspect-x08-div-raw-attr` and
    `muse-probe-agy-suspect-b3-div-raw-class`:
    when a `Div` attribute value contains a `Raw` token placeholder `\xFFn\xFF`
    (`data-x="a@@b@@c"` or `class="a@@b@@c" id="a@@b@@c"`), live clears the
    attribute value to empty `""` (omitting `u-` on `id`) while keeping the
    attribute entry (`id="" class=""`, `data-x=""`). Notice also `id` precedes
    `class` on live (`C-STAGE2-1`, settled in `updates/REPORT-REFCORR2.md`). -/
def LiveSpec_div_raw_attr_cleared (fn : ParseState → ParseState) : Prop :=
  let stData := fn (rawRule (ParseState.ofSource "[[div data-x=\"a@@b@@c\"]]\nhi\n[[/div]]".toList))
  let stIdCls := fn (rawRule (ParseState.ofSource "[[div class=\"a@@b@@c\" id=\"a@@b@@c\"]]\nhi\n[[/div]]".toList))
  (∃ tok ∈ stData.tokens, tok.rule = "Div" ∧
    (getOptMap tok.opts "args").bind (fun m => getOptStr m "data-x") = some []) ∧
  (∃ tok ∈ stIdCls.tokens, tok.rule = "Div" ∧
    (getOptMap tok.opts "args").bind (fun m => getOptStr m "id") = some [] ∧
    (getOptMap tok.opts "args").bind (fun m => getOptStr m "class") = some [])

theorem diverges_x08_b3_div_raw_attr :
    ¬ LiveSpec_div_raw_attr_cleared (fun st => divRule st) := by
  intro ⟨hdata, _⟩
  rcases hdata with ⟨tok, hmem, _, hx⟩
  have hcheck :
      (divRule (rawRule (ParseState.ofSource "[[div data-x=\"a@@b@@c\"]]\nhi\n[[/div]]".toList))).tokens =
        [{ rule := "Raw", opts := [("text".toList, OptVal.str "b".toList)] },
         { rule := "Div",
           opts := [("args".toList, OptVal.map [("data-x".toList, OptVal.bytes ([97] ++ phBytes 0 ++ [99]))]),
                    ("type".toList, OptVal.str "start".toList)] },
         { rule := "Div", opts := [("type".toList, OptVal.str "end".toList)] }] := by
    dsimp [divRule, rawRule]
    rfl
  rw [hcheck] at hmem
  rcases List.mem_cons.mp hmem with rfl | hmem2
  · simp [getOptMap, omGet] at hx
  · rcases List.mem_cons.mp hmem2 with rfl | hmem3
    · simp [getOptMap, getOptStr, omGet, phBytes] at hx
    · rcases List.mem_cons.mp hmem3 with rfl | hmem4
      · simp [getOptMap, omGet] at hx
      · cases hmem4

/-- Live probe `muse-probe-agy-suspect-p26-size-invalid-inner`:
    `[[size large]]outer[[size bad]]inner[[/size]]tail[[/size]]` uses recursive
    pairing (`((?:(?R)|.)*?)`) rather than tempered `(?!\[\[size\s)`, so the
    invalid inner `[[size bad]]...[[/size]]` stays literal inside the valid
    outer `size="large"` token pair. -/
def LiveSpec_size_outer_with_invalid_inner (fn : ParseState → ParseState) : Prop :=
  let st := fn (ParseState.ofSource "[[size large]]outer[[size bad]]inner[[/size]]tail[[/size]]".toList)
  countTokType "Size" "start" st.tokens = 1 ∧
    countTokType "Size" "end" st.tokens = 1 ∧
    byteForm st.work =
      phBytes 0 ++ litBytes "outer[[size bad]]inner[[/size]]tail" ++ phBytes 1

theorem diverges_p26_size_invalid_inner :
    ¬ LiveSpec_size_outer_with_invalid_inner sizeRule := by
  intro ⟨hc, _, _⟩
  have hbad :
      countTokType "Size" "start"
        (sizeRule (ParseState.ofSource "[[size large]]outer[[size bad]]inner[[/size]]tail[[/size]]".toList)).tokens = 0 := by
    decide
  rw [hbad] at hc
  exact absurd hc (by decide)

/-- Live probes `muse-probe-agy-suspect-p30-listblocks-upper`,
    `muse-probe-agy-suspect-f04-ul-upper-open`,
    `muse-probe-agy-suspect-f05-ul-upper-close`,
    `muse-probe-agy-suspect-f06-ul-upper-after`,
    `muse-probe-agy-suspect-b3-ul-mixed-inner`, and
    `muse-probe-agy-suspect-b3-ol-upper-close`:
    refutes `conformance-refphp/listblocks/SECTION.md:6` (`lb07`, which relied on
    an unprobed ftml pin claiming uppercase list blocks stay literal).
    Live DOES parse:
    (1) lowercase openers with uppercase closers (`[[ul]]..[[LI]]..[[/LI]]..[[/UL]]`
        and `[[ol]]..[[li]]..[[/LI]]..[[/OL]]`) into complete `<ul/ol><li>...</li></ul/ol>`;
    (2) uppercase `[[LI]]..[[/LI]]` items inside `[[ul]]` (`b3-ul-mixed-inner`);
    (3) uppercase `[[UL]]` openers (`p30`/`f04`/`f06`, opening `<ul>` and `<li>`
        with asymmetrical closing behavior). -/
def LiveSpec_listblocks_case (fn : ParseState → ParseState) : Prop :=
  (countTokType "List" "explicit_list_start"
    (fn (ParseState.ofSource "[[ul]]\n[[li]]Case[[/LI]]\n[[/UL]]".toList)).tokens = 1) ∧
  (countTokType "List" "explicit_list_start"
    (fn (ParseState.ofSource "[[ol]]\n[[li]]Case[[/LI]]\n[[/OL]]".toList)).tokens = 1) ∧
  (countTokType "List" "explicit_item_start"
    (fn (ParseState.ofSource "[[ul]]\n[[LI]]A[[/LI]]\n[[/ul]]".toList)).tokens = 1) ∧
  (0 < countTokRule "List"
    (fn (ParseState.ofSource "[[UL]]\n[[LI]]Case[[/LI]]\n[[/UL]]".toList)).tokens)

theorem diverges_p30_f05_b3_listblocks_case : ¬ LiveSpec_listblocks_case listRule := by
  intro ⟨h1, _, _, _⟩
  have hbad :
      countTokType "List" "explicit_list_start"
        (listRule (ParseState.ofSource "[[ul]]\n[[li]]Case[[/LI]]\n[[/UL]]".toList)).tokens = 0 := by
    decide
  rw [hbad] at h1
  exact absurd h1 (by decide)

end LeanFtml.SuspectSpec
