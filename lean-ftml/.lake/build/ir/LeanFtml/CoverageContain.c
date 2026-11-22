// Lean compiler output
// Module: LeanFtml.CoverageContain
// Imports: public import Init public meta import Init public import LeanFtml.InteractiveRules public import LeanFtml.ProseRules public import LeanFtml.BlockRules
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
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes(lean_object*);
uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_divAttrFragment_spec__0(lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_intTypeIs(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optBytesOpt(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
uint8_t lp_lean_x2dftml_LeanFtml_proseTypeIs(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_attrPairs(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ContainClass_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqContainClass(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqContainClass___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ContainClass.bqRunDeleted"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.ContainClass.bqLineDropped"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ContainClass.bqText"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ContainClass.bqNestStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.ContainClass.bqNestEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ContainClass.bqDrain"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.ContainClass.bqRenderStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ContainClass.bqRenderEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__15_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ContainClass.bqRenderFall"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__17_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ContainClass.dvPlain"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__19_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ContainClass.dvScored"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__21_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ContainClass.dvVanished"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__23_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ContainClass.dvBare"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__25_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ContainClass.dvAttrOrder"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__27_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ContainClass.dvEmptyUnset"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__28_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__29_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ContainClass.dvRVanished"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__31_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ContainClass.dvRStartBare"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__32_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__33_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ContainClass.dvRStartEsc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__35_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.ContainClass.dvRStartClear"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__37_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ContainClass.dvREnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__38_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__39_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ContainClass.dvRFall"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__40_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__41_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ContainClass.coParseClaim"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__42_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__43_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ContainClass.coFolded"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__44_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__45_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ContainClass.coOpened"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__46_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__47_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.ContainClass.coShowDefault"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__48_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__49_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "LeanFtml.ContainClass.coShowAuthored"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__50_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__51_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.ContainClass.coHideDefault"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__52_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__52_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__53_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "LeanFtml.ContainClass.coHideAuthored"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__54_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__54_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__55_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ContainClass.coLocTop"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__56 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__56_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__56_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__57_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ContainClass.coLocBottom"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__58 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__58_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__58_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__59 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__59_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.ContainClass.coLocBoth"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__60_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__60_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__61 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__61_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ContainClass.coStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__62 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__62_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__62_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__63 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__63_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.ContainClass.coEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__64 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__64_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__64_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__65 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__65_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ContainClass.coFall"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__66 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__66_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__66_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__67 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__67_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "LeanFtml.ContainClass.tvTitleUntitled"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__68 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__68_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__68_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__69 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__69_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "LeanFtml.ContainClass.tvTitleRawEmpty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__70 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__70_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__70_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__71 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__71_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "LeanFtml.ContainClass.tvTitleCollapsed"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__72 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__72_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__72_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__73 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__73_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "LeanFtml.ContainClass.tvTitlePositional"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__74 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__74_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__74_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__75 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__75_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "LeanFtml.ContainClass.tvTitleAttribute"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__76 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__76_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__76_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__77 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__77_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ContainClass.tvClassKept"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__78 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__78_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__78_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__79 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__79_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "LeanFtml.ContainClass.tvClassDropped"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__80 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__80_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__80_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__81 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__81_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ContainClass.tvAttrEcho"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__82 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__82_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__82_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__83 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__83_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ContainClass.tvStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__84 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__84_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__84_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__85 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__85_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ContainClass.tvSelected"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__86 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__86_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__86_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__87 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__87_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ContainClass.tvUnselected"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__88 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__88_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__88_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__89 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__89_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "LeanFtml.ContainClass.tvLabelDefault"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__90 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__90_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__90_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__91 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__91_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ContainClass.tvLabelEmpty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__92 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__92_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__92_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__93 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__93_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.ContainClass.tvLabelText"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__94 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__94_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__94_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__95 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__95_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.ContainClass.tvPanelShown"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__96 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__96_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__96_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__97 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__97_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.ContainClass.tvPanelHidden"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__98 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__98_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__98_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__99 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__99_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ContainClass.tvPanelEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__100 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__100_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__100_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__101 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__101_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.ContainClass.tvEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__102 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__102_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__102_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__103 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__103_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ContainClass.tvFall"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__104 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__104_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__104_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__105 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__105_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprContainClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainClass___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(52) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(49) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__23_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__25_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__28_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__29_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__31_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__32_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__33_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__35_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__35_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__37_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__37_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__38_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__39_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__39_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__40_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__41_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__41_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__42_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__43_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__43_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__44_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__45_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__45_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__46_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__47_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__47_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__48_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__49_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__49_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__50_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__51_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containAllClasses___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__51_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__52_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_containAllClasses = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containAllClasses___closed__52_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_kept_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_kept_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_kept_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_kept_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanFtml.BqRun.deleted"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.BqRun.kept"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprBqRun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRun___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_start_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_start_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_start_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_start_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_BqRender_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBqRender(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBqRender___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.BqRender.start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.BqRender.endTok"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.BqRender.other"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprBqRender___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBqRender___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_plain_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_plain_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_plain_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_plain_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_scored_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_scored_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_scored_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_scored_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_DivBody_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivBody(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivBody___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanFtml.DivBody.plain"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.DivBody.scored"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprDivBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivBody___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivBody___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_bare_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_bare_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_bare_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_bare_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_DivHead_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivHead(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivHead___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.DivHead.vanished"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanFtml.DivHead.bare"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.DivHead.ordered"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprDivHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivHead___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "head"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unset"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprDivParseShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_DivRenderKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivRenderKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivRenderKind___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.DivRenderKind.vanished"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.DivRenderKind.startBare"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.DivRenderKind.startEsc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.DivRenderKind.startClear"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.DivRenderKind.endTok"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.DivRenderKind.other"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__11_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprDivRenderKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivRenderKind___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_folded_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_folded_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_folded_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_folded_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_opened_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_opened_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_opened_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_opened_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CoFold_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoFold(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoFold___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanFtml.CoFold.folded"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanFtml.CoFold.opened"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCoFold___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoFold___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoFold___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CoLabel_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoLabel(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoLabel___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.CoLabel.default"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.CoLabel.authored"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCoLabel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLabel___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLabel___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_top_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_top_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_top_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_top_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_both_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_both_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_both_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_both_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CoLoc_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoLoc(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoLoc___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LeanFtml.CoLoc.top"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanFtml.CoLoc.bottom"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.CoLoc.both"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCoLoc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoLoc___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_start_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_start_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_start_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_start_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_endTok_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_endTok_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_endTok_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_endTok_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CoType_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoType(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoType___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanFtml.CoType.start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanFtml.CoType.endTok"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanFtml.CoType.other"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCoType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCoType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoType___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fold"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "showLbl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "hideLbl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "loc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "typ"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__13_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCoRenderShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_TvTitleKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleKind___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.TvTitleKind.untitled"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.TvTitleKind.rawEmpty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.TvTitleKind.collapsed"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprTvTitleKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleKind___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_TvTitleSource_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleSource(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleSource___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.TvTitleSource.positional"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.TvTitleSource.attribute"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprTvTitleSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleSource___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvTitleSource___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "source"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprTvParseTab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvParseTab___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_bare_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_bare_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_bare_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_bare_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_TvView_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvView(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvView___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.TvView.bare"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.TvView.echoDropped"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.TvView.echoKept"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprTvView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprTvView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvView___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_text_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_text_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_text_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_text_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_TvLabel_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvLabel(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvLabel___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.TvLabel.default"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanFtml.TvLabel.empty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanFtml.TvLabel.text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprTvLabel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvLabel___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "selected"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprTvItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvItem___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_start_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_start_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelShown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelShown_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelHidden_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelHidden_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelEnd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelEnd_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_endTok_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_endTok_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_fall_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_fall_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__5;
static lean_once_cell_t lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__6;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.TvRender.panelShown"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.TvRender.panelHidden"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.TvRender.panelEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.TvRender.endTok"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanFtml.TvRender.fall"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.TvRender.start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__11_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__12_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprTvRender___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprTvRender___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_bqRun_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_bqRun_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_bqRender_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_bqRender_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_divParse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_divParse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_divRender_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_divRender_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_coParse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_coParse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_coRender_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_coRender_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvParseTab_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvParseTab_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvView_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvView_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvRender_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvRender_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.ContainShape.coParse"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.ContainShape.bqRun"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ContainShape.bqRender"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ContainShape.divParse"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.ContainShape.divRender"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ContainShape.coRender"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__16_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.ContainShape.tvParseTab"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__19_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.ContainShape.tvView"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__22_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.ContainShape.tvRender"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__23_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__24_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__25_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprContainShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprContainShape___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRenderBranches(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRenderBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divBodyBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divBodyBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divBodyBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divBodyBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divBodyBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divBodyBranch___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBodyBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBodyBranch___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divHeadBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divHeadBranch___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divParseBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divParseBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divParseBranches___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divParseBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divParseBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coFoldBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coFoldBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coFoldBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coFoldBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coFoldBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coFoldBranch___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coFoldBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coFoldBranch___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coShowBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coShowBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coShowBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coShowBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coShowBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coShowBranch___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coShowBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coShowBranch___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coHideBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coHideBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coHideBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coHideBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coHideBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coHideBranch___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coHideBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coHideBranch___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coLocBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coLocBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coLocBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coLocBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coLocBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coLocBranch___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coLocBranch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coLocBranch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coLocBranch___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coLocBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coLocBranch___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coTypeBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coTypeBranch___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvKindBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvKindBranch___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvSourceBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvSourceBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvSourceBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvSourceBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvSourceBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvSourceBranch___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvSourceBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvSourceBranch___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvParseBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvParseBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvViewBranches(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvViewBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvSelectedBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvSelectedBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvSelectedBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvSelectedBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvSelectedBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvSelectedBranch___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvSelectedBranch(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvSelectedBranch___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvLabelBranch(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvLabelBranch___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvItemBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvItemBranches___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tvRenderBranches_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tvRenderBranches_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(49) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containClassify___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containClassify___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containClassify___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassify(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassify___boxed(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_containClassMemDecidable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_containClassMemDecidable___closed__0;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_containClassMemDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassMemDecidable___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 2, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 2, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(4, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(5, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__35_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__37_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__38_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__39_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 1, 1, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__40_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__41_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 2, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__42_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__43_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 1, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__44_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__45_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 2, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__46_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__47_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__48_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__49_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__50_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__51_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__52_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__52_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__53_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 7}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__54_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 7}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__55_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 7}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__56 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__56_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__57_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__57_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__58 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__58_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 2, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__59 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__59_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__59_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__60_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__60_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__61 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__61_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__61_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__62 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__62_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__63 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__63_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__63_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__64 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__64_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__64_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__65 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__65_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__65_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__66 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__66_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__67 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__67_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__67_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__68 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__68_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__68_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__69 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__69_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__69_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__70 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__70_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__71 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__71_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__72 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__72_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__73 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__73_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__74 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__74_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__75 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__75_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isContainRenderRule(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isContainRenderRule___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bqRenderOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRenderOf___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_divValueCleared___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divValueCleared___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_divValueCleared(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divValueCleared___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_divRenderOf_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_divRenderOf_spec__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_divRenderOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "args"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divRenderOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRenderOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divRenderOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "vanished"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divRenderOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRenderOf___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divRenderOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divRenderOf___closed__3;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_divRenderOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRenderOf___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coArgsOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coArgsOf___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_coFoldOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "folded"};
static const lean_object* lp_lean_x2dftml_LeanFtml_coFoldOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coFoldOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_coFoldOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_coFoldOf___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_coFoldOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "no"};
static const lean_object* lp_lean_x2dftml_LeanFtml_coFoldOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coFoldOf___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_coFoldOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_coFoldOf___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_coFoldOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_lean_x2dftml_LeanFtml_coFoldOf___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coFoldOf___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_coFoldOf___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_coFoldOf___closed__5;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_coFoldOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coFoldOf___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_coLabelOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_coLabelOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coLabelOf___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_coLabelOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coLabelOf___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_coLocOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "hideLocation"};
static const lean_object* lp_lean_x2dftml_LeanFtml_coLocOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coLocOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_coLocOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_coLocOf___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_coLocOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bottom"};
static const lean_object* lp_lean_x2dftml_LeanFtml_coLocOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coLocOf___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_coLocOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_coLocOf___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_coLocOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "both"};
static const lean_object* lp_lean_x2dftml_LeanFtml_coLocOf___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coLocOf___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_coLocOf___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_coLocOf___closed__5;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_coLocOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coLocOf___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_coTypeOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coTypeOf___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_coRenderOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "show"};
static const lean_object* lp_lean_x2dftml_LeanFtml_coRenderOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coRenderOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_coRenderOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_coRenderOf___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_coRenderOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hide"};
static const lean_object* lp_lean_x2dftml_LeanFtml_coRenderOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_coRenderOf___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_coRenderOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_coRenderOf___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coRenderOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coRenderOf___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tabs"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvTabsOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvTabsOf___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tvItemOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvItemOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tvItemOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tvItemOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tabId"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvItemOf___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tvItemOf___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tvRenderOf_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tabStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tabEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvRenderOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvRenderOf___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containShapeOf(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containShapeOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassOf(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_containMemClass_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_containMemClass_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_containMemClass(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containMemClass___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_lean_x2dftml_LeanFtml_ContainClass_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = lp_lean_x2dftml_LeanFtml_ContainClass_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim___redArg(lean_object* v_bqRunDeleted_22_){
_start:
{
lean_inc(v_bqRunDeleted_22_);
return v_bqRunDeleted_22_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim___redArg___boxed(lean_object* v_bqRunDeleted_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim___redArg(v_bqRunDeleted_23_);
lean_dec(v_bqRunDeleted_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_bqRunDeleted_28_){
_start:
{
lean_inc(v_bqRunDeleted_28_);
return v_bqRunDeleted_28_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_bqRunDeleted_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqRunDeleted_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_bqRunDeleted_32_);
lean_dec(v_bqRunDeleted_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim___redArg(lean_object* v_bqLineDropped_35_){
_start:
{
lean_inc(v_bqLineDropped_35_);
return v_bqLineDropped_35_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim___redArg___boxed(lean_object* v_bqLineDropped_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim___redArg(v_bqLineDropped_36_);
lean_dec(v_bqLineDropped_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_bqLineDropped_41_){
_start:
{
lean_inc(v_bqLineDropped_41_);
return v_bqLineDropped_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_bqLineDropped_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqLineDropped_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_bqLineDropped_45_);
lean_dec(v_bqLineDropped_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim___redArg(lean_object* v_bqText_48_){
_start:
{
lean_inc(v_bqText_48_);
return v_bqText_48_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim___redArg___boxed(lean_object* v_bqText_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim___redArg(v_bqText_49_);
lean_dec(v_bqText_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_bqText_54_){
_start:
{
lean_inc(v_bqText_54_);
return v_bqText_54_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_bqText_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqText_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_bqText_58_);
lean_dec(v_bqText_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim___redArg(lean_object* v_bqNestStart_61_){
_start:
{
lean_inc(v_bqNestStart_61_);
return v_bqNestStart_61_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim___redArg___boxed(lean_object* v_bqNestStart_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim___redArg(v_bqNestStart_62_);
lean_dec(v_bqNestStart_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim(lean_object* v_motive_64_, uint8_t v_t_65_, lean_object* v_h_66_, lean_object* v_bqNestStart_67_){
_start:
{
lean_inc(v_bqNestStart_67_);
return v_bqNestStart_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_bqNestStart_71_){
_start:
{
uint8_t v_t_boxed_72_; lean_object* v_res_73_; 
v_t_boxed_72_ = lean_unbox(v_t_69_);
v_res_73_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqNestStart_elim(v_motive_68_, v_t_boxed_72_, v_h_70_, v_bqNestStart_71_);
lean_dec(v_bqNestStart_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim___redArg(lean_object* v_bqNestEnd_74_){
_start:
{
lean_inc(v_bqNestEnd_74_);
return v_bqNestEnd_74_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim___redArg___boxed(lean_object* v_bqNestEnd_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim___redArg(v_bqNestEnd_75_);
lean_dec(v_bqNestEnd_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim(lean_object* v_motive_77_, uint8_t v_t_78_, lean_object* v_h_79_, lean_object* v_bqNestEnd_80_){
_start:
{
lean_inc(v_bqNestEnd_80_);
return v_bqNestEnd_80_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim___boxed(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_bqNestEnd_84_){
_start:
{
uint8_t v_t_boxed_85_; lean_object* v_res_86_; 
v_t_boxed_85_ = lean_unbox(v_t_82_);
v_res_86_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqNestEnd_elim(v_motive_81_, v_t_boxed_85_, v_h_83_, v_bqNestEnd_84_);
lean_dec(v_bqNestEnd_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim___redArg(lean_object* v_bqDrain_87_){
_start:
{
lean_inc(v_bqDrain_87_);
return v_bqDrain_87_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim___redArg___boxed(lean_object* v_bqDrain_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim___redArg(v_bqDrain_88_);
lean_dec(v_bqDrain_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim(lean_object* v_motive_90_, uint8_t v_t_91_, lean_object* v_h_92_, lean_object* v_bqDrain_93_){
_start:
{
lean_inc(v_bqDrain_93_);
return v_bqDrain_93_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim___boxed(lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_bqDrain_97_){
_start:
{
uint8_t v_t_boxed_98_; lean_object* v_res_99_; 
v_t_boxed_98_ = lean_unbox(v_t_95_);
v_res_99_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqDrain_elim(v_motive_94_, v_t_boxed_98_, v_h_96_, v_bqDrain_97_);
lean_dec(v_bqDrain_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim___redArg(lean_object* v_bqRenderStart_100_){
_start:
{
lean_inc(v_bqRenderStart_100_);
return v_bqRenderStart_100_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim___redArg___boxed(lean_object* v_bqRenderStart_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim___redArg(v_bqRenderStart_101_);
lean_dec(v_bqRenderStart_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim(lean_object* v_motive_103_, uint8_t v_t_104_, lean_object* v_h_105_, lean_object* v_bqRenderStart_106_){
_start:
{
lean_inc(v_bqRenderStart_106_);
return v_bqRenderStart_106_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim___boxed(lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_bqRenderStart_110_){
_start:
{
uint8_t v_t_boxed_111_; lean_object* v_res_112_; 
v_t_boxed_111_ = lean_unbox(v_t_108_);
v_res_112_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderStart_elim(v_motive_107_, v_t_boxed_111_, v_h_109_, v_bqRenderStart_110_);
lean_dec(v_bqRenderStart_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim___redArg(lean_object* v_bqRenderEnd_113_){
_start:
{
lean_inc(v_bqRenderEnd_113_);
return v_bqRenderEnd_113_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim___redArg___boxed(lean_object* v_bqRenderEnd_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim___redArg(v_bqRenderEnd_114_);
lean_dec(v_bqRenderEnd_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim(lean_object* v_motive_116_, uint8_t v_t_117_, lean_object* v_h_118_, lean_object* v_bqRenderEnd_119_){
_start:
{
lean_inc(v_bqRenderEnd_119_);
return v_bqRenderEnd_119_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim___boxed(lean_object* v_motive_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_bqRenderEnd_123_){
_start:
{
uint8_t v_t_boxed_124_; lean_object* v_res_125_; 
v_t_boxed_124_ = lean_unbox(v_t_121_);
v_res_125_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderEnd_elim(v_motive_120_, v_t_boxed_124_, v_h_122_, v_bqRenderEnd_123_);
lean_dec(v_bqRenderEnd_123_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim___redArg(lean_object* v_bqRenderFall_126_){
_start:
{
lean_inc(v_bqRenderFall_126_);
return v_bqRenderFall_126_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim___redArg___boxed(lean_object* v_bqRenderFall_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim___redArg(v_bqRenderFall_127_);
lean_dec(v_bqRenderFall_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim(lean_object* v_motive_129_, uint8_t v_t_130_, lean_object* v_h_131_, lean_object* v_bqRenderFall_132_){
_start:
{
lean_inc(v_bqRenderFall_132_);
return v_bqRenderFall_132_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim___boxed(lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_bqRenderFall_136_){
_start:
{
uint8_t v_t_boxed_137_; lean_object* v_res_138_; 
v_t_boxed_137_ = lean_unbox(v_t_134_);
v_res_138_ = lp_lean_x2dftml_LeanFtml_ContainClass_bqRenderFall_elim(v_motive_133_, v_t_boxed_137_, v_h_135_, v_bqRenderFall_136_);
lean_dec(v_bqRenderFall_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim___redArg(lean_object* v_dvPlain_139_){
_start:
{
lean_inc(v_dvPlain_139_);
return v_dvPlain_139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim___redArg___boxed(lean_object* v_dvPlain_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim___redArg(v_dvPlain_140_);
lean_dec(v_dvPlain_140_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim(lean_object* v_motive_142_, uint8_t v_t_143_, lean_object* v_h_144_, lean_object* v_dvPlain_145_){
_start:
{
lean_inc(v_dvPlain_145_);
return v_dvPlain_145_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim___boxed(lean_object* v_motive_146_, lean_object* v_t_147_, lean_object* v_h_148_, lean_object* v_dvPlain_149_){
_start:
{
uint8_t v_t_boxed_150_; lean_object* v_res_151_; 
v_t_boxed_150_ = lean_unbox(v_t_147_);
v_res_151_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvPlain_elim(v_motive_146_, v_t_boxed_150_, v_h_148_, v_dvPlain_149_);
lean_dec(v_dvPlain_149_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim___redArg(lean_object* v_dvScored_152_){
_start:
{
lean_inc(v_dvScored_152_);
return v_dvScored_152_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim___redArg___boxed(lean_object* v_dvScored_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim___redArg(v_dvScored_153_);
lean_dec(v_dvScored_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim(lean_object* v_motive_155_, uint8_t v_t_156_, lean_object* v_h_157_, lean_object* v_dvScored_158_){
_start:
{
lean_inc(v_dvScored_158_);
return v_dvScored_158_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim___boxed(lean_object* v_motive_159_, lean_object* v_t_160_, lean_object* v_h_161_, lean_object* v_dvScored_162_){
_start:
{
uint8_t v_t_boxed_163_; lean_object* v_res_164_; 
v_t_boxed_163_ = lean_unbox(v_t_160_);
v_res_164_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvScored_elim(v_motive_159_, v_t_boxed_163_, v_h_161_, v_dvScored_162_);
lean_dec(v_dvScored_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim___redArg(lean_object* v_dvVanished_165_){
_start:
{
lean_inc(v_dvVanished_165_);
return v_dvVanished_165_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim___redArg___boxed(lean_object* v_dvVanished_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim___redArg(v_dvVanished_166_);
lean_dec(v_dvVanished_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim(lean_object* v_motive_168_, uint8_t v_t_169_, lean_object* v_h_170_, lean_object* v_dvVanished_171_){
_start:
{
lean_inc(v_dvVanished_171_);
return v_dvVanished_171_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim___boxed(lean_object* v_motive_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_dvVanished_175_){
_start:
{
uint8_t v_t_boxed_176_; lean_object* v_res_177_; 
v_t_boxed_176_ = lean_unbox(v_t_173_);
v_res_177_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvVanished_elim(v_motive_172_, v_t_boxed_176_, v_h_174_, v_dvVanished_175_);
lean_dec(v_dvVanished_175_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim___redArg(lean_object* v_dvBare_178_){
_start:
{
lean_inc(v_dvBare_178_);
return v_dvBare_178_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim___redArg___boxed(lean_object* v_dvBare_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim___redArg(v_dvBare_179_);
lean_dec(v_dvBare_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim(lean_object* v_motive_181_, uint8_t v_t_182_, lean_object* v_h_183_, lean_object* v_dvBare_184_){
_start:
{
lean_inc(v_dvBare_184_);
return v_dvBare_184_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim___boxed(lean_object* v_motive_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_dvBare_188_){
_start:
{
uint8_t v_t_boxed_189_; lean_object* v_res_190_; 
v_t_boxed_189_ = lean_unbox(v_t_186_);
v_res_190_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvBare_elim(v_motive_185_, v_t_boxed_189_, v_h_187_, v_dvBare_188_);
lean_dec(v_dvBare_188_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim___redArg(lean_object* v_dvAttrOrder_191_){
_start:
{
lean_inc(v_dvAttrOrder_191_);
return v_dvAttrOrder_191_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim___redArg___boxed(lean_object* v_dvAttrOrder_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim___redArg(v_dvAttrOrder_192_);
lean_dec(v_dvAttrOrder_192_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim(lean_object* v_motive_194_, uint8_t v_t_195_, lean_object* v_h_196_, lean_object* v_dvAttrOrder_197_){
_start:
{
lean_inc(v_dvAttrOrder_197_);
return v_dvAttrOrder_197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim___boxed(lean_object* v_motive_198_, lean_object* v_t_199_, lean_object* v_h_200_, lean_object* v_dvAttrOrder_201_){
_start:
{
uint8_t v_t_boxed_202_; lean_object* v_res_203_; 
v_t_boxed_202_ = lean_unbox(v_t_199_);
v_res_203_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvAttrOrder_elim(v_motive_198_, v_t_boxed_202_, v_h_200_, v_dvAttrOrder_201_);
lean_dec(v_dvAttrOrder_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim___redArg(lean_object* v_dvEmptyUnset_204_){
_start:
{
lean_inc(v_dvEmptyUnset_204_);
return v_dvEmptyUnset_204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim___redArg___boxed(lean_object* v_dvEmptyUnset_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim___redArg(v_dvEmptyUnset_205_);
lean_dec(v_dvEmptyUnset_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim(lean_object* v_motive_207_, uint8_t v_t_208_, lean_object* v_h_209_, lean_object* v_dvEmptyUnset_210_){
_start:
{
lean_inc(v_dvEmptyUnset_210_);
return v_dvEmptyUnset_210_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim___boxed(lean_object* v_motive_211_, lean_object* v_t_212_, lean_object* v_h_213_, lean_object* v_dvEmptyUnset_214_){
_start:
{
uint8_t v_t_boxed_215_; lean_object* v_res_216_; 
v_t_boxed_215_ = lean_unbox(v_t_212_);
v_res_216_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvEmptyUnset_elim(v_motive_211_, v_t_boxed_215_, v_h_213_, v_dvEmptyUnset_214_);
lean_dec(v_dvEmptyUnset_214_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim___redArg(lean_object* v_dvRVanished_217_){
_start:
{
lean_inc(v_dvRVanished_217_);
return v_dvRVanished_217_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim___redArg___boxed(lean_object* v_dvRVanished_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim___redArg(v_dvRVanished_218_);
lean_dec(v_dvRVanished_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim(lean_object* v_motive_220_, uint8_t v_t_221_, lean_object* v_h_222_, lean_object* v_dvRVanished_223_){
_start:
{
lean_inc(v_dvRVanished_223_);
return v_dvRVanished_223_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim___boxed(lean_object* v_motive_224_, lean_object* v_t_225_, lean_object* v_h_226_, lean_object* v_dvRVanished_227_){
_start:
{
uint8_t v_t_boxed_228_; lean_object* v_res_229_; 
v_t_boxed_228_ = lean_unbox(v_t_225_);
v_res_229_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRVanished_elim(v_motive_224_, v_t_boxed_228_, v_h_226_, v_dvRVanished_227_);
lean_dec(v_dvRVanished_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim___redArg(lean_object* v_dvRStartBare_230_){
_start:
{
lean_inc(v_dvRStartBare_230_);
return v_dvRStartBare_230_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim___redArg___boxed(lean_object* v_dvRStartBare_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim___redArg(v_dvRStartBare_231_);
lean_dec(v_dvRStartBare_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim(lean_object* v_motive_233_, uint8_t v_t_234_, lean_object* v_h_235_, lean_object* v_dvRStartBare_236_){
_start:
{
lean_inc(v_dvRStartBare_236_);
return v_dvRStartBare_236_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim___boxed(lean_object* v_motive_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_dvRStartBare_240_){
_start:
{
uint8_t v_t_boxed_241_; lean_object* v_res_242_; 
v_t_boxed_241_ = lean_unbox(v_t_238_);
v_res_242_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartBare_elim(v_motive_237_, v_t_boxed_241_, v_h_239_, v_dvRStartBare_240_);
lean_dec(v_dvRStartBare_240_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim___redArg(lean_object* v_dvRStartEsc_243_){
_start:
{
lean_inc(v_dvRStartEsc_243_);
return v_dvRStartEsc_243_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim___redArg___boxed(lean_object* v_dvRStartEsc_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim___redArg(v_dvRStartEsc_244_);
lean_dec(v_dvRStartEsc_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim(lean_object* v_motive_246_, uint8_t v_t_247_, lean_object* v_h_248_, lean_object* v_dvRStartEsc_249_){
_start:
{
lean_inc(v_dvRStartEsc_249_);
return v_dvRStartEsc_249_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim___boxed(lean_object* v_motive_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_dvRStartEsc_253_){
_start:
{
uint8_t v_t_boxed_254_; lean_object* v_res_255_; 
v_t_boxed_254_ = lean_unbox(v_t_251_);
v_res_255_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartEsc_elim(v_motive_250_, v_t_boxed_254_, v_h_252_, v_dvRStartEsc_253_);
lean_dec(v_dvRStartEsc_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim___redArg(lean_object* v_dvRStartClear_256_){
_start:
{
lean_inc(v_dvRStartClear_256_);
return v_dvRStartClear_256_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim___redArg___boxed(lean_object* v_dvRStartClear_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim___redArg(v_dvRStartClear_257_);
lean_dec(v_dvRStartClear_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim(lean_object* v_motive_259_, uint8_t v_t_260_, lean_object* v_h_261_, lean_object* v_dvRStartClear_262_){
_start:
{
lean_inc(v_dvRStartClear_262_);
return v_dvRStartClear_262_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim___boxed(lean_object* v_motive_263_, lean_object* v_t_264_, lean_object* v_h_265_, lean_object* v_dvRStartClear_266_){
_start:
{
uint8_t v_t_boxed_267_; lean_object* v_res_268_; 
v_t_boxed_267_ = lean_unbox(v_t_264_);
v_res_268_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRStartClear_elim(v_motive_263_, v_t_boxed_267_, v_h_265_, v_dvRStartClear_266_);
lean_dec(v_dvRStartClear_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim___redArg(lean_object* v_dvREnd_269_){
_start:
{
lean_inc(v_dvREnd_269_);
return v_dvREnd_269_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim___redArg___boxed(lean_object* v_dvREnd_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim___redArg(v_dvREnd_270_);
lean_dec(v_dvREnd_270_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim(lean_object* v_motive_272_, uint8_t v_t_273_, lean_object* v_h_274_, lean_object* v_dvREnd_275_){
_start:
{
lean_inc(v_dvREnd_275_);
return v_dvREnd_275_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim___boxed(lean_object* v_motive_276_, lean_object* v_t_277_, lean_object* v_h_278_, lean_object* v_dvREnd_279_){
_start:
{
uint8_t v_t_boxed_280_; lean_object* v_res_281_; 
v_t_boxed_280_ = lean_unbox(v_t_277_);
v_res_281_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvREnd_elim(v_motive_276_, v_t_boxed_280_, v_h_278_, v_dvREnd_279_);
lean_dec(v_dvREnd_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim___redArg(lean_object* v_dvRFall_282_){
_start:
{
lean_inc(v_dvRFall_282_);
return v_dvRFall_282_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim___redArg___boxed(lean_object* v_dvRFall_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim___redArg(v_dvRFall_283_);
lean_dec(v_dvRFall_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim(lean_object* v_motive_285_, uint8_t v_t_286_, lean_object* v_h_287_, lean_object* v_dvRFall_288_){
_start:
{
lean_inc(v_dvRFall_288_);
return v_dvRFall_288_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim___boxed(lean_object* v_motive_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_dvRFall_292_){
_start:
{
uint8_t v_t_boxed_293_; lean_object* v_res_294_; 
v_t_boxed_293_ = lean_unbox(v_t_290_);
v_res_294_ = lp_lean_x2dftml_LeanFtml_ContainClass_dvRFall_elim(v_motive_289_, v_t_boxed_293_, v_h_291_, v_dvRFall_292_);
lean_dec(v_dvRFall_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim___redArg(lean_object* v_coParseClaim_295_){
_start:
{
lean_inc(v_coParseClaim_295_);
return v_coParseClaim_295_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim___redArg___boxed(lean_object* v_coParseClaim_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim___redArg(v_coParseClaim_296_);
lean_dec(v_coParseClaim_296_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim(lean_object* v_motive_298_, uint8_t v_t_299_, lean_object* v_h_300_, lean_object* v_coParseClaim_301_){
_start:
{
lean_inc(v_coParseClaim_301_);
return v_coParseClaim_301_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim___boxed(lean_object* v_motive_302_, lean_object* v_t_303_, lean_object* v_h_304_, lean_object* v_coParseClaim_305_){
_start:
{
uint8_t v_t_boxed_306_; lean_object* v_res_307_; 
v_t_boxed_306_ = lean_unbox(v_t_303_);
v_res_307_ = lp_lean_x2dftml_LeanFtml_ContainClass_coParseClaim_elim(v_motive_302_, v_t_boxed_306_, v_h_304_, v_coParseClaim_305_);
lean_dec(v_coParseClaim_305_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim___redArg(lean_object* v_coFolded_308_){
_start:
{
lean_inc(v_coFolded_308_);
return v_coFolded_308_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim___redArg___boxed(lean_object* v_coFolded_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim___redArg(v_coFolded_309_);
lean_dec(v_coFolded_309_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim(lean_object* v_motive_311_, uint8_t v_t_312_, lean_object* v_h_313_, lean_object* v_coFolded_314_){
_start:
{
lean_inc(v_coFolded_314_);
return v_coFolded_314_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim___boxed(lean_object* v_motive_315_, lean_object* v_t_316_, lean_object* v_h_317_, lean_object* v_coFolded_318_){
_start:
{
uint8_t v_t_boxed_319_; lean_object* v_res_320_; 
v_t_boxed_319_ = lean_unbox(v_t_316_);
v_res_320_ = lp_lean_x2dftml_LeanFtml_ContainClass_coFolded_elim(v_motive_315_, v_t_boxed_319_, v_h_317_, v_coFolded_318_);
lean_dec(v_coFolded_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim___redArg(lean_object* v_coOpened_321_){
_start:
{
lean_inc(v_coOpened_321_);
return v_coOpened_321_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim___redArg___boxed(lean_object* v_coOpened_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim___redArg(v_coOpened_322_);
lean_dec(v_coOpened_322_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim(lean_object* v_motive_324_, uint8_t v_t_325_, lean_object* v_h_326_, lean_object* v_coOpened_327_){
_start:
{
lean_inc(v_coOpened_327_);
return v_coOpened_327_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim___boxed(lean_object* v_motive_328_, lean_object* v_t_329_, lean_object* v_h_330_, lean_object* v_coOpened_331_){
_start:
{
uint8_t v_t_boxed_332_; lean_object* v_res_333_; 
v_t_boxed_332_ = lean_unbox(v_t_329_);
v_res_333_ = lp_lean_x2dftml_LeanFtml_ContainClass_coOpened_elim(v_motive_328_, v_t_boxed_332_, v_h_330_, v_coOpened_331_);
lean_dec(v_coOpened_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim___redArg(lean_object* v_coShowDefault_334_){
_start:
{
lean_inc(v_coShowDefault_334_);
return v_coShowDefault_334_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim___redArg___boxed(lean_object* v_coShowDefault_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim___redArg(v_coShowDefault_335_);
lean_dec(v_coShowDefault_335_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim(lean_object* v_motive_337_, uint8_t v_t_338_, lean_object* v_h_339_, lean_object* v_coShowDefault_340_){
_start:
{
lean_inc(v_coShowDefault_340_);
return v_coShowDefault_340_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim___boxed(lean_object* v_motive_341_, lean_object* v_t_342_, lean_object* v_h_343_, lean_object* v_coShowDefault_344_){
_start:
{
uint8_t v_t_boxed_345_; lean_object* v_res_346_; 
v_t_boxed_345_ = lean_unbox(v_t_342_);
v_res_346_ = lp_lean_x2dftml_LeanFtml_ContainClass_coShowDefault_elim(v_motive_341_, v_t_boxed_345_, v_h_343_, v_coShowDefault_344_);
lean_dec(v_coShowDefault_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim___redArg(lean_object* v_coShowAuthored_347_){
_start:
{
lean_inc(v_coShowAuthored_347_);
return v_coShowAuthored_347_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim___redArg___boxed(lean_object* v_coShowAuthored_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim___redArg(v_coShowAuthored_348_);
lean_dec(v_coShowAuthored_348_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim(lean_object* v_motive_350_, uint8_t v_t_351_, lean_object* v_h_352_, lean_object* v_coShowAuthored_353_){
_start:
{
lean_inc(v_coShowAuthored_353_);
return v_coShowAuthored_353_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim___boxed(lean_object* v_motive_354_, lean_object* v_t_355_, lean_object* v_h_356_, lean_object* v_coShowAuthored_357_){
_start:
{
uint8_t v_t_boxed_358_; lean_object* v_res_359_; 
v_t_boxed_358_ = lean_unbox(v_t_355_);
v_res_359_ = lp_lean_x2dftml_LeanFtml_ContainClass_coShowAuthored_elim(v_motive_354_, v_t_boxed_358_, v_h_356_, v_coShowAuthored_357_);
lean_dec(v_coShowAuthored_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim___redArg(lean_object* v_coHideDefault_360_){
_start:
{
lean_inc(v_coHideDefault_360_);
return v_coHideDefault_360_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim___redArg___boxed(lean_object* v_coHideDefault_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim___redArg(v_coHideDefault_361_);
lean_dec(v_coHideDefault_361_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim(lean_object* v_motive_363_, uint8_t v_t_364_, lean_object* v_h_365_, lean_object* v_coHideDefault_366_){
_start:
{
lean_inc(v_coHideDefault_366_);
return v_coHideDefault_366_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim___boxed(lean_object* v_motive_367_, lean_object* v_t_368_, lean_object* v_h_369_, lean_object* v_coHideDefault_370_){
_start:
{
uint8_t v_t_boxed_371_; lean_object* v_res_372_; 
v_t_boxed_371_ = lean_unbox(v_t_368_);
v_res_372_ = lp_lean_x2dftml_LeanFtml_ContainClass_coHideDefault_elim(v_motive_367_, v_t_boxed_371_, v_h_369_, v_coHideDefault_370_);
lean_dec(v_coHideDefault_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim___redArg(lean_object* v_coHideAuthored_373_){
_start:
{
lean_inc(v_coHideAuthored_373_);
return v_coHideAuthored_373_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim___redArg___boxed(lean_object* v_coHideAuthored_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim___redArg(v_coHideAuthored_374_);
lean_dec(v_coHideAuthored_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim(lean_object* v_motive_376_, uint8_t v_t_377_, lean_object* v_h_378_, lean_object* v_coHideAuthored_379_){
_start:
{
lean_inc(v_coHideAuthored_379_);
return v_coHideAuthored_379_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim___boxed(lean_object* v_motive_380_, lean_object* v_t_381_, lean_object* v_h_382_, lean_object* v_coHideAuthored_383_){
_start:
{
uint8_t v_t_boxed_384_; lean_object* v_res_385_; 
v_t_boxed_384_ = lean_unbox(v_t_381_);
v_res_385_ = lp_lean_x2dftml_LeanFtml_ContainClass_coHideAuthored_elim(v_motive_380_, v_t_boxed_384_, v_h_382_, v_coHideAuthored_383_);
lean_dec(v_coHideAuthored_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim___redArg(lean_object* v_coLocTop_386_){
_start:
{
lean_inc(v_coLocTop_386_);
return v_coLocTop_386_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim___redArg___boxed(lean_object* v_coLocTop_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim___redArg(v_coLocTop_387_);
lean_dec(v_coLocTop_387_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim(lean_object* v_motive_389_, uint8_t v_t_390_, lean_object* v_h_391_, lean_object* v_coLocTop_392_){
_start:
{
lean_inc(v_coLocTop_392_);
return v_coLocTop_392_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim___boxed(lean_object* v_motive_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_coLocTop_396_){
_start:
{
uint8_t v_t_boxed_397_; lean_object* v_res_398_; 
v_t_boxed_397_ = lean_unbox(v_t_394_);
v_res_398_ = lp_lean_x2dftml_LeanFtml_ContainClass_coLocTop_elim(v_motive_393_, v_t_boxed_397_, v_h_395_, v_coLocTop_396_);
lean_dec(v_coLocTop_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim___redArg(lean_object* v_coLocBottom_399_){
_start:
{
lean_inc(v_coLocBottom_399_);
return v_coLocBottom_399_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim___redArg___boxed(lean_object* v_coLocBottom_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim___redArg(v_coLocBottom_400_);
lean_dec(v_coLocBottom_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim(lean_object* v_motive_402_, uint8_t v_t_403_, lean_object* v_h_404_, lean_object* v_coLocBottom_405_){
_start:
{
lean_inc(v_coLocBottom_405_);
return v_coLocBottom_405_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim___boxed(lean_object* v_motive_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_coLocBottom_409_){
_start:
{
uint8_t v_t_boxed_410_; lean_object* v_res_411_; 
v_t_boxed_410_ = lean_unbox(v_t_407_);
v_res_411_ = lp_lean_x2dftml_LeanFtml_ContainClass_coLocBottom_elim(v_motive_406_, v_t_boxed_410_, v_h_408_, v_coLocBottom_409_);
lean_dec(v_coLocBottom_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim___redArg(lean_object* v_coLocBoth_412_){
_start:
{
lean_inc(v_coLocBoth_412_);
return v_coLocBoth_412_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim___redArg___boxed(lean_object* v_coLocBoth_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim___redArg(v_coLocBoth_413_);
lean_dec(v_coLocBoth_413_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim(lean_object* v_motive_415_, uint8_t v_t_416_, lean_object* v_h_417_, lean_object* v_coLocBoth_418_){
_start:
{
lean_inc(v_coLocBoth_418_);
return v_coLocBoth_418_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim___boxed(lean_object* v_motive_419_, lean_object* v_t_420_, lean_object* v_h_421_, lean_object* v_coLocBoth_422_){
_start:
{
uint8_t v_t_boxed_423_; lean_object* v_res_424_; 
v_t_boxed_423_ = lean_unbox(v_t_420_);
v_res_424_ = lp_lean_x2dftml_LeanFtml_ContainClass_coLocBoth_elim(v_motive_419_, v_t_boxed_423_, v_h_421_, v_coLocBoth_422_);
lean_dec(v_coLocBoth_422_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim___redArg(lean_object* v_coStart_425_){
_start:
{
lean_inc(v_coStart_425_);
return v_coStart_425_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim___redArg___boxed(lean_object* v_coStart_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim___redArg(v_coStart_426_);
lean_dec(v_coStart_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim(lean_object* v_motive_428_, uint8_t v_t_429_, lean_object* v_h_430_, lean_object* v_coStart_431_){
_start:
{
lean_inc(v_coStart_431_);
return v_coStart_431_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim___boxed(lean_object* v_motive_432_, lean_object* v_t_433_, lean_object* v_h_434_, lean_object* v_coStart_435_){
_start:
{
uint8_t v_t_boxed_436_; lean_object* v_res_437_; 
v_t_boxed_436_ = lean_unbox(v_t_433_);
v_res_437_ = lp_lean_x2dftml_LeanFtml_ContainClass_coStart_elim(v_motive_432_, v_t_boxed_436_, v_h_434_, v_coStart_435_);
lean_dec(v_coStart_435_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim___redArg(lean_object* v_coEnd_438_){
_start:
{
lean_inc(v_coEnd_438_);
return v_coEnd_438_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim___redArg___boxed(lean_object* v_coEnd_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim___redArg(v_coEnd_439_);
lean_dec(v_coEnd_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim(lean_object* v_motive_441_, uint8_t v_t_442_, lean_object* v_h_443_, lean_object* v_coEnd_444_){
_start:
{
lean_inc(v_coEnd_444_);
return v_coEnd_444_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim___boxed(lean_object* v_motive_445_, lean_object* v_t_446_, lean_object* v_h_447_, lean_object* v_coEnd_448_){
_start:
{
uint8_t v_t_boxed_449_; lean_object* v_res_450_; 
v_t_boxed_449_ = lean_unbox(v_t_446_);
v_res_450_ = lp_lean_x2dftml_LeanFtml_ContainClass_coEnd_elim(v_motive_445_, v_t_boxed_449_, v_h_447_, v_coEnd_448_);
lean_dec(v_coEnd_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim___redArg(lean_object* v_coFall_451_){
_start:
{
lean_inc(v_coFall_451_);
return v_coFall_451_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim___redArg___boxed(lean_object* v_coFall_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim___redArg(v_coFall_452_);
lean_dec(v_coFall_452_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim(lean_object* v_motive_454_, uint8_t v_t_455_, lean_object* v_h_456_, lean_object* v_coFall_457_){
_start:
{
lean_inc(v_coFall_457_);
return v_coFall_457_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim___boxed(lean_object* v_motive_458_, lean_object* v_t_459_, lean_object* v_h_460_, lean_object* v_coFall_461_){
_start:
{
uint8_t v_t_boxed_462_; lean_object* v_res_463_; 
v_t_boxed_462_ = lean_unbox(v_t_459_);
v_res_463_ = lp_lean_x2dftml_LeanFtml_ContainClass_coFall_elim(v_motive_458_, v_t_boxed_462_, v_h_460_, v_coFall_461_);
lean_dec(v_coFall_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim___redArg(lean_object* v_tvTitleUntitled_464_){
_start:
{
lean_inc(v_tvTitleUntitled_464_);
return v_tvTitleUntitled_464_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim___redArg___boxed(lean_object* v_tvTitleUntitled_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim___redArg(v_tvTitleUntitled_465_);
lean_dec(v_tvTitleUntitled_465_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim(lean_object* v_motive_467_, uint8_t v_t_468_, lean_object* v_h_469_, lean_object* v_tvTitleUntitled_470_){
_start:
{
lean_inc(v_tvTitleUntitled_470_);
return v_tvTitleUntitled_470_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim___boxed(lean_object* v_motive_471_, lean_object* v_t_472_, lean_object* v_h_473_, lean_object* v_tvTitleUntitled_474_){
_start:
{
uint8_t v_t_boxed_475_; lean_object* v_res_476_; 
v_t_boxed_475_ = lean_unbox(v_t_472_);
v_res_476_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleUntitled_elim(v_motive_471_, v_t_boxed_475_, v_h_473_, v_tvTitleUntitled_474_);
lean_dec(v_tvTitleUntitled_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim___redArg(lean_object* v_tvTitleRawEmpty_477_){
_start:
{
lean_inc(v_tvTitleRawEmpty_477_);
return v_tvTitleRawEmpty_477_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim___redArg___boxed(lean_object* v_tvTitleRawEmpty_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim___redArg(v_tvTitleRawEmpty_478_);
lean_dec(v_tvTitleRawEmpty_478_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim(lean_object* v_motive_480_, uint8_t v_t_481_, lean_object* v_h_482_, lean_object* v_tvTitleRawEmpty_483_){
_start:
{
lean_inc(v_tvTitleRawEmpty_483_);
return v_tvTitleRawEmpty_483_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim___boxed(lean_object* v_motive_484_, lean_object* v_t_485_, lean_object* v_h_486_, lean_object* v_tvTitleRawEmpty_487_){
_start:
{
uint8_t v_t_boxed_488_; lean_object* v_res_489_; 
v_t_boxed_488_ = lean_unbox(v_t_485_);
v_res_489_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleRawEmpty_elim(v_motive_484_, v_t_boxed_488_, v_h_486_, v_tvTitleRawEmpty_487_);
lean_dec(v_tvTitleRawEmpty_487_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim___redArg(lean_object* v_tvTitleCollapsed_490_){
_start:
{
lean_inc(v_tvTitleCollapsed_490_);
return v_tvTitleCollapsed_490_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim___redArg___boxed(lean_object* v_tvTitleCollapsed_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim___redArg(v_tvTitleCollapsed_491_);
lean_dec(v_tvTitleCollapsed_491_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim(lean_object* v_motive_493_, uint8_t v_t_494_, lean_object* v_h_495_, lean_object* v_tvTitleCollapsed_496_){
_start:
{
lean_inc(v_tvTitleCollapsed_496_);
return v_tvTitleCollapsed_496_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim___boxed(lean_object* v_motive_497_, lean_object* v_t_498_, lean_object* v_h_499_, lean_object* v_tvTitleCollapsed_500_){
_start:
{
uint8_t v_t_boxed_501_; lean_object* v_res_502_; 
v_t_boxed_501_ = lean_unbox(v_t_498_);
v_res_502_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleCollapsed_elim(v_motive_497_, v_t_boxed_501_, v_h_499_, v_tvTitleCollapsed_500_);
lean_dec(v_tvTitleCollapsed_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim___redArg(lean_object* v_tvTitlePositional_503_){
_start:
{
lean_inc(v_tvTitlePositional_503_);
return v_tvTitlePositional_503_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim___redArg___boxed(lean_object* v_tvTitlePositional_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim___redArg(v_tvTitlePositional_504_);
lean_dec(v_tvTitlePositional_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim(lean_object* v_motive_506_, uint8_t v_t_507_, lean_object* v_h_508_, lean_object* v_tvTitlePositional_509_){
_start:
{
lean_inc(v_tvTitlePositional_509_);
return v_tvTitlePositional_509_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim___boxed(lean_object* v_motive_510_, lean_object* v_t_511_, lean_object* v_h_512_, lean_object* v_tvTitlePositional_513_){
_start:
{
uint8_t v_t_boxed_514_; lean_object* v_res_515_; 
v_t_boxed_514_ = lean_unbox(v_t_511_);
v_res_515_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitlePositional_elim(v_motive_510_, v_t_boxed_514_, v_h_512_, v_tvTitlePositional_513_);
lean_dec(v_tvTitlePositional_513_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim___redArg(lean_object* v_tvTitleAttribute_516_){
_start:
{
lean_inc(v_tvTitleAttribute_516_);
return v_tvTitleAttribute_516_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim___redArg___boxed(lean_object* v_tvTitleAttribute_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim___redArg(v_tvTitleAttribute_517_);
lean_dec(v_tvTitleAttribute_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim(lean_object* v_motive_519_, uint8_t v_t_520_, lean_object* v_h_521_, lean_object* v_tvTitleAttribute_522_){
_start:
{
lean_inc(v_tvTitleAttribute_522_);
return v_tvTitleAttribute_522_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim___boxed(lean_object* v_motive_523_, lean_object* v_t_524_, lean_object* v_h_525_, lean_object* v_tvTitleAttribute_526_){
_start:
{
uint8_t v_t_boxed_527_; lean_object* v_res_528_; 
v_t_boxed_527_ = lean_unbox(v_t_524_);
v_res_528_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvTitleAttribute_elim(v_motive_523_, v_t_boxed_527_, v_h_525_, v_tvTitleAttribute_526_);
lean_dec(v_tvTitleAttribute_526_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim___redArg(lean_object* v_tvClassKept_529_){
_start:
{
lean_inc(v_tvClassKept_529_);
return v_tvClassKept_529_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim___redArg___boxed(lean_object* v_tvClassKept_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim___redArg(v_tvClassKept_530_);
lean_dec(v_tvClassKept_530_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim(lean_object* v_motive_532_, uint8_t v_t_533_, lean_object* v_h_534_, lean_object* v_tvClassKept_535_){
_start:
{
lean_inc(v_tvClassKept_535_);
return v_tvClassKept_535_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim___boxed(lean_object* v_motive_536_, lean_object* v_t_537_, lean_object* v_h_538_, lean_object* v_tvClassKept_539_){
_start:
{
uint8_t v_t_boxed_540_; lean_object* v_res_541_; 
v_t_boxed_540_ = lean_unbox(v_t_537_);
v_res_541_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvClassKept_elim(v_motive_536_, v_t_boxed_540_, v_h_538_, v_tvClassKept_539_);
lean_dec(v_tvClassKept_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim___redArg(lean_object* v_tvClassDropped_542_){
_start:
{
lean_inc(v_tvClassDropped_542_);
return v_tvClassDropped_542_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim___redArg___boxed(lean_object* v_tvClassDropped_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim___redArg(v_tvClassDropped_543_);
lean_dec(v_tvClassDropped_543_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim(lean_object* v_motive_545_, uint8_t v_t_546_, lean_object* v_h_547_, lean_object* v_tvClassDropped_548_){
_start:
{
lean_inc(v_tvClassDropped_548_);
return v_tvClassDropped_548_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim___boxed(lean_object* v_motive_549_, lean_object* v_t_550_, lean_object* v_h_551_, lean_object* v_tvClassDropped_552_){
_start:
{
uint8_t v_t_boxed_553_; lean_object* v_res_554_; 
v_t_boxed_553_ = lean_unbox(v_t_550_);
v_res_554_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvClassDropped_elim(v_motive_549_, v_t_boxed_553_, v_h_551_, v_tvClassDropped_552_);
lean_dec(v_tvClassDropped_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim___redArg(lean_object* v_tvAttrEcho_555_){
_start:
{
lean_inc(v_tvAttrEcho_555_);
return v_tvAttrEcho_555_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim___redArg___boxed(lean_object* v_tvAttrEcho_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim___redArg(v_tvAttrEcho_556_);
lean_dec(v_tvAttrEcho_556_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim(lean_object* v_motive_558_, uint8_t v_t_559_, lean_object* v_h_560_, lean_object* v_tvAttrEcho_561_){
_start:
{
lean_inc(v_tvAttrEcho_561_);
return v_tvAttrEcho_561_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim___boxed(lean_object* v_motive_562_, lean_object* v_t_563_, lean_object* v_h_564_, lean_object* v_tvAttrEcho_565_){
_start:
{
uint8_t v_t_boxed_566_; lean_object* v_res_567_; 
v_t_boxed_566_ = lean_unbox(v_t_563_);
v_res_567_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvAttrEcho_elim(v_motive_562_, v_t_boxed_566_, v_h_564_, v_tvAttrEcho_565_);
lean_dec(v_tvAttrEcho_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim___redArg(lean_object* v_tvStart_568_){
_start:
{
lean_inc(v_tvStart_568_);
return v_tvStart_568_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim___redArg___boxed(lean_object* v_tvStart_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim___redArg(v_tvStart_569_);
lean_dec(v_tvStart_569_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim(lean_object* v_motive_571_, uint8_t v_t_572_, lean_object* v_h_573_, lean_object* v_tvStart_574_){
_start:
{
lean_inc(v_tvStart_574_);
return v_tvStart_574_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim___boxed(lean_object* v_motive_575_, lean_object* v_t_576_, lean_object* v_h_577_, lean_object* v_tvStart_578_){
_start:
{
uint8_t v_t_boxed_579_; lean_object* v_res_580_; 
v_t_boxed_579_ = lean_unbox(v_t_576_);
v_res_580_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvStart_elim(v_motive_575_, v_t_boxed_579_, v_h_577_, v_tvStart_578_);
lean_dec(v_tvStart_578_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim___redArg(lean_object* v_tvSelected_581_){
_start:
{
lean_inc(v_tvSelected_581_);
return v_tvSelected_581_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim___redArg___boxed(lean_object* v_tvSelected_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim___redArg(v_tvSelected_582_);
lean_dec(v_tvSelected_582_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim(lean_object* v_motive_584_, uint8_t v_t_585_, lean_object* v_h_586_, lean_object* v_tvSelected_587_){
_start:
{
lean_inc(v_tvSelected_587_);
return v_tvSelected_587_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim___boxed(lean_object* v_motive_588_, lean_object* v_t_589_, lean_object* v_h_590_, lean_object* v_tvSelected_591_){
_start:
{
uint8_t v_t_boxed_592_; lean_object* v_res_593_; 
v_t_boxed_592_ = lean_unbox(v_t_589_);
v_res_593_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvSelected_elim(v_motive_588_, v_t_boxed_592_, v_h_590_, v_tvSelected_591_);
lean_dec(v_tvSelected_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim___redArg(lean_object* v_tvUnselected_594_){
_start:
{
lean_inc(v_tvUnselected_594_);
return v_tvUnselected_594_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim___redArg___boxed(lean_object* v_tvUnselected_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim___redArg(v_tvUnselected_595_);
lean_dec(v_tvUnselected_595_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim(lean_object* v_motive_597_, uint8_t v_t_598_, lean_object* v_h_599_, lean_object* v_tvUnselected_600_){
_start:
{
lean_inc(v_tvUnselected_600_);
return v_tvUnselected_600_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim___boxed(lean_object* v_motive_601_, lean_object* v_t_602_, lean_object* v_h_603_, lean_object* v_tvUnselected_604_){
_start:
{
uint8_t v_t_boxed_605_; lean_object* v_res_606_; 
v_t_boxed_605_ = lean_unbox(v_t_602_);
v_res_606_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvUnselected_elim(v_motive_601_, v_t_boxed_605_, v_h_603_, v_tvUnselected_604_);
lean_dec(v_tvUnselected_604_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim___redArg(lean_object* v_tvLabelDefault_607_){
_start:
{
lean_inc(v_tvLabelDefault_607_);
return v_tvLabelDefault_607_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim___redArg___boxed(lean_object* v_tvLabelDefault_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim___redArg(v_tvLabelDefault_608_);
lean_dec(v_tvLabelDefault_608_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim(lean_object* v_motive_610_, uint8_t v_t_611_, lean_object* v_h_612_, lean_object* v_tvLabelDefault_613_){
_start:
{
lean_inc(v_tvLabelDefault_613_);
return v_tvLabelDefault_613_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim___boxed(lean_object* v_motive_614_, lean_object* v_t_615_, lean_object* v_h_616_, lean_object* v_tvLabelDefault_617_){
_start:
{
uint8_t v_t_boxed_618_; lean_object* v_res_619_; 
v_t_boxed_618_ = lean_unbox(v_t_615_);
v_res_619_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelDefault_elim(v_motive_614_, v_t_boxed_618_, v_h_616_, v_tvLabelDefault_617_);
lean_dec(v_tvLabelDefault_617_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim___redArg(lean_object* v_tvLabelEmpty_620_){
_start:
{
lean_inc(v_tvLabelEmpty_620_);
return v_tvLabelEmpty_620_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim___redArg___boxed(lean_object* v_tvLabelEmpty_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim___redArg(v_tvLabelEmpty_621_);
lean_dec(v_tvLabelEmpty_621_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim(lean_object* v_motive_623_, uint8_t v_t_624_, lean_object* v_h_625_, lean_object* v_tvLabelEmpty_626_){
_start:
{
lean_inc(v_tvLabelEmpty_626_);
return v_tvLabelEmpty_626_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim___boxed(lean_object* v_motive_627_, lean_object* v_t_628_, lean_object* v_h_629_, lean_object* v_tvLabelEmpty_630_){
_start:
{
uint8_t v_t_boxed_631_; lean_object* v_res_632_; 
v_t_boxed_631_ = lean_unbox(v_t_628_);
v_res_632_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelEmpty_elim(v_motive_627_, v_t_boxed_631_, v_h_629_, v_tvLabelEmpty_630_);
lean_dec(v_tvLabelEmpty_630_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim___redArg(lean_object* v_tvLabelText_633_){
_start:
{
lean_inc(v_tvLabelText_633_);
return v_tvLabelText_633_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim___redArg___boxed(lean_object* v_tvLabelText_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim___redArg(v_tvLabelText_634_);
lean_dec(v_tvLabelText_634_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim(lean_object* v_motive_636_, uint8_t v_t_637_, lean_object* v_h_638_, lean_object* v_tvLabelText_639_){
_start:
{
lean_inc(v_tvLabelText_639_);
return v_tvLabelText_639_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim___boxed(lean_object* v_motive_640_, lean_object* v_t_641_, lean_object* v_h_642_, lean_object* v_tvLabelText_643_){
_start:
{
uint8_t v_t_boxed_644_; lean_object* v_res_645_; 
v_t_boxed_644_ = lean_unbox(v_t_641_);
v_res_645_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvLabelText_elim(v_motive_640_, v_t_boxed_644_, v_h_642_, v_tvLabelText_643_);
lean_dec(v_tvLabelText_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim___redArg(lean_object* v_tvPanelShown_646_){
_start:
{
lean_inc(v_tvPanelShown_646_);
return v_tvPanelShown_646_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim___redArg___boxed(lean_object* v_tvPanelShown_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim___redArg(v_tvPanelShown_647_);
lean_dec(v_tvPanelShown_647_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim(lean_object* v_motive_649_, uint8_t v_t_650_, lean_object* v_h_651_, lean_object* v_tvPanelShown_652_){
_start:
{
lean_inc(v_tvPanelShown_652_);
return v_tvPanelShown_652_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim___boxed(lean_object* v_motive_653_, lean_object* v_t_654_, lean_object* v_h_655_, lean_object* v_tvPanelShown_656_){
_start:
{
uint8_t v_t_boxed_657_; lean_object* v_res_658_; 
v_t_boxed_657_ = lean_unbox(v_t_654_);
v_res_658_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelShown_elim(v_motive_653_, v_t_boxed_657_, v_h_655_, v_tvPanelShown_656_);
lean_dec(v_tvPanelShown_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim___redArg(lean_object* v_tvPanelHidden_659_){
_start:
{
lean_inc(v_tvPanelHidden_659_);
return v_tvPanelHidden_659_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim___redArg___boxed(lean_object* v_tvPanelHidden_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim___redArg(v_tvPanelHidden_660_);
lean_dec(v_tvPanelHidden_660_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim(lean_object* v_motive_662_, uint8_t v_t_663_, lean_object* v_h_664_, lean_object* v_tvPanelHidden_665_){
_start:
{
lean_inc(v_tvPanelHidden_665_);
return v_tvPanelHidden_665_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim___boxed(lean_object* v_motive_666_, lean_object* v_t_667_, lean_object* v_h_668_, lean_object* v_tvPanelHidden_669_){
_start:
{
uint8_t v_t_boxed_670_; lean_object* v_res_671_; 
v_t_boxed_670_ = lean_unbox(v_t_667_);
v_res_671_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelHidden_elim(v_motive_666_, v_t_boxed_670_, v_h_668_, v_tvPanelHidden_669_);
lean_dec(v_tvPanelHidden_669_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim___redArg(lean_object* v_tvPanelEnd_672_){
_start:
{
lean_inc(v_tvPanelEnd_672_);
return v_tvPanelEnd_672_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim___redArg___boxed(lean_object* v_tvPanelEnd_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim___redArg(v_tvPanelEnd_673_);
lean_dec(v_tvPanelEnd_673_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim(lean_object* v_motive_675_, uint8_t v_t_676_, lean_object* v_h_677_, lean_object* v_tvPanelEnd_678_){
_start:
{
lean_inc(v_tvPanelEnd_678_);
return v_tvPanelEnd_678_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim___boxed(lean_object* v_motive_679_, lean_object* v_t_680_, lean_object* v_h_681_, lean_object* v_tvPanelEnd_682_){
_start:
{
uint8_t v_t_boxed_683_; lean_object* v_res_684_; 
v_t_boxed_683_ = lean_unbox(v_t_680_);
v_res_684_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvPanelEnd_elim(v_motive_679_, v_t_boxed_683_, v_h_681_, v_tvPanelEnd_682_);
lean_dec(v_tvPanelEnd_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim___redArg(lean_object* v_tvEnd_685_){
_start:
{
lean_inc(v_tvEnd_685_);
return v_tvEnd_685_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim___redArg___boxed(lean_object* v_tvEnd_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim___redArg(v_tvEnd_686_);
lean_dec(v_tvEnd_686_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim(lean_object* v_motive_688_, uint8_t v_t_689_, lean_object* v_h_690_, lean_object* v_tvEnd_691_){
_start:
{
lean_inc(v_tvEnd_691_);
return v_tvEnd_691_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim___boxed(lean_object* v_motive_692_, lean_object* v_t_693_, lean_object* v_h_694_, lean_object* v_tvEnd_695_){
_start:
{
uint8_t v_t_boxed_696_; lean_object* v_res_697_; 
v_t_boxed_696_ = lean_unbox(v_t_693_);
v_res_697_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvEnd_elim(v_motive_692_, v_t_boxed_696_, v_h_694_, v_tvEnd_695_);
lean_dec(v_tvEnd_695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim___redArg(lean_object* v_tvFall_698_){
_start:
{
lean_inc(v_tvFall_698_);
return v_tvFall_698_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim___redArg___boxed(lean_object* v_tvFall_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim___redArg(v_tvFall_699_);
lean_dec(v_tvFall_699_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim(lean_object* v_motive_701_, uint8_t v_t_702_, lean_object* v_h_703_, lean_object* v_tvFall_704_){
_start:
{
lean_inc(v_tvFall_704_);
return v_tvFall_704_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim___boxed(lean_object* v_motive_705_, lean_object* v_t_706_, lean_object* v_h_707_, lean_object* v_tvFall_708_){
_start:
{
uint8_t v_t_boxed_709_; lean_object* v_res_710_; 
v_t_boxed_709_ = lean_unbox(v_t_706_);
v_res_710_ = lp_lean_x2dftml_LeanFtml_ContainClass_tvFall_elim(v_motive_705_, v_t_boxed_709_, v_h_707_, v_tvFall_708_);
lean_dec(v_tvFall_708_);
return v_res_710_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ContainClass_ofNat(lean_object* v_n_711_){
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainClass_ofNat___boxed(lean_object* v_n_869_){
_start:
{
uint8_t v_res_870_; lean_object* v_r_871_; 
v_res_870_ = lp_lean_x2dftml_LeanFtml_ContainClass_ofNat(v_n_869_);
lean_dec(v_n_869_);
v_r_871_ = lean_box(v_res_870_);
return v_r_871_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqContainClass(uint8_t v_x_872_, uint8_t v_y_873_){
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqContainClass___boxed(lean_object* v_x_879_, lean_object* v_y_880_){
_start:
{
uint8_t v_x_23__boxed_881_; uint8_t v_y_24__boxed_882_; uint8_t v_res_883_; lean_object* v_r_884_; 
v_x_23__boxed_881_ = lean_unbox(v_x_879_);
v_y_24__boxed_882_ = lean_unbox(v_y_880_);
v_res_883_ = lp_lean_x2dftml_LeanFtml_instDecidableEqContainClass(v_x_23__boxed_881_, v_y_24__boxed_882_);
v_r_884_ = lean_box(v_res_883_);
return v_r_884_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(2u);
v___x_1045_ = lean_nat_to_int(v___x_1044_);
return v___x_1045_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_unsigned_to_nat(1u);
v___x_1047_ = lean_nat_to_int(v___x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr(uint8_t v_x_1048_, lean_object* v_prec_1049_){
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
v___x_1423_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1051_ = v___x_1423_;
goto v___jp_1050_;
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1427_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1058_ = v___x_1427_;
goto v___jp_1057_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1431_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1065_ = v___x_1431_;
goto v___jp_1064_;
}
else
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1435_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1072_ = v___x_1435_;
goto v___jp_1071_;
}
else
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1439_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1079_ = v___x_1439_;
goto v___jp_1078_;
}
else
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1443_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1086_ = v___x_1443_;
goto v___jp_1085_;
}
else
{
lean_object* v___x_1444_; 
v___x_1444_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1093_ = v___x_1447_;
goto v___jp_1092_;
}
else
{
lean_object* v___x_1448_; 
v___x_1448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1451_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1100_ = v___x_1451_;
goto v___jp_1099_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1455_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1107_ = v___x_1455_;
goto v___jp_1106_;
}
else
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1459_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1114_ = v___x_1459_;
goto v___jp_1113_;
}
else
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1463_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1121_ = v___x_1463_;
goto v___jp_1120_;
}
else
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1467_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1128_ = v___x_1467_;
goto v___jp_1127_;
}
else
{
lean_object* v___x_1468_; 
v___x_1468_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1471_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1135_ = v___x_1471_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1472_; 
v___x_1472_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1475_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1142_ = v___x_1475_;
goto v___jp_1141_;
}
else
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1479_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1149_ = v___x_1479_;
goto v___jp_1148_;
}
else
{
lean_object* v___x_1480_; 
v___x_1480_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1483_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1156_ = v___x_1483_;
goto v___jp_1155_;
}
else
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1487_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1163_ = v___x_1487_;
goto v___jp_1162_;
}
else
{
lean_object* v___x_1488_; 
v___x_1488_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1491_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1170_ = v___x_1491_;
goto v___jp_1169_;
}
else
{
lean_object* v___x_1492_; 
v___x_1492_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1495_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1177_ = v___x_1495_;
goto v___jp_1176_;
}
else
{
lean_object* v___x_1496_; 
v___x_1496_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1499_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1184_ = v___x_1499_;
goto v___jp_1183_;
}
else
{
lean_object* v___x_1500_; 
v___x_1500_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1503_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1191_ = v___x_1503_;
goto v___jp_1190_;
}
else
{
lean_object* v___x_1504_; 
v___x_1504_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1507_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1198_ = v___x_1507_;
goto v___jp_1197_;
}
else
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1511_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1205_ = v___x_1511_;
goto v___jp_1204_;
}
else
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1515_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1212_ = v___x_1515_;
goto v___jp_1211_;
}
else
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1519_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1219_ = v___x_1519_;
goto v___jp_1218_;
}
else
{
lean_object* v___x_1520_; 
v___x_1520_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1523_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1226_ = v___x_1523_;
goto v___jp_1225_;
}
else
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1527_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1233_ = v___x_1527_;
goto v___jp_1232_;
}
else
{
lean_object* v___x_1528_; 
v___x_1528_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1531_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1240_ = v___x_1531_;
goto v___jp_1239_;
}
else
{
lean_object* v___x_1532_; 
v___x_1532_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1535_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1247_ = v___x_1535_;
goto v___jp_1246_;
}
else
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1539_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1254_ = v___x_1539_;
goto v___jp_1253_;
}
else
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1543_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1261_ = v___x_1543_;
goto v___jp_1260_;
}
else
{
lean_object* v___x_1544_; 
v___x_1544_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1547_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1268_ = v___x_1547_;
goto v___jp_1267_;
}
else
{
lean_object* v___x_1548_; 
v___x_1548_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1551_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1275_ = v___x_1551_;
goto v___jp_1274_;
}
else
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1555_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1282_ = v___x_1555_;
goto v___jp_1281_;
}
else
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1559_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1289_ = v___x_1559_;
goto v___jp_1288_;
}
else
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1563_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1296_ = v___x_1563_;
goto v___jp_1295_;
}
else
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1567_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1303_ = v___x_1567_;
goto v___jp_1302_;
}
else
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1310_ = v___x_1571_;
goto v___jp_1309_;
}
else
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1575_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1317_ = v___x_1575_;
goto v___jp_1316_;
}
else
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1579_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1324_ = v___x_1579_;
goto v___jp_1323_;
}
else
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1583_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1331_ = v___x_1583_;
goto v___jp_1330_;
}
else
{
lean_object* v___x_1584_; 
v___x_1584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1587_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1338_ = v___x_1587_;
goto v___jp_1337_;
}
else
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1591_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1345_ = v___x_1591_;
goto v___jp_1344_;
}
else
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1595_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1352_ = v___x_1595_;
goto v___jp_1351_;
}
else
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1599_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1359_ = v___x_1599_;
goto v___jp_1358_;
}
else
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1603_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1366_ = v___x_1603_;
goto v___jp_1365_;
}
else
{
lean_object* v___x_1604_; 
v___x_1604_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1607_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1373_ = v___x_1607_;
goto v___jp_1372_;
}
else
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1611_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1380_ = v___x_1611_;
goto v___jp_1379_;
}
else
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1615_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1387_ = v___x_1615_;
goto v___jp_1386_;
}
else
{
lean_object* v___x_1616_; 
v___x_1616_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1619_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1394_ = v___x_1619_;
goto v___jp_1393_;
}
else
{
lean_object* v___x_1620_; 
v___x_1620_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1623_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1401_ = v___x_1623_;
goto v___jp_1400_;
}
else
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1627_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1408_ = v___x_1627_;
goto v___jp_1407_;
}
else
{
lean_object* v___x_1628_; 
v___x_1628_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
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
v___x_1631_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1415_ = v___x_1631_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1632_; 
v___x_1632_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_1415_ = v___x_1632_;
goto v___jp_1414_;
}
}
}
v___jp_1050_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1052_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__1));
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
v___x_1059_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__3));
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
v___x_1066_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__5));
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
v___x_1073_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__7));
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
v___x_1080_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__9));
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
v___x_1087_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__11));
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
v___x_1094_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__13));
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
v___x_1101_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__15));
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
v___x_1108_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__17));
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
v___x_1115_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__19));
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
v___x_1122_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__21));
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
v___x_1129_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__23));
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
v___x_1136_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__25));
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
v___x_1143_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__27));
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
v___x_1150_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__29));
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
v___x_1157_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__31));
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
v___x_1164_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__33));
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
v___x_1171_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__35));
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
v___x_1178_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__37));
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
v___x_1185_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__39));
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
v___x_1192_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__41));
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
v___x_1199_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__43));
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
v___x_1206_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__45));
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
v___x_1213_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__47));
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
v___x_1220_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__49));
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
v___x_1227_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__51));
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
v___x_1234_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__53));
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
v___x_1241_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__55));
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
v___x_1248_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__57));
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
v___x_1255_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__59));
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
v___x_1262_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__61));
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
v___x_1269_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__63));
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
v___x_1276_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__65));
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
v___x_1283_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__67));
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
v___x_1290_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__69));
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
v___x_1297_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__71));
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
v___x_1304_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__73));
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
v___x_1311_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__75));
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
v___x_1318_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__77));
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
v___x_1325_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__79));
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
v___x_1332_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__81));
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
v___x_1339_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__83));
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
v___x_1346_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__85));
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
v___x_1353_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__87));
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
v___x_1360_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__89));
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
v___x_1367_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__91));
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
v___x_1374_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__93));
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
v___x_1381_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__95));
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
v___x_1388_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__97));
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
v___x_1395_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__99));
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
v___x_1402_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__101));
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
v___x_1409_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__103));
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
v___x_1416_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__105));
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___boxed(lean_object* v_x_1633_, lean_object* v_prec_1634_){
_start:
{
uint8_t v_x_2871__boxed_1635_; lean_object* v_res_1636_; 
v_x_2871__boxed_1635_ = lean_unbox(v_x_1633_);
v_res_1636_ = lp_lean_x2dftml_LeanFtml_instReprContainClass_repr(v_x_2871__boxed_1635_, v_prec_1634_);
lean_dec(v_prec_1634_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorIdx___impl(lean_object* v_x_1852_){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_obj_tag_nat(v_x_1852_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorIdx___impl___boxed(lean_object* v_x_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = lp_lean_x2dftml_LeanFtml_BqRun_ctorIdx___impl(v_x_1854_);
lean_dec(v_x_1854_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg(lean_object* v_t_1856_, lean_object* v_k_1857_){
_start:
{
if (lean_obj_tag(v_t_1856_) == 0)
{
return v_k_1857_;
}
else
{
uint8_t v_dropped_1858_; uint8_t v_shallower_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; 
v_dropped_1858_ = lean_ctor_get_uint8(v_t_1856_, 0);
v_shallower_1859_ = lean_ctor_get_uint8(v_t_1856_, 1);
v___x_1860_ = lean_box(v_dropped_1858_);
v___x_1861_ = lean_box(v_shallower_1859_);
v___x_1862_ = lean_apply_2(v_k_1857_, v___x_1860_, v___x_1861_);
return v___x_1862_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg___boxed(lean_object* v_t_1863_, lean_object* v_k_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg(v_t_1863_, v_k_1864_);
lean_dec(v_t_1863_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorElim(lean_object* v_motive_1866_, lean_object* v_ctorIdx_1867_, lean_object* v_t_1868_, lean_object* v_h_1869_, lean_object* v_k_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg(v_t_1868_, v_k_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___boxed(lean_object* v_motive_1872_, lean_object* v_ctorIdx_1873_, lean_object* v_t_1874_, lean_object* v_h_1875_, lean_object* v_k_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = lp_lean_x2dftml_LeanFtml_BqRun_ctorElim(v_motive_1872_, v_ctorIdx_1873_, v_t_1874_, v_h_1875_, v_k_1876_);
lean_dec(v_t_1874_);
lean_dec(v_ctorIdx_1873_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim___redArg(lean_object* v_t_1878_, lean_object* v_deleted_1879_){
_start:
{
lean_object* v___x_1880_; 
v___x_1880_ = lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg(v_t_1878_, v_deleted_1879_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim___redArg___boxed(lean_object* v_t_1881_, lean_object* v_deleted_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim___redArg(v_t_1881_, v_deleted_1882_);
lean_dec(v_t_1881_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim(lean_object* v_motive_1884_, lean_object* v_t_1885_, lean_object* v_h_1886_, lean_object* v_deleted_1887_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg(v_t_1885_, v_deleted_1887_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim___boxed(lean_object* v_motive_1889_, lean_object* v_t_1890_, lean_object* v_h_1891_, lean_object* v_deleted_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = lp_lean_x2dftml_LeanFtml_BqRun_deleted_elim(v_motive_1889_, v_t_1890_, v_h_1891_, v_deleted_1892_);
lean_dec(v_t_1890_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_kept_elim___redArg(lean_object* v_t_1894_, lean_object* v_kept_1895_){
_start:
{
lean_object* v___x_1896_; 
v___x_1896_ = lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg(v_t_1894_, v_kept_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_kept_elim___redArg___boxed(lean_object* v_t_1897_, lean_object* v_kept_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = lp_lean_x2dftml_LeanFtml_BqRun_kept_elim___redArg(v_t_1897_, v_kept_1898_);
lean_dec(v_t_1897_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_kept_elim(lean_object* v_motive_1900_, lean_object* v_t_1901_, lean_object* v_h_1902_, lean_object* v_kept_1903_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = lp_lean_x2dftml_LeanFtml_BqRun_ctorElim___redArg(v_t_1901_, v_kept_1903_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRun_kept_elim___boxed(lean_object* v_motive_1905_, lean_object* v_t_1906_, lean_object* v_h_1907_, lean_object* v_kept_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = lp_lean_x2dftml_LeanFtml_BqRun_kept_elim(v_motive_1905_, v_t_1906_, v_h_1907_, v_kept_1908_);
lean_dec(v_t_1906_);
return v_res_1909_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun_decEq(lean_object* v_x_1910_, lean_object* v_x_1911_){
_start:
{
if (lean_obj_tag(v_x_1910_) == 0)
{
if (lean_obj_tag(v_x_1911_) == 0)
{
uint8_t v___x_1912_; 
v___x_1912_ = 1;
return v___x_1912_;
}
else
{
uint8_t v___x_1913_; 
v___x_1913_ = 0;
return v___x_1913_;
}
}
else
{
if (lean_obj_tag(v_x_1911_) == 0)
{
uint8_t v___x_1914_; 
v___x_1914_ = 0;
return v___x_1914_;
}
else
{
uint8_t v_dropped_1915_; uint8_t v_shallower_1916_; uint8_t v_dropped_1917_; uint8_t v_shallower_1918_; uint8_t v___y_1920_; 
v_dropped_1915_ = lean_ctor_get_uint8(v_x_1910_, 0);
v_shallower_1916_ = lean_ctor_get_uint8(v_x_1910_, 1);
v_dropped_1917_ = lean_ctor_get_uint8(v_x_1911_, 0);
v_shallower_1918_ = lean_ctor_get_uint8(v_x_1911_, 1);
if (v_dropped_1917_ == 0)
{
if (v_dropped_1915_ == 0)
{
uint8_t v___x_1921_; 
v___x_1921_ = 1;
v___y_1920_ = v___x_1921_;
goto v___jp_1919_;
}
else
{
return v_dropped_1917_;
}
}
else
{
if (v_dropped_1915_ == 0)
{
return v_dropped_1915_;
}
else
{
v___y_1920_ = v_dropped_1915_;
goto v___jp_1919_;
}
}
v___jp_1919_:
{
if (v_shallower_1918_ == 0)
{
if (v_shallower_1916_ == 0)
{
return v___y_1920_;
}
else
{
return v_shallower_1918_;
}
}
else
{
return v_shallower_1916_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun_decEq___boxed(lean_object* v_x_1922_, lean_object* v_x_1923_){
_start:
{
uint8_t v_res_1924_; lean_object* v_r_1925_; 
v_res_1924_ = lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun_decEq(v_x_1922_, v_x_1923_);
lean_dec(v_x_1923_);
lean_dec(v_x_1922_);
v_r_1925_ = lean_box(v_res_1924_);
return v_r_1925_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun(lean_object* v_x_1926_, lean_object* v_x_1927_){
_start:
{
uint8_t v___x_1928_; 
v___x_1928_ = lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun_decEq(v_x_1926_, v_x_1927_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun___boxed(lean_object* v_x_1929_, lean_object* v_x_1930_){
_start:
{
uint8_t v_res_1931_; lean_object* v_r_1932_; 
v_res_1931_ = lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun(v_x_1929_, v_x_1930_);
lean_dec(v_x_1930_);
lean_dec(v_x_1929_);
v_r_1932_ = lean_box(v_res_1931_);
return v_r_1932_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr(lean_object* v_x_1942_, lean_object* v_prec_1943_){
_start:
{
lean_object* v___y_1945_; 
if (lean_obj_tag(v_x_1942_) == 0)
{
lean_object* v___x_1951_; uint8_t v___x_1952_; 
v___x_1951_ = lean_unsigned_to_nat(1024u);
v___x_1952_ = lean_nat_dec_le(v___x_1951_, v_prec_1943_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1953_; 
v___x_1953_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1945_ = v___x_1953_;
goto v___jp_1944_;
}
else
{
lean_object* v___x_1954_; 
v___x_1954_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_1945_ = v___x_1954_;
goto v___jp_1944_;
}
}
else
{
uint8_t v_dropped_1955_; uint8_t v_shallower_1956_; lean_object* v___y_1958_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v_dropped_1955_ = lean_ctor_get_uint8(v_x_1942_, 0);
v_shallower_1956_ = lean_ctor_get_uint8(v_x_1942_, 1);
v___x_1970_ = lean_unsigned_to_nat(1024u);
v___x_1971_ = lean_nat_dec_le(v___x_1970_, v_prec_1943_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_1958_ = v___x_1972_;
goto v___jp_1957_;
}
else
{
lean_object* v___x_1973_; 
v___x_1973_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_1958_ = v___x_1973_;
goto v___jp_1957_;
}
v___jp_1957_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1959_ = lean_box(1);
v___x_1960_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__4));
v___x_1961_ = l_Bool_repr___redArg(v_dropped_1955_);
v___x_1962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1960_);
lean_ctor_set(v___x_1962_, 1, v___x_1961_);
v___x_1963_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
lean_ctor_set(v___x_1963_, 1, v___x_1959_);
v___x_1964_ = l_Bool_repr___redArg(v_shallower_1956_);
v___x_1965_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1963_);
lean_ctor_set(v___x_1965_, 1, v___x_1964_);
lean_inc(v___y_1958_);
v___x_1966_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1966_, 0, v___y_1958_);
lean_ctor_set(v___x_1966_, 1, v___x_1965_);
v___x_1967_ = 0;
v___x_1968_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1968_, 0, v___x_1966_);
lean_ctor_set_uint8(v___x_1968_, sizeof(void*)*1, v___x_1967_);
v___x_1969_ = l_Repr_addAppParen(v___x_1968_, v_prec_1943_);
return v___x_1969_;
}
}
v___jp_1944_:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; uint8_t v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1946_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___closed__1));
lean_inc(v___y_1945_);
v___x_1947_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___y_1945_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
v___x_1948_ = 0;
v___x_1949_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1949_, 0, v___x_1947_);
lean_ctor_set_uint8(v___x_1949_, sizeof(void*)*1, v___x_1948_);
v___x_1950_ = l_Repr_addAppParen(v___x_1949_, v_prec_1943_);
return v___x_1950_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRun_repr___boxed(lean_object* v_x_1974_, lean_object* v_prec_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = lp_lean_x2dftml_LeanFtml_instReprBqRun_repr(v_x_1974_, v_prec_1975_);
lean_dec(v_prec_1975_);
lean_dec(v_x_1974_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorIdx___impl(uint8_t v_x_1979_){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = lean_box(v_x_1979_);
v___x_1981_ = lean_obj_tag_nat(v___x_1980_);
lean_dec(v___x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorIdx___impl___boxed(lean_object* v_x_1982_){
_start:
{
uint8_t v_x_4__boxed_1983_; lean_object* v_res_1984_; 
v_x_4__boxed_1983_ = lean_unbox(v_x_1982_);
v_res_1984_ = lp_lean_x2dftml_LeanFtml_BqRender_ctorIdx___impl(v_x_4__boxed_1983_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorElim___redArg(lean_object* v_k_1985_){
_start:
{
lean_inc(v_k_1985_);
return v_k_1985_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorElim___redArg___boxed(lean_object* v_k_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = lp_lean_x2dftml_LeanFtml_BqRender_ctorElim___redArg(v_k_1986_);
lean_dec(v_k_1986_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorElim(lean_object* v_motive_1988_, lean_object* v_ctorIdx_1989_, uint8_t v_t_1990_, lean_object* v_h_1991_, lean_object* v_k_1992_){
_start:
{
lean_inc(v_k_1992_);
return v_k_1992_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ctorElim___boxed(lean_object* v_motive_1993_, lean_object* v_ctorIdx_1994_, lean_object* v_t_1995_, lean_object* v_h_1996_, lean_object* v_k_1997_){
_start:
{
uint8_t v_t_boxed_1998_; lean_object* v_res_1999_; 
v_t_boxed_1998_ = lean_unbox(v_t_1995_);
v_res_1999_ = lp_lean_x2dftml_LeanFtml_BqRender_ctorElim(v_motive_1993_, v_ctorIdx_1994_, v_t_boxed_1998_, v_h_1996_, v_k_1997_);
lean_dec(v_k_1997_);
lean_dec(v_ctorIdx_1994_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_start_elim___redArg(lean_object* v_start_2000_){
_start:
{
lean_inc(v_start_2000_);
return v_start_2000_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_start_elim___redArg___boxed(lean_object* v_start_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = lp_lean_x2dftml_LeanFtml_BqRender_start_elim___redArg(v_start_2001_);
lean_dec(v_start_2001_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_start_elim(lean_object* v_motive_2003_, uint8_t v_t_2004_, lean_object* v_h_2005_, lean_object* v_start_2006_){
_start:
{
lean_inc(v_start_2006_);
return v_start_2006_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_start_elim___boxed(lean_object* v_motive_2007_, lean_object* v_t_2008_, lean_object* v_h_2009_, lean_object* v_start_2010_){
_start:
{
uint8_t v_t_boxed_2011_; lean_object* v_res_2012_; 
v_t_boxed_2011_ = lean_unbox(v_t_2008_);
v_res_2012_ = lp_lean_x2dftml_LeanFtml_BqRender_start_elim(v_motive_2007_, v_t_boxed_2011_, v_h_2009_, v_start_2010_);
lean_dec(v_start_2010_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim___redArg(lean_object* v_endTok_2013_){
_start:
{
lean_inc(v_endTok_2013_);
return v_endTok_2013_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim___redArg___boxed(lean_object* v_endTok_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim___redArg(v_endTok_2014_);
lean_dec(v_endTok_2014_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim(lean_object* v_motive_2016_, uint8_t v_t_2017_, lean_object* v_h_2018_, lean_object* v_endTok_2019_){
_start:
{
lean_inc(v_endTok_2019_);
return v_endTok_2019_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim___boxed(lean_object* v_motive_2020_, lean_object* v_t_2021_, lean_object* v_h_2022_, lean_object* v_endTok_2023_){
_start:
{
uint8_t v_t_boxed_2024_; lean_object* v_res_2025_; 
v_t_boxed_2024_ = lean_unbox(v_t_2021_);
v_res_2025_ = lp_lean_x2dftml_LeanFtml_BqRender_endTok_elim(v_motive_2020_, v_t_boxed_2024_, v_h_2022_, v_endTok_2023_);
lean_dec(v_endTok_2023_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_other_elim___redArg(lean_object* v_other_2026_){
_start:
{
lean_inc(v_other_2026_);
return v_other_2026_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_other_elim___redArg___boxed(lean_object* v_other_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = lp_lean_x2dftml_LeanFtml_BqRender_other_elim___redArg(v_other_2027_);
lean_dec(v_other_2027_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_other_elim(lean_object* v_motive_2029_, uint8_t v_t_2030_, lean_object* v_h_2031_, lean_object* v_other_2032_){
_start:
{
lean_inc(v_other_2032_);
return v_other_2032_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_other_elim___boxed(lean_object* v_motive_2033_, lean_object* v_t_2034_, lean_object* v_h_2035_, lean_object* v_other_2036_){
_start:
{
uint8_t v_t_boxed_2037_; lean_object* v_res_2038_; 
v_t_boxed_2037_ = lean_unbox(v_t_2034_);
v_res_2038_ = lp_lean_x2dftml_LeanFtml_BqRender_other_elim(v_motive_2033_, v_t_boxed_2037_, v_h_2035_, v_other_2036_);
lean_dec(v_other_2036_);
return v_res_2038_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_BqRender_ofNat(lean_object* v_n_2039_){
_start:
{
lean_object* v___x_2040_; uint8_t v___x_2041_; 
v___x_2040_ = lean_unsigned_to_nat(0u);
v___x_2041_ = lean_nat_dec_le(v_n_2039_, v___x_2040_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; uint8_t v___x_2043_; 
v___x_2042_ = lean_unsigned_to_nat(1u);
v___x_2043_ = lean_nat_dec_le(v_n_2039_, v___x_2042_);
if (v___x_2043_ == 0)
{
uint8_t v___x_2044_; 
v___x_2044_ = 2;
return v___x_2044_;
}
else
{
uint8_t v___x_2045_; 
v___x_2045_ = 1;
return v___x_2045_;
}
}
else
{
uint8_t v___x_2046_; 
v___x_2046_ = 0;
return v___x_2046_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BqRender_ofNat___boxed(lean_object* v_n_2047_){
_start:
{
uint8_t v_res_2048_; lean_object* v_r_2049_; 
v_res_2048_ = lp_lean_x2dftml_LeanFtml_BqRender_ofNat(v_n_2047_);
lean_dec(v_n_2047_);
v_r_2049_ = lean_box(v_res_2048_);
return v_r_2049_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBqRender(uint8_t v_x_2050_, uint8_t v_y_2051_){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; uint8_t v___x_2056_; 
v___x_2052_ = lean_box(v_x_2050_);
v___x_2053_ = lean_obj_tag_nat(v___x_2052_);
lean_dec(v___x_2052_);
v___x_2054_ = lean_box(v_y_2051_);
v___x_2055_ = lean_obj_tag_nat(v___x_2054_);
lean_dec(v___x_2054_);
v___x_2056_ = lean_nat_dec_eq(v___x_2053_, v___x_2055_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBqRender___boxed(lean_object* v_x_2057_, lean_object* v_y_2058_){
_start:
{
uint8_t v_x_23__boxed_2059_; uint8_t v_y_24__boxed_2060_; uint8_t v_res_2061_; lean_object* v_r_2062_; 
v_x_23__boxed_2059_ = lean_unbox(v_x_2057_);
v_y_24__boxed_2060_ = lean_unbox(v_y_2058_);
v_res_2061_ = lp_lean_x2dftml_LeanFtml_instDecidableEqBqRender(v_x_23__boxed_2059_, v_y_24__boxed_2060_);
v_r_2062_ = lean_box(v_res_2061_);
return v_r_2062_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr(uint8_t v_x_2072_, lean_object* v_prec_2073_){
_start:
{
lean_object* v___y_2075_; lean_object* v___y_2082_; lean_object* v___y_2089_; 
switch(v_x_2072_)
{
case 0:
{
lean_object* v___x_2095_; uint8_t v___x_2096_; 
v___x_2095_ = lean_unsigned_to_nat(1024u);
v___x_2096_ = lean_nat_dec_le(v___x_2095_, v_prec_2073_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; 
v___x_2097_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2075_ = v___x_2097_;
goto v___jp_2074_;
}
else
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2075_ = v___x_2098_;
goto v___jp_2074_;
}
}
case 1:
{
lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2099_ = lean_unsigned_to_nat(1024u);
v___x_2100_ = lean_nat_dec_le(v___x_2099_, v_prec_2073_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; 
v___x_2101_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2082_ = v___x_2101_;
goto v___jp_2081_;
}
else
{
lean_object* v___x_2102_; 
v___x_2102_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2082_ = v___x_2102_;
goto v___jp_2081_;
}
}
default: 
{
lean_object* v___x_2103_; uint8_t v___x_2104_; 
v___x_2103_ = lean_unsigned_to_nat(1024u);
v___x_2104_ = lean_nat_dec_le(v___x_2103_, v_prec_2073_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; 
v___x_2105_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2089_ = v___x_2105_;
goto v___jp_2088_;
}
else
{
lean_object* v___x_2106_; 
v___x_2106_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2089_ = v___x_2106_;
goto v___jp_2088_;
}
}
}
v___jp_2074_:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2076_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__1));
lean_inc(v___y_2075_);
v___x_2077_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___y_2075_);
lean_ctor_set(v___x_2077_, 1, v___x_2076_);
v___x_2078_ = 0;
v___x_2079_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2079_, 0, v___x_2077_);
lean_ctor_set_uint8(v___x_2079_, sizeof(void*)*1, v___x_2078_);
v___x_2080_ = l_Repr_addAppParen(v___x_2079_, v_prec_2073_);
return v___x_2080_;
}
v___jp_2081_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; uint8_t v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2083_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__3));
lean_inc(v___y_2082_);
v___x_2084_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___y_2082_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = 0;
v___x_2086_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2086_, 0, v___x_2084_);
lean_ctor_set_uint8(v___x_2086_, sizeof(void*)*1, v___x_2085_);
v___x_2087_ = l_Repr_addAppParen(v___x_2086_, v_prec_2073_);
return v___x_2087_;
}
v___jp_2088_:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; uint8_t v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2090_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___closed__5));
lean_inc(v___y_2089_);
v___x_2091_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___y_2089_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = 0;
v___x_2093_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2093_, 0, v___x_2091_);
lean_ctor_set_uint8(v___x_2093_, sizeof(void*)*1, v___x_2092_);
v___x_2094_ = l_Repr_addAppParen(v___x_2093_, v_prec_2073_);
return v___x_2094_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBqRender_repr___boxed(lean_object* v_x_2107_, lean_object* v_prec_2108_){
_start:
{
uint8_t v_x_167__boxed_2109_; lean_object* v_res_2110_; 
v_x_167__boxed_2109_ = lean_unbox(v_x_2107_);
v_res_2110_ = lp_lean_x2dftml_LeanFtml_instReprBqRender_repr(v_x_167__boxed_2109_, v_prec_2108_);
lean_dec(v_prec_2108_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorIdx___impl(uint8_t v_x_2113_){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2114_ = lean_box(v_x_2113_);
v___x_2115_ = lean_obj_tag_nat(v___x_2114_);
lean_dec(v___x_2114_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorIdx___impl___boxed(lean_object* v_x_2116_){
_start:
{
uint8_t v_x_4__boxed_2117_; lean_object* v_res_2118_; 
v_x_4__boxed_2117_ = lean_unbox(v_x_2116_);
v_res_2118_ = lp_lean_x2dftml_LeanFtml_DivBody_ctorIdx___impl(v_x_4__boxed_2117_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorElim___redArg(lean_object* v_k_2119_){
_start:
{
lean_inc(v_k_2119_);
return v_k_2119_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorElim___redArg___boxed(lean_object* v_k_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = lp_lean_x2dftml_LeanFtml_DivBody_ctorElim___redArg(v_k_2120_);
lean_dec(v_k_2120_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorElim(lean_object* v_motive_2122_, lean_object* v_ctorIdx_2123_, uint8_t v_t_2124_, lean_object* v_h_2125_, lean_object* v_k_2126_){
_start:
{
lean_inc(v_k_2126_);
return v_k_2126_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ctorElim___boxed(lean_object* v_motive_2127_, lean_object* v_ctorIdx_2128_, lean_object* v_t_2129_, lean_object* v_h_2130_, lean_object* v_k_2131_){
_start:
{
uint8_t v_t_boxed_2132_; lean_object* v_res_2133_; 
v_t_boxed_2132_ = lean_unbox(v_t_2129_);
v_res_2133_ = lp_lean_x2dftml_LeanFtml_DivBody_ctorElim(v_motive_2127_, v_ctorIdx_2128_, v_t_boxed_2132_, v_h_2130_, v_k_2131_);
lean_dec(v_k_2131_);
lean_dec(v_ctorIdx_2128_);
return v_res_2133_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_plain_elim___redArg(lean_object* v_plain_2134_){
_start:
{
lean_inc(v_plain_2134_);
return v_plain_2134_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_plain_elim___redArg___boxed(lean_object* v_plain_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = lp_lean_x2dftml_LeanFtml_DivBody_plain_elim___redArg(v_plain_2135_);
lean_dec(v_plain_2135_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_plain_elim(lean_object* v_motive_2137_, uint8_t v_t_2138_, lean_object* v_h_2139_, lean_object* v_plain_2140_){
_start:
{
lean_inc(v_plain_2140_);
return v_plain_2140_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_plain_elim___boxed(lean_object* v_motive_2141_, lean_object* v_t_2142_, lean_object* v_h_2143_, lean_object* v_plain_2144_){
_start:
{
uint8_t v_t_boxed_2145_; lean_object* v_res_2146_; 
v_t_boxed_2145_ = lean_unbox(v_t_2142_);
v_res_2146_ = lp_lean_x2dftml_LeanFtml_DivBody_plain_elim(v_motive_2141_, v_t_boxed_2145_, v_h_2143_, v_plain_2144_);
lean_dec(v_plain_2144_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_scored_elim___redArg(lean_object* v_scored_2147_){
_start:
{
lean_inc(v_scored_2147_);
return v_scored_2147_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_scored_elim___redArg___boxed(lean_object* v_scored_2148_){
_start:
{
lean_object* v_res_2149_; 
v_res_2149_ = lp_lean_x2dftml_LeanFtml_DivBody_scored_elim___redArg(v_scored_2148_);
lean_dec(v_scored_2148_);
return v_res_2149_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_scored_elim(lean_object* v_motive_2150_, uint8_t v_t_2151_, lean_object* v_h_2152_, lean_object* v_scored_2153_){
_start:
{
lean_inc(v_scored_2153_);
return v_scored_2153_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_scored_elim___boxed(lean_object* v_motive_2154_, lean_object* v_t_2155_, lean_object* v_h_2156_, lean_object* v_scored_2157_){
_start:
{
uint8_t v_t_boxed_2158_; lean_object* v_res_2159_; 
v_t_boxed_2158_ = lean_unbox(v_t_2155_);
v_res_2159_ = lp_lean_x2dftml_LeanFtml_DivBody_scored_elim(v_motive_2154_, v_t_boxed_2158_, v_h_2156_, v_scored_2157_);
lean_dec(v_scored_2157_);
return v_res_2159_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_DivBody_ofNat(lean_object* v_n_2160_){
_start:
{
lean_object* v___x_2161_; uint8_t v___x_2162_; 
v___x_2161_ = lean_unsigned_to_nat(0u);
v___x_2162_ = lean_nat_dec_le(v_n_2160_, v___x_2161_);
if (v___x_2162_ == 0)
{
uint8_t v___x_2163_; 
v___x_2163_ = 1;
return v___x_2163_;
}
else
{
uint8_t v___x_2164_; 
v___x_2164_ = 0;
return v___x_2164_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivBody_ofNat___boxed(lean_object* v_n_2165_){
_start:
{
uint8_t v_res_2166_; lean_object* v_r_2167_; 
v_res_2166_ = lp_lean_x2dftml_LeanFtml_DivBody_ofNat(v_n_2165_);
lean_dec(v_n_2165_);
v_r_2167_ = lean_box(v_res_2166_);
return v_r_2167_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivBody(uint8_t v_x_2168_, uint8_t v_y_2169_){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; uint8_t v___x_2174_; 
v___x_2170_ = lean_box(v_x_2168_);
v___x_2171_ = lean_obj_tag_nat(v___x_2170_);
lean_dec(v___x_2170_);
v___x_2172_ = lean_box(v_y_2169_);
v___x_2173_ = lean_obj_tag_nat(v___x_2172_);
lean_dec(v___x_2172_);
v___x_2174_ = lean_nat_dec_eq(v___x_2171_, v___x_2173_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivBody___boxed(lean_object* v_x_2175_, lean_object* v_y_2176_){
_start:
{
uint8_t v_x_23__boxed_2177_; uint8_t v_y_24__boxed_2178_; uint8_t v_res_2179_; lean_object* v_r_2180_; 
v_x_23__boxed_2177_ = lean_unbox(v_x_2175_);
v_y_24__boxed_2178_ = lean_unbox(v_y_2176_);
v_res_2179_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDivBody(v_x_23__boxed_2177_, v_y_24__boxed_2178_);
v_r_2180_ = lean_box(v_res_2179_);
return v_r_2180_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody_repr(uint8_t v_x_2187_, lean_object* v_prec_2188_){
_start:
{
lean_object* v___y_2190_; lean_object* v___y_2197_; 
if (v_x_2187_ == 0)
{
lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2203_ = lean_unsigned_to_nat(1024u);
v___x_2204_ = lean_nat_dec_le(v___x_2203_, v_prec_2188_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2190_ = v___x_2205_;
goto v___jp_2189_;
}
else
{
lean_object* v___x_2206_; 
v___x_2206_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2190_ = v___x_2206_;
goto v___jp_2189_;
}
}
else
{
lean_object* v___x_2207_; uint8_t v___x_2208_; 
v___x_2207_ = lean_unsigned_to_nat(1024u);
v___x_2208_ = lean_nat_dec_le(v___x_2207_, v_prec_2188_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2209_; 
v___x_2209_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2197_ = v___x_2209_;
goto v___jp_2196_;
}
else
{
lean_object* v___x_2210_; 
v___x_2210_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2197_ = v___x_2210_;
goto v___jp_2196_;
}
}
v___jp_2189_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; uint8_t v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2191_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__1));
lean_inc(v___y_2190_);
v___x_2192_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___y_2190_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v___x_2193_ = 0;
v___x_2194_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2194_, 0, v___x_2192_);
lean_ctor_set_uint8(v___x_2194_, sizeof(void*)*1, v___x_2193_);
v___x_2195_ = l_Repr_addAppParen(v___x_2194_, v_prec_2188_);
return v___x_2195_;
}
v___jp_2196_:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; uint8_t v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2198_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___closed__3));
lean_inc(v___y_2197_);
v___x_2199_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___y_2197_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = 0;
v___x_2201_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2201_, 0, v___x_2199_);
lean_ctor_set_uint8(v___x_2201_, sizeof(void*)*1, v___x_2200_);
v___x_2202_ = l_Repr_addAppParen(v___x_2201_, v_prec_2188_);
return v___x_2202_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivBody_repr___boxed(lean_object* v_x_2211_, lean_object* v_prec_2212_){
_start:
{
uint8_t v_x_113__boxed_2213_; lean_object* v_res_2214_; 
v_x_113__boxed_2213_ = lean_unbox(v_x_2211_);
v_res_2214_ = lp_lean_x2dftml_LeanFtml_instReprDivBody_repr(v_x_113__boxed_2213_, v_prec_2212_);
lean_dec(v_prec_2212_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorIdx___impl(uint8_t v_x_2217_){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = lean_box(v_x_2217_);
v___x_2219_ = lean_obj_tag_nat(v___x_2218_);
lean_dec(v___x_2218_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorIdx___impl___boxed(lean_object* v_x_2220_){
_start:
{
uint8_t v_x_4__boxed_2221_; lean_object* v_res_2222_; 
v_x_4__boxed_2221_ = lean_unbox(v_x_2220_);
v_res_2222_ = lp_lean_x2dftml_LeanFtml_DivHead_ctorIdx___impl(v_x_4__boxed_2221_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorElim___redArg(lean_object* v_k_2223_){
_start:
{
lean_inc(v_k_2223_);
return v_k_2223_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorElim___redArg___boxed(lean_object* v_k_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = lp_lean_x2dftml_LeanFtml_DivHead_ctorElim___redArg(v_k_2224_);
lean_dec(v_k_2224_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorElim(lean_object* v_motive_2226_, lean_object* v_ctorIdx_2227_, uint8_t v_t_2228_, lean_object* v_h_2229_, lean_object* v_k_2230_){
_start:
{
lean_inc(v_k_2230_);
return v_k_2230_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ctorElim___boxed(lean_object* v_motive_2231_, lean_object* v_ctorIdx_2232_, lean_object* v_t_2233_, lean_object* v_h_2234_, lean_object* v_k_2235_){
_start:
{
uint8_t v_t_boxed_2236_; lean_object* v_res_2237_; 
v_t_boxed_2236_ = lean_unbox(v_t_2233_);
v_res_2237_ = lp_lean_x2dftml_LeanFtml_DivHead_ctorElim(v_motive_2231_, v_ctorIdx_2232_, v_t_boxed_2236_, v_h_2234_, v_k_2235_);
lean_dec(v_k_2235_);
lean_dec(v_ctorIdx_2232_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim___redArg(lean_object* v_vanished_2238_){
_start:
{
lean_inc(v_vanished_2238_);
return v_vanished_2238_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim___redArg___boxed(lean_object* v_vanished_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim___redArg(v_vanished_2239_);
lean_dec(v_vanished_2239_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim(lean_object* v_motive_2241_, uint8_t v_t_2242_, lean_object* v_h_2243_, lean_object* v_vanished_2244_){
_start:
{
lean_inc(v_vanished_2244_);
return v_vanished_2244_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim___boxed(lean_object* v_motive_2245_, lean_object* v_t_2246_, lean_object* v_h_2247_, lean_object* v_vanished_2248_){
_start:
{
uint8_t v_t_boxed_2249_; lean_object* v_res_2250_; 
v_t_boxed_2249_ = lean_unbox(v_t_2246_);
v_res_2250_ = lp_lean_x2dftml_LeanFtml_DivHead_vanished_elim(v_motive_2245_, v_t_boxed_2249_, v_h_2247_, v_vanished_2248_);
lean_dec(v_vanished_2248_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_bare_elim___redArg(lean_object* v_bare_2251_){
_start:
{
lean_inc(v_bare_2251_);
return v_bare_2251_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_bare_elim___redArg___boxed(lean_object* v_bare_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = lp_lean_x2dftml_LeanFtml_DivHead_bare_elim___redArg(v_bare_2252_);
lean_dec(v_bare_2252_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_bare_elim(lean_object* v_motive_2254_, uint8_t v_t_2255_, lean_object* v_h_2256_, lean_object* v_bare_2257_){
_start:
{
lean_inc(v_bare_2257_);
return v_bare_2257_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_bare_elim___boxed(lean_object* v_motive_2258_, lean_object* v_t_2259_, lean_object* v_h_2260_, lean_object* v_bare_2261_){
_start:
{
uint8_t v_t_boxed_2262_; lean_object* v_res_2263_; 
v_t_boxed_2262_ = lean_unbox(v_t_2259_);
v_res_2263_ = lp_lean_x2dftml_LeanFtml_DivHead_bare_elim(v_motive_2258_, v_t_boxed_2262_, v_h_2260_, v_bare_2261_);
lean_dec(v_bare_2261_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim___redArg(lean_object* v_ordered_2264_){
_start:
{
lean_inc(v_ordered_2264_);
return v_ordered_2264_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim___redArg___boxed(lean_object* v_ordered_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim___redArg(v_ordered_2265_);
lean_dec(v_ordered_2265_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim(lean_object* v_motive_2267_, uint8_t v_t_2268_, lean_object* v_h_2269_, lean_object* v_ordered_2270_){
_start:
{
lean_inc(v_ordered_2270_);
return v_ordered_2270_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim___boxed(lean_object* v_motive_2271_, lean_object* v_t_2272_, lean_object* v_h_2273_, lean_object* v_ordered_2274_){
_start:
{
uint8_t v_t_boxed_2275_; lean_object* v_res_2276_; 
v_t_boxed_2275_ = lean_unbox(v_t_2272_);
v_res_2276_ = lp_lean_x2dftml_LeanFtml_DivHead_ordered_elim(v_motive_2271_, v_t_boxed_2275_, v_h_2273_, v_ordered_2274_);
lean_dec(v_ordered_2274_);
return v_res_2276_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_DivHead_ofNat(lean_object* v_n_2277_){
_start:
{
lean_object* v___x_2278_; uint8_t v___x_2279_; 
v___x_2278_ = lean_unsigned_to_nat(0u);
v___x_2279_ = lean_nat_dec_le(v_n_2277_, v___x_2278_);
if (v___x_2279_ == 0)
{
lean_object* v___x_2280_; uint8_t v___x_2281_; 
v___x_2280_ = lean_unsigned_to_nat(1u);
v___x_2281_ = lean_nat_dec_le(v_n_2277_, v___x_2280_);
if (v___x_2281_ == 0)
{
uint8_t v___x_2282_; 
v___x_2282_ = 2;
return v___x_2282_;
}
else
{
uint8_t v___x_2283_; 
v___x_2283_ = 1;
return v___x_2283_;
}
}
else
{
uint8_t v___x_2284_; 
v___x_2284_ = 0;
return v___x_2284_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivHead_ofNat___boxed(lean_object* v_n_2285_){
_start:
{
uint8_t v_res_2286_; lean_object* v_r_2287_; 
v_res_2286_ = lp_lean_x2dftml_LeanFtml_DivHead_ofNat(v_n_2285_);
lean_dec(v_n_2285_);
v_r_2287_ = lean_box(v_res_2286_);
return v_r_2287_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivHead(uint8_t v_x_2288_, uint8_t v_y_2289_){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2290_ = lean_box(v_x_2288_);
v___x_2291_ = lean_obj_tag_nat(v___x_2290_);
lean_dec(v___x_2290_);
v___x_2292_ = lean_box(v_y_2289_);
v___x_2293_ = lean_obj_tag_nat(v___x_2292_);
lean_dec(v___x_2292_);
v___x_2294_ = lean_nat_dec_eq(v___x_2291_, v___x_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivHead___boxed(lean_object* v_x_2295_, lean_object* v_y_2296_){
_start:
{
uint8_t v_x_23__boxed_2297_; uint8_t v_y_24__boxed_2298_; uint8_t v_res_2299_; lean_object* v_r_2300_; 
v_x_23__boxed_2297_ = lean_unbox(v_x_2295_);
v_y_24__boxed_2298_ = lean_unbox(v_y_2296_);
v_res_2299_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDivHead(v_x_23__boxed_2297_, v_y_24__boxed_2298_);
v_r_2300_ = lean_box(v_res_2299_);
return v_r_2300_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr(uint8_t v_x_2310_, lean_object* v_prec_2311_){
_start:
{
lean_object* v___y_2313_; lean_object* v___y_2320_; lean_object* v___y_2327_; 
switch(v_x_2310_)
{
case 0:
{
lean_object* v___x_2333_; uint8_t v___x_2334_; 
v___x_2333_ = lean_unsigned_to_nat(1024u);
v___x_2334_ = lean_nat_dec_le(v___x_2333_, v_prec_2311_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2335_; 
v___x_2335_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2313_ = v___x_2335_;
goto v___jp_2312_;
}
else
{
lean_object* v___x_2336_; 
v___x_2336_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2313_ = v___x_2336_;
goto v___jp_2312_;
}
}
case 1:
{
lean_object* v___x_2337_; uint8_t v___x_2338_; 
v___x_2337_ = lean_unsigned_to_nat(1024u);
v___x_2338_ = lean_nat_dec_le(v___x_2337_, v_prec_2311_);
if (v___x_2338_ == 0)
{
lean_object* v___x_2339_; 
v___x_2339_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2320_ = v___x_2339_;
goto v___jp_2319_;
}
else
{
lean_object* v___x_2340_; 
v___x_2340_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2320_ = v___x_2340_;
goto v___jp_2319_;
}
}
default: 
{
lean_object* v___x_2341_; uint8_t v___x_2342_; 
v___x_2341_ = lean_unsigned_to_nat(1024u);
v___x_2342_ = lean_nat_dec_le(v___x_2341_, v_prec_2311_);
if (v___x_2342_ == 0)
{
lean_object* v___x_2343_; 
v___x_2343_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2327_ = v___x_2343_;
goto v___jp_2326_;
}
else
{
lean_object* v___x_2344_; 
v___x_2344_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2327_ = v___x_2344_;
goto v___jp_2326_;
}
}
}
v___jp_2312_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; uint8_t v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2314_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__1));
lean_inc(v___y_2313_);
v___x_2315_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___y_2313_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = 0;
v___x_2317_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2317_, 0, v___x_2315_);
lean_ctor_set_uint8(v___x_2317_, sizeof(void*)*1, v___x_2316_);
v___x_2318_ = l_Repr_addAppParen(v___x_2317_, v_prec_2311_);
return v___x_2318_;
}
v___jp_2319_:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; uint8_t v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2321_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__3));
lean_inc(v___y_2320_);
v___x_2322_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2322_, 0, v___y_2320_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
v___x_2323_ = 0;
v___x_2324_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2324_, 0, v___x_2322_);
lean_ctor_set_uint8(v___x_2324_, sizeof(void*)*1, v___x_2323_);
v___x_2325_ = l_Repr_addAppParen(v___x_2324_, v_prec_2311_);
return v___x_2325_;
}
v___jp_2326_:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; uint8_t v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2328_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___closed__5));
lean_inc(v___y_2327_);
v___x_2329_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___y_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = 0;
v___x_2331_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2331_, 0, v___x_2329_);
lean_ctor_set_uint8(v___x_2331_, sizeof(void*)*1, v___x_2330_);
v___x_2332_ = l_Repr_addAppParen(v___x_2331_, v_prec_2311_);
return v___x_2332_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivHead_repr___boxed(lean_object* v_x_2345_, lean_object* v_prec_2346_){
_start:
{
uint8_t v_x_167__boxed_2347_; lean_object* v_res_2348_; 
v_x_167__boxed_2347_ = lean_unbox(v_x_2345_);
v_res_2348_ = lp_lean_x2dftml_LeanFtml_instReprDivHead_repr(v_x_167__boxed_2347_, v_prec_2346_);
lean_dec(v_prec_2346_);
return v_res_2348_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape_decEq(lean_object* v_x_2351_, lean_object* v_x_2352_){
_start:
{
uint8_t v_body_2353_; uint8_t v_head_2354_; uint8_t v_unset_2355_; uint8_t v_body_2356_; uint8_t v_head_2357_; uint8_t v_unset_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; uint8_t v___x_2363_; 
v_body_2353_ = lean_ctor_get_uint8(v_x_2351_, 0);
v_head_2354_ = lean_ctor_get_uint8(v_x_2351_, 1);
v_unset_2355_ = lean_ctor_get_uint8(v_x_2351_, 2);
v_body_2356_ = lean_ctor_get_uint8(v_x_2352_, 0);
v_head_2357_ = lean_ctor_get_uint8(v_x_2352_, 1);
v_unset_2358_ = lean_ctor_get_uint8(v_x_2352_, 2);
v___x_2359_ = lean_box(v_body_2353_);
v___x_2360_ = lean_obj_tag_nat(v___x_2359_);
lean_dec(v___x_2359_);
v___x_2361_ = lean_box(v_body_2356_);
v___x_2362_ = lean_obj_tag_nat(v___x_2361_);
lean_dec(v___x_2361_);
v___x_2363_ = lean_nat_dec_eq(v___x_2360_, v___x_2362_);
if (v___x_2363_ == 0)
{
return v___x_2363_;
}
else
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; 
v___x_2364_ = lean_box(v_head_2354_);
v___x_2365_ = lean_obj_tag_nat(v___x_2364_);
lean_dec(v___x_2364_);
v___x_2366_ = lean_box(v_head_2357_);
v___x_2367_ = lean_obj_tag_nat(v___x_2366_);
lean_dec(v___x_2366_);
v___x_2368_ = lean_nat_dec_eq(v___x_2365_, v___x_2367_);
if (v___x_2368_ == 0)
{
return v___x_2368_;
}
else
{
if (v_unset_2358_ == 0)
{
if (v_unset_2355_ == 0)
{
return v___x_2368_;
}
else
{
return v_unset_2358_;
}
}
else
{
return v_unset_2355_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape_decEq___boxed(lean_object* v_x_2369_, lean_object* v_x_2370_){
_start:
{
uint8_t v_res_2371_; lean_object* v_r_2372_; 
v_res_2371_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape_decEq(v_x_2369_, v_x_2370_);
lean_dec_ref(v_x_2370_);
lean_dec_ref(v_x_2369_);
v_r_2372_ = lean_box(v_res_2371_);
return v_r_2372_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape(lean_object* v_x_2373_, lean_object* v_x_2374_){
_start:
{
uint8_t v___x_2375_; 
v___x_2375_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape_decEq(v_x_2373_, v_x_2374_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape___boxed(lean_object* v_x_2376_, lean_object* v_x_2377_){
_start:
{
uint8_t v_res_2378_; lean_object* v_r_2379_; 
v_res_2378_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape(v_x_2376_, v_x_2377_);
lean_dec_ref(v_x_2377_);
lean_dec_ref(v_x_2376_);
v_r_2379_ = lean_box(v_res_2378_);
return v_r_2379_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = lean_unsigned_to_nat(8u);
v___x_2394_ = lean_nat_to_int(v___x_2393_);
return v___x_2394_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = lean_unsigned_to_nat(9u);
v___x_2405_ = lean_nat_to_int(v___x_2404_);
return v___x_2405_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__0));
v___x_2408_ = lean_string_length(v___x_2407_);
return v___x_2408_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2409_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__16, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__16);
v___x_2410_ = lean_nat_to_int(v___x_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg(lean_object* v_x_2415_){
_start:
{
uint8_t v_body_2416_; uint8_t v_head_2417_; uint8_t v_unset_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; uint8_t v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v_body_2416_ = lean_ctor_get_uint8(v_x_2415_, 0);
v_head_2417_ = lean_ctor_get_uint8(v_x_2415_, 1);
v_unset_2418_ = lean_ctor_get_uint8(v_x_2415_, 2);
v___x_2419_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5));
v___x_2420_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__6));
v___x_2421_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7);
v___x_2422_ = lean_unsigned_to_nat(0u);
v___x_2423_ = lp_lean_x2dftml_LeanFtml_instReprDivBody_repr(v_body_2416_, v___x_2422_);
v___x_2424_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2421_);
lean_ctor_set(v___x_2424_, 1, v___x_2423_);
v___x_2425_ = 0;
v___x_2426_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2426_, 0, v___x_2424_);
lean_ctor_set_uint8(v___x_2426_, sizeof(void*)*1, v___x_2425_);
v___x_2427_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2420_);
lean_ctor_set(v___x_2427_, 1, v___x_2426_);
v___x_2428_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__9));
v___x_2429_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2427_);
lean_ctor_set(v___x_2429_, 1, v___x_2428_);
v___x_2430_ = lean_box(1);
v___x_2431_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2429_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__11));
v___x_2433_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2431_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
lean_ctor_set(v___x_2434_, 1, v___x_2419_);
v___x_2435_ = lp_lean_x2dftml_LeanFtml_instReprDivHead_repr(v_head_2417_, v___x_2422_);
v___x_2436_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2421_);
lean_ctor_set(v___x_2436_, 1, v___x_2435_);
v___x_2437_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2437_, 0, v___x_2436_);
lean_ctor_set_uint8(v___x_2437_, sizeof(void*)*1, v___x_2425_);
v___x_2438_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2434_);
lean_ctor_set(v___x_2438_, 1, v___x_2437_);
v___x_2439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2438_);
lean_ctor_set(v___x_2439_, 1, v___x_2428_);
v___x_2440_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
lean_ctor_set(v___x_2440_, 1, v___x_2430_);
v___x_2441_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__13));
v___x_2442_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2440_);
lean_ctor_set(v___x_2442_, 1, v___x_2441_);
v___x_2443_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2442_);
lean_ctor_set(v___x_2443_, 1, v___x_2419_);
v___x_2444_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14);
v___x_2445_ = l_Bool_repr___redArg(v_unset_2418_);
v___x_2446_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2444_);
lean_ctor_set(v___x_2446_, 1, v___x_2445_);
v___x_2447_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2447_, 0, v___x_2446_);
lean_ctor_set_uint8(v___x_2447_, sizeof(void*)*1, v___x_2425_);
v___x_2448_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2443_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17);
v___x_2450_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__18));
v___x_2451_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2450_);
lean_ctor_set(v___x_2451_, 1, v___x_2448_);
v___x_2452_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__19));
v___x_2453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2451_);
lean_ctor_set(v___x_2453_, 1, v___x_2452_);
v___x_2454_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2449_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
v___x_2455_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2455_, 0, v___x_2454_);
lean_ctor_set_uint8(v___x_2455_, sizeof(void*)*1, v___x_2425_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___boxed(lean_object* v_x_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg(v_x_2456_);
lean_dec_ref(v_x_2456_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr(lean_object* v_x_2458_, lean_object* v_prec_2459_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg(v_x_2458_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___boxed(lean_object* v_x_2461_, lean_object* v_prec_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr(v_x_2461_, v_prec_2462_);
lean_dec(v_prec_2462_);
lean_dec_ref(v_x_2461_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorIdx___impl(uint8_t v_x_2466_){
_start:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = lean_box(v_x_2466_);
v___x_2468_ = lean_obj_tag_nat(v___x_2467_);
lean_dec(v___x_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorIdx___impl___boxed(lean_object* v_x_2469_){
_start:
{
uint8_t v_x_4__boxed_2470_; lean_object* v_res_2471_; 
v_x_4__boxed_2470_ = lean_unbox(v_x_2469_);
v_res_2471_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorIdx___impl(v_x_4__boxed_2470_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim___redArg(lean_object* v_k_2472_){
_start:
{
lean_inc(v_k_2472_);
return v_k_2472_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim___redArg___boxed(lean_object* v_k_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim___redArg(v_k_2473_);
lean_dec(v_k_2473_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim(lean_object* v_motive_2475_, lean_object* v_ctorIdx_2476_, uint8_t v_t_2477_, lean_object* v_h_2478_, lean_object* v_k_2479_){
_start:
{
lean_inc(v_k_2479_);
return v_k_2479_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim___boxed(lean_object* v_motive_2480_, lean_object* v_ctorIdx_2481_, lean_object* v_t_2482_, lean_object* v_h_2483_, lean_object* v_k_2484_){
_start:
{
uint8_t v_t_boxed_2485_; lean_object* v_res_2486_; 
v_t_boxed_2485_ = lean_unbox(v_t_2482_);
v_res_2486_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_ctorElim(v_motive_2480_, v_ctorIdx_2481_, v_t_boxed_2485_, v_h_2483_, v_k_2484_);
lean_dec(v_k_2484_);
lean_dec(v_ctorIdx_2481_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim___redArg(lean_object* v_vanished_2487_){
_start:
{
lean_inc(v_vanished_2487_);
return v_vanished_2487_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim___redArg___boxed(lean_object* v_vanished_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim___redArg(v_vanished_2488_);
lean_dec(v_vanished_2488_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim(lean_object* v_motive_2490_, uint8_t v_t_2491_, lean_object* v_h_2492_, lean_object* v_vanished_2493_){
_start:
{
lean_inc(v_vanished_2493_);
return v_vanished_2493_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim___boxed(lean_object* v_motive_2494_, lean_object* v_t_2495_, lean_object* v_h_2496_, lean_object* v_vanished_2497_){
_start:
{
uint8_t v_t_boxed_2498_; lean_object* v_res_2499_; 
v_t_boxed_2498_ = lean_unbox(v_t_2495_);
v_res_2499_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_vanished_elim(v_motive_2494_, v_t_boxed_2498_, v_h_2496_, v_vanished_2497_);
lean_dec(v_vanished_2497_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim___redArg(lean_object* v_startBare_2500_){
_start:
{
lean_inc(v_startBare_2500_);
return v_startBare_2500_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim___redArg___boxed(lean_object* v_startBare_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim___redArg(v_startBare_2501_);
lean_dec(v_startBare_2501_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim(lean_object* v_motive_2503_, uint8_t v_t_2504_, lean_object* v_h_2505_, lean_object* v_startBare_2506_){
_start:
{
lean_inc(v_startBare_2506_);
return v_startBare_2506_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim___boxed(lean_object* v_motive_2507_, lean_object* v_t_2508_, lean_object* v_h_2509_, lean_object* v_startBare_2510_){
_start:
{
uint8_t v_t_boxed_2511_; lean_object* v_res_2512_; 
v_t_boxed_2511_ = lean_unbox(v_t_2508_);
v_res_2512_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_startBare_elim(v_motive_2507_, v_t_boxed_2511_, v_h_2509_, v_startBare_2510_);
lean_dec(v_startBare_2510_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim___redArg(lean_object* v_startEsc_2513_){
_start:
{
lean_inc(v_startEsc_2513_);
return v_startEsc_2513_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim___redArg___boxed(lean_object* v_startEsc_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim___redArg(v_startEsc_2514_);
lean_dec(v_startEsc_2514_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim(lean_object* v_motive_2516_, uint8_t v_t_2517_, lean_object* v_h_2518_, lean_object* v_startEsc_2519_){
_start:
{
lean_inc(v_startEsc_2519_);
return v_startEsc_2519_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim___boxed(lean_object* v_motive_2520_, lean_object* v_t_2521_, lean_object* v_h_2522_, lean_object* v_startEsc_2523_){
_start:
{
uint8_t v_t_boxed_2524_; lean_object* v_res_2525_; 
v_t_boxed_2524_ = lean_unbox(v_t_2521_);
v_res_2525_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_startEsc_elim(v_motive_2520_, v_t_boxed_2524_, v_h_2522_, v_startEsc_2523_);
lean_dec(v_startEsc_2523_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim___redArg(lean_object* v_startClear_2526_){
_start:
{
lean_inc(v_startClear_2526_);
return v_startClear_2526_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim___redArg___boxed(lean_object* v_startClear_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim___redArg(v_startClear_2527_);
lean_dec(v_startClear_2527_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim(lean_object* v_motive_2529_, uint8_t v_t_2530_, lean_object* v_h_2531_, lean_object* v_startClear_2532_){
_start:
{
lean_inc(v_startClear_2532_);
return v_startClear_2532_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim___boxed(lean_object* v_motive_2533_, lean_object* v_t_2534_, lean_object* v_h_2535_, lean_object* v_startClear_2536_){
_start:
{
uint8_t v_t_boxed_2537_; lean_object* v_res_2538_; 
v_t_boxed_2537_ = lean_unbox(v_t_2534_);
v_res_2538_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_startClear_elim(v_motive_2533_, v_t_boxed_2537_, v_h_2535_, v_startClear_2536_);
lean_dec(v_startClear_2536_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim___redArg(lean_object* v_endTok_2539_){
_start:
{
lean_inc(v_endTok_2539_);
return v_endTok_2539_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim___redArg___boxed(lean_object* v_endTok_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim___redArg(v_endTok_2540_);
lean_dec(v_endTok_2540_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim(lean_object* v_motive_2542_, uint8_t v_t_2543_, lean_object* v_h_2544_, lean_object* v_endTok_2545_){
_start:
{
lean_inc(v_endTok_2545_);
return v_endTok_2545_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim___boxed(lean_object* v_motive_2546_, lean_object* v_t_2547_, lean_object* v_h_2548_, lean_object* v_endTok_2549_){
_start:
{
uint8_t v_t_boxed_2550_; lean_object* v_res_2551_; 
v_t_boxed_2550_ = lean_unbox(v_t_2547_);
v_res_2551_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_endTok_elim(v_motive_2546_, v_t_boxed_2550_, v_h_2548_, v_endTok_2549_);
lean_dec(v_endTok_2549_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim___redArg(lean_object* v_other_2552_){
_start:
{
lean_inc(v_other_2552_);
return v_other_2552_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim___redArg___boxed(lean_object* v_other_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim___redArg(v_other_2553_);
lean_dec(v_other_2553_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim(lean_object* v_motive_2555_, uint8_t v_t_2556_, lean_object* v_h_2557_, lean_object* v_other_2558_){
_start:
{
lean_inc(v_other_2558_);
return v_other_2558_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim___boxed(lean_object* v_motive_2559_, lean_object* v_t_2560_, lean_object* v_h_2561_, lean_object* v_other_2562_){
_start:
{
uint8_t v_t_boxed_2563_; lean_object* v_res_2564_; 
v_t_boxed_2563_ = lean_unbox(v_t_2560_);
v_res_2564_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_other_elim(v_motive_2559_, v_t_boxed_2563_, v_h_2561_, v_other_2562_);
lean_dec(v_other_2562_);
return v_res_2564_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_DivRenderKind_ofNat(lean_object* v_n_2565_){
_start:
{
lean_object* v___x_2566_; uint8_t v___x_2567_; 
v___x_2566_ = lean_unsigned_to_nat(2u);
v___x_2567_ = lean_nat_dec_le(v_n_2565_, v___x_2566_);
if (v___x_2567_ == 0)
{
lean_object* v___x_2568_; uint8_t v___x_2569_; 
v___x_2568_ = lean_unsigned_to_nat(3u);
v___x_2569_ = lean_nat_dec_le(v_n_2565_, v___x_2568_);
if (v___x_2569_ == 0)
{
lean_object* v___x_2570_; uint8_t v___x_2571_; 
v___x_2570_ = lean_unsigned_to_nat(4u);
v___x_2571_ = lean_nat_dec_le(v_n_2565_, v___x_2570_);
if (v___x_2571_ == 0)
{
uint8_t v___x_2572_; 
v___x_2572_ = 5;
return v___x_2572_;
}
else
{
uint8_t v___x_2573_; 
v___x_2573_ = 4;
return v___x_2573_;
}
}
else
{
uint8_t v___x_2574_; 
v___x_2574_ = 3;
return v___x_2574_;
}
}
else
{
lean_object* v___x_2575_; uint8_t v___x_2576_; 
v___x_2575_ = lean_unsigned_to_nat(0u);
v___x_2576_ = lean_nat_dec_le(v_n_2565_, v___x_2575_);
if (v___x_2576_ == 0)
{
lean_object* v___x_2577_; uint8_t v___x_2578_; 
v___x_2577_ = lean_unsigned_to_nat(1u);
v___x_2578_ = lean_nat_dec_le(v_n_2565_, v___x_2577_);
if (v___x_2578_ == 0)
{
uint8_t v___x_2579_; 
v___x_2579_ = 2;
return v___x_2579_;
}
else
{
uint8_t v___x_2580_; 
v___x_2580_ = 1;
return v___x_2580_;
}
}
else
{
uint8_t v___x_2581_; 
v___x_2581_ = 0;
return v___x_2581_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_DivRenderKind_ofNat___boxed(lean_object* v_n_2582_){
_start:
{
uint8_t v_res_2583_; lean_object* v_r_2584_; 
v_res_2583_ = lp_lean_x2dftml_LeanFtml_DivRenderKind_ofNat(v_n_2582_);
lean_dec(v_n_2582_);
v_r_2584_ = lean_box(v_res_2583_);
return v_r_2584_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDivRenderKind(uint8_t v_x_2585_, uint8_t v_y_2586_){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; 
v___x_2587_ = lean_box(v_x_2585_);
v___x_2588_ = lean_obj_tag_nat(v___x_2587_);
lean_dec(v___x_2587_);
v___x_2589_ = lean_box(v_y_2586_);
v___x_2590_ = lean_obj_tag_nat(v___x_2589_);
lean_dec(v___x_2589_);
v___x_2591_ = lean_nat_dec_eq(v___x_2588_, v___x_2590_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDivRenderKind___boxed(lean_object* v_x_2592_, lean_object* v_y_2593_){
_start:
{
uint8_t v_x_23__boxed_2594_; uint8_t v_y_24__boxed_2595_; uint8_t v_res_2596_; lean_object* v_r_2597_; 
v_x_23__boxed_2594_ = lean_unbox(v_x_2592_);
v_y_24__boxed_2595_ = lean_unbox(v_y_2593_);
v_res_2596_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDivRenderKind(v_x_23__boxed_2594_, v_y_24__boxed_2595_);
v_r_2597_ = lean_box(v_res_2596_);
return v_r_2597_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr(uint8_t v_x_2616_, lean_object* v_prec_2617_){
_start:
{
lean_object* v___y_2619_; lean_object* v___y_2626_; lean_object* v___y_2633_; lean_object* v___y_2640_; lean_object* v___y_2647_; lean_object* v___y_2654_; 
switch(v_x_2616_)
{
case 0:
{
lean_object* v___x_2660_; uint8_t v___x_2661_; 
v___x_2660_ = lean_unsigned_to_nat(1024u);
v___x_2661_ = lean_nat_dec_le(v___x_2660_, v_prec_2617_);
if (v___x_2661_ == 0)
{
lean_object* v___x_2662_; 
v___x_2662_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2619_ = v___x_2662_;
goto v___jp_2618_;
}
else
{
lean_object* v___x_2663_; 
v___x_2663_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2619_ = v___x_2663_;
goto v___jp_2618_;
}
}
case 1:
{
lean_object* v___x_2664_; uint8_t v___x_2665_; 
v___x_2664_ = lean_unsigned_to_nat(1024u);
v___x_2665_ = lean_nat_dec_le(v___x_2664_, v_prec_2617_);
if (v___x_2665_ == 0)
{
lean_object* v___x_2666_; 
v___x_2666_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2626_ = v___x_2666_;
goto v___jp_2625_;
}
else
{
lean_object* v___x_2667_; 
v___x_2667_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2626_ = v___x_2667_;
goto v___jp_2625_;
}
}
case 2:
{
lean_object* v___x_2668_; uint8_t v___x_2669_; 
v___x_2668_ = lean_unsigned_to_nat(1024u);
v___x_2669_ = lean_nat_dec_le(v___x_2668_, v_prec_2617_);
if (v___x_2669_ == 0)
{
lean_object* v___x_2670_; 
v___x_2670_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2633_ = v___x_2670_;
goto v___jp_2632_;
}
else
{
lean_object* v___x_2671_; 
v___x_2671_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2633_ = v___x_2671_;
goto v___jp_2632_;
}
}
case 3:
{
lean_object* v___x_2672_; uint8_t v___x_2673_; 
v___x_2672_ = lean_unsigned_to_nat(1024u);
v___x_2673_ = lean_nat_dec_le(v___x_2672_, v_prec_2617_);
if (v___x_2673_ == 0)
{
lean_object* v___x_2674_; 
v___x_2674_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2640_ = v___x_2674_;
goto v___jp_2639_;
}
else
{
lean_object* v___x_2675_; 
v___x_2675_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2640_ = v___x_2675_;
goto v___jp_2639_;
}
}
case 4:
{
lean_object* v___x_2676_; uint8_t v___x_2677_; 
v___x_2676_ = lean_unsigned_to_nat(1024u);
v___x_2677_ = lean_nat_dec_le(v___x_2676_, v_prec_2617_);
if (v___x_2677_ == 0)
{
lean_object* v___x_2678_; 
v___x_2678_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2647_ = v___x_2678_;
goto v___jp_2646_;
}
else
{
lean_object* v___x_2679_; 
v___x_2679_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2647_ = v___x_2679_;
goto v___jp_2646_;
}
}
default: 
{
lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2680_ = lean_unsigned_to_nat(1024u);
v___x_2681_ = lean_nat_dec_le(v___x_2680_, v_prec_2617_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; 
v___x_2682_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2654_ = v___x_2682_;
goto v___jp_2653_;
}
else
{
lean_object* v___x_2683_; 
v___x_2683_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2654_ = v___x_2683_;
goto v___jp_2653_;
}
}
}
v___jp_2618_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; uint8_t v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2620_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__1));
lean_inc(v___y_2619_);
v___x_2621_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___y_2619_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = 0;
v___x_2623_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2623_, 0, v___x_2621_);
lean_ctor_set_uint8(v___x_2623_, sizeof(void*)*1, v___x_2622_);
v___x_2624_ = l_Repr_addAppParen(v___x_2623_, v_prec_2617_);
return v___x_2624_;
}
v___jp_2625_:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; uint8_t v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2627_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__3));
lean_inc(v___y_2626_);
v___x_2628_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2628_, 0, v___y_2626_);
lean_ctor_set(v___x_2628_, 1, v___x_2627_);
v___x_2629_ = 0;
v___x_2630_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2630_, 0, v___x_2628_);
lean_ctor_set_uint8(v___x_2630_, sizeof(void*)*1, v___x_2629_);
v___x_2631_ = l_Repr_addAppParen(v___x_2630_, v_prec_2617_);
return v___x_2631_;
}
v___jp_2632_:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; uint8_t v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2634_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__5));
lean_inc(v___y_2633_);
v___x_2635_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2635_, 0, v___y_2633_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = 0;
v___x_2637_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2637_, 0, v___x_2635_);
lean_ctor_set_uint8(v___x_2637_, sizeof(void*)*1, v___x_2636_);
v___x_2638_ = l_Repr_addAppParen(v___x_2637_, v_prec_2617_);
return v___x_2638_;
}
v___jp_2639_:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2641_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__7));
lean_inc(v___y_2640_);
v___x_2642_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___y_2640_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = 0;
v___x_2644_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2644_, 0, v___x_2642_);
lean_ctor_set_uint8(v___x_2644_, sizeof(void*)*1, v___x_2643_);
v___x_2645_ = l_Repr_addAppParen(v___x_2644_, v_prec_2617_);
return v___x_2645_;
}
v___jp_2646_:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; uint8_t v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2648_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__9));
lean_inc(v___y_2647_);
v___x_2649_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___y_2647_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = 0;
v___x_2651_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2651_, 0, v___x_2649_);
lean_ctor_set_uint8(v___x_2651_, sizeof(void*)*1, v___x_2650_);
v___x_2652_ = l_Repr_addAppParen(v___x_2651_, v_prec_2617_);
return v___x_2652_;
}
v___jp_2653_:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2655_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___closed__11));
lean_inc(v___y_2654_);
v___x_2656_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2656_, 0, v___y_2654_);
lean_ctor_set(v___x_2656_, 1, v___x_2655_);
v___x_2657_ = 0;
v___x_2658_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2658_, 0, v___x_2656_);
lean_ctor_set_uint8(v___x_2658_, sizeof(void*)*1, v___x_2657_);
v___x_2659_ = l_Repr_addAppParen(v___x_2658_, v_prec_2617_);
return v___x_2659_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr___boxed(lean_object* v_x_2684_, lean_object* v_prec_2685_){
_start:
{
uint8_t v_x_329__boxed_2686_; lean_object* v_res_2687_; 
v_x_329__boxed_2686_ = lean_unbox(v_x_2684_);
v_res_2687_ = lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr(v_x_329__boxed_2686_, v_prec_2685_);
lean_dec(v_prec_2685_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorIdx___impl(uint8_t v_x_2690_){
_start:
{
lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2691_ = lean_box(v_x_2690_);
v___x_2692_ = lean_obj_tag_nat(v___x_2691_);
lean_dec(v___x_2691_);
return v___x_2692_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorIdx___impl___boxed(lean_object* v_x_2693_){
_start:
{
uint8_t v_x_4__boxed_2694_; lean_object* v_res_2695_; 
v_x_4__boxed_2694_ = lean_unbox(v_x_2693_);
v_res_2695_ = lp_lean_x2dftml_LeanFtml_CoFold_ctorIdx___impl(v_x_4__boxed_2694_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorElim___redArg(lean_object* v_k_2696_){
_start:
{
lean_inc(v_k_2696_);
return v_k_2696_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorElim___redArg___boxed(lean_object* v_k_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = lp_lean_x2dftml_LeanFtml_CoFold_ctorElim___redArg(v_k_2697_);
lean_dec(v_k_2697_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorElim(lean_object* v_motive_2699_, lean_object* v_ctorIdx_2700_, uint8_t v_t_2701_, lean_object* v_h_2702_, lean_object* v_k_2703_){
_start:
{
lean_inc(v_k_2703_);
return v_k_2703_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ctorElim___boxed(lean_object* v_motive_2704_, lean_object* v_ctorIdx_2705_, lean_object* v_t_2706_, lean_object* v_h_2707_, lean_object* v_k_2708_){
_start:
{
uint8_t v_t_boxed_2709_; lean_object* v_res_2710_; 
v_t_boxed_2709_ = lean_unbox(v_t_2706_);
v_res_2710_ = lp_lean_x2dftml_LeanFtml_CoFold_ctorElim(v_motive_2704_, v_ctorIdx_2705_, v_t_boxed_2709_, v_h_2707_, v_k_2708_);
lean_dec(v_k_2708_);
lean_dec(v_ctorIdx_2705_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_folded_elim___redArg(lean_object* v_folded_2711_){
_start:
{
lean_inc(v_folded_2711_);
return v_folded_2711_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_folded_elim___redArg___boxed(lean_object* v_folded_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = lp_lean_x2dftml_LeanFtml_CoFold_folded_elim___redArg(v_folded_2712_);
lean_dec(v_folded_2712_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_folded_elim(lean_object* v_motive_2714_, uint8_t v_t_2715_, lean_object* v_h_2716_, lean_object* v_folded_2717_){
_start:
{
lean_inc(v_folded_2717_);
return v_folded_2717_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_folded_elim___boxed(lean_object* v_motive_2718_, lean_object* v_t_2719_, lean_object* v_h_2720_, lean_object* v_folded_2721_){
_start:
{
uint8_t v_t_boxed_2722_; lean_object* v_res_2723_; 
v_t_boxed_2722_ = lean_unbox(v_t_2719_);
v_res_2723_ = lp_lean_x2dftml_LeanFtml_CoFold_folded_elim(v_motive_2718_, v_t_boxed_2722_, v_h_2720_, v_folded_2721_);
lean_dec(v_folded_2721_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_opened_elim___redArg(lean_object* v_opened_2724_){
_start:
{
lean_inc(v_opened_2724_);
return v_opened_2724_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_opened_elim___redArg___boxed(lean_object* v_opened_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = lp_lean_x2dftml_LeanFtml_CoFold_opened_elim___redArg(v_opened_2725_);
lean_dec(v_opened_2725_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_opened_elim(lean_object* v_motive_2727_, uint8_t v_t_2728_, lean_object* v_h_2729_, lean_object* v_opened_2730_){
_start:
{
lean_inc(v_opened_2730_);
return v_opened_2730_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_opened_elim___boxed(lean_object* v_motive_2731_, lean_object* v_t_2732_, lean_object* v_h_2733_, lean_object* v_opened_2734_){
_start:
{
uint8_t v_t_boxed_2735_; lean_object* v_res_2736_; 
v_t_boxed_2735_ = lean_unbox(v_t_2732_);
v_res_2736_ = lp_lean_x2dftml_LeanFtml_CoFold_opened_elim(v_motive_2731_, v_t_boxed_2735_, v_h_2733_, v_opened_2734_);
lean_dec(v_opened_2734_);
return v_res_2736_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CoFold_ofNat(lean_object* v_n_2737_){
_start:
{
lean_object* v___x_2738_; uint8_t v___x_2739_; 
v___x_2738_ = lean_unsigned_to_nat(0u);
v___x_2739_ = lean_nat_dec_le(v_n_2737_, v___x_2738_);
if (v___x_2739_ == 0)
{
uint8_t v___x_2740_; 
v___x_2740_ = 1;
return v___x_2740_;
}
else
{
uint8_t v___x_2741_; 
v___x_2741_ = 0;
return v___x_2741_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoFold_ofNat___boxed(lean_object* v_n_2742_){
_start:
{
uint8_t v_res_2743_; lean_object* v_r_2744_; 
v_res_2743_ = lp_lean_x2dftml_LeanFtml_CoFold_ofNat(v_n_2742_);
lean_dec(v_n_2742_);
v_r_2744_ = lean_box(v_res_2743_);
return v_r_2744_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoFold(uint8_t v_x_2745_, uint8_t v_y_2746_){
_start:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; uint8_t v___x_2751_; 
v___x_2747_ = lean_box(v_x_2745_);
v___x_2748_ = lean_obj_tag_nat(v___x_2747_);
lean_dec(v___x_2747_);
v___x_2749_ = lean_box(v_y_2746_);
v___x_2750_ = lean_obj_tag_nat(v___x_2749_);
lean_dec(v___x_2749_);
v___x_2751_ = lean_nat_dec_eq(v___x_2748_, v___x_2750_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoFold___boxed(lean_object* v_x_2752_, lean_object* v_y_2753_){
_start:
{
uint8_t v_x_23__boxed_2754_; uint8_t v_y_24__boxed_2755_; uint8_t v_res_2756_; lean_object* v_r_2757_; 
v_x_23__boxed_2754_ = lean_unbox(v_x_2752_);
v_y_24__boxed_2755_ = lean_unbox(v_y_2753_);
v_res_2756_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCoFold(v_x_23__boxed_2754_, v_y_24__boxed_2755_);
v_r_2757_ = lean_box(v_res_2756_);
return v_r_2757_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold_repr(uint8_t v_x_2764_, lean_object* v_prec_2765_){
_start:
{
lean_object* v___y_2767_; lean_object* v___y_2774_; 
if (v_x_2764_ == 0)
{
lean_object* v___x_2780_; uint8_t v___x_2781_; 
v___x_2780_ = lean_unsigned_to_nat(1024u);
v___x_2781_ = lean_nat_dec_le(v___x_2780_, v_prec_2765_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2782_; 
v___x_2782_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2767_ = v___x_2782_;
goto v___jp_2766_;
}
else
{
lean_object* v___x_2783_; 
v___x_2783_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2767_ = v___x_2783_;
goto v___jp_2766_;
}
}
else
{
lean_object* v___x_2784_; uint8_t v___x_2785_; 
v___x_2784_ = lean_unsigned_to_nat(1024u);
v___x_2785_ = lean_nat_dec_le(v___x_2784_, v_prec_2765_);
if (v___x_2785_ == 0)
{
lean_object* v___x_2786_; 
v___x_2786_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2774_ = v___x_2786_;
goto v___jp_2773_;
}
else
{
lean_object* v___x_2787_; 
v___x_2787_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2774_ = v___x_2787_;
goto v___jp_2773_;
}
}
v___jp_2766_:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; uint8_t v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2768_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__1));
lean_inc(v___y_2767_);
v___x_2769_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___y_2767_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = 0;
v___x_2771_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2771_, 0, v___x_2769_);
lean_ctor_set_uint8(v___x_2771_, sizeof(void*)*1, v___x_2770_);
v___x_2772_ = l_Repr_addAppParen(v___x_2771_, v_prec_2765_);
return v___x_2772_;
}
v___jp_2773_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; uint8_t v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2775_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___closed__3));
lean_inc(v___y_2774_);
v___x_2776_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2776_, 0, v___y_2774_);
lean_ctor_set(v___x_2776_, 1, v___x_2775_);
v___x_2777_ = 0;
v___x_2778_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2778_, 0, v___x_2776_);
lean_ctor_set_uint8(v___x_2778_, sizeof(void*)*1, v___x_2777_);
v___x_2779_ = l_Repr_addAppParen(v___x_2778_, v_prec_2765_);
return v___x_2779_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoFold_repr___boxed(lean_object* v_x_2788_, lean_object* v_prec_2789_){
_start:
{
uint8_t v_x_113__boxed_2790_; lean_object* v_res_2791_; 
v_x_113__boxed_2790_ = lean_unbox(v_x_2788_);
v_res_2791_ = lp_lean_x2dftml_LeanFtml_instReprCoFold_repr(v_x_113__boxed_2790_, v_prec_2789_);
lean_dec(v_prec_2789_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorIdx___impl(uint8_t v_x_2794_){
_start:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2795_ = lean_box(v_x_2794_);
v___x_2796_ = lean_obj_tag_nat(v___x_2795_);
lean_dec(v___x_2795_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorIdx___impl___boxed(lean_object* v_x_2797_){
_start:
{
uint8_t v_x_4__boxed_2798_; lean_object* v_res_2799_; 
v_x_4__boxed_2798_ = lean_unbox(v_x_2797_);
v_res_2799_ = lp_lean_x2dftml_LeanFtml_CoLabel_ctorIdx___impl(v_x_4__boxed_2798_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim___redArg(lean_object* v_k_2800_){
_start:
{
lean_inc(v_k_2800_);
return v_k_2800_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim___redArg___boxed(lean_object* v_k_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim___redArg(v_k_2801_);
lean_dec(v_k_2801_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim(lean_object* v_motive_2803_, lean_object* v_ctorIdx_2804_, uint8_t v_t_2805_, lean_object* v_h_2806_, lean_object* v_k_2807_){
_start:
{
lean_inc(v_k_2807_);
return v_k_2807_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim___boxed(lean_object* v_motive_2808_, lean_object* v_ctorIdx_2809_, lean_object* v_t_2810_, lean_object* v_h_2811_, lean_object* v_k_2812_){
_start:
{
uint8_t v_t_boxed_2813_; lean_object* v_res_2814_; 
v_t_boxed_2813_ = lean_unbox(v_t_2810_);
v_res_2814_ = lp_lean_x2dftml_LeanFtml_CoLabel_ctorElim(v_motive_2808_, v_ctorIdx_2809_, v_t_boxed_2813_, v_h_2811_, v_k_2812_);
lean_dec(v_k_2812_);
lean_dec(v_ctorIdx_2809_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_default_elim___redArg(lean_object* v_default_2815_){
_start:
{
lean_inc(v_default_2815_);
return v_default_2815_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_default_elim___redArg___boxed(lean_object* v_default_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = lp_lean_x2dftml_LeanFtml_CoLabel_default_elim___redArg(v_default_2816_);
lean_dec(v_default_2816_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_default_elim(lean_object* v_motive_2818_, uint8_t v_t_2819_, lean_object* v_h_2820_, lean_object* v_default_2821_){
_start:
{
lean_inc(v_default_2821_);
return v_default_2821_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_default_elim___boxed(lean_object* v_motive_2822_, lean_object* v_t_2823_, lean_object* v_h_2824_, lean_object* v_default_2825_){
_start:
{
uint8_t v_t_boxed_2826_; lean_object* v_res_2827_; 
v_t_boxed_2826_ = lean_unbox(v_t_2823_);
v_res_2827_ = lp_lean_x2dftml_LeanFtml_CoLabel_default_elim(v_motive_2822_, v_t_boxed_2826_, v_h_2824_, v_default_2825_);
lean_dec(v_default_2825_);
return v_res_2827_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim___redArg(lean_object* v_authored_2828_){
_start:
{
lean_inc(v_authored_2828_);
return v_authored_2828_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim___redArg___boxed(lean_object* v_authored_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim___redArg(v_authored_2829_);
lean_dec(v_authored_2829_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim(lean_object* v_motive_2831_, uint8_t v_t_2832_, lean_object* v_h_2833_, lean_object* v_authored_2834_){
_start:
{
lean_inc(v_authored_2834_);
return v_authored_2834_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim___boxed(lean_object* v_motive_2835_, lean_object* v_t_2836_, lean_object* v_h_2837_, lean_object* v_authored_2838_){
_start:
{
uint8_t v_t_boxed_2839_; lean_object* v_res_2840_; 
v_t_boxed_2839_ = lean_unbox(v_t_2836_);
v_res_2840_ = lp_lean_x2dftml_LeanFtml_CoLabel_authored_elim(v_motive_2835_, v_t_boxed_2839_, v_h_2837_, v_authored_2838_);
lean_dec(v_authored_2838_);
return v_res_2840_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CoLabel_ofNat(lean_object* v_n_2841_){
_start:
{
lean_object* v___x_2842_; uint8_t v___x_2843_; 
v___x_2842_ = lean_unsigned_to_nat(0u);
v___x_2843_ = lean_nat_dec_le(v_n_2841_, v___x_2842_);
if (v___x_2843_ == 0)
{
uint8_t v___x_2844_; 
v___x_2844_ = 1;
return v___x_2844_;
}
else
{
uint8_t v___x_2845_; 
v___x_2845_ = 0;
return v___x_2845_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLabel_ofNat___boxed(lean_object* v_n_2846_){
_start:
{
uint8_t v_res_2847_; lean_object* v_r_2848_; 
v_res_2847_ = lp_lean_x2dftml_LeanFtml_CoLabel_ofNat(v_n_2846_);
lean_dec(v_n_2846_);
v_r_2848_ = lean_box(v_res_2847_);
return v_r_2848_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoLabel(uint8_t v_x_2849_, uint8_t v_y_2850_){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; uint8_t v___x_2855_; 
v___x_2851_ = lean_box(v_x_2849_);
v___x_2852_ = lean_obj_tag_nat(v___x_2851_);
lean_dec(v___x_2851_);
v___x_2853_ = lean_box(v_y_2850_);
v___x_2854_ = lean_obj_tag_nat(v___x_2853_);
lean_dec(v___x_2853_);
v___x_2855_ = lean_nat_dec_eq(v___x_2852_, v___x_2854_);
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoLabel___boxed(lean_object* v_x_2856_, lean_object* v_y_2857_){
_start:
{
uint8_t v_x_23__boxed_2858_; uint8_t v_y_24__boxed_2859_; uint8_t v_res_2860_; lean_object* v_r_2861_; 
v_x_23__boxed_2858_ = lean_unbox(v_x_2856_);
v_y_24__boxed_2859_ = lean_unbox(v_y_2857_);
v_res_2860_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCoLabel(v_x_23__boxed_2858_, v_y_24__boxed_2859_);
v_r_2861_ = lean_box(v_res_2860_);
return v_r_2861_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr(uint8_t v_x_2868_, lean_object* v_prec_2869_){
_start:
{
lean_object* v___y_2871_; lean_object* v___y_2878_; 
if (v_x_2868_ == 0)
{
lean_object* v___x_2884_; uint8_t v___x_2885_; 
v___x_2884_ = lean_unsigned_to_nat(1024u);
v___x_2885_ = lean_nat_dec_le(v___x_2884_, v_prec_2869_);
if (v___x_2885_ == 0)
{
lean_object* v___x_2886_; 
v___x_2886_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2871_ = v___x_2886_;
goto v___jp_2870_;
}
else
{
lean_object* v___x_2887_; 
v___x_2887_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2871_ = v___x_2887_;
goto v___jp_2870_;
}
}
else
{
lean_object* v___x_2888_; uint8_t v___x_2889_; 
v___x_2888_ = lean_unsigned_to_nat(1024u);
v___x_2889_ = lean_nat_dec_le(v___x_2888_, v_prec_2869_);
if (v___x_2889_ == 0)
{
lean_object* v___x_2890_; 
v___x_2890_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2878_ = v___x_2890_;
goto v___jp_2877_;
}
else
{
lean_object* v___x_2891_; 
v___x_2891_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2878_ = v___x_2891_;
goto v___jp_2877_;
}
}
v___jp_2870_:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; uint8_t v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2872_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__1));
lean_inc(v___y_2871_);
v___x_2873_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2873_, 0, v___y_2871_);
lean_ctor_set(v___x_2873_, 1, v___x_2872_);
v___x_2874_ = 0;
v___x_2875_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2875_, 0, v___x_2873_);
lean_ctor_set_uint8(v___x_2875_, sizeof(void*)*1, v___x_2874_);
v___x_2876_ = l_Repr_addAppParen(v___x_2875_, v_prec_2869_);
return v___x_2876_;
}
v___jp_2877_:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; uint8_t v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2879_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___closed__3));
lean_inc(v___y_2878_);
v___x_2880_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___y_2878_);
lean_ctor_set(v___x_2880_, 1, v___x_2879_);
v___x_2881_ = 0;
v___x_2882_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2882_, 0, v___x_2880_);
lean_ctor_set_uint8(v___x_2882_, sizeof(void*)*1, v___x_2881_);
v___x_2883_ = l_Repr_addAppParen(v___x_2882_, v_prec_2869_);
return v___x_2883_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr___boxed(lean_object* v_x_2892_, lean_object* v_prec_2893_){
_start:
{
uint8_t v_x_113__boxed_2894_; lean_object* v_res_2895_; 
v_x_113__boxed_2894_ = lean_unbox(v_x_2892_);
v_res_2895_ = lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr(v_x_113__boxed_2894_, v_prec_2893_);
lean_dec(v_prec_2893_);
return v_res_2895_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorIdx___impl(uint8_t v_x_2898_){
_start:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = lean_box(v_x_2898_);
v___x_2900_ = lean_obj_tag_nat(v___x_2899_);
lean_dec(v___x_2899_);
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorIdx___impl___boxed(lean_object* v_x_2901_){
_start:
{
uint8_t v_x_4__boxed_2902_; lean_object* v_res_2903_; 
v_x_4__boxed_2902_ = lean_unbox(v_x_2901_);
v_res_2903_ = lp_lean_x2dftml_LeanFtml_CoLoc_ctorIdx___impl(v_x_4__boxed_2902_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim___redArg(lean_object* v_k_2904_){
_start:
{
lean_inc(v_k_2904_);
return v_k_2904_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim___redArg___boxed(lean_object* v_k_2905_){
_start:
{
lean_object* v_res_2906_; 
v_res_2906_ = lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim___redArg(v_k_2905_);
lean_dec(v_k_2905_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim(lean_object* v_motive_2907_, lean_object* v_ctorIdx_2908_, uint8_t v_t_2909_, lean_object* v_h_2910_, lean_object* v_k_2911_){
_start:
{
lean_inc(v_k_2911_);
return v_k_2911_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim___boxed(lean_object* v_motive_2912_, lean_object* v_ctorIdx_2913_, lean_object* v_t_2914_, lean_object* v_h_2915_, lean_object* v_k_2916_){
_start:
{
uint8_t v_t_boxed_2917_; lean_object* v_res_2918_; 
v_t_boxed_2917_ = lean_unbox(v_t_2914_);
v_res_2918_ = lp_lean_x2dftml_LeanFtml_CoLoc_ctorElim(v_motive_2912_, v_ctorIdx_2913_, v_t_boxed_2917_, v_h_2915_, v_k_2916_);
lean_dec(v_k_2916_);
lean_dec(v_ctorIdx_2913_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_top_elim___redArg(lean_object* v_top_2919_){
_start:
{
lean_inc(v_top_2919_);
return v_top_2919_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_top_elim___redArg___boxed(lean_object* v_top_2920_){
_start:
{
lean_object* v_res_2921_; 
v_res_2921_ = lp_lean_x2dftml_LeanFtml_CoLoc_top_elim___redArg(v_top_2920_);
lean_dec(v_top_2920_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_top_elim(lean_object* v_motive_2922_, uint8_t v_t_2923_, lean_object* v_h_2924_, lean_object* v_top_2925_){
_start:
{
lean_inc(v_top_2925_);
return v_top_2925_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_top_elim___boxed(lean_object* v_motive_2926_, lean_object* v_t_2927_, lean_object* v_h_2928_, lean_object* v_top_2929_){
_start:
{
uint8_t v_t_boxed_2930_; lean_object* v_res_2931_; 
v_t_boxed_2930_ = lean_unbox(v_t_2927_);
v_res_2931_ = lp_lean_x2dftml_LeanFtml_CoLoc_top_elim(v_motive_2926_, v_t_boxed_2930_, v_h_2928_, v_top_2929_);
lean_dec(v_top_2929_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim___redArg(lean_object* v_bottom_2932_){
_start:
{
lean_inc(v_bottom_2932_);
return v_bottom_2932_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim___redArg___boxed(lean_object* v_bottom_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim___redArg(v_bottom_2933_);
lean_dec(v_bottom_2933_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim(lean_object* v_motive_2935_, uint8_t v_t_2936_, lean_object* v_h_2937_, lean_object* v_bottom_2938_){
_start:
{
lean_inc(v_bottom_2938_);
return v_bottom_2938_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim___boxed(lean_object* v_motive_2939_, lean_object* v_t_2940_, lean_object* v_h_2941_, lean_object* v_bottom_2942_){
_start:
{
uint8_t v_t_boxed_2943_; lean_object* v_res_2944_; 
v_t_boxed_2943_ = lean_unbox(v_t_2940_);
v_res_2944_ = lp_lean_x2dftml_LeanFtml_CoLoc_bottom_elim(v_motive_2939_, v_t_boxed_2943_, v_h_2941_, v_bottom_2942_);
lean_dec(v_bottom_2942_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_both_elim___redArg(lean_object* v_both_2945_){
_start:
{
lean_inc(v_both_2945_);
return v_both_2945_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_both_elim___redArg___boxed(lean_object* v_both_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = lp_lean_x2dftml_LeanFtml_CoLoc_both_elim___redArg(v_both_2946_);
lean_dec(v_both_2946_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_both_elim(lean_object* v_motive_2948_, uint8_t v_t_2949_, lean_object* v_h_2950_, lean_object* v_both_2951_){
_start:
{
lean_inc(v_both_2951_);
return v_both_2951_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_both_elim___boxed(lean_object* v_motive_2952_, lean_object* v_t_2953_, lean_object* v_h_2954_, lean_object* v_both_2955_){
_start:
{
uint8_t v_t_boxed_2956_; lean_object* v_res_2957_; 
v_t_boxed_2956_ = lean_unbox(v_t_2953_);
v_res_2957_ = lp_lean_x2dftml_LeanFtml_CoLoc_both_elim(v_motive_2952_, v_t_boxed_2956_, v_h_2954_, v_both_2955_);
lean_dec(v_both_2955_);
return v_res_2957_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CoLoc_ofNat(lean_object* v_n_2958_){
_start:
{
lean_object* v___x_2959_; uint8_t v___x_2960_; 
v___x_2959_ = lean_unsigned_to_nat(0u);
v___x_2960_ = lean_nat_dec_le(v_n_2958_, v___x_2959_);
if (v___x_2960_ == 0)
{
lean_object* v___x_2961_; uint8_t v___x_2962_; 
v___x_2961_ = lean_unsigned_to_nat(1u);
v___x_2962_ = lean_nat_dec_le(v_n_2958_, v___x_2961_);
if (v___x_2962_ == 0)
{
uint8_t v___x_2963_; 
v___x_2963_ = 2;
return v___x_2963_;
}
else
{
uint8_t v___x_2964_; 
v___x_2964_ = 1;
return v___x_2964_;
}
}
else
{
uint8_t v___x_2965_; 
v___x_2965_ = 0;
return v___x_2965_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoLoc_ofNat___boxed(lean_object* v_n_2966_){
_start:
{
uint8_t v_res_2967_; lean_object* v_r_2968_; 
v_res_2967_ = lp_lean_x2dftml_LeanFtml_CoLoc_ofNat(v_n_2966_);
lean_dec(v_n_2966_);
v_r_2968_ = lean_box(v_res_2967_);
return v_r_2968_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoLoc(uint8_t v_x_2969_, uint8_t v_y_2970_){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; uint8_t v___x_2975_; 
v___x_2971_ = lean_box(v_x_2969_);
v___x_2972_ = lean_obj_tag_nat(v___x_2971_);
lean_dec(v___x_2971_);
v___x_2973_ = lean_box(v_y_2970_);
v___x_2974_ = lean_obj_tag_nat(v___x_2973_);
lean_dec(v___x_2973_);
v___x_2975_ = lean_nat_dec_eq(v___x_2972_, v___x_2974_);
return v___x_2975_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoLoc___boxed(lean_object* v_x_2976_, lean_object* v_y_2977_){
_start:
{
uint8_t v_x_23__boxed_2978_; uint8_t v_y_24__boxed_2979_; uint8_t v_res_2980_; lean_object* v_r_2981_; 
v_x_23__boxed_2978_ = lean_unbox(v_x_2976_);
v_y_24__boxed_2979_ = lean_unbox(v_y_2977_);
v_res_2980_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCoLoc(v_x_23__boxed_2978_, v_y_24__boxed_2979_);
v_r_2981_ = lean_box(v_res_2980_);
return v_r_2981_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr(uint8_t v_x_2991_, lean_object* v_prec_2992_){
_start:
{
lean_object* v___y_2994_; lean_object* v___y_3001_; lean_object* v___y_3008_; 
switch(v_x_2991_)
{
case 0:
{
lean_object* v___x_3014_; uint8_t v___x_3015_; 
v___x_3014_ = lean_unsigned_to_nat(1024u);
v___x_3015_ = lean_nat_dec_le(v___x_3014_, v_prec_2992_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; 
v___x_3016_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_2994_ = v___x_3016_;
goto v___jp_2993_;
}
else
{
lean_object* v___x_3017_; 
v___x_3017_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_2994_ = v___x_3017_;
goto v___jp_2993_;
}
}
case 1:
{
lean_object* v___x_3018_; uint8_t v___x_3019_; 
v___x_3018_ = lean_unsigned_to_nat(1024u);
v___x_3019_ = lean_nat_dec_le(v___x_3018_, v_prec_2992_);
if (v___x_3019_ == 0)
{
lean_object* v___x_3020_; 
v___x_3020_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3001_ = v___x_3020_;
goto v___jp_3000_;
}
else
{
lean_object* v___x_3021_; 
v___x_3021_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3001_ = v___x_3021_;
goto v___jp_3000_;
}
}
default: 
{
lean_object* v___x_3022_; uint8_t v___x_3023_; 
v___x_3022_ = lean_unsigned_to_nat(1024u);
v___x_3023_ = lean_nat_dec_le(v___x_3022_, v_prec_2992_);
if (v___x_3023_ == 0)
{
lean_object* v___x_3024_; 
v___x_3024_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3008_ = v___x_3024_;
goto v___jp_3007_;
}
else
{
lean_object* v___x_3025_; 
v___x_3025_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3008_ = v___x_3025_;
goto v___jp_3007_;
}
}
}
v___jp_2993_:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; uint8_t v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2995_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__1));
lean_inc(v___y_2994_);
v___x_2996_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___y_2994_);
lean_ctor_set(v___x_2996_, 1, v___x_2995_);
v___x_2997_ = 0;
v___x_2998_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2998_, 0, v___x_2996_);
lean_ctor_set_uint8(v___x_2998_, sizeof(void*)*1, v___x_2997_);
v___x_2999_ = l_Repr_addAppParen(v___x_2998_, v_prec_2992_);
return v___x_2999_;
}
v___jp_3000_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; uint8_t v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3002_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__3));
lean_inc(v___y_3001_);
v___x_3003_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___y_3001_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v___x_3004_ = 0;
v___x_3005_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3005_, 0, v___x_3003_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*1, v___x_3004_);
v___x_3006_ = l_Repr_addAppParen(v___x_3005_, v_prec_2992_);
return v___x_3006_;
}
v___jp_3007_:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; uint8_t v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3009_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___closed__5));
lean_inc(v___y_3008_);
v___x_3010_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___y_3008_);
lean_ctor_set(v___x_3010_, 1, v___x_3009_);
v___x_3011_ = 0;
v___x_3012_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3012_, 0, v___x_3010_);
lean_ctor_set_uint8(v___x_3012_, sizeof(void*)*1, v___x_3011_);
v___x_3013_ = l_Repr_addAppParen(v___x_3012_, v_prec_2992_);
return v___x_3013_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr___boxed(lean_object* v_x_3026_, lean_object* v_prec_3027_){
_start:
{
uint8_t v_x_167__boxed_3028_; lean_object* v_res_3029_; 
v_x_167__boxed_3028_ = lean_unbox(v_x_3026_);
v_res_3029_ = lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr(v_x_167__boxed_3028_, v_prec_3027_);
lean_dec(v_prec_3027_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorIdx___impl(uint8_t v_x_3032_){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = lean_box(v_x_3032_);
v___x_3034_ = lean_obj_tag_nat(v___x_3033_);
lean_dec(v___x_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorIdx___impl___boxed(lean_object* v_x_3035_){
_start:
{
uint8_t v_x_4__boxed_3036_; lean_object* v_res_3037_; 
v_x_4__boxed_3036_ = lean_unbox(v_x_3035_);
v_res_3037_ = lp_lean_x2dftml_LeanFtml_CoType_ctorIdx___impl(v_x_4__boxed_3036_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorElim___redArg(lean_object* v_k_3038_){
_start:
{
lean_inc(v_k_3038_);
return v_k_3038_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorElim___redArg___boxed(lean_object* v_k_3039_){
_start:
{
lean_object* v_res_3040_; 
v_res_3040_ = lp_lean_x2dftml_LeanFtml_CoType_ctorElim___redArg(v_k_3039_);
lean_dec(v_k_3039_);
return v_res_3040_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorElim(lean_object* v_motive_3041_, lean_object* v_ctorIdx_3042_, uint8_t v_t_3043_, lean_object* v_h_3044_, lean_object* v_k_3045_){
_start:
{
lean_inc(v_k_3045_);
return v_k_3045_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ctorElim___boxed(lean_object* v_motive_3046_, lean_object* v_ctorIdx_3047_, lean_object* v_t_3048_, lean_object* v_h_3049_, lean_object* v_k_3050_){
_start:
{
uint8_t v_t_boxed_3051_; lean_object* v_res_3052_; 
v_t_boxed_3051_ = lean_unbox(v_t_3048_);
v_res_3052_ = lp_lean_x2dftml_LeanFtml_CoType_ctorElim(v_motive_3046_, v_ctorIdx_3047_, v_t_boxed_3051_, v_h_3049_, v_k_3050_);
lean_dec(v_k_3050_);
lean_dec(v_ctorIdx_3047_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_start_elim___redArg(lean_object* v_start_3053_){
_start:
{
lean_inc(v_start_3053_);
return v_start_3053_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_start_elim___redArg___boxed(lean_object* v_start_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = lp_lean_x2dftml_LeanFtml_CoType_start_elim___redArg(v_start_3054_);
lean_dec(v_start_3054_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_start_elim(lean_object* v_motive_3056_, uint8_t v_t_3057_, lean_object* v_h_3058_, lean_object* v_start_3059_){
_start:
{
lean_inc(v_start_3059_);
return v_start_3059_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_start_elim___boxed(lean_object* v_motive_3060_, lean_object* v_t_3061_, lean_object* v_h_3062_, lean_object* v_start_3063_){
_start:
{
uint8_t v_t_boxed_3064_; lean_object* v_res_3065_; 
v_t_boxed_3064_ = lean_unbox(v_t_3061_);
v_res_3065_ = lp_lean_x2dftml_LeanFtml_CoType_start_elim(v_motive_3060_, v_t_boxed_3064_, v_h_3062_, v_start_3063_);
lean_dec(v_start_3063_);
return v_res_3065_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_endTok_elim___redArg(lean_object* v_endTok_3066_){
_start:
{
lean_inc(v_endTok_3066_);
return v_endTok_3066_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_endTok_elim___redArg___boxed(lean_object* v_endTok_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = lp_lean_x2dftml_LeanFtml_CoType_endTok_elim___redArg(v_endTok_3067_);
lean_dec(v_endTok_3067_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_endTok_elim(lean_object* v_motive_3069_, uint8_t v_t_3070_, lean_object* v_h_3071_, lean_object* v_endTok_3072_){
_start:
{
lean_inc(v_endTok_3072_);
return v_endTok_3072_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_endTok_elim___boxed(lean_object* v_motive_3073_, lean_object* v_t_3074_, lean_object* v_h_3075_, lean_object* v_endTok_3076_){
_start:
{
uint8_t v_t_boxed_3077_; lean_object* v_res_3078_; 
v_t_boxed_3077_ = lean_unbox(v_t_3074_);
v_res_3078_ = lp_lean_x2dftml_LeanFtml_CoType_endTok_elim(v_motive_3073_, v_t_boxed_3077_, v_h_3075_, v_endTok_3076_);
lean_dec(v_endTok_3076_);
return v_res_3078_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_other_elim___redArg(lean_object* v_other_3079_){
_start:
{
lean_inc(v_other_3079_);
return v_other_3079_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_other_elim___redArg___boxed(lean_object* v_other_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = lp_lean_x2dftml_LeanFtml_CoType_other_elim___redArg(v_other_3080_);
lean_dec(v_other_3080_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_other_elim(lean_object* v_motive_3082_, uint8_t v_t_3083_, lean_object* v_h_3084_, lean_object* v_other_3085_){
_start:
{
lean_inc(v_other_3085_);
return v_other_3085_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_other_elim___boxed(lean_object* v_motive_3086_, lean_object* v_t_3087_, lean_object* v_h_3088_, lean_object* v_other_3089_){
_start:
{
uint8_t v_t_boxed_3090_; lean_object* v_res_3091_; 
v_t_boxed_3090_ = lean_unbox(v_t_3087_);
v_res_3091_ = lp_lean_x2dftml_LeanFtml_CoType_other_elim(v_motive_3086_, v_t_boxed_3090_, v_h_3088_, v_other_3089_);
lean_dec(v_other_3089_);
return v_res_3091_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CoType_ofNat(lean_object* v_n_3092_){
_start:
{
lean_object* v___x_3093_; uint8_t v___x_3094_; 
v___x_3093_ = lean_unsigned_to_nat(0u);
v___x_3094_ = lean_nat_dec_le(v_n_3092_, v___x_3093_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; uint8_t v___x_3096_; 
v___x_3095_ = lean_unsigned_to_nat(1u);
v___x_3096_ = lean_nat_dec_le(v_n_3092_, v___x_3095_);
if (v___x_3096_ == 0)
{
uint8_t v___x_3097_; 
v___x_3097_ = 2;
return v___x_3097_;
}
else
{
uint8_t v___x_3098_; 
v___x_3098_ = 1;
return v___x_3098_;
}
}
else
{
uint8_t v___x_3099_; 
v___x_3099_ = 0;
return v___x_3099_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CoType_ofNat___boxed(lean_object* v_n_3100_){
_start:
{
uint8_t v_res_3101_; lean_object* v_r_3102_; 
v_res_3101_ = lp_lean_x2dftml_LeanFtml_CoType_ofNat(v_n_3100_);
lean_dec(v_n_3100_);
v_r_3102_ = lean_box(v_res_3101_);
return v_r_3102_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoType(uint8_t v_x_3103_, uint8_t v_y_3104_){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; uint8_t v___x_3109_; 
v___x_3105_ = lean_box(v_x_3103_);
v___x_3106_ = lean_obj_tag_nat(v___x_3105_);
lean_dec(v___x_3105_);
v___x_3107_ = lean_box(v_y_3104_);
v___x_3108_ = lean_obj_tag_nat(v___x_3107_);
lean_dec(v___x_3107_);
v___x_3109_ = lean_nat_dec_eq(v___x_3106_, v___x_3108_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoType___boxed(lean_object* v_x_3110_, lean_object* v_y_3111_){
_start:
{
uint8_t v_x_23__boxed_3112_; uint8_t v_y_24__boxed_3113_; uint8_t v_res_3114_; lean_object* v_r_3115_; 
v_x_23__boxed_3112_ = lean_unbox(v_x_3110_);
v_y_24__boxed_3113_ = lean_unbox(v_y_3111_);
v_res_3114_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCoType(v_x_23__boxed_3112_, v_y_24__boxed_3113_);
v_r_3115_ = lean_box(v_res_3114_);
return v_r_3115_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr(uint8_t v_x_3125_, lean_object* v_prec_3126_){
_start:
{
lean_object* v___y_3128_; lean_object* v___y_3135_; lean_object* v___y_3142_; 
switch(v_x_3125_)
{
case 0:
{
lean_object* v___x_3148_; uint8_t v___x_3149_; 
v___x_3148_ = lean_unsigned_to_nat(1024u);
v___x_3149_ = lean_nat_dec_le(v___x_3148_, v_prec_3126_);
if (v___x_3149_ == 0)
{
lean_object* v___x_3150_; 
v___x_3150_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3128_ = v___x_3150_;
goto v___jp_3127_;
}
else
{
lean_object* v___x_3151_; 
v___x_3151_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3128_ = v___x_3151_;
goto v___jp_3127_;
}
}
case 1:
{
lean_object* v___x_3152_; uint8_t v___x_3153_; 
v___x_3152_ = lean_unsigned_to_nat(1024u);
v___x_3153_ = lean_nat_dec_le(v___x_3152_, v_prec_3126_);
if (v___x_3153_ == 0)
{
lean_object* v___x_3154_; 
v___x_3154_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3135_ = v___x_3154_;
goto v___jp_3134_;
}
else
{
lean_object* v___x_3155_; 
v___x_3155_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3135_ = v___x_3155_;
goto v___jp_3134_;
}
}
default: 
{
lean_object* v___x_3156_; uint8_t v___x_3157_; 
v___x_3156_ = lean_unsigned_to_nat(1024u);
v___x_3157_ = lean_nat_dec_le(v___x_3156_, v_prec_3126_);
if (v___x_3157_ == 0)
{
lean_object* v___x_3158_; 
v___x_3158_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3142_ = v___x_3158_;
goto v___jp_3141_;
}
else
{
lean_object* v___x_3159_; 
v___x_3159_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3142_ = v___x_3159_;
goto v___jp_3141_;
}
}
}
v___jp_3127_:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; uint8_t v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3129_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__1));
lean_inc(v___y_3128_);
v___x_3130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3130_, 0, v___y_3128_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
v___x_3131_ = 0;
v___x_3132_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3132_, 0, v___x_3130_);
lean_ctor_set_uint8(v___x_3132_, sizeof(void*)*1, v___x_3131_);
v___x_3133_ = l_Repr_addAppParen(v___x_3132_, v_prec_3126_);
return v___x_3133_;
}
v___jp_3134_:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; uint8_t v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3136_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__3));
lean_inc(v___y_3135_);
v___x_3137_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___y_3135_);
lean_ctor_set(v___x_3137_, 1, v___x_3136_);
v___x_3138_ = 0;
v___x_3139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3139_, 0, v___x_3137_);
lean_ctor_set_uint8(v___x_3139_, sizeof(void*)*1, v___x_3138_);
v___x_3140_ = l_Repr_addAppParen(v___x_3139_, v_prec_3126_);
return v___x_3140_;
}
v___jp_3141_:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; uint8_t v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3143_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoType_repr___closed__5));
lean_inc(v___y_3142_);
v___x_3144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___y_3142_);
lean_ctor_set(v___x_3144_, 1, v___x_3143_);
v___x_3145_ = 0;
v___x_3146_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3146_, 0, v___x_3144_);
lean_ctor_set_uint8(v___x_3146_, sizeof(void*)*1, v___x_3145_);
v___x_3147_ = l_Repr_addAppParen(v___x_3146_, v_prec_3126_);
return v___x_3147_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoType_repr___boxed(lean_object* v_x_3160_, lean_object* v_prec_3161_){
_start:
{
uint8_t v_x_167__boxed_3162_; lean_object* v_res_3163_; 
v_x_167__boxed_3162_ = lean_unbox(v_x_3160_);
v_res_3163_ = lp_lean_x2dftml_LeanFtml_instReprCoType_repr(v_x_167__boxed_3162_, v_prec_3161_);
lean_dec(v_prec_3161_);
return v_res_3163_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape_decEq(lean_object* v_x_3166_, lean_object* v_x_3167_){
_start:
{
uint8_t v_fold_3168_; uint8_t v_showLbl_3169_; uint8_t v_hideLbl_3170_; uint8_t v_loc_3171_; uint8_t v_typ_3172_; uint8_t v_fold_3173_; uint8_t v_showLbl_3174_; uint8_t v_hideLbl_3175_; uint8_t v_loc_3176_; uint8_t v_typ_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; uint8_t v___x_3182_; 
v_fold_3168_ = lean_ctor_get_uint8(v_x_3166_, 0);
v_showLbl_3169_ = lean_ctor_get_uint8(v_x_3166_, 1);
v_hideLbl_3170_ = lean_ctor_get_uint8(v_x_3166_, 2);
v_loc_3171_ = lean_ctor_get_uint8(v_x_3166_, 3);
v_typ_3172_ = lean_ctor_get_uint8(v_x_3166_, 4);
v_fold_3173_ = lean_ctor_get_uint8(v_x_3167_, 0);
v_showLbl_3174_ = lean_ctor_get_uint8(v_x_3167_, 1);
v_hideLbl_3175_ = lean_ctor_get_uint8(v_x_3167_, 2);
v_loc_3176_ = lean_ctor_get_uint8(v_x_3167_, 3);
v_typ_3177_ = lean_ctor_get_uint8(v_x_3167_, 4);
v___x_3178_ = lean_box(v_fold_3168_);
v___x_3179_ = lean_obj_tag_nat(v___x_3178_);
lean_dec(v___x_3178_);
v___x_3180_ = lean_box(v_fold_3173_);
v___x_3181_ = lean_obj_tag_nat(v___x_3180_);
lean_dec(v___x_3180_);
v___x_3182_ = lean_nat_dec_eq(v___x_3179_, v___x_3181_);
if (v___x_3182_ == 0)
{
return v___x_3182_;
}
else
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; uint8_t v___x_3187_; 
v___x_3183_ = lean_box(v_showLbl_3169_);
v___x_3184_ = lean_obj_tag_nat(v___x_3183_);
lean_dec(v___x_3183_);
v___x_3185_ = lean_box(v_showLbl_3174_);
v___x_3186_ = lean_obj_tag_nat(v___x_3185_);
lean_dec(v___x_3185_);
v___x_3187_ = lean_nat_dec_eq(v___x_3184_, v___x_3186_);
if (v___x_3187_ == 0)
{
return v___x_3187_;
}
else
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; uint8_t v___x_3192_; 
v___x_3188_ = lean_box(v_hideLbl_3170_);
v___x_3189_ = lean_obj_tag_nat(v___x_3188_);
lean_dec(v___x_3188_);
v___x_3190_ = lean_box(v_hideLbl_3175_);
v___x_3191_ = lean_obj_tag_nat(v___x_3190_);
lean_dec(v___x_3190_);
v___x_3192_ = lean_nat_dec_eq(v___x_3189_, v___x_3191_);
if (v___x_3192_ == 0)
{
return v___x_3192_;
}
else
{
lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; uint8_t v___x_3197_; 
v___x_3193_ = lean_box(v_loc_3171_);
v___x_3194_ = lean_obj_tag_nat(v___x_3193_);
lean_dec(v___x_3193_);
v___x_3195_ = lean_box(v_loc_3176_);
v___x_3196_ = lean_obj_tag_nat(v___x_3195_);
lean_dec(v___x_3195_);
v___x_3197_ = lean_nat_dec_eq(v___x_3194_, v___x_3196_);
if (v___x_3197_ == 0)
{
return v___x_3197_;
}
else
{
lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; uint8_t v___x_3202_; 
v___x_3198_ = lean_box(v_typ_3172_);
v___x_3199_ = lean_obj_tag_nat(v___x_3198_);
lean_dec(v___x_3198_);
v___x_3200_ = lean_box(v_typ_3177_);
v___x_3201_ = lean_obj_tag_nat(v___x_3200_);
lean_dec(v___x_3200_);
v___x_3202_ = lean_nat_dec_eq(v___x_3199_, v___x_3201_);
return v___x_3202_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape_decEq___boxed(lean_object* v_x_3203_, lean_object* v_x_3204_){
_start:
{
uint8_t v_res_3205_; lean_object* v_r_3206_; 
v_res_3205_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape_decEq(v_x_3203_, v_x_3204_);
lean_dec_ref(v_x_3204_);
lean_dec_ref(v_x_3203_);
v_r_3206_ = lean_box(v_res_3205_);
return v_r_3206_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape(lean_object* v_x_3207_, lean_object* v_x_3208_){
_start:
{
uint8_t v___x_3209_; 
v___x_3209_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape_decEq(v_x_3207_, v_x_3208_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape___boxed(lean_object* v_x_3210_, lean_object* v_x_3211_){
_start:
{
uint8_t v_res_3212_; lean_object* v_r_3213_; 
v_res_3212_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape(v_x_3210_, v_x_3211_);
lean_dec_ref(v_x_3211_);
lean_dec_ref(v_x_3210_);
v_r_3213_ = lean_box(v_res_3212_);
return v_r_3213_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3226_ = lean_unsigned_to_nat(11u);
v___x_3227_ = lean_nat_to_int(v___x_3226_);
return v___x_3227_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = lean_unsigned_to_nat(7u);
v___x_3235_ = lean_nat_to_int(v___x_3234_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg(lean_object* v_x_3239_){
_start:
{
uint8_t v_fold_3240_; uint8_t v_showLbl_3241_; uint8_t v_hideLbl_3242_; uint8_t v_loc_3243_; uint8_t v_typ_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; uint8_t v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v_fold_3240_ = lean_ctor_get_uint8(v_x_3239_, 0);
v_showLbl_3241_ = lean_ctor_get_uint8(v_x_3239_, 1);
v_hideLbl_3242_ = lean_ctor_get_uint8(v_x_3239_, 2);
v_loc_3243_ = lean_ctor_get_uint8(v_x_3239_, 3);
v_typ_3244_ = lean_ctor_get_uint8(v_x_3239_, 4);
v___x_3245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5));
v___x_3246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__3));
v___x_3247_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7);
v___x_3248_ = lean_unsigned_to_nat(0u);
v___x_3249_ = lp_lean_x2dftml_LeanFtml_instReprCoFold_repr(v_fold_3240_, v___x_3248_);
v___x_3250_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3247_);
lean_ctor_set(v___x_3250_, 1, v___x_3249_);
v___x_3251_ = 0;
v___x_3252_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3252_, 0, v___x_3250_);
lean_ctor_set_uint8(v___x_3252_, sizeof(void*)*1, v___x_3251_);
v___x_3253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3246_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__9));
v___x_3255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3253_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___x_3256_ = lean_box(1);
v___x_3257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3255_);
lean_ctor_set(v___x_3257_, 1, v___x_3256_);
v___x_3258_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__5));
v___x_3259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3257_);
lean_ctor_set(v___x_3259_, 1, v___x_3258_);
v___x_3260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3259_);
lean_ctor_set(v___x_3260_, 1, v___x_3245_);
v___x_3261_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__6, &lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__6);
v___x_3262_ = lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr(v_showLbl_3241_, v___x_3248_);
v___x_3263_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3261_);
lean_ctor_set(v___x_3263_, 1, v___x_3262_);
v___x_3264_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3264_, 0, v___x_3263_);
lean_ctor_set_uint8(v___x_3264_, sizeof(void*)*1, v___x_3251_);
v___x_3265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3260_);
lean_ctor_set(v___x_3265_, 1, v___x_3264_);
v___x_3266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3265_);
lean_ctor_set(v___x_3266_, 1, v___x_3254_);
v___x_3267_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3266_);
lean_ctor_set(v___x_3267_, 1, v___x_3256_);
v___x_3268_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__8));
v___x_3269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3267_);
lean_ctor_set(v___x_3269_, 1, v___x_3268_);
v___x_3270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3269_);
lean_ctor_set(v___x_3270_, 1, v___x_3245_);
v___x_3271_ = lp_lean_x2dftml_LeanFtml_instReprCoLabel_repr(v_hideLbl_3242_, v___x_3248_);
v___x_3272_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3261_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3273_, 0, v___x_3272_);
lean_ctor_set_uint8(v___x_3273_, sizeof(void*)*1, v___x_3251_);
v___x_3274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3270_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v___x_3275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
lean_ctor_set(v___x_3275_, 1, v___x_3254_);
v___x_3276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3275_);
lean_ctor_set(v___x_3276_, 1, v___x_3256_);
v___x_3277_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__10));
v___x_3278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3276_);
lean_ctor_set(v___x_3278_, 1, v___x_3277_);
v___x_3279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
lean_ctor_set(v___x_3279_, 1, v___x_3245_);
v___x_3280_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__11, &lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__11);
v___x_3281_ = lp_lean_x2dftml_LeanFtml_instReprCoLoc_repr(v_loc_3243_, v___x_3248_);
v___x_3282_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3280_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
lean_ctor_set_uint8(v___x_3283_, sizeof(void*)*1, v___x_3251_);
v___x_3284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3279_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3284_);
lean_ctor_set(v___x_3285_, 1, v___x_3254_);
v___x_3286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3285_);
lean_ctor_set(v___x_3286_, 1, v___x_3256_);
v___x_3287_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___closed__13));
v___x_3288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3286_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
v___x_3289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
lean_ctor_set(v___x_3289_, 1, v___x_3245_);
v___x_3290_ = lp_lean_x2dftml_LeanFtml_instReprCoType_repr(v_typ_3244_, v___x_3248_);
v___x_3291_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3280_);
lean_ctor_set(v___x_3291_, 1, v___x_3290_);
v___x_3292_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3292_, 0, v___x_3291_);
lean_ctor_set_uint8(v___x_3292_, sizeof(void*)*1, v___x_3251_);
v___x_3293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3289_);
lean_ctor_set(v___x_3293_, 1, v___x_3292_);
v___x_3294_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17);
v___x_3295_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__18));
v___x_3296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
lean_ctor_set(v___x_3296_, 1, v___x_3293_);
v___x_3297_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__19));
v___x_3298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3298_, 0, v___x_3296_);
lean_ctor_set(v___x_3298_, 1, v___x_3297_);
v___x_3299_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3294_);
lean_ctor_set(v___x_3299_, 1, v___x_3298_);
v___x_3300_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
lean_ctor_set_uint8(v___x_3300_, sizeof(void*)*1, v___x_3251_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg___boxed(lean_object* v_x_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg(v_x_3301_);
lean_dec_ref(v_x_3301_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr(lean_object* v_x_3303_, lean_object* v_prec_3304_){
_start:
{
lean_object* v___x_3305_; 
v___x_3305_ = lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg(v_x_3303_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___boxed(lean_object* v_x_3306_, lean_object* v_prec_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr(v_x_3306_, v_prec_3307_);
lean_dec(v_prec_3307_);
lean_dec_ref(v_x_3306_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorIdx___impl(uint8_t v_x_3311_){
_start:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3312_ = lean_box(v_x_3311_);
v___x_3313_ = lean_obj_tag_nat(v___x_3312_);
lean_dec(v___x_3312_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorIdx___impl___boxed(lean_object* v_x_3314_){
_start:
{
uint8_t v_x_4__boxed_3315_; lean_object* v_res_3316_; 
v_x_4__boxed_3315_ = lean_unbox(v_x_3314_);
v_res_3316_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorIdx___impl(v_x_4__boxed_3315_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim___redArg(lean_object* v_k_3317_){
_start:
{
lean_inc(v_k_3317_);
return v_k_3317_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim___redArg___boxed(lean_object* v_k_3318_){
_start:
{
lean_object* v_res_3319_; 
v_res_3319_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim___redArg(v_k_3318_);
lean_dec(v_k_3318_);
return v_res_3319_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim(lean_object* v_motive_3320_, lean_object* v_ctorIdx_3321_, uint8_t v_t_3322_, lean_object* v_h_3323_, lean_object* v_k_3324_){
_start:
{
lean_inc(v_k_3324_);
return v_k_3324_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim___boxed(lean_object* v_motive_3325_, lean_object* v_ctorIdx_3326_, lean_object* v_t_3327_, lean_object* v_h_3328_, lean_object* v_k_3329_){
_start:
{
uint8_t v_t_boxed_3330_; lean_object* v_res_3331_; 
v_t_boxed_3330_ = lean_unbox(v_t_3327_);
v_res_3331_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_ctorElim(v_motive_3325_, v_ctorIdx_3326_, v_t_boxed_3330_, v_h_3328_, v_k_3329_);
lean_dec(v_k_3329_);
lean_dec(v_ctorIdx_3326_);
return v_res_3331_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim___redArg(lean_object* v_untitled_3332_){
_start:
{
lean_inc(v_untitled_3332_);
return v_untitled_3332_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim___redArg___boxed(lean_object* v_untitled_3333_){
_start:
{
lean_object* v_res_3334_; 
v_res_3334_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim___redArg(v_untitled_3333_);
lean_dec(v_untitled_3333_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim(lean_object* v_motive_3335_, uint8_t v_t_3336_, lean_object* v_h_3337_, lean_object* v_untitled_3338_){
_start:
{
lean_inc(v_untitled_3338_);
return v_untitled_3338_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim___boxed(lean_object* v_motive_3339_, lean_object* v_t_3340_, lean_object* v_h_3341_, lean_object* v_untitled_3342_){
_start:
{
uint8_t v_t_boxed_3343_; lean_object* v_res_3344_; 
v_t_boxed_3343_ = lean_unbox(v_t_3340_);
v_res_3344_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_untitled_elim(v_motive_3339_, v_t_boxed_3343_, v_h_3341_, v_untitled_3342_);
lean_dec(v_untitled_3342_);
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim___redArg(lean_object* v_rawEmpty_3345_){
_start:
{
lean_inc(v_rawEmpty_3345_);
return v_rawEmpty_3345_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim___redArg___boxed(lean_object* v_rawEmpty_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim___redArg(v_rawEmpty_3346_);
lean_dec(v_rawEmpty_3346_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim(lean_object* v_motive_3348_, uint8_t v_t_3349_, lean_object* v_h_3350_, lean_object* v_rawEmpty_3351_){
_start:
{
lean_inc(v_rawEmpty_3351_);
return v_rawEmpty_3351_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim___boxed(lean_object* v_motive_3352_, lean_object* v_t_3353_, lean_object* v_h_3354_, lean_object* v_rawEmpty_3355_){
_start:
{
uint8_t v_t_boxed_3356_; lean_object* v_res_3357_; 
v_t_boxed_3356_ = lean_unbox(v_t_3353_);
v_res_3357_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_rawEmpty_elim(v_motive_3352_, v_t_boxed_3356_, v_h_3354_, v_rawEmpty_3355_);
lean_dec(v_rawEmpty_3355_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim___redArg(lean_object* v_collapsed_3358_){
_start:
{
lean_inc(v_collapsed_3358_);
return v_collapsed_3358_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim___redArg___boxed(lean_object* v_collapsed_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim___redArg(v_collapsed_3359_);
lean_dec(v_collapsed_3359_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim(lean_object* v_motive_3361_, uint8_t v_t_3362_, lean_object* v_h_3363_, lean_object* v_collapsed_3364_){
_start:
{
lean_inc(v_collapsed_3364_);
return v_collapsed_3364_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim___boxed(lean_object* v_motive_3365_, lean_object* v_t_3366_, lean_object* v_h_3367_, lean_object* v_collapsed_3368_){
_start:
{
uint8_t v_t_boxed_3369_; lean_object* v_res_3370_; 
v_t_boxed_3369_ = lean_unbox(v_t_3366_);
v_res_3370_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_collapsed_elim(v_motive_3365_, v_t_boxed_3369_, v_h_3367_, v_collapsed_3368_);
lean_dec(v_collapsed_3368_);
return v_res_3370_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_TvTitleKind_ofNat(lean_object* v_n_3371_){
_start:
{
lean_object* v___x_3372_; uint8_t v___x_3373_; 
v___x_3372_ = lean_unsigned_to_nat(0u);
v___x_3373_ = lean_nat_dec_le(v_n_3371_, v___x_3372_);
if (v___x_3373_ == 0)
{
lean_object* v___x_3374_; uint8_t v___x_3375_; 
v___x_3374_ = lean_unsigned_to_nat(1u);
v___x_3375_ = lean_nat_dec_le(v_n_3371_, v___x_3374_);
if (v___x_3375_ == 0)
{
uint8_t v___x_3376_; 
v___x_3376_ = 2;
return v___x_3376_;
}
else
{
uint8_t v___x_3377_; 
v___x_3377_ = 1;
return v___x_3377_;
}
}
else
{
uint8_t v___x_3378_; 
v___x_3378_ = 0;
return v___x_3378_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleKind_ofNat___boxed(lean_object* v_n_3379_){
_start:
{
uint8_t v_res_3380_; lean_object* v_r_3381_; 
v_res_3380_ = lp_lean_x2dftml_LeanFtml_TvTitleKind_ofNat(v_n_3379_);
lean_dec(v_n_3379_);
v_r_3381_ = lean_box(v_res_3380_);
return v_r_3381_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleKind(uint8_t v_x_3382_, uint8_t v_y_3383_){
_start:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; uint8_t v___x_3388_; 
v___x_3384_ = lean_box(v_x_3382_);
v___x_3385_ = lean_obj_tag_nat(v___x_3384_);
lean_dec(v___x_3384_);
v___x_3386_ = lean_box(v_y_3383_);
v___x_3387_ = lean_obj_tag_nat(v___x_3386_);
lean_dec(v___x_3386_);
v___x_3388_ = lean_nat_dec_eq(v___x_3385_, v___x_3387_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleKind___boxed(lean_object* v_x_3389_, lean_object* v_y_3390_){
_start:
{
uint8_t v_x_23__boxed_3391_; uint8_t v_y_24__boxed_3392_; uint8_t v_res_3393_; lean_object* v_r_3394_; 
v_x_23__boxed_3391_ = lean_unbox(v_x_3389_);
v_y_24__boxed_3392_ = lean_unbox(v_y_3390_);
v_res_3393_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleKind(v_x_23__boxed_3391_, v_y_24__boxed_3392_);
v_r_3394_ = lean_box(v_res_3393_);
return v_r_3394_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr(uint8_t v_x_3404_, lean_object* v_prec_3405_){
_start:
{
lean_object* v___y_3407_; lean_object* v___y_3414_; lean_object* v___y_3421_; 
switch(v_x_3404_)
{
case 0:
{
lean_object* v___x_3427_; uint8_t v___x_3428_; 
v___x_3427_ = lean_unsigned_to_nat(1024u);
v___x_3428_ = lean_nat_dec_le(v___x_3427_, v_prec_3405_);
if (v___x_3428_ == 0)
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3407_ = v___x_3429_;
goto v___jp_3406_;
}
else
{
lean_object* v___x_3430_; 
v___x_3430_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3407_ = v___x_3430_;
goto v___jp_3406_;
}
}
case 1:
{
lean_object* v___x_3431_; uint8_t v___x_3432_; 
v___x_3431_ = lean_unsigned_to_nat(1024u);
v___x_3432_ = lean_nat_dec_le(v___x_3431_, v_prec_3405_);
if (v___x_3432_ == 0)
{
lean_object* v___x_3433_; 
v___x_3433_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3414_ = v___x_3433_;
goto v___jp_3413_;
}
else
{
lean_object* v___x_3434_; 
v___x_3434_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3414_ = v___x_3434_;
goto v___jp_3413_;
}
}
default: 
{
lean_object* v___x_3435_; uint8_t v___x_3436_; 
v___x_3435_ = lean_unsigned_to_nat(1024u);
v___x_3436_ = lean_nat_dec_le(v___x_3435_, v_prec_3405_);
if (v___x_3436_ == 0)
{
lean_object* v___x_3437_; 
v___x_3437_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3421_ = v___x_3437_;
goto v___jp_3420_;
}
else
{
lean_object* v___x_3438_; 
v___x_3438_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3421_ = v___x_3438_;
goto v___jp_3420_;
}
}
}
v___jp_3406_:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; uint8_t v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3408_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__1));
lean_inc(v___y_3407_);
v___x_3409_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3409_, 0, v___y_3407_);
lean_ctor_set(v___x_3409_, 1, v___x_3408_);
v___x_3410_ = 0;
v___x_3411_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3411_, 0, v___x_3409_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*1, v___x_3410_);
v___x_3412_ = l_Repr_addAppParen(v___x_3411_, v_prec_3405_);
return v___x_3412_;
}
v___jp_3413_:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; uint8_t v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3415_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__3));
lean_inc(v___y_3414_);
v___x_3416_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3416_, 0, v___y_3414_);
lean_ctor_set(v___x_3416_, 1, v___x_3415_);
v___x_3417_ = 0;
v___x_3418_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3418_, 0, v___x_3416_);
lean_ctor_set_uint8(v___x_3418_, sizeof(void*)*1, v___x_3417_);
v___x_3419_ = l_Repr_addAppParen(v___x_3418_, v_prec_3405_);
return v___x_3419_;
}
v___jp_3420_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; uint8_t v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3422_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___closed__5));
lean_inc(v___y_3421_);
v___x_3423_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3423_, 0, v___y_3421_);
lean_ctor_set(v___x_3423_, 1, v___x_3422_);
v___x_3424_ = 0;
v___x_3425_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3425_, 0, v___x_3423_);
lean_ctor_set_uint8(v___x_3425_, sizeof(void*)*1, v___x_3424_);
v___x_3426_ = l_Repr_addAppParen(v___x_3425_, v_prec_3405_);
return v___x_3426_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr___boxed(lean_object* v_x_3439_, lean_object* v_prec_3440_){
_start:
{
uint8_t v_x_167__boxed_3441_; lean_object* v_res_3442_; 
v_x_167__boxed_3441_ = lean_unbox(v_x_3439_);
v_res_3442_ = lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr(v_x_167__boxed_3441_, v_prec_3440_);
lean_dec(v_prec_3440_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorIdx___impl(uint8_t v_x_3445_){
_start:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3446_ = lean_box(v_x_3445_);
v___x_3447_ = lean_obj_tag_nat(v___x_3446_);
lean_dec(v___x_3446_);
return v___x_3447_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorIdx___impl___boxed(lean_object* v_x_3448_){
_start:
{
uint8_t v_x_4__boxed_3449_; lean_object* v_res_3450_; 
v_x_4__boxed_3449_ = lean_unbox(v_x_3448_);
v_res_3450_ = lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorIdx___impl(v_x_4__boxed_3449_);
return v_res_3450_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim___redArg(lean_object* v_k_3451_){
_start:
{
lean_inc(v_k_3451_);
return v_k_3451_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim___redArg___boxed(lean_object* v_k_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim___redArg(v_k_3452_);
lean_dec(v_k_3452_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim(lean_object* v_motive_3454_, lean_object* v_ctorIdx_3455_, uint8_t v_t_3456_, lean_object* v_h_3457_, lean_object* v_k_3458_){
_start:
{
lean_inc(v_k_3458_);
return v_k_3458_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim___boxed(lean_object* v_motive_3459_, lean_object* v_ctorIdx_3460_, lean_object* v_t_3461_, lean_object* v_h_3462_, lean_object* v_k_3463_){
_start:
{
uint8_t v_t_boxed_3464_; lean_object* v_res_3465_; 
v_t_boxed_3464_ = lean_unbox(v_t_3461_);
v_res_3465_ = lp_lean_x2dftml_LeanFtml_TvTitleSource_ctorElim(v_motive_3459_, v_ctorIdx_3460_, v_t_boxed_3464_, v_h_3462_, v_k_3463_);
lean_dec(v_k_3463_);
lean_dec(v_ctorIdx_3460_);
return v_res_3465_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim___redArg(lean_object* v_positional_3466_){
_start:
{
lean_inc(v_positional_3466_);
return v_positional_3466_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim___redArg___boxed(lean_object* v_positional_3467_){
_start:
{
lean_object* v_res_3468_; 
v_res_3468_ = lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim___redArg(v_positional_3467_);
lean_dec(v_positional_3467_);
return v_res_3468_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim(lean_object* v_motive_3469_, uint8_t v_t_3470_, lean_object* v_h_3471_, lean_object* v_positional_3472_){
_start:
{
lean_inc(v_positional_3472_);
return v_positional_3472_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim___boxed(lean_object* v_motive_3473_, lean_object* v_t_3474_, lean_object* v_h_3475_, lean_object* v_positional_3476_){
_start:
{
uint8_t v_t_boxed_3477_; lean_object* v_res_3478_; 
v_t_boxed_3477_ = lean_unbox(v_t_3474_);
v_res_3478_ = lp_lean_x2dftml_LeanFtml_TvTitleSource_positional_elim(v_motive_3473_, v_t_boxed_3477_, v_h_3475_, v_positional_3476_);
lean_dec(v_positional_3476_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim___redArg(lean_object* v_attribute_3479_){
_start:
{
lean_inc(v_attribute_3479_);
return v_attribute_3479_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim___redArg___boxed(lean_object* v_attribute_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim___redArg(v_attribute_3480_);
lean_dec(v_attribute_3480_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim(lean_object* v_motive_3482_, uint8_t v_t_3483_, lean_object* v_h_3484_, lean_object* v_attribute_3485_){
_start:
{
lean_inc(v_attribute_3485_);
return v_attribute_3485_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim___boxed(lean_object* v_motive_3486_, lean_object* v_t_3487_, lean_object* v_h_3488_, lean_object* v_attribute_3489_){
_start:
{
uint8_t v_t_boxed_3490_; lean_object* v_res_3491_; 
v_t_boxed_3490_ = lean_unbox(v_t_3487_);
v_res_3491_ = lp_lean_x2dftml_LeanFtml_TvTitleSource_attribute_elim(v_motive_3486_, v_t_boxed_3490_, v_h_3488_, v_attribute_3489_);
lean_dec(v_attribute_3489_);
return v_res_3491_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_TvTitleSource_ofNat(lean_object* v_n_3492_){
_start:
{
lean_object* v___x_3493_; uint8_t v___x_3494_; 
v___x_3493_ = lean_unsigned_to_nat(0u);
v___x_3494_ = lean_nat_dec_le(v_n_3492_, v___x_3493_);
if (v___x_3494_ == 0)
{
uint8_t v___x_3495_; 
v___x_3495_ = 1;
return v___x_3495_;
}
else
{
uint8_t v___x_3496_; 
v___x_3496_ = 0;
return v___x_3496_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvTitleSource_ofNat___boxed(lean_object* v_n_3497_){
_start:
{
uint8_t v_res_3498_; lean_object* v_r_3499_; 
v_res_3498_ = lp_lean_x2dftml_LeanFtml_TvTitleSource_ofNat(v_n_3497_);
lean_dec(v_n_3497_);
v_r_3499_ = lean_box(v_res_3498_);
return v_r_3499_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleSource(uint8_t v_x_3500_, uint8_t v_y_3501_){
_start:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; uint8_t v___x_3506_; 
v___x_3502_ = lean_box(v_x_3500_);
v___x_3503_ = lean_obj_tag_nat(v___x_3502_);
lean_dec(v___x_3502_);
v___x_3504_ = lean_box(v_y_3501_);
v___x_3505_ = lean_obj_tag_nat(v___x_3504_);
lean_dec(v___x_3504_);
v___x_3506_ = lean_nat_dec_eq(v___x_3503_, v___x_3505_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleSource___boxed(lean_object* v_x_3507_, lean_object* v_y_3508_){
_start:
{
uint8_t v_x_23__boxed_3509_; uint8_t v_y_24__boxed_3510_; uint8_t v_res_3511_; lean_object* v_r_3512_; 
v_x_23__boxed_3509_ = lean_unbox(v_x_3507_);
v_y_24__boxed_3510_ = lean_unbox(v_y_3508_);
v_res_3511_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvTitleSource(v_x_23__boxed_3509_, v_y_24__boxed_3510_);
v_r_3512_ = lean_box(v_res_3511_);
return v_r_3512_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr(uint8_t v_x_3519_, lean_object* v_prec_3520_){
_start:
{
lean_object* v___y_3522_; lean_object* v___y_3529_; 
if (v_x_3519_ == 0)
{
lean_object* v___x_3535_; uint8_t v___x_3536_; 
v___x_3535_ = lean_unsigned_to_nat(1024u);
v___x_3536_ = lean_nat_dec_le(v___x_3535_, v_prec_3520_);
if (v___x_3536_ == 0)
{
lean_object* v___x_3537_; 
v___x_3537_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3522_ = v___x_3537_;
goto v___jp_3521_;
}
else
{
lean_object* v___x_3538_; 
v___x_3538_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3522_ = v___x_3538_;
goto v___jp_3521_;
}
}
else
{
lean_object* v___x_3539_; uint8_t v___x_3540_; 
v___x_3539_ = lean_unsigned_to_nat(1024u);
v___x_3540_ = lean_nat_dec_le(v___x_3539_, v_prec_3520_);
if (v___x_3540_ == 0)
{
lean_object* v___x_3541_; 
v___x_3541_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3529_ = v___x_3541_;
goto v___jp_3528_;
}
else
{
lean_object* v___x_3542_; 
v___x_3542_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3529_ = v___x_3542_;
goto v___jp_3528_;
}
}
v___jp_3521_:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; uint8_t v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3523_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__1));
lean_inc(v___y_3522_);
v___x_3524_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___y_3522_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v___x_3525_ = 0;
v___x_3526_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3526_, 0, v___x_3524_);
lean_ctor_set_uint8(v___x_3526_, sizeof(void*)*1, v___x_3525_);
v___x_3527_ = l_Repr_addAppParen(v___x_3526_, v_prec_3520_);
return v___x_3527_;
}
v___jp_3528_:
{
lean_object* v___x_3530_; lean_object* v___x_3531_; uint8_t v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3530_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___closed__3));
lean_inc(v___y_3529_);
v___x_3531_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___y_3529_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = 0;
v___x_3533_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3533_, 0, v___x_3531_);
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*1, v___x_3532_);
v___x_3534_ = l_Repr_addAppParen(v___x_3533_, v_prec_3520_);
return v___x_3534_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr___boxed(lean_object* v_x_3543_, lean_object* v_prec_3544_){
_start:
{
uint8_t v_x_113__boxed_3545_; lean_object* v_res_3546_; 
v_x_113__boxed_3545_ = lean_unbox(v_x_3543_);
v_res_3546_ = lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr(v_x_113__boxed_3545_, v_prec_3544_);
lean_dec(v_prec_3544_);
return v_res_3546_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab_decEq(lean_object* v_x_3549_, lean_object* v_x_3550_){
_start:
{
uint8_t v_kind_3551_; uint8_t v_source_3552_; uint8_t v_kind_3553_; uint8_t v_source_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; uint8_t v___x_3559_; 
v_kind_3551_ = lean_ctor_get_uint8(v_x_3549_, 0);
v_source_3552_ = lean_ctor_get_uint8(v_x_3549_, 1);
v_kind_3553_ = lean_ctor_get_uint8(v_x_3550_, 0);
v_source_3554_ = lean_ctor_get_uint8(v_x_3550_, 1);
v___x_3555_ = lean_box(v_kind_3551_);
v___x_3556_ = lean_obj_tag_nat(v___x_3555_);
lean_dec(v___x_3555_);
v___x_3557_ = lean_box(v_kind_3553_);
v___x_3558_ = lean_obj_tag_nat(v___x_3557_);
lean_dec(v___x_3557_);
v___x_3559_ = lean_nat_dec_eq(v___x_3556_, v___x_3558_);
if (v___x_3559_ == 0)
{
return v___x_3559_;
}
else
{
lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; uint8_t v___x_3564_; 
v___x_3560_ = lean_box(v_source_3552_);
v___x_3561_ = lean_obj_tag_nat(v___x_3560_);
lean_dec(v___x_3560_);
v___x_3562_ = lean_box(v_source_3554_);
v___x_3563_ = lean_obj_tag_nat(v___x_3562_);
lean_dec(v___x_3562_);
v___x_3564_ = lean_nat_dec_eq(v___x_3561_, v___x_3563_);
return v___x_3564_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab_decEq___boxed(lean_object* v_x_3565_, lean_object* v_x_3566_){
_start:
{
uint8_t v_res_3567_; lean_object* v_r_3568_; 
v_res_3567_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab_decEq(v_x_3565_, v_x_3566_);
lean_dec_ref(v_x_3566_);
lean_dec_ref(v_x_3565_);
v_r_3568_ = lean_box(v_res_3567_);
return v_r_3568_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab(lean_object* v_x_3569_, lean_object* v_x_3570_){
_start:
{
uint8_t v___x_3571_; 
v___x_3571_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab_decEq(v_x_3569_, v_x_3570_);
return v___x_3571_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab___boxed(lean_object* v_x_3572_, lean_object* v_x_3573_){
_start:
{
uint8_t v_res_3574_; lean_object* v_r_3575_; 
v_res_3574_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab(v_x_3572_, v_x_3573_);
lean_dec_ref(v_x_3573_);
lean_dec_ref(v_x_3572_);
v_r_3575_ = lean_box(v_res_3574_);
return v_r_3575_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3588_ = lean_unsigned_to_nat(10u);
v___x_3589_ = lean_nat_to_int(v___x_3588_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg(lean_object* v_x_3590_){
_start:
{
uint8_t v_kind_3591_; uint8_t v_source_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; uint8_t v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
v_kind_3591_ = lean_ctor_get_uint8(v_x_3590_, 0);
v_source_3592_ = lean_ctor_get_uint8(v_x_3590_, 1);
v___x_3593_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5));
v___x_3594_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__3));
v___x_3595_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__7);
v___x_3596_ = lean_unsigned_to_nat(0u);
v___x_3597_ = lp_lean_x2dftml_LeanFtml_instReprTvTitleKind_repr(v_kind_3591_, v___x_3596_);
v___x_3598_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3595_);
lean_ctor_set(v___x_3598_, 1, v___x_3597_);
v___x_3599_ = 0;
v___x_3600_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3600_, 0, v___x_3598_);
lean_ctor_set_uint8(v___x_3600_, sizeof(void*)*1, v___x_3599_);
v___x_3601_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3594_);
lean_ctor_set(v___x_3601_, 1, v___x_3600_);
v___x_3602_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__9));
v___x_3603_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3603_, 0, v___x_3601_);
lean_ctor_set(v___x_3603_, 1, v___x_3602_);
v___x_3604_ = lean_box(1);
v___x_3605_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3603_);
lean_ctor_set(v___x_3605_, 1, v___x_3604_);
v___x_3606_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__5));
v___x_3607_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3605_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
v___x_3608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3607_);
lean_ctor_set(v___x_3608_, 1, v___x_3593_);
v___x_3609_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__6, &lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___closed__6);
v___x_3610_ = lp_lean_x2dftml_LeanFtml_instReprTvTitleSource_repr(v_source_3592_, v___x_3596_);
v___x_3611_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3609_);
lean_ctor_set(v___x_3611_, 1, v___x_3610_);
v___x_3612_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3612_, 0, v___x_3611_);
lean_ctor_set_uint8(v___x_3612_, sizeof(void*)*1, v___x_3599_);
v___x_3613_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3608_);
lean_ctor_set(v___x_3613_, 1, v___x_3612_);
v___x_3614_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17);
v___x_3615_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__18));
v___x_3616_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3616_, 0, v___x_3615_);
lean_ctor_set(v___x_3616_, 1, v___x_3613_);
v___x_3617_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__19));
v___x_3618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3616_);
lean_ctor_set(v___x_3618_, 1, v___x_3617_);
v___x_3619_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3614_);
lean_ctor_set(v___x_3619_, 1, v___x_3618_);
v___x_3620_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3620_, 0, v___x_3619_);
lean_ctor_set_uint8(v___x_3620_, sizeof(void*)*1, v___x_3599_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg___boxed(lean_object* v_x_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg(v_x_3621_);
lean_dec_ref(v_x_3621_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr(lean_object* v_x_3623_, lean_object* v_prec_3624_){
_start:
{
lean_object* v___x_3625_; 
v___x_3625_ = lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg(v_x_3623_);
return v___x_3625_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___boxed(lean_object* v_x_3626_, lean_object* v_prec_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr(v_x_3626_, v_prec_3627_);
lean_dec(v_prec_3627_);
lean_dec_ref(v_x_3626_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorIdx___impl(uint8_t v_x_3631_){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3632_ = lean_box(v_x_3631_);
v___x_3633_ = lean_obj_tag_nat(v___x_3632_);
lean_dec(v___x_3632_);
return v___x_3633_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorIdx___impl___boxed(lean_object* v_x_3634_){
_start:
{
uint8_t v_x_4__boxed_3635_; lean_object* v_res_3636_; 
v_x_4__boxed_3635_ = lean_unbox(v_x_3634_);
v_res_3636_ = lp_lean_x2dftml_LeanFtml_TvView_ctorIdx___impl(v_x_4__boxed_3635_);
return v_res_3636_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorElim___redArg(lean_object* v_k_3637_){
_start:
{
lean_inc(v_k_3637_);
return v_k_3637_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorElim___redArg___boxed(lean_object* v_k_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = lp_lean_x2dftml_LeanFtml_TvView_ctorElim___redArg(v_k_3638_);
lean_dec(v_k_3638_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorElim(lean_object* v_motive_3640_, lean_object* v_ctorIdx_3641_, uint8_t v_t_3642_, lean_object* v_h_3643_, lean_object* v_k_3644_){
_start:
{
lean_inc(v_k_3644_);
return v_k_3644_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ctorElim___boxed(lean_object* v_motive_3645_, lean_object* v_ctorIdx_3646_, lean_object* v_t_3647_, lean_object* v_h_3648_, lean_object* v_k_3649_){
_start:
{
uint8_t v_t_boxed_3650_; lean_object* v_res_3651_; 
v_t_boxed_3650_ = lean_unbox(v_t_3647_);
v_res_3651_ = lp_lean_x2dftml_LeanFtml_TvView_ctorElim(v_motive_3645_, v_ctorIdx_3646_, v_t_boxed_3650_, v_h_3648_, v_k_3649_);
lean_dec(v_k_3649_);
lean_dec(v_ctorIdx_3646_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_bare_elim___redArg(lean_object* v_bare_3652_){
_start:
{
lean_inc(v_bare_3652_);
return v_bare_3652_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_bare_elim___redArg___boxed(lean_object* v_bare_3653_){
_start:
{
lean_object* v_res_3654_; 
v_res_3654_ = lp_lean_x2dftml_LeanFtml_TvView_bare_elim___redArg(v_bare_3653_);
lean_dec(v_bare_3653_);
return v_res_3654_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_bare_elim(lean_object* v_motive_3655_, uint8_t v_t_3656_, lean_object* v_h_3657_, lean_object* v_bare_3658_){
_start:
{
lean_inc(v_bare_3658_);
return v_bare_3658_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_bare_elim___boxed(lean_object* v_motive_3659_, lean_object* v_t_3660_, lean_object* v_h_3661_, lean_object* v_bare_3662_){
_start:
{
uint8_t v_t_boxed_3663_; lean_object* v_res_3664_; 
v_t_boxed_3663_ = lean_unbox(v_t_3660_);
v_res_3664_ = lp_lean_x2dftml_LeanFtml_TvView_bare_elim(v_motive_3659_, v_t_boxed_3663_, v_h_3661_, v_bare_3662_);
lean_dec(v_bare_3662_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim___redArg(lean_object* v_echoDropped_3665_){
_start:
{
lean_inc(v_echoDropped_3665_);
return v_echoDropped_3665_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim___redArg___boxed(lean_object* v_echoDropped_3666_){
_start:
{
lean_object* v_res_3667_; 
v_res_3667_ = lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim___redArg(v_echoDropped_3666_);
lean_dec(v_echoDropped_3666_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim(lean_object* v_motive_3668_, uint8_t v_t_3669_, lean_object* v_h_3670_, lean_object* v_echoDropped_3671_){
_start:
{
lean_inc(v_echoDropped_3671_);
return v_echoDropped_3671_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim___boxed(lean_object* v_motive_3672_, lean_object* v_t_3673_, lean_object* v_h_3674_, lean_object* v_echoDropped_3675_){
_start:
{
uint8_t v_t_boxed_3676_; lean_object* v_res_3677_; 
v_t_boxed_3676_ = lean_unbox(v_t_3673_);
v_res_3677_ = lp_lean_x2dftml_LeanFtml_TvView_echoDropped_elim(v_motive_3672_, v_t_boxed_3676_, v_h_3674_, v_echoDropped_3675_);
lean_dec(v_echoDropped_3675_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim___redArg(lean_object* v_echoKept_3678_){
_start:
{
lean_inc(v_echoKept_3678_);
return v_echoKept_3678_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim___redArg___boxed(lean_object* v_echoKept_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim___redArg(v_echoKept_3679_);
lean_dec(v_echoKept_3679_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim(lean_object* v_motive_3681_, uint8_t v_t_3682_, lean_object* v_h_3683_, lean_object* v_echoKept_3684_){
_start:
{
lean_inc(v_echoKept_3684_);
return v_echoKept_3684_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim___boxed(lean_object* v_motive_3685_, lean_object* v_t_3686_, lean_object* v_h_3687_, lean_object* v_echoKept_3688_){
_start:
{
uint8_t v_t_boxed_3689_; lean_object* v_res_3690_; 
v_t_boxed_3689_ = lean_unbox(v_t_3686_);
v_res_3690_ = lp_lean_x2dftml_LeanFtml_TvView_echoKept_elim(v_motive_3685_, v_t_boxed_3689_, v_h_3687_, v_echoKept_3688_);
lean_dec(v_echoKept_3688_);
return v_res_3690_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_TvView_ofNat(lean_object* v_n_3691_){
_start:
{
lean_object* v___x_3692_; uint8_t v___x_3693_; 
v___x_3692_ = lean_unsigned_to_nat(0u);
v___x_3693_ = lean_nat_dec_le(v_n_3691_, v___x_3692_);
if (v___x_3693_ == 0)
{
lean_object* v___x_3694_; uint8_t v___x_3695_; 
v___x_3694_ = lean_unsigned_to_nat(1u);
v___x_3695_ = lean_nat_dec_le(v_n_3691_, v___x_3694_);
if (v___x_3695_ == 0)
{
uint8_t v___x_3696_; 
v___x_3696_ = 2;
return v___x_3696_;
}
else
{
uint8_t v___x_3697_; 
v___x_3697_ = 1;
return v___x_3697_;
}
}
else
{
uint8_t v___x_3698_; 
v___x_3698_ = 0;
return v___x_3698_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvView_ofNat___boxed(lean_object* v_n_3699_){
_start:
{
uint8_t v_res_3700_; lean_object* v_r_3701_; 
v_res_3700_ = lp_lean_x2dftml_LeanFtml_TvView_ofNat(v_n_3699_);
lean_dec(v_n_3699_);
v_r_3701_ = lean_box(v_res_3700_);
return v_r_3701_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvView(uint8_t v_x_3702_, uint8_t v_y_3703_){
_start:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; uint8_t v___x_3708_; 
v___x_3704_ = lean_box(v_x_3702_);
v___x_3705_ = lean_obj_tag_nat(v___x_3704_);
lean_dec(v___x_3704_);
v___x_3706_ = lean_box(v_y_3703_);
v___x_3707_ = lean_obj_tag_nat(v___x_3706_);
lean_dec(v___x_3706_);
v___x_3708_ = lean_nat_dec_eq(v___x_3705_, v___x_3707_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvView___boxed(lean_object* v_x_3709_, lean_object* v_y_3710_){
_start:
{
uint8_t v_x_23__boxed_3711_; uint8_t v_y_24__boxed_3712_; uint8_t v_res_3713_; lean_object* v_r_3714_; 
v_x_23__boxed_3711_ = lean_unbox(v_x_3709_);
v_y_24__boxed_3712_ = lean_unbox(v_y_3710_);
v_res_3713_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvView(v_x_23__boxed_3711_, v_y_24__boxed_3712_);
v_r_3714_ = lean_box(v_res_3713_);
return v_r_3714_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr(uint8_t v_x_3724_, lean_object* v_prec_3725_){
_start:
{
lean_object* v___y_3727_; lean_object* v___y_3734_; lean_object* v___y_3741_; 
switch(v_x_3724_)
{
case 0:
{
lean_object* v___x_3747_; uint8_t v___x_3748_; 
v___x_3747_ = lean_unsigned_to_nat(1024u);
v___x_3748_ = lean_nat_dec_le(v___x_3747_, v_prec_3725_);
if (v___x_3748_ == 0)
{
lean_object* v___x_3749_; 
v___x_3749_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3727_ = v___x_3749_;
goto v___jp_3726_;
}
else
{
lean_object* v___x_3750_; 
v___x_3750_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3727_ = v___x_3750_;
goto v___jp_3726_;
}
}
case 1:
{
lean_object* v___x_3751_; uint8_t v___x_3752_; 
v___x_3751_ = lean_unsigned_to_nat(1024u);
v___x_3752_ = lean_nat_dec_le(v___x_3751_, v_prec_3725_);
if (v___x_3752_ == 0)
{
lean_object* v___x_3753_; 
v___x_3753_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3734_ = v___x_3753_;
goto v___jp_3733_;
}
else
{
lean_object* v___x_3754_; 
v___x_3754_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3734_ = v___x_3754_;
goto v___jp_3733_;
}
}
default: 
{
lean_object* v___x_3755_; uint8_t v___x_3756_; 
v___x_3755_ = lean_unsigned_to_nat(1024u);
v___x_3756_ = lean_nat_dec_le(v___x_3755_, v_prec_3725_);
if (v___x_3756_ == 0)
{
lean_object* v___x_3757_; 
v___x_3757_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3741_ = v___x_3757_;
goto v___jp_3740_;
}
else
{
lean_object* v___x_3758_; 
v___x_3758_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3741_ = v___x_3758_;
goto v___jp_3740_;
}
}
}
v___jp_3726_:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3728_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__1));
lean_inc(v___y_3727_);
v___x_3729_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3729_, 0, v___y_3727_);
lean_ctor_set(v___x_3729_, 1, v___x_3728_);
v___x_3730_ = 0;
v___x_3731_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3731_, 0, v___x_3729_);
lean_ctor_set_uint8(v___x_3731_, sizeof(void*)*1, v___x_3730_);
v___x_3732_ = l_Repr_addAppParen(v___x_3731_, v_prec_3725_);
return v___x_3732_;
}
v___jp_3733_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; uint8_t v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; 
v___x_3735_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__3));
lean_inc(v___y_3734_);
v___x_3736_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___y_3734_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
v___x_3737_ = 0;
v___x_3738_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3738_, 0, v___x_3736_);
lean_ctor_set_uint8(v___x_3738_, sizeof(void*)*1, v___x_3737_);
v___x_3739_ = l_Repr_addAppParen(v___x_3738_, v_prec_3725_);
return v___x_3739_;
}
v___jp_3740_:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; uint8_t v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3742_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvView_repr___closed__5));
lean_inc(v___y_3741_);
v___x_3743_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3743_, 0, v___y_3741_);
lean_ctor_set(v___x_3743_, 1, v___x_3742_);
v___x_3744_ = 0;
v___x_3745_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3745_, 0, v___x_3743_);
lean_ctor_set_uint8(v___x_3745_, sizeof(void*)*1, v___x_3744_);
v___x_3746_ = l_Repr_addAppParen(v___x_3745_, v_prec_3725_);
return v___x_3746_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvView_repr___boxed(lean_object* v_x_3759_, lean_object* v_prec_3760_){
_start:
{
uint8_t v_x_167__boxed_3761_; lean_object* v_res_3762_; 
v_x_167__boxed_3761_ = lean_unbox(v_x_3759_);
v_res_3762_ = lp_lean_x2dftml_LeanFtml_instReprTvView_repr(v_x_167__boxed_3761_, v_prec_3760_);
lean_dec(v_prec_3760_);
return v_res_3762_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorIdx___impl(uint8_t v_x_3765_){
_start:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3766_ = lean_box(v_x_3765_);
v___x_3767_ = lean_obj_tag_nat(v___x_3766_);
lean_dec(v___x_3766_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorIdx___impl___boxed(lean_object* v_x_3768_){
_start:
{
uint8_t v_x_4__boxed_3769_; lean_object* v_res_3770_; 
v_x_4__boxed_3769_ = lean_unbox(v_x_3768_);
v_res_3770_ = lp_lean_x2dftml_LeanFtml_TvLabel_ctorIdx___impl(v_x_4__boxed_3769_);
return v_res_3770_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim___redArg(lean_object* v_k_3771_){
_start:
{
lean_inc(v_k_3771_);
return v_k_3771_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim___redArg___boxed(lean_object* v_k_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim___redArg(v_k_3772_);
lean_dec(v_k_3772_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim(lean_object* v_motive_3774_, lean_object* v_ctorIdx_3775_, uint8_t v_t_3776_, lean_object* v_h_3777_, lean_object* v_k_3778_){
_start:
{
lean_inc(v_k_3778_);
return v_k_3778_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim___boxed(lean_object* v_motive_3779_, lean_object* v_ctorIdx_3780_, lean_object* v_t_3781_, lean_object* v_h_3782_, lean_object* v_k_3783_){
_start:
{
uint8_t v_t_boxed_3784_; lean_object* v_res_3785_; 
v_t_boxed_3784_ = lean_unbox(v_t_3781_);
v_res_3785_ = lp_lean_x2dftml_LeanFtml_TvLabel_ctorElim(v_motive_3779_, v_ctorIdx_3780_, v_t_boxed_3784_, v_h_3782_, v_k_3783_);
lean_dec(v_k_3783_);
lean_dec(v_ctorIdx_3780_);
return v_res_3785_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_default_elim___redArg(lean_object* v_default_3786_){
_start:
{
lean_inc(v_default_3786_);
return v_default_3786_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_default_elim___redArg___boxed(lean_object* v_default_3787_){
_start:
{
lean_object* v_res_3788_; 
v_res_3788_ = lp_lean_x2dftml_LeanFtml_TvLabel_default_elim___redArg(v_default_3787_);
lean_dec(v_default_3787_);
return v_res_3788_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_default_elim(lean_object* v_motive_3789_, uint8_t v_t_3790_, lean_object* v_h_3791_, lean_object* v_default_3792_){
_start:
{
lean_inc(v_default_3792_);
return v_default_3792_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_default_elim___boxed(lean_object* v_motive_3793_, lean_object* v_t_3794_, lean_object* v_h_3795_, lean_object* v_default_3796_){
_start:
{
uint8_t v_t_boxed_3797_; lean_object* v_res_3798_; 
v_t_boxed_3797_ = lean_unbox(v_t_3794_);
v_res_3798_ = lp_lean_x2dftml_LeanFtml_TvLabel_default_elim(v_motive_3793_, v_t_boxed_3797_, v_h_3795_, v_default_3796_);
lean_dec(v_default_3796_);
return v_res_3798_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim___redArg(lean_object* v_empty_3799_){
_start:
{
lean_inc(v_empty_3799_);
return v_empty_3799_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim___redArg___boxed(lean_object* v_empty_3800_){
_start:
{
lean_object* v_res_3801_; 
v_res_3801_ = lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim___redArg(v_empty_3800_);
lean_dec(v_empty_3800_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim(lean_object* v_motive_3802_, uint8_t v_t_3803_, lean_object* v_h_3804_, lean_object* v_empty_3805_){
_start:
{
lean_inc(v_empty_3805_);
return v_empty_3805_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim___boxed(lean_object* v_motive_3806_, lean_object* v_t_3807_, lean_object* v_h_3808_, lean_object* v_empty_3809_){
_start:
{
uint8_t v_t_boxed_3810_; lean_object* v_res_3811_; 
v_t_boxed_3810_ = lean_unbox(v_t_3807_);
v_res_3811_ = lp_lean_x2dftml_LeanFtml_TvLabel_empty_elim(v_motive_3806_, v_t_boxed_3810_, v_h_3808_, v_empty_3809_);
lean_dec(v_empty_3809_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_text_elim___redArg(lean_object* v_text_3812_){
_start:
{
lean_inc(v_text_3812_);
return v_text_3812_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_text_elim___redArg___boxed(lean_object* v_text_3813_){
_start:
{
lean_object* v_res_3814_; 
v_res_3814_ = lp_lean_x2dftml_LeanFtml_TvLabel_text_elim___redArg(v_text_3813_);
lean_dec(v_text_3813_);
return v_res_3814_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_text_elim(lean_object* v_motive_3815_, uint8_t v_t_3816_, lean_object* v_h_3817_, lean_object* v_text_3818_){
_start:
{
lean_inc(v_text_3818_);
return v_text_3818_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_text_elim___boxed(lean_object* v_motive_3819_, lean_object* v_t_3820_, lean_object* v_h_3821_, lean_object* v_text_3822_){
_start:
{
uint8_t v_t_boxed_3823_; lean_object* v_res_3824_; 
v_t_boxed_3823_ = lean_unbox(v_t_3820_);
v_res_3824_ = lp_lean_x2dftml_LeanFtml_TvLabel_text_elim(v_motive_3819_, v_t_boxed_3823_, v_h_3821_, v_text_3822_);
lean_dec(v_text_3822_);
return v_res_3824_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_TvLabel_ofNat(lean_object* v_n_3825_){
_start:
{
lean_object* v___x_3826_; uint8_t v___x_3827_; 
v___x_3826_ = lean_unsigned_to_nat(0u);
v___x_3827_ = lean_nat_dec_le(v_n_3825_, v___x_3826_);
if (v___x_3827_ == 0)
{
lean_object* v___x_3828_; uint8_t v___x_3829_; 
v___x_3828_ = lean_unsigned_to_nat(1u);
v___x_3829_ = lean_nat_dec_le(v_n_3825_, v___x_3828_);
if (v___x_3829_ == 0)
{
uint8_t v___x_3830_; 
v___x_3830_ = 2;
return v___x_3830_;
}
else
{
uint8_t v___x_3831_; 
v___x_3831_ = 1;
return v___x_3831_;
}
}
else
{
uint8_t v___x_3832_; 
v___x_3832_ = 0;
return v___x_3832_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvLabel_ofNat___boxed(lean_object* v_n_3833_){
_start:
{
uint8_t v_res_3834_; lean_object* v_r_3835_; 
v_res_3834_ = lp_lean_x2dftml_LeanFtml_TvLabel_ofNat(v_n_3833_);
lean_dec(v_n_3833_);
v_r_3835_ = lean_box(v_res_3834_);
return v_r_3835_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvLabel(uint8_t v_x_3836_, uint8_t v_y_3837_){
_start:
{
lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; uint8_t v___x_3842_; 
v___x_3838_ = lean_box(v_x_3836_);
v___x_3839_ = lean_obj_tag_nat(v___x_3838_);
lean_dec(v___x_3838_);
v___x_3840_ = lean_box(v_y_3837_);
v___x_3841_ = lean_obj_tag_nat(v___x_3840_);
lean_dec(v___x_3840_);
v___x_3842_ = lean_nat_dec_eq(v___x_3839_, v___x_3841_);
return v___x_3842_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvLabel___boxed(lean_object* v_x_3843_, lean_object* v_y_3844_){
_start:
{
uint8_t v_x_23__boxed_3845_; uint8_t v_y_24__boxed_3846_; uint8_t v_res_3847_; lean_object* v_r_3848_; 
v_x_23__boxed_3845_ = lean_unbox(v_x_3843_);
v_y_24__boxed_3846_ = lean_unbox(v_y_3844_);
v_res_3847_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvLabel(v_x_23__boxed_3845_, v_y_24__boxed_3846_);
v_r_3848_ = lean_box(v_res_3847_);
return v_r_3848_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr(uint8_t v_x_3858_, lean_object* v_prec_3859_){
_start:
{
lean_object* v___y_3861_; lean_object* v___y_3868_; lean_object* v___y_3875_; 
switch(v_x_3858_)
{
case 0:
{
lean_object* v___x_3881_; uint8_t v___x_3882_; 
v___x_3881_ = lean_unsigned_to_nat(1024u);
v___x_3882_ = lean_nat_dec_le(v___x_3881_, v_prec_3859_);
if (v___x_3882_ == 0)
{
lean_object* v___x_3883_; 
v___x_3883_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3861_ = v___x_3883_;
goto v___jp_3860_;
}
else
{
lean_object* v___x_3884_; 
v___x_3884_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3861_ = v___x_3884_;
goto v___jp_3860_;
}
}
case 1:
{
lean_object* v___x_3885_; uint8_t v___x_3886_; 
v___x_3885_ = lean_unsigned_to_nat(1024u);
v___x_3886_ = lean_nat_dec_le(v___x_3885_, v_prec_3859_);
if (v___x_3886_ == 0)
{
lean_object* v___x_3887_; 
v___x_3887_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3868_ = v___x_3887_;
goto v___jp_3867_;
}
else
{
lean_object* v___x_3888_; 
v___x_3888_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3868_ = v___x_3888_;
goto v___jp_3867_;
}
}
default: 
{
lean_object* v___x_3889_; uint8_t v___x_3890_; 
v___x_3889_ = lean_unsigned_to_nat(1024u);
v___x_3890_ = lean_nat_dec_le(v___x_3889_, v_prec_3859_);
if (v___x_3890_ == 0)
{
lean_object* v___x_3891_; 
v___x_3891_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_3875_ = v___x_3891_;
goto v___jp_3874_;
}
else
{
lean_object* v___x_3892_; 
v___x_3892_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_3875_ = v___x_3892_;
goto v___jp_3874_;
}
}
}
v___jp_3860_:
{
lean_object* v___x_3862_; lean_object* v___x_3863_; uint8_t v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v___x_3862_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__1));
lean_inc(v___y_3861_);
v___x_3863_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3863_, 0, v___y_3861_);
lean_ctor_set(v___x_3863_, 1, v___x_3862_);
v___x_3864_ = 0;
v___x_3865_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3865_, 0, v___x_3863_);
lean_ctor_set_uint8(v___x_3865_, sizeof(void*)*1, v___x_3864_);
v___x_3866_ = l_Repr_addAppParen(v___x_3865_, v_prec_3859_);
return v___x_3866_;
}
v___jp_3867_:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; uint8_t v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3869_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__3));
lean_inc(v___y_3868_);
v___x_3870_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3870_, 0, v___y_3868_);
lean_ctor_set(v___x_3870_, 1, v___x_3869_);
v___x_3871_ = 0;
v___x_3872_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3872_, 0, v___x_3870_);
lean_ctor_set_uint8(v___x_3872_, sizeof(void*)*1, v___x_3871_);
v___x_3873_ = l_Repr_addAppParen(v___x_3872_, v_prec_3859_);
return v___x_3873_;
}
v___jp_3874_:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; uint8_t v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3876_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___closed__5));
lean_inc(v___y_3875_);
v___x_3877_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3877_, 0, v___y_3875_);
lean_ctor_set(v___x_3877_, 1, v___x_3876_);
v___x_3878_ = 0;
v___x_3879_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3879_, 0, v___x_3877_);
lean_ctor_set_uint8(v___x_3879_, sizeof(void*)*1, v___x_3878_);
v___x_3880_ = l_Repr_addAppParen(v___x_3879_, v_prec_3859_);
return v___x_3880_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr___boxed(lean_object* v_x_3893_, lean_object* v_prec_3894_){
_start:
{
uint8_t v_x_167__boxed_3895_; lean_object* v_res_3896_; 
v_x_167__boxed_3895_ = lean_unbox(v_x_3893_);
v_res_3896_ = lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr(v_x_167__boxed_3895_, v_prec_3894_);
lean_dec(v_prec_3894_);
return v_res_3896_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem_decEq(lean_object* v_x_3899_, lean_object* v_x_3900_){
_start:
{
uint8_t v_selected_3901_; uint8_t v_label_3902_; uint8_t v_selected_3903_; uint8_t v_label_3904_; 
v_selected_3901_ = lean_ctor_get_uint8(v_x_3899_, 0);
v_label_3902_ = lean_ctor_get_uint8(v_x_3899_, 1);
v_selected_3903_ = lean_ctor_get_uint8(v_x_3900_, 0);
v_label_3904_ = lean_ctor_get_uint8(v_x_3900_, 1);
if (v_selected_3903_ == 0)
{
if (v_selected_3901_ == 0)
{
goto v___jp_3905_;
}
else
{
return v_selected_3903_;
}
}
else
{
if (v_selected_3901_ == 0)
{
return v_selected_3901_;
}
else
{
goto v___jp_3905_;
}
}
v___jp_3905_:
{
lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; uint8_t v___x_3910_; 
v___x_3906_ = lean_box(v_label_3902_);
v___x_3907_ = lean_obj_tag_nat(v___x_3906_);
lean_dec(v___x_3906_);
v___x_3908_ = lean_box(v_label_3904_);
v___x_3909_ = lean_obj_tag_nat(v___x_3908_);
lean_dec(v___x_3908_);
v___x_3910_ = lean_nat_dec_eq(v___x_3907_, v___x_3909_);
return v___x_3910_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem_decEq___boxed(lean_object* v_x_3911_, lean_object* v_x_3912_){
_start:
{
uint8_t v_res_3913_; lean_object* v_r_3914_; 
v_res_3913_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem_decEq(v_x_3911_, v_x_3912_);
lean_dec_ref(v_x_3912_);
lean_dec_ref(v_x_3911_);
v_r_3914_ = lean_box(v_res_3913_);
return v_r_3914_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem(lean_object* v_x_3915_, lean_object* v_x_3916_){
_start:
{
uint8_t v___x_3917_; 
v___x_3917_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem_decEq(v_x_3915_, v_x_3916_);
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem___boxed(lean_object* v_x_3918_, lean_object* v_x_3919_){
_start:
{
uint8_t v_res_3920_; lean_object* v_r_3921_; 
v_res_3920_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem(v_x_3918_, v_x_3919_);
lean_dec_ref(v_x_3919_);
lean_dec_ref(v_x_3918_);
v_r_3921_ = lean_box(v_res_3920_);
return v_r_3921_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3931_ = lean_unsigned_to_nat(12u);
v___x_3932_ = lean_nat_to_int(v___x_3931_);
return v___x_3932_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg(lean_object* v_x_3936_){
_start:
{
uint8_t v_selected_3937_; uint8_t v_label_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; uint8_t v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v_selected_3937_ = lean_ctor_get_uint8(v_x_3936_, 0);
v_label_3938_ = lean_ctor_get_uint8(v_x_3936_, 1);
v___x_3939_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__5));
v___x_3940_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__3));
v___x_3941_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__4, &lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__4);
v___x_3942_ = lean_unsigned_to_nat(0u);
v___x_3943_ = l_Bool_repr___redArg(v_selected_3937_);
v___x_3944_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3941_);
lean_ctor_set(v___x_3944_, 1, v___x_3943_);
v___x_3945_ = 0;
v___x_3946_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3946_, 0, v___x_3944_);
lean_ctor_set_uint8(v___x_3946_, sizeof(void*)*1, v___x_3945_);
v___x_3947_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3947_, 0, v___x_3940_);
lean_ctor_set(v___x_3947_, 1, v___x_3946_);
v___x_3948_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__9));
v___x_3949_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3947_);
lean_ctor_set(v___x_3949_, 1, v___x_3948_);
v___x_3950_ = lean_box(1);
v___x_3951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3949_);
lean_ctor_set(v___x_3951_, 1, v___x_3950_);
v___x_3952_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___closed__6));
v___x_3953_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3951_);
lean_ctor_set(v___x_3953_, 1, v___x_3952_);
v___x_3954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
lean_ctor_set(v___x_3954_, 1, v___x_3939_);
v___x_3955_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__14);
v___x_3956_ = lp_lean_x2dftml_LeanFtml_instReprTvLabel_repr(v_label_3938_, v___x_3942_);
v___x_3957_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3955_);
lean_ctor_set(v___x_3957_, 1, v___x_3956_);
v___x_3958_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3958_, 0, v___x_3957_);
lean_ctor_set_uint8(v___x_3958_, sizeof(void*)*1, v___x_3945_);
v___x_3959_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3954_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
v___x_3960_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17, &lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__17);
v___x_3961_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__18));
v___x_3962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3961_);
lean_ctor_set(v___x_3962_, 1, v___x_3959_);
v___x_3963_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg___closed__19));
v___x_3964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3962_);
lean_ctor_set(v___x_3964_, 1, v___x_3963_);
v___x_3965_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3960_);
lean_ctor_set(v___x_3965_, 1, v___x_3964_);
v___x_3966_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
lean_ctor_set_uint8(v___x_3966_, sizeof(void*)*1, v___x_3945_);
return v___x_3966_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg___boxed(lean_object* v_x_3967_){
_start:
{
lean_object* v_res_3968_; 
v_res_3968_ = lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg(v_x_3967_);
lean_dec_ref(v_x_3967_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr(lean_object* v_x_3969_, lean_object* v_prec_3970_){
_start:
{
lean_object* v___x_3971_; 
v___x_3971_ = lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg(v_x_3969_);
return v___x_3971_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___boxed(lean_object* v_x_3972_, lean_object* v_prec_3973_){
_start:
{
lean_object* v_res_3974_; 
v_res_3974_ = lp_lean_x2dftml_LeanFtml_instReprTvItem_repr(v_x_3972_, v_prec_3973_);
lean_dec(v_prec_3973_);
lean_dec_ref(v_x_3972_);
return v_res_3974_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorIdx___impl(lean_object* v_x_3977_){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = lean_obj_tag_nat(v_x_3977_);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorIdx___impl___boxed(lean_object* v_x_3979_){
_start:
{
lean_object* v_res_3980_; 
v_res_3980_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorIdx___impl(v_x_3979_);
lean_dec(v_x_3979_);
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(lean_object* v_t_3981_, lean_object* v_k_3982_){
_start:
{
if (lean_obj_tag(v_t_3981_) == 0)
{
lean_object* v_items_3983_; lean_object* v___x_3984_; 
v_items_3983_ = lean_ctor_get(v_t_3981_, 0);
lean_inc(v_items_3983_);
lean_dec_ref_known(v_t_3981_, 1);
v___x_3984_ = lean_apply_1(v_k_3982_, v_items_3983_);
return v___x_3984_;
}
else
{
lean_dec(v_t_3981_);
return v_k_3982_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorElim(lean_object* v_motive_3985_, lean_object* v_ctorIdx_3986_, lean_object* v_t_3987_, lean_object* v_h_3988_, lean_object* v_k_3989_){
_start:
{
lean_object* v___x_3990_; 
v___x_3990_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_3987_, v_k_3989_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___boxed(lean_object* v_motive_3991_, lean_object* v_ctorIdx_3992_, lean_object* v_t_3993_, lean_object* v_h_3994_, lean_object* v_k_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim(v_motive_3991_, v_ctorIdx_3992_, v_t_3993_, v_h_3994_, v_k_3995_);
lean_dec(v_ctorIdx_3992_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_start_elim___redArg(lean_object* v_t_3997_, lean_object* v_start_3998_){
_start:
{
lean_object* v___x_3999_; 
v___x_3999_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_3997_, v_start_3998_);
return v___x_3999_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_start_elim(lean_object* v_motive_4000_, lean_object* v_t_4001_, lean_object* v_h_4002_, lean_object* v_start_4003_){
_start:
{
lean_object* v___x_4004_; 
v___x_4004_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4001_, v_start_4003_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelShown_elim___redArg(lean_object* v_t_4005_, lean_object* v_panelShown_4006_){
_start:
{
lean_object* v___x_4007_; 
v___x_4007_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4005_, v_panelShown_4006_);
return v___x_4007_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelShown_elim(lean_object* v_motive_4008_, lean_object* v_t_4009_, lean_object* v_h_4010_, lean_object* v_panelShown_4011_){
_start:
{
lean_object* v___x_4012_; 
v___x_4012_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4009_, v_panelShown_4011_);
return v___x_4012_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelHidden_elim___redArg(lean_object* v_t_4013_, lean_object* v_panelHidden_4014_){
_start:
{
lean_object* v___x_4015_; 
v___x_4015_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4013_, v_panelHidden_4014_);
return v___x_4015_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelHidden_elim(lean_object* v_motive_4016_, lean_object* v_t_4017_, lean_object* v_h_4018_, lean_object* v_panelHidden_4019_){
_start:
{
lean_object* v___x_4020_; 
v___x_4020_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4017_, v_panelHidden_4019_);
return v___x_4020_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelEnd_elim___redArg(lean_object* v_t_4021_, lean_object* v_panelEnd_4022_){
_start:
{
lean_object* v___x_4023_; 
v___x_4023_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4021_, v_panelEnd_4022_);
return v___x_4023_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_panelEnd_elim(lean_object* v_motive_4024_, lean_object* v_t_4025_, lean_object* v_h_4026_, lean_object* v_panelEnd_4027_){
_start:
{
lean_object* v___x_4028_; 
v___x_4028_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4025_, v_panelEnd_4027_);
return v___x_4028_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_endTok_elim___redArg(lean_object* v_t_4029_, lean_object* v_endTok_4030_){
_start:
{
lean_object* v___x_4031_; 
v___x_4031_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4029_, v_endTok_4030_);
return v___x_4031_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_endTok_elim(lean_object* v_motive_4032_, lean_object* v_t_4033_, lean_object* v_h_4034_, lean_object* v_endTok_4035_){
_start:
{
lean_object* v___x_4036_; 
v___x_4036_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4033_, v_endTok_4035_);
return v___x_4036_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_fall_elim___redArg(lean_object* v_t_4037_, lean_object* v_fall_4038_){
_start:
{
lean_object* v___x_4039_; 
v___x_4039_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4037_, v_fall_4038_);
return v___x_4039_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TvRender_fall_elim(lean_object* v_motive_4040_, lean_object* v_t_4041_, lean_object* v_h_4042_, lean_object* v_fall_4043_){
_start:
{
lean_object* v___x_4044_; 
v___x_4044_ = lp_lean_x2dftml_LeanFtml_TvRender_ctorElim___redArg(v_t_4041_, v_fall_4043_);
return v___x_4044_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender_decEq(lean_object* v_x_4045_, lean_object* v_x_4046_){
_start:
{
switch(lean_obj_tag(v_x_4045_))
{
case 0:
{
if (lean_obj_tag(v_x_4046_) == 0)
{
lean_object* v_items_4047_; lean_object* v_items_4048_; lean_object* v___x_4049_; uint8_t v___x_4050_; 
v_items_4047_ = lean_ctor_get(v_x_4045_, 0);
lean_inc(v_items_4047_);
lean_dec_ref_known(v_x_4045_, 1);
v_items_4048_ = lean_ctor_get(v_x_4046_, 0);
lean_inc(v_items_4048_);
lean_dec_ref_known(v_x_4046_, 1);
v___x_4049_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqTvItem___boxed), 2, 0);
v___x_4050_ = l_instDecidableEqList___redArg(v___x_4049_, v_items_4047_, v_items_4048_);
return v___x_4050_;
}
else
{
uint8_t v___x_4051_; 
lean_dec_ref_known(v_x_4045_, 1);
lean_dec(v_x_4046_);
v___x_4051_ = 0;
return v___x_4051_;
}
}
case 1:
{
if (lean_obj_tag(v_x_4046_) == 1)
{
uint8_t v___x_4052_; 
v___x_4052_ = 1;
return v___x_4052_;
}
else
{
uint8_t v___x_4053_; 
lean_dec(v_x_4046_);
v___x_4053_ = 0;
return v___x_4053_;
}
}
case 2:
{
if (lean_obj_tag(v_x_4046_) == 2)
{
uint8_t v___x_4054_; 
v___x_4054_ = 1;
return v___x_4054_;
}
else
{
uint8_t v___x_4055_; 
lean_dec(v_x_4046_);
v___x_4055_ = 0;
return v___x_4055_;
}
}
case 3:
{
if (lean_obj_tag(v_x_4046_) == 3)
{
uint8_t v___x_4056_; 
v___x_4056_ = 1;
return v___x_4056_;
}
else
{
uint8_t v___x_4057_; 
lean_dec(v_x_4046_);
v___x_4057_ = 0;
return v___x_4057_;
}
}
case 4:
{
if (lean_obj_tag(v_x_4046_) == 4)
{
uint8_t v___x_4058_; 
v___x_4058_ = 1;
return v___x_4058_;
}
else
{
uint8_t v___x_4059_; 
lean_dec(v_x_4046_);
v___x_4059_ = 0;
return v___x_4059_;
}
}
default: 
{
if (lean_obj_tag(v_x_4046_) == 5)
{
uint8_t v___x_4060_; 
v___x_4060_ = 1;
return v___x_4060_;
}
else
{
uint8_t v___x_4061_; 
lean_dec(v_x_4046_);
v___x_4061_ = 0;
return v___x_4061_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender_decEq___boxed(lean_object* v_x_4062_, lean_object* v_x_4063_){
_start:
{
uint8_t v_res_4064_; lean_object* v_r_4065_; 
v_res_4064_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender_decEq(v_x_4062_, v_x_4063_);
v_r_4065_ = lean_box(v_res_4064_);
return v_r_4065_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender(lean_object* v_x_4066_, lean_object* v_x_4067_){
_start:
{
uint8_t v___x_4068_; 
v___x_4068_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender_decEq(v_x_4066_, v_x_4067_);
return v___x_4068_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender___boxed(lean_object* v_x_4069_, lean_object* v_x_4070_){
_start:
{
uint8_t v_res_4071_; lean_object* v_r_4072_; 
v_res_4071_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender(v_x_4069_, v_x_4070_);
v_r_4072_ = lean_box(v_res_4071_);
return v_r_4072_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_4073_, lean_object* v_x_4074_, lean_object* v_x_4075_){
_start:
{
if (lean_obj_tag(v_x_4075_) == 0)
{
lean_dec(v_x_4073_);
return v_x_4074_;
}
else
{
lean_object* v_head_4076_; lean_object* v_tail_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4087_; 
v_head_4076_ = lean_ctor_get(v_x_4075_, 0);
v_tail_4077_ = lean_ctor_get(v_x_4075_, 1);
v_isSharedCheck_4087_ = !lean_is_exclusive(v_x_4075_);
if (v_isSharedCheck_4087_ == 0)
{
v___x_4079_ = v_x_4075_;
v_isShared_4080_ = v_isSharedCheck_4087_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_tail_4077_);
lean_inc(v_head_4076_);
lean_dec(v_x_4075_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4087_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
lean_inc(v_x_4073_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set_tag(v___x_4079_, 5);
lean_ctor_set(v___x_4079_, 1, v_x_4073_);
lean_ctor_set(v___x_4079_, 0, v_x_4074_);
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_x_4074_);
lean_ctor_set(v_reuseFailAlloc_4086_, 1, v_x_4073_);
v___x_4082_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4083_ = lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg(v_head_4076_);
lean_dec(v_head_4076_);
v___x_4084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4084_, 0, v___x_4082_);
lean_ctor_set(v___x_4084_, 1, v___x_4083_);
v_x_4074_ = v___x_4084_;
v_x_4075_ = v_tail_4077_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0_spec__1(lean_object* v_x_4088_, lean_object* v_x_4089_, lean_object* v_x_4090_){
_start:
{
if (lean_obj_tag(v_x_4090_) == 0)
{
lean_dec(v_x_4088_);
return v_x_4089_;
}
else
{
lean_object* v_head_4091_; lean_object* v_tail_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4102_; 
v_head_4091_ = lean_ctor_get(v_x_4090_, 0);
v_tail_4092_ = lean_ctor_get(v_x_4090_, 1);
v_isSharedCheck_4102_ = !lean_is_exclusive(v_x_4090_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4094_ = v_x_4090_;
v_isShared_4095_ = v_isSharedCheck_4102_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_tail_4092_);
lean_inc(v_head_4091_);
lean_dec(v_x_4090_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4102_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4097_; 
lean_inc(v_x_4088_);
if (v_isShared_4095_ == 0)
{
lean_ctor_set_tag(v___x_4094_, 5);
lean_ctor_set(v___x_4094_, 1, v_x_4088_);
lean_ctor_set(v___x_4094_, 0, v_x_4089_);
v___x_4097_ = v___x_4094_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_x_4089_);
lean_ctor_set(v_reuseFailAlloc_4101_, 1, v_x_4088_);
v___x_4097_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; 
v___x_4098_ = lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg(v_head_4091_);
lean_dec(v_head_4091_);
v___x_4099_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4099_, 0, v___x_4097_);
lean_ctor_set(v___x_4099_, 1, v___x_4098_);
v___x_4100_ = lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0_spec__1_spec__2(v_x_4088_, v___x_4099_, v_tail_4092_);
return v___x_4100_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0(lean_object* v_x_4103_, lean_object* v_x_4104_){
_start:
{
if (lean_obj_tag(v_x_4103_) == 0)
{
lean_object* v___x_4105_; 
lean_dec(v_x_4104_);
v___x_4105_ = lean_box(0);
return v___x_4105_;
}
else
{
lean_object* v_tail_4106_; 
v_tail_4106_ = lean_ctor_get(v_x_4103_, 1);
if (lean_obj_tag(v_tail_4106_) == 0)
{
lean_object* v_head_4107_; lean_object* v___x_4108_; 
lean_dec(v_x_4104_);
v_head_4107_ = lean_ctor_get(v_x_4103_, 0);
lean_inc(v_head_4107_);
lean_dec_ref_known(v_x_4103_, 2);
v___x_4108_ = lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg(v_head_4107_);
lean_dec(v_head_4107_);
return v___x_4108_;
}
else
{
lean_object* v_head_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
lean_inc(v_tail_4106_);
v_head_4109_ = lean_ctor_get(v_x_4103_, 0);
lean_inc(v_head_4109_);
lean_dec_ref_known(v_x_4103_, 2);
v___x_4110_ = lp_lean_x2dftml_LeanFtml_instReprTvItem_repr___redArg(v_head_4109_);
lean_dec(v_head_4109_);
v___x_4111_ = lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0_spec__1(v_x_4104_, v___x_4110_, v_tail_4106_);
return v___x_4111_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_4120_; lean_object* v___x_4121_; 
v___x_4120_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__2));
v___x_4121_ = lean_string_length(v___x_4120_);
return v___x_4121_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_4122_; lean_object* v___x_4123_; 
v___x_4122_ = lean_obj_once(&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__5, &lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__5_once, _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__5);
v___x_4123_ = lean_nat_to_int(v___x_4122_);
return v___x_4123_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg(lean_object* v_a_4128_){
_start:
{
if (lean_obj_tag(v_a_4128_) == 0)
{
lean_object* v___x_4129_; 
v___x_4129_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__1));
return v___x_4129_;
}
else
{
lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; uint8_t v___x_4138_; lean_object* v___x_4139_; 
v___x_4130_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__3));
v___x_4131_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0_spec__0(v_a_4128_, v___x_4130_);
v___x_4132_ = lean_obj_once(&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__6, &lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__6_once, _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__6);
v___x_4133_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__7));
v___x_4134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4133_);
lean_ctor_set(v___x_4134_, 1, v___x_4131_);
v___x_4135_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg___closed__8));
v___x_4136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4134_);
lean_ctor_set(v___x_4136_, 1, v___x_4135_);
v___x_4137_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4132_);
lean_ctor_set(v___x_4137_, 1, v___x_4136_);
v___x_4138_ = 0;
v___x_4139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4139_, 0, v___x_4137_);
lean_ctor_set_uint8(v___x_4139_, sizeof(void*)*1, v___x_4138_);
return v___x_4139_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr(lean_object* v_x_4161_, lean_object* v_prec_4162_){
_start:
{
lean_object* v___y_4164_; lean_object* v___y_4171_; lean_object* v___y_4178_; lean_object* v___y_4185_; lean_object* v___y_4192_; 
switch(lean_obj_tag(v_x_4161_))
{
case 0:
{
lean_object* v_items_4198_; lean_object* v___y_4200_; lean_object* v___x_4208_; uint8_t v___x_4209_; 
v_items_4198_ = lean_ctor_get(v_x_4161_, 0);
lean_inc(v_items_4198_);
lean_dec_ref_known(v_x_4161_, 1);
v___x_4208_ = lean_unsigned_to_nat(1024u);
v___x_4209_ = lean_nat_dec_le(v___x_4208_, v_prec_4162_);
if (v___x_4209_ == 0)
{
lean_object* v___x_4210_; 
v___x_4210_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4200_ = v___x_4210_;
goto v___jp_4199_;
}
else
{
lean_object* v___x_4211_; 
v___x_4211_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4200_ = v___x_4211_;
goto v___jp_4199_;
}
v___jp_4199_:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; uint8_t v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; 
v___x_4201_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__12));
v___x_4202_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg(v_items_4198_);
v___x_4203_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4203_, 0, v___x_4201_);
lean_ctor_set(v___x_4203_, 1, v___x_4202_);
lean_inc(v___y_4200_);
v___x_4204_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4204_, 0, v___y_4200_);
lean_ctor_set(v___x_4204_, 1, v___x_4203_);
v___x_4205_ = 0;
v___x_4206_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4206_, 0, v___x_4204_);
lean_ctor_set_uint8(v___x_4206_, sizeof(void*)*1, v___x_4205_);
v___x_4207_ = l_Repr_addAppParen(v___x_4206_, v_prec_4162_);
return v___x_4207_;
}
}
case 1:
{
lean_object* v___x_4212_; uint8_t v___x_4213_; 
v___x_4212_ = lean_unsigned_to_nat(1024u);
v___x_4213_ = lean_nat_dec_le(v___x_4212_, v_prec_4162_);
if (v___x_4213_ == 0)
{
lean_object* v___x_4214_; 
v___x_4214_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4164_ = v___x_4214_;
goto v___jp_4163_;
}
else
{
lean_object* v___x_4215_; 
v___x_4215_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4164_ = v___x_4215_;
goto v___jp_4163_;
}
}
case 2:
{
lean_object* v___x_4216_; uint8_t v___x_4217_; 
v___x_4216_ = lean_unsigned_to_nat(1024u);
v___x_4217_ = lean_nat_dec_le(v___x_4216_, v_prec_4162_);
if (v___x_4217_ == 0)
{
lean_object* v___x_4218_; 
v___x_4218_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4171_ = v___x_4218_;
goto v___jp_4170_;
}
else
{
lean_object* v___x_4219_; 
v___x_4219_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4171_ = v___x_4219_;
goto v___jp_4170_;
}
}
case 3:
{
lean_object* v___x_4220_; uint8_t v___x_4221_; 
v___x_4220_ = lean_unsigned_to_nat(1024u);
v___x_4221_ = lean_nat_dec_le(v___x_4220_, v_prec_4162_);
if (v___x_4221_ == 0)
{
lean_object* v___x_4222_; 
v___x_4222_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4178_ = v___x_4222_;
goto v___jp_4177_;
}
else
{
lean_object* v___x_4223_; 
v___x_4223_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4178_ = v___x_4223_;
goto v___jp_4177_;
}
}
case 4:
{
lean_object* v___x_4224_; uint8_t v___x_4225_; 
v___x_4224_ = lean_unsigned_to_nat(1024u);
v___x_4225_ = lean_nat_dec_le(v___x_4224_, v_prec_4162_);
if (v___x_4225_ == 0)
{
lean_object* v___x_4226_; 
v___x_4226_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4185_ = v___x_4226_;
goto v___jp_4184_;
}
else
{
lean_object* v___x_4227_; 
v___x_4227_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4185_ = v___x_4227_;
goto v___jp_4184_;
}
}
default: 
{
lean_object* v___x_4228_; uint8_t v___x_4229_; 
v___x_4228_ = lean_unsigned_to_nat(1024u);
v___x_4229_ = lean_nat_dec_le(v___x_4228_, v_prec_4162_);
if (v___x_4229_ == 0)
{
lean_object* v___x_4230_; 
v___x_4230_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4192_ = v___x_4230_;
goto v___jp_4191_;
}
else
{
lean_object* v___x_4231_; 
v___x_4231_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4192_ = v___x_4231_;
goto v___jp_4191_;
}
}
}
v___jp_4163_:
{
lean_object* v___x_4165_; lean_object* v___x_4166_; uint8_t v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4165_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__1));
lean_inc(v___y_4164_);
v___x_4166_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4166_, 0, v___y_4164_);
lean_ctor_set(v___x_4166_, 1, v___x_4165_);
v___x_4167_ = 0;
v___x_4168_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4168_, 0, v___x_4166_);
lean_ctor_set_uint8(v___x_4168_, sizeof(void*)*1, v___x_4167_);
v___x_4169_ = l_Repr_addAppParen(v___x_4168_, v_prec_4162_);
return v___x_4169_;
}
v___jp_4170_:
{
lean_object* v___x_4172_; lean_object* v___x_4173_; uint8_t v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v___x_4172_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__3));
lean_inc(v___y_4171_);
v___x_4173_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4173_, 0, v___y_4171_);
lean_ctor_set(v___x_4173_, 1, v___x_4172_);
v___x_4174_ = 0;
v___x_4175_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4175_, 0, v___x_4173_);
lean_ctor_set_uint8(v___x_4175_, sizeof(void*)*1, v___x_4174_);
v___x_4176_ = l_Repr_addAppParen(v___x_4175_, v_prec_4162_);
return v___x_4176_;
}
v___jp_4177_:
{
lean_object* v___x_4179_; lean_object* v___x_4180_; uint8_t v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; 
v___x_4179_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__5));
lean_inc(v___y_4178_);
v___x_4180_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4180_, 0, v___y_4178_);
lean_ctor_set(v___x_4180_, 1, v___x_4179_);
v___x_4181_ = 0;
v___x_4182_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4182_, 0, v___x_4180_);
lean_ctor_set_uint8(v___x_4182_, sizeof(void*)*1, v___x_4181_);
v___x_4183_ = l_Repr_addAppParen(v___x_4182_, v_prec_4162_);
return v___x_4183_;
}
v___jp_4184_:
{
lean_object* v___x_4186_; lean_object* v___x_4187_; uint8_t v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
v___x_4186_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__7));
lean_inc(v___y_4185_);
v___x_4187_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4187_, 0, v___y_4185_);
lean_ctor_set(v___x_4187_, 1, v___x_4186_);
v___x_4188_ = 0;
v___x_4189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4189_, 0, v___x_4187_);
lean_ctor_set_uint8(v___x_4189_, sizeof(void*)*1, v___x_4188_);
v___x_4190_ = l_Repr_addAppParen(v___x_4189_, v_prec_4162_);
return v___x_4190_;
}
v___jp_4191_:
{
lean_object* v___x_4193_; lean_object* v___x_4194_; uint8_t v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; 
v___x_4193_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___closed__9));
lean_inc(v___y_4192_);
v___x_4194_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___y_4192_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
v___x_4195_ = 0;
v___x_4196_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4196_, 0, v___x_4194_);
lean_ctor_set_uint8(v___x_4196_, sizeof(void*)*1, v___x_4195_);
v___x_4197_ = l_Repr_addAppParen(v___x_4196_, v_prec_4162_);
return v___x_4197_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprTvRender_repr___boxed(lean_object* v_x_4232_, lean_object* v_prec_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = lp_lean_x2dftml_LeanFtml_instReprTvRender_repr(v_x_4232_, v_prec_4233_);
lean_dec(v_prec_4233_);
return v_res_4234_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0(lean_object* v_a_4235_, lean_object* v_n_4236_){
_start:
{
lean_object* v___x_4237_; 
v___x_4237_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___redArg(v_a_4235_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0___boxed(lean_object* v_a_4238_, lean_object* v_n_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprTvRender_repr_spec__0(v_a_4238_, v_n_4239_);
lean_dec(v_n_4239_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorIdx___impl(lean_object* v_x_4243_){
_start:
{
lean_object* v___x_4244_; 
v___x_4244_ = lean_obj_tag_nat(v_x_4243_);
return v___x_4244_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorIdx___impl___boxed(lean_object* v_x_4245_){
_start:
{
lean_object* v_res_4246_; 
v_res_4246_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorIdx___impl(v_x_4245_);
lean_dec(v_x_4245_);
return v_res_4246_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(lean_object* v_t_4247_, lean_object* v_k_4248_){
_start:
{
switch(lean_obj_tag(v_t_4247_))
{
case 0:
{
lean_object* v_s_4249_; lean_object* v___x_4250_; 
v_s_4249_ = lean_ctor_get(v_t_4247_, 0);
lean_inc(v_s_4249_);
lean_dec_ref_known(v_t_4247_, 1);
v___x_4250_ = lean_apply_1(v_k_4248_, v_s_4249_);
return v___x_4250_;
}
case 2:
{
lean_object* v_s_4251_; lean_object* v___x_4252_; 
v_s_4251_ = lean_ctor_get(v_t_4247_, 0);
lean_inc_ref(v_s_4251_);
lean_dec_ref_known(v_t_4247_, 1);
v___x_4252_ = lean_apply_1(v_k_4248_, v_s_4251_);
return v___x_4252_;
}
case 4:
{
return v_k_4248_;
}
case 5:
{
lean_object* v_s_4253_; lean_object* v___x_4254_; 
v_s_4253_ = lean_ctor_get(v_t_4247_, 0);
lean_inc_ref(v_s_4253_);
lean_dec_ref_known(v_t_4247_, 1);
v___x_4254_ = lean_apply_1(v_k_4248_, v_s_4253_);
return v___x_4254_;
}
case 6:
{
lean_object* v_s_4255_; lean_object* v___x_4256_; 
v_s_4255_ = lean_ctor_get(v_t_4247_, 0);
lean_inc_ref(v_s_4255_);
lean_dec_ref_known(v_t_4247_, 1);
v___x_4256_ = lean_apply_1(v_k_4248_, v_s_4255_);
return v___x_4256_;
}
case 8:
{
lean_object* v_s_4257_; lean_object* v___x_4258_; 
v_s_4257_ = lean_ctor_get(v_t_4247_, 0);
lean_inc(v_s_4257_);
lean_dec_ref_known(v_t_4247_, 1);
v___x_4258_ = lean_apply_1(v_k_4248_, v_s_4257_);
return v___x_4258_;
}
default: 
{
uint8_t v_s_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; 
v_s_4259_ = lean_ctor_get_uint8(v_t_4247_, 0);
lean_dec(v_t_4247_);
v___x_4260_ = lean_box(v_s_4259_);
v___x_4261_ = lean_apply_1(v_k_4248_, v___x_4260_);
return v___x_4261_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim(lean_object* v_motive_4262_, lean_object* v_ctorIdx_4263_, lean_object* v_t_4264_, lean_object* v_h_4265_, lean_object* v_k_4266_){
_start:
{
lean_object* v___x_4267_; 
v___x_4267_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4264_, v_k_4266_);
return v___x_4267_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___boxed(lean_object* v_motive_4268_, lean_object* v_ctorIdx_4269_, lean_object* v_t_4270_, lean_object* v_h_4271_, lean_object* v_k_4272_){
_start:
{
lean_object* v_res_4273_; 
v_res_4273_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim(v_motive_4268_, v_ctorIdx_4269_, v_t_4270_, v_h_4271_, v_k_4272_);
lean_dec(v_ctorIdx_4269_);
return v_res_4273_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_bqRun_elim___redArg(lean_object* v_t_4274_, lean_object* v_bqRun_4275_){
_start:
{
lean_object* v___x_4276_; 
v___x_4276_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4274_, v_bqRun_4275_);
return v___x_4276_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_bqRun_elim(lean_object* v_motive_4277_, lean_object* v_t_4278_, lean_object* v_h_4279_, lean_object* v_bqRun_4280_){
_start:
{
lean_object* v___x_4281_; 
v___x_4281_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4278_, v_bqRun_4280_);
return v___x_4281_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_bqRender_elim___redArg(lean_object* v_t_4282_, lean_object* v_bqRender_4283_){
_start:
{
lean_object* v___x_4284_; 
v___x_4284_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4282_, v_bqRender_4283_);
return v___x_4284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_bqRender_elim(lean_object* v_motive_4285_, lean_object* v_t_4286_, lean_object* v_h_4287_, lean_object* v_bqRender_4288_){
_start:
{
lean_object* v___x_4289_; 
v___x_4289_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4286_, v_bqRender_4288_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_divParse_elim___redArg(lean_object* v_t_4290_, lean_object* v_divParse_4291_){
_start:
{
lean_object* v___x_4292_; 
v___x_4292_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4290_, v_divParse_4291_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_divParse_elim(lean_object* v_motive_4293_, lean_object* v_t_4294_, lean_object* v_h_4295_, lean_object* v_divParse_4296_){
_start:
{
lean_object* v___x_4297_; 
v___x_4297_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4294_, v_divParse_4296_);
return v___x_4297_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_divRender_elim___redArg(lean_object* v_t_4298_, lean_object* v_divRender_4299_){
_start:
{
lean_object* v___x_4300_; 
v___x_4300_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4298_, v_divRender_4299_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_divRender_elim(lean_object* v_motive_4301_, lean_object* v_t_4302_, lean_object* v_h_4303_, lean_object* v_divRender_4304_){
_start:
{
lean_object* v___x_4305_; 
v___x_4305_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4302_, v_divRender_4304_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_coParse_elim___redArg(lean_object* v_t_4306_, lean_object* v_coParse_4307_){
_start:
{
lean_object* v___x_4308_; 
v___x_4308_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4306_, v_coParse_4307_);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_coParse_elim(lean_object* v_motive_4309_, lean_object* v_t_4310_, lean_object* v_h_4311_, lean_object* v_coParse_4312_){
_start:
{
lean_object* v___x_4313_; 
v___x_4313_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4310_, v_coParse_4312_);
return v___x_4313_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_coRender_elim___redArg(lean_object* v_t_4314_, lean_object* v_coRender_4315_){
_start:
{
lean_object* v___x_4316_; 
v___x_4316_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4314_, v_coRender_4315_);
return v___x_4316_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_coRender_elim(lean_object* v_motive_4317_, lean_object* v_t_4318_, lean_object* v_h_4319_, lean_object* v_coRender_4320_){
_start:
{
lean_object* v___x_4321_; 
v___x_4321_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4318_, v_coRender_4320_);
return v___x_4321_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvParseTab_elim___redArg(lean_object* v_t_4322_, lean_object* v_tvParseTab_4323_){
_start:
{
lean_object* v___x_4324_; 
v___x_4324_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4322_, v_tvParseTab_4323_);
return v___x_4324_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvParseTab_elim(lean_object* v_motive_4325_, lean_object* v_t_4326_, lean_object* v_h_4327_, lean_object* v_tvParseTab_4328_){
_start:
{
lean_object* v___x_4329_; 
v___x_4329_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4326_, v_tvParseTab_4328_);
return v___x_4329_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvView_elim___redArg(lean_object* v_t_4330_, lean_object* v_tvView_4331_){
_start:
{
lean_object* v___x_4332_; 
v___x_4332_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4330_, v_tvView_4331_);
return v___x_4332_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvView_elim(lean_object* v_motive_4333_, lean_object* v_t_4334_, lean_object* v_h_4335_, lean_object* v_tvView_4336_){
_start:
{
lean_object* v___x_4337_; 
v___x_4337_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4334_, v_tvView_4336_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvRender_elim___redArg(lean_object* v_t_4338_, lean_object* v_tvRender_4339_){
_start:
{
lean_object* v___x_4340_; 
v___x_4340_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4338_, v_tvRender_4339_);
return v___x_4340_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ContainShape_tvRender_elim(lean_object* v_motive_4341_, lean_object* v_t_4342_, lean_object* v_h_4343_, lean_object* v_tvRender_4344_){
_start:
{
lean_object* v___x_4345_; 
v___x_4345_ = lp_lean_x2dftml_LeanFtml_ContainShape_ctorElim___redArg(v_t_4342_, v_tvRender_4344_);
return v___x_4345_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape_decEq(lean_object* v_x_4346_, lean_object* v_x_4347_){
_start:
{
switch(lean_obj_tag(v_x_4346_))
{
case 0:
{
if (lean_obj_tag(v_x_4347_) == 0)
{
lean_object* v_s_4348_; lean_object* v_s_4349_; uint8_t v___x_4350_; 
v_s_4348_ = lean_ctor_get(v_x_4346_, 0);
lean_inc(v_s_4348_);
lean_dec_ref_known(v_x_4346_, 1);
v_s_4349_ = lean_ctor_get(v_x_4347_, 0);
lean_inc(v_s_4349_);
lean_dec_ref_known(v_x_4347_, 1);
v___x_4350_ = lp_lean_x2dftml_LeanFtml_instDecidableEqBqRun_decEq(v_s_4348_, v_s_4349_);
lean_dec(v_s_4349_);
lean_dec(v_s_4348_);
return v___x_4350_;
}
else
{
uint8_t v___x_4351_; 
lean_dec_ref_known(v_x_4346_, 1);
lean_dec(v_x_4347_);
v___x_4351_ = 0;
return v___x_4351_;
}
}
case 1:
{
if (lean_obj_tag(v_x_4347_) == 1)
{
uint8_t v_s_4352_; uint8_t v_s_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; uint8_t v___x_4358_; 
v_s_4352_ = lean_ctor_get_uint8(v_x_4346_, 0);
lean_dec_ref_known(v_x_4346_, 0);
v_s_4353_ = lean_ctor_get_uint8(v_x_4347_, 0);
lean_dec_ref_known(v_x_4347_, 0);
v___x_4354_ = lean_box(v_s_4352_);
v___x_4355_ = lean_obj_tag_nat(v___x_4354_);
lean_dec(v___x_4354_);
v___x_4356_ = lean_box(v_s_4353_);
v___x_4357_ = lean_obj_tag_nat(v___x_4356_);
lean_dec(v___x_4356_);
v___x_4358_ = lean_nat_dec_eq(v___x_4355_, v___x_4357_);
return v___x_4358_;
}
else
{
uint8_t v___x_4359_; 
lean_dec_ref_known(v_x_4346_, 0);
lean_dec(v_x_4347_);
v___x_4359_ = 0;
return v___x_4359_;
}
}
case 2:
{
if (lean_obj_tag(v_x_4347_) == 2)
{
lean_object* v_s_4360_; lean_object* v_s_4361_; uint8_t v___x_4362_; 
v_s_4360_ = lean_ctor_get(v_x_4346_, 0);
lean_inc_ref(v_s_4360_);
lean_dec_ref_known(v_x_4346_, 1);
v_s_4361_ = lean_ctor_get(v_x_4347_, 0);
lean_inc_ref(v_s_4361_);
lean_dec_ref_known(v_x_4347_, 1);
v___x_4362_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDivParseShape_decEq(v_s_4360_, v_s_4361_);
lean_dec_ref(v_s_4361_);
lean_dec_ref(v_s_4360_);
return v___x_4362_;
}
else
{
uint8_t v___x_4363_; 
lean_dec_ref_known(v_x_4346_, 1);
lean_dec(v_x_4347_);
v___x_4363_ = 0;
return v___x_4363_;
}
}
case 3:
{
if (lean_obj_tag(v_x_4347_) == 3)
{
uint8_t v_s_4364_; uint8_t v_s_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; uint8_t v___x_4370_; 
v_s_4364_ = lean_ctor_get_uint8(v_x_4346_, 0);
lean_dec_ref_known(v_x_4346_, 0);
v_s_4365_ = lean_ctor_get_uint8(v_x_4347_, 0);
lean_dec_ref_known(v_x_4347_, 0);
v___x_4366_ = lean_box(v_s_4364_);
v___x_4367_ = lean_obj_tag_nat(v___x_4366_);
lean_dec(v___x_4366_);
v___x_4368_ = lean_box(v_s_4365_);
v___x_4369_ = lean_obj_tag_nat(v___x_4368_);
lean_dec(v___x_4368_);
v___x_4370_ = lean_nat_dec_eq(v___x_4367_, v___x_4369_);
return v___x_4370_;
}
else
{
uint8_t v___x_4371_; 
lean_dec_ref_known(v_x_4346_, 0);
lean_dec(v_x_4347_);
v___x_4371_ = 0;
return v___x_4371_;
}
}
case 4:
{
if (lean_obj_tag(v_x_4347_) == 4)
{
uint8_t v___x_4372_; 
v___x_4372_ = 1;
return v___x_4372_;
}
else
{
uint8_t v___x_4373_; 
lean_dec(v_x_4347_);
v___x_4373_ = 0;
return v___x_4373_;
}
}
case 5:
{
if (lean_obj_tag(v_x_4347_) == 5)
{
lean_object* v_s_4374_; lean_object* v_s_4375_; uint8_t v___x_4376_; 
v_s_4374_ = lean_ctor_get(v_x_4346_, 0);
lean_inc_ref(v_s_4374_);
lean_dec_ref_known(v_x_4346_, 1);
v_s_4375_ = lean_ctor_get(v_x_4347_, 0);
lean_inc_ref(v_s_4375_);
lean_dec_ref_known(v_x_4347_, 1);
v___x_4376_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCoRenderShape_decEq(v_s_4374_, v_s_4375_);
lean_dec_ref(v_s_4375_);
lean_dec_ref(v_s_4374_);
return v___x_4376_;
}
else
{
uint8_t v___x_4377_; 
lean_dec_ref_known(v_x_4346_, 1);
lean_dec(v_x_4347_);
v___x_4377_ = 0;
return v___x_4377_;
}
}
case 6:
{
if (lean_obj_tag(v_x_4347_) == 6)
{
lean_object* v_s_4378_; lean_object* v_s_4379_; uint8_t v___x_4380_; 
v_s_4378_ = lean_ctor_get(v_x_4346_, 0);
lean_inc_ref(v_s_4378_);
lean_dec_ref_known(v_x_4346_, 1);
v_s_4379_ = lean_ctor_get(v_x_4347_, 0);
lean_inc_ref(v_s_4379_);
lean_dec_ref_known(v_x_4347_, 1);
v___x_4380_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvParseTab_decEq(v_s_4378_, v_s_4379_);
lean_dec_ref(v_s_4379_);
lean_dec_ref(v_s_4378_);
return v___x_4380_;
}
else
{
uint8_t v___x_4381_; 
lean_dec_ref_known(v_x_4346_, 1);
lean_dec(v_x_4347_);
v___x_4381_ = 0;
return v___x_4381_;
}
}
case 7:
{
if (lean_obj_tag(v_x_4347_) == 7)
{
uint8_t v_s_4382_; uint8_t v_s_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; uint8_t v___x_4388_; 
v_s_4382_ = lean_ctor_get_uint8(v_x_4346_, 0);
lean_dec_ref_known(v_x_4346_, 0);
v_s_4383_ = lean_ctor_get_uint8(v_x_4347_, 0);
lean_dec_ref_known(v_x_4347_, 0);
v___x_4384_ = lean_box(v_s_4382_);
v___x_4385_ = lean_obj_tag_nat(v___x_4384_);
lean_dec(v___x_4384_);
v___x_4386_ = lean_box(v_s_4383_);
v___x_4387_ = lean_obj_tag_nat(v___x_4386_);
lean_dec(v___x_4386_);
v___x_4388_ = lean_nat_dec_eq(v___x_4385_, v___x_4387_);
return v___x_4388_;
}
else
{
uint8_t v___x_4389_; 
lean_dec_ref_known(v_x_4346_, 0);
lean_dec(v_x_4347_);
v___x_4389_ = 0;
return v___x_4389_;
}
}
default: 
{
if (lean_obj_tag(v_x_4347_) == 8)
{
lean_object* v_s_4390_; lean_object* v_s_4391_; uint8_t v___x_4392_; 
v_s_4390_ = lean_ctor_get(v_x_4346_, 0);
lean_inc(v_s_4390_);
lean_dec_ref_known(v_x_4346_, 1);
v_s_4391_ = lean_ctor_get(v_x_4347_, 0);
lean_inc(v_s_4391_);
lean_dec_ref_known(v_x_4347_, 1);
v___x_4392_ = lp_lean_x2dftml_LeanFtml_instDecidableEqTvRender_decEq(v_s_4390_, v_s_4391_);
return v___x_4392_;
}
else
{
uint8_t v___x_4393_; 
lean_dec_ref_known(v_x_4346_, 1);
lean_dec(v_x_4347_);
v___x_4393_ = 0;
return v___x_4393_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape_decEq___boxed(lean_object* v_x_4394_, lean_object* v_x_4395_){
_start:
{
uint8_t v_res_4396_; lean_object* v_r_4397_; 
v_res_4396_ = lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape_decEq(v_x_4394_, v_x_4395_);
v_r_4397_ = lean_box(v_res_4396_);
return v_r_4397_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape(lean_object* v_x_4398_, lean_object* v_x_4399_){
_start:
{
uint8_t v___x_4400_; 
v___x_4400_ = lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape_decEq(v_x_4398_, v_x_4399_);
return v___x_4400_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape___boxed(lean_object* v_x_4401_, lean_object* v_x_4402_){
_start:
{
uint8_t v_res_4403_; lean_object* v_r_4404_; 
v_res_4403_ = lp_lean_x2dftml_LeanFtml_instDecidableEqContainShape(v_x_4401_, v_x_4402_);
v_r_4404_ = lean_box(v_res_4403_);
return v_r_4404_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr(lean_object* v_x_4456_, lean_object* v_prec_4457_){
_start:
{
lean_object* v___y_4459_; 
switch(lean_obj_tag(v_x_4456_))
{
case 0:
{
lean_object* v_s_4465_; lean_object* v___y_4467_; lean_object* v___x_4476_; uint8_t v___x_4477_; 
v_s_4465_ = lean_ctor_get(v_x_4456_, 0);
lean_inc(v_s_4465_);
lean_dec_ref_known(v_x_4456_, 1);
v___x_4476_ = lean_unsigned_to_nat(1024u);
v___x_4477_ = lean_nat_dec_le(v___x_4476_, v_prec_4457_);
if (v___x_4477_ == 0)
{
lean_object* v___x_4478_; 
v___x_4478_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4467_ = v___x_4478_;
goto v___jp_4466_;
}
else
{
lean_object* v___x_4479_; 
v___x_4479_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4467_ = v___x_4479_;
goto v___jp_4466_;
}
v___jp_4466_:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; uint8_t v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; 
v___x_4468_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__4));
v___x_4469_ = lean_unsigned_to_nat(1024u);
v___x_4470_ = lp_lean_x2dftml_LeanFtml_instReprBqRun_repr(v_s_4465_, v___x_4469_);
lean_dec(v_s_4465_);
v___x_4471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4471_, 0, v___x_4468_);
lean_ctor_set(v___x_4471_, 1, v___x_4470_);
lean_inc(v___y_4467_);
v___x_4472_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4472_, 0, v___y_4467_);
lean_ctor_set(v___x_4472_, 1, v___x_4471_);
v___x_4473_ = 0;
v___x_4474_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4474_, 0, v___x_4472_);
lean_ctor_set_uint8(v___x_4474_, sizeof(void*)*1, v___x_4473_);
v___x_4475_ = l_Repr_addAppParen(v___x_4474_, v_prec_4457_);
return v___x_4475_;
}
}
case 1:
{
uint8_t v_s_4480_; lean_object* v___y_4482_; lean_object* v___x_4491_; uint8_t v___x_4492_; 
v_s_4480_ = lean_ctor_get_uint8(v_x_4456_, 0);
lean_dec_ref_known(v_x_4456_, 0);
v___x_4491_ = lean_unsigned_to_nat(1024u);
v___x_4492_ = lean_nat_dec_le(v___x_4491_, v_prec_4457_);
if (v___x_4492_ == 0)
{
lean_object* v___x_4493_; 
v___x_4493_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4482_ = v___x_4493_;
goto v___jp_4481_;
}
else
{
lean_object* v___x_4494_; 
v___x_4494_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4482_ = v___x_4494_;
goto v___jp_4481_;
}
v___jp_4481_:
{
lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; uint8_t v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; 
v___x_4483_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__7));
v___x_4484_ = lean_unsigned_to_nat(1024u);
v___x_4485_ = lp_lean_x2dftml_LeanFtml_instReprBqRender_repr(v_s_4480_, v___x_4484_);
v___x_4486_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4483_);
lean_ctor_set(v___x_4486_, 1, v___x_4485_);
lean_inc(v___y_4482_);
v___x_4487_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4487_, 0, v___y_4482_);
lean_ctor_set(v___x_4487_, 1, v___x_4486_);
v___x_4488_ = 0;
v___x_4489_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4489_, 0, v___x_4487_);
lean_ctor_set_uint8(v___x_4489_, sizeof(void*)*1, v___x_4488_);
v___x_4490_ = l_Repr_addAppParen(v___x_4489_, v_prec_4457_);
return v___x_4490_;
}
}
case 2:
{
lean_object* v_s_4495_; lean_object* v___y_4497_; lean_object* v___x_4505_; uint8_t v___x_4506_; 
v_s_4495_ = lean_ctor_get(v_x_4456_, 0);
lean_inc_ref(v_s_4495_);
lean_dec_ref_known(v_x_4456_, 1);
v___x_4505_ = lean_unsigned_to_nat(1024u);
v___x_4506_ = lean_nat_dec_le(v___x_4505_, v_prec_4457_);
if (v___x_4506_ == 0)
{
lean_object* v___x_4507_; 
v___x_4507_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4497_ = v___x_4507_;
goto v___jp_4496_;
}
else
{
lean_object* v___x_4508_; 
v___x_4508_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4497_ = v___x_4508_;
goto v___jp_4496_;
}
v___jp_4496_:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; uint8_t v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v___x_4498_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__10));
v___x_4499_ = lp_lean_x2dftml_LeanFtml_instReprDivParseShape_repr___redArg(v_s_4495_);
lean_dec_ref(v_s_4495_);
v___x_4500_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4500_, 0, v___x_4498_);
lean_ctor_set(v___x_4500_, 1, v___x_4499_);
lean_inc(v___y_4497_);
v___x_4501_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4501_, 0, v___y_4497_);
lean_ctor_set(v___x_4501_, 1, v___x_4500_);
v___x_4502_ = 0;
v___x_4503_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4503_, 0, v___x_4501_);
lean_ctor_set_uint8(v___x_4503_, sizeof(void*)*1, v___x_4502_);
v___x_4504_ = l_Repr_addAppParen(v___x_4503_, v_prec_4457_);
return v___x_4504_;
}
}
case 3:
{
uint8_t v_s_4509_; lean_object* v___y_4511_; lean_object* v___x_4520_; uint8_t v___x_4521_; 
v_s_4509_ = lean_ctor_get_uint8(v_x_4456_, 0);
lean_dec_ref_known(v_x_4456_, 0);
v___x_4520_ = lean_unsigned_to_nat(1024u);
v___x_4521_ = lean_nat_dec_le(v___x_4520_, v_prec_4457_);
if (v___x_4521_ == 0)
{
lean_object* v___x_4522_; 
v___x_4522_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4511_ = v___x_4522_;
goto v___jp_4510_;
}
else
{
lean_object* v___x_4523_; 
v___x_4523_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4511_ = v___x_4523_;
goto v___jp_4510_;
}
v___jp_4510_:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; uint8_t v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4512_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__13));
v___x_4513_ = lean_unsigned_to_nat(1024u);
v___x_4514_ = lp_lean_x2dftml_LeanFtml_instReprDivRenderKind_repr(v_s_4509_, v___x_4513_);
v___x_4515_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4512_);
lean_ctor_set(v___x_4515_, 1, v___x_4514_);
lean_inc(v___y_4511_);
v___x_4516_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4516_, 0, v___y_4511_);
lean_ctor_set(v___x_4516_, 1, v___x_4515_);
v___x_4517_ = 0;
v___x_4518_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4518_, 0, v___x_4516_);
lean_ctor_set_uint8(v___x_4518_, sizeof(void*)*1, v___x_4517_);
v___x_4519_ = l_Repr_addAppParen(v___x_4518_, v_prec_4457_);
return v___x_4519_;
}
}
case 4:
{
lean_object* v___x_4524_; uint8_t v___x_4525_; 
v___x_4524_ = lean_unsigned_to_nat(1024u);
v___x_4525_ = lean_nat_dec_le(v___x_4524_, v_prec_4457_);
if (v___x_4525_ == 0)
{
lean_object* v___x_4526_; 
v___x_4526_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4459_ = v___x_4526_;
goto v___jp_4458_;
}
else
{
lean_object* v___x_4527_; 
v___x_4527_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4459_ = v___x_4527_;
goto v___jp_4458_;
}
}
case 5:
{
lean_object* v_s_4528_; lean_object* v___y_4530_; lean_object* v___x_4538_; uint8_t v___x_4539_; 
v_s_4528_ = lean_ctor_get(v_x_4456_, 0);
lean_inc_ref(v_s_4528_);
lean_dec_ref_known(v_x_4456_, 1);
v___x_4538_ = lean_unsigned_to_nat(1024u);
v___x_4539_ = lean_nat_dec_le(v___x_4538_, v_prec_4457_);
if (v___x_4539_ == 0)
{
lean_object* v___x_4540_; 
v___x_4540_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4530_ = v___x_4540_;
goto v___jp_4529_;
}
else
{
lean_object* v___x_4541_; 
v___x_4541_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4530_ = v___x_4541_;
goto v___jp_4529_;
}
v___jp_4529_:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; uint8_t v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4531_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__16));
v___x_4532_ = lp_lean_x2dftml_LeanFtml_instReprCoRenderShape_repr___redArg(v_s_4528_);
lean_dec_ref(v_s_4528_);
v___x_4533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4533_, 0, v___x_4531_);
lean_ctor_set(v___x_4533_, 1, v___x_4532_);
lean_inc(v___y_4530_);
v___x_4534_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4534_, 0, v___y_4530_);
lean_ctor_set(v___x_4534_, 1, v___x_4533_);
v___x_4535_ = 0;
v___x_4536_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4536_, 0, v___x_4534_);
lean_ctor_set_uint8(v___x_4536_, sizeof(void*)*1, v___x_4535_);
v___x_4537_ = l_Repr_addAppParen(v___x_4536_, v_prec_4457_);
return v___x_4537_;
}
}
case 6:
{
lean_object* v_s_4542_; lean_object* v___y_4544_; lean_object* v___x_4552_; uint8_t v___x_4553_; 
v_s_4542_ = lean_ctor_get(v_x_4456_, 0);
lean_inc_ref(v_s_4542_);
lean_dec_ref_known(v_x_4456_, 1);
v___x_4552_ = lean_unsigned_to_nat(1024u);
v___x_4553_ = lean_nat_dec_le(v___x_4552_, v_prec_4457_);
if (v___x_4553_ == 0)
{
lean_object* v___x_4554_; 
v___x_4554_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4544_ = v___x_4554_;
goto v___jp_4543_;
}
else
{
lean_object* v___x_4555_; 
v___x_4555_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4544_ = v___x_4555_;
goto v___jp_4543_;
}
v___jp_4543_:
{
lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; uint8_t v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; 
v___x_4545_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__19));
v___x_4546_ = lp_lean_x2dftml_LeanFtml_instReprTvParseTab_repr___redArg(v_s_4542_);
lean_dec_ref(v_s_4542_);
v___x_4547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4547_, 0, v___x_4545_);
lean_ctor_set(v___x_4547_, 1, v___x_4546_);
lean_inc(v___y_4544_);
v___x_4548_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___y_4544_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
v___x_4549_ = 0;
v___x_4550_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4550_, 0, v___x_4548_);
lean_ctor_set_uint8(v___x_4550_, sizeof(void*)*1, v___x_4549_);
v___x_4551_ = l_Repr_addAppParen(v___x_4550_, v_prec_4457_);
return v___x_4551_;
}
}
case 7:
{
uint8_t v_s_4556_; lean_object* v___y_4558_; lean_object* v___x_4567_; uint8_t v___x_4568_; 
v_s_4556_ = lean_ctor_get_uint8(v_x_4456_, 0);
lean_dec_ref_known(v_x_4456_, 0);
v___x_4567_ = lean_unsigned_to_nat(1024u);
v___x_4568_ = lean_nat_dec_le(v___x_4567_, v_prec_4457_);
if (v___x_4568_ == 0)
{
lean_object* v___x_4569_; 
v___x_4569_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4558_ = v___x_4569_;
goto v___jp_4557_;
}
else
{
lean_object* v___x_4570_; 
v___x_4570_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4558_ = v___x_4570_;
goto v___jp_4557_;
}
v___jp_4557_:
{
lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; uint8_t v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; 
v___x_4559_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__22));
v___x_4560_ = lean_unsigned_to_nat(1024u);
v___x_4561_ = lp_lean_x2dftml_LeanFtml_instReprTvView_repr(v_s_4556_, v___x_4560_);
v___x_4562_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4559_);
lean_ctor_set(v___x_4562_, 1, v___x_4561_);
lean_inc(v___y_4558_);
v___x_4563_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4563_, 0, v___y_4558_);
lean_ctor_set(v___x_4563_, 1, v___x_4562_);
v___x_4564_ = 0;
v___x_4565_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4565_, 0, v___x_4563_);
lean_ctor_set_uint8(v___x_4565_, sizeof(void*)*1, v___x_4564_);
v___x_4566_ = l_Repr_addAppParen(v___x_4565_, v_prec_4457_);
return v___x_4566_;
}
}
default: 
{
lean_object* v_s_4571_; lean_object* v___y_4573_; lean_object* v___x_4582_; uint8_t v___x_4583_; 
v_s_4571_ = lean_ctor_get(v_x_4456_, 0);
lean_inc(v_s_4571_);
lean_dec_ref_known(v_x_4456_, 1);
v___x_4582_ = lean_unsigned_to_nat(1024u);
v___x_4583_ = lean_nat_dec_le(v___x_4582_, v_prec_4457_);
if (v___x_4583_ == 0)
{
lean_object* v___x_4584_; 
v___x_4584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__106);
v___y_4573_ = v___x_4584_;
goto v___jp_4572_;
}
else
{
lean_object* v___x_4585_; 
v___x_4585_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107, &lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_instReprContainClass_repr___closed__107);
v___y_4573_ = v___x_4585_;
goto v___jp_4572_;
}
v___jp_4572_:
{
lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; uint8_t v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; 
v___x_4574_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__25));
v___x_4575_ = lean_unsigned_to_nat(1024u);
v___x_4576_ = lp_lean_x2dftml_LeanFtml_instReprTvRender_repr(v_s_4571_, v___x_4575_);
v___x_4577_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4574_);
lean_ctor_set(v___x_4577_, 1, v___x_4576_);
lean_inc(v___y_4573_);
v___x_4578_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4578_, 0, v___y_4573_);
lean_ctor_set(v___x_4578_, 1, v___x_4577_);
v___x_4579_ = 0;
v___x_4580_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4580_, 0, v___x_4578_);
lean_ctor_set_uint8(v___x_4580_, sizeof(void*)*1, v___x_4579_);
v___x_4581_ = l_Repr_addAppParen(v___x_4580_, v_prec_4457_);
return v___x_4581_;
}
}
}
v___jp_4458_:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; uint8_t v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4460_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___closed__1));
lean_inc(v___y_4459_);
v___x_4461_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4461_, 0, v___y_4459_);
lean_ctor_set(v___x_4461_, 1, v___x_4460_);
v___x_4462_ = 0;
v___x_4463_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4463_, 0, v___x_4461_);
lean_ctor_set_uint8(v___x_4463_, sizeof(void*)*1, v___x_4462_);
v___x_4464_ = l_Repr_addAppParen(v___x_4463_, v_prec_4457_);
return v___x_4464_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprContainShape_repr___boxed(lean_object* v_x_4586_, lean_object* v_prec_4587_){
_start:
{
lean_object* v_res_4588_; 
v_res_4588_ = lp_lean_x2dftml_LeanFtml_instReprContainShape_repr(v_x_4586_, v_prec_4587_);
lean_dec(v_prec_4587_);
return v_res_4588_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches(lean_object* v_x_4615_){
_start:
{
if (lean_obj_tag(v_x_4615_) == 0)
{
lean_object* v___x_4616_; 
v___x_4616_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__0));
return v___x_4616_;
}
else
{
uint8_t v_dropped_4617_; uint8_t v_shallower_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___y_4622_; 
v_dropped_4617_ = lean_ctor_get_uint8(v_x_4615_, 0);
v_shallower_4618_ = lean_ctor_get_uint8(v_x_4615_, 1);
v___x_4619_ = lean_box(0);
v___x_4620_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__3));
if (v_dropped_4617_ == 0)
{
v___y_4622_ = v___x_4619_;
goto v___jp_4621_;
}
else
{
lean_object* v___x_4627_; 
v___x_4627_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__5));
v___y_4622_ = v___x_4627_;
goto v___jp_4621_;
}
v___jp_4621_:
{
lean_object* v___x_4623_; 
v___x_4623_ = l_List_appendTR___redArg(v___x_4620_, v___y_4622_);
if (v_shallower_4618_ == 0)
{
lean_object* v___x_4624_; 
v___x_4624_ = l_List_appendTR___redArg(v___x_4623_, v___x_4619_);
return v___x_4624_;
}
else
{
lean_object* v___x_4625_; lean_object* v___x_4626_; 
v___x_4625_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRunBranches___closed__4));
v___x_4626_ = l_List_appendTR___redArg(v___x_4623_, v___x_4625_);
return v___x_4626_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRunBranches___boxed(lean_object* v_x_4628_){
_start:
{
lean_object* v_res_4629_; 
v_res_4629_ = lp_lean_x2dftml_LeanFtml_bqRunBranches(v_x_4628_);
lean_dec(v_x_4628_);
return v_res_4629_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRenderBranches(uint8_t v_x_4642_){
_start:
{
switch(v_x_4642_)
{
case 0:
{
lean_object* v___x_4643_; 
v___x_4643_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__0));
return v___x_4643_;
}
case 1:
{
lean_object* v___x_4644_; 
v___x_4644_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__1));
return v___x_4644_;
}
default: 
{
lean_object* v___x_4645_; 
v___x_4645_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRenderBranches___closed__2));
return v___x_4645_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRenderBranches___boxed(lean_object* v_x_4646_){
_start:
{
uint8_t v_x_55__boxed_4647_; lean_object* v_res_4648_; 
v_x_55__boxed_4647_ = lean_unbox(v_x_4646_);
v_res_4648_ = lp_lean_x2dftml_LeanFtml_bqRenderBranches(v_x_55__boxed_4647_);
return v_res_4648_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBodyBranch(uint8_t v_x_4657_){
_start:
{
if (v_x_4657_ == 0)
{
lean_object* v___x_4658_; 
v___x_4658_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divBodyBranch___closed__0));
return v___x_4658_;
}
else
{
lean_object* v___x_4659_; 
v___x_4659_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divBodyBranch___closed__1));
return v___x_4659_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBodyBranch___boxed(lean_object* v_x_4660_){
_start:
{
uint8_t v_x_38__boxed_4661_; lean_object* v_res_4662_; 
v_x_38__boxed_4661_ = lean_unbox(v_x_4660_);
v_res_4662_ = lp_lean_x2dftml_LeanFtml_divBodyBranch(v_x_38__boxed_4661_);
return v_res_4662_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divHeadBranch(uint8_t v_x_4675_){
_start:
{
switch(v_x_4675_)
{
case 0:
{
lean_object* v___x_4676_; 
v___x_4676_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__0));
return v___x_4676_;
}
case 1:
{
lean_object* v___x_4677_; 
v___x_4677_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__1));
return v___x_4677_;
}
default: 
{
lean_object* v___x_4678_; 
v___x_4678_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divHeadBranch___closed__2));
return v___x_4678_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divHeadBranch___boxed(lean_object* v_x_4679_){
_start:
{
uint8_t v_x_55__boxed_4680_; lean_object* v_res_4681_; 
v_x_55__boxed_4680_ = lean_unbox(v_x_4679_);
v_res_4681_ = lp_lean_x2dftml_LeanFtml_divHeadBranch(v_x_55__boxed_4680_);
return v_res_4681_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divParseBranches(lean_object* v_s_4686_){
_start:
{
uint8_t v_body_4687_; uint8_t v_head_4688_; uint8_t v_unset_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; 
v_body_4687_ = lean_ctor_get_uint8(v_s_4686_, 0);
v_head_4688_ = lean_ctor_get_uint8(v_s_4686_, 1);
v_unset_4689_ = lean_ctor_get_uint8(v_s_4686_, 2);
v___x_4690_ = lp_lean_x2dftml_LeanFtml_divBodyBranch(v_body_4687_);
v___x_4691_ = lp_lean_x2dftml_LeanFtml_divHeadBranch(v_head_4688_);
v___x_4692_ = l_List_appendTR___redArg(v___x_4690_, v___x_4691_);
if (v_unset_4689_ == 0)
{
lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4693_ = lean_box(0);
v___x_4694_ = l_List_appendTR___redArg(v___x_4692_, v___x_4693_);
return v___x_4694_;
}
else
{
lean_object* v___x_4695_; lean_object* v___x_4696_; 
v___x_4695_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divParseBranches___closed__0));
v___x_4696_ = l_List_appendTR___redArg(v___x_4692_, v___x_4695_);
return v___x_4696_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divParseBranches___boxed(lean_object* v_s_4697_){
_start:
{
lean_object* v_res_4698_; 
v_res_4698_ = lp_lean_x2dftml_LeanFtml_divParseBranches(v_s_4697_);
lean_dec_ref(v_s_4697_);
return v_res_4698_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches(uint8_t v_x_4723_){
_start:
{
switch(v_x_4723_)
{
case 0:
{
lean_object* v___x_4724_; 
v___x_4724_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__0));
return v___x_4724_;
}
case 1:
{
lean_object* v___x_4725_; 
v___x_4725_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__1));
return v___x_4725_;
}
case 2:
{
lean_object* v___x_4726_; 
v___x_4726_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__2));
return v___x_4726_;
}
case 3:
{
lean_object* v___x_4727_; 
v___x_4727_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__3));
return v___x_4727_;
}
case 4:
{
lean_object* v___x_4728_; 
v___x_4728_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__4));
return v___x_4728_;
}
default: 
{
lean_object* v___x_4729_; 
v___x_4729_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRenderBranches___closed__5));
return v___x_4729_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRenderBranches___boxed(lean_object* v_x_4730_){
_start:
{
uint8_t v_x_106__boxed_4731_; lean_object* v_res_4732_; 
v_x_106__boxed_4731_ = lean_unbox(v_x_4730_);
v_res_4732_ = lp_lean_x2dftml_LeanFtml_divRenderBranches(v_x_106__boxed_4731_);
return v_res_4732_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coFoldBranch(uint8_t v_x_4741_){
_start:
{
if (v_x_4741_ == 0)
{
lean_object* v___x_4742_; 
v___x_4742_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coFoldBranch___closed__0));
return v___x_4742_;
}
else
{
lean_object* v___x_4743_; 
v___x_4743_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coFoldBranch___closed__1));
return v___x_4743_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coFoldBranch___boxed(lean_object* v_x_4744_){
_start:
{
uint8_t v_x_38__boxed_4745_; lean_object* v_res_4746_; 
v_x_38__boxed_4745_ = lean_unbox(v_x_4744_);
v_res_4746_ = lp_lean_x2dftml_LeanFtml_coFoldBranch(v_x_38__boxed_4745_);
return v_res_4746_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coShowBranch(uint8_t v_x_4755_){
_start:
{
if (v_x_4755_ == 0)
{
lean_object* v___x_4756_; 
v___x_4756_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coShowBranch___closed__0));
return v___x_4756_;
}
else
{
lean_object* v___x_4757_; 
v___x_4757_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coShowBranch___closed__1));
return v___x_4757_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coShowBranch___boxed(lean_object* v_x_4758_){
_start:
{
uint8_t v_x_38__boxed_4759_; lean_object* v_res_4760_; 
v_x_38__boxed_4759_ = lean_unbox(v_x_4758_);
v_res_4760_ = lp_lean_x2dftml_LeanFtml_coShowBranch(v_x_38__boxed_4759_);
return v_res_4760_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coHideBranch(uint8_t v_x_4769_){
_start:
{
if (v_x_4769_ == 0)
{
lean_object* v___x_4770_; 
v___x_4770_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coHideBranch___closed__0));
return v___x_4770_;
}
else
{
lean_object* v___x_4771_; 
v___x_4771_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coHideBranch___closed__1));
return v___x_4771_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coHideBranch___boxed(lean_object* v_x_4772_){
_start:
{
uint8_t v_x_38__boxed_4773_; lean_object* v_res_4774_; 
v_x_38__boxed_4773_ = lean_unbox(v_x_4772_);
v_res_4774_ = lp_lean_x2dftml_LeanFtml_coHideBranch(v_x_38__boxed_4773_);
return v_res_4774_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coLocBranch(uint8_t v_x_4787_){
_start:
{
switch(v_x_4787_)
{
case 0:
{
lean_object* v___x_4788_; 
v___x_4788_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLocBranch___closed__0));
return v___x_4788_;
}
case 1:
{
lean_object* v___x_4789_; 
v___x_4789_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLocBranch___closed__1));
return v___x_4789_;
}
default: 
{
lean_object* v___x_4790_; 
v___x_4790_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLocBranch___closed__2));
return v___x_4790_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coLocBranch___boxed(lean_object* v_x_4791_){
_start:
{
uint8_t v_x_55__boxed_4792_; lean_object* v_res_4793_; 
v_x_55__boxed_4792_ = lean_unbox(v_x_4791_);
v_res_4793_ = lp_lean_x2dftml_LeanFtml_coLocBranch(v_x_55__boxed_4792_);
return v_res_4793_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coTypeBranch(uint8_t v_x_4806_){
_start:
{
switch(v_x_4806_)
{
case 0:
{
lean_object* v___x_4807_; 
v___x_4807_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__0));
return v___x_4807_;
}
case 1:
{
lean_object* v___x_4808_; 
v___x_4808_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__1));
return v___x_4808_;
}
default: 
{
lean_object* v___x_4809_; 
v___x_4809_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coTypeBranch___closed__2));
return v___x_4809_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coTypeBranch___boxed(lean_object* v_x_4810_){
_start:
{
uint8_t v_x_55__boxed_4811_; lean_object* v_res_4812_; 
v_x_55__boxed_4811_ = lean_unbox(v_x_4810_);
v_res_4812_ = lp_lean_x2dftml_LeanFtml_coTypeBranch(v_x_55__boxed_4811_);
return v_res_4812_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coBranches(lean_object* v_s_4813_){
_start:
{
uint8_t v_fold_4814_; uint8_t v_showLbl_4815_; uint8_t v_hideLbl_4816_; uint8_t v_loc_4817_; uint8_t v_typ_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
v_fold_4814_ = lean_ctor_get_uint8(v_s_4813_, 0);
v_showLbl_4815_ = lean_ctor_get_uint8(v_s_4813_, 1);
v_hideLbl_4816_ = lean_ctor_get_uint8(v_s_4813_, 2);
v_loc_4817_ = lean_ctor_get_uint8(v_s_4813_, 3);
v_typ_4818_ = lean_ctor_get_uint8(v_s_4813_, 4);
v___x_4819_ = lp_lean_x2dftml_LeanFtml_coFoldBranch(v_fold_4814_);
v___x_4820_ = lp_lean_x2dftml_LeanFtml_coShowBranch(v_showLbl_4815_);
v___x_4821_ = l_List_appendTR___redArg(v___x_4819_, v___x_4820_);
v___x_4822_ = lp_lean_x2dftml_LeanFtml_coHideBranch(v_hideLbl_4816_);
v___x_4823_ = l_List_appendTR___redArg(v___x_4821_, v___x_4822_);
v___x_4824_ = lp_lean_x2dftml_LeanFtml_coLocBranch(v_loc_4817_);
v___x_4825_ = l_List_appendTR___redArg(v___x_4823_, v___x_4824_);
v___x_4826_ = lp_lean_x2dftml_LeanFtml_coTypeBranch(v_typ_4818_);
v___x_4827_ = l_List_appendTR___redArg(v___x_4825_, v___x_4826_);
return v___x_4827_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coBranches___boxed(lean_object* v_s_4828_){
_start:
{
lean_object* v_res_4829_; 
v_res_4829_ = lp_lean_x2dftml_LeanFtml_coBranches(v_s_4828_);
lean_dec_ref(v_s_4828_);
return v_res_4829_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvKindBranch(uint8_t v_x_4842_){
_start:
{
switch(v_x_4842_)
{
case 0:
{
lean_object* v___x_4843_; 
v___x_4843_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__0));
return v___x_4843_;
}
case 1:
{
lean_object* v___x_4844_; 
v___x_4844_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__1));
return v___x_4844_;
}
default: 
{
lean_object* v___x_4845_; 
v___x_4845_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvKindBranch___closed__2));
return v___x_4845_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvKindBranch___boxed(lean_object* v_x_4846_){
_start:
{
uint8_t v_x_55__boxed_4847_; lean_object* v_res_4848_; 
v_x_55__boxed_4847_ = lean_unbox(v_x_4846_);
v_res_4848_ = lp_lean_x2dftml_LeanFtml_tvKindBranch(v_x_55__boxed_4847_);
return v_res_4848_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvSourceBranch(uint8_t v_x_4857_){
_start:
{
if (v_x_4857_ == 0)
{
lean_object* v___x_4858_; 
v___x_4858_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvSourceBranch___closed__0));
return v___x_4858_;
}
else
{
lean_object* v___x_4859_; 
v___x_4859_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvSourceBranch___closed__1));
return v___x_4859_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvSourceBranch___boxed(lean_object* v_x_4860_){
_start:
{
uint8_t v_x_38__boxed_4861_; lean_object* v_res_4862_; 
v_x_38__boxed_4861_ = lean_unbox(v_x_4860_);
v_res_4862_ = lp_lean_x2dftml_LeanFtml_tvSourceBranch(v_x_38__boxed_4861_);
return v_res_4862_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvParseBranches(lean_object* v_s_4863_){
_start:
{
uint8_t v_kind_4864_; uint8_t v_source_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; 
v_kind_4864_ = lean_ctor_get_uint8(v_s_4863_, 0);
v_source_4865_ = lean_ctor_get_uint8(v_s_4863_, 1);
v___x_4866_ = lp_lean_x2dftml_LeanFtml_tvKindBranch(v_kind_4864_);
v___x_4867_ = lp_lean_x2dftml_LeanFtml_tvSourceBranch(v_source_4865_);
v___x_4868_ = l_List_appendTR___redArg(v___x_4866_, v___x_4867_);
return v___x_4868_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvParseBranches___boxed(lean_object* v_s_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = lp_lean_x2dftml_LeanFtml_tvParseBranches(v_s_4869_);
lean_dec_ref(v_s_4869_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvViewBranches(uint8_t v_x_4887_){
_start:
{
switch(v_x_4887_)
{
case 0:
{
lean_object* v___x_4888_; 
v___x_4888_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__0));
return v___x_4888_;
}
case 1:
{
lean_object* v___x_4889_; 
v___x_4889_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__2));
return v___x_4889_;
}
default: 
{
lean_object* v___x_4890_; 
v___x_4890_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvViewBranches___closed__3));
return v___x_4890_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvViewBranches___boxed(lean_object* v_x_4891_){
_start:
{
uint8_t v_x_72__boxed_4892_; lean_object* v_res_4893_; 
v_x_72__boxed_4892_ = lean_unbox(v_x_4891_);
v_res_4893_ = lp_lean_x2dftml_LeanFtml_tvViewBranches(v_x_72__boxed_4892_);
return v_res_4893_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvSelectedBranch(lean_object* v_it_4902_){
_start:
{
uint8_t v_selected_4903_; 
v_selected_4903_ = lean_ctor_get_uint8(v_it_4902_, 0);
if (v_selected_4903_ == 0)
{
lean_object* v___x_4904_; 
v___x_4904_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvSelectedBranch___closed__0));
return v___x_4904_;
}
else
{
lean_object* v___x_4905_; 
v___x_4905_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvSelectedBranch___closed__1));
return v___x_4905_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvSelectedBranch___boxed(lean_object* v_it_4906_){
_start:
{
lean_object* v_res_4907_; 
v_res_4907_ = lp_lean_x2dftml_LeanFtml_tvSelectedBranch(v_it_4906_);
lean_dec_ref(v_it_4906_);
return v_res_4907_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvLabelBranch(uint8_t v_x_4920_){
_start:
{
switch(v_x_4920_)
{
case 0:
{
lean_object* v___x_4921_; 
v___x_4921_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__0));
return v___x_4921_;
}
case 1:
{
lean_object* v___x_4922_; 
v___x_4922_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__1));
return v___x_4922_;
}
default: 
{
lean_object* v___x_4923_; 
v___x_4923_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvLabelBranch___closed__2));
return v___x_4923_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvLabelBranch___boxed(lean_object* v_x_4924_){
_start:
{
uint8_t v_x_55__boxed_4925_; lean_object* v_res_4926_; 
v_x_55__boxed_4925_ = lean_unbox(v_x_4924_);
v_res_4926_ = lp_lean_x2dftml_LeanFtml_tvLabelBranch(v_x_55__boxed_4925_);
return v_res_4926_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvItemBranches(lean_object* v_it_4927_){
_start:
{
uint8_t v_label_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; 
v_label_4928_ = lean_ctor_get_uint8(v_it_4927_, 1);
v___x_4929_ = lp_lean_x2dftml_LeanFtml_tvSelectedBranch(v_it_4927_);
v___x_4930_ = lp_lean_x2dftml_LeanFtml_tvLabelBranch(v_label_4928_);
v___x_4931_ = l_List_appendTR___redArg(v___x_4929_, v___x_4930_);
return v___x_4931_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvItemBranches___boxed(lean_object* v_it_4932_){
_start:
{
lean_object* v_res_4933_; 
v_res_4933_ = lp_lean_x2dftml_LeanFtml_tvItemBranches(v_it_4932_);
lean_dec_ref(v_it_4932_);
return v_res_4933_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tvRenderBranches_spec__0(lean_object* v_a_4934_, lean_object* v_a_4935_){
_start:
{
if (lean_obj_tag(v_a_4934_) == 0)
{
lean_object* v___x_4936_; 
v___x_4936_ = lean_array_to_list(v_a_4935_);
return v___x_4936_;
}
else
{
lean_object* v_head_4937_; lean_object* v_tail_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; 
v_head_4937_ = lean_ctor_get(v_a_4934_, 0);
v_tail_4938_ = lean_ctor_get(v_a_4934_, 1);
v___x_4939_ = lp_lean_x2dftml_LeanFtml_tvItemBranches(v_head_4937_);
v___x_4940_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_4935_, v___x_4939_);
v_a_4934_ = v_tail_4938_;
v_a_4935_ = v___x_4940_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tvRenderBranches_spec__0___boxed(lean_object* v_a_4942_, lean_object* v_a_4943_){
_start:
{
lean_object* v_res_4944_; 
v_res_4944_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tvRenderBranches_spec__0(v_a_4942_, v_a_4943_);
lean_dec(v_a_4942_);
return v_res_4944_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches(lean_object* v_x_4963_){
_start:
{
switch(lean_obj_tag(v_x_4963_))
{
case 0:
{
lean_object* v_items_4964_; uint8_t v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; 
v_items_4964_ = lean_ctor_get(v_x_4963_, 0);
v___x_4965_ = 42;
v___x_4966_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__0));
v___x_4967_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tvRenderBranches_spec__0(v_items_4964_, v___x_4966_);
v___x_4968_ = lean_box(v___x_4965_);
v___x_4969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4969_, 0, v___x_4968_);
lean_ctor_set(v___x_4969_, 1, v___x_4967_);
return v___x_4969_;
}
case 1:
{
lean_object* v___x_4970_; 
v___x_4970_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__1));
return v___x_4970_;
}
case 2:
{
lean_object* v___x_4971_; 
v___x_4971_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__2));
return v___x_4971_;
}
case 3:
{
lean_object* v___x_4972_; 
v___x_4972_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__3));
return v___x_4972_;
}
case 4:
{
lean_object* v___x_4973_; 
v___x_4973_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvRenderBranches___closed__4));
return v___x_4973_;
}
default: 
{
lean_object* v___x_4974_; 
v___x_4974_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containAllClasses___closed__0));
return v___x_4974_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvRenderBranches___boxed(lean_object* v_x_4975_){
_start:
{
lean_object* v_res_4976_; 
v_res_4976_ = lp_lean_x2dftml_LeanFtml_tvRenderBranches(v_x_4975_);
lean_dec(v_x_4975_);
return v_res_4976_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassify(lean_object* v_x_4981_){
_start:
{
switch(lean_obj_tag(v_x_4981_))
{
case 0:
{
lean_object* v_s_4982_; lean_object* v___x_4983_; 
v_s_4982_ = lean_ctor_get(v_x_4981_, 0);
v___x_4983_ = lp_lean_x2dftml_LeanFtml_bqRunBranches(v_s_4982_);
return v___x_4983_;
}
case 1:
{
uint8_t v_s_4984_; lean_object* v___x_4985_; 
v_s_4984_ = lean_ctor_get_uint8(v_x_4981_, 0);
v___x_4985_ = lp_lean_x2dftml_LeanFtml_bqRenderBranches(v_s_4984_);
return v___x_4985_;
}
case 2:
{
lean_object* v_s_4986_; lean_object* v___x_4987_; 
v_s_4986_ = lean_ctor_get(v_x_4981_, 0);
v___x_4987_ = lp_lean_x2dftml_LeanFtml_divParseBranches(v_s_4986_);
return v___x_4987_;
}
case 3:
{
uint8_t v_s_4988_; lean_object* v___x_4989_; 
v_s_4988_ = lean_ctor_get_uint8(v_x_4981_, 0);
v___x_4989_ = lp_lean_x2dftml_LeanFtml_divRenderBranches(v_s_4988_);
return v___x_4989_;
}
case 4:
{
lean_object* v___x_4990_; 
v___x_4990_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containClassify___closed__0));
return v___x_4990_;
}
case 5:
{
lean_object* v_s_4991_; lean_object* v___x_4992_; 
v_s_4991_ = lean_ctor_get(v_x_4981_, 0);
v___x_4992_ = lp_lean_x2dftml_LeanFtml_coBranches(v_s_4991_);
return v___x_4992_;
}
case 6:
{
lean_object* v_s_4993_; lean_object* v___x_4994_; 
v_s_4993_ = lean_ctor_get(v_x_4981_, 0);
v___x_4994_ = lp_lean_x2dftml_LeanFtml_tvParseBranches(v_s_4993_);
return v___x_4994_;
}
case 7:
{
uint8_t v_s_4995_; lean_object* v___x_4996_; 
v_s_4995_ = lean_ctor_get_uint8(v_x_4981_, 0);
v___x_4996_ = lp_lean_x2dftml_LeanFtml_tvViewBranches(v_s_4995_);
return v___x_4996_;
}
default: 
{
lean_object* v_s_4997_; lean_object* v___x_4998_; 
v_s_4997_ = lean_ctor_get(v_x_4981_, 0);
v___x_4998_ = lp_lean_x2dftml_LeanFtml_tvRenderBranches(v_s_4997_);
return v___x_4998_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassify___boxed(lean_object* v_x_4999_){
_start:
{
lean_object* v_res_5000_; 
v_res_5000_ = lp_lean_x2dftml_LeanFtml_containClassify(v_x_4999_);
lean_dec(v_x_4999_);
return v_res_5000_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_containClassMemDecidable___closed__0(void){
_start:
{
lean_object* v___x_5001_; lean_object* v___f_5002_; 
v___x_5001_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqContainClass___boxed), 2, 0);
v___f_5002_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5002_, 0, v___x_5001_);
return v___f_5002_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_containClassMemDecidable(lean_object* v_s_5003_, uint8_t v_c_5004_){
_start:
{
lean_object* v___f_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; uint8_t v___x_5008_; 
v___f_5005_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_containClassMemDecidable___closed__0, &lp_lean_x2dftml_LeanFtml_containClassMemDecidable___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_containClassMemDecidable___closed__0);
v___x_5006_ = lp_lean_x2dftml_LeanFtml_containClassify(v_s_5003_);
v___x_5007_ = lean_box(v_c_5004_);
v___x_5008_ = l_List_elem___redArg(v___f_5005_, v___x_5007_, v___x_5006_);
return v___x_5008_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassMemDecidable___boxed(lean_object* v_s_5009_, lean_object* v_c_5010_){
_start:
{
uint8_t v_c_boxed_5011_; uint8_t v_res_5012_; lean_object* v_r_5013_; 
v_c_boxed_5011_ = lean_unbox(v_c_5010_);
v_res_5012_ = lp_lean_x2dftml_LeanFtml_containClassMemDecidable(v_s_5009_, v_c_boxed_5011_);
lean_dec(v_s_5009_);
v_r_5013_ = lean_box(v_res_5012_);
return v_r_5013_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape(uint8_t v_x_5216_){
_start:
{
switch(v_x_5216_)
{
case 0:
{
lean_object* v___x_5227_; 
v___x_5227_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__12));
return v___x_5227_;
}
case 1:
{
lean_object* v___x_5228_; 
v___x_5228_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__14));
return v___x_5228_;
}
case 2:
{
goto v___jp_5217_;
}
case 3:
{
goto v___jp_5217_;
}
case 4:
{
lean_object* v___x_5229_; 
v___x_5229_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__16));
return v___x_5229_;
}
case 5:
{
goto v___jp_5217_;
}
case 6:
{
lean_object* v___x_5230_; 
v___x_5230_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__17));
return v___x_5230_;
}
case 7:
{
lean_object* v___x_5231_; 
v___x_5231_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__18));
return v___x_5231_;
}
case 8:
{
lean_object* v___x_5232_; 
v___x_5232_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__19));
return v___x_5232_;
}
case 9:
{
goto v___jp_5219_;
}
case 10:
{
lean_object* v___x_5233_; 
v___x_5233_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__21));
return v___x_5233_;
}
case 11:
{
lean_object* v___x_5234_; 
v___x_5234_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__23));
return v___x_5234_;
}
case 12:
{
goto v___jp_5219_;
}
case 13:
{
lean_object* v___x_5235_; 
v___x_5235_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__25));
return v___x_5235_;
}
case 14:
{
lean_object* v___x_5236_; 
v___x_5236_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__27));
return v___x_5236_;
}
case 15:
{
lean_object* v___x_5237_; 
v___x_5237_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__28));
return v___x_5237_;
}
case 16:
{
lean_object* v___x_5238_; 
v___x_5238_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__29));
return v___x_5238_;
}
case 17:
{
lean_object* v___x_5239_; 
v___x_5239_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__30));
return v___x_5239_;
}
case 18:
{
lean_object* v___x_5240_; 
v___x_5240_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__31));
return v___x_5240_;
}
case 19:
{
lean_object* v___x_5241_; 
v___x_5241_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__32));
return v___x_5241_;
}
case 20:
{
lean_object* v___x_5242_; 
v___x_5242_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__33));
return v___x_5242_;
}
case 21:
{
lean_object* v___x_5243_; 
v___x_5243_ = lean_box(4);
return v___x_5243_;
}
case 23:
{
lean_object* v___x_5244_; 
v___x_5244_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__35));
return v___x_5244_;
}
case 25:
{
lean_object* v___x_5245_; 
v___x_5245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__37));
return v___x_5245_;
}
case 27:
{
lean_object* v___x_5246_; 
v___x_5246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__39));
return v___x_5246_;
}
case 29:
{
lean_object* v___x_5247_; 
v___x_5247_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__41));
return v___x_5247_;
}
case 30:
{
lean_object* v___x_5248_; 
v___x_5248_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__43));
return v___x_5248_;
}
case 32:
{
lean_object* v___x_5249_; 
v___x_5249_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__45));
return v___x_5249_;
}
case 33:
{
lean_object* v___x_5250_; 
v___x_5250_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__47));
return v___x_5250_;
}
case 34:
{
lean_object* v___x_5251_; 
v___x_5251_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__49));
return v___x_5251_;
}
case 35:
{
lean_object* v___x_5252_; 
v___x_5252_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__51));
return v___x_5252_;
}
case 36:
{
goto v___jp_5223_;
}
case 37:
{
goto v___jp_5223_;
}
case 38:
{
lean_object* v___x_5253_; 
v___x_5253_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__53));
return v___x_5253_;
}
case 39:
{
lean_object* v___x_5254_; 
v___x_5254_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__54));
return v___x_5254_;
}
case 40:
{
lean_object* v___x_5255_; 
v___x_5255_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__55));
return v___x_5255_;
}
case 41:
{
lean_object* v___x_5256_; 
v___x_5256_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__56));
return v___x_5256_;
}
case 42:
{
lean_object* v___x_5257_; 
v___x_5257_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__58));
return v___x_5257_;
}
case 43:
{
goto v___jp_5225_;
}
case 44:
{
lean_object* v___x_5258_; 
v___x_5258_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__62));
return v___x_5258_;
}
case 45:
{
lean_object* v___x_5259_; 
v___x_5259_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__66));
return v___x_5259_;
}
case 46:
{
lean_object* v___x_5260_; 
v___x_5260_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__70));
return v___x_5260_;
}
case 47:
{
goto v___jp_5225_;
}
case 48:
{
lean_object* v___x_5261_; 
v___x_5261_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__71));
return v___x_5261_;
}
case 49:
{
lean_object* v___x_5262_; 
v___x_5262_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__72));
return v___x_5262_;
}
case 50:
{
lean_object* v___x_5263_; 
v___x_5263_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__73));
return v___x_5263_;
}
case 51:
{
lean_object* v___x_5264_; 
v___x_5264_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__74));
return v___x_5264_;
}
case 52:
{
lean_object* v___x_5265_; 
v___x_5265_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__75));
return v___x_5265_;
}
default: 
{
goto v___jp_5221_;
}
}
v___jp_5217_:
{
lean_object* v___x_5218_; 
v___x_5218_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__1));
return v___x_5218_;
}
v___jp_5219_:
{
lean_object* v___x_5220_; 
v___x_5220_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__3));
return v___x_5220_;
}
v___jp_5221_:
{
lean_object* v___x_5222_; 
v___x_5222_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__5));
return v___x_5222_;
}
v___jp_5223_:
{
lean_object* v___x_5224_; 
v___x_5224_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__7));
return v___x_5224_;
}
v___jp_5225_:
{
lean_object* v___x_5226_; 
v___x_5226_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_containWitnessShape___closed__11));
return v___x_5226_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containWitnessShape___boxed(lean_object* v_x_5266_){
_start:
{
uint8_t v_x_998__boxed_5267_; lean_object* v_res_5268_; 
v_x_998__boxed_5267_ = lean_unbox(v_x_5266_);
v_res_5268_ = lp_lean_x2dftml_LeanFtml_containWitnessShape(v_x_998__boxed_5267_);
return v_res_5268_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isContainRenderRule(uint8_t v_x_5269_){
_start:
{
switch(v_x_5269_)
{
case 13:
{
uint8_t v___x_5270_; 
v___x_5270_ = 1;
return v___x_5270_;
}
case 51:
{
uint8_t v___x_5271_; 
v___x_5271_ = 1;
return v___x_5271_;
}
case 43:
{
uint8_t v___x_5272_; 
v___x_5272_ = 1;
return v___x_5272_;
}
case 44:
{
uint8_t v___x_5273_; 
v___x_5273_ = 1;
return v___x_5273_;
}
default: 
{
uint8_t v___x_5274_; 
v___x_5274_ = 0;
return v___x_5274_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isContainRenderRule___boxed(lean_object* v_x_5275_){
_start:
{
uint8_t v_x_32__boxed_5276_; uint8_t v_res_5277_; lean_object* v_r_5278_; 
v_x_32__boxed_5276_ = lean_unbox(v_x_5275_);
v_res_5277_ = lp_lean_x2dftml_LeanFtml_isContainRenderRule(v_x_32__boxed_5276_);
v_r_5278_ = lean_box(v_res_5277_);
return v_r_5278_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1(void){
_start:
{
lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5280_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__0));
v___x_5281_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5280_);
return v___x_5281_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3(void){
_start:
{
lean_object* v___x_5283_; lean_object* v___x_5284_; 
v___x_5283_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__2));
v___x_5284_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5283_);
return v___x_5284_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bqRenderOf(lean_object* v_opts_5285_){
_start:
{
lean_object* v___x_5286_; uint8_t v___x_5287_; 
v___x_5286_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1, &lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1);
v___x_5287_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_5285_, v___x_5286_);
if (v___x_5287_ == 0)
{
lean_object* v___x_5288_; uint8_t v___x_5289_; 
v___x_5288_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3, &lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3);
v___x_5289_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_5285_, v___x_5288_);
if (v___x_5289_ == 0)
{
uint8_t v___x_5290_; 
v___x_5290_ = 2;
return v___x_5290_;
}
else
{
uint8_t v___x_5291_; 
v___x_5291_ = 1;
return v___x_5291_;
}
}
else
{
uint8_t v___x_5292_; 
v___x_5292_ = 0;
return v___x_5292_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRenderOf___boxed(lean_object* v_opts_5293_){
_start:
{
uint8_t v_res_5294_; lean_object* v_r_5295_; 
v_res_5294_ = lp_lean_x2dftml_LeanFtml_bqRenderOf(v_opts_5293_);
lean_dec(v_opts_5293_);
v_r_5295_ = lean_box(v_res_5294_);
return v_r_5295_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_divValueCleared___redArg(lean_object* v_v_5296_){
_start:
{
lean_object* v_raw_5297_; uint8_t v___x_5298_; 
v_raw_5297_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_v_5296_);
v___x_5298_ = lp_lean_x2dftml_List_any___at___00LeanFtml_divAttrFragment_spec__0(v_raw_5297_);
lean_dec(v_raw_5297_);
return v___x_5298_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divValueCleared___redArg___boxed(lean_object* v_v_5299_){
_start:
{
uint8_t v_res_5300_; lean_object* v_r_5301_; 
v_res_5300_ = lp_lean_x2dftml_LeanFtml_divValueCleared___redArg(v_v_5299_);
lean_dec(v_v_5299_);
v_r_5301_ = lean_box(v_res_5300_);
return v_r_5301_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_divValueCleared(lean_object* v_k_5302_, lean_object* v_v_5303_){
_start:
{
uint8_t v___x_5304_; 
v___x_5304_ = lp_lean_x2dftml_LeanFtml_divValueCleared___redArg(v_v_5303_);
return v___x_5304_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divValueCleared___boxed(lean_object* v_k_5305_, lean_object* v_v_5306_){
_start:
{
uint8_t v_res_5307_; lean_object* v_r_5308_; 
v_res_5307_ = lp_lean_x2dftml_LeanFtml_divValueCleared(v_k_5305_, v_v_5306_);
lean_dec(v_v_5306_);
lean_dec(v_k_5305_);
v_r_5308_ = lean_box(v_res_5307_);
return v_r_5308_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_divRenderOf_spec__0(lean_object* v_x_5309_){
_start:
{
if (lean_obj_tag(v_x_5309_) == 0)
{
uint8_t v___x_5310_; 
v___x_5310_ = 0;
return v___x_5310_;
}
else
{
lean_object* v_head_5311_; lean_object* v_tail_5312_; lean_object* v_snd_5313_; uint8_t v___x_5314_; 
v_head_5311_ = lean_ctor_get(v_x_5309_, 0);
v_tail_5312_ = lean_ctor_get(v_x_5309_, 1);
v_snd_5313_ = lean_ctor_get(v_head_5311_, 1);
v___x_5314_ = lp_lean_x2dftml_LeanFtml_divValueCleared___redArg(v_snd_5313_);
if (v___x_5314_ == 0)
{
v_x_5309_ = v_tail_5312_;
goto _start;
}
else
{
return v___x_5314_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_divRenderOf_spec__0___boxed(lean_object* v_x_5316_){
_start:
{
uint8_t v_res_5317_; lean_object* v_r_5318_; 
v_res_5317_ = lp_lean_x2dftml_List_any___at___00LeanFtml_divRenderOf_spec__0(v_x_5316_);
lean_dec(v_x_5316_);
v_r_5318_ = lean_box(v_res_5317_);
return v_r_5318_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1(void){
_start:
{
lean_object* v___x_5320_; lean_object* v___x_5321_; 
v___x_5320_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRenderOf___closed__0));
v___x_5321_ = l_String_toListImpl(v___x_5320_);
return v___x_5321_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divRenderOf___closed__3(void){
_start:
{
lean_object* v___x_5323_; lean_object* v___x_5324_; 
v___x_5323_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRenderOf___closed__2));
v___x_5324_ = l_String_toListImpl(v___x_5323_);
return v___x_5324_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_divRenderOf(lean_object* v_opts_5325_){
_start:
{
lean_object* v___x_5340_; lean_object* v___x_5341_; 
v___x_5340_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divRenderOf___closed__3, &lp_lean_x2dftml_LeanFtml_divRenderOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_divRenderOf___closed__3);
v___x_5341_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_5325_, v___x_5340_);
if (lean_obj_tag(v___x_5341_) == 1)
{
lean_object* v_val_5342_; 
v_val_5342_ = lean_ctor_get(v___x_5341_, 0);
lean_inc(v_val_5342_);
lean_dec_ref_known(v___x_5341_, 1);
if (lean_obj_tag(v_val_5342_) == 2)
{
uint8_t v_a_5343_; 
v_a_5343_ = lean_ctor_get_uint8(v_val_5342_, 0);
lean_dec_ref_known(v_val_5342_, 0);
if (v_a_5343_ == 0)
{
goto v___jp_5326_;
}
else
{
uint8_t v___x_5344_; 
v___x_5344_ = 0;
return v___x_5344_;
}
}
else
{
lean_dec(v_val_5342_);
goto v___jp_5326_;
}
}
else
{
lean_dec(v___x_5341_);
goto v___jp_5326_;
}
v___jp_5326_:
{
lean_object* v___x_5327_; uint8_t v___x_5328_; 
v___x_5327_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1, &lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1);
v___x_5328_ = lp_lean_x2dftml_LeanFtml_intTypeIs(v_opts_5325_, v___x_5327_);
if (v___x_5328_ == 0)
{
lean_object* v___x_5329_; uint8_t v___x_5330_; 
v___x_5329_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3, &lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3);
v___x_5330_ = lp_lean_x2dftml_LeanFtml_intTypeIs(v_opts_5325_, v___x_5329_);
if (v___x_5330_ == 0)
{
uint8_t v___x_5331_; 
v___x_5331_ = 5;
return v___x_5331_;
}
else
{
uint8_t v___x_5332_; 
v___x_5332_ = 4;
return v___x_5332_;
}
}
else
{
lean_object* v___x_5333_; lean_object* v_pairs_5334_; uint8_t v___x_5335_; 
v___x_5333_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1, &lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1);
v_pairs_5334_ = lp_lean_x2dftml_LeanFtml_attrPairs(v_opts_5325_, v___x_5333_);
v___x_5335_ = l_List_isEmpty___redArg(v_pairs_5334_);
if (v___x_5335_ == 0)
{
uint8_t v___x_5336_; 
v___x_5336_ = lp_lean_x2dftml_List_any___at___00LeanFtml_divRenderOf_spec__0(v_pairs_5334_);
lean_dec(v_pairs_5334_);
if (v___x_5336_ == 0)
{
uint8_t v___x_5337_; 
v___x_5337_ = 2;
return v___x_5337_;
}
else
{
uint8_t v___x_5338_; 
v___x_5338_ = 3;
return v___x_5338_;
}
}
else
{
uint8_t v___x_5339_; 
lean_dec(v_pairs_5334_);
v___x_5339_ = 1;
return v___x_5339_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRenderOf___boxed(lean_object* v_opts_5345_){
_start:
{
uint8_t v_res_5346_; lean_object* v_r_5347_; 
v_res_5346_ = lp_lean_x2dftml_LeanFtml_divRenderOf(v_opts_5345_);
lean_dec(v_opts_5345_);
v_r_5347_ = lean_box(v_res_5346_);
return v_r_5347_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coArgsOf(lean_object* v_opts_5348_){
_start:
{
lean_object* v___x_5349_; lean_object* v___x_5350_; 
v___x_5349_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1, &lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divRenderOf___closed__1);
v___x_5350_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_5348_, v___x_5349_);
if (lean_obj_tag(v___x_5350_) == 1)
{
lean_object* v_val_5351_; 
v_val_5351_ = lean_ctor_get(v___x_5350_, 0);
lean_inc(v_val_5351_);
lean_dec_ref_known(v___x_5350_, 1);
if (lean_obj_tag(v_val_5351_) == 4)
{
lean_object* v_a_5352_; 
v_a_5352_ = lean_ctor_get(v_val_5351_, 0);
lean_inc(v_a_5352_);
lean_dec_ref_known(v_val_5351_, 1);
return v_a_5352_;
}
else
{
lean_object* v___x_5353_; 
lean_dec(v_val_5351_);
v___x_5353_ = lean_box(0);
return v___x_5353_;
}
}
else
{
lean_object* v___x_5354_; 
lean_dec(v___x_5350_);
v___x_5354_ = lean_box(0);
return v___x_5354_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coArgsOf___boxed(lean_object* v_opts_5355_){
_start:
{
lean_object* v_res_5356_; 
v_res_5356_ = lp_lean_x2dftml_LeanFtml_coArgsOf(v_opts_5355_);
lean_dec(v_opts_5355_);
return v_res_5356_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_coFoldOf___closed__1(void){
_start:
{
lean_object* v___x_5358_; lean_object* v___x_5359_; 
v___x_5358_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coFoldOf___closed__0));
v___x_5359_ = l_String_toListImpl(v___x_5358_);
return v___x_5359_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_coFoldOf___closed__3(void){
_start:
{
lean_object* v___x_5361_; lean_object* v___x_5362_; 
v___x_5361_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coFoldOf___closed__2));
v___x_5362_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5361_);
return v___x_5362_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_coFoldOf___closed__5(void){
_start:
{
lean_object* v___x_5364_; lean_object* v___x_5365_; 
v___x_5364_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coFoldOf___closed__4));
v___x_5365_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5364_);
return v___x_5365_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_coFoldOf(lean_object* v_args_5366_){
_start:
{
lean_object* v___x_5367_; lean_object* v___x_5368_; 
v___x_5367_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_coFoldOf___closed__1, &lp_lean_x2dftml_LeanFtml_coFoldOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_coFoldOf___closed__1);
v___x_5368_ = lp_lean_x2dftml_LeanFtml_optBytesOpt(v_args_5366_, v___x_5367_);
if (lean_obj_tag(v___x_5368_) == 0)
{
uint8_t v___x_5369_; 
v___x_5369_ = 0;
return v___x_5369_;
}
else
{
lean_object* v_val_5370_; lean_object* v___x_5371_; uint8_t v___x_5372_; 
v_val_5370_ = lean_ctor_get(v___x_5368_, 0);
lean_inc(v_val_5370_);
lean_dec_ref_known(v___x_5368_, 1);
v___x_5371_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_coFoldOf___closed__3, &lp_lean_x2dftml_LeanFtml_coFoldOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_coFoldOf___closed__3);
v___x_5372_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_val_5370_, v___x_5371_);
if (v___x_5372_ == 0)
{
lean_object* v___x_5373_; uint8_t v___x_5374_; 
v___x_5373_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_coFoldOf___closed__5, &lp_lean_x2dftml_LeanFtml_coFoldOf___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_coFoldOf___closed__5);
v___x_5374_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_val_5370_, v___x_5373_);
lean_dec(v_val_5370_);
if (v___x_5374_ == 0)
{
uint8_t v___x_5375_; 
v___x_5375_ = 0;
return v___x_5375_;
}
else
{
uint8_t v___x_5376_; 
v___x_5376_ = 1;
return v___x_5376_;
}
}
else
{
uint8_t v___x_5377_; 
lean_dec(v_val_5370_);
v___x_5377_ = 1;
return v___x_5377_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coFoldOf___boxed(lean_object* v_args_5378_){
_start:
{
uint8_t v_res_5379_; lean_object* v_r_5380_; 
v_res_5379_ = lp_lean_x2dftml_LeanFtml_coFoldOf(v_args_5378_);
lean_dec(v_args_5378_);
v_r_5380_ = lean_box(v_res_5379_);
return v_r_5380_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_coLabelOf(lean_object* v_args_5384_, lean_object* v_key_5385_){
_start:
{
lean_object* v___x_5386_; 
v___x_5386_ = lp_lean_x2dftml_LeanFtml_optBytesOpt(v_args_5384_, v_key_5385_);
if (lean_obj_tag(v___x_5386_) == 0)
{
uint8_t v___x_5387_; 
v___x_5387_ = 0;
return v___x_5387_;
}
else
{
lean_object* v_val_5388_; uint8_t v___x_5389_; 
v_val_5388_ = lean_ctor_get(v___x_5386_, 0);
lean_inc(v_val_5388_);
lean_dec_ref_known(v___x_5386_, 1);
v___x_5389_ = l_List_isEmpty___redArg(v_val_5388_);
if (v___x_5389_ == 0)
{
lean_object* v___x_5390_; uint8_t v___x_5391_; 
v___x_5390_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLabelOf___closed__0));
v___x_5391_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_val_5388_, v___x_5390_);
lean_dec(v_val_5388_);
if (v___x_5391_ == 0)
{
uint8_t v___x_5392_; 
v___x_5392_ = 1;
return v___x_5392_;
}
else
{
uint8_t v___x_5393_; 
v___x_5393_ = 0;
return v___x_5393_;
}
}
else
{
uint8_t v___x_5394_; 
lean_dec(v_val_5388_);
v___x_5394_ = 0;
return v___x_5394_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coLabelOf___boxed(lean_object* v_args_5395_, lean_object* v_key_5396_){
_start:
{
uint8_t v_res_5397_; lean_object* v_r_5398_; 
v_res_5397_ = lp_lean_x2dftml_LeanFtml_coLabelOf(v_args_5395_, v_key_5396_);
lean_dec(v_key_5396_);
lean_dec(v_args_5395_);
v_r_5398_ = lean_box(v_res_5397_);
return v_r_5398_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_coLocOf___closed__1(void){
_start:
{
lean_object* v___x_5400_; lean_object* v___x_5401_; 
v___x_5400_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLocOf___closed__0));
v___x_5401_ = l_String_toListImpl(v___x_5400_);
return v___x_5401_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_coLocOf___closed__3(void){
_start:
{
lean_object* v___x_5403_; lean_object* v___x_5404_; 
v___x_5403_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLocOf___closed__2));
v___x_5404_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5403_);
return v___x_5404_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_coLocOf___closed__5(void){
_start:
{
lean_object* v___x_5406_; lean_object* v___x_5407_; 
v___x_5406_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLocOf___closed__4));
v___x_5407_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5406_);
return v___x_5407_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_coLocOf(lean_object* v_args_5408_){
_start:
{
lean_object* v___x_5409_; lean_object* v___x_5410_; 
v___x_5409_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_coLocOf___closed__1, &lp_lean_x2dftml_LeanFtml_coLocOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_coLocOf___closed__1);
v___x_5410_ = lp_lean_x2dftml_LeanFtml_optBytesOpt(v_args_5408_, v___x_5409_);
if (lean_obj_tag(v___x_5410_) == 0)
{
uint8_t v___x_5411_; 
v___x_5411_ = 0;
return v___x_5411_;
}
else
{
lean_object* v_val_5412_; lean_object* v___x_5413_; uint8_t v___x_5414_; 
v_val_5412_ = lean_ctor_get(v___x_5410_, 0);
lean_inc(v_val_5412_);
lean_dec_ref_known(v___x_5410_, 1);
v___x_5413_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_coLocOf___closed__3, &lp_lean_x2dftml_LeanFtml_coLocOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_coLocOf___closed__3);
v___x_5414_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_val_5412_, v___x_5413_);
if (v___x_5414_ == 0)
{
lean_object* v___x_5415_; uint8_t v___x_5416_; 
v___x_5415_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_coLocOf___closed__5, &lp_lean_x2dftml_LeanFtml_coLocOf___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_coLocOf___closed__5);
v___x_5416_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_val_5412_, v___x_5415_);
lean_dec(v_val_5412_);
if (v___x_5416_ == 0)
{
uint8_t v___x_5417_; 
v___x_5417_ = 0;
return v___x_5417_;
}
else
{
uint8_t v___x_5418_; 
v___x_5418_ = 2;
return v___x_5418_;
}
}
else
{
uint8_t v___x_5419_; 
lean_dec(v_val_5412_);
v___x_5419_ = 1;
return v___x_5419_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coLocOf___boxed(lean_object* v_args_5420_){
_start:
{
uint8_t v_res_5421_; lean_object* v_r_5422_; 
v_res_5421_ = lp_lean_x2dftml_LeanFtml_coLocOf(v_args_5420_);
lean_dec(v_args_5420_);
v_r_5422_ = lean_box(v_res_5421_);
return v_r_5422_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_coTypeOf(lean_object* v_opts_5423_){
_start:
{
lean_object* v___x_5424_; uint8_t v___x_5425_; 
v___x_5424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1, &lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1);
v___x_5425_ = lp_lean_x2dftml_LeanFtml_intTypeIs(v_opts_5423_, v___x_5424_);
if (v___x_5425_ == 0)
{
lean_object* v___x_5426_; uint8_t v___x_5427_; 
v___x_5426_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3, &lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3);
v___x_5427_ = lp_lean_x2dftml_LeanFtml_intTypeIs(v_opts_5423_, v___x_5426_);
if (v___x_5427_ == 0)
{
uint8_t v___x_5428_; 
v___x_5428_ = 2;
return v___x_5428_;
}
else
{
uint8_t v___x_5429_; 
v___x_5429_ = 1;
return v___x_5429_;
}
}
else
{
uint8_t v___x_5430_; 
v___x_5430_ = 0;
return v___x_5430_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coTypeOf___boxed(lean_object* v_opts_5431_){
_start:
{
uint8_t v_res_5432_; lean_object* v_r_5433_; 
v_res_5432_ = lp_lean_x2dftml_LeanFtml_coTypeOf(v_opts_5431_);
lean_dec(v_opts_5431_);
v_r_5433_ = lean_box(v_res_5432_);
return v_r_5433_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_coRenderOf___closed__1(void){
_start:
{
lean_object* v___x_5435_; lean_object* v___x_5436_; 
v___x_5435_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coRenderOf___closed__0));
v___x_5436_ = l_String_toListImpl(v___x_5435_);
return v___x_5436_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_coRenderOf___closed__3(void){
_start:
{
lean_object* v___x_5438_; lean_object* v___x_5439_; 
v___x_5438_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coRenderOf___closed__2));
v___x_5439_ = l_String_toListImpl(v___x_5438_);
return v___x_5439_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coRenderOf(lean_object* v_opts_5440_){
_start:
{
lean_object* v_args_5441_; uint8_t v___x_5442_; lean_object* v___x_5443_; uint8_t v___x_5444_; lean_object* v___x_5445_; uint8_t v___x_5446_; uint8_t v___x_5447_; uint8_t v___x_5448_; lean_object* v___x_5449_; 
v_args_5441_ = lp_lean_x2dftml_LeanFtml_coArgsOf(v_opts_5440_);
v___x_5442_ = lp_lean_x2dftml_LeanFtml_coFoldOf(v_args_5441_);
v___x_5443_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_coRenderOf___closed__1, &lp_lean_x2dftml_LeanFtml_coRenderOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_coRenderOf___closed__1);
v___x_5444_ = lp_lean_x2dftml_LeanFtml_coLabelOf(v_args_5441_, v___x_5443_);
v___x_5445_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_coRenderOf___closed__3, &lp_lean_x2dftml_LeanFtml_coRenderOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_coRenderOf___closed__3);
v___x_5446_ = lp_lean_x2dftml_LeanFtml_coLabelOf(v_args_5441_, v___x_5445_);
v___x_5447_ = lp_lean_x2dftml_LeanFtml_coLocOf(v_args_5441_);
lean_dec(v_args_5441_);
v___x_5448_ = lp_lean_x2dftml_LeanFtml_coTypeOf(v_opts_5440_);
v___x_5449_ = lean_alloc_ctor(0, 0, 5);
lean_ctor_set_uint8(v___x_5449_, 0, v___x_5442_);
lean_ctor_set_uint8(v___x_5449_, 1, v___x_5444_);
lean_ctor_set_uint8(v___x_5449_, 2, v___x_5446_);
lean_ctor_set_uint8(v___x_5449_, 3, v___x_5447_);
lean_ctor_set_uint8(v___x_5449_, 4, v___x_5448_);
return v___x_5449_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_coRenderOf___boxed(lean_object* v_opts_5450_){
_start:
{
lean_object* v_res_5451_; 
v_res_5451_ = lp_lean_x2dftml_LeanFtml_coRenderOf(v_opts_5450_);
lean_dec(v_opts_5450_);
return v_res_5451_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__1(void){
_start:
{
lean_object* v___x_5453_; lean_object* v___x_5454_; 
v___x_5453_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__0));
v___x_5454_ = l_String_toListImpl(v___x_5453_);
return v___x_5454_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvTabsOf(lean_object* v_opts_5455_){
_start:
{
lean_object* v___x_5456_; lean_object* v___x_5457_; 
v___x_5456_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__1, &lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tvTabsOf___closed__1);
v___x_5457_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_5455_, v___x_5456_);
if (lean_obj_tag(v___x_5457_) == 1)
{
lean_object* v_val_5458_; 
v_val_5458_ = lean_ctor_get(v___x_5457_, 0);
lean_inc(v_val_5458_);
lean_dec_ref_known(v___x_5457_, 1);
if (lean_obj_tag(v_val_5458_) == 5)
{
lean_object* v_a_5459_; 
v_a_5459_ = lean_ctor_get(v_val_5458_, 0);
lean_inc(v_a_5459_);
lean_dec_ref_known(v_val_5458_, 1);
return v_a_5459_;
}
else
{
lean_object* v___x_5460_; 
lean_dec(v_val_5458_);
v___x_5460_ = lean_box(0);
return v___x_5460_;
}
}
else
{
lean_object* v___x_5461_; 
lean_dec(v___x_5457_);
v___x_5461_ = lean_box(0);
return v___x_5461_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvTabsOf___boxed(lean_object* v_opts_5462_){
_start:
{
lean_object* v_res_5463_; 
v_res_5463_ = lp_lean_x2dftml_LeanFtml_tvTabsOf(v_opts_5462_);
lean_dec(v_opts_5462_);
return v_res_5463_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tvItemOf___closed__1(void){
_start:
{
lean_object* v___x_5465_; lean_object* v___x_5466_; 
v___x_5465_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvItemOf___closed__0));
v___x_5466_ = l_String_toListImpl(v___x_5465_);
return v___x_5466_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3(void){
_start:
{
lean_object* v___x_5468_; lean_object* v___x_5469_; 
v___x_5468_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvItemOf___closed__2));
v___x_5469_ = l_String_toListImpl(v___x_5468_);
return v___x_5469_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tvItemOf___closed__4(void){
_start:
{
lean_object* v___x_5470_; lean_object* v___x_5471_; 
v___x_5470_ = lean_unsigned_to_nat(0u);
v___x_5471_ = lean_nat_to_int(v___x_5470_);
return v___x_5471_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf(lean_object* v_entry_5472_){
_start:
{
lean_object* v___y_5474_; uint8_t v___y_5475_; lean_object* v___y_5487_; 
if (lean_obj_tag(v_entry_5472_) == 4)
{
lean_object* v_a_5498_; 
v_a_5498_ = lean_ctor_get(v_entry_5472_, 0);
v___y_5487_ = v_a_5498_;
goto v___jp_5486_;
}
else
{
lean_object* v___x_5499_; 
v___x_5499_ = lean_box(0);
v___y_5487_ = v___x_5499_;
goto v___jp_5486_;
}
v___jp_5473_:
{
lean_object* v___x_5476_; lean_object* v___x_5477_; 
v___x_5476_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tvItemOf___closed__1, &lp_lean_x2dftml_LeanFtml_tvItemOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tvItemOf___closed__1);
v___x_5477_ = lp_lean_x2dftml_LeanFtml_optBytesOpt(v___y_5474_, v___x_5476_);
if (lean_obj_tag(v___x_5477_) == 0)
{
uint8_t v___x_5478_; lean_object* v___x_5479_; 
v___x_5478_ = 0;
v___x_5479_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_5479_, 0, v___y_5475_);
lean_ctor_set_uint8(v___x_5479_, 1, v___x_5478_);
return v___x_5479_;
}
else
{
lean_object* v_val_5480_; uint8_t v___x_5481_; 
v_val_5480_ = lean_ctor_get(v___x_5477_, 0);
lean_inc(v_val_5480_);
lean_dec_ref_known(v___x_5477_, 1);
v___x_5481_ = l_List_isEmpty___redArg(v_val_5480_);
lean_dec(v_val_5480_);
if (v___x_5481_ == 0)
{
uint8_t v___x_5482_; lean_object* v___x_5483_; 
v___x_5482_ = 2;
v___x_5483_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_5483_, 0, v___y_5475_);
lean_ctor_set_uint8(v___x_5483_, 1, v___x_5482_);
return v___x_5483_;
}
else
{
uint8_t v___x_5484_; lean_object* v___x_5485_; 
v___x_5484_ = 1;
v___x_5485_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_5485_, 0, v___y_5475_);
lean_ctor_set_uint8(v___x_5485_, 1, v___x_5484_);
return v___x_5485_;
}
}
}
v___jp_5486_:
{
lean_object* v___x_5488_; lean_object* v___x_5489_; 
v___x_5488_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3, &lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3);
v___x_5489_ = lp_lean_x2dftml_LeanFtml_omGet(v___y_5487_, v___x_5488_);
if (lean_obj_tag(v___x_5489_) == 0)
{
uint8_t v___x_5490_; 
v___x_5490_ = 1;
v___y_5474_ = v___y_5487_;
v___y_5475_ = v___x_5490_;
goto v___jp_5473_;
}
else
{
lean_object* v_val_5491_; 
v_val_5491_ = lean_ctor_get(v___x_5489_, 0);
lean_inc(v_val_5491_);
lean_dec_ref_known(v___x_5489_, 1);
if (lean_obj_tag(v_val_5491_) == 1)
{
lean_object* v_a_5492_; lean_object* v___x_5493_; uint8_t v___x_5494_; 
v_a_5492_ = lean_ctor_get(v_val_5491_, 0);
lean_inc(v_a_5492_);
lean_dec_ref_known(v_val_5491_, 1);
v___x_5493_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tvItemOf___closed__4, &lp_lean_x2dftml_LeanFtml_tvItemOf___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_tvItemOf___closed__4);
v___x_5494_ = lean_int_dec_eq(v_a_5492_, v___x_5493_);
lean_dec(v_a_5492_);
v___y_5474_ = v___y_5487_;
v___y_5475_ = v___x_5494_;
goto v___jp_5473_;
}
else
{
lean_object* v___x_5495_; lean_object* v___x_5496_; uint8_t v___x_5497_; 
v___x_5495_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_val_5491_);
lean_dec(v_val_5491_);
v___x_5496_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLabelOf___closed__0));
v___x_5497_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_5495_, v___x_5496_);
lean_dec(v___x_5495_);
v___y_5474_ = v___y_5487_;
v___y_5475_ = v___x_5497_;
goto v___jp_5473_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvItemOf___boxed(lean_object* v_entry_5500_){
_start:
{
lean_object* v_res_5501_; 
v_res_5501_ = lp_lean_x2dftml_LeanFtml_tvItemOf(v_entry_5500_);
lean_dec(v_entry_5500_);
return v_res_5501_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tvRenderOf_spec__0(lean_object* v_a_5502_, lean_object* v_a_5503_){
_start:
{
if (lean_obj_tag(v_a_5502_) == 0)
{
lean_object* v___x_5504_; 
v___x_5504_ = l_List_reverse___redArg(v_a_5503_);
return v___x_5504_;
}
else
{
lean_object* v_head_5505_; lean_object* v_tail_5506_; lean_object* v___x_5508_; uint8_t v_isShared_5509_; uint8_t v_isSharedCheck_5515_; 
v_head_5505_ = lean_ctor_get(v_a_5502_, 0);
v_tail_5506_ = lean_ctor_get(v_a_5502_, 1);
v_isSharedCheck_5515_ = !lean_is_exclusive(v_a_5502_);
if (v_isSharedCheck_5515_ == 0)
{
v___x_5508_ = v_a_5502_;
v_isShared_5509_ = v_isSharedCheck_5515_;
goto v_resetjp_5507_;
}
else
{
lean_inc(v_tail_5506_);
lean_inc(v_head_5505_);
lean_dec(v_a_5502_);
v___x_5508_ = lean_box(0);
v_isShared_5509_ = v_isSharedCheck_5515_;
goto v_resetjp_5507_;
}
v_resetjp_5507_:
{
lean_object* v___x_5510_; lean_object* v___x_5512_; 
v___x_5510_ = lp_lean_x2dftml_LeanFtml_tvItemOf(v_head_5505_);
lean_dec(v_head_5505_);
if (v_isShared_5509_ == 0)
{
lean_ctor_set(v___x_5508_, 1, v_a_5503_);
lean_ctor_set(v___x_5508_, 0, v___x_5510_);
v___x_5512_ = v___x_5508_;
goto v_reusejp_5511_;
}
else
{
lean_object* v_reuseFailAlloc_5514_; 
v_reuseFailAlloc_5514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5514_, 0, v___x_5510_);
lean_ctor_set(v_reuseFailAlloc_5514_, 1, v_a_5503_);
v___x_5512_ = v_reuseFailAlloc_5514_;
goto v_reusejp_5511_;
}
v_reusejp_5511_:
{
v_a_5502_ = v_tail_5506_;
v_a_5503_ = v___x_5512_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__1(void){
_start:
{
lean_object* v___x_5517_; lean_object* v___x_5518_; 
v___x_5517_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__0));
v___x_5518_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5517_);
return v___x_5518_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__3(void){
_start:
{
lean_object* v___x_5520_; lean_object* v___x_5521_; 
v___x_5520_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__2));
v___x_5521_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5520_);
return v___x_5521_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvRenderOf(lean_object* v_opts_5522_){
_start:
{
lean_object* v___x_5523_; uint8_t v___x_5524_; 
v___x_5523_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1, &lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__1);
v___x_5524_ = lp_lean_x2dftml_LeanFtml_intTypeIs(v_opts_5522_, v___x_5523_);
if (v___x_5524_ == 0)
{
lean_object* v___x_5525_; uint8_t v___x_5526_; 
v___x_5525_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__1, &lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__1);
v___x_5526_ = lp_lean_x2dftml_LeanFtml_intTypeIs(v_opts_5522_, v___x_5525_);
if (v___x_5526_ == 0)
{
lean_object* v___x_5527_; uint8_t v___x_5528_; 
v___x_5527_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__3, &lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tvRenderOf___closed__3);
v___x_5528_ = lp_lean_x2dftml_LeanFtml_intTypeIs(v_opts_5522_, v___x_5527_);
if (v___x_5528_ == 0)
{
lean_object* v___x_5529_; uint8_t v___x_5530_; 
v___x_5529_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3, &lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bqRenderOf___closed__3);
v___x_5530_ = lp_lean_x2dftml_LeanFtml_intTypeIs(v_opts_5522_, v___x_5529_);
if (v___x_5530_ == 0)
{
lean_object* v___x_5531_; 
v___x_5531_ = lean_box(5);
return v___x_5531_;
}
else
{
lean_object* v___x_5532_; 
v___x_5532_ = lean_box(4);
return v___x_5532_;
}
}
else
{
lean_object* v___x_5533_; 
v___x_5533_ = lean_box(3);
return v___x_5533_;
}
}
else
{
lean_object* v___x_5534_; lean_object* v_tabIdBytes_5535_; uint8_t v___x_5536_; 
v___x_5534_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3, &lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tvItemOf___closed__3);
v_tabIdBytes_5535_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_5522_, v___x_5534_);
v___x_5536_ = l_List_isEmpty___redArg(v_tabIdBytes_5535_);
if (v___x_5536_ == 0)
{
lean_object* v___x_5537_; uint8_t v___x_5538_; 
v___x_5537_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_coLabelOf___closed__0));
v___x_5538_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_tabIdBytes_5535_, v___x_5537_);
lean_dec(v_tabIdBytes_5535_);
if (v___x_5538_ == 0)
{
lean_object* v___x_5539_; 
v___x_5539_ = lean_box(2);
return v___x_5539_;
}
else
{
lean_object* v___x_5540_; 
v___x_5540_ = lean_box(1);
return v___x_5540_;
}
}
else
{
lean_object* v___x_5541_; 
lean_dec(v_tabIdBytes_5535_);
v___x_5541_ = lean_box(1);
return v___x_5541_;
}
}
}
else
{
lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; 
v___x_5542_ = lp_lean_x2dftml_LeanFtml_tvTabsOf(v_opts_5522_);
v___x_5543_ = lean_box(0);
v___x_5544_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tvRenderOf_spec__0(v___x_5542_, v___x_5543_);
v___x_5545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5545_, 0, v___x_5544_);
return v___x_5545_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tvRenderOf___boxed(lean_object* v_opts_5546_){
_start:
{
lean_object* v_res_5547_; 
v_res_5547_ = lp_lean_x2dftml_LeanFtml_tvRenderOf(v_opts_5546_);
lean_dec(v_opts_5546_);
return v_res_5547_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containShapeOf(uint8_t v_r_5548_, lean_object* v_opts_5549_){
_start:
{
switch(v_r_5548_)
{
case 13:
{
uint8_t v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; 
v___x_5550_ = lp_lean_x2dftml_LeanFtml_bqRenderOf(v_opts_5549_);
v___x_5551_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5551_, 0, v___x_5550_);
v___x_5552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5552_, 0, v___x_5551_);
return v___x_5552_;
}
case 51:
{
uint8_t v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; 
v___x_5553_ = lp_lean_x2dftml_LeanFtml_divRenderOf(v_opts_5549_);
v___x_5554_ = lean_alloc_ctor(3, 0, 1);
lean_ctor_set_uint8(v___x_5554_, 0, v___x_5553_);
v___x_5555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5555_, 0, v___x_5554_);
return v___x_5555_;
}
case 43:
{
lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; 
v___x_5556_ = lp_lean_x2dftml_LeanFtml_coRenderOf(v_opts_5549_);
v___x_5557_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5557_, 0, v___x_5556_);
v___x_5558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5558_, 0, v___x_5557_);
return v___x_5558_;
}
case 44:
{
lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; 
v___x_5559_ = lp_lean_x2dftml_LeanFtml_tvRenderOf(v_opts_5549_);
v___x_5560_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_5560_, 0, v___x_5559_);
v___x_5561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5561_, 0, v___x_5560_);
return v___x_5561_;
}
default: 
{
lean_object* v___x_5562_; 
v___x_5562_ = lean_box(0);
return v___x_5562_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containShapeOf___boxed(lean_object* v_r_5563_, lean_object* v_opts_5564_){
_start:
{
uint8_t v_r_boxed_5565_; lean_object* v_res_5566_; 
v_r_boxed_5565_ = lean_unbox(v_r_5563_);
v_res_5566_ = lp_lean_x2dftml_LeanFtml_containShapeOf(v_r_boxed_5565_, v_opts_5564_);
lean_dec(v_opts_5564_);
return v_res_5566_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassOf(uint8_t v_r_5567_, lean_object* v_opts_5568_){
_start:
{
lean_object* v___x_5569_; 
v___x_5569_ = lp_lean_x2dftml_LeanFtml_containShapeOf(v_r_5567_, v_opts_5568_);
if (lean_obj_tag(v___x_5569_) == 0)
{
lean_object* v___x_5570_; 
v___x_5570_ = lean_box(0);
return v___x_5570_;
}
else
{
lean_object* v_val_5571_; lean_object* v___x_5572_; 
v_val_5571_ = lean_ctor_get(v___x_5569_, 0);
lean_inc(v_val_5571_);
lean_dec_ref_known(v___x_5569_, 1);
v___x_5572_ = lp_lean_x2dftml_LeanFtml_containClassify(v_val_5571_);
lean_dec(v_val_5571_);
return v___x_5572_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containClassOf___boxed(lean_object* v_r_5573_, lean_object* v_opts_5574_){
_start:
{
uint8_t v_r_boxed_5575_; lean_object* v_res_5576_; 
v_r_boxed_5575_ = lean_unbox(v_r_5573_);
v_res_5576_ = lp_lean_x2dftml_LeanFtml_containClassOf(v_r_boxed_5575_, v_opts_5574_);
lean_dec(v_opts_5574_);
return v_res_5576_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_containMemClass_spec__0(uint8_t v_a_5577_, lean_object* v_x_5578_){
_start:
{
if (lean_obj_tag(v_x_5578_) == 0)
{
uint8_t v___x_5579_; 
v___x_5579_ = 0;
return v___x_5579_;
}
else
{
lean_object* v_head_5580_; lean_object* v_tail_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; uint8_t v___x_5585_; 
v_head_5580_ = lean_ctor_get(v_x_5578_, 0);
v_tail_5581_ = lean_ctor_get(v_x_5578_, 1);
v___x_5582_ = lean_box(v_a_5577_);
v___x_5583_ = lean_obj_tag_nat(v___x_5582_);
lean_dec(v___x_5582_);
v___x_5584_ = lean_obj_tag_nat(v_head_5580_);
v___x_5585_ = lean_nat_dec_eq(v___x_5583_, v___x_5584_);
if (v___x_5585_ == 0)
{
v_x_5578_ = v_tail_5581_;
goto _start;
}
else
{
return v___x_5585_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_containMemClass_spec__0___boxed(lean_object* v_a_5587_, lean_object* v_x_5588_){
_start:
{
uint8_t v_a_boxed_5589_; uint8_t v_res_5590_; lean_object* v_r_5591_; 
v_a_boxed_5589_ = lean_unbox(v_a_5587_);
v_res_5590_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_containMemClass_spec__0(v_a_boxed_5589_, v_x_5588_);
lean_dec(v_x_5588_);
v_r_5591_ = lean_box(v_res_5590_);
return v_r_5591_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_containMemClass(uint8_t v_c_5592_, uint8_t v_r_5593_, lean_object* v_opts_5594_){
_start:
{
lean_object* v___x_5595_; uint8_t v___x_5596_; 
v___x_5595_ = lp_lean_x2dftml_LeanFtml_containClassOf(v_r_5593_, v_opts_5594_);
v___x_5596_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_containMemClass_spec__0(v_c_5592_, v___x_5595_);
lean_dec(v___x_5595_);
return v___x_5596_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containMemClass___boxed(lean_object* v_c_5597_, lean_object* v_r_5598_, lean_object* v_opts_5599_){
_start:
{
uint8_t v_c_boxed_5600_; uint8_t v_r_boxed_5601_; uint8_t v_res_5602_; lean_object* v_r_5603_; 
v_c_boxed_5600_ = lean_unbox(v_c_5597_);
v_r_boxed_5601_ = lean_unbox(v_r_5598_);
v_res_5602_ = lp_lean_x2dftml_LeanFtml_containMemClass(v_c_boxed_5600_, v_r_boxed_5601_, v_opts_5599_);
lean_dec(v_opts_5599_);
v_r_5603_ = lean_box(v_res_5602_);
return v_r_5603_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter___redArg(uint8_t v_x_5604_, lean_object* v_h__1_5605_, lean_object* v_h__2_5606_, lean_object* v_h__3_5607_, lean_object* v_h__4_5608_, lean_object* v_h__5_5609_){
_start:
{
switch(v_x_5604_)
{
case 13:
{
lean_object* v___x_5610_; lean_object* v___x_5611_; 
lean_dec(v_h__5_5609_);
lean_dec(v_h__4_5608_);
lean_dec(v_h__3_5607_);
lean_dec(v_h__2_5606_);
v___x_5610_ = lean_box(0);
v___x_5611_ = lean_apply_1(v_h__1_5605_, v___x_5610_);
return v___x_5611_;
}
case 51:
{
lean_object* v___x_5612_; lean_object* v___x_5613_; 
lean_dec(v_h__5_5609_);
lean_dec(v_h__4_5608_);
lean_dec(v_h__3_5607_);
lean_dec(v_h__1_5605_);
v___x_5612_ = lean_box(0);
v___x_5613_ = lean_apply_1(v_h__2_5606_, v___x_5612_);
return v___x_5613_;
}
case 43:
{
lean_object* v___x_5614_; lean_object* v___x_5615_; 
lean_dec(v_h__5_5609_);
lean_dec(v_h__4_5608_);
lean_dec(v_h__2_5606_);
lean_dec(v_h__1_5605_);
v___x_5614_ = lean_box(0);
v___x_5615_ = lean_apply_1(v_h__3_5607_, v___x_5614_);
return v___x_5615_;
}
case 44:
{
lean_object* v___x_5616_; lean_object* v___x_5617_; 
lean_dec(v_h__5_5609_);
lean_dec(v_h__3_5607_);
lean_dec(v_h__2_5606_);
lean_dec(v_h__1_5605_);
v___x_5616_ = lean_box(0);
v___x_5617_ = lean_apply_1(v_h__4_5608_, v___x_5616_);
return v___x_5617_;
}
default: 
{
lean_object* v___x_5618_; lean_object* v___x_5619_; 
lean_dec(v_h__4_5608_);
lean_dec(v_h__3_5607_);
lean_dec(v_h__2_5606_);
lean_dec(v_h__1_5605_);
v___x_5618_ = lean_box(v_x_5604_);
v___x_5619_ = lean_apply_5(v_h__5_5609_, v___x_5618_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_5619_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter___redArg___boxed(lean_object* v_x_5620_, lean_object* v_h__1_5621_, lean_object* v_h__2_5622_, lean_object* v_h__3_5623_, lean_object* v_h__4_5624_, lean_object* v_h__5_5625_){
_start:
{
uint8_t v_x_28__boxed_5626_; lean_object* v_res_5627_; 
v_x_28__boxed_5626_ = lean_unbox(v_x_5620_);
v_res_5627_ = lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter___redArg(v_x_28__boxed_5626_, v_h__1_5621_, v_h__2_5622_, v_h__3_5623_, v_h__4_5624_, v_h__5_5625_);
return v_res_5627_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter(lean_object* v_motive_5628_, uint8_t v_x_5629_, lean_object* v_h__1_5630_, lean_object* v_h__2_5631_, lean_object* v_h__3_5632_, lean_object* v_h__4_5633_, lean_object* v_h__5_5634_){
_start:
{
switch(v_x_5629_)
{
case 13:
{
lean_object* v___x_5635_; lean_object* v___x_5636_; 
lean_dec(v_h__5_5634_);
lean_dec(v_h__4_5633_);
lean_dec(v_h__3_5632_);
lean_dec(v_h__2_5631_);
v___x_5635_ = lean_box(0);
v___x_5636_ = lean_apply_1(v_h__1_5630_, v___x_5635_);
return v___x_5636_;
}
case 51:
{
lean_object* v___x_5637_; lean_object* v___x_5638_; 
lean_dec(v_h__5_5634_);
lean_dec(v_h__4_5633_);
lean_dec(v_h__3_5632_);
lean_dec(v_h__1_5630_);
v___x_5637_ = lean_box(0);
v___x_5638_ = lean_apply_1(v_h__2_5631_, v___x_5637_);
return v___x_5638_;
}
case 43:
{
lean_object* v___x_5639_; lean_object* v___x_5640_; 
lean_dec(v_h__5_5634_);
lean_dec(v_h__4_5633_);
lean_dec(v_h__2_5631_);
lean_dec(v_h__1_5630_);
v___x_5639_ = lean_box(0);
v___x_5640_ = lean_apply_1(v_h__3_5632_, v___x_5639_);
return v___x_5640_;
}
case 44:
{
lean_object* v___x_5641_; lean_object* v___x_5642_; 
lean_dec(v_h__5_5634_);
lean_dec(v_h__3_5632_);
lean_dec(v_h__2_5631_);
lean_dec(v_h__1_5630_);
v___x_5641_ = lean_box(0);
v___x_5642_ = lean_apply_1(v_h__4_5633_, v___x_5641_);
return v___x_5642_;
}
default: 
{
lean_object* v___x_5643_; lean_object* v___x_5644_; 
lean_dec(v_h__4_5633_);
lean_dec(v_h__3_5632_);
lean_dec(v_h__2_5631_);
lean_dec(v_h__1_5630_);
v___x_5643_ = lean_box(v_x_5629_);
v___x_5644_ = lean_apply_5(v_h__5_5634_, v___x_5643_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_5644_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter___boxed(lean_object* v_motive_5645_, lean_object* v_x_5646_, lean_object* v_h__1_5647_, lean_object* v_h__2_5648_, lean_object* v_h__3_5649_, lean_object* v_h__4_5650_, lean_object* v_h__5_5651_){
_start:
{
uint8_t v_x_51__boxed_5652_; lean_object* v_res_5653_; 
v_x_51__boxed_5652_ = lean_unbox(v_x_5646_);
v_res_5653_ = lp_lean_x2dftml___private_LeanFtml_CoverageContain_0__LeanFtml_isContainRenderRule_match__1_splitter(v_motive_5645_, v_x_51__boxed_5652_, v_h__1_5647_, v_h__2_5648_, v_h__3_5649_, v_h__4_5650_, v_h__5_5651_);
return v_res_5653_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_InteractiveRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ProseRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_BlockRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_CoverageContain(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_InteractiveRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ProseRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_BlockRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
