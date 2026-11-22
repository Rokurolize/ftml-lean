// Lean compiler output
// Module: LeanFtml.CoverageProse
// Imports: public import Init public meta import Init public import LeanFtml.FrameRules public import LeanFtml.MiddleRules public import LeanFtml.Middle2Rules public import LeanFtml.LinkRules public import LeanFtml.ParaRules public import LeanFtml.InlineSimpleRules public import LeanFtml.Inline3Rules public import LeanFtml.ProseRules
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ProseClass_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqProseClass(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqProseClass___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.pfCrlf"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.ProseClass.pfCr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ProseClass.pfWsLine"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.ProseClass.pfTab"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.ProseClass.pfPad"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ProseClass.pfCompress"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ProseClass.dlAuthored"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ProseClass.clIdentity"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__15_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.clJoin"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__17_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.clDivOpen"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__19_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.ProseClass.clTokenized"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__21_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.tnNewline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__23_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.tnFold"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__25_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ProseClass.tnColorStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__27_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ProseClass.tnColorEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__28_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__29_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ProseClass.tnEdgeTrim"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__31_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ProseClass.tnSecondFold"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__32_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__33_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ProseClass.tyQuoteDouble"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__35_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ProseClass.tyQuoteComma"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__37_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ProseClass.tyQuoteSingle"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__38_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__39_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.ProseClass.tyLeftAngle"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__40_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__41_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ProseClass.tyRightAngle"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__42_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__43_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ProseClass.tyNumSpace"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__44_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__45_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.tyUnit"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__46_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__47_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ProseClass.tyEllipsis"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__48_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__49_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.ProseClass.tyDash2"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__50_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__51_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.tyNone"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__52_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__52_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__53_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.ProseClass.pgEmpty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__54_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__54_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__55_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ProseClass.pgScoredAnchor"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__56 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__56_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__56_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__57_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ProseClass.pgScoredSpan"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__58 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__58_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__58_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__59 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__59_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.pgSkip"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__60_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__60_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__61 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__61_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.pgWrap"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__62 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__62_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__62_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__63 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__63_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.hzFire"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__64 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__64_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__64_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__65 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__65_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.hzLiteral"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__66 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__66_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__66_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__67 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__67_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.spFire"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__68 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__68_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__68_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__69 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__69_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.spLiteral"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__70 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__70_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__70_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__71 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__71_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.cfBoth"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__72 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__72_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__72_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__73 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__73_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.ProseClass.cfRight"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__74 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__74_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__74_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__75 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__75_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.cfLeft"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__76 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__76_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__76_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__77 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__77_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ProseClass.cfDoubleSide"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__78 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__78_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__78_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__79 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__79_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.cfLiteral"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__80 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__80_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__80_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__81 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__81_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.brFire"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__82 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__82_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__82_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__83 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__83_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.brLiteral"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__84 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__84_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__84_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__85 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__85_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.ctFire"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__86 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__86_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__86_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__87 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__87_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.ctLiteral"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__88 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__88_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__88_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__89 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__89_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.dpJoin"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__90 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__90_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__90_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__91 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__91_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.dpLiteral"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__92 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__92_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__92_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__93 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__93_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ProseClass.daCenter"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__94 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__94_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__94_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__95 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__95_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.ProseClass.daLeft"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__96 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__96_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__96_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__97 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__97_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.ProseClass.daRight"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__98 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__98_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__98_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__99 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__99_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.daJustify"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__100 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__100_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__100_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__101 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__101_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ProseClass.daRepeat"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__102 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__102_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__102_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__103 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__103_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ProseClass.daLiteral"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__104 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__104_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__104_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__105 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__105_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprProseClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprProseClass___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(52) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(49) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__23_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__25_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__28_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__29_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__31_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__32_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__33_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__35_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__35_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__37_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__37_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__38_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__39_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__39_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__40_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__41_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__41_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__42_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__43_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__43_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__44_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__45_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__45_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__46_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__47_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__47_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__48_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__49_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__49_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__50_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__51_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allClasses___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__51_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allClasses___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__52_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_allClasses = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allClasses___closed__52_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_right_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_right_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_right_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_right_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_left_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_left_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_left_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_left_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_lt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_lt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_lt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_lt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_gt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_gt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_gt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_gt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_nested_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_nested_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_nested_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_nested_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_prefilter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_prefilter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_delimiter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_delimiter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_concatlines_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_concatlines_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_tighten_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_tighten_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_typography_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_typography_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_paragraph_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_paragraph_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_horiz_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_horiz_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_separator_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_separator_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_clearfloat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_clearfloat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_brk_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_brk_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_center_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_center_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_divprefilter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_divprefilter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_divalign_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_divalign_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classWhen(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classWhen___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_pfBranches_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_pfBranches_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pfBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pfBranches___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tnBranches_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tnBranches_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tnBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tnBranches___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_tyAny(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tyAny___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tyBranches_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tyBranches_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tyBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tyBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_hzBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_hzBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_hzBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_hzBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_hzBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_hzBranches___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hzBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hzBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_spBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_spBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_spBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_spBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spBranches___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cfBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cfBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cfBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cfBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cfBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cfBranches___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cfBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cfBranches___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cfBranches___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cfBranches___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cfBranches___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cfBranches___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cfBranches___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cfBranches___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cfBranches___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cfBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cfBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(49) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classify___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classify___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classify___closed__20_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classify(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classify___boxed(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_classMemDecidable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_classMemDecidable___closed__0;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_classMemDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classMemDecidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 1, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 1, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 2}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 2}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 2}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 2}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__23_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 1, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__25_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__29_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__31_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 1, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__33_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 1, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__35_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__35_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__37_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__37_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 1, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__39_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__39_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 1),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__41_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__41_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__43_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__43_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__45_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__45_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 5}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__47_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 5}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 5}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__49_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 5}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 5}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(4, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__51_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__52_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__52_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__53_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__54_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__54_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__55_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__56 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__56_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__56_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__57_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__58 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__58_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__58_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__59 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__59_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__60_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__60_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__61 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__61_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__62 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__62_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__62_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__63 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__63_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__64 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__64_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__64_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__65 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__65_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(3, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__66 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__66_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__66_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__67 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__67_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__68 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__68_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__68_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__69 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__69_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 9}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__70 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__70_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 9}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__71 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__71_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 10}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__72 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__72_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 10}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__73 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__73_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 11}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__74 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__74_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 11}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__75 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__75_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 12}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__76 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__76_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 12}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__77 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__77_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 12}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__78 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__78_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 12}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__79 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__79_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 12}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(4, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__80 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__80_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_witnessShape___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 12}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(5, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___closed__81 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_witnessShape___closed__81_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_witnessShape(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_lean_x2dftml_LeanFtml_ProseClass_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = lp_lean_x2dftml_LeanFtml_ProseClass_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim___redArg(lean_object* v_pfCrlf_22_){
_start:
{
lean_inc(v_pfCrlf_22_);
return v_pfCrlf_22_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim___redArg___boxed(lean_object* v_pfCrlf_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim___redArg(v_pfCrlf_23_);
lean_dec(v_pfCrlf_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_pfCrlf_28_){
_start:
{
lean_inc(v_pfCrlf_28_);
return v_pfCrlf_28_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_pfCrlf_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfCrlf_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_pfCrlf_32_);
lean_dec(v_pfCrlf_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim___redArg(lean_object* v_pfCr_35_){
_start:
{
lean_inc(v_pfCr_35_);
return v_pfCr_35_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim___redArg___boxed(lean_object* v_pfCr_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim___redArg(v_pfCr_36_);
lean_dec(v_pfCr_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_pfCr_41_){
_start:
{
lean_inc(v_pfCr_41_);
return v_pfCr_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_pfCr_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfCr_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_pfCr_45_);
lean_dec(v_pfCr_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim___redArg(lean_object* v_pfWsLine_48_){
_start:
{
lean_inc(v_pfWsLine_48_);
return v_pfWsLine_48_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim___redArg___boxed(lean_object* v_pfWsLine_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim___redArg(v_pfWsLine_49_);
lean_dec(v_pfWsLine_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_pfWsLine_54_){
_start:
{
lean_inc(v_pfWsLine_54_);
return v_pfWsLine_54_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_pfWsLine_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfWsLine_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_pfWsLine_58_);
lean_dec(v_pfWsLine_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim___redArg(lean_object* v_pfTab_61_){
_start:
{
lean_inc(v_pfTab_61_);
return v_pfTab_61_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim___redArg___boxed(lean_object* v_pfTab_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim___redArg(v_pfTab_62_);
lean_dec(v_pfTab_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim(lean_object* v_motive_64_, uint8_t v_t_65_, lean_object* v_h_66_, lean_object* v_pfTab_67_){
_start:
{
lean_inc(v_pfTab_67_);
return v_pfTab_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_pfTab_71_){
_start:
{
uint8_t v_t_boxed_72_; lean_object* v_res_73_; 
v_t_boxed_72_ = lean_unbox(v_t_69_);
v_res_73_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfTab_elim(v_motive_68_, v_t_boxed_72_, v_h_70_, v_pfTab_71_);
lean_dec(v_pfTab_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim___redArg(lean_object* v_pfPad_74_){
_start:
{
lean_inc(v_pfPad_74_);
return v_pfPad_74_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim___redArg___boxed(lean_object* v_pfPad_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim___redArg(v_pfPad_75_);
lean_dec(v_pfPad_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim(lean_object* v_motive_77_, uint8_t v_t_78_, lean_object* v_h_79_, lean_object* v_pfPad_80_){
_start:
{
lean_inc(v_pfPad_80_);
return v_pfPad_80_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim___boxed(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_pfPad_84_){
_start:
{
uint8_t v_t_boxed_85_; lean_object* v_res_86_; 
v_t_boxed_85_ = lean_unbox(v_t_82_);
v_res_86_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfPad_elim(v_motive_81_, v_t_boxed_85_, v_h_83_, v_pfPad_84_);
lean_dec(v_pfPad_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim___redArg(lean_object* v_pfCompress_87_){
_start:
{
lean_inc(v_pfCompress_87_);
return v_pfCompress_87_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim___redArg___boxed(lean_object* v_pfCompress_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim___redArg(v_pfCompress_88_);
lean_dec(v_pfCompress_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim(lean_object* v_motive_90_, uint8_t v_t_91_, lean_object* v_h_92_, lean_object* v_pfCompress_93_){
_start:
{
lean_inc(v_pfCompress_93_);
return v_pfCompress_93_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim___boxed(lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_pfCompress_97_){
_start:
{
uint8_t v_t_boxed_98_; lean_object* v_res_99_; 
v_t_boxed_98_ = lean_unbox(v_t_95_);
v_res_99_ = lp_lean_x2dftml_LeanFtml_ProseClass_pfCompress_elim(v_motive_94_, v_t_boxed_98_, v_h_96_, v_pfCompress_97_);
lean_dec(v_pfCompress_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim___redArg(lean_object* v_dlAuthored_100_){
_start:
{
lean_inc(v_dlAuthored_100_);
return v_dlAuthored_100_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim___redArg___boxed(lean_object* v_dlAuthored_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim___redArg(v_dlAuthored_101_);
lean_dec(v_dlAuthored_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim(lean_object* v_motive_103_, uint8_t v_t_104_, lean_object* v_h_105_, lean_object* v_dlAuthored_106_){
_start:
{
lean_inc(v_dlAuthored_106_);
return v_dlAuthored_106_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim___boxed(lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_dlAuthored_110_){
_start:
{
uint8_t v_t_boxed_111_; lean_object* v_res_112_; 
v_t_boxed_111_ = lean_unbox(v_t_108_);
v_res_112_ = lp_lean_x2dftml_LeanFtml_ProseClass_dlAuthored_elim(v_motive_107_, v_t_boxed_111_, v_h_109_, v_dlAuthored_110_);
lean_dec(v_dlAuthored_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim___redArg(lean_object* v_clIdentity_113_){
_start:
{
lean_inc(v_clIdentity_113_);
return v_clIdentity_113_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim___redArg___boxed(lean_object* v_clIdentity_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim___redArg(v_clIdentity_114_);
lean_dec(v_clIdentity_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim(lean_object* v_motive_116_, uint8_t v_t_117_, lean_object* v_h_118_, lean_object* v_clIdentity_119_){
_start:
{
lean_inc(v_clIdentity_119_);
return v_clIdentity_119_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim___boxed(lean_object* v_motive_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_clIdentity_123_){
_start:
{
uint8_t v_t_boxed_124_; lean_object* v_res_125_; 
v_t_boxed_124_ = lean_unbox(v_t_121_);
v_res_125_ = lp_lean_x2dftml_LeanFtml_ProseClass_clIdentity_elim(v_motive_120_, v_t_boxed_124_, v_h_122_, v_clIdentity_123_);
lean_dec(v_clIdentity_123_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim___redArg(lean_object* v_clJoin_126_){
_start:
{
lean_inc(v_clJoin_126_);
return v_clJoin_126_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim___redArg___boxed(lean_object* v_clJoin_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim___redArg(v_clJoin_127_);
lean_dec(v_clJoin_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim(lean_object* v_motive_129_, uint8_t v_t_130_, lean_object* v_h_131_, lean_object* v_clJoin_132_){
_start:
{
lean_inc(v_clJoin_132_);
return v_clJoin_132_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim___boxed(lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_clJoin_136_){
_start:
{
uint8_t v_t_boxed_137_; lean_object* v_res_138_; 
v_t_boxed_137_ = lean_unbox(v_t_134_);
v_res_138_ = lp_lean_x2dftml_LeanFtml_ProseClass_clJoin_elim(v_motive_133_, v_t_boxed_137_, v_h_135_, v_clJoin_136_);
lean_dec(v_clJoin_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim___redArg(lean_object* v_clDivOpen_139_){
_start:
{
lean_inc(v_clDivOpen_139_);
return v_clDivOpen_139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim___redArg___boxed(lean_object* v_clDivOpen_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim___redArg(v_clDivOpen_140_);
lean_dec(v_clDivOpen_140_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim(lean_object* v_motive_142_, uint8_t v_t_143_, lean_object* v_h_144_, lean_object* v_clDivOpen_145_){
_start:
{
lean_inc(v_clDivOpen_145_);
return v_clDivOpen_145_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim___boxed(lean_object* v_motive_146_, lean_object* v_t_147_, lean_object* v_h_148_, lean_object* v_clDivOpen_149_){
_start:
{
uint8_t v_t_boxed_150_; lean_object* v_res_151_; 
v_t_boxed_150_ = lean_unbox(v_t_147_);
v_res_151_ = lp_lean_x2dftml_LeanFtml_ProseClass_clDivOpen_elim(v_motive_146_, v_t_boxed_150_, v_h_148_, v_clDivOpen_149_);
lean_dec(v_clDivOpen_149_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim___redArg(lean_object* v_clTokenized_152_){
_start:
{
lean_inc(v_clTokenized_152_);
return v_clTokenized_152_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim___redArg___boxed(lean_object* v_clTokenized_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim___redArg(v_clTokenized_153_);
lean_dec(v_clTokenized_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim(lean_object* v_motive_155_, uint8_t v_t_156_, lean_object* v_h_157_, lean_object* v_clTokenized_158_){
_start:
{
lean_inc(v_clTokenized_158_);
return v_clTokenized_158_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim___boxed(lean_object* v_motive_159_, lean_object* v_t_160_, lean_object* v_h_161_, lean_object* v_clTokenized_162_){
_start:
{
uint8_t v_t_boxed_163_; lean_object* v_res_164_; 
v_t_boxed_163_ = lean_unbox(v_t_160_);
v_res_164_ = lp_lean_x2dftml_LeanFtml_ProseClass_clTokenized_elim(v_motive_159_, v_t_boxed_163_, v_h_161_, v_clTokenized_162_);
lean_dec(v_clTokenized_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim___redArg(lean_object* v_tnNewline_165_){
_start:
{
lean_inc(v_tnNewline_165_);
return v_tnNewline_165_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim___redArg___boxed(lean_object* v_tnNewline_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim___redArg(v_tnNewline_166_);
lean_dec(v_tnNewline_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim(lean_object* v_motive_168_, uint8_t v_t_169_, lean_object* v_h_170_, lean_object* v_tnNewline_171_){
_start:
{
lean_inc(v_tnNewline_171_);
return v_tnNewline_171_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim___boxed(lean_object* v_motive_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_tnNewline_175_){
_start:
{
uint8_t v_t_boxed_176_; lean_object* v_res_177_; 
v_t_boxed_176_ = lean_unbox(v_t_173_);
v_res_177_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnNewline_elim(v_motive_172_, v_t_boxed_176_, v_h_174_, v_tnNewline_175_);
lean_dec(v_tnNewline_175_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim___redArg(lean_object* v_tnFold_178_){
_start:
{
lean_inc(v_tnFold_178_);
return v_tnFold_178_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim___redArg___boxed(lean_object* v_tnFold_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim___redArg(v_tnFold_179_);
lean_dec(v_tnFold_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim(lean_object* v_motive_181_, uint8_t v_t_182_, lean_object* v_h_183_, lean_object* v_tnFold_184_){
_start:
{
lean_inc(v_tnFold_184_);
return v_tnFold_184_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim___boxed(lean_object* v_motive_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_tnFold_188_){
_start:
{
uint8_t v_t_boxed_189_; lean_object* v_res_190_; 
v_t_boxed_189_ = lean_unbox(v_t_186_);
v_res_190_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnFold_elim(v_motive_185_, v_t_boxed_189_, v_h_187_, v_tnFold_188_);
lean_dec(v_tnFold_188_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim___redArg(lean_object* v_tnColorStart_191_){
_start:
{
lean_inc(v_tnColorStart_191_);
return v_tnColorStart_191_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim___redArg___boxed(lean_object* v_tnColorStart_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim___redArg(v_tnColorStart_192_);
lean_dec(v_tnColorStart_192_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim(lean_object* v_motive_194_, uint8_t v_t_195_, lean_object* v_h_196_, lean_object* v_tnColorStart_197_){
_start:
{
lean_inc(v_tnColorStart_197_);
return v_tnColorStart_197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim___boxed(lean_object* v_motive_198_, lean_object* v_t_199_, lean_object* v_h_200_, lean_object* v_tnColorStart_201_){
_start:
{
uint8_t v_t_boxed_202_; lean_object* v_res_203_; 
v_t_boxed_202_ = lean_unbox(v_t_199_);
v_res_203_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnColorStart_elim(v_motive_198_, v_t_boxed_202_, v_h_200_, v_tnColorStart_201_);
lean_dec(v_tnColorStart_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim___redArg(lean_object* v_tnColorEnd_204_){
_start:
{
lean_inc(v_tnColorEnd_204_);
return v_tnColorEnd_204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim___redArg___boxed(lean_object* v_tnColorEnd_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim___redArg(v_tnColorEnd_205_);
lean_dec(v_tnColorEnd_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim(lean_object* v_motive_207_, uint8_t v_t_208_, lean_object* v_h_209_, lean_object* v_tnColorEnd_210_){
_start:
{
lean_inc(v_tnColorEnd_210_);
return v_tnColorEnd_210_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim___boxed(lean_object* v_motive_211_, lean_object* v_t_212_, lean_object* v_h_213_, lean_object* v_tnColorEnd_214_){
_start:
{
uint8_t v_t_boxed_215_; lean_object* v_res_216_; 
v_t_boxed_215_ = lean_unbox(v_t_212_);
v_res_216_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnColorEnd_elim(v_motive_211_, v_t_boxed_215_, v_h_213_, v_tnColorEnd_214_);
lean_dec(v_tnColorEnd_214_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim___redArg(lean_object* v_tnEdgeTrim_217_){
_start:
{
lean_inc(v_tnEdgeTrim_217_);
return v_tnEdgeTrim_217_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim___redArg___boxed(lean_object* v_tnEdgeTrim_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim___redArg(v_tnEdgeTrim_218_);
lean_dec(v_tnEdgeTrim_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim(lean_object* v_motive_220_, uint8_t v_t_221_, lean_object* v_h_222_, lean_object* v_tnEdgeTrim_223_){
_start:
{
lean_inc(v_tnEdgeTrim_223_);
return v_tnEdgeTrim_223_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim___boxed(lean_object* v_motive_224_, lean_object* v_t_225_, lean_object* v_h_226_, lean_object* v_tnEdgeTrim_227_){
_start:
{
uint8_t v_t_boxed_228_; lean_object* v_res_229_; 
v_t_boxed_228_ = lean_unbox(v_t_225_);
v_res_229_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnEdgeTrim_elim(v_motive_224_, v_t_boxed_228_, v_h_226_, v_tnEdgeTrim_227_);
lean_dec(v_tnEdgeTrim_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim___redArg(lean_object* v_tnSecondFold_230_){
_start:
{
lean_inc(v_tnSecondFold_230_);
return v_tnSecondFold_230_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim___redArg___boxed(lean_object* v_tnSecondFold_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim___redArg(v_tnSecondFold_231_);
lean_dec(v_tnSecondFold_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim(lean_object* v_motive_233_, uint8_t v_t_234_, lean_object* v_h_235_, lean_object* v_tnSecondFold_236_){
_start:
{
lean_inc(v_tnSecondFold_236_);
return v_tnSecondFold_236_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim___boxed(lean_object* v_motive_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_tnSecondFold_240_){
_start:
{
uint8_t v_t_boxed_241_; lean_object* v_res_242_; 
v_t_boxed_241_ = lean_unbox(v_t_238_);
v_res_242_ = lp_lean_x2dftml_LeanFtml_ProseClass_tnSecondFold_elim(v_motive_237_, v_t_boxed_241_, v_h_239_, v_tnSecondFold_240_);
lean_dec(v_tnSecondFold_240_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim___redArg(lean_object* v_tyQuoteDouble_243_){
_start:
{
lean_inc(v_tyQuoteDouble_243_);
return v_tyQuoteDouble_243_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim___redArg___boxed(lean_object* v_tyQuoteDouble_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim___redArg(v_tyQuoteDouble_244_);
lean_dec(v_tyQuoteDouble_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim(lean_object* v_motive_246_, uint8_t v_t_247_, lean_object* v_h_248_, lean_object* v_tyQuoteDouble_249_){
_start:
{
lean_inc(v_tyQuoteDouble_249_);
return v_tyQuoteDouble_249_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim___boxed(lean_object* v_motive_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_tyQuoteDouble_253_){
_start:
{
uint8_t v_t_boxed_254_; lean_object* v_res_255_; 
v_t_boxed_254_ = lean_unbox(v_t_251_);
v_res_255_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteDouble_elim(v_motive_250_, v_t_boxed_254_, v_h_252_, v_tyQuoteDouble_253_);
lean_dec(v_tyQuoteDouble_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim___redArg(lean_object* v_tyQuoteComma_256_){
_start:
{
lean_inc(v_tyQuoteComma_256_);
return v_tyQuoteComma_256_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim___redArg___boxed(lean_object* v_tyQuoteComma_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim___redArg(v_tyQuoteComma_257_);
lean_dec(v_tyQuoteComma_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim(lean_object* v_motive_259_, uint8_t v_t_260_, lean_object* v_h_261_, lean_object* v_tyQuoteComma_262_){
_start:
{
lean_inc(v_tyQuoteComma_262_);
return v_tyQuoteComma_262_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim___boxed(lean_object* v_motive_263_, lean_object* v_t_264_, lean_object* v_h_265_, lean_object* v_tyQuoteComma_266_){
_start:
{
uint8_t v_t_boxed_267_; lean_object* v_res_268_; 
v_t_boxed_267_ = lean_unbox(v_t_264_);
v_res_268_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteComma_elim(v_motive_263_, v_t_boxed_267_, v_h_265_, v_tyQuoteComma_266_);
lean_dec(v_tyQuoteComma_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim___redArg(lean_object* v_tyQuoteSingle_269_){
_start:
{
lean_inc(v_tyQuoteSingle_269_);
return v_tyQuoteSingle_269_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim___redArg___boxed(lean_object* v_tyQuoteSingle_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim___redArg(v_tyQuoteSingle_270_);
lean_dec(v_tyQuoteSingle_270_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim(lean_object* v_motive_272_, uint8_t v_t_273_, lean_object* v_h_274_, lean_object* v_tyQuoteSingle_275_){
_start:
{
lean_inc(v_tyQuoteSingle_275_);
return v_tyQuoteSingle_275_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim___boxed(lean_object* v_motive_276_, lean_object* v_t_277_, lean_object* v_h_278_, lean_object* v_tyQuoteSingle_279_){
_start:
{
uint8_t v_t_boxed_280_; lean_object* v_res_281_; 
v_t_boxed_280_ = lean_unbox(v_t_277_);
v_res_281_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyQuoteSingle_elim(v_motive_276_, v_t_boxed_280_, v_h_278_, v_tyQuoteSingle_279_);
lean_dec(v_tyQuoteSingle_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim___redArg(lean_object* v_tyLeftAngle_282_){
_start:
{
lean_inc(v_tyLeftAngle_282_);
return v_tyLeftAngle_282_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim___redArg___boxed(lean_object* v_tyLeftAngle_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim___redArg(v_tyLeftAngle_283_);
lean_dec(v_tyLeftAngle_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim(lean_object* v_motive_285_, uint8_t v_t_286_, lean_object* v_h_287_, lean_object* v_tyLeftAngle_288_){
_start:
{
lean_inc(v_tyLeftAngle_288_);
return v_tyLeftAngle_288_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim___boxed(lean_object* v_motive_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_tyLeftAngle_292_){
_start:
{
uint8_t v_t_boxed_293_; lean_object* v_res_294_; 
v_t_boxed_293_ = lean_unbox(v_t_290_);
v_res_294_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyLeftAngle_elim(v_motive_289_, v_t_boxed_293_, v_h_291_, v_tyLeftAngle_292_);
lean_dec(v_tyLeftAngle_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim___redArg(lean_object* v_tyRightAngle_295_){
_start:
{
lean_inc(v_tyRightAngle_295_);
return v_tyRightAngle_295_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim___redArg___boxed(lean_object* v_tyRightAngle_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim___redArg(v_tyRightAngle_296_);
lean_dec(v_tyRightAngle_296_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim(lean_object* v_motive_298_, uint8_t v_t_299_, lean_object* v_h_300_, lean_object* v_tyRightAngle_301_){
_start:
{
lean_inc(v_tyRightAngle_301_);
return v_tyRightAngle_301_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim___boxed(lean_object* v_motive_302_, lean_object* v_t_303_, lean_object* v_h_304_, lean_object* v_tyRightAngle_305_){
_start:
{
uint8_t v_t_boxed_306_; lean_object* v_res_307_; 
v_t_boxed_306_ = lean_unbox(v_t_303_);
v_res_307_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyRightAngle_elim(v_motive_302_, v_t_boxed_306_, v_h_304_, v_tyRightAngle_305_);
lean_dec(v_tyRightAngle_305_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim___redArg(lean_object* v_tyNumSpace_308_){
_start:
{
lean_inc(v_tyNumSpace_308_);
return v_tyNumSpace_308_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim___redArg___boxed(lean_object* v_tyNumSpace_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim___redArg(v_tyNumSpace_309_);
lean_dec(v_tyNumSpace_309_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim(lean_object* v_motive_311_, uint8_t v_t_312_, lean_object* v_h_313_, lean_object* v_tyNumSpace_314_){
_start:
{
lean_inc(v_tyNumSpace_314_);
return v_tyNumSpace_314_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim___boxed(lean_object* v_motive_315_, lean_object* v_t_316_, lean_object* v_h_317_, lean_object* v_tyNumSpace_318_){
_start:
{
uint8_t v_t_boxed_319_; lean_object* v_res_320_; 
v_t_boxed_319_ = lean_unbox(v_t_316_);
v_res_320_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyNumSpace_elim(v_motive_315_, v_t_boxed_319_, v_h_317_, v_tyNumSpace_318_);
lean_dec(v_tyNumSpace_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim___redArg(lean_object* v_tyUnit_321_){
_start:
{
lean_inc(v_tyUnit_321_);
return v_tyUnit_321_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim___redArg___boxed(lean_object* v_tyUnit_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim___redArg(v_tyUnit_322_);
lean_dec(v_tyUnit_322_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim(lean_object* v_motive_324_, uint8_t v_t_325_, lean_object* v_h_326_, lean_object* v_tyUnit_327_){
_start:
{
lean_inc(v_tyUnit_327_);
return v_tyUnit_327_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim___boxed(lean_object* v_motive_328_, lean_object* v_t_329_, lean_object* v_h_330_, lean_object* v_tyUnit_331_){
_start:
{
uint8_t v_t_boxed_332_; lean_object* v_res_333_; 
v_t_boxed_332_ = lean_unbox(v_t_329_);
v_res_333_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyUnit_elim(v_motive_328_, v_t_boxed_332_, v_h_330_, v_tyUnit_331_);
lean_dec(v_tyUnit_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim___redArg(lean_object* v_tyEllipsis_334_){
_start:
{
lean_inc(v_tyEllipsis_334_);
return v_tyEllipsis_334_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim___redArg___boxed(lean_object* v_tyEllipsis_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim___redArg(v_tyEllipsis_335_);
lean_dec(v_tyEllipsis_335_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim(lean_object* v_motive_337_, uint8_t v_t_338_, lean_object* v_h_339_, lean_object* v_tyEllipsis_340_){
_start:
{
lean_inc(v_tyEllipsis_340_);
return v_tyEllipsis_340_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim___boxed(lean_object* v_motive_341_, lean_object* v_t_342_, lean_object* v_h_343_, lean_object* v_tyEllipsis_344_){
_start:
{
uint8_t v_t_boxed_345_; lean_object* v_res_346_; 
v_t_boxed_345_ = lean_unbox(v_t_342_);
v_res_346_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyEllipsis_elim(v_motive_341_, v_t_boxed_345_, v_h_343_, v_tyEllipsis_344_);
lean_dec(v_tyEllipsis_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim___redArg(lean_object* v_tyDash2_347_){
_start:
{
lean_inc(v_tyDash2_347_);
return v_tyDash2_347_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim___redArg___boxed(lean_object* v_tyDash2_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim___redArg(v_tyDash2_348_);
lean_dec(v_tyDash2_348_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim(lean_object* v_motive_350_, uint8_t v_t_351_, lean_object* v_h_352_, lean_object* v_tyDash2_353_){
_start:
{
lean_inc(v_tyDash2_353_);
return v_tyDash2_353_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim___boxed(lean_object* v_motive_354_, lean_object* v_t_355_, lean_object* v_h_356_, lean_object* v_tyDash2_357_){
_start:
{
uint8_t v_t_boxed_358_; lean_object* v_res_359_; 
v_t_boxed_358_ = lean_unbox(v_t_355_);
v_res_359_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyDash2_elim(v_motive_354_, v_t_boxed_358_, v_h_356_, v_tyDash2_357_);
lean_dec(v_tyDash2_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim___redArg(lean_object* v_tyNone_360_){
_start:
{
lean_inc(v_tyNone_360_);
return v_tyNone_360_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim___redArg___boxed(lean_object* v_tyNone_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim___redArg(v_tyNone_361_);
lean_dec(v_tyNone_361_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim(lean_object* v_motive_363_, uint8_t v_t_364_, lean_object* v_h_365_, lean_object* v_tyNone_366_){
_start:
{
lean_inc(v_tyNone_366_);
return v_tyNone_366_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim___boxed(lean_object* v_motive_367_, lean_object* v_t_368_, lean_object* v_h_369_, lean_object* v_tyNone_370_){
_start:
{
uint8_t v_t_boxed_371_; lean_object* v_res_372_; 
v_t_boxed_371_ = lean_unbox(v_t_368_);
v_res_372_ = lp_lean_x2dftml_LeanFtml_ProseClass_tyNone_elim(v_motive_367_, v_t_boxed_371_, v_h_369_, v_tyNone_370_);
lean_dec(v_tyNone_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim___redArg(lean_object* v_pgEmpty_373_){
_start:
{
lean_inc(v_pgEmpty_373_);
return v_pgEmpty_373_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim___redArg___boxed(lean_object* v_pgEmpty_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim___redArg(v_pgEmpty_374_);
lean_dec(v_pgEmpty_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim(lean_object* v_motive_376_, uint8_t v_t_377_, lean_object* v_h_378_, lean_object* v_pgEmpty_379_){
_start:
{
lean_inc(v_pgEmpty_379_);
return v_pgEmpty_379_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim___boxed(lean_object* v_motive_380_, lean_object* v_t_381_, lean_object* v_h_382_, lean_object* v_pgEmpty_383_){
_start:
{
uint8_t v_t_boxed_384_; lean_object* v_res_385_; 
v_t_boxed_384_ = lean_unbox(v_t_381_);
v_res_385_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgEmpty_elim(v_motive_380_, v_t_boxed_384_, v_h_382_, v_pgEmpty_383_);
lean_dec(v_pgEmpty_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim___redArg(lean_object* v_pgScoredAnchor_386_){
_start:
{
lean_inc(v_pgScoredAnchor_386_);
return v_pgScoredAnchor_386_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim___redArg___boxed(lean_object* v_pgScoredAnchor_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim___redArg(v_pgScoredAnchor_387_);
lean_dec(v_pgScoredAnchor_387_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim(lean_object* v_motive_389_, uint8_t v_t_390_, lean_object* v_h_391_, lean_object* v_pgScoredAnchor_392_){
_start:
{
lean_inc(v_pgScoredAnchor_392_);
return v_pgScoredAnchor_392_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim___boxed(lean_object* v_motive_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_pgScoredAnchor_396_){
_start:
{
uint8_t v_t_boxed_397_; lean_object* v_res_398_; 
v_t_boxed_397_ = lean_unbox(v_t_394_);
v_res_398_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredAnchor_elim(v_motive_393_, v_t_boxed_397_, v_h_395_, v_pgScoredAnchor_396_);
lean_dec(v_pgScoredAnchor_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim___redArg(lean_object* v_pgScoredSpan_399_){
_start:
{
lean_inc(v_pgScoredSpan_399_);
return v_pgScoredSpan_399_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim___redArg___boxed(lean_object* v_pgScoredSpan_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim___redArg(v_pgScoredSpan_400_);
lean_dec(v_pgScoredSpan_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim(lean_object* v_motive_402_, uint8_t v_t_403_, lean_object* v_h_404_, lean_object* v_pgScoredSpan_405_){
_start:
{
lean_inc(v_pgScoredSpan_405_);
return v_pgScoredSpan_405_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim___boxed(lean_object* v_motive_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_pgScoredSpan_409_){
_start:
{
uint8_t v_t_boxed_410_; lean_object* v_res_411_; 
v_t_boxed_410_ = lean_unbox(v_t_407_);
v_res_411_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgScoredSpan_elim(v_motive_406_, v_t_boxed_410_, v_h_408_, v_pgScoredSpan_409_);
lean_dec(v_pgScoredSpan_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim___redArg(lean_object* v_pgSkip_412_){
_start:
{
lean_inc(v_pgSkip_412_);
return v_pgSkip_412_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim___redArg___boxed(lean_object* v_pgSkip_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim___redArg(v_pgSkip_413_);
lean_dec(v_pgSkip_413_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim(lean_object* v_motive_415_, uint8_t v_t_416_, lean_object* v_h_417_, lean_object* v_pgSkip_418_){
_start:
{
lean_inc(v_pgSkip_418_);
return v_pgSkip_418_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim___boxed(lean_object* v_motive_419_, lean_object* v_t_420_, lean_object* v_h_421_, lean_object* v_pgSkip_422_){
_start:
{
uint8_t v_t_boxed_423_; lean_object* v_res_424_; 
v_t_boxed_423_ = lean_unbox(v_t_420_);
v_res_424_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgSkip_elim(v_motive_419_, v_t_boxed_423_, v_h_421_, v_pgSkip_422_);
lean_dec(v_pgSkip_422_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim___redArg(lean_object* v_pgWrap_425_){
_start:
{
lean_inc(v_pgWrap_425_);
return v_pgWrap_425_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim___redArg___boxed(lean_object* v_pgWrap_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim___redArg(v_pgWrap_426_);
lean_dec(v_pgWrap_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim(lean_object* v_motive_428_, uint8_t v_t_429_, lean_object* v_h_430_, lean_object* v_pgWrap_431_){
_start:
{
lean_inc(v_pgWrap_431_);
return v_pgWrap_431_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim___boxed(lean_object* v_motive_432_, lean_object* v_t_433_, lean_object* v_h_434_, lean_object* v_pgWrap_435_){
_start:
{
uint8_t v_t_boxed_436_; lean_object* v_res_437_; 
v_t_boxed_436_ = lean_unbox(v_t_433_);
v_res_437_ = lp_lean_x2dftml_LeanFtml_ProseClass_pgWrap_elim(v_motive_432_, v_t_boxed_436_, v_h_434_, v_pgWrap_435_);
lean_dec(v_pgWrap_435_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim___redArg(lean_object* v_hzFire_438_){
_start:
{
lean_inc(v_hzFire_438_);
return v_hzFire_438_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim___redArg___boxed(lean_object* v_hzFire_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim___redArg(v_hzFire_439_);
lean_dec(v_hzFire_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim(lean_object* v_motive_441_, uint8_t v_t_442_, lean_object* v_h_443_, lean_object* v_hzFire_444_){
_start:
{
lean_inc(v_hzFire_444_);
return v_hzFire_444_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim___boxed(lean_object* v_motive_445_, lean_object* v_t_446_, lean_object* v_h_447_, lean_object* v_hzFire_448_){
_start:
{
uint8_t v_t_boxed_449_; lean_object* v_res_450_; 
v_t_boxed_449_ = lean_unbox(v_t_446_);
v_res_450_ = lp_lean_x2dftml_LeanFtml_ProseClass_hzFire_elim(v_motive_445_, v_t_boxed_449_, v_h_447_, v_hzFire_448_);
lean_dec(v_hzFire_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim___redArg(lean_object* v_hzLiteral_451_){
_start:
{
lean_inc(v_hzLiteral_451_);
return v_hzLiteral_451_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim___redArg___boxed(lean_object* v_hzLiteral_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim___redArg(v_hzLiteral_452_);
lean_dec(v_hzLiteral_452_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim(lean_object* v_motive_454_, uint8_t v_t_455_, lean_object* v_h_456_, lean_object* v_hzLiteral_457_){
_start:
{
lean_inc(v_hzLiteral_457_);
return v_hzLiteral_457_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim___boxed(lean_object* v_motive_458_, lean_object* v_t_459_, lean_object* v_h_460_, lean_object* v_hzLiteral_461_){
_start:
{
uint8_t v_t_boxed_462_; lean_object* v_res_463_; 
v_t_boxed_462_ = lean_unbox(v_t_459_);
v_res_463_ = lp_lean_x2dftml_LeanFtml_ProseClass_hzLiteral_elim(v_motive_458_, v_t_boxed_462_, v_h_460_, v_hzLiteral_461_);
lean_dec(v_hzLiteral_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim___redArg(lean_object* v_spFire_464_){
_start:
{
lean_inc(v_spFire_464_);
return v_spFire_464_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim___redArg___boxed(lean_object* v_spFire_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim___redArg(v_spFire_465_);
lean_dec(v_spFire_465_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim(lean_object* v_motive_467_, uint8_t v_t_468_, lean_object* v_h_469_, lean_object* v_spFire_470_){
_start:
{
lean_inc(v_spFire_470_);
return v_spFire_470_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim___boxed(lean_object* v_motive_471_, lean_object* v_t_472_, lean_object* v_h_473_, lean_object* v_spFire_474_){
_start:
{
uint8_t v_t_boxed_475_; lean_object* v_res_476_; 
v_t_boxed_475_ = lean_unbox(v_t_472_);
v_res_476_ = lp_lean_x2dftml_LeanFtml_ProseClass_spFire_elim(v_motive_471_, v_t_boxed_475_, v_h_473_, v_spFire_474_);
lean_dec(v_spFire_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim___redArg(lean_object* v_spLiteral_477_){
_start:
{
lean_inc(v_spLiteral_477_);
return v_spLiteral_477_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim___redArg___boxed(lean_object* v_spLiteral_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim___redArg(v_spLiteral_478_);
lean_dec(v_spLiteral_478_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim(lean_object* v_motive_480_, uint8_t v_t_481_, lean_object* v_h_482_, lean_object* v_spLiteral_483_){
_start:
{
lean_inc(v_spLiteral_483_);
return v_spLiteral_483_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim___boxed(lean_object* v_motive_484_, lean_object* v_t_485_, lean_object* v_h_486_, lean_object* v_spLiteral_487_){
_start:
{
uint8_t v_t_boxed_488_; lean_object* v_res_489_; 
v_t_boxed_488_ = lean_unbox(v_t_485_);
v_res_489_ = lp_lean_x2dftml_LeanFtml_ProseClass_spLiteral_elim(v_motive_484_, v_t_boxed_488_, v_h_486_, v_spLiteral_487_);
lean_dec(v_spLiteral_487_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim___redArg(lean_object* v_cfBoth_490_){
_start:
{
lean_inc(v_cfBoth_490_);
return v_cfBoth_490_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim___redArg___boxed(lean_object* v_cfBoth_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim___redArg(v_cfBoth_491_);
lean_dec(v_cfBoth_491_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim(lean_object* v_motive_493_, uint8_t v_t_494_, lean_object* v_h_495_, lean_object* v_cfBoth_496_){
_start:
{
lean_inc(v_cfBoth_496_);
return v_cfBoth_496_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim___boxed(lean_object* v_motive_497_, lean_object* v_t_498_, lean_object* v_h_499_, lean_object* v_cfBoth_500_){
_start:
{
uint8_t v_t_boxed_501_; lean_object* v_res_502_; 
v_t_boxed_501_ = lean_unbox(v_t_498_);
v_res_502_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfBoth_elim(v_motive_497_, v_t_boxed_501_, v_h_499_, v_cfBoth_500_);
lean_dec(v_cfBoth_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim___redArg(lean_object* v_cfRight_503_){
_start:
{
lean_inc(v_cfRight_503_);
return v_cfRight_503_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim___redArg___boxed(lean_object* v_cfRight_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim___redArg(v_cfRight_504_);
lean_dec(v_cfRight_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim(lean_object* v_motive_506_, uint8_t v_t_507_, lean_object* v_h_508_, lean_object* v_cfRight_509_){
_start:
{
lean_inc(v_cfRight_509_);
return v_cfRight_509_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim___boxed(lean_object* v_motive_510_, lean_object* v_t_511_, lean_object* v_h_512_, lean_object* v_cfRight_513_){
_start:
{
uint8_t v_t_boxed_514_; lean_object* v_res_515_; 
v_t_boxed_514_ = lean_unbox(v_t_511_);
v_res_515_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfRight_elim(v_motive_510_, v_t_boxed_514_, v_h_512_, v_cfRight_513_);
lean_dec(v_cfRight_513_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim___redArg(lean_object* v_cfLeft_516_){
_start:
{
lean_inc(v_cfLeft_516_);
return v_cfLeft_516_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim___redArg___boxed(lean_object* v_cfLeft_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim___redArg(v_cfLeft_517_);
lean_dec(v_cfLeft_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim(lean_object* v_motive_519_, uint8_t v_t_520_, lean_object* v_h_521_, lean_object* v_cfLeft_522_){
_start:
{
lean_inc(v_cfLeft_522_);
return v_cfLeft_522_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim___boxed(lean_object* v_motive_523_, lean_object* v_t_524_, lean_object* v_h_525_, lean_object* v_cfLeft_526_){
_start:
{
uint8_t v_t_boxed_527_; lean_object* v_res_528_; 
v_t_boxed_527_ = lean_unbox(v_t_524_);
v_res_528_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfLeft_elim(v_motive_523_, v_t_boxed_527_, v_h_525_, v_cfLeft_526_);
lean_dec(v_cfLeft_526_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim___redArg(lean_object* v_cfDoubleSide_529_){
_start:
{
lean_inc(v_cfDoubleSide_529_);
return v_cfDoubleSide_529_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim___redArg___boxed(lean_object* v_cfDoubleSide_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim___redArg(v_cfDoubleSide_530_);
lean_dec(v_cfDoubleSide_530_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim(lean_object* v_motive_532_, uint8_t v_t_533_, lean_object* v_h_534_, lean_object* v_cfDoubleSide_535_){
_start:
{
lean_inc(v_cfDoubleSide_535_);
return v_cfDoubleSide_535_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim___boxed(lean_object* v_motive_536_, lean_object* v_t_537_, lean_object* v_h_538_, lean_object* v_cfDoubleSide_539_){
_start:
{
uint8_t v_t_boxed_540_; lean_object* v_res_541_; 
v_t_boxed_540_ = lean_unbox(v_t_537_);
v_res_541_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfDoubleSide_elim(v_motive_536_, v_t_boxed_540_, v_h_538_, v_cfDoubleSide_539_);
lean_dec(v_cfDoubleSide_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim___redArg(lean_object* v_cfLiteral_542_){
_start:
{
lean_inc(v_cfLiteral_542_);
return v_cfLiteral_542_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim___redArg___boxed(lean_object* v_cfLiteral_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim___redArg(v_cfLiteral_543_);
lean_dec(v_cfLiteral_543_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim(lean_object* v_motive_545_, uint8_t v_t_546_, lean_object* v_h_547_, lean_object* v_cfLiteral_548_){
_start:
{
lean_inc(v_cfLiteral_548_);
return v_cfLiteral_548_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim___boxed(lean_object* v_motive_549_, lean_object* v_t_550_, lean_object* v_h_551_, lean_object* v_cfLiteral_552_){
_start:
{
uint8_t v_t_boxed_553_; lean_object* v_res_554_; 
v_t_boxed_553_ = lean_unbox(v_t_550_);
v_res_554_ = lp_lean_x2dftml_LeanFtml_ProseClass_cfLiteral_elim(v_motive_549_, v_t_boxed_553_, v_h_551_, v_cfLiteral_552_);
lean_dec(v_cfLiteral_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim___redArg(lean_object* v_brFire_555_){
_start:
{
lean_inc(v_brFire_555_);
return v_brFire_555_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim___redArg___boxed(lean_object* v_brFire_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim___redArg(v_brFire_556_);
lean_dec(v_brFire_556_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim(lean_object* v_motive_558_, uint8_t v_t_559_, lean_object* v_h_560_, lean_object* v_brFire_561_){
_start:
{
lean_inc(v_brFire_561_);
return v_brFire_561_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim___boxed(lean_object* v_motive_562_, lean_object* v_t_563_, lean_object* v_h_564_, lean_object* v_brFire_565_){
_start:
{
uint8_t v_t_boxed_566_; lean_object* v_res_567_; 
v_t_boxed_566_ = lean_unbox(v_t_563_);
v_res_567_ = lp_lean_x2dftml_LeanFtml_ProseClass_brFire_elim(v_motive_562_, v_t_boxed_566_, v_h_564_, v_brFire_565_);
lean_dec(v_brFire_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim___redArg(lean_object* v_brLiteral_568_){
_start:
{
lean_inc(v_brLiteral_568_);
return v_brLiteral_568_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim___redArg___boxed(lean_object* v_brLiteral_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim___redArg(v_brLiteral_569_);
lean_dec(v_brLiteral_569_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim(lean_object* v_motive_571_, uint8_t v_t_572_, lean_object* v_h_573_, lean_object* v_brLiteral_574_){
_start:
{
lean_inc(v_brLiteral_574_);
return v_brLiteral_574_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim___boxed(lean_object* v_motive_575_, lean_object* v_t_576_, lean_object* v_h_577_, lean_object* v_brLiteral_578_){
_start:
{
uint8_t v_t_boxed_579_; lean_object* v_res_580_; 
v_t_boxed_579_ = lean_unbox(v_t_576_);
v_res_580_ = lp_lean_x2dftml_LeanFtml_ProseClass_brLiteral_elim(v_motive_575_, v_t_boxed_579_, v_h_577_, v_brLiteral_578_);
lean_dec(v_brLiteral_578_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim___redArg(lean_object* v_ctFire_581_){
_start:
{
lean_inc(v_ctFire_581_);
return v_ctFire_581_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim___redArg___boxed(lean_object* v_ctFire_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim___redArg(v_ctFire_582_);
lean_dec(v_ctFire_582_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim(lean_object* v_motive_584_, uint8_t v_t_585_, lean_object* v_h_586_, lean_object* v_ctFire_587_){
_start:
{
lean_inc(v_ctFire_587_);
return v_ctFire_587_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim___boxed(lean_object* v_motive_588_, lean_object* v_t_589_, lean_object* v_h_590_, lean_object* v_ctFire_591_){
_start:
{
uint8_t v_t_boxed_592_; lean_object* v_res_593_; 
v_t_boxed_592_ = lean_unbox(v_t_589_);
v_res_593_ = lp_lean_x2dftml_LeanFtml_ProseClass_ctFire_elim(v_motive_588_, v_t_boxed_592_, v_h_590_, v_ctFire_591_);
lean_dec(v_ctFire_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim___redArg(lean_object* v_ctLiteral_594_){
_start:
{
lean_inc(v_ctLiteral_594_);
return v_ctLiteral_594_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim___redArg___boxed(lean_object* v_ctLiteral_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim___redArg(v_ctLiteral_595_);
lean_dec(v_ctLiteral_595_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim(lean_object* v_motive_597_, uint8_t v_t_598_, lean_object* v_h_599_, lean_object* v_ctLiteral_600_){
_start:
{
lean_inc(v_ctLiteral_600_);
return v_ctLiteral_600_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim___boxed(lean_object* v_motive_601_, lean_object* v_t_602_, lean_object* v_h_603_, lean_object* v_ctLiteral_604_){
_start:
{
uint8_t v_t_boxed_605_; lean_object* v_res_606_; 
v_t_boxed_605_ = lean_unbox(v_t_602_);
v_res_606_ = lp_lean_x2dftml_LeanFtml_ProseClass_ctLiteral_elim(v_motive_601_, v_t_boxed_605_, v_h_603_, v_ctLiteral_604_);
lean_dec(v_ctLiteral_604_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim___redArg(lean_object* v_dpJoin_607_){
_start:
{
lean_inc(v_dpJoin_607_);
return v_dpJoin_607_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim___redArg___boxed(lean_object* v_dpJoin_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim___redArg(v_dpJoin_608_);
lean_dec(v_dpJoin_608_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim(lean_object* v_motive_610_, uint8_t v_t_611_, lean_object* v_h_612_, lean_object* v_dpJoin_613_){
_start:
{
lean_inc(v_dpJoin_613_);
return v_dpJoin_613_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim___boxed(lean_object* v_motive_614_, lean_object* v_t_615_, lean_object* v_h_616_, lean_object* v_dpJoin_617_){
_start:
{
uint8_t v_t_boxed_618_; lean_object* v_res_619_; 
v_t_boxed_618_ = lean_unbox(v_t_615_);
v_res_619_ = lp_lean_x2dftml_LeanFtml_ProseClass_dpJoin_elim(v_motive_614_, v_t_boxed_618_, v_h_616_, v_dpJoin_617_);
lean_dec(v_dpJoin_617_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim___redArg(lean_object* v_dpLiteral_620_){
_start:
{
lean_inc(v_dpLiteral_620_);
return v_dpLiteral_620_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim___redArg___boxed(lean_object* v_dpLiteral_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim___redArg(v_dpLiteral_621_);
lean_dec(v_dpLiteral_621_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim(lean_object* v_motive_623_, uint8_t v_t_624_, lean_object* v_h_625_, lean_object* v_dpLiteral_626_){
_start:
{
lean_inc(v_dpLiteral_626_);
return v_dpLiteral_626_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim___boxed(lean_object* v_motive_627_, lean_object* v_t_628_, lean_object* v_h_629_, lean_object* v_dpLiteral_630_){
_start:
{
uint8_t v_t_boxed_631_; lean_object* v_res_632_; 
v_t_boxed_631_ = lean_unbox(v_t_628_);
v_res_632_ = lp_lean_x2dftml_LeanFtml_ProseClass_dpLiteral_elim(v_motive_627_, v_t_boxed_631_, v_h_629_, v_dpLiteral_630_);
lean_dec(v_dpLiteral_630_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim___redArg(lean_object* v_daCenter_633_){
_start:
{
lean_inc(v_daCenter_633_);
return v_daCenter_633_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim___redArg___boxed(lean_object* v_daCenter_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim___redArg(v_daCenter_634_);
lean_dec(v_daCenter_634_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim(lean_object* v_motive_636_, uint8_t v_t_637_, lean_object* v_h_638_, lean_object* v_daCenter_639_){
_start:
{
lean_inc(v_daCenter_639_);
return v_daCenter_639_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim___boxed(lean_object* v_motive_640_, lean_object* v_t_641_, lean_object* v_h_642_, lean_object* v_daCenter_643_){
_start:
{
uint8_t v_t_boxed_644_; lean_object* v_res_645_; 
v_t_boxed_644_ = lean_unbox(v_t_641_);
v_res_645_ = lp_lean_x2dftml_LeanFtml_ProseClass_daCenter_elim(v_motive_640_, v_t_boxed_644_, v_h_642_, v_daCenter_643_);
lean_dec(v_daCenter_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim___redArg(lean_object* v_daLeft_646_){
_start:
{
lean_inc(v_daLeft_646_);
return v_daLeft_646_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim___redArg___boxed(lean_object* v_daLeft_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim___redArg(v_daLeft_647_);
lean_dec(v_daLeft_647_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim(lean_object* v_motive_649_, uint8_t v_t_650_, lean_object* v_h_651_, lean_object* v_daLeft_652_){
_start:
{
lean_inc(v_daLeft_652_);
return v_daLeft_652_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim___boxed(lean_object* v_motive_653_, lean_object* v_t_654_, lean_object* v_h_655_, lean_object* v_daLeft_656_){
_start:
{
uint8_t v_t_boxed_657_; lean_object* v_res_658_; 
v_t_boxed_657_ = lean_unbox(v_t_654_);
v_res_658_ = lp_lean_x2dftml_LeanFtml_ProseClass_daLeft_elim(v_motive_653_, v_t_boxed_657_, v_h_655_, v_daLeft_656_);
lean_dec(v_daLeft_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim___redArg(lean_object* v_daRight_659_){
_start:
{
lean_inc(v_daRight_659_);
return v_daRight_659_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim___redArg___boxed(lean_object* v_daRight_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim___redArg(v_daRight_660_);
lean_dec(v_daRight_660_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim(lean_object* v_motive_662_, uint8_t v_t_663_, lean_object* v_h_664_, lean_object* v_daRight_665_){
_start:
{
lean_inc(v_daRight_665_);
return v_daRight_665_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim___boxed(lean_object* v_motive_666_, lean_object* v_t_667_, lean_object* v_h_668_, lean_object* v_daRight_669_){
_start:
{
uint8_t v_t_boxed_670_; lean_object* v_res_671_; 
v_t_boxed_670_ = lean_unbox(v_t_667_);
v_res_671_ = lp_lean_x2dftml_LeanFtml_ProseClass_daRight_elim(v_motive_666_, v_t_boxed_670_, v_h_668_, v_daRight_669_);
lean_dec(v_daRight_669_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim___redArg(lean_object* v_daJustify_672_){
_start:
{
lean_inc(v_daJustify_672_);
return v_daJustify_672_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim___redArg___boxed(lean_object* v_daJustify_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim___redArg(v_daJustify_673_);
lean_dec(v_daJustify_673_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim(lean_object* v_motive_675_, uint8_t v_t_676_, lean_object* v_h_677_, lean_object* v_daJustify_678_){
_start:
{
lean_inc(v_daJustify_678_);
return v_daJustify_678_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim___boxed(lean_object* v_motive_679_, lean_object* v_t_680_, lean_object* v_h_681_, lean_object* v_daJustify_682_){
_start:
{
uint8_t v_t_boxed_683_; lean_object* v_res_684_; 
v_t_boxed_683_ = lean_unbox(v_t_680_);
v_res_684_ = lp_lean_x2dftml_LeanFtml_ProseClass_daJustify_elim(v_motive_679_, v_t_boxed_683_, v_h_681_, v_daJustify_682_);
lean_dec(v_daJustify_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim___redArg(lean_object* v_daRepeat_685_){
_start:
{
lean_inc(v_daRepeat_685_);
return v_daRepeat_685_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim___redArg___boxed(lean_object* v_daRepeat_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim___redArg(v_daRepeat_686_);
lean_dec(v_daRepeat_686_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim(lean_object* v_motive_688_, uint8_t v_t_689_, lean_object* v_h_690_, lean_object* v_daRepeat_691_){
_start:
{
lean_inc(v_daRepeat_691_);
return v_daRepeat_691_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim___boxed(lean_object* v_motive_692_, lean_object* v_t_693_, lean_object* v_h_694_, lean_object* v_daRepeat_695_){
_start:
{
uint8_t v_t_boxed_696_; lean_object* v_res_697_; 
v_t_boxed_696_ = lean_unbox(v_t_693_);
v_res_697_ = lp_lean_x2dftml_LeanFtml_ProseClass_daRepeat_elim(v_motive_692_, v_t_boxed_696_, v_h_694_, v_daRepeat_695_);
lean_dec(v_daRepeat_695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim___redArg(lean_object* v_daLiteral_698_){
_start:
{
lean_inc(v_daLiteral_698_);
return v_daLiteral_698_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim___redArg___boxed(lean_object* v_daLiteral_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim___redArg(v_daLiteral_699_);
lean_dec(v_daLiteral_699_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim(lean_object* v_motive_701_, uint8_t v_t_702_, lean_object* v_h_703_, lean_object* v_daLiteral_704_){
_start:
{
lean_inc(v_daLiteral_704_);
return v_daLiteral_704_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim___boxed(lean_object* v_motive_705_, lean_object* v_t_706_, lean_object* v_h_707_, lean_object* v_daLiteral_708_){
_start:
{
uint8_t v_t_boxed_709_; lean_object* v_res_710_; 
v_t_boxed_709_ = lean_unbox(v_t_706_);
v_res_710_ = lp_lean_x2dftml_LeanFtml_ProseClass_daLiteral_elim(v_motive_705_, v_t_boxed_709_, v_h_707_, v_daLiteral_708_);
lean_dec(v_daLiteral_708_);
return v_res_710_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ProseClass_ofNat(lean_object* v_n_711_){
_start:
{
lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_712_ = lean_unsigned_to_nat(25u);
v___x_713_ = lean_nat_dec_le(v_n_711_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = lean_unsigned_to_nat(38u);
v___x_715_ = lean_nat_dec_le(v_n_711_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = lean_unsigned_to_nat(45u);
v___x_717_ = lean_nat_dec_le(v_n_711_, v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = lean_unsigned_to_nat(48u);
v___x_719_ = lean_nat_dec_le(v_n_711_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = lean_unsigned_to_nat(50u);
v___x_721_ = lean_nat_dec_le(v_n_711_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; uint8_t v___x_723_; 
v___x_722_ = lean_unsigned_to_nat(51u);
v___x_723_ = lean_nat_dec_le(v_n_711_, v___x_722_);
if (v___x_723_ == 0)
{
uint8_t v___x_724_; 
v___x_724_ = 52;
return v___x_724_;
}
else
{
uint8_t v___x_725_; 
v___x_725_ = 51;
return v___x_725_;
}
}
else
{
lean_object* v___x_726_; uint8_t v___x_727_; 
v___x_726_ = lean_unsigned_to_nat(49u);
v___x_727_ = lean_nat_dec_le(v_n_711_, v___x_726_);
if (v___x_727_ == 0)
{
uint8_t v___x_728_; 
v___x_728_ = 50;
return v___x_728_;
}
else
{
uint8_t v___x_729_; 
v___x_729_ = 49;
return v___x_729_;
}
}
}
else
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = lean_unsigned_to_nat(46u);
v___x_731_ = lean_nat_dec_le(v_n_711_, v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_732_ = lean_unsigned_to_nat(47u);
v___x_733_ = lean_nat_dec_le(v_n_711_, v___x_732_);
if (v___x_733_ == 0)
{
uint8_t v___x_734_; 
v___x_734_ = 48;
return v___x_734_;
}
else
{
uint8_t v___x_735_; 
v___x_735_ = 47;
return v___x_735_;
}
}
else
{
uint8_t v___x_736_; 
v___x_736_ = 46;
return v___x_736_;
}
}
}
else
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = lean_unsigned_to_nat(41u);
v___x_738_ = lean_nat_dec_le(v_n_711_, v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; uint8_t v___x_740_; 
v___x_739_ = lean_unsigned_to_nat(43u);
v___x_740_ = lean_nat_dec_le(v_n_711_, v___x_739_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_741_ = lean_unsigned_to_nat(44u);
v___x_742_ = lean_nat_dec_le(v_n_711_, v___x_741_);
if (v___x_742_ == 0)
{
uint8_t v___x_743_; 
v___x_743_ = 45;
return v___x_743_;
}
else
{
uint8_t v___x_744_; 
v___x_744_ = 44;
return v___x_744_;
}
}
else
{
lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_745_ = lean_unsigned_to_nat(42u);
v___x_746_ = lean_nat_dec_le(v_n_711_, v___x_745_);
if (v___x_746_ == 0)
{
uint8_t v___x_747_; 
v___x_747_ = 43;
return v___x_747_;
}
else
{
uint8_t v___x_748_; 
v___x_748_ = 42;
return v___x_748_;
}
}
}
else
{
lean_object* v___x_749_; uint8_t v___x_750_; 
v___x_749_ = lean_unsigned_to_nat(39u);
v___x_750_ = lean_nat_dec_le(v_n_711_, v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_751_ = lean_unsigned_to_nat(40u);
v___x_752_ = lean_nat_dec_le(v_n_711_, v___x_751_);
if (v___x_752_ == 0)
{
uint8_t v___x_753_; 
v___x_753_ = 41;
return v___x_753_;
}
else
{
uint8_t v___x_754_; 
v___x_754_ = 40;
return v___x_754_;
}
}
else
{
uint8_t v___x_755_; 
v___x_755_ = 39;
return v___x_755_;
}
}
}
}
else
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = lean_unsigned_to_nat(31u);
v___x_757_ = lean_nat_dec_le(v_n_711_, v___x_756_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_758_ = lean_unsigned_to_nat(34u);
v___x_759_ = lean_nat_dec_le(v_n_711_, v___x_758_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = lean_unsigned_to_nat(36u);
v___x_761_ = lean_nat_dec_le(v_n_711_, v___x_760_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_762_ = lean_unsigned_to_nat(37u);
v___x_763_ = lean_nat_dec_le(v_n_711_, v___x_762_);
if (v___x_763_ == 0)
{
uint8_t v___x_764_; 
v___x_764_ = 38;
return v___x_764_;
}
else
{
uint8_t v___x_765_; 
v___x_765_ = 37;
return v___x_765_;
}
}
else
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = lean_unsigned_to_nat(35u);
v___x_767_ = lean_nat_dec_le(v_n_711_, v___x_766_);
if (v___x_767_ == 0)
{
uint8_t v___x_768_; 
v___x_768_ = 36;
return v___x_768_;
}
else
{
uint8_t v___x_769_; 
v___x_769_ = 35;
return v___x_769_;
}
}
}
else
{
lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_770_ = lean_unsigned_to_nat(32u);
v___x_771_ = lean_nat_dec_le(v_n_711_, v___x_770_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_772_ = lean_unsigned_to_nat(33u);
v___x_773_ = lean_nat_dec_le(v_n_711_, v___x_772_);
if (v___x_773_ == 0)
{
uint8_t v___x_774_; 
v___x_774_ = 34;
return v___x_774_;
}
else
{
uint8_t v___x_775_; 
v___x_775_ = 33;
return v___x_775_;
}
}
else
{
uint8_t v___x_776_; 
v___x_776_ = 32;
return v___x_776_;
}
}
}
else
{
lean_object* v___x_777_; uint8_t v___x_778_; 
v___x_777_ = lean_unsigned_to_nat(28u);
v___x_778_ = lean_nat_dec_le(v_n_711_, v___x_777_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_779_ = lean_unsigned_to_nat(29u);
v___x_780_ = lean_nat_dec_le(v_n_711_, v___x_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; uint8_t v___x_782_; 
v___x_781_ = lean_unsigned_to_nat(30u);
v___x_782_ = lean_nat_dec_le(v_n_711_, v___x_781_);
if (v___x_782_ == 0)
{
uint8_t v___x_783_; 
v___x_783_ = 31;
return v___x_783_;
}
else
{
uint8_t v___x_784_; 
v___x_784_ = 30;
return v___x_784_;
}
}
else
{
uint8_t v___x_785_; 
v___x_785_ = 29;
return v___x_785_;
}
}
else
{
lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_786_ = lean_unsigned_to_nat(26u);
v___x_787_ = lean_nat_dec_le(v_n_711_, v___x_786_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_788_ = lean_unsigned_to_nat(27u);
v___x_789_ = lean_nat_dec_le(v_n_711_, v___x_788_);
if (v___x_789_ == 0)
{
uint8_t v___x_790_; 
v___x_790_ = 28;
return v___x_790_;
}
else
{
uint8_t v___x_791_; 
v___x_791_ = 27;
return v___x_791_;
}
}
else
{
uint8_t v___x_792_; 
v___x_792_ = 26;
return v___x_792_;
}
}
}
}
}
else
{
lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_793_ = lean_unsigned_to_nat(12u);
v___x_794_ = lean_nat_dec_le(v_n_711_, v___x_793_);
if (v___x_794_ == 0)
{
lean_object* v___x_795_; uint8_t v___x_796_; 
v___x_795_ = lean_unsigned_to_nat(18u);
v___x_796_ = lean_nat_dec_le(v_n_711_, v___x_795_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_797_ = lean_unsigned_to_nat(21u);
v___x_798_ = lean_nat_dec_le(v_n_711_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; uint8_t v___x_800_; 
v___x_799_ = lean_unsigned_to_nat(23u);
v___x_800_ = lean_nat_dec_le(v_n_711_, v___x_799_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; uint8_t v___x_802_; 
v___x_801_ = lean_unsigned_to_nat(24u);
v___x_802_ = lean_nat_dec_le(v_n_711_, v___x_801_);
if (v___x_802_ == 0)
{
uint8_t v___x_803_; 
v___x_803_ = 25;
return v___x_803_;
}
else
{
uint8_t v___x_804_; 
v___x_804_ = 24;
return v___x_804_;
}
}
else
{
lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(22u);
v___x_806_ = lean_nat_dec_le(v_n_711_, v___x_805_);
if (v___x_806_ == 0)
{
uint8_t v___x_807_; 
v___x_807_ = 23;
return v___x_807_;
}
else
{
uint8_t v___x_808_; 
v___x_808_ = 22;
return v___x_808_;
}
}
}
else
{
lean_object* v___x_809_; uint8_t v___x_810_; 
v___x_809_ = lean_unsigned_to_nat(19u);
v___x_810_ = lean_nat_dec_le(v_n_711_, v___x_809_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_811_ = lean_unsigned_to_nat(20u);
v___x_812_ = lean_nat_dec_le(v_n_711_, v___x_811_);
if (v___x_812_ == 0)
{
uint8_t v___x_813_; 
v___x_813_ = 21;
return v___x_813_;
}
else
{
uint8_t v___x_814_; 
v___x_814_ = 20;
return v___x_814_;
}
}
else
{
uint8_t v___x_815_; 
v___x_815_ = 19;
return v___x_815_;
}
}
}
else
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = lean_unsigned_to_nat(15u);
v___x_817_ = lean_nat_dec_le(v_n_711_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_818_ = lean_unsigned_to_nat(16u);
v___x_819_ = lean_nat_dec_le(v_n_711_, v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_820_ = lean_unsigned_to_nat(17u);
v___x_821_ = lean_nat_dec_le(v_n_711_, v___x_820_);
if (v___x_821_ == 0)
{
uint8_t v___x_822_; 
v___x_822_ = 18;
return v___x_822_;
}
else
{
uint8_t v___x_823_; 
v___x_823_ = 17;
return v___x_823_;
}
}
else
{
uint8_t v___x_824_; 
v___x_824_ = 16;
return v___x_824_;
}
}
else
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(13u);
v___x_826_ = lean_nat_dec_le(v_n_711_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = lean_unsigned_to_nat(14u);
v___x_828_ = lean_nat_dec_le(v_n_711_, v___x_827_);
if (v___x_828_ == 0)
{
uint8_t v___x_829_; 
v___x_829_ = 15;
return v___x_829_;
}
else
{
uint8_t v___x_830_; 
v___x_830_ = 14;
return v___x_830_;
}
}
else
{
uint8_t v___x_831_; 
v___x_831_ = 13;
return v___x_831_;
}
}
}
}
else
{
lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = lean_unsigned_to_nat(5u);
v___x_833_ = lean_nat_dec_le(v_n_711_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_834_ = lean_unsigned_to_nat(8u);
v___x_835_ = lean_nat_dec_le(v_n_711_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = lean_unsigned_to_nat(10u);
v___x_837_ = lean_nat_dec_le(v_n_711_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = lean_unsigned_to_nat(11u);
v___x_839_ = lean_nat_dec_le(v_n_711_, v___x_838_);
if (v___x_839_ == 0)
{
uint8_t v___x_840_; 
v___x_840_ = 12;
return v___x_840_;
}
else
{
uint8_t v___x_841_; 
v___x_841_ = 11;
return v___x_841_;
}
}
else
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = lean_unsigned_to_nat(9u);
v___x_843_ = lean_nat_dec_le(v_n_711_, v___x_842_);
if (v___x_843_ == 0)
{
uint8_t v___x_844_; 
v___x_844_ = 10;
return v___x_844_;
}
else
{
uint8_t v___x_845_; 
v___x_845_ = 9;
return v___x_845_;
}
}
}
else
{
lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_846_ = lean_unsigned_to_nat(6u);
v___x_847_ = lean_nat_dec_le(v_n_711_, v___x_846_);
if (v___x_847_ == 0)
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = lean_unsigned_to_nat(7u);
v___x_849_ = lean_nat_dec_le(v_n_711_, v___x_848_);
if (v___x_849_ == 0)
{
uint8_t v___x_850_; 
v___x_850_ = 8;
return v___x_850_;
}
else
{
uint8_t v___x_851_; 
v___x_851_ = 7;
return v___x_851_;
}
}
else
{
uint8_t v___x_852_; 
v___x_852_ = 6;
return v___x_852_;
}
}
}
else
{
lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_853_ = lean_unsigned_to_nat(2u);
v___x_854_ = lean_nat_dec_le(v_n_711_, v___x_853_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; uint8_t v___x_856_; 
v___x_855_ = lean_unsigned_to_nat(3u);
v___x_856_ = lean_nat_dec_le(v_n_711_, v___x_855_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_857_ = lean_unsigned_to_nat(4u);
v___x_858_ = lean_nat_dec_le(v_n_711_, v___x_857_);
if (v___x_858_ == 0)
{
uint8_t v___x_859_; 
v___x_859_ = 5;
return v___x_859_;
}
else
{
uint8_t v___x_860_; 
v___x_860_ = 4;
return v___x_860_;
}
}
else
{
uint8_t v___x_861_; 
v___x_861_ = 3;
return v___x_861_;
}
}
else
{
lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_nat_dec_le(v_n_711_, v___x_862_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_864_ = lean_unsigned_to_nat(1u);
v___x_865_ = lean_nat_dec_le(v_n_711_, v___x_864_);
if (v___x_865_ == 0)
{
uint8_t v___x_866_; 
v___x_866_ = 2;
return v___x_866_;
}
else
{
uint8_t v___x_867_; 
v___x_867_ = 1;
return v___x_867_;
}
}
else
{
uint8_t v___x_868_; 
v___x_868_ = 0;
return v___x_868_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseClass_ofNat___boxed(lean_object* v_n_869_){
_start:
{
uint8_t v_res_870_; lean_object* v_r_871_; 
v_res_870_ = lp_lean_x2dftml_LeanFtml_ProseClass_ofNat(v_n_869_);
lean_dec(v_n_869_);
v_r_871_ = lean_box(v_res_870_);
return v_r_871_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqProseClass(uint8_t v_x_872_, uint8_t v_y_873_){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_874_ = lean_box(v_x_872_);
v___x_875_ = lean_obj_tag_nat(v___x_874_);
lean_dec(v___x_874_);
v___x_876_ = lean_box(v_y_873_);
v___x_877_ = lean_obj_tag_nat(v___x_876_);
lean_dec(v___x_876_);
v___x_878_ = lean_nat_dec_eq(v___x_875_, v___x_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqProseClass___boxed(lean_object* v_x_879_, lean_object* v_y_880_){
_start:
{
uint8_t v_x_23__boxed_881_; uint8_t v_y_24__boxed_882_; uint8_t v_res_883_; lean_object* v_r_884_; 
v_x_23__boxed_881_ = lean_unbox(v_x_879_);
v_y_24__boxed_882_ = lean_unbox(v_y_880_);
v_res_883_ = lp_lean_x2dftml_LeanFtml_instDecidableEqProseClass(v_x_23__boxed_881_, v_y_24__boxed_882_);
v_r_884_ = lean_box(v_res_883_);
return v_r_884_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(2u);
v___x_1045_ = lean_nat_to_int(v___x_1044_);
return v___x_1045_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_unsigned_to_nat(1u);
v___x_1047_ = lean_nat_to_int(v___x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr(uint8_t v_x_1048_, lean_object* v_prec_1049_){
_start:
{
lean_object* v___y_1051_; lean_object* v___y_1058_; lean_object* v___y_1065_; lean_object* v___y_1072_; lean_object* v___y_1079_; lean_object* v___y_1086_; lean_object* v___y_1093_; lean_object* v___y_1100_; lean_object* v___y_1107_; lean_object* v___y_1114_; lean_object* v___y_1121_; lean_object* v___y_1128_; lean_object* v___y_1135_; lean_object* v___y_1142_; lean_object* v___y_1149_; lean_object* v___y_1156_; lean_object* v___y_1163_; lean_object* v___y_1170_; lean_object* v___y_1177_; lean_object* v___y_1184_; lean_object* v___y_1191_; lean_object* v___y_1198_; lean_object* v___y_1205_; lean_object* v___y_1212_; lean_object* v___y_1219_; lean_object* v___y_1226_; lean_object* v___y_1233_; lean_object* v___y_1240_; lean_object* v___y_1247_; lean_object* v___y_1254_; lean_object* v___y_1261_; lean_object* v___y_1268_; lean_object* v___y_1275_; lean_object* v___y_1282_; lean_object* v___y_1289_; lean_object* v___y_1296_; lean_object* v___y_1303_; lean_object* v___y_1310_; lean_object* v___y_1317_; lean_object* v___y_1324_; lean_object* v___y_1331_; lean_object* v___y_1338_; lean_object* v___y_1345_; lean_object* v___y_1352_; lean_object* v___y_1359_; lean_object* v___y_1366_; lean_object* v___y_1373_; lean_object* v___y_1380_; lean_object* v___y_1387_; lean_object* v___y_1394_; lean_object* v___y_1401_; lean_object* v___y_1408_; lean_object* v___y_1415_; 
switch(v_x_1048_)
{
case 0:
{
lean_object* v___x_1421_; uint8_t v___x_1422_; 
v___x_1421_ = lean_unsigned_to_nat(1024u);
v___x_1422_ = lean_nat_dec_le(v___x_1421_, v_prec_1049_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; 
v___x_1423_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1051_ = v___x_1423_;
goto v___jp_1050_;
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1051_ = v___x_1424_;
goto v___jp_1050_;
}
}
case 1:
{
lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1425_ = lean_unsigned_to_nat(1024u);
v___x_1426_ = lean_nat_dec_le(v___x_1425_, v_prec_1049_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1058_ = v___x_1427_;
goto v___jp_1057_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1058_ = v___x_1428_;
goto v___jp_1057_;
}
}
case 2:
{
lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = lean_unsigned_to_nat(1024u);
v___x_1430_ = lean_nat_dec_le(v___x_1429_, v_prec_1049_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1065_ = v___x_1431_;
goto v___jp_1064_;
}
else
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1065_ = v___x_1432_;
goto v___jp_1064_;
}
}
case 3:
{
lean_object* v___x_1433_; uint8_t v___x_1434_; 
v___x_1433_ = lean_unsigned_to_nat(1024u);
v___x_1434_ = lean_nat_dec_le(v___x_1433_, v_prec_1049_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
v___x_1435_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1072_ = v___x_1435_;
goto v___jp_1071_;
}
else
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1072_ = v___x_1436_;
goto v___jp_1071_;
}
}
case 4:
{
lean_object* v___x_1437_; uint8_t v___x_1438_; 
v___x_1437_ = lean_unsigned_to_nat(1024u);
v___x_1438_ = lean_nat_dec_le(v___x_1437_, v_prec_1049_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1079_ = v___x_1439_;
goto v___jp_1078_;
}
else
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1079_ = v___x_1440_;
goto v___jp_1078_;
}
}
case 5:
{
lean_object* v___x_1441_; uint8_t v___x_1442_; 
v___x_1441_ = lean_unsigned_to_nat(1024u);
v___x_1442_ = lean_nat_dec_le(v___x_1441_, v_prec_1049_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; 
v___x_1443_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1086_ = v___x_1443_;
goto v___jp_1085_;
}
else
{
lean_object* v___x_1444_; 
v___x_1444_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1086_ = v___x_1444_;
goto v___jp_1085_;
}
}
case 6:
{
lean_object* v___x_1445_; uint8_t v___x_1446_; 
v___x_1445_ = lean_unsigned_to_nat(1024u);
v___x_1446_ = lean_nat_dec_le(v___x_1445_, v_prec_1049_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1093_ = v___x_1447_;
goto v___jp_1092_;
}
else
{
lean_object* v___x_1448_; 
v___x_1448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1093_ = v___x_1448_;
goto v___jp_1092_;
}
}
case 7:
{
lean_object* v___x_1449_; uint8_t v___x_1450_; 
v___x_1449_ = lean_unsigned_to_nat(1024u);
v___x_1450_ = lean_nat_dec_le(v___x_1449_, v_prec_1049_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; 
v___x_1451_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1100_ = v___x_1451_;
goto v___jp_1099_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1100_ = v___x_1452_;
goto v___jp_1099_;
}
}
case 8:
{
lean_object* v___x_1453_; uint8_t v___x_1454_; 
v___x_1453_ = lean_unsigned_to_nat(1024u);
v___x_1454_ = lean_nat_dec_le(v___x_1453_, v_prec_1049_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1107_ = v___x_1455_;
goto v___jp_1106_;
}
else
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1107_ = v___x_1456_;
goto v___jp_1106_;
}
}
case 9:
{
lean_object* v___x_1457_; uint8_t v___x_1458_; 
v___x_1457_ = lean_unsigned_to_nat(1024u);
v___x_1458_ = lean_nat_dec_le(v___x_1457_, v_prec_1049_);
if (v___x_1458_ == 0)
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1114_ = v___x_1459_;
goto v___jp_1113_;
}
else
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1114_ = v___x_1460_;
goto v___jp_1113_;
}
}
case 10:
{
lean_object* v___x_1461_; uint8_t v___x_1462_; 
v___x_1461_ = lean_unsigned_to_nat(1024u);
v___x_1462_ = lean_nat_dec_le(v___x_1461_, v_prec_1049_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; 
v___x_1463_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1121_ = v___x_1463_;
goto v___jp_1120_;
}
else
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1121_ = v___x_1464_;
goto v___jp_1120_;
}
}
case 11:
{
lean_object* v___x_1465_; uint8_t v___x_1466_; 
v___x_1465_ = lean_unsigned_to_nat(1024u);
v___x_1466_ = lean_nat_dec_le(v___x_1465_, v_prec_1049_);
if (v___x_1466_ == 0)
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1128_ = v___x_1467_;
goto v___jp_1127_;
}
else
{
lean_object* v___x_1468_; 
v___x_1468_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1128_ = v___x_1468_;
goto v___jp_1127_;
}
}
case 12:
{
lean_object* v___x_1469_; uint8_t v___x_1470_; 
v___x_1469_ = lean_unsigned_to_nat(1024u);
v___x_1470_ = lean_nat_dec_le(v___x_1469_, v_prec_1049_);
if (v___x_1470_ == 0)
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1135_ = v___x_1471_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1472_; 
v___x_1472_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1135_ = v___x_1472_;
goto v___jp_1134_;
}
}
case 13:
{
lean_object* v___x_1473_; uint8_t v___x_1474_; 
v___x_1473_ = lean_unsigned_to_nat(1024u);
v___x_1474_ = lean_nat_dec_le(v___x_1473_, v_prec_1049_);
if (v___x_1474_ == 0)
{
lean_object* v___x_1475_; 
v___x_1475_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1142_ = v___x_1475_;
goto v___jp_1141_;
}
else
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1142_ = v___x_1476_;
goto v___jp_1141_;
}
}
case 14:
{
lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1477_ = lean_unsigned_to_nat(1024u);
v___x_1478_ = lean_nat_dec_le(v___x_1477_, v_prec_1049_);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; 
v___x_1479_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1149_ = v___x_1479_;
goto v___jp_1148_;
}
else
{
lean_object* v___x_1480_; 
v___x_1480_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1149_ = v___x_1480_;
goto v___jp_1148_;
}
}
case 15:
{
lean_object* v___x_1481_; uint8_t v___x_1482_; 
v___x_1481_ = lean_unsigned_to_nat(1024u);
v___x_1482_ = lean_nat_dec_le(v___x_1481_, v_prec_1049_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; 
v___x_1483_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1156_ = v___x_1483_;
goto v___jp_1155_;
}
else
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1156_ = v___x_1484_;
goto v___jp_1155_;
}
}
case 16:
{
lean_object* v___x_1485_; uint8_t v___x_1486_; 
v___x_1485_ = lean_unsigned_to_nat(1024u);
v___x_1486_ = lean_nat_dec_le(v___x_1485_, v_prec_1049_);
if (v___x_1486_ == 0)
{
lean_object* v___x_1487_; 
v___x_1487_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1163_ = v___x_1487_;
goto v___jp_1162_;
}
else
{
lean_object* v___x_1488_; 
v___x_1488_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1163_ = v___x_1488_;
goto v___jp_1162_;
}
}
case 17:
{
lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1489_ = lean_unsigned_to_nat(1024u);
v___x_1490_ = lean_nat_dec_le(v___x_1489_, v_prec_1049_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; 
v___x_1491_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1170_ = v___x_1491_;
goto v___jp_1169_;
}
else
{
lean_object* v___x_1492_; 
v___x_1492_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1170_ = v___x_1492_;
goto v___jp_1169_;
}
}
case 18:
{
lean_object* v___x_1493_; uint8_t v___x_1494_; 
v___x_1493_ = lean_unsigned_to_nat(1024u);
v___x_1494_ = lean_nat_dec_le(v___x_1493_, v_prec_1049_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; 
v___x_1495_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1177_ = v___x_1495_;
goto v___jp_1176_;
}
else
{
lean_object* v___x_1496_; 
v___x_1496_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1177_ = v___x_1496_;
goto v___jp_1176_;
}
}
case 19:
{
lean_object* v___x_1497_; uint8_t v___x_1498_; 
v___x_1497_ = lean_unsigned_to_nat(1024u);
v___x_1498_ = lean_nat_dec_le(v___x_1497_, v_prec_1049_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; 
v___x_1499_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1184_ = v___x_1499_;
goto v___jp_1183_;
}
else
{
lean_object* v___x_1500_; 
v___x_1500_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1184_ = v___x_1500_;
goto v___jp_1183_;
}
}
case 20:
{
lean_object* v___x_1501_; uint8_t v___x_1502_; 
v___x_1501_ = lean_unsigned_to_nat(1024u);
v___x_1502_ = lean_nat_dec_le(v___x_1501_, v_prec_1049_);
if (v___x_1502_ == 0)
{
lean_object* v___x_1503_; 
v___x_1503_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1191_ = v___x_1503_;
goto v___jp_1190_;
}
else
{
lean_object* v___x_1504_; 
v___x_1504_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1191_ = v___x_1504_;
goto v___jp_1190_;
}
}
case 21:
{
lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1505_ = lean_unsigned_to_nat(1024u);
v___x_1506_ = lean_nat_dec_le(v___x_1505_, v_prec_1049_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1198_ = v___x_1507_;
goto v___jp_1197_;
}
else
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1198_ = v___x_1508_;
goto v___jp_1197_;
}
}
case 22:
{
lean_object* v___x_1509_; uint8_t v___x_1510_; 
v___x_1509_ = lean_unsigned_to_nat(1024u);
v___x_1510_ = lean_nat_dec_le(v___x_1509_, v_prec_1049_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1205_ = v___x_1511_;
goto v___jp_1204_;
}
else
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1205_ = v___x_1512_;
goto v___jp_1204_;
}
}
case 23:
{
lean_object* v___x_1513_; uint8_t v___x_1514_; 
v___x_1513_ = lean_unsigned_to_nat(1024u);
v___x_1514_ = lean_nat_dec_le(v___x_1513_, v_prec_1049_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; 
v___x_1515_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1212_ = v___x_1515_;
goto v___jp_1211_;
}
else
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1212_ = v___x_1516_;
goto v___jp_1211_;
}
}
case 24:
{
lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = lean_unsigned_to_nat(1024u);
v___x_1518_ = lean_nat_dec_le(v___x_1517_, v_prec_1049_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; 
v___x_1519_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1219_ = v___x_1519_;
goto v___jp_1218_;
}
else
{
lean_object* v___x_1520_; 
v___x_1520_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1219_ = v___x_1520_;
goto v___jp_1218_;
}
}
case 25:
{
lean_object* v___x_1521_; uint8_t v___x_1522_; 
v___x_1521_ = lean_unsigned_to_nat(1024u);
v___x_1522_ = lean_nat_dec_le(v___x_1521_, v_prec_1049_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1523_; 
v___x_1523_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1226_ = v___x_1523_;
goto v___jp_1225_;
}
else
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1226_ = v___x_1524_;
goto v___jp_1225_;
}
}
case 26:
{
lean_object* v___x_1525_; uint8_t v___x_1526_; 
v___x_1525_ = lean_unsigned_to_nat(1024u);
v___x_1526_ = lean_nat_dec_le(v___x_1525_, v_prec_1049_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; 
v___x_1527_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1233_ = v___x_1527_;
goto v___jp_1232_;
}
else
{
lean_object* v___x_1528_; 
v___x_1528_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1233_ = v___x_1528_;
goto v___jp_1232_;
}
}
case 27:
{
lean_object* v___x_1529_; uint8_t v___x_1530_; 
v___x_1529_ = lean_unsigned_to_nat(1024u);
v___x_1530_ = lean_nat_dec_le(v___x_1529_, v_prec_1049_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; 
v___x_1531_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1240_ = v___x_1531_;
goto v___jp_1239_;
}
else
{
lean_object* v___x_1532_; 
v___x_1532_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1240_ = v___x_1532_;
goto v___jp_1239_;
}
}
case 28:
{
lean_object* v___x_1533_; uint8_t v___x_1534_; 
v___x_1533_ = lean_unsigned_to_nat(1024u);
v___x_1534_ = lean_nat_dec_le(v___x_1533_, v_prec_1049_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1247_ = v___x_1535_;
goto v___jp_1246_;
}
else
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1247_ = v___x_1536_;
goto v___jp_1246_;
}
}
case 29:
{
lean_object* v___x_1537_; uint8_t v___x_1538_; 
v___x_1537_ = lean_unsigned_to_nat(1024u);
v___x_1538_ = lean_nat_dec_le(v___x_1537_, v_prec_1049_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; 
v___x_1539_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1254_ = v___x_1539_;
goto v___jp_1253_;
}
else
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1254_ = v___x_1540_;
goto v___jp_1253_;
}
}
case 30:
{
lean_object* v___x_1541_; uint8_t v___x_1542_; 
v___x_1541_ = lean_unsigned_to_nat(1024u);
v___x_1542_ = lean_nat_dec_le(v___x_1541_, v_prec_1049_);
if (v___x_1542_ == 0)
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1261_ = v___x_1543_;
goto v___jp_1260_;
}
else
{
lean_object* v___x_1544_; 
v___x_1544_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1261_ = v___x_1544_;
goto v___jp_1260_;
}
}
case 31:
{
lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1545_ = lean_unsigned_to_nat(1024u);
v___x_1546_ = lean_nat_dec_le(v___x_1545_, v_prec_1049_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1268_ = v___x_1547_;
goto v___jp_1267_;
}
else
{
lean_object* v___x_1548_; 
v___x_1548_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1268_ = v___x_1548_;
goto v___jp_1267_;
}
}
case 32:
{
lean_object* v___x_1549_; uint8_t v___x_1550_; 
v___x_1549_ = lean_unsigned_to_nat(1024u);
v___x_1550_ = lean_nat_dec_le(v___x_1549_, v_prec_1049_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; 
v___x_1551_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1275_ = v___x_1551_;
goto v___jp_1274_;
}
else
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1275_ = v___x_1552_;
goto v___jp_1274_;
}
}
case 33:
{
lean_object* v___x_1553_; uint8_t v___x_1554_; 
v___x_1553_ = lean_unsigned_to_nat(1024u);
v___x_1554_ = lean_nat_dec_le(v___x_1553_, v_prec_1049_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1282_ = v___x_1555_;
goto v___jp_1281_;
}
else
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1282_ = v___x_1556_;
goto v___jp_1281_;
}
}
case 34:
{
lean_object* v___x_1557_; uint8_t v___x_1558_; 
v___x_1557_ = lean_unsigned_to_nat(1024u);
v___x_1558_ = lean_nat_dec_le(v___x_1557_, v_prec_1049_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1289_ = v___x_1559_;
goto v___jp_1288_;
}
else
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1289_ = v___x_1560_;
goto v___jp_1288_;
}
}
case 35:
{
lean_object* v___x_1561_; uint8_t v___x_1562_; 
v___x_1561_ = lean_unsigned_to_nat(1024u);
v___x_1562_ = lean_nat_dec_le(v___x_1561_, v_prec_1049_);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1296_ = v___x_1563_;
goto v___jp_1295_;
}
else
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1296_ = v___x_1564_;
goto v___jp_1295_;
}
}
case 36:
{
lean_object* v___x_1565_; uint8_t v___x_1566_; 
v___x_1565_ = lean_unsigned_to_nat(1024u);
v___x_1566_ = lean_nat_dec_le(v___x_1565_, v_prec_1049_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1567_; 
v___x_1567_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1303_ = v___x_1567_;
goto v___jp_1302_;
}
else
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1303_ = v___x_1568_;
goto v___jp_1302_;
}
}
case 37:
{
lean_object* v___x_1569_; uint8_t v___x_1570_; 
v___x_1569_ = lean_unsigned_to_nat(1024u);
v___x_1570_ = lean_nat_dec_le(v___x_1569_, v_prec_1049_);
if (v___x_1570_ == 0)
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1310_ = v___x_1571_;
goto v___jp_1309_;
}
else
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1310_ = v___x_1572_;
goto v___jp_1309_;
}
}
case 38:
{
lean_object* v___x_1573_; uint8_t v___x_1574_; 
v___x_1573_ = lean_unsigned_to_nat(1024u);
v___x_1574_ = lean_nat_dec_le(v___x_1573_, v_prec_1049_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; 
v___x_1575_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1317_ = v___x_1575_;
goto v___jp_1316_;
}
else
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1317_ = v___x_1576_;
goto v___jp_1316_;
}
}
case 39:
{
lean_object* v___x_1577_; uint8_t v___x_1578_; 
v___x_1577_ = lean_unsigned_to_nat(1024u);
v___x_1578_ = lean_nat_dec_le(v___x_1577_, v_prec_1049_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; 
v___x_1579_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1324_ = v___x_1579_;
goto v___jp_1323_;
}
else
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1324_ = v___x_1580_;
goto v___jp_1323_;
}
}
case 40:
{
lean_object* v___x_1581_; uint8_t v___x_1582_; 
v___x_1581_ = lean_unsigned_to_nat(1024u);
v___x_1582_ = lean_nat_dec_le(v___x_1581_, v_prec_1049_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1583_; 
v___x_1583_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1331_ = v___x_1583_;
goto v___jp_1330_;
}
else
{
lean_object* v___x_1584_; 
v___x_1584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1331_ = v___x_1584_;
goto v___jp_1330_;
}
}
case 41:
{
lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1585_ = lean_unsigned_to_nat(1024u);
v___x_1586_ = lean_nat_dec_le(v___x_1585_, v_prec_1049_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1338_ = v___x_1587_;
goto v___jp_1337_;
}
else
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1338_ = v___x_1588_;
goto v___jp_1337_;
}
}
case 42:
{
lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = lean_unsigned_to_nat(1024u);
v___x_1590_ = lean_nat_dec_le(v___x_1589_, v_prec_1049_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1345_ = v___x_1591_;
goto v___jp_1344_;
}
else
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1345_ = v___x_1592_;
goto v___jp_1344_;
}
}
case 43:
{
lean_object* v___x_1593_; uint8_t v___x_1594_; 
v___x_1593_ = lean_unsigned_to_nat(1024u);
v___x_1594_ = lean_nat_dec_le(v___x_1593_, v_prec_1049_);
if (v___x_1594_ == 0)
{
lean_object* v___x_1595_; 
v___x_1595_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1352_ = v___x_1595_;
goto v___jp_1351_;
}
else
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1352_ = v___x_1596_;
goto v___jp_1351_;
}
}
case 44:
{
lean_object* v___x_1597_; uint8_t v___x_1598_; 
v___x_1597_ = lean_unsigned_to_nat(1024u);
v___x_1598_ = lean_nat_dec_le(v___x_1597_, v_prec_1049_);
if (v___x_1598_ == 0)
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1359_ = v___x_1599_;
goto v___jp_1358_;
}
else
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1359_ = v___x_1600_;
goto v___jp_1358_;
}
}
case 45:
{
lean_object* v___x_1601_; uint8_t v___x_1602_; 
v___x_1601_ = lean_unsigned_to_nat(1024u);
v___x_1602_ = lean_nat_dec_le(v___x_1601_, v_prec_1049_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; 
v___x_1603_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1366_ = v___x_1603_;
goto v___jp_1365_;
}
else
{
lean_object* v___x_1604_; 
v___x_1604_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1366_ = v___x_1604_;
goto v___jp_1365_;
}
}
case 46:
{
lean_object* v___x_1605_; uint8_t v___x_1606_; 
v___x_1605_ = lean_unsigned_to_nat(1024u);
v___x_1606_ = lean_nat_dec_le(v___x_1605_, v_prec_1049_);
if (v___x_1606_ == 0)
{
lean_object* v___x_1607_; 
v___x_1607_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1373_ = v___x_1607_;
goto v___jp_1372_;
}
else
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1373_ = v___x_1608_;
goto v___jp_1372_;
}
}
case 47:
{
lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1609_ = lean_unsigned_to_nat(1024u);
v___x_1610_ = lean_nat_dec_le(v___x_1609_, v_prec_1049_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1380_ = v___x_1611_;
goto v___jp_1379_;
}
else
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1380_ = v___x_1612_;
goto v___jp_1379_;
}
}
case 48:
{
lean_object* v___x_1613_; uint8_t v___x_1614_; 
v___x_1613_ = lean_unsigned_to_nat(1024u);
v___x_1614_ = lean_nat_dec_le(v___x_1613_, v_prec_1049_);
if (v___x_1614_ == 0)
{
lean_object* v___x_1615_; 
v___x_1615_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1387_ = v___x_1615_;
goto v___jp_1386_;
}
else
{
lean_object* v___x_1616_; 
v___x_1616_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1387_ = v___x_1616_;
goto v___jp_1386_;
}
}
case 49:
{
lean_object* v___x_1617_; uint8_t v___x_1618_; 
v___x_1617_ = lean_unsigned_to_nat(1024u);
v___x_1618_ = lean_nat_dec_le(v___x_1617_, v_prec_1049_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1394_ = v___x_1619_;
goto v___jp_1393_;
}
else
{
lean_object* v___x_1620_; 
v___x_1620_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1394_ = v___x_1620_;
goto v___jp_1393_;
}
}
case 50:
{
lean_object* v___x_1621_; uint8_t v___x_1622_; 
v___x_1621_ = lean_unsigned_to_nat(1024u);
v___x_1622_ = lean_nat_dec_le(v___x_1621_, v_prec_1049_);
if (v___x_1622_ == 0)
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1401_ = v___x_1623_;
goto v___jp_1400_;
}
else
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1401_ = v___x_1624_;
goto v___jp_1400_;
}
}
case 51:
{
lean_object* v___x_1625_; uint8_t v___x_1626_; 
v___x_1625_ = lean_unsigned_to_nat(1024u);
v___x_1626_ = lean_nat_dec_le(v___x_1625_, v_prec_1049_);
if (v___x_1626_ == 0)
{
lean_object* v___x_1627_; 
v___x_1627_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1408_ = v___x_1627_;
goto v___jp_1407_;
}
else
{
lean_object* v___x_1628_; 
v___x_1628_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1408_ = v___x_1628_;
goto v___jp_1407_;
}
}
default: 
{
lean_object* v___x_1629_; uint8_t v___x_1630_; 
v___x_1629_ = lean_unsigned_to_nat(1024u);
v___x_1630_ = lean_nat_dec_le(v___x_1629_, v_prec_1049_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1631_; 
v___x_1631_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__106);
v___y_1415_ = v___x_1631_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1632_; 
v___x_1632_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__107);
v___y_1415_ = v___x_1632_;
goto v___jp_1414_;
}
}
}
v___jp_1050_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1052_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__1));
lean_inc(v___y_1051_);
v___x_1053_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___y_1051_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = 0;
v___x_1055_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1055_, 0, v___x_1053_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*1, v___x_1054_);
v___x_1056_ = l_Repr_addAppParen(v___x_1055_, v_prec_1049_);
return v___x_1056_;
}
v___jp_1057_:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; uint8_t v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1059_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__3));
lean_inc(v___y_1058_);
v___x_1060_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___y_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = 0;
v___x_1062_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1062_, 0, v___x_1060_);
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*1, v___x_1061_);
v___x_1063_ = l_Repr_addAppParen(v___x_1062_, v_prec_1049_);
return v___x_1063_;
}
v___jp_1064_:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; uint8_t v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1066_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__5));
lean_inc(v___y_1065_);
v___x_1067_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___y_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = 0;
v___x_1069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*1, v___x_1068_);
v___x_1070_ = l_Repr_addAppParen(v___x_1069_, v_prec_1049_);
return v___x_1070_;
}
v___jp_1071_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; uint8_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1073_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__7));
lean_inc(v___y_1072_);
v___x_1074_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___y_1072_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = 0;
v___x_1076_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set_uint8(v___x_1076_, sizeof(void*)*1, v___x_1075_);
v___x_1077_ = l_Repr_addAppParen(v___x_1076_, v_prec_1049_);
return v___x_1077_;
}
v___jp_1078_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; uint8_t v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1080_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__9));
lean_inc(v___y_1079_);
v___x_1081_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___y_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = 0;
v___x_1083_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1083_, 0, v___x_1081_);
lean_ctor_set_uint8(v___x_1083_, sizeof(void*)*1, v___x_1082_);
v___x_1084_ = l_Repr_addAppParen(v___x_1083_, v_prec_1049_);
return v___x_1084_;
}
v___jp_1085_:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1087_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__11));
lean_inc(v___y_1086_);
v___x_1088_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___y_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = 0;
v___x_1090_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set_uint8(v___x_1090_, sizeof(void*)*1, v___x_1089_);
v___x_1091_ = l_Repr_addAppParen(v___x_1090_, v_prec_1049_);
return v___x_1091_;
}
v___jp_1092_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; uint8_t v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1094_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__13));
lean_inc(v___y_1093_);
v___x_1095_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___y_1093_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = 0;
v___x_1097_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set_uint8(v___x_1097_, sizeof(void*)*1, v___x_1096_);
v___x_1098_ = l_Repr_addAppParen(v___x_1097_, v_prec_1049_);
return v___x_1098_;
}
v___jp_1099_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; uint8_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1101_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__15));
lean_inc(v___y_1100_);
v___x_1102_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___y_1100_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = 0;
v___x_1104_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1104_, 0, v___x_1102_);
lean_ctor_set_uint8(v___x_1104_, sizeof(void*)*1, v___x_1103_);
v___x_1105_ = l_Repr_addAppParen(v___x_1104_, v_prec_1049_);
return v___x_1105_;
}
v___jp_1106_:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1108_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__17));
lean_inc(v___y_1107_);
v___x_1109_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___y_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = 0;
v___x_1111_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set_uint8(v___x_1111_, sizeof(void*)*1, v___x_1110_);
v___x_1112_ = l_Repr_addAppParen(v___x_1111_, v_prec_1049_);
return v___x_1112_;
}
v___jp_1113_:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1115_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__19));
lean_inc(v___y_1114_);
v___x_1116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___y_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = 0;
v___x_1118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set_uint8(v___x_1118_, sizeof(void*)*1, v___x_1117_);
v___x_1119_ = l_Repr_addAppParen(v___x_1118_, v_prec_1049_);
return v___x_1119_;
}
v___jp_1120_:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1122_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__21));
lean_inc(v___y_1121_);
v___x_1123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___y_1121_);
lean_ctor_set(v___x_1123_, 1, v___x_1122_);
v___x_1124_ = 0;
v___x_1125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1125_, 0, v___x_1123_);
lean_ctor_set_uint8(v___x_1125_, sizeof(void*)*1, v___x_1124_);
v___x_1126_ = l_Repr_addAppParen(v___x_1125_, v_prec_1049_);
return v___x_1126_;
}
v___jp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1129_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__23));
lean_inc(v___y_1128_);
v___x_1130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___y_1128_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = 0;
v___x_1132_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set_uint8(v___x_1132_, sizeof(void*)*1, v___x_1131_);
v___x_1133_ = l_Repr_addAppParen(v___x_1132_, v_prec_1049_);
return v___x_1133_;
}
v___jp_1134_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1136_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__25));
lean_inc(v___y_1135_);
v___x_1137_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___y_1135_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
v___x_1138_ = 0;
v___x_1139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1139_, 0, v___x_1137_);
lean_ctor_set_uint8(v___x_1139_, sizeof(void*)*1, v___x_1138_);
v___x_1140_ = l_Repr_addAppParen(v___x_1139_, v_prec_1049_);
return v___x_1140_;
}
v___jp_1141_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1143_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__27));
lean_inc(v___y_1142_);
v___x_1144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___y_1142_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = 0;
v___x_1146_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*1, v___x_1145_);
v___x_1147_ = l_Repr_addAppParen(v___x_1146_, v_prec_1049_);
return v___x_1147_;
}
v___jp_1148_:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1150_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__29));
lean_inc(v___y_1149_);
v___x_1151_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___y_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = 0;
v___x_1153_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1153_, 0, v___x_1151_);
lean_ctor_set_uint8(v___x_1153_, sizeof(void*)*1, v___x_1152_);
v___x_1154_ = l_Repr_addAppParen(v___x_1153_, v_prec_1049_);
return v___x_1154_;
}
v___jp_1155_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; uint8_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1157_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__31));
lean_inc(v___y_1156_);
v___x_1158_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___y_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = 0;
v___x_1160_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1160_, 0, v___x_1158_);
lean_ctor_set_uint8(v___x_1160_, sizeof(void*)*1, v___x_1159_);
v___x_1161_ = l_Repr_addAppParen(v___x_1160_, v_prec_1049_);
return v___x_1161_;
}
v___jp_1162_:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1164_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__33));
lean_inc(v___y_1163_);
v___x_1165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___y_1163_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = 0;
v___x_1167_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1167_, 0, v___x_1165_);
lean_ctor_set_uint8(v___x_1167_, sizeof(void*)*1, v___x_1166_);
v___x_1168_ = l_Repr_addAppParen(v___x_1167_, v_prec_1049_);
return v___x_1168_;
}
v___jp_1169_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1171_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__35));
lean_inc(v___y_1170_);
v___x_1172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___y_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = 0;
v___x_1174_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1174_, 0, v___x_1172_);
lean_ctor_set_uint8(v___x_1174_, sizeof(void*)*1, v___x_1173_);
v___x_1175_ = l_Repr_addAppParen(v___x_1174_, v_prec_1049_);
return v___x_1175_;
}
v___jp_1176_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; uint8_t v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1178_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__37));
lean_inc(v___y_1177_);
v___x_1179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___y_1177_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = 0;
v___x_1181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1181_, 0, v___x_1179_);
lean_ctor_set_uint8(v___x_1181_, sizeof(void*)*1, v___x_1180_);
v___x_1182_ = l_Repr_addAppParen(v___x_1181_, v_prec_1049_);
return v___x_1182_;
}
v___jp_1183_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; uint8_t v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1185_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__39));
lean_inc(v___y_1184_);
v___x_1186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___y_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
v___x_1187_ = 0;
v___x_1188_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1188_, 0, v___x_1186_);
lean_ctor_set_uint8(v___x_1188_, sizeof(void*)*1, v___x_1187_);
v___x_1189_ = l_Repr_addAppParen(v___x_1188_, v_prec_1049_);
return v___x_1189_;
}
v___jp_1190_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1192_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__41));
lean_inc(v___y_1191_);
v___x_1193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___y_1191_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
v___x_1194_ = 0;
v___x_1195_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1195_, 0, v___x_1193_);
lean_ctor_set_uint8(v___x_1195_, sizeof(void*)*1, v___x_1194_);
v___x_1196_ = l_Repr_addAppParen(v___x_1195_, v_prec_1049_);
return v___x_1196_;
}
v___jp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; uint8_t v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1199_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__43));
lean_inc(v___y_1198_);
v___x_1200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1200_, 0, v___y_1198_);
lean_ctor_set(v___x_1200_, 1, v___x_1199_);
v___x_1201_ = 0;
v___x_1202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1202_, 0, v___x_1200_);
lean_ctor_set_uint8(v___x_1202_, sizeof(void*)*1, v___x_1201_);
v___x_1203_ = l_Repr_addAppParen(v___x_1202_, v_prec_1049_);
return v___x_1203_;
}
v___jp_1204_:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1206_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__45));
lean_inc(v___y_1205_);
v___x_1207_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___y_1205_);
lean_ctor_set(v___x_1207_, 1, v___x_1206_);
v___x_1208_ = 0;
v___x_1209_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1209_, 0, v___x_1207_);
lean_ctor_set_uint8(v___x_1209_, sizeof(void*)*1, v___x_1208_);
v___x_1210_ = l_Repr_addAppParen(v___x_1209_, v_prec_1049_);
return v___x_1210_;
}
v___jp_1211_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; uint8_t v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1213_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__47));
lean_inc(v___y_1212_);
v___x_1214_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___y_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = 0;
v___x_1216_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1216_, 0, v___x_1214_);
lean_ctor_set_uint8(v___x_1216_, sizeof(void*)*1, v___x_1215_);
v___x_1217_ = l_Repr_addAppParen(v___x_1216_, v_prec_1049_);
return v___x_1217_;
}
v___jp_1218_:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1220_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__49));
lean_inc(v___y_1219_);
v___x_1221_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___y_1219_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = 0;
v___x_1223_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set_uint8(v___x_1223_, sizeof(void*)*1, v___x_1222_);
v___x_1224_ = l_Repr_addAppParen(v___x_1223_, v_prec_1049_);
return v___x_1224_;
}
v___jp_1225_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1227_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__51));
lean_inc(v___y_1226_);
v___x_1228_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___y_1226_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = 0;
v___x_1230_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1230_, 0, v___x_1228_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*1, v___x_1229_);
v___x_1231_ = l_Repr_addAppParen(v___x_1230_, v_prec_1049_);
return v___x_1231_;
}
v___jp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1234_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__53));
lean_inc(v___y_1233_);
v___x_1235_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___y_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = 0;
v___x_1237_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set_uint8(v___x_1237_, sizeof(void*)*1, v___x_1236_);
v___x_1238_ = l_Repr_addAppParen(v___x_1237_, v_prec_1049_);
return v___x_1238_;
}
v___jp_1239_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1241_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__55));
lean_inc(v___y_1240_);
v___x_1242_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___y_1240_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = 0;
v___x_1244_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1244_, 0, v___x_1242_);
lean_ctor_set_uint8(v___x_1244_, sizeof(void*)*1, v___x_1243_);
v___x_1245_ = l_Repr_addAppParen(v___x_1244_, v_prec_1049_);
return v___x_1245_;
}
v___jp_1246_:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1248_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__57));
lean_inc(v___y_1247_);
v___x_1249_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___y_1247_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = 0;
v___x_1251_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1251_, 0, v___x_1249_);
lean_ctor_set_uint8(v___x_1251_, sizeof(void*)*1, v___x_1250_);
v___x_1252_ = l_Repr_addAppParen(v___x_1251_, v_prec_1049_);
return v___x_1252_;
}
v___jp_1253_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1255_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__59));
lean_inc(v___y_1254_);
v___x_1256_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___y_1254_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
v___x_1257_ = 0;
v___x_1258_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1258_, 0, v___x_1256_);
lean_ctor_set_uint8(v___x_1258_, sizeof(void*)*1, v___x_1257_);
v___x_1259_ = l_Repr_addAppParen(v___x_1258_, v_prec_1049_);
return v___x_1259_;
}
v___jp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; uint8_t v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1262_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__61));
lean_inc(v___y_1261_);
v___x_1263_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___y_1261_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
v___x_1264_ = 0;
v___x_1265_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set_uint8(v___x_1265_, sizeof(void*)*1, v___x_1264_);
v___x_1266_ = l_Repr_addAppParen(v___x_1265_, v_prec_1049_);
return v___x_1266_;
}
v___jp_1267_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1269_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__63));
lean_inc(v___y_1268_);
v___x_1270_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___y_1268_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = 0;
v___x_1272_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1272_, 0, v___x_1270_);
lean_ctor_set_uint8(v___x_1272_, sizeof(void*)*1, v___x_1271_);
v___x_1273_ = l_Repr_addAppParen(v___x_1272_, v_prec_1049_);
return v___x_1273_;
}
v___jp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1276_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__65));
lean_inc(v___y_1275_);
v___x_1277_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___y_1275_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = 0;
v___x_1279_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1279_, 0, v___x_1277_);
lean_ctor_set_uint8(v___x_1279_, sizeof(void*)*1, v___x_1278_);
v___x_1280_ = l_Repr_addAppParen(v___x_1279_, v_prec_1049_);
return v___x_1280_;
}
v___jp_1281_:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1283_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__67));
lean_inc(v___y_1282_);
v___x_1284_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___y_1282_);
lean_ctor_set(v___x_1284_, 1, v___x_1283_);
v___x_1285_ = 0;
v___x_1286_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set_uint8(v___x_1286_, sizeof(void*)*1, v___x_1285_);
v___x_1287_ = l_Repr_addAppParen(v___x_1286_, v_prec_1049_);
return v___x_1287_;
}
v___jp_1288_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1290_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__69));
lean_inc(v___y_1289_);
v___x_1291_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___y_1289_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = 0;
v___x_1293_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1293_, 0, v___x_1291_);
lean_ctor_set_uint8(v___x_1293_, sizeof(void*)*1, v___x_1292_);
v___x_1294_ = l_Repr_addAppParen(v___x_1293_, v_prec_1049_);
return v___x_1294_;
}
v___jp_1295_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1297_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__71));
lean_inc(v___y_1296_);
v___x_1298_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___y_1296_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = 0;
v___x_1300_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1300_, 0, v___x_1298_);
lean_ctor_set_uint8(v___x_1300_, sizeof(void*)*1, v___x_1299_);
v___x_1301_ = l_Repr_addAppParen(v___x_1300_, v_prec_1049_);
return v___x_1301_;
}
v___jp_1302_:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1304_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__73));
lean_inc(v___y_1303_);
v___x_1305_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___y_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = 0;
v___x_1307_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1307_, 0, v___x_1305_);
lean_ctor_set_uint8(v___x_1307_, sizeof(void*)*1, v___x_1306_);
v___x_1308_ = l_Repr_addAppParen(v___x_1307_, v_prec_1049_);
return v___x_1308_;
}
v___jp_1309_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; uint8_t v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1311_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__75));
lean_inc(v___y_1310_);
v___x_1312_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___y_1310_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
v___x_1313_ = 0;
v___x_1314_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set_uint8(v___x_1314_, sizeof(void*)*1, v___x_1313_);
v___x_1315_ = l_Repr_addAppParen(v___x_1314_, v_prec_1049_);
return v___x_1315_;
}
v___jp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; uint8_t v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1318_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__77));
lean_inc(v___y_1317_);
v___x_1319_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___y_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = 0;
v___x_1321_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set_uint8(v___x_1321_, sizeof(void*)*1, v___x_1320_);
v___x_1322_ = l_Repr_addAppParen(v___x_1321_, v_prec_1049_);
return v___x_1322_;
}
v___jp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1325_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__79));
lean_inc(v___y_1324_);
v___x_1326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___y_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = 0;
v___x_1328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set_uint8(v___x_1328_, sizeof(void*)*1, v___x_1327_);
v___x_1329_ = l_Repr_addAppParen(v___x_1328_, v_prec_1049_);
return v___x_1329_;
}
v___jp_1330_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; uint8_t v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1332_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__81));
lean_inc(v___y_1331_);
v___x_1333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___y_1331_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = 0;
v___x_1335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set_uint8(v___x_1335_, sizeof(void*)*1, v___x_1334_);
v___x_1336_ = l_Repr_addAppParen(v___x_1335_, v_prec_1049_);
return v___x_1336_;
}
v___jp_1337_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1339_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__83));
lean_inc(v___y_1338_);
v___x_1340_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___y_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = 0;
v___x_1342_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1342_, 0, v___x_1340_);
lean_ctor_set_uint8(v___x_1342_, sizeof(void*)*1, v___x_1341_);
v___x_1343_ = l_Repr_addAppParen(v___x_1342_, v_prec_1049_);
return v___x_1343_;
}
v___jp_1344_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1346_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__85));
lean_inc(v___y_1345_);
v___x_1347_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___y_1345_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = 0;
v___x_1349_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set_uint8(v___x_1349_, sizeof(void*)*1, v___x_1348_);
v___x_1350_ = l_Repr_addAppParen(v___x_1349_, v_prec_1049_);
return v___x_1350_;
}
v___jp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1353_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__87));
lean_inc(v___y_1352_);
v___x_1354_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___y_1352_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
v___x_1355_ = 0;
v___x_1356_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1356_, 0, v___x_1354_);
lean_ctor_set_uint8(v___x_1356_, sizeof(void*)*1, v___x_1355_);
v___x_1357_ = l_Repr_addAppParen(v___x_1356_, v_prec_1049_);
return v___x_1357_;
}
v___jp_1358_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; uint8_t v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1360_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__89));
lean_inc(v___y_1359_);
v___x_1361_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___y_1359_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = 0;
v___x_1363_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1363_, 0, v___x_1361_);
lean_ctor_set_uint8(v___x_1363_, sizeof(void*)*1, v___x_1362_);
v___x_1364_ = l_Repr_addAppParen(v___x_1363_, v_prec_1049_);
return v___x_1364_;
}
v___jp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1367_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__91));
lean_inc(v___y_1366_);
v___x_1368_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___y_1366_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v___x_1369_ = 0;
v___x_1370_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1370_, 0, v___x_1368_);
lean_ctor_set_uint8(v___x_1370_, sizeof(void*)*1, v___x_1369_);
v___x_1371_ = l_Repr_addAppParen(v___x_1370_, v_prec_1049_);
return v___x_1371_;
}
v___jp_1372_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; uint8_t v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1374_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__93));
lean_inc(v___y_1373_);
v___x_1375_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___y_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v___x_1376_ = 0;
v___x_1377_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1377_, 0, v___x_1375_);
lean_ctor_set_uint8(v___x_1377_, sizeof(void*)*1, v___x_1376_);
v___x_1378_ = l_Repr_addAppParen(v___x_1377_, v_prec_1049_);
return v___x_1378_;
}
v___jp_1379_:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1381_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__95));
lean_inc(v___y_1380_);
v___x_1382_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___y_1380_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
v___x_1383_ = 0;
v___x_1384_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1384_, 0, v___x_1382_);
lean_ctor_set_uint8(v___x_1384_, sizeof(void*)*1, v___x_1383_);
v___x_1385_ = l_Repr_addAppParen(v___x_1384_, v_prec_1049_);
return v___x_1385_;
}
v___jp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1388_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__97));
lean_inc(v___y_1387_);
v___x_1389_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___y_1387_);
lean_ctor_set(v___x_1389_, 1, v___x_1388_);
v___x_1390_ = 0;
v___x_1391_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1391_, 0, v___x_1389_);
lean_ctor_set_uint8(v___x_1391_, sizeof(void*)*1, v___x_1390_);
v___x_1392_ = l_Repr_addAppParen(v___x_1391_, v_prec_1049_);
return v___x_1392_;
}
v___jp_1393_:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1395_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__99));
lean_inc(v___y_1394_);
v___x_1396_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___y_1394_);
lean_ctor_set(v___x_1396_, 1, v___x_1395_);
v___x_1397_ = 0;
v___x_1398_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1398_, 0, v___x_1396_);
lean_ctor_set_uint8(v___x_1398_, sizeof(void*)*1, v___x_1397_);
v___x_1399_ = l_Repr_addAppParen(v___x_1398_, v_prec_1049_);
return v___x_1399_;
}
v___jp_1400_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1402_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__101));
lean_inc(v___y_1401_);
v___x_1403_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___y_1401_);
lean_ctor_set(v___x_1403_, 1, v___x_1402_);
v___x_1404_ = 0;
v___x_1405_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1405_, 0, v___x_1403_);
lean_ctor_set_uint8(v___x_1405_, sizeof(void*)*1, v___x_1404_);
v___x_1406_ = l_Repr_addAppParen(v___x_1405_, v_prec_1049_);
return v___x_1406_;
}
v___jp_1407_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1409_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__103));
lean_inc(v___y_1408_);
v___x_1410_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___y_1408_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
v___x_1411_ = 0;
v___x_1412_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1412_, 0, v___x_1410_);
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*1, v___x_1411_);
v___x_1413_ = l_Repr_addAppParen(v___x_1412_, v_prec_1049_);
return v___x_1413_;
}
v___jp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; uint8_t v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1416_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___closed__105));
lean_inc(v___y_1415_);
v___x_1417_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___y_1415_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
v___x_1418_ = 0;
v___x_1419_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1419_, 0, v___x_1417_);
lean_ctor_set_uint8(v___x_1419_, sizeof(void*)*1, v___x_1418_);
v___x_1420_ = l_Repr_addAppParen(v___x_1419_, v_prec_1049_);
return v___x_1420_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprProseClass_repr___boxed(lean_object* v_x_1633_, lean_object* v_prec_1634_){
_start:
{
uint8_t v_x_2871__boxed_1635_; lean_object* v_res_1636_; 
v_x_2871__boxed_1635_ = lean_unbox(v_x_1633_);
v_res_1636_ = lp_lean_x2dftml_LeanFtml_instReprProseClass_repr(v_x_2871__boxed_1635_, v_prec_1634_);
lean_dec(v_prec_1634_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorIdx___impl(uint8_t v_x_1852_){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1853_ = lean_box(v_x_1852_);
v___x_1854_ = lean_obj_tag_nat(v___x_1853_);
lean_dec(v___x_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorIdx___impl___boxed(lean_object* v_x_1855_){
_start:
{
uint8_t v_x_4__boxed_1856_; lean_object* v_res_1857_; 
v_x_4__boxed_1856_ = lean_unbox(v_x_1855_);
v_res_1857_ = lp_lean_x2dftml_LeanFtml_CLShape_ctorIdx___impl(v_x_4__boxed_1856_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorElim___redArg(lean_object* v_k_1858_){
_start:
{
lean_inc(v_k_1858_);
return v_k_1858_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorElim___redArg___boxed(lean_object* v_k_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = lp_lean_x2dftml_LeanFtml_CLShape_ctorElim___redArg(v_k_1859_);
lean_dec(v_k_1859_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorElim(lean_object* v_motive_1861_, lean_object* v_ctorIdx_1862_, uint8_t v_t_1863_, lean_object* v_h_1864_, lean_object* v_k_1865_){
_start:
{
lean_inc(v_k_1865_);
return v_k_1865_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_ctorElim___boxed(lean_object* v_motive_1866_, lean_object* v_ctorIdx_1867_, lean_object* v_t_1868_, lean_object* v_h_1869_, lean_object* v_k_1870_){
_start:
{
uint8_t v_t_boxed_1871_; lean_object* v_res_1872_; 
v_t_boxed_1871_ = lean_unbox(v_t_1868_);
v_res_1872_ = lp_lean_x2dftml_LeanFtml_CLShape_ctorElim(v_motive_1866_, v_ctorIdx_1867_, v_t_boxed_1871_, v_h_1869_, v_k_1870_);
lean_dec(v_k_1870_);
lean_dec(v_ctorIdx_1867_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim___redArg(lean_object* v_noContinuation_1873_){
_start:
{
lean_inc(v_noContinuation_1873_);
return v_noContinuation_1873_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim___redArg___boxed(lean_object* v_noContinuation_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim___redArg(v_noContinuation_1874_);
lean_dec(v_noContinuation_1874_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim(lean_object* v_motive_1876_, uint8_t v_t_1877_, lean_object* v_h_1878_, lean_object* v_noContinuation_1879_){
_start:
{
lean_inc(v_noContinuation_1879_);
return v_noContinuation_1879_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim___boxed(lean_object* v_motive_1880_, lean_object* v_t_1881_, lean_object* v_h_1882_, lean_object* v_noContinuation_1883_){
_start:
{
uint8_t v_t_boxed_1884_; lean_object* v_res_1885_; 
v_t_boxed_1884_ = lean_unbox(v_t_1881_);
v_res_1885_ = lp_lean_x2dftml_LeanFtml_CLShape_noContinuation_elim(v_motive_1880_, v_t_boxed_1884_, v_h_1882_, v_noContinuation_1883_);
lean_dec(v_noContinuation_1883_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim___redArg(lean_object* v_plainContinuation_1886_){
_start:
{
lean_inc(v_plainContinuation_1886_);
return v_plainContinuation_1886_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim___redArg___boxed(lean_object* v_plainContinuation_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim___redArg(v_plainContinuation_1887_);
lean_dec(v_plainContinuation_1887_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim(lean_object* v_motive_1889_, uint8_t v_t_1890_, lean_object* v_h_1891_, lean_object* v_plainContinuation_1892_){
_start:
{
lean_inc(v_plainContinuation_1892_);
return v_plainContinuation_1892_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim___boxed(lean_object* v_motive_1893_, lean_object* v_t_1894_, lean_object* v_h_1895_, lean_object* v_plainContinuation_1896_){
_start:
{
uint8_t v_t_boxed_1897_; lean_object* v_res_1898_; 
v_t_boxed_1897_ = lean_unbox(v_t_1894_);
v_res_1898_ = lp_lean_x2dftml_LeanFtml_CLShape_plainContinuation_elim(v_motive_1893_, v_t_boxed_1897_, v_h_1895_, v_plainContinuation_1896_);
lean_dec(v_plainContinuation_1896_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim___redArg(lean_object* v_divOpenerContinuation_1899_){
_start:
{
lean_inc(v_divOpenerContinuation_1899_);
return v_divOpenerContinuation_1899_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim___redArg___boxed(lean_object* v_divOpenerContinuation_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim___redArg(v_divOpenerContinuation_1900_);
lean_dec(v_divOpenerContinuation_1900_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim(lean_object* v_motive_1902_, uint8_t v_t_1903_, lean_object* v_h_1904_, lean_object* v_divOpenerContinuation_1905_){
_start:
{
lean_inc(v_divOpenerContinuation_1905_);
return v_divOpenerContinuation_1905_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim___boxed(lean_object* v_motive_1906_, lean_object* v_t_1907_, lean_object* v_h_1908_, lean_object* v_divOpenerContinuation_1909_){
_start:
{
uint8_t v_t_boxed_1910_; lean_object* v_res_1911_; 
v_t_boxed_1910_ = lean_unbox(v_t_1907_);
v_res_1911_ = lp_lean_x2dftml_LeanFtml_CLShape_divOpenerContinuation_elim(v_motive_1906_, v_t_boxed_1910_, v_h_1908_, v_divOpenerContinuation_1909_);
lean_dec(v_divOpenerContinuation_1909_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim___redArg(lean_object* v_tokenizedBody_1912_){
_start:
{
lean_inc(v_tokenizedBody_1912_);
return v_tokenizedBody_1912_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim___redArg___boxed(lean_object* v_tokenizedBody_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim___redArg(v_tokenizedBody_1913_);
lean_dec(v_tokenizedBody_1913_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim(lean_object* v_motive_1915_, uint8_t v_t_1916_, lean_object* v_h_1917_, lean_object* v_tokenizedBody_1918_){
_start:
{
lean_inc(v_tokenizedBody_1918_);
return v_tokenizedBody_1918_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim___boxed(lean_object* v_motive_1919_, lean_object* v_t_1920_, lean_object* v_h_1921_, lean_object* v_tokenizedBody_1922_){
_start:
{
uint8_t v_t_boxed_1923_; lean_object* v_res_1924_; 
v_t_boxed_1923_ = lean_unbox(v_t_1920_);
v_res_1924_ = lp_lean_x2dftml_LeanFtml_CLShape_tokenizedBody_elim(v_motive_1919_, v_t_boxed_1923_, v_h_1921_, v_tokenizedBody_1922_);
lean_dec(v_tokenizedBody_1922_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorIdx___impl(uint8_t v_x_1925_){
_start:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = lean_box(v_x_1925_);
v___x_1927_ = lean_obj_tag_nat(v___x_1926_);
lean_dec(v___x_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorIdx___impl___boxed(lean_object* v_x_1928_){
_start:
{
uint8_t v_x_4__boxed_1929_; lean_object* v_res_1930_; 
v_x_4__boxed_1929_ = lean_unbox(v_x_1928_);
v_res_1930_ = lp_lean_x2dftml_LeanFtml_PGShape_ctorIdx___impl(v_x_4__boxed_1929_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorElim___redArg(lean_object* v_k_1931_){
_start:
{
lean_inc(v_k_1931_);
return v_k_1931_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorElim___redArg___boxed(lean_object* v_k_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = lp_lean_x2dftml_LeanFtml_PGShape_ctorElim___redArg(v_k_1932_);
lean_dec(v_k_1932_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorElim(lean_object* v_motive_1934_, lean_object* v_ctorIdx_1935_, uint8_t v_t_1936_, lean_object* v_h_1937_, lean_object* v_k_1938_){
_start:
{
lean_inc(v_k_1938_);
return v_k_1938_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_ctorElim___boxed(lean_object* v_motive_1939_, lean_object* v_ctorIdx_1940_, lean_object* v_t_1941_, lean_object* v_h_1942_, lean_object* v_k_1943_){
_start:
{
uint8_t v_t_boxed_1944_; lean_object* v_res_1945_; 
v_t_boxed_1944_ = lean_unbox(v_t_1941_);
v_res_1945_ = lp_lean_x2dftml_LeanFtml_PGShape_ctorElim(v_motive_1939_, v_ctorIdx_1940_, v_t_boxed_1944_, v_h_1942_, v_k_1943_);
lean_dec(v_k_1943_);
lean_dec(v_ctorIdx_1940_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim___redArg(lean_object* v_emptyRun_1946_){
_start:
{
lean_inc(v_emptyRun_1946_);
return v_emptyRun_1946_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim___redArg___boxed(lean_object* v_emptyRun_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim___redArg(v_emptyRun_1947_);
lean_dec(v_emptyRun_1947_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim(lean_object* v_motive_1949_, uint8_t v_t_1950_, lean_object* v_h_1951_, lean_object* v_emptyRun_1952_){
_start:
{
lean_inc(v_emptyRun_1952_);
return v_emptyRun_1952_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim___boxed(lean_object* v_motive_1953_, lean_object* v_t_1954_, lean_object* v_h_1955_, lean_object* v_emptyRun_1956_){
_start:
{
uint8_t v_t_boxed_1957_; lean_object* v_res_1958_; 
v_t_boxed_1957_ = lean_unbox(v_t_1954_);
v_res_1958_ = lp_lean_x2dftml_LeanFtml_PGShape_emptyRun_elim(v_motive_1953_, v_t_boxed_1957_, v_h_1955_, v_emptyRun_1956_);
lean_dec(v_emptyRun_1956_);
return v_res_1958_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim___redArg(lean_object* v_scoredAnchor_1959_){
_start:
{
lean_inc(v_scoredAnchor_1959_);
return v_scoredAnchor_1959_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim___redArg___boxed(lean_object* v_scoredAnchor_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim___redArg(v_scoredAnchor_1960_);
lean_dec(v_scoredAnchor_1960_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim(lean_object* v_motive_1962_, uint8_t v_t_1963_, lean_object* v_h_1964_, lean_object* v_scoredAnchor_1965_){
_start:
{
lean_inc(v_scoredAnchor_1965_);
return v_scoredAnchor_1965_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim___boxed(lean_object* v_motive_1966_, lean_object* v_t_1967_, lean_object* v_h_1968_, lean_object* v_scoredAnchor_1969_){
_start:
{
uint8_t v_t_boxed_1970_; lean_object* v_res_1971_; 
v_t_boxed_1970_ = lean_unbox(v_t_1967_);
v_res_1971_ = lp_lean_x2dftml_LeanFtml_PGShape_scoredAnchor_elim(v_motive_1966_, v_t_boxed_1970_, v_h_1968_, v_scoredAnchor_1969_);
lean_dec(v_scoredAnchor_1969_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim___redArg(lean_object* v_scoredSpan_1972_){
_start:
{
lean_inc(v_scoredSpan_1972_);
return v_scoredSpan_1972_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim___redArg___boxed(lean_object* v_scoredSpan_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim___redArg(v_scoredSpan_1973_);
lean_dec(v_scoredSpan_1973_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim(lean_object* v_motive_1975_, uint8_t v_t_1976_, lean_object* v_h_1977_, lean_object* v_scoredSpan_1978_){
_start:
{
lean_inc(v_scoredSpan_1978_);
return v_scoredSpan_1978_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim___boxed(lean_object* v_motive_1979_, lean_object* v_t_1980_, lean_object* v_h_1981_, lean_object* v_scoredSpan_1982_){
_start:
{
uint8_t v_t_boxed_1983_; lean_object* v_res_1984_; 
v_t_boxed_1983_ = lean_unbox(v_t_1980_);
v_res_1984_ = lp_lean_x2dftml_LeanFtml_PGShape_scoredSpan_elim(v_motive_1979_, v_t_boxed_1983_, v_h_1981_, v_scoredSpan_1982_);
lean_dec(v_scoredSpan_1982_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim___redArg(lean_object* v_skipToken_1985_){
_start:
{
lean_inc(v_skipToken_1985_);
return v_skipToken_1985_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim___redArg___boxed(lean_object* v_skipToken_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim___redArg(v_skipToken_1986_);
lean_dec(v_skipToken_1986_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim(lean_object* v_motive_1988_, uint8_t v_t_1989_, lean_object* v_h_1990_, lean_object* v_skipToken_1991_){
_start:
{
lean_inc(v_skipToken_1991_);
return v_skipToken_1991_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim___boxed(lean_object* v_motive_1992_, lean_object* v_t_1993_, lean_object* v_h_1994_, lean_object* v_skipToken_1995_){
_start:
{
uint8_t v_t_boxed_1996_; lean_object* v_res_1997_; 
v_t_boxed_1996_ = lean_unbox(v_t_1993_);
v_res_1997_ = lp_lean_x2dftml_LeanFtml_PGShape_skipToken_elim(v_motive_1992_, v_t_boxed_1996_, v_h_1994_, v_skipToken_1995_);
lean_dec(v_skipToken_1995_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim___redArg(lean_object* v_wrapRun_1998_){
_start:
{
lean_inc(v_wrapRun_1998_);
return v_wrapRun_1998_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim___redArg___boxed(lean_object* v_wrapRun_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim___redArg(v_wrapRun_1999_);
lean_dec(v_wrapRun_1999_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim(lean_object* v_motive_2001_, uint8_t v_t_2002_, lean_object* v_h_2003_, lean_object* v_wrapRun_2004_){
_start:
{
lean_inc(v_wrapRun_2004_);
return v_wrapRun_2004_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim___boxed(lean_object* v_motive_2005_, lean_object* v_t_2006_, lean_object* v_h_2007_, lean_object* v_wrapRun_2008_){
_start:
{
uint8_t v_t_boxed_2009_; lean_object* v_res_2010_; 
v_t_boxed_2009_ = lean_unbox(v_t_2006_);
v_res_2010_ = lp_lean_x2dftml_LeanFtml_PGShape_wrapRun_elim(v_motive_2005_, v_t_boxed_2009_, v_h_2007_, v_wrapRun_2008_);
lean_dec(v_wrapRun_2008_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorIdx___impl(uint8_t v_x_2011_){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = lean_box(v_x_2011_);
v___x_2013_ = lean_obj_tag_nat(v___x_2012_);
lean_dec(v___x_2012_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorIdx___impl___boxed(lean_object* v_x_2014_){
_start:
{
uint8_t v_x_4__boxed_2015_; lean_object* v_res_2016_; 
v_x_4__boxed_2015_ = lean_unbox(v_x_2014_);
v_res_2016_ = lp_lean_x2dftml_LeanFtml_CFSide_ctorIdx___impl(v_x_4__boxed_2015_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorElim___redArg(lean_object* v_k_2017_){
_start:
{
lean_inc(v_k_2017_);
return v_k_2017_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorElim___redArg___boxed(lean_object* v_k_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = lp_lean_x2dftml_LeanFtml_CFSide_ctorElim___redArg(v_k_2018_);
lean_dec(v_k_2018_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorElim(lean_object* v_motive_2020_, lean_object* v_ctorIdx_2021_, uint8_t v_t_2022_, lean_object* v_h_2023_, lean_object* v_k_2024_){
_start:
{
lean_inc(v_k_2024_);
return v_k_2024_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_ctorElim___boxed(lean_object* v_motive_2025_, lean_object* v_ctorIdx_2026_, lean_object* v_t_2027_, lean_object* v_h_2028_, lean_object* v_k_2029_){
_start:
{
uint8_t v_t_boxed_2030_; lean_object* v_res_2031_; 
v_t_boxed_2030_ = lean_unbox(v_t_2027_);
v_res_2031_ = lp_lean_x2dftml_LeanFtml_CFSide_ctorElim(v_motive_2025_, v_ctorIdx_2026_, v_t_boxed_2030_, v_h_2028_, v_k_2029_);
lean_dec(v_k_2029_);
lean_dec(v_ctorIdx_2026_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_none_elim___redArg(lean_object* v_none_2032_){
_start:
{
lean_inc(v_none_2032_);
return v_none_2032_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_none_elim___redArg___boxed(lean_object* v_none_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = lp_lean_x2dftml_LeanFtml_CFSide_none_elim___redArg(v_none_2033_);
lean_dec(v_none_2033_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_none_elim(lean_object* v_motive_2035_, uint8_t v_t_2036_, lean_object* v_h_2037_, lean_object* v_none_2038_){
_start:
{
lean_inc(v_none_2038_);
return v_none_2038_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_none_elim___boxed(lean_object* v_motive_2039_, lean_object* v_t_2040_, lean_object* v_h_2041_, lean_object* v_none_2042_){
_start:
{
uint8_t v_t_boxed_2043_; lean_object* v_res_2044_; 
v_t_boxed_2043_ = lean_unbox(v_t_2040_);
v_res_2044_ = lp_lean_x2dftml_LeanFtml_CFSide_none_elim(v_motive_2039_, v_t_boxed_2043_, v_h_2041_, v_none_2042_);
lean_dec(v_none_2042_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_right_elim___redArg(lean_object* v_right_2045_){
_start:
{
lean_inc(v_right_2045_);
return v_right_2045_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_right_elim___redArg___boxed(lean_object* v_right_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = lp_lean_x2dftml_LeanFtml_CFSide_right_elim___redArg(v_right_2046_);
lean_dec(v_right_2046_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_right_elim(lean_object* v_motive_2048_, uint8_t v_t_2049_, lean_object* v_h_2050_, lean_object* v_right_2051_){
_start:
{
lean_inc(v_right_2051_);
return v_right_2051_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_right_elim___boxed(lean_object* v_motive_2052_, lean_object* v_t_2053_, lean_object* v_h_2054_, lean_object* v_right_2055_){
_start:
{
uint8_t v_t_boxed_2056_; lean_object* v_res_2057_; 
v_t_boxed_2056_ = lean_unbox(v_t_2053_);
v_res_2057_ = lp_lean_x2dftml_LeanFtml_CFSide_right_elim(v_motive_2052_, v_t_boxed_2056_, v_h_2054_, v_right_2055_);
lean_dec(v_right_2055_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_left_elim___redArg(lean_object* v_left_2058_){
_start:
{
lean_inc(v_left_2058_);
return v_left_2058_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_left_elim___redArg___boxed(lean_object* v_left_2059_){
_start:
{
lean_object* v_res_2060_; 
v_res_2060_ = lp_lean_x2dftml_LeanFtml_CFSide_left_elim___redArg(v_left_2059_);
lean_dec(v_left_2059_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_left_elim(lean_object* v_motive_2061_, uint8_t v_t_2062_, lean_object* v_h_2063_, lean_object* v_left_2064_){
_start:
{
lean_inc(v_left_2064_);
return v_left_2064_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_left_elim___boxed(lean_object* v_motive_2065_, lean_object* v_t_2066_, lean_object* v_h_2067_, lean_object* v_left_2068_){
_start:
{
uint8_t v_t_boxed_2069_; lean_object* v_res_2070_; 
v_t_boxed_2069_ = lean_unbox(v_t_2066_);
v_res_2070_ = lp_lean_x2dftml_LeanFtml_CFSide_left_elim(v_motive_2065_, v_t_boxed_2069_, v_h_2067_, v_left_2068_);
lean_dec(v_left_2068_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim___redArg(lean_object* v_doubled_2071_){
_start:
{
lean_inc(v_doubled_2071_);
return v_doubled_2071_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim___redArg___boxed(lean_object* v_doubled_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim___redArg(v_doubled_2072_);
lean_dec(v_doubled_2072_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim(lean_object* v_motive_2074_, uint8_t v_t_2075_, lean_object* v_h_2076_, lean_object* v_doubled_2077_){
_start:
{
lean_inc(v_doubled_2077_);
return v_doubled_2077_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim___boxed(lean_object* v_motive_2078_, lean_object* v_t_2079_, lean_object* v_h_2080_, lean_object* v_doubled_2081_){
_start:
{
uint8_t v_t_boxed_2082_; lean_object* v_res_2083_; 
v_t_boxed_2082_ = lean_unbox(v_t_2079_);
v_res_2083_ = lp_lean_x2dftml_LeanFtml_CFSide_doubled_elim(v_motive_2078_, v_t_boxed_2082_, v_h_2080_, v_doubled_2081_);
lean_dec(v_doubled_2081_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorIdx___impl(uint8_t v_x_2084_){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2085_ = lean_box(v_x_2084_);
v___x_2086_ = lean_obj_tag_nat(v___x_2085_);
lean_dec(v___x_2085_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorIdx___impl___boxed(lean_object* v_x_2087_){
_start:
{
uint8_t v_x_4__boxed_2088_; lean_object* v_res_2089_; 
v_x_4__boxed_2088_ = lean_unbox(v_x_2087_);
v_res_2089_ = lp_lean_x2dftml_LeanFtml_BRShape_ctorIdx___impl(v_x_4__boxed_2088_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorElim___redArg(lean_object* v_k_2090_){
_start:
{
lean_inc(v_k_2090_);
return v_k_2090_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorElim___redArg___boxed(lean_object* v_k_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = lp_lean_x2dftml_LeanFtml_BRShape_ctorElim___redArg(v_k_2091_);
lean_dec(v_k_2091_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorElim(lean_object* v_motive_2093_, lean_object* v_ctorIdx_2094_, uint8_t v_t_2095_, lean_object* v_h_2096_, lean_object* v_k_2097_){
_start:
{
lean_inc(v_k_2097_);
return v_k_2097_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_ctorElim___boxed(lean_object* v_motive_2098_, lean_object* v_ctorIdx_2099_, lean_object* v_t_2100_, lean_object* v_h_2101_, lean_object* v_k_2102_){
_start:
{
uint8_t v_t_boxed_2103_; lean_object* v_res_2104_; 
v_t_boxed_2103_ = lean_unbox(v_t_2100_);
v_res_2104_ = lp_lean_x2dftml_LeanFtml_BRShape_ctorElim(v_motive_2098_, v_ctorIdx_2099_, v_t_boxed_2103_, v_h_2101_, v_k_2102_);
lean_dec(v_k_2102_);
lean_dec(v_ctorIdx_2099_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim___redArg(lean_object* v_spaceUnderscoreNewline_2105_){
_start:
{
lean_inc(v_spaceUnderscoreNewline_2105_);
return v_spaceUnderscoreNewline_2105_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim___redArg___boxed(lean_object* v_spaceUnderscoreNewline_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim___redArg(v_spaceUnderscoreNewline_2106_);
lean_dec(v_spaceUnderscoreNewline_2106_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim(lean_object* v_motive_2108_, uint8_t v_t_2109_, lean_object* v_h_2110_, lean_object* v_spaceUnderscoreNewline_2111_){
_start:
{
lean_inc(v_spaceUnderscoreNewline_2111_);
return v_spaceUnderscoreNewline_2111_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim___boxed(lean_object* v_motive_2112_, lean_object* v_t_2113_, lean_object* v_h_2114_, lean_object* v_spaceUnderscoreNewline_2115_){
_start:
{
uint8_t v_t_boxed_2116_; lean_object* v_res_2117_; 
v_t_boxed_2116_ = lean_unbox(v_t_2113_);
v_res_2117_ = lp_lean_x2dftml_LeanFtml_BRShape_spaceUnderscoreNewline_elim(v_motive_2112_, v_t_boxed_2116_, v_h_2114_, v_spaceUnderscoreNewline_2115_);
lean_dec(v_spaceUnderscoreNewline_2115_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_other_elim___redArg(lean_object* v_other_2118_){
_start:
{
lean_inc(v_other_2118_);
return v_other_2118_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_other_elim___redArg___boxed(lean_object* v_other_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = lp_lean_x2dftml_LeanFtml_BRShape_other_elim___redArg(v_other_2119_);
lean_dec(v_other_2119_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_other_elim(lean_object* v_motive_2121_, uint8_t v_t_2122_, lean_object* v_h_2123_, lean_object* v_other_2124_){
_start:
{
lean_inc(v_other_2124_);
return v_other_2124_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BRShape_other_elim___boxed(lean_object* v_motive_2125_, lean_object* v_t_2126_, lean_object* v_h_2127_, lean_object* v_other_2128_){
_start:
{
uint8_t v_t_boxed_2129_; lean_object* v_res_2130_; 
v_t_boxed_2129_ = lean_unbox(v_t_2126_);
v_res_2130_ = lp_lean_x2dftml_LeanFtml_BRShape_other_elim(v_motive_2125_, v_t_boxed_2129_, v_h_2127_, v_other_2128_);
lean_dec(v_other_2128_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorIdx___impl(uint8_t v_x_2131_){
_start:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2132_ = lean_box(v_x_2131_);
v___x_2133_ = lean_obj_tag_nat(v___x_2132_);
lean_dec(v___x_2132_);
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorIdx___impl___boxed(lean_object* v_x_2134_){
_start:
{
uint8_t v_x_4__boxed_2135_; lean_object* v_res_2136_; 
v_x_4__boxed_2135_ = lean_unbox(v_x_2134_);
v_res_2136_ = lp_lean_x2dftml_LeanFtml_CTShape_ctorIdx___impl(v_x_4__boxed_2135_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorElim___redArg(lean_object* v_k_2137_){
_start:
{
lean_inc(v_k_2137_);
return v_k_2137_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorElim___redArg___boxed(lean_object* v_k_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = lp_lean_x2dftml_LeanFtml_CTShape_ctorElim___redArg(v_k_2138_);
lean_dec(v_k_2138_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorElim(lean_object* v_motive_2140_, lean_object* v_ctorIdx_2141_, uint8_t v_t_2142_, lean_object* v_h_2143_, lean_object* v_k_2144_){
_start:
{
lean_inc(v_k_2144_);
return v_k_2144_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_ctorElim___boxed(lean_object* v_motive_2145_, lean_object* v_ctorIdx_2146_, lean_object* v_t_2147_, lean_object* v_h_2148_, lean_object* v_k_2149_){
_start:
{
uint8_t v_t_boxed_2150_; lean_object* v_res_2151_; 
v_t_boxed_2150_ = lean_unbox(v_t_2147_);
v_res_2151_ = lp_lean_x2dftml_LeanFtml_CTShape_ctorElim(v_motive_2145_, v_ctorIdx_2146_, v_t_boxed_2150_, v_h_2148_, v_k_2149_);
lean_dec(v_k_2149_);
lean_dec(v_ctorIdx_2146_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim___redArg(lean_object* v_equalsSpaceLine_2152_){
_start:
{
lean_inc(v_equalsSpaceLine_2152_);
return v_equalsSpaceLine_2152_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim___redArg___boxed(lean_object* v_equalsSpaceLine_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim___redArg(v_equalsSpaceLine_2153_);
lean_dec(v_equalsSpaceLine_2153_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim(lean_object* v_motive_2155_, uint8_t v_t_2156_, lean_object* v_h_2157_, lean_object* v_equalsSpaceLine_2158_){
_start:
{
lean_inc(v_equalsSpaceLine_2158_);
return v_equalsSpaceLine_2158_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim___boxed(lean_object* v_motive_2159_, lean_object* v_t_2160_, lean_object* v_h_2161_, lean_object* v_equalsSpaceLine_2162_){
_start:
{
uint8_t v_t_boxed_2163_; lean_object* v_res_2164_; 
v_t_boxed_2163_ = lean_unbox(v_t_2160_);
v_res_2164_ = lp_lean_x2dftml_LeanFtml_CTShape_equalsSpaceLine_elim(v_motive_2159_, v_t_boxed_2163_, v_h_2161_, v_equalsSpaceLine_2162_);
lean_dec(v_equalsSpaceLine_2162_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_other_elim___redArg(lean_object* v_other_2165_){
_start:
{
lean_inc(v_other_2165_);
return v_other_2165_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_other_elim___redArg___boxed(lean_object* v_other_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = lp_lean_x2dftml_LeanFtml_CTShape_other_elim___redArg(v_other_2166_);
lean_dec(v_other_2166_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_other_elim(lean_object* v_motive_2168_, uint8_t v_t_2169_, lean_object* v_h_2170_, lean_object* v_other_2171_){
_start:
{
lean_inc(v_other_2171_);
return v_other_2171_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CTShape_other_elim___boxed(lean_object* v_motive_2172_, lean_object* v_t_2173_, lean_object* v_h_2174_, lean_object* v_other_2175_){
_start:
{
uint8_t v_t_boxed_2176_; lean_object* v_res_2177_; 
v_t_boxed_2176_ = lean_unbox(v_t_2173_);
v_res_2177_ = lp_lean_x2dftml_LeanFtml_CTShape_other_elim(v_motive_2172_, v_t_boxed_2176_, v_h_2174_, v_other_2175_);
lean_dec(v_other_2175_);
return v_res_2177_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorIdx___impl(uint8_t v_x_2178_){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = lean_box(v_x_2178_);
v___x_2180_ = lean_obj_tag_nat(v___x_2179_);
lean_dec(v___x_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorIdx___impl___boxed(lean_object* v_x_2181_){
_start:
{
uint8_t v_x_4__boxed_2182_; lean_object* v_res_2183_; 
v_x_4__boxed_2182_ = lean_unbox(v_x_2181_);
v_res_2183_ = lp_lean_x2dftml_LeanFtml_DPShape_ctorIdx___impl(v_x_4__boxed_2182_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorElim___redArg(lean_object* v_k_2184_){
_start:
{
lean_inc(v_k_2184_);
return v_k_2184_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorElim___redArg___boxed(lean_object* v_k_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = lp_lean_x2dftml_LeanFtml_DPShape_ctorElim___redArg(v_k_2185_);
lean_dec(v_k_2185_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorElim(lean_object* v_motive_2187_, lean_object* v_ctorIdx_2188_, uint8_t v_t_2189_, lean_object* v_h_2190_, lean_object* v_k_2191_){
_start:
{
lean_inc(v_k_2191_);
return v_k_2191_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_ctorElim___boxed(lean_object* v_motive_2192_, lean_object* v_ctorIdx_2193_, lean_object* v_t_2194_, lean_object* v_h_2195_, lean_object* v_k_2196_){
_start:
{
uint8_t v_t_boxed_2197_; lean_object* v_res_2198_; 
v_t_boxed_2197_ = lean_unbox(v_t_2194_);
v_res_2198_ = lp_lean_x2dftml_LeanFtml_DPShape_ctorElim(v_motive_2192_, v_ctorIdx_2193_, v_t_boxed_2197_, v_h_2195_, v_k_2196_);
lean_dec(v_k_2196_);
lean_dec(v_ctorIdx_2193_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim___redArg(lean_object* v_closeOpenJoin_2199_){
_start:
{
lean_inc(v_closeOpenJoin_2199_);
return v_closeOpenJoin_2199_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim___redArg___boxed(lean_object* v_closeOpenJoin_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim___redArg(v_closeOpenJoin_2200_);
lean_dec(v_closeOpenJoin_2200_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim(lean_object* v_motive_2202_, uint8_t v_t_2203_, lean_object* v_h_2204_, lean_object* v_closeOpenJoin_2205_){
_start:
{
lean_inc(v_closeOpenJoin_2205_);
return v_closeOpenJoin_2205_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim___boxed(lean_object* v_motive_2206_, lean_object* v_t_2207_, lean_object* v_h_2208_, lean_object* v_closeOpenJoin_2209_){
_start:
{
uint8_t v_t_boxed_2210_; lean_object* v_res_2211_; 
v_t_boxed_2210_ = lean_unbox(v_t_2207_);
v_res_2211_ = lp_lean_x2dftml_LeanFtml_DPShape_closeOpenJoin_elim(v_motive_2206_, v_t_boxed_2210_, v_h_2208_, v_closeOpenJoin_2209_);
lean_dec(v_closeOpenJoin_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_other_elim___redArg(lean_object* v_other_2212_){
_start:
{
lean_inc(v_other_2212_);
return v_other_2212_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_other_elim___redArg___boxed(lean_object* v_other_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = lp_lean_x2dftml_LeanFtml_DPShape_other_elim___redArg(v_other_2213_);
lean_dec(v_other_2213_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_other_elim(lean_object* v_motive_2215_, uint8_t v_t_2216_, lean_object* v_h_2217_, lean_object* v_other_2218_){
_start:
{
lean_inc(v_other_2218_);
return v_other_2218_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DPShape_other_elim___boxed(lean_object* v_motive_2219_, lean_object* v_t_2220_, lean_object* v_h_2221_, lean_object* v_other_2222_){
_start:
{
uint8_t v_t_boxed_2223_; lean_object* v_res_2224_; 
v_t_boxed_2223_ = lean_unbox(v_t_2220_);
v_res_2224_ = lp_lean_x2dftml_LeanFtml_DPShape_other_elim(v_motive_2219_, v_t_boxed_2223_, v_h_2221_, v_other_2222_);
lean_dec(v_other_2222_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorIdx___impl(uint8_t v_x_2225_){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_box(v_x_2225_);
v___x_2227_ = lean_obj_tag_nat(v___x_2226_);
lean_dec(v___x_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorIdx___impl___boxed(lean_object* v_x_2228_){
_start:
{
uint8_t v_x_4__boxed_2229_; lean_object* v_res_2230_; 
v_x_4__boxed_2229_ = lean_unbox(v_x_2228_);
v_res_2230_ = lp_lean_x2dftml_LeanFtml_DAShape_ctorIdx___impl(v_x_4__boxed_2229_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorElim___redArg(lean_object* v_k_2231_){
_start:
{
lean_inc(v_k_2231_);
return v_k_2231_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorElim___redArg___boxed(lean_object* v_k_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = lp_lean_x2dftml_LeanFtml_DAShape_ctorElim___redArg(v_k_2232_);
lean_dec(v_k_2232_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorElim(lean_object* v_motive_2234_, lean_object* v_ctorIdx_2235_, uint8_t v_t_2236_, lean_object* v_h_2237_, lean_object* v_k_2238_){
_start:
{
lean_inc(v_k_2238_);
return v_k_2238_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_ctorElim___boxed(lean_object* v_motive_2239_, lean_object* v_ctorIdx_2240_, lean_object* v_t_2241_, lean_object* v_h_2242_, lean_object* v_k_2243_){
_start:
{
uint8_t v_t_boxed_2244_; lean_object* v_res_2245_; 
v_t_boxed_2244_ = lean_unbox(v_t_2241_);
v_res_2245_ = lp_lean_x2dftml_LeanFtml_DAShape_ctorElim(v_motive_2239_, v_ctorIdx_2240_, v_t_boxed_2244_, v_h_2242_, v_k_2243_);
lean_dec(v_k_2243_);
lean_dec(v_ctorIdx_2240_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eq_elim___redArg(lean_object* v_eq_2246_){
_start:
{
lean_inc(v_eq_2246_);
return v_eq_2246_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eq_elim___redArg___boxed(lean_object* v_eq_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = lp_lean_x2dftml_LeanFtml_DAShape_eq_elim___redArg(v_eq_2247_);
lean_dec(v_eq_2247_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eq_elim(lean_object* v_motive_2249_, uint8_t v_t_2250_, lean_object* v_h_2251_, lean_object* v_eq_2252_){
_start:
{
lean_inc(v_eq_2252_);
return v_eq_2252_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eq_elim___boxed(lean_object* v_motive_2253_, lean_object* v_t_2254_, lean_object* v_h_2255_, lean_object* v_eq_2256_){
_start:
{
uint8_t v_t_boxed_2257_; lean_object* v_res_2258_; 
v_t_boxed_2257_ = lean_unbox(v_t_2254_);
v_res_2258_ = lp_lean_x2dftml_LeanFtml_DAShape_eq_elim(v_motive_2253_, v_t_boxed_2257_, v_h_2255_, v_eq_2256_);
lean_dec(v_eq_2256_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_lt_elim___redArg(lean_object* v_lt_2259_){
_start:
{
lean_inc(v_lt_2259_);
return v_lt_2259_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_lt_elim___redArg___boxed(lean_object* v_lt_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = lp_lean_x2dftml_LeanFtml_DAShape_lt_elim___redArg(v_lt_2260_);
lean_dec(v_lt_2260_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_lt_elim(lean_object* v_motive_2262_, uint8_t v_t_2263_, lean_object* v_h_2264_, lean_object* v_lt_2265_){
_start:
{
lean_inc(v_lt_2265_);
return v_lt_2265_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_lt_elim___boxed(lean_object* v_motive_2266_, lean_object* v_t_2267_, lean_object* v_h_2268_, lean_object* v_lt_2269_){
_start:
{
uint8_t v_t_boxed_2270_; lean_object* v_res_2271_; 
v_t_boxed_2270_ = lean_unbox(v_t_2267_);
v_res_2271_ = lp_lean_x2dftml_LeanFtml_DAShape_lt_elim(v_motive_2266_, v_t_boxed_2270_, v_h_2268_, v_lt_2269_);
lean_dec(v_lt_2269_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_gt_elim___redArg(lean_object* v_gt_2272_){
_start:
{
lean_inc(v_gt_2272_);
return v_gt_2272_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_gt_elim___redArg___boxed(lean_object* v_gt_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = lp_lean_x2dftml_LeanFtml_DAShape_gt_elim___redArg(v_gt_2273_);
lean_dec(v_gt_2273_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_gt_elim(lean_object* v_motive_2275_, uint8_t v_t_2276_, lean_object* v_h_2277_, lean_object* v_gt_2278_){
_start:
{
lean_inc(v_gt_2278_);
return v_gt_2278_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_gt_elim___boxed(lean_object* v_motive_2279_, lean_object* v_t_2280_, lean_object* v_h_2281_, lean_object* v_gt_2282_){
_start:
{
uint8_t v_t_boxed_2283_; lean_object* v_res_2284_; 
v_t_boxed_2283_ = lean_unbox(v_t_2280_);
v_res_2284_ = lp_lean_x2dftml_LeanFtml_DAShape_gt_elim(v_motive_2279_, v_t_boxed_2283_, v_h_2281_, v_gt_2282_);
lean_dec(v_gt_2282_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim___redArg(lean_object* v_eqeq_2285_){
_start:
{
lean_inc(v_eqeq_2285_);
return v_eqeq_2285_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim___redArg___boxed(lean_object* v_eqeq_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim___redArg(v_eqeq_2286_);
lean_dec(v_eqeq_2286_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim(lean_object* v_motive_2288_, uint8_t v_t_2289_, lean_object* v_h_2290_, lean_object* v_eqeq_2291_){
_start:
{
lean_inc(v_eqeq_2291_);
return v_eqeq_2291_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim___boxed(lean_object* v_motive_2292_, lean_object* v_t_2293_, lean_object* v_h_2294_, lean_object* v_eqeq_2295_){
_start:
{
uint8_t v_t_boxed_2296_; lean_object* v_res_2297_; 
v_t_boxed_2296_ = lean_unbox(v_t_2293_);
v_res_2297_ = lp_lean_x2dftml_LeanFtml_DAShape_eqeq_elim(v_motive_2292_, v_t_boxed_2296_, v_h_2294_, v_eqeq_2295_);
lean_dec(v_eqeq_2295_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_nested_elim___redArg(lean_object* v_nested_2298_){
_start:
{
lean_inc(v_nested_2298_);
return v_nested_2298_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_nested_elim___redArg___boxed(lean_object* v_nested_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = lp_lean_x2dftml_LeanFtml_DAShape_nested_elim___redArg(v_nested_2299_);
lean_dec(v_nested_2299_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_nested_elim(lean_object* v_motive_2301_, uint8_t v_t_2302_, lean_object* v_h_2303_, lean_object* v_nested_2304_){
_start:
{
lean_inc(v_nested_2304_);
return v_nested_2304_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_nested_elim___boxed(lean_object* v_motive_2305_, lean_object* v_t_2306_, lean_object* v_h_2307_, lean_object* v_nested_2308_){
_start:
{
uint8_t v_t_boxed_2309_; lean_object* v_res_2310_; 
v_t_boxed_2309_ = lean_unbox(v_t_2306_);
v_res_2310_ = lp_lean_x2dftml_LeanFtml_DAShape_nested_elim(v_motive_2305_, v_t_boxed_2309_, v_h_2307_, v_nested_2308_);
lean_dec(v_nested_2308_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim___redArg(lean_object* v_unmatched_2311_){
_start:
{
lean_inc(v_unmatched_2311_);
return v_unmatched_2311_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim___redArg___boxed(lean_object* v_unmatched_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim___redArg(v_unmatched_2312_);
lean_dec(v_unmatched_2312_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim(lean_object* v_motive_2314_, uint8_t v_t_2315_, lean_object* v_h_2316_, lean_object* v_unmatched_2317_){
_start:
{
lean_inc(v_unmatched_2317_);
return v_unmatched_2317_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim___boxed(lean_object* v_motive_2318_, lean_object* v_t_2319_, lean_object* v_h_2320_, lean_object* v_unmatched_2321_){
_start:
{
uint8_t v_t_boxed_2322_; lean_object* v_res_2323_; 
v_t_boxed_2322_ = lean_unbox(v_t_2319_);
v_res_2323_ = lp_lean_x2dftml_LeanFtml_DAShape_unmatched_elim(v_motive_2318_, v_t_boxed_2322_, v_h_2320_, v_unmatched_2321_);
lean_dec(v_unmatched_2321_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorIdx___impl(lean_object* v_x_2324_){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = lean_obj_tag_nat(v_x_2324_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorIdx___impl___boxed(lean_object* v_x_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorIdx___impl(v_x_2326_);
lean_dec_ref(v_x_2326_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(lean_object* v_t_2328_, lean_object* v_k_2329_){
_start:
{
switch(lean_obj_tag(v_t_2328_))
{
case 1:
{
lean_object* v_s_2330_; lean_object* v___x_2331_; 
v_s_2330_ = lean_ctor_get(v_t_2328_, 0);
lean_inc(v_s_2330_);
lean_dec_ref_known(v_t_2328_, 1);
v___x_2331_ = lean_apply_1(v_k_2329_, v_s_2330_);
return v___x_2331_;
}
case 2:
{
uint8_t v_s_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v_s_2332_ = lean_ctor_get_uint8(v_t_2328_, 0);
lean_dec_ref_known(v_t_2328_, 0);
v___x_2333_ = lean_box(v_s_2332_);
v___x_2334_ = lean_apply_1(v_k_2329_, v___x_2333_);
return v___x_2334_;
}
case 5:
{
uint8_t v_s_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v_s_2335_ = lean_ctor_get_uint8(v_t_2328_, 0);
lean_dec_ref_known(v_t_2328_, 0);
v___x_2336_ = lean_box(v_s_2335_);
v___x_2337_ = lean_apply_1(v_k_2329_, v___x_2336_);
return v___x_2337_;
}
case 9:
{
uint8_t v_s_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v_s_2338_ = lean_ctor_get_uint8(v_t_2328_, 0);
lean_dec_ref_known(v_t_2328_, 0);
v___x_2339_ = lean_box(v_s_2338_);
v___x_2340_ = lean_apply_1(v_k_2329_, v___x_2339_);
return v___x_2340_;
}
case 10:
{
uint8_t v_s_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v_s_2341_ = lean_ctor_get_uint8(v_t_2328_, 0);
lean_dec_ref_known(v_t_2328_, 0);
v___x_2342_ = lean_box(v_s_2341_);
v___x_2343_ = lean_apply_1(v_k_2329_, v___x_2342_);
return v___x_2343_;
}
case 11:
{
uint8_t v_s_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v_s_2344_ = lean_ctor_get_uint8(v_t_2328_, 0);
lean_dec_ref_known(v_t_2328_, 0);
v___x_2345_ = lean_box(v_s_2344_);
v___x_2346_ = lean_apply_1(v_k_2329_, v___x_2345_);
return v___x_2346_;
}
case 12:
{
uint8_t v_s_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v_s_2347_ = lean_ctor_get_uint8(v_t_2328_, 0);
lean_dec_ref_known(v_t_2328_, 0);
v___x_2348_ = lean_box(v_s_2347_);
v___x_2349_ = lean_apply_1(v_k_2329_, v___x_2348_);
return v___x_2349_;
}
default: 
{
lean_object* v_s_2350_; lean_object* v___x_2351_; 
v_s_2350_ = lean_ctor_get(v_t_2328_, 0);
lean_inc_ref(v_s_2350_);
lean_dec_ref(v_t_2328_);
v___x_2351_ = lean_apply_1(v_k_2329_, v_s_2350_);
return v___x_2351_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim(lean_object* v_motive_2352_, lean_object* v_ctorIdx_2353_, lean_object* v_t_2354_, lean_object* v_h_2355_, lean_object* v_k_2356_){
_start:
{
lean_object* v___x_2357_; 
v___x_2357_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2354_, v_k_2356_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___boxed(lean_object* v_motive_2358_, lean_object* v_ctorIdx_2359_, lean_object* v_t_2360_, lean_object* v_h_2361_, lean_object* v_k_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim(v_motive_2358_, v_ctorIdx_2359_, v_t_2360_, v_h_2361_, v_k_2362_);
lean_dec(v_ctorIdx_2359_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_prefilter_elim___redArg(lean_object* v_t_2364_, lean_object* v_prefilter_2365_){
_start:
{
lean_object* v___x_2366_; 
v___x_2366_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2364_, v_prefilter_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_prefilter_elim(lean_object* v_motive_2367_, lean_object* v_t_2368_, lean_object* v_h_2369_, lean_object* v_prefilter_2370_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2368_, v_prefilter_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_delimiter_elim___redArg(lean_object* v_t_2372_, lean_object* v_delimiter_2373_){
_start:
{
lean_object* v___x_2374_; 
v___x_2374_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2372_, v_delimiter_2373_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_delimiter_elim(lean_object* v_motive_2375_, lean_object* v_t_2376_, lean_object* v_h_2377_, lean_object* v_delimiter_2378_){
_start:
{
lean_object* v___x_2379_; 
v___x_2379_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2376_, v_delimiter_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_concatlines_elim___redArg(lean_object* v_t_2380_, lean_object* v_concatlines_2381_){
_start:
{
lean_object* v___x_2382_; 
v___x_2382_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2380_, v_concatlines_2381_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_concatlines_elim(lean_object* v_motive_2383_, lean_object* v_t_2384_, lean_object* v_h_2385_, lean_object* v_concatlines_2386_){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2384_, v_concatlines_2386_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_tighten_elim___redArg(lean_object* v_t_2388_, lean_object* v_tighten_2389_){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2388_, v_tighten_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_tighten_elim(lean_object* v_motive_2391_, lean_object* v_t_2392_, lean_object* v_h_2393_, lean_object* v_tighten_2394_){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2392_, v_tighten_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_typography_elim___redArg(lean_object* v_t_2396_, lean_object* v_typography_2397_){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2396_, v_typography_2397_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_typography_elim(lean_object* v_motive_2399_, lean_object* v_t_2400_, lean_object* v_h_2401_, lean_object* v_typography_2402_){
_start:
{
lean_object* v___x_2403_; 
v___x_2403_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2400_, v_typography_2402_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_paragraph_elim___redArg(lean_object* v_t_2404_, lean_object* v_paragraph_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2404_, v_paragraph_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_paragraph_elim(lean_object* v_motive_2407_, lean_object* v_t_2408_, lean_object* v_h_2409_, lean_object* v_paragraph_2410_){
_start:
{
lean_object* v___x_2411_; 
v___x_2411_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2408_, v_paragraph_2410_);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_horiz_elim___redArg(lean_object* v_t_2412_, lean_object* v_horiz_2413_){
_start:
{
lean_object* v___x_2414_; 
v___x_2414_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2412_, v_horiz_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_horiz_elim(lean_object* v_motive_2415_, lean_object* v_t_2416_, lean_object* v_h_2417_, lean_object* v_horiz_2418_){
_start:
{
lean_object* v___x_2419_; 
v___x_2419_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2416_, v_horiz_2418_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_separator_elim___redArg(lean_object* v_t_2420_, lean_object* v_separator_2421_){
_start:
{
lean_object* v___x_2422_; 
v___x_2422_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2420_, v_separator_2421_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_separator_elim(lean_object* v_motive_2423_, lean_object* v_t_2424_, lean_object* v_h_2425_, lean_object* v_separator_2426_){
_start:
{
lean_object* v___x_2427_; 
v___x_2427_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2424_, v_separator_2426_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_clearfloat_elim___redArg(lean_object* v_t_2428_, lean_object* v_clearfloat_2429_){
_start:
{
lean_object* v___x_2430_; 
v___x_2430_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2428_, v_clearfloat_2429_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_clearfloat_elim(lean_object* v_motive_2431_, lean_object* v_t_2432_, lean_object* v_h_2433_, lean_object* v_clearfloat_2434_){
_start:
{
lean_object* v___x_2435_; 
v___x_2435_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2432_, v_clearfloat_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_brk_elim___redArg(lean_object* v_t_2436_, lean_object* v_brk_2437_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2436_, v_brk_2437_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_brk_elim(lean_object* v_motive_2439_, lean_object* v_t_2440_, lean_object* v_h_2441_, lean_object* v_brk_2442_){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2440_, v_brk_2442_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_center_elim___redArg(lean_object* v_t_2444_, lean_object* v_center_2445_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2444_, v_center_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_center_elim(lean_object* v_motive_2447_, lean_object* v_t_2448_, lean_object* v_h_2449_, lean_object* v_center_2450_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2448_, v_center_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_divprefilter_elim___redArg(lean_object* v_t_2452_, lean_object* v_divprefilter_2453_){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2452_, v_divprefilter_2453_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_divprefilter_elim(lean_object* v_motive_2455_, lean_object* v_t_2456_, lean_object* v_h_2457_, lean_object* v_divprefilter_2458_){
_start:
{
lean_object* v___x_2459_; 
v___x_2459_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2456_, v_divprefilter_2458_);
return v___x_2459_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_divalign_elim___redArg(lean_object* v_t_2460_, lean_object* v_divalign_2461_){
_start:
{
lean_object* v___x_2462_; 
v___x_2462_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2460_, v_divalign_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ProseShape_divalign_elim(lean_object* v_motive_2463_, lean_object* v_t_2464_, lean_object* v_h_2465_, lean_object* v_divalign_2466_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = lp_lean_x2dftml_LeanFtml_ProseShape_ctorElim___redArg(v_t_2464_, v_divalign_2466_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classWhen(uint8_t v_b_2468_, uint8_t v_c_2469_){
_start:
{
if (v_b_2468_ == 0)
{
lean_object* v___x_2470_; 
v___x_2470_ = lean_box(0);
return v___x_2470_;
}
else
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2471_ = lean_box(0);
v___x_2472_ = lean_box(v_c_2469_);
v___x_2473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
lean_ctor_set(v___x_2473_, 1, v___x_2471_);
return v___x_2473_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classWhen___boxed(lean_object* v_b_2474_, lean_object* v_c_2475_){
_start:
{
uint8_t v_b_boxed_2476_; uint8_t v_c_boxed_2477_; lean_object* v_res_2478_; 
v_b_boxed_2476_ = lean_unbox(v_b_2474_);
v_c_boxed_2477_ = lean_unbox(v_c_2475_);
v_res_2478_ = lp_lean_x2dftml_LeanFtml_classWhen(v_b_boxed_2476_, v_c_boxed_2477_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_pfBranches_spec__0(lean_object* v_s_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_){
_start:
{
if (lean_obj_tag(v_a_2480_) == 0)
{
lean_object* v___x_2482_; 
v___x_2482_ = l_List_reverse___redArg(v_a_2481_);
return v___x_2482_;
}
else
{
lean_object* v_head_2483_; lean_object* v_tail_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2503_; 
v_head_2483_ = lean_ctor_get(v_a_2480_, 0);
v_tail_2484_ = lean_ctor_get(v_a_2480_, 1);
v_isSharedCheck_2503_ = !lean_is_exclusive(v_a_2480_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2486_ = v_a_2480_;
v_isShared_2487_ = v_isSharedCheck_2503_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_tail_2484_);
lean_inc(v_head_2483_);
lean_dec(v_a_2480_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2503_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
uint8_t v___y_2494_; uint8_t v___x_2496_; 
v___x_2496_ = lean_unbox(v_head_2483_);
switch(v___x_2496_)
{
case 0:
{
uint8_t v_crlf_2497_; 
v_crlf_2497_ = lean_ctor_get_uint8(v_s_2479_, 0);
v___y_2494_ = v_crlf_2497_;
goto v___jp_2493_;
}
case 1:
{
uint8_t v_cr_2498_; 
v_cr_2498_ = lean_ctor_get_uint8(v_s_2479_, 1);
v___y_2494_ = v_cr_2498_;
goto v___jp_2493_;
}
case 2:
{
uint8_t v_wsLine_2499_; 
v_wsLine_2499_ = lean_ctor_get_uint8(v_s_2479_, 2);
v___y_2494_ = v_wsLine_2499_;
goto v___jp_2493_;
}
case 3:
{
uint8_t v_tab_2500_; 
v_tab_2500_ = lean_ctor_get_uint8(v_s_2479_, 3);
v___y_2494_ = v_tab_2500_;
goto v___jp_2493_;
}
case 4:
{
goto v___jp_2488_;
}
case 5:
{
uint8_t v_nlRun3_2501_; 
v_nlRun3_2501_ = lean_ctor_get_uint8(v_s_2479_, 4);
v___y_2494_ = v_nlRun3_2501_;
goto v___jp_2493_;
}
default: 
{
lean_del_object(v___x_2486_);
lean_dec(v_head_2483_);
v_a_2480_ = v_tail_2484_;
goto _start;
}
}
v___jp_2488_:
{
lean_object* v___x_2490_; 
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 1, v_a_2481_);
v___x_2490_ = v___x_2486_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_head_2483_);
lean_ctor_set(v_reuseFailAlloc_2492_, 1, v_a_2481_);
v___x_2490_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
v_a_2480_ = v_tail_2484_;
v_a_2481_ = v___x_2490_;
goto _start;
}
}
v___jp_2493_:
{
if (v___y_2494_ == 0)
{
lean_del_object(v___x_2486_);
lean_dec(v_head_2483_);
v_a_2480_ = v_tail_2484_;
goto _start;
}
else
{
goto v___jp_2488_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_pfBranches_spec__0___boxed(lean_object* v_s_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_pfBranches_spec__0(v_s_2504_, v_a_2505_, v_a_2506_);
lean_dec_ref(v_s_2504_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pfBranches(lean_object* v_s_2508_){
_start:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2509_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_allClasses));
v___x_2510_ = lean_box(0);
v___x_2511_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_pfBranches_spec__0(v_s_2508_, v___x_2509_, v___x_2510_);
return v___x_2511_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pfBranches___boxed(lean_object* v_s_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = lp_lean_x2dftml_LeanFtml_pfBranches(v_s_2512_);
lean_dec_ref(v_s_2512_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tnBranches_spec__0(lean_object* v_s_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_){
_start:
{
if (lean_obj_tag(v_a_2515_) == 0)
{
lean_object* v___x_2517_; 
v___x_2517_ = l_List_reverse___redArg(v_a_2516_);
return v___x_2517_;
}
else
{
lean_object* v_head_2518_; lean_object* v_tail_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2539_; 
v_head_2518_ = lean_ctor_get(v_a_2515_, 0);
v_tail_2519_ = lean_ctor_get(v_a_2515_, 1);
v_isSharedCheck_2539_ = !lean_is_exclusive(v_a_2515_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2521_ = v_a_2515_;
v_isShared_2522_ = v_isSharedCheck_2539_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_tail_2519_);
lean_inc(v_head_2518_);
lean_dec(v_a_2515_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2539_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
uint8_t v___y_2529_; uint8_t v___x_2531_; 
v___x_2531_ = lean_unbox(v_head_2518_);
switch(v___x_2531_)
{
case 11:
{
goto v___jp_2523_;
}
case 12:
{
uint8_t v_foldRun_2532_; 
v_foldRun_2532_ = lean_ctor_get_uint8(v_s_2514_, 0);
v___y_2529_ = v_foldRun_2532_;
goto v___jp_2528_;
}
case 13:
{
uint8_t v_colorStart_2533_; 
v_colorStart_2533_ = lean_ctor_get_uint8(v_s_2514_, 1);
v___y_2529_ = v_colorStart_2533_;
goto v___jp_2528_;
}
case 14:
{
uint8_t v_colorEnd_2534_; 
v_colorEnd_2534_ = lean_ctor_get_uint8(v_s_2514_, 2);
v___y_2529_ = v_colorEnd_2534_;
goto v___jp_2528_;
}
case 15:
{
uint8_t v_edgeTrim_2535_; 
v_edgeTrim_2535_ = lean_ctor_get_uint8(v_s_2514_, 3);
v___y_2529_ = v_edgeTrim_2535_;
goto v___jp_2528_;
}
case 16:
{
uint8_t v_colorStart_2536_; 
v_colorStart_2536_ = lean_ctor_get_uint8(v_s_2514_, 1);
if (v_colorStart_2536_ == 0)
{
uint8_t v_colorEnd_2537_; 
v_colorEnd_2537_ = lean_ctor_get_uint8(v_s_2514_, 2);
v___y_2529_ = v_colorEnd_2537_;
goto v___jp_2528_;
}
else
{
goto v___jp_2523_;
}
}
default: 
{
lean_del_object(v___x_2521_);
lean_dec(v_head_2518_);
v_a_2515_ = v_tail_2519_;
goto _start;
}
}
v___jp_2523_:
{
lean_object* v___x_2525_; 
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 1, v_a_2516_);
v___x_2525_ = v___x_2521_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_head_2518_);
lean_ctor_set(v_reuseFailAlloc_2527_, 1, v_a_2516_);
v___x_2525_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
v_a_2515_ = v_tail_2519_;
v_a_2516_ = v___x_2525_;
goto _start;
}
}
v___jp_2528_:
{
if (v___y_2529_ == 0)
{
lean_del_object(v___x_2521_);
lean_dec(v_head_2518_);
v_a_2515_ = v_tail_2519_;
goto _start;
}
else
{
goto v___jp_2523_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tnBranches_spec__0___boxed(lean_object* v_s_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tnBranches_spec__0(v_s_2540_, v_a_2541_, v_a_2542_);
lean_dec_ref(v_s_2540_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tnBranches(lean_object* v_s_2544_){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2545_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_allClasses));
v___x_2546_ = lean_box(0);
v___x_2547_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tnBranches_spec__0(v_s_2544_, v___x_2545_, v___x_2546_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tnBranches___boxed(lean_object* v_s_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = lp_lean_x2dftml_LeanFtml_tnBranches(v_s_2548_);
lean_dec_ref(v_s_2548_);
return v_res_2549_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_tyAny(lean_object* v_s_2550_){
_start:
{
uint8_t v_qDouble_2551_; 
v_qDouble_2551_ = lean_ctor_get_uint8(v_s_2550_, 0);
if (v_qDouble_2551_ == 0)
{
uint8_t v_qComma_2552_; 
v_qComma_2552_ = lean_ctor_get_uint8(v_s_2550_, 1);
if (v_qComma_2552_ == 0)
{
uint8_t v_qSingle_2553_; 
v_qSingle_2553_ = lean_ctor_get_uint8(v_s_2550_, 2);
if (v_qSingle_2553_ == 0)
{
uint8_t v_lAngle_2554_; 
v_lAngle_2554_ = lean_ctor_get_uint8(v_s_2550_, 3);
if (v_lAngle_2554_ == 0)
{
uint8_t v_rAngle_2555_; 
v_rAngle_2555_ = lean_ctor_get_uint8(v_s_2550_, 4);
if (v_rAngle_2555_ == 0)
{
uint8_t v_numSpace_2556_; 
v_numSpace_2556_ = lean_ctor_get_uint8(v_s_2550_, 5);
if (v_numSpace_2556_ == 0)
{
uint8_t v_unit_2557_; 
v_unit_2557_ = lean_ctor_get_uint8(v_s_2550_, 6);
if (v_unit_2557_ == 0)
{
uint8_t v_ellipsis_2558_; 
v_ellipsis_2558_ = lean_ctor_get_uint8(v_s_2550_, 7);
if (v_ellipsis_2558_ == 0)
{
uint8_t v_dash2_2559_; 
v_dash2_2559_ = lean_ctor_get_uint8(v_s_2550_, 8);
return v_dash2_2559_;
}
else
{
return v_ellipsis_2558_;
}
}
else
{
return v_unit_2557_;
}
}
else
{
return v_numSpace_2556_;
}
}
else
{
return v_rAngle_2555_;
}
}
else
{
return v_lAngle_2554_;
}
}
else
{
return v_qSingle_2553_;
}
}
else
{
return v_qComma_2552_;
}
}
else
{
return v_qDouble_2551_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tyAny___boxed(lean_object* v_s_2560_){
_start:
{
uint8_t v_res_2561_; lean_object* v_r_2562_; 
v_res_2561_ = lp_lean_x2dftml_LeanFtml_tyAny(v_s_2560_);
lean_dec_ref(v_s_2560_);
v_r_2562_ = lean_box(v_res_2561_);
return v_r_2562_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tyBranches_spec__0(lean_object* v_s_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_){
_start:
{
if (lean_obj_tag(v_a_2564_) == 0)
{
lean_object* v___x_2566_; 
v___x_2566_ = l_List_reverse___redArg(v_a_2565_);
return v___x_2566_;
}
else
{
lean_object* v_head_2567_; lean_object* v_tail_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2593_; 
v_head_2567_ = lean_ctor_get(v_a_2564_, 0);
v_tail_2568_ = lean_ctor_get(v_a_2564_, 1);
v_isSharedCheck_2593_ = !lean_is_exclusive(v_a_2564_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2570_ = v_a_2564_;
v_isShared_2571_ = v_isSharedCheck_2593_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_tail_2568_);
lean_inc(v_head_2567_);
lean_dec(v_a_2564_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2593_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
uint8_t v___y_2578_; uint8_t v___x_2580_; 
v___x_2580_ = lean_unbox(v_head_2567_);
switch(v___x_2580_)
{
case 17:
{
uint8_t v_qDouble_2581_; 
v_qDouble_2581_ = lean_ctor_get_uint8(v_s_2563_, 0);
v___y_2578_ = v_qDouble_2581_;
goto v___jp_2577_;
}
case 18:
{
uint8_t v_qComma_2582_; 
v_qComma_2582_ = lean_ctor_get_uint8(v_s_2563_, 1);
v___y_2578_ = v_qComma_2582_;
goto v___jp_2577_;
}
case 19:
{
uint8_t v_qSingle_2583_; 
v_qSingle_2583_ = lean_ctor_get_uint8(v_s_2563_, 2);
v___y_2578_ = v_qSingle_2583_;
goto v___jp_2577_;
}
case 20:
{
uint8_t v_lAngle_2584_; 
v_lAngle_2584_ = lean_ctor_get_uint8(v_s_2563_, 3);
v___y_2578_ = v_lAngle_2584_;
goto v___jp_2577_;
}
case 21:
{
uint8_t v_rAngle_2585_; 
v_rAngle_2585_ = lean_ctor_get_uint8(v_s_2563_, 4);
v___y_2578_ = v_rAngle_2585_;
goto v___jp_2577_;
}
case 22:
{
uint8_t v_numSpace_2586_; 
v_numSpace_2586_ = lean_ctor_get_uint8(v_s_2563_, 5);
v___y_2578_ = v_numSpace_2586_;
goto v___jp_2577_;
}
case 23:
{
uint8_t v_unit_2587_; 
v_unit_2587_ = lean_ctor_get_uint8(v_s_2563_, 6);
v___y_2578_ = v_unit_2587_;
goto v___jp_2577_;
}
case 24:
{
uint8_t v_ellipsis_2588_; 
v_ellipsis_2588_ = lean_ctor_get_uint8(v_s_2563_, 7);
v___y_2578_ = v_ellipsis_2588_;
goto v___jp_2577_;
}
case 25:
{
uint8_t v_dash2_2589_; 
v_dash2_2589_ = lean_ctor_get_uint8(v_s_2563_, 8);
v___y_2578_ = v_dash2_2589_;
goto v___jp_2577_;
}
case 26:
{
uint8_t v___x_2590_; 
v___x_2590_ = lp_lean_x2dftml_LeanFtml_tyAny(v_s_2563_);
if (v___x_2590_ == 0)
{
goto v___jp_2572_;
}
else
{
lean_del_object(v___x_2570_);
lean_dec(v_head_2567_);
v_a_2564_ = v_tail_2568_;
goto _start;
}
}
default: 
{
lean_del_object(v___x_2570_);
lean_dec(v_head_2567_);
v_a_2564_ = v_tail_2568_;
goto _start;
}
}
v___jp_2572_:
{
lean_object* v___x_2574_; 
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 1, v_a_2565_);
v___x_2574_ = v___x_2570_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_head_2567_);
lean_ctor_set(v_reuseFailAlloc_2576_, 1, v_a_2565_);
v___x_2574_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
v_a_2564_ = v_tail_2568_;
v_a_2565_ = v___x_2574_;
goto _start;
}
}
v___jp_2577_:
{
if (v___y_2578_ == 0)
{
lean_del_object(v___x_2570_);
lean_dec(v_head_2567_);
v_a_2564_ = v_tail_2568_;
goto _start;
}
else
{
goto v___jp_2572_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tyBranches_spec__0___boxed(lean_object* v_s_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tyBranches_spec__0(v_s_2594_, v_a_2595_, v_a_2596_);
lean_dec_ref(v_s_2594_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tyBranches(lean_object* v_s_2598_){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2599_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_allClasses));
v___x_2600_ = lean_box(0);
v___x_2601_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tyBranches_spec__0(v_s_2598_, v___x_2599_, v___x_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tyBranches___boxed(lean_object* v_s_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = lp_lean_x2dftml_LeanFtml_tyBranches(v_s_2602_);
lean_dec_ref(v_s_2602_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hzBranches(lean_object* v_s_2612_){
_start:
{
uint8_t v_alone_2615_; 
v_alone_2615_ = lean_ctor_get_uint8(v_s_2612_, sizeof(void*)*1);
if (v_alone_2615_ == 0)
{
goto v___jp_2613_;
}
else
{
lean_object* v_dashes_2616_; lean_object* v___x_2617_; uint8_t v___x_2618_; 
v_dashes_2616_ = lean_ctor_get(v_s_2612_, 0);
v___x_2617_ = lean_unsigned_to_nat(4u);
v___x_2618_ = lean_nat_dec_le(v___x_2617_, v_dashes_2616_);
if (v___x_2618_ == 0)
{
goto v___jp_2613_;
}
else
{
lean_object* v___x_2619_; 
v___x_2619_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_hzBranches___closed__1));
return v___x_2619_;
}
}
v___jp_2613_:
{
lean_object* v___x_2614_; 
v___x_2614_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_hzBranches___closed__0));
return v___x_2614_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hzBranches___boxed(lean_object* v_s_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = lp_lean_x2dftml_LeanFtml_hzBranches(v_s_2620_);
lean_dec_ref(v_s_2620_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spBranches(lean_object* v_s_2630_){
_start:
{
uint8_t v_alone_2633_; 
v_alone_2633_ = lean_ctor_get_uint8(v_s_2630_, sizeof(void*)*1);
if (v_alone_2633_ == 0)
{
goto v___jp_2631_;
}
else
{
lean_object* v_equals_2634_; lean_object* v___x_2635_; uint8_t v___x_2636_; 
v_equals_2634_ = lean_ctor_get(v_s_2630_, 0);
v___x_2635_ = lean_unsigned_to_nat(4u);
v___x_2636_ = lean_nat_dec_le(v___x_2635_, v_equals_2634_);
if (v___x_2636_ == 0)
{
goto v___jp_2631_;
}
else
{
lean_object* v___x_2637_; 
v___x_2637_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spBranches___closed__1));
return v___x_2637_;
}
}
v___jp_2631_:
{
lean_object* v___x_2632_; 
v___x_2632_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spBranches___closed__0));
return v___x_2632_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spBranches___boxed(lean_object* v_s_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = lp_lean_x2dftml_LeanFtml_spBranches(v_s_2638_);
lean_dec_ref(v_s_2638_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cfBranches(lean_object* v_s_2660_){
_start:
{
uint8_t v_alone_2663_; 
v_alone_2663_ = lean_ctor_get_uint8(v_s_2660_, sizeof(void*)*1 + 1);
if (v_alone_2663_ == 0)
{
goto v___jp_2661_;
}
else
{
lean_object* v_tildes_2664_; uint8_t v_side_2665_; lean_object* v___x_2666_; uint8_t v___x_2667_; 
v_tildes_2664_ = lean_ctor_get(v_s_2660_, 0);
v_side_2665_ = lean_ctor_get_uint8(v_s_2660_, sizeof(void*)*1);
v___x_2666_ = lean_unsigned_to_nat(4u);
v___x_2667_ = lean_nat_dec_lt(v_tildes_2664_, v___x_2666_);
if (v___x_2667_ == 0)
{
switch(v_side_2665_)
{
case 0:
{
lean_object* v___x_2668_; 
v___x_2668_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cfBranches___closed__1));
return v___x_2668_;
}
case 1:
{
lean_object* v___x_2669_; 
v___x_2669_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cfBranches___closed__2));
return v___x_2669_;
}
case 2:
{
lean_object* v___x_2670_; 
v___x_2670_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cfBranches___closed__3));
return v___x_2670_;
}
default: 
{
lean_object* v___x_2671_; 
v___x_2671_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cfBranches___closed__4));
return v___x_2671_;
}
}
}
else
{
goto v___jp_2661_;
}
}
v___jp_2661_:
{
lean_object* v___x_2662_; 
v___x_2662_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cfBranches___closed__0));
return v___x_2662_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cfBranches___boxed(lean_object* v_s_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = lp_lean_x2dftml_LeanFtml_cfBranches(v_s_2672_);
lean_dec_ref(v_s_2672_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classify(lean_object* v_x_2758_){
_start:
{
switch(lean_obj_tag(v_x_2758_))
{
case 0:
{
lean_object* v_s_2759_; lean_object* v___x_2760_; 
v_s_2759_ = lean_ctor_get(v_x_2758_, 0);
v___x_2760_ = lp_lean_x2dftml_LeanFtml_pfBranches(v_s_2759_);
return v___x_2760_;
}
case 1:
{
lean_object* v___x_2761_; 
v___x_2761_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__0));
return v___x_2761_;
}
case 2:
{
uint8_t v_s_2762_; 
v_s_2762_ = lean_ctor_get_uint8(v_x_2758_, 0);
switch(v_s_2762_)
{
case 0:
{
lean_object* v___x_2763_; 
v___x_2763_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__1));
return v___x_2763_;
}
case 1:
{
lean_object* v___x_2764_; 
v___x_2764_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__2));
return v___x_2764_;
}
case 2:
{
lean_object* v___x_2765_; 
v___x_2765_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__3));
return v___x_2765_;
}
default: 
{
lean_object* v___x_2766_; 
v___x_2766_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__4));
return v___x_2766_;
}
}
}
case 3:
{
lean_object* v_s_2767_; lean_object* v___x_2768_; 
v_s_2767_ = lean_ctor_get(v_x_2758_, 0);
v___x_2768_ = lp_lean_x2dftml_LeanFtml_tnBranches(v_s_2767_);
return v___x_2768_;
}
case 4:
{
lean_object* v_s_2769_; lean_object* v___x_2770_; 
v_s_2769_ = lean_ctor_get(v_x_2758_, 0);
v___x_2770_ = lp_lean_x2dftml_LeanFtml_tyBranches(v_s_2769_);
return v___x_2770_;
}
case 5:
{
uint8_t v_s_2771_; 
v_s_2771_ = lean_ctor_get_uint8(v_x_2758_, 0);
switch(v_s_2771_)
{
case 0:
{
lean_object* v___x_2772_; 
v___x_2772_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__5));
return v___x_2772_;
}
case 1:
{
lean_object* v___x_2773_; 
v___x_2773_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__6));
return v___x_2773_;
}
case 2:
{
lean_object* v___x_2774_; 
v___x_2774_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__7));
return v___x_2774_;
}
case 3:
{
lean_object* v___x_2775_; 
v___x_2775_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__8));
return v___x_2775_;
}
default: 
{
lean_object* v___x_2776_; 
v___x_2776_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__9));
return v___x_2776_;
}
}
}
case 6:
{
lean_object* v_s_2777_; lean_object* v___x_2778_; 
v_s_2777_ = lean_ctor_get(v_x_2758_, 0);
v___x_2778_ = lp_lean_x2dftml_LeanFtml_hzBranches(v_s_2777_);
return v___x_2778_;
}
case 7:
{
lean_object* v_s_2779_; lean_object* v___x_2780_; 
v_s_2779_ = lean_ctor_get(v_x_2758_, 0);
v___x_2780_ = lp_lean_x2dftml_LeanFtml_spBranches(v_s_2779_);
return v___x_2780_;
}
case 8:
{
lean_object* v_s_2781_; lean_object* v___x_2782_; 
v_s_2781_ = lean_ctor_get(v_x_2758_, 0);
v___x_2782_ = lp_lean_x2dftml_LeanFtml_cfBranches(v_s_2781_);
return v___x_2782_;
}
case 9:
{
uint8_t v_s_2783_; 
v_s_2783_ = lean_ctor_get_uint8(v_x_2758_, 0);
if (v_s_2783_ == 0)
{
lean_object* v___x_2784_; 
v___x_2784_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__10));
return v___x_2784_;
}
else
{
lean_object* v___x_2785_; 
v___x_2785_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__11));
return v___x_2785_;
}
}
case 10:
{
uint8_t v_s_2786_; 
v_s_2786_ = lean_ctor_get_uint8(v_x_2758_, 0);
if (v_s_2786_ == 0)
{
lean_object* v___x_2787_; 
v___x_2787_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__12));
return v___x_2787_;
}
else
{
lean_object* v___x_2788_; 
v___x_2788_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__13));
return v___x_2788_;
}
}
case 11:
{
uint8_t v_s_2789_; 
v_s_2789_ = lean_ctor_get_uint8(v_x_2758_, 0);
if (v_s_2789_ == 0)
{
lean_object* v___x_2790_; 
v___x_2790_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__14));
return v___x_2790_;
}
else
{
lean_object* v___x_2791_; 
v___x_2791_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__15));
return v___x_2791_;
}
}
default: 
{
uint8_t v_s_2792_; 
v_s_2792_ = lean_ctor_get_uint8(v_x_2758_, 0);
switch(v_s_2792_)
{
case 0:
{
lean_object* v___x_2793_; 
v___x_2793_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__16));
return v___x_2793_;
}
case 1:
{
lean_object* v___x_2794_; 
v___x_2794_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__17));
return v___x_2794_;
}
case 2:
{
lean_object* v___x_2795_; 
v___x_2795_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__18));
return v___x_2795_;
}
case 3:
{
lean_object* v___x_2796_; 
v___x_2796_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__19));
return v___x_2796_;
}
case 4:
{
lean_object* v___x_2797_; 
v___x_2797_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classify___closed__20));
return v___x_2797_;
}
default: 
{
lean_object* v___x_2798_; 
v___x_2798_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_allClasses___closed__0));
return v___x_2798_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classify___boxed(lean_object* v_x_2799_){
_start:
{
lean_object* v_res_2800_; 
v_res_2800_ = lp_lean_x2dftml_LeanFtml_classify(v_x_2799_);
lean_dec_ref(v_x_2799_);
return v_res_2800_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_classMemDecidable___closed__0(void){
_start:
{
lean_object* v___x_2801_; lean_object* v___f_2802_; 
v___x_2801_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqProseClass___boxed), 2, 0);
v___f_2802_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2802_, 0, v___x_2801_);
return v___f_2802_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_classMemDecidable(lean_object* v_s_2803_, uint8_t v_c_2804_){
_start:
{
lean_object* v___f_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
v___f_2805_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_classMemDecidable___closed__0, &lp_lean_x2dftml_LeanFtml_classMemDecidable___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_classMemDecidable___closed__0);
v___x_2806_ = lp_lean_x2dftml_LeanFtml_classify(v_s_2803_);
v___x_2807_ = lean_box(v_c_2804_);
v___x_2808_ = l_List_elem___redArg(v___f_2805_, v___x_2807_, v___x_2806_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classMemDecidable___boxed(lean_object* v_s_2809_, lean_object* v_c_2810_){
_start:
{
uint8_t v_c_boxed_2811_; uint8_t v_res_2812_; lean_object* v_r_2813_; 
v_c_boxed_2811_ = lean_unbox(v_c_2810_);
v_res_2812_ = lp_lean_x2dftml_LeanFtml_classMemDecidable(v_s_2809_, v_c_boxed_2811_);
lean_dec_ref(v_s_2809_);
v_r_2813_ = lean_box(v_res_2812_);
return v_r_2813_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter___redArg(uint8_t v_c_2814_, lean_object* v_h__1_2815_, lean_object* v_h__2_2816_, lean_object* v_h__3_2817_, lean_object* v_h__4_2818_, lean_object* v_h__5_2819_, lean_object* v_h__6_2820_, lean_object* v_h__7_2821_){
_start:
{
switch(v_c_2814_)
{
case 0:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; 
lean_dec(v_h__7_2821_);
lean_dec(v_h__6_2820_);
lean_dec(v_h__5_2819_);
lean_dec(v_h__4_2818_);
lean_dec(v_h__3_2817_);
lean_dec(v_h__2_2816_);
v___x_2822_ = lean_box(0);
v___x_2823_ = lean_apply_1(v_h__1_2815_, v___x_2822_);
return v___x_2823_;
}
case 1:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; 
lean_dec(v_h__7_2821_);
lean_dec(v_h__6_2820_);
lean_dec(v_h__5_2819_);
lean_dec(v_h__4_2818_);
lean_dec(v_h__3_2817_);
lean_dec(v_h__1_2815_);
v___x_2824_ = lean_box(0);
v___x_2825_ = lean_apply_1(v_h__2_2816_, v___x_2824_);
return v___x_2825_;
}
case 2:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
lean_dec(v_h__7_2821_);
lean_dec(v_h__6_2820_);
lean_dec(v_h__5_2819_);
lean_dec(v_h__4_2818_);
lean_dec(v_h__2_2816_);
lean_dec(v_h__1_2815_);
v___x_2826_ = lean_box(0);
v___x_2827_ = lean_apply_1(v_h__3_2817_, v___x_2826_);
return v___x_2827_;
}
case 3:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; 
lean_dec(v_h__7_2821_);
lean_dec(v_h__6_2820_);
lean_dec(v_h__5_2819_);
lean_dec(v_h__3_2817_);
lean_dec(v_h__2_2816_);
lean_dec(v_h__1_2815_);
v___x_2828_ = lean_box(0);
v___x_2829_ = lean_apply_1(v_h__4_2818_, v___x_2828_);
return v___x_2829_;
}
case 4:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; 
lean_dec(v_h__7_2821_);
lean_dec(v_h__6_2820_);
lean_dec(v_h__4_2818_);
lean_dec(v_h__3_2817_);
lean_dec(v_h__2_2816_);
lean_dec(v_h__1_2815_);
v___x_2830_ = lean_box(0);
v___x_2831_ = lean_apply_1(v_h__5_2819_, v___x_2830_);
return v___x_2831_;
}
case 5:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; 
lean_dec(v_h__7_2821_);
lean_dec(v_h__5_2819_);
lean_dec(v_h__4_2818_);
lean_dec(v_h__3_2817_);
lean_dec(v_h__2_2816_);
lean_dec(v_h__1_2815_);
v___x_2832_ = lean_box(0);
v___x_2833_ = lean_apply_1(v_h__6_2820_, v___x_2832_);
return v___x_2833_;
}
default: 
{
lean_object* v___x_2834_; lean_object* v___x_2835_; 
lean_dec(v_h__6_2820_);
lean_dec(v_h__5_2819_);
lean_dec(v_h__4_2818_);
lean_dec(v_h__3_2817_);
lean_dec(v_h__2_2816_);
lean_dec(v_h__1_2815_);
v___x_2834_ = lean_box(v_c_2814_);
v___x_2835_ = lean_apply_7(v_h__7_2821_, v___x_2834_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2835_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter___redArg___boxed(lean_object* v_c_2836_, lean_object* v_h__1_2837_, lean_object* v_h__2_2838_, lean_object* v_h__3_2839_, lean_object* v_h__4_2840_, lean_object* v_h__5_2841_, lean_object* v_h__6_2842_, lean_object* v_h__7_2843_){
_start:
{
uint8_t v_c_38__boxed_2844_; lean_object* v_res_2845_; 
v_c_38__boxed_2844_ = lean_unbox(v_c_2836_);
v_res_2845_ = lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter___redArg(v_c_38__boxed_2844_, v_h__1_2837_, v_h__2_2838_, v_h__3_2839_, v_h__4_2840_, v_h__5_2841_, v_h__6_2842_, v_h__7_2843_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter(lean_object* v_motive_2846_, uint8_t v_c_2847_, lean_object* v_h__1_2848_, lean_object* v_h__2_2849_, lean_object* v_h__3_2850_, lean_object* v_h__4_2851_, lean_object* v_h__5_2852_, lean_object* v_h__6_2853_, lean_object* v_h__7_2854_){
_start:
{
switch(v_c_2847_)
{
case 0:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; 
lean_dec(v_h__7_2854_);
lean_dec(v_h__6_2853_);
lean_dec(v_h__5_2852_);
lean_dec(v_h__4_2851_);
lean_dec(v_h__3_2850_);
lean_dec(v_h__2_2849_);
v___x_2855_ = lean_box(0);
v___x_2856_ = lean_apply_1(v_h__1_2848_, v___x_2855_);
return v___x_2856_;
}
case 1:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
lean_dec(v_h__7_2854_);
lean_dec(v_h__6_2853_);
lean_dec(v_h__5_2852_);
lean_dec(v_h__4_2851_);
lean_dec(v_h__3_2850_);
lean_dec(v_h__1_2848_);
v___x_2857_ = lean_box(0);
v___x_2858_ = lean_apply_1(v_h__2_2849_, v___x_2857_);
return v___x_2858_;
}
case 2:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; 
lean_dec(v_h__7_2854_);
lean_dec(v_h__6_2853_);
lean_dec(v_h__5_2852_);
lean_dec(v_h__4_2851_);
lean_dec(v_h__2_2849_);
lean_dec(v_h__1_2848_);
v___x_2859_ = lean_box(0);
v___x_2860_ = lean_apply_1(v_h__3_2850_, v___x_2859_);
return v___x_2860_;
}
case 3:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
lean_dec(v_h__7_2854_);
lean_dec(v_h__6_2853_);
lean_dec(v_h__5_2852_);
lean_dec(v_h__3_2850_);
lean_dec(v_h__2_2849_);
lean_dec(v_h__1_2848_);
v___x_2861_ = lean_box(0);
v___x_2862_ = lean_apply_1(v_h__4_2851_, v___x_2861_);
return v___x_2862_;
}
case 4:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; 
lean_dec(v_h__7_2854_);
lean_dec(v_h__6_2853_);
lean_dec(v_h__4_2851_);
lean_dec(v_h__3_2850_);
lean_dec(v_h__2_2849_);
lean_dec(v_h__1_2848_);
v___x_2863_ = lean_box(0);
v___x_2864_ = lean_apply_1(v_h__5_2852_, v___x_2863_);
return v___x_2864_;
}
case 5:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
lean_dec(v_h__7_2854_);
lean_dec(v_h__5_2852_);
lean_dec(v_h__4_2851_);
lean_dec(v_h__3_2850_);
lean_dec(v_h__2_2849_);
lean_dec(v_h__1_2848_);
v___x_2865_ = lean_box(0);
v___x_2866_ = lean_apply_1(v_h__6_2853_, v___x_2865_);
return v___x_2866_;
}
default: 
{
lean_object* v___x_2867_; lean_object* v___x_2868_; 
lean_dec(v_h__6_2853_);
lean_dec(v_h__5_2852_);
lean_dec(v_h__4_2851_);
lean_dec(v_h__3_2850_);
lean_dec(v_h__2_2849_);
lean_dec(v_h__1_2848_);
v___x_2867_ = lean_box(v_c_2847_);
v___x_2868_ = lean_apply_7(v_h__7_2854_, v___x_2867_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2868_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter___boxed(lean_object* v_motive_2869_, lean_object* v_c_2870_, lean_object* v_h__1_2871_, lean_object* v_h__2_2872_, lean_object* v_h__3_2873_, lean_object* v_h__4_2874_, lean_object* v_h__5_2875_, lean_object* v_h__6_2876_, lean_object* v_h__7_2877_){
_start:
{
uint8_t v_c_69__boxed_2878_; lean_object* v_res_2879_; 
v_c_69__boxed_2878_ = lean_unbox(v_c_2870_);
v_res_2879_ = lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_pfBranches_match__1_splitter(v_motive_2869_, v_c_69__boxed_2878_, v_h__1_2871_, v_h__2_2872_, v_h__3_2873_, v_h__4_2874_, v_h__5_2875_, v_h__6_2876_, v_h__7_2877_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter___redArg(uint8_t v_c_2880_, lean_object* v_h__1_2881_, lean_object* v_h__2_2882_, lean_object* v_h__3_2883_, lean_object* v_h__4_2884_, lean_object* v_h__5_2885_, lean_object* v_h__6_2886_, lean_object* v_h__7_2887_){
_start:
{
switch(v_c_2880_)
{
case 11:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; 
lean_dec(v_h__7_2887_);
lean_dec(v_h__6_2886_);
lean_dec(v_h__5_2885_);
lean_dec(v_h__4_2884_);
lean_dec(v_h__3_2883_);
lean_dec(v_h__2_2882_);
v___x_2888_ = lean_box(0);
v___x_2889_ = lean_apply_1(v_h__1_2881_, v___x_2888_);
return v___x_2889_;
}
case 12:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
lean_dec(v_h__7_2887_);
lean_dec(v_h__6_2886_);
lean_dec(v_h__5_2885_);
lean_dec(v_h__4_2884_);
lean_dec(v_h__3_2883_);
lean_dec(v_h__1_2881_);
v___x_2890_ = lean_box(0);
v___x_2891_ = lean_apply_1(v_h__2_2882_, v___x_2890_);
return v___x_2891_;
}
case 13:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
lean_dec(v_h__7_2887_);
lean_dec(v_h__6_2886_);
lean_dec(v_h__5_2885_);
lean_dec(v_h__4_2884_);
lean_dec(v_h__2_2882_);
lean_dec(v_h__1_2881_);
v___x_2892_ = lean_box(0);
v___x_2893_ = lean_apply_1(v_h__3_2883_, v___x_2892_);
return v___x_2893_;
}
case 14:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
lean_dec(v_h__7_2887_);
lean_dec(v_h__6_2886_);
lean_dec(v_h__5_2885_);
lean_dec(v_h__3_2883_);
lean_dec(v_h__2_2882_);
lean_dec(v_h__1_2881_);
v___x_2894_ = lean_box(0);
v___x_2895_ = lean_apply_1(v_h__4_2884_, v___x_2894_);
return v___x_2895_;
}
case 15:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; 
lean_dec(v_h__7_2887_);
lean_dec(v_h__6_2886_);
lean_dec(v_h__4_2884_);
lean_dec(v_h__3_2883_);
lean_dec(v_h__2_2882_);
lean_dec(v_h__1_2881_);
v___x_2896_ = lean_box(0);
v___x_2897_ = lean_apply_1(v_h__5_2885_, v___x_2896_);
return v___x_2897_;
}
case 16:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; 
lean_dec(v_h__7_2887_);
lean_dec(v_h__5_2885_);
lean_dec(v_h__4_2884_);
lean_dec(v_h__3_2883_);
lean_dec(v_h__2_2882_);
lean_dec(v_h__1_2881_);
v___x_2898_ = lean_box(0);
v___x_2899_ = lean_apply_1(v_h__6_2886_, v___x_2898_);
return v___x_2899_;
}
default: 
{
lean_object* v___x_2900_; lean_object* v___x_2901_; 
lean_dec(v_h__6_2886_);
lean_dec(v_h__5_2885_);
lean_dec(v_h__4_2884_);
lean_dec(v_h__3_2883_);
lean_dec(v_h__2_2882_);
lean_dec(v_h__1_2881_);
v___x_2900_ = lean_box(v_c_2880_);
v___x_2901_ = lean_apply_7(v_h__7_2887_, v___x_2900_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2901_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter___redArg___boxed(lean_object* v_c_2902_, lean_object* v_h__1_2903_, lean_object* v_h__2_2904_, lean_object* v_h__3_2905_, lean_object* v_h__4_2906_, lean_object* v_h__5_2907_, lean_object* v_h__6_2908_, lean_object* v_h__7_2909_){
_start:
{
uint8_t v_c_38__boxed_2910_; lean_object* v_res_2911_; 
v_c_38__boxed_2910_ = lean_unbox(v_c_2902_);
v_res_2911_ = lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter___redArg(v_c_38__boxed_2910_, v_h__1_2903_, v_h__2_2904_, v_h__3_2905_, v_h__4_2906_, v_h__5_2907_, v_h__6_2908_, v_h__7_2909_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter(lean_object* v_motive_2912_, uint8_t v_c_2913_, lean_object* v_h__1_2914_, lean_object* v_h__2_2915_, lean_object* v_h__3_2916_, lean_object* v_h__4_2917_, lean_object* v_h__5_2918_, lean_object* v_h__6_2919_, lean_object* v_h__7_2920_){
_start:
{
switch(v_c_2913_)
{
case 11:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; 
lean_dec(v_h__7_2920_);
lean_dec(v_h__6_2919_);
lean_dec(v_h__5_2918_);
lean_dec(v_h__4_2917_);
lean_dec(v_h__3_2916_);
lean_dec(v_h__2_2915_);
v___x_2921_ = lean_box(0);
v___x_2922_ = lean_apply_1(v_h__1_2914_, v___x_2921_);
return v___x_2922_;
}
case 12:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; 
lean_dec(v_h__7_2920_);
lean_dec(v_h__6_2919_);
lean_dec(v_h__5_2918_);
lean_dec(v_h__4_2917_);
lean_dec(v_h__3_2916_);
lean_dec(v_h__1_2914_);
v___x_2923_ = lean_box(0);
v___x_2924_ = lean_apply_1(v_h__2_2915_, v___x_2923_);
return v___x_2924_;
}
case 13:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; 
lean_dec(v_h__7_2920_);
lean_dec(v_h__6_2919_);
lean_dec(v_h__5_2918_);
lean_dec(v_h__4_2917_);
lean_dec(v_h__2_2915_);
lean_dec(v_h__1_2914_);
v___x_2925_ = lean_box(0);
v___x_2926_ = lean_apply_1(v_h__3_2916_, v___x_2925_);
return v___x_2926_;
}
case 14:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
lean_dec(v_h__7_2920_);
lean_dec(v_h__6_2919_);
lean_dec(v_h__5_2918_);
lean_dec(v_h__3_2916_);
lean_dec(v_h__2_2915_);
lean_dec(v_h__1_2914_);
v___x_2927_ = lean_box(0);
v___x_2928_ = lean_apply_1(v_h__4_2917_, v___x_2927_);
return v___x_2928_;
}
case 15:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; 
lean_dec(v_h__7_2920_);
lean_dec(v_h__6_2919_);
lean_dec(v_h__4_2917_);
lean_dec(v_h__3_2916_);
lean_dec(v_h__2_2915_);
lean_dec(v_h__1_2914_);
v___x_2929_ = lean_box(0);
v___x_2930_ = lean_apply_1(v_h__5_2918_, v___x_2929_);
return v___x_2930_;
}
case 16:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
lean_dec(v_h__7_2920_);
lean_dec(v_h__5_2918_);
lean_dec(v_h__4_2917_);
lean_dec(v_h__3_2916_);
lean_dec(v_h__2_2915_);
lean_dec(v_h__1_2914_);
v___x_2931_ = lean_box(0);
v___x_2932_ = lean_apply_1(v_h__6_2919_, v___x_2931_);
return v___x_2932_;
}
default: 
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
lean_dec(v_h__6_2919_);
lean_dec(v_h__5_2918_);
lean_dec(v_h__4_2917_);
lean_dec(v_h__3_2916_);
lean_dec(v_h__2_2915_);
lean_dec(v_h__1_2914_);
v___x_2933_ = lean_box(v_c_2913_);
v___x_2934_ = lean_apply_7(v_h__7_2920_, v___x_2933_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2934_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter___boxed(lean_object* v_motive_2935_, lean_object* v_c_2936_, lean_object* v_h__1_2937_, lean_object* v_h__2_2938_, lean_object* v_h__3_2939_, lean_object* v_h__4_2940_, lean_object* v_h__5_2941_, lean_object* v_h__6_2942_, lean_object* v_h__7_2943_){
_start:
{
uint8_t v_c_69__boxed_2944_; lean_object* v_res_2945_; 
v_c_69__boxed_2944_ = lean_unbox(v_c_2936_);
v_res_2945_ = lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tnBranches_match__1_splitter(v_motive_2935_, v_c_69__boxed_2944_, v_h__1_2937_, v_h__2_2938_, v_h__3_2939_, v_h__4_2940_, v_h__5_2941_, v_h__6_2942_, v_h__7_2943_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter___redArg(uint8_t v_c_2946_, lean_object* v_h__1_2947_, lean_object* v_h__2_2948_, lean_object* v_h__3_2949_, lean_object* v_h__4_2950_, lean_object* v_h__5_2951_, lean_object* v_h__6_2952_, lean_object* v_h__7_2953_, lean_object* v_h__8_2954_, lean_object* v_h__9_2955_, lean_object* v_h__10_2956_, lean_object* v_h__11_2957_){
_start:
{
switch(v_c_2946_)
{
case 17:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
v___x_2958_ = lean_box(0);
v___x_2959_ = lean_apply_1(v_h__1_2947_, v___x_2958_);
return v___x_2959_;
}
case 18:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__1_2947_);
v___x_2960_ = lean_box(0);
v___x_2961_ = lean_apply_1(v_h__2_2948_, v___x_2960_);
return v___x_2961_;
}
case 19:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2962_ = lean_box(0);
v___x_2963_ = lean_apply_1(v_h__3_2949_, v___x_2962_);
return v___x_2963_;
}
case 20:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2964_ = lean_box(0);
v___x_2965_ = lean_apply_1(v_h__4_2950_, v___x_2964_);
return v___x_2965_;
}
case 21:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2966_ = lean_box(0);
v___x_2967_ = lean_apply_1(v_h__5_2951_, v___x_2966_);
return v___x_2967_;
}
case 22:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2968_ = lean_box(0);
v___x_2969_ = lean_apply_1(v_h__6_2952_, v___x_2968_);
return v___x_2969_;
}
case 23:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2970_ = lean_box(0);
v___x_2971_ = lean_apply_1(v_h__7_2953_, v___x_2970_);
return v___x_2971_;
}
case 24:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2972_ = lean_box(0);
v___x_2973_ = lean_apply_1(v_h__8_2954_, v___x_2972_);
return v___x_2973_;
}
case 25:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__10_2956_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2974_ = lean_box(0);
v___x_2975_ = lean_apply_1(v_h__9_2955_, v___x_2974_);
return v___x_2975_;
}
case 26:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; 
lean_dec(v_h__11_2957_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2976_ = lean_box(0);
v___x_2977_ = lean_apply_1(v_h__10_2956_, v___x_2976_);
return v___x_2977_;
}
default: 
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
lean_dec(v_h__10_2956_);
lean_dec(v_h__9_2955_);
lean_dec(v_h__8_2954_);
lean_dec(v_h__7_2953_);
lean_dec(v_h__6_2952_);
lean_dec(v_h__5_2951_);
lean_dec(v_h__4_2950_);
lean_dec(v_h__3_2949_);
lean_dec(v_h__2_2948_);
lean_dec(v_h__1_2947_);
v___x_2978_ = lean_box(v_c_2946_);
v___x_2979_ = lean_apply_11(v_h__11_2957_, v___x_2978_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2979_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter___redArg___boxed(lean_object* v_c_2980_, lean_object* v_h__1_2981_, lean_object* v_h__2_2982_, lean_object* v_h__3_2983_, lean_object* v_h__4_2984_, lean_object* v_h__5_2985_, lean_object* v_h__6_2986_, lean_object* v_h__7_2987_, lean_object* v_h__8_2988_, lean_object* v_h__9_2989_, lean_object* v_h__10_2990_, lean_object* v_h__11_2991_){
_start:
{
uint8_t v_c_58__boxed_2992_; lean_object* v_res_2993_; 
v_c_58__boxed_2992_ = lean_unbox(v_c_2980_);
v_res_2993_ = lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter___redArg(v_c_58__boxed_2992_, v_h__1_2981_, v_h__2_2982_, v_h__3_2983_, v_h__4_2984_, v_h__5_2985_, v_h__6_2986_, v_h__7_2987_, v_h__8_2988_, v_h__9_2989_, v_h__10_2990_, v_h__11_2991_);
return v_res_2993_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter(lean_object* v_motive_2994_, uint8_t v_c_2995_, lean_object* v_h__1_2996_, lean_object* v_h__2_2997_, lean_object* v_h__3_2998_, lean_object* v_h__4_2999_, lean_object* v_h__5_3000_, lean_object* v_h__6_3001_, lean_object* v_h__7_3002_, lean_object* v_h__8_3003_, lean_object* v_h__9_3004_, lean_object* v_h__10_3005_, lean_object* v_h__11_3006_){
_start:
{
switch(v_c_2995_)
{
case 17:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
v___x_3007_ = lean_box(0);
v___x_3008_ = lean_apply_1(v_h__1_2996_, v___x_3007_);
return v___x_3008_;
}
case 18:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__1_2996_);
v___x_3009_ = lean_box(0);
v___x_3010_ = lean_apply_1(v_h__2_2997_, v___x_3009_);
return v___x_3010_;
}
case 19:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3011_ = lean_box(0);
v___x_3012_ = lean_apply_1(v_h__3_2998_, v___x_3011_);
return v___x_3012_;
}
case 20:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3013_ = lean_box(0);
v___x_3014_ = lean_apply_1(v_h__4_2999_, v___x_3013_);
return v___x_3014_;
}
case 21:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3015_ = lean_box(0);
v___x_3016_ = lean_apply_1(v_h__5_3000_, v___x_3015_);
return v___x_3016_;
}
case 22:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3017_ = lean_box(0);
v___x_3018_ = lean_apply_1(v_h__6_3001_, v___x_3017_);
return v___x_3018_;
}
case 23:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3019_ = lean_box(0);
v___x_3020_ = lean_apply_1(v_h__7_3002_, v___x_3019_);
return v___x_3020_;
}
case 24:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3021_ = lean_box(0);
v___x_3022_ = lean_apply_1(v_h__8_3003_, v___x_3021_);
return v___x_3022_;
}
case 25:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__10_3005_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3023_ = lean_box(0);
v___x_3024_ = lean_apply_1(v_h__9_3004_, v___x_3023_);
return v___x_3024_;
}
case 26:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
lean_dec(v_h__11_3006_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3025_ = lean_box(0);
v___x_3026_ = lean_apply_1(v_h__10_3005_, v___x_3025_);
return v___x_3026_;
}
default: 
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
lean_dec(v_h__10_3005_);
lean_dec(v_h__9_3004_);
lean_dec(v_h__8_3003_);
lean_dec(v_h__7_3002_);
lean_dec(v_h__6_3001_);
lean_dec(v_h__5_3000_);
lean_dec(v_h__4_2999_);
lean_dec(v_h__3_2998_);
lean_dec(v_h__2_2997_);
lean_dec(v_h__1_2996_);
v___x_3027_ = lean_box(v_c_2995_);
v___x_3028_ = lean_apply_11(v_h__11_3006_, v___x_3027_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_3028_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter___boxed(lean_object* v_motive_3029_, lean_object* v_c_3030_, lean_object* v_h__1_3031_, lean_object* v_h__2_3032_, lean_object* v_h__3_3033_, lean_object* v_h__4_3034_, lean_object* v_h__5_3035_, lean_object* v_h__6_3036_, lean_object* v_h__7_3037_, lean_object* v_h__8_3038_, lean_object* v_h__9_3039_, lean_object* v_h__10_3040_, lean_object* v_h__11_3041_){
_start:
{
uint8_t v_c_105__boxed_3042_; lean_object* v_res_3043_; 
v_c_105__boxed_3042_ = lean_unbox(v_c_3030_);
v_res_3043_ = lp_lean_x2dftml___private_LeanFtml_CoverageProse_0__LeanFtml_tyBranches_match__1_splitter(v_motive_3029_, v_c_105__boxed_3042_, v_h__1_3031_, v_h__2_3032_, v_h__3_3033_, v_h__4_3034_, v_h__5_3035_, v_h__6_3036_, v_h__7_3037_, v_h__8_3038_, v_h__9_3039_, v_h__10_3040_, v_h__11_3041_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_witnessShape(uint8_t v_x_3240_){
_start:
{
switch(v_x_3240_)
{
case 0:
{
lean_object* v___x_3243_; 
v___x_3243_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__3));
return v___x_3243_;
}
case 1:
{
lean_object* v___x_3244_; 
v___x_3244_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__5));
return v___x_3244_;
}
case 2:
{
lean_object* v___x_3245_; 
v___x_3245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__7));
return v___x_3245_;
}
case 3:
{
lean_object* v___x_3246_; 
v___x_3246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__9));
return v___x_3246_;
}
case 4:
{
lean_object* v___x_3247_; 
v___x_3247_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__11));
return v___x_3247_;
}
case 5:
{
lean_object* v___x_3248_; 
v___x_3248_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__13));
return v___x_3248_;
}
case 6:
{
lean_object* v___x_3249_; 
v___x_3249_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__14));
return v___x_3249_;
}
case 7:
{
lean_object* v___x_3250_; 
v___x_3250_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__15));
return v___x_3250_;
}
case 8:
{
lean_object* v___x_3251_; 
v___x_3251_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__16));
return v___x_3251_;
}
case 9:
{
lean_object* v___x_3252_; 
v___x_3252_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__17));
return v___x_3252_;
}
case 10:
{
lean_object* v___x_3253_; 
v___x_3253_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__18));
return v___x_3253_;
}
case 11:
{
lean_object* v___x_3254_; 
v___x_3254_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__20));
return v___x_3254_;
}
case 12:
{
lean_object* v___x_3255_; 
v___x_3255_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__22));
return v___x_3255_;
}
case 14:
{
lean_object* v___x_3256_; 
v___x_3256_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__24));
return v___x_3256_;
}
case 15:
{
lean_object* v___x_3257_; 
v___x_3257_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__26));
return v___x_3257_;
}
case 17:
{
lean_object* v___x_3258_; 
v___x_3258_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__28));
return v___x_3258_;
}
case 18:
{
lean_object* v___x_3259_; 
v___x_3259_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__30));
return v___x_3259_;
}
case 19:
{
lean_object* v___x_3260_; 
v___x_3260_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__32));
return v___x_3260_;
}
case 20:
{
lean_object* v___x_3261_; 
v___x_3261_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__34));
return v___x_3261_;
}
case 21:
{
lean_object* v___x_3262_; 
v___x_3262_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__36));
return v___x_3262_;
}
case 22:
{
lean_object* v___x_3263_; 
v___x_3263_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__38));
return v___x_3263_;
}
case 23:
{
lean_object* v___x_3264_; 
v___x_3264_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__40));
return v___x_3264_;
}
case 24:
{
lean_object* v___x_3265_; 
v___x_3265_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__42));
return v___x_3265_;
}
case 25:
{
lean_object* v___x_3266_; 
v___x_3266_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__44));
return v___x_3266_;
}
case 26:
{
lean_object* v___x_3267_; 
v___x_3267_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__46));
return v___x_3267_;
}
case 27:
{
lean_object* v___x_3268_; 
v___x_3268_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__47));
return v___x_3268_;
}
case 28:
{
lean_object* v___x_3269_; 
v___x_3269_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__48));
return v___x_3269_;
}
case 29:
{
lean_object* v___x_3270_; 
v___x_3270_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__49));
return v___x_3270_;
}
case 30:
{
lean_object* v___x_3271_; 
v___x_3271_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__50));
return v___x_3271_;
}
case 31:
{
lean_object* v___x_3272_; 
v___x_3272_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__51));
return v___x_3272_;
}
case 32:
{
lean_object* v___x_3273_; 
v___x_3273_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__53));
return v___x_3273_;
}
case 33:
{
lean_object* v___x_3274_; 
v___x_3274_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__55));
return v___x_3274_;
}
case 34:
{
lean_object* v___x_3275_; 
v___x_3275_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__57));
return v___x_3275_;
}
case 35:
{
lean_object* v___x_3276_; 
v___x_3276_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__59));
return v___x_3276_;
}
case 36:
{
lean_object* v___x_3277_; 
v___x_3277_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__61));
return v___x_3277_;
}
case 37:
{
lean_object* v___x_3278_; 
v___x_3278_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__63));
return v___x_3278_;
}
case 38:
{
lean_object* v___x_3279_; 
v___x_3279_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__65));
return v___x_3279_;
}
case 39:
{
lean_object* v___x_3280_; 
v___x_3280_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__67));
return v___x_3280_;
}
case 40:
{
lean_object* v___x_3281_; 
v___x_3281_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__69));
return v___x_3281_;
}
case 41:
{
lean_object* v___x_3282_; 
v___x_3282_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__70));
return v___x_3282_;
}
case 42:
{
lean_object* v___x_3283_; 
v___x_3283_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__71));
return v___x_3283_;
}
case 43:
{
lean_object* v___x_3284_; 
v___x_3284_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__72));
return v___x_3284_;
}
case 44:
{
lean_object* v___x_3285_; 
v___x_3285_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__73));
return v___x_3285_;
}
case 45:
{
lean_object* v___x_3286_; 
v___x_3286_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__74));
return v___x_3286_;
}
case 46:
{
lean_object* v___x_3287_; 
v___x_3287_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__75));
return v___x_3287_;
}
case 47:
{
lean_object* v___x_3288_; 
v___x_3288_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__76));
return v___x_3288_;
}
case 48:
{
lean_object* v___x_3289_; 
v___x_3289_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__77));
return v___x_3289_;
}
case 49:
{
lean_object* v___x_3290_; 
v___x_3290_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__78));
return v___x_3290_;
}
case 50:
{
lean_object* v___x_3291_; 
v___x_3291_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__79));
return v___x_3291_;
}
case 51:
{
lean_object* v___x_3292_; 
v___x_3292_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__80));
return v___x_3292_;
}
case 52:
{
lean_object* v___x_3293_; 
v___x_3293_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__81));
return v___x_3293_;
}
default: 
{
goto v___jp_3241_;
}
}
v___jp_3241_:
{
lean_object* v___x_3242_; 
v___x_3242_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_witnessShape___closed__1));
return v___x_3242_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_witnessShape___boxed(lean_object* v_x_3294_){
_start:
{
uint8_t v_x_1218__boxed_3295_; lean_object* v_res_3296_; 
v_x_1218__boxed_3295_ = lean_unbox(v_x_3294_);
v_res_3296_ = lp_lean_x2dftml_LeanFtml_witnessShape(v_x_1218__boxed_3295_);
return v_res_3296_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_MiddleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Middle2Rules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_LinkRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ParaRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Inline3Rules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ProseRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_CoverageProse(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_FrameRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_MiddleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Middle2Rules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_LinkRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ParaRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Inline3Rules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ProseRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
