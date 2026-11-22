import LeanFtml.InteractiveRender
import LeanFtml.ContainRules

namespace LeanFtml

set_option maxRecDepth 8192

theorem suspect_iframe_src_apostrophe :
    iframePart ("src".toList, OptVal.str "http://example.com/a'b".toList) =
      litBytes "src=\"http://example.com/a'b\"" := by
  have hval : renderOptValBytes (OptVal.str "http://example.com/a'b".toList) =
      litBytes "http://example.com/a'b" := rfl
  have hcond : ("src".toList == "src".toList) = true := rfl
  have henc : percentEncodeNonAscii (litBytes "http://example.com/a'b") =
      litBytes "http://example.com/a'b" := rfl
  have hqc : htmlSpecialCharsCompat (litBytes "http://example.com/a'b") =
      litBytes "http://example.com/a'b" := by
    have hascii : ∀ b ∈ litBytes "http://example.com/a'b", b < 0x80 := by
      decide
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hkey : "src".toList.flatMap utf8Bytes = litBytes "src" := rfl
  unfold iframePart
  simp only [hval, hcond, henc, hqc, hkey, ↓reduceIte,
    List.append_nil, List.append_assoc]
  rfl

#print axioms LeanFtml.suspect_iframe_src_apostrophe

end LeanFtml
