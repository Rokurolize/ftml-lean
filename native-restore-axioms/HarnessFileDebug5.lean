import LeanFtml.InteractiveRender
import LeanFtml.ContainRules

namespace LeanFtml

set_option maxRecDepth 8192

theorem suspect_file_anchor_apostrophe :
    renderFile [("file".toList, OptVal.str "dir/a.txt".toList),
      ("anchor".toList, OptVal.str "it's".toList)] =
      litBytes "<a href=\"/local--files/dir/a.txt\">it's</a>" := by
  have hfile : optStrBytes [("file".toList, OptVal.str "dir/a.txt".toList),
      ("anchor".toList, OptVal.str "it's".toList)] "file".toList =
      litBytes "dir/a.txt" := rfl
  have hanchor : optStrBytes [("file".toList, OptVal.str "dir/a.txt".toList),
      ("anchor".toList, OptVal.str "it's".toList)] "anchor".toList =
      litBytes "it's" := rfl
  have hcont : (litBytes "dir/a.txt").contains 47 = true := rfl
  have hcons : litBytes "dir/a.txt" = 100 :: litBytes "ir/a.txt" := rfl
  have henc : encodeFilePath (100 :: litBytes "ir/a.txt") =
      litBytes "dir/a.txt" := rfl
  have hqc1 : htmlSpecialCharsCompat
      (litBytes "/local--files/" ++ encodeFilePath (100 :: litBytes "ir/a.txt")) =
      litBytes "/local--files/dir/a.txt" := by
    rw [henc]
    show htmlSpecialCharsCompat (litBytes "/local--files/dir/a.txt") =
      litBytes "/local--files/dir/a.txt"
    have hascii : ∀ b ∈ litBytes "/local--files/dir/a.txt", b < 0x80 := by
      decide
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hqc2 : htmlSpecialCharsCompat (litBytes "it's") =
      litBytes "it's" := by
    have hascii : ∀ b ∈ litBytes "it's", b < 0x80 := by
      decide
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  unfold renderFile
  simp only [hfile, hanchor, hcont, hcons, henc, hqc1, hqc2,
    ↓reduceIte, List.append_nil, List.append_assoc]

#print axioms LeanFtml.suspect_file_anchor_apostrophe

end LeanFtml
