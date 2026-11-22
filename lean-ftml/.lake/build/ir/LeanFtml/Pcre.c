// Lean compiler output
// Module: LeanFtml.Pcre
// Imports: public import Init public meta import Init
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
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_pcreIsWsByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcreIsWsByte___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDigByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDigByte___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isWrdByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isWrdByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_foldByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_foldByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapCaseByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapCaseByte___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_byteMatchCI(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteMatchCI___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_rng_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_rng_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_wsp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_wsp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_nsp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_nsp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_dig_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_dig_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ndg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ndg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_wrd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_wrd_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_nwr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_nwr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedClsItem_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedClsItem_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedClsItem_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedClsItem_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedClsItem_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedClsItem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedClsItem_default___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.ClsItem.wsp"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.ClsItem.nsp"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.ClsItem.dig"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.ClsItem.ndg"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.ClsItem.wrd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.ClsItem.nwr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.ClsItem.rng"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprClsItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprClsItem___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_clsItemMatch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clsItemMatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_clsMatch_spec__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_clsMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_clsMatch(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clsMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_eps_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_eps_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_byte_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_byte_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_dot_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_dot_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_cls_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_cls_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_seq_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_seq_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_alt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_alt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_rep_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_rep_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_bol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_bol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_eol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_eol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRE_default;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRE;
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__2_value;
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__5_value;
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__7;
static lean_once_cell_t lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__8;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanFtml.RE.eps"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanFtml.RE.dot"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanFtml.RE.bol"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanFtml.RE.eol"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LeanFtml.RE.byte"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanFtml.RE.cls"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanFtml.RE.seq"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__16_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanFtml.RE.alt"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__19_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanFtml.RE.rep"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__22_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprRE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprRE_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprRE = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRE___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRE___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedPcreParsed_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedPcreParsed_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedPcreParsed_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedPcreParsed_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedPcreParsed_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedPcreParsed = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedPcreParsed_default___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ast"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ci"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dotall"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__16;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprPcreParsed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPcreParsed___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_dedupN_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_dedupN_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dedupN_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dedupN_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dedupN(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_repCollect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_repCollect___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_repCollect___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_repCollect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_repCollect_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_repCollect_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_repCollect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mFuel;
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mEnds_spec__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mEnds___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mEnds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mEnds___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mEnds___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mEnds(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mEnds___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mEnds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mEnds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_pcreMatch_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_pcreMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_pcreMatch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcreMatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcrePrefixEnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcreReplaceAll_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcreReplaceAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitPattern_go(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitPattern_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitPattern(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_item_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_item_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_chr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_chr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedClassPiece_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedClsItem_default___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedClassPiece_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedClassPiece_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedClassPiece_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedClassPiece_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedClassPiece = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedClassPiece_default___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classChar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classChar___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classChar___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classChar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classChar___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classChar___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classChar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classChar___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classChar___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classChar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classChar___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classChar___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classChar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classChar___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classChar___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classChar___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classChar___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classChar___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classChar(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseClassItems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseClassItems___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseClassItems___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseClassItems(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseClassItems___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseClass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseClass___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_digitPrefix_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_digitPrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_digitPrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_digitPrefix_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_digitPrefix(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___lam__0___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseQuant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseQuant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseQuant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseQuant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseQuant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseQuant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseQuant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseQuant___closed__6_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseQuant(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instInhabitedParseTask_default;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instInhabitedParseTask;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseGo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseGo___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseGo___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseGo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseGo___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseGo___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_parseGo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_parseGo___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_parseGo___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseGo(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseGo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_parsePcre_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parsePcre(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_pcreIsWsByte(lean_object* v_b_1_){
_start:
{
lean_object* v___x_2_; uint8_t v___x_3_; 
v___x_2_ = lean_unsigned_to_nat(32u);
v___x_3_ = lean_nat_dec_eq(v_b_1_, v___x_2_);
if (v___x_3_ == 0)
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_unsigned_to_nat(9u);
v___x_5_ = lean_nat_dec_eq(v_b_1_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = lean_unsigned_to_nat(10u);
v___x_7_ = lean_nat_dec_eq(v_b_1_, v___x_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_8_ = lean_unsigned_to_nat(13u);
v___x_9_ = lean_nat_dec_eq(v_b_1_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(12u);
v___x_11_ = lean_nat_dec_eq(v_b_1_, v___x_10_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; uint8_t v___x_13_; 
v___x_12_ = lean_unsigned_to_nat(11u);
v___x_13_ = lean_nat_dec_eq(v_b_1_, v___x_12_);
return v___x_13_;
}
else
{
return v___x_11_;
}
}
else
{
return v___x_9_;
}
}
else
{
return v___x_7_;
}
}
else
{
return v___x_5_;
}
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcreIsWsByte___boxed(lean_object* v_b_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = lp_lean_x2dftml_LeanFtml_pcreIsWsByte(v_b_14_);
lean_dec(v_b_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDigByte(lean_object* v_b_17_){
_start:
{
lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_18_ = lean_unsigned_to_nat(48u);
v___x_19_ = lean_nat_dec_le(v___x_18_, v_b_17_);
if (v___x_19_ == 0)
{
return v___x_19_;
}
else
{
lean_object* v___x_20_; uint8_t v___x_21_; 
v___x_20_ = lean_unsigned_to_nat(57u);
v___x_21_ = lean_nat_dec_le(v_b_17_, v___x_20_);
return v___x_21_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDigByte___boxed(lean_object* v_b_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = lp_lean_x2dftml_LeanFtml_isDigByte(v_b_22_);
lean_dec(v_b_22_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isWrdByte(lean_object* v_b_25_){
_start:
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(65u);
v___x_40_ = lean_nat_dec_le(v___x_39_, v_b_25_);
if (v___x_40_ == 0)
{
goto v___jp_34_;
}
else
{
lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(90u);
v___x_42_ = lean_nat_dec_le(v_b_25_, v___x_41_);
if (v___x_42_ == 0)
{
goto v___jp_34_;
}
else
{
return v___x_42_;
}
}
v___jp_26_:
{
lean_object* v___x_27_; uint8_t v___x_28_; 
v___x_27_ = lean_unsigned_to_nat(95u);
v___x_28_ = lean_nat_dec_eq(v_b_25_, v___x_27_);
return v___x_28_;
}
v___jp_29_:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(48u);
v___x_31_ = lean_nat_dec_le(v___x_30_, v_b_25_);
if (v___x_31_ == 0)
{
goto v___jp_26_;
}
else
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(57u);
v___x_33_ = lean_nat_dec_le(v_b_25_, v___x_32_);
if (v___x_33_ == 0)
{
goto v___jp_26_;
}
else
{
return v___x_33_;
}
}
}
v___jp_34_:
{
lean_object* v___x_35_; uint8_t v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(97u);
v___x_36_ = lean_nat_dec_le(v___x_35_, v_b_25_);
if (v___x_36_ == 0)
{
goto v___jp_29_;
}
else
{
lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(122u);
v___x_38_ = lean_nat_dec_le(v_b_25_, v___x_37_);
if (v___x_38_ == 0)
{
goto v___jp_29_;
}
else
{
return v___x_38_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isWrdByte___boxed(lean_object* v_b_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = lp_lean_x2dftml_LeanFtml_isWrdByte(v_b_43_);
lean_dec(v_b_43_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_foldByte(lean_object* v_b_46_){
_start:
{
lean_object* v___x_47_; uint8_t v___x_48_; 
v___x_47_ = lean_unsigned_to_nat(97u);
v___x_48_ = lean_nat_dec_le(v___x_47_, v_b_46_);
if (v___x_48_ == 0)
{
lean_inc(v_b_46_);
return v_b_46_;
}
else
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(122u);
v___x_50_ = lean_nat_dec_le(v_b_46_, v___x_49_);
if (v___x_50_ == 0)
{
lean_inc(v_b_46_);
return v_b_46_;
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(32u);
v___x_52_ = lean_nat_sub(v_b_46_, v___x_51_);
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_foldByte___boxed(lean_object* v_b_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_lean_x2dftml_LeanFtml_foldByte(v_b_53_);
lean_dec(v_b_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapCaseByte(lean_object* v_b_55_){
_start:
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = lean_unsigned_to_nat(97u);
v___x_64_ = lean_nat_dec_le(v___x_63_, v_b_55_);
if (v___x_64_ == 0)
{
goto v___jp_56_;
}
else
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(122u);
v___x_66_ = lean_nat_dec_le(v_b_55_, v___x_65_);
if (v___x_66_ == 0)
{
goto v___jp_56_;
}
else
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(32u);
v___x_68_ = lean_nat_sub(v_b_55_, v___x_67_);
return v___x_68_;
}
}
v___jp_56_:
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_unsigned_to_nat(65u);
v___x_58_ = lean_nat_dec_le(v___x_57_, v_b_55_);
if (v___x_58_ == 0)
{
lean_inc(v_b_55_);
return v_b_55_;
}
else
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = lean_unsigned_to_nat(90u);
v___x_60_ = lean_nat_dec_le(v_b_55_, v___x_59_);
if (v___x_60_ == 0)
{
lean_inc(v_b_55_);
return v_b_55_;
}
else
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(32u);
v___x_62_ = lean_nat_add(v_b_55_, v___x_61_);
return v___x_62_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapCaseByte___boxed(lean_object* v_b_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = lp_lean_x2dftml_LeanFtml_swapCaseByte(v_b_69_);
lean_dec(v_b_69_);
return v_res_70_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_byteMatchCI(uint8_t v_ci_71_, lean_object* v_pat_72_, lean_object* v_subj_73_){
_start:
{
uint8_t v___x_74_; 
v___x_74_ = lean_nat_dec_eq(v_pat_72_, v_subj_73_);
if (v___x_74_ == 0)
{
if (v_ci_71_ == 0)
{
return v_ci_71_;
}
else
{
lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_75_ = lp_lean_x2dftml_LeanFtml_foldByte(v_pat_72_);
v___x_76_ = lp_lean_x2dftml_LeanFtml_foldByte(v_subj_73_);
v___x_77_ = lean_nat_dec_eq(v___x_75_, v___x_76_);
lean_dec(v___x_76_);
lean_dec(v___x_75_);
return v___x_77_;
}
}
else
{
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteMatchCI___boxed(lean_object* v_ci_78_, lean_object* v_pat_79_, lean_object* v_subj_80_){
_start:
{
uint8_t v_ci_boxed_81_; uint8_t v_res_82_; lean_object* v_r_83_; 
v_ci_boxed_81_ = lean_unbox(v_ci_78_);
v_res_82_ = lp_lean_x2dftml_LeanFtml_byteMatchCI(v_ci_boxed_81_, v_pat_79_, v_subj_80_);
lean_dec(v_subj_80_);
lean_dec(v_pat_79_);
v_r_83_ = lean_box(v_res_82_);
return v_r_83_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorIdx___impl(lean_object* v_x_84_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_obj_tag_nat(v_x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorIdx___impl___boxed(lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorIdx___impl(v_x_86_);
lean_dec(v_x_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(lean_object* v_t_88_, lean_object* v_k_89_){
_start:
{
if (lean_obj_tag(v_t_88_) == 0)
{
lean_object* v_a_90_; lean_object* v_a_91_; lean_object* v___x_92_; 
v_a_90_ = lean_ctor_get(v_t_88_, 0);
lean_inc(v_a_90_);
v_a_91_ = lean_ctor_get(v_t_88_, 1);
lean_inc(v_a_91_);
lean_dec_ref_known(v_t_88_, 2);
v___x_92_ = lean_apply_2(v_k_89_, v_a_90_, v_a_91_);
return v___x_92_;
}
else
{
lean_dec(v_t_88_);
return v_k_89_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim(lean_object* v_motive_93_, lean_object* v_ctorIdx_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_k_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_95_, v_k_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___boxed(lean_object* v_motive_99_, lean_object* v_ctorIdx_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_k_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim(v_motive_99_, v_ctorIdx_100_, v_t_101_, v_h_102_, v_k_103_);
lean_dec(v_ctorIdx_100_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_rng_elim___redArg(lean_object* v_t_105_, lean_object* v_rng_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_105_, v_rng_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_rng_elim(lean_object* v_motive_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_rng_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_109_, v_rng_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_wsp_elim___redArg(lean_object* v_t_113_, lean_object* v_wsp_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_113_, v_wsp_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_wsp_elim(lean_object* v_motive_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_wsp_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_117_, v_wsp_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_nsp_elim___redArg(lean_object* v_t_121_, lean_object* v_nsp_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_121_, v_nsp_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_nsp_elim(lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_nsp_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_125_, v_nsp_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_dig_elim___redArg(lean_object* v_t_129_, lean_object* v_dig_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_129_, v_dig_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_dig_elim(lean_object* v_motive_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_dig_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_133_, v_dig_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ndg_elim___redArg(lean_object* v_t_137_, lean_object* v_ndg_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_137_, v_ndg_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_ndg_elim(lean_object* v_motive_140_, lean_object* v_t_141_, lean_object* v_h_142_, lean_object* v_ndg_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_141_, v_ndg_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_wrd_elim___redArg(lean_object* v_t_145_, lean_object* v_wrd_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_145_, v_wrd_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_wrd_elim(lean_object* v_motive_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_wrd_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_149_, v_wrd_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_nwr_elim___redArg(lean_object* v_t_153_, lean_object* v_nwr_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_153_, v_nwr_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClsItem_nwr_elim(lean_object* v_motive_156_, lean_object* v_t_157_, lean_object* v_h_158_, lean_object* v_nwr_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lp_lean_x2dftml_LeanFtml_ClsItem_ctorElim___redArg(v_t_157_, v_nwr_159_);
return v___x_160_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_unsigned_to_nat(2u);
v___x_190_ = lean_nat_to_int(v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_nat_to_int(v___x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr(lean_object* v_x_193_, lean_object* v_prec_194_){
_start:
{
lean_object* v___y_196_; lean_object* v___y_203_; lean_object* v___y_210_; lean_object* v___y_217_; lean_object* v___y_224_; lean_object* v___y_231_; 
switch(lean_obj_tag(v_x_193_))
{
case 0:
{
lean_object* v_a_237_; lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_263_; 
v_a_237_ = lean_ctor_get(v_x_193_, 0);
v_a_238_ = lean_ctor_get(v_x_193_, 1);
v_isSharedCheck_263_ = !lean_is_exclusive(v_x_193_);
if (v_isSharedCheck_263_ == 0)
{
v___x_240_ = v_x_193_;
v_isShared_241_ = v_isSharedCheck_263_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_inc(v_a_237_);
lean_dec(v_x_193_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_263_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___y_243_; lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_unsigned_to_nat(1024u);
v___x_260_ = lean_nat_dec_le(v___x_259_, v_prec_194_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_243_ = v___x_261_;
goto v___jp_242_;
}
else
{
lean_object* v___x_262_; 
v___x_262_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_243_ = v___x_262_;
goto v___jp_242_;
}
v___jp_242_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_244_ = lean_box(1);
v___x_245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__14));
v___x_246_ = l_Nat_reprFast(v_a_237_);
v___x_247_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
if (v_isShared_241_ == 0)
{
lean_ctor_set_tag(v___x_240_, 5);
lean_ctor_set(v___x_240_, 1, v___x_247_);
lean_ctor_set(v___x_240_, 0, v___x_245_);
v___x_249_ = v___x_240_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v___x_247_);
v___x_249_ = v_reuseFailAlloc_258_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
lean_ctor_set(v___x_250_, 1, v___x_244_);
v___x_251_ = l_Nat_reprFast(v_a_238_);
v___x_252_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
v___x_253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_250_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
lean_inc(v___y_243_);
v___x_254_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_254_, 0, v___y_243_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = 0;
v___x_256_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set_uint8(v___x_256_, sizeof(void*)*1, v___x_255_);
v___x_257_ = l_Repr_addAppParen(v___x_256_, v_prec_194_);
return v___x_257_;
}
}
}
}
case 1:
{
lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_264_ = lean_unsigned_to_nat(1024u);
v___x_265_ = lean_nat_dec_le(v___x_264_, v_prec_194_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_196_ = v___x_266_;
goto v___jp_195_;
}
else
{
lean_object* v___x_267_; 
v___x_267_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_196_ = v___x_267_;
goto v___jp_195_;
}
}
case 2:
{
lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_268_ = lean_unsigned_to_nat(1024u);
v___x_269_ = lean_nat_dec_le(v___x_268_, v_prec_194_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_203_ = v___x_270_;
goto v___jp_202_;
}
else
{
lean_object* v___x_271_; 
v___x_271_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_203_ = v___x_271_;
goto v___jp_202_;
}
}
case 3:
{
lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_272_ = lean_unsigned_to_nat(1024u);
v___x_273_ = lean_nat_dec_le(v___x_272_, v_prec_194_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; 
v___x_274_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_210_ = v___x_274_;
goto v___jp_209_;
}
else
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_210_ = v___x_275_;
goto v___jp_209_;
}
}
case 4:
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = lean_unsigned_to_nat(1024u);
v___x_277_ = lean_nat_dec_le(v___x_276_, v_prec_194_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_217_ = v___x_278_;
goto v___jp_216_;
}
else
{
lean_object* v___x_279_; 
v___x_279_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_217_ = v___x_279_;
goto v___jp_216_;
}
}
case 5:
{
lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(1024u);
v___x_281_ = lean_nat_dec_le(v___x_280_, v_prec_194_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; 
v___x_282_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_224_ = v___x_282_;
goto v___jp_223_;
}
else
{
lean_object* v___x_283_; 
v___x_283_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_224_ = v___x_283_;
goto v___jp_223_;
}
}
default: 
{
lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_284_ = lean_unsigned_to_nat(1024u);
v___x_285_ = lean_nat_dec_le(v___x_284_, v_prec_194_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; 
v___x_286_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_231_ = v___x_286_;
goto v___jp_230_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_231_ = v___x_287_;
goto v___jp_230_;
}
}
}
v___jp_195_:
{
lean_object* v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_197_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__1));
lean_inc(v___y_196_);
v___x_198_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_198_, 0, v___y_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = 0;
v___x_200_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set_uint8(v___x_200_, sizeof(void*)*1, v___x_199_);
v___x_201_ = l_Repr_addAppParen(v___x_200_, v_prec_194_);
return v___x_201_;
}
v___jp_202_:
{
lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_204_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__3));
lean_inc(v___y_203_);
v___x_205_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_205_, 0, v___y_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = 0;
v___x_207_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_207_, 0, v___x_205_);
lean_ctor_set_uint8(v___x_207_, sizeof(void*)*1, v___x_206_);
v___x_208_ = l_Repr_addAppParen(v___x_207_, v_prec_194_);
return v___x_208_;
}
v___jp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_211_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__5));
lean_inc(v___y_210_);
v___x_212_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_212_, 0, v___y_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = 0;
v___x_214_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set_uint8(v___x_214_, sizeof(void*)*1, v___x_213_);
v___x_215_ = l_Repr_addAppParen(v___x_214_, v_prec_194_);
return v___x_215_;
}
v___jp_216_:
{
lean_object* v___x_218_; lean_object* v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_218_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__7));
lean_inc(v___y_217_);
v___x_219_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_219_, 0, v___y_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = 0;
v___x_221_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set_uint8(v___x_221_, sizeof(void*)*1, v___x_220_);
v___x_222_ = l_Repr_addAppParen(v___x_221_, v_prec_194_);
return v___x_222_;
}
v___jp_223_:
{
lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_225_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__9));
lean_inc(v___y_224_);
v___x_226_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_226_, 0, v___y_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = 0;
v___x_228_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set_uint8(v___x_228_, sizeof(void*)*1, v___x_227_);
v___x_229_ = l_Repr_addAppParen(v___x_228_, v_prec_194_);
return v___x_229_;
}
v___jp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_232_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__11));
lean_inc(v___y_231_);
v___x_233_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_233_, 0, v___y_231_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = 0;
v___x_235_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_235_, 0, v___x_233_);
lean_ctor_set_uint8(v___x_235_, sizeof(void*)*1, v___x_234_);
v___x_236_ = l_Repr_addAppParen(v___x_235_, v_prec_194_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___boxed(lean_object* v_x_288_, lean_object* v_prec_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = lp_lean_x2dftml_LeanFtml_instReprClsItem_repr(v_x_288_, v_prec_289_);
lean_dec(v_prec_289_);
return v_res_290_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem_decEq(lean_object* v_x_293_, lean_object* v_x_294_){
_start:
{
switch(lean_obj_tag(v_x_293_))
{
case 0:
{
if (lean_obj_tag(v_x_294_) == 0)
{
lean_object* v_a_295_; lean_object* v_a_296_; lean_object* v_a_297_; lean_object* v_a_298_; uint8_t v___x_299_; 
v_a_295_ = lean_ctor_get(v_x_293_, 0);
v_a_296_ = lean_ctor_get(v_x_293_, 1);
v_a_297_ = lean_ctor_get(v_x_294_, 0);
v_a_298_ = lean_ctor_get(v_x_294_, 1);
v___x_299_ = lean_nat_dec_eq(v_a_295_, v_a_297_);
if (v___x_299_ == 0)
{
return v___x_299_;
}
else
{
uint8_t v___x_300_; 
v___x_300_ = lean_nat_dec_eq(v_a_296_, v_a_298_);
return v___x_300_;
}
}
else
{
uint8_t v___x_301_; 
v___x_301_ = 0;
return v___x_301_;
}
}
case 1:
{
if (lean_obj_tag(v_x_294_) == 1)
{
uint8_t v___x_302_; 
v___x_302_ = 1;
return v___x_302_;
}
else
{
uint8_t v___x_303_; 
v___x_303_ = 0;
return v___x_303_;
}
}
case 2:
{
if (lean_obj_tag(v_x_294_) == 2)
{
uint8_t v___x_304_; 
v___x_304_ = 1;
return v___x_304_;
}
else
{
uint8_t v___x_305_; 
v___x_305_ = 0;
return v___x_305_;
}
}
case 3:
{
if (lean_obj_tag(v_x_294_) == 3)
{
uint8_t v___x_306_; 
v___x_306_ = 1;
return v___x_306_;
}
else
{
uint8_t v___x_307_; 
v___x_307_ = 0;
return v___x_307_;
}
}
case 4:
{
if (lean_obj_tag(v_x_294_) == 4)
{
uint8_t v___x_308_; 
v___x_308_ = 1;
return v___x_308_;
}
else
{
uint8_t v___x_309_; 
v___x_309_ = 0;
return v___x_309_;
}
}
case 5:
{
if (lean_obj_tag(v_x_294_) == 5)
{
uint8_t v___x_310_; 
v___x_310_ = 1;
return v___x_310_;
}
else
{
uint8_t v___x_311_; 
v___x_311_ = 0;
return v___x_311_;
}
}
default: 
{
if (lean_obj_tag(v_x_294_) == 6)
{
uint8_t v___x_312_; 
v___x_312_ = 1;
return v___x_312_;
}
else
{
uint8_t v___x_313_; 
v___x_313_ = 0;
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem_decEq___boxed(lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
uint8_t v_res_316_; lean_object* v_r_317_; 
v_res_316_ = lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem_decEq(v_x_314_, v_x_315_);
lean_dec(v_x_315_);
lean_dec(v_x_314_);
v_r_317_ = lean_box(v_res_316_);
return v_r_317_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem(lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
uint8_t v___x_320_; 
v___x_320_ = lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem_decEq(v_x_318_, v_x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem___boxed(lean_object* v_x_321_, lean_object* v_x_322_){
_start:
{
uint8_t v_res_323_; lean_object* v_r_324_; 
v_res_323_ = lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem(v_x_321_, v_x_322_);
lean_dec(v_x_322_);
lean_dec(v_x_321_);
v_r_324_ = lean_box(v_res_323_);
return v_r_324_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_clsItemMatch(lean_object* v_x_325_, lean_object* v_x_326_){
_start:
{
switch(lean_obj_tag(v_x_325_))
{
case 0:
{
lean_object* v_a_327_; lean_object* v_a_328_; uint8_t v___x_329_; 
v_a_327_ = lean_ctor_get(v_x_325_, 0);
v_a_328_ = lean_ctor_get(v_x_325_, 1);
v___x_329_ = lean_nat_dec_le(v_a_327_, v_x_326_);
if (v___x_329_ == 0)
{
return v___x_329_;
}
else
{
uint8_t v___x_330_; 
v___x_330_ = lean_nat_dec_le(v_x_326_, v_a_328_);
return v___x_330_;
}
}
case 1:
{
uint8_t v___x_331_; 
v___x_331_ = lp_lean_x2dftml_LeanFtml_pcreIsWsByte(v_x_326_);
return v___x_331_;
}
case 2:
{
uint8_t v___x_332_; 
v___x_332_ = lp_lean_x2dftml_LeanFtml_pcreIsWsByte(v_x_326_);
if (v___x_332_ == 0)
{
uint8_t v___x_333_; 
v___x_333_ = 1;
return v___x_333_;
}
else
{
uint8_t v___x_334_; 
v___x_334_ = 0;
return v___x_334_;
}
}
case 3:
{
uint8_t v___x_335_; 
v___x_335_ = lp_lean_x2dftml_LeanFtml_isDigByte(v_x_326_);
return v___x_335_;
}
case 4:
{
uint8_t v___x_336_; 
v___x_336_ = lp_lean_x2dftml_LeanFtml_isDigByte(v_x_326_);
if (v___x_336_ == 0)
{
uint8_t v___x_337_; 
v___x_337_ = 1;
return v___x_337_;
}
else
{
uint8_t v___x_338_; 
v___x_338_ = 0;
return v___x_338_;
}
}
case 5:
{
uint8_t v___x_339_; 
v___x_339_ = lp_lean_x2dftml_LeanFtml_isWrdByte(v_x_326_);
return v___x_339_;
}
default: 
{
uint8_t v___x_340_; 
v___x_340_ = lp_lean_x2dftml_LeanFtml_isWrdByte(v_x_326_);
if (v___x_340_ == 0)
{
uint8_t v___x_341_; 
v___x_341_ = 1;
return v___x_341_;
}
else
{
uint8_t v___x_342_; 
v___x_342_ = 0;
return v___x_342_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clsItemMatch___boxed(lean_object* v_x_343_, lean_object* v_x_344_){
_start:
{
uint8_t v_res_345_; lean_object* v_r_346_; 
v_res_345_ = lp_lean_x2dftml_LeanFtml_clsItemMatch(v_x_343_, v_x_344_);
lean_dec(v_x_344_);
lean_dec(v_x_343_);
v_r_346_ = lean_box(v_res_345_);
return v_r_346_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_clsMatch_spec__0(lean_object* v_b_347_, uint8_t v_ci_348_, lean_object* v_x_349_){
_start:
{
if (lean_obj_tag(v_x_349_) == 0)
{
uint8_t v___x_350_; 
v___x_350_ = 0;
return v___x_350_;
}
else
{
lean_object* v_head_351_; lean_object* v_tail_352_; uint8_t v___x_353_; 
v_head_351_ = lean_ctor_get(v_x_349_, 0);
v_tail_352_ = lean_ctor_get(v_x_349_, 1);
v___x_353_ = lp_lean_x2dftml_LeanFtml_clsItemMatch(v_head_351_, v_b_347_);
if (v___x_353_ == 0)
{
if (v_ci_348_ == 0)
{
v_x_349_ = v_tail_352_;
goto _start;
}
else
{
lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_355_ = lp_lean_x2dftml_LeanFtml_swapCaseByte(v_b_347_);
v___x_356_ = lp_lean_x2dftml_LeanFtml_clsItemMatch(v_head_351_, v___x_355_);
lean_dec(v___x_355_);
if (v___x_356_ == 0)
{
v_x_349_ = v_tail_352_;
goto _start;
}
else
{
return v___x_356_;
}
}
}
else
{
return v___x_353_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_clsMatch_spec__0___boxed(lean_object* v_b_358_, lean_object* v_ci_359_, lean_object* v_x_360_){
_start:
{
uint8_t v_ci_boxed_361_; uint8_t v_res_362_; lean_object* v_r_363_; 
v_ci_boxed_361_ = lean_unbox(v_ci_359_);
v_res_362_ = lp_lean_x2dftml_List_any___at___00LeanFtml_clsMatch_spec__0(v_b_358_, v_ci_boxed_361_, v_x_360_);
lean_dec(v_x_360_);
lean_dec(v_b_358_);
v_r_363_ = lean_box(v_res_362_);
return v_r_363_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_clsMatch(uint8_t v_neg_364_, lean_object* v_items_365_, uint8_t v_ci_366_, lean_object* v_b_367_){
_start:
{
uint8_t v_base_368_; 
v_base_368_ = lp_lean_x2dftml_List_any___at___00LeanFtml_clsMatch_spec__0(v_b_367_, v_ci_366_, v_items_365_);
if (v_neg_364_ == 0)
{
return v_base_368_;
}
else
{
if (v_base_368_ == 0)
{
return v_neg_364_;
}
else
{
uint8_t v___x_369_; 
v___x_369_ = 0;
return v___x_369_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clsMatch___boxed(lean_object* v_neg_370_, lean_object* v_items_371_, lean_object* v_ci_372_, lean_object* v_b_373_){
_start:
{
uint8_t v_neg_boxed_374_; uint8_t v_ci_boxed_375_; uint8_t v_res_376_; lean_object* v_r_377_; 
v_neg_boxed_374_ = lean_unbox(v_neg_370_);
v_ci_boxed_375_ = lean_unbox(v_ci_372_);
v_res_376_ = lp_lean_x2dftml_LeanFtml_clsMatch(v_neg_boxed_374_, v_items_371_, v_ci_boxed_375_, v_b_373_);
lean_dec(v_b_373_);
lean_dec(v_items_371_);
v_r_377_ = lean_box(v_res_376_);
return v_r_377_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorIdx___impl(lean_object* v_x_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_obj_tag_nat(v_x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorIdx___impl___boxed(lean_object* v_x_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = lp_lean_x2dftml_LeanFtml_RE_ctorIdx___impl(v_x_380_);
lean_dec(v_x_380_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(lean_object* v_t_382_, lean_object* v_k_383_){
_start:
{
switch(lean_obj_tag(v_t_382_))
{
case 1:
{
lean_object* v_a_384_; lean_object* v___x_385_; 
v_a_384_ = lean_ctor_get(v_t_382_, 0);
lean_inc(v_a_384_);
lean_dec_ref_known(v_t_382_, 1);
v___x_385_ = lean_apply_1(v_k_383_, v_a_384_);
return v___x_385_;
}
case 3:
{
uint8_t v_a_386_; lean_object* v_a_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_a_386_ = lean_ctor_get_uint8(v_t_382_, sizeof(void*)*1);
v_a_387_ = lean_ctor_get(v_t_382_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v_t_382_, 1);
v___x_388_ = lean_box(v_a_386_);
v___x_389_ = lean_apply_2(v_k_383_, v___x_388_, v_a_387_);
return v___x_389_;
}
case 4:
{
lean_object* v_a_390_; lean_object* v_a_391_; lean_object* v___x_392_; 
v_a_390_ = lean_ctor_get(v_t_382_, 0);
lean_inc(v_a_390_);
v_a_391_ = lean_ctor_get(v_t_382_, 1);
lean_inc(v_a_391_);
lean_dec_ref_known(v_t_382_, 2);
v___x_392_ = lean_apply_2(v_k_383_, v_a_390_, v_a_391_);
return v___x_392_;
}
case 5:
{
lean_object* v_a_393_; lean_object* v_a_394_; lean_object* v___x_395_; 
v_a_393_ = lean_ctor_get(v_t_382_, 0);
lean_inc(v_a_393_);
v_a_394_ = lean_ctor_get(v_t_382_, 1);
lean_inc(v_a_394_);
lean_dec_ref_known(v_t_382_, 2);
v___x_395_ = lean_apply_2(v_k_383_, v_a_393_, v_a_394_);
return v___x_395_;
}
case 6:
{
lean_object* v_a_396_; lean_object* v_a_397_; lean_object* v_a_398_; lean_object* v___x_399_; 
v_a_396_ = lean_ctor_get(v_t_382_, 0);
lean_inc(v_a_396_);
v_a_397_ = lean_ctor_get(v_t_382_, 1);
lean_inc(v_a_397_);
v_a_398_ = lean_ctor_get(v_t_382_, 2);
lean_inc(v_a_398_);
lean_dec_ref_known(v_t_382_, 3);
v___x_399_ = lean_apply_3(v_k_383_, v_a_396_, v_a_397_, v_a_398_);
return v___x_399_;
}
default: 
{
lean_dec(v_t_382_);
return v_k_383_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorElim(lean_object* v_motive_400_, lean_object* v_ctorIdx_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_k_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_402_, v_k_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_ctorElim___boxed(lean_object* v_motive_406_, lean_object* v_ctorIdx_407_, lean_object* v_t_408_, lean_object* v_h_409_, lean_object* v_k_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim(v_motive_406_, v_ctorIdx_407_, v_t_408_, v_h_409_, v_k_410_);
lean_dec(v_ctorIdx_407_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_eps_elim___redArg(lean_object* v_t_412_, lean_object* v_eps_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_412_, v_eps_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_eps_elim(lean_object* v_motive_415_, lean_object* v_t_416_, lean_object* v_h_417_, lean_object* v_eps_418_){
_start:
{
lean_object* v___x_419_; 
v___x_419_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_416_, v_eps_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_byte_elim___redArg(lean_object* v_t_420_, lean_object* v_byte_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_420_, v_byte_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_byte_elim(lean_object* v_motive_423_, lean_object* v_t_424_, lean_object* v_h_425_, lean_object* v_byte_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_424_, v_byte_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_dot_elim___redArg(lean_object* v_t_428_, lean_object* v_dot_429_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_428_, v_dot_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_dot_elim(lean_object* v_motive_431_, lean_object* v_t_432_, lean_object* v_h_433_, lean_object* v_dot_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_432_, v_dot_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_cls_elim___redArg(lean_object* v_t_436_, lean_object* v_cls_437_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_436_, v_cls_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_cls_elim(lean_object* v_motive_439_, lean_object* v_t_440_, lean_object* v_h_441_, lean_object* v_cls_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_440_, v_cls_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_seq_elim___redArg(lean_object* v_t_444_, lean_object* v_seq_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_444_, v_seq_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_seq_elim(lean_object* v_motive_447_, lean_object* v_t_448_, lean_object* v_h_449_, lean_object* v_seq_450_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_448_, v_seq_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_alt_elim___redArg(lean_object* v_t_452_, lean_object* v_alt_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_452_, v_alt_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_alt_elim(lean_object* v_motive_455_, lean_object* v_t_456_, lean_object* v_h_457_, lean_object* v_alt_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_456_, v_alt_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_rep_elim___redArg(lean_object* v_t_460_, lean_object* v_rep_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_460_, v_rep_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_rep_elim(lean_object* v_motive_463_, lean_object* v_t_464_, lean_object* v_h_465_, lean_object* v_rep_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_464_, v_rep_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_bol_elim___redArg(lean_object* v_t_468_, lean_object* v_bol_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_468_, v_bol_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_bol_elim(lean_object* v_motive_471_, lean_object* v_t_472_, lean_object* v_h_473_, lean_object* v_bol_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_472_, v_bol_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_eol_elim___redArg(lean_object* v_t_476_, lean_object* v_eol_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_476_, v_eol_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RE_eol_elim(lean_object* v_motive_479_, lean_object* v_t_480_, lean_object* v_h_481_, lean_object* v_eol_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = lp_lean_x2dftml_LeanFtml_RE_ctorElim___redArg(v_t_480_, v_eol_482_);
return v___x_483_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instInhabitedRE_default(void){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = lean_box(0);
return v___x_484_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instInhabitedRE(void){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = lean_box(0);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0___lam__0(lean_object* v___y_486_){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = lp_lean_x2dftml_LeanFtml_instReprClsItem_repr(v___y_486_, v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_489_, lean_object* v_x_490_, lean_object* v_x_491_){
_start:
{
if (lean_obj_tag(v_x_491_) == 0)
{
lean_dec(v_x_489_);
return v_x_490_;
}
else
{
lean_object* v_head_492_; lean_object* v_tail_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_504_; 
v_head_492_ = lean_ctor_get(v_x_491_, 0);
v_tail_493_ = lean_ctor_get(v_x_491_, 1);
v_isSharedCheck_504_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_504_ == 0)
{
v___x_495_ = v_x_491_;
v_isShared_496_ = v_isSharedCheck_504_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_tail_493_);
lean_inc(v_head_492_);
lean_dec(v_x_491_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_504_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
lean_inc(v_x_489_);
if (v_isShared_496_ == 0)
{
lean_ctor_set_tag(v___x_495_, 5);
lean_ctor_set(v___x_495_, 1, v_x_489_);
lean_ctor_set(v___x_495_, 0, v_x_490_);
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_x_490_);
lean_ctor_set(v_reuseFailAlloc_503_, 1, v_x_489_);
v___x_498_ = v_reuseFailAlloc_503_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_499_ = lean_unsigned_to_nat(0u);
v___x_500_ = lp_lean_x2dftml_LeanFtml_instReprClsItem_repr(v_head_492_, v___x_499_);
v___x_501_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_498_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
v_x_490_ = v___x_501_;
v_x_491_ = v_tail_493_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0_spec__1(lean_object* v_x_505_, lean_object* v_x_506_, lean_object* v_x_507_){
_start:
{
if (lean_obj_tag(v_x_507_) == 0)
{
lean_dec(v_x_505_);
return v_x_506_;
}
else
{
lean_object* v_head_508_; lean_object* v_tail_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_520_; 
v_head_508_ = lean_ctor_get(v_x_507_, 0);
v_tail_509_ = lean_ctor_get(v_x_507_, 1);
v_isSharedCheck_520_ = !lean_is_exclusive(v_x_507_);
if (v_isSharedCheck_520_ == 0)
{
v___x_511_ = v_x_507_;
v_isShared_512_ = v_isSharedCheck_520_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_tail_509_);
lean_inc(v_head_508_);
lean_dec(v_x_507_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_520_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
lean_inc(v_x_505_);
if (v_isShared_512_ == 0)
{
lean_ctor_set_tag(v___x_511_, 5);
lean_ctor_set(v___x_511_, 1, v_x_505_);
lean_ctor_set(v___x_511_, 0, v_x_506_);
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_x_506_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_x_505_);
v___x_514_ = v_reuseFailAlloc_519_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_515_ = lean_unsigned_to_nat(0u);
v___x_516_ = lp_lean_x2dftml_LeanFtml_instReprClsItem_repr(v_head_508_, v___x_515_);
v___x_517_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_514_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0_spec__1_spec__2(v_x_505_, v___x_517_, v_tail_509_);
return v___x_518_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0(lean_object* v_x_521_, lean_object* v_x_522_){
_start:
{
if (lean_obj_tag(v_x_521_) == 0)
{
lean_object* v___x_523_; 
lean_dec(v_x_522_);
v___x_523_ = lean_box(0);
return v___x_523_;
}
else
{
lean_object* v_tail_524_; 
v_tail_524_ = lean_ctor_get(v_x_521_, 1);
if (lean_obj_tag(v_tail_524_) == 0)
{
lean_object* v_head_525_; lean_object* v___x_526_; 
lean_dec(v_x_522_);
v_head_525_ = lean_ctor_get(v_x_521_, 0);
lean_inc(v_head_525_);
lean_dec_ref_known(v_x_521_, 2);
v___x_526_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0___lam__0(v_head_525_);
return v___x_526_;
}
else
{
lean_object* v_head_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
lean_inc(v_tail_524_);
v_head_527_ = lean_ctor_get(v_x_521_, 0);
lean_inc(v_head_527_);
lean_dec_ref_known(v_x_521_, 2);
v___x_528_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0___lam__0(v_head_527_);
v___x_529_ = lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0_spec__1(v_x_522_, v___x_528_, v_tail_524_);
return v___x_529_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__2));
v___x_542_ = lean_string_length(v___x_541_);
return v___x_542_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_obj_once(&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__7, &lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__7_once, _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__7);
v___x_544_ = lean_nat_to_int(v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg(lean_object* v_a_549_){
_start:
{
if (lean_obj_tag(v_a_549_) == 0)
{
lean_object* v___x_550_; 
v___x_550_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__1));
return v___x_550_;
}
else
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; lean_object* v___x_560_; 
v___x_551_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__5));
v___x_552_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprRE_repr_spec__0_spec__0(v_a_549_, v___x_551_);
v___x_553_ = lean_obj_once(&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__8, &lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__8_once, _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__8);
v___x_554_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__9));
v___x_555_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v___x_552_);
v___x_556_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__10));
v___x_557_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_555_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v___x_558_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_553_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = 0;
v___x_560_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_560_, 0, v___x_558_);
lean_ctor_set_uint8(v___x_560_, sizeof(void*)*1, v___x_559_);
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr(lean_object* v_x_603_, lean_object* v_prec_604_){
_start:
{
lean_object* v___y_606_; lean_object* v___y_613_; lean_object* v___y_620_; lean_object* v___y_627_; 
switch(lean_obj_tag(v_x_603_))
{
case 0:
{
lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_633_ = lean_unsigned_to_nat(1024u);
v___x_634_ = lean_nat_dec_le(v___x_633_, v_prec_604_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; 
v___x_635_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_606_ = v___x_635_;
goto v___jp_605_;
}
else
{
lean_object* v___x_636_; 
v___x_636_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_606_ = v___x_636_;
goto v___jp_605_;
}
}
case 1:
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_657_; 
v_a_637_ = lean_ctor_get(v_x_603_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v_x_603_);
if (v_isSharedCheck_657_ == 0)
{
v___x_639_ = v_x_603_;
v_isShared_640_ = v_isSharedCheck_657_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v_x_603_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_657_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___y_642_; lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_653_ = lean_unsigned_to_nat(1024u);
v___x_654_ = lean_nat_dec_le(v___x_653_, v_prec_604_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; 
v___x_655_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_642_ = v___x_655_;
goto v___jp_641_;
}
else
{
lean_object* v___x_656_; 
v___x_656_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_642_ = v___x_656_;
goto v___jp_641_;
}
v___jp_641_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_643_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__10));
v___x_644_ = l_Nat_reprFast(v_a_637_);
if (v_isShared_640_ == 0)
{
lean_ctor_set_tag(v___x_639_, 3);
lean_ctor_set(v___x_639_, 0, v___x_644_);
v___x_646_ = v___x_639_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_644_);
v___x_646_ = v_reuseFailAlloc_652_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_647_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_643_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
lean_inc(v___y_642_);
v___x_648_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_648_, 0, v___y_642_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = 0;
v___x_650_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set_uint8(v___x_650_, sizeof(void*)*1, v___x_649_);
v___x_651_ = l_Repr_addAppParen(v___x_650_, v_prec_604_);
return v___x_651_;
}
}
}
}
case 2:
{
lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_658_ = lean_unsigned_to_nat(1024u);
v___x_659_ = lean_nat_dec_le(v___x_658_, v_prec_604_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; 
v___x_660_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_613_ = v___x_660_;
goto v___jp_612_;
}
else
{
lean_object* v___x_661_; 
v___x_661_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_613_ = v___x_661_;
goto v___jp_612_;
}
}
case 3:
{
uint8_t v_a_662_; lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_686_; 
v_a_662_ = lean_ctor_get_uint8(v_x_603_, sizeof(void*)*1);
v_a_663_ = lean_ctor_get(v_x_603_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v_x_603_);
if (v_isSharedCheck_686_ == 0)
{
v___x_665_ = v_x_603_;
v_isShared_666_ = v_isSharedCheck_686_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v_x_603_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_686_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___y_668_; lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = lean_unsigned_to_nat(1024u);
v___x_683_ = lean_nat_dec_le(v___x_682_, v_prec_604_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; 
v___x_684_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_668_ = v___x_684_;
goto v___jp_667_;
}
else
{
lean_object* v___x_685_; 
v___x_685_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_668_ = v___x_685_;
goto v___jp_667_;
}
v___jp_667_:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; uint8_t v___x_677_; lean_object* v___x_679_; 
v___x_669_ = lean_box(1);
v___x_670_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__13));
v___x_671_ = l_Bool_repr___redArg(v_a_662_);
v___x_672_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_670_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v___x_673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v___x_669_);
v___x_674_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg(v_a_663_);
v___x_675_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
lean_inc(v___y_668_);
v___x_676_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_676_, 0, v___y_668_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = 0;
if (v_isShared_666_ == 0)
{
lean_ctor_set_tag(v___x_665_, 6);
lean_ctor_set(v___x_665_, 0, v___x_676_);
v___x_679_ = v___x_665_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_676_);
v___x_679_ = v_reuseFailAlloc_681_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; 
lean_ctor_set_uint8(v___x_679_, sizeof(void*)*1, v___x_677_);
v___x_680_ = l_Repr_addAppParen(v___x_679_, v_prec_604_);
return v___x_680_;
}
}
}
}
case 4:
{
lean_object* v_a_687_; lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_711_; 
v_a_687_ = lean_ctor_get(v_x_603_, 0);
v_a_688_ = lean_ctor_get(v_x_603_, 1);
v_isSharedCheck_711_ = !lean_is_exclusive(v_x_603_);
if (v_isSharedCheck_711_ == 0)
{
v___x_690_ = v_x_603_;
v_isShared_691_ = v_isSharedCheck_711_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_inc(v_a_687_);
lean_dec(v_x_603_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_711_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_692_; lean_object* v___y_694_; uint8_t v___x_708_; 
v___x_692_ = lean_unsigned_to_nat(1024u);
v___x_708_ = lean_nat_dec_le(v___x_692_, v_prec_604_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; 
v___x_709_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_694_ = v___x_709_;
goto v___jp_693_;
}
else
{
lean_object* v___x_710_; 
v___x_710_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_694_ = v___x_710_;
goto v___jp_693_;
}
v___jp_693_:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_695_ = lean_box(1);
v___x_696_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__16));
v___x_697_ = lp_lean_x2dftml_LeanFtml_instReprRE_repr(v_a_687_, v___x_692_);
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 5);
lean_ctor_set(v___x_690_, 1, v___x_697_);
lean_ctor_set(v___x_690_, 0, v___x_696_);
v___x_699_ = v___x_690_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_696_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v___x_697_);
v___x_699_ = v_reuseFailAlloc_707_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_700_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v___x_695_);
v___x_701_ = lp_lean_x2dftml_LeanFtml_instReprRE_repr(v_a_688_, v___x_692_);
v___x_702_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_700_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
lean_inc(v___y_694_);
v___x_703_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_703_, 0, v___y_694_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = 0;
v___x_705_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set_uint8(v___x_705_, sizeof(void*)*1, v___x_704_);
v___x_706_ = l_Repr_addAppParen(v___x_705_, v_prec_604_);
return v___x_706_;
}
}
}
}
case 5:
{
lean_object* v_a_712_; lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_736_; 
v_a_712_ = lean_ctor_get(v_x_603_, 0);
v_a_713_ = lean_ctor_get(v_x_603_, 1);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_603_);
if (v_isSharedCheck_736_ == 0)
{
v___x_715_ = v_x_603_;
v_isShared_716_ = v_isSharedCheck_736_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_inc(v_a_712_);
lean_dec(v_x_603_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_736_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_717_; lean_object* v___y_719_; uint8_t v___x_733_; 
v___x_717_ = lean_unsigned_to_nat(1024u);
v___x_733_ = lean_nat_dec_le(v___x_717_, v_prec_604_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; 
v___x_734_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_719_ = v___x_734_;
goto v___jp_718_;
}
else
{
lean_object* v___x_735_; 
v___x_735_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_719_ = v___x_735_;
goto v___jp_718_;
}
v___jp_718_:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_724_; 
v___x_720_ = lean_box(1);
v___x_721_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__19));
v___x_722_ = lp_lean_x2dftml_LeanFtml_instReprRE_repr(v_a_712_, v___x_717_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_722_);
lean_ctor_set(v___x_715_, 0, v___x_721_);
v___x_724_ = v___x_715_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_721_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_722_);
v___x_724_ = v_reuseFailAlloc_732_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_725_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
lean_ctor_set(v___x_725_, 1, v___x_720_);
v___x_726_ = lp_lean_x2dftml_LeanFtml_instReprRE_repr(v_a_713_, v___x_717_);
v___x_727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_725_);
lean_ctor_set(v___x_727_, 1, v___x_726_);
lean_inc(v___y_719_);
v___x_728_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_728_, 0, v___y_719_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = 0;
v___x_730_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_730_, 0, v___x_728_);
lean_ctor_set_uint8(v___x_730_, sizeof(void*)*1, v___x_729_);
v___x_731_ = l_Repr_addAppParen(v___x_730_, v_prec_604_);
return v___x_731_;
}
}
}
}
case 6:
{
lean_object* v_a_737_; lean_object* v_a_738_; lean_object* v_a_739_; lean_object* v___x_740_; lean_object* v___y_742_; uint8_t v___x_758_; 
v_a_737_ = lean_ctor_get(v_x_603_, 0);
lean_inc(v_a_737_);
v_a_738_ = lean_ctor_get(v_x_603_, 1);
lean_inc(v_a_738_);
v_a_739_ = lean_ctor_get(v_x_603_, 2);
lean_inc(v_a_739_);
lean_dec_ref_known(v_x_603_, 3);
v___x_740_ = lean_unsigned_to_nat(1024u);
v___x_758_ = lean_nat_dec_le(v___x_740_, v_prec_604_);
if (v___x_758_ == 0)
{
lean_object* v___x_759_; 
v___x_759_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_742_ = v___x_759_;
goto v___jp_741_;
}
else
{
lean_object* v___x_760_; 
v___x_760_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_742_ = v___x_760_;
goto v___jp_741_;
}
v___jp_741_:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; uint8_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_743_ = lean_box(1);
v___x_744_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__22));
v___x_745_ = lp_lean_x2dftml_LeanFtml_instReprRE_repr(v_a_737_, v___x_740_);
v___x_746_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
lean_ctor_set(v___x_747_, 1, v___x_743_);
v___x_748_ = l_Nat_reprFast(v_a_738_);
v___x_749_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
v___x_750_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_747_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v___x_751_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
lean_ctor_set(v___x_751_, 1, v___x_743_);
v___x_752_ = l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(v_a_739_, v___x_740_);
v___x_753_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
lean_inc(v___y_742_);
v___x_754_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_754_, 0, v___y_742_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = 0;
v___x_756_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_756_, 0, v___x_754_);
lean_ctor_set_uint8(v___x_756_, sizeof(void*)*1, v___x_755_);
v___x_757_ = l_Repr_addAppParen(v___x_756_, v_prec_604_);
return v___x_757_;
}
}
case 7:
{
lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_761_ = lean_unsigned_to_nat(1024u);
v___x_762_ = lean_nat_dec_le(v___x_761_, v_prec_604_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; 
v___x_763_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_620_ = v___x_763_;
goto v___jp_619_;
}
else
{
lean_object* v___x_764_; 
v___x_764_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_620_ = v___x_764_;
goto v___jp_619_;
}
}
default: 
{
lean_object* v___x_765_; uint8_t v___x_766_; 
v___x_765_ = lean_unsigned_to_nat(1024u);
v___x_766_ = lean_nat_dec_le(v___x_765_, v_prec_604_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; 
v___x_767_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__15);
v___y_627_ = v___x_767_;
goto v___jp_626_;
}
else
{
lean_object* v___x_768_; 
v___x_768_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16, &lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprClsItem_repr___closed__16);
v___y_627_ = v___x_768_;
goto v___jp_626_;
}
}
}
v___jp_605_:
{
lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_607_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__1));
lean_inc(v___y_606_);
v___x_608_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_608_, 0, v___y_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = 0;
v___x_610_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set_uint8(v___x_610_, sizeof(void*)*1, v___x_609_);
v___x_611_ = l_Repr_addAppParen(v___x_610_, v_prec_604_);
return v___x_611_;
}
v___jp_612_:
{
lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_614_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__3));
lean_inc(v___y_613_);
v___x_615_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_615_, 0, v___y_613_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = 0;
v___x_617_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_617_, 0, v___x_615_);
lean_ctor_set_uint8(v___x_617_, sizeof(void*)*1, v___x_616_);
v___x_618_ = l_Repr_addAppParen(v___x_617_, v_prec_604_);
return v___x_618_;
}
v___jp_619_:
{
lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_621_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__5));
lean_inc(v___y_620_);
v___x_622_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_622_, 0, v___y_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = 0;
v___x_624_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set_uint8(v___x_624_, sizeof(void*)*1, v___x_623_);
v___x_625_ = l_Repr_addAppParen(v___x_624_, v_prec_604_);
return v___x_625_;
}
v___jp_626_:
{
lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_628_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRE_repr___closed__7));
lean_inc(v___y_627_);
v___x_629_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_629_, 0, v___y_627_);
lean_ctor_set(v___x_629_, 1, v___x_628_);
v___x_630_ = 0;
v___x_631_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set_uint8(v___x_631_, sizeof(void*)*1, v___x_630_);
v___x_632_ = l_Repr_addAppParen(v___x_631_, v_prec_604_);
return v___x_632_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRE_repr___boxed(lean_object* v_x_769_, lean_object* v_prec_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = lp_lean_x2dftml_LeanFtml_instReprRE_repr(v_x_769_, v_prec_770_);
lean_dec(v_prec_770_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0(lean_object* v_a_772_, lean_object* v_n_773_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg(v_a_772_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___boxed(lean_object* v_a_775_, lean_object* v_n_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0(v_a_775_, v_n_776_);
lean_dec(v_n_776_);
return v_res_777_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq(lean_object* v_x_780_, lean_object* v_x_781_){
_start:
{
switch(lean_obj_tag(v_x_780_))
{
case 0:
{
if (lean_obj_tag(v_x_781_) == 0)
{
uint8_t v___x_782_; 
v___x_782_ = 1;
return v___x_782_;
}
else
{
uint8_t v___x_783_; 
lean_dec(v_x_781_);
v___x_783_ = 0;
return v___x_783_;
}
}
case 1:
{
if (lean_obj_tag(v_x_781_) == 1)
{
lean_object* v_a_784_; lean_object* v_a_785_; uint8_t v___x_786_; 
v_a_784_ = lean_ctor_get(v_x_780_, 0);
lean_inc(v_a_784_);
lean_dec_ref_known(v_x_780_, 1);
v_a_785_ = lean_ctor_get(v_x_781_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v_x_781_, 1);
v___x_786_ = lean_nat_dec_eq(v_a_784_, v_a_785_);
lean_dec(v_a_785_);
lean_dec(v_a_784_);
return v___x_786_;
}
else
{
uint8_t v___x_787_; 
lean_dec_ref_known(v_x_780_, 1);
lean_dec(v_x_781_);
v___x_787_ = 0;
return v___x_787_;
}
}
case 2:
{
if (lean_obj_tag(v_x_781_) == 2)
{
uint8_t v___x_788_; 
v___x_788_ = 1;
return v___x_788_;
}
else
{
uint8_t v___x_789_; 
lean_dec(v_x_781_);
v___x_789_ = 0;
return v___x_789_;
}
}
case 3:
{
if (lean_obj_tag(v_x_781_) == 3)
{
uint8_t v_a_790_; lean_object* v_a_791_; uint8_t v_a_792_; lean_object* v_a_793_; 
v_a_790_ = lean_ctor_get_uint8(v_x_780_, sizeof(void*)*1);
v_a_791_ = lean_ctor_get(v_x_780_, 0);
lean_inc(v_a_791_);
lean_dec_ref_known(v_x_780_, 1);
v_a_792_ = lean_ctor_get_uint8(v_x_781_, sizeof(void*)*1);
v_a_793_ = lean_ctor_get(v_x_781_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v_x_781_, 1);
if (v_a_792_ == 0)
{
if (v_a_790_ == 0)
{
goto v___jp_794_;
}
else
{
lean_dec(v_a_793_);
lean_dec(v_a_791_);
return v_a_792_;
}
}
else
{
if (v_a_790_ == 0)
{
lean_dec(v_a_793_);
lean_dec(v_a_791_);
return v_a_790_;
}
else
{
goto v___jp_794_;
}
}
v___jp_794_:
{
lean_object* v___x_795_; uint8_t v___x_796_; 
v___x_795_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqClsItem___boxed), 2, 0);
v___x_796_ = l_instDecidableEqList___redArg(v___x_795_, v_a_791_, v_a_793_);
return v___x_796_;
}
}
else
{
uint8_t v___x_797_; 
lean_dec_ref_known(v_x_780_, 1);
lean_dec(v_x_781_);
v___x_797_ = 0;
return v___x_797_;
}
}
case 4:
{
if (lean_obj_tag(v_x_781_) == 4)
{
lean_object* v_a_798_; lean_object* v_a_799_; lean_object* v_a_800_; lean_object* v_a_801_; uint8_t v_inst_802_; 
v_a_798_ = lean_ctor_get(v_x_780_, 0);
lean_inc(v_a_798_);
v_a_799_ = lean_ctor_get(v_x_780_, 1);
lean_inc(v_a_799_);
lean_dec_ref_known(v_x_780_, 2);
v_a_800_ = lean_ctor_get(v_x_781_, 0);
lean_inc(v_a_800_);
v_a_801_ = lean_ctor_get(v_x_781_, 1);
lean_inc(v_a_801_);
lean_dec_ref_known(v_x_781_, 2);
v_inst_802_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq(v_a_798_, v_a_800_);
if (v_inst_802_ == 0)
{
lean_dec(v_a_801_);
lean_dec(v_a_799_);
return v_inst_802_;
}
else
{
v_x_780_ = v_a_799_;
v_x_781_ = v_a_801_;
goto _start;
}
}
else
{
uint8_t v___x_804_; 
lean_dec_ref_known(v_x_780_, 2);
lean_dec(v_x_781_);
v___x_804_ = 0;
return v___x_804_;
}
}
case 5:
{
if (lean_obj_tag(v_x_781_) == 5)
{
lean_object* v_a_805_; lean_object* v_a_806_; lean_object* v_a_807_; lean_object* v_a_808_; uint8_t v_inst_809_; 
v_a_805_ = lean_ctor_get(v_x_780_, 0);
lean_inc(v_a_805_);
v_a_806_ = lean_ctor_get(v_x_780_, 1);
lean_inc(v_a_806_);
lean_dec_ref_known(v_x_780_, 2);
v_a_807_ = lean_ctor_get(v_x_781_, 0);
lean_inc(v_a_807_);
v_a_808_ = lean_ctor_get(v_x_781_, 1);
lean_inc(v_a_808_);
lean_dec_ref_known(v_x_781_, 2);
v_inst_809_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq(v_a_805_, v_a_807_);
if (v_inst_809_ == 0)
{
lean_dec(v_a_808_);
lean_dec(v_a_806_);
return v_inst_809_;
}
else
{
v_x_780_ = v_a_806_;
v_x_781_ = v_a_808_;
goto _start;
}
}
else
{
uint8_t v___x_811_; 
lean_dec_ref_known(v_x_780_, 2);
lean_dec(v_x_781_);
v___x_811_ = 0;
return v___x_811_;
}
}
case 6:
{
if (lean_obj_tag(v_x_781_) == 6)
{
lean_object* v_a_812_; lean_object* v_a_813_; lean_object* v_a_814_; lean_object* v_a_815_; lean_object* v_a_816_; lean_object* v_a_817_; uint8_t v_inst_818_; 
v_a_812_ = lean_ctor_get(v_x_780_, 0);
lean_inc(v_a_812_);
v_a_813_ = lean_ctor_get(v_x_780_, 1);
lean_inc(v_a_813_);
v_a_814_ = lean_ctor_get(v_x_780_, 2);
lean_inc(v_a_814_);
lean_dec_ref_known(v_x_780_, 3);
v_a_815_ = lean_ctor_get(v_x_781_, 0);
lean_inc(v_a_815_);
v_a_816_ = lean_ctor_get(v_x_781_, 1);
lean_inc(v_a_816_);
v_a_817_ = lean_ctor_get(v_x_781_, 2);
lean_inc(v_a_817_);
lean_dec_ref_known(v_x_781_, 3);
v_inst_818_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq(v_a_812_, v_a_815_);
if (v_inst_818_ == 0)
{
lean_dec(v_a_817_);
lean_dec(v_a_816_);
lean_dec(v_a_814_);
lean_dec(v_a_813_);
return v_inst_818_;
}
else
{
uint8_t v___x_819_; 
v___x_819_ = lean_nat_dec_eq(v_a_813_, v_a_816_);
lean_dec(v_a_816_);
lean_dec(v_a_813_);
if (v___x_819_ == 0)
{
lean_dec(v_a_817_);
lean_dec(v_a_814_);
return v___x_819_;
}
else
{
lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_820_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_821_ = l_Option_instDecidableEq___redArg(v___x_820_, v_a_814_, v_a_817_);
return v___x_821_;
}
}
}
else
{
uint8_t v___x_822_; 
lean_dec_ref_known(v_x_780_, 3);
lean_dec(v_x_781_);
v___x_822_ = 0;
return v___x_822_;
}
}
case 7:
{
if (lean_obj_tag(v_x_781_) == 7)
{
uint8_t v___x_823_; 
v___x_823_ = 1;
return v___x_823_;
}
else
{
uint8_t v___x_824_; 
lean_dec(v_x_781_);
v___x_824_ = 0;
return v___x_824_;
}
}
default: 
{
if (lean_obj_tag(v_x_781_) == 8)
{
uint8_t v___x_825_; 
v___x_825_ = 1;
return v___x_825_;
}
else
{
uint8_t v___x_826_; 
lean_dec(v_x_781_);
v___x_826_ = 0;
return v___x_826_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq___boxed(lean_object* v_x_827_, lean_object* v_x_828_){
_start:
{
uint8_t v_res_829_; lean_object* v_r_830_; 
v_res_829_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq(v_x_827_, v_x_828_);
v_r_830_ = lean_box(v_res_829_);
return v_r_830_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRE(lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
uint8_t v___x_833_; 
v___x_833_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq(v_x_831_, v_x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRE___boxed(lean_object* v_x_834_, lean_object* v_x_835_){
_start:
{
uint8_t v_res_836_; lean_object* v_r_837_; 
v_res_836_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRE(v_x_834_, v_x_835_);
v_r_837_ = lean_box(v_res_836_);
return v_r_837_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_unsigned_to_nat(7u);
v___x_857_ = lean_nat_to_int(v___x_856_);
return v___x_857_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = lean_unsigned_to_nat(6u);
v___x_862_ = lean_nat_to_int(v___x_861_);
return v___x_862_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(10u);
v___x_867_ = lean_nat_to_int(v___x_866_);
return v___x_867_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__0));
v___x_870_ = lean_string_length(v___x_869_);
return v___x_870_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__15, &lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__15);
v___x_872_ = lean_nat_to_int(v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg(lean_object* v_x_877_){
_start:
{
lean_object* v_ast_878_; uint8_t v_ci_879_; uint8_t v_dotall_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; uint8_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v_ast_878_ = lean_ctor_get(v_x_877_, 0);
lean_inc(v_ast_878_);
v_ci_879_ = lean_ctor_get_uint8(v_x_877_, sizeof(void*)*1);
v_dotall_880_ = lean_ctor_get_uint8(v_x_877_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_877_);
v___x_881_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__5));
v___x_882_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__6));
v___x_883_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__7);
v___x_884_ = lean_unsigned_to_nat(0u);
v___x_885_ = lp_lean_x2dftml_LeanFtml_instReprRE_repr(v_ast_878_, v___x_884_);
v___x_886_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_883_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v___x_887_ = 0;
v___x_888_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_888_, 0, v___x_886_);
lean_ctor_set_uint8(v___x_888_, sizeof(void*)*1, v___x_887_);
v___x_889_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_882_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprRE_repr_spec__0___redArg___closed__4));
v___x_891_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_889_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = lean_box(1);
v___x_893_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_891_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__9));
v___x_895_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_893_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
lean_ctor_set(v___x_896_, 1, v___x_881_);
v___x_897_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__10, &lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__10);
v___x_898_ = l_Bool_repr___redArg(v_ci_879_);
v___x_899_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set_uint8(v___x_900_, sizeof(void*)*1, v___x_887_);
v___x_901_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_896_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set(v___x_902_, 1, v___x_890_);
v___x_903_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
lean_ctor_set(v___x_903_, 1, v___x_892_);
v___x_904_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__12));
v___x_905_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_903_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
lean_ctor_set(v___x_906_, 1, v___x_881_);
v___x_907_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__13, &lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__13);
v___x_908_ = l_Bool_repr___redArg(v_dotall_880_);
v___x_909_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_907_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_910_, 0, v___x_909_);
lean_ctor_set_uint8(v___x_910_, sizeof(void*)*1, v___x_887_);
v___x_911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_906_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__16, &lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__16);
v___x_913_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__17));
v___x_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v___x_911_);
v___x_915_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg___closed__18));
v___x_916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_912_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_918_, 0, v___x_917_);
lean_ctor_set_uint8(v___x_918_, sizeof(void*)*1, v___x_887_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr(lean_object* v_x_919_, lean_object* v_prec_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___redArg(v_x_919_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr___boxed(lean_object* v_x_922_, lean_object* v_prec_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = lp_lean_x2dftml_LeanFtml_instReprPcreParsed_repr(v_x_922_, v_prec_923_);
lean_dec(v_prec_923_);
return v_res_924_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed_decEq(lean_object* v_x_927_, lean_object* v_x_928_){
_start:
{
lean_object* v_ast_929_; uint8_t v_ci_930_; uint8_t v_dotall_931_; lean_object* v_ast_932_; uint8_t v_ci_933_; uint8_t v_dotall_934_; uint8_t v___y_936_; uint8_t v___x_937_; 
v_ast_929_ = lean_ctor_get(v_x_927_, 0);
lean_inc(v_ast_929_);
v_ci_930_ = lean_ctor_get_uint8(v_x_927_, sizeof(void*)*1);
v_dotall_931_ = lean_ctor_get_uint8(v_x_927_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_927_);
v_ast_932_ = lean_ctor_get(v_x_928_, 0);
lean_inc(v_ast_932_);
v_ci_933_ = lean_ctor_get_uint8(v_x_928_, sizeof(void*)*1);
v_dotall_934_ = lean_ctor_get_uint8(v_x_928_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_928_);
v___x_937_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRE_decEq(v_ast_929_, v_ast_932_);
if (v___x_937_ == 0)
{
return v___x_937_;
}
else
{
if (v_ci_933_ == 0)
{
if (v_ci_930_ == 0)
{
v___y_936_ = v___x_937_;
goto v___jp_935_;
}
else
{
return v_ci_933_;
}
}
else
{
if (v_ci_930_ == 0)
{
return v_ci_930_;
}
else
{
v___y_936_ = v_ci_930_;
goto v___jp_935_;
}
}
}
v___jp_935_:
{
if (v_dotall_934_ == 0)
{
if (v_dotall_931_ == 0)
{
return v___y_936_;
}
else
{
return v_dotall_934_;
}
}
else
{
return v_dotall_931_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed_decEq___boxed(lean_object* v_x_938_, lean_object* v_x_939_){
_start:
{
uint8_t v_res_940_; lean_object* v_r_941_; 
v_res_940_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed_decEq(v_x_938_, v_x_939_);
v_r_941_ = lean_box(v_res_940_);
return v_r_941_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed(lean_object* v_x_942_, lean_object* v_x_943_){
_start:
{
uint8_t v___x_944_; 
v___x_944_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed_decEq(v_x_942_, v_x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed___boxed(lean_object* v_x_945_, lean_object* v_x_946_){
_start:
{
uint8_t v_res_947_; lean_object* v_r_948_; 
v_res_947_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPcreParsed(v_x_945_, v_x_946_);
v_r_948_ = lean_box(v_res_947_);
return v_r_948_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_dedupN_go_spec__0(lean_object* v_head_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
if (lean_obj_tag(v_a_950_) == 0)
{
lean_object* v___x_952_; 
v___x_952_ = l_List_reverse___redArg(v_a_951_);
return v___x_952_;
}
else
{
lean_object* v_head_953_; lean_object* v_tail_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_964_; 
v_head_953_ = lean_ctor_get(v_a_950_, 0);
v_tail_954_ = lean_ctor_get(v_a_950_, 1);
v_isSharedCheck_964_ = !lean_is_exclusive(v_a_950_);
if (v_isSharedCheck_964_ == 0)
{
v___x_956_ = v_a_950_;
v_isShared_957_ = v_isSharedCheck_964_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_tail_954_);
lean_inc(v_head_953_);
lean_dec(v_a_950_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_964_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
uint8_t v___x_958_; 
v___x_958_ = lean_nat_dec_eq(v_head_953_, v_head_949_);
if (v___x_958_ == 0)
{
lean_object* v___x_960_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v_a_951_);
v___x_960_ = v___x_956_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_head_953_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v_a_951_);
v___x_960_ = v_reuseFailAlloc_962_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
v_a_950_ = v_tail_954_;
v_a_951_ = v___x_960_;
goto _start;
}
}
else
{
lean_del_object(v___x_956_);
lean_dec(v_head_953_);
v_a_950_ = v_tail_954_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_dedupN_go_spec__0___boxed(lean_object* v_head_965_, lean_object* v_a_966_, lean_object* v_a_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_dedupN_go_spec__0(v_head_965_, v_a_966_, v_a_967_);
lean_dec(v_head_965_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dedupN_go(lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
if (lean_obj_tag(v_a_969_) == 0)
{
return v_a_969_;
}
else
{
lean_object* v_head_971_; lean_object* v_tail_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_987_; 
v_head_971_ = lean_ctor_get(v_a_969_, 0);
v_tail_972_ = lean_ctor_get(v_a_969_, 1);
v_isSharedCheck_987_ = !lean_is_exclusive(v_a_969_);
if (v_isSharedCheck_987_ == 0)
{
v___x_974_ = v_a_969_;
v_isShared_975_ = v_isSharedCheck_987_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_tail_972_);
lean_inc(v_head_971_);
lean_dec(v_a_969_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_987_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v_zero_976_; uint8_t v_isZero_977_; 
v_zero_976_ = lean_unsigned_to_nat(0u);
v_isZero_977_ = lean_nat_dec_eq(v_a_970_, v_zero_976_);
if (v_isZero_977_ == 1)
{
lean_object* v___x_978_; 
lean_del_object(v___x_974_);
lean_dec(v_tail_972_);
lean_dec(v_head_971_);
v___x_978_ = lean_box(0);
return v___x_978_;
}
else
{
lean_object* v_one_979_; lean_object* v_n_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_985_; 
v_one_979_ = lean_unsigned_to_nat(1u);
v_n_980_ = lean_nat_sub(v_a_970_, v_one_979_);
v___x_981_ = lean_box(0);
v___x_982_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_dedupN_go_spec__0(v_head_971_, v_tail_972_, v___x_981_);
v___x_983_ = lp_lean_x2dftml_LeanFtml_dedupN_go(v___x_982_, v_n_980_);
lean_dec(v_n_980_);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 1, v___x_983_);
v___x_985_ = v___x_974_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_head_971_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v___x_983_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dedupN_go___boxed(lean_object* v_a_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = lp_lean_x2dftml_LeanFtml_dedupN_go(v_a_988_, v_a_989_);
lean_dec(v_a_989_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dedupN(lean_object* v_xs_991_){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_992_ = l_List_lengthTR___redArg(v_xs_991_);
v___x_993_ = lean_unsigned_to_nat(1u);
v___x_994_ = lean_nat_add(v___x_992_, v___x_993_);
lean_dec(v___x_992_);
v___x_995_ = lp_lean_x2dftml_LeanFtml_dedupN_go(v_xs_991_, v___x_994_);
lean_dec(v___x_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_repCollect(lean_object* v_step_998_, lean_object* v_mn_999_, lean_object* v_mx_1000_, lean_object* v_count_1001_, lean_object* v_pos_1002_, lean_object* v_x_1003_){
_start:
{
lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v_zero_1009_; uint8_t v_isZero_1010_; 
v_zero_1009_ = lean_unsigned_to_nat(0u);
v_isZero_1010_ = lean_nat_dec_eq(v_x_1003_, v_zero_1009_);
if (v_isZero_1010_ == 1)
{
uint8_t v___x_1011_; 
lean_dec_ref(v_step_998_);
v___x_1011_ = lean_nat_dec_le(v_mn_999_, v_count_1001_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; 
lean_dec(v_pos_1002_);
v___x_1012_ = lean_box(0);
return v___x_1012_;
}
else
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_box(0);
v___x_1014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1014_, 0, v_pos_1002_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
return v___x_1014_;
}
}
else
{
lean_object* v_one_1015_; lean_object* v_n_1016_; lean_object* v___y_1018_; 
v_one_1015_ = lean_unsigned_to_nat(1u);
v_n_1016_ = lean_nat_sub(v_x_1003_, v_one_1015_);
if (lean_obj_tag(v_mx_1000_) == 0)
{
goto v___jp_1025_;
}
else
{
lean_object* v_val_1027_; uint8_t v___x_1028_; 
v_val_1027_ = lean_ctor_get(v_mx_1000_, 0);
v___x_1028_ = lean_nat_dec_lt(v_count_1001_, v_val_1027_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_box(0);
v___y_1018_ = v___x_1029_;
goto v___jp_1017_;
}
else
{
goto v___jp_1025_;
}
}
v___jp_1017_:
{
lean_object* v___x_1019_; lean_object* v_cont_1020_; uint8_t v___x_1021_; 
v___x_1019_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_repCollect___closed__0));
lean_inc(v_pos_1002_);
v_cont_1020_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_repCollect_spec__0(v_pos_1002_, v_count_1001_, v_step_998_, v_mn_999_, v_mx_1000_, v_n_1016_, v___y_1018_, v___x_1019_);
lean_dec(v_n_1016_);
v___x_1021_ = lean_nat_dec_le(v_mn_999_, v_count_1001_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; 
lean_dec(v_pos_1002_);
v___x_1022_ = lean_box(0);
v___y_1005_ = v_cont_1020_;
v___y_1006_ = v___x_1022_;
goto v___jp_1004_;
}
else
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_box(0);
v___x_1024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1024_, 0, v_pos_1002_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___y_1005_ = v_cont_1020_;
v___y_1006_ = v___x_1024_;
goto v___jp_1004_;
}
}
v___jp_1025_:
{
lean_object* v___x_1026_; 
lean_inc_ref(v_step_998_);
lean_inc(v_pos_1002_);
v___x_1026_ = lean_apply_1(v_step_998_, v_pos_1002_);
v___y_1018_ = v___x_1026_;
goto v___jp_1017_;
}
}
v___jp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = l_List_appendTR___redArg(v___y_1005_, v___y_1006_);
v___x_1008_ = lp_lean_x2dftml_LeanFtml_dedupN(v___x_1007_);
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_repCollect_spec__0(lean_object* v_pos_1030_, lean_object* v_count_1031_, lean_object* v_step_1032_, lean_object* v_mn_1033_, lean_object* v_mx_1034_, lean_object* v_n_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_){
_start:
{
if (lean_obj_tag(v_a_1036_) == 0)
{
lean_object* v___x_1038_; 
lean_dec_ref(v_step_1032_);
lean_dec(v_pos_1030_);
v___x_1038_ = lean_array_to_list(v_a_1037_);
return v___x_1038_;
}
else
{
lean_object* v_head_1039_; lean_object* v_tail_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1060_; 
v_head_1039_ = lean_ctor_get(v_a_1036_, 0);
v_tail_1040_ = lean_ctor_get(v_a_1036_, 1);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_a_1036_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1042_ = v_a_1036_;
v_isShared_1043_ = v_isSharedCheck_1060_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_tail_1040_);
lean_inc(v_head_1039_);
lean_dec(v_a_1036_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1060_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___y_1045_; uint8_t v___x_1048_; 
v___x_1048_ = lean_nat_dec_eq(v_head_1039_, v_pos_1030_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
lean_del_object(v___x_1042_);
v___x_1049_ = lean_unsigned_to_nat(1u);
v___x_1050_ = lean_nat_add(v_count_1031_, v___x_1049_);
lean_inc_ref(v_step_1032_);
v___x_1051_ = lp_lean_x2dftml_LeanFtml_repCollect(v_step_1032_, v_mn_1033_, v_mx_1034_, v___x_1050_, v_head_1039_, v_n_1035_);
lean_dec(v___x_1050_);
v___y_1045_ = v___x_1051_;
goto v___jp_1044_;
}
else
{
lean_object* v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
lean_dec(v_head_1039_);
v___x_1052_ = lean_unsigned_to_nat(1u);
v___x_1053_ = lean_nat_add(v_count_1031_, v___x_1052_);
v___x_1054_ = lean_nat_dec_le(v_mn_1033_, v___x_1053_);
lean_dec(v___x_1053_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; 
lean_del_object(v___x_1042_);
v___x_1055_ = lean_box(0);
v___y_1045_ = v___x_1055_;
goto v___jp_1044_;
}
else
{
lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1056_ = lean_box(0);
lean_inc(v_pos_1030_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 1, v___x_1056_);
lean_ctor_set(v___x_1042_, 0, v_pos_1030_);
v___x_1058_ = v___x_1042_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_pos_1030_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v___x_1056_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
v___y_1045_ = v___x_1058_;
goto v___jp_1044_;
}
}
}
v___jp_1044_:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1037_, v___y_1045_);
v_a_1036_ = v_tail_1040_;
v_a_1037_ = v___x_1046_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_repCollect_spec__0___boxed(lean_object* v_pos_1061_, lean_object* v_count_1062_, lean_object* v_step_1063_, lean_object* v_mn_1064_, lean_object* v_mx_1065_, lean_object* v_n_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_repCollect_spec__0(v_pos_1061_, v_count_1062_, v_step_1063_, v_mn_1064_, v_mx_1065_, v_n_1066_, v_a_1067_, v_a_1068_);
lean_dec(v_n_1066_);
lean_dec(v_mx_1065_);
lean_dec(v_mn_1064_);
lean_dec(v_count_1062_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_repCollect___boxed(lean_object* v_step_1070_, lean_object* v_mn_1071_, lean_object* v_mx_1072_, lean_object* v_count_1073_, lean_object* v_pos_1074_, lean_object* v_x_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = lp_lean_x2dftml_LeanFtml_repCollect(v_step_1070_, v_mn_1071_, v_mx_1072_, v_count_1073_, v_pos_1074_, v_x_1075_);
lean_dec(v_x_1075_);
lean_dec(v_count_1073_);
lean_dec(v_mx_1072_);
lean_dec(v_mn_1071_);
return v_res_1076_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mFuel(void){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = lean_unsigned_to_nat(16384u);
return v___x_1077_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(lean_object* v_x_1078_, lean_object* v_x_1079_){
_start:
{
if (lean_obj_tag(v_x_1078_) == 0)
{
if (lean_obj_tag(v_x_1079_) == 0)
{
uint8_t v___x_1080_; 
v___x_1080_ = 1;
return v___x_1080_;
}
else
{
uint8_t v___x_1081_; 
v___x_1081_ = 0;
return v___x_1081_;
}
}
else
{
if (lean_obj_tag(v_x_1079_) == 0)
{
uint8_t v___x_1082_; 
v___x_1082_ = 0;
return v___x_1082_;
}
else
{
lean_object* v_head_1083_; lean_object* v_tail_1084_; lean_object* v_head_1085_; lean_object* v_tail_1086_; uint8_t v___x_1087_; 
v_head_1083_ = lean_ctor_get(v_x_1078_, 0);
v_tail_1084_ = lean_ctor_get(v_x_1078_, 1);
v_head_1085_ = lean_ctor_get(v_x_1079_, 0);
v_tail_1086_ = lean_ctor_get(v_x_1079_, 1);
v___x_1087_ = lean_nat_dec_eq(v_head_1083_, v_head_1085_);
if (v___x_1087_ == 0)
{
return v___x_1087_;
}
else
{
v_x_1078_ = v_tail_1084_;
v_x_1079_ = v_tail_1086_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1___boxed(lean_object* v_x_1089_, lean_object* v_x_1090_){
_start:
{
uint8_t v_res_1091_; lean_object* v_r_1092_; 
v_res_1091_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_x_1089_, v_x_1090_);
lean_dec(v_x_1090_);
lean_dec(v_x_1089_);
v_r_1092_ = lean_box(v_res_1091_);
return v_r_1092_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mEnds_spec__0(uint8_t v_ci_1093_, uint8_t v_da_1094_, lean_object* v_a_1095_, lean_object* v_subj_1096_, lean_object* v_n_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_){
_start:
{
if (lean_obj_tag(v_a_1098_) == 0)
{
lean_object* v___x_1100_; 
lean_dec(v_subj_1096_);
lean_dec(v_a_1095_);
v___x_1100_ = lean_array_to_list(v_a_1099_);
return v___x_1100_;
}
else
{
lean_object* v_head_1101_; lean_object* v_tail_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v_head_1101_ = lean_ctor_get(v_a_1098_, 0);
lean_inc(v_head_1101_);
v_tail_1102_ = lean_ctor_get(v_a_1098_, 1);
lean_inc(v_tail_1102_);
lean_dec_ref_known(v_a_1098_, 2);
lean_inc(v_subj_1096_);
lean_inc(v_a_1095_);
v___x_1103_ = lp_lean_x2dftml_LeanFtml_mEnds(v_ci_1093_, v_da_1094_, v_a_1095_, v_subj_1096_, v_head_1101_, v_n_1097_);
v___x_1104_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1099_, v___x_1103_);
v_a_1098_ = v_tail_1102_;
v_a_1099_ = v___x_1104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mEnds___lam__0___boxed(lean_object* v_ci_1106_, lean_object* v_da_1107_, lean_object* v_a_1108_, lean_object* v_subj_1109_, lean_object* v_n_1110_, lean_object* v_p_1111_){
_start:
{
uint8_t v_ci_boxed_1112_; uint8_t v_da_boxed_1113_; lean_object* v_res_1114_; 
v_ci_boxed_1112_ = lean_unbox(v_ci_1106_);
v_da_boxed_1113_ = lean_unbox(v_da_1107_);
v_res_1114_ = lp_lean_x2dftml_LeanFtml_mEnds___lam__0(v_ci_boxed_1112_, v_da_boxed_1113_, v_a_1108_, v_subj_1109_, v_n_1110_, v_p_1111_);
lean_dec(v_n_1110_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mEnds(uint8_t v_ci_1118_, uint8_t v_da_1119_, lean_object* v_re_1120_, lean_object* v_subj_1121_, lean_object* v_pos_1122_, lean_object* v_x_1123_){
_start:
{
lean_object* v_zero_1129_; uint8_t v_isZero_1130_; 
v_zero_1129_ = lean_unsigned_to_nat(0u);
v_isZero_1130_ = lean_nat_dec_eq(v_x_1123_, v_zero_1129_);
if (v_isZero_1130_ == 1)
{
lean_object* v___x_1131_; 
lean_dec(v_pos_1122_);
lean_dec(v_subj_1121_);
lean_dec(v_re_1120_);
v___x_1131_ = lean_box(0);
return v___x_1131_;
}
else
{
lean_object* v_one_1132_; lean_object* v_n_1133_; 
v_one_1132_ = lean_unsigned_to_nat(1u);
v_n_1133_ = lean_nat_sub(v_x_1123_, v_one_1132_);
switch(lean_obj_tag(v_re_1120_))
{
case 0:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_dec(v_n_1133_);
lean_dec(v_subj_1121_);
v___x_1134_ = lean_box(0);
v___x_1135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1135_, 0, v_pos_1122_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
return v___x_1135_;
}
case 1:
{
lean_object* v_a_1136_; lean_object* v___x_1137_; 
lean_dec(v_n_1133_);
v_a_1136_ = lean_ctor_get(v_re_1120_, 0);
lean_inc(v_a_1136_);
lean_dec_ref_known(v_re_1120_, 1);
lean_inc(v_pos_1122_);
v___x_1137_ = l_List_drop___redArg(v_pos_1122_, v_subj_1121_);
lean_dec(v_subj_1121_);
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_dec(v_a_1136_);
lean_dec(v_pos_1122_);
return v___x_1137_;
}
else
{
lean_object* v_head_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1149_; 
v_head_1138_ = lean_ctor_get(v___x_1137_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1149_ == 0)
{
lean_object* v_unused_1150_; 
v_unused_1150_ = lean_ctor_get(v___x_1137_, 1);
lean_dec(v_unused_1150_);
v___x_1140_ = v___x_1137_;
v_isShared_1141_ = v_isSharedCheck_1149_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_head_1138_);
lean_dec(v___x_1137_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1149_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
uint8_t v___x_1142_; 
v___x_1142_ = lp_lean_x2dftml_LeanFtml_byteMatchCI(v_ci_1118_, v_a_1136_, v_head_1138_);
lean_dec(v_head_1138_);
lean_dec(v_a_1136_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
lean_del_object(v___x_1140_);
lean_dec(v_pos_1122_);
v___x_1143_ = lean_box(0);
return v___x_1143_;
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1147_; 
v___x_1144_ = lean_nat_add(v_pos_1122_, v_one_1132_);
lean_dec(v_pos_1122_);
v___x_1145_ = lean_box(0);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 1, v___x_1145_);
lean_ctor_set(v___x_1140_, 0, v___x_1144_);
v___x_1147_ = v___x_1140_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v___x_1145_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
case 2:
{
lean_object* v___x_1151_; 
lean_dec(v_n_1133_);
lean_inc(v_pos_1122_);
v___x_1151_ = l_List_drop___redArg(v_pos_1122_, v_subj_1121_);
lean_dec(v_subj_1121_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_dec(v_pos_1122_);
return v___x_1151_;
}
else
{
if (v_da_1119_ == 0)
{
lean_object* v_head_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; 
v_head_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_head_1152_);
lean_dec_ref_known(v___x_1151_, 2);
v___x_1153_ = lean_unsigned_to_nat(10u);
v___x_1154_ = lean_nat_dec_eq(v_head_1152_, v___x_1153_);
lean_dec(v_head_1152_);
if (v___x_1154_ == 0)
{
goto v___jp_1124_;
}
else
{
lean_object* v___x_1155_; 
lean_dec(v_pos_1122_);
v___x_1155_ = lean_box(0);
return v___x_1155_;
}
}
else
{
lean_dec_ref_known(v___x_1151_, 2);
goto v___jp_1124_;
}
}
}
case 3:
{
uint8_t v_a_1156_; lean_object* v_a_1157_; lean_object* v___x_1158_; 
lean_dec(v_n_1133_);
v_a_1156_ = lean_ctor_get_uint8(v_re_1120_, sizeof(void*)*1);
v_a_1157_ = lean_ctor_get(v_re_1120_, 0);
lean_inc(v_a_1157_);
lean_dec_ref_known(v_re_1120_, 1);
lean_inc(v_pos_1122_);
v___x_1158_ = l_List_drop___redArg(v_pos_1122_, v_subj_1121_);
lean_dec(v_subj_1121_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_dec(v_a_1157_);
lean_dec(v_pos_1122_);
return v___x_1158_;
}
else
{
lean_object* v_head_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1170_; 
v_head_1159_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1170_ == 0)
{
lean_object* v_unused_1171_; 
v_unused_1171_ = lean_ctor_get(v___x_1158_, 1);
lean_dec(v_unused_1171_);
v___x_1161_ = v___x_1158_;
v_isShared_1162_ = v_isSharedCheck_1170_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_head_1159_);
lean_dec(v___x_1158_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1170_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
uint8_t v___x_1163_; 
v___x_1163_ = lp_lean_x2dftml_LeanFtml_clsMatch(v_a_1156_, v_a_1157_, v_ci_1118_, v_head_1159_);
lean_dec(v_head_1159_);
lean_dec(v_a_1157_);
if (v___x_1163_ == 0)
{
lean_object* v___x_1164_; 
lean_del_object(v___x_1161_);
lean_dec(v_pos_1122_);
v___x_1164_ = lean_box(0);
return v___x_1164_;
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1165_ = lean_nat_add(v_pos_1122_, v_one_1132_);
lean_dec(v_pos_1122_);
v___x_1166_ = lean_box(0);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 1, v___x_1166_);
lean_ctor_set(v___x_1161_, 0, v___x_1165_);
v___x_1168_ = v___x_1161_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1165_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
}
case 4:
{
lean_object* v_a_1172_; lean_object* v_a_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_a_1172_ = lean_ctor_get(v_re_1120_, 0);
lean_inc(v_a_1172_);
v_a_1173_ = lean_ctor_get(v_re_1120_, 1);
lean_inc(v_a_1173_);
lean_dec_ref_known(v_re_1120_, 2);
lean_inc(v_subj_1121_);
v___x_1174_ = lp_lean_x2dftml_LeanFtml_mEnds(v_ci_1118_, v_da_1119_, v_a_1172_, v_subj_1121_, v_pos_1122_, v_n_1133_);
v___x_1175_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_repCollect___closed__0));
v___x_1176_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mEnds_spec__0(v_ci_1118_, v_da_1119_, v_a_1173_, v_subj_1121_, v_n_1133_, v___x_1174_, v___x_1175_);
lean_dec(v_n_1133_);
v___x_1177_ = lp_lean_x2dftml_LeanFtml_dedupN(v___x_1176_);
return v___x_1177_;
}
case 5:
{
lean_object* v_a_1178_; lean_object* v_a_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v_a_1178_ = lean_ctor_get(v_re_1120_, 0);
lean_inc(v_a_1178_);
v_a_1179_ = lean_ctor_get(v_re_1120_, 1);
lean_inc(v_a_1179_);
lean_dec_ref_known(v_re_1120_, 2);
lean_inc(v_pos_1122_);
lean_inc(v_subj_1121_);
v___x_1180_ = lp_lean_x2dftml_LeanFtml_mEnds(v_ci_1118_, v_da_1119_, v_a_1178_, v_subj_1121_, v_pos_1122_, v_n_1133_);
v___x_1181_ = lp_lean_x2dftml_LeanFtml_mEnds(v_ci_1118_, v_da_1119_, v_a_1179_, v_subj_1121_, v_pos_1122_, v_n_1133_);
lean_dec(v_n_1133_);
v___x_1182_ = l_List_appendTR___redArg(v___x_1180_, v___x_1181_);
v___x_1183_ = lp_lean_x2dftml_LeanFtml_dedupN(v___x_1182_);
return v___x_1183_;
}
case 6:
{
lean_object* v_a_1184_; lean_object* v_a_1185_; lean_object* v_a_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___f_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v_a_1184_ = lean_ctor_get(v_re_1120_, 0);
lean_inc(v_a_1184_);
v_a_1185_ = lean_ctor_get(v_re_1120_, 1);
lean_inc(v_a_1185_);
v_a_1186_ = lean_ctor_get(v_re_1120_, 2);
lean_inc(v_a_1186_);
lean_dec_ref_known(v_re_1120_, 3);
v___x_1187_ = lean_box(v_ci_1118_);
v___x_1188_ = lean_box(v_da_1119_);
lean_inc(v_subj_1121_);
v___f_1189_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_mEnds___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1189_, 0, v___x_1187_);
lean_closure_set(v___f_1189_, 1, v___x_1188_);
lean_closure_set(v___f_1189_, 2, v_a_1184_);
lean_closure_set(v___f_1189_, 3, v_subj_1121_);
lean_closure_set(v___f_1189_, 4, v_n_1133_);
v___x_1190_ = l_List_lengthTR___redArg(v_subj_1121_);
lean_dec(v_subj_1121_);
v___x_1191_ = lean_unsigned_to_nat(2u);
v___x_1192_ = lean_nat_add(v___x_1190_, v___x_1191_);
lean_dec(v___x_1190_);
v___x_1193_ = lp_lean_x2dftml_LeanFtml_repCollect(v___f_1189_, v_a_1185_, v_a_1186_, v_zero_1129_, v_pos_1122_, v___x_1192_);
lean_dec(v___x_1192_);
lean_dec(v_a_1186_);
lean_dec(v_a_1185_);
return v___x_1193_;
}
case 7:
{
uint8_t v___x_1194_; 
lean_dec(v_n_1133_);
lean_dec(v_subj_1121_);
v___x_1194_ = lean_nat_dec_eq(v_pos_1122_, v_zero_1129_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; 
lean_dec(v_pos_1122_);
v___x_1195_ = lean_box(0);
return v___x_1195_;
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1197_, 0, v_pos_1122_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
return v___x_1197_;
}
}
default: 
{
lean_object* v_rest_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
lean_dec(v_n_1133_);
lean_inc(v_pos_1122_);
v_rest_1198_ = l_List_drop___redArg(v_pos_1122_, v_subj_1121_);
lean_dec(v_subj_1121_);
v___x_1199_ = lean_box(0);
v___x_1200_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_rest_1198_, v___x_1199_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; uint8_t v___x_1202_; 
v___x_1201_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mEnds___closed__0));
v___x_1202_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_rest_1198_, v___x_1201_);
lean_dec(v_rest_1198_);
if (v___x_1202_ == 0)
{
lean_dec(v_pos_1122_);
return v___x_1199_;
}
else
{
lean_object* v___x_1203_; 
v___x_1203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1203_, 0, v_pos_1122_);
lean_ctor_set(v___x_1203_, 1, v___x_1199_);
return v___x_1203_;
}
}
else
{
lean_object* v___x_1204_; 
lean_dec(v_rest_1198_);
v___x_1204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1204_, 0, v_pos_1122_);
lean_ctor_set(v___x_1204_, 1, v___x_1199_);
return v___x_1204_;
}
}
}
}
v___jp_1124_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1125_ = lean_unsigned_to_nat(1u);
v___x_1126_ = lean_nat_add(v_pos_1122_, v___x_1125_);
lean_dec(v_pos_1122_);
v___x_1127_ = lean_box(0);
v___x_1128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
return v___x_1128_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mEnds___lam__0(uint8_t v_ci_1205_, uint8_t v_da_1206_, lean_object* v_a_1207_, lean_object* v_subj_1208_, lean_object* v_n_1209_, lean_object* v_p_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = lp_lean_x2dftml_LeanFtml_mEnds(v_ci_1205_, v_da_1206_, v_a_1207_, v_subj_1208_, v_p_1210_, v_n_1209_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mEnds_spec__0___boxed(lean_object* v_ci_1212_, lean_object* v_da_1213_, lean_object* v_a_1214_, lean_object* v_subj_1215_, lean_object* v_n_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_){
_start:
{
uint8_t v_ci_boxed_1219_; uint8_t v_da_boxed_1220_; lean_object* v_res_1221_; 
v_ci_boxed_1219_ = lean_unbox(v_ci_1212_);
v_da_boxed_1220_ = lean_unbox(v_da_1213_);
v_res_1221_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_mEnds_spec__0(v_ci_boxed_1219_, v_da_boxed_1220_, v_a_1214_, v_subj_1215_, v_n_1216_, v_a_1217_, v_a_1218_);
lean_dec(v_n_1216_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mEnds___boxed(lean_object* v_ci_1222_, lean_object* v_da_1223_, lean_object* v_re_1224_, lean_object* v_subj_1225_, lean_object* v_pos_1226_, lean_object* v_x_1227_){
_start:
{
uint8_t v_ci_boxed_1228_; uint8_t v_da_boxed_1229_; lean_object* v_res_1230_; 
v_ci_boxed_1228_ = lean_unbox(v_ci_1222_);
v_da_boxed_1229_ = lean_unbox(v_da_1223_);
v_res_1230_ = lp_lean_x2dftml_LeanFtml_mEnds(v_ci_boxed_1228_, v_da_boxed_1229_, v_re_1224_, v_subj_1225_, v_pos_1226_, v_x_1227_);
lean_dec(v_x_1227_);
return v_res_1230_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_pcreMatch_spec__0(lean_object* v_p_1231_, lean_object* v_subj_1232_, lean_object* v_x_1233_){
_start:
{
if (lean_obj_tag(v_x_1233_) == 0)
{
uint8_t v___x_1234_; 
lean_dec(v_subj_1232_);
lean_dec_ref(v_p_1231_);
v___x_1234_ = 0;
return v___x_1234_;
}
else
{
lean_object* v_head_1235_; lean_object* v_tail_1236_; lean_object* v_ast_1237_; uint8_t v_ci_1238_; uint8_t v_dotall_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; 
v_head_1235_ = lean_ctor_get(v_x_1233_, 0);
lean_inc(v_head_1235_);
v_tail_1236_ = lean_ctor_get(v_x_1233_, 1);
lean_inc(v_tail_1236_);
lean_dec_ref_known(v_x_1233_, 2);
v_ast_1237_ = lean_ctor_get(v_p_1231_, 0);
v_ci_1238_ = lean_ctor_get_uint8(v_p_1231_, sizeof(void*)*1);
v_dotall_1239_ = lean_ctor_get_uint8(v_p_1231_, sizeof(void*)*1 + 1);
v___x_1240_ = lean_unsigned_to_nat(16384u);
lean_inc(v_subj_1232_);
lean_inc(v_ast_1237_);
v___x_1241_ = lp_lean_x2dftml_LeanFtml_mEnds(v_ci_1238_, v_dotall_1239_, v_ast_1237_, v_subj_1232_, v_head_1235_, v___x_1240_);
v___x_1242_ = l_List_isEmpty___redArg(v___x_1241_);
lean_dec(v___x_1241_);
if (v___x_1242_ == 0)
{
uint8_t v___x_1243_; 
lean_dec(v_tail_1236_);
lean_dec(v_subj_1232_);
lean_dec_ref(v_p_1231_);
v___x_1243_ = 1;
return v___x_1243_;
}
else
{
v_x_1233_ = v_tail_1236_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_pcreMatch_spec__0___boxed(lean_object* v_p_1245_, lean_object* v_subj_1246_, lean_object* v_x_1247_){
_start:
{
uint8_t v_res_1248_; lean_object* v_r_1249_; 
v_res_1248_ = lp_lean_x2dftml_List_any___at___00LeanFtml_pcreMatch_spec__0(v_p_1245_, v_subj_1246_, v_x_1247_);
v_r_1249_ = lean_box(v_res_1248_);
return v_r_1249_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_pcreMatch(lean_object* v_p_1250_, lean_object* v_subj_1251_){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v___x_1252_ = l_List_lengthTR___redArg(v_subj_1251_);
v___x_1253_ = lean_unsigned_to_nat(1u);
v___x_1254_ = lean_nat_add(v___x_1252_, v___x_1253_);
lean_dec(v___x_1252_);
v___x_1255_ = l_List_range(v___x_1254_);
v___x_1256_ = lp_lean_x2dftml_List_any___at___00LeanFtml_pcreMatch_spec__0(v_p_1250_, v_subj_1251_, v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcreMatch___boxed(lean_object* v_p_1257_, lean_object* v_subj_1258_){
_start:
{
uint8_t v_res_1259_; lean_object* v_r_1260_; 
v_res_1259_ = lp_lean_x2dftml_LeanFtml_pcreMatch(v_p_1257_, v_subj_1258_);
v_r_1260_ = lean_box(v_res_1259_);
return v_r_1260_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcrePrefixEnd(lean_object* v_p_1261_, lean_object* v_subj_1262_, lean_object* v_pos_1263_){
_start:
{
lean_object* v_ast_1264_; uint8_t v_ci_1265_; uint8_t v_dotall_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_ast_1264_ = lean_ctor_get(v_p_1261_, 0);
lean_inc(v_ast_1264_);
v_ci_1265_ = lean_ctor_get_uint8(v_p_1261_, sizeof(void*)*1);
v_dotall_1266_ = lean_ctor_get_uint8(v_p_1261_, sizeof(void*)*1 + 1);
lean_dec_ref(v_p_1261_);
v___x_1267_ = lean_unsigned_to_nat(16384u);
v___x_1268_ = lp_lean_x2dftml_LeanFtml_mEnds(v_ci_1265_, v_dotall_1266_, v_ast_1264_, v_subj_1262_, v_pos_1263_, v___x_1267_);
v___x_1269_ = l_List_head_x3f___redArg(v___x_1268_);
lean_dec(v___x_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcreReplaceAll_go(lean_object* v_p_1270_, lean_object* v_subj_1271_, lean_object* v_pos_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_zero_1274_; uint8_t v_isZero_1275_; 
v_zero_1274_ = lean_unsigned_to_nat(0u);
v_isZero_1275_ = lean_nat_dec_eq(v_a_1273_, v_zero_1274_);
if (v_isZero_1275_ == 1)
{
lean_object* v___x_1276_; 
lean_dec(v_a_1273_);
lean_dec_ref(v_p_1270_);
v___x_1276_ = l_List_drop___redArg(v_pos_1272_, v_subj_1271_);
lean_dec(v_subj_1271_);
return v___x_1276_;
}
else
{
lean_object* v___x_1277_; uint8_t v___x_1278_; 
v___x_1277_ = l_List_lengthTR___redArg(v_subj_1271_);
v___x_1278_ = lean_nat_dec_le(v___x_1277_, v_pos_1272_);
lean_dec(v___x_1277_);
if (v___x_1278_ == 0)
{
lean_object* v_one_1279_; lean_object* v_n_1280_; lean_object* v___x_1281_; 
v_one_1279_ = lean_unsigned_to_nat(1u);
v_n_1280_ = lean_nat_sub(v_a_1273_, v_one_1279_);
lean_dec(v_a_1273_);
lean_inc(v_pos_1272_);
lean_inc(v_subj_1271_);
lean_inc_ref(v_p_1270_);
v___x_1281_ = lp_lean_x2dftml_LeanFtml_pcrePrefixEnd(v_p_1270_, v_subj_1271_, v_pos_1272_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v___x_1282_; 
lean_inc(v_pos_1272_);
v___x_1282_ = l_List_drop___redArg(v_pos_1272_, v_subj_1271_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_dec(v_n_1280_);
lean_dec(v_pos_1272_);
lean_dec(v_subj_1271_);
lean_dec_ref(v_p_1270_);
return v___x_1282_;
}
else
{
lean_object* v_head_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1292_; 
v_head_1283_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1292_ == 0)
{
lean_object* v_unused_1293_; 
v_unused_1293_ = lean_ctor_get(v___x_1282_, 1);
lean_dec(v_unused_1293_);
v___x_1285_ = v___x_1282_;
v_isShared_1286_ = v_isSharedCheck_1292_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_head_1283_);
lean_dec(v___x_1282_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1292_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1290_; 
v___x_1287_ = lean_nat_add(v_pos_1272_, v_one_1279_);
lean_dec(v_pos_1272_);
v___x_1288_ = lp_lean_x2dftml_LeanFtml_pcreReplaceAll_go(v_p_1270_, v_subj_1271_, v___x_1287_, v_n_1280_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 1, v___x_1288_);
v___x_1290_ = v___x_1285_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_head_1283_);
lean_ctor_set(v_reuseFailAlloc_1291_, 1, v___x_1288_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
else
{
lean_object* v_val_1294_; uint8_t v___x_1295_; 
v_val_1294_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_val_1294_);
lean_dec_ref_known(v___x_1281_, 1);
v___x_1295_ = lean_nat_dec_lt(v_pos_1272_, v_val_1294_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; 
lean_dec(v_val_1294_);
lean_inc(v_pos_1272_);
v___x_1296_ = l_List_drop___redArg(v_pos_1272_, v_subj_1271_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_dec(v_n_1280_);
lean_dec(v_pos_1272_);
lean_dec(v_subj_1271_);
lean_dec_ref(v_p_1270_);
return v___x_1296_;
}
else
{
lean_object* v_head_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1306_; 
v_head_1297_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1306_ == 0)
{
lean_object* v_unused_1307_; 
v_unused_1307_ = lean_ctor_get(v___x_1296_, 1);
lean_dec(v_unused_1307_);
v___x_1299_ = v___x_1296_;
v_isShared_1300_ = v_isSharedCheck_1306_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_head_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1306_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1304_; 
v___x_1301_ = lean_nat_add(v_pos_1272_, v_one_1279_);
lean_dec(v_pos_1272_);
v___x_1302_ = lp_lean_x2dftml_LeanFtml_pcreReplaceAll_go(v_p_1270_, v_subj_1271_, v___x_1301_, v_n_1280_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 1, v___x_1302_);
v___x_1304_ = v___x_1299_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_head_1297_);
lean_ctor_set(v_reuseFailAlloc_1305_, 1, v___x_1302_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
}
else
{
lean_dec(v_pos_1272_);
v_pos_1272_ = v_val_1294_;
v_a_1273_ = v_n_1280_;
goto _start;
}
}
}
else
{
lean_object* v___x_1309_; 
lean_dec(v_a_1273_);
lean_dec(v_pos_1272_);
lean_dec(v_subj_1271_);
lean_dec_ref(v_p_1270_);
v___x_1309_ = lean_box(0);
return v___x_1309_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pcreReplaceAll(lean_object* v_p_1310_, lean_object* v_subj_1311_){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1312_ = lean_unsigned_to_nat(0u);
v___x_1313_ = l_List_lengthTR___redArg(v_subj_1311_);
v___x_1314_ = lean_unsigned_to_nat(1u);
v___x_1315_ = lean_nat_add(v___x_1313_, v___x_1314_);
lean_dec(v___x_1313_);
v___x_1316_ = lp_lean_x2dftml_LeanFtml_pcreReplaceAll_go(v_p_1310_, v_subj_1311_, v___x_1312_, v___x_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitPattern_go(lean_object* v_bs_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, uint8_t v_a_1320_, uint8_t v_a_1321_){
_start:
{
if (lean_obj_tag(v_a_1318_) == 0)
{
lean_object* v___x_1322_; 
lean_dec(v_a_1319_);
v___x_1322_ = lean_box(0);
return v___x_1322_;
}
else
{
lean_object* v_head_1323_; lean_object* v_tail_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1361_; 
v_head_1323_ = lean_ctor_get(v_a_1318_, 0);
v_tail_1324_ = lean_ctor_get(v_a_1318_, 1);
v_isSharedCheck_1361_ = !lean_is_exclusive(v_a_1318_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1326_ = v_a_1318_;
v_isShared_1327_ = v_isSharedCheck_1361_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_tail_1324_);
lean_inc(v_head_1323_);
lean_dec(v_a_1318_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1361_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
uint8_t v___y_1329_; 
if (v_a_1320_ == 0)
{
uint8_t v___x_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; lean_object* v___y_1338_; uint8_t v___y_1347_; 
v___x_1334_ = 1;
v___x_1335_ = lean_unsigned_to_nat(92u);
v___x_1336_ = lean_nat_dec_eq(v_head_1323_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1352_; uint8_t v___x_1353_; 
v___x_1352_ = lean_unsigned_to_nat(91u);
v___x_1353_ = lean_nat_dec_eq(v_head_1323_, v___x_1352_);
if (v___x_1353_ == 0)
{
v___y_1347_ = v___x_1336_;
goto v___jp_1346_;
}
else
{
if (v_a_1321_ == 0)
{
lean_object* v___x_1354_; 
lean_del_object(v___x_1326_);
v___x_1354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1354_, 0, v_head_1323_);
lean_ctor_set(v___x_1354_, 1, v_a_1319_);
v_a_1318_ = v_tail_1324_;
v_a_1319_ = v___x_1354_;
v_a_1320_ = v___x_1336_;
v_a_1321_ = v___x_1334_;
goto _start;
}
else
{
v___y_1347_ = v___x_1336_;
goto v___jp_1346_;
}
}
}
else
{
lean_object* v___x_1356_; 
lean_del_object(v___x_1326_);
v___x_1356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1356_, 0, v_head_1323_);
lean_ctor_set(v___x_1356_, 1, v_a_1319_);
v_a_1318_ = v_tail_1324_;
v_a_1319_ = v___x_1356_;
v_a_1320_ = v___x_1334_;
goto _start;
}
v___jp_1337_:
{
uint8_t v___x_1339_; 
v___x_1339_ = lean_nat_dec_eq(v_head_1323_, v___y_1338_);
if (v___x_1339_ == 0)
{
v___y_1329_ = v___x_1336_;
goto v___jp_1328_;
}
else
{
if (v_a_1321_ == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
lean_del_object(v___x_1326_);
lean_dec(v_head_1323_);
v___x_1340_ = l_List_reverse___redArg(v_a_1319_);
v___x_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
lean_ctor_set(v___x_1341_, 1, v_tail_1324_);
v___x_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1341_);
return v___x_1342_;
}
else
{
v___y_1329_ = v___x_1336_;
goto v___jp_1328_;
}
}
}
v___jp_1343_:
{
if (lean_obj_tag(v_bs_1317_) == 0)
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_unsigned_to_nat(0u);
v___y_1338_ = v___x_1344_;
goto v___jp_1337_;
}
else
{
lean_object* v_head_1345_; 
v_head_1345_ = lean_ctor_get(v_bs_1317_, 0);
v___y_1338_ = v_head_1345_;
goto v___jp_1337_;
}
}
v___jp_1346_:
{
lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1348_ = lean_unsigned_to_nat(93u);
v___x_1349_ = lean_nat_dec_eq(v_head_1323_, v___x_1348_);
if (v___x_1349_ == 0)
{
goto v___jp_1343_;
}
else
{
if (v_a_1321_ == 0)
{
goto v___jp_1343_;
}
else
{
lean_object* v___x_1350_; 
lean_del_object(v___x_1326_);
v___x_1350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1350_, 0, v_head_1323_);
lean_ctor_set(v___x_1350_, 1, v_a_1319_);
v_a_1318_ = v_tail_1324_;
v_a_1319_ = v___x_1350_;
v_a_1320_ = v___y_1347_;
v_a_1321_ = v___y_1347_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
lean_del_object(v___x_1326_);
v___x_1358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1358_, 0, v_head_1323_);
lean_ctor_set(v___x_1358_, 1, v_a_1319_);
v___x_1359_ = 0;
v_a_1318_ = v_tail_1324_;
v_a_1319_ = v___x_1358_;
v_a_1320_ = v___x_1359_;
goto _start;
}
v___jp_1328_:
{
lean_object* v___x_1331_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v_a_1319_);
v___x_1331_ = v___x_1326_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_head_1323_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v_a_1319_);
v___x_1331_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
v_a_1318_ = v_tail_1324_;
v_a_1319_ = v___x_1331_;
v_a_1320_ = v___y_1329_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitPattern_go___boxed(lean_object* v_bs_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_){
_start:
{
uint8_t v_a_377__boxed_1367_; uint8_t v_a_378__boxed_1368_; lean_object* v_res_1369_; 
v_a_377__boxed_1367_ = lean_unbox(v_a_1365_);
v_a_378__boxed_1368_ = lean_unbox(v_a_1366_);
v_res_1369_ = lp_lean_x2dftml_LeanFtml_splitPattern_go(v_bs_1362_, v_a_1363_, v_a_1364_, v_a_377__boxed_1367_, v_a_378__boxed_1368_);
lean_dec(v_bs_1362_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitPattern(lean_object* v_bs_1370_){
_start:
{
if (lean_obj_tag(v_bs_1370_) == 0)
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_box(0);
return v___x_1371_;
}
else
{
lean_object* v_tail_1372_; lean_object* v___x_1373_; uint8_t v___x_1374_; lean_object* v___x_1375_; 
v_tail_1372_ = lean_ctor_get(v_bs_1370_, 1);
lean_inc(v_tail_1372_);
v___x_1373_ = lean_box(0);
v___x_1374_ = 0;
v___x_1375_ = lp_lean_x2dftml_LeanFtml_splitPattern_go(v_bs_1370_, v_tail_1372_, v___x_1373_, v___x_1374_, v___x_1374_);
lean_dec_ref_known(v_bs_1370_, 2);
return v___x_1375_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorIdx___impl(lean_object* v_x_1376_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_obj_tag_nat(v_x_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorIdx___impl___boxed(lean_object* v_x_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = lp_lean_x2dftml_LeanFtml_ClassPiece_ctorIdx___impl(v_x_1378_);
lean_dec_ref(v_x_1378_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___redArg(lean_object* v_t_1380_, lean_object* v_k_1381_){
_start:
{
lean_object* v_a_1382_; lean_object* v___x_1383_; 
v_a_1382_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_a_1382_);
lean_dec_ref(v_t_1380_);
v___x_1383_ = lean_apply_1(v_k_1381_, v_a_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim(lean_object* v_motive_1384_, lean_object* v_ctorIdx_1385_, lean_object* v_t_1386_, lean_object* v_h_1387_, lean_object* v_k_1388_){
_start:
{
lean_object* v___x_1389_; 
v___x_1389_ = lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___redArg(v_t_1386_, v_k_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___boxed(lean_object* v_motive_1390_, lean_object* v_ctorIdx_1391_, lean_object* v_t_1392_, lean_object* v_h_1393_, lean_object* v_k_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim(v_motive_1390_, v_ctorIdx_1391_, v_t_1392_, v_h_1393_, v_k_1394_);
lean_dec(v_ctorIdx_1391_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_item_elim___redArg(lean_object* v_t_1396_, lean_object* v_item_1397_){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___redArg(v_t_1396_, v_item_1397_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_item_elim(lean_object* v_motive_1399_, lean_object* v_t_1400_, lean_object* v_h_1401_, lean_object* v_item_1402_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___redArg(v_t_1400_, v_item_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_chr_elim___redArg(lean_object* v_t_1404_, lean_object* v_chr_1405_){
_start:
{
lean_object* v___x_1406_; 
v___x_1406_ = lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___redArg(v_t_1404_, v_chr_1405_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ClassPiece_chr_elim(lean_object* v_motive_1407_, lean_object* v_t_1408_, lean_object* v_h_1409_, lean_object* v_chr_1410_){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = lp_lean_x2dftml_LeanFtml_ClassPiece_ctorElim___redArg(v_t_1408_, v_chr_1410_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classChar(lean_object* v_x_1428_){
_start:
{
if (lean_obj_tag(v_x_1428_) == 0)
{
lean_object* v___x_1429_; 
v___x_1429_ = lean_box(0);
return v___x_1429_;
}
else
{
lean_object* v_head_1430_; lean_object* v_tail_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1497_; 
v_head_1430_ = lean_ctor_get(v_x_1428_, 0);
v_tail_1431_ = lean_ctor_get(v_x_1428_, 1);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_x_1428_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1433_ = v_x_1428_;
v_isShared_1434_ = v_isSharedCheck_1497_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_tail_1431_);
lean_inc(v_head_1430_);
lean_dec(v_x_1428_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1497_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v_c_1436_; lean_object* v___x_1442_; uint8_t v___x_1443_; 
v___x_1442_ = lean_unsigned_to_nat(92u);
v___x_1443_ = lean_nat_dec_eq(v_head_1430_, v___x_1442_);
if (v___x_1443_ == 0)
{
v_c_1436_ = v_head_1430_;
goto v___jp_1435_;
}
else
{
lean_dec(v_head_1430_);
if (lean_obj_tag(v_tail_1431_) == 1)
{
lean_object* v_head_1444_; lean_object* v_tail_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1496_; 
lean_del_object(v___x_1433_);
v_head_1444_ = lean_ctor_get(v_tail_1431_, 0);
v_tail_1445_ = lean_ctor_get(v_tail_1431_, 1);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_tail_1431_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1447_ = v_tail_1431_;
v_isShared_1448_ = v_isSharedCheck_1496_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_tail_1445_);
lean_inc(v_head_1444_);
lean_dec(v_tail_1431_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1496_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; uint8_t v___x_1450_; 
v___x_1449_ = lean_unsigned_to_nat(115u);
v___x_1450_ = lean_nat_dec_eq(v_head_1444_, v___x_1449_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; uint8_t v___x_1452_; 
v___x_1451_ = lean_unsigned_to_nat(83u);
v___x_1452_ = lean_nat_dec_eq(v_head_1444_, v___x_1451_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; uint8_t v___x_1454_; 
v___x_1453_ = lean_unsigned_to_nat(100u);
v___x_1454_ = lean_nat_dec_eq(v_head_1444_, v___x_1453_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; uint8_t v___x_1456_; 
v___x_1455_ = lean_unsigned_to_nat(68u);
v___x_1456_ = lean_nat_dec_eq(v_head_1444_, v___x_1455_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; uint8_t v___x_1458_; 
v___x_1457_ = lean_unsigned_to_nat(119u);
v___x_1458_ = lean_nat_dec_eq(v_head_1444_, v___x_1457_);
if (v___x_1458_ == 0)
{
lean_object* v___x_1459_; uint8_t v___x_1460_; 
v___x_1459_ = lean_unsigned_to_nat(87u);
v___x_1460_ = lean_nat_dec_eq(v_head_1444_, v___x_1459_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1461_, 0, v_head_1444_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1461_);
v___x_1463_ = v___x_1447_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v___x_1461_);
lean_ctor_set(v_reuseFailAlloc_1465_, 1, v_tail_1445_);
v___x_1463_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
return v___x_1464_;
}
}
else
{
lean_object* v___x_1466_; lean_object* v___x_1468_; 
lean_dec(v_head_1444_);
v___x_1466_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classChar___closed__0));
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1466_);
v___x_1468_ = v___x_1447_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1466_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_tail_1445_);
v___x_1468_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
}
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1473_; 
lean_dec(v_head_1444_);
v___x_1471_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classChar___closed__1));
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1471_);
v___x_1473_ = v___x_1447_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1471_);
lean_ctor_set(v_reuseFailAlloc_1475_, 1, v_tail_1445_);
v___x_1473_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___x_1474_; 
v___x_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
return v___x_1474_;
}
}
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1478_; 
lean_dec(v_head_1444_);
v___x_1476_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classChar___closed__2));
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1476_);
v___x_1478_ = v___x_1447_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1476_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v_tail_1445_);
v___x_1478_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
lean_object* v___x_1479_; 
v___x_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
return v___x_1479_;
}
}
}
else
{
lean_object* v___x_1481_; lean_object* v___x_1483_; 
lean_dec(v_head_1444_);
v___x_1481_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classChar___closed__3));
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1481_);
v___x_1483_ = v___x_1447_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1485_, 1, v_tail_1445_);
v___x_1483_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
return v___x_1484_;
}
}
}
else
{
lean_object* v___x_1486_; lean_object* v___x_1488_; 
lean_dec(v_head_1444_);
v___x_1486_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classChar___closed__4));
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1486_);
v___x_1488_ = v___x_1447_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1486_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v_tail_1445_);
v___x_1488_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
lean_object* v___x_1489_; 
v___x_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1488_);
return v___x_1489_;
}
}
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1493_; 
lean_dec(v_head_1444_);
v___x_1491_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classChar___closed__5));
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1491_);
v___x_1493_ = v___x_1447_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1491_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_tail_1445_);
v___x_1493_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
return v___x_1494_;
}
}
}
}
else
{
v_c_1436_ = v___x_1442_;
goto v___jp_1435_;
}
}
v___jp_1435_:
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1437_, 0, v_c_1436_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set_tag(v___x_1433_, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1437_);
v___x_1439_ = v___x_1433_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1437_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v_tail_1431_);
v___x_1439_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
return v___x_1440_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseClassItems(lean_object* v_x_1500_, lean_object* v_x_1501_, uint8_t v_x_1502_){
_start:
{
lean_object* v_zero_1503_; uint8_t v_isZero_1504_; 
v_zero_1503_ = lean_unsigned_to_nat(0u);
v_isZero_1504_ = lean_nat_dec_eq(v_x_1500_, v_zero_1503_);
if (v_isZero_1504_ == 1)
{
lean_object* v___x_1505_; 
lean_dec(v_x_1501_);
v___x_1505_ = lean_box(0);
return v___x_1505_;
}
else
{
if (lean_obj_tag(v_x_1501_) == 0)
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_box(0);
return v___x_1506_;
}
else
{
lean_object* v_head_1507_; lean_object* v_tail_1508_; lean_object* v_one_1509_; lean_object* v_n_1510_; lean_object* v___x_1511_; uint8_t v___x_1512_; 
v_head_1507_ = lean_ctor_get(v_x_1501_, 0);
v_tail_1508_ = lean_ctor_get(v_x_1501_, 1);
v_one_1509_ = lean_unsigned_to_nat(1u);
v_n_1510_ = lean_nat_sub(v_x_1500_, v_one_1509_);
v___x_1511_ = lean_unsigned_to_nat(93u);
v___x_1512_ = lean_nat_dec_eq(v_head_1507_, v___x_1511_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; 
v___x_1513_ = lp_lean_x2dftml_LeanFtml_classChar(v_x_1501_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v___x_1514_; 
lean_dec(v_n_1510_);
v___x_1514_ = lean_box(0);
return v___x_1514_;
}
else
{
lean_object* v_val_1515_; lean_object* v_fst_1516_; 
v_val_1515_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_val_1515_);
lean_dec_ref_known(v___x_1513_, 1);
v_fst_1516_ = lean_ctor_get(v_val_1515_, 0);
lean_inc(v_fst_1516_);
if (lean_obj_tag(v_fst_1516_) == 0)
{
lean_object* v_snd_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1543_; 
v_snd_1517_ = lean_ctor_get(v_val_1515_, 1);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_val_1515_);
if (v_isSharedCheck_1543_ == 0)
{
lean_object* v_unused_1544_; 
v_unused_1544_ = lean_ctor_get(v_val_1515_, 0);
lean_dec(v_unused_1544_);
v___x_1519_ = v_val_1515_;
v_isShared_1520_ = v_isSharedCheck_1543_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_snd_1517_);
lean_dec(v_val_1515_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1543_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v_a_1521_; lean_object* v___x_1522_; 
v_a_1521_ = lean_ctor_get(v_fst_1516_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v_fst_1516_, 1);
v___x_1522_ = lp_lean_x2dftml_LeanFtml_parseClassItems(v_n_1510_, v_snd_1517_, v___x_1512_);
lean_dec(v_n_1510_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_dec(v_a_1521_);
lean_del_object(v___x_1519_);
return v___x_1522_;
}
else
{
lean_object* v_val_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1542_; 
v_val_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1542_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_val_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1542_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v_fst_1527_; lean_object* v_snd_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1541_; 
v_fst_1527_ = lean_ctor_get(v_val_1523_, 0);
v_snd_1528_ = lean_ctor_get(v_val_1523_, 1);
v_isSharedCheck_1541_ = !lean_is_exclusive(v_val_1523_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1530_ = v_val_1523_;
v_isShared_1531_ = v_isSharedCheck_1541_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_snd_1528_);
lean_inc(v_fst_1527_);
lean_dec(v_val_1523_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1541_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1520_ == 0)
{
lean_ctor_set_tag(v___x_1519_, 1);
lean_ctor_set(v___x_1519_, 1, v_fst_1527_);
lean_ctor_set(v___x_1519_, 0, v_a_1521_);
v___x_1533_ = v___x_1519_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1521_);
lean_ctor_set(v_reuseFailAlloc_1540_, 1, v_fst_1527_);
v___x_1533_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
lean_object* v___x_1535_; 
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1533_);
v___x_1535_ = v___x_1530_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1533_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_snd_1528_);
v___x_1535_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
lean_object* v___x_1537_; 
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1535_);
v___x_1537_ = v___x_1525_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1535_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_snd_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1650_; 
v_snd_1545_ = lean_ctor_get(v_val_1515_, 1);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_val_1515_);
if (v_isSharedCheck_1650_ == 0)
{
lean_object* v_unused_1651_; 
v_unused_1651_ = lean_ctor_get(v_val_1515_, 0);
lean_dec(v_unused_1651_);
v___x_1547_ = v_val_1515_;
v_isShared_1548_ = v_isSharedCheck_1650_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_snd_1545_);
lean_dec(v_val_1515_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1650_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v_a_1549_; 
v_a_1549_ = lean_ctor_get(v_fst_1516_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v_fst_1516_, 1);
if (lean_obj_tag(v_snd_1545_) == 1)
{
lean_object* v_head_1573_; lean_object* v_tail_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; 
v_head_1573_ = lean_ctor_get(v_snd_1545_, 0);
v_tail_1574_ = lean_ctor_get(v_snd_1545_, 1);
lean_inc(v_tail_1574_);
v___x_1575_ = lean_unsigned_to_nat(45u);
v___x_1576_ = lean_nat_dec_eq(v_head_1573_, v___x_1575_);
if (v___x_1576_ == 0)
{
lean_dec(v_tail_1574_);
goto v___jp_1550_;
}
else
{
lean_del_object(v___x_1547_);
if (lean_obj_tag(v_tail_1574_) == 0)
{
lean_object* v___x_1577_; 
lean_dec_ref_known(v_snd_1545_, 2);
lean_dec(v_a_1549_);
lean_dec(v_n_1510_);
v___x_1577_ = lean_box(0);
return v___x_1577_;
}
else
{
lean_object* v_head_1578_; uint8_t v___x_1579_; 
v_head_1578_ = lean_ctor_get(v_tail_1574_, 0);
v___x_1579_ = lean_nat_dec_eq(v_head_1578_, v___x_1511_);
if (v___x_1579_ == 0)
{
lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1619_; 
v_isSharedCheck_1619_ = !lean_is_exclusive(v_snd_1545_);
if (v_isSharedCheck_1619_ == 0)
{
lean_object* v_unused_1620_; lean_object* v_unused_1621_; 
v_unused_1620_ = lean_ctor_get(v_snd_1545_, 1);
lean_dec(v_unused_1620_);
v_unused_1621_ = lean_ctor_get(v_snd_1545_, 0);
lean_dec(v_unused_1621_);
v___x_1581_ = v_snd_1545_;
v_isShared_1582_ = v_isSharedCheck_1619_;
goto v_resetjp_1580_;
}
else
{
lean_dec(v_snd_1545_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1619_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; 
v___x_1583_ = lp_lean_x2dftml_LeanFtml_classChar(v_tail_1574_);
if (lean_obj_tag(v___x_1583_) == 1)
{
lean_object* v_val_1584_; lean_object* v_fst_1585_; 
v_val_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_val_1584_);
lean_dec_ref_known(v___x_1583_, 1);
v_fst_1585_ = lean_ctor_get(v_val_1584_, 0);
lean_inc(v_fst_1585_);
if (lean_obj_tag(v_fst_1585_) == 1)
{
lean_object* v_snd_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1615_; 
v_snd_1586_ = lean_ctor_get(v_val_1584_, 1);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_val_1584_);
if (v_isSharedCheck_1615_ == 0)
{
lean_object* v_unused_1616_; 
v_unused_1616_ = lean_ctor_get(v_val_1584_, 0);
lean_dec(v_unused_1616_);
v___x_1588_ = v_val_1584_;
v_isShared_1589_ = v_isSharedCheck_1615_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_snd_1586_);
lean_dec(v_val_1584_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1615_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v_a_1590_; lean_object* v___x_1591_; 
v_a_1590_ = lean_ctor_get(v_fst_1585_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v_fst_1585_, 1);
v___x_1591_ = lp_lean_x2dftml_LeanFtml_parseClassItems(v_n_1510_, v_snd_1586_, v___x_1579_);
lean_dec(v_n_1510_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_dec(v_a_1590_);
lean_del_object(v___x_1588_);
lean_del_object(v___x_1581_);
lean_dec(v_a_1549_);
return v___x_1591_;
}
else
{
lean_object* v_val_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1614_; 
v_val_1592_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1594_ = v___x_1591_;
v_isShared_1595_ = v_isSharedCheck_1614_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_val_1592_);
lean_dec(v___x_1591_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1614_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v_fst_1596_; lean_object* v_snd_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1613_; 
v_fst_1596_ = lean_ctor_get(v_val_1592_, 0);
v_snd_1597_ = lean_ctor_get(v_val_1592_, 1);
v_isSharedCheck_1613_ = !lean_is_exclusive(v_val_1592_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1599_ = v_val_1592_;
v_isShared_1600_ = v_isSharedCheck_1613_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_snd_1597_);
lean_inc(v_fst_1596_);
lean_dec(v_val_1592_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1613_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1602_; 
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 1, v_a_1590_);
lean_ctor_set(v___x_1588_, 0, v_a_1549_);
v___x_1602_ = v___x_1588_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1549_);
lean_ctor_set(v_reuseFailAlloc_1612_, 1, v_a_1590_);
v___x_1602_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
lean_object* v___x_1604_; 
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 1, v_fst_1596_);
lean_ctor_set(v___x_1581_, 0, v___x_1602_);
v___x_1604_ = v___x_1581_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_fst_1596_);
v___x_1604_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
lean_object* v___x_1606_; 
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 0, v___x_1604_);
v___x_1606_ = v___x_1599_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v___x_1604_);
lean_ctor_set(v_reuseFailAlloc_1610_, 1, v_snd_1597_);
v___x_1606_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
lean_object* v___x_1608_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 0, v___x_1606_);
v___x_1608_ = v___x_1594_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v___x_1606_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1617_; 
lean_dec(v_fst_1585_);
lean_dec(v_val_1584_);
lean_del_object(v___x_1581_);
lean_dec(v_a_1549_);
lean_dec(v_n_1510_);
v___x_1617_ = lean_box(0);
return v___x_1617_;
}
}
else
{
lean_object* v___x_1618_; 
lean_dec(v___x_1583_);
lean_del_object(v___x_1581_);
lean_dec(v_a_1549_);
lean_dec(v_n_1510_);
v___x_1618_ = lean_box(0);
return v___x_1618_;
}
}
}
else
{
lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1647_; 
v_isSharedCheck_1647_ = !lean_is_exclusive(v_tail_1574_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; lean_object* v_unused_1649_; 
v_unused_1648_ = lean_ctor_get(v_tail_1574_, 1);
lean_dec(v_unused_1648_);
v_unused_1649_ = lean_ctor_get(v_tail_1574_, 0);
lean_dec(v_unused_1649_);
v___x_1623_ = v_tail_1574_;
v_isShared_1624_ = v_isSharedCheck_1647_;
goto v_resetjp_1622_;
}
else
{
lean_dec(v_tail_1574_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1647_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1625_; 
v___x_1625_ = lp_lean_x2dftml_LeanFtml_parseClassItems(v_n_1510_, v_snd_1545_, v___x_1512_);
lean_dec(v_n_1510_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_del_object(v___x_1623_);
lean_dec(v_a_1549_);
return v___x_1625_;
}
else
{
lean_object* v_val_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1646_; 
v_val_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1646_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_val_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1646_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v_fst_1630_; lean_object* v_snd_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1645_; 
v_fst_1630_ = lean_ctor_get(v_val_1626_, 0);
v_snd_1631_ = lean_ctor_get(v_val_1626_, 1);
v_isSharedCheck_1645_ = !lean_is_exclusive(v_val_1626_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1633_ = v_val_1626_;
v_isShared_1634_ = v_isSharedCheck_1645_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_snd_1631_);
lean_inc(v_fst_1630_);
lean_dec(v_val_1626_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1645_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1635_; lean_object* v___x_1637_; 
lean_inc(v_a_1549_);
v___x_1635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1635_, 0, v_a_1549_);
lean_ctor_set(v___x_1635_, 1, v_a_1549_);
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 1, v_fst_1630_);
lean_ctor_set(v___x_1623_, 0, v___x_1635_);
v___x_1637_ = v___x_1623_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1635_);
lean_ctor_set(v_reuseFailAlloc_1644_, 1, v_fst_1630_);
v___x_1637_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
lean_object* v___x_1639_; 
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 0, v___x_1637_);
v___x_1639_ = v___x_1633_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1637_);
lean_ctor_set(v_reuseFailAlloc_1643_, 1, v_snd_1631_);
v___x_1639_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
lean_object* v___x_1641_; 
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v___x_1639_);
v___x_1641_ = v___x_1628_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v___x_1639_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
}
}
}
}
}
}
}
else
{
goto v___jp_1550_;
}
v___jp_1550_:
{
lean_object* v___x_1551_; 
v___x_1551_ = lp_lean_x2dftml_LeanFtml_parseClassItems(v_n_1510_, v_snd_1545_, v___x_1512_);
lean_dec(v_n_1510_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_dec(v_a_1549_);
lean_del_object(v___x_1547_);
return v___x_1551_;
}
else
{
lean_object* v_val_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1572_; 
v_val_1552_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1554_ = v___x_1551_;
v_isShared_1555_ = v_isSharedCheck_1572_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_val_1552_);
lean_dec(v___x_1551_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1572_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v_fst_1556_; lean_object* v_snd_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1571_; 
v_fst_1556_ = lean_ctor_get(v_val_1552_, 0);
v_snd_1557_ = lean_ctor_get(v_val_1552_, 1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_val_1552_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1559_ = v_val_1552_;
v_isShared_1560_ = v_isSharedCheck_1571_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_snd_1557_);
lean_inc(v_fst_1556_);
lean_dec(v_val_1552_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1571_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
lean_inc(v_a_1549_);
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 1, v_a_1549_);
lean_ctor_set(v___x_1547_, 0, v_a_1549_);
v___x_1562_ = v___x_1547_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1549_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_a_1549_);
v___x_1562_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
lean_object* v___x_1563_; lean_object* v___x_1565_; 
v___x_1563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1562_);
lean_ctor_set(v___x_1563_, 1, v_fst_1556_);
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 0, v___x_1563_);
v___x_1565_ = v___x_1559_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v___x_1563_);
lean_ctor_set(v_reuseFailAlloc_1569_, 1, v_snd_1557_);
v___x_1565_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
lean_object* v___x_1567_; 
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 0, v___x_1565_);
v___x_1567_ = v___x_1554_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1565_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1680_; 
lean_inc(v_tail_1508_);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_x_1501_);
if (v_isSharedCheck_1680_ == 0)
{
lean_object* v_unused_1681_; lean_object* v_unused_1682_; 
v_unused_1681_ = lean_ctor_get(v_x_1501_, 1);
lean_dec(v_unused_1681_);
v_unused_1682_ = lean_ctor_get(v_x_1501_, 0);
lean_dec(v_unused_1682_);
v___x_1653_ = v_x_1501_;
v_isShared_1654_ = v_isSharedCheck_1680_;
goto v_resetjp_1652_;
}
else
{
lean_dec(v_x_1501_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1680_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
if (v_x_1502_ == 0)
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
lean_del_object(v___x_1653_);
lean_dec(v_n_1510_);
v___x_1655_ = lean_box(0);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
lean_ctor_set(v___x_1656_, 1, v_tail_1508_);
v___x_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
else
{
lean_object* v___x_1658_; 
v___x_1658_ = lp_lean_x2dftml_LeanFtml_parseClassItems(v_n_1510_, v_tail_1508_, v_isZero_1504_);
lean_dec(v_n_1510_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_del_object(v___x_1653_);
return v___x_1658_;
}
else
{
lean_object* v_val_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1679_; 
v_val_1659_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1661_ = v___x_1658_;
v_isShared_1662_ = v_isSharedCheck_1679_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_val_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1679_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v_fst_1663_; lean_object* v_snd_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1678_; 
v_fst_1663_ = lean_ctor_get(v_val_1659_, 0);
v_snd_1664_ = lean_ctor_get(v_val_1659_, 1);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_val_1659_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1666_ = v_val_1659_;
v_isShared_1667_ = v_isSharedCheck_1678_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_snd_1664_);
lean_inc(v_fst_1663_);
lean_dec(v_val_1659_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1678_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1668_; lean_object* v___x_1670_; 
v___x_1668_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseClassItems___closed__0));
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 1, v_fst_1663_);
lean_ctor_set(v___x_1653_, 0, v___x_1668_);
v___x_1670_ = v___x_1653_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1668_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v_fst_1663_);
v___x_1670_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
lean_object* v___x_1672_; 
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 0, v___x_1670_);
v___x_1672_ = v___x_1666_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v___x_1670_);
lean_ctor_set(v_reuseFailAlloc_1676_, 1, v_snd_1664_);
v___x_1672_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
lean_object* v___x_1674_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 0, v___x_1672_);
v___x_1674_ = v___x_1661_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseClassItems___boxed(lean_object* v_x_1683_, lean_object* v_x_1684_, lean_object* v_x_1685_){
_start:
{
uint8_t v_x_779__boxed_1686_; lean_object* v_res_1687_; 
v_x_779__boxed_1686_ = lean_unbox(v_x_1685_);
v_res_1687_ = lp_lean_x2dftml_LeanFtml_parseClassItems(v_x_1683_, v_x_1684_, v_x_779__boxed_1686_);
lean_dec(v_x_1683_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseClass(lean_object* v_fuel_1688_, lean_object* v_bs_1689_){
_start:
{
if (lean_obj_tag(v_bs_1689_) == 1)
{
lean_object* v_head_1690_; lean_object* v_tail_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; uint8_t v_fst_1695_; lean_object* v_snd_1696_; 
v_head_1690_ = lean_ctor_get(v_bs_1689_, 0);
lean_inc(v_head_1690_);
v_tail_1691_ = lean_ctor_get(v_bs_1689_, 1);
lean_inc(v_tail_1691_);
lean_dec_ref_known(v_bs_1689_, 2);
v___x_1692_ = lean_unsigned_to_nat(91u);
v___x_1693_ = lean_nat_dec_eq(v_head_1690_, v___x_1692_);
lean_dec(v_head_1690_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1719_; 
lean_dec(v_tail_1691_);
v___x_1719_ = lean_box(0);
return v___x_1719_;
}
else
{
if (lean_obj_tag(v_tail_1691_) == 1)
{
lean_object* v_head_1720_; lean_object* v_tail_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; 
v_head_1720_ = lean_ctor_get(v_tail_1691_, 0);
v_tail_1721_ = lean_ctor_get(v_tail_1691_, 1);
v___x_1722_ = lean_unsigned_to_nat(94u);
v___x_1723_ = lean_nat_dec_eq(v_head_1720_, v___x_1722_);
if (v___x_1723_ == 0)
{
goto v___jp_1717_;
}
else
{
lean_inc(v_tail_1721_);
lean_dec_ref_known(v_tail_1691_, 2);
v_fst_1695_ = v___x_1723_;
v_snd_1696_ = v_tail_1721_;
goto v___jp_1694_;
}
}
else
{
goto v___jp_1717_;
}
}
v___jp_1694_:
{
lean_object* v___x_1697_; 
v___x_1697_ = lp_lean_x2dftml_LeanFtml_parseClassItems(v_fuel_1688_, v_snd_1696_, v___x_1693_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_box(0);
return v___x_1698_;
}
else
{
lean_object* v_val_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1716_; 
v_val_1699_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1701_ = v___x_1697_;
v_isShared_1702_ = v_isSharedCheck_1716_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_val_1699_);
lean_dec(v___x_1697_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1716_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v_fst_1703_; lean_object* v_snd_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1715_; 
v_fst_1703_ = lean_ctor_get(v_val_1699_, 0);
v_snd_1704_ = lean_ctor_get(v_val_1699_, 1);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_val_1699_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1706_ = v_val_1699_;
v_isShared_1707_ = v_isSharedCheck_1715_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_snd_1704_);
lean_inc(v_fst_1703_);
lean_dec(v_val_1699_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1715_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1708_; lean_object* v___x_1710_; 
v___x_1708_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_1708_, 0, v_fst_1703_);
lean_ctor_set_uint8(v___x_1708_, sizeof(void*)*1, v_fst_1695_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v___x_1708_);
v___x_1710_ = v___x_1706_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v___x_1708_);
lean_ctor_set(v_reuseFailAlloc_1714_, 1, v_snd_1704_);
v___x_1710_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
lean_object* v___x_1712_; 
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1710_);
v___x_1712_ = v___x_1701_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v___x_1710_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
}
}
v___jp_1717_:
{
uint8_t v___x_1718_; 
v___x_1718_ = 0;
v_fst_1695_ = v___x_1718_;
v_snd_1696_ = v_tail_1691_;
goto v___jp_1694_;
}
}
else
{
lean_object* v___x_1724_; 
lean_dec(v_bs_1689_);
v___x_1724_ = lean_box(0);
return v___x_1724_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseClass___boxed(lean_object* v_fuel_1725_, lean_object* v_bs_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = lp_lean_x2dftml_LeanFtml_parseClass(v_fuel_1725_, v_bs_1726_);
lean_dec(v_fuel_1725_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_digitPrefix_spec__0(lean_object* v_l_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_){
_start:
{
if (lean_obj_tag(v_a_1729_) == 0)
{
lean_dec_ref(v_a_1730_);
lean_inc(v_l_1728_);
return v_l_1728_;
}
else
{
lean_object* v_head_1731_; lean_object* v_tail_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v_head_1731_ = lean_ctor_get(v_a_1729_, 0);
lean_inc(v_head_1731_);
v_tail_1732_ = lean_ctor_get(v_a_1729_, 1);
lean_inc(v_tail_1732_);
lean_dec_ref_known(v_a_1729_, 2);
v___x_1733_ = lean_unsigned_to_nat(48u);
v___x_1734_ = lean_nat_dec_le(v___x_1733_, v_head_1731_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; 
lean_dec(v_tail_1732_);
lean_dec(v_head_1731_);
v___x_1735_ = lean_array_to_list(v_a_1730_);
return v___x_1735_;
}
else
{
lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = lean_unsigned_to_nat(57u);
v___x_1737_ = lean_nat_dec_le(v_head_1731_, v___x_1736_);
if (v___x_1737_ == 0)
{
lean_object* v___x_1738_; 
lean_dec(v_tail_1732_);
lean_dec(v_head_1731_);
v___x_1738_ = lean_array_to_list(v_a_1730_);
return v___x_1738_;
}
else
{
lean_object* v___x_1739_; 
v___x_1739_ = lean_array_push(v_a_1730_, v_head_1731_);
v_a_1729_ = v_tail_1732_;
v_a_1730_ = v___x_1739_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_digitPrefix_spec__0___boxed(lean_object* v_l_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_digitPrefix_spec__0(v_l_1741_, v_a_1742_, v_a_1743_);
lean_dec(v_l_1741_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_digitPrefix_spec__1(lean_object* v_x_1745_, lean_object* v_x_1746_){
_start:
{
if (lean_obj_tag(v_x_1746_) == 0)
{
return v_x_1745_;
}
else
{
lean_object* v_head_1747_; lean_object* v_tail_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v_head_1747_ = lean_ctor_get(v_x_1746_, 0);
v_tail_1748_ = lean_ctor_get(v_x_1746_, 1);
v___x_1749_ = lean_unsigned_to_nat(10u);
v___x_1750_ = lean_nat_mul(v_x_1745_, v___x_1749_);
lean_dec(v_x_1745_);
v___x_1751_ = lean_unsigned_to_nat(48u);
v___x_1752_ = lean_nat_sub(v_head_1747_, v___x_1751_);
v___x_1753_ = lean_nat_add(v___x_1750_, v___x_1752_);
lean_dec(v___x_1752_);
lean_dec(v___x_1750_);
v_x_1745_ = v___x_1753_;
v_x_1746_ = v_tail_1748_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_digitPrefix_spec__1___boxed(lean_object* v_x_1755_, lean_object* v_x_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_digitPrefix_spec__1(v_x_1755_, v_x_1756_);
lean_dec(v_x_1756_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_digitPrefix(lean_object* v_bs_1758_){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v_ds_1761_; uint8_t v___x_1762_; 
v___x_1759_ = lean_unsigned_to_nat(0u);
v___x_1760_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_repCollect___closed__0));
lean_inc(v_bs_1758_);
v_ds_1761_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_digitPrefix_spec__0(v_bs_1758_, v_bs_1758_, v___x_1760_);
v___x_1762_ = l_List_isEmpty___redArg(v_ds_1761_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1763_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_digitPrefix_spec__1(v___x_1759_, v_ds_1761_);
v___x_1764_ = l_List_lengthTR___redArg(v_ds_1761_);
lean_dec(v_ds_1761_);
v___x_1765_ = l_List_drop___redArg(v___x_1764_, v_bs_1758_);
lean_dec(v_bs_1758_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1763_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v___x_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
return v___x_1767_;
}
else
{
lean_object* v___x_1768_; 
lean_dec(v_ds_1761_);
lean_dec(v_bs_1758_);
v___x_1768_ = lean_box(0);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(lean_object* v_x_1769_){
_start:
{
if (lean_obj_tag(v_x_1769_) == 1)
{
lean_object* v_head_1770_; lean_object* v_tail_1771_; lean_object* v___x_1772_; uint8_t v___x_1773_; 
v_head_1770_ = lean_ctor_get(v_x_1769_, 0);
v_tail_1771_ = lean_ctor_get(v_x_1769_, 1);
v___x_1772_ = lean_unsigned_to_nat(63u);
v___x_1773_ = lean_nat_dec_eq(v_head_1770_, v___x_1772_);
if (v___x_1773_ == 0)
{
lean_inc_ref(v_x_1769_);
return v_x_1769_;
}
else
{
lean_inc(v_tail_1771_);
return v_tail_1771_;
}
}
else
{
lean_inc(v_x_1769_);
return v_x_1769_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseQuant___lam__0___boxed(lean_object* v_x_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(v_x_1774_);
lean_dec(v_x_1774_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseQuant(lean_object* v_bs_1793_){
_start:
{
if (lean_obj_tag(v_bs_1793_) == 1)
{
lean_object* v_head_1803_; lean_object* v_tail_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; 
v_head_1803_ = lean_ctor_get(v_bs_1793_, 0);
v_tail_1804_ = lean_ctor_get(v_bs_1793_, 1);
v___x_1805_ = lean_unsigned_to_nat(42u);
v___x_1806_ = lean_nat_dec_eq(v_head_1803_, v___x_1805_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; uint8_t v___x_1808_; 
v___x_1807_ = lean_unsigned_to_nat(43u);
v___x_1808_ = lean_nat_dec_eq(v_head_1803_, v___x_1807_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1809_ = lean_unsigned_to_nat(63u);
v___x_1810_ = lean_nat_dec_eq(v_head_1803_, v___x_1809_);
if (v___x_1810_ == 0)
{
lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = lean_unsigned_to_nat(123u);
v___x_1812_ = lean_nat_dec_eq(v_head_1803_, v___x_1811_);
if (v___x_1812_ == 0)
{
goto v___jp_1800_;
}
else
{
lean_object* v___x_1813_; 
lean_inc(v_tail_1804_);
v___x_1813_ = lp_lean_x2dftml_LeanFtml_digitPrefix(v_tail_1804_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1814_ = lean_box(0);
v___x_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
lean_ctor_set(v___x_1815_, 1, v_bs_1793_);
return v___x_1815_;
}
else
{
lean_object* v_val_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1905_; 
v_val_1816_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1818_ = v___x_1813_;
v_isShared_1819_ = v_isSharedCheck_1905_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_val_1816_);
lean_dec(v___x_1813_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1905_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v_snd_1820_; 
v_snd_1820_ = lean_ctor_get(v_val_1816_, 1);
lean_inc(v_snd_1820_);
if (lean_obj_tag(v_snd_1820_) == 1)
{
lean_object* v_fst_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1903_; 
v_fst_1821_ = lean_ctor_get(v_val_1816_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v_val_1816_);
if (v_isSharedCheck_1903_ == 0)
{
lean_object* v_unused_1904_; 
v_unused_1904_ = lean_ctor_get(v_val_1816_, 1);
lean_dec(v_unused_1904_);
v___x_1823_ = v_val_1816_;
v_isShared_1824_ = v_isSharedCheck_1903_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_fst_1821_);
lean_dec(v_val_1816_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1903_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v_head_1825_; lean_object* v_tail_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1902_; 
v_head_1825_ = lean_ctor_get(v_snd_1820_, 0);
v_tail_1826_ = lean_ctor_get(v_snd_1820_, 1);
v_isSharedCheck_1902_ = !lean_is_exclusive(v_snd_1820_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1828_ = v_snd_1820_;
v_isShared_1829_ = v_isSharedCheck_1902_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_tail_1826_);
lean_inc(v_head_1825_);
lean_dec(v_snd_1820_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1902_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1865_ = lean_unsigned_to_nat(125u);
v___x_1866_ = lean_nat_dec_eq(v_head_1825_, v___x_1865_);
if (v___x_1866_ == 0)
{
lean_object* v___x_1867_; uint8_t v___x_1868_; 
v___x_1867_ = lean_unsigned_to_nat(44u);
v___x_1868_ = lean_nat_dec_eq(v_head_1825_, v___x_1867_);
lean_dec(v_head_1825_);
if (v___x_1868_ == 0)
{
lean_del_object(v___x_1828_);
lean_dec(v_tail_1826_);
lean_del_object(v___x_1823_);
lean_dec(v_fst_1821_);
lean_del_object(v___x_1818_);
goto v___jp_1797_;
}
else
{
if (lean_obj_tag(v_tail_1826_) == 1)
{
lean_object* v_head_1869_; lean_object* v_tail_1870_; uint8_t v___x_1871_; 
v_head_1869_ = lean_ctor_get(v_tail_1826_, 0);
v_tail_1870_ = lean_ctor_get(v_tail_1826_, 1);
v___x_1871_ = lean_nat_dec_eq(v_head_1869_, v___x_1865_);
if (v___x_1871_ == 0)
{
lean_del_object(v___x_1828_);
goto v___jp_1830_;
}
else
{
lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1884_; 
lean_inc(v_tail_1870_);
lean_del_object(v___x_1823_);
lean_del_object(v___x_1818_);
lean_dec_ref_known(v_bs_1793_, 2);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_tail_1826_);
if (v_isSharedCheck_1884_ == 0)
{
lean_object* v_unused_1885_; lean_object* v_unused_1886_; 
v_unused_1885_ = lean_ctor_get(v_tail_1826_, 1);
lean_dec(v_unused_1885_);
v_unused_1886_ = lean_ctor_get(v_tail_1826_, 0);
lean_dec(v_unused_1886_);
v___x_1873_ = v_tail_1826_;
v_isShared_1874_ = v_isSharedCheck_1884_;
goto v_resetjp_1872_;
}
else
{
lean_dec(v_tail_1826_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1884_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1875_; lean_object* v___x_1877_; 
v___x_1875_ = lean_box(0);
if (v_isShared_1874_ == 0)
{
lean_ctor_set_tag(v___x_1873_, 0);
lean_ctor_set(v___x_1873_, 1, v___x_1875_);
lean_ctor_set(v___x_1873_, 0, v_fst_1821_);
v___x_1877_ = v___x_1873_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_fst_1821_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1881_; 
v___x_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
v___x_1879_ = lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(v_tail_1870_);
lean_dec(v_tail_1870_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set_tag(v___x_1828_, 0);
lean_ctor_set(v___x_1828_, 1, v___x_1879_);
lean_ctor_set(v___x_1828_, 0, v___x_1878_);
v___x_1881_ = v___x_1828_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1878_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v___x_1879_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
}
else
{
lean_del_object(v___x_1828_);
goto v___jp_1830_;
}
}
}
else
{
lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1899_; 
lean_dec(v_head_1825_);
lean_del_object(v___x_1823_);
lean_del_object(v___x_1818_);
v_isSharedCheck_1899_ = !lean_is_exclusive(v_bs_1793_);
if (v_isSharedCheck_1899_ == 0)
{
lean_object* v_unused_1900_; lean_object* v_unused_1901_; 
v_unused_1900_ = lean_ctor_get(v_bs_1793_, 1);
lean_dec(v_unused_1900_);
v_unused_1901_ = lean_ctor_get(v_bs_1793_, 0);
lean_dec(v_unused_1901_);
v___x_1888_ = v_bs_1793_;
v_isShared_1889_ = v_isSharedCheck_1899_;
goto v_resetjp_1887_;
}
else
{
lean_dec(v_bs_1793_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1899_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1890_; lean_object* v___x_1892_; 
lean_inc(v_fst_1821_);
v___x_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1890_, 0, v_fst_1821_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set_tag(v___x_1828_, 0);
lean_ctor_set(v___x_1828_, 1, v___x_1890_);
lean_ctor_set(v___x_1828_, 0, v_fst_1821_);
v___x_1892_ = v___x_1828_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_fst_1821_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1896_; 
v___x_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
v___x_1894_ = lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(v_tail_1826_);
lean_dec(v_tail_1826_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set_tag(v___x_1888_, 0);
lean_ctor_set(v___x_1888_, 1, v___x_1894_);
lean_ctor_set(v___x_1888_, 0, v___x_1893_);
v___x_1896_ = v___x_1888_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1893_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v___x_1894_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
v___jp_1830_:
{
lean_object* v___x_1831_; 
v___x_1831_ = lp_lean_x2dftml_LeanFtml_digitPrefix(v_tail_1826_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v___x_1832_; lean_object* v___x_1834_; 
lean_dec(v_fst_1821_);
lean_del_object(v___x_1818_);
v___x_1832_ = lean_box(0);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 1, v_bs_1793_);
lean_ctor_set(v___x_1823_, 0, v___x_1832_);
v___x_1834_ = v___x_1823_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_bs_1793_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
else
{
lean_object* v_val_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1864_; 
v_val_1836_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1838_ = v___x_1831_;
v_isShared_1839_ = v_isSharedCheck_1864_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_val_1836_);
lean_dec(v___x_1831_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1864_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v_snd_1840_; 
v_snd_1840_ = lean_ctor_get(v_val_1836_, 1);
lean_inc(v_snd_1840_);
if (lean_obj_tag(v_snd_1840_) == 1)
{
lean_object* v_fst_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1862_; 
v_fst_1841_ = lean_ctor_get(v_val_1836_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v_val_1836_);
if (v_isSharedCheck_1862_ == 0)
{
lean_object* v_unused_1863_; 
v_unused_1863_ = lean_ctor_get(v_val_1836_, 1);
lean_dec(v_unused_1863_);
v___x_1843_ = v_val_1836_;
v_isShared_1844_ = v_isSharedCheck_1862_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_fst_1841_);
lean_dec(v_val_1836_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1862_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v_head_1845_; lean_object* v_tail_1846_; lean_object* v___x_1847_; uint8_t v___x_1848_; 
v_head_1845_ = lean_ctor_get(v_snd_1840_, 0);
lean_inc(v_head_1845_);
v_tail_1846_ = lean_ctor_get(v_snd_1840_, 1);
lean_inc(v_tail_1846_);
lean_dec_ref_known(v_snd_1840_, 2);
v___x_1847_ = lean_unsigned_to_nat(125u);
v___x_1848_ = lean_nat_dec_eq(v_head_1845_, v___x_1847_);
lean_dec(v_head_1845_);
if (v___x_1848_ == 0)
{
lean_dec(v_tail_1846_);
lean_del_object(v___x_1843_);
lean_dec(v_fst_1841_);
lean_del_object(v___x_1838_);
lean_del_object(v___x_1823_);
lean_dec(v_fst_1821_);
lean_del_object(v___x_1818_);
goto v___jp_1794_;
}
else
{
lean_object* v___x_1850_; 
lean_dec_ref_known(v_bs_1793_, 2);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v_fst_1841_);
v___x_1850_ = v___x_1838_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_fst_1841_);
v___x_1850_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
lean_object* v___x_1852_; 
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 1, v___x_1850_);
lean_ctor_set(v___x_1843_, 0, v_fst_1821_);
v___x_1852_ = v___x_1843_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_fst_1821_);
lean_ctor_set(v_reuseFailAlloc_1860_, 1, v___x_1850_);
v___x_1852_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
lean_object* v___x_1854_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 0, v___x_1852_);
v___x_1854_ = v___x_1818_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1852_);
v___x_1854_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1855_; lean_object* v___x_1857_; 
v___x_1855_ = lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(v_tail_1846_);
lean_dec(v_tail_1846_);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 1, v___x_1855_);
lean_ctor_set(v___x_1823_, 0, v___x_1854_);
v___x_1857_ = v___x_1823_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___x_1854_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
}
}
}
else
{
lean_dec(v_snd_1840_);
lean_del_object(v___x_1838_);
lean_dec(v_val_1836_);
lean_del_object(v___x_1823_);
lean_dec(v_fst_1821_);
lean_del_object(v___x_1818_);
goto v___jp_1794_;
}
}
}
}
}
}
}
else
{
lean_dec(v_snd_1820_);
lean_del_object(v___x_1818_);
lean_dec(v_val_1816_);
goto v___jp_1797_;
}
}
}
}
}
else
{
lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1914_; 
lean_inc(v_tail_1804_);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_bs_1793_);
if (v_isSharedCheck_1914_ == 0)
{
lean_object* v_unused_1915_; lean_object* v_unused_1916_; 
v_unused_1915_ = lean_ctor_get(v_bs_1793_, 1);
lean_dec(v_unused_1915_);
v_unused_1916_ = lean_ctor_get(v_bs_1793_, 0);
lean_dec(v_unused_1916_);
v___x_1907_ = v_bs_1793_;
v_isShared_1908_ = v_isSharedCheck_1914_;
goto v_resetjp_1906_;
}
else
{
lean_dec(v_bs_1793_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1914_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1912_; 
v___x_1909_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseQuant___closed__2));
v___x_1910_ = lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(v_tail_1804_);
lean_dec(v_tail_1804_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set_tag(v___x_1907_, 0);
lean_ctor_set(v___x_1907_, 1, v___x_1910_);
lean_ctor_set(v___x_1907_, 0, v___x_1909_);
v___x_1912_ = v___x_1907_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v___x_1909_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v___x_1910_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
else
{
lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1925_; 
lean_inc(v_tail_1804_);
v_isSharedCheck_1925_ = !lean_is_exclusive(v_bs_1793_);
if (v_isSharedCheck_1925_ == 0)
{
lean_object* v_unused_1926_; lean_object* v_unused_1927_; 
v_unused_1926_ = lean_ctor_get(v_bs_1793_, 1);
lean_dec(v_unused_1926_);
v_unused_1927_ = lean_ctor_get(v_bs_1793_, 0);
lean_dec(v_unused_1927_);
v___x_1918_ = v_bs_1793_;
v_isShared_1919_ = v_isSharedCheck_1925_;
goto v_resetjp_1917_;
}
else
{
lean_dec(v_bs_1793_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1925_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1923_; 
v___x_1920_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseQuant___closed__4));
v___x_1921_ = lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(v_tail_1804_);
lean_dec(v_tail_1804_);
if (v_isShared_1919_ == 0)
{
lean_ctor_set_tag(v___x_1918_, 0);
lean_ctor_set(v___x_1918_, 1, v___x_1921_);
lean_ctor_set(v___x_1918_, 0, v___x_1920_);
v___x_1923_ = v___x_1918_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1920_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v___x_1921_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
else
{
lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1936_; 
lean_inc(v_tail_1804_);
v_isSharedCheck_1936_ = !lean_is_exclusive(v_bs_1793_);
if (v_isSharedCheck_1936_ == 0)
{
lean_object* v_unused_1937_; lean_object* v_unused_1938_; 
v_unused_1937_ = lean_ctor_get(v_bs_1793_, 1);
lean_dec(v_unused_1937_);
v_unused_1938_ = lean_ctor_get(v_bs_1793_, 0);
lean_dec(v_unused_1938_);
v___x_1929_ = v_bs_1793_;
v_isShared_1930_ = v_isSharedCheck_1936_;
goto v_resetjp_1928_;
}
else
{
lean_dec(v_bs_1793_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1936_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1934_; 
v___x_1931_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseQuant___closed__6));
v___x_1932_ = lp_lean_x2dftml_LeanFtml_parseQuant___lam__0(v_tail_1804_);
lean_dec(v_tail_1804_);
if (v_isShared_1930_ == 0)
{
lean_ctor_set_tag(v___x_1929_, 0);
lean_ctor_set(v___x_1929_, 1, v___x_1932_);
lean_ctor_set(v___x_1929_, 0, v___x_1931_);
v___x_1934_ = v___x_1929_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1931_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v___x_1932_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
else
{
goto v___jp_1800_;
}
v___jp_1794_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = lean_box(0);
v___x_1796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1795_);
lean_ctor_set(v___x_1796_, 1, v_bs_1793_);
return v___x_1796_;
}
v___jp_1797_:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = lean_box(0);
v___x_1799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1798_);
lean_ctor_set(v___x_1799_, 1, v_bs_1793_);
return v___x_1799_;
}
v___jp_1800_:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = lean_box(0);
v___x_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1801_);
lean_ctor_set(v___x_1802_, 1, v_bs_1793_);
return v___x_1802_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorIdx___impl(uint8_t v_x_1939_){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_box(v_x_1939_);
v___x_1941_ = lean_obj_tag_nat(v___x_1940_);
lean_dec(v___x_1940_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorIdx___impl___boxed(lean_object* v_x_1942_){
_start:
{
uint8_t v_x_4__boxed_1943_; lean_object* v_res_1944_; 
v_x_4__boxed_1943_ = lean_unbox(v_x_1942_);
v_res_1944_ = lp_lean_x2dftml_LeanFtml_ParseTask_ctorIdx___impl(v_x_4__boxed_1943_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim___redArg(lean_object* v_k_1945_){
_start:
{
lean_inc(v_k_1945_);
return v_k_1945_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim___redArg___boxed(lean_object* v_k_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim___redArg(v_k_1946_);
lean_dec(v_k_1946_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim(lean_object* v_motive_1948_, lean_object* v_ctorIdx_1949_, uint8_t v_t_1950_, lean_object* v_h_1951_, lean_object* v_k_1952_){
_start:
{
lean_inc(v_k_1952_);
return v_k_1952_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim___boxed(lean_object* v_motive_1953_, lean_object* v_ctorIdx_1954_, lean_object* v_t_1955_, lean_object* v_h_1956_, lean_object* v_k_1957_){
_start:
{
uint8_t v_t_boxed_1958_; lean_object* v_res_1959_; 
v_t_boxed_1958_ = lean_unbox(v_t_1955_);
v_res_1959_ = lp_lean_x2dftml_LeanFtml_ParseTask_ctorElim(v_motive_1953_, v_ctorIdx_1954_, v_t_boxed_1958_, v_h_1956_, v_k_1957_);
lean_dec(v_k_1957_);
lean_dec(v_ctorIdx_1954_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim___redArg(lean_object* v_alt_1960_){
_start:
{
lean_inc(v_alt_1960_);
return v_alt_1960_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim___redArg___boxed(lean_object* v_alt_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim___redArg(v_alt_1961_);
lean_dec(v_alt_1961_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim(lean_object* v_motive_1963_, uint8_t v_t_1964_, lean_object* v_h_1965_, lean_object* v_alt_1966_){
_start:
{
lean_inc(v_alt_1966_);
return v_alt_1966_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim___boxed(lean_object* v_motive_1967_, lean_object* v_t_1968_, lean_object* v_h_1969_, lean_object* v_alt_1970_){
_start:
{
uint8_t v_t_boxed_1971_; lean_object* v_res_1972_; 
v_t_boxed_1971_ = lean_unbox(v_t_1968_);
v_res_1972_ = lp_lean_x2dftml_LeanFtml_ParseTask_alt_elim(v_motive_1967_, v_t_boxed_1971_, v_h_1969_, v_alt_1970_);
lean_dec(v_alt_1970_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim___redArg(lean_object* v_seq_1973_){
_start:
{
lean_inc(v_seq_1973_);
return v_seq_1973_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim___redArg___boxed(lean_object* v_seq_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim___redArg(v_seq_1974_);
lean_dec(v_seq_1974_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim(lean_object* v_motive_1976_, uint8_t v_t_1977_, lean_object* v_h_1978_, lean_object* v_seq_1979_){
_start:
{
lean_inc(v_seq_1979_);
return v_seq_1979_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim___boxed(lean_object* v_motive_1980_, lean_object* v_t_1981_, lean_object* v_h_1982_, lean_object* v_seq_1983_){
_start:
{
uint8_t v_t_boxed_1984_; lean_object* v_res_1985_; 
v_t_boxed_1984_ = lean_unbox(v_t_1981_);
v_res_1985_ = lp_lean_x2dftml_LeanFtml_ParseTask_seq_elim(v_motive_1980_, v_t_boxed_1984_, v_h_1982_, v_seq_1983_);
lean_dec(v_seq_1983_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim___redArg(lean_object* v_atom_1986_){
_start:
{
lean_inc(v_atom_1986_);
return v_atom_1986_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim___redArg___boxed(lean_object* v_atom_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim___redArg(v_atom_1987_);
lean_dec(v_atom_1987_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim(lean_object* v_motive_1989_, uint8_t v_t_1990_, lean_object* v_h_1991_, lean_object* v_atom_1992_){
_start:
{
lean_inc(v_atom_1992_);
return v_atom_1992_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim___boxed(lean_object* v_motive_1993_, lean_object* v_t_1994_, lean_object* v_h_1995_, lean_object* v_atom_1996_){
_start:
{
uint8_t v_t_boxed_1997_; lean_object* v_res_1998_; 
v_t_boxed_1997_ = lean_unbox(v_t_1994_);
v_res_1998_ = lp_lean_x2dftml_LeanFtml_ParseTask_atom_elim(v_motive_1993_, v_t_boxed_1997_, v_h_1995_, v_atom_1996_);
lean_dec(v_atom_1996_);
return v_res_1998_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedParseTask_default(void){
_start:
{
uint8_t v___x_1999_; 
v___x_1999_ = 0;
return v___x_1999_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedParseTask(void){
_start:
{
uint8_t v___x_2000_; 
v___x_2000_ = 0;
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseGo(uint8_t v_x_2010_, lean_object* v_x_2011_, lean_object* v_x_2012_){
_start:
{
lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v_c_2023_; lean_object* v_rest_2024_; lean_object* v_zero_2028_; uint8_t v_isZero_2029_; 
v_zero_2028_ = lean_unsigned_to_nat(0u);
v_isZero_2029_ = lean_nat_dec_eq(v_x_2011_, v_zero_2028_);
if (v_isZero_2029_ == 1)
{
lean_object* v___x_2030_; 
lean_dec(v_x_2012_);
v___x_2030_ = lean_box(0);
return v___x_2030_;
}
else
{
lean_object* v_one_2031_; lean_object* v_n_2032_; 
v_one_2031_ = lean_unsigned_to_nat(1u);
v_n_2032_ = lean_nat_sub(v_x_2011_, v_one_2031_);
switch(v_x_2010_)
{
case 0:
{
uint8_t v___x_2033_; lean_object* v___x_2034_; 
v___x_2033_ = 1;
v___x_2034_ = lp_lean_x2dftml_LeanFtml_parseGo(v___x_2033_, v_n_2032_, v_x_2012_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_dec(v_n_2032_);
return v___x_2034_;
}
else
{
lean_object* v_val_2035_; lean_object* v_snd_2036_; 
v_val_2035_ = lean_ctor_get(v___x_2034_, 0);
v_snd_2036_ = lean_ctor_get(v_val_2035_, 1);
lean_inc(v_snd_2036_);
if (lean_obj_tag(v_snd_2036_) == 1)
{
lean_object* v_fst_2037_; lean_object* v_head_2038_; lean_object* v_tail_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2066_; 
v_fst_2037_ = lean_ctor_get(v_val_2035_, 0);
v_head_2038_ = lean_ctor_get(v_snd_2036_, 0);
v_tail_2039_ = lean_ctor_get(v_snd_2036_, 1);
v_isSharedCheck_2066_ = !lean_is_exclusive(v_snd_2036_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2041_ = v_snd_2036_;
v_isShared_2042_ = v_isSharedCheck_2066_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_tail_2039_);
lean_inc(v_head_2038_);
lean_dec(v_snd_2036_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2066_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2043_; uint8_t v___x_2044_; 
v___x_2043_ = lean_unsigned_to_nat(124u);
v___x_2044_ = lean_nat_dec_eq(v_head_2038_, v___x_2043_);
lean_dec(v_head_2038_);
if (v___x_2044_ == 0)
{
lean_del_object(v___x_2041_);
lean_dec(v_tail_2039_);
lean_dec(v_n_2032_);
return v___x_2034_;
}
else
{
lean_object* v___x_2045_; 
lean_inc(v_fst_2037_);
lean_dec_ref_known(v___x_2034_, 1);
v___x_2045_ = lp_lean_x2dftml_LeanFtml_parseGo(v_x_2010_, v_n_2032_, v_tail_2039_);
lean_dec(v_n_2032_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_del_object(v___x_2041_);
lean_dec(v_fst_2037_);
return v___x_2045_;
}
else
{
lean_object* v_val_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2065_; 
v_val_2046_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2048_ = v___x_2045_;
v_isShared_2049_ = v_isSharedCheck_2065_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_val_2046_);
lean_dec(v___x_2045_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2065_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v_fst_2050_; lean_object* v_snd_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2064_; 
v_fst_2050_ = lean_ctor_get(v_val_2046_, 0);
v_snd_2051_ = lean_ctor_get(v_val_2046_, 1);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_val_2046_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2053_ = v_val_2046_;
v_isShared_2054_ = v_isSharedCheck_2064_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_snd_2051_);
lean_inc(v_fst_2050_);
lean_dec(v_val_2046_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2064_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2042_ == 0)
{
lean_ctor_set_tag(v___x_2041_, 5);
lean_ctor_set(v___x_2041_, 1, v_fst_2050_);
lean_ctor_set(v___x_2041_, 0, v_fst_2037_);
v___x_2056_ = v___x_2041_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_fst_2037_);
lean_ctor_set(v_reuseFailAlloc_2063_, 1, v_fst_2050_);
v___x_2056_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2058_; 
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2056_);
v___x_2058_ = v___x_2053_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v_snd_2051_);
v___x_2058_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2060_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v___x_2058_);
v___x_2060_ = v___x_2048_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
}
}
}
}
}
else
{
lean_dec(v_snd_2036_);
lean_dec(v_n_2032_);
return v___x_2034_;
}
}
}
case 1:
{
if (lean_obj_tag(v_x_2012_) == 0)
{
lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
lean_dec(v_n_2032_);
v___x_2067_ = lean_box(0);
v___x_2068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
lean_ctor_set(v___x_2068_, 1, v_x_2012_);
v___x_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
return v___x_2069_;
}
else
{
lean_object* v_head_2070_; lean_object* v___x_2071_; uint8_t v___x_2072_; 
v_head_2070_ = lean_ctor_get(v_x_2012_, 0);
v___x_2071_ = lean_unsigned_to_nat(124u);
v___x_2072_ = lean_nat_dec_eq(v_head_2070_, v___x_2071_);
if (v___x_2072_ == 0)
{
lean_object* v___x_2073_; uint8_t v___x_2074_; 
v___x_2073_ = lean_unsigned_to_nat(41u);
v___x_2074_ = lean_nat_dec_eq(v_head_2070_, v___x_2073_);
if (v___x_2074_ == 0)
{
uint8_t v___x_2075_; lean_object* v___x_2076_; 
v___x_2075_ = 2;
v___x_2076_ = lp_lean_x2dftml_LeanFtml_parseGo(v___x_2075_, v_n_2032_, v_x_2012_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_dec(v_n_2032_);
return v___x_2076_;
}
else
{
lean_object* v_val_2077_; lean_object* v_fst_2078_; lean_object* v_snd_2079_; lean_object* v___x_2080_; lean_object* v_fst_2081_; lean_object* v_snd_2082_; lean_object* v___y_2084_; 
v_val_2077_ = lean_ctor_get(v___x_2076_, 0);
lean_inc(v_val_2077_);
lean_dec_ref_known(v___x_2076_, 1);
v_fst_2078_ = lean_ctor_get(v_val_2077_, 0);
lean_inc(v_fst_2078_);
v_snd_2079_ = lean_ctor_get(v_val_2077_, 1);
lean_inc(v_snd_2079_);
lean_dec(v_val_2077_);
v___x_2080_ = lp_lean_x2dftml_LeanFtml_parseQuant(v_snd_2079_);
v_fst_2081_ = lean_ctor_get(v___x_2080_, 0);
lean_inc(v_fst_2081_);
v_snd_2082_ = lean_ctor_get(v___x_2080_, 1);
lean_inc(v_snd_2082_);
lean_dec_ref(v___x_2080_);
if (lean_obj_tag(v_fst_2081_) == 0)
{
v___y_2084_ = v_fst_2078_;
goto v___jp_2083_;
}
else
{
lean_object* v_val_2098_; lean_object* v_fst_2099_; lean_object* v_snd_2100_; lean_object* v___x_2101_; 
v_val_2098_ = lean_ctor_get(v_fst_2081_, 0);
lean_inc(v_val_2098_);
lean_dec_ref_known(v_fst_2081_, 1);
v_fst_2099_ = lean_ctor_get(v_val_2098_, 0);
lean_inc(v_fst_2099_);
v_snd_2100_ = lean_ctor_get(v_val_2098_, 1);
lean_inc(v_snd_2100_);
lean_dec(v_val_2098_);
v___x_2101_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_2101_, 0, v_fst_2078_);
lean_ctor_set(v___x_2101_, 1, v_fst_2099_);
lean_ctor_set(v___x_2101_, 2, v_snd_2100_);
v___y_2084_ = v___x_2101_;
goto v___jp_2083_;
}
v___jp_2083_:
{
lean_object* v___x_2085_; 
v___x_2085_ = lp_lean_x2dftml_LeanFtml_parseGo(v_x_2010_, v_n_2032_, v_snd_2082_);
lean_dec(v_n_2032_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_dec(v___y_2084_);
return v___x_2085_;
}
else
{
lean_object* v_val_2086_; lean_object* v_fst_2087_; 
v_val_2086_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_val_2086_);
lean_dec_ref_known(v___x_2085_, 1);
v_fst_2087_ = lean_ctor_get(v_val_2086_, 0);
if (lean_obj_tag(v_fst_2087_) == 0)
{
lean_object* v_snd_2088_; 
v_snd_2088_ = lean_ctor_get(v_val_2086_, 1);
lean_inc(v_snd_2088_);
lean_dec(v_val_2086_);
v___y_2014_ = v_snd_2088_;
v___y_2015_ = v___y_2084_;
goto v___jp_2013_;
}
else
{
lean_object* v_snd_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_inc(v_fst_2087_);
v_snd_2089_ = lean_ctor_get(v_val_2086_, 1);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_val_2086_);
if (v_isSharedCheck_2096_ == 0)
{
lean_object* v_unused_2097_; 
v_unused_2097_ = lean_ctor_get(v_val_2086_, 0);
lean_dec(v_unused_2097_);
v___x_2091_ = v_val_2086_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_snd_2089_);
lean_dec(v_val_2086_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
lean_ctor_set_tag(v___x_2091_, 4);
lean_ctor_set(v___x_2091_, 1, v_fst_2087_);
lean_ctor_set(v___x_2091_, 0, v___y_2084_);
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___y_2084_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v_fst_2087_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
v___y_2014_ = v_snd_2089_;
v___y_2015_ = v___x_2094_;
goto v___jp_2013_;
}
}
}
}
}
}
}
else
{
lean_dec(v_n_2032_);
goto v___jp_2018_;
}
}
else
{
lean_dec(v_n_2032_);
goto v___jp_2018_;
}
}
}
default: 
{
if (lean_obj_tag(v_x_2012_) == 0)
{
lean_object* v___x_2102_; 
lean_dec(v_n_2032_);
v___x_2102_ = lean_box(0);
return v___x_2102_;
}
else
{
lean_object* v_head_2103_; lean_object* v_tail_2104_; lean_object* v___x_2105_; uint8_t v___x_2106_; 
v_head_2103_ = lean_ctor_get(v_x_2012_, 0);
v_tail_2104_ = lean_ctor_get(v_x_2012_, 1);
lean_inc(v_tail_2104_);
v___x_2105_ = lean_unsigned_to_nat(40u);
v___x_2106_ = lean_nat_dec_eq(v_head_2103_, v___x_2105_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; uint8_t v___x_2108_; 
v___x_2107_ = lean_unsigned_to_nat(91u);
v___x_2108_ = lean_nat_dec_eq(v_head_2103_, v___x_2107_);
if (v___x_2108_ == 0)
{
lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2194_; 
lean_inc(v_head_2103_);
lean_dec(v_n_2032_);
v_isSharedCheck_2194_ = !lean_is_exclusive(v_x_2012_);
if (v_isSharedCheck_2194_ == 0)
{
lean_object* v_unused_2195_; lean_object* v_unused_2196_; 
v_unused_2195_ = lean_ctor_get(v_x_2012_, 1);
lean_dec(v_unused_2195_);
v_unused_2196_ = lean_ctor_get(v_x_2012_, 0);
lean_dec(v_unused_2196_);
v___x_2110_ = v_x_2012_;
v_isShared_2111_ = v_isSharedCheck_2194_;
goto v_resetjp_2109_;
}
else
{
lean_dec(v_x_2012_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2194_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2112_; uint8_t v___x_2113_; 
v___x_2112_ = lean_unsigned_to_nat(92u);
v___x_2113_ = lean_nat_dec_eq(v_head_2103_, v___x_2112_);
if (v___x_2113_ == 0)
{
lean_object* v___x_2114_; uint8_t v___x_2115_; 
v___x_2114_ = lean_unsigned_to_nat(46u);
v___x_2115_ = lean_nat_dec_eq(v_head_2103_, v___x_2114_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2116_ = lean_unsigned_to_nat(94u);
v___x_2117_ = lean_nat_dec_eq(v_head_2103_, v___x_2116_);
if (v___x_2117_ == 0)
{
lean_object* v___x_2118_; uint8_t v___x_2119_; 
v___x_2118_ = lean_unsigned_to_nat(36u);
v___x_2119_ = lean_nat_dec_eq(v_head_2103_, v___x_2118_);
if (v___x_2119_ == 0)
{
lean_del_object(v___x_2110_);
v_c_2023_ = v_head_2103_;
v_rest_2024_ = v_tail_2104_;
goto v___jp_2022_;
}
else
{
lean_object* v___x_2120_; lean_object* v___x_2122_; 
lean_dec(v_head_2103_);
v___x_2120_ = lean_box(8);
if (v_isShared_2111_ == 0)
{
lean_ctor_set_tag(v___x_2110_, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2120_);
v___x_2122_ = v___x_2110_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2124_, 1, v_tail_2104_);
v___x_2122_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2123_; 
v___x_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
return v___x_2123_;
}
}
}
else
{
lean_object* v___x_2125_; lean_object* v___x_2127_; 
lean_dec(v_head_2103_);
v___x_2125_ = lean_box(7);
if (v_isShared_2111_ == 0)
{
lean_ctor_set_tag(v___x_2110_, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2125_);
v___x_2127_ = v___x_2110_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v___x_2125_);
lean_ctor_set(v_reuseFailAlloc_2129_, 1, v_tail_2104_);
v___x_2127_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2128_; 
v___x_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2127_);
return v___x_2128_;
}
}
}
else
{
lean_object* v___x_2130_; lean_object* v___x_2132_; 
lean_dec(v_head_2103_);
v___x_2130_ = lean_box(2);
if (v_isShared_2111_ == 0)
{
lean_ctor_set_tag(v___x_2110_, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2130_);
v___x_2132_ = v___x_2110_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2130_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v_tail_2104_);
v___x_2132_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2133_; 
v___x_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
return v___x_2133_;
}
}
}
else
{
lean_del_object(v___x_2110_);
lean_dec(v_head_2103_);
if (lean_obj_tag(v_tail_2104_) == 1)
{
lean_object* v_head_2135_; lean_object* v_tail_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2193_; 
v_head_2135_ = lean_ctor_get(v_tail_2104_, 0);
v_tail_2136_ = lean_ctor_get(v_tail_2104_, 1);
v_isSharedCheck_2193_ = !lean_is_exclusive(v_tail_2104_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2138_ = v_tail_2104_;
v_isShared_2139_ = v_isSharedCheck_2193_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_tail_2136_);
lean_inc(v_head_2135_);
lean_dec(v_tail_2104_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2193_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2140_ = lean_unsigned_to_nat(115u);
v___x_2141_ = lean_nat_dec_eq(v_head_2135_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_object* v___x_2142_; uint8_t v___x_2143_; 
v___x_2142_ = lean_unsigned_to_nat(83u);
v___x_2143_ = lean_nat_dec_eq(v_head_2135_, v___x_2142_);
if (v___x_2143_ == 0)
{
lean_object* v___x_2144_; uint8_t v___x_2145_; 
v___x_2144_ = lean_unsigned_to_nat(100u);
v___x_2145_ = lean_nat_dec_eq(v_head_2135_, v___x_2144_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; uint8_t v___x_2147_; 
v___x_2146_ = lean_unsigned_to_nat(68u);
v___x_2147_ = lean_nat_dec_eq(v_head_2135_, v___x_2146_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2148_ = lean_unsigned_to_nat(119u);
v___x_2149_ = lean_nat_dec_eq(v_head_2135_, v___x_2148_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; uint8_t v___x_2151_; 
v___x_2150_ = lean_unsigned_to_nat(87u);
v___x_2151_ = lean_nat_dec_eq(v_head_2135_, v___x_2150_);
if (v___x_2151_ == 0)
{
lean_object* v___x_2152_; lean_object* v___x_2154_; 
v___x_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2152_, 0, v_head_2135_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2152_);
v___x_2154_ = v___x_2138_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v___x_2152_);
lean_ctor_set(v_reuseFailAlloc_2156_, 1, v_tail_2136_);
v___x_2154_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
lean_object* v___x_2155_; 
v___x_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2154_);
return v___x_2155_;
}
}
else
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2160_; 
lean_dec(v_head_2135_);
v___x_2157_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseGo___closed__0));
v___x_2158_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2158_, 0, v___x_2157_);
lean_ctor_set_uint8(v___x_2158_, sizeof(void*)*1, v___x_2151_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2158_);
v___x_2160_ = v___x_2138_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2162_, 1, v_tail_2136_);
v___x_2160_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2161_; 
v___x_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
return v___x_2161_;
}
}
}
else
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; 
lean_dec(v_head_2135_);
v___x_2163_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseGo___closed__0));
v___x_2164_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2164_, 0, v___x_2163_);
lean_ctor_set_uint8(v___x_2164_, sizeof(void*)*1, v___x_2147_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2164_);
v___x_2166_ = v___x_2138_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2164_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v_tail_2136_);
v___x_2166_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
lean_object* v___x_2167_; 
v___x_2167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
return v___x_2167_;
}
}
}
else
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2172_; 
lean_dec(v_head_2135_);
v___x_2169_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseGo___closed__1));
v___x_2170_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2170_, 0, v___x_2169_);
lean_ctor_set_uint8(v___x_2170_, sizeof(void*)*1, v___x_2147_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2170_);
v___x_2172_ = v___x_2138_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___x_2170_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_tail_2136_);
v___x_2172_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
lean_object* v___x_2173_; 
v___x_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
return v___x_2173_;
}
}
}
else
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2178_; 
lean_dec(v_head_2135_);
v___x_2175_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseGo___closed__1));
v___x_2176_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2176_, 0, v___x_2175_);
lean_ctor_set_uint8(v___x_2176_, sizeof(void*)*1, v___x_2143_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2176_);
v___x_2178_ = v___x_2138_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2176_);
lean_ctor_set(v_reuseFailAlloc_2180_, 1, v_tail_2136_);
v___x_2178_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
lean_object* v___x_2179_; 
v___x_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2178_);
return v___x_2179_;
}
}
}
else
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2184_; 
lean_dec(v_head_2135_);
v___x_2181_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseGo___closed__2));
v___x_2182_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
lean_ctor_set_uint8(v___x_2182_, sizeof(void*)*1, v___x_2143_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2182_);
v___x_2184_ = v___x_2138_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2182_);
lean_ctor_set(v_reuseFailAlloc_2186_, 1, v_tail_2136_);
v___x_2184_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
lean_object* v___x_2185_; 
v___x_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
return v___x_2185_;
}
}
}
else
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2190_; 
lean_dec(v_head_2135_);
v___x_2187_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_parseGo___closed__2));
v___x_2188_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2188_, 0, v___x_2187_);
lean_ctor_set_uint8(v___x_2188_, sizeof(void*)*1, v___x_2108_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2188_);
v___x_2190_ = v___x_2138_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2188_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v_tail_2136_);
v___x_2190_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2190_);
return v___x_2191_;
}
}
}
}
else
{
v_c_2023_ = v___x_2112_;
v_rest_2024_ = v_tail_2104_;
goto v___jp_2022_;
}
}
}
}
else
{
lean_object* v___x_2197_; 
lean_dec(v_tail_2104_);
v___x_2197_ = lp_lean_x2dftml_LeanFtml_parseClass(v_n_2032_, v_x_2012_);
lean_dec(v_n_2032_);
return v___x_2197_;
}
}
else
{
uint8_t v___x_2198_; lean_object* v___x_2199_; 
lean_dec_ref_known(v_x_2012_, 2);
v___x_2198_ = 0;
v___x_2199_ = lp_lean_x2dftml_LeanFtml_parseGo(v___x_2198_, v_n_2032_, v_tail_2104_);
lean_dec(v_n_2032_);
if (lean_obj_tag(v___x_2199_) == 0)
{
return v___x_2199_;
}
else
{
lean_object* v_val_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2223_; 
v_val_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2223_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_val_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2223_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v_snd_2204_; 
v_snd_2204_ = lean_ctor_get(v_val_2200_, 1);
lean_inc(v_snd_2204_);
if (lean_obj_tag(v_snd_2204_) == 1)
{
lean_object* v_fst_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2220_; 
v_fst_2205_ = lean_ctor_get(v_val_2200_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v_val_2200_);
if (v_isSharedCheck_2220_ == 0)
{
lean_object* v_unused_2221_; 
v_unused_2221_ = lean_ctor_get(v_val_2200_, 1);
lean_dec(v_unused_2221_);
v___x_2207_ = v_val_2200_;
v_isShared_2208_ = v_isSharedCheck_2220_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_fst_2205_);
lean_dec(v_val_2200_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2220_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v_head_2209_; lean_object* v_tail_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; 
v_head_2209_ = lean_ctor_get(v_snd_2204_, 0);
lean_inc(v_head_2209_);
v_tail_2210_ = lean_ctor_get(v_snd_2204_, 1);
lean_inc(v_tail_2210_);
lean_dec_ref_known(v_snd_2204_, 2);
v___x_2211_ = lean_unsigned_to_nat(41u);
v___x_2212_ = lean_nat_dec_eq(v_head_2209_, v___x_2211_);
lean_dec(v_head_2209_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; 
lean_dec(v_tail_2210_);
lean_del_object(v___x_2207_);
lean_dec(v_fst_2205_);
lean_del_object(v___x_2202_);
v___x_2213_ = lean_box(0);
return v___x_2213_;
}
else
{
lean_object* v___x_2215_; 
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v_tail_2210_);
v___x_2215_ = v___x_2207_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_fst_2205_);
lean_ctor_set(v_reuseFailAlloc_2219_, 1, v_tail_2210_);
v___x_2215_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
lean_object* v___x_2217_; 
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2215_);
v___x_2217_ = v___x_2202_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v___x_2215_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
else
{
lean_object* v___x_2222_; 
lean_dec(v_snd_2204_);
lean_del_object(v___x_2202_);
lean_dec(v_val_2200_);
v___x_2222_ = lean_box(0);
return v___x_2222_;
}
}
}
}
}
}
}
}
v___jp_2013_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___y_2015_);
lean_ctor_set(v___x_2016_, 1, v___y_2014_);
v___x_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
return v___x_2017_;
}
v___jp_2018_:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2019_ = lean_box(0);
v___x_2020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
lean_ctor_set(v___x_2020_, 1, v_x_2012_);
v___x_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
return v___x_2021_;
}
v___jp_2022_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2025_, 0, v_c_2023_);
v___x_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
lean_ctor_set(v___x_2026_, 1, v_rest_2024_);
v___x_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
return v___x_2027_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseGo___boxed(lean_object* v_x_2224_, lean_object* v_x_2225_, lean_object* v_x_2226_){
_start:
{
uint8_t v_x_1262__boxed_2227_; lean_object* v_res_2228_; 
v_x_1262__boxed_2227_ = lean_unbox(v_x_2224_);
v_res_2228_ = lp_lean_x2dftml_LeanFtml_parseGo(v_x_1262__boxed_2227_, v_x_2225_, v_x_2226_);
lean_dec(v_x_2225_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_parsePcre_spec__0(lean_object* v_a_2229_, lean_object* v_a_2230_){
_start:
{
if (lean_obj_tag(v_a_2229_) == 0)
{
lean_object* v___x_2231_; 
v___x_2231_ = l_List_reverse___redArg(v_a_2230_);
return v___x_2231_;
}
else
{
lean_object* v_head_2232_; lean_object* v_tail_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2243_; 
v_head_2232_ = lean_ctor_get(v_a_2229_, 0);
v_tail_2233_ = lean_ctor_get(v_a_2229_, 1);
v_isSharedCheck_2243_ = !lean_is_exclusive(v_a_2229_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2235_ = v_a_2229_;
v_isShared_2236_ = v_isSharedCheck_2243_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_tail_2233_);
lean_inc(v_head_2232_);
lean_dec(v_a_2229_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2243_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
uint32_t v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2240_; 
v___x_2237_ = lean_unbox_uint32(v_head_2232_);
lean_dec(v_head_2232_);
v___x_2238_ = lean_uint32_to_nat(v___x_2237_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 1, v_a_2230_);
lean_ctor_set(v___x_2235_, 0, v___x_2238_);
v___x_2240_ = v___x_2235_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v___x_2238_);
lean_ctor_set(v_reuseFailAlloc_2242_, 1, v_a_2230_);
v___x_2240_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
v_a_2229_ = v_tail_2233_;
v_a_2230_ = v___x_2240_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parsePcre(lean_object* v_s_2244_){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v_bs_2247_; lean_object* v___x_2248_; 
v___x_2245_ = l_String_toListImpl(v_s_2244_);
v___x_2246_ = lean_box(0);
v_bs_2247_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_parsePcre_spec__0(v___x_2245_, v___x_2246_);
v___x_2248_ = lp_lean_x2dftml_LeanFtml_splitPattern(v_bs_2247_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v___x_2249_; 
v___x_2249_ = lean_box(0);
return v___x_2249_;
}
else
{
lean_object* v_val_2250_; lean_object* v_fst_2251_; lean_object* v_snd_2252_; uint8_t v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v_val_2250_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_val_2250_);
lean_dec_ref_known(v___x_2248_, 1);
v_fst_2251_ = lean_ctor_get(v_val_2250_, 0);
lean_inc(v_fst_2251_);
v_snd_2252_ = lean_ctor_get(v_val_2250_, 1);
lean_inc(v_snd_2252_);
lean_dec(v_val_2250_);
v___x_2253_ = 0;
v___x_2254_ = l_List_lengthTR___redArg(v_fst_2251_);
v___x_2255_ = lean_unsigned_to_nat(1u);
v___x_2256_ = lean_nat_add(v___x_2254_, v___x_2255_);
lean_dec(v___x_2254_);
v___x_2257_ = lp_lean_x2dftml_LeanFtml_parseGo(v___x_2253_, v___x_2256_, v_fst_2251_);
lean_dec(v___x_2256_);
if (lean_obj_tag(v___x_2257_) == 1)
{
lean_object* v_val_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2273_; 
v_val_2258_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2260_ = v___x_2257_;
v_isShared_2261_ = v_isSharedCheck_2273_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_val_2258_);
lean_dec(v___x_2257_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2273_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v_snd_2262_; 
v_snd_2262_ = lean_ctor_get(v_val_2258_, 1);
if (lean_obj_tag(v_snd_2262_) == 0)
{
lean_object* v_fst_2263_; lean_object* v___x_2264_; uint8_t v___x_2265_; lean_object* v___x_2266_; uint8_t v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2270_; 
v_fst_2263_ = lean_ctor_get(v_val_2258_, 0);
lean_inc(v_fst_2263_);
lean_dec(v_val_2258_);
v___x_2264_ = lean_unsigned_to_nat(105u);
v___x_2265_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_2264_, v_snd_2252_);
v___x_2266_ = lean_unsigned_to_nat(115u);
v___x_2267_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_2266_, v_snd_2252_);
lean_dec(v_snd_2252_);
v___x_2268_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2268_, 0, v_fst_2263_);
lean_ctor_set_uint8(v___x_2268_, sizeof(void*)*1, v___x_2265_);
lean_ctor_set_uint8(v___x_2268_, sizeof(void*)*1 + 1, v___x_2267_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 0, v___x_2268_);
v___x_2270_ = v___x_2260_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v___x_2268_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
else
{
lean_object* v___x_2272_; 
lean_del_object(v___x_2260_);
lean_dec(v_val_2258_);
lean_dec(v_snd_2252_);
v___x_2272_ = lean_box(0);
return v___x_2272_;
}
}
}
else
{
lean_object* v___x_2274_; 
lean_dec(v___x_2257_);
lean_dec(v_snd_2252_);
v___x_2274_ = lean_box(0);
return v___x_2274_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_Pcre(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_instInhabitedRE_default = _init_lp_lean_x2dftml_LeanFtml_instInhabitedRE_default();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_instInhabitedRE_default);
lp_lean_x2dftml_LeanFtml_instInhabitedRE = _init_lp_lean_x2dftml_LeanFtml_instInhabitedRE();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_instInhabitedRE);
lp_lean_x2dftml_LeanFtml_mFuel = _init_lp_lean_x2dftml_LeanFtml_mFuel();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_mFuel);
lp_lean_x2dftml_LeanFtml_instInhabitedParseTask_default = _init_lp_lean_x2dftml_LeanFtml_instInhabitedParseTask_default();
lp_lean_x2dftml_LeanFtml_instInhabitedParseTask = _init_lp_lean_x2dftml_LeanFtml_instInhabitedParseTask();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
