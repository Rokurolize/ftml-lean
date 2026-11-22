// Lean compiler output
// Module: LeanFtml.BlockEnd
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
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_instDecidableEqChar___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Char_quote(uint32_t);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_code_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_code_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_code_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_code_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_math_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_math_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_math_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_math_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_BlockType_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBlockType(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBlockType___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.BlockType.code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.BlockType.math"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.BlockType.footnote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.BlockType.collapsible"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.BlockType.bibliography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprBlockType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprBlockType___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instInhabitedBlockType_default;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instInhabitedBlockType;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_openTag_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_openTag_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_close_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_close_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_text_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqItem_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqItem_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqItem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqItem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0___lam__0(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__2_value;
static const lean_string_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__5_value;
static const lean_string_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__7;
static lean_once_cell_t lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__8;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanFtml.Item.openTag"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.Item.close"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LeanFtml.Item.text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__8_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprItem_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprItem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprItem___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isBlank(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isBlank___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_allBlank(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allBlank___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_blankHeaded(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blankHeaded___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_gateAccepts(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gateAccepts___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_positionAccepts(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_positionAccepts___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_accepts(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_accepts___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_eraseBlankItem(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_headIsClose(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headIsClose___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_headIsClose_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_headIsClose_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rejectsNested(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rejectsNested___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_rejectsNested_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_rejectsNested_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_Discipline_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDiscipline(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDiscipline___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.Discipline.recursive"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.Discipline.firstCloser"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprDiscipline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDiscipline___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDiscipline___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_discipline(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_discipline___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanFirst(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanFirst___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanRecF(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanRecF___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanRec(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanRec___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scan(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scan___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_shape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_shape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_shape___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_shape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_shape___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_shape___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_shape___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_shape___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_shape___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_shape___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_shape___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_shape___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_shape___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_shape___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_shape___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_shape___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_shape(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_shape___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_depthOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_depthOf_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_depthOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_profile_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_profile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_profile___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_profile___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_profile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_profile___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_profile___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_profile___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_profile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_profile___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_profile___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_profile___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_profile___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_profile___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_profile___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_profile___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_profile(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_profile___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_instReprItem_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_instReprItem_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_lean_x2dftml_LeanFtml_BlockType_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_lean_x2dftml_LeanFtml_BlockType_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = lp_lean_x2dftml_LeanFtml_BlockType_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_code_elim___redArg(lean_object* v_code_22_){
_start:
{
lean_inc(v_code_22_);
return v_code_22_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_code_elim___redArg___boxed(lean_object* v_code_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_lean_x2dftml_LeanFtml_BlockType_code_elim___redArg(v_code_23_);
lean_dec(v_code_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_code_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_code_28_){
_start:
{
lean_inc(v_code_28_);
return v_code_28_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_code_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_code_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = lp_lean_x2dftml_LeanFtml_BlockType_code_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_code_32_);
lean_dec(v_code_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_math_elim___redArg(lean_object* v_math_35_){
_start:
{
lean_inc(v_math_35_);
return v_math_35_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_math_elim___redArg___boxed(lean_object* v_math_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_lean_x2dftml_LeanFtml_BlockType_math_elim___redArg(v_math_36_);
lean_dec(v_math_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_math_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_math_41_){
_start:
{
lean_inc(v_math_41_);
return v_math_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_math_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_math_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = lp_lean_x2dftml_LeanFtml_BlockType_math_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_math_45_);
lean_dec(v_math_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim___redArg(lean_object* v_footnote_48_){
_start:
{
lean_inc(v_footnote_48_);
return v_footnote_48_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim___redArg___boxed(lean_object* v_footnote_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim___redArg(v_footnote_49_);
lean_dec(v_footnote_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_footnote_54_){
_start:
{
lean_inc(v_footnote_54_);
return v_footnote_54_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_footnote_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = lp_lean_x2dftml_LeanFtml_BlockType_footnote_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_footnote_58_);
lean_dec(v_footnote_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim___redArg(lean_object* v_collapsible_61_){
_start:
{
lean_inc(v_collapsible_61_);
return v_collapsible_61_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim___redArg___boxed(lean_object* v_collapsible_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim___redArg(v_collapsible_62_);
lean_dec(v_collapsible_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim(lean_object* v_motive_64_, uint8_t v_t_65_, lean_object* v_h_66_, lean_object* v_collapsible_67_){
_start:
{
lean_inc(v_collapsible_67_);
return v_collapsible_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_collapsible_71_){
_start:
{
uint8_t v_t_boxed_72_; lean_object* v_res_73_; 
v_t_boxed_72_ = lean_unbox(v_t_69_);
v_res_73_ = lp_lean_x2dftml_LeanFtml_BlockType_collapsible_elim(v_motive_68_, v_t_boxed_72_, v_h_70_, v_collapsible_71_);
lean_dec(v_collapsible_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim___redArg(lean_object* v_bibliography_74_){
_start:
{
lean_inc(v_bibliography_74_);
return v_bibliography_74_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim___redArg___boxed(lean_object* v_bibliography_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim___redArg(v_bibliography_75_);
lean_dec(v_bibliography_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim(lean_object* v_motive_77_, uint8_t v_t_78_, lean_object* v_h_79_, lean_object* v_bibliography_80_){
_start:
{
lean_inc(v_bibliography_80_);
return v_bibliography_80_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim___boxed(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_bibliography_84_){
_start:
{
uint8_t v_t_boxed_85_; lean_object* v_res_86_; 
v_t_boxed_85_ = lean_unbox(v_t_82_);
v_res_86_ = lp_lean_x2dftml_LeanFtml_BlockType_bibliography_elim(v_motive_81_, v_t_boxed_85_, v_h_83_, v_bibliography_84_);
lean_dec(v_bibliography_84_);
return v_res_86_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_BlockType_ofNat(lean_object* v_n_87_){
_start:
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = lean_nat_dec_le(v_n_87_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(2u);
v___x_91_ = lean_nat_dec_le(v_n_87_, v___x_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(3u);
v___x_93_ = lean_nat_dec_le(v_n_87_, v___x_92_);
if (v___x_93_ == 0)
{
uint8_t v___x_94_; 
v___x_94_ = 4;
return v___x_94_;
}
else
{
uint8_t v___x_95_; 
v___x_95_ = 3;
return v___x_95_;
}
}
else
{
uint8_t v___x_96_; 
v___x_96_ = 2;
return v___x_96_;
}
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(0u);
v___x_98_ = lean_nat_dec_le(v_n_87_, v___x_97_);
if (v___x_98_ == 0)
{
uint8_t v___x_99_; 
v___x_99_ = 1;
return v___x_99_;
}
else
{
uint8_t v___x_100_; 
v___x_100_ = 0;
return v___x_100_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BlockType_ofNat___boxed(lean_object* v_n_101_){
_start:
{
uint8_t v_res_102_; lean_object* v_r_103_; 
v_res_102_ = lp_lean_x2dftml_LeanFtml_BlockType_ofNat(v_n_101_);
lean_dec(v_n_101_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBlockType(uint8_t v_x_104_, uint8_t v_y_105_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_106_ = lean_box(v_x_104_);
v___x_107_ = lean_obj_tag_nat(v___x_106_);
lean_dec(v___x_106_);
v___x_108_ = lean_box(v_y_105_);
v___x_109_ = lean_obj_tag_nat(v___x_108_);
lean_dec(v___x_108_);
v___x_110_ = lean_nat_dec_eq(v___x_107_, v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBlockType___boxed(lean_object* v_x_111_, lean_object* v_y_112_){
_start:
{
uint8_t v_x_23__boxed_113_; uint8_t v_y_24__boxed_114_; uint8_t v_res_115_; lean_object* v_r_116_; 
v_x_23__boxed_113_ = lean_unbox(v_x_111_);
v_y_24__boxed_114_ = lean_unbox(v_y_112_);
v_res_115_ = lp_lean_x2dftml_LeanFtml_instDecidableEqBlockType(v_x_23__boxed_113_, v_y_24__boxed_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(2u);
v___x_133_ = lean_nat_to_int(v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_unsigned_to_nat(1u);
v___x_135_ = lean_nat_to_int(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr(uint8_t v_x_136_, lean_object* v_prec_137_){
_start:
{
lean_object* v___y_139_; lean_object* v___y_146_; lean_object* v___y_153_; lean_object* v___y_160_; lean_object* v___y_167_; 
switch(v_x_136_)
{
case 0:
{
lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = lean_unsigned_to_nat(1024u);
v___x_174_ = lean_nat_dec_le(v___x_173_, v_prec_137_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
v___x_175_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_139_ = v___x_175_;
goto v___jp_138_;
}
else
{
lean_object* v___x_176_; 
v___x_176_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_139_ = v___x_176_;
goto v___jp_138_;
}
}
case 1:
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = lean_unsigned_to_nat(1024u);
v___x_178_ = lean_nat_dec_le(v___x_177_, v_prec_137_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; 
v___x_179_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_146_ = v___x_179_;
goto v___jp_145_;
}
else
{
lean_object* v___x_180_; 
v___x_180_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_146_ = v___x_180_;
goto v___jp_145_;
}
}
case 2:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_unsigned_to_nat(1024u);
v___x_182_ = lean_nat_dec_le(v___x_181_, v_prec_137_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; 
v___x_183_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_153_ = v___x_183_;
goto v___jp_152_;
}
else
{
lean_object* v___x_184_; 
v___x_184_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_153_ = v___x_184_;
goto v___jp_152_;
}
}
case 3:
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = lean_unsigned_to_nat(1024u);
v___x_186_ = lean_nat_dec_le(v___x_185_, v_prec_137_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
v___x_187_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_160_ = v___x_187_;
goto v___jp_159_;
}
else
{
lean_object* v___x_188_; 
v___x_188_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_160_ = v___x_188_;
goto v___jp_159_;
}
}
default: 
{
lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = lean_unsigned_to_nat(1024u);
v___x_190_ = lean_nat_dec_le(v___x_189_, v_prec_137_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
v___x_191_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_167_ = v___x_191_;
goto v___jp_166_;
}
else
{
lean_object* v___x_192_; 
v___x_192_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_167_ = v___x_192_;
goto v___jp_166_;
}
}
}
v___jp_138_:
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_140_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__1));
lean_inc(v___y_139_);
v___x_141_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_141_, 0, v___y_139_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
v___x_142_ = 0;
v___x_143_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_143_, 0, v___x_141_);
lean_ctor_set_uint8(v___x_143_, sizeof(void*)*1, v___x_142_);
v___x_144_ = l_Repr_addAppParen(v___x_143_, v_prec_137_);
return v___x_144_;
}
v___jp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_147_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__3));
lean_inc(v___y_146_);
v___x_148_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_148_, 0, v___y_146_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = 0;
v___x_150_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set_uint8(v___x_150_, sizeof(void*)*1, v___x_149_);
v___x_151_ = l_Repr_addAppParen(v___x_150_, v_prec_137_);
return v___x_151_;
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_154_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__5));
lean_inc(v___y_153_);
v___x_155_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_155_, 0, v___y_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = 0;
v___x_157_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_157_, 0, v___x_155_);
lean_ctor_set_uint8(v___x_157_, sizeof(void*)*1, v___x_156_);
v___x_158_ = l_Repr_addAppParen(v___x_157_, v_prec_137_);
return v___x_158_;
}
v___jp_159_:
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_161_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__7));
lean_inc(v___y_160_);
v___x_162_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_162_, 0, v___y_160_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = 0;
v___x_164_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set_uint8(v___x_164_, sizeof(void*)*1, v___x_163_);
v___x_165_ = l_Repr_addAppParen(v___x_164_, v_prec_137_);
return v___x_165_;
}
v___jp_166_:
{
lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_168_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__9));
lean_inc(v___y_167_);
v___x_169_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_169_, 0, v___y_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = 0;
v___x_171_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_171_, 0, v___x_169_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*1, v___x_170_);
v___x_172_ = l_Repr_addAppParen(v___x_171_, v_prec_137_);
return v___x_172_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___boxed(lean_object* v_x_193_, lean_object* v_prec_194_){
_start:
{
uint8_t v_x_279__boxed_195_; lean_object* v_res_196_; 
v_x_279__boxed_195_ = lean_unbox(v_x_193_);
v_res_196_ = lp_lean_x2dftml_LeanFtml_instReprBlockType_repr(v_x_279__boxed_195_, v_prec_194_);
lean_dec(v_prec_194_);
return v_res_196_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedBlockType_default(void){
_start:
{
uint8_t v___x_199_; 
v___x_199_ = 0;
return v___x_199_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedBlockType(void){
_start:
{
uint8_t v___x_200_; 
v___x_200_ = 0;
return v___x_200_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorIdx___impl(lean_object* v_x_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lean_obj_tag_nat(v_x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorIdx___impl___boxed(lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = lp_lean_x2dftml_LeanFtml_Item_ctorIdx___impl(v_x_203_);
lean_dec_ref(v_x_203_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(lean_object* v_t_205_, lean_object* v_k_206_){
_start:
{
switch(lean_obj_tag(v_t_205_))
{
case 0:
{
uint8_t v_a_207_; uint8_t v_a_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v_a_207_ = lean_ctor_get_uint8(v_t_205_, 0);
v_a_208_ = lean_ctor_get_uint8(v_t_205_, 1);
lean_dec_ref_known(v_t_205_, 0);
v___x_209_ = lean_box(v_a_207_);
v___x_210_ = lean_box(v_a_208_);
v___x_211_ = lean_apply_2(v_k_206_, v___x_209_, v___x_210_);
return v___x_211_;
}
case 1:
{
uint8_t v_a_212_; uint8_t v_a_213_; lean_object* v_a_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_a_212_ = lean_ctor_get_uint8(v_t_205_, sizeof(void*)*1);
v_a_213_ = lean_ctor_get_uint8(v_t_205_, sizeof(void*)*1 + 1);
v_a_214_ = lean_ctor_get(v_t_205_, 0);
lean_inc(v_a_214_);
lean_dec_ref_known(v_t_205_, 1);
v___x_215_ = lean_box(v_a_212_);
v___x_216_ = lean_box(v_a_213_);
v___x_217_ = lean_apply_3(v_k_206_, v___x_215_, v___x_216_, v_a_214_);
return v___x_217_;
}
default: 
{
lean_object* v_a_218_; lean_object* v___x_219_; 
v_a_218_ = lean_ctor_get(v_t_205_, 0);
lean_inc(v_a_218_);
lean_dec_ref_known(v_t_205_, 1);
v___x_219_ = lean_apply_1(v_k_206_, v_a_218_);
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorElim(lean_object* v_motive_220_, lean_object* v_ctorIdx_221_, lean_object* v_t_222_, lean_object* v_h_223_, lean_object* v_k_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(v_t_222_, v_k_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_ctorElim___boxed(lean_object* v_motive_226_, lean_object* v_ctorIdx_227_, lean_object* v_t_228_, lean_object* v_h_229_, lean_object* v_k_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = lp_lean_x2dftml_LeanFtml_Item_ctorElim(v_motive_226_, v_ctorIdx_227_, v_t_228_, v_h_229_, v_k_230_);
lean_dec(v_ctorIdx_227_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_openTag_elim___redArg(lean_object* v_t_232_, lean_object* v_openTag_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(v_t_232_, v_openTag_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_openTag_elim(lean_object* v_motive_235_, lean_object* v_t_236_, lean_object* v_h_237_, lean_object* v_openTag_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(v_t_236_, v_openTag_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_close_elim___redArg(lean_object* v_t_240_, lean_object* v_close_241_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(v_t_240_, v_close_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_close_elim(lean_object* v_motive_243_, lean_object* v_t_244_, lean_object* v_h_245_, lean_object* v_close_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(v_t_244_, v_close_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_text_elim___redArg(lean_object* v_t_248_, lean_object* v_text_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(v_t_248_, v_text_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Item_text_elim(lean_object* v_motive_251_, lean_object* v_t_252_, lean_object* v_h_253_, lean_object* v_text_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lp_lean_x2dftml_LeanFtml_Item_ctorElim___redArg(v_t_252_, v_text_254_);
return v___x_255_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqItem_decEq(lean_object* v_x_256_, lean_object* v_x_257_){
_start:
{
switch(lean_obj_tag(v_x_256_))
{
case 0:
{
if (lean_obj_tag(v_x_257_) == 0)
{
uint8_t v_a_258_; uint8_t v_a_259_; uint8_t v_a_260_; uint8_t v_a_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_a_258_ = lean_ctor_get_uint8(v_x_256_, 0);
v_a_259_ = lean_ctor_get_uint8(v_x_256_, 1);
lean_dec_ref_known(v_x_256_, 0);
v_a_260_ = lean_ctor_get_uint8(v_x_257_, 0);
v_a_261_ = lean_ctor_get_uint8(v_x_257_, 1);
lean_dec_ref_known(v_x_257_, 0);
v___x_262_ = lean_box(v_a_258_);
v___x_263_ = lean_obj_tag_nat(v___x_262_);
lean_dec(v___x_262_);
v___x_264_ = lean_box(v_a_260_);
v___x_265_ = lean_obj_tag_nat(v___x_264_);
lean_dec(v___x_264_);
v___x_266_ = lean_nat_dec_eq(v___x_263_, v___x_265_);
if (v___x_266_ == 0)
{
return v___x_266_;
}
else
{
if (v_a_261_ == 0)
{
if (v_a_259_ == 0)
{
return v___x_266_;
}
else
{
return v_a_261_;
}
}
else
{
return v_a_259_;
}
}
}
else
{
uint8_t v___x_267_; 
lean_dec_ref_known(v_x_256_, 0);
lean_dec_ref(v_x_257_);
v___x_267_ = 0;
return v___x_267_;
}
}
case 1:
{
if (lean_obj_tag(v_x_257_) == 1)
{
uint8_t v_a_268_; uint8_t v_a_269_; lean_object* v_a_270_; uint8_t v_a_271_; uint8_t v_a_272_; lean_object* v_a_273_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v_a_268_ = lean_ctor_get_uint8(v_x_256_, sizeof(void*)*1);
v_a_269_ = lean_ctor_get_uint8(v_x_256_, sizeof(void*)*1 + 1);
v_a_270_ = lean_ctor_get(v_x_256_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v_x_256_, 1);
v_a_271_ = lean_ctor_get_uint8(v_x_257_, sizeof(void*)*1);
v_a_272_ = lean_ctor_get_uint8(v_x_257_, sizeof(void*)*1 + 1);
v_a_273_ = lean_ctor_get(v_x_257_, 0);
lean_inc(v_a_273_);
lean_dec_ref_known(v_x_257_, 1);
v___x_277_ = lean_box(v_a_268_);
v___x_278_ = lean_obj_tag_nat(v___x_277_);
lean_dec(v___x_277_);
v___x_279_ = lean_box(v_a_271_);
v___x_280_ = lean_obj_tag_nat(v___x_279_);
lean_dec(v___x_279_);
v___x_281_ = lean_nat_dec_eq(v___x_278_, v___x_280_);
if (v___x_281_ == 0)
{
lean_dec(v_a_273_);
lean_dec(v_a_270_);
return v___x_281_;
}
else
{
if (v_a_272_ == 0)
{
if (v_a_269_ == 0)
{
goto v___jp_274_;
}
else
{
lean_dec(v_a_273_);
lean_dec(v_a_270_);
return v_a_272_;
}
}
else
{
if (v_a_269_ == 0)
{
lean_dec(v_a_273_);
lean_dec(v_a_270_);
return v_a_269_;
}
else
{
goto v___jp_274_;
}
}
}
v___jp_274_:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_alloc_closure((void*)(l_instDecidableEqChar___boxed), 2, 0);
v___x_276_ = l_instDecidableEqList___redArg(v___x_275_, v_a_270_, v_a_273_);
return v___x_276_;
}
}
else
{
uint8_t v___x_282_; 
lean_dec_ref_known(v_x_256_, 1);
lean_dec_ref(v_x_257_);
v___x_282_ = 0;
return v___x_282_;
}
}
default: 
{
if (lean_obj_tag(v_x_257_) == 2)
{
lean_object* v_a_283_; lean_object* v_a_284_; uint8_t v___x_285_; 
v_a_283_ = lean_ctor_get(v_x_256_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v_x_256_, 1);
v_a_284_ = lean_ctor_get(v_x_257_, 0);
lean_inc(v_a_284_);
lean_dec_ref_known(v_x_257_, 1);
v___x_285_ = lean_nat_dec_eq(v_a_283_, v_a_284_);
lean_dec(v_a_284_);
lean_dec(v_a_283_);
return v___x_285_;
}
else
{
uint8_t v___x_286_; 
lean_dec_ref_known(v_x_256_, 1);
lean_dec_ref(v_x_257_);
v___x_286_ = 0;
return v___x_286_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqItem_decEq___boxed(lean_object* v_x_287_, lean_object* v_x_288_){
_start:
{
uint8_t v_res_289_; lean_object* v_r_290_; 
v_res_289_ = lp_lean_x2dftml_LeanFtml_instDecidableEqItem_decEq(v_x_287_, v_x_288_);
v_r_290_ = lean_box(v_res_289_);
return v_r_290_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqItem(lean_object* v_x_291_, lean_object* v_x_292_){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = lp_lean_x2dftml_LeanFtml_instDecidableEqItem_decEq(v_x_291_, v_x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqItem___boxed(lean_object* v_x_294_, lean_object* v_x_295_){
_start:
{
uint8_t v_res_296_; lean_object* v_r_297_; 
v_res_296_ = lp_lean_x2dftml_LeanFtml_instDecidableEqItem(v_x_294_, v_x_295_);
v_r_297_ = lean_box(v_res_296_);
return v_r_297_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_298_, lean_object* v_x_299_, lean_object* v_x_300_){
_start:
{
if (lean_obj_tag(v_x_300_) == 0)
{
lean_dec(v_x_298_);
return v_x_299_;
}
else
{
lean_object* v_head_301_; lean_object* v_tail_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_314_; 
v_head_301_ = lean_ctor_get(v_x_300_, 0);
v_tail_302_ = lean_ctor_get(v_x_300_, 1);
v_isSharedCheck_314_ = !lean_is_exclusive(v_x_300_);
if (v_isSharedCheck_314_ == 0)
{
v___x_304_ = v_x_300_;
v_isShared_305_ = v_isSharedCheck_314_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_tail_302_);
lean_inc(v_head_301_);
lean_dec(v_x_300_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_314_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
lean_inc(v_x_298_);
if (v_isShared_305_ == 0)
{
lean_ctor_set_tag(v___x_304_, 5);
lean_ctor_set(v___x_304_, 1, v_x_298_);
lean_ctor_set(v___x_304_, 0, v_x_299_);
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_x_299_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_x_298_);
v___x_307_ = v_reuseFailAlloc_313_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
uint32_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_308_ = lean_unbox_uint32(v_head_301_);
lean_dec(v_head_301_);
v___x_309_ = l_Char_quote(v___x_308_);
v___x_310_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
v___x_311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_307_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
v_x_299_ = v___x_311_;
v_x_300_ = v_tail_302_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0_spec__1(lean_object* v_x_315_, lean_object* v_x_316_, lean_object* v_x_317_){
_start:
{
if (lean_obj_tag(v_x_317_) == 0)
{
lean_dec(v_x_315_);
return v_x_316_;
}
else
{
lean_object* v_head_318_; lean_object* v_tail_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_331_; 
v_head_318_ = lean_ctor_get(v_x_317_, 0);
v_tail_319_ = lean_ctor_get(v_x_317_, 1);
v_isSharedCheck_331_ = !lean_is_exclusive(v_x_317_);
if (v_isSharedCheck_331_ == 0)
{
v___x_321_ = v_x_317_;
v_isShared_322_ = v_isSharedCheck_331_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_tail_319_);
lean_inc(v_head_318_);
lean_dec(v_x_317_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_331_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
lean_inc(v_x_315_);
if (v_isShared_322_ == 0)
{
lean_ctor_set_tag(v___x_321_, 5);
lean_ctor_set(v___x_321_, 1, v_x_315_);
lean_ctor_set(v___x_321_, 0, v_x_316_);
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_x_316_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_x_315_);
v___x_324_ = v_reuseFailAlloc_330_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
uint32_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_325_ = lean_unbox_uint32(v_head_318_);
lean_dec(v_head_318_);
v___x_326_ = l_Char_quote(v___x_325_);
v___x_327_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
v___x_328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_324_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0_spec__1_spec__2(v_x_315_, v___x_328_, v_tail_319_);
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0___lam__0(uint32_t v___y_332_){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = l_Char_quote(v___y_332_);
v___x_334_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0___lam__0___boxed(lean_object* v___y_335_){
_start:
{
uint32_t v___y_577__boxed_336_; lean_object* v_res_337_; 
v___y_577__boxed_336_ = lean_unbox_uint32(v___y_335_);
lean_dec(v___y_335_);
v_res_337_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0___lam__0(v___y_577__boxed_336_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0(lean_object* v_x_338_, lean_object* v_x_339_){
_start:
{
if (lean_obj_tag(v_x_338_) == 0)
{
lean_object* v___x_340_; 
lean_dec(v_x_339_);
v___x_340_ = lean_box(0);
return v___x_340_;
}
else
{
lean_object* v_tail_341_; 
v_tail_341_ = lean_ctor_get(v_x_338_, 1);
if (lean_obj_tag(v_tail_341_) == 0)
{
lean_object* v_head_342_; uint32_t v___x_343_; lean_object* v___x_344_; 
lean_dec(v_x_339_);
v_head_342_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_head_342_);
lean_dec_ref_known(v_x_338_, 2);
v___x_343_ = lean_unbox_uint32(v_head_342_);
lean_dec(v_head_342_);
v___x_344_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0___lam__0(v___x_343_);
return v___x_344_;
}
else
{
lean_object* v_head_345_; uint32_t v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
lean_inc(v_tail_341_);
v_head_345_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_head_345_);
lean_dec_ref_known(v_x_338_, 2);
v___x_346_ = lean_unbox_uint32(v_head_345_);
lean_dec(v_head_345_);
v___x_347_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0___lam__0(v___x_346_);
v___x_348_ = lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0_spec__1(v_x_339_, v___x_347_, v_tail_341_);
return v___x_348_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__2));
v___x_361_ = lean_string_length(v___x_360_);
return v___x_361_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_obj_once(&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__7, &lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__7_once, _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__7);
v___x_363_ = lean_nat_to_int(v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg(lean_object* v_a_368_){
_start:
{
if (lean_obj_tag(v_a_368_) == 0)
{
lean_object* v___x_369_; 
v___x_369_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__1));
return v___x_369_;
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_370_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__5));
v___x_371_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0_spec__0(v_a_368_, v___x_370_);
v___x_372_ = lean_obj_once(&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__8, &lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__8_once, _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__8);
v___x_373_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__9));
v___x_374_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
lean_ctor_set(v___x_374_, 1, v___x_371_);
v___x_375_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg___closed__10));
v___x_376_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_374_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_372_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = l_Std_Format_fill(v___x_377_);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr(lean_object* v_x_397_, lean_object* v_prec_398_){
_start:
{
switch(lean_obj_tag(v_x_397_))
{
case 0:
{
uint8_t v_a_399_; uint8_t v_a_400_; lean_object* v___y_402_; lean_object* v___x_415_; uint8_t v___x_416_; 
v_a_399_ = lean_ctor_get_uint8(v_x_397_, 0);
v_a_400_ = lean_ctor_get_uint8(v_x_397_, 1);
lean_dec_ref_known(v_x_397_, 0);
v___x_415_ = lean_unsigned_to_nat(1024u);
v___x_416_ = lean_nat_dec_le(v___x_415_, v_prec_398_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; 
v___x_417_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_402_ = v___x_417_;
goto v___jp_401_;
}
else
{
lean_object* v___x_418_; 
v___x_418_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_402_ = v___x_418_;
goto v___jp_401_;
}
v___jp_401_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_403_ = lean_box(1);
v___x_404_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__2));
v___x_405_ = lean_unsigned_to_nat(1024u);
v___x_406_ = lp_lean_x2dftml_LeanFtml_instReprBlockType_repr(v_a_399_, v___x_405_);
v___x_407_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_404_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v___x_408_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
lean_ctor_set(v___x_408_, 1, v___x_403_);
v___x_409_ = l_Bool_repr___redArg(v_a_400_);
v___x_410_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_410_, 0, v___x_408_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
lean_inc(v___y_402_);
v___x_411_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_411_, 0, v___y_402_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = 0;
v___x_413_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_413_, 0, v___x_411_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*1, v___x_412_);
v___x_414_ = l_Repr_addAppParen(v___x_413_, v_prec_398_);
return v___x_414_;
}
}
case 1:
{
uint8_t v_a_419_; uint8_t v_a_420_; lean_object* v_a_421_; lean_object* v___y_423_; lean_object* v___x_439_; uint8_t v___x_440_; 
v_a_419_ = lean_ctor_get_uint8(v_x_397_, sizeof(void*)*1);
v_a_420_ = lean_ctor_get_uint8(v_x_397_, sizeof(void*)*1 + 1);
v_a_421_ = lean_ctor_get(v_x_397_, 0);
lean_inc(v_a_421_);
lean_dec_ref_known(v_x_397_, 1);
v___x_439_ = lean_unsigned_to_nat(1024u);
v___x_440_ = lean_nat_dec_le(v___x_439_, v_prec_398_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; 
v___x_441_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_423_ = v___x_441_;
goto v___jp_422_;
}
else
{
lean_object* v___x_442_; 
v___x_442_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_423_ = v___x_442_;
goto v___jp_422_;
}
v___jp_422_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_424_ = lean_box(1);
v___x_425_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__5));
v___x_426_ = lean_unsigned_to_nat(1024u);
v___x_427_ = lp_lean_x2dftml_LeanFtml_instReprBlockType_repr(v_a_419_, v___x_426_);
v___x_428_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_425_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
v___x_429_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
lean_ctor_set(v___x_429_, 1, v___x_424_);
v___x_430_ = l_Bool_repr___redArg(v_a_420_);
v___x_431_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_429_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v___x_424_);
v___x_433_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg(v_a_421_);
v___x_434_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_432_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
lean_inc(v___y_423_);
v___x_435_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_435_, 0, v___y_423_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
v___x_436_ = 0;
v___x_437_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set_uint8(v___x_437_, sizeof(void*)*1, v___x_436_);
v___x_438_ = l_Repr_addAppParen(v___x_437_, v_prec_398_);
return v___x_438_;
}
}
default: 
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_463_; 
v_a_443_ = lean_ctor_get(v_x_397_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v_x_397_);
if (v_isSharedCheck_463_ == 0)
{
v___x_445_ = v_x_397_;
v_isShared_446_ = v_isSharedCheck_463_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v_x_397_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_463_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___y_448_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_459_ = lean_unsigned_to_nat(1024u);
v___x_460_ = lean_nat_dec_le(v___x_459_, v_prec_398_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; 
v___x_461_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_448_ = v___x_461_;
goto v___jp_447_;
}
else
{
lean_object* v___x_462_; 
v___x_462_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_448_ = v___x_462_;
goto v___jp_447_;
}
v___jp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_452_; 
v___x_449_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprItem_repr___closed__8));
v___x_450_ = l_Nat_reprFast(v_a_443_);
if (v_isShared_446_ == 0)
{
lean_ctor_set_tag(v___x_445_, 3);
lean_ctor_set(v___x_445_, 0, v___x_450_);
v___x_452_ = v___x_445_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_450_);
v___x_452_ = v_reuseFailAlloc_458_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_449_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
lean_inc(v___y_448_);
v___x_454_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_454_, 0, v___y_448_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
v___x_455_ = 0;
v___x_456_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_456_, 0, v___x_454_);
lean_ctor_set_uint8(v___x_456_, sizeof(void*)*1, v___x_455_);
v___x_457_ = l_Repr_addAppParen(v___x_456_, v_prec_398_);
return v___x_457_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprItem_repr___boxed(lean_object* v_x_464_, lean_object* v_prec_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = lp_lean_x2dftml_LeanFtml_instReprItem_repr(v_x_464_, v_prec_465_);
lean_dec(v_prec_465_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0(lean_object* v_a_467_, lean_object* v_n_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___redArg(v_a_467_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0___boxed(lean_object* v_a_470_, lean_object* v_n_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprItem_repr_spec__0(v_a_470_, v_n_471_);
lean_dec(v_n_471_);
return v_res_472_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isBlank(uint32_t v_c_475_){
_start:
{
uint32_t v___x_476_; uint8_t v___x_477_; 
v___x_476_ = 32;
v___x_477_ = lean_uint32_dec_eq(v_c_475_, v___x_476_);
if (v___x_477_ == 0)
{
uint32_t v___x_478_; uint8_t v___x_479_; 
v___x_478_ = 9;
v___x_479_ = lean_uint32_dec_eq(v_c_475_, v___x_478_);
return v___x_479_;
}
else
{
return v___x_477_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isBlank___boxed(lean_object* v_c_480_){
_start:
{
uint32_t v_c_boxed_481_; uint8_t v_res_482_; lean_object* v_r_483_; 
v_c_boxed_481_ = lean_unbox_uint32(v_c_480_);
lean_dec(v_c_480_);
v_res_482_ = lp_lean_x2dftml_LeanFtml_isBlank(v_c_boxed_481_);
v_r_483_ = lean_box(v_res_482_);
return v_r_483_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0(lean_object* v_x_484_){
_start:
{
if (lean_obj_tag(v_x_484_) == 0)
{
uint8_t v___x_485_; 
v___x_485_ = 1;
return v___x_485_;
}
else
{
lean_object* v_head_486_; lean_object* v_tail_487_; uint32_t v___x_488_; uint8_t v___x_489_; 
v_head_486_ = lean_ctor_get(v_x_484_, 0);
v_tail_487_ = lean_ctor_get(v_x_484_, 1);
v___x_488_ = lean_unbox_uint32(v_head_486_);
v___x_489_ = lp_lean_x2dftml_LeanFtml_isBlank(v___x_488_);
if (v___x_489_ == 0)
{
return v___x_489_;
}
else
{
v_x_484_ = v_tail_487_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0___boxed(lean_object* v_x_491_){
_start:
{
uint8_t v_res_492_; lean_object* v_r_493_; 
v_res_492_ = lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0(v_x_491_);
lean_dec(v_x_491_);
v_r_493_ = lean_box(v_res_492_);
return v_r_493_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_allBlank(lean_object* v_s_494_){
_start:
{
uint8_t v___x_495_; 
v___x_495_ = lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0(v_s_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allBlank___boxed(lean_object* v_s_496_){
_start:
{
uint8_t v_res_497_; lean_object* v_r_498_; 
v_res_497_ = lp_lean_x2dftml_LeanFtml_allBlank(v_s_496_);
lean_dec(v_s_496_);
v_r_498_ = lean_box(v_res_497_);
return v_r_498_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_blankHeaded(lean_object* v_x_499_){
_start:
{
if (lean_obj_tag(v_x_499_) == 0)
{
uint8_t v___x_500_; 
v___x_500_ = 1;
return v___x_500_;
}
else
{
lean_object* v_head_501_; uint32_t v___x_502_; uint8_t v___x_503_; 
v_head_501_ = lean_ctor_get(v_x_499_, 0);
v___x_502_ = lean_unbox_uint32(v_head_501_);
v___x_503_ = lp_lean_x2dftml_LeanFtml_isBlank(v___x_502_);
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blankHeaded___boxed(lean_object* v_x_504_){
_start:
{
uint8_t v_res_505_; lean_object* v_r_506_; 
v_res_505_ = lp_lean_x2dftml_LeanFtml_blankHeaded(v_x_504_);
lean_dec(v_x_504_);
v_r_506_ = lean_box(v_res_505_);
return v_r_506_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_gateAccepts(uint8_t v_b_507_, lean_object* v_s_508_){
_start:
{
switch(v_b_507_)
{
case 2:
{
uint8_t v___x_509_; 
v___x_509_ = 1;
return v___x_509_;
}
case 3:
{
uint8_t v___x_510_; 
v___x_510_ = 1;
return v___x_510_;
}
case 4:
{
uint8_t v___x_511_; 
v___x_511_ = lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0(v_s_508_);
return v___x_511_;
}
default: 
{
uint8_t v___x_512_; 
v___x_512_ = lp_lean_x2dftml_LeanFtml_blankHeaded(v_s_508_);
return v___x_512_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gateAccepts___boxed(lean_object* v_b_513_, lean_object* v_s_514_){
_start:
{
uint8_t v_b_boxed_515_; uint8_t v_res_516_; lean_object* v_r_517_; 
v_b_boxed_515_ = lean_unbox(v_b_513_);
v_res_516_ = lp_lean_x2dftml_LeanFtml_gateAccepts(v_b_boxed_515_, v_s_514_);
lean_dec(v_s_514_);
v_r_517_ = lean_box(v_res_516_);
return v_r_517_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_positionAccepts(uint8_t v_b_518_, uint8_t v_ls_519_){
_start:
{
if (v_b_518_ == 1)
{
return v_ls_519_;
}
else
{
uint8_t v___x_520_; 
v___x_520_ = 1;
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_positionAccepts___boxed(lean_object* v_b_521_, lean_object* v_ls_522_){
_start:
{
uint8_t v_b_boxed_523_; uint8_t v_ls_boxed_524_; uint8_t v_res_525_; lean_object* v_r_526_; 
v_b_boxed_523_ = lean_unbox(v_b_521_);
v_ls_boxed_524_ = lean_unbox(v_ls_522_);
v_res_525_ = lp_lean_x2dftml_LeanFtml_positionAccepts(v_b_boxed_523_, v_ls_boxed_524_);
v_r_526_ = lean_box(v_res_525_);
return v_r_526_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_accepts(uint8_t v_b_527_, uint8_t v_ls_528_, lean_object* v_s_529_){
_start:
{
uint8_t v___x_530_; 
v___x_530_ = lp_lean_x2dftml_LeanFtml_positionAccepts(v_b_527_, v_ls_528_);
if (v___x_530_ == 0)
{
return v___x_530_;
}
else
{
uint8_t v___x_531_; 
v___x_531_ = lp_lean_x2dftml_LeanFtml_gateAccepts(v_b_527_, v_s_529_);
return v___x_531_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_accepts___boxed(lean_object* v_b_532_, lean_object* v_ls_533_, lean_object* v_s_534_){
_start:
{
uint8_t v_b_boxed_535_; uint8_t v_ls_boxed_536_; uint8_t v_res_537_; lean_object* v_r_538_; 
v_b_boxed_535_ = lean_unbox(v_b_532_);
v_ls_boxed_536_ = lean_unbox(v_ls_533_);
v_res_537_ = lp_lean_x2dftml_LeanFtml_accepts(v_b_boxed_535_, v_ls_boxed_536_, v_s_534_);
lean_dec(v_s_534_);
v_r_538_ = lean_box(v_res_537_);
return v_r_538_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_eraseBlankItem(lean_object* v_x_539_){
_start:
{
if (lean_obj_tag(v_x_539_) == 1)
{
uint8_t v_a_540_; uint8_t v_a_541_; lean_object* v_a_542_; uint8_t v___x_543_; 
v_a_540_ = lean_ctor_get_uint8(v_x_539_, sizeof(void*)*1);
v_a_541_ = lean_ctor_get_uint8(v_x_539_, sizeof(void*)*1 + 1);
v_a_542_ = lean_ctor_get(v_x_539_, 0);
v___x_543_ = lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0(v_a_542_);
if (v___x_543_ == 0)
{
return v_x_539_;
}
else
{
lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_551_; 
v_isSharedCheck_551_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_551_ == 0)
{
lean_object* v_unused_552_; 
v_unused_552_ = lean_ctor_get(v_x_539_, 0);
lean_dec(v_unused_552_);
v___x_545_ = v_x_539_;
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
else
{
lean_dec(v_x_539_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_547_ = lean_box(0);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 0, v___x_547_);
v___x_549_ = v___x_545_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 2);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
lean_ctor_set_uint8(v_reuseFailAlloc_550_, sizeof(void*)*1, v_a_540_);
lean_ctor_set_uint8(v_reuseFailAlloc_550_, sizeof(void*)*1 + 1, v_a_541_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
else
{
return v_x_539_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_headIsClose(uint8_t v_b_553_, lean_object* v_x_554_){
_start:
{
if (lean_obj_tag(v_x_554_) == 1)
{
lean_object* v_head_555_; 
v_head_555_ = lean_ctor_get(v_x_554_, 0);
if (lean_obj_tag(v_head_555_) == 1)
{
uint8_t v_a_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v_a_556_ = lean_ctor_get_uint8(v_head_555_, sizeof(void*)*1);
v___x_557_ = lean_box(v_a_556_);
v___x_558_ = lean_obj_tag_nat(v___x_557_);
lean_dec(v___x_557_);
v___x_559_ = lean_box(v_b_553_);
v___x_560_ = lean_obj_tag_nat(v___x_559_);
lean_dec(v___x_559_);
v___x_561_ = lean_nat_dec_eq(v___x_558_, v___x_560_);
return v___x_561_;
}
else
{
uint8_t v___x_562_; 
v___x_562_ = 0;
return v___x_562_;
}
}
else
{
uint8_t v___x_563_; 
v___x_563_ = 0;
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headIsClose___boxed(lean_object* v_b_564_, lean_object* v_x_565_){
_start:
{
uint8_t v_b_boxed_566_; uint8_t v_res_567_; lean_object* v_r_568_; 
v_b_boxed_566_ = lean_unbox(v_b_564_);
v_res_567_ = lp_lean_x2dftml_LeanFtml_headIsClose(v_b_boxed_566_, v_x_565_);
lean_dec(v_x_565_);
v_r_568_ = lean_box(v_res_567_);
return v_r_568_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_headIsClose_match__1_splitter___redArg(lean_object* v_x_569_, lean_object* v_h__1_570_, lean_object* v_h__2_571_){
_start:
{
if (lean_obj_tag(v_x_569_) == 1)
{
lean_object* v_head_572_; 
v_head_572_ = lean_ctor_get(v_x_569_, 0);
if (lean_obj_tag(v_head_572_) == 1)
{
lean_object* v_tail_573_; uint8_t v_a_574_; uint8_t v_a_575_; lean_object* v_a_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
lean_inc_ref(v_head_572_);
lean_dec(v_h__2_571_);
v_tail_573_ = lean_ctor_get(v_x_569_, 1);
lean_inc(v_tail_573_);
lean_dec_ref_known(v_x_569_, 2);
v_a_574_ = lean_ctor_get_uint8(v_head_572_, sizeof(void*)*1);
v_a_575_ = lean_ctor_get_uint8(v_head_572_, sizeof(void*)*1 + 1);
v_a_576_ = lean_ctor_get(v_head_572_, 0);
lean_inc(v_a_576_);
lean_dec_ref_known(v_head_572_, 1);
v___x_577_ = lean_box(v_a_574_);
v___x_578_ = lean_box(v_a_575_);
v___x_579_ = lean_apply_4(v_h__1_570_, v___x_577_, v___x_578_, v_a_576_, v_tail_573_);
return v___x_579_;
}
else
{
lean_object* v___x_580_; 
lean_dec(v_h__1_570_);
v___x_580_ = lean_apply_2(v_h__2_571_, v_x_569_, lean_box(0));
return v___x_580_;
}
}
else
{
lean_object* v___x_581_; 
lean_dec(v_h__1_570_);
v___x_581_ = lean_apply_2(v_h__2_571_, v_x_569_, lean_box(0));
return v___x_581_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_headIsClose_match__1_splitter(lean_object* v_motive_582_, lean_object* v_x_583_, lean_object* v_h__1_584_, lean_object* v_h__2_585_){
_start:
{
if (lean_obj_tag(v_x_583_) == 1)
{
lean_object* v_head_586_; 
v_head_586_ = lean_ctor_get(v_x_583_, 0);
if (lean_obj_tag(v_head_586_) == 1)
{
lean_object* v_tail_587_; uint8_t v_a_588_; uint8_t v_a_589_; lean_object* v_a_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
lean_inc_ref(v_head_586_);
lean_dec(v_h__2_585_);
v_tail_587_ = lean_ctor_get(v_x_583_, 1);
lean_inc(v_tail_587_);
lean_dec_ref_known(v_x_583_, 2);
v_a_588_ = lean_ctor_get_uint8(v_head_586_, sizeof(void*)*1);
v_a_589_ = lean_ctor_get_uint8(v_head_586_, sizeof(void*)*1 + 1);
v_a_590_ = lean_ctor_get(v_head_586_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v_head_586_, 1);
v___x_591_ = lean_box(v_a_588_);
v___x_592_ = lean_box(v_a_589_);
v___x_593_ = lean_apply_4(v_h__1_584_, v___x_591_, v___x_592_, v_a_590_, v_tail_587_);
return v___x_593_;
}
else
{
lean_object* v___x_594_; 
lean_dec(v_h__1_584_);
v___x_594_ = lean_apply_2(v_h__2_585_, v_x_583_, lean_box(0));
return v___x_594_;
}
}
else
{
lean_object* v___x_595_; 
lean_dec(v_h__1_584_);
v___x_595_ = lean_apply_2(v_h__2_585_, v_x_583_, lean_box(0));
return v___x_595_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rejectsNested(uint8_t v_b_596_, lean_object* v_closer_597_, lean_object* v_rest_598_){
_start:
{
if (lean_obj_tag(v_closer_597_) == 1)
{
lean_object* v_a_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; uint8_t v___x_603_; 
v_a_599_ = lean_ctor_get(v_closer_597_, 0);
v___x_600_ = lean_box(v_b_596_);
v___x_601_ = lean_obj_tag_nat(v___x_600_);
lean_dec(v___x_600_);
v___x_602_ = lean_unsigned_to_nat(1u);
v___x_603_ = lean_nat_dec_eq(v___x_601_, v___x_602_);
if (v___x_603_ == 0)
{
return v___x_603_;
}
else
{
uint8_t v___x_604_; 
v___x_604_ = lp_lean_x2dftml_List_all___at___00LeanFtml_allBlank_spec__0(v_a_599_);
if (v___x_604_ == 0)
{
return v___x_604_;
}
else
{
uint8_t v___x_605_; 
v___x_605_ = lp_lean_x2dftml_LeanFtml_headIsClose(v_b_596_, v_rest_598_);
return v___x_605_;
}
}
}
else
{
uint8_t v___x_606_; 
v___x_606_ = 0;
return v___x_606_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rejectsNested___boxed(lean_object* v_b_607_, lean_object* v_closer_608_, lean_object* v_rest_609_){
_start:
{
uint8_t v_b_boxed_610_; uint8_t v_res_611_; lean_object* v_r_612_; 
v_b_boxed_610_ = lean_unbox(v_b_607_);
v_res_611_ = lp_lean_x2dftml_LeanFtml_rejectsNested(v_b_boxed_610_, v_closer_608_, v_rest_609_);
lean_dec(v_rest_609_);
lean_dec_ref(v_closer_608_);
v_r_612_ = lean_box(v_res_611_);
return v_r_612_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_rejectsNested_match__1_splitter___redArg(lean_object* v_closer_613_, lean_object* v_h__1_614_, lean_object* v_h__2_615_){
_start:
{
if (lean_obj_tag(v_closer_613_) == 1)
{
uint8_t v_a_616_; uint8_t v_a_617_; lean_object* v_a_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
lean_dec(v_h__2_615_);
v_a_616_ = lean_ctor_get_uint8(v_closer_613_, sizeof(void*)*1);
v_a_617_ = lean_ctor_get_uint8(v_closer_613_, sizeof(void*)*1 + 1);
v_a_618_ = lean_ctor_get(v_closer_613_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v_closer_613_, 1);
v___x_619_ = lean_box(v_a_616_);
v___x_620_ = lean_box(v_a_617_);
v___x_621_ = lean_apply_3(v_h__1_614_, v___x_619_, v___x_620_, v_a_618_);
return v___x_621_;
}
else
{
lean_object* v___x_622_; 
lean_dec(v_h__1_614_);
v___x_622_ = lean_apply_2(v_h__2_615_, v_closer_613_, lean_box(0));
return v___x_622_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_rejectsNested_match__1_splitter(lean_object* v_motive_623_, lean_object* v_closer_624_, lean_object* v_h__1_625_, lean_object* v_h__2_626_){
_start:
{
if (lean_obj_tag(v_closer_624_) == 1)
{
uint8_t v_a_627_; uint8_t v_a_628_; lean_object* v_a_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
lean_dec(v_h__2_626_);
v_a_627_ = lean_ctor_get_uint8(v_closer_624_, sizeof(void*)*1);
v_a_628_ = lean_ctor_get_uint8(v_closer_624_, sizeof(void*)*1 + 1);
v_a_629_ = lean_ctor_get(v_closer_624_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v_closer_624_, 1);
v___x_630_ = lean_box(v_a_627_);
v___x_631_ = lean_box(v_a_628_);
v___x_632_ = lean_apply_3(v_h__1_625_, v___x_630_, v___x_631_, v_a_629_);
return v___x_632_;
}
else
{
lean_object* v___x_633_; 
lean_dec(v_h__1_625_);
v___x_633_ = lean_apply_2(v_h__2_626_, v_closer_624_, lean_box(0));
return v___x_633_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorIdx___impl(uint8_t v_x_634_){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_box(v_x_634_);
v___x_636_ = lean_obj_tag_nat(v___x_635_);
lean_dec(v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorIdx___impl___boxed(lean_object* v_x_637_){
_start:
{
uint8_t v_x_4__boxed_638_; lean_object* v_res_639_; 
v_x_4__boxed_638_ = lean_unbox(v_x_637_);
v_res_639_ = lp_lean_x2dftml_LeanFtml_Discipline_ctorIdx___impl(v_x_4__boxed_638_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorElim___redArg(lean_object* v_k_640_){
_start:
{
lean_inc(v_k_640_);
return v_k_640_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorElim___redArg___boxed(lean_object* v_k_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = lp_lean_x2dftml_LeanFtml_Discipline_ctorElim___redArg(v_k_641_);
lean_dec(v_k_641_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorElim(lean_object* v_motive_643_, lean_object* v_ctorIdx_644_, uint8_t v_t_645_, lean_object* v_h_646_, lean_object* v_k_647_){
_start:
{
lean_inc(v_k_647_);
return v_k_647_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ctorElim___boxed(lean_object* v_motive_648_, lean_object* v_ctorIdx_649_, lean_object* v_t_650_, lean_object* v_h_651_, lean_object* v_k_652_){
_start:
{
uint8_t v_t_boxed_653_; lean_object* v_res_654_; 
v_t_boxed_653_ = lean_unbox(v_t_650_);
v_res_654_ = lp_lean_x2dftml_LeanFtml_Discipline_ctorElim(v_motive_648_, v_ctorIdx_649_, v_t_boxed_653_, v_h_651_, v_k_652_);
lean_dec(v_k_652_);
lean_dec(v_ctorIdx_649_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim___redArg(lean_object* v_recursive_655_){
_start:
{
lean_inc(v_recursive_655_);
return v_recursive_655_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim___redArg___boxed(lean_object* v_recursive_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim___redArg(v_recursive_656_);
lean_dec(v_recursive_656_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim(lean_object* v_motive_658_, uint8_t v_t_659_, lean_object* v_h_660_, lean_object* v_recursive_661_){
_start:
{
lean_inc(v_recursive_661_);
return v_recursive_661_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim___boxed(lean_object* v_motive_662_, lean_object* v_t_663_, lean_object* v_h_664_, lean_object* v_recursive_665_){
_start:
{
uint8_t v_t_boxed_666_; lean_object* v_res_667_; 
v_t_boxed_666_ = lean_unbox(v_t_663_);
v_res_667_ = lp_lean_x2dftml_LeanFtml_Discipline_recursive_elim(v_motive_662_, v_t_boxed_666_, v_h_664_, v_recursive_665_);
lean_dec(v_recursive_665_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim___redArg(lean_object* v_firstCloser_668_){
_start:
{
lean_inc(v_firstCloser_668_);
return v_firstCloser_668_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim___redArg___boxed(lean_object* v_firstCloser_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim___redArg(v_firstCloser_669_);
lean_dec(v_firstCloser_669_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim(lean_object* v_motive_671_, uint8_t v_t_672_, lean_object* v_h_673_, lean_object* v_firstCloser_674_){
_start:
{
lean_inc(v_firstCloser_674_);
return v_firstCloser_674_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim___boxed(lean_object* v_motive_675_, lean_object* v_t_676_, lean_object* v_h_677_, lean_object* v_firstCloser_678_){
_start:
{
uint8_t v_t_boxed_679_; lean_object* v_res_680_; 
v_t_boxed_679_ = lean_unbox(v_t_676_);
v_res_680_ = lp_lean_x2dftml_LeanFtml_Discipline_firstCloser_elim(v_motive_675_, v_t_boxed_679_, v_h_677_, v_firstCloser_678_);
lean_dec(v_firstCloser_678_);
return v_res_680_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_Discipline_ofNat(lean_object* v_n_681_){
_start:
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = lean_unsigned_to_nat(0u);
v___x_683_ = lean_nat_dec_le(v_n_681_, v___x_682_);
if (v___x_683_ == 0)
{
uint8_t v___x_684_; 
v___x_684_ = 1;
return v___x_684_;
}
else
{
uint8_t v___x_685_; 
v___x_685_ = 0;
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Discipline_ofNat___boxed(lean_object* v_n_686_){
_start:
{
uint8_t v_res_687_; lean_object* v_r_688_; 
v_res_687_ = lp_lean_x2dftml_LeanFtml_Discipline_ofNat(v_n_686_);
lean_dec(v_n_686_);
v_r_688_ = lean_box(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDiscipline(uint8_t v_x_689_, uint8_t v_y_690_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_691_ = lean_box(v_x_689_);
v___x_692_ = lean_obj_tag_nat(v___x_691_);
lean_dec(v___x_691_);
v___x_693_ = lean_box(v_y_690_);
v___x_694_ = lean_obj_tag_nat(v___x_693_);
lean_dec(v___x_693_);
v___x_695_ = lean_nat_dec_eq(v___x_692_, v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDiscipline___boxed(lean_object* v_x_696_, lean_object* v_y_697_){
_start:
{
uint8_t v_x_23__boxed_698_; uint8_t v_y_24__boxed_699_; uint8_t v_res_700_; lean_object* v_r_701_; 
v_x_23__boxed_698_ = lean_unbox(v_x_696_);
v_y_24__boxed_699_ = lean_unbox(v_y_697_);
v_res_700_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDiscipline(v_x_23__boxed_698_, v_y_24__boxed_699_);
v_r_701_ = lean_box(v_res_700_);
return v_r_701_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr(uint8_t v_x_708_, lean_object* v_prec_709_){
_start:
{
lean_object* v___y_711_; lean_object* v___y_718_; 
if (v_x_708_ == 0)
{
lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_724_ = lean_unsigned_to_nat(1024u);
v___x_725_ = lean_nat_dec_le(v___x_724_, v_prec_709_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; 
v___x_726_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_711_ = v___x_726_;
goto v___jp_710_;
}
else
{
lean_object* v___x_727_; 
v___x_727_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_711_ = v___x_727_;
goto v___jp_710_;
}
}
else
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = lean_unsigned_to_nat(1024u);
v___x_729_ = lean_nat_dec_le(v___x_728_, v_prec_709_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__10);
v___y_718_ = v___x_730_;
goto v___jp_717_;
}
else
{
lean_object* v___x_731_; 
v___x_731_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11, &lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_instReprBlockType_repr___closed__11);
v___y_718_ = v___x_731_;
goto v___jp_717_;
}
}
v___jp_710_:
{
lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_712_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__1));
lean_inc(v___y_711_);
v___x_713_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_713_, 0, v___y_711_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
v___x_714_ = 0;
v___x_715_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_715_, 0, v___x_713_);
lean_ctor_set_uint8(v___x_715_, sizeof(void*)*1, v___x_714_);
v___x_716_ = l_Repr_addAppParen(v___x_715_, v_prec_709_);
return v___x_716_;
}
v___jp_717_:
{
lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_719_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___closed__3));
lean_inc(v___y_718_);
v___x_720_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_720_, 0, v___y_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = 0;
v___x_722_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*1, v___x_721_);
v___x_723_ = l_Repr_addAppParen(v___x_722_, v_prec_709_);
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr___boxed(lean_object* v_x_732_, lean_object* v_prec_733_){
_start:
{
uint8_t v_x_113__boxed_734_; lean_object* v_res_735_; 
v_x_113__boxed_734_ = lean_unbox(v_x_732_);
v_res_735_ = lp_lean_x2dftml_LeanFtml_instReprDiscipline_repr(v_x_113__boxed_734_, v_prec_733_);
lean_dec(v_prec_733_);
return v_res_735_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_discipline(uint8_t v_x_738_){
_start:
{
switch(v_x_738_)
{
case 2:
{
uint8_t v___x_739_; 
v___x_739_ = 1;
return v___x_739_;
}
case 3:
{
uint8_t v___x_740_; 
v___x_740_ = 1;
return v___x_740_;
}
case 4:
{
uint8_t v___x_741_; 
v___x_741_ = 1;
return v___x_741_;
}
default: 
{
uint8_t v___x_742_; 
v___x_742_ = 0;
return v___x_742_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_discipline___boxed(lean_object* v_x_743_){
_start:
{
uint8_t v_x_33__boxed_744_; uint8_t v_res_745_; lean_object* v_r_746_; 
v_x_33__boxed_744_ = lean_unbox(v_x_743_);
v_res_745_ = lp_lean_x2dftml_LeanFtml_discipline(v_x_33__boxed_744_);
v_r_746_ = lean_box(v_res_745_);
return v_r_746_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanFirst(uint8_t v_b_747_, lean_object* v_x_748_){
_start:
{
if (lean_obj_tag(v_x_748_) == 0)
{
lean_object* v___x_749_; 
v___x_749_ = lean_box(0);
return v___x_749_;
}
else
{
lean_object* v_head_750_; lean_object* v_tail_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_808_; 
v_head_750_ = lean_ctor_get(v_x_748_, 0);
v_tail_751_ = lean_ctor_get(v_x_748_, 1);
v_isSharedCheck_808_ = !lean_is_exclusive(v_x_748_);
if (v_isSharedCheck_808_ == 0)
{
v___x_753_ = v_x_748_;
v_isShared_754_ = v_isSharedCheck_808_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_tail_751_);
lean_inc(v_head_750_);
lean_dec(v_x_748_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_808_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
if (lean_obj_tag(v_head_750_) == 1)
{
uint8_t v_a_777_; uint8_t v_a_778_; lean_object* v_a_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; uint8_t v___x_784_; 
v_a_777_ = lean_ctor_get_uint8(v_head_750_, sizeof(void*)*1);
v_a_778_ = lean_ctor_get_uint8(v_head_750_, sizeof(void*)*1 + 1);
v_a_779_ = lean_ctor_get(v_head_750_, 0);
v___x_780_ = lean_box(v_a_777_);
v___x_781_ = lean_obj_tag_nat(v___x_780_);
lean_dec(v___x_780_);
v___x_782_ = lean_box(v_b_747_);
v___x_783_ = lean_obj_tag_nat(v___x_782_);
lean_dec(v___x_782_);
v___x_784_ = lean_nat_dec_eq(v___x_781_, v___x_783_);
if (v___x_784_ == 0)
{
goto v___jp_755_;
}
else
{
uint8_t v___x_785_; 
v___x_785_ = lp_lean_x2dftml_LeanFtml_accepts(v_b_747_, v_a_778_, v_a_779_);
if (v___x_785_ == 0)
{
goto v___jp_755_;
}
else
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
lean_dec_ref_known(v_head_750_, 1);
lean_del_object(v___x_753_);
v___x_786_ = lean_box(0);
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
lean_ctor_set(v___x_787_, 1, v_tail_751_);
v___x_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
return v___x_788_;
}
}
}
else
{
lean_object* v___x_789_; 
lean_del_object(v___x_753_);
v___x_789_ = lp_lean_x2dftml_LeanFtml_scanFirst(v_b_747_, v_tail_751_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_dec(v_head_750_);
return v___x_789_;
}
else
{
lean_object* v_val_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_807_; 
v_val_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_807_ == 0)
{
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_807_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_val_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_807_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v_fst_794_; lean_object* v_snd_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_806_; 
v_fst_794_ = lean_ctor_get(v_val_790_, 0);
v_snd_795_ = lean_ctor_get(v_val_790_, 1);
v_isSharedCheck_806_ = !lean_is_exclusive(v_val_790_);
if (v_isSharedCheck_806_ == 0)
{
v___x_797_ = v_val_790_;
v_isShared_798_ = v_isSharedCheck_806_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_snd_795_);
lean_inc(v_fst_794_);
lean_dec(v_val_790_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_806_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_799_; lean_object* v___x_801_; 
v___x_799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_799_, 0, v_head_750_);
lean_ctor_set(v___x_799_, 1, v_fst_794_);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 0, v___x_799_);
v___x_801_ = v___x_797_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_snd_795_);
v___x_801_ = v_reuseFailAlloc_805_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_803_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_801_);
v___x_803_ = v___x_792_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
}
v___jp_755_:
{
lean_object* v___x_756_; 
v___x_756_ = lp_lean_x2dftml_LeanFtml_scanFirst(v_b_747_, v_tail_751_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_del_object(v___x_753_);
lean_dec(v_head_750_);
return v___x_756_;
}
else
{
lean_object* v_val_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_776_; 
v_val_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_776_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_776_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_val_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_776_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v_fst_761_; lean_object* v_snd_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_775_; 
v_fst_761_ = lean_ctor_get(v_val_757_, 0);
v_snd_762_ = lean_ctor_get(v_val_757_, 1);
v_isSharedCheck_775_ = !lean_is_exclusive(v_val_757_);
if (v_isSharedCheck_775_ == 0)
{
v___x_764_ = v_val_757_;
v_isShared_765_ = v_isSharedCheck_775_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_snd_762_);
lean_inc(v_fst_761_);
lean_dec(v_val_757_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_775_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 1, v_fst_761_);
v___x_767_ = v___x_753_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_head_750_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_fst_761_);
v___x_767_ = v_reuseFailAlloc_774_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_769_; 
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 0, v___x_767_);
v___x_769_ = v___x_764_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_snd_762_);
v___x_769_ = v_reuseFailAlloc_773_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v___x_769_);
v___x_771_ = v___x_759_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanFirst___boxed(lean_object* v_b_809_, lean_object* v_x_810_){
_start:
{
uint8_t v_b_boxed_811_; lean_object* v_res_812_; 
v_b_boxed_811_ = lean_unbox(v_b_809_);
v_res_812_ = lp_lean_x2dftml_LeanFtml_scanFirst(v_b_boxed_811_, v_x_810_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanRecF(lean_object* v_x_813_, uint8_t v_x_814_, lean_object* v_x_815_){
_start:
{
lean_object* v_zero_816_; uint8_t v_isZero_817_; 
v_zero_816_ = lean_unsigned_to_nat(0u);
v_isZero_817_ = lean_nat_dec_eq(v_x_813_, v_zero_816_);
if (v_isZero_817_ == 1)
{
lean_object* v___x_818_; 
lean_dec(v_x_815_);
v___x_818_ = lean_box(0);
return v___x_818_;
}
else
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v___x_819_; 
v___x_819_ = lean_box(0);
return v___x_819_;
}
else
{
lean_object* v_head_820_; lean_object* v_tail_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_969_; 
v_head_820_ = lean_ctor_get(v_x_815_, 0);
v_tail_821_ = lean_ctor_get(v_x_815_, 1);
v_isSharedCheck_969_ = !lean_is_exclusive(v_x_815_);
if (v_isSharedCheck_969_ == 0)
{
v___x_823_ = v_x_815_;
v_isShared_824_ = v_isSharedCheck_969_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_tail_821_);
lean_inc(v_head_820_);
lean_dec(v_x_815_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_969_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v_one_825_; lean_object* v_n_826_; 
v_one_825_ = lean_unsigned_to_nat(1u);
v_n_826_ = lean_nat_sub(v_x_813_, v_one_825_);
switch(lean_obj_tag(v_head_820_))
{
case 0:
{
uint8_t v_a_869_; uint8_t v_a_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; uint8_t v___x_875_; 
lean_del_object(v___x_823_);
v_a_869_ = lean_ctor_get_uint8(v_head_820_, 0);
v_a_870_ = lean_ctor_get_uint8(v_head_820_, 1);
v___x_871_ = lean_box(v_a_869_);
v___x_872_ = lean_obj_tag_nat(v___x_871_);
lean_dec(v___x_871_);
v___x_873_ = lean_box(v_x_814_);
v___x_874_ = lean_obj_tag_nat(v___x_873_);
lean_dec(v___x_873_);
v___x_875_ = lean_nat_dec_eq(v___x_872_, v___x_874_);
if (v___x_875_ == 0)
{
goto v___jp_849_;
}
else
{
if (v_a_870_ == 0)
{
goto v___jp_849_;
}
else
{
lean_object* v___x_876_; 
v___x_876_ = lp_lean_x2dftml_LeanFtml_scanRecF(v_n_826_, v_x_814_, v_tail_821_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_dec_ref_known(v_head_820_, 0);
lean_dec(v_n_826_);
return v___x_876_;
}
else
{
lean_object* v_val_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_936_; 
v_val_877_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_936_ == 0)
{
v___x_879_ = v___x_876_;
v_isShared_880_ = v_isSharedCheck_936_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_val_877_);
lean_dec(v___x_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_936_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v_snd_881_; lean_object* v_fst_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_935_; 
v_snd_881_ = lean_ctor_get(v_val_877_, 1);
v_fst_882_ = lean_ctor_get(v_val_877_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v_val_877_);
if (v_isSharedCheck_935_ == 0)
{
v___x_884_ = v_val_877_;
v_isShared_885_ = v_isSharedCheck_935_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_snd_881_);
lean_inc(v_fst_882_);
lean_dec(v_val_877_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_935_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v_fst_886_; lean_object* v_snd_887_; uint8_t v___x_888_; 
v_fst_886_ = lean_ctor_get(v_snd_881_, 0);
v_snd_887_ = lean_ctor_get(v_snd_881_, 1);
v___x_888_ = lp_lean_x2dftml_LeanFtml_rejectsNested(v_x_814_, v_snd_887_, v_fst_886_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; 
lean_inc(v_fst_886_);
v___x_889_ = lp_lean_x2dftml_LeanFtml_scanRecF(v_n_826_, v_x_814_, v_fst_886_);
lean_dec(v_n_826_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v___x_890_; lean_object* v___x_892_; 
v___x_890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_890_, 0, v_head_820_);
lean_ctor_set(v___x_890_, 1, v_fst_882_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_890_);
v___x_892_ = v___x_884_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_896_, 1, v_snd_881_);
v___x_892_ = v_reuseFailAlloc_896_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
lean_object* v___x_894_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_892_);
v___x_894_ = v___x_879_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
else
{
lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_925_; 
lean_inc(v_snd_887_);
lean_del_object(v___x_884_);
lean_del_object(v___x_879_);
v_isSharedCheck_925_ = !lean_is_exclusive(v_snd_881_);
if (v_isSharedCheck_925_ == 0)
{
lean_object* v_unused_926_; lean_object* v_unused_927_; 
v_unused_926_ = lean_ctor_get(v_snd_881_, 1);
lean_dec(v_unused_926_);
v_unused_927_ = lean_ctor_get(v_snd_881_, 0);
lean_dec(v_unused_927_);
v___x_898_ = v_snd_881_;
v_isShared_899_ = v_isSharedCheck_925_;
goto v_resetjp_897_;
}
else
{
lean_dec(v_snd_881_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_925_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v_val_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_924_; 
v_val_900_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_924_ == 0)
{
v___x_902_ = v___x_889_;
v_isShared_903_ = v_isSharedCheck_924_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_val_900_);
lean_dec(v___x_889_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_924_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v_fst_904_; lean_object* v_snd_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_923_; 
v_fst_904_ = lean_ctor_get(v_val_900_, 0);
v_snd_905_ = lean_ctor_get(v_val_900_, 1);
v_isSharedCheck_923_ = !lean_is_exclusive(v_val_900_);
if (v_isSharedCheck_923_ == 0)
{
v___x_907_ = v_val_900_;
v_isShared_908_ = v_isSharedCheck_923_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_snd_905_);
lean_inc(v_fst_904_);
lean_dec(v_val_900_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_923_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_909_ = lp_lean_x2dftml_LeanFtml_eraseBlankItem(v_snd_887_);
v___x_910_ = lean_box(0);
if (v_isShared_899_ == 0)
{
lean_ctor_set_tag(v___x_898_, 1);
lean_ctor_set(v___x_898_, 1, v___x_910_);
lean_ctor_set(v___x_898_, 0, v___x_909_);
v___x_912_ = v___x_898_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_909_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v___x_910_);
v___x_912_ = v_reuseFailAlloc_922_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
v___x_913_ = l_List_appendTR___redArg(v_fst_882_, v___x_912_);
v___x_914_ = l_List_appendTR___redArg(v___x_913_, v_fst_904_);
v___x_915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_915_, 0, v_head_820_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 0, v___x_915_);
v___x_917_ = v___x_907_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_915_);
lean_ctor_set(v_reuseFailAlloc_921_, 1, v_snd_905_);
v___x_917_ = v_reuseFailAlloc_921_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
lean_object* v___x_919_; 
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 0, v___x_917_);
v___x_919_ = v___x_902_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_917_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
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
lean_object* v___x_928_; lean_object* v___x_930_; 
lean_dec(v_n_826_);
v___x_928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_928_, 0, v_head_820_);
lean_ctor_set(v___x_928_, 1, v_fst_882_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_928_);
v___x_930_ = v___x_884_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_928_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_snd_881_);
v___x_930_ = v_reuseFailAlloc_934_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_932_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_930_);
v___x_932_ = v___x_879_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
}
}
}
}
case 1:
{
uint8_t v_a_937_; uint8_t v_a_938_; lean_object* v_a_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
v_a_937_ = lean_ctor_get_uint8(v_head_820_, sizeof(void*)*1);
v_a_938_ = lean_ctor_get_uint8(v_head_820_, sizeof(void*)*1 + 1);
v_a_939_ = lean_ctor_get(v_head_820_, 0);
v___x_940_ = lean_box(v_a_937_);
v___x_941_ = lean_obj_tag_nat(v___x_940_);
lean_dec(v___x_940_);
v___x_942_ = lean_box(v_x_814_);
v___x_943_ = lean_obj_tag_nat(v___x_942_);
lean_dec(v___x_942_);
v___x_944_ = lean_nat_dec_eq(v___x_941_, v___x_943_);
if (v___x_944_ == 0)
{
goto v___jp_827_;
}
else
{
uint8_t v___x_945_; 
v___x_945_ = lp_lean_x2dftml_LeanFtml_accepts(v_x_814_, v_a_938_, v_a_939_);
if (v___x_945_ == 0)
{
goto v___jp_827_;
}
else
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
lean_dec(v_n_826_);
lean_del_object(v___x_823_);
v___x_946_ = lean_box(0);
v___x_947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_947_, 0, v_tail_821_);
lean_ctor_set(v___x_947_, 1, v_head_820_);
v___x_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
}
}
default: 
{
lean_object* v___x_950_; 
lean_del_object(v___x_823_);
v___x_950_ = lp_lean_x2dftml_LeanFtml_scanRecF(v_n_826_, v_x_814_, v_tail_821_);
lean_dec(v_n_826_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_dec_ref_known(v_head_820_, 1);
return v___x_950_;
}
else
{
lean_object* v_val_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_968_; 
v_val_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_968_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_968_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_val_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_968_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v_fst_955_; lean_object* v_snd_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_967_; 
v_fst_955_ = lean_ctor_get(v_val_951_, 0);
v_snd_956_ = lean_ctor_get(v_val_951_, 1);
v_isSharedCheck_967_ = !lean_is_exclusive(v_val_951_);
if (v_isSharedCheck_967_ == 0)
{
v___x_958_ = v_val_951_;
v_isShared_959_ = v_isSharedCheck_967_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_snd_956_);
lean_inc(v_fst_955_);
lean_dec(v_val_951_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_967_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_960_, 0, v_head_820_);
lean_ctor_set(v___x_960_, 1, v_fst_955_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_960_);
v___x_962_ = v___x_958_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v_snd_956_);
v___x_962_ = v_reuseFailAlloc_966_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
lean_object* v___x_964_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_962_);
v___x_964_ = v___x_953_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v___x_962_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
}
}
}
v___jp_827_:
{
lean_object* v___x_828_; 
v___x_828_ = lp_lean_x2dftml_LeanFtml_scanRecF(v_n_826_, v_x_814_, v_tail_821_);
lean_dec(v_n_826_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_del_object(v___x_823_);
lean_dec(v_head_820_);
return v___x_828_;
}
else
{
lean_object* v_val_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_848_; 
v_val_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_848_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_848_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_val_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_848_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v_fst_833_; lean_object* v_snd_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_847_; 
v_fst_833_ = lean_ctor_get(v_val_829_, 0);
v_snd_834_ = lean_ctor_get(v_val_829_, 1);
v_isSharedCheck_847_ = !lean_is_exclusive(v_val_829_);
if (v_isSharedCheck_847_ == 0)
{
v___x_836_ = v_val_829_;
v_isShared_837_ = v_isSharedCheck_847_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_snd_834_);
lean_inc(v_fst_833_);
lean_dec(v_val_829_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_847_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 1, v_fst_833_);
v___x_839_ = v___x_823_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_head_820_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_fst_833_);
v___x_839_ = v_reuseFailAlloc_846_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_841_; 
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 0, v___x_839_);
v___x_841_ = v___x_836_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_839_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_snd_834_);
v___x_841_ = v_reuseFailAlloc_845_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
lean_object* v___x_843_; 
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 0, v___x_841_);
v___x_843_ = v___x_831_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
}
}
}
v___jp_849_:
{
lean_object* v___x_850_; 
v___x_850_ = lp_lean_x2dftml_LeanFtml_scanRecF(v_n_826_, v_x_814_, v_tail_821_);
lean_dec(v_n_826_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_dec(v_head_820_);
return v___x_850_;
}
else
{
lean_object* v_val_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_868_; 
v_val_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_868_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_868_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_val_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_868_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v_fst_855_; lean_object* v_snd_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_867_; 
v_fst_855_ = lean_ctor_get(v_val_851_, 0);
v_snd_856_ = lean_ctor_get(v_val_851_, 1);
v_isSharedCheck_867_ = !lean_is_exclusive(v_val_851_);
if (v_isSharedCheck_867_ == 0)
{
v___x_858_ = v_val_851_;
v_isShared_859_ = v_isSharedCheck_867_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_snd_856_);
lean_inc(v_fst_855_);
lean_dec(v_val_851_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_867_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_860_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_860_, 0, v_head_820_);
lean_ctor_set(v___x_860_, 1, v_fst_855_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 0, v___x_860_);
v___x_862_ = v___x_858_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_860_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_snd_856_);
v___x_862_ = v_reuseFailAlloc_866_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
lean_object* v___x_864_; 
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_862_);
v___x_864_ = v___x_853_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanRecF___boxed(lean_object* v_x_970_, lean_object* v_x_971_, lean_object* v_x_972_){
_start:
{
uint8_t v_x_793__boxed_973_; lean_object* v_res_974_; 
v_x_793__boxed_973_ = lean_unbox(v_x_971_);
v_res_974_ = lp_lean_x2dftml_LeanFtml_scanRecF(v_x_970_, v_x_793__boxed_973_, v_x_972_);
lean_dec(v_x_970_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanRec(uint8_t v_b_975_, lean_object* v_xs_976_){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_977_ = l_List_lengthTR___redArg(v_xs_976_);
v___x_978_ = lean_unsigned_to_nat(1u);
v___x_979_ = lean_nat_add(v___x_977_, v___x_978_);
lean_dec(v___x_977_);
v___x_980_ = lp_lean_x2dftml_LeanFtml_scanRecF(v___x_979_, v_b_975_, v_xs_976_);
lean_dec(v___x_979_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v___x_981_; 
v___x_981_ = lean_box(0);
return v___x_981_;
}
else
{
lean_object* v_val_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_1000_; 
v_val_982_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_984_ = v___x_980_;
v_isShared_985_ = v_isSharedCheck_1000_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_val_982_);
lean_dec(v___x_980_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_1000_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v_snd_986_; lean_object* v_fst_987_; lean_object* v_fst_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_998_; 
v_snd_986_ = lean_ctor_get(v_val_982_, 1);
lean_inc(v_snd_986_);
v_fst_987_ = lean_ctor_get(v_val_982_, 0);
lean_inc(v_fst_987_);
lean_dec(v_val_982_);
v_fst_988_ = lean_ctor_get(v_snd_986_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v_snd_986_);
if (v_isSharedCheck_998_ == 0)
{
lean_object* v_unused_999_; 
v_unused_999_ = lean_ctor_get(v_snd_986_, 1);
lean_dec(v_unused_999_);
v___x_990_ = v_snd_986_;
v_isShared_991_ = v_isSharedCheck_998_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_fst_988_);
lean_dec(v_snd_986_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_998_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 1, v_fst_988_);
lean_ctor_set(v___x_990_, 0, v_fst_987_);
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_fst_987_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_fst_988_);
v___x_993_ = v_reuseFailAlloc_997_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
lean_object* v___x_995_; 
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 0, v___x_993_);
v___x_995_ = v___x_984_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanRec___boxed(lean_object* v_b_1001_, lean_object* v_xs_1002_){
_start:
{
uint8_t v_b_boxed_1003_; lean_object* v_res_1004_; 
v_b_boxed_1003_ = lean_unbox(v_b_1001_);
v_res_1004_ = lp_lean_x2dftml_LeanFtml_scanRec(v_b_boxed_1003_, v_xs_1002_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scan(uint8_t v_b_1005_, lean_object* v_xs_1006_){
_start:
{
uint8_t v___x_1007_; 
v___x_1007_ = lp_lean_x2dftml_LeanFtml_discipline(v_b_1005_);
if (v___x_1007_ == 0)
{
lean_object* v___x_1008_; 
v___x_1008_ = lp_lean_x2dftml_LeanFtml_scanRec(v_b_1005_, v_xs_1006_);
return v___x_1008_;
}
else
{
lean_object* v___x_1009_; 
v___x_1009_ = lp_lean_x2dftml_LeanFtml_scanFirst(v_b_1005_, v_xs_1006_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scan___boxed(lean_object* v_b_1010_, lean_object* v_xs_1011_){
_start:
{
uint8_t v_b_boxed_1012_; lean_object* v_res_1013_; 
v_b_boxed_1012_ = lean_unbox(v_b_1010_);
v_res_1013_ = lp_lean_x2dftml_LeanFtml_scan(v_b_boxed_1012_, v_xs_1011_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_shape(uint8_t v_b_1025_){
_start:
{
lean_object* v___x_1026_; uint8_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1026_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_shape___closed__0));
v___x_1027_ = 1;
v___x_1028_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1028_, 0, v_b_1025_);
lean_ctor_set_uint8(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_shape___closed__1));
v___x_1030_ = lean_box(0);
v___x_1031_ = lean_alloc_ctor(1, 1, 2);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set_uint8(v___x_1031_, sizeof(void*)*1, v_b_1025_);
lean_ctor_set_uint8(v___x_1031_, sizeof(void*)*1 + 1, v___x_1027_);
v___x_1032_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_shape___closed__2));
v___x_1033_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_shape___closed__4));
lean_inc_ref(v___x_1031_);
v___x_1034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1031_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1032_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1031_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1029_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1028_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1026_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_shape___boxed(lean_object* v_b_1040_){
_start:
{
uint8_t v_b_boxed_1041_; lean_object* v_res_1042_; 
v_b_boxed_1041_ = lean_unbox(v_b_1040_);
v_res_1042_ = lp_lean_x2dftml_LeanFtml_shape(v_b_boxed_1041_);
return v_res_1042_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_depthOf_spec__0(lean_object* v_a_1043_, lean_object* v_x_1044_){
_start:
{
if (lean_obj_tag(v_x_1044_) == 0)
{
uint8_t v___x_1045_; 
lean_dec_ref(v_a_1043_);
v___x_1045_ = 0;
return v___x_1045_;
}
else
{
lean_object* v_head_1046_; lean_object* v_tail_1047_; uint8_t v___x_1048_; 
v_head_1046_ = lean_ctor_get(v_x_1044_, 0);
lean_inc(v_head_1046_);
v_tail_1047_ = lean_ctor_get(v_x_1044_, 1);
lean_inc(v_tail_1047_);
lean_dec_ref_known(v_x_1044_, 2);
lean_inc_ref(v_a_1043_);
v___x_1048_ = lp_lean_x2dftml_LeanFtml_instDecidableEqItem_decEq(v_a_1043_, v_head_1046_);
if (v___x_1048_ == 0)
{
v_x_1044_ = v_tail_1047_;
goto _start;
}
else
{
lean_dec(v_tail_1047_);
lean_dec_ref(v_a_1043_);
return v___x_1048_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_depthOf_spec__0___boxed(lean_object* v_a_1050_, lean_object* v_x_1051_){
_start:
{
uint8_t v_res_1052_; lean_object* v_r_1053_; 
v_res_1052_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_depthOf_spec__0(v_a_1050_, v_x_1051_);
v_r_1053_ = lean_box(v_res_1052_);
return v_r_1053_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_depthOf(lean_object* v_body_1054_, lean_object* v_k_1055_){
_start:
{
lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1056_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1056_, 0, v_k_1055_);
v___x_1057_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_depthOf_spec__0(v___x_1056_, v_body_1054_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; 
v___x_1058_ = lean_unsigned_to_nat(0u);
return v___x_1058_;
}
else
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_unsigned_to_nat(1u);
return v___x_1059_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_profile_spec__0(lean_object* v_fst_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_){
_start:
{
if (lean_obj_tag(v_a_1061_) == 0)
{
lean_object* v___x_1063_; 
lean_dec(v_fst_1060_);
v___x_1063_ = l_List_reverse___redArg(v_a_1062_);
return v___x_1063_;
}
else
{
lean_object* v_head_1064_; lean_object* v_tail_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1074_; 
v_head_1064_ = lean_ctor_get(v_a_1061_, 0);
v_tail_1065_ = lean_ctor_get(v_a_1061_, 1);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_a_1061_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1067_ = v_a_1061_;
v_isShared_1068_ = v_isSharedCheck_1074_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_tail_1065_);
lean_inc(v_head_1064_);
lean_dec(v_a_1061_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1074_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1071_; 
lean_inc(v_fst_1060_);
v___x_1069_ = lp_lean_x2dftml_LeanFtml_depthOf(v_fst_1060_, v_head_1064_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 1, v_a_1062_);
lean_ctor_set(v___x_1067_, 0, v___x_1069_);
v___x_1071_ = v___x_1067_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_a_1062_);
v___x_1071_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
v_a_1061_ = v_tail_1065_;
v_a_1062_ = v___x_1071_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_profile(uint8_t v_b_1087_){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = lp_lean_x2dftml_LeanFtml_shape(v_b_1087_);
v___x_1089_ = lp_lean_x2dftml_LeanFtml_scan(v_b_1087_, v___x_1088_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_box(0);
return v___x_1090_;
}
else
{
lean_object* v_val_1091_; lean_object* v_fst_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_val_1091_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_val_1091_);
lean_dec_ref_known(v___x_1089_, 1);
v_fst_1092_ = lean_ctor_get(v_val_1091_, 0);
lean_inc(v_fst_1092_);
lean_dec(v_val_1091_);
v___x_1093_ = lean_box(0);
v___x_1094_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_profile___closed__3));
v___x_1095_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_profile_spec__0(v_fst_1092_, v___x_1094_, v___x_1093_);
return v___x_1095_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_profile___boxed(lean_object* v_b_1096_){
_start:
{
uint8_t v_b_boxed_1097_; lean_object* v_res_1098_; 
v_b_boxed_1097_ = lean_unbox(v_b_1096_);
v_res_1098_ = lp_lean_x2dftml_LeanFtml_profile(v_b_boxed_1097_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_instReprItem_repr_match__1_splitter___redArg(lean_object* v_x_1099_, lean_object* v_h__1_1100_, lean_object* v_h__2_1101_, lean_object* v_h__3_1102_){
_start:
{
switch(lean_obj_tag(v_x_1099_))
{
case 0:
{
uint8_t v_a_1103_; uint8_t v_a_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec(v_h__3_1102_);
lean_dec(v_h__2_1101_);
v_a_1103_ = lean_ctor_get_uint8(v_x_1099_, 0);
v_a_1104_ = lean_ctor_get_uint8(v_x_1099_, 1);
lean_dec_ref_known(v_x_1099_, 0);
v___x_1105_ = lean_box(v_a_1103_);
v___x_1106_ = lean_box(v_a_1104_);
v___x_1107_ = lean_apply_2(v_h__1_1100_, v___x_1105_, v___x_1106_);
return v___x_1107_;
}
case 1:
{
uint8_t v_a_1108_; uint8_t v_a_1109_; lean_object* v_a_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
lean_dec(v_h__3_1102_);
lean_dec(v_h__1_1100_);
v_a_1108_ = lean_ctor_get_uint8(v_x_1099_, sizeof(void*)*1);
v_a_1109_ = lean_ctor_get_uint8(v_x_1099_, sizeof(void*)*1 + 1);
v_a_1110_ = lean_ctor_get(v_x_1099_, 0);
lean_inc(v_a_1110_);
lean_dec_ref_known(v_x_1099_, 1);
v___x_1111_ = lean_box(v_a_1108_);
v___x_1112_ = lean_box(v_a_1109_);
v___x_1113_ = lean_apply_3(v_h__2_1101_, v___x_1111_, v___x_1112_, v_a_1110_);
return v___x_1113_;
}
default: 
{
lean_object* v_a_1114_; lean_object* v___x_1115_; 
lean_dec(v_h__2_1101_);
lean_dec(v_h__1_1100_);
v_a_1114_ = lean_ctor_get(v_x_1099_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v_x_1099_, 1);
v___x_1115_ = lean_apply_1(v_h__3_1102_, v_a_1114_);
return v___x_1115_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_BlockEnd_0__LeanFtml_instReprItem_repr_match__1_splitter(lean_object* v_motive_1116_, lean_object* v_x_1117_, lean_object* v_h__1_1118_, lean_object* v_h__2_1119_, lean_object* v_h__3_1120_){
_start:
{
switch(lean_obj_tag(v_x_1117_))
{
case 0:
{
uint8_t v_a_1121_; uint8_t v_a_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_dec(v_h__3_1120_);
lean_dec(v_h__2_1119_);
v_a_1121_ = lean_ctor_get_uint8(v_x_1117_, 0);
v_a_1122_ = lean_ctor_get_uint8(v_x_1117_, 1);
lean_dec_ref_known(v_x_1117_, 0);
v___x_1123_ = lean_box(v_a_1121_);
v___x_1124_ = lean_box(v_a_1122_);
v___x_1125_ = lean_apply_2(v_h__1_1118_, v___x_1123_, v___x_1124_);
return v___x_1125_;
}
case 1:
{
uint8_t v_a_1126_; uint8_t v_a_1127_; lean_object* v_a_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_dec(v_h__3_1120_);
lean_dec(v_h__1_1118_);
v_a_1126_ = lean_ctor_get_uint8(v_x_1117_, sizeof(void*)*1);
v_a_1127_ = lean_ctor_get_uint8(v_x_1117_, sizeof(void*)*1 + 1);
v_a_1128_ = lean_ctor_get(v_x_1117_, 0);
lean_inc(v_a_1128_);
lean_dec_ref_known(v_x_1117_, 1);
v___x_1129_ = lean_box(v_a_1126_);
v___x_1130_ = lean_box(v_a_1127_);
v___x_1131_ = lean_apply_3(v_h__2_1119_, v___x_1129_, v___x_1130_, v_a_1128_);
return v___x_1131_;
}
default: 
{
lean_object* v_a_1132_; lean_object* v___x_1133_; 
lean_dec(v_h__2_1119_);
lean_dec(v_h__1_1118_);
v_a_1132_ = lean_ctor_get(v_x_1117_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v_x_1117_, 1);
v___x_1133_ = lean_apply_1(v_h__3_1120_, v_a_1132_);
return v___x_1133_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_BlockEnd(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_instInhabitedBlockType_default = _init_lp_lean_x2dftml_LeanFtml_instInhabitedBlockType_default();
lp_lean_x2dftml_LeanFtml_instInhabitedBlockType = _init_lp_lean_x2dftml_LeanFtml_instInhabitedBlockType();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
