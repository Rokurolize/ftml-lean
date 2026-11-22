// Lean compiler output
// Module: LeanFtml.ParagraphStack
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
lean_object* l_Char_quote(uint32_t);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_instDecidableEqChar___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_text_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_raw_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_raw_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_lineBreak_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_lineBreak_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_hr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_hr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_code_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_code_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_list_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_list_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_html_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_html_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_image_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_image_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_bold_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_bold_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_div_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_div_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqAElem_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqAElem_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqAElem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqAElem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0___lam__0(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__2_value;
static const lean_string_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__5_value;
static const lean_string_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__7;
static lean_once_cell_t lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.AElem.lineBreak"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "LeanFtml.AElem.hr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.AElem.text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LeanFtml.AElem.raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.AElem.code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__14_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.AElem.list"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__16_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__17_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.AElem.html"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__19_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__20_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.AElem.image"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__23_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.AElem.bold"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__25_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__26_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LeanFtml.AElem.div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__28_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__29_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprAElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprAElem_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprAElem___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instBEqAElem_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instBEqAElem_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instBEqAElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instBEqAElem_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instBEqAElem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instBEqAElem___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instBEqAElem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instBEqAElem___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_aSafe(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_aSafe___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_bare_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_bare_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_para_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_para_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqOElem_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqOElem_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqOElem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqOElem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.OElem.bare"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.OElem.para"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprOElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprOElem_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprOElem___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqOElem_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqOElem_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instBEqOElem_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instBEqOElem_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instBEqOElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instBEqOElem_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instBEqOElem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instBEqOElem___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instBEqOElem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instBEqOElem___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqSt_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqSt_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqSt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqSt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "current"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "finished"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "unwrapped"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "discardedControl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__16;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lineStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__18_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "breakSeen"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__20_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__21_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__23;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__25_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprSt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprSt_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprSt = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprSt___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_initSt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_initSt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_initSt___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_initSt = (const lean_object*)&lp_lean_x2dftml_LeanFtml_initSt___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sp___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sp___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sp___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sp;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isSp(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isSp___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimRev(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimRev___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimSpaces(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ParagraphStack_0__LeanFtml_isSp_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ParagraphStack_0__LeanFtml_isSp_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildParagraph(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_endParagraph_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_endParagraph(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_dropsSpace(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropsSpace___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_dropCond(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropCond___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushElement(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushElement___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropLeadingBreaks(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropLeadingBreaks___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushSafeElements(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_onlyWhitespace_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_onlyWhitespace_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_onlyWhitespace(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_onlyWhitespace___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_endParagraphAtBreak(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intoElements(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ParagraphStack_0__LeanFtml_endParagraph_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ParagraphStack_0__LeanFtml_endParagraph_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_lean_x2dftml_LeanFtml_AElem_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 0:
{
lean_object* v_a_7_; lean_object* v___x_8_; 
v_a_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_a_7_);
return v___x_8_;
}
case 1:
{
lean_object* v_a_9_; lean_object* v___x_10_; 
v_a_9_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_9_);
lean_dec_ref_known(v_t_5_, 1);
v___x_10_ = lean_apply_1(v_k_6_, v_a_9_);
return v___x_10_;
}
case 4:
{
lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_11_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_11_);
lean_dec_ref_known(v_t_5_, 1);
v___x_12_ = lean_apply_1(v_k_6_, v_a_11_);
return v___x_12_;
}
case 5:
{
uint8_t v_a_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_a_13_ = lean_ctor_get_uint8(v_t_5_, 0);
lean_dec_ref_known(v_t_5_, 0);
v___x_14_ = lean_box(v_a_13_);
v___x_15_ = lean_apply_1(v_k_6_, v___x_14_);
return v___x_15_;
}
case 6:
{
lean_object* v_a_16_; lean_object* v___x_17_; 
v_a_16_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_16_);
lean_dec_ref_known(v_t_5_, 1);
v___x_17_ = lean_apply_1(v_k_6_, v_a_16_);
return v___x_17_;
}
case 7:
{
uint8_t v_a_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v_a_18_ = lean_ctor_get_uint8(v_t_5_, 0);
lean_dec_ref_known(v_t_5_, 0);
v___x_19_ = lean_box(v_a_18_);
v___x_20_ = lean_apply_1(v_k_6_, v___x_19_);
return v___x_20_;
}
case 8:
{
lean_object* v_a_21_; lean_object* v___x_22_; 
v_a_21_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_21_);
lean_dec_ref_known(v_t_5_, 1);
v___x_22_ = lean_apply_1(v_k_6_, v_a_21_);
return v___x_22_;
}
case 9:
{
lean_object* v_a_23_; lean_object* v___x_24_; 
v_a_23_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_23_);
lean_dec_ref_known(v_t_5_, 1);
v___x_24_ = lean_apply_1(v_k_6_, v_a_23_);
return v___x_24_;
}
default: 
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorElim(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_33_, v_h_34_, v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_text_elim___redArg(lean_object* v_t_37_, lean_object* v_text_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_37_, v_text_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_text_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_text_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_41_, v_text_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_raw_elim___redArg(lean_object* v_t_45_, lean_object* v_raw_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_45_, v_raw_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_raw_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_raw_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_49_, v_raw_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_lineBreak_elim___redArg(lean_object* v_t_53_, lean_object* v_lineBreak_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_53_, v_lineBreak_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_lineBreak_elim(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_lineBreak_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_57_, v_lineBreak_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_hr_elim___redArg(lean_object* v_t_61_, lean_object* v_hr_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_61_, v_hr_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_hr_elim(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_hr_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_65_, v_hr_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_code_elim___redArg(lean_object* v_t_69_, lean_object* v_code_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_69_, v_code_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_code_elim(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_code_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_73_, v_code_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_list_elim___redArg(lean_object* v_t_77_, lean_object* v_list_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_77_, v_list_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_list_elim(lean_object* v_motive_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_list_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_81_, v_list_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_html_elim___redArg(lean_object* v_t_85_, lean_object* v_html_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_85_, v_html_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_html_elim(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_html_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_89_, v_html_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_image_elim___redArg(lean_object* v_t_93_, lean_object* v_image_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_93_, v_image_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_image_elim(lean_object* v_motive_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_image_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_97_, v_image_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_bold_elim___redArg(lean_object* v_t_101_, lean_object* v_bold_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_101_, v_bold_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_bold_elim(lean_object* v_motive_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_bold_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_105_, v_bold_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_div_elim___redArg(lean_object* v_t_109_, lean_object* v_div_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_109_, v_div_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_AElem_div_elim(lean_object* v_motive_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_div_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lp_lean_x2dftml_LeanFtml_AElem_ctorElim___redArg(v_t_113_, v_div_115_);
return v___x_116_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqAElem_decEq(lean_object* v_x_117_, lean_object* v_x_118_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v_decide_121_; 
v___x_119_ = lean_obj_tag_nat(v_x_117_);
v___x_120_ = lean_obj_tag_nat(v_x_118_);
v_decide_121_ = lean_nat_dec_eq(v___x_119_, v___x_120_);
if (v_decide_121_ == 0)
{
lean_dec(v_x_118_);
lean_dec(v_x_117_);
return v_decide_121_;
}
else
{
switch(lean_obj_tag(v_x_117_))
{
case 0:
{
lean_object* v_a_122_; lean_object* v_a_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v_a_122_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_a_122_);
lean_dec_ref_known(v_x_117_, 1);
v_a_123_ = lean_ctor_get(v_x_118_, 0);
lean_inc(v_a_123_);
lean_dec(v_x_118_);
v___x_124_ = lean_alloc_closure((void*)(l_instDecidableEqChar___boxed), 2, 0);
v___x_125_ = l_instDecidableEqList___redArg(v___x_124_, v_a_122_, v_a_123_);
return v___x_125_;
}
case 1:
{
lean_object* v_a_126_; lean_object* v_a_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v_a_126_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_a_126_);
lean_dec_ref_known(v_x_117_, 1);
v_a_127_ = lean_ctor_get(v_x_118_, 0);
lean_inc(v_a_127_);
lean_dec(v_x_118_);
v___x_128_ = lean_alloc_closure((void*)(l_instDecidableEqChar___boxed), 2, 0);
v___x_129_ = l_instDecidableEqList___redArg(v___x_128_, v_a_126_, v_a_127_);
return v___x_129_;
}
case 4:
{
lean_object* v_a_130_; lean_object* v_a_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v_a_130_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_a_130_);
lean_dec_ref_known(v_x_117_, 1);
v_a_131_ = lean_ctor_get(v_x_118_, 0);
lean_inc(v_a_131_);
lean_dec(v_x_118_);
v___x_132_ = lean_alloc_closure((void*)(l_instDecidableEqChar___boxed), 2, 0);
v___x_133_ = l_instDecidableEqList___redArg(v___x_132_, v_a_130_, v_a_131_);
return v___x_133_;
}
case 5:
{
uint8_t v_a_134_; 
v_a_134_ = lean_ctor_get_uint8(v_x_118_, 0);
lean_dec(v_x_118_);
if (v_a_134_ == 0)
{
uint8_t v_a_135_; 
v_a_135_ = lean_ctor_get_uint8(v_x_117_, 0);
lean_dec_ref_known(v_x_117_, 0);
if (v_a_135_ == 0)
{
return v_decide_121_;
}
else
{
return v_a_134_;
}
}
else
{
uint8_t v_a_136_; 
v_a_136_ = lean_ctor_get_uint8(v_x_117_, 0);
lean_dec_ref_known(v_x_117_, 0);
return v_a_136_;
}
}
case 6:
{
lean_object* v_a_137_; lean_object* v_a_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_a_137_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_a_137_);
lean_dec_ref_known(v_x_117_, 1);
v_a_138_ = lean_ctor_get(v_x_118_, 0);
lean_inc(v_a_138_);
lean_dec(v_x_118_);
v___x_139_ = lean_alloc_closure((void*)(l_instDecidableEqChar___boxed), 2, 0);
v___x_140_ = l_instDecidableEqList___redArg(v___x_139_, v_a_137_, v_a_138_);
return v___x_140_;
}
case 7:
{
uint8_t v_a_141_; 
v_a_141_ = lean_ctor_get_uint8(v_x_118_, 0);
lean_dec(v_x_118_);
if (v_a_141_ == 0)
{
uint8_t v_a_142_; 
v_a_142_ = lean_ctor_get_uint8(v_x_117_, 0);
lean_dec_ref_known(v_x_117_, 0);
if (v_a_142_ == 0)
{
return v_decide_121_;
}
else
{
return v_a_141_;
}
}
else
{
uint8_t v_a_143_; 
v_a_143_ = lean_ctor_get_uint8(v_x_117_, 0);
lean_dec_ref_known(v_x_117_, 0);
return v_a_143_;
}
}
case 8:
{
lean_object* v_a_144_; lean_object* v_a_145_; uint8_t v___x_146_; 
v_a_144_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_a_144_);
lean_dec_ref_known(v_x_117_, 1);
v_a_145_ = lean_ctor_get(v_x_118_, 0);
lean_inc(v_a_145_);
lean_dec(v_x_118_);
v___x_146_ = lean_nat_dec_eq(v_a_144_, v_a_145_);
lean_dec(v_a_145_);
lean_dec(v_a_144_);
return v___x_146_;
}
case 9:
{
lean_object* v_a_147_; lean_object* v_a_148_; uint8_t v___x_149_; 
v_a_147_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_a_147_);
lean_dec_ref_known(v_x_117_, 1);
v_a_148_ = lean_ctor_get(v_x_118_, 0);
lean_inc(v_a_148_);
lean_dec(v_x_118_);
v___x_149_ = lean_nat_dec_eq(v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec(v_a_147_);
return v___x_149_;
}
default: 
{
lean_dec(v_x_118_);
lean_dec(v_x_117_);
return v_decide_121_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqAElem_decEq___boxed(lean_object* v_x_150_, lean_object* v_x_151_){
_start:
{
uint8_t v_res_152_; lean_object* v_r_153_; 
v_res_152_ = lp_lean_x2dftml_LeanFtml_instDecidableEqAElem_decEq(v_x_150_, v_x_151_);
v_r_153_ = lean_box(v_res_152_);
return v_r_153_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqAElem(lean_object* v_x_154_, lean_object* v_x_155_){
_start:
{
uint8_t v___x_156_; 
v___x_156_ = lp_lean_x2dftml_LeanFtml_instDecidableEqAElem_decEq(v_x_154_, v_x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqAElem___boxed(lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = lp_lean_x2dftml_LeanFtml_instDecidableEqAElem(v_x_157_, v_x_158_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0___lam__0(uint32_t v___y_161_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = l_Char_quote(v___y_161_);
v___x_163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0___lam__0___boxed(lean_object* v___y_164_){
_start:
{
uint32_t v___y_928__boxed_165_; lean_object* v_res_166_; 
v___y_928__boxed_165_ = lean_unbox_uint32(v___y_164_);
lean_dec(v___y_164_);
v_res_166_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0___lam__0(v___y_928__boxed_165_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_167_, lean_object* v_x_168_, lean_object* v_x_169_){
_start:
{
if (lean_obj_tag(v_x_169_) == 0)
{
lean_dec(v_x_167_);
return v_x_168_;
}
else
{
lean_object* v_head_170_; lean_object* v_tail_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_183_; 
v_head_170_ = lean_ctor_get(v_x_169_, 0);
v_tail_171_ = lean_ctor_get(v_x_169_, 1);
v_isSharedCheck_183_ = !lean_is_exclusive(v_x_169_);
if (v_isSharedCheck_183_ == 0)
{
v___x_173_ = v_x_169_;
v_isShared_174_ = v_isSharedCheck_183_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_tail_171_);
lean_inc(v_head_170_);
lean_dec(v_x_169_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_183_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
lean_inc(v_x_167_);
if (v_isShared_174_ == 0)
{
lean_ctor_set_tag(v___x_173_, 5);
lean_ctor_set(v___x_173_, 1, v_x_167_);
lean_ctor_set(v___x_173_, 0, v_x_168_);
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_x_168_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_x_167_);
v___x_176_ = v_reuseFailAlloc_182_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
uint32_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_177_ = lean_unbox_uint32(v_head_170_);
lean_dec(v_head_170_);
v___x_178_ = l_Char_quote(v___x_177_);
v___x_179_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
v___x_180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_176_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v_x_168_ = v___x_180_;
v_x_169_ = v_tail_171_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0_spec__1(lean_object* v_x_184_, lean_object* v_x_185_, lean_object* v_x_186_){
_start:
{
if (lean_obj_tag(v_x_186_) == 0)
{
lean_dec(v_x_184_);
return v_x_185_;
}
else
{
lean_object* v_head_187_; lean_object* v_tail_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_200_; 
v_head_187_ = lean_ctor_get(v_x_186_, 0);
v_tail_188_ = lean_ctor_get(v_x_186_, 1);
v_isSharedCheck_200_ = !lean_is_exclusive(v_x_186_);
if (v_isSharedCheck_200_ == 0)
{
v___x_190_ = v_x_186_;
v_isShared_191_ = v_isSharedCheck_200_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_tail_188_);
lean_inc(v_head_187_);
lean_dec(v_x_186_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_200_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
lean_inc(v_x_184_);
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 5);
lean_ctor_set(v___x_190_, 1, v_x_184_);
lean_ctor_set(v___x_190_, 0, v_x_185_);
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_x_185_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_x_184_);
v___x_193_ = v_reuseFailAlloc_199_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
uint32_t v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_194_ = lean_unbox_uint32(v_head_187_);
lean_dec(v_head_187_);
v___x_195_ = l_Char_quote(v___x_194_);
v___x_196_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
v___x_197_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_193_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
v___x_198_ = lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0_spec__1_spec__2(v_x_184_, v___x_197_, v_tail_188_);
return v___x_198_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0(lean_object* v_x_201_, lean_object* v_x_202_){
_start:
{
if (lean_obj_tag(v_x_201_) == 0)
{
lean_object* v___x_203_; 
lean_dec(v_x_202_);
v___x_203_ = lean_box(0);
return v___x_203_;
}
else
{
lean_object* v_tail_204_; 
v_tail_204_ = lean_ctor_get(v_x_201_, 1);
if (lean_obj_tag(v_tail_204_) == 0)
{
lean_object* v_head_205_; uint32_t v___x_206_; lean_object* v___x_207_; 
lean_dec(v_x_202_);
v_head_205_ = lean_ctor_get(v_x_201_, 0);
lean_inc(v_head_205_);
lean_dec_ref_known(v_x_201_, 2);
v___x_206_ = lean_unbox_uint32(v_head_205_);
lean_dec(v_head_205_);
v___x_207_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0___lam__0(v___x_206_);
return v___x_207_;
}
else
{
lean_object* v_head_208_; uint32_t v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
lean_inc(v_tail_204_);
v_head_208_ = lean_ctor_get(v_x_201_, 0);
lean_inc(v_head_208_);
lean_dec_ref_known(v_x_201_, 2);
v___x_209_ = lean_unbox_uint32(v_head_208_);
lean_dec(v_head_208_);
v___x_210_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0___lam__0(v___x_209_);
v___x_211_ = lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0_spec__1(v_x_202_, v___x_210_, v_tail_204_);
return v___x_211_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__2));
v___x_224_ = lean_string_length(v___x_223_);
return v___x_224_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = lean_obj_once(&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__7, &lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__7_once, _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__7);
v___x_226_ = lean_nat_to_int(v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg(lean_object* v_a_231_){
_start:
{
if (lean_obj_tag(v_a_231_) == 0)
{
lean_object* v___x_232_; 
v___x_232_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__1));
return v___x_232_;
}
else
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_233_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__5));
v___x_234_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0_spec__0(v_a_231_, v___x_233_);
v___x_235_ = lean_obj_once(&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8, &lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8_once, _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8);
v___x_236_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__9));
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v___x_234_);
v___x_238_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__10));
v___x_239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_235_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = l_Std_Format_fill(v___x_240_);
return v___x_241_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_unsigned_to_nat(2u);
v___x_255_ = lean_nat_to_int(v___x_254_);
return v___x_255_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_unsigned_to_nat(1u);
v___x_257_ = lean_nat_to_int(v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr(lean_object* v_x_300_, lean_object* v_prec_301_){
_start:
{
lean_object* v___y_303_; lean_object* v___y_310_; 
switch(lean_obj_tag(v_x_300_))
{
case 0:
{
lean_object* v_a_316_; lean_object* v___y_318_; lean_object* v___x_326_; uint8_t v___x_327_; 
v_a_316_ = lean_ctor_get(v_x_300_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v_x_300_, 1);
v___x_326_ = lean_unsigned_to_nat(1024u);
v___x_327_ = lean_nat_dec_le(v___x_326_, v_prec_301_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; 
v___x_328_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_318_ = v___x_328_;
goto v___jp_317_;
}
else
{
lean_object* v___x_329_; 
v___x_329_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_318_ = v___x_329_;
goto v___jp_317_;
}
v___jp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_319_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__6));
v___x_320_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg(v_a_316_);
v___x_321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
lean_inc(v___y_318_);
v___x_322_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_322_, 0, v___y_318_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = 0;
v___x_324_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_324_, 0, v___x_322_);
lean_ctor_set_uint8(v___x_324_, sizeof(void*)*1, v___x_323_);
v___x_325_ = l_Repr_addAppParen(v___x_324_, v_prec_301_);
return v___x_325_;
}
}
case 1:
{
lean_object* v_a_330_; lean_object* v___y_332_; lean_object* v___x_340_; uint8_t v___x_341_; 
v_a_330_ = lean_ctor_get(v_x_300_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v_x_300_, 1);
v___x_340_ = lean_unsigned_to_nat(1024u);
v___x_341_ = lean_nat_dec_le(v___x_340_, v_prec_301_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; 
v___x_342_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_332_ = v___x_342_;
goto v___jp_331_;
}
else
{
lean_object* v___x_343_; 
v___x_343_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_332_ = v___x_343_;
goto v___jp_331_;
}
v___jp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_333_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__11));
v___x_334_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg(v_a_330_);
v___x_335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
lean_inc(v___y_332_);
v___x_336_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_336_, 0, v___y_332_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
v___x_337_ = 0;
v___x_338_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_338_, 0, v___x_336_);
lean_ctor_set_uint8(v___x_338_, sizeof(void*)*1, v___x_337_);
v___x_339_ = l_Repr_addAppParen(v___x_338_, v_prec_301_);
return v___x_339_;
}
}
case 2:
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_unsigned_to_nat(1024u);
v___x_345_ = lean_nat_dec_le(v___x_344_, v_prec_301_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; 
v___x_346_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_303_ = v___x_346_;
goto v___jp_302_;
}
else
{
lean_object* v___x_347_; 
v___x_347_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_303_ = v___x_347_;
goto v___jp_302_;
}
}
case 3:
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(1024u);
v___x_349_ = lean_nat_dec_le(v___x_348_, v_prec_301_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; 
v___x_350_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_310_ = v___x_350_;
goto v___jp_309_;
}
else
{
lean_object* v___x_351_; 
v___x_351_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_310_ = v___x_351_;
goto v___jp_309_;
}
}
case 4:
{
lean_object* v_a_352_; lean_object* v___y_354_; lean_object* v___x_362_; uint8_t v___x_363_; 
v_a_352_ = lean_ctor_get(v_x_300_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v_x_300_, 1);
v___x_362_ = lean_unsigned_to_nat(1024u);
v___x_363_ = lean_nat_dec_le(v___x_362_, v_prec_301_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
v___x_364_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_354_ = v___x_364_;
goto v___jp_353_;
}
else
{
lean_object* v___x_365_; 
v___x_365_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_354_ = v___x_365_;
goto v___jp_353_;
}
v___jp_353_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_355_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__14));
v___x_356_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg(v_a_352_);
v___x_357_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_355_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
lean_inc(v___y_354_);
v___x_358_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_358_, 0, v___y_354_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = 0;
v___x_360_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_360_, 0, v___x_358_);
lean_ctor_set_uint8(v___x_360_, sizeof(void*)*1, v___x_359_);
v___x_361_ = l_Repr_addAppParen(v___x_360_, v_prec_301_);
return v___x_361_;
}
}
case 5:
{
uint8_t v_a_366_; lean_object* v___y_368_; lean_object* v___x_376_; uint8_t v___x_377_; 
v_a_366_ = lean_ctor_get_uint8(v_x_300_, 0);
lean_dec_ref_known(v_x_300_, 0);
v___x_376_ = lean_unsigned_to_nat(1024u);
v___x_377_ = lean_nat_dec_le(v___x_376_, v_prec_301_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; 
v___x_378_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_368_ = v___x_378_;
goto v___jp_367_;
}
else
{
lean_object* v___x_379_; 
v___x_379_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_368_ = v___x_379_;
goto v___jp_367_;
}
v___jp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_369_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__17));
v___x_370_ = l_Bool_repr___redArg(v_a_366_);
v___x_371_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
lean_inc(v___y_368_);
v___x_372_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_372_, 0, v___y_368_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = 0;
v___x_374_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set_uint8(v___x_374_, sizeof(void*)*1, v___x_373_);
v___x_375_ = l_Repr_addAppParen(v___x_374_, v_prec_301_);
return v___x_375_;
}
}
case 6:
{
lean_object* v_a_380_; lean_object* v___y_382_; lean_object* v___x_390_; uint8_t v___x_391_; 
v_a_380_ = lean_ctor_get(v_x_300_, 0);
lean_inc(v_a_380_);
lean_dec_ref_known(v_x_300_, 1);
v___x_390_ = lean_unsigned_to_nat(1024u);
v___x_391_ = lean_nat_dec_le(v___x_390_, v_prec_301_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_382_ = v___x_392_;
goto v___jp_381_;
}
else
{
lean_object* v___x_393_; 
v___x_393_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_382_ = v___x_393_;
goto v___jp_381_;
}
v___jp_381_:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_383_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__20));
v___x_384_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg(v_a_380_);
v___x_385_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_383_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
lean_inc(v___y_382_);
v___x_386_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_386_, 0, v___y_382_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = 0;
v___x_388_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*1, v___x_387_);
v___x_389_ = l_Repr_addAppParen(v___x_388_, v_prec_301_);
return v___x_389_;
}
}
case 7:
{
uint8_t v_a_394_; lean_object* v___y_396_; lean_object* v___x_404_; uint8_t v___x_405_; 
v_a_394_ = lean_ctor_get_uint8(v_x_300_, 0);
lean_dec_ref_known(v_x_300_, 0);
v___x_404_ = lean_unsigned_to_nat(1024u);
v___x_405_ = lean_nat_dec_le(v___x_404_, v_prec_301_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; 
v___x_406_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_396_ = v___x_406_;
goto v___jp_395_;
}
else
{
lean_object* v___x_407_; 
v___x_407_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_396_ = v___x_407_;
goto v___jp_395_;
}
v___jp_395_:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_397_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__23));
v___x_398_ = l_Bool_repr___redArg(v_a_394_);
v___x_399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
lean_inc(v___y_396_);
v___x_400_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_400_, 0, v___y_396_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = 0;
v___x_402_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_402_, 0, v___x_400_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*1, v___x_401_);
v___x_403_ = l_Repr_addAppParen(v___x_402_, v_prec_301_);
return v___x_403_;
}
}
case 8:
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_428_; 
v_a_408_ = lean_ctor_get(v_x_300_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v_x_300_);
if (v_isSharedCheck_428_ == 0)
{
v___x_410_ = v_x_300_;
v_isShared_411_ = v_isSharedCheck_428_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v_x_300_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_428_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___y_413_; lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = lean_unsigned_to_nat(1024u);
v___x_425_ = lean_nat_dec_le(v___x_424_, v_prec_301_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; 
v___x_426_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_413_ = v___x_426_;
goto v___jp_412_;
}
else
{
lean_object* v___x_427_; 
v___x_427_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_413_ = v___x_427_;
goto v___jp_412_;
}
v___jp_412_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_414_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__26));
v___x_415_ = l_Nat_reprFast(v_a_408_);
if (v_isShared_411_ == 0)
{
lean_ctor_set_tag(v___x_410_, 3);
lean_ctor_set(v___x_410_, 0, v___x_415_);
v___x_417_ = v___x_410_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_415_);
v___x_417_ = v_reuseFailAlloc_423_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_418_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_414_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
lean_inc(v___y_413_);
v___x_419_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_419_, 0, v___y_413_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = 0;
v___x_421_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_421_, 0, v___x_419_);
lean_ctor_set_uint8(v___x_421_, sizeof(void*)*1, v___x_420_);
v___x_422_ = l_Repr_addAppParen(v___x_421_, v_prec_301_);
return v___x_422_;
}
}
}
}
default: 
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_449_; 
v_a_429_ = lean_ctor_get(v_x_300_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v_x_300_);
if (v_isSharedCheck_449_ == 0)
{
v___x_431_ = v_x_300_;
v_isShared_432_ = v_isSharedCheck_449_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v_x_300_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_449_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___y_434_; lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_445_ = lean_unsigned_to_nat(1024u);
v___x_446_ = lean_nat_dec_le(v___x_445_, v_prec_301_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
v___x_447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_434_ = v___x_447_;
goto v___jp_433_;
}
else
{
lean_object* v___x_448_; 
v___x_448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_434_ = v___x_448_;
goto v___jp_433_;
}
v___jp_433_:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_435_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__29));
v___x_436_ = l_Nat_reprFast(v_a_429_);
if (v_isShared_432_ == 0)
{
lean_ctor_set_tag(v___x_431_, 3);
lean_ctor_set(v___x_431_, 0, v___x_436_);
v___x_438_ = v___x_431_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_436_);
v___x_438_ = v_reuseFailAlloc_444_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_435_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
lean_inc(v___y_434_);
v___x_440_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_440_, 0, v___y_434_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = 0;
v___x_442_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_442_, 0, v___x_440_);
lean_ctor_set_uint8(v___x_442_, sizeof(void*)*1, v___x_441_);
v___x_443_ = l_Repr_addAppParen(v___x_442_, v_prec_301_);
return v___x_443_;
}
}
}
}
}
v___jp_302_:
{
lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_304_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__1));
lean_inc(v___y_303_);
v___x_305_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_305_, 0, v___y_303_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = 0;
v___x_307_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_307_, 0, v___x_305_);
lean_ctor_set_uint8(v___x_307_, sizeof(void*)*1, v___x_306_);
v___x_308_ = l_Repr_addAppParen(v___x_307_, v_prec_301_);
return v___x_308_;
}
v___jp_309_:
{
lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_311_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__3));
lean_inc(v___y_310_);
v___x_312_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_312_, 0, v___y_310_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v___x_313_ = 0;
v___x_314_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_314_, 0, v___x_312_);
lean_ctor_set_uint8(v___x_314_, sizeof(void*)*1, v___x_313_);
v___x_315_ = l_Repr_addAppParen(v___x_314_, v_prec_301_);
return v___x_315_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprAElem_repr___boxed(lean_object* v_x_450_, lean_object* v_prec_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = lp_lean_x2dftml_LeanFtml_instReprAElem_repr(v_x_450_, v_prec_451_);
lean_dec(v_prec_451_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0(lean_object* v_a_453_, lean_object* v_n_454_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg(v_a_453_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___boxed(lean_object* v_a_456_, lean_object* v_n_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0(v_a_456_, v_n_457_);
lean_dec(v_n_457_);
return v_res_458_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0(lean_object* v_x_461_, lean_object* v_x_462_){
_start:
{
if (lean_obj_tag(v_x_461_) == 0)
{
if (lean_obj_tag(v_x_462_) == 0)
{
uint8_t v___x_463_; 
v___x_463_ = 1;
return v___x_463_;
}
else
{
uint8_t v___x_464_; 
v___x_464_ = 0;
return v___x_464_;
}
}
else
{
if (lean_obj_tag(v_x_462_) == 0)
{
uint8_t v___x_465_; 
v___x_465_ = 0;
return v___x_465_;
}
else
{
lean_object* v_head_466_; lean_object* v_tail_467_; lean_object* v_head_468_; lean_object* v_tail_469_; uint32_t v___x_470_; uint32_t v___x_471_; uint8_t v___x_472_; 
v_head_466_ = lean_ctor_get(v_x_461_, 0);
v_tail_467_ = lean_ctor_get(v_x_461_, 1);
v_head_468_ = lean_ctor_get(v_x_462_, 0);
v_tail_469_ = lean_ctor_get(v_x_462_, 1);
v___x_470_ = lean_unbox_uint32(v_head_466_);
v___x_471_ = lean_unbox_uint32(v_head_468_);
v___x_472_ = lean_uint32_dec_eq(v___x_470_, v___x_471_);
if (v___x_472_ == 0)
{
return v___x_472_;
}
else
{
v_x_461_ = v_tail_467_;
v_x_462_ = v_tail_469_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0___boxed(lean_object* v_x_474_, lean_object* v_x_475_){
_start:
{
uint8_t v_res_476_; lean_object* v_r_477_; 
v_res_476_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0(v_x_474_, v_x_475_);
lean_dec(v_x_475_);
lean_dec(v_x_474_);
v_r_477_ = lean_box(v_res_476_);
return v_r_477_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instBEqAElem_beq(lean_object* v_x_478_, lean_object* v_x_479_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v_decide_482_; uint8_t v_a_484_; uint8_t v_a_x27_485_; 
v___x_480_ = lean_obj_tag_nat(v_x_478_);
v___x_481_ = lean_obj_tag_nat(v_x_479_);
v_decide_482_ = lean_nat_dec_eq(v___x_480_, v___x_481_);
if (v_decide_482_ == 0)
{
return v_decide_482_;
}
else
{
switch(lean_obj_tag(v_x_478_))
{
case 0:
{
lean_object* v_a_486_; lean_object* v_a_487_; uint8_t v___x_488_; 
v_a_486_ = lean_ctor_get(v_x_478_, 0);
v_a_487_ = lean_ctor_get(v_x_479_, 0);
v___x_488_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0(v_a_486_, v_a_487_);
return v___x_488_;
}
case 1:
{
lean_object* v_a_489_; lean_object* v_a_490_; uint8_t v___x_491_; 
v_a_489_ = lean_ctor_get(v_x_478_, 0);
v_a_490_ = lean_ctor_get(v_x_479_, 0);
v___x_491_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0(v_a_489_, v_a_490_);
return v___x_491_;
}
case 4:
{
lean_object* v_a_492_; lean_object* v_a_493_; uint8_t v___x_494_; 
v_a_492_ = lean_ctor_get(v_x_478_, 0);
v_a_493_ = lean_ctor_get(v_x_479_, 0);
v___x_494_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0(v_a_492_, v_a_493_);
return v___x_494_;
}
case 5:
{
uint8_t v_a_495_; uint8_t v_a_496_; 
v_a_495_ = lean_ctor_get_uint8(v_x_478_, 0);
v_a_496_ = lean_ctor_get_uint8(v_x_479_, 0);
v_a_484_ = v_a_495_;
v_a_x27_485_ = v_a_496_;
goto v___jp_483_;
}
case 6:
{
lean_object* v_a_497_; lean_object* v_a_498_; uint8_t v___x_499_; 
v_a_497_ = lean_ctor_get(v_x_478_, 0);
v_a_498_ = lean_ctor_get(v_x_479_, 0);
v___x_499_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqAElem_beq_spec__0(v_a_497_, v_a_498_);
return v___x_499_;
}
case 7:
{
uint8_t v_a_500_; uint8_t v_a_501_; 
v_a_500_ = lean_ctor_get_uint8(v_x_478_, 0);
v_a_501_ = lean_ctor_get_uint8(v_x_479_, 0);
v_a_484_ = v_a_500_;
v_a_x27_485_ = v_a_501_;
goto v___jp_483_;
}
case 8:
{
lean_object* v_a_502_; lean_object* v_a_503_; uint8_t v___x_504_; 
v_a_502_ = lean_ctor_get(v_x_478_, 0);
v_a_503_ = lean_ctor_get(v_x_479_, 0);
v___x_504_ = lean_nat_dec_eq(v_a_502_, v_a_503_);
return v___x_504_;
}
case 9:
{
lean_object* v_a_505_; lean_object* v_a_506_; uint8_t v___x_507_; 
v_a_505_ = lean_ctor_get(v_x_478_, 0);
v_a_506_ = lean_ctor_get(v_x_479_, 0);
v___x_507_ = lean_nat_dec_eq(v_a_505_, v_a_506_);
return v___x_507_;
}
default: 
{
return v_decide_482_;
}
}
}
v___jp_483_:
{
if (v_a_x27_485_ == 0)
{
if (v_a_484_ == 0)
{
return v_decide_482_;
}
else
{
return v_a_x27_485_;
}
}
else
{
return v_a_484_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instBEqAElem_beq___boxed(lean_object* v_x_508_, lean_object* v_x_509_){
_start:
{
uint8_t v_res_510_; lean_object* v_r_511_; 
v_res_510_ = lp_lean_x2dftml_LeanFtml_instBEqAElem_beq(v_x_508_, v_x_509_);
lean_dec(v_x_509_);
lean_dec(v_x_508_);
v_r_511_ = lean_box(v_res_510_);
return v_r_511_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_aSafe(lean_object* v_x_514_){
_start:
{
switch(lean_obj_tag(v_x_514_))
{
case 3:
{
uint8_t v___x_515_; 
v___x_515_ = 0;
return v___x_515_;
}
case 4:
{
uint8_t v___x_516_; 
v___x_516_ = 0;
return v___x_516_;
}
case 5:
{
uint8_t v___x_517_; 
v___x_517_ = 0;
return v___x_517_;
}
case 6:
{
uint8_t v___x_518_; 
v___x_518_ = 0;
return v___x_518_;
}
case 9:
{
uint8_t v___x_519_; 
v___x_519_ = 0;
return v___x_519_;
}
default: 
{
uint8_t v___x_520_; 
v___x_520_ = 1;
return v___x_520_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_aSafe___boxed(lean_object* v_x_521_){
_start:
{
uint8_t v_res_522_; lean_object* v_r_523_; 
v_res_522_ = lp_lean_x2dftml_LeanFtml_aSafe(v_x_521_);
lean_dec(v_x_521_);
v_r_523_ = lean_box(v_res_522_);
return v_r_523_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorIdx___impl(lean_object* v_x_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lean_obj_tag_nat(v_x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorIdx___impl___boxed(lean_object* v_x_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = lp_lean_x2dftml_LeanFtml_OElem_ctorIdx___impl(v_x_526_);
lean_dec_ref(v_x_526_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorElim___redArg(lean_object* v_t_528_, lean_object* v_k_529_){
_start:
{
lean_object* v_a_530_; lean_object* v___x_531_; 
v_a_530_ = lean_ctor_get(v_t_528_, 0);
lean_inc(v_a_530_);
lean_dec_ref(v_t_528_);
v___x_531_ = lean_apply_1(v_k_529_, v_a_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorElim(lean_object* v_motive_532_, lean_object* v_ctorIdx_533_, lean_object* v_t_534_, lean_object* v_h_535_, lean_object* v_k_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = lp_lean_x2dftml_LeanFtml_OElem_ctorElim___redArg(v_t_534_, v_k_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_ctorElim___boxed(lean_object* v_motive_538_, lean_object* v_ctorIdx_539_, lean_object* v_t_540_, lean_object* v_h_541_, lean_object* v_k_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = lp_lean_x2dftml_LeanFtml_OElem_ctorElim(v_motive_538_, v_ctorIdx_539_, v_t_540_, v_h_541_, v_k_542_);
lean_dec(v_ctorIdx_539_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_bare_elim___redArg(lean_object* v_t_544_, lean_object* v_bare_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = lp_lean_x2dftml_LeanFtml_OElem_ctorElim___redArg(v_t_544_, v_bare_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_bare_elim(lean_object* v_motive_547_, lean_object* v_t_548_, lean_object* v_h_549_, lean_object* v_bare_550_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = lp_lean_x2dftml_LeanFtml_OElem_ctorElim___redArg(v_t_548_, v_bare_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_para_elim___redArg(lean_object* v_t_552_, lean_object* v_para_553_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = lp_lean_x2dftml_LeanFtml_OElem_ctorElim___redArg(v_t_552_, v_para_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OElem_para_elim(lean_object* v_motive_555_, lean_object* v_t_556_, lean_object* v_h_557_, lean_object* v_para_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lp_lean_x2dftml_LeanFtml_OElem_ctorElim___redArg(v_t_556_, v_para_558_);
return v___x_559_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqOElem_decEq(lean_object* v_x_560_, lean_object* v_x_561_){
_start:
{
if (lean_obj_tag(v_x_560_) == 0)
{
if (lean_obj_tag(v_x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v_a_563_; uint8_t v___x_564_; 
v_a_562_ = lean_ctor_get(v_x_560_, 0);
lean_inc(v_a_562_);
lean_dec_ref_known(v_x_560_, 1);
v_a_563_ = lean_ctor_get(v_x_561_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v_x_561_, 1);
v___x_564_ = lp_lean_x2dftml_LeanFtml_instDecidableEqAElem_decEq(v_a_562_, v_a_563_);
return v___x_564_;
}
else
{
uint8_t v___x_565_; 
lean_dec_ref_known(v_x_561_, 1);
lean_dec_ref_known(v_x_560_, 1);
v___x_565_ = 0;
return v___x_565_;
}
}
else
{
if (lean_obj_tag(v_x_561_) == 0)
{
uint8_t v___x_566_; 
lean_dec_ref_known(v_x_561_, 1);
lean_dec_ref_known(v_x_560_, 1);
v___x_566_ = 0;
return v___x_566_;
}
else
{
lean_object* v_a_567_; lean_object* v_a_568_; lean_object* v___x_569_; uint8_t v___x_570_; 
v_a_567_ = lean_ctor_get(v_x_560_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v_x_560_, 1);
v_a_568_ = lean_ctor_get(v_x_561_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v_x_561_, 1);
v___x_569_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqAElem___boxed), 2, 0);
v___x_570_ = l_instDecidableEqList___redArg(v___x_569_, v_a_567_, v_a_568_);
return v___x_570_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqOElem_decEq___boxed(lean_object* v_x_571_, lean_object* v_x_572_){
_start:
{
uint8_t v_res_573_; lean_object* v_r_574_; 
v_res_573_ = lp_lean_x2dftml_LeanFtml_instDecidableEqOElem_decEq(v_x_571_, v_x_572_);
v_r_574_ = lean_box(v_res_573_);
return v_r_574_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqOElem(lean_object* v_x_575_, lean_object* v_x_576_){
_start:
{
uint8_t v___x_577_; 
v___x_577_ = lp_lean_x2dftml_LeanFtml_instDecidableEqOElem_decEq(v_x_575_, v_x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqOElem___boxed(lean_object* v_x_578_, lean_object* v_x_579_){
_start:
{
uint8_t v_res_580_; lean_object* v_r_581_; 
v_res_580_ = lp_lean_x2dftml_LeanFtml_instDecidableEqOElem(v_x_578_, v_x_579_);
v_r_581_ = lean_box(v_res_580_);
return v_r_581_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0___lam__0(lean_object* v___y_582_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = lp_lean_x2dftml_LeanFtml_instReprAElem_repr(v___y_582_, v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_585_, lean_object* v_x_586_, lean_object* v_x_587_){
_start:
{
if (lean_obj_tag(v_x_587_) == 0)
{
lean_dec(v_x_585_);
return v_x_586_;
}
else
{
lean_object* v_head_588_; lean_object* v_tail_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_600_; 
v_head_588_ = lean_ctor_get(v_x_587_, 0);
v_tail_589_ = lean_ctor_get(v_x_587_, 1);
v_isSharedCheck_600_ = !lean_is_exclusive(v_x_587_);
if (v_isSharedCheck_600_ == 0)
{
v___x_591_ = v_x_587_;
v_isShared_592_ = v_isSharedCheck_600_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_tail_589_);
lean_inc(v_head_588_);
lean_dec(v_x_587_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_600_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
lean_inc(v_x_585_);
if (v_isShared_592_ == 0)
{
lean_ctor_set_tag(v___x_591_, 5);
lean_ctor_set(v___x_591_, 1, v_x_585_);
lean_ctor_set(v___x_591_, 0, v_x_586_);
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_x_586_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_x_585_);
v___x_594_ = v_reuseFailAlloc_599_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = lp_lean_x2dftml_LeanFtml_instReprAElem_repr(v_head_588_, v___x_595_);
v___x_597_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_594_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v_x_586_ = v___x_597_;
v_x_587_ = v_tail_589_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0_spec__1(lean_object* v_x_601_, lean_object* v_x_602_, lean_object* v_x_603_){
_start:
{
if (lean_obj_tag(v_x_603_) == 0)
{
lean_dec(v_x_601_);
return v_x_602_;
}
else
{
lean_object* v_head_604_; lean_object* v_tail_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_616_; 
v_head_604_ = lean_ctor_get(v_x_603_, 0);
v_tail_605_ = lean_ctor_get(v_x_603_, 1);
v_isSharedCheck_616_ = !lean_is_exclusive(v_x_603_);
if (v_isSharedCheck_616_ == 0)
{
v___x_607_ = v_x_603_;
v_isShared_608_ = v_isSharedCheck_616_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_tail_605_);
lean_inc(v_head_604_);
lean_dec(v_x_603_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_616_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
lean_inc(v_x_601_);
if (v_isShared_608_ == 0)
{
lean_ctor_set_tag(v___x_607_, 5);
lean_ctor_set(v___x_607_, 1, v_x_601_);
lean_ctor_set(v___x_607_, 0, v_x_602_);
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_x_602_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v_x_601_);
v___x_610_ = v_reuseFailAlloc_615_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = lp_lean_x2dftml_LeanFtml_instReprAElem_repr(v_head_604_, v___x_611_);
v___x_613_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_610_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0_spec__1_spec__2(v_x_601_, v___x_613_, v_tail_605_);
return v___x_614_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0(lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
if (lean_obj_tag(v_x_617_) == 0)
{
lean_object* v___x_619_; 
lean_dec(v_x_618_);
v___x_619_ = lean_box(0);
return v___x_619_;
}
else
{
lean_object* v_tail_620_; 
v_tail_620_ = lean_ctor_get(v_x_617_, 1);
if (lean_obj_tag(v_tail_620_) == 0)
{
lean_object* v_head_621_; lean_object* v___x_622_; 
lean_dec(v_x_618_);
v_head_621_ = lean_ctor_get(v_x_617_, 0);
lean_inc(v_head_621_);
lean_dec_ref_known(v_x_617_, 2);
v___x_622_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0___lam__0(v_head_621_);
return v___x_622_;
}
else
{
lean_object* v_head_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_inc(v_tail_620_);
v_head_623_ = lean_ctor_get(v_x_617_, 0);
lean_inc(v_head_623_);
lean_dec_ref_known(v_x_617_, 2);
v___x_624_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0___lam__0(v_head_623_);
v___x_625_ = lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0_spec__1(v_x_618_, v___x_624_, v_tail_620_);
return v___x_625_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0___redArg(lean_object* v_a_626_){
_start:
{
if (lean_obj_tag(v_a_626_) == 0)
{
lean_object* v___x_627_; 
v___x_627_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__1));
return v___x_627_;
}
else
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; lean_object* v___x_637_; 
v___x_628_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__5));
v___x_629_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprOElem_repr_spec__0_spec__0(v_a_626_, v___x_628_);
v___x_630_ = lean_obj_once(&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8, &lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8_once, _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8);
v___x_631_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__9));
v___x_632_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v___x_629_);
v___x_633_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__10));
v___x_634_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_632_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_630_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = 0;
v___x_637_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set_uint8(v___x_637_, sizeof(void*)*1, v___x_636_);
return v___x_637_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr(lean_object* v_x_650_, lean_object* v_prec_651_){
_start:
{
if (lean_obj_tag(v_x_650_) == 0)
{
lean_object* v_a_652_; lean_object* v___y_654_; lean_object* v___x_663_; uint8_t v___x_664_; 
v_a_652_ = lean_ctor_get(v_x_650_, 0);
lean_inc(v_a_652_);
lean_dec_ref_known(v_x_650_, 1);
v___x_663_ = lean_unsigned_to_nat(1024u);
v___x_664_ = lean_nat_dec_le(v___x_663_, v_prec_651_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; 
v___x_665_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_654_ = v___x_665_;
goto v___jp_653_;
}
else
{
lean_object* v___x_666_; 
v___x_666_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_654_ = v___x_666_;
goto v___jp_653_;
}
v___jp_653_:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_655_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__2));
v___x_656_ = lean_unsigned_to_nat(1024u);
v___x_657_ = lp_lean_x2dftml_LeanFtml_instReprAElem_repr(v_a_652_, v___x_656_);
v___x_658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_655_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
lean_inc(v___y_654_);
v___x_659_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_659_, 0, v___y_654_);
lean_ctor_set(v___x_659_, 1, v___x_658_);
v___x_660_ = 0;
v___x_661_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_661_, 0, v___x_659_);
lean_ctor_set_uint8(v___x_661_, sizeof(void*)*1, v___x_660_);
v___x_662_ = l_Repr_addAppParen(v___x_661_, v_prec_651_);
return v___x_662_;
}
}
else
{
lean_object* v_a_667_; lean_object* v___y_669_; lean_object* v___x_677_; uint8_t v___x_678_; 
v_a_667_ = lean_ctor_get(v_x_650_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v_x_650_, 1);
v___x_677_ = lean_unsigned_to_nat(1024u);
v___x_678_ = lean_nat_dec_le(v___x_677_, v_prec_651_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__7);
v___y_669_ = v___x_679_;
goto v___jp_668_;
}
else
{
lean_object* v___x_680_; 
v___x_680_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8, &lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_instReprAElem_repr___closed__8);
v___y_669_ = v___x_680_;
goto v___jp_668_;
}
v___jp_668_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_670_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprOElem_repr___closed__5));
v___x_671_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0___redArg(v_a_667_);
v___x_672_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_670_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
lean_inc(v___y_669_);
v___x_673_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_673_, 0, v___y_669_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = 0;
v___x_675_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_675_, 0, v___x_673_);
lean_ctor_set_uint8(v___x_675_, sizeof(void*)*1, v___x_674_);
v___x_676_ = l_Repr_addAppParen(v___x_675_, v_prec_651_);
return v___x_676_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprOElem_repr___boxed(lean_object* v_x_681_, lean_object* v_prec_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = lp_lean_x2dftml_LeanFtml_instReprOElem_repr(v_x_681_, v_prec_682_);
lean_dec(v_prec_682_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0(lean_object* v_a_684_, lean_object* v_n_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0___redArg(v_a_684_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0___boxed(lean_object* v_a_687_, lean_object* v_n_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0(v_a_687_, v_n_688_);
lean_dec(v_n_688_);
return v_res_689_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqOElem_beq_spec__0(lean_object* v_x_692_, lean_object* v_x_693_){
_start:
{
if (lean_obj_tag(v_x_692_) == 0)
{
if (lean_obj_tag(v_x_693_) == 0)
{
uint8_t v___x_694_; 
v___x_694_ = 1;
return v___x_694_;
}
else
{
uint8_t v___x_695_; 
v___x_695_ = 0;
return v___x_695_;
}
}
else
{
if (lean_obj_tag(v_x_693_) == 0)
{
uint8_t v___x_696_; 
v___x_696_ = 0;
return v___x_696_;
}
else
{
lean_object* v_head_697_; lean_object* v_tail_698_; lean_object* v_head_699_; lean_object* v_tail_700_; uint8_t v___x_701_; 
v_head_697_ = lean_ctor_get(v_x_692_, 0);
v_tail_698_ = lean_ctor_get(v_x_692_, 1);
v_head_699_ = lean_ctor_get(v_x_693_, 0);
v_tail_700_ = lean_ctor_get(v_x_693_, 1);
v___x_701_ = lp_lean_x2dftml_LeanFtml_instBEqAElem_beq(v_head_697_, v_head_699_);
if (v___x_701_ == 0)
{
return v___x_701_;
}
else
{
v_x_692_ = v_tail_698_;
v_x_693_ = v_tail_700_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqOElem_beq_spec__0___boxed(lean_object* v_x_703_, lean_object* v_x_704_){
_start:
{
uint8_t v_res_705_; lean_object* v_r_706_; 
v_res_705_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqOElem_beq_spec__0(v_x_703_, v_x_704_);
lean_dec(v_x_704_);
lean_dec(v_x_703_);
v_r_706_ = lean_box(v_res_705_);
return v_r_706_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instBEqOElem_beq(lean_object* v_x_707_, lean_object* v_x_708_){
_start:
{
if (lean_obj_tag(v_x_707_) == 0)
{
if (lean_obj_tag(v_x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v_a_710_; uint8_t v___x_711_; 
v_a_709_ = lean_ctor_get(v_x_707_, 0);
v_a_710_ = lean_ctor_get(v_x_708_, 0);
v___x_711_ = lp_lean_x2dftml_LeanFtml_instBEqAElem_beq(v_a_709_, v_a_710_);
return v___x_711_;
}
else
{
uint8_t v___x_712_; 
v___x_712_ = 0;
return v___x_712_;
}
}
else
{
if (lean_obj_tag(v_x_708_) == 1)
{
lean_object* v_a_713_; lean_object* v_a_714_; uint8_t v___x_715_; 
v_a_713_ = lean_ctor_get(v_x_707_, 0);
v_a_714_ = lean_ctor_get(v_x_708_, 0);
v___x_715_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_instBEqOElem_beq_spec__0(v_a_713_, v_a_714_);
return v___x_715_;
}
else
{
uint8_t v___x_716_; 
v___x_716_ = 0;
return v___x_716_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instBEqOElem_beq___boxed(lean_object* v_x_717_, lean_object* v_x_718_){
_start:
{
uint8_t v_res_719_; lean_object* v_r_720_; 
v_res_719_ = lp_lean_x2dftml_LeanFtml_instBEqOElem_beq(v_x_717_, v_x_718_);
lean_dec_ref(v_x_718_);
lean_dec_ref(v_x_717_);
v_r_720_ = lean_box(v_res_719_);
return v_r_720_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqSt_decEq(lean_object* v_x_723_, lean_object* v_x_724_){
_start:
{
lean_object* v_current_725_; lean_object* v_finished_726_; uint8_t v_unwrapped_727_; uint8_t v_discardedControl_728_; uint8_t v_lineStart_729_; uint8_t v_breakSeen_730_; lean_object* v_current_731_; lean_object* v_finished_732_; uint8_t v_unwrapped_733_; uint8_t v_discardedControl_734_; uint8_t v_lineStart_735_; uint8_t v_breakSeen_736_; uint8_t v___y_738_; uint8_t v___y_740_; uint8_t v___y_742_; lean_object* v___x_743_; uint8_t v___x_744_; 
v_current_725_ = lean_ctor_get(v_x_723_, 0);
lean_inc(v_current_725_);
v_finished_726_ = lean_ctor_get(v_x_723_, 1);
lean_inc(v_finished_726_);
v_unwrapped_727_ = lean_ctor_get_uint8(v_x_723_, sizeof(void*)*2);
v_discardedControl_728_ = lean_ctor_get_uint8(v_x_723_, sizeof(void*)*2 + 1);
v_lineStart_729_ = lean_ctor_get_uint8(v_x_723_, sizeof(void*)*2 + 2);
v_breakSeen_730_ = lean_ctor_get_uint8(v_x_723_, sizeof(void*)*2 + 3);
lean_dec_ref(v_x_723_);
v_current_731_ = lean_ctor_get(v_x_724_, 0);
lean_inc(v_current_731_);
v_finished_732_ = lean_ctor_get(v_x_724_, 1);
lean_inc(v_finished_732_);
v_unwrapped_733_ = lean_ctor_get_uint8(v_x_724_, sizeof(void*)*2);
v_discardedControl_734_ = lean_ctor_get_uint8(v_x_724_, sizeof(void*)*2 + 1);
v_lineStart_735_ = lean_ctor_get_uint8(v_x_724_, sizeof(void*)*2 + 2);
v_breakSeen_736_ = lean_ctor_get_uint8(v_x_724_, sizeof(void*)*2 + 3);
lean_dec_ref(v_x_724_);
v___x_743_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqAElem___boxed), 2, 0);
v___x_744_ = l_instDecidableEqList___redArg(v___x_743_, v_current_725_, v_current_731_);
if (v___x_744_ == 0)
{
lean_dec(v_finished_732_);
lean_dec(v_finished_726_);
return v___x_744_;
}
else
{
lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_745_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqOElem___boxed), 2, 0);
v___x_746_ = l_instDecidableEqList___redArg(v___x_745_, v_finished_726_, v_finished_732_);
if (v___x_746_ == 0)
{
return v___x_746_;
}
else
{
if (v_unwrapped_733_ == 0)
{
if (v_unwrapped_727_ == 0)
{
v___y_742_ = v___x_746_;
goto v___jp_741_;
}
else
{
return v_unwrapped_733_;
}
}
else
{
if (v_unwrapped_727_ == 0)
{
return v_unwrapped_727_;
}
else
{
v___y_742_ = v_unwrapped_727_;
goto v___jp_741_;
}
}
}
}
v___jp_737_:
{
if (v_breakSeen_736_ == 0)
{
if (v_breakSeen_730_ == 0)
{
return v___y_738_;
}
else
{
return v_breakSeen_736_;
}
}
else
{
return v_breakSeen_730_;
}
}
v___jp_739_:
{
if (v_lineStart_735_ == 0)
{
if (v_lineStart_729_ == 0)
{
v___y_738_ = v___y_740_;
goto v___jp_737_;
}
else
{
return v_lineStart_735_;
}
}
else
{
if (v_lineStart_729_ == 0)
{
return v_lineStart_729_;
}
else
{
v___y_738_ = v_lineStart_729_;
goto v___jp_737_;
}
}
}
v___jp_741_:
{
if (v_discardedControl_734_ == 0)
{
if (v_discardedControl_728_ == 0)
{
v___y_740_ = v___y_742_;
goto v___jp_739_;
}
else
{
return v_discardedControl_734_;
}
}
else
{
if (v_discardedControl_728_ == 0)
{
return v_discardedControl_728_;
}
else
{
v___y_740_ = v_discardedControl_728_;
goto v___jp_739_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqSt_decEq___boxed(lean_object* v_x_747_, lean_object* v_x_748_){
_start:
{
uint8_t v_res_749_; lean_object* v_r_750_; 
v_res_749_ = lp_lean_x2dftml_LeanFtml_instDecidableEqSt_decEq(v_x_747_, v_x_748_);
v_r_750_ = lean_box(v_res_749_);
return v_r_750_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqSt(lean_object* v_x_751_, lean_object* v_x_752_){
_start:
{
uint8_t v___x_753_; 
v___x_753_ = lp_lean_x2dftml_LeanFtml_instDecidableEqSt_decEq(v_x_751_, v_x_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqSt___boxed(lean_object* v_x_754_, lean_object* v_x_755_){
_start:
{
uint8_t v_res_756_; lean_object* v_r_757_; 
v_res_756_ = lp_lean_x2dftml_LeanFtml_instDecidableEqSt(v_x_754_, v_x_755_);
v_r_757_ = lean_box(v_res_756_);
return v_r_757_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0___lam__0(lean_object* v___y_758_){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_unsigned_to_nat(0u);
v___x_760_ = lp_lean_x2dftml_LeanFtml_instReprOElem_repr(v___y_758_, v___x_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_761_, lean_object* v_x_762_, lean_object* v_x_763_){
_start:
{
if (lean_obj_tag(v_x_763_) == 0)
{
lean_dec(v_x_761_);
return v_x_762_;
}
else
{
lean_object* v_head_764_; lean_object* v_tail_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_776_; 
v_head_764_ = lean_ctor_get(v_x_763_, 0);
v_tail_765_ = lean_ctor_get(v_x_763_, 1);
v_isSharedCheck_776_ = !lean_is_exclusive(v_x_763_);
if (v_isSharedCheck_776_ == 0)
{
v___x_767_ = v_x_763_;
v_isShared_768_ = v_isSharedCheck_776_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_tail_765_);
lean_inc(v_head_764_);
lean_dec(v_x_763_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_776_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
lean_inc(v_x_761_);
if (v_isShared_768_ == 0)
{
lean_ctor_set_tag(v___x_767_, 5);
lean_ctor_set(v___x_767_, 1, v_x_761_);
lean_ctor_set(v___x_767_, 0, v_x_762_);
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_x_762_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_x_761_);
v___x_770_ = v_reuseFailAlloc_775_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = lp_lean_x2dftml_LeanFtml_instReprOElem_repr(v_head_764_, v___x_771_);
v___x_773_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_773_, 0, v___x_770_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v_x_762_ = v___x_773_;
v_x_763_ = v_tail_765_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0_spec__1(lean_object* v_x_777_, lean_object* v_x_778_, lean_object* v_x_779_){
_start:
{
if (lean_obj_tag(v_x_779_) == 0)
{
lean_dec(v_x_777_);
return v_x_778_;
}
else
{
lean_object* v_head_780_; lean_object* v_tail_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_792_; 
v_head_780_ = lean_ctor_get(v_x_779_, 0);
v_tail_781_ = lean_ctor_get(v_x_779_, 1);
v_isSharedCheck_792_ = !lean_is_exclusive(v_x_779_);
if (v_isSharedCheck_792_ == 0)
{
v___x_783_ = v_x_779_;
v_isShared_784_ = v_isSharedCheck_792_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_tail_781_);
lean_inc(v_head_780_);
lean_dec(v_x_779_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_792_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
lean_inc(v_x_777_);
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 5);
lean_ctor_set(v___x_783_, 1, v_x_777_);
lean_ctor_set(v___x_783_, 0, v_x_778_);
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_x_778_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v_x_777_);
v___x_786_ = v_reuseFailAlloc_791_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = lp_lean_x2dftml_LeanFtml_instReprOElem_repr(v_head_780_, v___x_787_);
v___x_789_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_786_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0_spec__1_spec__2(v_x_777_, v___x_789_, v_tail_781_);
return v___x_790_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0(lean_object* v_x_793_, lean_object* v_x_794_){
_start:
{
if (lean_obj_tag(v_x_793_) == 0)
{
lean_object* v___x_795_; 
lean_dec(v_x_794_);
v___x_795_ = lean_box(0);
return v___x_795_;
}
else
{
lean_object* v_tail_796_; 
v_tail_796_ = lean_ctor_get(v_x_793_, 1);
if (lean_obj_tag(v_tail_796_) == 0)
{
lean_object* v_head_797_; lean_object* v___x_798_; 
lean_dec(v_x_794_);
v_head_797_ = lean_ctor_get(v_x_793_, 0);
lean_inc(v_head_797_);
lean_dec_ref_known(v_x_793_, 2);
v___x_798_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0___lam__0(v_head_797_);
return v___x_798_;
}
else
{
lean_object* v_head_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
lean_inc(v_tail_796_);
v_head_799_ = lean_ctor_get(v_x_793_, 0);
lean_inc(v_head_799_);
lean_dec_ref_known(v_x_793_, 2);
v___x_800_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0___lam__0(v_head_799_);
v___x_801_ = lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0_spec__1(v_x_794_, v___x_800_, v_tail_796_);
return v___x_801_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0___redArg(lean_object* v_a_802_){
_start:
{
if (lean_obj_tag(v_a_802_) == 0)
{
lean_object* v___x_803_; 
v___x_803_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__1));
return v___x_803_;
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; lean_object* v___x_813_; 
v___x_804_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__5));
v___x_805_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprSt_repr_spec__0_spec__0(v_a_802_, v___x_804_);
v___x_806_ = lean_obj_once(&lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8, &lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8_once, _init_lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__8);
v___x_807_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__9));
v___x_808_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
lean_ctor_set(v___x_808_, 1, v___x_805_);
v___x_809_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__10));
v___x_810_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_806_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = 0;
v___x_813_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_813_, 0, v___x_811_);
lean_ctor_set_uint8(v___x_813_, sizeof(void*)*1, v___x_812_);
return v___x_813_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = lean_unsigned_to_nat(11u);
v___x_828_ = lean_nat_to_int(v___x_827_);
return v___x_828_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_unsigned_to_nat(12u);
v___x_833_ = lean_nat_to_int(v___x_832_);
return v___x_833_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_837_ = lean_unsigned_to_nat(13u);
v___x_838_ = lean_nat_to_int(v___x_837_);
return v___x_838_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = lean_unsigned_to_nat(20u);
v___x_843_ = lean_nat_to_int(v___x_842_);
return v___x_843_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__0));
v___x_852_ = lean_string_length(v___x_851_);
return v___x_852_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__22, &lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__22);
v___x_854_ = lean_nat_to_int(v___x_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg(lean_object* v_x_859_){
_start:
{
lean_object* v_current_860_; lean_object* v_finished_861_; uint8_t v_unwrapped_862_; uint8_t v_discardedControl_863_; uint8_t v_lineStart_864_; uint8_t v_breakSeen_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; uint8_t v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v_current_860_ = lean_ctor_get(v_x_859_, 0);
lean_inc(v_current_860_);
v_finished_861_ = lean_ctor_get(v_x_859_, 1);
lean_inc(v_finished_861_);
v_unwrapped_862_ = lean_ctor_get_uint8(v_x_859_, sizeof(void*)*2);
v_discardedControl_863_ = lean_ctor_get_uint8(v_x_859_, sizeof(void*)*2 + 1);
v_lineStart_864_ = lean_ctor_get_uint8(v_x_859_, sizeof(void*)*2 + 2);
v_breakSeen_865_ = lean_ctor_get_uint8(v_x_859_, sizeof(void*)*2 + 3);
lean_dec_ref(v_x_859_);
v___x_866_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__5));
v___x_867_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__6));
v___x_868_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__7);
v___x_869_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprOElem_repr_spec__0___redArg(v_current_860_);
v___x_870_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_868_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
v___x_871_ = 0;
v___x_872_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_872_, 0, v___x_870_);
lean_ctor_set_uint8(v___x_872_, sizeof(void*)*1, v___x_871_);
v___x_873_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_867_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = ((lean_object*)(lp_lean_x2dftml_List_repr_x27___at___00LeanFtml_instReprAElem_repr_spec__0___redArg___closed__4));
v___x_875_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_873_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = lean_box(1);
v___x_877_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_875_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__9));
v___x_879_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
lean_ctor_set(v___x_880_, 1, v___x_866_);
v___x_881_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__10, &lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__10);
v___x_882_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0___redArg(v_finished_861_);
v___x_883_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_881_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set_uint8(v___x_884_, sizeof(void*)*1, v___x_871_);
v___x_885_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_880_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
lean_ctor_set(v___x_886_, 1, v___x_874_);
v___x_887_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_886_);
lean_ctor_set(v___x_887_, 1, v___x_876_);
v___x_888_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__12));
v___x_889_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_887_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
lean_ctor_set(v___x_890_, 1, v___x_866_);
v___x_891_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__13, &lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__13);
v___x_892_ = l_Bool_repr___redArg(v_unwrapped_862_);
v___x_893_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_891_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_894_, 0, v___x_893_);
lean_ctor_set_uint8(v___x_894_, sizeof(void*)*1, v___x_871_);
v___x_895_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_890_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
lean_ctor_set(v___x_896_, 1, v___x_874_);
v___x_897_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
lean_ctor_set(v___x_897_, 1, v___x_876_);
v___x_898_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__15));
v___x_899_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v___x_866_);
v___x_901_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__16, &lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__16);
v___x_902_ = l_Bool_repr___redArg(v_discardedControl_863_);
v___x_903_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_901_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
v___x_904_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_904_, 0, v___x_903_);
lean_ctor_set_uint8(v___x_904_, sizeof(void*)*1, v___x_871_);
v___x_905_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_900_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
lean_ctor_set(v___x_906_, 1, v___x_874_);
v___x_907_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_906_);
lean_ctor_set(v___x_907_, 1, v___x_876_);
v___x_908_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__18));
v___x_909_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_907_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
lean_ctor_set(v___x_910_, 1, v___x_866_);
v___x_911_ = l_Bool_repr___redArg(v_lineStart_864_);
v___x_912_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_891_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set_uint8(v___x_913_, sizeof(void*)*1, v___x_871_);
v___x_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_910_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
lean_ctor_set(v___x_915_, 1, v___x_874_);
v___x_916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
lean_ctor_set(v___x_916_, 1, v___x_876_);
v___x_917_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__20));
v___x_918_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
lean_ctor_set(v___x_919_, 1, v___x_866_);
v___x_920_ = l_Bool_repr___redArg(v_breakSeen_865_);
v___x_921_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_891_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_922_, 0, v___x_921_);
lean_ctor_set_uint8(v___x_922_, sizeof(void*)*1, v___x_871_);
v___x_923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_919_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__23, &lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__23);
v___x_925_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__24));
v___x_926_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
lean_ctor_set(v___x_926_, 1, v___x_923_);
v___x_927_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg___closed__25));
v___x_928_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_926_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_924_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
v___x_930_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_930_, 0, v___x_929_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*1, v___x_871_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr(lean_object* v_x_931_, lean_object* v_prec_932_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = lp_lean_x2dftml_LeanFtml_instReprSt_repr___redArg(v_x_931_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprSt_repr___boxed(lean_object* v_x_934_, lean_object* v_prec_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = lp_lean_x2dftml_LeanFtml_instReprSt_repr(v_x_934_, v_prec_935_);
lean_dec(v_prec_935_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0(lean_object* v_a_937_, lean_object* v_n_938_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0___redArg(v_a_937_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0___boxed(lean_object* v_a_940_, lean_object* v_n_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprSt_repr_spec__0(v_a_940_, v_n_941_);
lean_dec(v_n_941_);
return v_res_942_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sp___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_949_; lean_object* v___x_950_; 
v___x_949_ = 32;
v___x_950_ = lean_box_uint32(v___x_949_);
return v___x_950_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sp___closed__0(void){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_951_ = lean_box(0);
v___x_952_ = lp_lean_x2dftml_LeanFtml_sp___closed__0___boxed__const__1;
v___x_953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set(v___x_953_, 1, v___x_951_);
return v___x_953_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sp___closed__1(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sp___closed__0, &lp_lean_x2dftml_LeanFtml_sp___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_sp___closed__0);
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
return v___x_955_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sp(void){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sp___closed__1, &lp_lean_x2dftml_LeanFtml_sp___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_sp___closed__1);
return v___x_956_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isSp(lean_object* v_x_957_){
_start:
{
if (lean_obj_tag(v_x_957_) == 0)
{
lean_object* v_a_958_; 
v_a_958_ = lean_ctor_get(v_x_957_, 0);
if (lean_obj_tag(v_a_958_) == 1)
{
lean_object* v_head_959_; lean_object* v_tail_960_; uint32_t v___x_961_; uint32_t v___x_962_; uint8_t v___x_963_; 
v_head_959_ = lean_ctor_get(v_a_958_, 0);
v_tail_960_ = lean_ctor_get(v_a_958_, 1);
v___x_961_ = 32;
v___x_962_ = lean_unbox_uint32(v_head_959_);
v___x_963_ = lean_uint32_dec_eq(v___x_962_, v___x_961_);
if (v___x_963_ == 0)
{
return v___x_963_;
}
else
{
if (lean_obj_tag(v_tail_960_) == 0)
{
return v___x_963_;
}
else
{
uint8_t v___x_964_; 
v___x_964_ = 0;
return v___x_964_;
}
}
}
else
{
uint8_t v___x_965_; 
v___x_965_ = 0;
return v___x_965_;
}
}
else
{
uint8_t v___x_966_; 
v___x_966_ = 0;
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isSp___boxed(lean_object* v_x_967_){
_start:
{
uint8_t v_res_968_; lean_object* v_r_969_; 
v_res_968_ = lp_lean_x2dftml_LeanFtml_isSp(v_x_967_);
lean_dec(v_x_967_);
v_r_969_ = lean_box(v_res_968_);
return v_r_969_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimRev(lean_object* v_x_970_){
_start:
{
if (lean_obj_tag(v_x_970_) == 0)
{
return v_x_970_;
}
else
{
lean_object* v_head_971_; lean_object* v_tail_972_; uint8_t v___x_973_; 
v_head_971_ = lean_ctor_get(v_x_970_, 0);
v_tail_972_ = lean_ctor_get(v_x_970_, 1);
v___x_973_ = lp_lean_x2dftml_LeanFtml_isSp(v_head_971_);
if (v___x_973_ == 0)
{
lean_inc_ref(v_x_970_);
return v_x_970_;
}
else
{
v_x_970_ = v_tail_972_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimRev___boxed(lean_object* v_x_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = lp_lean_x2dftml_LeanFtml_trimRev(v_x_975_);
lean_dec(v_x_975_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimSpaces(lean_object* v_xs_977_){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_978_ = l_List_reverse___redArg(v_xs_977_);
v___x_979_ = lp_lean_x2dftml_LeanFtml_trimRev(v___x_978_);
lean_dec(v___x_978_);
v___x_980_ = l_List_reverse___redArg(v___x_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ParagraphStack_0__LeanFtml_isSp_match__1_splitter___redArg(lean_object* v_x_981_, lean_object* v_h__1_982_, lean_object* v_h__2_983_){
_start:
{
if (lean_obj_tag(v_x_981_) == 0)
{
lean_object* v_a_984_; 
v_a_984_ = lean_ctor_get(v_x_981_, 0);
lean_inc(v_a_984_);
if (lean_obj_tag(v_a_984_) == 1)
{
lean_object* v_head_985_; lean_object* v_tail_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1009_; 
v_head_985_ = lean_ctor_get(v_a_984_, 0);
v_tail_986_ = lean_ctor_get(v_a_984_, 1);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_a_984_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_988_ = v_a_984_;
v_isShared_989_ = v_isSharedCheck_1009_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_tail_986_);
lean_inc(v_head_985_);
lean_dec(v_a_984_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1009_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
uint32_t v___x_990_; uint32_t v___x_991_; uint8_t v___x_992_; 
v___x_990_ = 32;
v___x_991_ = lean_unbox_uint32(v_head_985_);
lean_dec(v_head_985_);
v___x_992_ = lean_uint32_dec_eq(v___x_991_, v___x_990_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; 
lean_del_object(v___x_988_);
lean_dec(v_tail_986_);
lean_dec(v_h__1_982_);
v___x_993_ = lean_apply_2(v_h__2_983_, v_x_981_, lean_box(0));
return v___x_993_;
}
else
{
lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1007_; 
v_isSharedCheck_1007_ = !lean_is_exclusive(v_x_981_);
if (v_isSharedCheck_1007_ == 0)
{
lean_object* v_unused_1008_; 
v_unused_1008_ = lean_ctor_get(v_x_981_, 0);
lean_dec(v_unused_1008_);
v___x_995_ = v_x_981_;
v_isShared_996_ = v_isSharedCheck_1007_;
goto v_resetjp_994_;
}
else
{
lean_dec(v_x_981_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1007_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
if (lean_obj_tag(v_tail_986_) == 0)
{
lean_object* v___x_997_; lean_object* v___x_998_; 
lean_del_object(v___x_995_);
lean_del_object(v___x_988_);
lean_dec(v_h__2_983_);
v___x_997_ = lean_box(0);
v___x_998_ = lean_apply_1(v_h__1_982_, v___x_997_);
return v___x_998_;
}
else
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
lean_dec(v_h__1_982_);
v___x_999_ = lp_lean_x2dftml_LeanFtml_sp___closed__0___boxed__const__1;
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v___x_999_);
v___x_1001_ = v___x_988_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_tail_986_);
v___x_1001_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1003_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 0, v___x_1001_);
v___x_1003_ = v___x_995_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_apply_2(v_h__2_983_, v___x_1003_, lean_box(0));
return v___x_1004_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1010_; 
lean_dec(v_a_984_);
lean_dec(v_h__1_982_);
v___x_1010_ = lean_apply_2(v_h__2_983_, v_x_981_, lean_box(0));
return v___x_1010_;
}
}
else
{
lean_object* v___x_1011_; 
lean_dec(v_h__1_982_);
v___x_1011_ = lean_apply_2(v_h__2_983_, v_x_981_, lean_box(0));
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ParagraphStack_0__LeanFtml_isSp_match__1_splitter(lean_object* v_motive_1012_, lean_object* v_x_1013_, lean_object* v_h__1_1014_, lean_object* v_h__2_1015_){
_start:
{
if (lean_obj_tag(v_x_1013_) == 0)
{
lean_object* v_a_1016_; 
v_a_1016_ = lean_ctor_get(v_x_1013_, 0);
lean_inc(v_a_1016_);
if (lean_obj_tag(v_a_1016_) == 1)
{
lean_object* v_head_1017_; lean_object* v_tail_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1041_; 
v_head_1017_ = lean_ctor_get(v_a_1016_, 0);
v_tail_1018_ = lean_ctor_get(v_a_1016_, 1);
v_isSharedCheck_1041_ = !lean_is_exclusive(v_a_1016_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1020_ = v_a_1016_;
v_isShared_1021_ = v_isSharedCheck_1041_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_tail_1018_);
lean_inc(v_head_1017_);
lean_dec(v_a_1016_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1041_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
uint32_t v___x_1022_; uint32_t v___x_1023_; uint8_t v___x_1024_; 
v___x_1022_ = 32;
v___x_1023_ = lean_unbox_uint32(v_head_1017_);
lean_dec(v_head_1017_);
v___x_1024_ = lean_uint32_dec_eq(v___x_1023_, v___x_1022_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; 
lean_del_object(v___x_1020_);
lean_dec(v_tail_1018_);
lean_dec(v_h__1_1014_);
v___x_1025_ = lean_apply_2(v_h__2_1015_, v_x_1013_, lean_box(0));
return v___x_1025_;
}
else
{
lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1039_; 
v_isSharedCheck_1039_ = !lean_is_exclusive(v_x_1013_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v_x_1013_, 0);
lean_dec(v_unused_1040_);
v___x_1027_ = v_x_1013_;
v_isShared_1028_ = v_isSharedCheck_1039_;
goto v_resetjp_1026_;
}
else
{
lean_dec(v_x_1013_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1039_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
if (lean_obj_tag(v_tail_1018_) == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
lean_del_object(v___x_1027_);
lean_del_object(v___x_1020_);
lean_dec(v_h__2_1015_);
v___x_1029_ = lean_box(0);
v___x_1030_ = lean_apply_1(v_h__1_1014_, v___x_1029_);
return v___x_1030_;
}
else
{
lean_object* v___x_1031_; lean_object* v___x_1033_; 
lean_dec(v_h__1_1014_);
v___x_1031_ = lp_lean_x2dftml_LeanFtml_sp___closed__0___boxed__const__1;
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v___x_1031_);
v___x_1033_ = v___x_1020_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1031_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_tail_1018_);
v___x_1033_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
lean_object* v___x_1035_; 
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v___x_1033_);
v___x_1035_ = v___x_1027_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_apply_2(v_h__2_1015_, v___x_1035_, lean_box(0));
return v___x_1036_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1042_; 
lean_dec(v_a_1016_);
lean_dec(v_h__1_1014_);
v___x_1042_ = lean_apply_2(v_h__2_1015_, v_x_1013_, lean_box(0));
return v___x_1042_;
}
}
else
{
lean_object* v___x_1043_; 
lean_dec(v_h__1_1014_);
v___x_1043_ = lean_apply_2(v_h__2_1015_, v_x_1013_, lean_box(0));
return v___x_1043_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildParagraph(lean_object* v_s_1044_){
_start:
{
lean_object* v_current_1045_; lean_object* v_es_1046_; uint8_t v___x_1047_; 
v_current_1045_ = lean_ctor_get(v_s_1044_, 0);
lean_inc(v_current_1045_);
lean_dec_ref(v_s_1044_);
v_es_1046_ = lp_lean_x2dftml_LeanFtml_trimSpaces(v_current_1045_);
v___x_1047_ = l_List_isEmpty___redArg(v_es_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1048_, 0, v_es_1046_);
v___x_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; 
lean_dec(v_es_1046_);
v___x_1050_ = lean_box(0);
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_endParagraph_spec__0(lean_object* v_a_1051_, lean_object* v_a_1052_){
_start:
{
if (lean_obj_tag(v_a_1051_) == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = l_List_reverse___redArg(v_a_1052_);
return v___x_1053_;
}
else
{
lean_object* v_head_1054_; lean_object* v_tail_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1064_; 
v_head_1054_ = lean_ctor_get(v_a_1051_, 0);
v_tail_1055_ = lean_ctor_get(v_a_1051_, 1);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_a_1051_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1057_ = v_a_1051_;
v_isShared_1058_ = v_isSharedCheck_1064_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_tail_1055_);
lean_inc(v_head_1054_);
lean_dec(v_a_1051_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1064_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1059_, 0, v_head_1054_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 1, v_a_1052_);
lean_ctor_set(v___x_1057_, 0, v___x_1059_);
v___x_1061_ = v___x_1057_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1059_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_a_1052_);
v___x_1061_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
v_a_1051_ = v_tail_1055_;
v_a_1052_ = v___x_1061_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_endParagraph(lean_object* v_s_1065_){
_start:
{
lean_object* v_current_1066_; lean_object* v_finished_1067_; uint8_t v_unwrapped_1068_; uint8_t v_lineStart_1069_; uint8_t v_breakSeen_1070_; lean_object* v___y_1072_; 
v_current_1066_ = lean_ctor_get(v_s_1065_, 0);
v_finished_1067_ = lean_ctor_get(v_s_1065_, 1);
lean_inc(v_finished_1067_);
v_unwrapped_1068_ = lean_ctor_get_uint8(v_s_1065_, sizeof(void*)*2);
v_lineStart_1069_ = lean_ctor_get_uint8(v_s_1065_, sizeof(void*)*2 + 2);
v_breakSeen_1070_ = lean_ctor_get_uint8(v_s_1065_, sizeof(void*)*2 + 3);
if (v_unwrapped_1068_ == 0)
{
lean_object* v___x_1076_; 
v___x_1076_ = lp_lean_x2dftml_LeanFtml_buildParagraph(v_s_1065_);
if (lean_obj_tag(v___x_1076_) == 0)
{
v___y_1072_ = v_finished_1067_;
goto v___jp_1071_;
}
else
{
lean_object* v_val_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_val_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_val_1077_);
lean_dec_ref_known(v___x_1076_, 1);
v___x_1078_ = lean_box(0);
v___x_1079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1079_, 0, v_val_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = l_List_appendTR___redArg(v_finished_1067_, v___x_1079_);
v___y_1072_ = v___x_1080_;
goto v___jp_1071_;
}
}
else
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
lean_inc(v_current_1066_);
lean_dec_ref(v_s_1065_);
v___x_1081_ = lean_box(0);
v___x_1082_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_endParagraph_spec__0(v_current_1066_, v___x_1081_);
v___x_1083_ = l_List_appendTR___redArg(v_finished_1067_, v___x_1082_);
v___y_1072_ = v___x_1083_;
goto v___jp_1071_;
}
v___jp_1071_:
{
lean_object* v___x_1073_; uint8_t v___x_1074_; lean_object* v___x_1075_; 
v___x_1073_ = lean_box(0);
v___x_1074_ = 0;
v___x_1075_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_1075_, 0, v___x_1073_);
lean_ctor_set(v___x_1075_, 1, v___y_1072_);
lean_ctor_set_uint8(v___x_1075_, sizeof(void*)*2, v___x_1074_);
lean_ctor_set_uint8(v___x_1075_, sizeof(void*)*2 + 1, v___x_1074_);
lean_ctor_set_uint8(v___x_1075_, sizeof(void*)*2 + 2, v_lineStart_1069_);
lean_ctor_set_uint8(v___x_1075_, sizeof(void*)*2 + 3, v_breakSeen_1070_);
return v___x_1075_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_dropsSpace(lean_object* v_s_1084_){
_start:
{
lean_object* v_current_1085_; uint8_t v___x_1086_; 
v_current_1085_ = lean_ctor_get(v_s_1084_, 0);
v___x_1086_ = l_List_isEmpty___redArg(v_current_1085_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; 
v___x_1087_ = l_List_getLast_x3f___redArg(v_current_1085_);
if (lean_obj_tag(v___x_1087_) == 0)
{
return v___x_1086_;
}
else
{
lean_object* v_val_1088_; uint8_t v___x_1089_; 
v_val_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_val_1088_);
lean_dec_ref_known(v___x_1087_, 1);
v___x_1089_ = lp_lean_x2dftml_LeanFtml_isSp(v_val_1088_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; uint8_t v___x_1091_; 
v___x_1090_ = lean_box(2);
v___x_1091_ = lp_lean_x2dftml_LeanFtml_instBEqAElem_beq(v_val_1088_, v___x_1090_);
lean_dec(v_val_1088_);
return v___x_1091_;
}
else
{
lean_dec(v_val_1088_);
return v___x_1089_;
}
}
}
else
{
return v___x_1086_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropsSpace___boxed(lean_object* v_s_1092_){
_start:
{
uint8_t v_res_1093_; lean_object* v_r_1094_; 
v_res_1093_ = lp_lean_x2dftml_LeanFtml_dropsSpace(v_s_1092_);
lean_dec_ref(v_s_1092_);
v_r_1094_ = lean_box(v_res_1093_);
return v_r_1094_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_dropCond(lean_object* v_s_1095_, lean_object* v_e_1096_){
_start:
{
lean_object* v___x_1097_; uint8_t v___x_1098_; 
v___x_1097_ = lp_lean_x2dftml_LeanFtml_sp;
v___x_1098_ = lp_lean_x2dftml_LeanFtml_instBEqAElem_beq(v_e_1096_, v___x_1097_);
if (v___x_1098_ == 0)
{
return v___x_1098_;
}
else
{
uint8_t v___x_1099_; 
v___x_1099_ = lp_lean_x2dftml_LeanFtml_dropsSpace(v_s_1095_);
return v___x_1099_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropCond___boxed(lean_object* v_s_1100_, lean_object* v_e_1101_){
_start:
{
uint8_t v_res_1102_; lean_object* v_r_1103_; 
v_res_1102_ = lp_lean_x2dftml_LeanFtml_dropCond(v_s_1100_, v_e_1101_);
lean_dec(v_e_1101_);
lean_dec_ref(v_s_1100_);
v_r_1103_ = lean_box(v_res_1102_);
return v_r_1103_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushElement(lean_object* v_s_1104_, lean_object* v_e_1105_, uint8_t v_safe_1106_){
_start:
{
uint8_t v___y_1108_; lean_object* v___y_1109_; lean_object* v_current_1126_; lean_object* v_finished_1127_; uint8_t v_lineStart_1128_; uint8_t v___y_1129_; uint8_t v___y_1130_; lean_object* v___x_1136_; uint8_t v___x_1137_; uint8_t v___y_1139_; 
v___x_1136_ = lean_box(2);
v___x_1137_ = lp_lean_x2dftml_LeanFtml_instBEqAElem_beq(v_e_1105_, v___x_1136_);
if (v___x_1137_ == 0)
{
v___y_1139_ = v___x_1137_;
goto v___jp_1138_;
}
else
{
uint8_t v_breakSeen_1160_; 
v_breakSeen_1160_ = lean_ctor_get_uint8(v_s_1104_, sizeof(void*)*2 + 3);
v___y_1139_ = v_breakSeen_1160_;
goto v___jp_1138_;
}
v___jp_1107_:
{
lean_object* v_finished_1110_; uint8_t v_unwrapped_1111_; uint8_t v_discardedControl_1112_; uint8_t v_lineStart_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1123_; 
v_finished_1110_ = lean_ctor_get(v_s_1104_, 1);
v_unwrapped_1111_ = lean_ctor_get_uint8(v_s_1104_, sizeof(void*)*2);
v_discardedControl_1112_ = lean_ctor_get_uint8(v_s_1104_, sizeof(void*)*2 + 1);
v_lineStart_1113_ = lean_ctor_get_uint8(v_s_1104_, sizeof(void*)*2 + 2);
v_isSharedCheck_1123_ = !lean_is_exclusive(v_s_1104_);
if (v_isSharedCheck_1123_ == 0)
{
lean_object* v_unused_1124_; 
v_unused_1124_ = lean_ctor_get(v_s_1104_, 0);
lean_dec(v_unused_1124_);
v___x_1115_ = v_s_1104_;
v_isShared_1116_ = v_isSharedCheck_1123_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_finished_1110_);
lean_dec(v_s_1104_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1123_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1121_; 
v___x_1117_ = lean_box(0);
v___x_1118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1118_, 0, v_e_1105_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = l_List_appendTR___redArg(v___y_1109_, v___x_1118_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v___x_1119_);
v___x_1121_ = v___x_1115_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1119_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v_finished_1110_);
lean_ctor_set_uint8(v_reuseFailAlloc_1122_, sizeof(void*)*2, v_unwrapped_1111_);
lean_ctor_set_uint8(v_reuseFailAlloc_1122_, sizeof(void*)*2 + 1, v_discardedControl_1112_);
lean_ctor_set_uint8(v_reuseFailAlloc_1122_, sizeof(void*)*2 + 2, v_lineStart_1113_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
lean_ctor_set_uint8(v___x_1121_, sizeof(void*)*2 + 3, v___y_1108_);
return v___x_1121_;
}
}
}
v___jp_1125_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v_e_1105_);
v___x_1132_ = lean_box(0);
v___x_1133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1131_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
v___x_1134_ = l_List_appendTR___redArg(v_finished_1127_, v___x_1133_);
lean_inc(v_current_1126_);
v___x_1135_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_1135_, 0, v_current_1126_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*2, v___y_1130_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*2 + 1, v_safe_1106_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*2 + 2, v_lineStart_1128_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*2 + 3, v___y_1129_);
return v___x_1135_;
}
v___jp_1138_:
{
uint8_t v___x_1140_; 
v___x_1140_ = lp_lean_x2dftml_LeanFtml_dropCond(v_s_1104_, v_e_1105_);
if (v___x_1140_ == 0)
{
if (v_safe_1106_ == 0)
{
lean_object* v_s1_1141_; lean_object* v_finished_1142_; uint8_t v_lineStart_1143_; lean_object* v___x_1144_; 
v_s1_1141_ = lp_lean_x2dftml_LeanFtml_endParagraph(v_s_1104_);
v_finished_1142_ = lean_ctor_get(v_s1_1141_, 1);
lean_inc(v_finished_1142_);
v_lineStart_1143_ = lean_ctor_get_uint8(v_s1_1141_, sizeof(void*)*2 + 2);
lean_dec_ref(v_s1_1141_);
v___x_1144_ = lean_box(0);
v_current_1126_ = v___x_1144_;
v_finished_1127_ = v_finished_1142_;
v_lineStart_1128_ = v_lineStart_1143_;
v___y_1129_ = v___y_1139_;
v___y_1130_ = v___x_1137_;
goto v___jp_1125_;
}
else
{
if (v___x_1137_ == 0)
{
lean_object* v_current_1145_; 
v_current_1145_ = lean_ctor_get(v_s_1104_, 0);
lean_inc(v_current_1145_);
v___y_1108_ = v___y_1139_;
v___y_1109_ = v_current_1145_;
goto v___jp_1107_;
}
else
{
lean_object* v_current_1146_; lean_object* v___x_1147_; 
v_current_1146_ = lean_ctor_get(v_s_1104_, 0);
lean_inc(v_current_1146_);
v___x_1147_ = lp_lean_x2dftml_LeanFtml_trimSpaces(v_current_1146_);
v___y_1108_ = v___y_1139_;
v___y_1109_ = v___x_1147_;
goto v___jp_1107_;
}
}
}
else
{
lean_object* v_current_1148_; lean_object* v_finished_1149_; uint8_t v_unwrapped_1150_; uint8_t v_discardedControl_1151_; uint8_t v_lineStart_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
lean_dec(v_e_1105_);
v_current_1148_ = lean_ctor_get(v_s_1104_, 0);
v_finished_1149_ = lean_ctor_get(v_s_1104_, 1);
v_unwrapped_1150_ = lean_ctor_get_uint8(v_s_1104_, sizeof(void*)*2);
v_discardedControl_1151_ = lean_ctor_get_uint8(v_s_1104_, sizeof(void*)*2 + 1);
v_lineStart_1152_ = lean_ctor_get_uint8(v_s_1104_, sizeof(void*)*2 + 2);
v_isSharedCheck_1159_ = !lean_is_exclusive(v_s_1104_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v_s_1104_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_finished_1149_);
lean_inc(v_current_1148_);
lean_dec(v_s_1104_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_current_1148_);
lean_ctor_set(v_reuseFailAlloc_1158_, 1, v_finished_1149_);
lean_ctor_set_uint8(v_reuseFailAlloc_1158_, sizeof(void*)*2, v_unwrapped_1150_);
lean_ctor_set_uint8(v_reuseFailAlloc_1158_, sizeof(void*)*2 + 1, v_discardedControl_1151_);
lean_ctor_set_uint8(v_reuseFailAlloc_1158_, sizeof(void*)*2 + 2, v_lineStart_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_ctor_set_uint8(v___x_1157_, sizeof(void*)*2 + 3, v___y_1139_);
return v___x_1157_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushElement___boxed(lean_object* v_s_1161_, lean_object* v_e_1162_, lean_object* v_safe_1163_){
_start:
{
uint8_t v_safe_boxed_1164_; lean_object* v_res_1165_; 
v_safe_boxed_1164_ = lean_unbox(v_safe_1163_);
v_res_1165_ = lp_lean_x2dftml_LeanFtml_pushElement(v_s_1161_, v_e_1162_, v_safe_boxed_1164_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropLeadingBreaks(lean_object* v_x_1166_){
_start:
{
if (lean_obj_tag(v_x_1166_) == 1)
{
lean_object* v_head_1167_; 
v_head_1167_ = lean_ctor_get(v_x_1166_, 0);
if (lean_obj_tag(v_head_1167_) == 2)
{
lean_object* v_tail_1168_; 
v_tail_1168_ = lean_ctor_get(v_x_1166_, 1);
v_x_1166_ = v_tail_1168_;
goto _start;
}
else
{
lean_inc_ref(v_x_1166_);
return v_x_1166_;
}
}
else
{
lean_inc(v_x_1166_);
return v_x_1166_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropLeadingBreaks___boxed(lean_object* v_x_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = lp_lean_x2dftml_LeanFtml_dropLeadingBreaks(v_x_1170_);
lean_dec(v_x_1170_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushSafeElements(lean_object* v_s_1172_, lean_object* v_es_1173_){
_start:
{
lean_object* v_current_1174_; lean_object* v_finished_1175_; uint8_t v_unwrapped_1176_; uint8_t v_discardedControl_1177_; uint8_t v_lineStart_1178_; uint8_t v_breakSeen_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1192_; 
v_current_1174_ = lean_ctor_get(v_s_1172_, 0);
v_finished_1175_ = lean_ctor_get(v_s_1172_, 1);
v_unwrapped_1176_ = lean_ctor_get_uint8(v_s_1172_, sizeof(void*)*2);
v_discardedControl_1177_ = lean_ctor_get_uint8(v_s_1172_, sizeof(void*)*2 + 1);
v_lineStart_1178_ = lean_ctor_get_uint8(v_s_1172_, sizeof(void*)*2 + 2);
v_breakSeen_1179_ = lean_ctor_get_uint8(v_s_1172_, sizeof(void*)*2 + 3);
v_isSharedCheck_1192_ = !lean_is_exclusive(v_s_1172_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1181_ = v_s_1172_;
v_isShared_1182_ = v_isSharedCheck_1192_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_finished_1175_);
lean_inc(v_current_1174_);
lean_dec(v_s_1172_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1192_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
uint8_t v___x_1183_; 
v___x_1183_ = l_List_isEmpty___redArg(v_current_1174_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1184_ = l_List_appendTR___redArg(v_current_1174_, v_es_1173_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1184_);
v___x_1186_ = v___x_1181_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v_finished_1175_);
lean_ctor_set_uint8(v_reuseFailAlloc_1187_, sizeof(void*)*2, v_unwrapped_1176_);
lean_ctor_set_uint8(v_reuseFailAlloc_1187_, sizeof(void*)*2 + 1, v_discardedControl_1177_);
lean_ctor_set_uint8(v_reuseFailAlloc_1187_, sizeof(void*)*2 + 2, v_lineStart_1178_);
lean_ctor_set_uint8(v_reuseFailAlloc_1187_, sizeof(void*)*2 + 3, v_breakSeen_1179_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
else
{
lean_object* v___x_1188_; lean_object* v___x_1190_; 
lean_dec(v_current_1174_);
v___x_1188_ = lp_lean_x2dftml_LeanFtml_dropLeadingBreaks(v_es_1173_);
lean_dec(v_es_1173_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1188_);
v___x_1190_ = v___x_1181_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1188_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_finished_1175_);
lean_ctor_set_uint8(v_reuseFailAlloc_1191_, sizeof(void*)*2, v_unwrapped_1176_);
lean_ctor_set_uint8(v_reuseFailAlloc_1191_, sizeof(void*)*2 + 1, v_discardedControl_1177_);
lean_ctor_set_uint8(v_reuseFailAlloc_1191_, sizeof(void*)*2 + 2, v_lineStart_1178_);
lean_ctor_set_uint8(v_reuseFailAlloc_1191_, sizeof(void*)*2 + 3, v_breakSeen_1179_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_onlyWhitespace_spec__0(lean_object* v_x_1193_){
_start:
{
if (lean_obj_tag(v_x_1193_) == 0)
{
uint8_t v___x_1194_; 
v___x_1194_ = 1;
return v___x_1194_;
}
else
{
lean_object* v_head_1195_; lean_object* v_tail_1196_; uint32_t v___x_1197_; uint32_t v___x_1198_; uint8_t v___x_1199_; 
v_head_1195_ = lean_ctor_get(v_x_1193_, 0);
v_tail_1196_ = lean_ctor_get(v_x_1193_, 1);
v___x_1197_ = 32;
v___x_1198_ = lean_unbox_uint32(v_head_1195_);
v___x_1199_ = lean_uint32_dec_eq(v___x_1198_, v___x_1197_);
if (v___x_1199_ == 0)
{
uint32_t v___x_1200_; uint32_t v___x_1201_; uint8_t v___x_1202_; 
v___x_1200_ = 9;
v___x_1201_ = lean_unbox_uint32(v_head_1195_);
v___x_1202_ = lean_uint32_dec_eq(v___x_1201_, v___x_1200_);
if (v___x_1202_ == 0)
{
uint32_t v___x_1203_; uint32_t v___x_1204_; uint8_t v___x_1205_; 
v___x_1203_ = 10;
v___x_1204_ = lean_unbox_uint32(v_head_1195_);
v___x_1205_ = lean_uint32_dec_eq(v___x_1204_, v___x_1203_);
if (v___x_1205_ == 0)
{
uint32_t v___x_1206_; uint32_t v___x_1207_; uint8_t v___x_1208_; 
v___x_1206_ = 13;
v___x_1207_ = lean_unbox_uint32(v_head_1195_);
v___x_1208_ = lean_uint32_dec_eq(v___x_1207_, v___x_1206_);
if (v___x_1208_ == 0)
{
return v___x_1208_;
}
else
{
v_x_1193_ = v_tail_1196_;
goto _start;
}
}
else
{
v_x_1193_ = v_tail_1196_;
goto _start;
}
}
else
{
v_x_1193_ = v_tail_1196_;
goto _start;
}
}
else
{
v_x_1193_ = v_tail_1196_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_onlyWhitespace_spec__0___boxed(lean_object* v_x_1213_){
_start:
{
uint8_t v_res_1214_; lean_object* v_r_1215_; 
v_res_1214_ = lp_lean_x2dftml_List_all___at___00LeanFtml_onlyWhitespace_spec__0(v_x_1213_);
lean_dec(v_x_1213_);
v_r_1215_ = lean_box(v_res_1214_);
return v_r_1215_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_onlyWhitespace(lean_object* v_x_1216_){
_start:
{
if (lean_obj_tag(v_x_1216_) == 0)
{
uint8_t v___x_1217_; 
v___x_1217_ = 1;
return v___x_1217_;
}
else
{
lean_object* v_head_1218_; 
v_head_1218_ = lean_ctor_get(v_x_1216_, 0);
if (lean_obj_tag(v_head_1218_) == 0)
{
lean_object* v_tail_1219_; lean_object* v_a_1220_; uint8_t v___x_1221_; 
v_tail_1219_ = lean_ctor_get(v_x_1216_, 1);
v_a_1220_ = lean_ctor_get(v_head_1218_, 0);
v___x_1221_ = lp_lean_x2dftml_List_all___at___00LeanFtml_onlyWhitespace_spec__0(v_a_1220_);
if (v___x_1221_ == 0)
{
return v___x_1221_;
}
else
{
v_x_1216_ = v_tail_1219_;
goto _start;
}
}
else
{
uint8_t v___x_1223_; 
v___x_1223_ = 0;
return v___x_1223_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_onlyWhitespace___boxed(lean_object* v_x_1224_){
_start:
{
uint8_t v_res_1225_; lean_object* v_r_1226_; 
v_res_1225_ = lp_lean_x2dftml_LeanFtml_onlyWhitespace(v_x_1224_);
lean_dec(v_x_1224_);
v_r_1226_ = lean_box(v_res_1225_);
return v_r_1226_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___lam__0(lean_object* v_current_1227_, lean_object* v_00___1228_){
_start:
{
uint8_t v___x_1229_; 
v___x_1229_ = l_List_isEmpty___redArg(v_current_1227_);
if (v___x_1229_ == 0)
{
uint8_t v___x_1230_; 
v___x_1230_ = 1;
return v___x_1230_;
}
else
{
uint8_t v___x_1231_; 
v___x_1231_ = 0;
return v___x_1231_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___lam__0___boxed(lean_object* v_current_1232_, lean_object* v_00___1233_){
_start:
{
uint8_t v_res_1234_; lean_object* v_r_1235_; 
v_res_1234_ = lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___lam__0(v_current_1232_, v_00___1233_);
lean_dec(v_current_1232_);
v_r_1235_ = lean_box(v_res_1234_);
return v_r_1235_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__0(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = lp_lean_x2dftml_LeanFtml_sp;
v___x_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
return v___x_1237_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__1(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1238_ = lean_box(0);
v___x_1239_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__0, &lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__0);
v___x_1240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
lean_ctor_set(v___x_1240_, 1, v___x_1238_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_endParagraphAtBreak(lean_object* v_s_1241_){
_start:
{
uint8_t v___y_1243_; lean_object* v_current_1257_; lean_object* v_finished_1258_; uint8_t v_unwrapped_1259_; uint8_t v_discardedControl_1260_; uint8_t v_lineStart_1261_; 
v_current_1257_ = lean_ctor_get(v_s_1241_, 0);
v_finished_1258_ = lean_ctor_get(v_s_1241_, 1);
v_unwrapped_1259_ = lean_ctor_get_uint8(v_s_1241_, sizeof(void*)*2);
v_discardedControl_1260_ = lean_ctor_get_uint8(v_s_1241_, sizeof(void*)*2 + 1);
v_lineStart_1261_ = lean_ctor_get_uint8(v_s_1241_, sizeof(void*)*2 + 2);
if (v_unwrapped_1259_ == 0)
{
goto v___jp_1262_;
}
else
{
lean_object* v___x_1281_; uint8_t v___x_1282_; 
v___x_1281_ = lean_box(0);
v___x_1282_ = lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___lam__0(v_current_1257_, v___x_1281_);
if (v___x_1282_ == 0)
{
goto v___jp_1262_;
}
else
{
uint8_t v___x_1283_; 
v___x_1283_ = lp_lean_x2dftml_LeanFtml_onlyWhitespace(v_current_1257_);
if (v___x_1283_ == 0)
{
goto v___jp_1262_;
}
else
{
lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1291_; 
lean_inc(v_finished_1258_);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_s_1241_);
if (v_isSharedCheck_1291_ == 0)
{
lean_object* v_unused_1292_; lean_object* v_unused_1293_; 
v_unused_1292_ = lean_ctor_get(v_s_1241_, 1);
lean_dec(v_unused_1292_);
v_unused_1293_ = lean_ctor_get(v_s_1241_, 0);
lean_dec(v_unused_1293_);
v___x_1285_ = v_s_1241_;
v_isShared_1286_ = v_isSharedCheck_1291_;
goto v_resetjp_1284_;
}
else
{
lean_dec(v_s_1241_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1291_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___x_1287_ = lean_box(0);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 0, v___x_1287_);
v___x_1289_ = v___x_1285_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v___x_1287_);
lean_ctor_set(v_reuseFailAlloc_1290_, 1, v_finished_1258_);
lean_ctor_set_uint8(v_reuseFailAlloc_1290_, sizeof(void*)*2, v_unwrapped_1259_);
lean_ctor_set_uint8(v_reuseFailAlloc_1290_, sizeof(void*)*2 + 1, v_discardedControl_1260_);
lean_ctor_set_uint8(v_reuseFailAlloc_1290_, sizeof(void*)*2 + 2, v_lineStart_1261_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*2 + 3, v___x_1282_);
return v___x_1289_;
}
}
}
}
}
v___jp_1242_:
{
lean_object* v_s1_1244_; lean_object* v_finished_1245_; uint8_t v_lineStart_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1255_; 
v_s1_1244_ = lp_lean_x2dftml_LeanFtml_endParagraph(v_s_1241_);
v_finished_1245_ = lean_ctor_get(v_s1_1244_, 1);
v_lineStart_1246_ = lean_ctor_get_uint8(v_s1_1244_, sizeof(void*)*2 + 2);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_s1_1244_);
if (v_isSharedCheck_1255_ == 0)
{
lean_object* v_unused_1256_; 
v_unused_1256_ = lean_ctor_get(v_s1_1244_, 0);
lean_dec(v_unused_1256_);
v___x_1248_ = v_s1_1244_;
v_isShared_1249_ = v_isSharedCheck_1255_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_finished_1245_);
lean_dec(v_s1_1244_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1255_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
uint8_t v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1253_; 
v___x_1250_ = 0;
v___x_1251_ = lean_box(0);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 0, v___x_1251_);
v___x_1253_ = v___x_1248_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1251_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_finished_1245_);
lean_ctor_set_uint8(v_reuseFailAlloc_1254_, sizeof(void*)*2 + 2, v_lineStart_1246_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_ctor_set_uint8(v___x_1253_, sizeof(void*)*2, v___x_1250_);
lean_ctor_set_uint8(v___x_1253_, sizeof(void*)*2 + 1, v___x_1250_);
lean_ctor_set_uint8(v___x_1253_, sizeof(void*)*2 + 3, v___y_1243_);
return v___x_1253_;
}
}
}
v___jp_1262_:
{
uint8_t v___x_1263_; 
v___x_1263_ = 1;
if (v_unwrapped_1259_ == 0)
{
v___y_1243_ = v___x_1263_;
goto v___jp_1242_;
}
else
{
lean_object* v___x_1264_; uint8_t v___x_1265_; 
v___x_1264_ = lean_box(0);
v___x_1265_ = lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___lam__0(v_current_1257_, v___x_1264_);
if (v___x_1265_ == 0)
{
v___y_1243_ = v___x_1263_;
goto v___jp_1242_;
}
else
{
lean_object* v_s1_1266_; lean_object* v_finished_1267_; uint8_t v_lineStart_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1279_; 
v_s1_1266_ = lp_lean_x2dftml_LeanFtml_endParagraph(v_s_1241_);
v_finished_1267_ = lean_ctor_get(v_s1_1266_, 1);
v_lineStart_1268_ = lean_ctor_get_uint8(v_s1_1266_, sizeof(void*)*2 + 2);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_s1_1266_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; 
v_unused_1280_ = lean_ctor_get(v_s1_1266_, 0);
lean_dec(v_unused_1280_);
v___x_1270_ = v_s1_1266_;
v_isShared_1271_ = v_isSharedCheck_1279_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_finished_1267_);
lean_dec(v_s1_1266_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1279_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
uint8_t v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1272_ = 0;
v___x_1273_ = lean_box(0);
v___x_1274_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__1, &lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_endParagraphAtBreak___closed__1);
v___x_1275_ = l_List_appendTR___redArg(v_finished_1267_, v___x_1274_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 1, v___x_1275_);
lean_ctor_set(v___x_1270_, 0, v___x_1273_);
v___x_1277_ = v___x_1270_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v___x_1275_);
lean_ctor_set_uint8(v_reuseFailAlloc_1278_, sizeof(void*)*2 + 2, v_lineStart_1268_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_ctor_set_uint8(v___x_1277_, sizeof(void*)*2, v___x_1272_);
lean_ctor_set_uint8(v___x_1277_, sizeof(void*)*2 + 1, v___x_1272_);
lean_ctor_set_uint8(v___x_1277_, sizeof(void*)*2 + 3, v___x_1263_);
return v___x_1277_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intoElements(lean_object* v_s_1294_){
_start:
{
lean_object* v___x_1295_; lean_object* v_finished_1296_; 
v___x_1295_ = lp_lean_x2dftml_LeanFtml_endParagraph(v_s_1294_);
v_finished_1296_ = lean_ctor_get(v___x_1295_, 1);
lean_inc(v_finished_1296_);
lean_dec_ref(v___x_1295_);
return v_finished_1296_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ParagraphStack_0__LeanFtml_endParagraph_match__1_splitter___redArg(lean_object* v_x_1297_, lean_object* v_h__1_1298_, lean_object* v_h__2_1299_){
_start:
{
if (lean_obj_tag(v_x_1297_) == 0)
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
lean_dec(v_h__1_1298_);
v___x_1300_ = lean_box(0);
v___x_1301_ = lean_apply_1(v_h__2_1299_, v___x_1300_);
return v___x_1301_;
}
else
{
lean_object* v_val_1302_; lean_object* v___x_1303_; 
lean_dec(v_h__2_1299_);
v_val_1302_ = lean_ctor_get(v_x_1297_, 0);
lean_inc(v_val_1302_);
lean_dec_ref_known(v_x_1297_, 1);
v___x_1303_ = lean_apply_1(v_h__1_1298_, v_val_1302_);
return v___x_1303_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ParagraphStack_0__LeanFtml_endParagraph_match__1_splitter(lean_object* v_motive_1304_, lean_object* v_x_1305_, lean_object* v_h__1_1306_, lean_object* v_h__2_1307_){
_start:
{
if (lean_obj_tag(v_x_1305_) == 0)
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
lean_dec(v_h__1_1306_);
v___x_1308_ = lean_box(0);
v___x_1309_ = lean_apply_1(v_h__2_1307_, v___x_1308_);
return v___x_1309_;
}
else
{
lean_object* v_val_1310_; lean_object* v___x_1311_; 
lean_dec(v_h__2_1307_);
v_val_1310_ = lean_ctor_get(v_x_1305_, 0);
lean_inc(v_val_1310_);
lean_dec_ref_known(v_x_1305_, 1);
v___x_1311_ = lean_apply_1(v_h__1_1306_, v_val_1310_);
return v___x_1311_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ParagraphStack(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_sp___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_sp___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_sp___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_sp = _init_lp_lean_x2dftml_LeanFtml_sp();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_sp);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
