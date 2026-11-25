/-
  LeanFtml.RenderEnv — foundation unit F3 draft, factoring the harness
  environment out of LeanFtml/ServingRules.lean and
  LeanFtml/CodeEmbedRules.lean per ADVISOR-PROOF-POLICY §1.3 (Tier 2
  environment parameterization, TCB-5). Baseline proof-base-v1,
  snapshot-36 reference. This file is a SCRATCH DRAFT under
  coord-units/FOUNDATION-F3/; it is not adopted and does not edit the
  canonical tree. Prose is flowing paragraphs on single lines.

  Policy requirement: lift the harness constants hardcoded in ServingRules
  (moduleAvailableNames at ServingRules.lean:207, freelinkExistingPages at
  ServingRules.lean:294, the unset vars['pageName'], the no-op LatexRenderer,
  the missing DB_OzoneUserPeer / FlickrHandler / DB_FilePeer boundaries) into
  an explicit record RenderEnv, with def harnessEnv matching
  ref-php/harness/{wiki-config,ozone-stubs,pages}.php verbatim. On adoption
  every one of the 61 render rules becomes parametric in env : RenderEnv;
  the 53 pure rules leave it unused, and the 8 serving/external rules use
  exactly these fields, so each external call is a matched call on both sides
  of render_<r>_eq_ref (G5).

  Harness facts (read firsthand, not asserted from a report):
    ref-php/harness/pages.php ref_page_map() has exactly the eight keys
      muse-probe-g14-target, other-page, empty-page, :sandbox:other-page,
      muse-probe-g14b-target, muse-probe-r2link-free-exists,
      muse-probe-r2link-free-exists2, muse-probe-r2notes-x-inc-src;
      wiki-config.php registers wikiPageExists over
      array_keys(ref_page_map()) with strict in_array.
    ref-php/harness/ozone-stubs.php ModuleManager::$available has the nine
      original names (backlinks, categories, css, join, listpages, pagetree,
      rate, redirect, tagcloud) plus the nine REFCORR13 R13-AGY2 D14 names
      (newpage, childpages, pagecalendar, wantedpages, orphanedpages,
      countpages, search, members, files), compared with strtolower($moduleName)
      (byte-wise ASCII lower).
      LatexRenderer::render() is an empty no-op, so no equation PNG exists.
    wiki-config.php never sets vars['pageName']; PHP null concatenates to the
      empty string, so pageName is [] for every conformance render.
    There is no Criteria, DB_OzoneUserPeer, FlickrHandler, or usable
      DB_FilePeer in the harness tree: User/, Image:/Gallery:FlickrHandler
      are dispositions, so lookupUser, flickrResolve and localAttachments are
      none-valued for every argument. REFCORR13 R13-AGY2 D13 supplies
      DB_PagePeer::selectByPrimaryKey and the pre-created target page, so
      pageTitle answers for `muse-probe-agy-hunt-title-target` and is none
      for every other name. The CodeEmbedRules
      Text_Highlighter languages are an external boundary emitting a named
      marker, not a callable renderer, so highlightCode is likewise none.

  Axiom hygiene: ASCII literals are emitted directly as byte lists, never via
  String.toList, per §5.1 item 1; all helpers are kernel-total with no
  Mathlib, no bv_decide, no native_decide and no sorryAx.
-/

namespace LeanFtml

/-- Minimal record shapes for the three harness-absent external record types.
    They are intentionally structural placeholders: under harnessEnv none of
    them is ever constructed, and adoption should widen them to the exact
    field sets the deepwell-facing rules consume (the F3 scope is the
    environment boundary, not the deepwell record schemas). -/
structure UserRecord where
  userName : List Nat
  displayName : List Nat

structure FlickrRecord where
  src : List Nat

structure AttachmentRecord where
  name : List Nat
  url : List Nat

/-- Tier-2 environment (ADVISOR-PROOF-POLICY §1.3): every external call a
    render rule makes becomes an explicit field, so correctness is proved
    parametrically over all env rather than against a baked-in harness. -/
structure RenderEnv where
  pageName        : List Nat
  pageExists      : List Nat → Bool
  pageTitle       : List Nat → Option (List Nat)
  moduleAvailable : List Nat → Bool
  highlightCode   : List Nat → List Nat → Option (List Nat)
  renderLatex     : List Nat → List Nat → Option (List Nat)
  lookupUser      : List Nat → Option UserRecord
  flickrResolve   : List Nat → Option FlickrRecord
  localAttachments : List Nat → Option (List AttachmentRecord)

