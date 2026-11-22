/-
  LeanFtml.CodeEmbedRender — R4.7 stage entry points and
  theorems for the Code and Embed Xhtml render mirror.

  The two render functions live in
  `LeanFtml/CodeEmbedRules.lean`. The dispatcher is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in this stage to all fifty-four mirrored rules; the
  `R47` entry points below share that dispatch, exactly as the
  earlier stages' entry points do.

  Code's `Text_Highlighter` branch is the stage's recorded
  external boundary (REPORT-R47.md): `renderCode` emits a
  stated marker there, and `renderWithR47` additionally names
  the boundary (`"Text_Highlighter:<type>"`) in the outcome's
  `unmirrored` list for every referenced Code token that
  reaches it, so such cases are EXCLUDED by name, never passed
  and never failed. The scan is over the outcome's segment
  list, which is exactly the set of tokens the render loop
  references (this architecture flattens all content into the
  top-level segment list; containers are start/end token
  pairs). Boundary names are appended after any unmirrored
  rule names, deduplicated; in the R4.7 corpora a boundary
  case never also references an unmirrored rule, so the
  append order is unobservable there.

  The end-to-end entry point runs the R4.7 stage prefix
  `LeanFtml.pipelineR47`, which is the full sixty-eight-rule
  pipeline (see `LeanFtml/Pipeline.lean`).

  Proof devices used in this stage (all statement-preserving,
  following the earlier stages' disclosed patterns): the Code
  worked examples are proved by branch rewriting (concrete
  branch facts as `rfl` haves, the escape step through
  `RenderCore.htmlSpecialCharsCompat_ascii`, assembly by
  `simp only` with `List.append_assoc`), because a plain `rfl`
  would kernel-reduce `utf8Valid` inside
  `htmlSpecialCharsCompat` on the whole body. The Embed worked
  examples and the PCRE unit examples are plain `rfl` over
  small pattern lists and short subjects: the engine's
  evaluation is ordinary Nat/list computation with no
  `utf8Valid` involvement. The five Embed `rfl` theorems
  whose engine evaluation nests past the default elaborator
  recursion depth carry a proof-local
  `set_option maxRecDepth 8192` (the R4.3 Interwiki /
  R4.6 Equationreference precedent; statements unchanged). The Embed theorems use pattern
  fixtures parsed from literals copied from the configuration
  table; `anyiframe_fixture_in_table` pins the principal
  fixture to the table entry itself, and the family gate (the
  compiled driver over the real 75-pattern list) is the
  differential evidence for the table as a whole.
-/

import LeanFtml.NotesRender
import LeanFtml.CodeEmbedRules
import LeanFtml.Pipeline

namespace LeanFtml

/-! ## R4.7 dispatcher and entry points -/

/-- The combined dispatcher for the fifty-four render rules
    mirrored through R4.7 (definitionally `dispatchRenderR41`,
    extended in this stage; see its doc comment in
    `LeanFtml/NotesRender.lean`). -/
def dispatchRenderR47 :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat :=
  dispatchRenderR41

/-- The `Text_Highlighter` boundary name a token entry
    contributes, if it is a Code token whose type reaches the
    library. -/
def codeBoundaryOf (entry : TokenEntry) : Option String :=
  if entry.rule == "Code" then codeBoundaryName entry.opts else none

/-- The boundary names contributed by a segment list's
    referenced tokens, in encounter order, deduplicated. -/
def boundaryNamesIn (lookup : Nat → Option TokenEntry)
    (work : List TSeg) : List String :=
  work.foldl (fun acc seg =>
    match seg with
    | .tok k =>
        match lookup k with
        | some e =>
            match codeBoundaryOf e with
            | some n => pushUnique acc n
            | none => acc
        | none => acc
    | .text _ => acc) []

/-- Render from an arbitrary token lookup function under the
    R4.7 mirrored render rules, with the `Text_Highlighter`
    boundary named in the outcome (used directly by the
    conformance driver on raw `state-restricted.php` batch
    states whose token keys are cumulative process-global
    ids). -/
def renderWithR47 (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) : RenderOutcome :=
  let base := renderWith dispatchRenderR47 lookup conf work doc
  { base with
    unmirrored := (boundaryNamesIn lookup work).foldl pushUnique
      base.unmirrored }

/-- Render an R3 `ParseState` (0-indexed `st.tokens`) under the
    R4.7 mirrored render rules. -/
def renderStateR47 (conf : RenderConf) (st : ParseState) : RenderOutcome :=
  renderWithR47 (fun k => st.tokens[k]?) conf st.work st.doc

/-- End-to-end Lean parse+render on top of the R4.7 stage prefix
    (`convCRLF` → `pipelineR47`, the full pipeline →
    `renderStateR47`). -/
def renderCodeEmbedE2E (conf : RenderConf) (tags : List (List Char))
    (source : List Char) : RenderOutcome :=
  let st0 : ParseState :=
    { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }
  let st := runRules pipelineR47 st0
  renderStateR47 conf st

/-! ## Code theorems -/

/-- Code, plain branch: a leading blank line is dropped, the
    body is served unescaped (no special bytes), wrapped in
    `"\n" … "\n\n"`. -/
theorem code_plain_basic :
    renderCode [("text".toList, .str "\nalpha\nbeta\n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
    [10] ++ litBytes "<div class=\"code\">\n<pre><code>" ++
      litBytes "alpha\nbeta" ++
      litBytes "</code></pre></div>" ++ [10, 10] := by
  have hopt : optStrBytes [("text".toList, .str "\nalpha\nbeta\n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])]
      "text".toList = litBytes "\nalpha\nbeta\n" := rfl
  have hbody : wikidotTrimCodeBody (litBytes "\nalpha\nbeta\n") =
      litBytes "alpha\nbeta" := rfl
  have hty : codeType [("text".toList, .str "\nalpha\nbeta\n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
      [] := rfl
  have hlang : codeLangs.contains ([] : List Nat) = false := rfl
  have htrim : (phpTrimBytes (litBytes "alpha\nbeta") == []) =
      false := rfl
  have htab : (litBytes "alpha\nbeta").flatMap
        (fun b => if b == 9 then [32, 32, 32, 32] else [b]) =
      litBytes "alpha\nbeta" := rfl
  have hesc : htmlSpecialCharsCompat (litBytes "alpha\nbeta") =
      litBytes "alpha\nbeta" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderCode
  simp only [hopt, hbody, hty, hlang, htrim, htab, hesc,
    Bool.false_eq_true, ↓reduceIte, List.append_assoc]

/-- Code, empty branch: an empty body renders the bare
    wrapper. -/
theorem code_empty_body :
    renderCode [("text".toList, .str "".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
    [10] ++ litBytes "<div class=\"code\"></div>" ++ [10, 10] := by
  have hopt : optStrBytes [("text".toList, .str "".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])]
      "text".toList = [] := rfl
  have hbody : wikidotTrimCodeBody ([] : List Nat) = [] := rfl
  have hty : codeType [("text".toList, .str "".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
      [] := rfl
  have hlang : codeLangs.contains ([] : List Nat) = false := rfl
  have htrim : (phpTrimBytes ([] : List Nat) == []) = true := rfl
  unfold renderCode
  simp only [hopt, hbody, hty, hlang, htrim,
    Bool.false_eq_true, ↓reduceIte, List.append_assoc]

/-- Code, empty branch: an all-whitespace body (spaces and a
    newline) trims to empty and renders the bare wrapper. -/
theorem code_whitespace_body :
    renderCode [("text".toList, .str "  \n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
    [10] ++ litBytes "<div class=\"code\"></div>" ++ [10, 10] := by
  have hopt : optStrBytes [("text".toList, .str "  \n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])]
      "text".toList = litBytes "  \n" := rfl
  have hbody : wikidotTrimCodeBody (litBytes "  \n") = [] := rfl
  have hty : codeType [("text".toList, .str "  \n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
      [] := rfl
  have hlang : codeLangs.contains ([] : List Nat) = false := rfl
  have htrim : (phpTrimBytes ([] : List Nat) == []) = true := rfl
  unfold renderCode
  simp only [hopt, hbody, hty, hlang, htrim,
    Bool.false_eq_true, ↓reduceIte, List.append_assoc]

/-- Code, plain branch: the first content line keeps its
    indentation, a tab expands to four spaces, and trailing
    whitespace is stripped (the R2 live-trim shape). -/
theorem code_tab_indent :
    renderCode [("text".toList, .str "\n  x\ty  \n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
    [10] ++ litBytes "<div class=\"code\">\n<pre><code>" ++
      litBytes "  x    y" ++
      litBytes "</code></pre></div>" ++ [10, 10] := by
  have hopt : optStrBytes [("text".toList, .str "\n  x\ty  \n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])]
      "text".toList = litBytes "\n  x\ty  \n" := rfl
  have hbody : wikidotTrimCodeBody (litBytes "\n  x\ty  \n") =
      litBytes "  x\ty" := rfl
  have hty : codeType [("text".toList, .str "\n  x\ty  \n".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
      [] := rfl
  have hlang : codeLangs.contains ([] : List Nat) = false := rfl
  have htrim : (phpTrimBytes (litBytes "  x\ty") == []) =
      false := rfl
  have htab : (litBytes "  x\ty").flatMap
        (fun b => if b == 9 then [32, 32, 32, 32] else [b]) =
      litBytes "  x    y" := rfl
  have hesc : htmlSpecialCharsCompat (litBytes "  x    y") =
      litBytes "  x    y" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderCode
  simp only [hopt, hbody, hty, hlang, htrim, htab, hesc,
    Bool.false_eq_true, ↓reduceIte, List.append_assoc]

/-- Code, plain branch: `ENT_COMPAT` escaping escapes `"`,
    `<`, `>` but keeps the apostrophe raw. -/
theorem code_escape_compat :
    renderCode [("text".toList, .str "a'b\"c<d>".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
    [10] ++ litBytes "<div class=\"code\">\n<pre><code>" ++
      litBytes "a'b&quot;c&lt;d&gt;" ++
      litBytes "</code></pre></div>" ++ [10, 10] := by
  have hopt : optStrBytes [("text".toList, .str "a'b\"c<d>".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])]
      "text".toList = litBytes "a'b\"c<d>" := rfl
  have hbody : wikidotTrimCodeBody (litBytes "a'b\"c<d>") =
      litBytes "a'b\"c<d>" := rfl
  have hty : codeType [("text".toList, .str "a'b\"c<d>".toList),
        ("attr".toList, .map [("type".toList, .str "".toList)])] =
      [] := rfl
  have hlang : codeLangs.contains ([] : List Nat) = false := rfl
  have htrim : (phpTrimBytes (litBytes "a'b\"c<d>") == []) =
      false := rfl
  have htab : (litBytes "a'b\"c<d>").flatMap
        (fun b => if b == 9 then [32, 32, 32, 32] else [b]) =
      litBytes "a'b\"c<d>" := rfl
  have hesc : htmlSpecialCharsCompat (litBytes "a'b\"c<d>") =
      litBytes "a'b&quot;c&lt;d&gt;" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderCode
  simp only [hopt, hbody, hty, hlang, htrim, htab, hesc,
    Bool.false_eq_true, ↓reduceIte, List.append_assoc]

/-- Code, plain branch: a type outside the fourteen
    `Text_Highlighter` languages (`apache`, here capitalized in
    the source and lowered by the rule) takes the plain path. -/
theorem code_unknown_type :
    renderCode [("text".toList, .str "x".toList),
        ("attr".toList, .map [("type".toList, .str "Apache".toList)])] =
    [10] ++ litBytes "<div class=\"code\">\n<pre><code>" ++
      litBytes "x" ++
      litBytes "</code></pre></div>" ++ [10, 10] := by
  have hopt : optStrBytes [("text".toList, .str "x".toList),
        ("attr".toList, .map [("type".toList, .str "Apache".toList)])]
      "text".toList = litBytes "x" := rfl
  have hbody : wikidotTrimCodeBody (litBytes "x") =
      litBytes "x" := rfl
  have hty : codeType [("text".toList, .str "x".toList),
        ("attr".toList, .map [("type".toList, .str "Apache".toList)])] =
      litBytes "apache" := rfl
  have hlang : codeLangs.contains (litBytes "apache") =
      false := rfl
  have htrim : (phpTrimBytes (litBytes "x") == []) = false := rfl
  have htab : (litBytes "x").flatMap
        (fun b => if b == 9 then [32, 32, 32, 32] else [b]) =
      litBytes "x" := rfl
  have hesc : htmlSpecialCharsCompat (litBytes "x") =
      litBytes "x" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderCode
  simp only [hopt, hbody, hty, hlang, htrim, htab, hesc,
    Bool.false_eq_true, ↓reduceIte, List.append_assoc]

/-- Code, boundary branch: type `python` reaches the
    `Text_Highlighter` library; the mirror emits the stated
    marker (the case is excluded by name at the entry
    points). -/
theorem code_python_boundary :
    renderCode [("text".toList, .str "x".toList),
        ("attr".toList, .map [("type".toList, .str "python".toList)])] =
    [10] ++ litBytes "[[UNMIRRORED:Text_Highlighter:" ++
      litBytes "python" ++ litBytes "]]" ++ [10, 10] := by
  have hty : codeType [("text".toList, .str "x".toList),
        ("attr".toList, .map [("type".toList, .str "python".toList)])] =
      litBytes "python" := rfl
  have hlang : codeLangs.contains (litBytes "python") =
      true := rfl
  unfold renderCode
  simp only [hty, hlang, codeBoundaryMarker, ↓reduceIte,
    List.append_assoc]

/-- Code, boundary branch: the type is lowered before the
    language test, so `PYTHON` reaches the same boundary under
    the lowered name. -/
theorem code_python_upper_boundary :
    renderCode [("text".toList, .str "x".toList),
        ("attr".toList, .map [("type".toList, .str "PYTHON".toList)])] =
    [10] ++ litBytes "[[UNMIRRORED:Text_Highlighter:" ++
      litBytes "python" ++ litBytes "]]" ++ [10, 10] := by
  have hty : codeType [("text".toList, .str "x".toList),
        ("attr".toList, .map [("type".toList, .str "PYTHON".toList)])] =
      litBytes "python" := rfl
  have hlang : codeLangs.contains (litBytes "python") =
      true := rfl
  unfold renderCode
  simp only [hty, hlang, codeBoundaryMarker, ↓reduceIte,
    List.append_assoc]

/-- The boundary at the entry point: a document whose only
    token is a highlighted Code block is NOT complete, and its
    `unmirrored` list names the boundary exactly. -/
theorem code_boundary_excluded :
    (renderStateR47 {}
      { work := [.tok 0],
        tokens := [
          { rule := "Code",
            opts := [("text".toList, .str "x".toList),
              ("attr".toList, .map [("type".toList, .str "python".toList)])] } ],
        doc := {} }).unmirrored =
      ["Text_Highlighter:python"] := rfl

/-- The same document's outcome is incomplete (companion to
    `code_boundary_excluded`). -/
theorem code_boundary_incomplete :
    (renderStateR47 {}
      { work := [.tok 0],
        tokens := [
          { rule := "Code",
            opts := [("text".toList, .str "x".toList),
              ("attr".toList, .map [("type".toList, .str "python".toList)])] } ],
        doc := {} }).isComplete = false := rfl

/-! ## PCRE unit theorems -/

/-- The parser builds the expected AST for an anchored
    quantified literal. -/
theorem pcre_parse_a_plus :
    parsePcre ";^a+$;" =
    some { ast := .seq .bol (.seq (.rep (.byte 97) 1 none) .eol),
           ci := false, dotall := false } := rfl

/-- The matcher accepts a run of the quantified byte. -/
theorem pcre_match_a_plus_true :
    pcreMatch { ast := .seq .bol (.seq (.rep (.byte 97) 1 none) .eol),
                ci := false, dotall := false }
      (litBytes "aaa") = true := rfl

/-- The matcher rejects a run broken by another byte (`$`
    anchors the end). -/
theorem pcre_match_a_plus_false :
    pcreMatch { ast := .seq .bol (.seq (.rep (.byte 97) 1 none) .eol),
                ci := false, dotall := false }
      (litBytes "aab") = false := rfl

/-! ## Embed theorems -/

/-- The `anyiframe` fixture used below is the configuration
    table's own entry (index 35 of `embedPatternStrings`). -/
theorem anyiframe_fixture_in_table :
    embedPatternStrings[35]? =
    some ("anyiframe",
      ";^<iframe(\\s+[a-z0-9_]+\\s*=\\s*['\"][^'\"]*['\"])+>\\s*</iframe>$;si") := rfl

/-- The parsed `anyiframe` fixture. -/
def anyiframeFixture : PcreParsed :=
  match parsePcre
      ";^<iframe(\\s+[a-z0-9_]+\\s*=\\s*['\"][^'\"]*['\"])+>\\s*</iframe>$;si" with
  | some p => p
  | none => { ast := .eps, ci := true, dotall := true }

/-- Embed with an empty allowlist: no pattern can match, so
    the error block renders. -/
theorem embed_no_patterns_error :
    renderEmbedWith [] [("content".toList, .str "x".toList)] =
    embedError := rfl

set_option maxRecDepth 8192 in
/-- Embed passthrough: an iframe whose attributes fit
    `anyiframe` passes through unchanged. -/
theorem embed_anyiframe_passthrough :
    renderEmbedWith [anyiframeFixture]
        [("content".toList,
          .str "<iframe src=\"http://x.test/\"></iframe>".toList)] =
    litBytes "<iframe src=\"http://x.test/\"></iframe>" := rfl

set_option maxRecDepth 8192 in
/-- Embed event check: an `onclick` attribute inside the
    matched iframe breaks to the error block. -/
theorem embed_anyiframe_onclick_error :
    renderEmbedWith [anyiframeFixture]
        [("content".toList,
          .str "<iframe src=\"http://x.test/\" onclick=\"go()\"></iframe>".toList)] =
    embedError := rfl

set_option maxRecDepth 8192 in
/-- Embed `src` scheme check: a `javascript:` `src` renders
    the whole embed empty. -/
theorem embed_anyiframe_js_src_empty :
    renderEmbedWith [anyiframeFixture]
        [("content".toList,
          .str "<iframe src=\"javascript:alert(1)\"></iframe>".toList)] =
    [] := rfl

set_option maxRecDepth 8192 in
/-- Embed allowlist shape: `anyiframe`'s attribute-name class
    excludes `-`, so a `data-x` attribute fails the only
    pattern and the error block renders (the battery's
    `embed/eb-x07` shape, against the one-pattern list). -/
theorem embed_anyiframe_dash_attr_error :
    renderEmbedWith [anyiframeFixture]
        [("content".toList,
          .str "<iframe data-x=\"1\"></iframe>".toList)] =
    embedError := rfl

set_option maxRecDepth 8192 in
/-- The `language="JavaScript…"` strip: the attribute is
    removed wherever it occurs, leaving the surrounding bytes
    (including the separating space) in place. -/
theorem embed_language_strip :
    pcreReplaceAll languageStripPattern
        (litBytes "<script language=\"JavaScript1.2\" src=\"x\"></script>") =
    litBytes "<script  src=\"x\"></script>" := rfl

end LeanFtml
