// Lean compiler output
// Module: LeanFtml.Middle2Rules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules public import LeanFtml.MiddleRules
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_codeFuel(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(lean_object*, lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_lineEndAfter(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_centerScan_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_dpTail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "[[div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_dpTail___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dpTail___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dpTail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dpTail___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dpTail(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[/div]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[[/div]][[div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divprefilterScan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divprefilterScan___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divprefilterRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_divprefilterRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_divprefilterRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_divprefilterRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divprefilterRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divprefilterRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_alignName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* lp_lean_x2dftml_LeanFtml_alignName___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_alignName___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_alignName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_alignName___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_alignName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* lp_lean_x2dftml_LeanFtml_alignName___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_alignName___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_alignName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_alignName___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_alignName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "center"};
static const lean_object* lp_lean_x2dftml_LeanFtml_alignName___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_alignName___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_alignName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_alignName___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_alignName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "justify"};
static const lean_object* lp_lean_x2dftml_LeanFtml_alignName___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_alignName___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_alignName___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_alignName___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_alignName(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_alignName___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_divalignTail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "[[/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignTail___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignTail___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignTail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignTail___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divalignTail___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignTail___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignTail___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignTail___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignTail___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignTail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[["};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(62) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__4_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__9_value;
static const lean_array_object lp_lean_x2dftml_LeanFtml_divalignMatch___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__10_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch(lean_object*, uint8_t, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_divalignBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignBody___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignBody___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignBody(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_divalignScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Divalign"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignScan___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divalignScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignScan___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divalignScan___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignScan___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divalignScan___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "align"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignScan___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divalignScan___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignScan___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divalignScan___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__15;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignScan___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignScan___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divalignScan___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_divalignScan___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignScan___closed__17_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignScan(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignLoop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_divalignRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_divalignRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_divalignRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divalignRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_noteBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/note]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_noteBody___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_noteBody___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_noteBody___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_noteBody___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteBody(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[note]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_noteScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Note"};
static const lean_object* lp_lean_x2dftml_LeanFtml_noteScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_noteScan___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_noteScan___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_noteScan___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_noteScan___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_noteScan___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_noteScan___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_noteScan___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_noteScan___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_noteScan___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_noteScan___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_noteScan___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_noteRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_noteRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_noteRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_noteRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryOpener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[gallery"};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryOpener___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryOpener___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryOpener___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryOpener___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryOpener(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_galleryLines___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryLines___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryLines___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryLines(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryLines___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_galleryBody_tryCount_spec__0(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[[/gallery]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryBody_tryCount(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryBody(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Gallery"};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryToken___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryToken___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sources"};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryToken___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryToken___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryToken___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryToken___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryToken___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryToken___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryToken___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryToken___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryToken___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_galleryScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryScan___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_galleryScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_galleryScan___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryScan___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryScan(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_galleryRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_galleryRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRule(lean_object*);
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dpTail___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dpTail___closed__0));
v___x_3_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dpTail(lean_object* v_x_4_){
_start:
{
if (lean_obj_tag(v_x_4_) == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_box(0);
return v___x_5_;
}
else
{
lean_object* v_head_6_; lean_object* v_tail_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_head_6_ = lean_ctor_get(v_x_4_, 0);
lean_inc(v_head_6_);
v_tail_7_ = lean_ctor_get(v_x_4_, 1);
lean_inc(v_tail_7_);
v___x_8_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dpTail___closed__1, &lp_lean_x2dftml_LeanFtml_dpTail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dpTail___closed__1);
v___x_9_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_8_, v_x_4_);
if (lean_obj_tag(v___x_9_) == 0)
{
uint8_t v___x_10_; 
v___x_10_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_6_);
lean_dec(v_head_6_);
if (v___x_10_ == 0)
{
lean_dec(v_tail_7_);
return v___x_9_;
}
else
{
v_x_4_ = v_tail_7_;
goto _start;
}
}
else
{
lean_dec(v_tail_7_);
lean_dec(v_head_6_);
return v___x_9_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__1(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__0));
v___x_14_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__3(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__2));
v___x_17_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divprefilterScan(lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
if (lean_obj_tag(v_x_18_) == 0)
{
return v_x_18_;
}
else
{
lean_object* v_head_20_; lean_object* v_tail_21_; lean_object* v_zero_22_; uint8_t v_isZero_23_; 
v_head_20_ = lean_ctor_get(v_x_18_, 0);
lean_inc(v_head_20_);
v_tail_21_ = lean_ctor_get(v_x_18_, 1);
lean_inc(v_tail_21_);
v_zero_22_ = lean_unsigned_to_nat(0u);
v_isZero_23_ = lean_nat_dec_eq(v_x_19_, v_zero_22_);
if (v_isZero_23_ == 1)
{
lean_object* v___x_24_; 
lean_dec(v_tail_21_);
lean_dec(v_head_20_);
lean_dec_ref_known(v_x_18_, 2);
v___x_24_ = lean_box(0);
return v___x_24_;
}
else
{
lean_object* v_one_25_; lean_object* v_n_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v_one_25_ = lean_unsigned_to_nat(1u);
v_n_26_ = lean_nat_sub(v_x_19_, v_one_25_);
v___x_27_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__1, &lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__1);
v___x_28_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_27_, v_x_18_);
if (lean_obj_tag(v___x_28_) == 0)
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lp_lean_x2dftml_LeanFtml_divprefilterScan(v_tail_21_, v_n_26_);
lean_dec(v_n_26_);
v___x_30_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_30_, 0, v_head_20_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
return v___x_30_;
}
else
{
lean_object* v_val_31_; lean_object* v___x_32_; 
v_val_31_ = lean_ctor_get(v___x_28_, 0);
lean_inc(v_val_31_);
lean_dec_ref_known(v___x_28_, 1);
v___x_32_ = lp_lean_x2dftml_LeanFtml_dpTail(v_val_31_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lp_lean_x2dftml_LeanFtml_divprefilterScan(v_tail_21_, v_n_26_);
lean_dec(v_n_26_);
v___x_34_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_34_, 0, v_head_20_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
return v___x_34_;
}
else
{
lean_object* v_val_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
lean_dec(v_tail_21_);
lean_dec(v_head_20_);
v_val_35_ = lean_ctor_get(v___x_32_, 0);
lean_inc(v_val_35_);
lean_dec_ref_known(v___x_32_, 1);
v___x_36_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__3, &lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_divprefilterScan___closed__3);
v___x_37_ = lp_lean_x2dftml_LeanFtml_divprefilterScan(v_val_35_, v_n_26_);
lean_dec(v_n_26_);
v___x_38_ = l_List_appendTR___redArg(v___x_36_, v___x_37_);
return v___x_38_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divprefilterScan___boxed(lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_lean_x2dftml_LeanFtml_divprefilterScan(v_x_39_, v_x_40_);
lean_dec(v_x_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divprefilterRule___lam__0(lean_object* v_src_42_, lean_object* v_toks_43_){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_44_ = l_List_lengthTR___redArg(v_src_42_);
v___x_45_ = lean_unsigned_to_nat(1u);
v___x_46_ = lean_nat_add(v___x_44_, v___x_45_);
lean_dec(v___x_44_);
v___x_47_ = lp_lean_x2dftml_LeanFtml_divprefilterScan(v_src_42_, v___x_46_);
lean_dec(v___x_46_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v_toks_43_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divprefilterRule(lean_object* v_st_50_){
_start:
{
lean_object* v___f_51_; lean_object* v___x_52_; 
v___f_51_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divprefilterRule___closed__0));
v___x_52_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_50_, v___f_51_);
return v___x_52_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_alignName___closed__1(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_alignName___closed__0));
v___x_55_ = l_String_toListImpl(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_alignName___closed__3(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_alignName___closed__2));
v___x_58_ = l_String_toListImpl(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_alignName___closed__5(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_alignName___closed__4));
v___x_61_ = l_String_toListImpl(v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_alignName___closed__7(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_alignName___closed__6));
v___x_64_ = l_String_toListImpl(v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_alignName(lean_object* v_x_65_){
_start:
{
if (lean_obj_tag(v_x_65_) == 1)
{
lean_object* v_head_66_; lean_object* v_tail_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v_head_66_ = lean_ctor_get(v_x_65_, 0);
v_tail_67_ = lean_ctor_get(v_x_65_, 1);
v___x_68_ = lean_unsigned_to_nat(61u);
v___x_69_ = lean_nat_dec_eq(v_head_66_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_70_ = lean_unsigned_to_nat(60u);
v___x_71_ = lean_nat_dec_eq(v_head_66_, v___x_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(62u);
v___x_73_ = lean_nat_dec_eq(v_head_66_, v___x_72_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; 
v___x_74_ = lean_box(0);
return v___x_74_;
}
else
{
if (lean_obj_tag(v_tail_67_) == 0)
{
lean_object* v___x_75_; 
v___x_75_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_alignName___closed__1, &lp_lean_x2dftml_LeanFtml_alignName___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_alignName___closed__1);
return v___x_75_;
}
else
{
lean_object* v___x_76_; 
v___x_76_ = lean_box(0);
return v___x_76_;
}
}
}
else
{
if (lean_obj_tag(v_tail_67_) == 0)
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_alignName___closed__3, &lp_lean_x2dftml_LeanFtml_alignName___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_alignName___closed__3);
return v___x_77_;
}
else
{
lean_object* v___x_78_; 
v___x_78_ = lean_box(0);
return v___x_78_;
}
}
}
else
{
if (lean_obj_tag(v_tail_67_) == 0)
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_alignName___closed__5, &lp_lean_x2dftml_LeanFtml_alignName___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_alignName___closed__5);
return v___x_79_;
}
else
{
lean_object* v_head_80_; lean_object* v_tail_81_; uint8_t v___x_82_; 
v_head_80_ = lean_ctor_get(v_tail_67_, 0);
v_tail_81_ = lean_ctor_get(v_tail_67_, 1);
v___x_82_ = lean_nat_dec_eq(v_head_80_, v___x_68_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; 
v___x_83_ = lean_box(0);
return v___x_83_;
}
else
{
if (lean_obj_tag(v_tail_81_) == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_alignName___closed__7, &lp_lean_x2dftml_LeanFtml_alignName___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_alignName___closed__7);
return v___x_84_;
}
else
{
lean_object* v___x_85_; 
v___x_85_ = lean_box(0);
return v___x_85_;
}
}
}
}
}
else
{
lean_object* v___x_86_; 
v___x_86_ = lean_box(0);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_alignName___boxed(lean_object* v_x_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = lp_lean_x2dftml_LeanFtml_alignName(v_x_87_);
lean_dec(v_x_87_);
return v_res_88_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignTail___closed__1(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignTail___closed__0));
v___x_91_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignTail___closed__3(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignTail___closed__2));
v___x_94_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignTail(lean_object* v_key_95_, lean_object* v_s_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_97_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignTail___closed__1, &lp_lean_x2dftml_LeanFtml_divalignTail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divalignTail___closed__1);
v___x_98_ = l_List_appendTR___redArg(v___x_97_, v_key_95_);
v___x_99_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignTail___closed__3, &lp_lean_x2dftml_LeanFtml_divalignTail___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_divalignTail___closed__3);
v___x_100_ = l_List_appendTR___redArg(v___x_98_, v___x_99_);
v___x_101_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_100_, v_s_96_);
lean_dec(v___x_100_);
if (lean_obj_tag(v___x_101_) == 0)
{
return v___x_101_;
}
else
{
lean_object* v_val_102_; uint8_t v___x_103_; 
v_val_102_ = lean_ctor_get(v___x_101_, 0);
v___x_103_ = lp_lean_x2dftml_LeanFtml_lineEndAfter(v_val_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
lean_dec_ref_known(v___x_101_, 1);
v___x_104_ = lean_box(0);
return v___x_104_;
}
else
{
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignMatch_spec__0(lean_object* v_s_105_, lean_object* v_key_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
if (lean_obj_tag(v_a_107_) == 0)
{
lean_object* v___x_109_; 
lean_dec(v_key_106_);
v___x_109_ = l_List_reverse___redArg(v_a_108_);
return v___x_109_;
}
else
{
lean_object* v_head_110_; lean_object* v_tail_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_133_; 
v_head_110_ = lean_ctor_get(v_a_107_, 0);
v_tail_111_ = lean_ctor_get(v_a_107_, 1);
v_isSharedCheck_133_ = !lean_is_exclusive(v_a_107_);
if (v_isSharedCheck_133_ == 0)
{
v___x_113_ = v_a_107_;
v_isShared_114_ = v_isSharedCheck_133_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_tail_111_);
lean_inc(v_head_110_);
lean_dec(v_a_107_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_133_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v_fst_115_; lean_object* v_snd_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_132_; 
v_fst_115_ = lean_ctor_get(v_head_110_, 0);
v_snd_116_ = lean_ctor_get(v_head_110_, 1);
v_isSharedCheck_132_ = !lean_is_exclusive(v_head_110_);
if (v_isSharedCheck_132_ == 0)
{
v___x_118_ = v_head_110_;
v_isShared_119_ = v_isSharedCheck_132_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_snd_116_);
lean_inc(v_fst_115_);
lean_dec(v_head_110_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_132_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_124_; 
v___x_120_ = l_List_lengthTR___redArg(v_s_105_);
v___x_121_ = l_List_lengthTR___redArg(v_snd_116_);
v___x_122_ = lean_nat_sub(v___x_120_, v___x_121_);
lean_dec(v___x_121_);
lean_dec(v___x_120_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 1, v___x_122_);
lean_ctor_set(v___x_118_, 0, v_snd_116_);
v___x_124_ = v___x_118_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_snd_116_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___x_122_);
v___x_124_ = v_reuseFailAlloc_131_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v_fst_115_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
lean_inc(v_key_106_);
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v_key_106_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v_a_108_);
lean_ctor_set(v___x_113_, 0, v___x_126_);
v___x_128_ = v___x_113_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_126_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v_a_108_);
v___x_128_ = v_reuseFailAlloc_130_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
v_a_107_ = v_tail_111_;
v_a_108_ = v___x_128_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignMatch_spec__0___boxed(lean_object* v_s_134_, lean_object* v_key_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignMatch_spec__0(v_s_134_, v_key_135_, v_a_136_, v_a_137_);
lean_dec(v_s_134_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3(lean_object* v_s_141_, lean_object* v_snd_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
if (lean_obj_tag(v_a_143_) == 0)
{
lean_object* v___x_145_; 
lean_dec(v_snd_142_);
lean_dec(v_s_141_);
v___x_145_ = l_List_reverse___redArg(v_a_144_);
return v___x_145_;
}
else
{
lean_object* v_head_146_; lean_object* v_tail_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_167_; 
v_head_146_ = lean_ctor_get(v_a_143_, 0);
v_tail_147_ = lean_ctor_get(v_a_143_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_a_143_);
if (v_isSharedCheck_167_ == 0)
{
v___x_149_ = v_a_143_;
v_isShared_150_ = v_isSharedCheck_167_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_tail_147_);
lean_inc(v_head_146_);
lean_dec(v_a_143_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_167_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v_fst_151_; lean_object* v_snd_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_166_; 
v_fst_151_ = lean_ctor_get(v_head_146_, 0);
v_snd_152_ = lean_ctor_get(v_head_146_, 1);
v_isSharedCheck_166_ = !lean_is_exclusive(v_head_146_);
if (v_isSharedCheck_166_ == 0)
{
v___x_154_ = v_head_146_;
v_isShared_155_ = v_isSharedCheck_166_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_snd_152_);
lean_inc(v_fst_151_);
lean_dec(v_head_146_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_166_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_156_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3___closed__0));
lean_inc(v_snd_142_);
lean_inc(v_s_141_);
v___x_157_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_141_, v_s_141_, v_snd_142_, v___x_156_);
v___x_158_ = l_List_appendTR___redArg(v___x_157_, v_fst_151_);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 0, v___x_158_);
v___x_160_ = v___x_154_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_snd_152_);
v___x_160_ = v_reuseFailAlloc_165_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_162_; 
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v_a_144_);
lean_ctor_set(v___x_149_, 0, v___x_160_);
v___x_162_ = v___x_149_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_160_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_a_144_);
v___x_162_ = v_reuseFailAlloc_164_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
v_a_143_ = v_tail_147_;
v_a_144_ = v___x_162_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignMatch___closed__1(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignMatch___closed__0));
v___x_172_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1_spec__1(lean_object* v_val_199_, uint8_t v_atLineStart_200_, lean_object* v_n_201_, lean_object* v_s_202_, lean_object* v_a_203_, lean_object* v_a_204_){
_start:
{
if (lean_obj_tag(v_a_203_) == 0)
{
lean_object* v___x_205_; 
lean_dec(v_val_199_);
v___x_205_ = lean_array_to_list(v_a_204_);
return v___x_205_;
}
else
{
lean_object* v_head_206_; lean_object* v_tail_207_; lean_object* v___y_209_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_head_206_ = lean_ctor_get(v_a_203_, 0);
lean_inc_n(v_head_206_, 2);
v_tail_207_ = lean_ctor_get(v_a_203_, 1);
lean_inc(v_tail_207_);
lean_dec_ref_known(v_a_203_, 2);
v___x_212_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignTail___closed__3, &lp_lean_x2dftml_LeanFtml_divalignTail___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_divalignTail___closed__3);
v___x_213_ = l_List_appendTR___redArg(v_head_206_, v___x_212_);
lean_inc(v_val_199_);
v___x_214_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_213_, v_val_199_);
lean_dec(v___x_213_);
if (lean_obj_tag(v___x_214_) == 1)
{
lean_object* v_val_215_; 
v_val_215_ = lean_ctor_get(v___x_214_, 0);
lean_inc(v_val_215_);
lean_dec_ref_known(v___x_214_, 1);
if (lean_obj_tag(v_val_215_) == 1)
{
lean_object* v_head_216_; lean_object* v_tail_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_head_216_ = lean_ctor_get(v_val_215_, 0);
lean_inc(v_head_216_);
v_tail_217_ = lean_ctor_get(v_val_215_, 1);
lean_inc(v_tail_217_);
lean_dec_ref_known(v_val_215_, 2);
v___x_218_ = lean_unsigned_to_nat(10u);
v___x_219_ = lean_nat_dec_eq(v_head_216_, v___x_218_);
lean_dec(v_head_216_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
lean_dec(v_tail_217_);
lean_dec(v_head_206_);
v___x_220_ = lean_box(0);
v___y_209_ = v___x_220_;
goto v___jp_208_;
}
else
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
lean_inc(v_head_206_);
v___x_221_ = lp_lean_x2dftml_LeanFtml_divalignBody(v_head_206_, v_tail_217_, v_atLineStart_200_, v_n_201_);
v___x_222_ = lean_box(0);
v___x_223_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignMatch_spec__0(v_s_202_, v_head_206_, v___x_221_, v___x_222_);
v___y_209_ = v___x_223_;
goto v___jp_208_;
}
}
else
{
lean_object* v___x_224_; 
lean_dec(v_val_215_);
lean_dec(v_head_206_);
v___x_224_ = lean_box(0);
v___y_209_ = v___x_224_;
goto v___jp_208_;
}
}
else
{
lean_object* v___x_225_; 
lean_dec(v___x_214_);
lean_dec(v_head_206_);
v___x_225_ = lean_box(0);
v___y_209_ = v___x_225_;
goto v___jp_208_;
}
v___jp_208_:
{
lean_object* v___x_210_; 
v___x_210_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_204_, v___y_209_);
v_a_203_ = v_tail_207_;
v_a_204_ = v___x_210_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1(lean_object* v_s_226_, lean_object* v_val_227_, uint8_t v_atLineStart_228_, lean_object* v_n_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
if (lean_obj_tag(v_a_230_) == 0)
{
lean_object* v___x_232_; 
lean_dec(v_val_227_);
v___x_232_ = lean_array_to_list(v_a_231_);
return v___x_232_;
}
else
{
lean_object* v_head_233_; lean_object* v_tail_234_; lean_object* v___y_236_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_head_233_ = lean_ctor_get(v_a_230_, 0);
lean_inc_n(v_head_233_, 2);
v_tail_234_ = lean_ctor_get(v_a_230_, 1);
lean_inc(v_tail_234_);
lean_dec_ref_known(v_a_230_, 2);
v___x_239_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignTail___closed__3, &lp_lean_x2dftml_LeanFtml_divalignTail___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_divalignTail___closed__3);
v___x_240_ = l_List_appendTR___redArg(v_head_233_, v___x_239_);
lean_inc(v_val_227_);
v___x_241_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_240_, v_val_227_);
lean_dec(v___x_240_);
if (lean_obj_tag(v___x_241_) == 1)
{
lean_object* v_val_242_; 
v_val_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_val_242_);
lean_dec_ref_known(v___x_241_, 1);
if (lean_obj_tag(v_val_242_) == 1)
{
lean_object* v_head_243_; lean_object* v_tail_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
v_head_243_ = lean_ctor_get(v_val_242_, 0);
lean_inc(v_head_243_);
v_tail_244_ = lean_ctor_get(v_val_242_, 1);
lean_inc(v_tail_244_);
lean_dec_ref_known(v_val_242_, 2);
v___x_245_ = lean_unsigned_to_nat(10u);
v___x_246_ = lean_nat_dec_eq(v_head_243_, v___x_245_);
lean_dec(v_head_243_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; 
lean_dec(v_tail_244_);
lean_dec(v_head_233_);
v___x_247_ = lean_box(0);
v___y_236_ = v___x_247_;
goto v___jp_235_;
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
lean_inc(v_head_233_);
v___x_248_ = lp_lean_x2dftml_LeanFtml_divalignBody(v_head_233_, v_tail_244_, v_atLineStart_228_, v_n_229_);
v___x_249_ = lean_box(0);
v___x_250_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignMatch_spec__0(v_s_226_, v_head_233_, v___x_248_, v___x_249_);
v___y_236_ = v___x_250_;
goto v___jp_235_;
}
}
else
{
lean_object* v___x_251_; 
lean_dec(v_val_242_);
lean_dec(v_head_233_);
v___x_251_ = lean_box(0);
v___y_236_ = v___x_251_;
goto v___jp_235_;
}
}
else
{
lean_object* v___x_252_; 
lean_dec(v___x_241_);
lean_dec(v_head_233_);
v___x_252_ = lean_box(0);
v___y_236_ = v___x_252_;
goto v___jp_235_;
}
v___jp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_231_, v___y_236_);
v___x_238_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1_spec__1(v_val_227_, v_atLineStart_228_, v_n_229_, v_s_226_, v_tail_234_, v___x_237_);
return v___x_238_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch(lean_object* v_s_253_, uint8_t v_atLineStart_254_, lean_object* v_x_255_){
_start:
{
lean_object* v_zero_256_; uint8_t v_isZero_257_; 
v_zero_256_ = lean_unsigned_to_nat(0u);
v_isZero_257_ = lean_nat_dec_eq(v_x_255_, v_zero_256_);
if (v_isZero_257_ == 1)
{
lean_object* v___x_258_; 
lean_dec(v_s_253_);
v___x_258_ = lean_box(0);
return v___x_258_;
}
else
{
if (v_atLineStart_254_ == 0)
{
lean_object* v___x_259_; 
lean_dec(v_s_253_);
v___x_259_ = lean_box(0);
return v___x_259_;
}
else
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignMatch___closed__1, &lp_lean_x2dftml_LeanFtml_divalignMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divalignMatch___closed__1);
lean_inc(v_s_253_);
v___x_261_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_260_, v_s_253_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v___x_262_; 
lean_dec(v_s_253_);
v___x_262_ = lean_box(0);
return v___x_262_;
}
else
{
lean_object* v_val_263_; lean_object* v_one_264_; lean_object* v_n_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_val_263_ = lean_ctor_get(v___x_261_, 0);
lean_inc(v_val_263_);
lean_dec_ref_known(v___x_261_, 1);
v_one_264_ = lean_unsigned_to_nat(1u);
v_n_265_ = lean_nat_sub(v_x_255_, v_one_264_);
v___x_266_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignMatch___closed__9));
v___x_267_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignMatch___closed__10));
v___x_268_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1(v_s_253_, v_val_263_, v_atLineStart_254_, v_n_265_, v___x_266_, v___x_267_);
lean_dec(v_n_265_);
lean_dec(v_s_253_);
return v___x_268_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignBody(lean_object* v_key_271_, lean_object* v_s_272_, uint8_t v_lineStart_273_, lean_object* v_x_274_){
_start:
{
lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v_zero_281_; uint8_t v_isZero_282_; 
v_zero_281_ = lean_unsigned_to_nat(0u);
v_isZero_282_ = lean_nat_dec_eq(v_x_274_, v_zero_281_);
if (v_isZero_282_ == 1)
{
lean_object* v___x_283_; 
lean_dec(v_s_272_);
lean_dec(v_key_271_);
v___x_283_ = lean_box(0);
return v___x_283_;
}
else
{
lean_object* v_one_284_; lean_object* v_n_285_; lean_object* v___y_287_; lean_object* v___x_299_; 
v_one_284_ = lean_unsigned_to_nat(1u);
v_n_285_ = lean_nat_sub(v_x_274_, v_one_284_);
lean_inc(v_s_272_);
lean_inc(v_key_271_);
v___x_299_ = lp_lean_x2dftml_LeanFtml_divalignTail(v_key_271_, v_s_272_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v___x_300_; 
v___x_300_ = lean_box(0);
v___y_287_ = v___x_300_;
goto v___jp_286_;
}
else
{
lean_object* v_val_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_val_301_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_val_301_);
lean_dec_ref_known(v___x_299_, 1);
v___x_302_ = lean_box(0);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set(v___x_303_, 1, v_val_301_);
v___x_304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_302_);
v___y_287_ = v___x_304_;
goto v___jp_286_;
}
v___jp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_recs_290_; 
lean_inc_n(v_s_272_, 2);
v___x_288_ = lp_lean_x2dftml_LeanFtml_divalignMatch(v_s_272_, v_lineStart_273_, v_n_285_);
v___x_289_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignBody___closed__0));
lean_inc(v_key_271_);
v_recs_290_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4(v_s_272_, v_key_271_, v_n_285_, v___x_288_, v___x_289_);
if (lean_obj_tag(v_s_272_) == 0)
{
lean_object* v___x_291_; 
lean_dec(v_n_285_);
lean_dec(v_key_271_);
v___x_291_ = lean_box(0);
v___y_276_ = v_recs_290_;
v___y_277_ = v___y_287_;
v___y_278_ = v___x_291_;
goto v___jp_275_;
}
else
{
lean_object* v_head_292_; lean_object* v_tail_293_; lean_object* v___x_294_; uint8_t v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_head_292_ = lean_ctor_get(v_s_272_, 0);
lean_inc(v_head_292_);
v_tail_293_ = lean_ctor_get(v_s_272_, 1);
lean_inc(v_tail_293_);
lean_dec_ref_known(v_s_272_, 2);
v___x_294_ = lean_unsigned_to_nat(10u);
v___x_295_ = lean_nat_dec_eq(v_head_292_, v___x_294_);
v___x_296_ = lp_lean_x2dftml_LeanFtml_divalignBody(v_key_271_, v_tail_293_, v___x_295_, v_n_285_);
lean_dec(v_n_285_);
v___x_297_ = lean_box(0);
v___x_298_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(v_head_292_, v___x_296_, v___x_297_);
v___y_276_ = v_recs_290_;
v___y_277_ = v___y_287_;
v___y_278_ = v___x_298_;
goto v___jp_275_;
}
}
}
v___jp_275_:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = l_List_appendTR___redArg(v___y_277_, v___y_276_);
v___x_280_ = l_List_appendTR___redArg(v___x_279_, v___y_278_);
return v___x_280_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4(lean_object* v_s_305_, lean_object* v_key_306_, lean_object* v_n_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
if (lean_obj_tag(v_a_308_) == 0)
{
lean_object* v___x_310_; 
lean_dec(v_key_306_);
lean_dec(v_s_305_);
v___x_310_ = lean_array_to_list(v_a_309_);
return v___x_310_;
}
else
{
lean_object* v_head_311_; lean_object* v_snd_312_; lean_object* v_snd_313_; lean_object* v_tail_314_; lean_object* v_fst_315_; lean_object* v_snd_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v_head_311_ = lean_ctor_get(v_a_308_, 0);
v_snd_312_ = lean_ctor_get(v_head_311_, 1);
v_snd_313_ = lean_ctor_get(v_snd_312_, 1);
lean_inc(v_snd_313_);
v_tail_314_ = lean_ctor_get(v_a_308_, 1);
lean_inc(v_tail_314_);
lean_dec_ref_known(v_a_308_, 2);
v_fst_315_ = lean_ctor_get(v_snd_313_, 0);
lean_inc(v_fst_315_);
v_snd_316_ = lean_ctor_get(v_snd_313_, 1);
lean_inc_n(v_snd_316_, 2);
lean_dec(v_snd_313_);
v___x_317_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3___closed__0));
lean_inc_n(v_s_305_, 2);
v___x_318_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_305_, v_s_305_, v_snd_316_, v___x_317_);
v___x_319_ = l_List_getLast_x3f___redArg(v___x_318_);
lean_dec(v___x_318_);
v___x_320_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4___closed__0));
v___x_321_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_319_, v___x_320_);
lean_dec(v___x_319_);
lean_inc(v_key_306_);
v___x_322_ = lp_lean_x2dftml_LeanFtml_divalignBody(v_key_306_, v_fst_315_, v___x_321_, v_n_307_);
v___x_323_ = lean_box(0);
v___x_324_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3(v_s_305_, v_snd_316_, v___x_322_, v___x_323_);
v___x_325_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_309_, v___x_324_);
v_a_308_ = v_tail_314_;
v_a_309_ = v___x_325_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4___boxed(lean_object* v_s_327_, lean_object* v_key_328_, lean_object* v_n_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignBody_spec__4(v_s_327_, v_key_328_, v_n_329_, v_a_330_, v_a_331_);
lean_dec(v_n_329_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1___boxed(lean_object* v_s_333_, lean_object* v_val_334_, lean_object* v_atLineStart_335_, lean_object* v_n_336_, lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
uint8_t v_atLineStart_boxed_339_; lean_object* v_res_340_; 
v_atLineStart_boxed_339_ = lean_unbox(v_atLineStart_335_);
v_res_340_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1(v_s_333_, v_val_334_, v_atLineStart_boxed_339_, v_n_336_, v_a_337_, v_a_338_);
lean_dec(v_n_336_);
lean_dec(v_s_333_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1_spec__1___boxed(lean_object* v_val_341_, lean_object* v_atLineStart_342_, lean_object* v_n_343_, lean_object* v_s_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
uint8_t v_atLineStart_boxed_347_; lean_object* v_res_348_; 
v_atLineStart_boxed_347_ = lean_unbox(v_atLineStart_342_);
v_res_348_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divalignMatch_spec__1_spec__1(v_val_341_, v_atLineStart_boxed_347_, v_n_343_, v_s_344_, v_a_345_, v_a_346_);
lean_dec(v_s_344_);
lean_dec(v_n_343_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignMatch___boxed(lean_object* v_s_349_, lean_object* v_atLineStart_350_, lean_object* v_x_351_){
_start:
{
uint8_t v_atLineStart_boxed_352_; lean_object* v_res_353_; 
v_atLineStart_boxed_352_ = lean_unbox(v_atLineStart_350_);
v_res_353_ = lp_lean_x2dftml_LeanFtml_divalignMatch(v_s_349_, v_atLineStart_boxed_352_, v_x_351_);
lean_dec(v_x_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignBody___boxed(lean_object* v_key_354_, lean_object* v_s_355_, lean_object* v_lineStart_356_, lean_object* v_x_357_){
_start:
{
uint8_t v_lineStart_boxed_358_; lean_object* v_res_359_; 
v_lineStart_boxed_358_ = lean_unbox(v_lineStart_356_);
v_res_359_ = lp_lean_x2dftml_LeanFtml_divalignBody(v_key_354_, v_s_355_, v_lineStart_boxed_358_, v_x_357_);
lean_dec(v_x_357_);
return v_res_359_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__2(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignScan___closed__1));
v___x_363_ = l_String_toListImpl(v___x_362_);
return v___x_363_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__4(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignScan___closed__3));
v___x_366_ = l_String_toListImpl(v___x_365_);
return v___x_366_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__5(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__4, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__4);
v___x_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
return v___x_368_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__6(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__5, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__5);
v___x_370_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__2, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__2);
v___x_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set(v___x_371_, 1, v___x_369_);
return v___x_371_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__8(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignScan___closed__7));
v___x_374_ = l_String_toListImpl(v___x_373_);
return v___x_374_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__10(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignScan___closed__9));
v___x_377_ = l_String_toListImpl(v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__11(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__10, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__10);
v___x_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__12(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__11, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__11);
v___x_381_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__2, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__2);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___x_380_);
return v___x_382_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__13(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_383_ = lean_box(0);
v___x_384_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__12, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__12);
v___x_385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___x_383_);
return v___x_385_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__14(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v_endTok_388_; 
v___x_386_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__13, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__13);
v___x_387_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignScan___closed__0));
v_endTok_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_endTok_388_, 0, v___x_387_);
lean_ctor_set(v_endTok_388_, 1, v___x_386_);
return v_endTok_388_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__15(void){
_start:
{
lean_object* v___x_389_; lean_object* v_endTok_390_; lean_object* v___x_391_; 
v___x_389_ = lean_box(0);
v_endTok_390_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__14, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__14);
v___x_391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_391_, 0, v_endTok_390_);
lean_ctor_set(v___x_391_, 1, v___x_389_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignScan(lean_object* v_x_398_, lean_object* v_x_399_, uint8_t v_x_400_, lean_object* v_x_401_){
_start:
{
lean_object* v_zero_402_; uint8_t v_isZero_403_; 
v_zero_402_ = lean_unsigned_to_nat(0u);
v_isZero_403_ = lean_nat_dec_eq(v_x_401_, v_zero_402_);
if (v_isZero_403_ == 1)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec(v_x_398_);
v___x_404_ = lean_box(0);
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v_x_399_);
return v___x_405_;
}
else
{
if (lean_obj_tag(v_x_398_) == 0)
{
lean_object* v___x_406_; 
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v_x_398_);
lean_ctor_set(v___x_406_, 1, v_x_399_);
return v___x_406_;
}
else
{
lean_object* v_head_407_; lean_object* v_tail_408_; lean_object* v_one_409_; lean_object* v_n_410_; 
v_head_407_ = lean_ctor_get(v_x_398_, 0);
lean_inc(v_head_407_);
v_tail_408_ = lean_ctor_get(v_x_398_, 1);
lean_inc(v_tail_408_);
v_one_409_ = lean_unsigned_to_nat(1u);
v_n_410_ = lean_nat_sub(v_x_401_, v_one_409_);
if (v_x_400_ == 0)
{
lean_dec_ref_known(v_x_398_, 2);
goto v___jp_411_;
}
else
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_425_ = l_List_lengthTR___redArg(v_x_398_);
v___x_426_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_425_);
lean_dec(v___x_425_);
v___x_427_ = lp_lean_x2dftml_LeanFtml_divalignMatch(v_x_398_, v_x_400_, v___x_426_);
lean_dec(v___x_426_);
if (lean_obj_tag(v___x_427_) == 0)
{
goto v___jp_411_;
}
else
{
lean_object* v_head_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_493_; 
lean_dec(v_tail_408_);
lean_dec(v_head_407_);
v_head_428_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_493_ == 0)
{
lean_object* v_unused_494_; 
v_unused_494_ = lean_ctor_get(v___x_427_, 1);
lean_dec(v_unused_494_);
v___x_430_ = v___x_427_;
v_isShared_431_ = v_isSharedCheck_493_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_head_428_);
lean_dec(v___x_427_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_493_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v_snd_432_; lean_object* v_snd_433_; lean_object* v_fst_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_491_; 
v_snd_432_ = lean_ctor_get(v_head_428_, 1);
lean_inc(v_snd_432_);
v_snd_433_ = lean_ctor_get(v_snd_432_, 1);
lean_inc(v_snd_433_);
v_fst_434_ = lean_ctor_get(v_head_428_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v_head_428_);
if (v_isSharedCheck_491_ == 0)
{
lean_object* v_unused_492_; 
v_unused_492_ = lean_ctor_get(v_head_428_, 1);
lean_dec(v_unused_492_);
v___x_436_ = v_head_428_;
v_isShared_437_ = v_isSharedCheck_491_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_fst_434_);
lean_dec(v_head_428_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_491_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v_fst_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_489_; 
v_fst_438_ = lean_ctor_get(v_snd_432_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v_snd_432_);
if (v_isSharedCheck_489_ == 0)
{
lean_object* v_unused_490_; 
v_unused_490_ = lean_ctor_get(v_snd_432_, 1);
lean_dec(v_unused_490_);
v___x_440_ = v_snd_432_;
v_isShared_441_ = v_isSharedCheck_489_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_fst_438_);
lean_dec(v_snd_432_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_489_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v_fst_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_487_; 
v_fst_442_ = lean_ctor_get(v_snd_433_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v_snd_433_);
if (v_isSharedCheck_487_ == 0)
{
lean_object* v_unused_488_; 
v_unused_488_ = lean_ctor_get(v_snd_433_, 1);
lean_dec(v_unused_488_);
v___x_444_ = v_snd_433_;
v_isShared_445_ = v_isSharedCheck_487_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_fst_442_);
lean_dec(v_snd_433_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_487_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_452_; 
v___x_446_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignScan___closed__0));
v___x_447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__6, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__6);
v___x_448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__8, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__8);
v___x_449_ = lp_lean_x2dftml_LeanFtml_alignName(v_fst_434_);
lean_dec(v_fst_434_);
v___x_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 1, v___x_450_);
lean_ctor_set(v___x_444_, 0, v___x_448_);
v___x_452_ = v___x_444_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_450_);
v___x_452_ = v_reuseFailAlloc_486_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; lean_object* v___x_455_; 
v___x_453_ = lean_box(0);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 1, v___x_453_);
lean_ctor_set(v___x_430_, 0, v___x_452_);
v___x_455_ = v___x_430_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_485_, 1, v___x_453_);
v___x_455_ = v_reuseFailAlloc_485_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v___x_457_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set_tag(v___x_440_, 1);
lean_ctor_set(v___x_440_, 1, v___x_455_);
lean_ctor_set(v___x_440_, 0, v___x_447_);
v___x_457_ = v___x_440_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v___x_455_);
v___x_457_ = v_reuseFailAlloc_484_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v_startTok_459_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 1, v___x_457_);
lean_ctor_set(v___x_436_, 0, v___x_446_);
v_startTok_459_ = v___x_436_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v___x_457_);
v_startTok_459_ = v_reuseFailAlloc_483_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_482_; 
v___x_460_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__15, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__15);
v___x_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_461_, 0, v_startTok_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
lean_inc(v_x_399_);
v___x_462_ = l_List_appendTR___redArg(v_x_399_, v___x_461_);
v___x_463_ = lp_lean_x2dftml_LeanFtml_divalignScan(v_fst_442_, v___x_462_, v_isZero_403_, v_n_410_);
lean_dec(v_n_410_);
v_fst_464_ = lean_ctor_get(v___x_463_, 0);
v_snd_465_ = lean_ctor_get(v___x_463_, 1);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_482_ == 0)
{
v___x_467_ = v___x_463_;
v_isShared_468_ = v_isSharedCheck_482_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_snd_465_);
lean_inc(v_fst_464_);
lean_dec(v___x_463_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_482_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_469_ = l_List_lengthTR___redArg(v_x_399_);
lean_dec(v_x_399_);
lean_inc(v___x_469_);
v___x_470_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_469_);
v___x_471_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignScan___closed__17));
v___x_472_ = l_List_appendTR___redArg(v___x_470_, v___x_471_);
v___x_473_ = l_List_appendTR___redArg(v___x_472_, v_fst_438_);
v___x_474_ = l_List_appendTR___redArg(v___x_473_, v___x_471_);
v___x_475_ = lean_nat_add(v___x_469_, v_one_409_);
lean_dec(v___x_469_);
v___x_476_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_475_);
v___x_477_ = l_List_appendTR___redArg(v___x_474_, v___x_476_);
v___x_478_ = l_List_appendTR___redArg(v___x_477_, v_fst_464_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_478_);
v___x_480_ = v___x_467_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_snd_465_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
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
v___jp_411_:
{
lean_object* v___x_412_; uint8_t v___x_413_; lean_object* v___x_414_; lean_object* v_fst_415_; lean_object* v_snd_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_424_; 
v___x_412_ = lean_unsigned_to_nat(10u);
v___x_413_ = lean_nat_dec_eq(v_head_407_, v___x_412_);
v___x_414_ = lp_lean_x2dftml_LeanFtml_divalignScan(v_tail_408_, v_x_399_, v___x_413_, v_n_410_);
lean_dec(v_n_410_);
v_fst_415_ = lean_ctor_get(v___x_414_, 0);
v_snd_416_ = lean_ctor_get(v___x_414_, 1);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_424_ == 0)
{
v___x_418_ = v___x_414_;
v_isShared_419_ = v_isSharedCheck_424_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_snd_416_);
lean_inc(v_fst_415_);
lean_dec(v___x_414_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_424_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_420_, 0, v_head_407_);
lean_ctor_set(v___x_420_, 1, v_fst_415_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_420_);
v___x_422_ = v___x_418_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_snd_416_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignScan___boxed(lean_object* v_x_495_, lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_){
_start:
{
uint8_t v_x_450__boxed_499_; lean_object* v_res_500_; 
v_x_450__boxed_499_ = lean_unbox(v_x_497_);
v_res_500_ = lp_lean_x2dftml_LeanFtml_divalignScan(v_x_495_, v_x_496_, v_x_450__boxed_499_, v_x_498_);
lean_dec(v_x_498_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignLoop(lean_object* v_x_501_, lean_object* v_x_502_, lean_object* v_x_503_){
_start:
{
lean_object* v_zero_504_; uint8_t v_isZero_505_; 
v_zero_504_ = lean_unsigned_to_nat(0u);
v_isZero_505_ = lean_nat_dec_eq(v_x_503_, v_zero_504_);
if (v_isZero_505_ == 1)
{
lean_object* v___x_506_; 
lean_dec(v_x_503_);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v_x_501_);
lean_ctor_set(v___x_506_, 1, v_x_502_);
return v___x_506_;
}
else
{
uint8_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v_fst_512_; lean_object* v_snd_513_; lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_507_ = 1;
v___x_508_ = l_List_lengthTR___redArg(v_x_501_);
v___x_509_ = lean_unsigned_to_nat(1u);
v___x_510_ = lean_nat_add(v___x_508_, v___x_509_);
lean_dec(v___x_508_);
lean_inc(v_x_502_);
v___x_511_ = lp_lean_x2dftml_LeanFtml_divalignScan(v_x_501_, v_x_502_, v___x_507_, v___x_510_);
lean_dec(v___x_510_);
v_fst_512_ = lean_ctor_get(v___x_511_, 0);
v_snd_513_ = lean_ctor_get(v___x_511_, 1);
v___x_514_ = l_List_lengthTR___redArg(v_snd_513_);
v___x_515_ = l_List_lengthTR___redArg(v_x_502_);
lean_dec(v_x_502_);
v___x_516_ = lean_nat_dec_eq(v___x_514_, v___x_515_);
lean_dec(v___x_515_);
lean_dec(v___x_514_);
if (v___x_516_ == 0)
{
lean_object* v_n_517_; 
lean_inc(v_snd_513_);
lean_inc(v_fst_512_);
lean_dec_ref(v___x_511_);
v_n_517_ = lean_nat_sub(v_x_503_, v___x_509_);
lean_dec(v_x_503_);
v_x_501_ = v_fst_512_;
v_x_502_ = v_snd_513_;
v_x_503_ = v_n_517_;
goto _start;
}
else
{
lean_dec(v_x_503_);
return v___x_511_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignRule___lam__0(lean_object* v_src_519_, lean_object* v_toks_520_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_521_ = l_List_lengthTR___redArg(v_src_519_);
v___x_522_ = lean_unsigned_to_nat(1u);
v___x_523_ = lean_nat_add(v___x_521_, v___x_522_);
lean_dec(v___x_521_);
v___x_524_ = lp_lean_x2dftml_LeanFtml_divalignLoop(v_src_519_, v_toks_520_, v___x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divalignRule(lean_object* v_st_526_){
_start:
{
lean_object* v___f_527_; lean_object* v___x_528_; 
v___f_527_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignRule___closed__0));
v___x_528_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_526_, v___f_527_);
return v___x_528_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_noteBody___closed__1(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_noteBody___closed__0));
v___x_531_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteBody(lean_object* v_x_532_){
_start:
{
if (lean_obj_tag(v_x_532_) == 0)
{
lean_object* v___x_533_; 
v___x_533_ = lean_box(0);
return v___x_533_;
}
else
{
lean_object* v_head_534_; lean_object* v_tail_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v_head_534_ = lean_ctor_get(v_x_532_, 0);
lean_inc(v_head_534_);
v_tail_535_ = lean_ctor_get(v_x_532_, 1);
lean_inc(v_tail_535_);
v___x_536_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_noteBody___closed__1, &lp_lean_x2dftml_LeanFtml_noteBody___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_noteBody___closed__1);
v___x_537_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_536_, v_x_532_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v___x_538_; 
v___x_538_ = lp_lean_x2dftml_LeanFtml_noteBody(v_tail_535_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_dec(v_head_534_);
return v___x_538_;
}
else
{
lean_object* v_val_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_556_; 
v_val_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_556_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_556_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_val_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_556_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v_fst_543_; lean_object* v_snd_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_555_; 
v_fst_543_ = lean_ctor_get(v_val_539_, 0);
v_snd_544_ = lean_ctor_get(v_val_539_, 1);
v_isSharedCheck_555_ = !lean_is_exclusive(v_val_539_);
if (v_isSharedCheck_555_ == 0)
{
v___x_546_ = v_val_539_;
v_isShared_547_ = v_isSharedCheck_555_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_snd_544_);
lean_inc(v_fst_543_);
lean_dec(v_val_539_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_555_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_548_, 0, v_head_534_);
lean_ctor_set(v___x_548_, 1, v_fst_543_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_548_);
v___x_550_ = v___x_546_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_snd_544_);
v___x_550_ = v_reuseFailAlloc_554_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_552_; 
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_550_);
v___x_552_ = v___x_541_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
}
}
else
{
lean_object* v_val_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_566_; 
lean_dec(v_tail_535_);
lean_dec(v_head_534_);
v_val_557_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_566_ == 0)
{
v___x_559_ = v___x_537_;
v_isShared_560_ = v_isSharedCheck_566_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_val_557_);
lean_dec(v___x_537_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_566_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_561_ = lean_box(0);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
lean_ctor_set(v___x_562_, 1, v_val_557_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_562_);
v___x_564_ = v___x_559_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__0));
v___x_569_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteMatchAt(lean_object* v_src_573_){
_start:
{
lean_object* v___y_575_; 
if (lean_obj_tag(v_src_573_) == 1)
{
lean_object* v_head_602_; lean_object* v_tail_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v_head_602_ = lean_ctor_get(v_src_573_, 0);
v_tail_603_ = lean_ctor_get(v_src_573_, 1);
v___x_604_ = lean_unsigned_to_nat(10u);
v___x_605_ = lean_nat_dec_eq(v_head_602_, v___x_604_);
if (v___x_605_ == 0)
{
goto v___jp_600_;
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1);
lean_inc(v_tail_603_);
v___x_607_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_606_, v_tail_603_);
if (lean_obj_tag(v___x_607_) == 1)
{
lean_object* v_val_608_; 
v_val_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_val_608_);
lean_dec_ref_known(v___x_607_, 1);
if (lean_obj_tag(v_val_608_) == 1)
{
lean_object* v_head_609_; lean_object* v_tail_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_630_; 
v_head_609_ = lean_ctor_get(v_val_608_, 0);
v_tail_610_ = lean_ctor_get(v_val_608_, 1);
v_isSharedCheck_630_ = !lean_is_exclusive(v_val_608_);
if (v_isSharedCheck_630_ == 0)
{
v___x_612_ = v_val_608_;
v_isShared_613_ = v_isSharedCheck_630_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_tail_610_);
lean_inc(v_head_609_);
lean_dec(v_val_608_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_630_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
uint8_t v___x_614_; 
v___x_614_ = lean_nat_dec_eq(v_head_609_, v___x_604_);
lean_dec(v_head_609_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; 
lean_del_object(v___x_612_);
lean_dec(v_tail_610_);
v___x_615_ = lean_box(0);
v___y_575_ = v___x_615_;
goto v___jp_574_;
}
else
{
lean_object* v___x_616_; 
v___x_616_ = lp_lean_x2dftml_LeanFtml_noteBody(v_tail_610_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v___x_617_; 
lean_del_object(v___x_612_);
v___x_617_ = lean_box(0);
v___y_575_ = v___x_617_;
goto v___jp_574_;
}
else
{
lean_object* v_val_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_629_; 
lean_dec_ref_known(v_src_573_, 2);
v_val_618_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_629_ == 0)
{
v___x_620_ = v___x_616_;
v_isShared_621_ = v_isSharedCheck_629_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_val_618_);
lean_dec(v___x_616_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_629_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_622_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__2));
if (v_isShared_613_ == 0)
{
lean_ctor_set_tag(v___x_612_, 0);
lean_ctor_set(v___x_612_, 1, v_val_618_);
lean_ctor_set(v___x_612_, 0, v___x_622_);
v___x_624_ = v___x_612_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_val_618_);
v___x_624_ = v_reuseFailAlloc_628_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_626_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_624_);
v___x_626_ = v___x_620_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_631_; 
lean_dec(v_val_608_);
v___x_631_ = lean_box(0);
v___y_575_ = v___x_631_;
goto v___jp_574_;
}
}
else
{
lean_object* v___x_632_; 
lean_dec(v___x_607_);
v___x_632_ = lean_box(0);
v___y_575_ = v___x_632_;
goto v___jp_574_;
}
}
}
else
{
goto v___jp_600_;
}
v___jp_574_:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_noteMatchAt___closed__1);
v___x_577_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_576_, v_src_573_);
if (lean_obj_tag(v___x_577_) == 1)
{
lean_object* v_val_578_; 
v_val_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_val_578_);
lean_dec_ref_known(v___x_577_, 1);
if (lean_obj_tag(v_val_578_) == 1)
{
lean_object* v_head_579_; lean_object* v_tail_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_599_; 
v_head_579_ = lean_ctor_get(v_val_578_, 0);
v_tail_580_ = lean_ctor_get(v_val_578_, 1);
v_isSharedCheck_599_ = !lean_is_exclusive(v_val_578_);
if (v_isSharedCheck_599_ == 0)
{
v___x_582_ = v_val_578_;
v_isShared_583_ = v_isSharedCheck_599_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_tail_580_);
lean_inc(v_head_579_);
lean_dec(v_val_578_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_599_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = lean_unsigned_to_nat(10u);
v___x_585_ = lean_nat_dec_eq(v_head_579_, v___x_584_);
lean_dec(v_head_579_);
if (v___x_585_ == 0)
{
lean_del_object(v___x_582_);
lean_dec(v_tail_580_);
lean_inc(v___y_575_);
return v___y_575_;
}
else
{
lean_object* v___x_586_; 
v___x_586_ = lp_lean_x2dftml_LeanFtml_noteBody(v_tail_580_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_del_object(v___x_582_);
lean_inc(v___y_575_);
return v___y_575_;
}
else
{
lean_object* v_val_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_598_; 
v_val_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_598_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_598_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_val_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_598_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_591_ = lean_box(0);
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 0);
lean_ctor_set(v___x_582_, 1, v_val_587_);
lean_ctor_set(v___x_582_, 0, v___x_591_);
v___x_593_ = v___x_582_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_591_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_val_587_);
v___x_593_ = v_reuseFailAlloc_597_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_595_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_593_);
v___x_595_ = v___x_589_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_593_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
}
}
else
{
lean_dec(v_val_578_);
lean_inc(v___y_575_);
return v___y_575_;
}
}
else
{
lean_dec(v___x_577_);
lean_inc(v___y_575_);
return v___y_575_;
}
}
v___jp_600_:
{
lean_object* v___x_601_; 
v___x_601_ = lean_box(0);
v___y_575_ = v___x_601_;
goto v___jp_574_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__1(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_634_ = lean_box(0);
v___x_635_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__6, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__6);
v___x_636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v___x_634_);
return v___x_636_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__2(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v_startTok_639_; 
v___x_637_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_noteScan___closed__1, &lp_lean_x2dftml_LeanFtml_noteScan___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__1);
v___x_638_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_noteScan___closed__0));
v_startTok_639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_startTok_639_, 0, v___x_638_);
lean_ctor_set(v_startTok_639_, 1, v___x_637_);
return v_startTok_639_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__3(void){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v_endTok_642_; 
v___x_640_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divalignScan___closed__13, &lp_lean_x2dftml_LeanFtml_divalignScan___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_divalignScan___closed__13);
v___x_641_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_noteScan___closed__0));
v_endTok_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_endTok_642_, 0, v___x_641_);
lean_ctor_set(v_endTok_642_, 1, v___x_640_);
return v_endTok_642_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__4(void){
_start:
{
lean_object* v___x_643_; lean_object* v_endTok_644_; lean_object* v___x_645_; 
v___x_643_ = lean_box(0);
v_endTok_644_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_noteScan___closed__3, &lp_lean_x2dftml_LeanFtml_noteScan___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__3);
v___x_645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_645_, 0, v_endTok_644_);
lean_ctor_set(v___x_645_, 1, v___x_643_);
return v___x_645_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__5(void){
_start:
{
lean_object* v___x_646_; lean_object* v_startTok_647_; lean_object* v___x_648_; 
v___x_646_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_noteScan___closed__4, &lp_lean_x2dftml_LeanFtml_noteScan___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__4);
v_startTok_647_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_noteScan___closed__2, &lp_lean_x2dftml_LeanFtml_noteScan___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__2);
v___x_648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_648_, 0, v_startTok_647_);
lean_ctor_set(v___x_648_, 1, v___x_646_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteScan(lean_object* v_x_649_, lean_object* v_x_650_, lean_object* v_x_651_){
_start:
{
lean_object* v_zero_652_; uint8_t v_isZero_653_; 
v_zero_652_ = lean_unsigned_to_nat(0u);
v_isZero_653_ = lean_nat_dec_eq(v_x_651_, v_zero_652_);
if (v_isZero_653_ == 1)
{
lean_object* v___x_654_; lean_object* v___x_655_; 
lean_dec(v_x_649_);
v___x_654_ = lean_box(0);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v_x_650_);
return v___x_655_;
}
else
{
if (lean_obj_tag(v_x_649_) == 0)
{
lean_object* v___x_656_; 
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v_x_649_);
lean_ctor_set(v___x_656_, 1, v_x_650_);
return v___x_656_;
}
else
{
lean_object* v_head_657_; lean_object* v_tail_658_; lean_object* v_one_659_; lean_object* v_n_660_; lean_object* v___x_661_; 
v_head_657_ = lean_ctor_get(v_x_649_, 0);
lean_inc(v_head_657_);
v_tail_658_ = lean_ctor_get(v_x_649_, 1);
lean_inc(v_tail_658_);
v_one_659_ = lean_unsigned_to_nat(1u);
v_n_660_ = lean_nat_sub(v_x_651_, v_one_659_);
v___x_661_ = lp_lean_x2dftml_LeanFtml_noteMatchAt(v_x_649_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v___x_662_; lean_object* v_fst_663_; lean_object* v_snd_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_672_; 
v___x_662_ = lp_lean_x2dftml_LeanFtml_noteScan(v_tail_658_, v_x_650_, v_n_660_);
lean_dec(v_n_660_);
v_fst_663_ = lean_ctor_get(v___x_662_, 0);
v_snd_664_ = lean_ctor_get(v___x_662_, 1);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_672_ == 0)
{
v___x_666_ = v___x_662_;
v_isShared_667_ = v_isSharedCheck_672_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_snd_664_);
lean_inc(v_fst_663_);
lean_dec(v___x_662_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_672_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_668_; lean_object* v___x_670_; 
v___x_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_668_, 0, v_head_657_);
lean_ctor_set(v___x_668_, 1, v_fst_663_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_668_);
v___x_670_ = v___x_666_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v_snd_664_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
else
{
lean_object* v_val_673_; lean_object* v_snd_674_; lean_object* v_fst_675_; lean_object* v_fst_676_; lean_object* v_snd_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v_fst_681_; lean_object* v_snd_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_701_; 
lean_dec(v_tail_658_);
lean_dec(v_head_657_);
v_val_673_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_val_673_);
lean_dec_ref_known(v___x_661_, 1);
v_snd_674_ = lean_ctor_get(v_val_673_, 1);
lean_inc(v_snd_674_);
v_fst_675_ = lean_ctor_get(v_val_673_, 0);
lean_inc(v_fst_675_);
lean_dec(v_val_673_);
v_fst_676_ = lean_ctor_get(v_snd_674_, 0);
lean_inc(v_fst_676_);
v_snd_677_ = lean_ctor_get(v_snd_674_, 1);
lean_inc(v_snd_677_);
lean_dec(v_snd_674_);
v___x_678_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_noteScan___closed__5, &lp_lean_x2dftml_LeanFtml_noteScan___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_noteScan___closed__5);
lean_inc(v_x_650_);
v___x_679_ = l_List_appendTR___redArg(v_x_650_, v___x_678_);
v___x_680_ = lp_lean_x2dftml_LeanFtml_noteScan(v_snd_677_, v___x_679_, v_n_660_);
lean_dec(v_n_660_);
v_fst_681_ = lean_ctor_get(v___x_680_, 0);
v_snd_682_ = lean_ctor_get(v___x_680_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_701_ == 0)
{
v___x_684_ = v___x_680_;
v_isShared_685_ = v_isSharedCheck_701_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_snd_682_);
lean_inc(v_fst_681_);
lean_dec(v___x_680_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_701_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
lean_inc(v_fst_675_);
v___x_686_ = l_List_appendTR___redArg(v_fst_675_, v_fst_675_);
v___x_687_ = l_List_lengthTR___redArg(v_x_650_);
lean_dec(v_x_650_);
lean_inc(v___x_687_);
v___x_688_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_687_);
v___x_689_ = l_List_appendTR___redArg(v___x_686_, v___x_688_);
v___x_690_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divalignScan___closed__17));
v___x_691_ = l_List_appendTR___redArg(v___x_689_, v___x_690_);
v___x_692_ = l_List_appendTR___redArg(v___x_691_, v_fst_676_);
v___x_693_ = l_List_appendTR___redArg(v___x_692_, v___x_690_);
v___x_694_ = lean_nat_add(v___x_687_, v_one_659_);
lean_dec(v___x_687_);
v___x_695_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_694_);
v___x_696_ = l_List_appendTR___redArg(v___x_693_, v___x_695_);
v___x_697_ = l_List_appendTR___redArg(v___x_696_, v_fst_681_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 0, v___x_697_);
v___x_699_ = v___x_684_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_snd_682_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteScan___boxed(lean_object* v_x_702_, lean_object* v_x_703_, lean_object* v_x_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = lp_lean_x2dftml_LeanFtml_noteScan(v_x_702_, v_x_703_, v_x_704_);
lean_dec(v_x_704_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteRule___lam__0(lean_object* v_src_706_, lean_object* v_toks_707_){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_708_ = l_List_lengthTR___redArg(v_src_706_);
v___x_709_ = lean_unsigned_to_nat(1u);
v___x_710_ = lean_nat_add(v___x_708_, v___x_709_);
lean_dec(v___x_708_);
v___x_711_ = lp_lean_x2dftml_LeanFtml_noteScan(v_src_706_, v_toks_707_, v___x_710_);
lean_dec(v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_noteRule(lean_object* v_st_713_){
_start:
{
lean_object* v___f_714_; lean_object* v___x_715_; 
v___f_714_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_noteRule___closed__0));
v___x_715_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_713_, v___f_714_);
return v___x_715_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryOpener___closed__1(void){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryOpener___closed__0));
v___x_718_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryOpener(lean_object* v_src_719_){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryOpener___closed__1, &lp_lean_x2dftml_LeanFtml_galleryOpener___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_galleryOpener___closed__1);
v___x_721_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_720_, v_src_719_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v___x_722_; 
v___x_722_ = lean_box(0);
return v___x_722_;
}
else
{
lean_object* v_val_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_782_; 
v_val_723_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_782_ == 0)
{
v___x_725_ = v___x_721_;
v_isShared_726_ = v_isSharedCheck_782_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_val_723_);
lean_dec(v___x_721_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_782_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___y_728_; 
if (lean_obj_tag(v_val_723_) == 0)
{
lean_object* v___x_747_; 
v___x_747_ = lean_box(0);
v___y_728_ = v___x_747_;
goto v___jp_727_;
}
else
{
lean_object* v_head_748_; lean_object* v_tail_749_; uint8_t v___x_750_; 
v_head_748_ = lean_ctor_get(v_val_723_, 0);
v_tail_749_ = lean_ctor_get(v_val_723_, 1);
v___x_750_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_748_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
v___x_751_ = lean_box(0);
v___y_728_ = v___x_751_;
goto v___jp_727_;
}
else
{
lean_object* v___x_752_; lean_object* v_run_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_752_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3___closed__0));
lean_inc(v_tail_749_);
v_run_753_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(v___x_750_, v_tail_749_, v_tail_749_, v___x_752_);
v___x_754_ = l_List_lengthTR___redArg(v_run_753_);
v___x_755_ = l_List_drop___redArg(v___x_754_, v_tail_749_);
if (lean_obj_tag(v___x_755_) == 1)
{
lean_object* v_head_756_; lean_object* v_tail_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_780_; 
v_head_756_ = lean_ctor_get(v___x_755_, 0);
v_tail_757_ = lean_ctor_get(v___x_755_, 1);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_780_ == 0)
{
v___x_759_ = v___x_755_;
v_isShared_760_ = v_isSharedCheck_780_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_tail_757_);
lean_inc(v_head_756_);
lean_dec(v___x_755_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_780_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_761_ = lean_unsigned_to_nat(93u);
v___x_762_ = lean_nat_dec_eq(v_head_756_, v___x_761_);
lean_dec(v_head_756_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; 
lean_del_object(v___x_759_);
lean_dec(v_tail_757_);
lean_dec(v_run_753_);
v___x_763_ = lean_box(0);
v___y_728_ = v___x_763_;
goto v___jp_727_;
}
else
{
if (lean_obj_tag(v_tail_757_) == 1)
{
lean_object* v_head_764_; lean_object* v_tail_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_778_; 
v_head_764_ = lean_ctor_get(v_tail_757_, 0);
v_tail_765_ = lean_ctor_get(v_tail_757_, 1);
v_isSharedCheck_778_ = !lean_is_exclusive(v_tail_757_);
if (v_isSharedCheck_778_ == 0)
{
v___x_767_ = v_tail_757_;
v_isShared_768_ = v_isSharedCheck_778_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_tail_765_);
lean_inc(v_head_764_);
lean_dec(v_tail_757_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_778_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
uint8_t v___x_769_; 
v___x_769_ = lean_nat_dec_eq(v_head_764_, v___x_761_);
lean_dec(v_head_764_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; 
lean_del_object(v___x_767_);
lean_dec(v_tail_765_);
lean_del_object(v___x_759_);
lean_dec(v_run_753_);
v___x_770_ = lean_box(0);
v___y_728_ = v___x_770_;
goto v___jp_727_;
}
else
{
lean_object* v___x_772_; 
lean_inc(v_head_748_);
lean_dec_ref_known(v_val_723_, 2);
lean_del_object(v___x_725_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_run_753_);
lean_ctor_set(v___x_767_, 0, v_head_748_);
v___x_772_ = v___x_767_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_head_748_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_run_753_);
v___x_772_ = v_reuseFailAlloc_777_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_774_; 
if (v_isShared_760_ == 0)
{
lean_ctor_set_tag(v___x_759_, 0);
lean_ctor_set(v___x_759_, 1, v_tail_765_);
lean_ctor_set(v___x_759_, 0, v___x_772_);
v___x_774_ = v___x_759_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_772_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_tail_765_);
v___x_774_ = v_reuseFailAlloc_776_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; 
v___x_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
return v___x_775_;
}
}
}
}
}
else
{
lean_object* v___x_779_; 
lean_del_object(v___x_759_);
lean_dec(v_tail_757_);
lean_dec(v_run_753_);
v___x_779_ = lean_box(0);
v___y_728_ = v___x_779_;
goto v___jp_727_;
}
}
}
}
else
{
lean_object* v___x_781_; 
lean_dec(v___x_755_);
lean_dec(v_run_753_);
v___x_781_ = lean_box(0);
v___y_728_ = v___x_781_;
goto v___jp_727_;
}
}
}
v___jp_727_:
{
if (lean_obj_tag(v_val_723_) == 1)
{
lean_object* v_head_729_; lean_object* v_tail_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v_head_729_ = lean_ctor_get(v_val_723_, 0);
lean_inc(v_head_729_);
v_tail_730_ = lean_ctor_get(v_val_723_, 1);
lean_inc(v_tail_730_);
lean_dec_ref_known(v_val_723_, 2);
v___x_731_ = lean_unsigned_to_nat(93u);
v___x_732_ = lean_nat_dec_eq(v_head_729_, v___x_731_);
lean_dec(v_head_729_);
if (v___x_732_ == 0)
{
lean_dec(v_tail_730_);
lean_del_object(v___x_725_);
lean_inc(v___y_728_);
return v___y_728_;
}
else
{
if (lean_obj_tag(v_tail_730_) == 1)
{
lean_object* v_head_733_; lean_object* v_tail_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_746_; 
v_head_733_ = lean_ctor_get(v_tail_730_, 0);
v_tail_734_ = lean_ctor_get(v_tail_730_, 1);
v_isSharedCheck_746_ = !lean_is_exclusive(v_tail_730_);
if (v_isSharedCheck_746_ == 0)
{
v___x_736_ = v_tail_730_;
v_isShared_737_ = v_isSharedCheck_746_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_tail_734_);
lean_inc(v_head_733_);
lean_dec(v_tail_730_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_746_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
uint8_t v___x_738_; 
v___x_738_ = lean_nat_dec_eq(v_head_733_, v___x_731_);
lean_dec(v_head_733_);
if (v___x_738_ == 0)
{
lean_del_object(v___x_736_);
lean_dec(v_tail_734_);
lean_del_object(v___x_725_);
lean_inc(v___y_728_);
return v___y_728_;
}
else
{
lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_739_ = lean_box(0);
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 0);
lean_ctor_set(v___x_736_, 0, v___x_739_);
v___x_741_ = v___x_736_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_739_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v_tail_734_);
v___x_741_ = v_reuseFailAlloc_745_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v___x_741_);
v___x_743_ = v___x_725_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
else
{
lean_dec(v_tail_730_);
lean_del_object(v___x_725_);
lean_inc(v___y_728_);
return v___y_728_;
}
}
}
else
{
lean_del_object(v___x_725_);
lean_dec(v_val_723_);
lean_inc(v___y_728_);
return v___y_728_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryLines(lean_object* v_x_785_, lean_object* v_x_786_){
_start:
{
lean_object* v_src_788_; lean_object* v_zero_791_; uint8_t v_isZero_792_; 
v_zero_791_ = lean_unsigned_to_nat(0u);
v_isZero_792_ = lean_nat_dec_eq(v_x_786_, v_zero_791_);
if (v_isZero_792_ == 1)
{
lean_object* v___x_793_; 
lean_dec(v_x_785_);
v___x_793_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryLines___closed__0));
return v___x_793_;
}
else
{
if (lean_obj_tag(v_x_785_) == 1)
{
lean_object* v_head_794_; lean_object* v_tail_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v_head_794_ = lean_ctor_get(v_x_785_, 0);
v_tail_795_ = lean_ctor_get(v_x_785_, 1);
lean_inc(v_tail_795_);
v___x_796_ = lean_unsigned_to_nat(10u);
v___x_797_ = lean_nat_dec_eq(v_head_794_, v___x_796_);
if (v___x_797_ == 0)
{
lean_dec(v_tail_795_);
v_src_788_ = v_x_785_;
goto v___jp_787_;
}
else
{
lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_875_; 
v_isSharedCheck_875_ = !lean_is_exclusive(v_x_785_);
if (v_isSharedCheck_875_ == 0)
{
lean_object* v_unused_876_; lean_object* v_unused_877_; 
v_unused_876_ = lean_ctor_get(v_x_785_, 1);
lean_dec(v_unused_876_);
v_unused_877_ = lean_ctor_get(v_x_785_, 0);
lean_dec(v_unused_877_);
v___x_799_ = v_x_785_;
v_isShared_800_ = v_isSharedCheck_875_;
goto v_resetjp_798_;
}
else
{
lean_dec(v_x_785_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_875_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
if (lean_obj_tag(v_tail_795_) == 1)
{
lean_object* v_head_801_; lean_object* v_tail_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v_head_801_ = lean_ctor_get(v_tail_795_, 0);
v_tail_802_ = lean_ctor_get(v_tail_795_, 1);
lean_inc(v_tail_802_);
v___x_803_ = lean_unsigned_to_nat(58u);
v___x_804_ = lean_nat_dec_eq(v_head_801_, v___x_803_);
if (v___x_804_ == 0)
{
lean_object* v___x_806_; 
lean_dec(v_tail_802_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_796_);
v___x_806_ = v___x_799_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v_tail_795_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
v_src_788_ = v___x_806_;
goto v___jp_787_;
}
}
else
{
lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_869_; 
v_isSharedCheck_869_ = !lean_is_exclusive(v_tail_795_);
if (v_isSharedCheck_869_ == 0)
{
lean_object* v_unused_870_; lean_object* v_unused_871_; 
v_unused_870_ = lean_ctor_get(v_tail_795_, 1);
lean_dec(v_unused_870_);
v_unused_871_ = lean_ctor_get(v_tail_795_, 0);
lean_dec(v_unused_871_);
v___x_809_ = v_tail_795_;
v_isShared_810_ = v_isSharedCheck_869_;
goto v_resetjp_808_;
}
else
{
lean_dec(v_tail_795_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_869_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
if (lean_obj_tag(v_tail_802_) == 1)
{
lean_object* v_head_811_; lean_object* v_tail_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v_head_811_ = lean_ctor_get(v_tail_802_, 0);
v_tail_812_ = lean_ctor_get(v_tail_802_, 1);
v___x_813_ = lean_unsigned_to_nat(32u);
v___x_814_ = lean_nat_dec_eq(v_head_811_, v___x_813_);
if (v___x_814_ == 0)
{
lean_object* v___x_816_; 
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_803_);
v___x_816_ = v___x_809_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v_tail_802_);
v___x_816_ = v_reuseFailAlloc_820_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
lean_object* v___x_818_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 1, v___x_816_);
lean_ctor_set(v___x_799_, 0, v___x_796_);
v___x_818_ = v___x_799_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
v_src_788_ = v___x_818_;
goto v___jp_787_;
}
}
}
else
{
lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_860_; 
lean_inc(v_tail_812_);
lean_inc(v_head_811_);
v_isSharedCheck_860_ = !lean_is_exclusive(v_tail_802_);
if (v_isSharedCheck_860_ == 0)
{
lean_object* v_unused_861_; lean_object* v_unused_862_; 
v_unused_861_ = lean_ctor_get(v_tail_802_, 1);
lean_dec(v_unused_861_);
v_unused_862_ = lean_ctor_get(v_tail_802_, 0);
lean_dec(v_unused_862_);
v___x_822_ = v_tail_802_;
v_isShared_823_ = v_isSharedCheck_860_;
goto v_resetjp_821_;
}
else
{
lean_dec(v_tail_802_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_860_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
lean_inc(v_tail_812_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_813_);
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v_tail_812_);
v___x_825_ = v_reuseFailAlloc_859_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
lean_object* v___x_826_; lean_object* v_content_827_; uint8_t v___x_828_; 
v___x_826_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divalignBody_spec__3___closed__0));
lean_inc(v_tail_812_);
v_content_827_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_centerScan_spec__0(v_head_811_, v_tail_812_, v_tail_812_, v___x_826_);
lean_dec(v_head_811_);
v___x_828_ = l_List_isEmpty___redArg(v_content_827_);
if (v___x_828_ == 0)
{
lean_object* v_one_829_; lean_object* v_n_830_; lean_object* v___x_831_; lean_object* v_rest_832_; lean_object* v___x_833_; lean_object* v_fst_834_; lean_object* v_snd_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_850_; 
lean_dec_ref(v___x_825_);
v_one_829_ = lean_unsigned_to_nat(1u);
v_n_830_ = lean_nat_sub(v_x_786_, v_one_829_);
v___x_831_ = l_List_lengthTR___redArg(v_content_827_);
v_rest_832_ = l_List_drop___redArg(v___x_831_, v_tail_812_);
lean_dec(v_tail_812_);
v___x_833_ = lp_lean_x2dftml_LeanFtml_galleryLines(v_rest_832_, v_n_830_);
lean_dec(v_n_830_);
v_fst_834_ = lean_ctor_get(v___x_833_, 0);
v_snd_835_ = lean_ctor_get(v___x_833_, 1);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_850_ == 0)
{
v___x_837_ = v___x_833_;
v_isShared_838_ = v_isSharedCheck_850_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_snd_835_);
lean_inc(v_fst_834_);
lean_dec(v___x_833_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_850_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 1, v_content_827_);
lean_ctor_set(v___x_809_, 0, v___x_813_);
v___x_840_ = v___x_809_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_content_827_);
v___x_840_ = v_reuseFailAlloc_849_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_842_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 1, v___x_840_);
lean_ctor_set(v___x_799_, 0, v___x_803_);
v___x_842_ = v___x_799_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_840_);
v___x_842_ = v_reuseFailAlloc_848_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_796_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
lean_ctor_set(v___x_844_, 1, v_fst_834_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_844_);
v___x_846_ = v___x_837_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_844_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v_snd_835_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
else
{
lean_object* v___x_852_; 
lean_dec(v_content_827_);
lean_dec(v_tail_812_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 1, v___x_825_);
lean_ctor_set(v___x_809_, 0, v___x_803_);
v___x_852_ = v___x_809_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v___x_825_);
v___x_852_ = v_reuseFailAlloc_858_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_854_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 1, v___x_852_);
lean_ctor_set(v___x_799_, 0, v___x_796_);
v___x_854_ = v___x_799_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v___x_852_);
v___x_854_ = v_reuseFailAlloc_857_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = lean_box(0);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
lean_ctor_set(v___x_856_, 1, v___x_854_);
return v___x_856_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_864_; 
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_803_);
v___x_864_ = v___x_809_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v_tail_802_);
v___x_864_ = v_reuseFailAlloc_868_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v___x_866_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 1, v___x_864_);
lean_ctor_set(v___x_799_, 0, v___x_796_);
v___x_866_ = v___x_799_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v___x_864_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
v_src_788_ = v___x_866_;
goto v___jp_787_;
}
}
}
}
}
}
else
{
lean_object* v___x_873_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_796_);
v___x_873_ = v___x_799_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_tail_795_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
v_src_788_ = v___x_873_;
goto v___jp_787_;
}
}
}
}
}
else
{
v_src_788_ = v_x_785_;
goto v___jp_787_;
}
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = lean_box(0);
v___x_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
lean_ctor_set(v___x_790_, 1, v_src_788_);
return v___x_790_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryLines___boxed(lean_object* v_x_878_, lean_object* v_x_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = lp_lean_x2dftml_LeanFtml_galleryLines(v_x_878_, v_x_879_);
lean_dec(v_x_879_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_galleryBody_tryCount_spec__0(lean_object* v_a_881_, lean_object* v_a_882_){
_start:
{
if (lean_obj_tag(v_a_881_) == 0)
{
lean_object* v___x_883_; 
v___x_883_ = lean_array_to_list(v_a_882_);
return v___x_883_;
}
else
{
lean_object* v_head_884_; lean_object* v_tail_885_; lean_object* v___x_886_; 
v_head_884_ = lean_ctor_get(v_a_881_, 0);
lean_inc(v_head_884_);
v_tail_885_ = lean_ctor_get(v_a_881_, 1);
lean_inc(v_tail_885_);
lean_dec_ref_known(v_a_881_, 2);
v___x_886_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_882_, v_head_884_);
v_a_881_ = v_tail_885_;
v_a_882_ = v___x_886_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__2(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__1));
v___x_892_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryBody_tryCount(lean_object* v_lines_893_, lean_object* v_src_894_, lean_object* v_a_895_){
_start:
{
lean_object* v_zero_896_; uint8_t v_isZero_897_; 
v_zero_896_ = lean_unsigned_to_nat(0u);
v_isZero_897_ = lean_nat_dec_eq(v_a_895_, v_zero_896_);
if (v_isZero_897_ == 1)
{
lean_object* v___x_898_; 
lean_dec(v_a_895_);
lean_dec(v_lines_893_);
v___x_898_ = lean_box(0);
return v___x_898_;
}
else
{
lean_object* v_one_899_; lean_object* v_n_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v_bodyText_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_one_899_ = lean_unsigned_to_nat(1u);
v_n_900_ = lean_nat_sub(v_a_895_, v_one_899_);
lean_dec(v_a_895_);
v___x_901_ = lean_nat_add(v_n_900_, v_one_899_);
v___x_902_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__0));
lean_inc(v_lines_893_);
v___x_903_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_lines_893_, v_lines_893_, v___x_901_, v___x_902_);
v_bodyText_904_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_galleryBody_tryCount_spec__0(v___x_903_, v___x_902_);
v___x_905_ = l_List_lengthTR___redArg(v_bodyText_904_);
v___x_906_ = l_List_drop___redArg(v___x_905_, v_src_894_);
if (lean_obj_tag(v___x_906_) == 1)
{
lean_object* v_head_907_; lean_object* v_tail_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_929_; 
v_head_907_ = lean_ctor_get(v___x_906_, 0);
v_tail_908_ = lean_ctor_get(v___x_906_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_929_ == 0)
{
v___x_910_ = v___x_906_;
v_isShared_911_ = v_isSharedCheck_929_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_tail_908_);
lean_inc(v_head_907_);
lean_dec(v___x_906_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_929_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_912_ = lean_unsigned_to_nat(10u);
v___x_913_ = lean_nat_dec_eq(v_head_907_, v___x_912_);
lean_dec(v_head_907_);
if (v___x_913_ == 0)
{
lean_del_object(v___x_910_);
lean_dec(v_tail_908_);
lean_dec(v_bodyText_904_);
v_a_895_ = v_n_900_;
goto _start;
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_915_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__2, &lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___closed__2);
v___x_916_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_915_, v_tail_908_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_del_object(v___x_910_);
lean_dec(v_bodyText_904_);
v_a_895_ = v_n_900_;
goto _start;
}
else
{
lean_object* v_val_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_928_; 
lean_dec(v_n_900_);
lean_dec(v_lines_893_);
v_val_918_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_928_ == 0)
{
v___x_920_ = v___x_916_;
v_isShared_921_ = v_isSharedCheck_928_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_val_918_);
lean_dec(v___x_916_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_928_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_911_ == 0)
{
lean_ctor_set_tag(v___x_910_, 0);
lean_ctor_set(v___x_910_, 1, v_val_918_);
lean_ctor_set(v___x_910_, 0, v_bodyText_904_);
v___x_923_ = v___x_910_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_bodyText_904_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_val_918_);
v___x_923_ = v_reuseFailAlloc_927_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_925_; 
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 0, v___x_923_);
v___x_925_ = v___x_920_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_923_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_906_);
lean_dec(v_bodyText_904_);
v_a_895_ = v_n_900_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryBody_tryCount___boxed(lean_object* v_lines_931_, lean_object* v_src_932_, lean_object* v_a_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = lp_lean_x2dftml_LeanFtml_galleryBody_tryCount(v_lines_931_, v_src_932_, v_a_933_);
lean_dec(v_src_932_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryBody(lean_object* v_src_935_){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v_fst_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_936_ = l_List_lengthTR___redArg(v_src_935_);
v___x_937_ = lean_unsigned_to_nat(1u);
v___x_938_ = lean_nat_add(v___x_936_, v___x_937_);
lean_dec(v___x_936_);
lean_inc(v_src_935_);
v___x_939_ = lp_lean_x2dftml_LeanFtml_galleryLines(v_src_935_, v___x_938_);
lean_dec(v___x_938_);
v_fst_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_fst_940_);
lean_dec_ref(v___x_939_);
v___x_941_ = l_List_lengthTR___redArg(v_fst_940_);
v___x_942_ = lp_lean_x2dftml_LeanFtml_galleryBody_tryCount(v_fst_940_, v_src_935_, v___x_941_);
lean_dec(v_src_935_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryMatchAt(lean_object* v_src_943_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = lp_lean_x2dftml_LeanFtml_galleryOpener(v_src_943_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v___x_945_; 
v___x_945_ = lean_box(0);
return v___x_945_;
}
else
{
lean_object* v_val_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_988_; 
v_val_946_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_988_ == 0)
{
v___x_948_ = v___x_944_;
v_isShared_949_ = v_isSharedCheck_988_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_val_946_);
lean_dec(v___x_944_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_988_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v_fst_950_; lean_object* v_snd_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_987_; 
v_fst_950_ = lean_ctor_get(v_val_946_, 0);
v_snd_951_ = lean_ctor_get(v_val_946_, 1);
v_isSharedCheck_987_ = !lean_is_exclusive(v_val_946_);
if (v_isSharedCheck_987_ == 0)
{
v___x_953_ = v_val_946_;
v_isShared_954_ = v_isSharedCheck_987_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_snd_951_);
lean_inc(v_fst_950_);
lean_dec(v_val_946_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_987_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; 
lean_inc(v_snd_951_);
v___x_955_ = lp_lean_x2dftml_LeanFtml_galleryBody(v_snd_951_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = lean_box(0);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_956_);
v___x_958_ = v___x_953_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_956_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_snd_951_);
v___x_958_ = v_reuseFailAlloc_963_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v_fst_950_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v___x_959_);
v___x_961_ = v___x_948_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
else
{
lean_object* v_val_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_986_; 
lean_dec(v_snd_951_);
v_val_964_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_986_ == 0)
{
v___x_966_ = v___x_955_;
v_isShared_967_ = v_isSharedCheck_986_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_val_964_);
lean_dec(v___x_955_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_986_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v_fst_968_; lean_object* v_snd_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_985_; 
v_fst_968_ = lean_ctor_get(v_val_964_, 0);
v_snd_969_ = lean_ctor_get(v_val_964_, 1);
v_isSharedCheck_985_ = !lean_is_exclusive(v_val_964_);
if (v_isSharedCheck_985_ == 0)
{
v___x_971_ = v_val_964_;
v_isShared_972_ = v_isSharedCheck_985_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_snd_969_);
lean_inc(v_fst_968_);
lean_dec(v_val_964_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_985_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 0, v_fst_968_);
v___x_974_ = v___x_966_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_fst_968_);
v___x_974_ = v_reuseFailAlloc_984_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
lean_object* v___x_976_; 
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v___x_974_);
v___x_976_ = v___x_971_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_974_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v_snd_969_);
v___x_976_ = v_reuseFailAlloc_983_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_978_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 1, v___x_976_);
v___x_978_ = v___x_953_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_fst_950_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v___x_976_);
v___x_978_ = v_reuseFailAlloc_982_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
lean_object* v___x_980_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v___x_978_);
v___x_980_ = v___x_948_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_978_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
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
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryToken___closed__2(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryToken___closed__1));
v___x_992_ = l_String_toListImpl(v___x_991_);
return v___x_992_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryToken___closed__4(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryToken___closed__3));
v___x_995_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryToken___closed__6(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryToken___closed__5));
v___x_998_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_997_);
return v___x_998_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryToken___closed__7(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryToken___closed__3));
v___x_1000_ = l_String_toListImpl(v___x_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryToken(lean_object* v_g1_1001_, lean_object* v_body_1002_){
_start:
{
lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1014_; lean_object* v___x_1018_; lean_object* v_attrs_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1018_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_g1_1001_);
v_attrs_1019_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___x_1018_);
lean_dec(v___x_1018_);
v___x_1020_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryToken___closed__4, &lp_lean_x2dftml_LeanFtml_galleryToken___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_galleryToken___closed__4);
v___x_1021_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attrs_1019_, v___x_1020_);
lean_dec(v_attrs_1019_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_box(0);
v___y_1014_ = v___x_1022_;
goto v___jp_1013_;
}
else
{
lean_object* v_val_1023_; uint8_t v___x_1024_; 
v_val_1023_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_val_1023_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1024_ = l_List_isEmpty___redArg(v_val_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; uint8_t v___x_1026_; 
v___x_1025_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryToken___closed__6, &lp_lean_x2dftml_LeanFtml_galleryToken___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_galleryToken___closed__6);
v___x_1026_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_val_1023_, v___x_1025_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1027_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryToken___closed__7, &lp_lean_x2dftml_LeanFtml_galleryToken___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_galleryToken___closed__7);
v___x_1028_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_1023_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = lean_box(0);
v___x_1031_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1029_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
v___y_1014_ = v___x_1031_;
goto v___jp_1013_;
}
else
{
lean_object* v___x_1032_; 
lean_dec(v_val_1023_);
v___x_1032_ = lean_box(0);
v___y_1014_ = v___x_1032_;
goto v___jp_1013_;
}
}
else
{
lean_object* v___x_1033_; 
lean_dec(v_val_1023_);
v___x_1033_ = lean_box(0);
v___y_1014_ = v___x_1033_;
goto v___jp_1013_;
}
}
v___jp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1006_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryToken___closed__0));
v___x_1007_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryToken___closed__2, &lp_lean_x2dftml_LeanFtml_galleryToken___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_galleryToken___closed__2);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v___y_1005_);
v___x_1009_ = lean_box(0);
v___x_1010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1008_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = l_List_appendTR___redArg(v___y_1004_, v___x_1010_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1006_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
return v___x_1012_;
}
v___jp_1013_:
{
if (lean_obj_tag(v_body_1002_) == 0)
{
lean_object* v___x_1015_; 
v___x_1015_ = lean_box(3);
v___y_1004_ = v___y_1014_;
v___y_1005_ = v___x_1015_;
goto v___jp_1003_;
}
else
{
lean_object* v_val_1016_; lean_object* v___x_1017_; 
v_val_1016_ = lean_ctor_get(v_body_1002_, 0);
lean_inc(v_val_1016_);
lean_dec_ref_known(v_body_1002_, 1);
v___x_1017_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_1016_);
v___y_1004_ = v___y_1014_;
v___y_1005_ = v___x_1017_;
goto v___jp_1003_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryToken___boxed(lean_object* v_g1_1034_, lean_object* v_body_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = lp_lean_x2dftml_LeanFtml_galleryToken(v_g1_1034_, v_body_1035_);
lean_dec(v_g1_1034_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryScan(lean_object* v_x_1043_, lean_object* v_x_1044_, uint8_t v_x_1045_, lean_object* v_x_1046_){
_start:
{
lean_object* v_zero_1047_; uint8_t v_isZero_1048_; 
v_zero_1047_ = lean_unsigned_to_nat(0u);
v_isZero_1048_ = lean_nat_dec_eq(v_x_1046_, v_zero_1047_);
if (v_isZero_1048_ == 1)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_dec(v_x_1043_);
v___x_1049_ = lean_box(0);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
lean_ctor_set(v___x_1050_, 1, v_x_1044_);
return v___x_1050_;
}
else
{
if (lean_obj_tag(v_x_1043_) == 0)
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_x_1043_);
lean_ctor_set(v___x_1051_, 1, v_x_1044_);
return v___x_1051_;
}
else
{
lean_object* v_head_1052_; lean_object* v_tail_1053_; lean_object* v_one_1054_; lean_object* v_n_1055_; 
v_head_1052_ = lean_ctor_get(v_x_1043_, 0);
lean_inc(v_head_1052_);
v_tail_1053_ = lean_ctor_get(v_x_1043_, 1);
lean_inc(v_tail_1053_);
v_one_1054_ = lean_unsigned_to_nat(1u);
v_n_1055_ = lean_nat_sub(v_x_1046_, v_one_1054_);
if (v_x_1045_ == 0)
{
lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1074_; 
v_isSharedCheck_1074_ = !lean_is_exclusive(v_x_1043_);
if (v_isSharedCheck_1074_ == 0)
{
lean_object* v_unused_1075_; lean_object* v_unused_1076_; 
v_unused_1075_ = lean_ctor_get(v_x_1043_, 1);
lean_dec(v_unused_1075_);
v_unused_1076_ = lean_ctor_get(v_x_1043_, 0);
lean_dec(v_unused_1076_);
v___x_1057_ = v_x_1043_;
v_isShared_1058_ = v_isSharedCheck_1074_;
goto v_resetjp_1056_;
}
else
{
lean_dec(v_x_1043_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1074_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; uint8_t v___x_1060_; lean_object* v___x_1061_; lean_object* v_fst_1062_; lean_object* v_snd_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1073_; 
v___x_1059_ = lean_unsigned_to_nat(10u);
v___x_1060_ = lean_nat_dec_eq(v_head_1052_, v___x_1059_);
v___x_1061_ = lp_lean_x2dftml_LeanFtml_galleryScan(v_tail_1053_, v_x_1044_, v___x_1060_, v_n_1055_);
lean_dec(v_n_1055_);
v_fst_1062_ = lean_ctor_get(v___x_1061_, 0);
v_snd_1063_ = lean_ctor_get(v___x_1061_, 1);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1065_ = v___x_1061_;
v_isShared_1066_ = v_isSharedCheck_1073_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_snd_1063_);
lean_inc(v_fst_1062_);
lean_dec(v___x_1061_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1073_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 1, v_fst_1062_);
v___x_1068_ = v___x_1057_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_head_1052_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v_fst_1062_);
v___x_1068_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
lean_object* v___x_1070_; 
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v___x_1068_);
v___x_1070_ = v___x_1065_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1068_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_snd_1063_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
}
else
{
lean_object* v___x_1077_; 
v___x_1077_ = lp_lean_x2dftml_LeanFtml_galleryMatchAt(v_x_1043_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v___x_1078_; uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v_fst_1081_; lean_object* v_snd_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1090_; 
v___x_1078_ = lean_unsigned_to_nat(10u);
v___x_1079_ = lean_nat_dec_eq(v_head_1052_, v___x_1078_);
v___x_1080_ = lp_lean_x2dftml_LeanFtml_galleryScan(v_tail_1053_, v_x_1044_, v___x_1079_, v_n_1055_);
lean_dec(v_n_1055_);
v_fst_1081_ = lean_ctor_get(v___x_1080_, 0);
v_snd_1082_ = lean_ctor_get(v___x_1080_, 1);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1084_ = v___x_1080_;
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_snd_1082_);
lean_inc(v_fst_1081_);
lean_dec(v___x_1080_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1086_, 0, v_head_1052_);
lean_ctor_set(v___x_1086_, 1, v_fst_1081_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 0, v___x_1086_);
v___x_1088_ = v___x_1084_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v_snd_1082_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
else
{
lean_object* v_val_1091_; lean_object* v_snd_1092_; lean_object* v_fst_1093_; lean_object* v_fst_1094_; lean_object* v_snd_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v_tail_1053_);
lean_dec(v_head_1052_);
v_val_1091_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_val_1091_);
lean_dec_ref_known(v___x_1077_, 1);
v_snd_1092_ = lean_ctor_get(v_val_1091_, 1);
lean_inc(v_snd_1092_);
v_fst_1093_ = lean_ctor_get(v_val_1091_, 0);
lean_inc(v_fst_1093_);
lean_dec(v_val_1091_);
v_fst_1094_ = lean_ctor_get(v_snd_1092_, 0);
v_snd_1095_ = lean_ctor_get(v_snd_1092_, 1);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_snd_1092_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1097_ = v_snd_1092_;
v_isShared_1098_ = v_isSharedCheck_1121_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_snd_1095_);
lean_inc(v_fst_1094_);
lean_dec(v_snd_1092_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1121_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1102_; 
v___x_1099_ = lp_lean_x2dftml_LeanFtml_galleryToken(v_fst_1093_, v_fst_1094_);
lean_dec(v_fst_1093_);
v___x_1100_ = lean_box(0);
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 1);
lean_ctor_set(v___x_1097_, 1, v___x_1100_);
lean_ctor_set(v___x_1097_, 0, v___x_1099_);
v___x_1102_ = v___x_1097_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1099_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1100_);
v___x_1102_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v_fst_1105_; lean_object* v_snd_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1119_; 
lean_inc(v_x_1044_);
v___x_1103_ = l_List_appendTR___redArg(v_x_1044_, v___x_1102_);
v___x_1104_ = lp_lean_x2dftml_LeanFtml_galleryScan(v_snd_1095_, v___x_1103_, v_isZero_1048_, v_n_1055_);
lean_dec(v_n_1055_);
v_fst_1105_ = lean_ctor_get(v___x_1104_, 0);
v_snd_1106_ = lean_ctor_get(v___x_1104_, 1);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1108_ = v___x_1104_;
v_isShared_1109_ = v_isSharedCheck_1119_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_snd_1106_);
lean_inc(v_fst_1105_);
lean_dec(v___x_1104_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1119_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1117_; 
v___x_1110_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryScan___closed__1));
v___x_1111_ = l_List_lengthTR___redArg(v_x_1044_);
lean_dec(v_x_1044_);
v___x_1112_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1111_);
v___x_1113_ = l_List_appendTR___redArg(v___x_1110_, v___x_1112_);
v___x_1114_ = l_List_appendTR___redArg(v___x_1113_, v___x_1110_);
v___x_1115_ = l_List_appendTR___redArg(v___x_1114_, v_fst_1105_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1115_);
v___x_1117_ = v___x_1108_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1115_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v_snd_1106_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryScan___boxed(lean_object* v_x_1122_, lean_object* v_x_1123_, lean_object* v_x_1124_, lean_object* v_x_1125_){
_start:
{
uint8_t v_x_288__boxed_1126_; lean_object* v_res_1127_; 
v_x_288__boxed_1126_ = lean_unbox(v_x_1124_);
v_res_1127_ = lp_lean_x2dftml_LeanFtml_galleryScan(v_x_1122_, v_x_1123_, v_x_288__boxed_1126_, v_x_1125_);
lean_dec(v_x_1125_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRule___lam__0(lean_object* v_src_1128_, lean_object* v_toks_1129_){
_start:
{
uint8_t v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1130_ = 1;
v___x_1131_ = l_List_lengthTR___redArg(v_src_1128_);
v___x_1132_ = lean_unsigned_to_nat(1u);
v___x_1133_ = lean_nat_add(v___x_1131_, v___x_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = lp_lean_x2dftml_LeanFtml_galleryScan(v_src_1128_, v_toks_1129_, v___x_1130_, v___x_1133_);
lean_dec(v___x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRule(lean_object* v_st_1136_){
_start:
{
lean_object* v___f_1137_; lean_object* v___x_1138_; 
v___f_1137_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRule___closed__0));
v___x_1138_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1136_, v___f_1137_);
return v___x_1138_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NextRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_MiddleRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_Middle2Rules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_TokenState(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_FormRawRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ModuleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_NextRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_MiddleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
