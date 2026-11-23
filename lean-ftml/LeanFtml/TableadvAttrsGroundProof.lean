import LeanFtml.TableadvChunkBytesProof

/-! TableadvAttrsGroundProof.lean — ground `by decide` pins for the attrs* buildAttrsAdv theorems, split verbatim from TableadvProof.lean. -/

namespace LeanFtml

theorem attrsFoo : buildAttrsAdv (litBytes " data-Foo=\"UP\"") "table" =
    [(litBytes "data-foo", litBytes "UP")] := by decide
theorem attrsDot : buildAttrsAdv (litBytes " data-Foo.Bar=\"UB\"") "table" =
    [(litBytes "data-foo.bar", litBytes "UB")] := by decide
theorem attrsUnder : buildAttrsAdv (litBytes " data-Foo_Bar=\"UB\"") "table" =
    [(litBytes "data-foo_bar", litBytes "UB")] := by decide
theorem attrsDATA : buildAttrsAdv (litBytes " DATA-foo=\"UP\"") "table" = [] := by decide
theorem attrsCLASS : buildAttrsAdv (litBytes " CLASS=\"UP\"") "table" = [] := by decide
theorem attrsPlus : buildAttrsAdv (litBytes " data-foo+bar=\"UB\"") "table" = [] := by decide
theorem attrsEmptySuffix : buildAttrsAdv (litBytes " data-=\"UB\"") "table" =
    [(litBytes "data-", litBytes "UB")] := by decide
theorem attrsDotEdge : buildAttrsAdv (litBytes " data-.=\"UB\"") "table" =
    [(litBytes "data-.", litBytes "UB")] := by decide
theorem attrsLast : buildAttrsAdv (litBytes " data-Foo=\"1\" data-foo=\"2\"") "table" =
    [(litBytes "data-foo", litBytes "2")] := by decide
theorem attrsId : buildAttrsAdv (litBytes " id=\"X\"") "table" =
    [(litBytes "id", litBytes "u-X")] := by decide
theorem attrsAlign : buildAttrsAdv (litBytes " align=\"center\"") "table" = [] := by decide
theorem attrsEmptyHead : buildAttrsAdv ([] : List Nat) "table" = [] := by decide

end LeanFtml
