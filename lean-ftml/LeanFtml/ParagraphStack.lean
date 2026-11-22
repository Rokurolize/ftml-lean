/-
  LeanFtml.ParagraphStack — gap G1.5, output-tree correctness of the
  paragraph formation core (bridge option A, Wikidot/legacy layout).

  Scope (see REPORT-G15.md for the full claim set and all dispositions):
  this file models the stack's own API boundary, the same boundary the
  no-panic harness drives (24 operations in ftml stack_orders.rs:33-58)
  and the ftml unit tests in stack.rs:3046-3235 pin. Elements are abstract:
  the caller supplies the paragraph_safe flag, exactly as push_element's
  second argument does. The state is current (the open run), finished (the
  emitted tree), unwrapped (bare-vs-paragraph), discardedControl (an
  invisible line still occupies a run), lineStart (the driver's
  next_element_started_line signal), and breakSeen (the blank-line signal).
  The ~45 legacy compatibility marks whose effects depend on parser
  internals (anchor chrome, collapsible tails, div-literal runs, post-list
  break followers, table cells, leading-br marks, and finalizer dissolves)
  are explicitly deferred, not silently modelled away.

  One-to-one with ftml 014eb6f95:
    aSafe                <- Element::paragraph_safe (tree/element/object.rs:588-646)
                            restricted to the element subset below.
    pushElement          <- ParagraphStack::push_element (stack.rs:1338-2073),
                            restricted to the core dispatch (1760-2072):
                            the indentation drop (1777-1799), the
                            trailing-space trim before a LineBreak
                            (1800-1802), the safe push (1823), and the
                            unsafe flush/push (1992-2020).
    pushSafeElements     <- push_paragraph_safe_elements (2407-2450).
    buildParagraph       <- build_paragraph (2500-2532), without the
                            deferred leading-br marks.
    endParagraph         <- end_paragraph (2643-2725), core arms.
    endParagraphAtBreak  <- end_paragraph_at_break (2806-2859), core arms.
    intoElements         <- into_elements (2931-2946), final end_paragraph
                            only (finalizer shape rewrites deferred).

  Prose is written as flowing paragraphs on single lines per AGENTS.md.
-/

namespace LeanFtml

/-- The abstract element stream. Text and Raw carry `List Char` (never
    `String.toList`, which pulls Classical.choice into compiled definitions).
    `lineBreak` is Element::LineBreak; `hr` is Element::HorizontalRule;
    `code s` is Element::Code with contents s; `list b` is Element::List with
    its wikidot_explicit_block flag b; `html s` is Element::Html; `image b`
    is Element::Image with alignment iff b; `bold n` and `div n` are
    paragraph-safe/unsafe containers identified by a tag n; their interiors
    are deferred (the conformance grid only generates empty containers). -/
inductive AElem where
  | text : List Char → AElem
  | raw : List Char → AElem
  | lineBreak : AElem
  | hr : AElem
  | code : List Char → AElem
  | list : Bool → AElem
  | html : List Char → AElem
  | image : Bool → AElem
  | bold : Nat → AElem
  | div : Nat → AElem
  deriving DecidableEq, Repr, BEq

/-- The Rust `Element::paragraph_safe` surface check for this subset:
    Text, Raw, LineBreak, Bold containers, and Images are safe;
    HorizontalRule, Code, List, Html, and Div containers are unsafe. -/
def aSafe : AElem → Bool
  | .text _ => true
  | .raw _ => true
  | .lineBreak => true
  | .hr => false
  | .code _ => false
  | .list _ => false
  | .html _ => false
  | .image _ => true
  | .bold _ => true
  | .div _ => false

theorem aSafe_lineBreak : aSafe .lineBreak = true := rfl
theorem aSafe_hr : aSafe .hr = false := rfl

/-- A finished-tree entry: either a bare element or one Paragraph
    container. `finished` in Rust is a Vec<Element>; paragraphs are
    `Element::Container(ContainerType::Paragraph, elements, empty attrs)`. -/
inductive OElem where
  | bare : AElem → OElem
  | para : List AElem → OElem
  deriving DecidableEq, Repr, BEq

