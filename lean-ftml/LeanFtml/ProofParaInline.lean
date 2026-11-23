/-
  LeanFtml.ProofParaInline — Wave 2 proof/para-inline lane umbrella.
  ADVISOR-PROOF-POLICY §4.4 lane 4: ParaRules (Image, Newline, Paragraph), Inline1/2/3Rules (Url, Mathinline, Interwiki, Colortext, Strong, Emphasis, Underline, Strikethrough, Tt, Superscript, Subscript, Typography, Tighten), InlineRender and ListTableRender. Each imported unit carries its own #print axioms audit; the integrated build is the gate. Class A rules (Newline, Tighten, both pure renderer families) get general universal theorems. Class B rules get the strongest kernel-free forms with the regex-vs-PcreCore/libpcre2 agreement and the Tier-1 byteForm/parseBytes round trip named as remainders. No sorry, native_decide, bv_decide or nonstandard axiom is used. Prose is on single lines.
-/
import LeanFtml.ProofParaNewline
import LeanFtml.ProofParaTighten
import LeanFtml.ProofParaImage
import LeanFtml.ProofParaParagraph
import LeanFtml.ProofInline1
import LeanFtml.ProofInline2
import LeanFtml.ProofInline3
import LeanFtml.ProofInlineRender
import LeanFtml.ProofListTableRender

namespace LeanFtml

/-! ## Integrated axiom audit

Every headline theorem is printed by its owning unit above. The audit gate is
that no printed line names sorryAx, native_decide, Lean.ofReduceBool or any
axiom outside [propext, Classical.choice, Quot.sound]; the report records the
machine output of this build.
-/

end LeanFtml
