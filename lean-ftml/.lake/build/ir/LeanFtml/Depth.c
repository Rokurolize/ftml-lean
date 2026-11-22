// Lean compiler output
// Module: LeanFtml.Depth
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
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_repr___redArg(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_nil_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_nil_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_item_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_item_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_list_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_list_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqForest___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqForest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqForest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqForest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanFtml.Forest.nil"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.Forest.item"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LeanFtml.Forest.list"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__9_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_appendForest(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_appendForest___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_walk___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_walk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqFrame___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqFrame___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ltype"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "items"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__16_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "finished"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stack"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_placedForest_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_placedForest___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_placedForest___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_placedForest___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedForest___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedForest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_placedForest_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedStack___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedStack(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedState___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastFrame___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastFrame___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastFrame(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastFrame___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modifyTop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modifyTop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_decrease___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_decrease(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_framesOf___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_framesOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustDown___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustDown(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newList___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushItem___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushItem___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushItem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRow___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRow___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "depth"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "item"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rowPlaced___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rowPlaced___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rowPlaced(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rowPlaced___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustStack___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustStack___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustStack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustStack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_step___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_step___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runRows___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runRows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapFrames___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapFrames(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intoTrees___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intoTrees(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_processDepths___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_processDepths(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_Depth_0__LeanFtml_lastFrame_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_Depth_0__LeanFtml_lastFrame_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl___redArg(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl(lean_object* v_L_5_, lean_object* v_T_6_, lean_object* v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_tag_nat(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl___boxed(lean_object* v_L_9_, lean_object* v_T_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lp_lean_x2dftml_LeanFtml_Forest_ctorIdx___impl(v_L_9_, v_T_10_, v_x_11_);
lean_dec(v_x_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(lean_object* v_t_13_, lean_object* v_k_14_){
_start:
{
switch(lean_obj_tag(v_t_13_))
{
case 0:
{
return v_k_14_;
}
case 1:
{
lean_object* v_a_15_; lean_object* v_a_16_; lean_object* v___x_17_; 
v_a_15_ = lean_ctor_get(v_t_13_, 0);
lean_inc(v_a_15_);
v_a_16_ = lean_ctor_get(v_t_13_, 1);
lean_inc(v_a_16_);
lean_dec_ref_known(v_t_13_, 2);
v___x_17_ = lean_apply_2(v_k_14_, v_a_15_, v_a_16_);
return v___x_17_;
}
default: 
{
lean_object* v_a_18_; lean_object* v_a_19_; lean_object* v_a_20_; lean_object* v___x_21_; 
v_a_18_ = lean_ctor_get(v_t_13_, 0);
lean_inc(v_a_18_);
v_a_19_ = lean_ctor_get(v_t_13_, 1);
lean_inc(v_a_19_);
v_a_20_ = lean_ctor_get(v_t_13_, 2);
lean_inc(v_a_20_);
lean_dec_ref_known(v_t_13_, 3);
v___x_21_ = lean_apply_3(v_k_14_, v_a_18_, v_a_19_, v_a_20_);
return v___x_21_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorElim(lean_object* v_L_22_, lean_object* v_T_23_, lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(v_t_26_, v_k_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_ctorElim___boxed(lean_object* v_L_30_, lean_object* v_T_31_, lean_object* v_motive_32_, lean_object* v_ctorIdx_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_k_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_lean_x2dftml_LeanFtml_Forest_ctorElim(v_L_30_, v_T_31_, v_motive_32_, v_ctorIdx_33_, v_t_34_, v_h_35_, v_k_36_);
lean_dec(v_ctorIdx_33_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_nil_elim___redArg(lean_object* v_t_38_, lean_object* v_nil_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(v_t_38_, v_nil_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_nil_elim(lean_object* v_L_41_, lean_object* v_T_42_, lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_nil_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(v_t_44_, v_nil_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_item_elim___redArg(lean_object* v_t_48_, lean_object* v_item_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(v_t_48_, v_item_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_item_elim(lean_object* v_L_51_, lean_object* v_T_52_, lean_object* v_motive_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_item_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(v_t_54_, v_item_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_list_elim___redArg(lean_object* v_t_58_, lean_object* v_list_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(v_t_58_, v_list_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_list_elim(lean_object* v_L_61_, lean_object* v_T_62_, lean_object* v_motive_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_list_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lp_lean_x2dftml_LeanFtml_Forest_ctorElim___redArg(v_t_64_, v_list_66_);
return v___x_67_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(lean_object* v_inst_68_, lean_object* v_inst_69_, lean_object* v_x_70_, lean_object* v_x_71_){
_start:
{
switch(lean_obj_tag(v_x_70_))
{
case 0:
{
lean_dec_ref(v_inst_69_);
lean_dec_ref(v_inst_68_);
if (lean_obj_tag(v_x_71_) == 0)
{
uint8_t v___x_72_; 
v___x_72_ = 1;
return v___x_72_;
}
else
{
uint8_t v___x_73_; 
lean_dec(v_x_71_);
v___x_73_ = 0;
return v___x_73_;
}
}
case 1:
{
if (lean_obj_tag(v_x_71_) == 1)
{
lean_object* v_a_74_; lean_object* v_a_75_; lean_object* v_a_76_; lean_object* v_a_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v_a_74_ = lean_ctor_get(v_x_70_, 0);
lean_inc(v_a_74_);
v_a_75_ = lean_ctor_get(v_x_70_, 1);
lean_inc(v_a_75_);
lean_dec_ref_known(v_x_70_, 2);
v_a_76_ = lean_ctor_get(v_x_71_, 0);
lean_inc(v_a_76_);
v_a_77_ = lean_ctor_get(v_x_71_, 1);
lean_inc(v_a_77_);
lean_dec_ref_known(v_x_71_, 2);
lean_inc_ref(v_inst_69_);
v___x_78_ = lean_apply_2(v_inst_69_, v_a_74_, v_a_76_);
v___x_79_ = lean_unbox(v___x_78_);
if (v___x_79_ == 0)
{
uint8_t v___x_80_; 
lean_dec(v_a_77_);
lean_dec(v_a_75_);
lean_dec_ref(v_inst_69_);
lean_dec_ref(v_inst_68_);
v___x_80_ = lean_unbox(v___x_78_);
return v___x_80_;
}
else
{
v_x_70_ = v_a_75_;
v_x_71_ = v_a_77_;
goto _start;
}
}
else
{
uint8_t v___x_82_; 
lean_dec_ref_known(v_x_70_, 2);
lean_dec(v_x_71_);
lean_dec_ref(v_inst_69_);
lean_dec_ref(v_inst_68_);
v___x_82_ = 0;
return v___x_82_;
}
}
default: 
{
if (lean_obj_tag(v_x_71_) == 2)
{
lean_object* v_a_83_; lean_object* v_a_84_; lean_object* v_a_85_; lean_object* v_a_86_; lean_object* v_a_87_; lean_object* v_a_88_; lean_object* v___x_89_; uint8_t v___x_90_; 
v_a_83_ = lean_ctor_get(v_x_70_, 0);
lean_inc(v_a_83_);
v_a_84_ = lean_ctor_get(v_x_70_, 1);
lean_inc(v_a_84_);
v_a_85_ = lean_ctor_get(v_x_70_, 2);
lean_inc(v_a_85_);
lean_dec_ref_known(v_x_70_, 3);
v_a_86_ = lean_ctor_get(v_x_71_, 0);
lean_inc(v_a_86_);
v_a_87_ = lean_ctor_get(v_x_71_, 1);
lean_inc(v_a_87_);
v_a_88_ = lean_ctor_get(v_x_71_, 2);
lean_inc(v_a_88_);
lean_dec_ref_known(v_x_71_, 3);
lean_inc_ref(v_inst_68_);
v___x_89_ = lean_apply_2(v_inst_68_, v_a_83_, v_a_86_);
v___x_90_ = lean_unbox(v___x_89_);
if (v___x_90_ == 0)
{
uint8_t v___x_91_; 
lean_dec(v_a_88_);
lean_dec(v_a_87_);
lean_dec(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_inst_69_);
lean_dec_ref(v_inst_68_);
v___x_91_ = lean_unbox(v___x_89_);
return v___x_91_;
}
else
{
uint8_t v_inst_92_; 
lean_inc_ref(v_inst_69_);
lean_inc_ref(v_inst_68_);
v_inst_92_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(v_inst_68_, v_inst_69_, v_a_84_, v_a_87_);
if (v_inst_92_ == 0)
{
lean_dec(v_a_88_);
lean_dec(v_a_85_);
lean_dec_ref(v_inst_69_);
lean_dec_ref(v_inst_68_);
return v_inst_92_;
}
else
{
v_x_70_ = v_a_85_;
v_x_71_ = v_a_88_;
goto _start;
}
}
}
else
{
uint8_t v___x_94_; 
lean_dec_ref_known(v_x_70_, 3);
lean_dec(v_x_71_);
lean_dec_ref(v_inst_69_);
lean_dec_ref(v_inst_68_);
v___x_94_ = 0;
return v___x_94_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg___boxed(lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
uint8_t v_res_99_; lean_object* v_r_100_; 
v_res_99_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(v_inst_95_, v_inst_96_, v_x_97_, v_x_98_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq(lean_object* v_L_101_, lean_object* v_T_102_, lean_object* v_inst_103_, lean_object* v_inst_104_, lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(v_inst_103_, v_inst_104_, v_x_105_, v_x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___boxed(lean_object* v_L_108_, lean_object* v_T_109_, lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_x_112_, lean_object* v_x_113_){
_start:
{
uint8_t v_res_114_; lean_object* v_r_115_; 
v_res_114_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq(v_L_108_, v_T_109_, v_inst_110_, v_inst_111_, v_x_112_, v_x_113_);
v_r_115_ = lean_box(v_res_114_);
return v_r_115_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqForest___redArg(lean_object* v_inst_116_, lean_object* v_inst_117_, lean_object* v_x_118_, lean_object* v_x_119_){
_start:
{
uint8_t v___x_120_; 
v___x_120_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(v_inst_116_, v_inst_117_, v_x_118_, v_x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqForest___redArg___boxed(lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint8_t v_res_125_; lean_object* v_r_126_; 
v_res_125_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest___redArg(v_inst_121_, v_inst_122_, v_x_123_, v_x_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqForest(lean_object* v_L_127_, lean_object* v_T_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_x_131_, lean_object* v_x_132_){
_start:
{
uint8_t v___x_133_; 
v___x_133_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(v_inst_129_, v_inst_130_, v_x_131_, v_x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqForest___boxed(lean_object* v_L_134_, lean_object* v_T_135_, lean_object* v_inst_136_, lean_object* v_inst_137_, lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
uint8_t v_res_140_; lean_object* v_r_141_; 
v_res_140_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest(v_L_134_, v_T_135_, v_inst_136_, v_inst_137_, v_x_138_, v_x_139_);
v_r_141_ = lean_box(v_res_140_);
return v_r_141_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_unsigned_to_nat(2u);
v___x_146_ = lean_nat_to_int(v___x_145_);
return v___x_146_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(1u);
v___x_148_ = lean_nat_to_int(v___x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg(lean_object* v_inst_161_, lean_object* v_inst_162_, lean_object* v_x_163_, lean_object* v_prec_164_){
_start:
{
lean_object* v___y_166_; 
switch(lean_obj_tag(v_x_163_))
{
case 0:
{
lean_object* v___x_172_; uint8_t v___x_173_; 
lean_dec_ref(v_inst_162_);
lean_dec_ref(v_inst_161_);
v___x_172_ = lean_unsigned_to_nat(1024u);
v___x_173_ = lean_nat_dec_le(v___x_172_, v_prec_164_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2, &lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2);
v___y_166_ = v___x_174_;
goto v___jp_165_;
}
else
{
lean_object* v___x_175_; 
v___x_175_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3, &lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3);
v___y_166_ = v___x_175_;
goto v___jp_165_;
}
}
case 1:
{
lean_object* v_a_176_; lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_200_; 
v_a_176_ = lean_ctor_get(v_x_163_, 0);
v_a_177_ = lean_ctor_get(v_x_163_, 1);
v_isSharedCheck_200_ = !lean_is_exclusive(v_x_163_);
if (v_isSharedCheck_200_ == 0)
{
v___x_179_ = v_x_163_;
v_isShared_180_ = v_isSharedCheck_200_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_inc(v_a_176_);
lean_dec(v_x_163_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_200_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___y_183_; uint8_t v___x_197_; 
v___x_181_ = lean_unsigned_to_nat(1024u);
v___x_197_ = lean_nat_dec_le(v___x_181_, v_prec_164_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; 
v___x_198_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2, &lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2);
v___y_183_ = v___x_198_;
goto v___jp_182_;
}
else
{
lean_object* v___x_199_; 
v___x_199_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3, &lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3);
v___y_183_ = v___x_199_;
goto v___jp_182_;
}
v___jp_182_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_184_ = lean_box(1);
v___x_185_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__6));
lean_inc_ref(v_inst_162_);
v___x_186_ = lean_apply_2(v_inst_162_, v_a_176_, v___x_181_);
if (v_isShared_180_ == 0)
{
lean_ctor_set_tag(v___x_179_, 5);
lean_ctor_set(v___x_179_, 1, v___x_186_);
lean_ctor_set(v___x_179_, 0, v___x_185_);
v___x_188_ = v___x_179_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_185_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v___x_186_);
v___x_188_ = v_reuseFailAlloc_196_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set(v___x_189_, 1, v___x_184_);
v___x_190_ = lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg(v_inst_161_, v_inst_162_, v_a_177_, v___x_181_);
v___x_191_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_189_);
lean_ctor_set(v___x_191_, 1, v___x_190_);
lean_inc(v___y_183_);
v___x_192_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_192_, 0, v___y_183_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = 0;
v___x_194_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_194_, 0, v___x_192_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*1, v___x_193_);
v___x_195_ = l_Repr_addAppParen(v___x_194_, v_prec_164_);
return v___x_195_;
}
}
}
}
default: 
{
lean_object* v_a_201_; lean_object* v_a_202_; lean_object* v_a_203_; lean_object* v___x_204_; lean_object* v___y_206_; uint8_t v___x_221_; 
v_a_201_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_a_201_);
v_a_202_ = lean_ctor_get(v_x_163_, 1);
lean_inc(v_a_202_);
v_a_203_ = lean_ctor_get(v_x_163_, 2);
lean_inc(v_a_203_);
lean_dec_ref_known(v_x_163_, 3);
v___x_204_ = lean_unsigned_to_nat(1024u);
v___x_221_ = lean_nat_dec_le(v___x_204_, v_prec_164_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
v___x_222_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2, &lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__2);
v___y_206_ = v___x_222_;
goto v___jp_205_;
}
else
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3, &lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__3);
v___y_206_ = v___x_223_;
goto v___jp_205_;
}
v___jp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_207_ = lean_box(1);
v___x_208_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__9));
lean_inc_ref_n(v_inst_161_, 2);
v___x_209_ = lean_apply_2(v_inst_161_, v_a_201_, v___x_204_);
v___x_210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_207_);
lean_inc_ref(v_inst_162_);
v___x_212_ = lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg(v_inst_161_, v_inst_162_, v_a_202_, v___x_204_);
v___x_213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_207_);
v___x_215_ = lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg(v_inst_161_, v_inst_162_, v_a_203_, v___x_204_);
v___x_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
lean_inc(v___y_206_);
v___x_217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_217_, 0, v___y_206_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = 0;
v___x_219_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*1, v___x_218_);
v___x_220_ = l_Repr_addAppParen(v___x_219_, v_prec_164_);
return v___x_220_;
}
}
}
v___jp_165_:
{
lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_167_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___closed__1));
lean_inc(v___y_166_);
v___x_168_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_168_, 0, v___y_166_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
v___x_169_ = 0;
v___x_170_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_170_, 0, v___x_168_);
lean_ctor_set_uint8(v___x_170_, sizeof(void*)*1, v___x_169_);
v___x_171_ = l_Repr_addAppParen(v___x_170_, v_prec_164_);
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg___boxed(lean_object* v_inst_224_, lean_object* v_inst_225_, lean_object* v_x_226_, lean_object* v_prec_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg(v_inst_224_, v_inst_225_, v_x_226_, v_prec_227_);
lean_dec(v_prec_227_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr(lean_object* v_L_229_, lean_object* v_T_230_, lean_object* v_inst_231_, lean_object* v_inst_232_, lean_object* v_x_233_, lean_object* v_prec_234_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg(v_inst_231_, v_inst_232_, v_x_233_, v_prec_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest_repr___boxed(lean_object* v_L_236_, lean_object* v_T_237_, lean_object* v_inst_238_, lean_object* v_inst_239_, lean_object* v_x_240_, lean_object* v_prec_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = lp_lean_x2dftml_LeanFtml_instReprForest_repr(v_L_236_, v_T_237_, v_inst_238_, v_inst_239_, v_x_240_, v_prec_241_);
lean_dec(v_prec_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest___redArg(lean_object* v_inst_243_, lean_object* v_inst_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprForest_repr___boxed), 6, 4);
lean_closure_set(v___x_245_, 0, lean_box(0));
lean_closure_set(v___x_245_, 1, lean_box(0));
lean_closure_set(v___x_245_, 2, v_inst_243_);
lean_closure_set(v___x_245_, 3, v_inst_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprForest(lean_object* v_L_246_, lean_object* v_T_247_, lean_object* v_inst_248_, lean_object* v_inst_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprForest_repr___boxed), 6, 4);
lean_closure_set(v___x_250_, 0, lean_box(0));
lean_closure_set(v___x_250_, 1, lean_box(0));
lean_closure_set(v___x_250_, 2, v_inst_248_);
lean_closure_set(v___x_250_, 3, v_inst_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(lean_object* v_x_251_, lean_object* v_x_252_){
_start:
{
switch(lean_obj_tag(v_x_251_))
{
case 0:
{
lean_inc(v_x_252_);
return v_x_252_;
}
case 1:
{
lean_object* v_a_253_; lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_262_; 
v_a_253_ = lean_ctor_get(v_x_251_, 0);
v_a_254_ = lean_ctor_get(v_x_251_, 1);
v_isSharedCheck_262_ = !lean_is_exclusive(v_x_251_);
if (v_isSharedCheck_262_ == 0)
{
v___x_256_ = v_x_251_;
v_isShared_257_ = v_isSharedCheck_262_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_inc(v_a_253_);
lean_dec(v_x_251_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_262_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_258_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(v_a_254_, v_x_252_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___x_258_);
v___x_260_ = v___x_256_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_253_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v___x_258_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
default: 
{
lean_object* v_a_263_; lean_object* v_a_264_; lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_273_; 
v_a_263_ = lean_ctor_get(v_x_251_, 0);
v_a_264_ = lean_ctor_get(v_x_251_, 1);
v_a_265_ = lean_ctor_get(v_x_251_, 2);
v_isSharedCheck_273_ = !lean_is_exclusive(v_x_251_);
if (v_isSharedCheck_273_ == 0)
{
v___x_267_ = v_x_251_;
v_isShared_268_ = v_isSharedCheck_273_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_inc(v_a_264_);
lean_inc(v_a_263_);
lean_dec(v_x_251_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_273_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_269_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(v_a_265_, v_x_252_);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 2, v___x_269_);
v___x_271_ = v___x_267_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_263_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_a_264_);
lean_ctor_set(v_reuseFailAlloc_272_, 2, v___x_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg___boxed(lean_object* v_x_274_, lean_object* v_x_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(v_x_274_, v_x_275_);
lean_dec(v_x_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_appendForest(lean_object* v_L_277_, lean_object* v_T_278_, lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(v_x_279_, v_x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_appendForest___boxed(lean_object* v_L_282_, lean_object* v_T_283_, lean_object* v_x_284_, lean_object* v_x_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest(v_L_282_, v_T_283_, v_x_284_, v_x_285_);
lean_dec(v_x_285_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_walk___redArg(lean_object* v_x_287_, lean_object* v_x_288_, lean_object* v_x_289_){
_start:
{
switch(lean_obj_tag(v_x_287_))
{
case 0:
{
lean_object* v___x_290_; 
lean_dec(v_x_289_);
lean_dec(v_x_288_);
v___x_290_ = lean_box(0);
return v___x_290_;
}
case 1:
{
lean_object* v_a_291_; lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_302_; 
v_a_291_ = lean_ctor_get(v_x_287_, 0);
v_a_292_ = lean_ctor_get(v_x_287_, 1);
v_isSharedCheck_302_ = !lean_is_exclusive(v_x_287_);
if (v_isSharedCheck_302_ == 0)
{
v___x_294_ = v_x_287_;
v_isShared_295_ = v_isSharedCheck_302_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_inc(v_a_291_);
lean_dec(v_x_287_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_302_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
lean_inc(v_x_288_);
lean_inc(v_x_289_);
if (v_isShared_295_ == 0)
{
lean_ctor_set_tag(v___x_294_, 0);
lean_ctor_set(v___x_294_, 1, v_x_288_);
lean_ctor_set(v___x_294_, 0, v_x_289_);
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_x_289_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v_x_288_);
v___x_297_ = v_reuseFailAlloc_301_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_a_291_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = lp_lean_x2dftml_LeanFtml_Forest_walk___redArg(v_a_292_, v_x_288_, v_x_289_);
v___x_300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_298_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
return v___x_300_;
}
}
}
default: 
{
lean_object* v_a_303_; lean_object* v_a_304_; lean_object* v_a_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_a_303_ = lean_ctor_get(v_x_287_, 0);
lean_inc(v_a_303_);
v_a_304_ = lean_ctor_get(v_x_287_, 1);
lean_inc(v_a_304_);
v_a_305_ = lean_ctor_get(v_x_287_, 2);
lean_inc(v_a_305_);
lean_dec_ref_known(v_x_287_, 3);
v___x_306_ = lean_unsigned_to_nat(1u);
v___x_307_ = lean_nat_add(v_x_289_, v___x_306_);
v___x_308_ = lp_lean_x2dftml_LeanFtml_Forest_walk___redArg(v_a_304_, v_a_303_, v___x_307_);
v___x_309_ = lp_lean_x2dftml_LeanFtml_Forest_walk___redArg(v_a_305_, v_x_288_, v_x_289_);
v___x_310_ = l_List_appendTR___redArg(v___x_308_, v___x_309_);
return v___x_310_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_Forest_walk(lean_object* v_L_311_, lean_object* v_T_312_, lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = lp_lean_x2dftml_LeanFtml_Forest_walk___redArg(v_x_313_, v_x_314_, v_x_315_);
return v___x_316_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg(lean_object* v_inst_317_, lean_object* v_inst_318_, lean_object* v_x_319_, lean_object* v_x_320_){
_start:
{
lean_object* v_ltype_321_; lean_object* v_items_322_; lean_object* v_ltype_323_; lean_object* v_items_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v_ltype_321_ = lean_ctor_get(v_x_319_, 0);
lean_inc(v_ltype_321_);
v_items_322_ = lean_ctor_get(v_x_319_, 1);
lean_inc(v_items_322_);
lean_dec_ref(v_x_319_);
v_ltype_323_ = lean_ctor_get(v_x_320_, 0);
lean_inc(v_ltype_323_);
v_items_324_ = lean_ctor_get(v_x_320_, 1);
lean_inc(v_items_324_);
lean_dec_ref(v_x_320_);
lean_inc_ref(v_inst_317_);
v___x_325_ = lean_apply_2(v_inst_317_, v_ltype_321_, v_ltype_323_);
v___x_326_ = lean_unbox(v___x_325_);
if (v___x_326_ == 0)
{
uint8_t v___x_327_; 
lean_dec(v_items_324_);
lean_dec(v_items_322_);
lean_dec_ref(v_inst_318_);
lean_dec_ref(v_inst_317_);
v___x_327_ = lean_unbox(v___x_325_);
return v___x_327_;
}
else
{
uint8_t v___x_328_; 
v___x_328_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(v_inst_317_, v_inst_318_, v_items_322_, v_items_324_);
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg___boxed(lean_object* v_inst_329_, lean_object* v_inst_330_, lean_object* v_x_331_, lean_object* v_x_332_){
_start:
{
uint8_t v_res_333_; lean_object* v_r_334_; 
v_res_333_ = lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg(v_inst_329_, v_inst_330_, v_x_331_, v_x_332_);
v_r_334_ = lean_box(v_res_333_);
return v_r_334_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq(lean_object* v_L_335_, lean_object* v_T_336_, lean_object* v_inst_337_, lean_object* v_inst_338_, lean_object* v_x_339_, lean_object* v_x_340_){
_start:
{
uint8_t v___x_341_; 
v___x_341_ = lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg(v_inst_337_, v_inst_338_, v_x_339_, v_x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___boxed(lean_object* v_L_342_, lean_object* v_T_343_, lean_object* v_inst_344_, lean_object* v_inst_345_, lean_object* v_x_346_, lean_object* v_x_347_){
_start:
{
uint8_t v_res_348_; lean_object* v_r_349_; 
v_res_348_ = lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq(v_L_342_, v_T_343_, v_inst_344_, v_inst_345_, v_x_346_, v_x_347_);
v_r_349_ = lean_box(v_res_348_);
return v_r_349_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqFrame___redArg(lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_x_352_, lean_object* v_x_353_){
_start:
{
uint8_t v___x_354_; 
v___x_354_ = lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg(v_inst_350_, v_inst_351_, v_x_352_, v_x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqFrame___redArg___boxed(lean_object* v_inst_355_, lean_object* v_inst_356_, lean_object* v_x_357_, lean_object* v_x_358_){
_start:
{
uint8_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = lp_lean_x2dftml_LeanFtml_instDecidableEqFrame___redArg(v_inst_355_, v_inst_356_, v_x_357_, v_x_358_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqFrame(lean_object* v_L_361_, lean_object* v_T_362_, lean_object* v_inst_363_, lean_object* v_inst_364_, lean_object* v_x_365_, lean_object* v_x_366_){
_start:
{
uint8_t v___x_367_; 
v___x_367_ = lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg(v_inst_363_, v_inst_364_, v_x_365_, v_x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqFrame___boxed(lean_object* v_L_368_, lean_object* v_T_369_, lean_object* v_inst_370_, lean_object* v_inst_371_, lean_object* v_x_372_, lean_object* v_x_373_){
_start:
{
uint8_t v_res_374_; lean_object* v_r_375_; 
v_res_374_ = lp_lean_x2dftml_LeanFtml_instDecidableEqFrame(v_L_368_, v_T_369_, v_inst_370_, v_inst_371_, v_x_372_, v_x_373_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_unsigned_to_nat(9u);
v___x_390_ = lean_nat_to_int(v___x_389_);
return v___x_390_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__0));
v___x_399_ = lean_string_length(v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__13, &lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__13);
v___x_401_ = lean_nat_to_int(v___x_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg(lean_object* v_inst_406_, lean_object* v_inst_407_, lean_object* v_x_408_){
_start:
{
lean_object* v_ltype_409_; lean_object* v_items_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_443_; 
v_ltype_409_ = lean_ctor_get(v_x_408_, 0);
v_items_410_ = lean_ctor_get(v_x_408_, 1);
v_isSharedCheck_443_ = !lean_is_exclusive(v_x_408_);
if (v_isSharedCheck_443_ == 0)
{
v___x_412_ = v_x_408_;
v_isShared_413_ = v_isSharedCheck_443_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_items_410_);
lean_inc(v_ltype_409_);
lean_dec(v_x_408_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_443_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
v___x_414_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5));
v___x_415_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__6));
v___x_416_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7);
v___x_417_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_inst_406_);
v___x_418_ = lean_apply_2(v_inst_406_, v_ltype_409_, v___x_417_);
if (v_isShared_413_ == 0)
{
lean_ctor_set_tag(v___x_412_, 4);
lean_ctor_set(v___x_412_, 1, v___x_418_);
lean_ctor_set(v___x_412_, 0, v___x_416_);
v___x_420_ = v___x_412_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v___x_418_);
v___x_420_ = v_reuseFailAlloc_442_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
uint8_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_421_ = 0;
v___x_422_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_422_, 0, v___x_420_);
lean_ctor_set_uint8(v___x_422_, sizeof(void*)*1, v___x_421_);
v___x_423_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_415_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__9));
v___x_425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
v___x_426_ = lean_box(1);
v___x_427_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_425_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__11));
v___x_429_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_427_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v___x_430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_414_);
v___x_431_ = lp_lean_x2dftml_LeanFtml_instReprForest_repr___redArg(v_inst_406_, v_inst_407_, v_items_410_, v___x_417_);
v___x_432_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_416_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set_uint8(v___x_433_, sizeof(void*)*1, v___x_421_);
v___x_434_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_430_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14, &lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14);
v___x_436_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__15));
v___x_437_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
lean_ctor_set(v___x_437_, 1, v___x_434_);
v___x_438_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__16));
v___x_439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_435_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set_uint8(v___x_441_, sizeof(void*)*1, v___x_421_);
return v___x_441_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr(lean_object* v_L_444_, lean_object* v_T_445_, lean_object* v_inst_446_, lean_object* v_inst_447_, lean_object* v_x_448_, lean_object* v_prec_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg(v_inst_446_, v_inst_447_, v_x_448_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame_repr___boxed(lean_object* v_L_451_, lean_object* v_T_452_, lean_object* v_inst_453_, lean_object* v_inst_454_, lean_object* v_x_455_, lean_object* v_prec_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = lp_lean_x2dftml_LeanFtml_instReprFrame_repr(v_L_451_, v_T_452_, v_inst_453_, v_inst_454_, v_x_455_, v_prec_456_);
lean_dec(v_prec_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame___redArg(lean_object* v_inst_458_, lean_object* v_inst_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___boxed), 6, 4);
lean_closure_set(v___x_460_, 0, lean_box(0));
lean_closure_set(v___x_460_, 1, lean_box(0));
lean_closure_set(v___x_460_, 2, v_inst_458_);
lean_closure_set(v___x_460_, 3, v_inst_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprFrame(lean_object* v_L_461_, lean_object* v_T_462_, lean_object* v_inst_463_, lean_object* v_inst_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___boxed), 6, 4);
lean_closure_set(v___x_465_, 0, lean_box(0));
lean_closure_set(v___x_465_, 1, lean_box(0));
lean_closure_set(v___x_465_, 2, v_inst_463_);
lean_closure_set(v___x_465_, 3, v_inst_464_);
return v___x_465_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__0(lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_a_468_, lean_object* v_b_469_){
_start:
{
uint8_t v___x_470_; 
v___x_470_ = lp_lean_x2dftml_LeanFtml_instDecidableEqForest_decEq___redArg(v_inst_466_, v_inst_467_, v_a_468_, v_b_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__0___boxed(lean_object* v_inst_471_, lean_object* v_inst_472_, lean_object* v_a_473_, lean_object* v_b_474_){
_start:
{
uint8_t v_res_475_; lean_object* v_r_476_; 
v_res_475_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__0(v_inst_471_, v_inst_472_, v_a_473_, v_b_474_);
v_r_476_ = lean_box(v_res_475_);
return v_r_476_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__1(lean_object* v_inst_477_, lean_object* v___f_478_, lean_object* v_a_479_, lean_object* v_b_480_){
_start:
{
uint8_t v___x_481_; 
v___x_481_ = l_instDecidableEqProd___redArg(v_inst_477_, v___f_478_, v_a_479_, v_b_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__1___boxed(lean_object* v_inst_482_, lean_object* v___f_483_, lean_object* v_a_484_, lean_object* v_b_485_){
_start:
{
uint8_t v_res_486_; lean_object* v_r_487_; 
v_res_486_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__1(v_inst_482_, v___f_483_, v_a_484_, v_b_485_);
v_r_487_ = lean_box(v_res_486_);
return v_r_487_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__2(lean_object* v_inst_488_, lean_object* v_inst_489_, lean_object* v_a_490_, lean_object* v_b_491_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = lp_lean_x2dftml_LeanFtml_instDecidableEqFrame_decEq___redArg(v_inst_488_, v_inst_489_, v_a_490_, v_b_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__2___boxed(lean_object* v_inst_493_, lean_object* v_inst_494_, lean_object* v_a_495_, lean_object* v_b_496_){
_start:
{
uint8_t v_res_497_; lean_object* v_r_498_; 
v_res_497_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__2(v_inst_493_, v_inst_494_, v_a_495_, v_b_496_);
v_r_498_ = lean_box(v_res_497_);
return v_r_498_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg(lean_object* v_inst_499_, lean_object* v_inst_500_, lean_object* v_x_501_, lean_object* v_x_502_){
_start:
{
lean_object* v_finished_503_; lean_object* v_stack_504_; lean_object* v_finished_505_; lean_object* v_stack_506_; lean_object* v___f_507_; lean_object* v___f_508_; uint8_t v___x_509_; 
v_finished_503_ = lean_ctor_get(v_x_501_, 0);
lean_inc(v_finished_503_);
v_stack_504_ = lean_ctor_get(v_x_501_, 1);
lean_inc(v_stack_504_);
lean_dec_ref(v_x_501_);
v_finished_505_ = lean_ctor_get(v_x_502_, 0);
lean_inc(v_finished_505_);
v_stack_506_ = lean_ctor_get(v_x_502_, 1);
lean_inc(v_stack_506_);
lean_dec_ref(v_x_502_);
lean_inc_ref(v_inst_500_);
lean_inc_ref_n(v_inst_499_, 2);
v___f_507_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_507_, 0, v_inst_499_);
lean_closure_set(v___f_507_, 1, v_inst_500_);
v___f_508_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_508_, 0, v_inst_499_);
lean_closure_set(v___f_508_, 1, v___f_507_);
v___x_509_ = l_instDecidableEqList___redArg(v___f_508_, v_finished_503_, v_finished_505_);
if (v___x_509_ == 0)
{
lean_dec(v_stack_506_);
lean_dec(v_stack_504_);
lean_dec_ref(v_inst_500_);
lean_dec_ref(v_inst_499_);
return v___x_509_;
}
else
{
lean_object* v___f_510_; uint8_t v___x_511_; 
v___f_510_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_510_, 0, v_inst_499_);
lean_closure_set(v___f_510_, 1, v_inst_500_);
v___x_511_ = l_instDecidableEqList___redArg(v___f_510_, v_stack_504_, v_stack_506_);
return v___x_511_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg___boxed(lean_object* v_inst_512_, lean_object* v_inst_513_, lean_object* v_x_514_, lean_object* v_x_515_){
_start:
{
uint8_t v_res_516_; lean_object* v_r_517_; 
v_res_516_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg(v_inst_512_, v_inst_513_, v_x_514_, v_x_515_);
v_r_517_ = lean_box(v_res_516_);
return v_r_517_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq(lean_object* v_L_518_, lean_object* v_T_519_, lean_object* v_inst_520_, lean_object* v_inst_521_, lean_object* v_x_522_, lean_object* v_x_523_){
_start:
{
uint8_t v___x_524_; 
v___x_524_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg(v_inst_520_, v_inst_521_, v_x_522_, v_x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___boxed(lean_object* v_L_525_, lean_object* v_T_526_, lean_object* v_inst_527_, lean_object* v_inst_528_, lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
uint8_t v_res_531_; lean_object* v_r_532_; 
v_res_531_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq(v_L_525_, v_T_526_, v_inst_527_, v_inst_528_, v_x_529_, v_x_530_);
v_r_532_ = lean_box(v_res_531_);
return v_r_532_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState___redArg(lean_object* v_inst_533_, lean_object* v_inst_534_, lean_object* v_x_535_, lean_object* v_x_536_){
_start:
{
uint8_t v___x_537_; 
v___x_537_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg(v_inst_533_, v_inst_534_, v_x_535_, v_x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState___redArg___boxed(lean_object* v_inst_538_, lean_object* v_inst_539_, lean_object* v_x_540_, lean_object* v_x_541_){
_start:
{
uint8_t v_res_542_; lean_object* v_r_543_; 
v_res_542_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState___redArg(v_inst_538_, v_inst_539_, v_x_540_, v_x_541_);
v_r_543_ = lean_box(v_res_542_);
return v_r_543_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqDState(lean_object* v_L_544_, lean_object* v_T_545_, lean_object* v_inst_546_, lean_object* v_inst_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
uint8_t v___x_550_; 
v___x_550_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState_decEq___redArg(v_inst_546_, v_inst_547_, v_x_548_, v_x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqDState___boxed(lean_object* v_L_551_, lean_object* v_T_552_, lean_object* v_inst_553_, lean_object* v_inst_554_, lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
uint8_t v_res_557_; lean_object* v_r_558_; 
v_res_557_ = lp_lean_x2dftml_LeanFtml_instDecidableEqDState(v_L_551_, v_T_552_, v_inst_553_, v_inst_554_, v_x_555_, v_x_556_);
v_r_558_ = lean_box(v_res_557_);
return v_r_558_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = lean_unsigned_to_nat(12u);
v___x_569_ = lean_nat_to_int(v___x_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg(lean_object* v_inst_573_, lean_object* v_inst_574_, lean_object* v_x_575_){
_start:
{
lean_object* v_finished_576_; lean_object* v_stack_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_614_; 
v_finished_576_ = lean_ctor_get(v_x_575_, 0);
v_stack_577_ = lean_ctor_get(v_x_575_, 1);
v_isSharedCheck_614_ = !lean_is_exclusive(v_x_575_);
if (v_isSharedCheck_614_ == 0)
{
v___x_579_ = v_x_575_;
v_isShared_580_ = v_isSharedCheck_614_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_stack_577_);
lean_inc(v_finished_576_);
lean_dec(v_x_575_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_614_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___f_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_589_; 
lean_inc_ref(v_inst_574_);
lean_inc_ref_n(v_inst_573_, 2);
v___x_581_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprForest_repr___boxed), 6, 4);
lean_closure_set(v___x_581_, 0, lean_box(0));
lean_closure_set(v___x_581_, 1, lean_box(0));
lean_closure_set(v___x_581_, 2, v_inst_573_);
lean_closure_set(v___x_581_, 3, v_inst_574_);
v___x_582_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5));
v___x_583_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__3));
v___x_584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__4, &lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__4);
v___f_585_ = lean_alloc_closure((void*)(l_instReprTupleOfRepr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_585_, 0, v___x_581_);
v___x_586_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_586_, 0, lean_box(0));
lean_closure_set(v___x_586_, 1, lean_box(0));
lean_closure_set(v___x_586_, 2, v_inst_573_);
lean_closure_set(v___x_586_, 3, v___f_585_);
v___x_587_ = l_List_repr___redArg(v___x_586_, v_finished_576_);
if (v_isShared_580_ == 0)
{
lean_ctor_set_tag(v___x_579_, 4);
lean_ctor_set(v___x_579_, 1, v___x_587_);
lean_ctor_set(v___x_579_, 0, v___x_584_);
v___x_589_ = v___x_579_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v___x_584_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v___x_587_);
v___x_589_ = v_reuseFailAlloc_613_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
uint8_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_590_ = 0;
v___x_591_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_591_, 0, v___x_589_);
lean_ctor_set_uint8(v___x_591_, sizeof(void*)*1, v___x_590_);
v___x_592_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_583_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__9));
v___x_594_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_592_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v___x_595_ = lean_box(1);
v___x_596_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg___closed__6));
v___x_598_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
lean_ctor_set(v___x_599_, 1, v___x_582_);
v___x_600_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7);
v___x_601_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___boxed), 6, 4);
lean_closure_set(v___x_601_, 0, lean_box(0));
lean_closure_set(v___x_601_, 1, lean_box(0));
lean_closure_set(v___x_601_, 2, v_inst_573_);
lean_closure_set(v___x_601_, 3, v_inst_574_);
v___x_602_ = l_List_repr___redArg(v___x_601_, v_stack_577_);
v___x_603_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_600_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
v___x_604_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_604_, 0, v___x_603_);
lean_ctor_set_uint8(v___x_604_, sizeof(void*)*1, v___x_590_);
v___x_605_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_599_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14, &lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14);
v___x_607_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__15));
v___x_608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set(v___x_608_, 1, v___x_605_);
v___x_609_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__16));
v___x_610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_606_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_612_, 0, v___x_611_);
lean_ctor_set_uint8(v___x_612_, sizeof(void*)*1, v___x_590_);
return v___x_612_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr(lean_object* v_L_615_, lean_object* v_T_616_, lean_object* v_inst_617_, lean_object* v_inst_618_, lean_object* v_x_619_, lean_object* v_prec_620_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = lp_lean_x2dftml_LeanFtml_instReprDState_repr___redArg(v_inst_617_, v_inst_618_, v_x_619_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState_repr___boxed(lean_object* v_L_622_, lean_object* v_T_623_, lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_x_626_, lean_object* v_prec_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = lp_lean_x2dftml_LeanFtml_instReprDState_repr(v_L_622_, v_T_623_, v_inst_624_, v_inst_625_, v_x_626_, v_prec_627_);
lean_dec(v_prec_627_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState___redArg(lean_object* v_inst_629_, lean_object* v_inst_630_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprDState_repr___boxed), 6, 4);
lean_closure_set(v___x_631_, 0, lean_box(0));
lean_closure_set(v___x_631_, 1, lean_box(0));
lean_closure_set(v___x_631_, 2, v_inst_629_);
lean_closure_set(v___x_631_, 3, v_inst_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprDState(lean_object* v_L_632_, lean_object* v_T_633_, lean_object* v_inst_634_, lean_object* v_inst_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprDState_repr___boxed), 6, 4);
lean_closure_set(v___x_636_, 0, lean_box(0));
lean_closure_set(v___x_636_, 1, lean_box(0));
lean_closure_set(v___x_636_, 2, v_inst_634_);
lean_closure_set(v___x_636_, 3, v_inst_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_placedForest_spec__0___redArg(lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
if (lean_obj_tag(v_a_637_) == 0)
{
lean_object* v___x_639_; 
v___x_639_ = lean_array_to_list(v_a_638_);
return v___x_639_;
}
else
{
lean_object* v_head_640_; lean_object* v_tail_641_; lean_object* v_fst_642_; lean_object* v_snd_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_head_640_ = lean_ctor_get(v_a_637_, 0);
lean_inc(v_head_640_);
v_tail_641_ = lean_ctor_get(v_a_637_, 1);
lean_inc(v_tail_641_);
lean_dec_ref_known(v_a_637_, 2);
v_fst_642_ = lean_ctor_get(v_head_640_, 0);
lean_inc(v_fst_642_);
v_snd_643_ = lean_ctor_get(v_head_640_, 1);
lean_inc(v_snd_643_);
lean_dec(v_head_640_);
v___x_644_ = lean_unsigned_to_nat(0u);
v___x_645_ = lp_lean_x2dftml_LeanFtml_Forest_walk___redArg(v_snd_643_, v_fst_642_, v___x_644_);
v___x_646_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_638_, v___x_645_);
v_a_637_ = v_tail_641_;
v_a_638_ = v___x_646_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedForest___redArg(lean_object* v_trees_650_){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_placedForest___redArg___closed__0));
v___x_652_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_placedForest_spec__0___redArg(v_trees_650_, v___x_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedForest(lean_object* v_L_653_, lean_object* v_T_654_, lean_object* v_trees_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = lp_lean_x2dftml_LeanFtml_placedForest___redArg(v_trees_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_placedForest_spec__0(lean_object* v_L_657_, lean_object* v_T_658_, lean_object* v_a_659_, lean_object* v_a_660_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_placedForest_spec__0___redArg(v_a_659_, v_a_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedStack___redArg(lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
if (lean_obj_tag(v_x_662_) == 0)
{
lean_object* v___x_664_; 
lean_dec(v_x_663_);
v___x_664_ = lean_box(0);
return v___x_664_;
}
else
{
lean_object* v_head_665_; lean_object* v_tail_666_; lean_object* v_ltype_667_; lean_object* v_items_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v_head_665_ = lean_ctor_get(v_x_662_, 0);
lean_inc(v_head_665_);
v_tail_666_ = lean_ctor_get(v_x_662_, 1);
lean_inc(v_tail_666_);
lean_dec_ref_known(v_x_662_, 2);
v_ltype_667_ = lean_ctor_get(v_head_665_, 0);
lean_inc(v_ltype_667_);
v_items_668_ = lean_ctor_get(v_head_665_, 1);
lean_inc(v_items_668_);
lean_dec(v_head_665_);
lean_inc(v_x_663_);
v___x_669_ = lp_lean_x2dftml_LeanFtml_Forest_walk___redArg(v_items_668_, v_ltype_667_, v_x_663_);
v___x_670_ = lean_unsigned_to_nat(1u);
v___x_671_ = lean_nat_add(v_x_663_, v___x_670_);
lean_dec(v_x_663_);
v___x_672_ = lp_lean_x2dftml_LeanFtml_placedStack___redArg(v_tail_666_, v___x_671_);
v___x_673_ = l_List_appendTR___redArg(v___x_669_, v___x_672_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedStack(lean_object* v_L_674_, lean_object* v_T_675_, lean_object* v_x_676_, lean_object* v_x_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = lp_lean_x2dftml_LeanFtml_placedStack___redArg(v_x_676_, v_x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedState___redArg(lean_object* v_s_679_){
_start:
{
lean_object* v_finished_680_; lean_object* v_stack_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_finished_680_ = lean_ctor_get(v_s_679_, 0);
lean_inc(v_finished_680_);
v_stack_681_ = lean_ctor_get(v_s_679_, 1);
lean_inc(v_stack_681_);
lean_dec_ref(v_s_679_);
v___x_682_ = lp_lean_x2dftml_LeanFtml_placedForest___redArg(v_finished_680_);
v___x_683_ = lean_unsigned_to_nat(0u);
v___x_684_ = lp_lean_x2dftml_LeanFtml_placedStack___redArg(v_stack_681_, v___x_683_);
v___x_685_ = l_List_appendTR___redArg(v___x_682_, v___x_684_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placedState(lean_object* v_L_686_, lean_object* v_T_687_, lean_object* v_s_688_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = lp_lean_x2dftml_LeanFtml_placedState___redArg(v_s_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastFrame___redArg(lean_object* v_x_690_){
_start:
{
if (lean_obj_tag(v_x_690_) == 0)
{
lean_object* v___x_691_; 
v___x_691_ = lean_box(0);
return v___x_691_;
}
else
{
lean_object* v_tail_692_; 
v_tail_692_ = lean_ctor_get(v_x_690_, 1);
if (lean_obj_tag(v_tail_692_) == 0)
{
lean_object* v_head_693_; lean_object* v___x_694_; 
v_head_693_ = lean_ctor_get(v_x_690_, 0);
lean_inc(v_head_693_);
v___x_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_694_, 0, v_head_693_);
return v___x_694_;
}
else
{
v_x_690_ = v_tail_692_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastFrame___redArg___boxed(lean_object* v_x_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = lp_lean_x2dftml_LeanFtml_lastFrame___redArg(v_x_696_);
lean_dec(v_x_696_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastFrame(lean_object* v_L_698_, lean_object* v_T_699_, lean_object* v_x_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = lp_lean_x2dftml_LeanFtml_lastFrame___redArg(v_x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastFrame___boxed(lean_object* v_L_702_, lean_object* v_T_703_, lean_object* v_x_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = lp_lean_x2dftml_LeanFtml_lastFrame(v_L_702_, v_T_703_, v_x_704_);
lean_dec(v_x_704_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modifyTop___redArg(lean_object* v_g_706_, lean_object* v_x_707_){
_start:
{
if (lean_obj_tag(v_x_707_) == 0)
{
lean_dec_ref(v_g_706_);
return v_x_707_;
}
else
{
lean_object* v_tail_708_; 
v_tail_708_ = lean_ctor_get(v_x_707_, 1);
lean_inc(v_tail_708_);
if (lean_obj_tag(v_tail_708_) == 0)
{
lean_object* v_head_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_717_; 
v_head_709_ = lean_ctor_get(v_x_707_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v_x_707_);
if (v_isSharedCheck_717_ == 0)
{
lean_object* v_unused_718_; 
v_unused_718_ = lean_ctor_get(v_x_707_, 1);
lean_dec(v_unused_718_);
v___x_711_ = v_x_707_;
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_head_709_);
lean_dec(v_x_707_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_713_ = lean_apply_1(v_g_706_, v_head_709_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_713_);
v___x_715_ = v___x_711_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_tail_708_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
else
{
lean_object* v_head_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_727_; 
v_head_719_ = lean_ctor_get(v_x_707_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v_x_707_);
if (v_isSharedCheck_727_ == 0)
{
lean_object* v_unused_728_; 
v_unused_728_ = lean_ctor_get(v_x_707_, 1);
lean_dec(v_unused_728_);
v___x_721_ = v_x_707_;
v_isShared_722_ = v_isSharedCheck_727_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_head_719_);
lean_dec(v_x_707_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_727_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_723_; lean_object* v___x_725_; 
v___x_723_ = lp_lean_x2dftml_LeanFtml_modifyTop___redArg(v_g_706_, v_tail_708_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 1, v___x_723_);
v___x_725_ = v___x_721_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_head_719_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v___x_723_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_modifyTop(lean_object* v_L_729_, lean_object* v_T_730_, lean_object* v_g_731_, lean_object* v_x_732_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = lp_lean_x2dftml_LeanFtml_modifyTop___redArg(v_g_731_, v_x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_decrease___redArg(lean_object* v_x_734_){
_start:
{
if (lean_obj_tag(v_x_734_) == 0)
{
return v_x_734_;
}
else
{
lean_object* v_tail_735_; 
v_tail_735_ = lean_ctor_get(v_x_734_, 1);
lean_inc(v_tail_735_);
if (lean_obj_tag(v_tail_735_) == 0)
{
return v_x_734_;
}
else
{
lean_object* v_tail_736_; 
v_tail_736_ = lean_ctor_get(v_tail_735_, 1);
lean_inc(v_tail_736_);
if (lean_obj_tag(v_tail_736_) == 0)
{
lean_object* v_head_737_; lean_object* v_head_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_759_; 
v_head_737_ = lean_ctor_get(v_x_734_, 0);
lean_inc(v_head_737_);
lean_dec_ref_known(v_x_734_, 2);
v_head_738_ = lean_ctor_get(v_tail_735_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v_tail_735_);
if (v_isSharedCheck_759_ == 0)
{
lean_object* v_unused_760_; 
v_unused_760_ = lean_ctor_get(v_tail_735_, 1);
lean_dec(v_unused_760_);
v___x_740_ = v_tail_735_;
v_isShared_741_ = v_isSharedCheck_759_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_head_738_);
lean_dec(v_tail_735_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_759_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v_ltype_742_; lean_object* v_items_743_; lean_object* v_ltype_744_; lean_object* v_items_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_758_; 
v_ltype_742_ = lean_ctor_get(v_head_737_, 0);
lean_inc(v_ltype_742_);
v_items_743_ = lean_ctor_get(v_head_737_, 1);
lean_inc(v_items_743_);
lean_dec(v_head_737_);
v_ltype_744_ = lean_ctor_get(v_head_738_, 0);
v_items_745_ = lean_ctor_get(v_head_738_, 1);
v_isSharedCheck_758_ = !lean_is_exclusive(v_head_738_);
if (v_isSharedCheck_758_ == 0)
{
v___x_747_ = v_head_738_;
v_isShared_748_ = v_isSharedCheck_758_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_items_745_);
lean_inc(v_ltype_744_);
lean_dec(v_head_738_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_758_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
v___x_749_ = lean_box(0);
v___x_750_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_750_, 0, v_ltype_744_);
lean_ctor_set(v___x_750_, 1, v_items_745_);
lean_ctor_set(v___x_750_, 2, v___x_749_);
v___x_751_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(v_items_743_, v___x_750_);
lean_dec_ref_known(v___x_750_, 3);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 1, v___x_751_);
lean_ctor_set(v___x_747_, 0, v_ltype_742_);
v___x_753_ = v___x_747_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_ltype_742_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v___x_751_);
v___x_753_ = v_reuseFailAlloc_757_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_755_; 
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 0, v___x_753_);
v___x_755_ = v___x_740_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_tail_736_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
}
else
{
lean_object* v_head_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_769_; 
v_head_761_ = lean_ctor_get(v_x_734_, 0);
lean_inc(v_head_761_);
lean_dec_ref_known(v_x_734_, 2);
v_isSharedCheck_769_ = !lean_is_exclusive(v_tail_736_);
if (v_isSharedCheck_769_ == 0)
{
lean_object* v_unused_770_; lean_object* v_unused_771_; 
v_unused_770_ = lean_ctor_get(v_tail_736_, 1);
lean_dec(v_unused_770_);
v_unused_771_ = lean_ctor_get(v_tail_736_, 0);
lean_dec(v_unused_771_);
v___x_763_ = v_tail_736_;
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
else
{
lean_dec(v_tail_736_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_765_ = lp_lean_x2dftml_LeanFtml_decrease___redArg(v_tail_735_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 1, v___x_765_);
lean_ctor_set(v___x_763_, 0, v_head_761_);
v___x_767_ = v___x_763_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_head_761_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v___x_765_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_decrease(lean_object* v_L_772_, lean_object* v_T_773_, lean_object* v_x_774_){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = lp_lean_x2dftml_LeanFtml_decrease___redArg(v_x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_framesOf___redArg(lean_object* v_n_776_, lean_object* v_l_777_){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = lean_box(0);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v_l_777_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v___x_780_ = l_List_replicateTR___redArg(v_n_776_, v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_framesOf(lean_object* v_L_781_, lean_object* v_T_782_, lean_object* v_n_783_, lean_object* v_l_784_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = lp_lean_x2dftml_LeanFtml_framesOf___redArg(v_n_783_, v_l_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustDown___redArg(lean_object* v_x_786_, lean_object* v_x_787_){
_start:
{
lean_object* v_zero_788_; uint8_t v_isZero_789_; 
v_zero_788_ = lean_unsigned_to_nat(0u);
v_isZero_789_ = lean_nat_dec_eq(v_x_786_, v_zero_788_);
if (v_isZero_789_ == 1)
{
lean_dec(v_x_786_);
return v_x_787_;
}
else
{
lean_object* v_one_790_; lean_object* v_n_791_; lean_object* v___x_792_; 
v_one_790_ = lean_unsigned_to_nat(1u);
v_n_791_ = lean_nat_sub(v_x_786_, v_one_790_);
lean_dec(v_x_786_);
v___x_792_ = lp_lean_x2dftml_LeanFtml_decrease___redArg(v_x_787_);
v_x_786_ = v_n_791_;
v_x_787_ = v___x_792_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustDown(lean_object* v_L_794_, lean_object* v_T_795_, lean_object* v_x_796_, lean_object* v_x_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = lp_lean_x2dftml_LeanFtml_adjustDown___redArg(v_x_796_, v_x_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newList___redArg(lean_object* v_inst_799_, lean_object* v_s_800_, lean_object* v_l_801_){
_start:
{
lean_object* v_finished_802_; lean_object* v_stack_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_847_; 
v_finished_802_ = lean_ctor_get(v_s_800_, 0);
v_stack_803_ = lean_ctor_get(v_s_800_, 1);
v_isSharedCheck_847_ = !lean_is_exclusive(v_s_800_);
if (v_isSharedCheck_847_ == 0)
{
v___x_805_ = v_s_800_;
v_isShared_806_ = v_isSharedCheck_847_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_stack_803_);
lean_inc(v_finished_802_);
lean_dec(v_s_800_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_847_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
if (lean_obj_tag(v_stack_803_) == 1)
{
lean_object* v_tail_817_; 
v_tail_817_ = lean_ctor_get(v_stack_803_, 1);
if (lean_obj_tag(v_tail_817_) == 0)
{
lean_object* v_head_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_845_; 
lean_inc(v_tail_817_);
lean_del_object(v___x_805_);
v_head_818_ = lean_ctor_get(v_stack_803_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v_stack_803_);
if (v_isSharedCheck_845_ == 0)
{
lean_object* v_unused_846_; 
v_unused_846_ = lean_ctor_get(v_stack_803_, 1);
lean_dec(v_unused_846_);
v___x_820_ = v_stack_803_;
v_isShared_821_ = v_isSharedCheck_845_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_head_818_);
lean_dec(v_stack_803_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_845_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v_ltype_822_; lean_object* v_items_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_844_; 
v_ltype_822_ = lean_ctor_get(v_head_818_, 0);
v_items_823_ = lean_ctor_get(v_head_818_, 1);
v_isSharedCheck_844_ = !lean_is_exclusive(v_head_818_);
if (v_isSharedCheck_844_ == 0)
{
v___x_825_ = v_head_818_;
v_isShared_826_ = v_isSharedCheck_844_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_items_823_);
lean_inc(v_ltype_822_);
lean_dec(v_head_818_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_844_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v___y_829_; lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_827_ = lean_box(0);
lean_inc(v_items_823_);
v___x_838_ = lean_apply_2(v_inst_799_, v_items_823_, v___x_827_);
v___x_839_ = lean_unbox(v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v_ltype_822_);
lean_ctor_set(v___x_840_, 1, v_items_823_);
v___x_841_ = lean_box(0);
v___x_842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_840_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
v___y_829_ = v___x_842_;
goto v___jp_828_;
}
else
{
lean_object* v___x_843_; 
lean_dec(v_items_823_);
lean_dec(v_ltype_822_);
v___x_843_ = lean_box(0);
v___y_829_ = v___x_843_;
goto v___jp_828_;
}
v___jp_828_:
{
lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_830_ = l_List_appendTR___redArg(v_finished_802_, v___y_829_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 1, v___x_827_);
lean_ctor_set(v___x_825_, 0, v_l_801_);
v___x_832_ = v___x_825_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_l_801_);
lean_ctor_set(v_reuseFailAlloc_837_, 1, v___x_827_);
v___x_832_ = v_reuseFailAlloc_837_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_834_; 
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_832_);
v___x_834_ = v___x_820_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_832_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_tail_817_);
v___x_834_ = v_reuseFailAlloc_836_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
lean_object* v___x_835_; 
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_830_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
return v___x_835_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_inst_799_);
goto v___jp_807_;
}
}
else
{
lean_dec_ref(v_inst_799_);
goto v___jp_807_;
}
v___jp_807_:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_808_ = lp_lean_x2dftml_LeanFtml_decrease___redArg(v_stack_803_);
v___x_809_ = lean_box(0);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v_l_801_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = lean_box(0);
v___x_812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = l_List_appendTR___redArg(v___x_808_, v___x_812_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 1, v___x_813_);
v___x_815_ = v___x_805_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_finished_802_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v___x_813_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newList(lean_object* v_L_848_, lean_object* v_T_849_, lean_object* v_inst_850_, lean_object* v_s_851_, lean_object* v_l_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = lp_lean_x2dftml_LeanFtml_newList___redArg(v_inst_850_, v_s_851_, v_l_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushItem___redArg___lam__0(lean_object* v_t_854_, lean_object* v_f_855_){
_start:
{
lean_object* v_ltype_856_; lean_object* v_items_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_867_; 
v_ltype_856_ = lean_ctor_get(v_f_855_, 0);
v_items_857_ = lean_ctor_get(v_f_855_, 1);
v_isSharedCheck_867_ = !lean_is_exclusive(v_f_855_);
if (v_isSharedCheck_867_ == 0)
{
v___x_859_ = v_f_855_;
v_isShared_860_ = v_isSharedCheck_867_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_items_857_);
lean_inc(v_ltype_856_);
lean_dec(v_f_855_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_867_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_865_; 
v___x_861_ = lean_box(0);
v___x_862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_862_, 0, v_t_854_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(v_items_857_, v___x_862_);
lean_dec_ref_known(v___x_862_, 2);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 1, v___x_863_);
v___x_865_ = v___x_859_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_ltype_856_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v___x_863_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushItem___redArg(lean_object* v_s_868_, lean_object* v_t_869_){
_start:
{
lean_object* v_finished_870_; lean_object* v_stack_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_880_; 
v_finished_870_ = lean_ctor_get(v_s_868_, 0);
v_stack_871_ = lean_ctor_get(v_s_868_, 1);
v_isSharedCheck_880_ = !lean_is_exclusive(v_s_868_);
if (v_isSharedCheck_880_ == 0)
{
v___x_873_ = v_s_868_;
v_isShared_874_ = v_isSharedCheck_880_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_stack_871_);
lean_inc(v_finished_870_);
lean_dec(v_s_868_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_880_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___f_875_; lean_object* v___x_876_; lean_object* v___x_878_; 
v___f_875_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_pushItem___redArg___lam__0), 2, 1);
lean_closure_set(v___f_875_, 0, v_t_869_);
v___x_876_ = lp_lean_x2dftml_LeanFtml_modifyTop___redArg(v___f_875_, v_stack_871_);
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 1, v___x_876_);
v___x_878_ = v___x_873_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_finished_870_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushItem(lean_object* v_L_881_, lean_object* v_T_882_, lean_object* v_s_883_, lean_object* v_t_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = lp_lean_x2dftml_LeanFtml_pushItem___redArg(v_s_883_, v_t_884_);
return v___x_885_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___redArg(lean_object* v_inst_886_, lean_object* v_inst_887_, lean_object* v_x_888_, lean_object* v_x_889_){
_start:
{
lean_object* v_depth_890_; lean_object* v_ltype_891_; lean_object* v_item_892_; lean_object* v_depth_893_; lean_object* v_ltype_894_; lean_object* v_item_895_; uint8_t v___x_896_; 
v_depth_890_ = lean_ctor_get(v_x_888_, 0);
lean_inc(v_depth_890_);
v_ltype_891_ = lean_ctor_get(v_x_888_, 1);
lean_inc(v_ltype_891_);
v_item_892_ = lean_ctor_get(v_x_888_, 2);
lean_inc(v_item_892_);
lean_dec_ref(v_x_888_);
v_depth_893_ = lean_ctor_get(v_x_889_, 0);
lean_inc(v_depth_893_);
v_ltype_894_ = lean_ctor_get(v_x_889_, 1);
lean_inc(v_ltype_894_);
v_item_895_ = lean_ctor_get(v_x_889_, 2);
lean_inc(v_item_895_);
lean_dec_ref(v_x_889_);
v___x_896_ = lean_nat_dec_eq(v_depth_890_, v_depth_893_);
lean_dec(v_depth_893_);
lean_dec(v_depth_890_);
if (v___x_896_ == 0)
{
lean_dec(v_item_895_);
lean_dec(v_ltype_894_);
lean_dec(v_item_892_);
lean_dec(v_ltype_891_);
lean_dec_ref(v_inst_887_);
lean_dec_ref(v_inst_886_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; uint8_t v___x_898_; 
v___x_897_ = lean_apply_2(v_inst_886_, v_ltype_891_, v_ltype_894_);
v___x_898_ = lean_unbox(v___x_897_);
if (v___x_898_ == 0)
{
uint8_t v___x_899_; 
lean_dec(v_item_895_);
lean_dec(v_item_892_);
lean_dec_ref(v_inst_887_);
v___x_899_ = lean_unbox(v___x_897_);
return v___x_899_;
}
else
{
lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_900_ = lean_apply_2(v_inst_887_, v_item_892_, v_item_895_);
v___x_901_ = lean_unbox(v___x_900_);
return v___x_901_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___redArg___boxed(lean_object* v_inst_902_, lean_object* v_inst_903_, lean_object* v_x_904_, lean_object* v_x_905_){
_start:
{
uint8_t v_res_906_; lean_object* v_r_907_; 
v_res_906_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___redArg(v_inst_902_, v_inst_903_, v_x_904_, v_x_905_);
v_r_907_ = lean_box(v_res_906_);
return v_r_907_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq(lean_object* v_L_908_, lean_object* v_T_909_, lean_object* v_inst_910_, lean_object* v_inst_911_, lean_object* v_x_912_, lean_object* v_x_913_){
_start:
{
uint8_t v___x_914_; 
v___x_914_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___redArg(v_inst_910_, v_inst_911_, v_x_912_, v_x_913_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___boxed(lean_object* v_L_915_, lean_object* v_T_916_, lean_object* v_inst_917_, lean_object* v_inst_918_, lean_object* v_x_919_, lean_object* v_x_920_){
_start:
{
uint8_t v_res_921_; lean_object* v_r_922_; 
v_res_921_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq(v_L_915_, v_T_916_, v_inst_917_, v_inst_918_, v_x_919_, v_x_920_);
v_r_922_ = lean_box(v_res_921_);
return v_r_922_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRow___redArg(lean_object* v_inst_923_, lean_object* v_inst_924_, lean_object* v_x_925_, lean_object* v_x_926_){
_start:
{
uint8_t v___x_927_; 
v___x_927_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___redArg(v_inst_923_, v_inst_924_, v_x_925_, v_x_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRow___redArg___boxed(lean_object* v_inst_928_, lean_object* v_inst_929_, lean_object* v_x_930_, lean_object* v_x_931_){
_start:
{
uint8_t v_res_932_; lean_object* v_r_933_; 
v_res_932_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRow___redArg(v_inst_928_, v_inst_929_, v_x_930_, v_x_931_);
v_r_933_ = lean_box(v_res_932_);
return v_r_933_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRow(lean_object* v_L_934_, lean_object* v_T_935_, lean_object* v_inst_936_, lean_object* v_inst_937_, lean_object* v_x_938_, lean_object* v_x_939_){
_start:
{
uint8_t v___x_940_; 
v___x_940_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRow_decEq___redArg(v_inst_936_, v_inst_937_, v_x_938_, v_x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRow___boxed(lean_object* v_L_941_, lean_object* v_T_942_, lean_object* v_inst_943_, lean_object* v_inst_944_, lean_object* v_x_945_, lean_object* v_x_946_){
_start:
{
uint8_t v_res_947_; lean_object* v_r_948_; 
v_res_947_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRow(v_L_941_, v_T_942_, v_inst_943_, v_inst_944_, v_x_945_, v_x_946_);
v_r_948_ = lean_box(v_res_947_);
return v_r_948_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_961_ = lean_unsigned_to_nat(8u);
v___x_962_ = lean_nat_to_int(v___x_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg(lean_object* v_inst_963_, lean_object* v_inst_964_, lean_object* v_x_965_){
_start:
{
lean_object* v_depth_966_; lean_object* v_ltype_967_; lean_object* v_item_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v_depth_966_ = lean_ctor_get(v_x_965_, 0);
lean_inc(v_depth_966_);
v_ltype_967_ = lean_ctor_get(v_x_965_, 1);
lean_inc(v_ltype_967_);
v_item_968_ = lean_ctor_get(v_x_965_, 2);
lean_inc(v_item_968_);
lean_dec_ref(v_x_965_);
v___x_969_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__5));
v___x_970_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__3));
v___x_971_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__7);
v___x_972_ = l_Nat_reprFast(v_depth_966_);
v___x_973_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
v___x_974_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_971_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = 0;
v___x_976_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set_uint8(v___x_976_, sizeof(void*)*1, v___x_975_);
v___x_977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_970_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__9));
v___x_979_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_977_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
v___x_980_ = lean_box(1);
v___x_981_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_979_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__2));
v___x_983_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
lean_ctor_set(v___x_984_, 1, v___x_969_);
v___x_985_ = lean_unsigned_to_nat(0u);
v___x_986_ = lean_apply_2(v_inst_963_, v_ltype_967_, v___x_985_);
v___x_987_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_971_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_988_, 0, v___x_987_);
lean_ctor_set_uint8(v___x_988_, sizeof(void*)*1, v___x_975_);
v___x_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_984_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_989_);
lean_ctor_set(v___x_990_, 1, v___x_978_);
v___x_991_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
lean_ctor_set(v___x_991_, 1, v___x_980_);
v___x_992_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__5));
v___x_993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_991_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v___x_969_);
v___x_995_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__6, &lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg___closed__6);
v___x_996_ = lean_apply_2(v_inst_964_, v_item_968_, v___x_985_);
v___x_997_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_998_, 0, v___x_997_);
lean_ctor_set_uint8(v___x_998_, sizeof(void*)*1, v___x_975_);
v___x_999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_994_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14, &lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__14);
v___x_1001_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__15));
v___x_1002_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set(v___x_1002_, 1, v___x_999_);
v___x_1003_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprFrame_repr___redArg___closed__16));
v___x_1004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1002_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1000_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*1, v___x_975_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr(lean_object* v_L_1007_, lean_object* v_T_1008_, lean_object* v_inst_1009_, lean_object* v_inst_1010_, lean_object* v_x_1011_, lean_object* v_prec_1012_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = lp_lean_x2dftml_LeanFtml_instReprRow_repr___redArg(v_inst_1009_, v_inst_1010_, v_x_1011_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow_repr___boxed(lean_object* v_L_1014_, lean_object* v_T_1015_, lean_object* v_inst_1016_, lean_object* v_inst_1017_, lean_object* v_x_1018_, lean_object* v_prec_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = lp_lean_x2dftml_LeanFtml_instReprRow_repr(v_L_1014_, v_T_1015_, v_inst_1016_, v_inst_1017_, v_x_1018_, v_prec_1019_);
lean_dec(v_prec_1019_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow___redArg(lean_object* v_inst_1021_, lean_object* v_inst_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprRow_repr___boxed), 6, 4);
lean_closure_set(v___x_1023_, 0, lean_box(0));
lean_closure_set(v___x_1023_, 1, lean_box(0));
lean_closure_set(v___x_1023_, 2, v_inst_1021_);
lean_closure_set(v___x_1023_, 3, v_inst_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRow(lean_object* v_L_1024_, lean_object* v_T_1025_, lean_object* v_inst_1026_, lean_object* v_inst_1027_){
_start:
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instReprRow_repr___boxed), 6, 4);
lean_closure_set(v___x_1028_, 0, lean_box(0));
lean_closure_set(v___x_1028_, 1, lean_box(0));
lean_closure_set(v___x_1028_, 2, v_inst_1026_);
lean_closure_set(v___x_1028_, 3, v_inst_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rowPlaced___redArg(lean_object* v_r_1029_){
_start:
{
lean_object* v_depth_1030_; lean_object* v_ltype_1031_; lean_object* v_item_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_depth_1030_ = lean_ctor_get(v_r_1029_, 0);
v_ltype_1031_ = lean_ctor_get(v_r_1029_, 1);
v_item_1032_ = lean_ctor_get(v_r_1029_, 2);
lean_inc(v_ltype_1031_);
lean_inc(v_depth_1030_);
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v_depth_1030_);
lean_ctor_set(v___x_1033_, 1, v_ltype_1031_);
lean_inc(v_item_1032_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_item_1032_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rowPlaced___redArg___boxed(lean_object* v_r_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = lp_lean_x2dftml_LeanFtml_rowPlaced___redArg(v_r_1035_);
lean_dec_ref(v_r_1035_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rowPlaced(lean_object* v_L_1037_, lean_object* v_T_1038_, lean_object* v_r_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = lp_lean_x2dftml_LeanFtml_rowPlaced___redArg(v_r_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rowPlaced___boxed(lean_object* v_L_1041_, lean_object* v_T_1042_, lean_object* v_r_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = lp_lean_x2dftml_LeanFtml_rowPlaced(v_L_1041_, v_T_1042_, v_r_1043_);
lean_dec_ref(v_r_1043_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustStack___redArg(lean_object* v_s_1045_, lean_object* v_prev_1046_, lean_object* v_r_1047_){
_start:
{
lean_object* v_depth_1048_; lean_object* v_ltype_1049_; uint8_t v___x_1050_; 
v_depth_1048_ = lean_ctor_get(v_r_1047_, 0);
lean_inc(v_depth_1048_);
v_ltype_1049_ = lean_ctor_get(v_r_1047_, 1);
lean_inc(v_ltype_1049_);
lean_dec_ref(v_r_1047_);
v___x_1050_ = lean_nat_dec_le(v_prev_1046_, v_depth_1048_);
if (v___x_1050_ == 0)
{
lean_object* v_finished_1051_; lean_object* v_stack_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1061_; 
lean_dec(v_ltype_1049_);
v_finished_1051_ = lean_ctor_get(v_s_1045_, 0);
v_stack_1052_ = lean_ctor_get(v_s_1045_, 1);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_s_1045_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1054_ = v_s_1045_;
v_isShared_1055_ = v_isSharedCheck_1061_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_stack_1052_);
lean_inc(v_finished_1051_);
lean_dec(v_s_1045_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1061_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1056_ = lean_nat_sub(v_prev_1046_, v_depth_1048_);
lean_dec(v_depth_1048_);
v___x_1057_ = lp_lean_x2dftml_LeanFtml_adjustDown___redArg(v___x_1056_, v_stack_1052_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v___x_1057_);
v___x_1059_ = v___x_1054_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_finished_1051_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
else
{
lean_object* v_finished_1062_; lean_object* v_stack_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1073_; 
v_finished_1062_ = lean_ctor_get(v_s_1045_, 0);
v_stack_1063_ = lean_ctor_get(v_s_1045_, 1);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_s_1045_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1065_ = v_s_1045_;
v_isShared_1066_ = v_isSharedCheck_1073_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_stack_1063_);
lean_inc(v_finished_1062_);
lean_dec(v_s_1045_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1073_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1071_; 
v___x_1067_ = lean_nat_sub(v_depth_1048_, v_prev_1046_);
lean_dec(v_depth_1048_);
v___x_1068_ = lp_lean_x2dftml_LeanFtml_framesOf___redArg(v___x_1067_, v_ltype_1049_);
v___x_1069_ = l_List_appendTR___redArg(v_stack_1063_, v___x_1068_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 1, v___x_1069_);
v___x_1071_ = v___x_1065_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_finished_1062_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustStack___redArg___boxed(lean_object* v_s_1074_, lean_object* v_prev_1075_, lean_object* v_r_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = lp_lean_x2dftml_LeanFtml_adjustStack___redArg(v_s_1074_, v_prev_1075_, v_r_1076_);
lean_dec(v_prev_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustStack(lean_object* v_L_1078_, lean_object* v_T_1079_, lean_object* v_s_1080_, lean_object* v_prev_1081_, lean_object* v_r_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = lp_lean_x2dftml_LeanFtml_adjustStack___redArg(v_s_1080_, v_prev_1081_, v_r_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_adjustStack___boxed(lean_object* v_L_1084_, lean_object* v_T_1085_, lean_object* v_s_1086_, lean_object* v_prev_1087_, lean_object* v_r_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = lp_lean_x2dftml_LeanFtml_adjustStack(v_L_1084_, v_T_1085_, v_s_1086_, v_prev_1087_, v_r_1088_);
lean_dec(v_prev_1087_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_step___redArg(lean_object* v_inst_1090_, lean_object* v_inst_1091_, lean_object* v_s_1092_, lean_object* v_prev_1093_, lean_object* v_r_1094_){
_start:
{
lean_object* v___y_1096_; lean_object* v_s1_1099_; lean_object* v___y_1101_; lean_object* v_stack_1106_; lean_object* v___x_1107_; 
lean_inc_ref(v_r_1094_);
v_s1_1099_ = lp_lean_x2dftml_LeanFtml_adjustStack___redArg(v_s_1092_, v_prev_1093_, v_r_1094_);
v_stack_1106_ = lean_ctor_get(v_s1_1099_, 1);
v___x_1107_ = lp_lean_x2dftml_LeanFtml_lastFrame___redArg(v_stack_1106_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_box(0);
v___y_1101_ = v___x_1108_;
goto v___jp_1100_;
}
else
{
lean_object* v_val_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1117_; 
v_val_1109_ = lean_ctor_get(v___x_1107_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1111_ = v___x_1107_;
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_val_1109_);
lean_dec(v___x_1107_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v_ltype_1113_; lean_object* v___x_1115_; 
v_ltype_1113_ = lean_ctor_get(v_val_1109_, 0);
lean_inc(v_ltype_1113_);
lean_dec(v_val_1109_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v_ltype_1113_);
v___x_1115_ = v___x_1111_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_ltype_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
v___y_1101_ = v___x_1115_;
goto v___jp_1100_;
}
}
}
v___jp_1095_:
{
lean_object* v_item_1097_; lean_object* v___x_1098_; 
v_item_1097_ = lean_ctor_get(v_r_1094_, 2);
lean_inc(v_item_1097_);
lean_dec_ref(v_r_1094_);
v___x_1098_ = lp_lean_x2dftml_LeanFtml_pushItem___redArg(v___y_1096_, v_item_1097_);
return v___x_1098_;
}
v___jp_1100_:
{
lean_object* v_ltype_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v_ltype_1102_ = lean_ctor_get(v_r_1094_, 1);
lean_inc(v_ltype_1102_);
v___x_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1103_, 0, v_ltype_1102_);
v___x_1104_ = l_Option_instDecidableEq___redArg(v_inst_1090_, v___y_1101_, v___x_1103_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; 
lean_inc(v_ltype_1102_);
v___x_1105_ = lp_lean_x2dftml_LeanFtml_newList___redArg(v_inst_1091_, v_s1_1099_, v_ltype_1102_);
v___y_1096_ = v___x_1105_;
goto v___jp_1095_;
}
else
{
lean_dec_ref(v_inst_1091_);
v___y_1096_ = v_s1_1099_;
goto v___jp_1095_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_step___redArg___boxed(lean_object* v_inst_1118_, lean_object* v_inst_1119_, lean_object* v_s_1120_, lean_object* v_prev_1121_, lean_object* v_r_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = lp_lean_x2dftml_LeanFtml_step___redArg(v_inst_1118_, v_inst_1119_, v_s_1120_, v_prev_1121_, v_r_1122_);
lean_dec(v_prev_1121_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_step(lean_object* v_L_1124_, lean_object* v_T_1125_, lean_object* v_inst_1126_, lean_object* v_inst_1127_, lean_object* v_s_1128_, lean_object* v_prev_1129_, lean_object* v_r_1130_){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = lp_lean_x2dftml_LeanFtml_step___redArg(v_inst_1126_, v_inst_1127_, v_s_1128_, v_prev_1129_, v_r_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_step___boxed(lean_object* v_L_1132_, lean_object* v_T_1133_, lean_object* v_inst_1134_, lean_object* v_inst_1135_, lean_object* v_s_1136_, lean_object* v_prev_1137_, lean_object* v_r_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = lp_lean_x2dftml_LeanFtml_step(v_L_1132_, v_T_1133_, v_inst_1134_, v_inst_1135_, v_s_1136_, v_prev_1137_, v_r_1138_);
lean_dec(v_prev_1137_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runRows___redArg(lean_object* v_inst_1140_, lean_object* v_inst_1141_, lean_object* v_x_1142_, lean_object* v_x_1143_, lean_object* v_x_1144_){
_start:
{
if (lean_obj_tag(v_x_1144_) == 0)
{
lean_object* v___x_1145_; 
lean_dec_ref(v_inst_1141_);
lean_dec_ref(v_inst_1140_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_x_1142_);
lean_ctor_set(v___x_1145_, 1, v_x_1143_);
return v___x_1145_;
}
else
{
lean_object* v_head_1146_; lean_object* v_tail_1147_; lean_object* v_depth_1148_; lean_object* v___x_1149_; 
v_head_1146_ = lean_ctor_get(v_x_1144_, 0);
lean_inc(v_head_1146_);
v_tail_1147_ = lean_ctor_get(v_x_1144_, 1);
lean_inc(v_tail_1147_);
lean_dec_ref_known(v_x_1144_, 2);
v_depth_1148_ = lean_ctor_get(v_head_1146_, 0);
lean_inc(v_depth_1148_);
lean_inc_ref(v_inst_1141_);
lean_inc_ref(v_inst_1140_);
v___x_1149_ = lp_lean_x2dftml_LeanFtml_step___redArg(v_inst_1140_, v_inst_1141_, v_x_1142_, v_x_1143_, v_head_1146_);
lean_dec(v_x_1143_);
v_x_1142_ = v___x_1149_;
v_x_1143_ = v_depth_1148_;
v_x_1144_ = v_tail_1147_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runRows(lean_object* v_L_1151_, lean_object* v_T_1152_, lean_object* v_inst_1153_, lean_object* v_inst_1154_, lean_object* v_x_1155_, lean_object* v_x_1156_, lean_object* v_x_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = lp_lean_x2dftml_LeanFtml_runRows___redArg(v_inst_1153_, v_inst_1154_, v_x_1155_, v_x_1156_, v_x_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapFrames___redArg(lean_object* v_x_1159_){
_start:
{
if (lean_obj_tag(v_x_1159_) == 0)
{
lean_object* v___x_1160_; 
v___x_1160_ = lean_box(0);
return v___x_1160_;
}
else
{
lean_object* v_head_1161_; lean_object* v_tail_1162_; lean_object* v_ltype_1163_; lean_object* v_items_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v_head_1161_ = lean_ctor_get(v_x_1159_, 0);
lean_inc(v_head_1161_);
v_tail_1162_ = lean_ctor_get(v_x_1159_, 1);
lean_inc(v_tail_1162_);
lean_dec_ref_known(v_x_1159_, 2);
v_ltype_1163_ = lean_ctor_get(v_head_1161_, 0);
lean_inc(v_ltype_1163_);
v_items_1164_ = lean_ctor_get(v_head_1161_, 1);
lean_inc(v_items_1164_);
lean_dec(v_head_1161_);
v___x_1165_ = lp_lean_x2dftml_LeanFtml_wrapFrames___redArg(v_tail_1162_);
v___x_1166_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(v_items_1164_, v___x_1165_);
lean_dec(v___x_1165_);
v___x_1167_ = lean_box(0);
v___x_1168_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1168_, 0, v_ltype_1163_);
lean_ctor_set(v___x_1168_, 1, v___x_1166_);
lean_ctor_set(v___x_1168_, 2, v___x_1167_);
return v___x_1168_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapFrames(lean_object* v_L_1169_, lean_object* v_T_1170_, lean_object* v_x_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = lp_lean_x2dftml_LeanFtml_wrapFrames___redArg(v_x_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intoTrees___redArg(lean_object* v_inst_1173_, lean_object* v_s_1174_){
_start:
{
lean_object* v_stack_1175_; 
v_stack_1175_ = lean_ctor_get(v_s_1174_, 1);
lean_inc(v_stack_1175_);
if (lean_obj_tag(v_stack_1175_) == 0)
{
lean_object* v_finished_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_dec_ref(v_inst_1173_);
v_finished_1176_ = lean_ctor_get(v_s_1174_, 0);
lean_inc(v_finished_1176_);
lean_dec_ref(v_s_1174_);
v___x_1177_ = lean_box(0);
v___x_1178_ = l_List_appendTR___redArg(v_finished_1176_, v___x_1177_);
return v___x_1178_;
}
else
{
lean_object* v_head_1179_; lean_object* v_finished_1180_; lean_object* v_tail_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1206_; 
v_head_1179_ = lean_ctor_get(v_stack_1175_, 0);
lean_inc(v_head_1179_);
v_finished_1180_ = lean_ctor_get(v_s_1174_, 0);
lean_inc(v_finished_1180_);
lean_dec_ref(v_s_1174_);
v_tail_1181_ = lean_ctor_get(v_stack_1175_, 1);
v_isSharedCheck_1206_ = !lean_is_exclusive(v_stack_1175_);
if (v_isSharedCheck_1206_ == 0)
{
lean_object* v_unused_1207_; 
v_unused_1207_ = lean_ctor_get(v_stack_1175_, 0);
lean_dec(v_unused_1207_);
v___x_1183_ = v_stack_1175_;
v_isShared_1184_ = v_isSharedCheck_1206_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_tail_1181_);
lean_dec(v_stack_1175_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1206_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v_ltype_1185_; lean_object* v_items_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1205_; 
v_ltype_1185_ = lean_ctor_get(v_head_1179_, 0);
v_items_1186_ = lean_ctor_get(v_head_1179_, 1);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_head_1179_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1188_ = v_head_1179_;
v_isShared_1189_ = v_isSharedCheck_1205_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_items_1186_);
lean_inc(v_ltype_1185_);
lean_dec(v_head_1179_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1205_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1190_; lean_object* v_items_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; 
v___x_1190_ = lp_lean_x2dftml_LeanFtml_wrapFrames___redArg(v_tail_1181_);
v_items_1191_ = lp_lean_x2dftml_LeanFtml_Forest_appendForest___redArg(v_items_1186_, v___x_1190_);
lean_dec(v___x_1190_);
v___x_1192_ = lean_box(0);
lean_inc(v_items_1191_);
v___x_1193_ = lean_apply_2(v_inst_1173_, v_items_1191_, v___x_1192_);
v___x_1194_ = lean_unbox(v___x_1193_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1196_; 
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 1, v_items_1191_);
v___x_1196_ = v___x_1188_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_ltype_1185_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v_items_1191_);
v___x_1196_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1197_; lean_object* v___x_1199_; 
v___x_1197_ = lean_box(0);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 1, v___x_1197_);
lean_ctor_set(v___x_1183_, 0, v___x_1196_);
v___x_1199_ = v___x_1183_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v___x_1197_);
v___x_1199_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_List_appendTR___redArg(v_finished_1180_, v___x_1199_);
return v___x_1200_;
}
}
}
else
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
lean_dec(v_items_1191_);
lean_del_object(v___x_1188_);
lean_dec(v_ltype_1185_);
lean_del_object(v___x_1183_);
v___x_1203_ = lean_box(0);
v___x_1204_ = l_List_appendTR___redArg(v_finished_1180_, v___x_1203_);
return v___x_1204_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intoTrees(lean_object* v_L_1208_, lean_object* v_T_1209_, lean_object* v_inst_1210_, lean_object* v_s_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = lp_lean_x2dftml_LeanFtml_intoTrees___redArg(v_inst_1210_, v_s_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_processDepths___redArg(lean_object* v_inst_1213_, lean_object* v_inst_1214_, lean_object* v_top_1215_, lean_object* v_rows_1216_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v_fst_1224_; lean_object* v___x_1225_; 
v___x_1217_ = lean_box(0);
v___x_1218_ = lean_box(0);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v_top_1215_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___x_1220_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
lean_ctor_set(v___x_1220_, 1, v___x_1217_);
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1217_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_inst_1214_);
v___x_1223_ = lp_lean_x2dftml_LeanFtml_runRows___redArg(v_inst_1213_, v_inst_1214_, v___x_1221_, v___x_1222_, v_rows_1216_);
v_fst_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_fst_1224_);
lean_dec_ref(v___x_1223_);
v___x_1225_ = lp_lean_x2dftml_LeanFtml_intoTrees___redArg(v_inst_1214_, v_fst_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_processDepths(lean_object* v_L_1226_, lean_object* v_T_1227_, lean_object* v_inst_1228_, lean_object* v_inst_1229_, lean_object* v_top_1230_, lean_object* v_rows_1231_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = lp_lean_x2dftml_LeanFtml_processDepths___redArg(v_inst_1228_, v_inst_1229_, v_top_1230_, v_rows_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_Depth_0__LeanFtml_lastFrame_match__1_splitter___redArg(lean_object* v_x_1233_, lean_object* v_h__1_1234_, lean_object* v_h__2_1235_, lean_object* v_h__3_1236_){
_start:
{
if (lean_obj_tag(v_x_1233_) == 0)
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_dec(v_h__3_1236_);
lean_dec(v_h__2_1235_);
v___x_1237_ = lean_box(0);
v___x_1238_ = lean_apply_1(v_h__1_1234_, v___x_1237_);
return v___x_1238_;
}
else
{
lean_object* v_tail_1239_; 
lean_dec(v_h__1_1234_);
v_tail_1239_ = lean_ctor_get(v_x_1233_, 1);
if (lean_obj_tag(v_tail_1239_) == 0)
{
lean_object* v_head_1240_; lean_object* v___x_1241_; 
lean_dec(v_h__3_1236_);
v_head_1240_ = lean_ctor_get(v_x_1233_, 0);
lean_inc(v_head_1240_);
lean_dec_ref_known(v_x_1233_, 2);
v___x_1241_ = lean_apply_1(v_h__2_1235_, v_head_1240_);
return v___x_1241_;
}
else
{
lean_object* v_head_1242_; lean_object* v___x_1243_; 
lean_inc(v_tail_1239_);
lean_dec(v_h__2_1235_);
v_head_1242_ = lean_ctor_get(v_x_1233_, 0);
lean_inc(v_head_1242_);
lean_dec_ref_known(v_x_1233_, 2);
v___x_1243_ = lean_apply_3(v_h__3_1236_, v_head_1242_, v_tail_1239_, lean_box(0));
return v___x_1243_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_Depth_0__LeanFtml_lastFrame_match__1_splitter(lean_object* v_L_1244_, lean_object* v_T_1245_, lean_object* v_motive_1246_, lean_object* v_x_1247_, lean_object* v_h__1_1248_, lean_object* v_h__2_1249_, lean_object* v_h__3_1250_){
_start:
{
if (lean_obj_tag(v_x_1247_) == 0)
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
lean_dec(v_h__3_1250_);
lean_dec(v_h__2_1249_);
v___x_1251_ = lean_box(0);
v___x_1252_ = lean_apply_1(v_h__1_1248_, v___x_1251_);
return v___x_1252_;
}
else
{
lean_object* v_tail_1253_; 
lean_dec(v_h__1_1248_);
v_tail_1253_ = lean_ctor_get(v_x_1247_, 1);
if (lean_obj_tag(v_tail_1253_) == 0)
{
lean_object* v_head_1254_; lean_object* v___x_1255_; 
lean_dec(v_h__3_1250_);
v_head_1254_ = lean_ctor_get(v_x_1247_, 0);
lean_inc(v_head_1254_);
lean_dec_ref_known(v_x_1247_, 2);
v___x_1255_ = lean_apply_1(v_h__2_1249_, v_head_1254_);
return v___x_1255_;
}
else
{
lean_object* v_head_1256_; lean_object* v___x_1257_; 
lean_inc(v_tail_1253_);
lean_dec(v_h__2_1249_);
v_head_1256_ = lean_ctor_get(v_x_1247_, 0);
lean_inc(v_head_1256_);
lean_dec_ref_known(v_x_1247_, 2);
v___x_1257_ = lean_apply_3(v_h__3_1250_, v_head_1256_, v_tail_1253_, lean_box(0));
return v___x_1257_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_Depth(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