/-- Byte-wise ASCII lowering, matching PHP `strtolower` on module names
    (bytes outside A-Z are left untouched, exactly as ServingRules':207-231
    `asciiLowerBytes`). -/
def envAsciiLowerByte (b : Nat) : Nat :=
  if 65 <= b && b <= 90 then b + 32 else b

def envAsciiLower (bs : List Nat) : List Nat :=
  bs.map envAsciiLowerByte

/-- The ModuleManager available names from ozone-stubs.php, as direct
    ASCII byte lists (constructive, no String.toList). REFCORR13 R13-AGY2
    D14 adds the nine standard modules measured live in REPORT-AGY-HUNT.md
    D14, in the same order as the stub's extended `$available` array. -/
def harnessModuleNames : List (List Nat) :=
  [ [98, 97, 99, 107, 108, 105, 110, 107, 115],
    [99, 97, 116, 101, 103, 111, 114, 105, 101, 115],
    [99, 115, 115],
    [106, 111, 105, 110],
    [108, 105, 115, 116, 112, 97, 103, 101, 115],
    [112, 97, 103, 101, 116, 114, 101, 101],
    [114, 97, 116, 101],
    [114, 101, 100, 105, 114, 101, 99, 116],
    [116, 97, 103, 99, 108, 111, 117, 100],
    [110, 101, 119, 112, 97, 103, 101],
    [99, 104, 105, 108, 100, 112, 97, 103, 101, 115],
    [112, 97, 103, 101, 99, 97, 108, 101, 110, 100, 97, 114],
    [119, 97, 110, 116, 101, 100, 112, 97, 103, 101, 115],
    [111, 114, 112, 104, 97, 110, 101, 100, 112, 97, 103, 101, 115],
    [99, 111, 117, 110, 116, 112, 97, 103, 101, 115],
    [115, 101, 97, 114, 99, 104],
    [109, 101, 109, 98, 101, 114, 115],
    [102, 105, 108, 101, 115],
    [108, 105, 115, 116, 117, 115, 101, 114, 115],
    [109, 97, 105, 108, 102, 111, 114, 109],
    [99, 111, 109, 109, 101, 110, 116, 115],
    [116, 104, 101, 109, 101, 112, 114, 101, 118, 105, 101, 119, 101, 114],
    [119, 104, 111, 105, 110, 118, 105, 116, 101, 100],
    [114, 101, 99, 101, 110, 116, 116, 104, 114, 101, 97, 100, 115],
    [114, 101, 99, 101, 110, 116, 112, 111, 115, 116, 115],
    [109, 97, 110, 97, 103, 101, 115, 105, 116, 101],
    [102, 111, 114, 117, 109, 99, 97, 116, 101, 103, 111, 114, 121],
    [102, 111, 114, 117, 109, 110, 101, 119, 116, 104, 114, 101, 97, 100],
    [102, 111, 114, 117, 109, 115, 116, 97, 114, 116],
    [102, 111, 114, 117, 109, 116, 104, 114, 101, 97, 100],
    [102, 114, 111, 110, 116, 102, 111, 114, 117, 109],
    [109, 101, 109, 98, 101, 114, 115, 104, 105, 112, 97, 112, 112, 108, 121],
    [115, 105, 116, 101, 99, 104, 97, 110, 103, 101, 115],
    [117, 115, 101, 114, 105, 110, 102, 111],
    [108, 105, 115, 116, 100, 114, 97, 102, 116, 115],
    [119, 97, 116, 99, 104, 101, 114, 115],
    [109, 105, 110, 105, 97, 99, 116, 105, 118, 101, 116, 104, 114, 101, 97, 100, 115],
    [109, 105, 110, 105, 114, 101, 99, 101, 110, 116, 112, 111, 115, 116, 115],
    [109, 105, 110, 105, 114, 101, 99, 101, 110, 116, 116, 104, 114, 101, 97, 100, 115] ]

/-- The ref_page_map() keys from pages.php, in source order; the ninth is the
    REFCORR13 R13-AGY2 D13 pre-created textFromTitle target. -/
