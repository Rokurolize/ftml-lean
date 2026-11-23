/-
  LeanFtml.RefApply — the concrete `applyRuleRef` (F2, BRIEF-F2-PCCRECORE
  component 3).

  At proof-base-v1, `LeanFtml.ProofInterface` could only take
  `applyRuleRef` as a section parameter: no concrete reference-side
  rule application existed for the `RuleProofBundle.eq_ref` field to
  target.  This module supplies it.  For every rule, the reference
  application is: take the byte form of the working segments, run
  each extracted primary pattern (RefTables, snapshot-39) through
  PcreCore's `pregMatchAll` in order, splice a token placeholder
  (`\xFF<k>\xFF`, the mirror's own `segBytes (TSeg.tok k)` format)
  for every match with fresh indices continuing the state's token
  table, and recover segments with `parseBytes`.  The claims (full
  match bytes and capture groups 1..9, in claim order) are returned
  alongside by `refWork` for audit.

  WHAT THIS DOES NOT MODEL — the named TCB-4 remainder.  PHP's
  per-rule `process()` callback does two things beyond claiming a
  token: it shapes the replacement text around the placeholder
  (e.g. Horiz returns `"\n" . addToken . "\n\n"`), and it extracts
  the token's option map from the match.  Neither is modeled here:
  claims carry the rule name and an empty option map, and the
  replacement is the bare placeholder.  The per-rule `process()`
  correspondence is the traceability work of TCB-4, discharged rule
  by rule by the family proof lanes against this definition; the
  match-finding half — which patterns match, where, and with what
  captures — is exact, and is the half F2 owns (certified against
  PHP 8.5 libpcre2 by conformance-pcre2/).

  Rules with no extracted primary pattern (prefilter, delimiter,
  concatlines, freelink, footnoteitem, footnoteblock, bibitem,
  bibliography, url, typography, tighten) have `refParsed r = []`
  and `applyRuleRef` is the identity on them: their real drivers
  are inline `preg_*` calls or custom loops, recorded in RefTables'
  inline table, and wiring those is likewise family-lane work.
  Patterns carrying the `/u` flag parse here, but their byte-mode
  semantics are F3 UnicodeCore's responsibility, exactly as in
  PcreCore's own scope statement.
-/
import LeanFtml.PcreCore
import LeanFtml.RefTables
import LeanFtml.Pipeline
import LeanFtml.FormRawRules

namespace LeanFtml

/-- The RefTables key of a rule (the extractor's rule id). -/
def ruleName : RuleId → String
  | .include => "include"
  | .prefilter => "prefilter"
  | .delimiter => "delimiter"
  | .code => "code"
  | .form => "form"
  | .raw => "raw"
  | .rawold => "rawold"
  | .modulepre => "modulepre"
  | .module => "module"
  | .module654 => "module654"
  | .iftags => "iftags"
  | .comment => "comment"
  | .iframe => "iframe"
  | .date => "date"
  | .math => "math"
  | .concatlines => "concatlines"
  | .freelink => "freelink"
  | .equationreference => "equationreference"
  | .footnote => "footnote"
  | .footnoteitem => "footnoteitem"
  | .footnoteblock => "footnoteblock"
  | .bibitem => "bibitem"
  | .bibliography => "bibliography"
  | .bibcite => "bibcite"
  | .divprefilter => "divprefilter"
  | .anchor => "anchor"
  | .user => "user"
  | .blockquote => "blockquote"
  | .heading => "heading"
  | .toc => "toc"
  | .horiz => "horiz"
  | .separator => "separator"
  | .clearfloat => "clearfloat"
  | .break => "break"
  | .span => "span"
  | .size => "size"
  | .div => "div"
  | .divalign => "divalign"
  | .collapsible => "collapsible"
  | .tabview => "tabview"
  | .note => "note"
  | .gallery => "gallery"
  | .list => "list"
  | .deflist => "deflist"
  | .table => "table"
  | .tableadv => "tableadv"
  | .button => "button"
  | .image => "image"
  | .embed => "embed"
  | .social => "social"
  | .file => "file"
  | .center => "center"
  | .newline => "newline"
  | .paragraph => "paragraph"
  | .url => "url"
  | .email => "email"
  | .mathinline => "mathinline"
  | .interwiki => "interwiki"
  | .colortext => "colortext"
  | .strong => "strong"
  | .emphasis => "emphasis"
  | .underline => "underline"
  | .strikethrough => "strikethrough"
  | .tt => "tt"
  | .superscript => "superscript"
  | .subscript => "subscript"
  | .typography => "typography"
  | .tighten => "tighten"

/-- The extracted primary patterns of a rule, as byte lists. -/
def refPatternsOf (r : RuleId) : List (List Nat) :=
  match refRuleRegexes.find? (fun kv => kv.1 == ruleName r) with
  | some kv => kv.2
  | none => []

/-- The extracted primary patterns of a rule, parsed by PcreCore.
    Patterns PcreCore cannot parse are dropped; the conformance
    harness enumerates them (gate G2 evidence). -/
def refParsed (r : RuleId) : List PcreCore.PcreParsed :=
  (refPatternsOf r).filterMap PcreCore.parsePcreBytes

/-- Splice placeholders for one pattern's matches into `bs`.
    Matches are non-overlapping and ascending (PcreCore's
    `pregMatchAll`), claimed indices start at `base`, and the
    returned claims are the matches' full bytes and groups in claim
    order. -/
def spliceMatches (bs : List Nat) (base : Nat)
    (ms : List (Nat × Nat × List (Option (List Nat)))) :
    List Nat × List (List Nat × List (Option (List Nat))) :=
  let (out, cur, claims) := ms.foldl (fun acc m =>
    let (out, cur, claims) := acc
    (out ++ (bs.drop cur).take (m.1 - cur) ++
       segBytes (TSeg.tok (base + claims.length)),
     m.2.1,
     claims ++ [((bs.drop m.1).take (m.2.1 - m.1), m.2.2)])) ([], 0, [])
  (out ++ bs.drop cur, claims)

/-- The reference byte-level work of one rule: the rewritten byte
    string and the claims, applying the rule's parsed patterns in
    order (PHP's `preg_replace_callback` applies an array of
    patterns sequentially). -/
def refWork (r : RuleId) (st : ParseState) :
    List Nat × List (List Nat × List (Option (List Nat))) :=
  (refParsed r).foldl (fun acc p =>
    let (bs', claims) :=
      spliceMatches acc.1 (st.tokens.length + acc.2.length)
        (PcreCore.pregMatchAll p acc.1)
    (bs', acc.2 ++ claims)) (byteForm st.work, [])

/-- The concrete reference application of one parse rule.  With no
    claims the state is returned unchanged (PHP leaves the source
    untouched when nothing matches; the segment round-trip is the
    mirror's representation artifact, not reference behavior). -/
def applyRuleRef (r : RuleId) (st : ParseState) : ParseState :=
  let w := refWork r st
  if w.2 = [] then st
  else { st with
         work := parseBytes w.1,
         tokens := st.tokens ++
           w.2.map (fun _ => ({ rule := ruleName r, opts := [] } :
             TokenEntry)) }

/-- The reference pipeline step the bundles target: `runRules` with
    `applyRuleRef` in place of `applyRule` (same fatal-flag
    discipline). -/
def runRulesRef (rules : List RuleId) (st : ParseState) : ParseState :=
  rules.foldl (fun s r => if s.fatal then s else applyRuleRef r s) st

/-! ## Wiring theorems -/

/-- The extracted table covers all 68 rules. -/
theorem refRuleRegexes_length : refRuleRegexes.length = 68 := rfl

/-- No rule's extracted primary entry is the old bogus empty pattern
    or an empty pattern list entry: every rule with a primary entry
    carries at least one non-empty pattern.  (Rules with no primary
    entry at all are the eleven named in the header.) -/
theorem refPatternsOf_ne_bogus (r : RuleId) :
    refPatternsOf r ≠ [[]] := by
  cases r <;> decide

/-- The iframe entry is the dynamically resolved pattern: one
    pattern, not the empty literal the field declares. -/
theorem refPatternsOf_iframe_length :
    (refPatternsOf .iframe).length = 1 := by decide

/-- A rule that makes no claims leaves the state unchanged. -/
theorem applyRuleRef_of_no_claims (r : RuleId) (st : ParseState)
    (h : (refWork r st).2 = []) : applyRuleRef r st = st := by
  simp [applyRuleRef, h]

/-- A rule with no parsed patterns is the identity. -/
theorem applyRuleRef_of_no_patterns (r : RuleId) (st : ParseState)
    (h : refParsed r = []) : applyRuleRef r st = st := by
  apply applyRuleRef_of_no_claims
  simp [refWork, h]

/-- The token table grows by exactly the number of claims. -/
theorem applyRuleRef_tokens_length (r : RuleId) (st : ParseState) :
    (applyRuleRef r st).tokens.length =
      st.tokens.length + (refWork r st).2.length := by
  by_cases h : (refWork r st).2 = []
  · simp [applyRuleRef, h]
  · simp [applyRuleRef, h, List.length_append, List.length_map]

end LeanFtml