/-- The scoped state. Fields mirror stack.rs: current (65), finished (134),
    current_unwrapped (71), current_has_discarded_control (73),
    next_element_started_line (104), paragraph_break_since_element (79). -/
structure St where
  current : List AElem := []
  finished : List OElem := []
  unwrapped : Bool := false
  discardedControl : Bool := false
  lineStart : Bool := false
  breakSeen : Bool := false
  deriving DecidableEq, Repr

def initSt : St := {}

/-- A single-space Text element (`text!(" ")` in stack.rs). -/
def sp : AElem := .text [' ']

/-- Is this a single-space Text element? -/
def isSp : AElem → Bool
  | .text [' '] => true
  | _ => false

theorem isSp_sp : isSp sp = true := rfl

/-- Trailing-space removal on a reversed list: drop the leading run of
    single-space elements (which correspond to the trailing run in the
    original order), then reverse back. This is Rust's
    `trim_trailing_ascii_space` (2550-2572) in the Wikidot layout, where
    the loop removes every trailing single-space Text. -/
def trimRev : List AElem → List AElem
  | [] => []
  | a :: xs => if isSp a then trimRev xs else a :: xs

def trimSpaces (xs : List AElem) : List AElem := (trimRev xs.reverse).reverse

theorem trimSpaces_nil : trimSpaces [] = [] := rfl

theorem trimRev_cons_not_sp (a : AElem) (xs : List AElem) (h : isSp a = false) :
    trimRev (a :: xs) = a :: xs := by
  rw [trimRev.eq_2]
  simp only [h, Bool.false_eq_true, Bool.false_eq_true, ite_false]

theorem trimRev_append_sp (xs : List AElem) : trimRev (sp :: xs) = trimRev xs := by
  simp [trimRev, isSp, sp]

theorem trimSpaces_sp (xs : List AElem) : trimSpaces (xs ++ [sp]) = trimSpaces xs := by
  simp [trimSpaces, isSp, sp, trimRev]

/-- `build_paragraph` (2500-2532): trim first, then an empty run builds
    nothing, otherwise wrap the (trimmed) run in one Paragraph container. -/
def buildParagraph (s : St) : Option OElem :=
  let es := trimSpaces s.current
  if es.isEmpty then none else some (.para es)

/-- `end_paragraph` (2643-2725), core arms: an unwrapped run is appended
    bare, a wrapped nonempty run becomes one Paragraph, an empty run
    appends nothing. All run flags reset afterwards. -/
def endParagraph (s : St) : St :=
  let finished' :=
    if s.unwrapped then s.finished ++ s.current.map OElem.bare
    else match buildParagraph s with
      | some p => s.finished ++ [p]
      | none => s.finished
  { current := []
    finished := finished'
    unwrapped := false
    discardedControl := false
    lineStart := s.lineStart
    breakSeen := s.breakSeen }

/-- The indentation gate at stack.rs:1777-1799: a lone space Text at a
    line start, after an existing space, or after a LineBreak is dropped
    (the "all seams" and scored-alias alternatives are out of scope). -/
def dropsSpace (s : St) : Bool :=
  s.current.isEmpty || (s.lineStart && s.current.isEmpty) ||
    match s.current.getLast? with
    | some a => isSp a || a == .lineBreak
    | none => false

/-- The indentation-drop condition, bundled as one Bool. -/
def dropCond (s : St) (e : AElem) : Bool := e == sp && dropsSpace s

/-- `push_element` (1338-2073), core dispatch. The caller supplies
    `paragraph_safe`; the unsafe arm ends the open paragraph and then
    appends the element to `finished` (1992-2020). An unsafe LineBreak
    ("invisible block line", 1857/2064-2066) also sets unwrapped so the
    break is carried bare rather than wrapped. -/
