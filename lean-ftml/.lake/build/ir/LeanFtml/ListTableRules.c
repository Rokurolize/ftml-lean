// Lean compiler output
// Module: LeanFtml.ListTableRules
// Imports: public import Init public meta import Init public import LeanFtml.RenderCore
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
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_natBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optNat(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_phpEmptyOpt(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ltTypeIs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ltTypeIs___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ltIsset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ltIsset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrPairs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrPairs___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_attrsFragment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__0_value;
static const lean_array_object lp_lean_x2dftml_LeanFtml_attrsFragment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_attrsFragment___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_attrsFragment___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_attrsFragment___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_renderAttrsCompat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsCompat___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderAttrsCompat___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsCompat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsCompat___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_advAttrRank_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_advAttrRank_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_advAttrRank___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_advAttrRank___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_advAttrRank___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_advAttrRank___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_advAttrRank___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_advAttrRank___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_advAttrRank___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "role"};
static const lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_advAttrRank___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_advAttrRank___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "data-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_advAttrRank___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___closed__9;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rankAttrs_insertRanked(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rankAttrs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsQuotesSubst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsQuotesSubst___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_renderList___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderList___lam__0___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "</li>\n</ul>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "</li>\n</ol>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<ol"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ">\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "in_sublist"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "<li>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "</"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__16;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trail"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__17_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__18;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__19_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__20;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "attrs"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__21_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__22;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "count"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__23_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__24;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "</li>\n<li>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__25_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__26;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "bullet_list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__27_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__28;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "number_list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__29_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__30;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bullet_list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__31_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__32;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "number_list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__33_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__34;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "sublist_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__35_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__36;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "sublist_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__37_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__38;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "bullet_item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__39_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__40;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "number_item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__41_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__42;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bullet_item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__43_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__44;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "number_item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__45_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__46;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "explicit_list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__47_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__48;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "explicit_list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__49_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__50;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "explicit_item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__51_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__52;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "explicit_item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__53_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__54;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "explicit_none_item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__55_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__56;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "explicit_none_item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__57_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__58;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "explicit_inline_wrapper_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__59 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__59_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__60;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "explicit_inline_wrapper_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__61 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__61_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__62;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "explicit_br_no_nl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__63 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__63_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__64;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "explicit_raw_nl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__65 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__65_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__66;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__67 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__67_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__68;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "<br />"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__69 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__69_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__70;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\n</li>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__71 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__71_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__72;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "<li style=\"list-style: none; display: inline\">\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__73 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__73_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__74;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</li>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__75 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__75_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__76;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "<li style=\"list-style: none\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__77 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__77_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__78;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lead"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__79 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__79_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__80_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__80;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<li"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__81 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__81_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__82;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "list_type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__83 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__83_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__84;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ol"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__85 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__85_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__86;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ul"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__87 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__87_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__88;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tail"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__89 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__89_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__90_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__90;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sublist"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__91 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__91_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__92;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "</ol>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__93 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__93_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__94;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "</ul>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__95 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__95_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__96_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__96;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "format"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__97 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__97_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__98_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__98;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " type=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__99 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__99_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__100_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__100;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<ul"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__101 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__101_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__102;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__103;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__104;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__105;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderList___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__106 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderList___closed__106_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderList___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderList___closed__107;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderList(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderList___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "narr_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "narr_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</dd>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "<dd>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</dt>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "<dt>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</dl>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDeflist___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<dl>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDeflist___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___closed__23;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = " style=\"text-align: "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ";\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " rowspan=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " colspan=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<td"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<th"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rowspan"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "table_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "table_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "caption_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "caption_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "row_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "row_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cell_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cell_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__30_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__31;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__32_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__33;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</td>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__34_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__35;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</th>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__36_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__37;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "span"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__38_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__39;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</tr>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__40_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__41;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<tr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__42_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__43;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "</caption>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__44_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__45;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "<caption"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__46_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__47;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "</table>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__48_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__49;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTable___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "<table class=\"wiki-content-table\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTable___closed__50_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTable___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTable___closed__51;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTable(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTable___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rowStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "cellStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "cellEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rowEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "<table"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "th"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__16;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTableadv___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "td"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__17_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTableadv___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___closed__18;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___boxed(lean_object*);
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__0));
v___x_3_ = l_String_toListImpl(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ltTypeIs(lean_object* v_opts_4_, lean_object* v_expected_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_6_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1, &lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1);
v___x_7_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_4_, v___x_6_);
v___x_8_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_7_, v_expected_5_);
lean_dec(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ltTypeIs___boxed(lean_object* v_opts_9_, lean_object* v_expected_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_9_, v_expected_10_);
lean_dec(v_expected_10_);
lean_dec(v_opts_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ltIsset(lean_object* v_opts_13_, lean_object* v_key_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_13_, v_key_14_);
if (lean_obj_tag(v___x_15_) == 0)
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
else
{
lean_object* v_val_17_; 
v_val_17_ = lean_ctor_get(v___x_15_, 0);
lean_inc(v_val_17_);
lean_dec_ref_known(v___x_15_, 1);
if (lean_obj_tag(v_val_17_) == 3)
{
uint8_t v___x_18_; 
v___x_18_ = 0;
return v___x_18_;
}
else
{
uint8_t v___x_19_; 
lean_dec(v_val_17_);
v___x_19_ = 1;
return v___x_19_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ltIsset___boxed(lean_object* v_opts_20_, lean_object* v_key_21_){
_start:
{
uint8_t v_res_22_; lean_object* v_r_23_; 
v_res_22_ = lp_lean_x2dftml_LeanFtml_ltIsset(v_opts_20_, v_key_21_);
lean_dec(v_key_21_);
lean_dec(v_opts_20_);
v_r_23_ = lean_box(v_res_22_);
return v_r_23_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrPairs(lean_object* v_opts_24_, lean_object* v_key_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_24_, v_key_25_);
if (lean_obj_tag(v___x_26_) == 1)
{
lean_object* v_val_27_; 
v_val_27_ = lean_ctor_get(v___x_26_, 0);
lean_inc(v_val_27_);
lean_dec_ref_known(v___x_26_, 1);
if (lean_obj_tag(v_val_27_) == 4)
{
lean_object* v_a_28_; 
v_a_28_ = lean_ctor_get(v_val_27_, 0);
lean_inc(v_a_28_);
lean_dec_ref_known(v_val_27_, 1);
return v_a_28_;
}
else
{
lean_object* v___x_29_; 
lean_dec(v_val_27_);
v___x_29_ = lean_box(0);
return v___x_29_;
}
}
else
{
lean_object* v___x_30_; 
lean_dec(v___x_26_);
v___x_30_ = lean_box(0);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrPairs___boxed(lean_object* v_opts_31_, lean_object* v_key_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = lp_lean_x2dftml_LeanFtml_attrPairs(v_opts_31_, v_key_32_);
lean_dec(v_key_32_);
lean_dec(v_opts_31_);
return v_res_33_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_attrsFragment___closed__3(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrsFragment___closed__2));
v___x_41_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrsFragment___closed__4));
v___x_44_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment(lean_object* v_esc_45_, lean_object* v_x_46_){
_start:
{
if (lean_obj_tag(v_x_46_) == 0)
{
lean_object* v___x_47_; 
lean_dec_ref(v_esc_45_);
v___x_47_ = lean_box(0);
return v___x_47_;
}
else
{
lean_object* v_head_48_; lean_object* v_tail_49_; lean_object* v_fst_50_; lean_object* v_snd_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_head_48_ = lean_ctor_get(v_x_46_, 0);
v_tail_49_ = lean_ctor_get(v_x_46_, 1);
v_fst_50_ = lean_ctor_get(v_head_48_, 0);
v_snd_51_ = lean_ctor_get(v_head_48_, 1);
v___x_52_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrsFragment___closed__0));
v___x_53_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrsFragment___closed__1));
v___x_54_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_fst_50_, v___x_53_);
v___x_55_ = l_List_appendTR___redArg(v___x_52_, v___x_54_);
v___x_56_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__3, &lp_lean_x2dftml_LeanFtml_attrsFragment___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_attrsFragment___closed__3);
v___x_57_ = l_List_appendTR___redArg(v___x_55_, v___x_56_);
v___x_58_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_snd_51_);
lean_inc_ref(v_esc_45_);
v___x_59_ = lean_apply_1(v_esc_45_, v___x_58_);
v___x_60_ = l_List_appendTR___redArg(v___x_57_, v___x_59_);
v___x_61_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5, &lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5);
v___x_62_ = l_List_appendTR___redArg(v___x_60_, v___x_61_);
v___x_63_ = lp_lean_x2dftml_LeanFtml_attrsFragment(v_esc_45_, v_tail_49_);
v___x_64_ = l_List_appendTR___redArg(v___x_62_, v___x_63_);
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrsFragment___boxed(lean_object* v_esc_65_, lean_object* v_x_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_lean_x2dftml_LeanFtml_attrsFragment(v_esc_65_, v_x_66_);
lean_dec(v_x_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsCompat(lean_object* v_opts_69_, lean_object* v_key_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderAttrsCompat___closed__0));
v___x_72_ = lp_lean_x2dftml_LeanFtml_attrPairs(v_opts_69_, v_key_70_);
v___x_73_ = lp_lean_x2dftml_LeanFtml_attrsFragment(v___x_71_, v___x_72_);
lean_dec(v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsCompat___boxed(lean_object* v_opts_74_, lean_object* v_key_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_lean_x2dftml_LeanFtml_renderAttrsCompat(v_opts_74_, v_key_75_);
lean_dec(v_key_75_);
lean_dec(v_opts_74_);
return v_res_76_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_advAttrRank_spec__0(lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
{
uint8_t v___x_79_; 
v___x_79_ = 1;
return v___x_79_;
}
else
{
if (lean_obj_tag(v_x_78_) == 0)
{
uint8_t v___x_80_; 
v___x_80_ = 0;
return v___x_80_;
}
else
{
lean_object* v_head_81_; lean_object* v_tail_82_; lean_object* v_head_83_; lean_object* v_tail_84_; uint32_t v___x_85_; uint32_t v___x_86_; uint8_t v___x_87_; 
v_head_81_ = lean_ctor_get(v_x_77_, 0);
v_tail_82_ = lean_ctor_get(v_x_77_, 1);
v_head_83_ = lean_ctor_get(v_x_78_, 0);
v_tail_84_ = lean_ctor_get(v_x_78_, 1);
v___x_85_ = lean_unbox_uint32(v_head_81_);
v___x_86_ = lean_unbox_uint32(v_head_83_);
v___x_87_ = lean_uint32_dec_eq(v___x_85_, v___x_86_);
if (v___x_87_ == 0)
{
return v___x_87_;
}
else
{
v_x_77_ = v_tail_82_;
v_x_78_ = v_tail_84_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_advAttrRank_spec__0___boxed(lean_object* v_x_89_, lean_object* v_x_90_){
_start:
{
uint8_t v_res_91_; lean_object* v_r_92_; 
v_res_91_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_advAttrRank_spec__0(v_x_89_, v_x_90_);
lean_dec(v_x_90_);
lean_dec(v_x_89_);
v_r_92_ = lean_box(v_res_91_);
return v_r_92_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_advAttrRank___closed__0));
v___x_95_ = l_String_toListImpl(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__3(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_advAttrRank___closed__2));
v___x_98_ = l_String_toListImpl(v___x_97_);
return v___x_98_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__5(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_advAttrRank___closed__4));
v___x_101_ = l_String_toListImpl(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__7(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_advAttrRank___closed__6));
v___x_104_ = l_String_toListImpl(v___x_103_);
return v___x_104_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__9(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_advAttrRank___closed__8));
v___x_107_ = l_String_toListImpl(v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank(lean_object* v_k_108_){
_start:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__1, &lp_lean_x2dftml_LeanFtml_advAttrRank___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__1);
v___x_110_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_k_108_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__3, &lp_lean_x2dftml_LeanFtml_advAttrRank___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__3);
v___x_112_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_k_108_, v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__5, &lp_lean_x2dftml_LeanFtml_advAttrRank___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__5);
v___x_114_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_k_108_, v___x_113_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__7, &lp_lean_x2dftml_LeanFtml_advAttrRank___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__7);
v___x_116_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_k_108_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1, &lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_ltTypeIs___closed__1);
v___x_118_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_k_108_, v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_advAttrRank___closed__9, &lp_lean_x2dftml_LeanFtml_advAttrRank___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_advAttrRank___closed__9);
v___x_120_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_advAttrRank_spec__0(v___x_119_, v_k_108_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; 
v___x_121_ = lean_unsigned_to_nat(6u);
return v___x_121_;
}
else
{
lean_object* v___x_122_; 
v___x_122_ = lean_unsigned_to_nat(5u);
return v___x_122_;
}
}
else
{
lean_object* v___x_123_; 
v___x_123_ = lean_unsigned_to_nat(4u);
return v___x_123_;
}
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_unsigned_to_nat(3u);
return v___x_124_;
}
}
else
{
lean_object* v___x_125_; 
v___x_125_ = lean_unsigned_to_nat(2u);
return v___x_125_;
}
}
else
{
lean_object* v___x_126_; 
v___x_126_ = lean_unsigned_to_nat(1u);
return v___x_126_;
}
}
else
{
lean_object* v___x_127_; 
v___x_127_ = lean_unsigned_to_nat(0u);
return v___x_127_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_advAttrRank___boxed(lean_object* v_k_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = lp_lean_x2dftml_LeanFtml_advAttrRank(v_k_128_);
lean_dec(v_k_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rankAttrs_insertRanked(lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
if (lean_obj_tag(v_a_131_) == 0)
{
lean_object* v___x_132_; 
v___x_132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_132_, 0, v_a_130_);
lean_ctor_set(v___x_132_, 1, v_a_131_);
return v___x_132_;
}
else
{
lean_object* v_head_133_; lean_object* v_tail_134_; lean_object* v_fst_135_; lean_object* v_fst_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v_head_133_ = lean_ctor_get(v_a_131_, 0);
lean_inc(v_head_133_);
v_tail_134_ = lean_ctor_get(v_a_131_, 1);
v_fst_135_ = lean_ctor_get(v_a_130_, 0);
v_fst_136_ = lean_ctor_get(v_head_133_, 0);
v___x_137_ = lp_lean_x2dftml_LeanFtml_advAttrRank(v_fst_135_);
v___x_138_ = lp_lean_x2dftml_LeanFtml_advAttrRank(v_fst_136_);
v___x_139_ = lean_nat_dec_le(v___x_137_, v___x_138_);
lean_dec(v___x_138_);
lean_dec(v___x_137_);
if (v___x_139_ == 0)
{
lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_147_; 
lean_inc(v_tail_134_);
v_isSharedCheck_147_ = !lean_is_exclusive(v_a_131_);
if (v_isSharedCheck_147_ == 0)
{
lean_object* v_unused_148_; lean_object* v_unused_149_; 
v_unused_148_ = lean_ctor_get(v_a_131_, 1);
lean_dec(v_unused_148_);
v_unused_149_ = lean_ctor_get(v_a_131_, 0);
lean_dec(v_unused_149_);
v___x_141_ = v_a_131_;
v_isShared_142_ = v_isSharedCheck_147_;
goto v_resetjp_140_;
}
else
{
lean_dec(v_a_131_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_147_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_143_; lean_object* v___x_145_; 
v___x_143_ = lp_lean_x2dftml_LeanFtml_rankAttrs_insertRanked(v_a_130_, v_tail_134_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 1, v___x_143_);
v___x_145_ = v___x_141_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_head_133_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v___x_143_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
else
{
lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
v_isSharedCheck_156_ = !lean_is_exclusive(v_head_133_);
if (v_isSharedCheck_156_ == 0)
{
lean_object* v_unused_157_; lean_object* v_unused_158_; 
v_unused_157_ = lean_ctor_get(v_head_133_, 1);
lean_dec(v_unused_157_);
v_unused_158_ = lean_ctor_get(v_head_133_, 0);
lean_dec(v_unused_158_);
v___x_151_ = v_head_133_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_dec(v_head_133_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set_tag(v___x_151_, 1);
lean_ctor_set(v___x_151_, 1, v_a_131_);
lean_ctor_set(v___x_151_, 0, v_a_130_);
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_130_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v_a_131_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rankAttrs(lean_object* v_x_159_){
_start:
{
if (lean_obj_tag(v_x_159_) == 0)
{
return v_x_159_;
}
else
{
lean_object* v_head_160_; lean_object* v_tail_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_head_160_ = lean_ctor_get(v_x_159_, 0);
lean_inc(v_head_160_);
v_tail_161_ = lean_ctor_get(v_x_159_, 1);
lean_inc(v_tail_161_);
lean_dec_ref_known(v_x_159_, 2);
v___x_162_ = lp_lean_x2dftml_LeanFtml_rankAttrs(v_tail_161_);
v___x_163_ = lp_lean_x2dftml_LeanFtml_rankAttrs_insertRanked(v_head_160_, v___x_162_);
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsQuotesSubst(lean_object* v_opts_164_, lean_object* v_key_165_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_166_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderAttrsCompat___closed__0));
v___x_167_ = lp_lean_x2dftml_LeanFtml_attrPairs(v_opts_164_, v_key_165_);
v___x_168_ = lp_lean_x2dftml_LeanFtml_rankAttrs(v___x_167_);
v___x_169_ = lp_lean_x2dftml_LeanFtml_attrsFragment(v___x_166_, v___x_168_);
lean_dec(v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderAttrsQuotesSubst___boxed(lean_object* v_opts_170_, lean_object* v_key_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = lp_lean_x2dftml_LeanFtml_renderAttrsQuotesSubst(v_opts_170_, v_key_171_);
lean_dec(v_key_171_);
lean_dec(v_opts_170_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_renderList___lam__0(lean_object* v_n_173_){
_start:
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = lean_nat_dec_lt(v___x_174_, v_n_173_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderList___lam__0___boxed(lean_object* v_n_176_){
_start:
{
uint8_t v_res_177_; lean_object* v_r_178_; 
v_res_177_ = lp_lean_x2dftml_LeanFtml_renderList___lam__0(v_n_176_);
lean_dec(v_n_176_);
v_r_178_ = lean_box(v_res_177_);
return v_r_178_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__1));
v___x_184_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__4(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__3));
v___x_187_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__6(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__5));
v___x_190_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__7));
v___x_193_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_192_);
return v___x_193_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__10(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__9));
v___x_196_ = l_String_toListImpl(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__12(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__11));
v___x_199_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__14(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__13));
v___x_202_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__16(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__15));
v___x_205_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_204_);
return v___x_205_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__18(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__17));
v___x_208_ = l_String_toListImpl(v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__20(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__19));
v___x_211_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_210_);
return v___x_211_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__22(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__21));
v___x_214_ = l_String_toListImpl(v___x_213_);
return v___x_214_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__24(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__23));
v___x_217_ = l_String_toListImpl(v___x_216_);
return v___x_217_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__26(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__25));
v___x_220_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_219_);
return v___x_220_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__28(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__27));
v___x_223_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_222_);
return v___x_223_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__30(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__29));
v___x_226_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_225_);
return v___x_226_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__32(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__31));
v___x_229_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_228_);
return v___x_229_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__34(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__33));
v___x_232_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_231_);
return v___x_232_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__36(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__35));
v___x_235_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_234_);
return v___x_235_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__38(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__37));
v___x_238_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_237_);
return v___x_238_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__40(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__39));
v___x_241_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__42(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__41));
v___x_244_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_243_);
return v___x_244_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__44(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__43));
v___x_247_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_246_);
return v___x_247_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__46(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__45));
v___x_250_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_249_);
return v___x_250_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__48(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__47));
v___x_253_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__50(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__49));
v___x_256_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_255_);
return v___x_256_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__52(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__51));
v___x_259_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_258_);
return v___x_259_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__54(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__53));
v___x_262_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_261_);
return v___x_262_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__56(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__55));
v___x_265_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__58(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__57));
v___x_268_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__60(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__59));
v___x_271_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_270_);
return v___x_271_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__62(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__61));
v___x_274_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__64(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__63));
v___x_277_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_276_);
return v___x_277_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__66(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__65));
v___x_280_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_279_);
return v___x_280_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__68(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__67));
v___x_283_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_282_);
return v___x_283_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__70(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__69));
v___x_286_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_285_);
return v___x_286_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__72(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__71));
v___x_289_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__74(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__73));
v___x_292_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__76(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__75));
v___x_295_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__78(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__77));
v___x_298_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__80(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__79));
v___x_301_ = l_String_toListImpl(v___x_300_);
return v___x_301_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__82(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__81));
v___x_304_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__84(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__83));
v___x_307_ = l_String_toListImpl(v___x_306_);
return v___x_307_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__86(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__85));
v___x_310_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_309_);
return v___x_310_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__88(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__87));
v___x_313_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_312_);
return v___x_313_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__90(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__89));
v___x_316_ = l_String_toListImpl(v___x_315_);
return v___x_316_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__92(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__91));
v___x_319_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__94(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__93));
v___x_322_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_321_);
return v___x_322_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__96(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__95));
v___x_325_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__98(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__97));
v___x_328_ = l_String_toListImpl(v___x_327_);
return v___x_328_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__100(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__99));
v___x_331_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__102(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__101));
v___x_334_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__103(void){
_start:
{
lean_object* v_typeAttr_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_typeAttr_335_ = lean_box(0);
v___x_336_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__102, &lp_lean_x2dftml_LeanFtml_renderList___closed__102_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__102);
v___x_337_ = l_List_appendTR___redArg(v___x_336_, v_typeAttr_335_);
return v___x_337_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__104(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v_html_340_; 
v___x_338_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v___x_339_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__103, &lp_lean_x2dftml_LeanFtml_renderList___closed__103_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__103);
v_html_340_ = l_List_appendTR___redArg(v___x_339_, v___x_338_);
return v_html_340_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__105(void){
_start:
{
lean_object* v_html_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_html_341_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__104, &lp_lean_x2dftml_LeanFtml_renderList___closed__104_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__104);
v___x_342_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__0));
v___x_343_ = l_List_appendTR___redArg(v___x_342_, v_html_341_);
return v___x_343_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderList___closed__107(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__106));
v___x_346_ = l_String_toListImpl(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderList(lean_object* v_opts_347_){
_start:
{
lean_object* v___y_349_; uint8_t v___y_353_; uint8_t v___y_354_; uint8_t v___y_355_; lean_object* v___y_356_; uint8_t v___y_358_; uint8_t v___y_359_; uint8_t v___y_360_; lean_object* v___y_363_; uint8_t v___y_367_; uint8_t v___y_368_; uint8_t v___y_369_; lean_object* v___y_370_; uint8_t v___y_372_; uint8_t v___y_373_; uint8_t v___y_374_; uint8_t v___y_377_; lean_object* v___y_378_; uint8_t v___y_389_; lean_object* v___y_394_; lean_object* v___y_403_; uint8_t v___y_418_; uint8_t v___y_419_; uint8_t v___y_520_; lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___y_525_; 
v___x_522_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__107, &lp_lean_x2dftml_LeanFtml_renderList___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__107);
v___x_523_ = lp_lean_x2dftml_LeanFtml_optNat(v_opts_347_, v___x_522_);
if (lean_obj_tag(v___x_523_) == 0)
{
uint8_t v___x_529_; 
v___x_529_ = 0;
v___y_525_ = v___x_529_;
goto v___jp_524_;
}
else
{
lean_object* v_val_530_; uint8_t v___x_531_; 
v_val_530_ = lean_ctor_get(v___x_523_, 0);
v___x_531_ = lp_lean_x2dftml_LeanFtml_renderList___lam__0(v_val_530_);
v___y_525_ = v___x_531_;
goto v___jp_524_;
}
v___jp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__0));
lean_inc(v___y_349_);
v___x_351_ = l_List_appendTR___redArg(v___y_349_, v___x_350_);
return v___x_351_;
}
v___jp_352_:
{
if (v___y_353_ == 0)
{
if (v___y_355_ == 0)
{
lean_inc(v___y_356_);
return v___y_356_;
}
else
{
if (v___y_354_ == 0)
{
lean_inc(v___y_356_);
return v___y_356_;
}
else
{
v___y_349_ = v___y_356_;
goto v___jp_348_;
}
}
}
else
{
v___y_349_ = v___y_356_;
goto v___jp_348_;
}
}
v___jp_357_:
{
lean_object* v___x_361_; 
v___x_361_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__2, &lp_lean_x2dftml_LeanFtml_renderList___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__2);
v___y_353_ = v___y_358_;
v___y_354_ = v___y_360_;
v___y_355_ = v___y_359_;
v___y_356_ = v___x_361_;
goto v___jp_352_;
}
v___jp_362_:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__0));
lean_inc(v___y_363_);
v___x_365_ = l_List_appendTR___redArg(v___y_363_, v___x_364_);
return v___x_365_;
}
v___jp_366_:
{
if (v___y_368_ == 0)
{
if (v___y_369_ == 0)
{
lean_inc(v___y_370_);
return v___y_370_;
}
else
{
if (v___y_367_ == 0)
{
lean_inc(v___y_370_);
return v___y_370_;
}
else
{
v___y_363_ = v___y_370_;
goto v___jp_362_;
}
}
}
else
{
v___y_363_ = v___y_370_;
goto v___jp_362_;
}
}
v___jp_371_:
{
lean_object* v___x_375_; 
v___x_375_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__4, &lp_lean_x2dftml_LeanFtml_renderList___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__4);
v___y_367_ = v___y_374_;
v___y_368_ = v___y_372_;
v___y_369_ = v___y_373_;
v___y_370_ = v___x_375_;
goto v___jp_366_;
}
v___jp_376_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v_html_382_; 
v___x_379_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__6, &lp_lean_x2dftml_LeanFtml_renderList___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__6);
v___x_380_ = l_List_appendTR___redArg(v___x_379_, v___y_378_);
v___x_381_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v_html_382_ = l_List_appendTR___redArg(v___x_380_, v___x_381_);
if (v___y_377_ == 0)
{
return v_html_382_;
}
else
{
lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_383_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__10, &lp_lean_x2dftml_LeanFtml_renderList___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__10);
v___x_384_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_347_, v___x_383_);
v___x_385_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_384_);
lean_dec(v___x_384_);
if (v___x_385_ == 0)
{
return v_html_382_;
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderList___closed__0));
v___x_387_ = l_List_appendTR___redArg(v___x_386_, v_html_382_);
return v___x_387_;
}
}
}
v___jp_388_:
{
lean_object* v___x_390_; 
v___x_390_ = lean_box(0);
v___y_377_ = v___y_389_;
v___y_378_ = v___x_390_;
goto v___jp_376_;
}
v___jp_391_:
{
lean_object* v___x_392_; 
v___x_392_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__12, &lp_lean_x2dftml_LeanFtml_renderList___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__12);
return v___x_392_;
}
v___jp_393_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_395_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__14, &lp_lean_x2dftml_LeanFtml_renderList___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__14);
lean_inc(v___y_394_);
v___x_396_ = l_List_appendTR___redArg(v___x_395_, v___y_394_);
v___x_397_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__16, &lp_lean_x2dftml_LeanFtml_renderList___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__16);
v___x_398_ = l_List_appendTR___redArg(v___x_396_, v___x_397_);
v___x_399_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__18, &lp_lean_x2dftml_LeanFtml_renderList___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__18);
v___x_400_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_347_, v___x_399_);
v___x_401_ = l_List_appendTR___redArg(v___x_398_, v___x_400_);
return v___x_401_;
}
v___jp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_404_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__20, &lp_lean_x2dftml_LeanFtml_renderList___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__20);
lean_inc(v___y_403_);
v___x_405_ = l_List_appendTR___redArg(v___x_404_, v___y_403_);
v___x_406_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__22, &lp_lean_x2dftml_LeanFtml_renderList___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__22);
v___x_407_ = lp_lean_x2dftml_LeanFtml_renderAttrsCompat(v_opts_347_, v___x_406_);
v___x_408_ = l_List_appendTR___redArg(v___x_405_, v___x_407_);
v___x_409_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v___x_410_ = l_List_appendTR___redArg(v___x_408_, v___x_409_);
return v___x_410_;
}
v___jp_411_:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__24, &lp_lean_x2dftml_LeanFtml_renderList___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__24);
v___x_413_ = lp_lean_x2dftml_LeanFtml_optNat(v_opts_347_, v___x_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
goto v___jp_391_;
}
else
{
lean_object* v_val_414_; uint8_t v___x_415_; 
v_val_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_val_414_);
lean_dec_ref_known(v___x_413_, 1);
v___x_415_ = lp_lean_x2dftml_LeanFtml_renderList___lam__0(v_val_414_);
lean_dec(v_val_414_);
if (v___x_415_ == 0)
{
goto v___jp_391_;
}
else
{
lean_object* v___x_416_; 
v___x_416_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__26, &lp_lean_x2dftml_LeanFtml_renderList___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__26);
return v___x_416_;
}
}
}
v___jp_417_:
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__28, &lp_lean_x2dftml_LeanFtml_renderList___closed__28_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__28);
v___x_421_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__30, &lp_lean_x2dftml_LeanFtml_renderList___closed__30_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__30);
v___x_423_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_422_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__32, &lp_lean_x2dftml_LeanFtml_renderList___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__32);
v___x_425_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__34, &lp_lean_x2dftml_LeanFtml_renderList___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__34);
v___x_427_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_428_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__36, &lp_lean_x2dftml_LeanFtml_renderList___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__36);
v___x_429_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__38, &lp_lean_x2dftml_LeanFtml_renderList___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__38);
v___x_431_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_432_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__40, &lp_lean_x2dftml_LeanFtml_renderList___closed__40_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__40);
v___x_433_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__42, &lp_lean_x2dftml_LeanFtml_renderList___closed__42_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__42);
v___x_435_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_434_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__44, &lp_lean_x2dftml_LeanFtml_renderList___closed__44_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__44);
v___x_437_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_438_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__46, &lp_lean_x2dftml_LeanFtml_renderList___closed__46_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__46);
v___x_439_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_438_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_440_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__48, &lp_lean_x2dftml_LeanFtml_renderList___closed__48_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__48);
v___x_441_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__50, &lp_lean_x2dftml_LeanFtml_renderList___closed__50_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__50);
v___x_443_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_444_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__52, &lp_lean_x2dftml_LeanFtml_renderList___closed__52_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__52);
v___x_445_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_444_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_446_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__54, &lp_lean_x2dftml_LeanFtml_renderList___closed__54_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__54);
v___x_447_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__56, &lp_lean_x2dftml_LeanFtml_renderList___closed__56_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__56);
v___x_449_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__58, &lp_lean_x2dftml_LeanFtml_renderList___closed__58_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__58);
v___x_451_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__60, &lp_lean_x2dftml_LeanFtml_renderList___closed__60_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__60);
v___x_453_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_454_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__62, &lp_lean_x2dftml_LeanFtml_renderList___closed__62_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__62);
v___x_455_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_454_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__64, &lp_lean_x2dftml_LeanFtml_renderList___closed__64_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__64);
v___x_457_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__66, &lp_lean_x2dftml_LeanFtml_renderList___closed__66_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__66);
v___x_459_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_347_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; 
v___x_460_ = lean_box(0);
return v___x_460_;
}
else
{
lean_object* v___x_461_; 
v___x_461_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__68, &lp_lean_x2dftml_LeanFtml_renderList___closed__68_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__68);
return v___x_461_;
}
}
else
{
lean_object* v___x_462_; 
v___x_462_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__70, &lp_lean_x2dftml_LeanFtml_renderList___closed__70_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__70);
return v___x_462_;
}
}
else
{
lean_object* v___x_463_; 
v___x_463_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__72, &lp_lean_x2dftml_LeanFtml_renderList___closed__72_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__72);
return v___x_463_;
}
}
else
{
lean_object* v___x_464_; 
v___x_464_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__74, &lp_lean_x2dftml_LeanFtml_renderList___closed__74_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__74);
return v___x_464_;
}
}
else
{
lean_object* v___x_465_; 
v___x_465_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__76, &lp_lean_x2dftml_LeanFtml_renderList___closed__76_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__76);
return v___x_465_;
}
}
else
{
lean_object* v___x_466_; 
v___x_466_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__78, &lp_lean_x2dftml_LeanFtml_renderList___closed__78_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__78);
return v___x_466_;
}
}
else
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_467_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__80, &lp_lean_x2dftml_LeanFtml_renderList___closed__80_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__80);
v___x_468_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_347_, v___x_467_);
v___x_469_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__76, &lp_lean_x2dftml_LeanFtml_renderList___closed__76_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__76);
v___x_470_ = l_List_appendTR___redArg(v___x_468_, v___x_469_);
return v___x_470_;
}
}
else
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_471_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__82, &lp_lean_x2dftml_LeanFtml_renderList___closed__82_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__82);
v___x_472_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__22, &lp_lean_x2dftml_LeanFtml_renderList___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__22);
v___x_473_ = lp_lean_x2dftml_LeanFtml_renderAttrsCompat(v_opts_347_, v___x_472_);
v___x_474_ = l_List_appendTR___redArg(v___x_471_, v___x_473_);
v___x_475_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__16, &lp_lean_x2dftml_LeanFtml_renderList___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__16);
v___x_476_ = l_List_appendTR___redArg(v___x_474_, v___x_475_);
v___x_477_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__80, &lp_lean_x2dftml_LeanFtml_renderList___closed__80_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__80);
v___x_478_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_347_, v___x_477_);
v___x_479_ = l_List_appendTR___redArg(v___x_476_, v___x_478_);
return v___x_479_;
}
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_480_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__84, &lp_lean_x2dftml_LeanFtml_renderList___closed__84_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__84);
v___x_481_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_347_, v___x_480_);
v___x_482_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__86, &lp_lean_x2dftml_LeanFtml_renderList___closed__86_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__86);
v___x_483_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_481_, v___x_482_);
lean_dec(v___x_481_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
v___x_484_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__88, &lp_lean_x2dftml_LeanFtml_renderList___closed__88_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__88);
v___y_394_ = v___x_484_;
goto v___jp_393_;
}
else
{
v___y_394_ = v___x_482_;
goto v___jp_393_;
}
}
}
else
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_485_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__84, &lp_lean_x2dftml_LeanFtml_renderList___closed__84_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__84);
v___x_486_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_347_, v___x_485_);
v___x_487_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__86, &lp_lean_x2dftml_LeanFtml_renderList___closed__86_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__86);
v___x_488_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_486_, v___x_487_);
lean_dec(v___x_486_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
v___x_489_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__88, &lp_lean_x2dftml_LeanFtml_renderList___closed__88_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__88);
v___y_403_ = v___x_489_;
goto v___jp_402_;
}
else
{
v___y_403_ = v___x_487_;
goto v___jp_402_;
}
}
}
else
{
lean_object* v___x_490_; 
v___x_490_ = lean_box(0);
return v___x_490_;
}
}
else
{
lean_object* v___x_491_; 
v___x_491_ = lean_box(0);
return v___x_491_;
}
}
else
{
goto v___jp_411_;
}
}
else
{
goto v___jp_411_;
}
}
else
{
lean_object* v___x_492_; 
v___x_492_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__76, &lp_lean_x2dftml_LeanFtml_renderList___closed__76_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__76);
return v___x_492_;
}
}
else
{
lean_object* v___x_493_; 
v___x_493_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__74, &lp_lean_x2dftml_LeanFtml_renderList___closed__74_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__74);
return v___x_493_;
}
}
else
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__90, &lp_lean_x2dftml_LeanFtml_renderList___closed__90_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__90);
v___x_495_ = lp_lean_x2dftml_LeanFtml_ltIsset(v_opts_347_, v___x_494_);
if (v___x_495_ == 0)
{
v___y_372_ = v___y_418_;
v___y_373_ = v___y_419_;
v___y_374_ = v___x_495_;
goto v___jp_371_;
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_496_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_347_, v___x_494_);
v___x_497_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__92, &lp_lean_x2dftml_LeanFtml_renderList___closed__92_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__92);
v___x_498_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_496_, v___x_497_);
lean_dec(v___x_496_);
if (v___x_498_ == 0)
{
v___y_372_ = v___y_418_;
v___y_373_ = v___y_419_;
v___y_374_ = v___x_498_;
goto v___jp_371_;
}
else
{
lean_object* v___x_499_; 
v___x_499_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__94, &lp_lean_x2dftml_LeanFtml_renderList___closed__94_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__94);
v___y_367_ = v___x_498_;
v___y_368_ = v___y_418_;
v___y_369_ = v___y_419_;
v___y_370_ = v___x_499_;
goto v___jp_366_;
}
}
}
}
else
{
lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_500_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__90, &lp_lean_x2dftml_LeanFtml_renderList___closed__90_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__90);
v___x_501_ = lp_lean_x2dftml_LeanFtml_ltIsset(v_opts_347_, v___x_500_);
if (v___x_501_ == 0)
{
v___y_358_ = v___y_418_;
v___y_359_ = v___y_419_;
v___y_360_ = v___x_501_;
goto v___jp_357_;
}
else
{
lean_object* v___x_502_; lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_502_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_347_, v___x_500_);
v___x_503_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__92, &lp_lean_x2dftml_LeanFtml_renderList___closed__92_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__92);
v___x_504_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_502_, v___x_503_);
lean_dec(v___x_502_);
if (v___x_504_ == 0)
{
v___y_358_ = v___y_418_;
v___y_359_ = v___y_419_;
v___y_360_ = v___x_504_;
goto v___jp_357_;
}
else
{
lean_object* v___x_505_; 
v___x_505_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__96, &lp_lean_x2dftml_LeanFtml_renderList___closed__96_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__96);
v___y_353_ = v___y_418_;
v___y_354_ = v___x_504_;
v___y_355_ = v___y_419_;
v___y_356_ = v___x_505_;
goto v___jp_352_;
}
}
}
}
else
{
lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_506_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__98, &lp_lean_x2dftml_LeanFtml_renderList___closed__98_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__98);
v___x_507_ = lp_lean_x2dftml_LeanFtml_ltIsset(v_opts_347_, v___x_506_);
if (v___x_507_ == 0)
{
v___y_389_ = v___y_418_;
goto v___jp_388_;
}
else
{
lean_object* v_format_508_; uint8_t v___x_509_; 
v_format_508_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_347_, v___x_506_);
v___x_509_ = l_List_isEmpty___redArg(v_format_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_510_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__100, &lp_lean_x2dftml_LeanFtml_renderList___closed__100_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__100);
v___x_511_ = l_List_appendTR___redArg(v___x_510_, v_format_508_);
v___x_512_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5, &lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5);
v___x_513_ = l_List_appendTR___redArg(v___x_511_, v___x_512_);
v___y_377_ = v___y_418_;
v___y_378_ = v___x_513_;
goto v___jp_376_;
}
else
{
lean_dec(v_format_508_);
v___y_389_ = v___y_418_;
goto v___jp_388_;
}
}
}
}
else
{
lean_object* v_html_514_; 
v_html_514_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__104, &lp_lean_x2dftml_LeanFtml_renderList___closed__104_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__104);
if (v___y_418_ == 0)
{
return v_html_514_;
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_515_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__10, &lp_lean_x2dftml_LeanFtml_renderList___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__10);
v___x_516_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_347_, v___x_515_);
v___x_517_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_516_);
lean_dec(v___x_516_);
if (v___x_517_ == 0)
{
return v_html_514_;
}
else
{
lean_object* v___x_518_; 
v___x_518_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__105, &lp_lean_x2dftml_LeanFtml_renderList___closed__105_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__105);
return v___x_518_;
}
}
}
}
v___jp_519_:
{
uint8_t v___x_521_; 
v___x_521_ = 0;
v___y_418_ = v___y_520_;
v___y_419_ = v___x_521_;
goto v___jp_417_;
}
v___jp_524_:
{
if (lean_obj_tag(v___x_523_) == 1)
{
lean_object* v_val_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v_val_526_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_val_526_);
lean_dec_ref_known(v___x_523_, 1);
v___x_527_ = lean_unsigned_to_nat(0u);
v___x_528_ = lean_nat_dec_eq(v_val_526_, v___x_527_);
lean_dec(v_val_526_);
if (v___x_528_ == 0)
{
v___y_520_ = v___y_525_;
goto v___jp_519_;
}
else
{
v___y_418_ = v___y_525_;
v___y_419_ = v___x_528_;
goto v___jp_417_;
}
}
else
{
lean_dec(v___x_523_);
v___y_520_ = v___y_525_;
goto v___jp_519_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderList___boxed(lean_object* v_opts_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = lp_lean_x2dftml_LeanFtml_renderList(v_opts_532_);
lean_dec(v_opts_532_);
return v_res_533_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__1(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__0));
v___x_536_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__3(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__2));
v___x_539_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_538_);
return v___x_539_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__5(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__4));
v___x_542_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_541_);
return v___x_542_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__7(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__6));
v___x_545_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_544_);
return v___x_545_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__9(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__8));
v___x_548_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_547_);
return v___x_548_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__11(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__10));
v___x_551_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__13(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__12));
v___x_554_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_553_);
return v___x_554_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__15(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__14));
v___x_557_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_556_);
return v___x_557_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__17(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__16));
v___x_560_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__19(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__18));
v___x_563_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_562_);
return v___x_563_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__21(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__20));
v___x_566_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_565_);
return v___x_566_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__23(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDeflist___closed__22));
v___x_569_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist(lean_object* v_opts_570_){
_start:
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__1, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__1);
v___x_572_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_570_, v___x_571_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_573_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__3, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__3);
v___x_574_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_570_, v___x_573_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__5, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__5);
v___x_576_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_570_, v___x_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__7, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__7);
v___x_578_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_570_, v___x_577_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_579_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__9, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__9);
v___x_580_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_570_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_581_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__11, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__11);
v___x_582_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_570_, v___x_581_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; 
v___x_583_ = lean_box(0);
return v___x_583_;
}
else
{
lean_object* v___x_584_; 
v___x_584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__13, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__13);
return v___x_584_;
}
}
else
{
lean_object* v___x_585_; 
v___x_585_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__15, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__15);
return v___x_585_;
}
}
else
{
lean_object* v___x_586_; 
v___x_586_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__17, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__17);
return v___x_586_;
}
}
else
{
lean_object* v___x_587_; 
v___x_587_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__19, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__19);
return v___x_587_;
}
}
else
{
lean_object* v___x_588_; 
v___x_588_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__21, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__21);
return v___x_588_;
}
}
else
{
lean_object* v___x_589_; 
v___x_589_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDeflist___closed__23, &lp_lean_x2dftml_LeanFtml_renderDeflist___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderDeflist___closed__23);
return v___x_589_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist___boxed(lean_object* v_opts_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = lp_lean_x2dftml_LeanFtml_renderDeflist(v_opts_590_);
lean_dec(v_opts_590_);
return v_res_591_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__1(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__0));
v___x_594_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_593_);
return v___x_594_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__3(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__2));
v___x_597_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_596_);
return v___x_597_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__5(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__4));
v___x_600_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_599_);
return v___x_600_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__7(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__6));
v___x_603_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_602_);
return v___x_603_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__9(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__8));
v___x_606_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_605_);
return v___x_606_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__11(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__10));
v___x_609_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_608_);
return v___x_609_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__13(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__12));
v___x_612_ = l_String_toListImpl(v___x_611_);
return v___x_612_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__15(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__14));
v___x_615_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__17(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__16));
v___x_618_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__19(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__18));
v___x_621_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_620_);
return v___x_621_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__21(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__20));
v___x_624_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_623_);
return v___x_624_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__23(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__22));
v___x_627_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_626_);
return v___x_627_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__25(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__24));
v___x_630_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_629_);
return v___x_630_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__27(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__26));
v___x_633_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_632_);
return v___x_633_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__29(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__28));
v___x_636_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__31(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__30));
v___x_639_ = l_String_toListImpl(v___x_638_);
return v___x_639_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__33(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__32));
v___x_642_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_641_);
return v___x_642_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__35(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__34));
v___x_645_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_644_);
return v___x_645_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__37(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__36));
v___x_648_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_647_);
return v___x_648_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__39(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__38));
v___x_651_ = l_String_toListImpl(v___x_650_);
return v___x_651_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__41(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__40));
v___x_654_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_653_);
return v___x_654_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__43(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__42));
v___x_657_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_656_);
return v___x_657_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__45(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__44));
v___x_660_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_659_);
return v___x_660_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__47(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__46));
v___x_663_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_662_);
return v___x_663_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__49(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__48));
v___x_666_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_665_);
return v___x_666_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__51(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__50));
v___x_669_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTable(lean_object* v_opts_670_){
_start:
{
lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_690_; uint8_t v___y_691_; lean_object* v___y_692_; lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_702_; uint8_t v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_717_; uint8_t v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_722_; lean_object* v___y_732_; uint8_t v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_740_; uint8_t v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_749_; lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_796_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__98, &lp_lean_x2dftml_LeanFtml_renderList___closed__98_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__98);
v___x_797_ = lp_lean_x2dftml_LeanFtml_ltIsset(v_opts_670_, v___x_796_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; 
v___x_798_ = lean_box(0);
v___y_749_ = v___x_798_;
goto v___jp_748_;
}
else
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrsFragment___closed__0));
v___x_800_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_670_, v___x_796_);
v___x_801_ = l_List_appendTR___redArg(v___x_799_, v___x_800_);
v___y_749_ = v___x_801_;
goto v___jp_748_;
}
v___jp_671_:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
lean_inc(v___y_675_);
v___x_677_ = l_List_appendTR___redArg(v___y_675_, v___y_674_);
v___x_678_ = l_List_appendTR___redArg(v___x_677_, v___y_672_);
v___x_679_ = l_List_appendTR___redArg(v___x_678_, v___y_676_);
v___x_680_ = l_List_appendTR___redArg(v___x_679_, v___y_673_);
v___x_681_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__16, &lp_lean_x2dftml_LeanFtml_renderList___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__16);
v___x_682_ = l_List_appendTR___redArg(v___x_680_, v___x_681_);
return v___x_682_;
}
v___jp_683_:
{
lean_object* v___x_688_; 
v___x_688_ = lean_box(0);
v___y_672_ = v___y_684_;
v___y_673_ = v___y_685_;
v___y_674_ = v___y_686_;
v___y_675_ = v___y_687_;
v___y_676_ = v___x_688_;
goto v___jp_671_;
}
v___jp_689_:
{
if (v___y_691_ == 0)
{
uint8_t v___x_696_; 
v___x_696_ = l_List_isEmpty___redArg(v___y_690_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_697_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__1, &lp_lean_x2dftml_LeanFtml_renderTable___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__1);
v___x_698_ = l_List_appendTR___redArg(v___x_697_, v___y_690_);
v___x_699_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__3, &lp_lean_x2dftml_LeanFtml_renderTable___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__3);
v___x_700_ = l_List_appendTR___redArg(v___x_698_, v___x_699_);
v___y_672_ = v___y_695_;
v___y_673_ = v___y_692_;
v___y_674_ = v___y_693_;
v___y_675_ = v___y_694_;
v___y_676_ = v___x_700_;
goto v___jp_671_;
}
else
{
lean_dec(v___y_690_);
v___y_684_ = v___y_695_;
v___y_685_ = v___y_692_;
v___y_686_ = v___y_693_;
v___y_687_ = v___y_694_;
goto v___jp_683_;
}
}
else
{
lean_dec(v___y_690_);
v___y_684_ = v___y_695_;
v___y_685_ = v___y_692_;
v___y_686_ = v___y_693_;
v___y_687_ = v___y_694_;
goto v___jp_683_;
}
}
v___jp_701_:
{
uint8_t v___x_709_; 
v___x_709_ = lean_nat_dec_lt(v___y_705_, v___y_704_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
lean_dec(v___y_704_);
v___x_710_ = lean_box(0);
v___y_690_ = v___y_702_;
v___y_691_ = v___y_703_;
v___y_692_ = v___y_706_;
v___y_693_ = v___y_708_;
v___y_694_ = v___y_707_;
v___y_695_ = v___x_710_;
goto v___jp_689_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_711_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__5, &lp_lean_x2dftml_LeanFtml_renderTable___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__5);
v___x_712_ = lp_lean_x2dftml_LeanFtml_natBytes(v___y_704_);
v___x_713_ = l_List_appendTR___redArg(v___x_711_, v___x_712_);
v___x_714_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5, &lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5);
v___x_715_ = l_List_appendTR___redArg(v___x_713_, v___x_714_);
v___y_690_ = v___y_702_;
v___y_691_ = v___y_703_;
v___y_692_ = v___y_706_;
v___y_693_ = v___y_708_;
v___y_694_ = v___y_707_;
v___y_695_ = v___x_715_;
goto v___jp_689_;
}
}
v___jp_716_:
{
lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_723_ = lean_unsigned_to_nat(1u);
v___x_724_ = lean_nat_dec_lt(v___x_723_, v___y_721_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; 
lean_dec(v___y_721_);
v___x_725_ = lean_box(0);
v___y_702_ = v___y_717_;
v___y_703_ = v___y_718_;
v___y_704_ = v___y_719_;
v___y_705_ = v___x_723_;
v___y_706_ = v___y_720_;
v___y_707_ = v___y_722_;
v___y_708_ = v___x_725_;
goto v___jp_701_;
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_726_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__7, &lp_lean_x2dftml_LeanFtml_renderTable___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__7);
v___x_727_ = lp_lean_x2dftml_LeanFtml_natBytes(v___y_721_);
v___x_728_ = l_List_appendTR___redArg(v___x_726_, v___x_727_);
v___x_729_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5, &lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_attrsFragment___closed__5);
v___x_730_ = l_List_appendTR___redArg(v___x_728_, v___x_729_);
v___y_702_ = v___y_717_;
v___y_703_ = v___y_718_;
v___y_704_ = v___y_719_;
v___y_705_ = v___x_723_;
v___y_706_ = v___y_720_;
v___y_707_ = v___y_722_;
v___y_708_ = v___x_730_;
goto v___jp_701_;
}
}
v___jp_731_:
{
if (v___y_733_ == 0)
{
lean_object* v___x_737_; 
v___x_737_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__9, &lp_lean_x2dftml_LeanFtml_renderTable___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__9);
v___y_717_ = v___y_732_;
v___y_718_ = v___y_733_;
v___y_719_ = v___y_736_;
v___y_720_ = v___y_734_;
v___y_721_ = v___y_735_;
v___y_722_ = v___x_737_;
goto v___jp_716_;
}
else
{
lean_object* v___x_738_; 
v___x_738_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__11, &lp_lean_x2dftml_LeanFtml_renderTable___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__11);
v___y_717_ = v___y_732_;
v___y_718_ = v___y_733_;
v___y_719_ = v___y_736_;
v___y_720_ = v___y_734_;
v___y_721_ = v___y_735_;
v___y_722_ = v___x_738_;
goto v___jp_716_;
}
}
v___jp_739_:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__13, &lp_lean_x2dftml_LeanFtml_renderTable___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__13);
v___x_745_ = lp_lean_x2dftml_LeanFtml_optNat(v_opts_670_, v___x_744_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lean_unsigned_to_nat(1u);
v___y_732_ = v___y_740_;
v___y_733_ = v___y_741_;
v___y_734_ = v___y_742_;
v___y_735_ = v___y_743_;
v___y_736_ = v___x_746_;
goto v___jp_731_;
}
else
{
lean_object* v_val_747_; 
v_val_747_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_val_747_);
lean_dec_ref_known(v___x_745_, 1);
v___y_732_ = v___y_740_;
v___y_733_ = v___y_741_;
v___y_734_ = v___y_742_;
v___y_735_ = v___y_743_;
v___y_736_ = v_val_747_;
goto v___jp_731_;
}
}
v___jp_748_:
{
lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_750_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__15, &lp_lean_x2dftml_LeanFtml_renderTable___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__15);
v___x_751_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_670_, v___x_750_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_752_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__17, &lp_lean_x2dftml_LeanFtml_renderTable___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__17);
v___x_753_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_670_, v___x_752_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; uint8_t v___x_755_; 
v___x_754_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__19, &lp_lean_x2dftml_LeanFtml_renderTable___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__19);
v___x_755_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_670_, v___x_754_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__21, &lp_lean_x2dftml_LeanFtml_renderTable___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__21);
v___x_757_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_670_, v___x_756_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_758_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__23, &lp_lean_x2dftml_LeanFtml_renderTable___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__23);
v___x_759_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_670_, v___x_758_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__25, &lp_lean_x2dftml_LeanFtml_renderTable___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__25);
v___x_761_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_670_, v___x_760_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_762_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__27, &lp_lean_x2dftml_LeanFtml_renderTable___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__27);
v___x_763_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_670_, v___x_762_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; uint8_t v___x_765_; 
lean_dec(v___y_749_);
v___x_764_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__29, &lp_lean_x2dftml_LeanFtml_renderTable___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__29);
v___x_765_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_670_, v___x_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; 
v___x_766_ = lean_box(0);
return v___x_766_;
}
else
{
lean_object* v___x_767_; lean_object* v_attr_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_767_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__31, &lp_lean_x2dftml_LeanFtml_renderTable___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__31);
v_attr_768_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_670_, v___x_767_);
v___x_769_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__33, &lp_lean_x2dftml_LeanFtml_renderTable___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__33);
v___x_770_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_attr_768_, v___x_769_);
lean_dec(v_attr_768_);
if (v___x_770_ == 0)
{
lean_object* v___x_771_; 
v___x_771_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__35, &lp_lean_x2dftml_LeanFtml_renderTable___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__35);
return v___x_771_;
}
else
{
lean_object* v___x_772_; 
v___x_772_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__37, &lp_lean_x2dftml_LeanFtml_renderTable___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__37);
return v___x_772_;
}
}
}
else
{
lean_object* v___x_773_; lean_object* v_attr_774_; lean_object* v___x_775_; uint8_t v_isHeader_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_773_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__31, &lp_lean_x2dftml_LeanFtml_renderTable___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__31);
v_attr_774_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_670_, v___x_773_);
v___x_775_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__33, &lp_lean_x2dftml_LeanFtml_renderTable___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__33);
v_isHeader_776_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_attr_774_, v___x_775_);
v___x_777_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__39, &lp_lean_x2dftml_LeanFtml_renderTable___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__39);
v___x_778_ = lp_lean_x2dftml_LeanFtml_optNat(v_opts_670_, v___x_777_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v___x_779_; 
v___x_779_ = lean_unsigned_to_nat(1u);
v___y_740_ = v_attr_774_;
v___y_741_ = v_isHeader_776_;
v___y_742_ = v___y_749_;
v___y_743_ = v___x_779_;
goto v___jp_739_;
}
else
{
lean_object* v_val_780_; 
v_val_780_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_val_780_);
lean_dec_ref_known(v___x_778_, 1);
v___y_740_ = v_attr_774_;
v___y_741_ = v_isHeader_776_;
v___y_742_ = v___y_749_;
v___y_743_ = v_val_780_;
goto v___jp_739_;
}
}
}
else
{
lean_object* v___x_781_; 
lean_dec(v___y_749_);
v___x_781_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__41, &lp_lean_x2dftml_LeanFtml_renderTable___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__41);
return v___x_781_;
}
}
else
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_782_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__43, &lp_lean_x2dftml_LeanFtml_renderTable___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__43);
v___x_783_ = l_List_appendTR___redArg(v___x_782_, v___y_749_);
v___x_784_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v___x_785_ = l_List_appendTR___redArg(v___x_783_, v___x_784_);
return v___x_785_;
}
}
else
{
lean_object* v___x_786_; 
lean_dec(v___y_749_);
v___x_786_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__45, &lp_lean_x2dftml_LeanFtml_renderTable___closed__45_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__45);
return v___x_786_;
}
}
else
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_787_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__47, &lp_lean_x2dftml_LeanFtml_renderTable___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__47);
v___x_788_ = l_List_appendTR___redArg(v___x_787_, v___y_749_);
v___x_789_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v___x_790_ = l_List_appendTR___redArg(v___x_788_, v___x_789_);
return v___x_790_;
}
}
else
{
lean_object* v___x_791_; 
lean_dec(v___y_749_);
v___x_791_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__49, &lp_lean_x2dftml_LeanFtml_renderTable___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__49);
return v___x_791_;
}
}
else
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_792_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__51, &lp_lean_x2dftml_LeanFtml_renderTable___closed__51_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__51);
v___x_793_ = l_List_appendTR___redArg(v___x_792_, v___y_749_);
v___x_794_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v___x_795_ = l_List_appendTR___redArg(v___x_793_, v___x_794_);
return v___x_795_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTable___boxed(lean_object* v_opts_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = lp_lean_x2dftml_LeanFtml_renderTable(v_opts_802_);
lean_dec(v_opts_802_);
return v_res_803_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__1(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__0));
v___x_806_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_805_);
return v___x_806_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__3(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__2));
v___x_809_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_808_);
return v___x_809_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__5(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__4));
v___x_812_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_811_);
return v___x_812_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__7(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__6));
v___x_815_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_814_);
return v___x_815_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__9(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__8));
v___x_818_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_817_);
return v___x_818_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__11(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__10));
v___x_821_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_820_);
return v___x_821_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__13(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__12));
v___x_824_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_823_);
return v___x_824_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__14(void){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTable___closed__32));
v___x_826_ = l_String_toListImpl(v___x_825_);
return v___x_826_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__16(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__15));
v___x_829_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_828_);
return v___x_829_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__18(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTableadv___closed__17));
v___x_832_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv(lean_object* v_opts_833_){
_start:
{
lean_object* v___x_834_; lean_object* v_rendered_835_; lean_object* v___y_837_; lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_834_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__22, &lp_lean_x2dftml_LeanFtml_renderList___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__22);
v_rendered_835_ = lp_lean_x2dftml_LeanFtml_renderAttrsQuotesSubst(v_opts_833_, v___x_834_);
v___x_870_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__14, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__14);
v___x_871_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_833_, v___x_870_);
v___x_872_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_871_);
lean_dec(v___x_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; 
v___x_873_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__16, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__16);
v___y_837_ = v___x_873_;
goto v___jp_836_;
}
else
{
lean_object* v___x_874_; 
v___x_874_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__18, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__18);
v___y_837_ = v___x_874_;
goto v___jp_836_;
}
v___jp_836_:
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__1, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__1);
v___x_839_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_833_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__3, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__3);
v___x_841_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_833_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__5, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__5);
v___x_843_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_833_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; uint8_t v___x_845_; 
lean_dec(v_rendered_835_);
v___x_844_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__7, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__7);
v___x_845_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_833_, v___x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_846_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__9, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__9);
v___x_847_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_833_, v___x_846_);
if (v___x_847_ == 0)
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__11, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__11);
v___x_849_ = lp_lean_x2dftml_LeanFtml_ltTypeIs(v_opts_833_, v___x_848_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
v___x_850_ = lean_box(0);
return v___x_850_;
}
else
{
lean_object* v___x_851_; 
v___x_851_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__49, &lp_lean_x2dftml_LeanFtml_renderTable___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__49);
return v___x_851_;
}
}
else
{
lean_object* v___x_852_; 
v___x_852_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__41, &lp_lean_x2dftml_LeanFtml_renderTable___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__41);
return v___x_852_;
}
}
else
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_853_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__14, &lp_lean_x2dftml_LeanFtml_renderList___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__14);
lean_inc(v___y_837_);
v___x_854_ = l_List_appendTR___redArg(v___x_853_, v___y_837_);
v___x_855_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v___x_856_ = l_List_appendTR___redArg(v___x_854_, v___x_855_);
return v___x_856_;
}
}
else
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_857_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__20, &lp_lean_x2dftml_LeanFtml_renderList___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__20);
lean_inc(v___y_837_);
v___x_858_ = l_List_appendTR___redArg(v___x_857_, v___y_837_);
v___x_859_ = l_List_appendTR___redArg(v___x_858_, v_rendered_835_);
v___x_860_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__16, &lp_lean_x2dftml_LeanFtml_renderList___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__16);
v___x_861_ = l_List_appendTR___redArg(v___x_859_, v___x_860_);
return v___x_861_;
}
}
else
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_862_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTable___closed__43, &lp_lean_x2dftml_LeanFtml_renderTable___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_renderTable___closed__43);
v___x_863_ = l_List_appendTR___redArg(v___x_862_, v_rendered_835_);
v___x_864_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v___x_865_ = l_List_appendTR___redArg(v___x_863_, v___x_864_);
return v___x_865_;
}
}
else
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_866_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTableadv___closed__13, &lp_lean_x2dftml_LeanFtml_renderTableadv___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderTableadv___closed__13);
v___x_867_ = l_List_appendTR___redArg(v___x_866_, v_rendered_835_);
v___x_868_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderList___closed__8, &lp_lean_x2dftml_LeanFtml_renderList___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderList___closed__8);
v___x_869_ = l_List_appendTR___redArg(v___x_867_, v___x_868_);
return v___x_869_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv___boxed(lean_object* v_opts_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = lp_lean_x2dftml_LeanFtml_renderTableadv(v_opts_875_);
lean_dec(v_opts_875_);
return v_res_876_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RenderCore(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ListTableRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_RenderCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