def harnessExistingPages : List (List Nat) :=
  [ [109, 117, 115, 101, 45, 112, 114, 111, 98, 101, 45, 103, 49, 52, 45, 116, 97, 114, 103, 101, 116],
    [111, 116, 104, 101, 114, 45, 112, 97, 103, 101],
    [101, 109, 112, 116, 121, 45, 112, 97, 103, 101],
    [58, 115, 97, 110, 100, 98, 111, 120, 58, 111, 116, 104, 101, 114, 45, 112, 97, 103, 101],
    [109, 117, 115, 101, 45, 112, 114, 111, 98, 101, 45, 103, 49, 52, 98, 45, 116, 97, 114, 103, 101, 116],
    [109, 117, 115, 101, 45, 112, 114, 111, 98, 101, 45, 114, 50, 108, 105, 110, 107, 45, 102, 114, 101, 101, 45, 101, 120, 105, 115, 116, 115],
    [109, 117, 115, 101, 45, 112, 114, 111, 98, 101, 45, 114, 50, 108, 105, 110, 107, 45, 102, 114, 101, 101, 45, 101, 120, 105, 115, 116, 115, 50],
    [109, 117, 115, 101, 45, 112, 114, 111, 98, 101, 45, 114, 50, 110, 111, 116, 101, 115, 45, 120, 45, 105, 110, 99, 45, 115, 114, 99],
    [109, 117, 115, 101, 45, 112, 114, 111, 98, 101, 45, 97, 103, 121, 45, 104, 117, 110, 116, 45, 116, 105, 116, 108, 101, 45, 116, 97, 114, 103, 101, 116] ]

/-- The harness environment: the exact fixed environment every current
    conformance binary uses. Each field is justified above; `none` means the
    external service is absent or its result is unreachable in the harness,
    never that the rule silently stubs it (the entry-point scans still name
    every such disposition in `unmirrored`). -/
def harnessEnv : RenderEnv :=
  { pageName := []
    pageExists := fun page => harnessExistingPages.contains page
    pageTitle := fun name =>
      if name == [109, 117, 115, 101, 45, 112, 114, 111, 98, 101, 45, 97, 103, 121, 45, 104, 117, 110, 116, 45, 116, 105, 116, 108, 101, 45, 116, 97, 114, 103, 101, 116] then
        some ([72, 117, 110, 116, 39, 115, 32, 34, 84, 105, 116, 108, 101, 34, 32, 38, 32, 60, 84, 101, 115, 116, 62] : List Nat)
      else none
    moduleAvailable := fun name => harnessModuleNames.contains (envAsciiLower name)
    highlightCode := fun _ _ => none
    renderLatex := fun _ _ => none
    lookupUser := fun _ => none
    flickrResolve := fun _ => none
    localAttachments := fun _ => none }

/-! ## Ground pins and structural facts for the harness record -/

example : harnessEnv.pageExists [111, 116, 104, 101, 114, 45, 112, 97, 103, 101] = true := by decide
example : harnessEnv.pageExists [109, 105, 115, 101, 45, 112, 114, 111, 98, 101] = false := by decide
example : harnessEnv.moduleAvailable [99, 115, 115] = true := by decide
example : harnessEnv.moduleAvailable [67, 83, 83] = true := by decide
example : harnessEnv.moduleAvailable [109, 97, 103, 105, 99] = false := by decide
example : harnessEnv.pageName = [] := by decide
example : harnessEnv.renderLatex [] [] = none := rfl
example : harnessEnv.lookupUser [] = none := rfl

/-- Byte-wise ASCII lowering is idempotent (the lowered A-Z bytes are a-z and
    are left alone on a second pass). -/
theorem envAsciiLowerByte_idem (b : Nat) :
    envAsciiLowerByte (envAsciiLowerByte b) = envAsciiLowerByte b := by
  by_cases h65 : 65 <= b
  · by_cases h90 : b <= 90
    · have hnot : ¬(b + 32 <= 90) := by omega
      simp [envAsciiLowerByte, h65, h90, hnot]
    · simp [envAsciiLowerByte, h65, h90]
  · simp [envAsciiLowerByte, h65]

theorem envAsciiLower_idem (bs : List Nat) :
    envAsciiLower (envAsciiLower bs) = envAsciiLower bs := by
  induction bs with
  | nil => simp [envAsciiLower]
  | cons b bs ih => simp [envAsciiLower, envAsciiLowerByte_idem]

/-- The harness module check is byte-wise case-insensitive for ASCII names,
    matching ModuleManager::canWikiUseModule. -/
theorem harnessModuleAvailable_asciiLower (name : List Nat) :
    harnessEnv.moduleAvailable name =
      harnessModuleNames.contains (envAsciiLower (envAsciiLower name)) := by
  simp [harnessEnv, envAsciiLower_idem]

#print axioms harnessModuleAvailable_asciiLower

end LeanFtml
