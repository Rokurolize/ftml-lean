/-
  SpecServing — live-pinned behavior of the serving-layer family
  (Module, Module654, Math, Image, Freelink), from BRIEF-SUSPECT-SERVING.

  Provenance. Every statement below with a probe citation was settled in this
  lane against saved anonymous page views on sandbox-for-codex.wikidot.com
  under prefix `muse-probe-suspect-serving-`; all cited captures are valid,
  stable across two anonymous GETs and saved_source_matches=true, with
  sources, maps and captures under conformance-suspect-serving/. Evidence
  order was ftml corpus pins, then frozen parity captures, then these fresh
  probes. The reference side is ref-php/harness/batch.php; Math DOM statements
  use an isolated scratch copy whose LatexRenderer stub writes a placeholder
  PNG so the Math renderer reaches its DOM-emitting branch
  (conformance-suspect-serving/scratch-refphp/harness/ozone-stubs.php). No
  file in the canonical tree was edited.

  Scope of mirror consequences. The parse-side statements are about the
  existing Lean mirror functions in LeanFtml (ModuleRules, NextRules,
  LinkRules). The render-side rules of this family have no mirror functions
  in this tree (RenderCore mirrors other rules), so those consequences are
  recorded as text naming the reference behavior, exactly as the brief
  requires; they are not asserted as Lean theorems here.

  Divergences found by this lane are NOT asserted here as live behavior:
  they are candidates C-SUSPECT-SERVING-1/2/3 in REPORT-SUSPECT-SERVING.md.
  In particular the mirror's `mathProcess` type fallback, `imageUrlMatches`
  unanchored scheme check and Freelink's star-target handling are fossil
  behavior that live contradicts.

  BUILD OUTCOME (single permitted attempt, LAKE_JOBS=1):
  `lake env lean SpecServing.lean` exited 1 with
  "error: unknown module prefix 'LeanFtml'" — this copy of the tree has no
  built mirror library (.lake/build/lib/lean contains no LeanFtml.olean),
  and the brief permits no further build actions. The propositions below are
  therefore LEFT AS TEXT: they are written in Lean syntax against the named
  mirror functions but are NOT verified declarations in this tree.
-/

import LeanFtml

namespace LeanFtml

/-! ## Module / Module654: trailing horizontal whitespace on the opener line -/

/-- Probe pages `muse-probe-suspect-serving-mod-tab-before-nl` (a literal
    tab after `]]` before the newline; saved source preserves the tab) and
    `muse-probe-suspect-serving-mod-space-control` (one space). Live claims
    both as a Module block and renders the unknown-module error block, and
    the full reference pipeline claims both: the shared Prefilter converts
    the tab to four spaces before the Module rule's space-only tail runs.
    The mirror consequence is Module's tail accepting spaces and Module654's
    tail accepting spaces or tabs; the tab-insensitivity of the whole
    pipeline lives in the (unmirrored) Prefilter step. -/
theorem specModule_tail_spaces :
    moduleTail (litBytes "  \nBODY\n[[/module]]")
      = some (litBytes "BODY", litBytes "") := rfl

/-- Same probe set, Module654 side: its tail admits a tab directly. This is
    the correction the earlier R2 Module654 stage pinned; restated here
    because the fresh lane probe confirmed the pipeline-level consequence. -/
theorem specModule654_tail_tab :
    module654Tail (litBytes "\t\nbody\n[[/module]]")
      = some (litBytes "body", litBytes "") := rfl

/-! ## Math: source-order equation numbering -/

/-- Probe pages `muse-probe-suspect-serving-math-types-ids` (four Math
    blocks; live numbers the third and fourth `(3)` and `(4)` even though
    the first two render as unsupported-environment error blocks) and
    `muse-probe-suspect-serving-math-alt-escape` (a single block, live `(1)`).
    The mirror assigns ids from one in source order; the counter advances
    for every claimed Math token. -/
theorem specMath_first_equation_id :
    (mathProcess none [] (litBytes "x = 1") {}).2.mathId = some 2 := rfl

/-- Probe `muse-probe-suspect-serving-math-types-ids`: the second block's id
    is 2 in the reference; live skips displaying ids 1 and 2 only because the
    serving layer rejected those two environments, not because the counter
    stopped. -/
theorem specMath_second_equation_id :
    (mathProcess none [] (litBytes "y = 2")
      (mathProcess none [] (litBytes "x = 1") {}).2).2.mathId = some 3 := rfl

/-! ## Freelink: a plain lower-case URL target is an external link -/

/-- Probe page `muse-probe-suspect-serving-free-plain-url`: live renders
    `[[[https://example.com/|Plain]]]` as `<a href="https://example.com/">Plain</a>`,
    byte-identical to the reference. The mirror's URL branch claims a token
    instead of a local slug. (The star-prefixed variant is the divergence
    C-SUSPECT-SERVING-2 and is deliberately not stated here.) -/
theorem specFreelink_plain_url_claims :
    (freelinkProcess (litBytes "[[[https://example.com/|Plain]]]")
      (litBytes "https://example.com/") (litBytes "|Plain") []).1
      = phBytes 0 := rfl

/-! ## Render-side consequences, as text (no mirror functions in this tree) -/

/-- TEXT (probes `muse-probe-suspect-serving-math-types-ids`,
    `muse-probe-suspect-serving-math-alt-escape`,
    `muse-probe-suspect-serving-math-type-equation`,
    `muse-probe-suspect-serving-math-type-gather`):
    the Math renderer emits an equation-number span before the
    `.math-equation` div; with the harness's unset `id_prefix` the div id is
    `equation-N` where N is the source-order id above. Live and the
    PNG-stubbed reference agree on the id values and on the span-before-div
    order; they differ only in serving-layer surface (live renders LaTeX text
    in the div, the reference an `<img>`), which is not a rule consequence. -/

/-- TEXT (probes `muse-probe-suspect-serving-img-nonraster`,
    `muse-probe-suspect-serving-img-raster`):
    a local image source whose filename lacks a `.png`, `.jpg` or `.gif`
    suffix is forced to the `medium` resized path by the fossil renderer,
    and live does the same. The emitted pair is
    `src=".../local--resized-images/<page>/foo.pdf/medium.jpg"` plus an
    `href=".../local--files/<page>/foo.pdf"`; a `.png` source stays on the
    plain local-files path. Host and page-name slot are serving-layer. -/

/-- TEXT (probes `muse-probe-suspect-serving-img-scheme-http`,
    `muse-probe-suspect-serving-img-scheme-gopher`,
    `muse-probe-suspect-serving-img-scheme-irc`):
    an image `link=` value with `://` is accepted exactly when its scheme is
    one of http, https, ftp, gopher or news; other schemes (`irc://`) leave
    the whole opener literal. Live matches the fossil whitelist on all three
    probes. (A link whose scheme appears only later in the value is the
    divergence C-SUSPECT-SERVING-3.) -/

/-- TEXT (probe `muse-probe-suspect-serving-mod-tab-before-nl`,
    `muse-probe-suspect-serving-mod-space-control`, and earlier programme
    captures `muse-probe-r2mod-module-mod-unknown` etc.):
    an unknown module name renders the single no-rel "No such module" error
    block; both trailing spaces and a trailing tab before the opener newline
    still claim the block. The Module654 renderer inherits this branch
    unchanged (R2 Module654 battery, probe
    `muse-probe-r2mod-module654-p-upper-newline-spaces`). -/

end LeanFtml