def pushElement (s : St) (e : AElem) (safe : Bool) : St :=
  let breakSeen' := if e == .lineBreak then s.breakSeen else false
  if dropCond s e then
    { s with breakSeen := breakSeen' }
  else if safe then
    let current' := if e == .lineBreak then trimSpaces s.current else s.current
    { s with current := current' ++ [e], breakSeen := breakSeen' }
  else
    let s1 := endParagraph s
    let unwrapped' := s1.unwrapped || e == .lineBreak
    { s1 with finished := s1.finished ++ [.bare e],
              unwrapped := unwrapped',
              discardedControl := false,
              breakSeen := breakSeen' }

/-- `push_paragraph_safe_elements` (2407-2450): on an empty current run,
    drop the maximal leading LineBreak prefix and adopt the rest; an
    all-breaks batch leaves current empty. On a nonempty run, append
    verbatim. Pending seams are out of scope. -/
def dropLeadingBreaks : List AElem → List AElem
  | .lineBreak :: xs => dropLeadingBreaks xs
  | xs => xs

def pushSafeElements (s : St) (es : List AElem) : St :=
  if s.current.isEmpty then
    { s with current := dropLeadingBreaks es }
  else
    { s with current := s.current ++ es }

/-- `end_paragraph_at_break` (2806-2859), core arms: an unwrapped run of
    only whitespace Text and LineBreaks is deferred (no output); an
    unwrapped nonempty run is flushed bare and then one separator Text is
    emitted; a wrapped run is flushed normally; `breakSeen` is set. -/
def onlyWhitespace : List AElem → Bool
  | [] => true
  | .lineBreak :: _ => false
  | .text cs :: xs => (cs.all (fun c => c == ' ' || c == '\t' || c == '\n' || c == '\r')) && onlyWhitespace xs
  | _ => false

def endParagraphAtBreak (s : St) : St :=
  if s.unwrapped && !s.current.isEmpty && onlyWhitespace s.current then
    { s with current := [], breakSeen := true }
  else
    let unwrapped := s.unwrapped && !s.current.isEmpty
    let s1 := endParagraph s
    let finished' :=
      if unwrapped then s1.finished ++ [.bare sp]
      else s1.finished
    { s1 with finished := finished', breakSeen := true }

/-- `into_elements` (2931-2946): one final end_paragraph, no finalizer
    shape rewrites (those are deferred). -/
def intoElements (s : St) : List OElem := (endParagraph s).finished

/-! ## Theorems: the eight scoped output-tree claims -/

/-- C1a. Flushing a wrapped nonempty run appends exactly one Paragraph
    holding the trailing-space-trimmed run. -/
theorem endParagraph_wrapped (s : St) (hne : ¬ trimSpaces s.current = []) (hu : s.unwrapped = false) :
    (endParagraph s).finished = s.finished ++ [.para (trimSpaces s.current)] := by
  by_cases hnil : trimSpaces s.current = []
  · exact False.elim (hne hnil)
  · simp [endParagraph, hu, buildParagraph, hnil]

/-- C1b. Flushing an unwrapped run appends its elements bare, in order. -/
theorem endParagraph_unwrapped (s : St) (hu : s.unwrapped = true) :
    (endParagraph s).finished = s.finished ++ s.current.map OElem.bare := by
  simp [endParagraph, hu]

/-- C1c. Flushing an empty wrapped run appends nothing. -/
theorem endParagraph_empty (s : St) (h : trimSpaces s.current = []) (hu : s.unwrapped = false) :
    (endParagraph s).finished = s.finished := by
  simp [endParagraph, hu, buildParagraph, h]

/-- C2. Pushing a paragraph-unsafe element ends the pending paragraph
    before placing the element bare in finished. This is the key
    separation property: the unsafe element is never inside a Paragraph. -/
theorem push_unsafe_finishes (s : St) (e : AElem)
    (hd : dropCond s e = false) :
    (pushElement s e false).finished = (endParagraph s).finished ++ [.bare e] := by
  simp [pushElement, hd]

/-- C2 corollary: the second of two consecutive unsafe pushes adds
    exactly one bare element and never creates a Paragraph container. -/
theorem push_unsafe_twice (s : St) (e f : AElem)
    (hd1 : dropCond s e = false)
    (hd : dropCond (pushElement s e false) f = false) :
    (pushElement (pushElement s e false) f false).finished =
      (pushElement s e false).finished ++ [.bare f] := by
  generalize hs : pushElement s e false = s' at hd ⊢
  have hc : s'.current = [] := by
    rw [← hs]
    simp [pushElement, hd1, endParagraph]
  simp [pushElement, hd, endParagraph, buildParagraph, hc, trimSpaces_nil]

/-- C3. finished is only ever appended to: every flush preserves the
    already-emitted prefix. -/
theorem endParagraph_prefix (s : St) :
    ∃ suffix, (endParagraph s).finished = s.finished ++ suffix := by
  by_cases hu : s.unwrapped
  · exact ⟨s.current.map OElem.bare, by simp [endParagraph, hu]⟩
  · by_cases hne : trimSpaces s.current = []
    · exact ⟨[], by simp [endParagraph, hu, buildParagraph, hne]⟩
    · exact ⟨[.para (trimSpaces s.current)], by simp [endParagraph, hu, buildParagraph, hne]⟩

/-- C4a. Bulk push onto an empty run adopts the batch without its
    leading LineBreaks. -/
theorem pushSafeElements_empty (s : St) (es : List AElem) (h : s.current = []) :
    (pushSafeElements s es).current = dropLeadingBreaks es := by
  simp [pushSafeElements, h]

/-- C4b. An all-breaks batch on an empty run leaves current empty. -/
theorem pushSafeElements_all_breaks (s : St) (es : List AElem) (h : s.current = [])
    (hall : ∀ e ∈ es, e = .lineBreak) :
    (pushSafeElements s es).current = [] := by
  simp [pushSafeElements, h]
  induction es with
  | nil => rfl
  | cons e es ih =>
    rw [hall e (by simp)]
    exact ih (fun x hx => hall x (by simp [hx]))

/-- C4c. Bulk push onto a nonempty run appends verbatim. -/
theorem pushSafeElements_append (s : St) (es : List AElem) (h : ¬ s.current = []) :
    (pushSafeElements s es).current = s.current ++ es := by
  by_cases hnil : s.current = []
  · exact False.elim (h hnil)
  · simp [pushSafeElements, hnil]

/-- C5. Trailing single-space elements do not change the built paragraph. -/
theorem buildParagraph_trims (s : St) (es : List AElem) :
    buildParagraph { s with current := es ++ [sp] } = buildParagraph { s with current := es } := by
  simp [buildParagraph, trimSpaces_sp]

/-- C6a. mark_current_unwrapped on an empty run is a no-op. -/
theorem markUnwrapped_empty (s : St) (_h : s.current = []) :
    endParagraph { s with unwrapped := true } = endParagraph s := by
  simp [endParagraph, buildParagraph, _h, trimSpaces_nil]

/-- C6b. mark_current_unwrapped on a nonempty run makes the flush bare. -/
theorem markUnwrapped_nonempty (s : St) (_h : ¬ s.current = []) :
    (endParagraph { s with unwrapped := true }).finished =
      s.finished ++ s.current.map OElem.bare := by
  simp [endParagraph, _h]

/-- C7a. end_paragraph_at_break on an unwrapped whitespace-only run
    produces no output and keeps the finished prefix. -/
theorem endBreak_whitespace_unwrapped (s : St) (h : ¬ s.current = [])
    (hw : onlyWhitespace s.current = true) (hu : s.unwrapped = true) :
    (endParagraphAtBreak s).finished = s.finished := by
  simp [endParagraphAtBreak, hu, h, hw]

/-- C7b. end_paragraph_at_break on a wrapped run with a nonempty
    trimmed current flushes exactly one Paragraph and no separator. -/
theorem endBreak_wrapped (s : St) (hu : s.unwrapped = false) (hne : ¬ trimSpaces s.current = []) :
    (endParagraphAtBreak s).finished = s.finished ++ [.para (trimSpaces s.current)] := by
  by_cases hnil : trimSpaces s.current = []
  · exact False.elim (hne hnil)
  · simp [endParagraphAtBreak, hu, endParagraph, buildParagraph, hnil]

/-- C8. A discarded control mark does not change the output of a
    subsequent flush: it affects only current_empty() in the driver. -/
theorem discardedControl_no_output_change (s : St) :
    intoElements { s with discardedControl := true } = intoElements s := by
  simp [intoElements, endParagraph, buildParagraph]

/-- The final flush is idempotent. -/
theorem intoElements_after_flush (s : St) :
    intoElements (endParagraph s) = (endParagraph s).finished := by
  simp [intoElements, endParagraph, buildParagraph, trimSpaces_nil]

end LeanFtml
