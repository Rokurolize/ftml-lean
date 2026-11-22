// Lean compiler output
// Module: LeanFtml.FormRawRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_normSegs(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_intercalateTR___redArg(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_phBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_phBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_phBytes___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseBytes_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_claimText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_claimText___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_claimText___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimText___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimText___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimText(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_findSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_findSub___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_findSub___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSub___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countRun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countRun___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapByteCase(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapByteCase___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_byteCiEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteCiEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isWsByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests_countWs___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitBytes___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(64) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_rawScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawScan___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(64) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawScan___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(64) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_rawScan___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__4;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawScan___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_rawRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_rawRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_rawRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldBody_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldBody(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawoldScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(96) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawoldScan___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_rawoldScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Rawold"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawoldScan___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_rawoldRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_rawoldRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawoldRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[form]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formOpenBytes;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/form]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formCloseBytes;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_formCloserAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formCloserAt___boxed(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_formAfterSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_formAfterSep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_formAfterSep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripFormPlaceholders(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Form"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formProcess_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "blank"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formProcess(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_formRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_formRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_formRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object* v_n_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_5_ = lean_box(0);
v___x_6_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phBytes___closed__0));
v___x_7_ = l_Nat_reprFast(v_n_4_);
v___x_8_ = l_String_toListImpl(v___x_7_);
v___x_9_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_8_, v___x_5_);
v___x_10_ = l_List_appendTR___redArg(v___x_6_, v___x_9_);
v___x_11_ = l_List_appendTR___redArg(v___x_10_, v___x_6_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(lean_object* v_x_12_, lean_object* v_x_13_){
_start:
{
if (lean_obj_tag(v_x_13_) == 0)
{
return v_x_12_;
}
else
{
lean_object* v_head_14_; lean_object* v_tail_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v_head_14_ = lean_ctor_get(v_x_13_, 0);
v_tail_15_ = lean_ctor_get(v_x_13_, 1);
v___x_16_ = lean_unsigned_to_nat(10u);
v___x_17_ = lean_nat_mul(v_x_12_, v___x_16_);
lean_dec(v_x_12_);
v___x_18_ = lean_unsigned_to_nat(48u);
v___x_19_ = lean_nat_sub(v_head_14_, v___x_18_);
v___x_20_ = lean_nat_add(v___x_17_, v___x_19_);
lean_dec(v___x_19_);
lean_dec(v___x_17_);
v_x_12_ = v___x_20_;
v_x_13_ = v_tail_15_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1___boxed(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v_x_22_, v_x_23_);
lean_dec(v_x_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(lean_object* v_l_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
if (lean_obj_tag(v_a_26_) == 0)
{
lean_dec_ref(v_a_27_);
lean_inc(v_l_25_);
return v_l_25_;
}
else
{
lean_object* v_head_28_; lean_object* v_tail_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v_head_28_ = lean_ctor_get(v_a_26_, 0);
lean_inc(v_head_28_);
v_tail_29_ = lean_ctor_get(v_a_26_, 1);
lean_inc(v_tail_29_);
lean_dec_ref_known(v_a_26_, 2);
v___x_30_ = lean_unsigned_to_nat(48u);
v___x_31_ = lean_nat_dec_le(v___x_30_, v_head_28_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; 
lean_dec(v_tail_29_);
lean_dec(v_head_28_);
v___x_32_ = lean_array_to_list(v_a_27_);
return v___x_32_;
}
else
{
lean_object* v___x_33_; uint8_t v___x_34_; 
v___x_33_ = lean_unsigned_to_nat(57u);
v___x_34_ = lean_nat_dec_le(v_head_28_, v___x_33_);
if (v___x_34_ == 0)
{
lean_object* v___x_35_; 
lean_dec(v_tail_29_);
lean_dec(v_head_28_);
v___x_35_ = lean_array_to_list(v_a_27_);
return v___x_35_;
}
else
{
lean_object* v___x_36_; 
v___x_36_ = lean_array_push(v_a_27_, v_head_28_);
v_a_26_ = v_tail_29_;
v_a_27_ = v___x_36_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0___boxed(lean_object* v_l_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(v_l_38_, v_a_39_, v_a_40_);
lean_dec(v_l_38_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder(lean_object* v_bs_44_){
_start:
{
if (lean_obj_tag(v_bs_44_) == 1)
{
lean_object* v_head_45_; lean_object* v_tail_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
v_head_45_ = lean_ctor_get(v_bs_44_, 0);
lean_inc(v_head_45_);
v_tail_46_ = lean_ctor_get(v_bs_44_, 1);
lean_inc(v_tail_46_);
lean_dec_ref_known(v_bs_44_, 2);
v___x_47_ = lean_unsigned_to_nat(255u);
v___x_48_ = lean_nat_dec_eq(v_head_45_, v___x_47_);
lean_dec(v_head_45_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
lean_dec(v_tail_46_);
v___x_49_ = lean_box(0);
return v___x_49_;
}
else
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v_ds_52_; uint8_t v___x_53_; 
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc(v_tail_46_);
v_ds_52_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(v_tail_46_, v_tail_46_, v___x_51_);
v___x_53_ = l_List_isEmpty___redArg(v_ds_52_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = l_List_lengthTR___redArg(v_ds_52_);
v___x_55_ = l_List_drop___redArg(v___x_54_, v_tail_46_);
lean_dec(v_tail_46_);
if (lean_obj_tag(v___x_55_) == 1)
{
lean_object* v_head_56_; lean_object* v_tail_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_68_; 
v_head_56_ = lean_ctor_get(v___x_55_, 0);
v_tail_57_ = lean_ctor_get(v___x_55_, 1);
v_isSharedCheck_68_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_68_ == 0)
{
v___x_59_ = v___x_55_;
v_isShared_60_ = v_isSharedCheck_68_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_tail_57_);
lean_inc(v_head_56_);
lean_dec(v___x_55_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_68_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
uint8_t v___x_61_; 
v___x_61_ = lean_nat_dec_eq(v_head_56_, v___x_47_);
lean_dec(v_head_56_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
lean_del_object(v___x_59_);
lean_dec(v_tail_57_);
lean_dec(v_ds_52_);
v___x_62_ = lean_box(0);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_63_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v___x_50_, v_ds_52_);
lean_dec(v_ds_52_);
if (v_isShared_60_ == 0)
{
lean_ctor_set_tag(v___x_59_, 0);
lean_ctor_set(v___x_59_, 0, v___x_63_);
v___x_65_ = v___x_59_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_63_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v_tail_57_);
v___x_65_ = v_reuseFailAlloc_67_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; 
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
}
}
else
{
lean_object* v___x_69_; 
lean_dec(v___x_55_);
lean_dec(v_ds_52_);
v___x_69_ = lean_box(0);
return v___x_69_;
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_ds_52_);
lean_dec(v_tail_46_);
v___x_70_ = lean_box(0);
return v___x_70_;
}
}
}
else
{
lean_object* v___x_71_; 
lean_dec(v_bs_44_);
v___x_71_ = lean_box(0);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseBytes_go(lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___y_77_; lean_object* v___y_81_; 
if (lean_obj_tag(v_a_72_) == 0)
{
uint8_t v___x_84_; 
lean_dec(v_a_75_);
v___x_84_ = l_List_isEmpty___redArg(v_a_73_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_85_ = l_List_reverse___redArg(v_a_73_);
v___x_86_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___x_85_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
v___x_88_ = lean_box(0);
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___y_81_ = v___x_89_;
goto v___jp_80_;
}
else
{
lean_object* v___x_90_; 
lean_dec(v_a_73_);
v___x_90_ = lean_box(0);
v___y_81_ = v___x_90_;
goto v___jp_80_;
}
}
else
{
lean_object* v_head_91_; lean_object* v_tail_92_; lean_object* v_zero_93_; uint8_t v_isZero_94_; 
v_head_91_ = lean_ctor_get(v_a_72_, 0);
v_tail_92_ = lean_ctor_get(v_a_72_, 1);
v_zero_93_ = lean_unsigned_to_nat(0u);
v_isZero_94_ = lean_nat_dec_eq(v_a_75_, v_zero_93_);
if (v_isZero_94_ == 1)
{
lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_107_; 
lean_dec(v_a_75_);
v_isSharedCheck_107_ = !lean_is_exclusive(v_a_72_);
if (v_isSharedCheck_107_ == 0)
{
lean_object* v_unused_108_; lean_object* v_unused_109_; 
v_unused_108_ = lean_ctor_get(v_a_72_, 1);
lean_dec(v_unused_108_);
v_unused_109_ = lean_ctor_get(v_a_72_, 0);
lean_dec(v_unused_109_);
v___x_96_ = v_a_72_;
v_isShared_97_ = v_isSharedCheck_107_;
goto v_resetjp_95_;
}
else
{
lean_dec(v_a_72_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_107_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
uint8_t v___x_98_; 
v___x_98_ = l_List_isEmpty___redArg(v_a_73_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_99_ = l_List_reverse___redArg(v_a_73_);
v___x_100_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___x_99_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
v___x_102_ = lean_box(0);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 1, v___x_102_);
lean_ctor_set(v___x_96_, 0, v___x_101_);
v___x_104_ = v___x_96_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_101_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
v___y_77_ = v___x_104_;
goto v___jp_76_;
}
}
else
{
lean_object* v___x_106_; 
lean_del_object(v___x_96_);
lean_dec(v_a_73_);
v___x_106_ = lean_box(0);
v___y_77_ = v___x_106_;
goto v___jp_76_;
}
}
}
else
{
lean_object* v_one_110_; lean_object* v_n_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
lean_inc(v_tail_92_);
lean_inc(v_head_91_);
v_one_110_ = lean_unsigned_to_nat(1u);
v_n_111_ = lean_nat_sub(v_a_75_, v_one_110_);
lean_dec(v_a_75_);
v___x_112_ = lean_unsigned_to_nat(255u);
v___x_113_ = lean_nat_dec_eq(v_head_91_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_121_; 
v_isSharedCheck_121_ = !lean_is_exclusive(v_a_72_);
if (v_isSharedCheck_121_ == 0)
{
lean_object* v_unused_122_; lean_object* v_unused_123_; 
v_unused_122_ = lean_ctor_get(v_a_72_, 1);
lean_dec(v_unused_122_);
v_unused_123_ = lean_ctor_get(v_a_72_, 0);
lean_dec(v_unused_123_);
v___x_115_ = v_a_72_;
v_isShared_116_ = v_isSharedCheck_121_;
goto v_resetjp_114_;
}
else
{
lean_dec(v_a_72_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_121_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_a_73_);
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_head_91_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v_a_73_);
v___x_118_ = v_reuseFailAlloc_120_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
v_a_72_ = v_tail_92_;
v_a_73_ = v___x_118_;
v_a_75_ = v_n_111_;
goto _start;
}
}
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lp_lean_x2dftml_LeanFtml_readPlaceholder(v_a_72_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_125_, 0, v_head_91_);
lean_ctor_set(v___x_125_, 1, v_a_73_);
v_a_72_ = v_tail_92_;
v_a_73_ = v___x_125_;
v_a_75_ = v_n_111_;
goto _start;
}
else
{
lean_object* v_val_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_154_; 
lean_dec(v_tail_92_);
lean_dec(v_head_91_);
v_val_127_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_154_ == 0)
{
v___x_129_ = v___x_124_;
v_isShared_130_ = v_isSharedCheck_154_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_val_127_);
lean_dec(v___x_124_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_154_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v_fst_131_; lean_object* v_snd_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_153_; 
v_fst_131_ = lean_ctor_get(v_val_127_, 0);
v_snd_132_ = lean_ctor_get(v_val_127_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v_val_127_);
if (v_isSharedCheck_153_ == 0)
{
v___x_134_ = v_val_127_;
v_isShared_135_ = v_isSharedCheck_153_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_snd_132_);
lean_inc(v_fst_131_);
lean_dec(v_val_127_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_153_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___y_138_; uint8_t v___x_148_; 
v___x_136_ = lean_box(0);
v___x_148_ = l_List_isEmpty___redArg(v_a_73_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_149_ = l_List_reverse___redArg(v_a_73_);
v___x_150_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
v___x_152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v___x_136_);
v___y_138_ = v___x_152_;
goto v___jp_137_;
}
else
{
lean_dec(v_a_73_);
v___y_138_ = v___x_136_;
goto v___jp_137_;
}
v___jp_137_:
{
lean_object* v___x_139_; lean_object* v___x_141_; 
v___x_139_ = l_List_appendTR___redArg(v_a_74_, v___y_138_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 0, v_fst_131_);
v___x_141_ = v___x_129_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_fst_131_);
v___x_141_ = v_reuseFailAlloc_147_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_143_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set_tag(v___x_134_, 1);
lean_ctor_set(v___x_134_, 1, v___x_136_);
lean_ctor_set(v___x_134_, 0, v___x_141_);
v___x_143_ = v___x_134_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v___x_136_);
v___x_143_ = v_reuseFailAlloc_146_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; 
v___x_144_ = l_List_appendTR___redArg(v___x_139_, v___x_143_);
v_a_72_ = v_snd_132_;
v_a_73_ = v___x_136_;
v_a_74_ = v___x_144_;
v_a_75_ = v_n_111_;
goto _start;
}
}
}
}
}
}
}
}
}
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = l_List_appendTR___redArg(v_a_74_, v___y_77_);
v___x_79_ = lp_lean_x2dftml_LeanFtml_normSegs(v___x_78_);
return v___x_79_;
}
v___jp_80_:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = l_List_appendTR___redArg(v_a_74_, v___y_81_);
v___x_83_ = lp_lean_x2dftml_LeanFtml_normSegs(v___x_82_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object* v_bs_155_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_156_ = lean_box(0);
v___x_157_ = l_List_lengthTR___redArg(v_bs_155_);
v___x_158_ = lean_unsigned_to_nat(1u);
v___x_159_ = lean_nat_add(v___x_157_, v___x_158_);
lean_dec(v___x_157_);
v___x_160_ = lp_lean_x2dftml_LeanFtml_parseBytes_go(v_bs_155_, v___x_156_, v___x_156_, v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object* v_st_161_, lean_object* v_f_162_){
_start:
{
lean_object* v_work_163_; lean_object* v_tokens_164_; lean_object* v_doc_165_; uint8_t v_fatal_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_178_; 
v_work_163_ = lean_ctor_get(v_st_161_, 0);
v_tokens_164_ = lean_ctor_get(v_st_161_, 1);
v_doc_165_ = lean_ctor_get(v_st_161_, 2);
v_fatal_166_ = lean_ctor_get_uint8(v_st_161_, sizeof(void*)*3);
v_isSharedCheck_178_ = !lean_is_exclusive(v_st_161_);
if (v_isSharedCheck_178_ == 0)
{
v___x_168_ = v_st_161_;
v_isShared_169_ = v_isSharedCheck_178_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_doc_165_);
lean_inc(v_tokens_164_);
lean_inc(v_work_163_);
lean_dec(v_st_161_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_178_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v_fst_172_; lean_object* v_snd_173_; lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_170_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_163_);
v___x_171_ = lean_apply_2(v_f_162_, v___x_170_, v_tokens_164_);
v_fst_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_fst_172_);
v_snd_173_ = lean_ctor_get(v___x_171_, 1);
lean_inc(v_snd_173_);
lean_dec_ref(v___x_171_);
v___x_174_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_172_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 1, v_snd_173_);
lean_ctor_set(v___x_168_, 0, v___x_174_);
v___x_176_ = v___x_168_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v_snd_173_);
lean_ctor_set(v_reuseFailAlloc_177_, 2, v_doc_165_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*3, v_fatal_166_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object* v_bs_179_){
_start:
{
lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_180_ = lean_unsigned_to_nat(255u);
v___x_181_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_180_, v_bs_179_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_bs_179_);
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
else
{
lean_object* v___x_184_; 
v___x_184_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_184_, 0, v_bs_179_);
return v___x_184_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimText___closed__1(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimText___closed__0));
v___x_187_ = l_String_toListImpl(v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimText(lean_object* v_rule_188_, lean_object* v_text_189_, lean_object* v_toks_190_){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_191_ = l_List_lengthTR___redArg(v_toks_190_);
v___x_192_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_191_);
v___x_193_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimText___closed__1, &lp_lean_x2dftml_LeanFtml_claimText___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_claimText___closed__1);
v___x_194_ = lp_lean_x2dftml_LeanFtml_textVal(v_text_189_);
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = lean_box(0);
v___x_197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_195_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v_rule_188_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v___x_196_);
v___x_200_ = l_List_appendTR___redArg(v_toks_190_, v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_192_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_202_) == 0)
{
if (lean_obj_tag(v_x_203_) == 0)
{
uint8_t v___x_204_; 
v___x_204_ = 1;
return v___x_204_;
}
else
{
uint8_t v___x_205_; 
v___x_205_ = 0;
return v___x_205_;
}
}
else
{
if (lean_obj_tag(v_x_203_) == 0)
{
uint8_t v___x_206_; 
v___x_206_ = 0;
return v___x_206_;
}
else
{
lean_object* v_head_207_; lean_object* v_tail_208_; lean_object* v_head_209_; lean_object* v_tail_210_; uint8_t v___x_211_; 
v_head_207_ = lean_ctor_get(v_x_202_, 0);
v_tail_208_ = lean_ctor_get(v_x_202_, 1);
v_head_209_ = lean_ctor_get(v_x_203_, 0);
v_tail_210_ = lean_ctor_get(v_x_203_, 1);
v___x_211_ = lean_nat_dec_eq(v_head_207_, v_head_209_);
if (v___x_211_ == 0)
{
return v___x_211_;
}
else
{
v_x_202_ = v_tail_208_;
v_x_203_ = v_tail_210_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0___boxed(lean_object* v_x_213_, lean_object* v_x_214_){
_start:
{
uint8_t v_res_215_; lean_object* v_r_216_; 
v_res_215_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_x_213_, v_x_214_);
lean_dec(v_x_214_);
lean_dec(v_x_213_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object* v_pat_219_, lean_object* v_x_220_){
_start:
{
if (lean_obj_tag(v_x_220_) == 0)
{
uint8_t v___x_221_; 
v___x_221_ = l_List_isEmpty___redArg(v_pat_219_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
v___x_222_ = lean_box(0);
return v___x_222_;
}
else
{
lean_object* v___x_223_; 
v___x_223_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSub___closed__0));
return v___x_223_;
}
}
else
{
lean_object* v_tail_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v_tail_224_ = lean_ctor_get(v_x_220_, 1);
lean_inc(v_tail_224_);
v___x_225_ = l_List_lengthTR___redArg(v_pat_219_);
v___x_226_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc_ref(v_x_220_);
v___x_227_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_x_220_, v_x_220_, v___x_225_, v___x_226_);
lean_dec_ref_known(v_x_220_, 2);
v___x_228_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_227_, v_pat_219_);
lean_dec(v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; 
v___x_229_ = lp_lean_x2dftml_LeanFtml_findSub(v_pat_219_, v_tail_224_);
if (lean_obj_tag(v___x_229_) == 0)
{
return v___x_229_;
}
else
{
lean_object* v_val_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_239_; 
v_val_230_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_239_ == 0)
{
v___x_232_ = v___x_229_;
v_isShared_233_ = v_isSharedCheck_239_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_val_230_);
lean_dec(v___x_229_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_239_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_237_; 
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = lean_nat_add(v_val_230_, v___x_234_);
lean_dec(v_val_230_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 0, v___x_235_);
v___x_237_ = v___x_232_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_235_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
else
{
lean_object* v___x_240_; 
lean_dec(v_tail_224_);
v___x_240_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSub___closed__0));
return v___x_240_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSub___boxed(lean_object* v_pat_241_, lean_object* v_x_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = lp_lean_x2dftml_LeanFtml_findSub(v_pat_241_, v_x_242_);
lean_dec(v_pat_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countRun(lean_object* v_b_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_245_) == 0)
{
lean_object* v___x_246_; 
v___x_246_ = lean_unsigned_to_nat(0u);
return v___x_246_;
}
else
{
lean_object* v_head_247_; lean_object* v_tail_248_; uint8_t v___x_249_; 
v_head_247_ = lean_ctor_get(v_x_245_, 0);
v_tail_248_ = lean_ctor_get(v_x_245_, 1);
v___x_249_ = lean_nat_dec_eq(v_head_247_, v_b_244_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; 
v___x_250_ = lean_unsigned_to_nat(0u);
return v___x_250_;
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_251_ = lp_lean_x2dftml_LeanFtml_countRun(v_b_244_, v_tail_248_);
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = lean_nat_add(v___x_251_, v___x_252_);
lean_dec(v___x_251_);
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countRun___boxed(lean_object* v_b_254_, lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = lp_lean_x2dftml_LeanFtml_countRun(v_b_254_, v_x_255_);
lean_dec(v_x_255_);
lean_dec(v_b_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapByteCase(lean_object* v_b_257_){
_start:
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = lean_unsigned_to_nat(97u);
v___x_266_ = lean_nat_dec_le(v___x_265_, v_b_257_);
if (v___x_266_ == 0)
{
goto v___jp_258_;
}
else
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(122u);
v___x_268_ = lean_nat_dec_le(v_b_257_, v___x_267_);
if (v___x_268_ == 0)
{
goto v___jp_258_;
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_unsigned_to_nat(32u);
v___x_270_ = lean_nat_sub(v_b_257_, v___x_269_);
return v___x_270_;
}
}
v___jp_258_:
{
lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_unsigned_to_nat(65u);
v___x_260_ = lean_nat_dec_le(v___x_259_, v_b_257_);
if (v___x_260_ == 0)
{
lean_inc(v_b_257_);
return v_b_257_;
}
else
{
lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_261_ = lean_unsigned_to_nat(90u);
v___x_262_ = lean_nat_dec_le(v_b_257_, v___x_261_);
if (v___x_262_ == 0)
{
lean_inc(v_b_257_);
return v_b_257_;
}
else
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(32u);
v___x_264_ = lean_nat_add(v_b_257_, v___x_263_);
return v___x_264_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapByteCase___boxed(lean_object* v_b_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = lp_lean_x2dftml_LeanFtml_swapByteCase(v_b_271_);
lean_dec(v_b_271_);
return v_res_272_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_byteCiEq(lean_object* v_x_273_, lean_object* v_lit_274_){
_start:
{
uint8_t v___x_275_; 
v___x_275_ = lean_nat_dec_eq(v_x_273_, v_lit_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = lp_lean_x2dftml_LeanFtml_swapByteCase(v_lit_274_);
v___x_277_ = lean_nat_dec_eq(v_x_273_, v___x_276_);
lean_dec(v___x_276_);
return v___x_277_;
}
else
{
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteCiEq___boxed(lean_object* v_x_278_, lean_object* v_lit_279_){
_start:
{
uint8_t v_res_280_; lean_object* v_r_281_; 
v_res_280_ = lp_lean_x2dftml_LeanFtml_byteCiEq(v_x_278_, v_lit_279_);
lean_dec(v_lit_279_);
lean_dec(v_x_278_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object* v_x_282_, lean_object* v_x_283_){
_start:
{
if (lean_obj_tag(v_x_282_) == 0)
{
lean_object* v___x_284_; 
v___x_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_284_, 0, v_x_283_);
return v___x_284_;
}
else
{
if (lean_obj_tag(v_x_283_) == 0)
{
lean_object* v___x_285_; 
v___x_285_ = lean_box(0);
return v___x_285_;
}
else
{
lean_object* v_head_286_; lean_object* v_tail_287_; lean_object* v_head_288_; lean_object* v_tail_289_; uint8_t v___x_290_; 
v_head_286_ = lean_ctor_get(v_x_282_, 0);
v_tail_287_ = lean_ctor_get(v_x_282_, 1);
v_head_288_ = lean_ctor_get(v_x_283_, 0);
lean_inc(v_head_288_);
v_tail_289_ = lean_ctor_get(v_x_283_, 1);
lean_inc(v_tail_289_);
lean_dec_ref_known(v_x_283_, 2);
v___x_290_ = lp_lean_x2dftml_LeanFtml_byteCiEq(v_head_288_, v_head_286_);
lean_dec(v_head_288_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; 
lean_dec(v_tail_289_);
v___x_291_ = lean_box(0);
return v___x_291_;
}
else
{
v_x_282_ = v_tail_287_;
v_x_283_ = v_tail_289_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI___boxed(lean_object* v_x_293_, lean_object* v_x_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_x_293_, v_x_294_);
lean_dec(v_x_293_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object* v_x_296_, lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_296_) == 0)
{
lean_object* v___x_298_; 
v___x_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_298_, 0, v_x_297_);
return v___x_298_;
}
else
{
if (lean_obj_tag(v_x_297_) == 0)
{
lean_object* v___x_299_; 
v___x_299_ = lean_box(0);
return v___x_299_;
}
else
{
lean_object* v_head_300_; lean_object* v_tail_301_; lean_object* v_head_302_; lean_object* v_tail_303_; uint8_t v___x_304_; 
v_head_300_ = lean_ctor_get(v_x_296_, 0);
v_tail_301_ = lean_ctor_get(v_x_296_, 1);
v_head_302_ = lean_ctor_get(v_x_297_, 0);
lean_inc(v_head_302_);
v_tail_303_ = lean_ctor_get(v_x_297_, 1);
lean_inc(v_tail_303_);
lean_dec_ref_known(v_x_297_, 2);
v___x_304_ = lean_nat_dec_eq(v_head_302_, v_head_300_);
lean_dec(v_head_302_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; 
lean_dec(v_tail_303_);
v___x_305_ = lean_box(0);
return v___x_305_;
}
else
{
v_x_296_ = v_tail_301_;
v_x_297_ = v_tail_303_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes___boxed(lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v_x_307_, v_x_308_);
lean_dec(v_x_307_);
return v_res_309_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object* v_b_310_){
_start:
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(32u);
v___x_312_ = lean_nat_dec_eq(v_b_310_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_313_ = lean_unsigned_to_nat(9u);
v___x_314_ = lean_nat_dec_eq(v_b_310_, v___x_313_);
if (v___x_314_ == 0)
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = lean_unsigned_to_nat(10u);
v___x_316_ = lean_nat_dec_eq(v_b_310_, v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_unsigned_to_nat(11u);
v___x_318_ = lean_nat_dec_eq(v_b_310_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_319_ = lean_unsigned_to_nat(12u);
v___x_320_ = lean_nat_dec_eq(v_b_310_, v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(13u);
v___x_322_ = lean_nat_dec_eq(v_b_310_, v___x_321_);
return v___x_322_;
}
else
{
return v___x_320_;
}
}
else
{
return v___x_318_;
}
}
else
{
return v___x_316_;
}
}
else
{
return v___x_314_;
}
}
else
{
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isWsByte___boxed(lean_object* v_b_323_){
_start:
{
uint8_t v_res_324_; lean_object* v_r_325_; 
v_res_324_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_b_323_);
lean_dec(v_b_323_);
v_r_325_ = lean_box(v_res_324_);
return v_r_325_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(lean_object* v_a_326_){
_start:
{
if (lean_obj_tag(v_a_326_) == 0)
{
lean_object* v___x_327_; 
v___x_327_ = lean_unsigned_to_nat(0u);
return v___x_327_;
}
else
{
lean_object* v_head_328_; lean_object* v_tail_329_; uint8_t v___x_330_; 
v_head_328_ = lean_ctor_get(v_a_326_, 0);
v_tail_329_ = lean_ctor_get(v_a_326_, 1);
v___x_330_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_328_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
v___x_331_ = lean_unsigned_to_nat(0u);
return v___x_331_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(v_tail_329_);
v___x_333_ = lean_unsigned_to_nat(1u);
v___x_334_ = lean_nat_add(v___x_332_, v___x_333_);
lean_dec(v___x_332_);
return v___x_334_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests_countWs___boxed(lean_object* v_a_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(v_a_335_);
lean_dec(v_a_335_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1(lean_object* v_src_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
if (lean_obj_tag(v_a_338_) == 0)
{
lean_object* v___x_340_; 
v___x_340_ = l_List_reverse___redArg(v_a_339_);
return v___x_340_;
}
else
{
lean_object* v_head_341_; lean_object* v_tail_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_353_; 
v_head_341_ = lean_ctor_get(v_a_338_, 0);
v_tail_342_ = lean_ctor_get(v_a_338_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_a_338_);
if (v_isSharedCheck_353_ == 0)
{
v___x_344_ = v_a_338_;
v_isShared_345_ = v_isSharedCheck_353_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_tail_342_);
lean_inc(v_head_341_);
lean_dec(v_a_338_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_353_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_350_; 
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = lean_nat_add(v_head_341_, v___x_346_);
lean_dec(v_head_341_);
v___x_348_ = l_List_drop___redArg(v___x_347_, v_src_337_);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 1, v_a_339_);
lean_ctor_set(v___x_344_, 0, v___x_348_);
v___x_350_ = v___x_344_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_348_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_a_339_);
v___x_350_ = v_reuseFailAlloc_352_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
v_a_338_ = v_tail_342_;
v_a_339_ = v___x_350_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1___boxed(lean_object* v_src_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1(v_src_354_, v_a_355_, v_a_356_);
lean_dec(v_src_354_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0(lean_object* v_run_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
if (lean_obj_tag(v_a_361_) == 0)
{
lean_object* v___x_363_; 
v___x_363_ = l_List_reverse___redArg(v_a_362_);
return v___x_363_;
}
else
{
lean_object* v_head_364_; lean_object* v_tail_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_377_; 
v_head_364_ = lean_ctor_get(v_a_361_, 0);
v_tail_365_ = lean_ctor_get(v_a_361_, 1);
v_isSharedCheck_377_ = !lean_is_exclusive(v_a_361_);
if (v_isSharedCheck_377_ == 0)
{
v___x_367_ = v_a_361_;
v_isShared_368_ = v_isSharedCheck_377_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_tail_365_);
lean_inc(v_head_364_);
lean_dec(v_a_361_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_377_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
lean_inc(v_head_364_);
v___x_369_ = l_List_get_x3fInternal___redArg(v_run_360_, v_head_364_);
v___x_370_ = ((lean_object*)(lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0));
v___x_371_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_369_, v___x_370_);
lean_dec(v___x_369_);
if (v___x_371_ == 0)
{
lean_del_object(v___x_367_);
lean_dec(v_head_364_);
v_a_361_ = v_tail_365_;
goto _start;
}
else
{
lean_object* v___x_374_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v_a_362_);
v___x_374_ = v___x_367_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_head_364_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v_a_362_);
v___x_374_ = v_reuseFailAlloc_376_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
v_a_361_ = v_tail_365_;
v_a_362_ = v___x_374_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___boxed(lean_object* v_run_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0(v_run_378_, v_a_379_, v_a_380_);
lean_dec(v_run_378_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests(lean_object* v_src_382_){
_start:
{
lean_object* v_runLen_383_; lean_object* v___x_384_; lean_object* v_run_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v_nlIdx_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v_runLen_383_ = lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(v_src_382_);
v___x_384_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc(v_runLen_383_);
lean_inc(v_src_382_);
v_run_385_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_382_, v_src_382_, v_runLen_383_, v___x_384_);
v___x_386_ = l_List_range(v_runLen_383_);
v___x_387_ = lean_box(0);
v_nlIdx_388_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0(v_run_385_, v___x_386_, v___x_387_);
lean_dec(v_run_385_);
v___x_389_ = l_List_reverse___redArg(v_nlIdx_388_);
v___x_390_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1(v_src_382_, v___x_389_, v___x_387_);
lean_dec(v_src_382_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitBytes(lean_object* v_b_391_, lean_object* v_x_392_){
_start:
{
if (lean_obj_tag(v_x_392_) == 0)
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = lean_box(0);
v___x_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_394_, 0, v_x_392_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
return v___x_394_;
}
else
{
lean_object* v_head_395_; lean_object* v_tail_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_420_; 
v_head_395_ = lean_ctor_get(v_x_392_, 0);
v_tail_396_ = lean_ctor_get(v_x_392_, 1);
v_isSharedCheck_420_ = !lean_is_exclusive(v_x_392_);
if (v_isSharedCheck_420_ == 0)
{
v___x_398_ = v_x_392_;
v_isShared_399_ = v_isSharedCheck_420_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_tail_396_);
lean_inc(v_head_395_);
lean_dec(v_x_392_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_420_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_400_; lean_object* v_head_401_; lean_object* v_tail_402_; uint8_t v___x_403_; 
v___x_400_ = lp_lean_x2dftml_LeanFtml_splitBytes(v_b_391_, v_tail_396_);
v_head_401_ = lean_ctor_get(v___x_400_, 0);
v_tail_402_ = lean_ctor_get(v___x_400_, 1);
v___x_403_ = lean_nat_dec_eq(v_head_395_, v_b_391_);
if (v___x_403_ == 0)
{
lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_413_; 
lean_inc(v_tail_402_);
lean_inc(v_head_401_);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; lean_object* v_unused_415_; 
v_unused_414_ = lean_ctor_get(v___x_400_, 1);
lean_dec(v_unused_414_);
v_unused_415_ = lean_ctor_get(v___x_400_, 0);
lean_dec(v_unused_415_);
v___x_405_ = v___x_400_;
v_isShared_406_ = v_isSharedCheck_413_;
goto v_resetjp_404_;
}
else
{
lean_dec(v___x_400_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_413_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 1, v_head_401_);
lean_ctor_set(v___x_405_, 0, v_head_395_);
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_head_395_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_head_401_);
v___x_408_ = v_reuseFailAlloc_412_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
lean_object* v___x_410_; 
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 1, v_tail_402_);
lean_ctor_set(v___x_398_, 0, v___x_408_);
v___x_410_ = v___x_398_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_408_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_tail_402_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
else
{
lean_object* v___x_416_; lean_object* v___x_418_; 
lean_dec(v_head_395_);
v___x_416_ = lean_box(0);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 1, v___x_400_);
lean_ctor_set(v___x_398_, 0, v___x_416_);
v___x_418_ = v___x_398_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v___x_400_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitBytes___boxed(lean_object* v_b_421_, lean_object* v_x_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = lp_lean_x2dftml_LeanFtml_splitBytes(v_b_421_, v_x_422_);
lean_dec(v_b_421_);
return v_res_423_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rawScan___closed__4(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_433_ = lean_unsigned_to_nat(64u);
v___x_434_ = lean_unsigned_to_nat(3u);
v___x_435_ = l_List_replicateTR___redArg(v___x_434_, v___x_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawScan(lean_object* v_prev_439_, lean_object* v_src_440_, lean_object* v_toks_441_, lean_object* v_x_442_){
_start:
{
lean_object* v___y_447_; lean_object* v___y_448_; lean_object* v___y_449_; lean_object* v___y_450_; lean_object* v_zero_454_; uint8_t v_isZero_455_; 
v_zero_454_ = lean_unsigned_to_nat(0u);
v_isZero_455_ = lean_nat_dec_eq(v_x_442_, v_zero_454_);
if (v_isZero_455_ == 1)
{
lean_dec(v_src_440_);
goto v___jp_443_;
}
else
{
if (lean_obj_tag(v_src_440_) == 0)
{
goto v___jp_443_;
}
else
{
lean_object* v_head_456_; lean_object* v_tail_457_; lean_object* v_one_458_; lean_object* v_n_459_; lean_object* v___x_473_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___y_478_; uint8_t v___x_483_; 
v_head_456_ = lean_ctor_get(v_src_440_, 0);
v_tail_457_ = lean_ctor_get(v_src_440_, 1);
v_one_458_ = lean_unsigned_to_nat(1u);
v_n_459_ = lean_nat_sub(v_x_442_, v_one_458_);
v___x_473_ = lean_unsigned_to_nat(64u);
v___x_483_ = lean_nat_dec_eq(v_head_456_, v___x_473_);
if (v___x_483_ == 0)
{
lean_inc(v_tail_457_);
lean_inc(v_head_456_);
lean_dec_ref_known(v_src_440_, 2);
goto v___jp_460_;
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___y_487_; lean_object* v___y_488_; lean_object* v___y_501_; lean_object* v___y_502_; lean_object* v___y_503_; lean_object* v___y_504_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; uint8_t v___x_539_; 
v___x_484_ = l_List_head_x3f___redArg(v_tail_457_);
v___x_485_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__0));
v___x_539_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_484_, v___x_485_);
lean_dec(v___x_484_);
if (v___x_539_ == 0)
{
lean_inc(v_tail_457_);
lean_inc(v_head_456_);
lean_dec_ref_known(v_src_440_, 2);
goto v___jp_460_;
}
else
{
uint8_t v___x_540_; 
v___x_540_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_439_, v___x_485_);
if (v___x_540_ == 0)
{
lean_object* v_run_541_; lean_object* v_afterRun_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_751_; 
v_run_541_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_473_, v_src_440_);
lean_inc(v_run_541_);
v_afterRun_542_ = l_List_drop___redArg(v_run_541_, v_src_440_);
v_isSharedCheck_751_ = !lean_is_exclusive(v_src_440_);
if (v_isSharedCheck_751_ == 0)
{
lean_object* v_unused_752_; lean_object* v_unused_753_; 
v_unused_752_ = lean_ctor_get(v_src_440_, 1);
lean_dec(v_unused_752_);
v_unused_753_ = lean_ctor_get(v_src_440_, 0);
lean_dec(v_unused_753_);
v___x_544_ = v_src_440_;
v_isShared_545_ = v_isSharedCheck_751_;
goto v_resetjp_543_;
}
else
{
lean_dec(v_src_440_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_751_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; lean_object* v___y_548_; lean_object* v___y_549_; lean_object* v___y_550_; lean_object* v___y_551_; lean_object* v___y_552_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v___y_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_586_; lean_object* v___y_587_; lean_object* v___y_588_; lean_object* v___y_589_; lean_object* v___y_590_; lean_object* v___y_591_; lean_object* v___y_592_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; uint8_t v___y_651_; uint8_t v___x_705_; uint8_t v___y_707_; 
v___x_546_ = lean_unsigned_to_nat(2u);
v___x_705_ = lean_nat_dec_lt(v___x_546_, v_run_541_);
if (v___x_705_ == 0)
{
v___y_707_ = v___x_539_;
goto v___jp_706_;
}
else
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__3));
lean_inc(v_afterRun_542_);
v___x_743_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_742_, v_afterRun_542_);
if (lean_obj_tag(v___x_743_) == 0)
{
v___y_707_ = v___x_540_;
goto v___jp_706_;
}
else
{
lean_object* v_val_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_val_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_val_744_);
lean_dec_ref_known(v___x_743_, 1);
v___x_745_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__5));
lean_inc(v_afterRun_542_);
v___x_746_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_745_, v_afterRun_542_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_dec(v_val_744_);
v___y_707_ = v___x_539_;
goto v___jp_706_;
}
else
{
lean_object* v_val_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v_val_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_val_747_);
lean_dec_ref_known(v___x_746_, 1);
v___x_748_ = lean_unsigned_to_nat(4u);
v___x_749_ = lean_nat_dec_lt(v_run_541_, v___x_748_);
if (v___x_749_ == 0)
{
uint8_t v___x_750_; 
v___x_750_ = lean_nat_dec_lt(v_val_744_, v_val_747_);
lean_dec(v_val_747_);
lean_dec(v_val_744_);
v___y_707_ = v___x_750_;
goto v___jp_706_;
}
else
{
lean_dec(v_val_747_);
lean_dec(v_val_744_);
v___y_707_ = v___x_539_;
goto v___jp_706_;
}
}
}
}
v___jp_547_:
{
uint8_t v___x_553_; 
v___x_553_ = l_List_isEmpty___redArg(v___y_551_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; uint8_t v___x_555_; 
lean_del_object(v___x_544_);
v___x_554_ = lean_nat_sub(v_run_541_, v___x_546_);
lean_dec(v_run_541_);
v___x_555_ = lean_nat_dec_eq(v___x_554_, v_one_458_);
lean_dec(v___x_554_);
if (v___x_555_ == 0)
{
v___y_501_ = v___y_549_;
v___y_502_ = v___y_551_;
v___y_503_ = v___y_552_;
v___y_504_ = v___y_548_;
goto v___jp_500_;
}
else
{
lean_dec(v___y_548_);
lean_inc(v___y_550_);
v___y_501_ = v___y_549_;
v___y_502_ = v___y_551_;
v___y_503_ = v___y_552_;
v___y_504_ = v___y_550_;
goto v___jp_500_;
}
}
else
{
lean_object* v___x_556_; lean_object* v_fst_557_; lean_object* v_snd_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_570_; 
lean_dec(v___y_551_);
lean_dec(v___y_548_);
lean_dec(v_run_541_);
v___x_556_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v___y_549_, v_toks_441_, v_n_459_);
lean_dec(v_n_459_);
v_fst_557_ = lean_ctor_get(v___x_556_, 0);
v_snd_558_ = lean_ctor_get(v___x_556_, 1);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_570_ == 0)
{
v___x_560_ = v___x_556_;
v_isShared_561_ = v_isSharedCheck_570_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_snd_558_);
lean_inc(v_fst_557_);
lean_dec(v___x_556_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_570_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_562_ = lean_unsigned_to_nat(32u);
v___x_563_ = l_List_appendTR___redArg(v___y_552_, v_fst_557_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 1, v___x_563_);
lean_ctor_set(v___x_544_, 0, v___x_562_);
v___x_565_ = v___x_544_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v___x_563_);
v___x_565_ = v_reuseFailAlloc_569_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
lean_object* v___x_567_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_565_);
v___x_567_ = v___x_560_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v_snd_558_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
}
v___jp_571_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v_trimmed_579_; uint8_t v___x_580_; 
v___x_577_ = lean_array_mk(v___y_575_);
v___x_578_ = lean_array_pop(v___x_577_);
v_trimmed_579_ = lean_array_to_list(v___x_578_);
v___x_580_ = lean_nat_dec_lt(v___x_546_, v___y_572_);
if (v___x_580_ == 0)
{
lean_dec(v___y_572_);
lean_inc(v___y_573_);
v___y_548_ = v___y_573_;
v___y_549_ = v___y_574_;
v___y_550_ = v___y_576_;
v___y_551_ = v_trimmed_579_;
v___y_552_ = v___y_573_;
goto v___jp_547_;
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_581_ = lean_unsigned_to_nat(32u);
v___x_582_ = lean_nat_sub(v___y_572_, v___x_546_);
lean_dec(v___y_572_);
v___x_583_ = l_List_replicateTR___redArg(v___x_582_, v___x_473_);
v___x_584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_581_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___y_548_ = v___y_573_;
v___y_549_ = v___y_574_;
v___y_550_ = v___y_576_;
v___y_551_ = v_trimmed_579_;
v___y_552_ = v___x_584_;
goto v___jp_547_;
}
}
v___jp_585_:
{
uint8_t v___x_593_; 
v___x_593_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___y_589_, v___y_591_);
if (v___x_593_ == 0)
{
uint8_t v___x_594_; 
lean_dec(v_afterRun_542_);
v___x_594_ = l_List_isEmpty___redArg(v___y_591_);
if (v___x_594_ == 0)
{
lean_object* v_lead_595_; lean_object* v_trail_596_; uint8_t v___x_597_; 
v_lead_595_ = lean_nat_sub(v_run_541_, v___x_546_);
lean_dec(v_run_541_);
v_trail_596_ = lean_nat_sub(v___y_588_, v___x_546_);
lean_dec(v___y_588_);
v___x_597_ = lean_nat_dec_le(v___x_546_, v_lead_595_);
if (v___x_597_ == 0)
{
uint8_t v___x_598_; 
v___x_598_ = lean_nat_dec_le(v___x_546_, v_trail_596_);
if (v___x_598_ == 0)
{
uint8_t v___x_599_; 
v___x_599_ = lean_nat_dec_eq(v_lead_595_, v_one_458_);
lean_dec(v_lead_595_);
if (v___x_599_ == 0)
{
lean_inc(v___y_587_);
v___y_523_ = v___y_587_;
v___y_524_ = v___y_590_;
v___y_525_ = v___y_591_;
v___y_526_ = v___y_592_;
v___y_527_ = v_one_458_;
v___y_528_ = v_trail_596_;
v___y_529_ = v___y_587_;
goto v___jp_522_;
}
else
{
lean_inc(v___y_592_);
v___y_523_ = v___y_587_;
v___y_524_ = v___y_590_;
v___y_525_ = v___y_591_;
v___y_526_ = v___y_592_;
v___y_527_ = v_one_458_;
v___y_528_ = v_trail_596_;
v___y_529_ = v___y_592_;
goto v___jp_522_;
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v_fst_602_; lean_object* v_snd_603_; lean_object* v___x_604_; lean_object* v_fst_605_; lean_object* v_snd_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_616_; 
lean_dec(v_lead_595_);
lean_dec(v___y_587_);
v___x_600_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_601_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_600_, v___y_591_, v_toks_441_);
v_fst_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_fst_602_);
v_snd_603_ = lean_ctor_get(v___x_601_, 1);
lean_inc(v_snd_603_);
lean_dec_ref(v___x_601_);
v___x_604_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v___y_590_, v_snd_603_, v_n_459_);
lean_dec(v_n_459_);
v_fst_605_ = lean_ctor_get(v___x_604_, 0);
v_snd_606_ = lean_ctor_get(v___x_604_, 1);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_616_ == 0)
{
v___x_608_ = v___x_604_;
v_isShared_609_ = v_isSharedCheck_616_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_snd_606_);
lean_inc(v_fst_605_);
lean_dec(v___x_604_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_616_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_610_ = l_List_replicateTR___redArg(v_trail_596_, v___x_473_);
v___x_611_ = l_List_appendTR___redArg(v_fst_602_, v___x_610_);
v___x_612_ = l_List_appendTR___redArg(v___x_611_, v_fst_605_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v___x_612_);
v___x_614_ = v___x_608_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v_snd_606_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
else
{
lean_object* v___x_617_; lean_object* v_fst_618_; lean_object* v_snd_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
lean_dec(v___y_587_);
v___x_617_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v___y_590_, v_toks_441_, v_n_459_);
lean_dec(v_n_459_);
v_fst_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_fst_618_);
v_snd_619_ = lean_ctor_get(v___x_617_, 1);
lean_inc(v_snd_619_);
lean_dec_ref(v___x_617_);
v___x_620_ = lean_nat_sub(v_lead_595_, v___x_546_);
lean_dec(v_lead_595_);
v___x_621_ = l_List_replicateTR___redArg(v___x_620_, v___x_473_);
v___x_622_ = l_List_appendTR___redArg(v___x_621_, v___y_591_);
v___x_623_ = lean_nat_dec_le(v_trail_596_, v_one_458_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; 
v___x_624_ = lean_nat_sub(v_trail_596_, v___x_546_);
lean_dec(v_trail_596_);
v___y_475_ = v_fst_618_;
v___y_476_ = v___x_622_;
v___y_477_ = v_snd_619_;
v___y_478_ = v___x_624_;
goto v___jp_474_;
}
else
{
lean_object* v___x_625_; 
v___x_625_ = lean_nat_add(v_trail_596_, v___x_546_);
lean_dec(v_trail_596_);
v___y_475_ = v_fst_618_;
v___y_476_ = v___x_622_;
v___y_477_ = v_snd_619_;
v___y_478_ = v___x_625_;
goto v___jp_474_;
}
}
}
else
{
lean_object* v_total_626_; uint8_t v___x_627_; 
lean_dec(v___y_591_);
v_total_626_ = lean_nat_add(v_run_541_, v___y_588_);
lean_dec(v___y_588_);
lean_dec(v_run_541_);
v___x_627_ = lean_nat_dec_le(v_total_626_, v___y_586_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; uint8_t v___x_629_; 
lean_dec(v___y_587_);
v___x_628_ = lean_unsigned_to_nat(5u);
v___x_629_ = lean_nat_dec_eq(v_total_626_, v___x_628_);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_nat_sub(v_total_626_, v___y_586_);
lean_dec(v_total_626_);
v___x_631_ = l_List_replicateTR___redArg(v___x_630_, v___x_473_);
v___y_487_ = v___y_590_;
v___y_488_ = v___x_631_;
goto v___jp_486_;
}
else
{
lean_dec(v_total_626_);
lean_inc(v___y_592_);
v___y_487_ = v___y_590_;
v___y_488_ = v___y_592_;
goto v___jp_486_;
}
}
else
{
lean_dec(v_total_626_);
v___y_487_ = v___y_590_;
v___y_488_ = v___y_587_;
goto v___jp_486_;
}
}
}
else
{
lean_object* v___x_632_; lean_object* v_fst_633_; lean_object* v_snd_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_643_; 
lean_dec(v___y_591_);
lean_dec(v___y_590_);
lean_dec(v___y_588_);
lean_dec(v___y_587_);
v___x_632_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v_afterRun_542_, v_toks_441_, v_n_459_);
lean_dec(v_n_459_);
v_fst_633_ = lean_ctor_get(v___x_632_, 0);
v_snd_634_ = lean_ctor_get(v___x_632_, 1);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_643_ == 0)
{
v___x_636_ = v___x_632_;
v_isShared_637_ = v_isSharedCheck_643_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_snd_634_);
lean_inc(v_fst_633_);
lean_dec(v___x_632_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_643_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_641_; 
v___x_638_ = l_List_replicateTR___redArg(v_run_541_, v___x_473_);
v___x_639_ = l_List_appendTR___redArg(v___x_638_, v_fst_633_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_639_);
v___x_641_ = v___x_636_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_639_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_snd_634_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
v___jp_644_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_652_ = l_List_getLast_x3f___redArg(v___y_649_);
v___x_653_ = lean_unsigned_to_nat(10u);
v___x_654_ = ((lean_object*)(lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0));
v___x_655_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_652_, v___x_654_);
lean_dec(v___x_652_);
if (v___x_655_ == 0)
{
lean_del_object(v___x_544_);
v___y_586_ = v___y_645_;
v___y_587_ = v___y_647_;
v___y_588_ = v___y_646_;
v___y_589_ = v___x_653_;
v___y_590_ = v___y_648_;
v___y_591_ = v___y_649_;
v___y_592_ = v___y_650_;
goto v___jp_585_;
}
else
{
uint8_t v___x_656_; 
v___x_656_ = lean_nat_dec_le(v___x_546_, v___y_646_);
if (v___x_656_ == 0)
{
lean_del_object(v___x_544_);
v___y_586_ = v___y_645_;
v___y_587_ = v___y_647_;
v___y_588_ = v___y_646_;
v___y_589_ = v___x_653_;
v___y_590_ = v___y_648_;
v___y_591_ = v___y_649_;
v___y_592_ = v___y_650_;
goto v___jp_585_;
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
lean_inc(v___y_649_);
v___x_657_ = lean_array_mk(v___y_649_);
v___x_658_ = lean_array_pop(v___x_657_);
v___x_659_ = lean_array_to_list(v___x_658_);
v___x_660_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_653_, v___x_659_);
lean_dec(v___x_659_);
if (v___x_660_ == 0)
{
lean_dec(v_afterRun_542_);
v___y_572_ = v___y_646_;
v___y_573_ = v___y_647_;
v___y_574_ = v___y_648_;
v___y_575_ = v___y_649_;
v___y_576_ = v___y_650_;
goto v___jp_571_;
}
else
{
if (v___y_651_ == 0)
{
lean_del_object(v___x_544_);
v___y_586_ = v___y_645_;
v___y_587_ = v___y_647_;
v___y_588_ = v___y_646_;
v___y_589_ = v___x_653_;
v___y_590_ = v___y_648_;
v___y_591_ = v___y_649_;
v___y_592_ = v___y_650_;
goto v___jp_585_;
}
else
{
lean_dec(v_afterRun_542_);
v___y_572_ = v___y_646_;
v___y_573_ = v___y_647_;
v___y_574_ = v___y_648_;
v___y_575_ = v___y_649_;
v___y_576_ = v___y_650_;
goto v___jp_571_;
}
}
}
}
}
v___jp_661_:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_662_ = lean_box(0);
v___x_663_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__2));
v___x_664_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__3));
lean_inc(v_afterRun_542_);
v___x_665_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_664_, v_afterRun_542_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v___x_666_; lean_object* v_fst_667_; lean_object* v_snd_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_677_; 
lean_del_object(v___x_544_);
v___x_666_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v_afterRun_542_, v_toks_441_, v_n_459_);
lean_dec(v_n_459_);
v_fst_667_ = lean_ctor_get(v___x_666_, 0);
v_snd_668_ = lean_ctor_get(v___x_666_, 1);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_677_ == 0)
{
v___x_670_ = v___x_666_;
v_isShared_671_ = v_isSharedCheck_677_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_snd_668_);
lean_inc(v_fst_667_);
lean_dec(v___x_666_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_677_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_672_ = l_List_replicateTR___redArg(v_run_541_, v___x_473_);
v___x_673_ = l_List_appendTR___redArg(v___x_672_, v_fst_667_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 0, v___x_673_);
v___x_675_ = v___x_670_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_snd_668_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
lean_object* v_val_678_; lean_object* v___x_679_; lean_object* v_body_680_; lean_object* v_afterBody_681_; lean_object* v_closeRun_682_; lean_object* v_afterClose_683_; lean_object* v___x_684_; uint8_t v___x_685_; 
v_val_678_ = lean_ctor_get(v___x_665_, 0);
lean_inc_n(v_val_678_, 2);
lean_dec_ref_known(v___x_665_, 1);
v___x_679_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc(v_afterRun_542_);
v_body_680_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_afterRun_542_, v_afterRun_542_, v_val_678_, v___x_679_);
v_afterBody_681_ = l_List_drop___redArg(v_val_678_, v_afterRun_542_);
v_closeRun_682_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_473_, v_afterBody_681_);
lean_inc(v_closeRun_682_);
v_afterClose_683_ = l_List_drop___redArg(v_closeRun_682_, v_afterBody_681_);
lean_dec(v_afterBody_681_);
v___x_684_ = lean_unsigned_to_nat(4u);
v___x_685_ = lean_nat_dec_le(v___x_684_, v_run_541_);
if (v___x_685_ == 0)
{
v___y_645_ = v___x_684_;
v___y_646_ = v_closeRun_682_;
v___y_647_ = v___x_662_;
v___y_648_ = v_afterClose_683_;
v___y_649_ = v_body_680_;
v___y_650_ = v___x_663_;
v___y_651_ = v___x_685_;
goto v___jp_644_;
}
else
{
uint8_t v___x_686_; 
v___x_686_ = lean_nat_dec_le(v___x_684_, v_closeRun_682_);
if (v___x_686_ == 0)
{
v___y_645_ = v___x_684_;
v___y_646_ = v_closeRun_682_;
v___y_647_ = v___x_662_;
v___y_648_ = v_afterClose_683_;
v___y_649_ = v_body_680_;
v___y_650_ = v___x_663_;
v___y_651_ = v___x_686_;
goto v___jp_644_;
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v_fst_689_; lean_object* v_snd_690_; lean_object* v___x_691_; lean_object* v_fst_692_; lean_object* v_snd_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_704_; 
lean_dec(v_afterClose_683_);
lean_dec(v_closeRun_682_);
lean_dec(v_body_680_);
lean_del_object(v___x_544_);
v___x_687_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_688_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_687_, v___x_662_, v_toks_441_);
v_fst_689_ = lean_ctor_get(v___x_688_, 0);
lean_inc(v_fst_689_);
v_snd_690_ = lean_ctor_get(v___x_688_, 1);
lean_inc(v_snd_690_);
lean_dec_ref(v___x_688_);
v___x_691_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v_afterRun_542_, v_snd_690_, v_n_459_);
lean_dec(v_n_459_);
v_fst_692_ = lean_ctor_get(v___x_691_, 0);
v_snd_693_ = lean_ctor_get(v___x_691_, 1);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_704_ == 0)
{
v___x_695_ = v___x_691_;
v_isShared_696_ = v_isSharedCheck_704_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_snd_693_);
lean_inc(v_fst_692_);
lean_dec(v___x_691_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_704_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
v___x_697_ = lean_nat_sub(v_run_541_, v___x_684_);
lean_dec(v_run_541_);
v___x_698_ = l_List_replicateTR___redArg(v___x_697_, v___x_473_);
v___x_699_ = l_List_appendTR___redArg(v_fst_689_, v___x_698_);
v___x_700_ = l_List_appendTR___redArg(v___x_699_, v_fst_692_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v___x_700_);
v___x_702_ = v___x_695_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_700_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v_snd_693_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
}
}
v___jp_706_:
{
if (v___x_705_ == 0)
{
goto v___jp_661_;
}
else
{
if (v___y_707_ == 0)
{
lean_object* v___x_708_; uint8_t v___x_709_; 
lean_del_object(v___x_544_);
v___x_708_ = lean_unsigned_to_nat(3u);
v___x_709_ = lean_nat_dec_eq(v_run_541_, v___x_708_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v_fst_713_; lean_object* v_snd_714_; lean_object* v___x_715_; lean_object* v_fst_716_; lean_object* v_snd_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_729_; 
v___x_710_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_711_ = lean_box(0);
v___x_712_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_710_, v___x_711_, v_toks_441_);
v_fst_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_fst_713_);
v_snd_714_ = lean_ctor_get(v___x_712_, 1);
lean_inc(v_snd_714_);
lean_dec_ref(v___x_712_);
v___x_715_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v_afterRun_542_, v_snd_714_, v_n_459_);
lean_dec(v_n_459_);
v_fst_716_ = lean_ctor_get(v___x_715_, 0);
v_snd_717_ = lean_ctor_get(v___x_715_, 1);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_729_ == 0)
{
v___x_719_ = v___x_715_;
v_isShared_720_ = v_isSharedCheck_729_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_snd_717_);
lean_inc(v_fst_716_);
lean_dec(v___x_715_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_729_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_727_; 
v___x_721_ = lean_unsigned_to_nat(4u);
v___x_722_ = lean_nat_sub(v_run_541_, v___x_721_);
lean_dec(v_run_541_);
v___x_723_ = l_List_replicateTR___redArg(v___x_722_, v___x_473_);
v___x_724_ = l_List_appendTR___redArg(v_fst_713_, v___x_723_);
v___x_725_ = l_List_appendTR___redArg(v___x_724_, v_fst_716_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 0, v___x_725_);
v___x_727_ = v___x_719_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_725_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v_snd_717_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
else
{
lean_object* v___x_730_; lean_object* v_fst_731_; lean_object* v_snd_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_741_; 
lean_dec(v_run_541_);
v___x_730_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v_afterRun_542_, v_toks_441_, v_n_459_);
lean_dec(v_n_459_);
v_fst_731_ = lean_ctor_get(v___x_730_, 0);
v_snd_732_ = lean_ctor_get(v___x_730_, 1);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_741_ == 0)
{
v___x_734_ = v___x_730_;
v_isShared_735_ = v_isSharedCheck_741_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_snd_732_);
lean_inc(v_fst_731_);
lean_dec(v___x_730_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_741_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_739_; 
v___x_736_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rawScan___closed__4, &lp_lean_x2dftml_LeanFtml_rawScan___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_rawScan___closed__4);
v___x_737_ = l_List_appendTR___redArg(v___x_736_, v_fst_731_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 0, v___x_737_);
v___x_739_ = v___x_734_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_737_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_snd_732_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
else
{
goto v___jp_661_;
}
}
}
}
}
else
{
lean_inc(v_tail_457_);
lean_inc(v_head_456_);
lean_dec_ref_known(v_src_440_, 2);
goto v___jp_460_;
}
}
v___jp_486_:
{
lean_object* v___x_489_; lean_object* v_fst_490_; lean_object* v_snd_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_499_; 
v___x_489_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v___y_487_, v_toks_441_, v_n_459_);
lean_dec(v_n_459_);
v_fst_490_ = lean_ctor_get(v___x_489_, 0);
v_snd_491_ = lean_ctor_get(v___x_489_, 1);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_499_ == 0)
{
v___x_493_ = v___x_489_;
v_isShared_494_ = v_isSharedCheck_499_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_snd_491_);
lean_inc(v_fst_490_);
lean_dec(v___x_489_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_499_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_495_; lean_object* v___x_497_; 
v___x_495_ = l_List_appendTR___redArg(v___y_488_, v_fst_490_);
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v___x_495_);
v___x_497_ = v___x_493_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___x_495_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_snd_491_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
v___jp_500_:
{
lean_object* v_text_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v_fst_508_; lean_object* v_snd_509_; lean_object* v___x_510_; lean_object* v_fst_511_; lean_object* v_snd_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_521_; 
v_text_505_ = l_List_appendTR___redArg(v___y_504_, v___y_502_);
v___x_506_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_507_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_506_, v_text_505_, v_toks_441_);
v_fst_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_fst_508_);
v_snd_509_ = lean_ctor_get(v___x_507_, 1);
lean_inc(v_snd_509_);
lean_dec_ref(v___x_507_);
v___x_510_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v___y_501_, v_snd_509_, v_n_459_);
lean_dec(v_n_459_);
v_fst_511_ = lean_ctor_get(v___x_510_, 0);
v_snd_512_ = lean_ctor_get(v___x_510_, 1);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_521_ == 0)
{
v___x_514_ = v___x_510_;
v_isShared_515_ = v_isSharedCheck_521_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_snd_512_);
lean_inc(v_fst_511_);
lean_dec(v___x_510_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_521_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_519_; 
v___x_516_ = l_List_appendTR___redArg(v_fst_508_, v___y_503_);
v___x_517_ = l_List_appendTR___redArg(v___x_516_, v_fst_511_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_517_);
v___x_519_ = v___x_514_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v_snd_512_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
v___jp_522_:
{
lean_object* v_text_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v_fst_533_; lean_object* v_snd_534_; lean_object* v___x_535_; lean_object* v_fst_536_; lean_object* v_snd_537_; uint8_t v___x_538_; 
v_text_530_ = l_List_appendTR___redArg(v___y_529_, v___y_525_);
v___x_531_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_532_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_531_, v_text_530_, v_toks_441_);
v_fst_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_fst_533_);
v_snd_534_ = lean_ctor_get(v___x_532_, 1);
lean_inc(v_snd_534_);
lean_dec_ref(v___x_532_);
v___x_535_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_485_, v___y_524_, v_snd_534_, v_n_459_);
lean_dec(v_n_459_);
v_fst_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_fst_536_);
v_snd_537_ = lean_ctor_get(v___x_535_, 1);
lean_inc(v_snd_537_);
lean_dec_ref(v___x_535_);
v___x_538_ = lean_nat_dec_eq(v___y_528_, v___y_527_);
lean_dec(v___y_528_);
if (v___x_538_ == 0)
{
v___y_447_ = v_fst_536_;
v___y_448_ = v_fst_533_;
v___y_449_ = v_snd_537_;
v___y_450_ = v___y_523_;
goto v___jp_446_;
}
else
{
lean_dec(v___y_523_);
lean_inc(v___y_526_);
v___y_447_ = v_fst_536_;
v___y_448_ = v_fst_533_;
v___y_449_ = v_snd_537_;
v___y_450_ = v___y_526_;
goto v___jp_446_;
}
}
}
v___jp_460_:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v_fst_463_; lean_object* v_snd_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_472_; 
lean_inc(v_head_456_);
v___x_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_461_, 0, v_head_456_);
v___x_462_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_461_, v_tail_457_, v_toks_441_, v_n_459_);
lean_dec(v_n_459_);
lean_dec_ref_known(v___x_461_, 1);
v_fst_463_ = lean_ctor_get(v___x_462_, 0);
v_snd_464_ = lean_ctor_get(v___x_462_, 1);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_472_ == 0)
{
v___x_466_ = v___x_462_;
v_isShared_467_ = v_isSharedCheck_472_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_snd_464_);
lean_inc(v_fst_463_);
lean_dec(v___x_462_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_472_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_468_, 0, v_head_456_);
lean_ctor_set(v___x_468_, 1, v_fst_463_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_468_);
v___x_470_ = v___x_466_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v_snd_464_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
v___jp_474_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_479_ = l_List_replicateTR___redArg(v___y_478_, v___x_473_);
v___x_480_ = l_List_appendTR___redArg(v___y_476_, v___x_479_);
v___x_481_ = l_List_appendTR___redArg(v___x_480_, v___y_475_);
v___x_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v___y_477_);
return v___x_482_;
}
}
}
v___jp_443_:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_box(0);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_444_);
lean_ctor_set(v___x_445_, 1, v_toks_441_);
return v___x_445_;
}
v___jp_446_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = l_List_appendTR___redArg(v___y_448_, v___y_450_);
v___x_452_ = l_List_appendTR___redArg(v___x_451_, v___y_447_);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set(v___x_453_, 1, v___y_449_);
return v___x_453_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawScan___boxed(lean_object* v_prev_754_, lean_object* v_src_755_, lean_object* v_toks_756_, lean_object* v_x_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = lp_lean_x2dftml_LeanFtml_rawScan(v_prev_754_, v_src_755_, v_toks_756_, v_x_757_);
lean_dec(v_x_757_);
lean_dec(v_prev_754_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawRule___lam__0(lean_object* v_src_759_, lean_object* v_toks_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_761_ = lean_box(0);
v___x_762_ = l_List_lengthTR___redArg(v_src_759_);
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = lean_nat_add(v___x_762_, v___x_763_);
lean_dec(v___x_762_);
v___x_765_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_761_, v_src_759_, v_toks_760_, v___x_764_);
lean_dec(v___x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawRule(lean_object* v_st_767_){
_start:
{
lean_object* v___f_768_; lean_object* v___x_769_; 
v___f_768_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawRule___closed__0));
v___x_769_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_767_, v___f_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldBody_go(lean_object* v_a_770_, lean_object* v_a_771_){
_start:
{
if (lean_obj_tag(v_a_770_) == 0)
{
lean_object* v___x_772_; 
lean_dec(v_a_771_);
v___x_772_ = lean_box(0);
return v___x_772_;
}
else
{
lean_object* v_head_773_; lean_object* v_tail_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_811_; 
v_head_773_ = lean_ctor_get(v_a_770_, 0);
v_tail_774_ = lean_ctor_get(v_a_770_, 1);
v_isSharedCheck_811_ = !lean_is_exclusive(v_a_770_);
if (v_isSharedCheck_811_ == 0)
{
v___x_776_ = v_a_770_;
v_isShared_777_ = v_isSharedCheck_811_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_tail_774_);
lean_inc(v_head_773_);
lean_dec(v_a_770_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_811_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___y_779_; lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_792_ = lean_unsigned_to_nat(96u);
v___x_793_ = lean_nat_dec_eq(v_head_773_, v___x_792_);
if (v___x_793_ == 0)
{
if (lean_obj_tag(v_tail_774_) == 1)
{
lean_object* v_head_794_; lean_object* v_tail_795_; uint8_t v___x_796_; 
v_head_794_ = lean_ctor_get(v_tail_774_, 0);
v_tail_795_ = lean_ctor_get(v_tail_774_, 1);
lean_inc(v_tail_795_);
v___x_796_ = lean_nat_dec_eq(v_head_794_, v___x_792_);
if (v___x_796_ == 0)
{
lean_dec(v_tail_795_);
goto v___jp_788_;
}
else
{
if (lean_obj_tag(v_tail_795_) == 1)
{
lean_object* v_head_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_808_; 
v_head_797_ = lean_ctor_get(v_tail_795_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v_tail_795_);
if (v_isSharedCheck_808_ == 0)
{
lean_object* v_unused_809_; 
v_unused_809_ = lean_ctor_get(v_tail_795_, 1);
lean_dec(v_unused_809_);
v___x_799_ = v_tail_795_;
v_isShared_800_ = v_isSharedCheck_808_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_head_797_);
lean_dec(v_tail_795_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_808_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
uint8_t v___x_801_; 
v___x_801_ = lean_nat_dec_eq(v_head_797_, v___x_792_);
lean_dec(v_head_797_);
if (v___x_801_ == 0)
{
lean_del_object(v___x_799_);
goto v___jp_790_;
}
else
{
lean_object* v___x_802_; lean_object* v___x_804_; 
lean_dec_ref_known(v_tail_774_, 2);
lean_del_object(v___x_776_);
v___x_802_ = lean_box(0);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 1, v___x_802_);
lean_ctor_set(v___x_799_, 0, v_head_773_);
v___x_804_ = v___x_799_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_head_773_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v___x_802_);
v___x_804_ = v_reuseFailAlloc_807_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = l_List_appendTR___redArg(v_a_771_, v___x_804_);
v___x_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
return v___x_806_;
}
}
}
}
else
{
lean_dec(v_tail_795_);
goto v___jp_790_;
}
}
}
else
{
goto v___jp_788_;
}
}
else
{
lean_object* v___x_810_; 
v___x_810_ = lean_box(0);
v___y_779_ = v___x_810_;
goto v___jp_778_;
}
v___jp_778_:
{
lean_object* v___x_780_; uint8_t v___x_781_; 
v___x_780_ = lean_unsigned_to_nat(39u);
v___x_781_ = lean_nat_dec_eq(v_head_773_, v___x_780_);
if (v___x_781_ == 0)
{
lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_782_ = lean_box(0);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_782_);
v___x_784_ = v___x_776_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_head_773_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v___x_782_);
v___x_784_ = v_reuseFailAlloc_787_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
lean_object* v___x_785_; 
v___x_785_ = l_List_appendTR___redArg(v_a_771_, v___x_784_);
v_a_770_ = v_tail_774_;
v_a_771_ = v___x_785_;
goto _start;
}
}
else
{
lean_del_object(v___x_776_);
lean_dec(v_tail_774_);
lean_dec(v_head_773_);
lean_dec(v_a_771_);
lean_inc(v___y_779_);
return v___y_779_;
}
}
v___jp_788_:
{
lean_object* v___x_789_; 
v___x_789_ = lean_box(0);
v___y_779_ = v___x_789_;
goto v___jp_778_;
}
v___jp_790_:
{
lean_object* v___x_791_; 
v___x_791_ = lean_box(0);
v___y_779_ = v___x_791_;
goto v___jp_778_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldBody(lean_object* v_x_812_){
_start:
{
if (lean_obj_tag(v_x_812_) == 1)
{
lean_object* v_head_813_; lean_object* v_tail_814_; lean_object* v___x_815_; uint8_t v___x_816_; 
v_head_813_ = lean_ctor_get(v_x_812_, 0);
lean_inc(v_head_813_);
v_tail_814_ = lean_ctor_get(v_x_812_, 1);
lean_inc(v_tail_814_);
lean_dec_ref_known(v_x_812_, 2);
v___x_815_ = lean_unsigned_to_nat(96u);
v___x_816_ = lean_nat_dec_eq(v_head_813_, v___x_815_);
lean_dec(v_head_813_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; 
lean_dec(v_tail_814_);
v___x_817_ = lean_box(0);
return v___x_817_;
}
else
{
if (lean_obj_tag(v_tail_814_) == 1)
{
lean_object* v_head_818_; lean_object* v_tail_819_; uint8_t v___x_820_; 
v_head_818_ = lean_ctor_get(v_tail_814_, 0);
lean_inc(v_head_818_);
v_tail_819_ = lean_ctor_get(v_tail_814_, 1);
lean_inc(v_tail_819_);
lean_dec_ref_known(v_tail_814_, 2);
v___x_820_ = lean_nat_dec_eq(v_head_818_, v___x_815_);
lean_dec(v_head_818_);
if (v___x_820_ == 0)
{
lean_object* v___x_821_; 
lean_dec(v_tail_819_);
v___x_821_ = lean_box(0);
return v___x_821_;
}
else
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = lean_box(0);
v___x_823_ = lp_lean_x2dftml_LeanFtml_rawoldBody_go(v_tail_819_, v___x_822_);
return v___x_823_;
}
}
else
{
lean_object* v___x_824_; 
lean_dec(v_tail_814_);
v___x_824_ = lean_box(0);
return v___x_824_;
}
}
}
else
{
lean_object* v___x_825_; 
lean_dec(v_x_812_);
v___x_825_ = lean_box(0);
return v___x_825_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan(lean_object* v_prev_829_, lean_object* v_src_830_, lean_object* v_toks_831_, lean_object* v_x_832_){
_start:
{
lean_object* v_zero_836_; uint8_t v_isZero_837_; 
v_zero_836_ = lean_unsigned_to_nat(0u);
v_isZero_837_ = lean_nat_dec_eq(v_x_832_, v_zero_836_);
if (v_isZero_837_ == 1)
{
lean_dec(v_src_830_);
goto v___jp_833_;
}
else
{
if (lean_obj_tag(v_src_830_) == 0)
{
goto v___jp_833_;
}
else
{
lean_object* v_head_838_; lean_object* v_tail_839_; lean_object* v_one_840_; lean_object* v_n_841_; lean_object* v___x_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
v_head_838_ = lean_ctor_get(v_src_830_, 0);
v_tail_839_ = lean_ctor_get(v_src_830_, 1);
v_one_840_ = lean_unsigned_to_nat(1u);
v_n_841_ = lean_nat_sub(v_x_832_, v_one_840_);
v___x_855_ = lean_unsigned_to_nat(96u);
v___x_856_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawoldScan___closed__0));
v___x_857_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_829_, v___x_856_);
if (v___x_857_ == 0)
{
uint8_t v___x_858_; 
v___x_858_ = lean_nat_dec_eq(v_head_838_, v___x_855_);
if (v___x_858_ == 0)
{
lean_inc(v_tail_839_);
lean_inc(v_head_838_);
lean_dec_ref_known(v_src_830_, 2);
goto v___jp_842_;
}
else
{
lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_859_ = l_List_head_x3f___redArg(v_tail_839_);
v___x_860_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_859_, v___x_856_);
lean_dec(v___x_859_);
if (v___x_860_ == 0)
{
lean_inc(v_tail_839_);
lean_inc(v_head_838_);
lean_dec_ref_known(v_src_830_, 2);
goto v___jp_842_;
}
else
{
lean_object* v___x_861_; 
lean_inc_ref(v_src_830_);
v___x_861_ = lp_lean_x2dftml_LeanFtml_rawoldBody(v_src_830_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_inc(v_tail_839_);
lean_inc(v_head_838_);
lean_dec_ref_known(v_src_830_, 2);
goto v___jp_842_;
}
else
{
lean_object* v_val_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v_fst_865_; lean_object* v_snd_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v_fst_872_; lean_object* v_snd_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_881_; 
v_val_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc_n(v_val_862_, 2);
lean_dec_ref_known(v___x_861_, 1);
v___x_863_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawoldScan___closed__1));
v___x_864_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_863_, v_val_862_, v_toks_831_);
v_fst_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_fst_865_);
v_snd_866_ = lean_ctor_get(v___x_864_, 1);
lean_inc(v_snd_866_);
lean_dec_ref(v___x_864_);
v___x_867_ = l_List_lengthTR___redArg(v_val_862_);
lean_dec(v_val_862_);
v___x_868_ = lean_unsigned_to_nat(4u);
v___x_869_ = lean_nat_add(v___x_867_, v___x_868_);
lean_dec(v___x_867_);
v___x_870_ = l_List_drop___redArg(v___x_869_, v_src_830_);
lean_dec_ref_known(v_src_830_, 2);
v___x_871_ = lp_lean_x2dftml_LeanFtml_rawoldScan(v___x_856_, v___x_870_, v_snd_866_, v_n_841_);
lean_dec(v_n_841_);
v_fst_872_ = lean_ctor_get(v___x_871_, 0);
v_snd_873_ = lean_ctor_get(v___x_871_, 1);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_881_ == 0)
{
v___x_875_ = v___x_871_;
v_isShared_876_ = v_isSharedCheck_881_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_snd_873_);
lean_inc(v_fst_872_);
lean_dec(v___x_871_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_881_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_877_; lean_object* v___x_879_; 
v___x_877_ = l_List_appendTR___redArg(v_fst_865_, v_fst_872_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_877_);
v___x_879_ = v___x_875_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v_snd_873_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
}
}
else
{
lean_inc(v_tail_839_);
lean_inc(v_head_838_);
lean_dec_ref_known(v_src_830_, 2);
goto v___jp_842_;
}
v___jp_842_:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v_fst_845_; lean_object* v_snd_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_854_; 
lean_inc(v_head_838_);
v___x_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_843_, 0, v_head_838_);
v___x_844_ = lp_lean_x2dftml_LeanFtml_rawoldScan(v___x_843_, v_tail_839_, v_toks_831_, v_n_841_);
lean_dec(v_n_841_);
lean_dec_ref_known(v___x_843_, 1);
v_fst_845_ = lean_ctor_get(v___x_844_, 0);
v_snd_846_ = lean_ctor_get(v___x_844_, 1);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_854_ == 0)
{
v___x_848_ = v___x_844_;
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_snd_846_);
lean_inc(v_fst_845_);
lean_dec(v___x_844_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_850_, 0, v_head_838_);
lean_ctor_set(v___x_850_, 1, v_fst_845_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_850_);
v___x_852_ = v___x_848_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_850_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v_snd_846_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
}
v___jp_833_:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_834_ = lean_box(0);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v_toks_831_);
return v___x_835_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan___boxed(lean_object* v_prev_882_, lean_object* v_src_883_, lean_object* v_toks_884_, lean_object* v_x_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = lp_lean_x2dftml_LeanFtml_rawoldScan(v_prev_882_, v_src_883_, v_toks_884_, v_x_885_);
lean_dec(v_x_885_);
lean_dec(v_prev_882_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule___lam__0(lean_object* v_src_887_, lean_object* v_toks_888_){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_889_ = lean_box(0);
v___x_890_ = l_List_lengthTR___redArg(v_src_887_);
v___x_891_ = lean_unsigned_to_nat(1u);
v___x_892_ = lean_nat_add(v___x_890_, v___x_891_);
lean_dec(v___x_890_);
v___x_893_ = lp_lean_x2dftml_LeanFtml_rawoldScan(v___x_889_, v_src_887_, v_toks_888_, v___x_892_);
lean_dec(v___x_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule(lean_object* v_st_895_){
_start:
{
lean_object* v___f_896_; lean_object* v___x_897_; 
v___f_896_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawoldRule___closed__0));
v___x_897_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_895_, v___f_896_);
return v___x_897_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1(void){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__0));
v___x_900_ = l_String_toListImpl(v___x_899_);
return v___x_900_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_901_ = lean_box(0);
v___x_902_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1, &lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1);
v___x_903_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_902_, v___x_901_);
return v___x_903_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formOpenBytes(void){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2, &lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2);
return v___x_904_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__0));
v___x_907_ = l_String_toListImpl(v___x_906_);
return v___x_907_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = lean_box(0);
v___x_909_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1, &lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1);
v___x_910_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_909_, v___x_908_);
return v___x_910_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formCloseBytes(void){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2, &lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2);
return v___x_911_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_formCloserAt(lean_object* v_src_912_){
_start:
{
if (lean_obj_tag(v_src_912_) == 1)
{
lean_object* v_head_913_; lean_object* v_tail_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
v_head_913_ = lean_ctor_get(v_src_912_, 0);
lean_inc(v_head_913_);
v_tail_914_ = lean_ctor_get(v_src_912_, 1);
lean_inc(v_tail_914_);
lean_dec_ref_known(v_src_912_, 2);
v___x_915_ = lean_unsigned_to_nat(10u);
v___x_916_ = lean_nat_dec_eq(v_head_913_, v___x_915_);
lean_dec(v_head_913_);
if (v___x_916_ == 0)
{
lean_dec(v_tail_914_);
return v___x_916_;
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = lp_lean_x2dftml_LeanFtml_formCloseBytes;
v___x_918_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_917_, v_tail_914_);
if (lean_obj_tag(v___x_918_) == 0)
{
uint8_t v___x_919_; 
v___x_919_ = 0;
return v___x_919_;
}
else
{
lean_dec_ref_known(v___x_918_, 1);
return v___x_916_;
}
}
}
else
{
uint8_t v___x_920_; 
lean_dec(v_src_912_);
v___x_920_ = 0;
return v___x_920_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formCloserAt___boxed(lean_object* v_src_921_){
_start:
{
uint8_t v_res_922_; lean_object* v_r_923_; 
v_res_922_ = lp_lean_x2dftml_LeanFtml_formCloserAt(v_src_921_);
v_r_923_ = lean_box(v_res_922_);
return v_r_923_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lp_lean_x2dftml_LeanFtml_formCloseBytes;
v___x_925_ = l_List_lengthTR___redArg(v___x_924_);
return v___x_925_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1(void){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_926_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0);
v___x_927_ = lean_unsigned_to_nat(1u);
v___x_928_ = lean_nat_add(v___x_927_, v___x_926_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0(lean_object* v_r3_929_, lean_object* v_x_930_){
_start:
{
if (lean_obj_tag(v_x_930_) == 0)
{
lean_object* v___x_931_; 
v___x_931_ = lean_box(0);
return v___x_931_;
}
else
{
lean_object* v_head_932_; lean_object* v_tail_933_; lean_object* v_c_934_; uint8_t v___x_935_; 
v_head_932_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_head_932_);
v_tail_933_ = lean_ctor_get(v_x_930_, 1);
lean_inc(v_tail_933_);
lean_dec_ref_known(v_x_930_, 2);
v_c_934_ = l_List_drop___redArg(v_head_932_, v_r3_929_);
lean_inc(v_c_934_);
v___x_935_ = lp_lean_x2dftml_LeanFtml_formCloserAt(v_c_934_);
if (v___x_935_ == 0)
{
lean_dec(v_c_934_);
v_x_930_ = v_tail_933_;
goto _start;
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
lean_dec(v_tail_933_);
v___x_937_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1);
v___x_938_ = l_List_drop___redArg(v___x_937_, v_c_934_);
lean_dec(v_c_934_);
v___x_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_939_, 0, v___x_938_);
return v___x_939_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___boxed(lean_object* v_r3_940_, lean_object* v_x_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0(v_r3_940_, v_x_941_);
lean_dec(v_r3_940_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1(lean_object* v_x_943_){
_start:
{
if (lean_obj_tag(v_x_943_) == 0)
{
lean_object* v___x_944_; 
v___x_944_ = lean_box(0);
return v___x_944_;
}
else
{
lean_object* v_head_945_; lean_object* v_tail_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v_head_945_ = lean_ctor_get(v_x_943_, 0);
v_tail_946_ = lean_ctor_get(v_x_943_, 1);
v___x_947_ = l_List_lengthTR___redArg(v_head_945_);
v___x_948_ = lean_unsigned_to_nat(1u);
v___x_949_ = lean_nat_add(v___x_947_, v___x_948_);
lean_dec(v___x_947_);
v___x_950_ = l_List_range(v___x_949_);
v___x_951_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0(v_head_945_, v___x_950_);
if (lean_obj_tag(v___x_951_) == 0)
{
v_x_943_ = v_tail_946_;
goto _start;
}
else
{
return v___x_951_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1___boxed(lean_object* v_x_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1(v_x_953_);
lean_dec(v_x_953_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep(lean_object* v_r_964_){
_start:
{
lean_object* v___y_966_; 
if (lean_obj_tag(v_r_964_) == 1)
{
lean_object* v_head_973_; lean_object* v_tail_974_; lean_object* v___x_975_; uint8_t v___x_976_; 
v_head_973_ = lean_ctor_get(v_r_964_, 0);
v_tail_974_ = lean_ctor_get(v_r_964_, 1);
v___x_975_ = lean_unsigned_to_nat(10u);
v___x_976_ = lean_nat_dec_eq(v_head_973_, v___x_975_);
if (v___x_976_ == 0)
{
goto v___jp_971_;
}
else
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formAfterSep___closed__2));
lean_inc(v_tail_974_);
v___x_978_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_977_, v_tail_974_);
if (lean_obj_tag(v___x_978_) == 0)
{
v___y_966_ = v___x_978_;
goto v___jp_965_;
}
else
{
lean_object* v_val_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v_val_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_val_979_);
lean_dec_ref_known(v___x_978_, 1);
v___x_980_ = lp_lean_x2dftml_LeanFtml_wsNlRests(v_val_979_);
v___x_981_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1(v___x_980_);
lean_dec(v___x_980_);
if (lean_obj_tag(v___x_981_) == 0)
{
v___y_966_ = v___x_981_;
goto v___jp_965_;
}
else
{
lean_dec_ref_known(v_r_964_, 2);
return v___x_981_;
}
}
}
}
else
{
goto v___jp_971_;
}
v___jp_965_:
{
uint8_t v___x_967_; 
lean_inc(v_r_964_);
v___x_967_ = lp_lean_x2dftml_LeanFtml_formCloserAt(v_r_964_);
if (v___x_967_ == 0)
{
lean_dec(v_r_964_);
return v___y_966_;
}
else
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
lean_dec(v___y_966_);
v___x_968_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1);
v___x_969_ = l_List_drop___redArg(v___x_968_, v_r_964_);
lean_dec(v_r_964_);
v___x_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
return v___x_970_;
}
}
v___jp_971_:
{
lean_object* v___x_972_; 
v___x_972_ = lean_box(0);
v___y_966_ = v___x_972_;
goto v___jp_965_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0(lean_object* v_r1_982_, lean_object* v_src_983_, lean_object* v_x_984_){
_start:
{
if (lean_obj_tag(v_x_984_) == 0)
{
lean_object* v___x_985_; 
v___x_985_ = lean_box(0);
return v___x_985_;
}
else
{
lean_object* v_head_986_; lean_object* v_tail_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_head_986_ = lean_ctor_get(v_x_984_, 0);
lean_inc(v_head_986_);
v_tail_987_ = lean_ctor_get(v_x_984_, 1);
lean_inc(v_tail_987_);
lean_dec_ref_known(v_x_984_, 2);
v___x_988_ = l_List_drop___redArg(v_head_986_, v_r1_982_);
v___x_989_ = lp_lean_x2dftml_LeanFtml_formAfterSep(v___x_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
v_x_984_ = v_tail_987_;
goto _start;
}
else
{
lean_object* v_val_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1001_; 
lean_dec(v_tail_987_);
v_val_991_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_993_ = v___x_989_;
v_isShared_994_ = v_isSharedCheck_1001_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_val_991_);
lean_dec(v___x_989_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1001_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_995_ = l_List_lengthTR___redArg(v_src_983_);
v___x_996_ = l_List_lengthTR___redArg(v_val_991_);
lean_dec(v_val_991_);
v___x_997_ = lean_nat_sub(v___x_995_, v___x_996_);
lean_dec(v___x_996_);
lean_dec(v___x_995_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v___x_997_);
v___x_999_ = v___x_993_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_997_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0___boxed(lean_object* v_r1_1002_, lean_object* v_src_1003_, lean_object* v_x_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0(v_r1_1002_, v_src_1003_, v_x_1004_);
lean_dec(v_src_1003_);
lean_dec(v_r1_1002_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1(lean_object* v_src_1006_, lean_object* v_x_1007_){
_start:
{
if (lean_obj_tag(v_x_1007_) == 0)
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_box(0);
return v___x_1008_;
}
else
{
lean_object* v_head_1009_; lean_object* v_tail_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_head_1009_ = lean_ctor_get(v_x_1007_, 0);
v_tail_1010_ = lean_ctor_get(v_x_1007_, 1);
v___x_1011_ = l_List_lengthTR___redArg(v_head_1009_);
v___x_1012_ = lean_unsigned_to_nat(1u);
v___x_1013_ = lean_nat_add(v___x_1011_, v___x_1012_);
lean_dec(v___x_1011_);
v___x_1014_ = l_List_range(v___x_1013_);
v___x_1015_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0(v_head_1009_, v_src_1006_, v___x_1014_);
if (lean_obj_tag(v___x_1015_) == 0)
{
v_x_1007_ = v_tail_1010_;
goto _start;
}
else
{
return v___x_1015_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1___boxed(lean_object* v_src_1017_, lean_object* v_x_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1(v_src_1017_, v_x_1018_);
lean_dec(v_x_1018_);
lean_dec(v_src_1017_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formMatchAt(lean_object* v_src_1020_){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = lp_lean_x2dftml_LeanFtml_formOpenBytes;
lean_inc(v_src_1020_);
v___x_1022_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1021_, v_src_1020_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v___x_1023_; 
lean_dec(v_src_1020_);
v___x_1023_ = lean_box(0);
return v___x_1023_;
}
else
{
lean_object* v_val_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_val_1024_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_val_1024_);
lean_dec_ref_known(v___x_1022_, 1);
v___x_1025_ = lp_lean_x2dftml_LeanFtml_wsNlRests(v_val_1024_);
v___x_1026_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1(v_src_1020_, v___x_1025_);
lean_dec(v___x_1025_);
lean_dec(v_src_1020_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(lean_object* v_a_1027_, lean_object* v_a_1028_){
_start:
{
if (lean_obj_tag(v_a_1027_) == 0)
{
lean_dec(v_a_1028_);
return v_a_1027_;
}
else
{
lean_object* v_head_1029_; lean_object* v_tail_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1059_; 
v_head_1029_ = lean_ctor_get(v_a_1027_, 0);
v_tail_1030_ = lean_ctor_get(v_a_1027_, 1);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_a_1027_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1032_ = v_a_1027_;
v_isShared_1033_ = v_isSharedCheck_1059_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_tail_1030_);
lean_inc(v_head_1029_);
lean_dec(v_a_1027_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1059_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v_zero_1034_; uint8_t v_isZero_1035_; 
v_zero_1034_ = lean_unsigned_to_nat(0u);
v_isZero_1035_ = lean_nat_dec_eq(v_a_1028_, v_zero_1034_);
if (v_isZero_1035_ == 1)
{
lean_object* v___x_1036_; 
lean_del_object(v___x_1032_);
lean_dec(v_tail_1030_);
lean_dec(v_head_1029_);
lean_dec(v_a_1028_);
v___x_1036_ = lean_box(0);
return v___x_1036_;
}
else
{
lean_object* v_one_1037_; lean_object* v_n_1038_; lean_object* v___x_1044_; uint8_t v___x_1045_; 
v_one_1037_ = lean_unsigned_to_nat(1u);
v_n_1038_ = lean_nat_sub(v_a_1028_, v_one_1037_);
lean_dec(v_a_1028_);
v___x_1044_ = lean_unsigned_to_nat(255u);
v___x_1045_ = lean_nat_dec_eq(v_head_1029_, v___x_1044_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
lean_del_object(v___x_1032_);
v___x_1046_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(v_tail_1030_, v_n_1038_);
v___x_1047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1047_, 0, v_head_1029_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
return v___x_1047_;
}
else
{
lean_object* v___x_1048_; lean_object* v_ds_1049_; uint8_t v___x_1050_; 
v___x_1048_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc(v_tail_1030_);
v_ds_1049_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(v_tail_1030_, v_tail_1030_, v___x_1048_);
v___x_1050_ = l_List_isEmpty___redArg(v_ds_1049_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = l_List_lengthTR___redArg(v_ds_1049_);
lean_dec(v_ds_1049_);
v___x_1052_ = l_List_drop___redArg(v___x_1051_, v_tail_1030_);
if (lean_obj_tag(v___x_1052_) == 1)
{
lean_object* v_head_1053_; lean_object* v_tail_1054_; uint8_t v___x_1055_; 
v_head_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_head_1053_);
v_tail_1054_ = lean_ctor_get(v___x_1052_, 1);
lean_inc(v_tail_1054_);
lean_dec_ref_known(v___x_1052_, 2);
v___x_1055_ = lean_nat_dec_eq(v_head_1053_, v___x_1044_);
lean_dec(v_head_1053_);
if (v___x_1055_ == 0)
{
lean_dec(v_tail_1054_);
goto v___jp_1039_;
}
else
{
lean_del_object(v___x_1032_);
lean_dec(v_tail_1030_);
lean_dec(v_head_1029_);
v_a_1027_ = v_tail_1054_;
v_a_1028_ = v_n_1038_;
goto _start;
}
}
else
{
lean_dec(v___x_1052_);
goto v___jp_1039_;
}
}
else
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
lean_dec(v_ds_1049_);
lean_del_object(v___x_1032_);
v___x_1057_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(v_tail_1030_, v_n_1038_);
v___x_1058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1058_, 0, v_head_1029_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
return v___x_1058_;
}
}
v___jp_1039_:
{
lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1040_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(v_tail_1030_, v_n_1038_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 1, v___x_1040_);
v___x_1042_ = v___x_1032_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_head_1029_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripFormPlaceholders(lean_object* v_bs_1060_){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1061_ = l_List_lengthTR___redArg(v_bs_1060_);
v___x_1062_ = lean_unsigned_to_nat(1u);
v___x_1063_ = lean_nat_add(v___x_1061_, v___x_1062_);
lean_dec(v___x_1061_);
v___x_1064_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(v_bs_1060_, v___x_1063_);
return v___x_1064_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formProcess_go___closed__1));
v___x_1068_ = l_String_toListImpl(v___x_1067_);
return v___x_1068_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3(void){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = lean_unsigned_to_nat(1u);
v___x_1070_ = lean_nat_to_int(v___x_1069_);
return v___x_1070_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4(void){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3);
v___x_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
return v___x_1072_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5(void){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1073_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4);
v___x_1074_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
lean_ctor_set(v___x_1075_, 1, v___x_1073_);
return v___x_1075_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1076_ = lean_box(0);
v___x_1077_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5);
v___x_1078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
lean_ctor_set(v___x_1078_, 1, v___x_1076_);
return v___x_1078_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6);
v___x_1080_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0));
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set(v___x_1081_, 1, v___x_1079_);
return v___x_1081_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1082_ = lean_box(0);
v___x_1083_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7);
v___x_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
lean_ctor_set(v___x_1084_, 1, v___x_1082_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go(lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_){
_start:
{
if (lean_obj_tag(v_a_1085_) == 0)
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1088_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__5));
v___x_1089_ = l_List_reverse___redArg(v_a_1087_);
v___x_1090_ = l_List_intercalateTR___redArg(v___x_1088_, v___x_1089_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v_a_1086_);
return v___x_1091_;
}
else
{
lean_object* v_head_1092_; lean_object* v_tail_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1115_; 
v_head_1092_ = lean_ctor_get(v_a_1085_, 0);
v_tail_1093_ = lean_ctor_get(v_a_1085_, 1);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_a_1085_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1095_ = v_a_1085_;
v_isShared_1096_ = v_isSharedCheck_1115_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_tail_1093_);
lean_inc(v_head_1092_);
lean_dec(v_a_1085_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1115_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v_clean_1097_; uint8_t v___x_1098_; 
v_clean_1097_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders(v_head_1092_);
v___x_1098_ = l_List_isEmpty___redArg(v_clean_1097_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v_fst_1101_; lean_object* v_snd_1102_; lean_object* v___x_1104_; 
v___x_1099_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0));
v___x_1100_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_1099_, v_clean_1097_, v_a_1086_);
v_fst_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_fst_1101_);
v_snd_1102_ = lean_ctor_get(v___x_1100_, 1);
lean_inc(v_snd_1102_);
lean_dec_ref(v___x_1100_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 1, v_a_1087_);
lean_ctor_set(v___x_1095_, 0, v_fst_1101_);
v___x_1104_ = v___x_1095_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_fst_1101_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v_a_1087_);
v___x_1104_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
v_a_1085_ = v_tail_1093_;
v_a_1086_ = v_snd_1102_;
v_a_1087_ = v___x_1104_;
goto _start;
}
}
else
{
lean_object* v___x_1107_; lean_object* v_ph_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1112_; 
lean_dec(v_clean_1097_);
v___x_1107_ = l_List_lengthTR___redArg(v_a_1086_);
v_ph_1108_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1107_);
v___x_1109_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8);
v___x_1110_ = l_List_appendTR___redArg(v_a_1086_, v___x_1109_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 1, v_a_1087_);
lean_ctor_set(v___x_1095_, 0, v_ph_1108_);
v___x_1112_ = v___x_1095_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_ph_1108_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_a_1087_);
v___x_1112_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
v_a_1085_ = v_tail_1093_;
v_a_1086_ = v___x_1110_;
v_a_1087_ = v___x_1112_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formProcess(lean_object* v_matched_1116_, lean_object* v_toks_1117_){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1118_ = lean_unsigned_to_nat(10u);
v___x_1119_ = lp_lean_x2dftml_LeanFtml_splitBytes(v___x_1118_, v_matched_1116_);
v___x_1120_ = lean_box(0);
v___x_1121_ = lp_lean_x2dftml_LeanFtml_formProcess_go(v___x_1119_, v_toks_1117_, v___x_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formScan(lean_object* v_src_1122_, lean_object* v_toks_1123_, lean_object* v_x_1124_){
_start:
{
lean_object* v_zero_1128_; uint8_t v_isZero_1129_; 
v_zero_1128_ = lean_unsigned_to_nat(0u);
v_isZero_1129_ = lean_nat_dec_eq(v_x_1124_, v_zero_1128_);
if (v_isZero_1129_ == 1)
{
lean_dec(v_src_1122_);
goto v___jp_1125_;
}
else
{
if (lean_obj_tag(v_src_1122_) == 0)
{
goto v___jp_1125_;
}
else
{
lean_object* v_head_1130_; lean_object* v_tail_1131_; lean_object* v_one_1132_; lean_object* v_n_1133_; lean_object* v___x_1134_; 
v_head_1130_ = lean_ctor_get(v_src_1122_, 0);
v_tail_1131_ = lean_ctor_get(v_src_1122_, 1);
v_one_1132_ = lean_unsigned_to_nat(1u);
v_n_1133_ = lean_nat_sub(v_x_1124_, v_one_1132_);
lean_inc_ref(v_src_1122_);
v___x_1134_ = lp_lean_x2dftml_LeanFtml_formMatchAt(v_src_1122_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1151_; 
lean_inc(v_tail_1131_);
lean_inc(v_head_1130_);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_src_1122_);
if (v_isSharedCheck_1151_ == 0)
{
lean_object* v_unused_1152_; lean_object* v_unused_1153_; 
v_unused_1152_ = lean_ctor_get(v_src_1122_, 1);
lean_dec(v_unused_1152_);
v_unused_1153_ = lean_ctor_get(v_src_1122_, 0);
lean_dec(v_unused_1153_);
v___x_1136_ = v_src_1122_;
v_isShared_1137_ = v_isSharedCheck_1151_;
goto v_resetjp_1135_;
}
else
{
lean_dec(v_src_1122_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1151_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; lean_object* v_fst_1139_; lean_object* v_snd_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1150_; 
v___x_1138_ = lp_lean_x2dftml_LeanFtml_formScan(v_tail_1131_, v_toks_1123_, v_n_1133_);
lean_dec(v_n_1133_);
v_fst_1139_ = lean_ctor_get(v___x_1138_, 0);
v_snd_1140_ = lean_ctor_get(v___x_1138_, 1);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1142_ = v___x_1138_;
v_isShared_1143_ = v_isSharedCheck_1150_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_snd_1140_);
lean_inc(v_fst_1139_);
lean_dec(v___x_1138_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1150_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 1, v_fst_1139_);
v___x_1145_ = v___x_1136_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_head_1130_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v_fst_1139_);
v___x_1145_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1147_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1145_);
v___x_1147_ = v___x_1142_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_snd_1140_);
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
else
{
lean_object* v_val_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v_fst_1158_; lean_object* v_snd_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v_fst_1162_; lean_object* v_snd_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1171_; 
v_val_1154_ = lean_ctor_get(v___x_1134_, 0);
lean_inc_n(v_val_1154_, 2);
lean_dec_ref_known(v___x_1134_, 1);
v___x_1155_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc_ref(v_src_1122_);
v___x_1156_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_1122_, v_src_1122_, v_val_1154_, v___x_1155_);
v___x_1157_ = lp_lean_x2dftml_LeanFtml_formProcess(v___x_1156_, v_toks_1123_);
v_fst_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_fst_1158_);
v_snd_1159_ = lean_ctor_get(v___x_1157_, 1);
lean_inc(v_snd_1159_);
lean_dec_ref(v___x_1157_);
v___x_1160_ = l_List_drop___redArg(v_val_1154_, v_src_1122_);
lean_dec_ref_known(v_src_1122_, 2);
v___x_1161_ = lp_lean_x2dftml_LeanFtml_formScan(v___x_1160_, v_snd_1159_, v_n_1133_);
lean_dec(v_n_1133_);
v_fst_1162_ = lean_ctor_get(v___x_1161_, 0);
v_snd_1163_ = lean_ctor_get(v___x_1161_, 1);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1165_ = v___x_1161_;
v_isShared_1166_ = v_isSharedCheck_1171_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_snd_1163_);
lean_inc(v_fst_1162_);
lean_dec(v___x_1161_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1171_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1167_ = l_List_appendTR___redArg(v_fst_1158_, v_fst_1162_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v___x_1167_);
v___x_1169_ = v___x_1165_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v_snd_1163_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
}
v___jp_1125_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_box(0);
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
lean_ctor_set(v___x_1127_, 1, v_toks_1123_);
return v___x_1127_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formScan___boxed(lean_object* v_src_1172_, lean_object* v_toks_1173_, lean_object* v_x_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = lp_lean_x2dftml_LeanFtml_formScan(v_src_1172_, v_toks_1173_, v_x_1174_);
lean_dec(v_x_1174_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formRule___lam__0(lean_object* v_src_1176_, lean_object* v_toks_1177_){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1178_ = l_List_lengthTR___redArg(v_src_1176_);
v___x_1179_ = lean_unsigned_to_nat(1u);
v___x_1180_ = lean_nat_add(v___x_1178_, v___x_1179_);
lean_dec(v___x_1178_);
v___x_1181_ = lp_lean_x2dftml_LeanFtml_formScan(v_src_1176_, v_toks_1177_, v___x_1180_);
lean_dec(v___x_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formRule(lean_object* v_st_1183_){
_start:
{
lean_object* v___f_1184_; lean_object* v___x_1185_; 
v___f_1184_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formRule___closed__0));
v___x_1185_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1183_, v___f_1184_);
return v___x_1185_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeRule(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_FrameRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_CodeRule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_formOpenBytes = _init_lp_lean_x2dftml_LeanFtml_formOpenBytes();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_formOpenBytes);
lp_lean_x2dftml_LeanFtml_formCloseBytes = _init_lp_lean_x2dftml_LeanFtml_formCloseBytes();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_formCloseBytes);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
