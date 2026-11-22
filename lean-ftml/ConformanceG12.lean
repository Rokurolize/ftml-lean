/-
  Conformance driver for G1.2 (bridge A, model side), updated for the AUDIT-G12 repair of the block-end model.

  Runs the Lean block-end model (LeanFtml/BlockEnd.lean) over the abstract counterpart of the verify-block-end harness grid:

  - all 5 block types x 6 closer-suffix variants (bare, space, tab, two spaces, space-tab, tab-space — the harness's blank variants): the pairing profile must equal the expected profile, and the scan outcome must equal the bare-closer outcome after blank-suffix erasure of the tail (P2, in the form `scan_eraseBlank` proves). These checks are unchanged from the original driver: every suffix in the grid is blank, and every type accepts a blank suffix at a position its gate allows, so the repaired per-type gates keep them all true.
  - the suffix control, CORRECTED under AUDIT-G12 (C-AUDIT-G12-1 and C-AUDIT-G12-5): the original driver required a non-blank suffix (`x`) to be rejected by every type, encoding the old uniform gate. That is now known to be wrong for footnote and collapsible, whose measured gate accepts any suffix (live captures and the coordinator's ftml render measurements for fn-suf-text and coll-suf-text, in audit-g12/captures.json and materials/g12-ftml.jsonl), so the control now expects rejection exactly for code, math and bibliography, and the first-closer success outcome for footnote and collapsible.
  - the twelve measured shapes of the AUDIT-G12 adjudication, at item level, each named by its probe/dumper case id: per-type suffix gates with text after a blank (code-suf-sp-text, math-suf-sp-text), suffix text with no leading blank (code-suf-text, coll-suf-text, fn-suf-text, bib-suf-text), the unbalanced two-opener one-closer shapes (code-2o1c, math-2o1c), a mid-line inner opener (code-midopen), the math adjacent-closer shape (math-adjclose), and mid-line closers (math-midline, code-midline); plus the balanced controls code-2o2c and math-2o2c as exact scan outcomes. The line-start flags in the encodings are the tokens' positions in the measured sources.
  - wrapping contexts: the shape inside an opener/closer pair of each other block type (the harness's div/collapsible/footnote-style contexts, at model level) must keep the same profile and leave exactly the expected rest; the expected rest for the recursive types (code, math) is letter D and the context closer, since the repaired scan consumes both of the shape's closers, and for the first-closer types it is letter C, the second closer, letter D, and the context closer, as before.

  The real-Rust side of the bridge is the harness itself: `verification/block-end/run.sh` in the ftml repo (see conformance-g12/RESULTS.md in the loop record for its verdict). A mismatch here invalidates the model, not the proof.
-/

import LeanFtml

open LeanFtml

def g12Blocks : List BlockType :=
  [.code, .math, .footnote, .collapsible, .bibliography]

def g12Suffixes : List (String × List Char) :=
  [("bare", []), ("space", [' ']), ("tab", ['\t']),
   ("two-spaces", [' ', ' ']), ("space-tab", [' ', '\t']),
   ("tab-space", ['\t', ' '])]

/-- Expected profiles: the recorded rows for code/math/collapsible; the first-closer model prediction for footnote/bibliography. -/
def g12Expected : BlockType → List Nat
  | .code => [1, 1, 1, 0]
  | .math => [1, 1, 1, 0]
  | .footnote => [1, 1, 0, 0]
  | .collapsible => [1, 1, 0, 0]
  | .bibliography => [1, 1, 0, 0]

/-- The pairing shape with both closers carrying suffix `s`. Every token sits at a line start, as in the harness sources. -/
def g12Shape (b : BlockType) (s : List Char) : List Item :=
  [.text 0, .openTag b true, .text 1, .close b true s, .text 2,
   .close b true s, .text 3]

def g12Profile (b : BlockType) (xs : List Item) : List Nat :=
  match scan b xs with
  | some (body, _) => [0, 1, 2, 3].map (depthOf body)
  | none => []

/-- Scan outcome normalised by blank-suffix erasure. This is the exact equality P2 asserts (theorem `scan_eraseBlank`): bodies are equal outright, and rests are equal once the blank suffixes sitting in the unconsumed tail are erased, since a later scan would accept those closers in either form. Comparing raw rests instead would fail for the first-closer types, whose rest still holds the shape's second closer with its suffix. -/
def g12Norm (r : Option (List Item × List Item)) :
    Option (List Item × List Item) :=
  r.map fun (body, rest) => (body.map eraseBlankItem, rest.map eraseBlankItem)

/-- Expected outcome of the non-blank suffix control (`x` on both closers of the shape), corrected per type under AUDIT-G12: code, math and bibliography reject the suffix, so the scan runs off the end of the shape and fails; footnote and collapsible accept any suffix, so the scan stops at the first closer exactly as with a bare closer. -/
def g12ControlExpected (b : BlockType) : Option (List Item × List Item) :=
  match b with
  | .footnote | .collapsible =>
      some ([.text 0, .openTag b true, .text 1],
        [.text 2, .close b true ['x'], .text 3])
  | _ => none

/-- Expected rest of a context-wrapped shape scan: a recursive scan (code, math) consumes both of the shape's closers, so only letter D and the context closer remain; a first-closer scan stops at the shape's first closer, leaving letter C, the second closer, letter D, and the context closer. -/
def g12ExpectedRest (b c : BlockType) : List Item :=
  match discipline b with
  | .recursive => [.text 3, .close c true []]
  | .firstCloser => [.text 2, .close b true [], .text 3, .close c true []]

/-- The suffix text of the measured suffix shapes: `AFTER` after the closer on its line, and the blank-led variant. -/
def g12After : List Char := ['A', 'F', 'T', 'E', 'R']

/-- The twelve measured AUDIT-G12 shapes plus the two balanced controls, at item level: (case id, block type, scan stream starting just after the first opener, expected scan outcome). Sources: the coordinator's ftml render measurements in materials/g12-ftml.jsonl (probe sources in materials/g12-shapes.jsonl, rendered from the live probes of audit-g12/captures.json, on which ftml and live agree on every shape). -/
def g12Cases :
    List (String × BlockType × List Item × Option (List Item × List Item)) :=
  [ -- `[[code]]\nBODY\n[[/code]] AFTER`: the block forms; AFTER is outside.
    ("code-suf-sp-text", .code,
      [.text 0, .close .code true (' ' :: g12After)],
      some ([.text 0], [])),
    -- `[[code]]\nBODY\n[[/code]]AFTER`: no leading blank, so the closer is
    -- not accepted and no block forms.
    ("code-suf-text", .code,
      [.text 0, .close .code true g12After],
      none),
    -- `[[math]]\nBODY\n[[/math]] AFTER`: the block forms.
    ("math-suf-sp-text", .math,
      [.text 0, .close .math true (' ' :: g12After)],
      some ([.text 0], [])),
    -- `[[/collapsible]]AFTER` at a line start: any suffix is accepted.
    ("coll-suf-text", .collapsible,
      [.text 0, .close .collapsible true g12After],
      some ([.text 0], [])),
    -- `before[[footnote]]BODY[[/footnote]]AFTER`: the mid-line closer with
    -- a text suffix is accepted; AFTER fuses with what follows outside.
    ("fn-suf-text", .footnote,
      [.text 0, .close .footnote false g12After],
      some ([.text 0], [])),
    -- `[[/bibliography]] AFTER`: the all-blank gate rejects a suffix with
    -- text after the blank, so no block forms.
    ("bib-suf-text", .bibliography,
      [.text 0, .close .bibliography true (' ' :: g12After)],
      none),
    -- Two openers, one closer: one block ending at the first closer, the
    -- inner opener literal in the body, C outside.
    ("code-2o1c", .code,
      [.text 0, .openTag .code true, .text 1, .close .code true [],
       .text 2],
      some ([.text 0, .openTag .code true, .text 1], [.text 2])),
    ("math-2o1c", .math,
      [.text 0, .openTag .math true, .text 1, .close .math true [],
       .text 2],
      some ([.text 0, .openTag .math true, .text 1], [.text 2])),
    -- A mid-line inner opener never nests: the block ends at the first
    -- closer; C and the second closer are literal text after it.
    ("code-midopen", .code,
      [.text 0, .openTag .code false, .text 1, .close .code true [],
       .text 2, .close .code true [], .text 3],
      some ([.text 0, .openTag .code false, .text 1],
        [.text 2, .close .code true [], .text 3])),
    -- A nested math block closed directly against the outer closer does
    -- not count (the lookahead): the outer block ends at the first
    -- closer and the second closer is literal text after it.
    ("math-adjclose", .math,
      [.text 0, .openTag .math true, .text 1, .close .math true [],
       .close .math true [], .text 2],
      some ([.text 0, .openTag .math true, .text 1],
        [.close .math true [], .text 2])),
    -- A mid-line math closer is literal text: no block forms.
    ("math-midline", .math,
      [.text 0, .close .math false []],
      none),
    -- A mid-line code closer is accepted: the block forms, AFTER outside.
    ("code-midline", .code,
      [.text 0, .close .code false [], .text 1],
      some ([.text 0], [.text 1])),
    -- Balanced controls: the nested block completes and the outer block
    -- ends at the second closer, with the inner closer recorded bare in
    -- the body and D outside (the recorded pairing shape itself).
    ("code-2o2c", .code,
      shape .code,
      some ([.text 0, .openTag .code true, .text 1, .close .code true [],
        .text 2], [.text 3])),
    ("math-2o2c", .math,
      shape .math,
      some ([.text 0, .openTag .math true, .text 1, .close .math true [],
        .text 2], [.text 3]))]

def main : IO UInt32 := do
  let mut checks := 0
  let mut failures := 0
  for b in g12Blocks do
    for (name, s) in g12Suffixes do
      checks := checks + 1
      if !(g12Profile b (g12Shape b s) = g12Expected b) then
        failures := failures + 1
        IO.println s!"FAIL profile block={repr b} suffix={name}"
      checks := checks + 1
      if !(g12Norm (scan b (g12Shape b s)) = g12Norm (scan b (shape b))) then
        failures := failures + 1
        IO.println s!"FAIL outcome-eq block={repr b} suffix={name}"
    checks := checks + 1
    if !(scan b (g12Shape b ['x']) = g12ControlExpected b) then
      failures := failures + 1
      IO.println s!"FAIL suffix-control block={repr b}"
    for c in g12Blocks do
      if !(c = b) then
        checks := checks + 1
        let xs := Item.openTag c true :: shape b ++ [Item.close c true []]
        let ok := g12Profile b xs = g12Expected b &&
          (scan b xs).map Prod.snd = some (g12ExpectedRest b c)
        if !ok then
          failures := failures + 1
          IO.println s!"FAIL context block={repr b} context={repr c}"
  for (id, b, xs, expected) in g12Cases do
    checks := checks + 1
    if !(scan b xs = expected) then
      failures := failures + 1
      IO.println s!"FAIL case id={id} block={repr b}"
  if failures = 0 then
    IO.println s!"G12-CONFORMANCE PASS checks={checks} failures=0"
    return 0
  else
    IO.println s!"G12-CONFORMANCE FAIL checks={checks} failures={failures}"
    return 1
