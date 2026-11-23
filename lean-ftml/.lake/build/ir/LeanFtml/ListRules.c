// Lean compiler output
// Module: LeanFtml.ListRules
// Imports: public import Init public meta import Init public import LeanFtml.ContainRules
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lowerBytes(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_findSubCI(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omSet(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(lean_object*, lean_object*);
lean_object* l_Nat_toDigits(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lastIdxOfB(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_asciiLower(lean_object*);
uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_freelinkProcess_spec__0(lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_byteCiEq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_lineBreakIdx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_lineBreakIdx___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lineBreakIdx___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineBreakIdx(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineBreakIdx___boxed(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_firstLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_firstLine___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_firstLine___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstLine(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findFrom_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findFrom_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceFirst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceFirst___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAll_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAll_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAll___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_phAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_phAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_phAt___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allPh_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allPh(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_setIdx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_setIdx___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_setIdx___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ltrimSpaceTab(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ltrimSpaceTab___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripSpaceTab(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripSpaceTab___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimWsBoth(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimWsBoth___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_addTok(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_setTrail_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trail"};
static const lean_object* lp_lean_x2dftml_LeanFtml_setTrail_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_setTrail_go___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setTrail_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setTrail_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setTrail(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setTrail___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStr___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optIntEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optIntEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_instBEqOption_beq___at___00LeanFtml_tokTypeIs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_instBEqOption_beq___at___00LeanFtml_tokTypeIs_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tokTypeIs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tokTypeIs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tokTypeIs___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_tokTypeIs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokTypeIs___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedRawItem_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRawItem_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRawItem_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRawItem_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRawItem_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRawItem = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRawItem_default___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineItem(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectRawItems_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectRawItems_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectRawItems(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_lookaheadBlocks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookaheadBlocks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeRunExtend(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeRunAt(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedListLevel_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedListLevel_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedListLevel_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedListLevel_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedListLevel_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedListLevel = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedListLevel_default___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_markerPrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "number"};
static const lean_object* lp_lean_x2dftml_LeanFtml_markerPrefix___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_markerPrefix___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_markerPrefix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bullet"};
static const lean_object* lp_lean_x2dftml_LeanFtml_markerPrefix___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_markerPrefix___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_markerPrefix(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_markerPrefix___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_emitList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* lp_lean_x2dftml_LeanFtml_emitList___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emitList___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emitList(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_closeListLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_closeListLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_closeListLevel___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_closeListLevel___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "in_sublist"};
static const lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_closeListLevel___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tail"};
static const lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_closeListLevel___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_closeListLevel___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "item"};
static const lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_closeListLevel___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sublist"};
static const lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_closeListLevel___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "sublist_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_closeListLevel___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_closeListLevel___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_closeListLevel___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel___closed__14;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_openListLevels___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_openListLevels___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_openListLevels___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "sublist_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_openListLevels___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_openListLevels___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_openListLevels___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_openListLevels___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_openListLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unwindListLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unwindListLevels___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawSurvive(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterNativeItems_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterNativeItems_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterNativeItems(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeProcess_closeAll(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_item_start"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__0_value;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "count"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "first"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__3 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_item_end"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__5 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeProcess_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nativeProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nativeProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nativeProcess___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nativeProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nativeProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nativeProcess___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeProcess(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeScan(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listNative(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_defRunExtend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(58) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_defRunExtend___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_defRunExtend___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_defRunExtend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_defRunAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_defItemAt_spec__1(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_defItemAt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_defRunExtend___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_defItemAt_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_defItemAt_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_defItemAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_defItemAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectDefItems_go(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectDefItems_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectDefItems(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_stripCommentPh_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Comment"};
static const lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_stripCommentPh_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_termRendersEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_termRendersEmpty___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_emitDef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Deflist"};
static const lean_object* lp_lean_x2dftml_LeanFtml_emitDef___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emitDef___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emitDef(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "narr_start"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__1;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__2;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__3;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__4;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "narr_end"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__5 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__6;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__7;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__8;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__9;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term_start"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__10 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__11;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__12;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__13;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__14;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_end"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__15 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__16;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__17;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__18;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__19;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_defProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_defProcess___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_defProcess___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_defProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_defProcess___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_defProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_defProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_defProcess___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_defProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_defProcess___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_defProcess___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_defProcess___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_defProcess___closed__9;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_defProcess(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deflistScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deflistScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deflistBytes(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_explPh___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_explPh___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_explPh___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_explPh___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "EXPLIST_"};
static const lean_object* lp_lean_x2dftml_LeanFtml_explPh___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_explPh___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_explPh___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_explPh___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_explPh___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_explPh___closed__3;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_explPh___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_explPh___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_explPh___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explPh(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_natPh___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "NATLIST_"};
static const lean_object* lp_lean_x2dftml_LeanFtml_natPh___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_natPh___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_natPh___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_natPh___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_natPh___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_natPh___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_natPh(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskPhAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_harvestMask_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_harvestMask(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_existsLitCI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_existsLitCI___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawMatchedTag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawMatchedTag___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockOpenerAt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_blockOpenerAt_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_blockOpenerAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[["};
static const lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ul"};
static const lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ol"};
static const lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "[[/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockCloserAt(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedTagMatch_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTagMatch_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTagMatch_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTagMatch_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTagMatch_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTagMatch = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTagMatch_default___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanTags_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanTags(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_tagIsRawCase(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tagIsRawCase___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findPairOpener(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findPairOpener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findPair_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findPair(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_normalizeAttrValue_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeAttrValue(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasPlaceholder(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasPlaceholder___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildListAttrs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildListAttrs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "data-"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "role"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__10;
static const lean_array_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "u- "};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "u-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__24;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrsToOpts(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedExplBlock_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedExplBlock_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedExplBlock_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedExplBlock_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedExplBlock_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedExplBlock = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedExplBlock_default___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_maskNested_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_maskNested_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_maskNested_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskNested(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__0;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bullet_list_end"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__1_value;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "number_list_end"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__2_value;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "bullet_list_start"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__3 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__3_value;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "number_list_start"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nativeSpans___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nativeSpans___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nativeSpans___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeSpans(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeSpans___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskNative_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskNative(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskNative___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "[[li"};
static const lean_object* lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_liOpenerAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_liMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[[/li]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_liMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_liMatchAt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt___closed__2;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_liMatchAt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_liMatchAt___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanLi_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanLi(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_restoreMasked_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_restoreMasked(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wholeMask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wholeMask___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_lastMaskWithWsTail_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_lastMaskWithWsTail_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_lastMaskWithWsTail_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_lastMaskWithWsTail_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastMaskWithWsTail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_nmapEntries_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_nmapEntries_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_nmapEntries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nmapEntries___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nmapEntries___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nmapEntries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nmapEntries___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_formatItem_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_formatItem_spec__1___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "explicit_raw_nl"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__1;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__2;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_formatItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "explicit_item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formatItem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "attrs"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formatItem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lead"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formatItem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "explicit_item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formatItem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Newline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_formatItem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formatItem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "explicit_br_no_nl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__17;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formatItem___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__19;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_formatItem___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_formatItem___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__20_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formatItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formatItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allMaskPhs_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allMaskPhs(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_onlyListsOk_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_onlyListsOk_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_onlyListsOk(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_onlyListsOk___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "explicit_list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "list_type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scored"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "explicit_list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokensUnclosed(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokensUnclosed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicit_empty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__4;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "EXPDISSOLVED"};
static const lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__8;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__10;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCIBytes_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCIBytes_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCIBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCIBytes___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveNestedUpper(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildExplicit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildExplicit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_buildExplicit_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "explicit_inline_wrapper_start"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__1;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__2;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "newline"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "explicit_inline_wrapper_end"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__6 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__7;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__8;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "lead_nl"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__10 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildExplicit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildExplicit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "explicit_none_item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildExplicit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "explicit_none_item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildExplicit___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildExplicit___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___closed__12;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[[/ul]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[[/ol]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripBlockCloserTag(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastLiCloseIdx_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastLiCloseIdx(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_foldNewlineRun3_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_foldNewlineRun3(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_absorbLastLiTail(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_absorbTailTrim(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_absorbTailTrimScored(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degradeOneBody_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degradeOneBody(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_degradeRawBody_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_degradeRawBody_go_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degradeRawBody_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degradeRawBody(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastCloserTail_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastCloserTail(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_syntheticUnclosed(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_syntheticUnclosed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_explLoop_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_explLoop_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_explLoop_spec__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_explLoop_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tableTail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cell]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tableTail___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tableTail___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tableTail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tableTail___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tableTail___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[/row]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tableTail___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tableTail___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tableTail___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tableTail___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tableTail___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "[[/table]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tableTail___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tableTail___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tableTail___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tableTail___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tableTail(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_finalizeOne_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_finalizeOne_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_finalizeOne_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_finalizeOne_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_finalizeOne___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "||"};
static const lean_object* lp_lean_x2dftml_LeanFtml_finalizeOne___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_finalizeOne___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_finalizeOne___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_finalizeOne___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_finalizeOne___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_formatItem___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_finalizeOne___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_finalizeOne___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalizeOne(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalizeOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_finalizeExplicit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_finalizeExplicit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalizeExplicit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalizeExplicit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "[[UL class=\"c\" id=\"i\" data-x=\"1\"]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER"};
static const lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "[[ul]]\n[[li]]a\n[[/li]]\n[[/ul]]\n[[ol]]\n[[li]]b[[/li]]\n[[/OL]]AFTER"};
static const lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/UL]]AFTER\n[[/ol]]\n[[/li]]\n[[/ul]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b\n[[/ol]] AFTER[[/li]]\n[[/ul]] [[/li]]\n[[/ul]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_normalizeUpperInner9_spec__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_normalizeUpperInner9_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "[[UL class=\"c\"]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "[[ul_]]\n[[li]]a\n[[/li]]\n[[li]]b"};
static const lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "[[/li]]\n[[/ul]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_normalizeS1Tail9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_normalizeS1Tail9___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeS1Tail9(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listScoredEmptyItem10_spec__0(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimWs10(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstLiAt_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstLiAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_splitLastCloser11_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitLastCloser11(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mkNewlines11_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mkNewlines11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interleaveNl11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_countP_go___at___00LeanFtml_listPostFailedClose10_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_countP_go___at___00LeanFtml_listPostFailedClose10_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose10(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "UL"};
static const lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 2}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "A[[LI]]B[[/LI]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[[/UL]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__19;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_listExplicitPass_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_listExplicitPass_spec__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "[[ul"};
static const lean_object* lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "[[ol"};
static const lean_object* lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listExplicitPass(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_listRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_listRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_listRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_listRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listRule(lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_deflistRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_deflistBytes, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_deflistRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_deflistRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deflistRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineBreakIdx(lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
lean_object* v___x_4_; 
v___x_4_ = lean_box(0);
return v___x_4_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v_head_5_ = lean_ctor_get(v_x_3_, 0);
v_tail_6_ = lean_ctor_get(v_x_3_, 1);
v___x_7_ = lean_unsigned_to_nat(10u);
v___x_8_ = lean_nat_dec_eq(v_head_5_, v___x_7_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; 
v___x_9_ = lp_lean_x2dftml_LeanFtml_lineBreakIdx(v_tail_6_);
if (lean_obj_tag(v___x_9_) == 0)
{
return v___x_9_;
}
else
{
lean_object* v_val_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_19_; 
v_val_10_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_19_ == 0)
{
v___x_12_ = v___x_9_;
v_isShared_13_ = v_isSharedCheck_19_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_val_10_);
lean_dec(v___x_9_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_19_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_17_; 
v___x_14_ = lean_unsigned_to_nat(1u);
v___x_15_ = lean_nat_add(v_val_10_, v___x_14_);
lean_dec(v_val_10_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_15_);
v___x_17_ = v___x_12_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
}
else
{
lean_object* v___x_20_; 
v___x_20_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lineBreakIdx___closed__0));
return v___x_20_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineBreakIdx___boxed(lean_object* v_x_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = lp_lean_x2dftml_LeanFtml_lineBreakIdx(v_x_21_);
lean_dec(v_x_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstLine(lean_object* v_s_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lp_lean_x2dftml_LeanFtml_lineBreakIdx(v_s_25_);
if (lean_obj_tag(v___x_26_) == 0)
{
lean_object* v___x_27_; 
lean_dec(v_s_25_);
v___x_27_ = lean_box(0);
return v___x_27_;
}
else
{
lean_object* v_val_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_41_; 
v_val_28_ = lean_ctor_get(v___x_26_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_26_);
if (v_isSharedCheck_41_ == 0)
{
v___x_30_ = v___x_26_;
v_isShared_31_ = v_isSharedCheck_41_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_val_28_);
lean_dec(v___x_26_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_41_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_32_ = lean_unsigned_to_nat(1u);
v___x_33_ = lean_nat_add(v_val_28_, v___x_32_);
lean_dec(v_val_28_);
v___x_34_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_33_);
lean_inc(v_s_25_);
v___x_35_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_25_, v_s_25_, v___x_33_, v___x_34_);
v___x_36_ = l_List_drop___redArg(v___x_33_, v_s_25_);
lean_dec(v_s_25_);
v___x_37_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_35_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_37_);
v___x_39_ = v___x_30_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_37_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findFrom_go(lean_object* v_pat_42_, lean_object* v_a_43_, lean_object* v_a_44_){
_start:
{
if (lean_obj_tag(v_a_43_) == 0)
{
lean_object* v___x_45_; 
lean_dec(v_a_44_);
v___x_45_ = lean_box(0);
return v___x_45_;
}
else
{
lean_object* v_tail_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; uint8_t v___x_50_; 
v_tail_46_ = lean_ctor_get(v_a_43_, 1);
lean_inc(v_tail_46_);
v___x_47_ = l_List_lengthTR___redArg(v_pat_42_);
v___x_48_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc_ref(v_a_43_);
v___x_49_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_43_, v_a_43_, v___x_47_, v___x_48_);
lean_dec_ref_known(v_a_43_, 2);
v___x_50_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_49_, v_pat_42_);
lean_dec(v___x_49_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(1u);
v___x_52_ = lean_nat_add(v_a_44_, v___x_51_);
lean_dec(v_a_44_);
v_a_43_ = v_tail_46_;
v_a_44_ = v___x_52_;
goto _start;
}
else
{
lean_object* v___x_54_; 
lean_dec(v_tail_46_);
v___x_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_54_, 0, v_a_44_);
return v___x_54_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findFrom_go___boxed(lean_object* v_pat_55_, lean_object* v_a_56_, lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = lp_lean_x2dftml_LeanFtml_findFrom_go(v_pat_55_, v_a_56_, v_a_57_);
lean_dec(v_pat_55_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findFrom(lean_object* v_pat_59_, lean_object* v_s_60_, lean_object* v_startAt_61_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
lean_inc(v_startAt_61_);
v___x_62_ = l_List_drop___redArg(v_startAt_61_, v_s_60_);
v___x_63_ = lp_lean_x2dftml_LeanFtml_findFrom_go(v_pat_59_, v___x_62_, v_startAt_61_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findFrom___boxed(lean_object* v_pat_64_, lean_object* v_s_65_, lean_object* v_startAt_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_lean_x2dftml_LeanFtml_findFrom(v_pat_64_, v_s_65_, v_startAt_66_);
lean_dec(v_s_65_);
lean_dec(v_pat_64_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceFirst(lean_object* v_pat_68_, lean_object* v_repl_69_, lean_object* v_s_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = lp_lean_x2dftml_LeanFtml_findFrom(v_pat_68_, v_s_70_, v___x_71_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_dec(v_repl_69_);
return v_s_70_;
}
else
{
lean_object* v_val_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_val_73_ = lean_ctor_get(v___x_72_, 0);
lean_inc_n(v_val_73_, 2);
lean_dec_ref_known(v___x_72_, 1);
v___x_74_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_s_70_);
v___x_75_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_70_, v_s_70_, v_val_73_, v___x_74_);
v___x_76_ = l_List_appendTR___redArg(v___x_75_, v_repl_69_);
v___x_77_ = l_List_lengthTR___redArg(v_pat_68_);
v___x_78_ = lean_nat_add(v_val_73_, v___x_77_);
lean_dec(v___x_77_);
lean_dec(v_val_73_);
v___x_79_ = l_List_drop___redArg(v___x_78_, v_s_70_);
lean_dec(v_s_70_);
v___x_80_ = l_List_appendTR___redArg(v___x_76_, v___x_79_);
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceFirst___boxed(lean_object* v_pat_81_, lean_object* v_repl_82_, lean_object* v_s_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = lp_lean_x2dftml_LeanFtml_replaceFirst(v_pat_81_, v_repl_82_, v_s_83_);
lean_dec(v_pat_81_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAll_go(lean_object* v_pat_85_, lean_object* v_repl_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
if (lean_obj_tag(v_a_87_) == 0)
{
lean_dec(v_repl_86_);
return v_a_87_;
}
else
{
lean_object* v_head_89_; lean_object* v_tail_90_; lean_object* v_zero_91_; uint8_t v_isZero_92_; 
v_head_89_ = lean_ctor_get(v_a_87_, 0);
v_tail_90_ = lean_ctor_get(v_a_87_, 1);
v_zero_91_ = lean_unsigned_to_nat(0u);
v_isZero_92_ = lean_nat_dec_eq(v_a_88_, v_zero_91_);
if (v_isZero_92_ == 1)
{
lean_object* v___x_93_; 
lean_dec_ref_known(v_a_87_, 2);
lean_dec(v_repl_86_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v_one_94_; lean_object* v_n_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
v_one_94_ = lean_unsigned_to_nat(1u);
v_n_95_ = lean_nat_sub(v_a_88_, v_one_94_);
v___x_96_ = l_List_lengthTR___redArg(v_pat_85_);
v___x_97_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_96_);
lean_inc_ref(v_a_87_);
v___x_98_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_87_, v_a_87_, v___x_96_, v___x_97_);
v___x_99_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_98_, v_pat_85_);
lean_dec(v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_107_; 
lean_inc(v_tail_90_);
lean_inc(v_head_89_);
lean_dec(v___x_96_);
v_isSharedCheck_107_ = !lean_is_exclusive(v_a_87_);
if (v_isSharedCheck_107_ == 0)
{
lean_object* v_unused_108_; lean_object* v_unused_109_; 
v_unused_108_ = lean_ctor_get(v_a_87_, 1);
lean_dec(v_unused_108_);
v_unused_109_ = lean_ctor_get(v_a_87_, 0);
lean_dec(v_unused_109_);
v___x_101_ = v_a_87_;
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
else
{
lean_dec(v_a_87_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_103_ = lp_lean_x2dftml_LeanFtml_replaceAll_go(v_pat_85_, v_repl_86_, v_tail_90_, v_n_95_);
lean_dec(v_n_95_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___x_103_);
v___x_105_ = v___x_101_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_head_89_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v___x_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
else
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_110_ = l_List_drop___redArg(v___x_96_, v_a_87_);
lean_dec_ref_known(v_a_87_, 2);
lean_inc(v_repl_86_);
v___x_111_ = lp_lean_x2dftml_LeanFtml_replaceAll_go(v_pat_85_, v_repl_86_, v___x_110_, v_n_95_);
lean_dec(v_n_95_);
v___x_112_ = l_List_appendTR___redArg(v_repl_86_, v___x_111_);
return v___x_112_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAll_go___boxed(lean_object* v_pat_113_, lean_object* v_repl_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = lp_lean_x2dftml_LeanFtml_replaceAll_go(v_pat_113_, v_repl_114_, v_a_115_, v_a_116_);
lean_dec(v_a_116_);
lean_dec(v_pat_113_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAll(lean_object* v_pat_118_, lean_object* v_repl_119_, lean_object* v_s_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = l_List_lengthTR___redArg(v_s_120_);
v___x_122_ = lean_unsigned_to_nat(1u);
v___x_123_ = lean_nat_add(v___x_121_, v___x_122_);
lean_dec(v___x_121_);
v___x_124_ = lp_lean_x2dftml_LeanFtml_replaceAll_go(v_pat_118_, v_repl_119_, v_s_120_, v___x_123_);
lean_dec(v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAll___boxed(lean_object* v_pat_125_, lean_object* v_repl_126_, lean_object* v_s_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lp_lean_x2dftml_LeanFtml_replaceAll(v_pat_125_, v_repl_126_, v_s_127_);
lean_dec(v_pat_125_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phAt(lean_object* v_s_131_, lean_object* v_i_132_){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
lean_inc(v_i_132_);
v___x_133_ = l_List_get_x3fInternal___redArg(v_s_131_, v_i_132_);
v___x_134_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phAt___closed__0));
v___x_135_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_133_, v___x_134_);
lean_dec(v___x_133_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; 
lean_dec(v_i_132_);
v___x_136_ = lean_box(0);
return v___x_136_;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v_rest_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v_ds_142_; uint8_t v___x_143_; 
v___x_137_ = lean_unsigned_to_nat(1u);
v___x_138_ = lean_nat_add(v_i_132_, v___x_137_);
lean_dec(v_i_132_);
v_rest_139_ = l_List_drop___redArg(v___x_138_, v_s_131_);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_rest_139_);
v_ds_142_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(v_rest_139_, v_rest_139_, v___x_141_);
v___x_143_ = l_List_isEmpty___redArg(v_ds_142_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_144_ = l_List_lengthTR___redArg(v_ds_142_);
lean_inc(v___x_144_);
v___x_145_ = l_List_get_x3fInternal___redArg(v_rest_139_, v___x_144_);
lean_dec(v_rest_139_);
v___x_146_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_145_, v___x_134_);
lean_dec(v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
lean_dec(v___x_144_);
lean_dec(v_ds_142_);
v___x_147_ = lean_box(0);
return v___x_147_;
}
else
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_148_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v___x_140_, v_ds_142_);
lean_dec(v_ds_142_);
v___x_149_ = lean_unsigned_to_nat(2u);
v___x_150_ = lean_nat_add(v___x_144_, v___x_149_);
lean_dec(v___x_144_);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_148_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
v___x_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
return v___x_152_;
}
}
else
{
lean_object* v___x_153_; 
lean_dec(v_ds_142_);
lean_dec(v_rest_139_);
v___x_153_ = lean_box(0);
return v___x_153_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phAt___boxed(lean_object* v_s_154_, lean_object* v_i_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = lp_lean_x2dftml_LeanFtml_phAt(v_s_154_, v_i_155_);
lean_dec(v_s_154_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allPh_go(lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
if (lean_obj_tag(v_a_157_) == 0)
{
lean_object* v___x_160_; 
lean_dec(v_a_159_);
lean_dec(v_a_158_);
v___x_160_ = lean_box(0);
return v___x_160_;
}
else
{
lean_object* v_head_161_; lean_object* v_tail_162_; lean_object* v_zero_163_; uint8_t v_isZero_164_; 
v_head_161_ = lean_ctor_get(v_a_157_, 0);
v_tail_162_ = lean_ctor_get(v_a_157_, 1);
v_zero_163_ = lean_unsigned_to_nat(0u);
v_isZero_164_ = lean_nat_dec_eq(v_a_159_, v_zero_163_);
if (v_isZero_164_ == 1)
{
lean_object* v___x_165_; 
lean_dec_ref_known(v_a_157_, 2);
lean_dec(v_a_159_);
lean_dec(v_a_158_);
v___x_165_ = lean_box(0);
return v___x_165_;
}
else
{
lean_object* v_one_166_; lean_object* v_n_167_; lean_object* v___x_171_; uint8_t v___x_172_; 
v_one_166_ = lean_unsigned_to_nat(1u);
v_n_167_ = lean_nat_sub(v_a_159_, v_one_166_);
lean_dec(v_a_159_);
v___x_171_ = lean_unsigned_to_nat(255u);
v___x_172_ = lean_nat_dec_eq(v_head_161_, v___x_171_);
if (v___x_172_ == 0)
{
lean_inc(v_tail_162_);
lean_dec_ref_known(v_a_157_, 2);
goto v___jp_168_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = lp_lean_x2dftml_LeanFtml_phAt(v_a_157_, v_zero_163_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_inc(v_tail_162_);
lean_dec_ref_known(v_a_157_, 2);
goto v___jp_168_;
}
else
{
lean_object* v_val_174_; lean_object* v_snd_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_186_; 
v_val_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_val_174_);
lean_dec_ref_known(v___x_173_, 1);
v_snd_175_ = lean_ctor_get(v_val_174_, 1);
lean_inc_n(v_snd_175_, 2);
lean_inc(v_a_158_);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v_a_158_);
lean_ctor_set(v___x_176_, 1, v_val_174_);
v___x_177_ = l_List_drop___redArg(v_snd_175_, v_a_157_);
v_isSharedCheck_186_ = !lean_is_exclusive(v_a_157_);
if (v_isSharedCheck_186_ == 0)
{
lean_object* v_unused_187_; lean_object* v_unused_188_; 
v_unused_187_ = lean_ctor_get(v_a_157_, 1);
lean_dec(v_unused_187_);
v_unused_188_ = lean_ctor_get(v_a_157_, 0);
lean_dec(v_unused_188_);
v___x_179_ = v_a_157_;
v_isShared_180_ = v_isSharedCheck_186_;
goto v_resetjp_178_;
}
else
{
lean_dec(v_a_157_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_186_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_181_ = lean_nat_add(v_a_158_, v_snd_175_);
lean_dec(v_snd_175_);
lean_dec(v_a_158_);
v___x_182_ = lp_lean_x2dftml_LeanFtml_allPh_go(v___x_177_, v___x_181_, v_n_167_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v___x_182_);
lean_ctor_set(v___x_179_, 0, v___x_176_);
v___x_184_ = v___x_179_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
v___jp_168_:
{
lean_object* v___x_169_; 
v___x_169_ = lean_nat_add(v_a_158_, v_one_166_);
lean_dec(v_a_158_);
v_a_157_ = v_tail_162_;
v_a_158_ = v___x_169_;
v_a_159_ = v_n_167_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allPh(lean_object* v_s_189_){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = l_List_lengthTR___redArg(v_s_189_);
v___x_192_ = lean_unsigned_to_nat(1u);
v___x_193_ = lean_nat_add(v___x_191_, v___x_192_);
lean_dec(v___x_191_);
v___x_194_ = lp_lean_x2dftml_LeanFtml_allPh_go(v_s_189_, v___x_190_, v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setIdx___redArg(lean_object* v_l_197_, lean_object* v_i_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_200_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_setIdx___redArg___closed__0));
lean_inc(v_i_198_);
lean_inc(v_l_197_);
v___x_201_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_l_197_, v_l_197_, v_i_198_, v___x_200_);
v___x_202_ = lean_box(0);
v___x_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_203_, 0, v_a_199_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = l_List_appendTR___redArg(v___x_201_, v___x_203_);
v___x_205_ = lean_unsigned_to_nat(1u);
v___x_206_ = lean_nat_add(v_i_198_, v___x_205_);
lean_dec(v_i_198_);
v___x_207_ = l_List_drop___redArg(v___x_206_, v_l_197_);
lean_dec(v_l_197_);
v___x_208_ = l_List_appendTR___redArg(v___x_204_, v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setIdx(lean_object* v_00_u03b1_209_, lean_object* v_l_210_, lean_object* v_i_211_, lean_object* v_a_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lp_lean_x2dftml_LeanFtml_setIdx___redArg(v_l_210_, v_i_211_, v_a_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ltrimSpaceTab(lean_object* v_b_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_b_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ltrimSpaceTab___boxed(lean_object* v_b_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = lp_lean_x2dftml_LeanFtml_ltrimSpaceTab(v_b_216_);
lean_dec(v_b_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripSpaceTab(lean_object* v_b_218_){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_219_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_b_218_);
v___x_220_ = l_List_reverse___redArg(v___x_219_);
v___x_221_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v___x_220_);
lean_dec(v___x_220_);
v___x_222_ = l_List_reverse___redArg(v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripSpaceTab___boxed(lean_object* v_b_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = lp_lean_x2dftml_LeanFtml_stripSpaceTab(v_b_223_);
lean_dec(v_b_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimWsBoth(lean_object* v_b_225_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_226_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(v_b_225_);
v___x_227_ = l_List_reverse___redArg(v___x_226_);
v___x_228_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(v___x_227_);
lean_dec(v___x_227_);
v___x_229_ = l_List_reverse___redArg(v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimWsBoth___boxed(lean_object* v_b_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = lp_lean_x2dftml_LeanFtml_trimWsBoth(v_b_230_);
lean_dec(v_b_230_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_addTok(lean_object* v_rule_232_, lean_object* v_opts_233_, lean_object* v_toks_234_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_235_ = l_List_lengthTR___redArg(v_toks_234_);
v___x_236_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_235_);
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v_rule_232_);
lean_ctor_set(v___x_237_, 1, v_opts_233_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = l_List_appendTR___redArg(v_toks_234_, v___x_239_);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_236_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_setTrail_go___closed__0));
v___x_244_ = l_String_toListImpl(v___x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setTrail_go(lean_object* v_val_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
if (lean_obj_tag(v_a_246_) == 0)
{
lean_dec(v_val_245_);
return v_a_246_;
}
else
{
lean_object* v_head_248_; lean_object* v_tail_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_276_; 
v_head_248_ = lean_ctor_get(v_a_246_, 0);
v_tail_249_ = lean_ctor_get(v_a_246_, 1);
v_isSharedCheck_276_ = !lean_is_exclusive(v_a_246_);
if (v_isSharedCheck_276_ == 0)
{
v___x_251_ = v_a_246_;
v_isShared_252_ = v_isSharedCheck_276_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_tail_249_);
lean_inc(v_head_248_);
lean_dec(v_a_246_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_276_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_zero_253_; uint8_t v_isZero_254_; 
v_zero_253_ = lean_unsigned_to_nat(0u);
v_isZero_254_ = lean_nat_dec_eq(v_a_247_, v_zero_253_);
if (v_isZero_254_ == 1)
{
lean_object* v_rule_255_; lean_object* v_opts_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_269_; 
v_rule_255_ = lean_ctor_get(v_head_248_, 0);
v_opts_256_ = lean_ctor_get(v_head_248_, 1);
v_isSharedCheck_269_ = !lean_is_exclusive(v_head_248_);
if (v_isSharedCheck_269_ == 0)
{
v___x_258_ = v_head_248_;
v_isShared_259_ = v_isSharedCheck_269_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_opts_256_);
lean_inc(v_rule_255_);
lean_dec(v_head_248_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_269_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_260_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1, &lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1);
v___x_261_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_245_);
v___x_262_ = lp_lean_x2dftml_LeanFtml_omSet(v_opts_256_, v___x_260_, v___x_261_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v___x_262_);
v___x_264_ = v___x_258_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_rule_255_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v___x_262_);
v___x_264_ = v_reuseFailAlloc_268_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
lean_object* v___x_266_; 
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_264_);
v___x_266_ = v___x_251_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_264_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v_tail_249_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
else
{
lean_object* v_one_270_; lean_object* v_n_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v_one_270_ = lean_unsigned_to_nat(1u);
v_n_271_ = lean_nat_sub(v_a_247_, v_one_270_);
v___x_272_ = lp_lean_x2dftml_LeanFtml_setTrail_go(v_val_245_, v_tail_249_, v_n_271_);
lean_dec(v_n_271_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v___x_272_);
v___x_274_ = v___x_251_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_head_248_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setTrail_go___boxed(lean_object* v_val_277_, lean_object* v_a_278_, lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = lp_lean_x2dftml_LeanFtml_setTrail_go(v_val_277_, v_a_278_, v_a_279_);
lean_dec(v_a_279_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setTrail(lean_object* v_toks_281_, lean_object* v_key_282_, lean_object* v_val_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lp_lean_x2dftml_LeanFtml_setTrail_go(v_val_283_, v_toks_281_, v_key_282_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_setTrail___boxed(lean_object* v_toks_285_, lean_object* v_key_286_, lean_object* v_val_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = lp_lean_x2dftml_LeanFtml_setTrail(v_toks_285_, v_key_286_, v_val_287_);
lean_dec(v_key_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokAt(lean_object* v_toks_289_, lean_object* v_k_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_List_get_x3fInternal___redArg(v_toks_289_, v_k_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokAt___boxed(lean_object* v_toks_292_, lean_object* v_k_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = lp_lean_x2dftml_LeanFtml_tokAt(v_toks_292_, v_k_293_);
lean_dec(v_toks_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStr(lean_object* v_e_295_, lean_object* v_key_296_){
_start:
{
lean_object* v_opts_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_opts_297_ = lean_ctor_get(v_e_295_, 1);
v___x_298_ = l_String_toListImpl(v_key_296_);
v___x_299_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_297_, v___x_298_);
lean_dec(v___x_298_);
if (lean_obj_tag(v___x_299_) == 1)
{
lean_object* v_val_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_309_; 
v_val_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_309_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_309_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_val_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_309_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
if (lean_obj_tag(v_val_300_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_306_; 
v_a_304_ = lean_ctor_get(v_val_300_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v_val_300_, 1);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v_a_304_);
v___x_306_ = v___x_302_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_304_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
else
{
lean_object* v___x_308_; 
lean_del_object(v___x_302_);
lean_dec(v_val_300_);
v___x_308_ = lean_box(0);
return v___x_308_;
}
}
}
else
{
lean_object* v___x_310_; 
lean_dec(v___x_299_);
v___x_310_ = lean_box(0);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStr___boxed(lean_object* v_e_311_, lean_object* v_key_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = lp_lean_x2dftml_LeanFtml_optStr(v_e_311_, v_key_312_);
lean_dec_ref(v_e_311_);
return v_res_313_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optIntEq(lean_object* v_e_314_, lean_object* v_key_315_, lean_object* v_n_316_){
_start:
{
lean_object* v_opts_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_opts_317_ = lean_ctor_get(v_e_314_, 1);
v___x_318_ = l_String_toListImpl(v_key_315_);
v___x_319_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_317_, v___x_318_);
lean_dec(v___x_318_);
if (lean_obj_tag(v___x_319_) == 1)
{
lean_object* v_val_320_; 
v_val_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_val_320_);
lean_dec_ref_known(v___x_319_, 1);
if (lean_obj_tag(v_val_320_) == 1)
{
lean_object* v_a_321_; uint8_t v___x_322_; 
v_a_321_ = lean_ctor_get(v_val_320_, 0);
lean_inc(v_a_321_);
lean_dec_ref_known(v_val_320_, 1);
v___x_322_ = lean_int_dec_eq(v_a_321_, v_n_316_);
lean_dec(v_a_321_);
return v___x_322_;
}
else
{
uint8_t v___x_323_; 
lean_dec(v_val_320_);
v___x_323_ = 0;
return v___x_323_;
}
}
else
{
uint8_t v___x_324_; 
lean_dec(v___x_319_);
v___x_324_ = 0;
return v___x_324_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optIntEq___boxed(lean_object* v_e_325_, lean_object* v_key_326_, lean_object* v_n_327_){
_start:
{
uint8_t v_res_328_; lean_object* v_r_329_; 
v_res_328_ = lp_lean_x2dftml_LeanFtml_optIntEq(v_e_325_, v_key_326_, v_n_327_);
lean_dec(v_n_327_);
lean_dec_ref(v_e_325_);
v_r_329_ = lean_box(v_res_328_);
return v_r_329_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_instBEqOption_beq___at___00LeanFtml_tokTypeIs_spec__0(lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
if (lean_obj_tag(v_x_330_) == 0)
{
if (lean_obj_tag(v_x_331_) == 0)
{
uint8_t v___x_332_; 
v___x_332_ = 1;
return v___x_332_;
}
else
{
uint8_t v___x_333_; 
v___x_333_ = 0;
return v___x_333_;
}
}
else
{
if (lean_obj_tag(v_x_331_) == 0)
{
uint8_t v___x_334_; 
v___x_334_ = 0;
return v___x_334_;
}
else
{
lean_object* v_val_335_; lean_object* v_val_336_; uint8_t v___x_337_; 
v_val_335_ = lean_ctor_get(v_x_330_, 0);
v_val_336_ = lean_ctor_get(v_x_331_, 0);
v___x_337_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_val_335_, v_val_336_);
return v___x_337_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_instBEqOption_beq___at___00LeanFtml_tokTypeIs_spec__0___boxed(lean_object* v_x_338_, lean_object* v_x_339_){
_start:
{
uint8_t v_res_340_; lean_object* v_r_341_; 
v_res_340_ = lp_lean_x2dftml_instBEqOption_beq___at___00LeanFtml_tokTypeIs_spec__0(v_x_338_, v_x_339_);
lean_dec(v_x_339_);
lean_dec(v_x_338_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_tokTypeIs(lean_object* v_e_343_, lean_object* v_t_344_){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_345_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tokTypeIs___closed__0));
v___x_346_ = lp_lean_x2dftml_LeanFtml_optStr(v_e_343_, v___x_345_);
v___x_347_ = l_String_toListImpl(v_t_344_);
v___x_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
v___x_349_ = lp_lean_x2dftml_instBEqOption_beq___at___00LeanFtml_tokTypeIs_spec__0(v___x_346_, v___x_348_);
lean_dec_ref_known(v___x_348_, 1);
lean_dec(v___x_346_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokTypeIs___boxed(lean_object* v_e_350_, lean_object* v_t_351_){
_start:
{
uint8_t v_res_352_; lean_object* v_r_353_; 
v_res_352_ = lp_lean_x2dftml_LeanFtml_tokTypeIs(v_e_350_, v_t_351_);
lean_dec_ref(v_e_350_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineItem(lean_object* v_line_359_){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_sp_362_; lean_object* v___x_363_; 
v___x_360_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_line_359_);
v___x_361_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_line_359_, v_line_359_, v___x_360_);
v_sp_362_ = l_List_lengthTR___redArg(v___x_361_);
lean_dec(v___x_361_);
lean_inc(v_sp_362_);
v___x_363_ = l_List_drop___redArg(v_sp_362_, v_line_359_);
lean_dec(v_line_359_);
if (lean_obj_tag(v___x_363_) == 1)
{
lean_object* v_tail_364_; 
v_tail_364_ = lean_ctor_get(v___x_363_, 1);
lean_inc(v_tail_364_);
if (lean_obj_tag(v_tail_364_) == 1)
{
lean_object* v_head_365_; lean_object* v_head_366_; lean_object* v_tail_367_; lean_object* v___x_372_; uint8_t v___x_373_; 
v_head_365_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_head_365_);
lean_dec_ref_known(v___x_363_, 2);
v_head_366_ = lean_ctor_get(v_tail_364_, 0);
lean_inc(v_head_366_);
v_tail_367_ = lean_ctor_get(v_tail_364_, 1);
lean_inc(v_tail_367_);
lean_dec_ref_known(v_tail_364_, 2);
v___x_372_ = lean_unsigned_to_nat(32u);
v___x_373_ = lean_nat_dec_eq(v_head_366_, v___x_372_);
lean_dec(v_head_366_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; 
lean_dec(v_tail_367_);
lean_dec(v_head_365_);
lean_dec(v_sp_362_);
v___x_374_ = lean_box(0);
return v___x_374_;
}
else
{
lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_375_ = lean_unsigned_to_nat(42u);
v___x_376_ = lean_nat_dec_eq(v_head_365_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_377_ = lean_unsigned_to_nat(35u);
v___x_378_ = lean_nat_dec_eq(v_head_365_, v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; 
lean_dec(v_tail_367_);
lean_dec(v_head_365_);
lean_dec(v_sp_362_);
v___x_379_ = lean_box(0);
return v___x_379_;
}
else
{
goto v___jp_368_;
}
}
else
{
goto v___jp_368_;
}
}
v___jp_368_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_tail_367_);
lean_dec(v_tail_367_);
v___x_370_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_370_, 0, v_sp_362_);
lean_ctor_set(v___x_370_, 1, v_head_365_);
lean_ctor_set(v___x_370_, 2, v___x_369_);
v___x_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
return v___x_371_;
}
}
else
{
lean_object* v___x_380_; 
lean_dec_ref_known(v___x_363_, 2);
lean_dec(v_tail_364_);
lean_dec(v_sp_362_);
v___x_380_ = lean_box(0);
return v___x_380_;
}
}
else
{
lean_object* v___x_381_; 
lean_dec(v___x_363_);
lean_dec(v_sp_362_);
v___x_381_ = lean_box(0);
return v___x_381_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectRawItems_go(lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
if (lean_obj_tag(v_a_382_) == 0)
{
lean_object* v___x_384_; 
v___x_384_ = lean_box(0);
return v___x_384_;
}
else
{
lean_object* v_zero_385_; uint8_t v_isZero_386_; 
v_zero_385_ = lean_unsigned_to_nat(0u);
v_isZero_386_ = lean_nat_dec_eq(v_a_383_, v_zero_385_);
if (v_isZero_386_ == 1)
{
lean_object* v___x_387_; 
lean_dec(v_a_382_);
v___x_387_ = lean_box(0);
return v___x_387_;
}
else
{
lean_object* v___x_388_; 
lean_inc(v_a_382_);
v___x_388_ = lp_lean_x2dftml_LeanFtml_firstLine(v_a_382_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v___x_389_; 
v___x_389_ = lp_lean_x2dftml_LeanFtml_lineItem(v_a_382_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v___x_390_; 
v___x_390_ = lean_box(0);
return v___x_390_;
}
else
{
lean_object* v_val_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_val_391_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_val_391_);
lean_dec_ref_known(v___x_389_, 1);
v___x_392_ = lean_box(0);
v___x_393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_393_, 0, v_val_391_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
return v___x_393_;
}
}
else
{
lean_object* v_val_394_; lean_object* v_fst_395_; lean_object* v_snd_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_a_382_);
v_val_394_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_val_394_);
lean_dec_ref_known(v___x_388_, 1);
v_fst_395_ = lean_ctor_get(v_val_394_, 0);
v_snd_396_ = lean_ctor_get(v_val_394_, 1);
v_isSharedCheck_416_ = !lean_is_exclusive(v_val_394_);
if (v_isSharedCheck_416_ == 0)
{
v___x_398_ = v_val_394_;
v_isShared_399_ = v_isSharedCheck_416_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_snd_396_);
lean_inc(v_fst_395_);
lean_dec(v_val_394_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_416_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v_one_400_; lean_object* v_n_401_; lean_object* v___y_403_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v_one_400_ = lean_unsigned_to_nat(1u);
v_n_401_ = lean_nat_sub(v_a_383_, v_one_400_);
v___x_406_ = lean_array_mk(v_fst_395_);
v___x_407_ = lean_array_pop(v___x_406_);
v___x_408_ = lean_array_to_list(v___x_407_);
v___x_409_ = lp_lean_x2dftml_LeanFtml_lineItem(v___x_408_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v___x_410_; 
lean_del_object(v___x_398_);
v___x_410_ = lean_box(0);
v___y_403_ = v___x_410_;
goto v___jp_402_;
}
else
{
lean_object* v_val_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v_val_411_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_val_411_);
lean_dec_ref_known(v___x_409_, 1);
v___x_412_ = lean_box(0);
if (v_isShared_399_ == 0)
{
lean_ctor_set_tag(v___x_398_, 1);
lean_ctor_set(v___x_398_, 1, v___x_412_);
lean_ctor_set(v___x_398_, 0, v_val_411_);
v___x_414_ = v___x_398_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_val_411_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
v___y_403_ = v___x_414_;
goto v___jp_402_;
}
}
v___jp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lp_lean_x2dftml_LeanFtml_collectRawItems_go(v_snd_396_, v_n_401_);
lean_dec(v_n_401_);
v___x_405_ = l_List_appendTR___redArg(v___y_403_, v___x_404_);
return v___x_405_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectRawItems_go___boxed(lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = lp_lean_x2dftml_LeanFtml_collectRawItems_go(v_a_417_, v_a_418_);
lean_dec(v_a_418_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectRawItems(lean_object* v_run_420_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_421_ = l_List_lengthTR___redArg(v_run_420_);
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_nat_add(v___x_421_, v___x_422_);
lean_dec(v___x_421_);
v___x_424_ = lp_lean_x2dftml_LeanFtml_collectRawItems_go(v_run_420_, v___x_423_);
lean_dec(v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_lookaheadBlocks(lean_object* v_m_437_, lean_object* v_rest_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_439_ = lean_unsigned_to_nat(2u);
v___x_440_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_rest_438_);
v___x_441_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_rest_438_, v_rest_438_, v___x_439_, v___x_440_);
v___x_442_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__0));
v___x_443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_443_, 0, v_m_437_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_441_, v___x_443_);
lean_dec_ref_known(v___x_443_, 2);
lean_dec(v___x_441_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v_sp_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
lean_inc(v_rest_438_);
v___x_445_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_rest_438_, v_rest_438_, v___x_440_);
v_sp_446_ = l_List_lengthTR___redArg(v___x_445_);
lean_dec(v___x_445_);
v___x_447_ = lean_unsigned_to_nat(1u);
v___x_448_ = lean_nat_dec_le(v___x_447_, v_sp_446_);
if (v___x_448_ == 0)
{
lean_dec(v_sp_446_);
lean_dec(v_rest_438_);
return v___x_448_;
}
else
{
lean_object* v_r2_449_; lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v_r2_449_ = l_List_drop___redArg(v_sp_446_, v_rest_438_);
lean_dec(v_rest_438_);
lean_inc(v_r2_449_);
v___x_450_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r2_449_, v_r2_449_, v___x_439_, v___x_440_);
v___x_451_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__1));
v___x_452_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_450_, v___x_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_453_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__2));
v___x_454_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_450_, v___x_453_);
lean_dec(v___x_450_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
lean_inc(v_r2_449_);
v___x_455_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r2_449_, v_r2_449_, v___x_447_, v___x_440_);
lean_dec(v_r2_449_);
v___x_456_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___x_457_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_455_, v___x_456_);
lean_dec(v___x_455_);
return v___x_457_;
}
else
{
lean_dec(v_r2_449_);
return v___x_454_;
}
}
else
{
lean_dec(v___x_450_);
lean_dec(v_r2_449_);
return v___x_452_;
}
}
}
else
{
lean_dec(v_rest_438_);
return v___x_444_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lookaheadBlocks___boxed(lean_object* v_m_458_, lean_object* v_rest_459_){
_start:
{
uint8_t v_res_460_; lean_object* v_r_461_; 
v_res_460_ = lp_lean_x2dftml_LeanFtml_lookaheadBlocks(v_m_458_, v_rest_459_);
v_r_461_ = lean_box(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeRunExtend(lean_object* v_m_462_, lean_object* v_acc_463_, lean_object* v_rest_464_, lean_object* v_x_465_){
_start:
{
lean_object* v_zero_466_; uint8_t v_isZero_467_; 
v_zero_466_ = lean_unsigned_to_nat(0u);
v_isZero_467_ = lean_nat_dec_eq(v_x_465_, v_zero_466_);
if (v_isZero_467_ == 1)
{
lean_object* v___x_468_; 
lean_dec(v_x_465_);
lean_dec(v_rest_464_);
lean_dec(v_acc_463_);
lean_dec(v_m_462_);
v___x_468_ = lean_box(0);
return v___x_468_;
}
else
{
uint8_t v___x_469_; 
lean_inc(v_rest_464_);
lean_inc(v_m_462_);
v___x_469_ = lp_lean_x2dftml_LeanFtml_lookaheadBlocks(v_m_462_, v_rest_464_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; lean_object* v___x_471_; 
lean_dec(v_x_465_);
lean_dec(v_m_462_);
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v_acc_463_);
lean_ctor_set(v___x_470_, 1, v_rest_464_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
else
{
lean_object* v___x_472_; 
v___x_472_ = lp_lean_x2dftml_LeanFtml_firstLine(v_rest_464_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_dec(v_x_465_);
lean_dec(v_acc_463_);
lean_dec(v_m_462_);
return v___x_472_;
}
else
{
lean_object* v_val_473_; lean_object* v_fst_474_; lean_object* v_snd_475_; lean_object* v_one_476_; lean_object* v_n_477_; lean_object* v___x_478_; 
v_val_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_val_473_);
lean_dec_ref_known(v___x_472_, 1);
v_fst_474_ = lean_ctor_get(v_val_473_, 0);
lean_inc(v_fst_474_);
v_snd_475_ = lean_ctor_get(v_val_473_, 1);
lean_inc(v_snd_475_);
lean_dec(v_val_473_);
v_one_476_ = lean_unsigned_to_nat(1u);
v_n_477_ = lean_nat_sub(v_x_465_, v_one_476_);
lean_dec(v_x_465_);
v___x_478_ = l_List_appendTR___redArg(v_acc_463_, v_fst_474_);
v_acc_463_ = v___x_478_;
v_rest_464_ = v_snd_475_;
v_x_465_ = v_n_477_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeRunAt(lean_object* v_s_480_){
_start:
{
if (lean_obj_tag(v_s_480_) == 1)
{
lean_object* v_head_481_; lean_object* v_tail_482_; 
v_head_481_ = lean_ctor_get(v_s_480_, 0);
lean_inc(v_head_481_);
v_tail_482_ = lean_ctor_get(v_s_480_, 1);
if (lean_obj_tag(v_tail_482_) == 1)
{
lean_object* v_head_492_; lean_object* v___x_493_; uint8_t v___x_494_; 
v_head_492_ = lean_ctor_get(v_tail_482_, 0);
v___x_493_ = lean_unsigned_to_nat(32u);
v___x_494_ = lean_nat_dec_eq(v_head_492_, v___x_493_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; 
lean_dec(v_head_481_);
lean_dec_ref_known(v_s_480_, 2);
v___x_495_ = lean_box(0);
return v___x_495_;
}
else
{
lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_496_ = lean_unsigned_to_nat(42u);
v___x_497_ = lean_nat_dec_eq(v_head_481_, v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = lean_unsigned_to_nat(35u);
v___x_499_ = lean_nat_dec_eq(v_head_481_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; 
lean_dec(v_head_481_);
lean_dec_ref_known(v_s_480_, 2);
v___x_500_ = lean_box(0);
return v___x_500_;
}
else
{
goto v___jp_483_;
}
}
else
{
goto v___jp_483_;
}
}
}
else
{
lean_object* v___x_501_; 
lean_dec(v_head_481_);
lean_dec_ref_known(v_s_480_, 2);
v___x_501_ = lean_box(0);
return v___x_501_;
}
v___jp_483_:
{
lean_object* v___x_484_; 
v___x_484_ = lp_lean_x2dftml_LeanFtml_firstLine(v_s_480_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_dec(v_head_481_);
return v___x_484_;
}
else
{
lean_object* v_val_485_; lean_object* v_fst_486_; lean_object* v_snd_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_val_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_val_485_);
lean_dec_ref_known(v___x_484_, 1);
v_fst_486_ = lean_ctor_get(v_val_485_, 0);
lean_inc(v_fst_486_);
v_snd_487_ = lean_ctor_get(v_val_485_, 1);
lean_inc(v_snd_487_);
lean_dec(v_val_485_);
v___x_488_ = l_List_lengthTR___redArg(v_snd_487_);
v___x_489_ = lean_unsigned_to_nat(1u);
v___x_490_ = lean_nat_add(v___x_488_, v___x_489_);
lean_dec(v___x_488_);
v___x_491_ = lp_lean_x2dftml_LeanFtml_nativeRunExtend(v_head_481_, v_fst_486_, v_snd_487_, v___x_490_);
return v___x_491_;
}
}
}
else
{
lean_object* v___x_502_; 
lean_dec(v_s_480_);
v___x_502_ = lean_box(0);
return v___x_502_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_markerPrefix(lean_object* v_m_510_){
_start:
{
lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_511_ = lean_unsigned_to_nat(42u);
v___x_512_ = lean_nat_dec_eq(v_m_510_, v___x_511_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; 
v___x_513_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_markerPrefix___closed__0));
return v___x_513_;
}
else
{
lean_object* v___x_514_; 
v___x_514_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_markerPrefix___closed__1));
return v___x_514_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_markerPrefix___boxed(lean_object* v_m_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = lp_lean_x2dftml_LeanFtml_markerPrefix(v_m_515_);
lean_dec(v_m_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emitList(lean_object* v_out_518_, lean_object* v_toks_519_, lean_object* v_opts_520_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v_fst_523_; lean_object* v_snd_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_532_; 
v___x_521_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_522_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_521_, v_opts_520_, v_toks_519_);
v_fst_523_ = lean_ctor_get(v___x_522_, 0);
v_snd_524_ = lean_ctor_get(v___x_522_, 1);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_532_ == 0)
{
v___x_526_ = v___x_522_;
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_snd_524_);
lean_inc(v_fst_523_);
lean_dec(v___x_522_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = l_List_appendTR___redArg(v_out_518_, v_fst_523_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_528_);
v___x_530_ = v___x_526_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_snd_524_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tokTypeIs___closed__0));
v___x_536_ = l_String_toListImpl(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__3));
v___x_540_ = l_String_toListImpl(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__5));
v___x_543_ = l_String_toListImpl(v___x_542_);
return v___x_543_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__8(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__7));
v___x_546_ = l_String_toListImpl(v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__12(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__11));
v___x_551_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__13(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__12, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__12);
v___x_553_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_552_);
return v___x_553_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__14(void){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_554_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__13, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__13);
v___x_555_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
lean_ctor_set(v___x_556_, 1, v___x_554_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_closeListLevel(lean_object* v_out_557_, lean_object* v_toks_558_, lean_object* v_stack_559_){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v_level_562_; lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___x_592_; 
v___x_560_ = l_List_lengthTR___redArg(v_stack_559_);
v___x_561_ = lean_unsigned_to_nat(1u);
v_level_562_ = lean_nat_sub(v___x_560_, v___x_561_);
lean_dec(v___x_560_);
lean_inc(v_level_562_);
v___x_592_ = l_List_get_x3fInternal___redArg(v_stack_559_, v_level_562_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec(v_level_562_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v_toks_558_);
lean_ctor_set(v___x_593_, 1, v_stack_559_);
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v_out_557_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
return v___x_594_;
}
else
{
lean_object* v_val_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_635_; 
v_val_595_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_635_ == 0)
{
v___x_597_ = v___x_592_;
v_isShared_598_ = v_isSharedCheck_635_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_val_595_);
lean_dec(v___x_592_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_635_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v_typ_599_; uint8_t v_inSub_600_; uint8_t v_tailSub_601_; lean_object* v_fst_603_; lean_object* v_snd_604_; 
v_typ_599_ = lean_ctor_get(v_val_595_, 0);
lean_inc(v_typ_599_);
v_inSub_600_ = lean_ctor_get_uint8(v_val_595_, sizeof(void*)*1);
v_tailSub_601_ = lean_ctor_get_uint8(v_val_595_, sizeof(void*)*1 + 1);
lean_dec(v_val_595_);
if (v_tailSub_601_ == 0)
{
v_fst_603_ = v_out_557_;
v_snd_604_ = v_toks_558_;
goto v___jp_602_;
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v_fst_633_; lean_object* v_snd_634_; 
v___x_624_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__14, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__14);
v___x_625_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4);
lean_inc(v_level_562_);
v___x_626_ = lean_nat_to_int(v_level_562_);
v___x_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_625_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = lean_box(0);
v___x_630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_628_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v___x_631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_624_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = lp_lean_x2dftml_LeanFtml_emitList(v_out_557_, v_toks_558_, v___x_631_);
v_fst_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_fst_633_);
v_snd_634_ = lean_ctor_get(v___x_632_, 1);
lean_inc(v_snd_634_);
lean_dec_ref(v___x_632_);
v_fst_603_ = v_fst_633_;
v_snd_604_ = v_snd_634_;
goto v___jp_602_;
}
v___jp_602_:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_605_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_606_ = lp_lean_x2dftml_LeanFtml_markerPrefix(v_typ_599_);
lean_dec(v_typ_599_);
v___x_607_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__2));
v___x_608_ = lean_string_append(v___x_606_, v___x_607_);
v___x_609_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_608_);
v___x_610_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_609_);
v___x_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_605_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4);
lean_inc(v_level_562_);
v___x_613_ = lean_nat_to_int(v_level_562_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 0, v___x_613_);
v___x_615_ = v___x_597_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_613_);
v___x_615_ = v_reuseFailAlloc_623_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_612_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6);
v___x_618_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_618_, 0, v_inSub_600_);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_617_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__8, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__8);
if (v_tailSub_601_ == 0)
{
lean_object* v___x_621_; 
v___x_621_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__9));
v___y_564_ = v___x_619_;
v___y_565_ = v___x_620_;
v___y_566_ = v_snd_604_;
v___y_567_ = v_fst_603_;
v___y_568_ = v___x_616_;
v___y_569_ = v___x_611_;
v___y_570_ = v___x_621_;
goto v___jp_563_;
}
else
{
lean_object* v___x_622_; 
v___x_622_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__10));
v___y_564_ = v___x_619_;
v___y_565_ = v___x_620_;
v___y_566_ = v_snd_604_;
v___y_567_ = v_fst_603_;
v___y_568_ = v___x_616_;
v___y_569_ = v___x_611_;
v___y_570_ = v___x_622_;
goto v___jp_563_;
}
}
}
}
}
v___jp_563_:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_591_; 
lean_inc_ref(v___y_570_);
v___x_571_ = lp_lean_x2dftml_LeanFtml_litBytes(v___y_570_);
v___x_572_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_571_);
lean_inc(v___y_565_);
v___x_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_573_, 0, v___y_565_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_576_, 0, v___y_564_);
lean_ctor_set(v___x_576_, 1, v___x_575_);
v___x_577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_577_, 0, v___y_568_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
v___x_578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_578_, 0, v___y_569_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = lp_lean_x2dftml_LeanFtml_emitList(v___y_567_, v___y_566_, v___x_578_);
v_fst_580_ = lean_ctor_get(v___x_579_, 0);
v_snd_581_ = lean_ctor_get(v___x_579_, 1);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_591_ == 0)
{
v___x_583_ = v___x_579_;
v_isShared_584_ = v_isSharedCheck_591_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_snd_581_);
lean_inc(v_fst_580_);
lean_dec(v___x_579_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_591_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_588_; 
v___x_585_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__0));
lean_inc(v_stack_559_);
v___x_586_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_stack_559_, v_stack_559_, v_level_562_, v___x_585_);
lean_dec(v_stack_559_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 1, v___x_586_);
lean_ctor_set(v___x_583_, 0, v_snd_581_);
v___x_588_ = v___x_583_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_snd_581_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v___x_586_);
v___x_588_ = v_reuseFailAlloc_590_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_object* v___x_589_; 
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v_fst_580_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___lam__0(lean_object* v_toks_636_, lean_object* v_stack_637_, lean_object* v_out_638_, lean_object* v_00___639_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_640_, 0, v_toks_636_);
lean_ctor_set(v___x_640_, 1, v_stack_637_);
v___x_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_641_, 0, v_out_638_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
return v___x_641_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_openListLevels___closed__2(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_openListLevels___closed__1));
v___x_645_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_644_);
return v___x_645_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_openListLevels___closed__3(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_openListLevels___closed__2, &lp_lean_x2dftml_LeanFtml_openListLevels___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_openListLevels___closed__2);
v___x_647_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_646_);
return v___x_647_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_openListLevels___closed__4(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_648_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_openListLevels___closed__3, &lp_lean_x2dftml_LeanFtml_openListLevels___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_openListLevels___closed__3);
v___x_649_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
lean_ctor_set(v___x_650_, 1, v___x_648_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_openListLevels(lean_object* v_out_651_, lean_object* v_toks_652_, lean_object* v_stack_653_, lean_object* v_itemTyp_654_, lean_object* v_firstNew_655_, lean_object* v_depth_656_, lean_object* v_x_657_){
_start:
{
lean_object* v_zero_658_; uint8_t v_isZero_659_; 
v_zero_658_ = lean_unsigned_to_nat(0u);
v_isZero_659_ = lean_nat_dec_eq(v_x_657_, v_zero_658_);
if (v_isZero_659_ == 1)
{
lean_object* v___x_660_; lean_object* v___x_661_; 
lean_dec(v_x_657_);
lean_dec(v_itemTyp_654_);
v___x_660_ = lean_box(0);
v___x_661_ = lp_lean_x2dftml_LeanFtml_openListLevels___lam__0(v_toks_652_, v_stack_653_, v_out_651_, v___x_660_);
return v___x_661_;
}
else
{
lean_object* v_level_662_; uint8_t v___x_663_; 
v_level_662_ = l_List_lengthTR___redArg(v_stack_653_);
v___x_663_ = lean_nat_dec_lt(v_depth_656_, v_level_662_);
if (v___x_663_ == 0)
{
lean_object* v_one_664_; lean_object* v_n_665_; lean_object* v_fst_667_; lean_object* v_fst_668_; lean_object* v_snd_669_; uint8_t v___x_702_; 
v_one_664_ = lean_unsigned_to_nat(1u);
v_n_665_ = lean_nat_sub(v_x_657_, v_one_664_);
lean_dec(v_x_657_);
v___x_702_ = lean_nat_dec_lt(v_firstNew_655_, v_level_662_);
if (v___x_702_ == 0)
{
v_fst_667_ = v_out_651_;
v_fst_668_ = v_toks_652_;
v_snd_669_ = v_stack_653_;
goto v___jp_666_;
}
else
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_nat_sub(v_level_662_, v_one_664_);
lean_inc(v___x_703_);
v___x_704_ = l_List_get_x3fInternal___redArg(v_stack_653_, v___x_703_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v_snd_707_; lean_object* v_fst_708_; lean_object* v_fst_709_; lean_object* v_snd_710_; 
lean_dec(v___x_703_);
v___x_705_ = lean_box(0);
v___x_706_ = lp_lean_x2dftml_LeanFtml_openListLevels___lam__0(v_toks_652_, v_stack_653_, v_out_651_, v___x_705_);
v_snd_707_ = lean_ctor_get(v___x_706_, 1);
lean_inc(v_snd_707_);
v_fst_708_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_fst_708_);
lean_dec_ref(v___x_706_);
v_fst_709_ = lean_ctor_get(v_snd_707_, 0);
lean_inc(v_fst_709_);
v_snd_710_ = lean_ctor_get(v_snd_707_, 1);
lean_inc(v_snd_710_);
lean_dec(v_snd_707_);
v_fst_667_ = v_fst_708_;
v_fst_668_ = v_fst_709_;
v_snd_669_ = v_snd_710_;
goto v___jp_666_;
}
else
{
lean_object* v_val_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_738_; 
v_val_711_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_738_ == 0)
{
v___x_713_ = v___x_704_;
v_isShared_714_ = v_isSharedCheck_738_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_val_711_);
lean_dec(v___x_704_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_738_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_715_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_openListLevels___closed__4, &lp_lean_x2dftml_LeanFtml_openListLevels___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_openListLevels___closed__4);
v___x_716_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4);
lean_inc(v_level_662_);
v___x_717_ = lean_nat_to_int(v_level_662_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_717_);
v___x_719_ = v___x_713_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_737_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v_fst_725_; lean_object* v_snd_726_; lean_object* v_typ_727_; uint8_t v_inSub_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_736_; 
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_716_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_box(0);
v___x_722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
v___x_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_715_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = lp_lean_x2dftml_LeanFtml_emitList(v_out_651_, v_toks_652_, v___x_723_);
v_fst_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_fst_725_);
v_snd_726_ = lean_ctor_get(v___x_724_, 1);
lean_inc(v_snd_726_);
lean_dec_ref(v___x_724_);
v_typ_727_ = lean_ctor_get(v_val_711_, 0);
v_inSub_728_ = lean_ctor_get_uint8(v_val_711_, sizeof(void*)*1);
v_isSharedCheck_736_ = !lean_is_exclusive(v_val_711_);
if (v_isSharedCheck_736_ == 0)
{
v___x_730_ = v_val_711_;
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_typ_727_);
lean_dec(v_val_711_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_typ_727_);
lean_ctor_set_uint8(v_reuseFailAlloc_735_, sizeof(void*)*1, v_inSub_728_);
v___x_733_ = v_reuseFailAlloc_735_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v_stack_734_; 
lean_ctor_set_uint8(v___x_733_, sizeof(void*)*1 + 1, v___x_702_);
v_stack_734_ = lp_lean_x2dftml_LeanFtml_setIdx___redArg(v_stack_653_, v___x_703_, v___x_733_);
v_fst_667_ = v_fst_725_;
v_fst_668_ = v_snd_726_;
v_snd_669_ = v_stack_734_;
goto v___jp_666_;
}
}
}
}
}
}
v___jp_666_:
{
uint8_t v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v_fst_691_; lean_object* v_snd_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_701_; 
v___x_670_ = lean_nat_dec_lt(v_firstNew_655_, v_level_662_);
lean_inc(v_itemTyp_654_);
v___x_671_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_671_, 0, v_itemTyp_654_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*1, v___x_670_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*1 + 1, v___x_663_);
v___x_672_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_673_ = lp_lean_x2dftml_LeanFtml_markerPrefix(v_itemTyp_654_);
v___x_674_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_openListLevels___closed__0));
v___x_675_ = lean_string_append(v___x_673_, v___x_674_);
v___x_676_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_675_);
v___x_677_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_676_);
v___x_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_672_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4);
v___x_680_ = lean_nat_to_int(v_level_662_);
v___x_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_679_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__6);
v___x_684_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_684_, 0, v___x_670_);
v___x_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_683_);
lean_ctor_set(v___x_685_, 1, v___x_684_);
v___x_686_ = lean_box(0);
v___x_687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_685_);
lean_ctor_set(v___x_687_, 1, v___x_686_);
v___x_688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_682_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_678_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = lp_lean_x2dftml_LeanFtml_emitList(v_fst_667_, v_fst_668_, v___x_689_);
v_fst_691_ = lean_ctor_get(v___x_690_, 0);
v_snd_692_ = lean_ctor_get(v___x_690_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_701_ == 0)
{
v___x_694_ = v___x_690_;
v_isShared_695_ = v_isSharedCheck_701_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_snd_692_);
lean_inc(v_fst_691_);
lean_dec(v___x_690_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_701_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 1);
lean_ctor_set(v___x_694_, 1, v___x_686_);
lean_ctor_set(v___x_694_, 0, v___x_671_);
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_671_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_686_);
v___x_697_ = v_reuseFailAlloc_700_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v_stack_698_; 
v_stack_698_ = l_List_appendTR___redArg(v_snd_669_, v___x_697_);
v_out_651_ = v_fst_691_;
v_toks_652_ = v_snd_692_;
v_stack_653_ = v_stack_698_;
v_x_657_ = v_n_665_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec(v_level_662_);
lean_dec(v_x_657_);
lean_dec(v_itemTyp_654_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v_toks_652_);
lean_ctor_set(v___x_739_, 1, v_stack_653_);
v___x_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_740_, 0, v_out_651_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
return v___x_740_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_openListLevels___boxed(lean_object* v_out_741_, lean_object* v_toks_742_, lean_object* v_stack_743_, lean_object* v_itemTyp_744_, lean_object* v_firstNew_745_, lean_object* v_depth_746_, lean_object* v_x_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = lp_lean_x2dftml_LeanFtml_openListLevels(v_out_741_, v_toks_742_, v_stack_743_, v_itemTyp_744_, v_firstNew_745_, v_depth_746_, v_x_747_);
lean_dec(v_depth_746_);
lean_dec(v_firstNew_745_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unwindListLevels(lean_object* v_out_749_, lean_object* v_toks_750_, lean_object* v_stack_751_, lean_object* v_counts_752_, lean_object* v_depth_753_, lean_object* v_x_754_){
_start:
{
lean_object* v_zero_755_; uint8_t v_isZero_756_; 
v_zero_755_ = lean_unsigned_to_nat(0u);
v_isZero_756_ = lean_nat_dec_eq(v_x_754_, v_zero_755_);
if (v_isZero_756_ == 1)
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
lean_dec(v_x_754_);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v_stack_751_);
lean_ctor_set(v___x_757_, 1, v_counts_752_);
v___x_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_758_, 0, v_toks_750_);
lean_ctor_set(v___x_758_, 1, v___x_757_);
v___x_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_759_, 0, v_out_749_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
return v___x_759_;
}
else
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_760_ = lean_unsigned_to_nat(1u);
v___x_761_ = lean_nat_add(v_depth_753_, v___x_760_);
v___x_762_ = l_List_lengthTR___redArg(v_stack_751_);
v___x_763_ = lean_nat_dec_lt(v___x_761_, v___x_762_);
lean_dec(v___x_761_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
lean_dec(v___x_762_);
lean_dec(v_x_754_);
v___x_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_764_, 0, v_stack_751_);
lean_ctor_set(v___x_764_, 1, v_counts_752_);
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v_toks_750_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v_out_749_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
return v___x_766_;
}
else
{
lean_object* v___x_767_; lean_object* v_snd_768_; lean_object* v_fst_769_; lean_object* v_fst_770_; lean_object* v_snd_771_; lean_object* v_n_772_; lean_object* v_closed_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_767_ = lp_lean_x2dftml_LeanFtml_closeListLevel(v_out_749_, v_toks_750_, v_stack_751_);
v_snd_768_ = lean_ctor_get(v___x_767_, 1);
lean_inc(v_snd_768_);
v_fst_769_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_fst_769_);
lean_dec_ref(v___x_767_);
v_fst_770_ = lean_ctor_get(v_snd_768_, 0);
lean_inc(v_fst_770_);
v_snd_771_ = lean_ctor_get(v_snd_768_, 1);
lean_inc(v_snd_771_);
lean_dec(v_snd_768_);
v_n_772_ = lean_nat_sub(v_x_754_, v___x_760_);
lean_dec(v_x_754_);
v_closed_773_ = lean_nat_sub(v___x_762_, v___x_760_);
lean_dec(v___x_762_);
v___x_774_ = l_List_lengthTR___redArg(v_counts_752_);
v___x_775_ = lean_nat_dec_lt(v_closed_773_, v___x_774_);
lean_dec(v___x_774_);
if (v___x_775_ == 0)
{
lean_dec(v_closed_773_);
v_out_749_ = v_fst_769_;
v_toks_750_ = v_fst_770_;
v_stack_751_ = v_snd_771_;
v_x_754_ = v_n_772_;
goto _start;
}
else
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = lean_box(0);
v___x_778_ = lp_lean_x2dftml_LeanFtml_setIdx___redArg(v_counts_752_, v_closed_773_, v___x_777_);
v_out_749_ = v_fst_769_;
v_toks_750_ = v_fst_770_;
v_stack_751_ = v_snd_771_;
v_counts_752_ = v___x_778_;
v_x_754_ = v_n_772_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unwindListLevels___boxed(lean_object* v_out_780_, lean_object* v_toks_781_, lean_object* v_stack_782_, lean_object* v_counts_783_, lean_object* v_depth_784_, lean_object* v_x_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = lp_lean_x2dftml_LeanFtml_unwindListLevels(v_out_780_, v_toks_781_, v_stack_782_, v_counts_783_, v_depth_784_, v_x_785_);
lean_dec(v_depth_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawSurvive(lean_object* v_x_787_){
_start:
{
if (lean_obj_tag(v_x_787_) == 0)
{
lean_object* v___x_788_; 
v___x_788_ = lean_box(0);
return v___x_788_;
}
else
{
lean_object* v_head_789_; lean_object* v_tail_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_824_; 
v_head_789_ = lean_ctor_get(v_x_787_, 0);
v_tail_790_ = lean_ctor_get(v_x_787_, 1);
v_isSharedCheck_824_ = !lean_is_exclusive(v_x_787_);
if (v_isSharedCheck_824_ == 0)
{
v___x_792_ = v_x_787_;
v_isShared_793_ = v_isSharedCheck_824_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_tail_790_);
lean_inc(v_head_789_);
lean_dec(v_x_787_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_824_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v_flags_794_; uint8_t v___y_796_; uint8_t v___y_797_; uint8_t v___y_815_; 
lean_inc(v_tail_790_);
v_flags_794_ = lp_lean_x2dftml_LeanFtml_rawSurvive(v_tail_790_);
if (lean_obj_tag(v_flags_794_) == 0)
{
uint8_t v___x_821_; 
v___x_821_ = 0;
v___y_815_ = v___x_821_;
goto v___jp_814_;
}
else
{
lean_object* v_head_822_; uint8_t v___x_823_; 
v_head_822_ = lean_ctor_get(v_flags_794_, 0);
v___x_823_ = lean_unbox(v_head_822_);
v___y_815_ = v___x_823_;
goto v___jp_814_;
}
v___jp_795_:
{
lean_object* v_body_798_; lean_object* v___x_799_; uint8_t v___x_800_; 
v_body_798_ = lean_ctor_get(v_head_789_, 2);
lean_inc(v_body_798_);
lean_dec(v_head_789_);
v___x_799_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_body_798_);
lean_dec(v_body_798_);
v___x_800_ = l_List_isEmpty___redArg(v___x_799_);
lean_dec(v___x_799_);
if (v___x_800_ == 0)
{
uint8_t v___x_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_801_ = 1;
v___x_802_ = lean_box(v___x_801_);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 1, v_flags_794_);
lean_ctor_set(v___x_792_, 0, v___x_802_);
v___x_804_ = v___x_792_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_flags_794_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
else
{
if (v___y_796_ == 0)
{
lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_806_ = lean_box(v___y_796_);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 1, v_flags_794_);
lean_ctor_set(v___x_792_, 0, v___x_806_);
v___x_808_ = v___x_792_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_806_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v_flags_794_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
else
{
lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_810_ = lean_box(v___y_797_);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 1, v_flags_794_);
lean_ctor_set(v___x_792_, 0, v___x_810_);
v___x_812_ = v___x_792_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_810_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_flags_794_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
v___jp_814_:
{
if (lean_obj_tag(v_tail_790_) == 0)
{
uint8_t v___x_816_; 
v___x_816_ = 0;
v___y_796_ = v___y_815_;
v___y_797_ = v___x_816_;
goto v___jp_795_;
}
else
{
lean_object* v_head_817_; lean_object* v_depth_818_; lean_object* v_depth_819_; uint8_t v___x_820_; 
v_head_817_ = lean_ctor_get(v_tail_790_, 0);
lean_inc(v_head_817_);
lean_dec_ref_known(v_tail_790_, 2);
v_depth_818_ = lean_ctor_get(v_head_789_, 0);
v_depth_819_ = lean_ctor_get(v_head_817_, 0);
lean_inc(v_depth_819_);
lean_dec(v_head_817_);
v___x_820_ = lean_nat_dec_lt(v_depth_818_, v_depth_819_);
lean_dec(v_depth_819_);
v___y_796_ = v___y_815_;
v___y_797_ = v___x_820_;
goto v___jp_795_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterNativeItems_go(lean_object* v_a_825_, lean_object* v_a_826_){
_start:
{
if (lean_obj_tag(v_a_825_) == 0)
{
lean_dec(v_a_826_);
return v_a_825_;
}
else
{
if (lean_obj_tag(v_a_826_) == 0)
{
lean_object* v___x_827_; 
v___x_827_ = lean_box(0);
return v___x_827_;
}
else
{
lean_object* v_head_828_; uint8_t v___x_829_; 
v_head_828_ = lean_ctor_get(v_a_826_, 0);
v___x_829_ = lean_unbox(v_head_828_);
if (v___x_829_ == 0)
{
lean_object* v_tail_830_; lean_object* v_tail_831_; 
v_tail_830_ = lean_ctor_get(v_a_825_, 1);
v_tail_831_ = lean_ctor_get(v_a_826_, 1);
lean_inc(v_tail_831_);
lean_dec_ref_known(v_a_826_, 2);
v_a_825_ = v_tail_830_;
v_a_826_ = v_tail_831_;
goto _start;
}
else
{
lean_object* v_head_833_; lean_object* v_tail_834_; lean_object* v_tail_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_843_; 
v_head_833_ = lean_ctor_get(v_a_825_, 0);
v_tail_834_ = lean_ctor_get(v_a_825_, 1);
v_tail_835_ = lean_ctor_get(v_a_826_, 1);
v_isSharedCheck_843_ = !lean_is_exclusive(v_a_826_);
if (v_isSharedCheck_843_ == 0)
{
lean_object* v_unused_844_; 
v_unused_844_ = lean_ctor_get(v_a_826_, 0);
lean_dec(v_unused_844_);
v___x_837_ = v_a_826_;
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_tail_835_);
lean_dec(v_a_826_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_839_ = lp_lean_x2dftml_LeanFtml_filterNativeItems_go(v_tail_834_, v_tail_835_);
lean_inc(v_head_833_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 1, v___x_839_);
lean_ctor_set(v___x_837_, 0, v_head_833_);
v___x_841_ = v___x_837_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_head_833_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterNativeItems_go___boxed(lean_object* v_a_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = lp_lean_x2dftml_LeanFtml_filterNativeItems_go(v_a_845_, v_a_846_);
lean_dec(v_a_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterNativeItems(lean_object* v_items_848_){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
lean_inc(v_items_848_);
v___x_849_ = lp_lean_x2dftml_LeanFtml_rawSurvive(v_items_848_);
v___x_850_ = lp_lean_x2dftml_LeanFtml_filterNativeItems_go(v_items_848_, v___x_849_);
lean_dec(v_items_848_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeProcess_closeAll(lean_object* v_a_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_zero_853_; uint8_t v_isZero_854_; 
v_zero_853_ = lean_unsigned_to_nat(0u);
v_isZero_854_ = lean_nat_dec_eq(v_a_852_, v_zero_853_);
if (v_isZero_854_ == 1)
{
lean_dec(v_a_852_);
return v_a_851_;
}
else
{
lean_object* v_snd_855_; lean_object* v_fst_856_; lean_object* v_fst_857_; lean_object* v_snd_858_; uint8_t v___x_859_; 
v_snd_855_ = lean_ctor_get(v_a_851_, 1);
v_fst_856_ = lean_ctor_get(v_a_851_, 0);
v_fst_857_ = lean_ctor_get(v_snd_855_, 0);
v_snd_858_ = lean_ctor_get(v_snd_855_, 1);
v___x_859_ = l_List_isEmpty___redArg(v_snd_858_);
if (v___x_859_ == 0)
{
lean_object* v_one_860_; lean_object* v_n_861_; lean_object* v___x_862_; 
lean_inc(v_snd_858_);
lean_inc(v_fst_857_);
lean_inc(v_fst_856_);
lean_dec_ref(v_a_851_);
v_one_860_ = lean_unsigned_to_nat(1u);
v_n_861_ = lean_nat_sub(v_a_852_, v_one_860_);
lean_dec(v_a_852_);
v___x_862_ = lp_lean_x2dftml_LeanFtml_closeListLevel(v_fst_856_, v_fst_857_, v_snd_858_);
v_a_851_ = v___x_862_;
v_a_852_ = v_n_861_;
goto _start;
}
else
{
lean_dec(v_a_852_);
return v_a_851_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__1));
v___x_867_ = l_String_toListImpl(v___x_866_);
return v___x_867_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__3));
v___x_870_ = l_String_toListImpl(v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0(lean_object* v_x_872_, lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_873_) == 0)
{
return v_x_872_;
}
else
{
lean_object* v_snd_874_; lean_object* v_snd_875_; lean_object* v_head_876_; lean_object* v_tail_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_1037_; 
v_snd_874_ = lean_ctor_get(v_x_872_, 1);
lean_inc(v_snd_874_);
v_snd_875_ = lean_ctor_get(v_snd_874_, 1);
lean_inc(v_snd_875_);
v_head_876_ = lean_ctor_get(v_x_873_, 0);
v_tail_877_ = lean_ctor_get(v_x_873_, 1);
v_isSharedCheck_1037_ = !lean_is_exclusive(v_x_873_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_879_ = v_x_873_;
v_isShared_880_ = v_isSharedCheck_1037_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_tail_877_);
lean_inc(v_head_876_);
lean_dec(v_x_873_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_1037_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v_fst_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_1035_; 
v_fst_881_ = lean_ctor_get(v_x_872_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_x_872_);
if (v_isSharedCheck_1035_ == 0)
{
lean_object* v_unused_1036_; 
v_unused_1036_ = lean_ctor_get(v_x_872_, 1);
lean_dec(v_unused_1036_);
v___x_883_ = v_x_872_;
v_isShared_884_ = v_isSharedCheck_1035_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_fst_881_);
lean_dec(v_x_872_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_1035_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v_fst_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_1033_; 
v_fst_885_ = lean_ctor_get(v_snd_874_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_snd_874_);
if (v_isSharedCheck_1033_ == 0)
{
lean_object* v_unused_1034_; 
v_unused_1034_ = lean_ctor_get(v_snd_874_, 1);
lean_dec(v_unused_1034_);
v___x_887_ = v_snd_874_;
v_isShared_888_ = v_isSharedCheck_1033_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_fst_885_);
lean_dec(v_snd_874_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_1033_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v_fst_889_; lean_object* v_snd_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_1032_; 
v_fst_889_ = lean_ctor_get(v_snd_875_, 0);
v_snd_890_ = lean_ctor_get(v_snd_875_, 1);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_snd_875_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_892_ = v_snd_875_;
v_isShared_893_ = v_isSharedCheck_1032_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_snd_890_);
lean_inc(v_fst_889_);
lean_dec(v_snd_875_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_1032_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v_depth_894_; lean_object* v_typ_895_; lean_object* v_body_896_; lean_object* v_firstNew_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v_snd_901_; lean_object* v_fst_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_1031_; 
v_depth_894_ = lean_ctor_get(v_head_876_, 0);
lean_inc(v_depth_894_);
v_typ_895_ = lean_ctor_get(v_head_876_, 1);
lean_inc_n(v_typ_895_, 2);
v_body_896_ = lean_ctor_get(v_head_876_, 2);
lean_inc(v_body_896_);
lean_dec(v_head_876_);
v_firstNew_897_ = l_List_lengthTR___redArg(v_fst_889_);
v___x_898_ = lean_unsigned_to_nat(2u);
v___x_899_ = lean_nat_add(v_depth_894_, v___x_898_);
v___x_900_ = lp_lean_x2dftml_LeanFtml_openListLevels(v_fst_881_, v_fst_885_, v_fst_889_, v_typ_895_, v_firstNew_897_, v_depth_894_, v___x_899_);
lean_dec(v_firstNew_897_);
v_snd_901_ = lean_ctor_get(v___x_900_, 1);
v_fst_902_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_904_ = v___x_900_;
v_isShared_905_ = v_isSharedCheck_1031_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_snd_901_);
lean_inc(v_fst_902_);
lean_dec(v___x_900_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_1031_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v_fst_906_; lean_object* v_snd_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_1030_; 
v_fst_906_ = lean_ctor_get(v_snd_901_, 0);
v_snd_907_ = lean_ctor_get(v_snd_901_, 1);
v_isSharedCheck_1030_ = !lean_is_exclusive(v_snd_901_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_909_ = v_snd_901_;
v_isShared_910_ = v_isSharedCheck_1030_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_snd_907_);
lean_inc(v_fst_906_);
lean_dec(v_snd_901_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_1030_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v_snd_915_; lean_object* v_snd_916_; lean_object* v_fst_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_1028_; 
v___x_911_ = l_List_lengthTR___redArg(v_snd_907_);
v___x_912_ = lean_unsigned_to_nat(1u);
v___x_913_ = lean_nat_add(v___x_911_, v___x_912_);
lean_dec(v___x_911_);
v___x_914_ = lp_lean_x2dftml_LeanFtml_unwindListLevels(v_fst_902_, v_fst_906_, v_snd_907_, v_snd_890_, v_depth_894_, v___x_913_);
v_snd_915_ = lean_ctor_get(v___x_914_, 1);
lean_inc(v_snd_915_);
v_snd_916_ = lean_ctor_get(v_snd_915_, 1);
lean_inc(v_snd_916_);
v_fst_917_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_1028_ == 0)
{
lean_object* v_unused_1029_; 
v_unused_1029_ = lean_ctor_get(v___x_914_, 1);
lean_dec(v_unused_1029_);
v___x_919_ = v___x_914_;
v_isShared_920_ = v_isSharedCheck_1028_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_fst_917_);
lean_dec(v___x_914_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_1028_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v_fst_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_1026_; 
v_fst_921_ = lean_ctor_get(v_snd_915_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_snd_915_);
if (v_isSharedCheck_1026_ == 0)
{
lean_object* v_unused_1027_; 
v_unused_1027_ = lean_ctor_get(v_snd_915_, 1);
lean_dec(v_unused_1027_);
v___x_923_ = v_snd_915_;
v_isShared_924_ = v_isSharedCheck_1026_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_fst_921_);
lean_dec(v_snd_915_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_1026_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v_fst_925_; lean_object* v_snd_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_1025_; 
v_fst_925_ = lean_ctor_get(v_snd_916_, 0);
v_snd_926_ = lean_ctor_get(v_snd_916_, 1);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_snd_916_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_928_ = v_snd_916_;
v_isShared_929_ = v_isSharedCheck_1025_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_snd_926_);
lean_inc(v_fst_925_);
lean_dec(v_snd_916_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_1025_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_1010_; lean_object* v___y_1013_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
v___x_1018_ = l_List_lengthTR___redArg(v_snd_926_);
v___x_1019_ = lean_nat_dec_le(v___x_1018_, v_depth_894_);
if (v___x_1019_ == 0)
{
lean_dec(v___x_1018_);
v___y_1013_ = v_snd_926_;
goto v___jp_1012_;
}
else
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1020_ = lean_nat_add(v_depth_894_, v___x_912_);
v___x_1021_ = lean_nat_sub(v___x_1020_, v___x_1018_);
lean_dec(v___x_1018_);
lean_dec(v___x_1020_);
v___x_1022_ = lean_box(0);
v___x_1023_ = l_List_replicateTR___redArg(v___x_1021_, v___x_1022_);
v___x_1024_ = l_List_appendTR___redArg(v_snd_926_, v___x_1023_);
v___y_1013_ = v___x_1024_;
goto v___jp_1012_;
}
v___jp_930_:
{
lean_object* v___x_933_; lean_object* v_counts_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
lean_inc(v___y_932_);
v___x_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_933_, 0, v___y_932_);
lean_inc(v_depth_894_);
v_counts_934_ = lp_lean_x2dftml_LeanFtml_setIdx___redArg(v___y_931_, v_depth_894_, v___x_933_);
v___x_935_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_936_ = lp_lean_x2dftml_LeanFtml_markerPrefix(v_typ_895_);
lean_dec(v_typ_895_);
v___x_937_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__0));
lean_inc_ref(v___x_936_);
v___x_938_ = lean_string_append(v___x_936_, v___x_937_);
v___x_939_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_938_);
v___x_940_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_939_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 1, v___x_940_);
lean_ctor_set(v___x_928_, 0, v___x_935_);
v___x_942_ = v___x_928_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_935_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v___x_940_);
v___x_942_ = v_reuseFailAlloc_1008_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_947_; 
v___x_943_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4);
v___x_944_ = lean_nat_to_int(v_depth_894_);
v___x_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 1, v___x_945_);
lean_ctor_set(v___x_923_, 0, v___x_943_);
v___x_947_ = v___x_923_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v___x_945_);
v___x_947_ = v_reuseFailAlloc_1007_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_952_; 
v___x_948_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2, &lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2_once, _init_lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2);
lean_inc(v___y_932_);
v___x_949_ = lean_nat_to_int(v___y_932_);
v___x_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 1, v___x_950_);
lean_ctor_set(v___x_919_, 0, v___x_948_);
v___x_952_ = v___x_919_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v___x_950_);
v___x_952_ = v_reuseFailAlloc_1006_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_953_; lean_object* v___x_954_; uint8_t v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_953_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4, &lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4_once, _init_lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4);
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = lean_nat_dec_eq(v___y_932_, v___x_954_);
lean_dec(v___y_932_);
v___x_956_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_956_, 0, v___x_955_);
if (v_isShared_910_ == 0)
{
lean_ctor_set(v___x_909_, 1, v___x_956_);
lean_ctor_set(v___x_909_, 0, v___x_953_);
v___x_958_ = v___x_909_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_953_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v___x_956_);
v___x_958_ = v_reuseFailAlloc_1005_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_959_ = lean_box(0);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 1, v___x_959_);
lean_ctor_set(v___x_879_, 0, v___x_958_);
v___x_961_ = v___x_879_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v___x_959_);
v___x_961_ = v_reuseFailAlloc_1004_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
lean_object* v___x_963_; 
lean_inc_ref(v___x_952_);
if (v_isShared_888_ == 0)
{
lean_ctor_set_tag(v___x_887_, 1);
lean_ctor_set(v___x_887_, 1, v___x_961_);
lean_ctor_set(v___x_887_, 0, v___x_952_);
v___x_963_ = v___x_887_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v___x_961_);
v___x_963_ = v_reuseFailAlloc_1003_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_965_; 
lean_inc_ref(v___x_947_);
if (v_isShared_884_ == 0)
{
lean_ctor_set_tag(v___x_883_, 1);
lean_ctor_set(v___x_883_, 1, v___x_963_);
lean_ctor_set(v___x_883_, 0, v___x_947_);
v___x_965_ = v___x_883_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_947_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v___x_963_);
v___x_965_ = v_reuseFailAlloc_1002_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v_fst_968_; lean_object* v_snd_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_1001_; 
v___x_966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_942_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = lp_lean_x2dftml_LeanFtml_emitList(v_fst_917_, v_fst_921_, v___x_966_);
v_fst_968_ = lean_ctor_get(v___x_967_, 0);
v_snd_969_ = lean_ctor_get(v___x_967_, 1);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_967_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_971_ = v___x_967_;
v_isShared_972_ = v_isSharedCheck_1001_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_snd_969_);
lean_inc(v_fst_968_);
lean_dec(v___x_967_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_1001_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v_out_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_979_; 
v_out_973_ = l_List_appendTR___redArg(v_fst_968_, v_body_896_);
v___x_974_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__5));
v___x_975_ = lean_string_append(v___x_936_, v___x_974_);
v___x_976_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_975_);
v___x_977_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_976_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 1, v___x_977_);
lean_ctor_set(v___x_971_, 0, v___x_935_);
v___x_979_ = v___x_971_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_935_);
lean_ctor_set(v_reuseFailAlloc_1000_, 1, v___x_977_);
v___x_979_ = v_reuseFailAlloc_1000_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v_fst_984_; lean_object* v_snd_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_999_; 
v___x_980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_952_);
lean_ctor_set(v___x_980_, 1, v___x_959_);
v___x_981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_947_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_979_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = lp_lean_x2dftml_LeanFtml_emitList(v_out_973_, v_snd_969_, v___x_982_);
v_fst_984_ = lean_ctor_get(v___x_983_, 0);
v_snd_985_ = lean_ctor_get(v___x_983_, 1);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_999_ == 0)
{
v___x_987_ = v___x_983_;
v_isShared_988_ = v_isSharedCheck_999_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_snd_985_);
lean_inc(v_fst_984_);
lean_dec(v___x_983_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_999_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 1, v_counts_934_);
lean_ctor_set(v___x_987_, 0, v_fst_925_);
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_fst_925_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v_counts_934_);
v___x_990_ = v_reuseFailAlloc_998_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_992_; 
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 1, v___x_990_);
lean_ctor_set(v___x_904_, 0, v_snd_985_);
v___x_992_ = v___x_904_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_snd_985_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v___x_990_);
v___x_992_ = v_reuseFailAlloc_997_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
lean_object* v___x_994_; 
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 1, v___x_992_);
lean_ctor_set(v___x_892_, 0, v_fst_984_);
v___x_994_ = v___x_892_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_fst_984_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_992_);
v___x_994_ = v_reuseFailAlloc_996_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
v_x_872_ = v___x_994_;
v_x_873_ = v_tail_877_;
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
}
}
}
}
}
v___jp_1009_:
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_unsigned_to_nat(0u);
v___y_931_ = v___y_1010_;
v___y_932_ = v___x_1011_;
goto v___jp_930_;
}
v___jp_1012_:
{
lean_object* v___x_1014_; 
lean_inc(v_depth_894_);
v___x_1014_ = l_List_get_x3fInternal___redArg(v___y_1013_, v_depth_894_);
if (lean_obj_tag(v___x_1014_) == 1)
{
lean_object* v_val_1015_; 
v_val_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_val_1015_);
lean_dec_ref_known(v___x_1014_, 1);
if (lean_obj_tag(v_val_1015_) == 1)
{
lean_object* v_val_1016_; lean_object* v___x_1017_; 
v_val_1016_ = lean_ctor_get(v_val_1015_, 0);
lean_inc(v_val_1016_);
lean_dec_ref_known(v_val_1015_, 1);
v___x_1017_ = lean_nat_add(v_val_1016_, v___x_912_);
lean_dec(v_val_1016_);
v___y_931_ = v___y_1013_;
v___y_932_ = v___x_1017_;
goto v___jp_930_;
}
else
{
lean_dec(v_val_1015_);
v___y_1010_ = v___y_1013_;
goto v___jp_1009_;
}
}
else
{
lean_dec(v___x_1014_);
v___y_1010_ = v___y_1013_;
goto v___jp_1009_;
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
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeProcess_spec__0(lean_object* v_x_1038_, lean_object* v_x_1039_){
_start:
{
if (lean_obj_tag(v_x_1039_) == 0)
{
return v_x_1038_;
}
else
{
lean_object* v_snd_1040_; lean_object* v_snd_1041_; lean_object* v_head_1042_; lean_object* v_tail_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1203_; 
v_snd_1040_ = lean_ctor_get(v_x_1038_, 1);
lean_inc(v_snd_1040_);
v_snd_1041_ = lean_ctor_get(v_snd_1040_, 1);
lean_inc(v_snd_1041_);
v_head_1042_ = lean_ctor_get(v_x_1039_, 0);
v_tail_1043_ = lean_ctor_get(v_x_1039_, 1);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_x_1039_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1045_ = v_x_1039_;
v_isShared_1046_ = v_isSharedCheck_1203_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_tail_1043_);
lean_inc(v_head_1042_);
lean_dec(v_x_1039_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1203_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v_fst_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1201_; 
v_fst_1047_ = lean_ctor_get(v_x_1038_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_x_1038_);
if (v_isSharedCheck_1201_ == 0)
{
lean_object* v_unused_1202_; 
v_unused_1202_ = lean_ctor_get(v_x_1038_, 1);
lean_dec(v_unused_1202_);
v___x_1049_ = v_x_1038_;
v_isShared_1050_ = v_isSharedCheck_1201_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_fst_1047_);
lean_dec(v_x_1038_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1201_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v_fst_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1199_; 
v_fst_1051_ = lean_ctor_get(v_snd_1040_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_snd_1040_);
if (v_isSharedCheck_1199_ == 0)
{
lean_object* v_unused_1200_; 
v_unused_1200_ = lean_ctor_get(v_snd_1040_, 1);
lean_dec(v_unused_1200_);
v___x_1053_ = v_snd_1040_;
v_isShared_1054_ = v_isSharedCheck_1199_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_fst_1051_);
lean_dec(v_snd_1040_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1199_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v_fst_1055_; lean_object* v_snd_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1198_; 
v_fst_1055_ = lean_ctor_get(v_snd_1041_, 0);
v_snd_1056_ = lean_ctor_get(v_snd_1041_, 1);
v_isSharedCheck_1198_ = !lean_is_exclusive(v_snd_1041_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1058_ = v_snd_1041_;
v_isShared_1059_ = v_isSharedCheck_1198_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_snd_1056_);
lean_inc(v_fst_1055_);
lean_dec(v_snd_1041_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1198_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v_depth_1060_; lean_object* v_typ_1061_; lean_object* v_body_1062_; lean_object* v_firstNew_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v_snd_1067_; lean_object* v_fst_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1197_; 
v_depth_1060_ = lean_ctor_get(v_head_1042_, 0);
lean_inc(v_depth_1060_);
v_typ_1061_ = lean_ctor_get(v_head_1042_, 1);
lean_inc_n(v_typ_1061_, 2);
v_body_1062_ = lean_ctor_get(v_head_1042_, 2);
lean_inc(v_body_1062_);
lean_dec(v_head_1042_);
v_firstNew_1063_ = l_List_lengthTR___redArg(v_fst_1055_);
v___x_1064_ = lean_unsigned_to_nat(2u);
v___x_1065_ = lean_nat_add(v_depth_1060_, v___x_1064_);
v___x_1066_ = lp_lean_x2dftml_LeanFtml_openListLevels(v_fst_1047_, v_fst_1051_, v_fst_1055_, v_typ_1061_, v_firstNew_1063_, v_depth_1060_, v___x_1065_);
lean_dec(v_firstNew_1063_);
v_snd_1067_ = lean_ctor_get(v___x_1066_, 1);
v_fst_1068_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1070_ = v___x_1066_;
v_isShared_1071_ = v_isSharedCheck_1197_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_snd_1067_);
lean_inc(v_fst_1068_);
lean_dec(v___x_1066_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1197_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v_fst_1072_; lean_object* v_snd_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1196_; 
v_fst_1072_ = lean_ctor_get(v_snd_1067_, 0);
v_snd_1073_ = lean_ctor_get(v_snd_1067_, 1);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_snd_1067_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1075_ = v_snd_1067_;
v_isShared_1076_ = v_isSharedCheck_1196_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_snd_1073_);
lean_inc(v_fst_1072_);
lean_dec(v_snd_1067_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1196_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v_snd_1081_; lean_object* v_snd_1082_; lean_object* v_fst_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1194_; 
v___x_1077_ = l_List_lengthTR___redArg(v_snd_1073_);
v___x_1078_ = lean_unsigned_to_nat(1u);
v___x_1079_ = lean_nat_add(v___x_1077_, v___x_1078_);
lean_dec(v___x_1077_);
v___x_1080_ = lp_lean_x2dftml_LeanFtml_unwindListLevels(v_fst_1068_, v_fst_1072_, v_snd_1073_, v_snd_1056_, v_depth_1060_, v___x_1079_);
v_snd_1081_ = lean_ctor_get(v___x_1080_, 1);
lean_inc(v_snd_1081_);
v_snd_1082_ = lean_ctor_get(v_snd_1081_, 1);
lean_inc(v_snd_1082_);
v_fst_1083_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; 
v_unused_1195_ = lean_ctor_get(v___x_1080_, 1);
lean_dec(v_unused_1195_);
v___x_1085_ = v___x_1080_;
v_isShared_1086_ = v_isSharedCheck_1194_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_fst_1083_);
lean_dec(v___x_1080_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1194_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v_fst_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1192_; 
v_fst_1087_ = lean_ctor_get(v_snd_1081_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v_snd_1081_);
if (v_isSharedCheck_1192_ == 0)
{
lean_object* v_unused_1193_; 
v_unused_1193_ = lean_ctor_get(v_snd_1081_, 1);
lean_dec(v_unused_1193_);
v___x_1089_ = v_snd_1081_;
v_isShared_1090_ = v_isSharedCheck_1192_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_fst_1087_);
lean_dec(v_snd_1081_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1192_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v_fst_1091_; lean_object* v_snd_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1191_; 
v_fst_1091_ = lean_ctor_get(v_snd_1082_, 0);
v_snd_1092_ = lean_ctor_get(v_snd_1082_, 1);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_snd_1082_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1094_ = v_snd_1082_;
v_isShared_1095_ = v_isSharedCheck_1191_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_snd_1092_);
lean_inc(v_fst_1091_);
lean_dec(v_snd_1082_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1191_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1176_; lean_object* v___y_1179_; lean_object* v___x_1184_; uint8_t v___x_1185_; 
v___x_1184_ = l_List_lengthTR___redArg(v_snd_1092_);
v___x_1185_ = lean_nat_dec_le(v___x_1184_, v_depth_1060_);
if (v___x_1185_ == 0)
{
lean_dec(v___x_1184_);
v___y_1179_ = v_snd_1092_;
goto v___jp_1178_;
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1186_ = lean_nat_add(v_depth_1060_, v___x_1078_);
v___x_1187_ = lean_nat_sub(v___x_1186_, v___x_1184_);
lean_dec(v___x_1184_);
lean_dec(v___x_1186_);
v___x_1188_ = lean_box(0);
v___x_1189_ = l_List_replicateTR___redArg(v___x_1187_, v___x_1188_);
v___x_1190_ = l_List_appendTR___redArg(v_snd_1092_, v___x_1189_);
v___y_1179_ = v___x_1190_;
goto v___jp_1178_;
}
v___jp_1096_:
{
lean_object* v___x_1099_; lean_object* v_counts_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
lean_inc(v___y_1098_);
v___x_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1099_, 0, v___y_1098_);
lean_inc(v_depth_1060_);
v_counts_1100_ = lp_lean_x2dftml_LeanFtml_setIdx___redArg(v___y_1097_, v_depth_1060_, v___x_1099_);
v___x_1101_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_1102_ = lp_lean_x2dftml_LeanFtml_markerPrefix(v_typ_1061_);
lean_dec(v_typ_1061_);
v___x_1103_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__0));
lean_inc_ref(v___x_1102_);
v___x_1104_ = lean_string_append(v___x_1102_, v___x_1103_);
v___x_1105_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1104_);
v___x_1106_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1105_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 1, v___x_1106_);
lean_ctor_set(v___x_1094_, 0, v___x_1101_);
v___x_1108_ = v___x_1094_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1101_);
lean_ctor_set(v_reuseFailAlloc_1174_, 1, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1109_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__4);
v___x_1110_ = lean_nat_to_int(v_depth_1060_);
v___x_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 1, v___x_1111_);
lean_ctor_set(v___x_1089_, 0, v___x_1109_);
v___x_1113_ = v___x_1089_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1118_; 
v___x_1114_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2, &lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2_once, _init_lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__2);
lean_inc(v___y_1098_);
v___x_1115_ = lean_nat_to_int(v___y_1098_);
v___x_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 1, v___x_1116_);
lean_ctor_set(v___x_1085_, 0, v___x_1114_);
v___x_1118_ = v___x_1085_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; uint8_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1124_; 
v___x_1119_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4, &lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4_once, _init_lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__4);
v___x_1120_ = lean_unsigned_to_nat(0u);
v___x_1121_ = lean_nat_dec_eq(v___y_1098_, v___x_1120_);
lean_dec(v___y_1098_);
v___x_1122_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1122_, 0, v___x_1121_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 1, v___x_1122_);
lean_ctor_set(v___x_1075_, 0, v___x_1119_);
v___x_1124_ = v___x_1075_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1119_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1127_; 
v___x_1125_ = lean_box(0);
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 1, v___x_1125_);
lean_ctor_set(v___x_1045_, 0, v___x_1124_);
v___x_1127_ = v___x_1045_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1124_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v___x_1125_);
v___x_1127_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
lean_object* v___x_1129_; 
lean_inc_ref(v___x_1118_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set_tag(v___x_1053_, 1);
lean_ctor_set(v___x_1053_, 1, v___x_1127_);
lean_ctor_set(v___x_1053_, 0, v___x_1118_);
v___x_1129_ = v___x_1053_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1118_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v___x_1127_);
v___x_1129_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1131_; 
lean_inc_ref(v___x_1113_);
if (v_isShared_1050_ == 0)
{
lean_ctor_set_tag(v___x_1049_, 1);
lean_ctor_set(v___x_1049_, 1, v___x_1129_);
lean_ctor_set(v___x_1049_, 0, v___x_1113_);
v___x_1131_ = v___x_1049_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1113_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v_fst_1134_; lean_object* v_snd_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1167_; 
v___x_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1108_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = lp_lean_x2dftml_LeanFtml_emitList(v_fst_1083_, v_fst_1087_, v___x_1132_);
v_fst_1134_ = lean_ctor_get(v___x_1133_, 0);
v_snd_1135_ = lean_ctor_get(v___x_1133_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1137_ = v___x_1133_;
v_isShared_1138_ = v_isSharedCheck_1167_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_snd_1135_);
lean_inc(v_fst_1134_);
lean_dec(v___x_1133_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1167_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v_out_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1145_; 
v_out_1139_ = l_List_appendTR___redArg(v_fst_1134_, v_body_1062_);
v___x_1140_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0___closed__5));
v___x_1141_ = lean_string_append(v___x_1102_, v___x_1140_);
v___x_1142_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1141_);
v___x_1143_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1142_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 1, v___x_1143_);
lean_ctor_set(v___x_1137_, 0, v___x_1101_);
v___x_1145_ = v___x_1137_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1101_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v___x_1143_);
v___x_1145_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v_fst_1150_; lean_object* v_snd_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1165_; 
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1118_);
lean_ctor_set(v___x_1146_, 1, v___x_1125_);
v___x_1147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1113_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1145_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = lp_lean_x2dftml_LeanFtml_emitList(v_out_1139_, v_snd_1135_, v___x_1148_);
v_fst_1150_ = lean_ctor_get(v___x_1149_, 0);
v_snd_1151_ = lean_ctor_get(v___x_1149_, 1);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1153_ = v___x_1149_;
v_isShared_1154_ = v_isSharedCheck_1165_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_snd_1151_);
lean_inc(v_fst_1150_);
lean_dec(v___x_1149_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1165_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 1, v_counts_1100_);
lean_ctor_set(v___x_1153_, 0, v_fst_1091_);
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_fst_1091_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_counts_1100_);
v___x_1156_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
lean_object* v___x_1158_; 
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 1, v___x_1156_);
lean_ctor_set(v___x_1070_, 0, v_snd_1151_);
v___x_1158_ = v___x_1070_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_snd_1151_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
lean_object* v___x_1160_; 
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v___x_1158_);
lean_ctor_set(v___x_1058_, 0, v_fst_1150_);
v___x_1160_ = v___x_1058_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_fst_1150_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v___x_1158_);
v___x_1160_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1161_; 
v___x_1161_ = lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00LeanFtml_nativeProcess_spec__0_spec__0(v___x_1160_, v_tail_1043_);
return v___x_1161_;
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
}
v___jp_1175_:
{
lean_object* v___x_1177_; 
v___x_1177_ = lean_unsigned_to_nat(0u);
v___y_1097_ = v___y_1176_;
v___y_1098_ = v___x_1177_;
goto v___jp_1096_;
}
v___jp_1178_:
{
lean_object* v___x_1180_; 
lean_inc(v_depth_1060_);
v___x_1180_ = l_List_get_x3fInternal___redArg(v___y_1179_, v_depth_1060_);
if (lean_obj_tag(v___x_1180_) == 1)
{
lean_object* v_val_1181_; 
v_val_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc(v_val_1181_);
lean_dec_ref_known(v___x_1180_, 1);
if (lean_obj_tag(v_val_1181_) == 1)
{
lean_object* v_val_1182_; lean_object* v___x_1183_; 
v_val_1182_ = lean_ctor_get(v_val_1181_, 0);
lean_inc(v_val_1182_);
lean_dec_ref_known(v_val_1181_, 1);
v___x_1183_ = lean_nat_add(v_val_1182_, v___x_1078_);
lean_dec(v_val_1182_);
v___y_1097_ = v___y_1179_;
v___y_1098_ = v___x_1183_;
goto v___jp_1096_;
}
else
{
lean_dec(v_val_1181_);
v___y_1176_ = v___y_1179_;
goto v___jp_1175_;
}
}
else
{
lean_dec(v___x_1180_);
v___y_1176_ = v___y_1179_;
goto v___jp_1175_;
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
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeProcess(lean_object* v_run_1209_, lean_object* v_toks_1210_){
_start:
{
lean_object* v___x_1211_; lean_object* v_items_1212_; uint8_t v___x_1213_; 
v___x_1211_ = lp_lean_x2dftml_LeanFtml_collectRawItems(v_run_1209_);
v_items_1212_ = lp_lean_x2dftml_LeanFtml_filterNativeItems(v___x_1211_);
v___x_1213_ = l_List_isEmpty___redArg(v_items_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v_snd_1219_; lean_object* v_snd_1220_; lean_object* v_fst_1221_; lean_object* v_fst_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1256_; 
v___x_1214_ = lean_box(0);
v___x_1215_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_nativeProcess___closed__0));
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v_toks_1210_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1214_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeProcess_spec__0(v___x_1217_, v_items_1212_);
v_snd_1219_ = lean_ctor_get(v___x_1218_, 1);
lean_inc(v_snd_1219_);
v_snd_1220_ = lean_ctor_get(v_snd_1219_, 1);
lean_inc(v_snd_1220_);
v_fst_1221_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_fst_1221_);
lean_dec_ref(v___x_1218_);
v_fst_1222_ = lean_ctor_get(v_snd_1219_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v_snd_1219_);
if (v_isSharedCheck_1256_ == 0)
{
lean_object* v_unused_1257_; 
v_unused_1257_ = lean_ctor_get(v_snd_1219_, 1);
lean_dec(v_unused_1257_);
v___x_1224_ = v_snd_1219_;
v_isShared_1225_ = v_isSharedCheck_1256_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_fst_1222_);
lean_dec(v_snd_1219_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1256_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v_fst_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1254_; 
v_fst_1226_ = lean_ctor_get(v_snd_1220_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_snd_1220_);
if (v_isSharedCheck_1254_ == 0)
{
lean_object* v_unused_1255_; 
v_unused_1255_ = lean_ctor_get(v_snd_1220_, 1);
lean_dec(v_unused_1255_);
v___x_1228_ = v_snd_1220_;
v_isShared_1229_ = v_isSharedCheck_1254_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_fst_1226_);
lean_dec(v_snd_1220_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1254_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
lean_inc(v_fst_1226_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 1, v_fst_1226_);
lean_ctor_set(v___x_1228_, 0, v_fst_1222_);
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_fst_1222_);
lean_ctor_set(v_reuseFailAlloc_1253_, 1, v_fst_1226_);
v___x_1231_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1233_; 
if (v_isShared_1225_ == 0)
{
lean_ctor_set(v___x_1224_, 1, v___x_1231_);
lean_ctor_set(v___x_1224_, 0, v_fst_1221_);
v___x_1233_ = v___x_1224_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_fst_1221_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v_snd_1238_; lean_object* v_fst_1239_; lean_object* v_fst_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1250_; 
v___x_1234_ = l_List_lengthTR___redArg(v_fst_1226_);
lean_dec(v_fst_1226_);
v___x_1235_ = lean_unsigned_to_nat(1u);
v___x_1236_ = lean_nat_add(v___x_1234_, v___x_1235_);
lean_dec(v___x_1234_);
v___x_1237_ = lp_lean_x2dftml_LeanFtml_nativeProcess_closeAll(v___x_1233_, v___x_1236_);
v_snd_1238_ = lean_ctor_get(v___x_1237_, 1);
lean_inc(v_snd_1238_);
v_fst_1239_ = lean_ctor_get(v___x_1237_, 0);
lean_inc(v_fst_1239_);
lean_dec_ref(v___x_1237_);
v_fst_1240_ = lean_ctor_get(v_snd_1238_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_snd_1238_);
if (v_isSharedCheck_1250_ == 0)
{
lean_object* v_unused_1251_; 
v_unused_1251_ = lean_ctor_get(v_snd_1238_, 1);
lean_dec(v_unused_1251_);
v___x_1242_ = v_snd_1238_;
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_fst_1240_);
lean_dec(v_snd_1238_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1244_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_nativeProcess___closed__1));
v___x_1245_ = l_List_appendTR___redArg(v___x_1244_, v_fst_1239_);
v___x_1246_ = l_List_appendTR___redArg(v___x_1245_, v___x_1244_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 1, v_fst_1240_);
lean_ctor_set(v___x_1242_, 0, v___x_1246_);
v___x_1248_ = v___x_1242_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1246_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_fst_1240_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
lean_dec(v_items_1212_);
v___x_1258_ = lean_box(0);
v___x_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_ctor_set(v___x_1259_, 1, v_toks_1210_);
return v___x_1259_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeScan(lean_object* v_src_1260_, lean_object* v_toks_1261_, uint8_t v_atStart_1262_, lean_object* v_x_1263_){
_start:
{
lean_object* v_zero_1264_; uint8_t v_isZero_1265_; 
v_zero_1264_ = lean_unsigned_to_nat(0u);
v_isZero_1265_ = lean_nat_dec_eq(v_x_1263_, v_zero_1264_);
if (v_isZero_1265_ == 1)
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1266_, 0, v_src_1260_);
lean_ctor_set(v___x_1266_, 1, v_toks_1261_);
return v___x_1266_;
}
else
{
if (lean_obj_tag(v_src_1260_) == 0)
{
lean_object* v___x_1267_; 
v___x_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1267_, 0, v_src_1260_);
lean_ctor_set(v___x_1267_, 1, v_toks_1261_);
return v___x_1267_;
}
else
{
lean_object* v_head_1268_; lean_object* v_tail_1269_; lean_object* v_one_1270_; lean_object* v_n_1271_; 
v_head_1268_ = lean_ctor_get(v_src_1260_, 0);
lean_inc(v_head_1268_);
v_tail_1269_ = lean_ctor_get(v_src_1260_, 1);
lean_inc(v_tail_1269_);
v_one_1270_ = lean_unsigned_to_nat(1u);
v_n_1271_ = lean_nat_sub(v_x_1263_, v_one_1270_);
if (v_atStart_1262_ == 0)
{
lean_dec_ref_known(v_src_1260_, 2);
goto v___jp_1272_;
}
else
{
lean_object* v___x_1286_; 
v___x_1286_ = lp_lean_x2dftml_LeanFtml_nativeRunAt(v_src_1260_);
if (lean_obj_tag(v___x_1286_) == 0)
{
goto v___jp_1272_;
}
else
{
lean_object* v_val_1287_; lean_object* v_fst_1288_; lean_object* v_snd_1289_; lean_object* v___x_1290_; lean_object* v_fst_1291_; lean_object* v_snd_1292_; lean_object* v___x_1293_; lean_object* v_fst_1294_; lean_object* v_snd_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1303_; 
lean_dec(v_tail_1269_);
lean_dec(v_head_1268_);
v_val_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_val_1287_);
lean_dec_ref_known(v___x_1286_, 1);
v_fst_1288_ = lean_ctor_get(v_val_1287_, 0);
lean_inc(v_fst_1288_);
v_snd_1289_ = lean_ctor_get(v_val_1287_, 1);
lean_inc(v_snd_1289_);
lean_dec(v_val_1287_);
v___x_1290_ = lp_lean_x2dftml_LeanFtml_nativeProcess(v_fst_1288_, v_toks_1261_);
v_fst_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_fst_1291_);
v_snd_1292_ = lean_ctor_get(v___x_1290_, 1);
lean_inc(v_snd_1292_);
lean_dec_ref(v___x_1290_);
v___x_1293_ = lp_lean_x2dftml_LeanFtml_nativeScan(v_snd_1289_, v_snd_1292_, v_atStart_1262_, v_n_1271_);
lean_dec(v_n_1271_);
v_fst_1294_ = lean_ctor_get(v___x_1293_, 0);
v_snd_1295_ = lean_ctor_get(v___x_1293_, 1);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1293_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1297_ = v___x_1293_;
v_isShared_1298_ = v_isSharedCheck_1303_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_snd_1295_);
lean_inc(v_fst_1294_);
lean_dec(v___x_1293_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1303_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1299_; lean_object* v___x_1301_; 
v___x_1299_ = l_List_appendTR___redArg(v_fst_1291_, v_fst_1294_);
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 0, v___x_1299_);
v___x_1301_ = v___x_1297_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v_snd_1295_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
v___jp_1272_:
{
lean_object* v___x_1273_; uint8_t v___x_1274_; lean_object* v___x_1275_; lean_object* v_fst_1276_; lean_object* v_snd_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1285_; 
v___x_1273_ = lean_unsigned_to_nat(10u);
v___x_1274_ = lean_nat_dec_eq(v_head_1268_, v___x_1273_);
v___x_1275_ = lp_lean_x2dftml_LeanFtml_nativeScan(v_tail_1269_, v_toks_1261_, v___x_1274_, v_n_1271_);
lean_dec(v_n_1271_);
v_fst_1276_ = lean_ctor_get(v___x_1275_, 0);
v_snd_1277_ = lean_ctor_get(v___x_1275_, 1);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1279_ = v___x_1275_;
v_isShared_1280_ = v_isSharedCheck_1285_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_snd_1277_);
lean_inc(v_fst_1276_);
lean_dec(v___x_1275_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1285_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1283_; 
v___x_1281_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1281_, 0, v_head_1268_);
lean_ctor_set(v___x_1281_, 1, v_fst_1276_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 0, v___x_1281_);
v___x_1283_ = v___x_1279_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1281_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v_snd_1277_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeScan___boxed(lean_object* v_src_1304_, lean_object* v_toks_1305_, lean_object* v_atStart_1306_, lean_object* v_x_1307_){
_start:
{
uint8_t v_atStart_boxed_1308_; lean_object* v_res_1309_; 
v_atStart_boxed_1308_ = lean_unbox(v_atStart_1306_);
v_res_1309_ = lp_lean_x2dftml_LeanFtml_nativeScan(v_src_1304_, v_toks_1305_, v_atStart_boxed_1308_, v_x_1307_);
lean_dec(v_x_1307_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listNative(lean_object* v_src_1310_, lean_object* v_toks_1311_){
_start:
{
uint8_t v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1312_ = 1;
v___x_1313_ = l_List_lengthTR___redArg(v_src_1310_);
v___x_1314_ = lean_unsigned_to_nat(1u);
v___x_1315_ = lean_nat_add(v___x_1313_, v___x_1314_);
lean_dec(v___x_1313_);
v___x_1316_ = lp_lean_x2dftml_LeanFtml_nativeScan(v_src_1310_, v_toks_1311_, v___x_1312_, v___x_1315_);
lean_dec(v___x_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_defRunExtend(lean_object* v_acc_1320_, lean_object* v_rest_1321_, lean_object* v_x_1322_){
_start:
{
lean_object* v_zero_1323_; uint8_t v_isZero_1324_; 
v_zero_1323_ = lean_unsigned_to_nat(0u);
v_isZero_1324_ = lean_nat_dec_eq(v_x_1322_, v_zero_1323_);
if (v_isZero_1324_ == 1)
{
lean_object* v___x_1325_; 
lean_dec(v_x_1322_);
lean_dec(v_rest_1321_);
lean_dec(v_acc_1320_);
v___x_1325_ = lean_box(0);
return v___x_1325_;
}
else
{
lean_object* v_one_1326_; lean_object* v_n_1327_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; 
v_one_1326_ = lean_unsigned_to_nat(1u);
v_n_1327_ = lean_nat_sub(v_x_1322_, v_one_1326_);
lean_dec(v_x_1322_);
v___x_1335_ = lean_unsigned_to_nat(2u);
v___x_1336_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_rest_1321_);
v___x_1337_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_rest_1321_, v_rest_1321_, v___x_1335_, v___x_1336_);
v___x_1338_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_defRunExtend___closed__0));
v___x_1339_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1337_, v___x_1338_);
lean_dec(v___x_1337_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
lean_inc(v_rest_1321_);
v___x_1340_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_rest_1321_, v_rest_1321_, v_one_1326_, v___x_1336_);
v___x_1341_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___x_1342_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1340_, v___x_1341_);
lean_dec(v___x_1340_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
lean_dec(v_n_1327_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_acc_1320_);
lean_ctor_set(v___x_1343_, 1, v_rest_1321_);
v___x_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
return v___x_1344_;
}
else
{
goto v___jp_1328_;
}
}
else
{
goto v___jp_1328_;
}
v___jp_1328_:
{
lean_object* v___x_1329_; 
v___x_1329_ = lp_lean_x2dftml_LeanFtml_firstLine(v_rest_1321_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_dec(v_n_1327_);
lean_dec(v_acc_1320_);
return v___x_1329_;
}
else
{
lean_object* v_val_1330_; lean_object* v_fst_1331_; lean_object* v_snd_1332_; lean_object* v___x_1333_; 
v_val_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_val_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v_fst_1331_ = lean_ctor_get(v_val_1330_, 0);
lean_inc(v_fst_1331_);
v_snd_1332_ = lean_ctor_get(v_val_1330_, 1);
lean_inc(v_snd_1332_);
lean_dec(v_val_1330_);
v___x_1333_ = l_List_appendTR___redArg(v_acc_1320_, v_fst_1331_);
v_acc_1320_ = v___x_1333_;
v_rest_1321_ = v_snd_1332_;
v_x_1322_ = v_n_1327_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_defRunAt(lean_object* v_s_1345_){
_start:
{
if (lean_obj_tag(v_s_1345_) == 1)
{
lean_object* v_head_1346_; lean_object* v_tail_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v_head_1346_ = lean_ctor_get(v_s_1345_, 0);
lean_inc(v_head_1346_);
v_tail_1347_ = lean_ctor_get(v_s_1345_, 1);
lean_inc(v_tail_1347_);
lean_dec_ref_known(v_s_1345_, 2);
v___x_1348_ = lean_unsigned_to_nat(10u);
v___x_1349_ = lean_nat_dec_eq(v_head_1346_, v___x_1348_);
lean_dec(v_head_1346_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; 
lean_dec(v_tail_1347_);
v___x_1350_ = lean_box(0);
return v___x_1350_;
}
else
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1351_ = lean_unsigned_to_nat(2u);
v___x_1352_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_tail_1347_);
v___x_1353_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_1347_, v_tail_1347_, v___x_1351_, v___x_1352_);
v___x_1354_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_defRunExtend___closed__0));
v___x_1355_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1353_, v___x_1354_);
lean_dec(v___x_1353_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_dec(v_tail_1347_);
v___x_1356_ = lean_box(0);
return v___x_1356_;
}
else
{
lean_object* v___x_1357_; 
v___x_1357_ = lp_lean_x2dftml_LeanFtml_firstLine(v_tail_1347_);
if (lean_obj_tag(v___x_1357_) == 0)
{
return v___x_1357_;
}
else
{
lean_object* v_val_1358_; lean_object* v_fst_1359_; lean_object* v_snd_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v_val_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_val_1358_);
lean_dec_ref_known(v___x_1357_, 1);
v_fst_1359_ = lean_ctor_get(v_val_1358_, 0);
lean_inc(v_fst_1359_);
v_snd_1360_ = lean_ctor_get(v_val_1358_, 1);
lean_inc(v_snd_1360_);
lean_dec(v_val_1358_);
v___x_1361_ = l_List_lengthTR___redArg(v_snd_1360_);
v___x_1362_ = lean_unsigned_to_nat(1u);
v___x_1363_ = lean_nat_add(v___x_1361_, v___x_1362_);
lean_dec(v___x_1361_);
v___x_1364_ = lp_lean_x2dftml_LeanFtml_defRunExtend(v_fst_1359_, v_snd_1360_, v___x_1363_);
return v___x_1364_;
}
}
}
}
else
{
lean_object* v___x_1365_; 
lean_dec(v_s_1345_);
v___x_1365_ = lean_box(0);
return v___x_1365_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_defItemAt_spec__1(lean_object* v_x_1366_){
_start:
{
if (lean_obj_tag(v_x_1366_) == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_box(0);
return v___x_1367_;
}
else
{
lean_object* v_head_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1393_; 
v_head_1368_ = lean_ctor_get(v_x_1366_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v_x_1366_);
if (v_isSharedCheck_1393_ == 0)
{
lean_object* v_unused_1394_; 
v_unused_1394_ = lean_ctor_get(v_x_1366_, 1);
lean_dec(v_unused_1394_);
v___x_1370_ = v_x_1366_;
v_isShared_1371_ = v_isSharedCheck_1393_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_head_1368_);
lean_dec(v_x_1366_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1393_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v_fst_1372_; lean_object* v_snd_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1392_; 
v_fst_1372_ = lean_ctor_get(v_head_1368_, 0);
v_snd_1373_ = lean_ctor_get(v_head_1368_, 1);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_head_1368_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1375_ = v_head_1368_;
v_isShared_1376_ = v_isSharedCheck_1392_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_snd_1373_);
lean_inc(v_fst_1372_);
lean_dec(v_head_1368_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1392_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___y_1378_; lean_object* v___x_1389_; 
v___x_1389_ = lp_lean_x2dftml_LeanFtml_lineBreakIdx(v_snd_1373_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v___x_1390_; 
v___x_1390_ = l_List_lengthTR___redArg(v_snd_1373_);
v___y_1378_ = v___x_1390_;
goto v___jp_1377_;
}
else
{
lean_object* v_val_1391_; 
v_val_1391_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_val_1391_);
lean_dec_ref_known(v___x_1389_, 1);
v___y_1378_ = v_val_1391_;
goto v___jp_1377_;
}
v___jp_1377_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1379_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___y_1378_);
lean_inc(v_snd_1373_);
v___x_1380_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_snd_1373_, v_snd_1373_, v___y_1378_, v___x_1379_);
v___x_1381_ = l_List_drop___redArg(v___y_1378_, v_snd_1373_);
lean_dec(v_snd_1373_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v___x_1381_);
lean_ctor_set(v___x_1375_, 0, v___x_1380_);
v___x_1383_ = v___x_1375_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1385_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set_tag(v___x_1370_, 0);
lean_ctor_set(v___x_1370_, 1, v___x_1383_);
lean_ctor_set(v___x_1370_, 0, v_fst_1372_);
v___x_1385_ = v___x_1370_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_fst_1372_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
lean_object* v___x_1386_; 
v___x_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
return v___x_1386_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_defItemAt_spec__0(lean_object* v_after_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_){
_start:
{
if (lean_obj_tag(v_a_1399_) == 0)
{
lean_object* v___x_1401_; 
lean_dec(v_after_1398_);
v___x_1401_ = lean_array_to_list(v_a_1400_);
return v___x_1401_;
}
else
{
lean_object* v_head_1402_; lean_object* v_tail_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1422_; 
v_head_1402_ = lean_ctor_get(v_a_1399_, 0);
v_tail_1403_ = lean_ctor_get(v_a_1399_, 1);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_a_1399_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1405_ = v_a_1399_;
v_isShared_1406_ = v_isSharedCheck_1422_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_tail_1403_);
lean_inc(v_head_1402_);
lean_dec(v_a_1399_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1422_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; uint8_t v___x_1412_; 
v___x_1407_ = lean_unsigned_to_nat(3u);
v___x_1408_ = ((lean_object*)(lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_defItemAt_spec__0___closed__0));
lean_inc(v_head_1402_);
v___x_1409_ = l_List_drop___redArg(v_head_1402_, v_after_1398_);
v___x_1410_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_1409_);
v___x_1411_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1409_, v___x_1409_, v___x_1407_, v___x_1410_);
lean_dec(v___x_1409_);
v___x_1412_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1411_, v___x_1408_);
lean_dec(v___x_1411_);
if (v___x_1412_ == 0)
{
lean_del_object(v___x_1405_);
lean_dec(v_head_1402_);
v_a_1399_ = v_tail_1403_;
goto _start;
}
else
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1418_; 
lean_inc(v_head_1402_);
lean_inc(v_after_1398_);
v___x_1414_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_after_1398_, v_after_1398_, v_head_1402_, v___x_1410_);
v___x_1415_ = lean_nat_add(v_head_1402_, v___x_1407_);
lean_dec(v_head_1402_);
v___x_1416_ = l_List_drop___redArg(v___x_1415_, v_after_1398_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 0);
lean_ctor_set(v___x_1405_, 1, v___x_1416_);
lean_ctor_set(v___x_1405_, 0, v___x_1414_);
v___x_1418_ = v___x_1405_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1414_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_array_push(v_a_1400_, v___x_1418_);
v_a_1399_ = v_tail_1403_;
v_a_1400_ = v___x_1419_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_defItemAt(lean_object* v_s_1423_){
_start:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v___x_1424_ = lean_unsigned_to_nat(2u);
v___x_1425_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_s_1423_);
v___x_1426_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_1423_, v_s_1423_, v___x_1424_, v___x_1425_);
v___x_1427_ = lean_box(0);
v___x_1428_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_defRunExtend___closed__0));
v___x_1429_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1426_, v___x_1428_);
lean_dec(v___x_1426_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; 
lean_dec(v_s_1423_);
v___x_1430_ = lean_box(0);
return v___x_1430_;
}
else
{
lean_object* v_after_1431_; lean_object* v___y_1433_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; 
v_after_1431_ = l_List_drop___redArg(v___x_1424_, v_s_1423_);
lean_dec(v_s_1423_);
v___x_1441_ = lean_unsigned_to_nat(3u);
lean_inc(v_after_1431_);
v___x_1442_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_after_1431_, v_after_1431_, v___x_1441_, v___x_1425_);
v___x_1443_ = ((lean_object*)(lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_defItemAt_spec__0___closed__0));
v___x_1444_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1442_, v___x_1443_);
lean_dec(v___x_1442_);
if (v___x_1444_ == 0)
{
v___y_1433_ = v___x_1427_;
goto v___jp_1432_;
}
else
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1445_ = l_List_drop___redArg(v___x_1441_, v_after_1431_);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1427_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
lean_ctor_set(v___x_1447_, 1, v___x_1427_);
v___y_1433_ = v___x_1447_;
goto v___jp_1432_;
}
v___jp_1432_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v_present_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1434_ = l_List_lengthTR___redArg(v_after_1431_);
v___x_1435_ = lean_unsigned_to_nat(1u);
v___x_1436_ = lean_nat_add(v___x_1434_, v___x_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = l_List_range(v___x_1436_);
v_present_1438_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_defItemAt_spec__0(v_after_1431_, v___x_1437_, v___x_1425_);
v___x_1439_ = l_List_appendTR___redArg(v___y_1433_, v_present_1438_);
v___x_1440_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_defItemAt_spec__1(v___x_1439_);
return v___x_1440_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectDefItems_go(lean_object* v_a_1448_, uint8_t v_a_1449_, lean_object* v_a_1450_){
_start:
{
if (lean_obj_tag(v_a_1448_) == 0)
{
lean_object* v___x_1451_; 
lean_dec(v_a_1450_);
v___x_1451_ = lean_box(0);
return v___x_1451_;
}
else
{
lean_object* v_head_1452_; lean_object* v_tail_1453_; lean_object* v_zero_1454_; uint8_t v_isZero_1455_; 
v_head_1452_ = lean_ctor_get(v_a_1448_, 0);
lean_inc(v_head_1452_);
v_tail_1453_ = lean_ctor_get(v_a_1448_, 1);
lean_inc(v_tail_1453_);
v_zero_1454_ = lean_unsigned_to_nat(0u);
v_isZero_1455_ = lean_nat_dec_eq(v_a_1450_, v_zero_1454_);
if (v_isZero_1455_ == 1)
{
lean_object* v___x_1456_; 
lean_dec(v_tail_1453_);
lean_dec_ref_known(v_a_1448_, 2);
lean_dec(v_head_1452_);
lean_dec(v_a_1450_);
v___x_1456_ = lean_box(0);
return v___x_1456_;
}
else
{
lean_object* v_one_1457_; lean_object* v_n_1458_; 
v_one_1457_ = lean_unsigned_to_nat(1u);
v_n_1458_ = lean_nat_sub(v_a_1450_, v_one_1457_);
lean_dec(v_a_1450_);
if (v_a_1449_ == 0)
{
lean_object* v___x_1459_; uint8_t v___x_1460_; 
lean_dec_ref_known(v_a_1448_, 2);
v___x_1459_ = lean_unsigned_to_nat(10u);
v___x_1460_ = lean_nat_dec_eq(v_head_1452_, v___x_1459_);
lean_dec(v_head_1452_);
v_a_1448_ = v_tail_1453_;
v_a_1449_ = v___x_1460_;
v_a_1450_ = v_n_1458_;
goto _start;
}
else
{
lean_object* v___x_1462_; 
v___x_1462_ = lp_lean_x2dftml_LeanFtml_defItemAt(v_a_1448_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v___x_1463_; uint8_t v___x_1464_; 
v___x_1463_ = lean_unsigned_to_nat(10u);
v___x_1464_ = lean_nat_dec_eq(v_head_1452_, v___x_1463_);
lean_dec(v_head_1452_);
v_a_1448_ = v_tail_1453_;
v_a_1449_ = v___x_1464_;
v_a_1450_ = v_n_1458_;
goto _start;
}
else
{
lean_object* v_val_1466_; lean_object* v_snd_1467_; lean_object* v_fst_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1485_; 
lean_dec(v_tail_1453_);
lean_dec(v_head_1452_);
v_val_1466_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_val_1466_);
lean_dec_ref_known(v___x_1462_, 1);
v_snd_1467_ = lean_ctor_get(v_val_1466_, 1);
v_fst_1468_ = lean_ctor_get(v_val_1466_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_val_1466_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1470_ = v_val_1466_;
v_isShared_1471_ = v_isSharedCheck_1485_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_snd_1467_);
lean_inc(v_fst_1468_);
lean_dec(v_val_1466_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1485_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v_fst_1472_; lean_object* v_snd_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1484_; 
v_fst_1472_ = lean_ctor_get(v_snd_1467_, 0);
v_snd_1473_ = lean_ctor_get(v_snd_1467_, 1);
v_isSharedCheck_1484_ = !lean_is_exclusive(v_snd_1467_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1475_ = v_snd_1467_;
v_isShared_1476_ = v_isSharedCheck_1484_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_snd_1473_);
lean_inc(v_fst_1472_);
lean_dec(v_snd_1467_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1484_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1478_; 
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 1, v_fst_1472_);
lean_ctor_set(v___x_1475_, 0, v_fst_1468_);
v___x_1478_ = v___x_1475_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_fst_1468_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v_fst_1472_);
v___x_1478_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1479_ = lp_lean_x2dftml_LeanFtml_collectDefItems_go(v_snd_1473_, v_isZero_1455_, v_n_1458_);
if (v_isShared_1471_ == 0)
{
lean_ctor_set_tag(v___x_1470_, 1);
lean_ctor_set(v___x_1470_, 1, v___x_1479_);
lean_ctor_set(v___x_1470_, 0, v___x_1478_);
v___x_1481_ = v___x_1470_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1478_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectDefItems_go___boxed(lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_){
_start:
{
uint8_t v_a_134__boxed_1489_; lean_object* v_res_1490_; 
v_a_134__boxed_1489_ = lean_unbox(v_a_1487_);
v_res_1490_ = lp_lean_x2dftml_LeanFtml_collectDefItems_go(v_a_1486_, v_a_134__boxed_1489_, v_a_1488_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collectDefItems(lean_object* v_group_1491_){
_start:
{
uint8_t v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1492_ = 1;
v___x_1493_ = lean_unsigned_to_nat(2u);
v___x_1494_ = l_List_lengthTR___redArg(v_group_1491_);
v___x_1495_ = lean_nat_mul(v___x_1493_, v___x_1494_);
lean_dec(v___x_1494_);
v___x_1496_ = lean_nat_add(v___x_1495_, v___x_1493_);
lean_dec(v___x_1495_);
v___x_1497_ = lp_lean_x2dftml_LeanFtml_collectDefItems_go(v_group_1491_, v___x_1492_, v___x_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh_go(lean_object* v_toks_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_){
_start:
{
if (lean_obj_tag(v_a_1500_) == 0)
{
return v_a_1500_;
}
else
{
lean_object* v_head_1502_; lean_object* v_tail_1503_; lean_object* v_zero_1504_; uint8_t v_isZero_1505_; 
v_head_1502_ = lean_ctor_get(v_a_1500_, 0);
v_tail_1503_ = lean_ctor_get(v_a_1500_, 1);
v_zero_1504_ = lean_unsigned_to_nat(0u);
v_isZero_1505_ = lean_nat_dec_eq(v_a_1501_, v_zero_1504_);
if (v_isZero_1505_ == 1)
{
lean_object* v___x_1506_; 
lean_dec_ref_known(v_a_1500_, 2);
v___x_1506_ = lean_box(0);
return v___x_1506_;
}
else
{
lean_object* v_one_1507_; lean_object* v_n_1508_; lean_object* v___x_1512_; uint8_t v___x_1513_; 
v_one_1507_ = lean_unsigned_to_nat(1u);
v_n_1508_ = lean_nat_sub(v_a_1501_, v_one_1507_);
v___x_1512_ = lean_unsigned_to_nat(255u);
v___x_1513_ = lean_nat_dec_eq(v_head_1502_, v___x_1512_);
if (v___x_1513_ == 0)
{
lean_inc(v_tail_1503_);
lean_inc(v_head_1502_);
lean_dec_ref_known(v_a_1500_, 2);
goto v___jp_1509_;
}
else
{
lean_object* v___x_1514_; 
v___x_1514_ = lp_lean_x2dftml_LeanFtml_phAt(v_a_1500_, v_zero_1504_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_inc(v_tail_1503_);
lean_inc(v_head_1502_);
lean_dec_ref_known(v_a_1500_, 2);
goto v___jp_1509_;
}
else
{
lean_object* v_val_1515_; lean_object* v_fst_1516_; lean_object* v_snd_1517_; lean_object* v___y_1519_; lean_object* v___x_1526_; 
v_val_1515_ = lean_ctor_get(v___x_1514_, 0);
lean_inc(v_val_1515_);
lean_dec_ref_known(v___x_1514_, 1);
v_fst_1516_ = lean_ctor_get(v_val_1515_, 0);
lean_inc(v_fst_1516_);
v_snd_1517_ = lean_ctor_get(v_val_1515_, 1);
lean_inc(v_snd_1517_);
lean_dec(v_val_1515_);
v___x_1526_ = l_List_get_x3fInternal___redArg(v_toks_1499_, v_fst_1516_);
if (lean_obj_tag(v___x_1526_) == 0)
{
goto v___jp_1523_;
}
else
{
lean_object* v_val_1527_; lean_object* v_rule_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; 
v_val_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_val_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v_rule_1528_ = lean_ctor_get(v_val_1527_, 0);
lean_inc_ref(v_rule_1528_);
lean_dec(v_val_1527_);
v___x_1529_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_stripCommentPh_go___closed__0));
v___x_1530_ = lean_string_dec_eq(v_rule_1528_, v___x_1529_);
lean_dec_ref(v_rule_1528_);
if (v___x_1530_ == 0)
{
goto v___jp_1523_;
}
else
{
lean_object* v___x_1531_; 
v___x_1531_ = lean_box(0);
v___y_1519_ = v___x_1531_;
goto v___jp_1518_;
}
}
v___jp_1518_:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1520_ = l_List_drop___redArg(v_snd_1517_, v_a_1500_);
lean_dec_ref_known(v_a_1500_, 2);
v___x_1521_ = lp_lean_x2dftml_LeanFtml_stripCommentPh_go(v_toks_1499_, v___x_1520_, v_n_1508_);
lean_dec(v_n_1508_);
v___x_1522_ = l_List_appendTR___redArg(v___y_1519_, v___x_1521_);
return v___x_1522_;
}
v___jp_1523_:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_snd_1517_);
lean_inc_ref(v_a_1500_);
v___x_1525_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1500_, v_a_1500_, v_snd_1517_, v___x_1524_);
v___y_1519_ = v___x_1525_;
goto v___jp_1518_;
}
}
}
v___jp_1509_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lp_lean_x2dftml_LeanFtml_stripCommentPh_go(v_toks_1499_, v_tail_1503_, v_n_1508_);
lean_dec(v_n_1508_);
v___x_1511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1511_, 0, v_head_1502_);
lean_ctor_set(v___x_1511_, 1, v___x_1510_);
return v___x_1511_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh_go___boxed(lean_object* v_toks_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = lp_lean_x2dftml_LeanFtml_stripCommentPh_go(v_toks_1532_, v_a_1533_, v_a_1534_);
lean_dec(v_a_1534_);
lean_dec(v_toks_1532_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh(lean_object* v_toks_1536_, lean_object* v_s_1537_){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1538_ = l_List_lengthTR___redArg(v_s_1537_);
v___x_1539_ = lean_unsigned_to_nat(1u);
v___x_1540_ = lean_nat_add(v___x_1538_, v___x_1539_);
lean_dec(v___x_1538_);
v___x_1541_ = lp_lean_x2dftml_LeanFtml_stripCommentPh_go(v_toks_1536_, v_s_1537_, v___x_1540_);
lean_dec(v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripCommentPh___boxed(lean_object* v_toks_1542_, lean_object* v_s_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = lp_lean_x2dftml_LeanFtml_stripCommentPh(v_toks_1542_, v_s_1543_);
lean_dec(v_toks_1542_);
return v_res_1544_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_termRendersEmpty(lean_object* v_toks_1545_, lean_object* v_term_1546_){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; uint8_t v___x_1549_; 
v___x_1547_ = lp_lean_x2dftml_LeanFtml_stripCommentPh(v_toks_1545_, v_term_1546_);
v___x_1548_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_1547_);
lean_dec(v___x_1547_);
v___x_1549_ = l_List_isEmpty___redArg(v___x_1548_);
lean_dec(v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_termRendersEmpty___boxed(lean_object* v_toks_1550_, lean_object* v_term_1551_){
_start:
{
uint8_t v_res_1552_; lean_object* v_r_1553_; 
v_res_1552_ = lp_lean_x2dftml_LeanFtml_termRendersEmpty(v_toks_1550_, v_term_1551_);
lean_dec(v_toks_1550_);
v_r_1553_ = lean_box(v_res_1552_);
return v_r_1553_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emitDef(lean_object* v_out_1555_, lean_object* v_toks_1556_, lean_object* v_opts_1557_){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v_fst_1560_; lean_object* v_snd_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1569_; 
v___x_1558_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitDef___closed__0));
v___x_1559_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_1558_, v_opts_1557_, v_toks_1556_);
v_fst_1560_ = lean_ctor_get(v___x_1559_, 0);
v_snd_1561_ = lean_ctor_get(v___x_1559_, 1);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1563_ = v___x_1559_;
v_isShared_1564_ = v_isSharedCheck_1569_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_snd_1561_);
lean_inc(v_fst_1560_);
lean_dec(v___x_1559_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1569_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1565_; lean_object* v___x_1567_; 
v___x_1565_ = l_List_appendTR___redArg(v_out_1555_, v_fst_1560_);
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 0, v___x_1565_);
v___x_1567_ = v___x_1563_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1565_);
lean_ctor_set(v_reuseFailAlloc_1568_, 1, v_snd_1561_);
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
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__0));
v___x_1572_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1571_);
return v___x_1572_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__1);
v___x_1574_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1573_);
return v___x_1574_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1575_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__2, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__2_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__2);
v___x_1576_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
lean_ctor_set(v___x_1577_, 1, v___x_1575_);
return v___x_1577_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1578_ = lean_box(0);
v___x_1579_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__3);
v___x_1580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1579_);
lean_ctor_set(v___x_1580_, 1, v___x_1578_);
return v___x_1580_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__5));
v___x_1583_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1582_);
return v___x_1583_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__6, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__6_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__6);
v___x_1585_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1584_);
return v___x_1585_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1586_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__7);
v___x_1587_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
lean_ctor_set(v___x_1588_, 1, v___x_1586_);
return v___x_1588_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1589_ = lean_box(0);
v___x_1590_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__8, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__8_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__8);
v___x_1591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
lean_ctor_set(v___x_1591_, 1, v___x_1589_);
return v___x_1591_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__11(void){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__10));
v___x_1594_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1593_);
return v___x_1594_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__12(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__11);
v___x_1596_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1595_);
return v___x_1596_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__13(void){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1597_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__12, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__12_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__12);
v___x_1598_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
lean_ctor_set(v___x_1599_, 1, v___x_1597_);
return v___x_1599_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__14(void){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1600_ = lean_box(0);
v___x_1601_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__13, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__13_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__13);
v___x_1602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1601_);
lean_ctor_set(v___x_1602_, 1, v___x_1600_);
return v___x_1602_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__16(void){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__15));
v___x_1605_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1604_);
return v___x_1605_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__17(void){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__16, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__16_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__16);
v___x_1607_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1606_);
return v___x_1607_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__18(void){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1608_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__17, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__17_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__17);
v___x_1609_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1609_);
lean_ctor_set(v___x_1610_, 1, v___x_1608_);
return v___x_1610_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__19(void){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1611_ = lean_box(0);
v___x_1612_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__18, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__18_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__18);
v___x_1613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
lean_ctor_set(v___x_1613_, 1, v___x_1611_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0(lean_object* v_x_1614_, lean_object* v_x_1615_){
_start:
{
if (lean_obj_tag(v_x_1615_) == 0)
{
return v_x_1614_;
}
else
{
lean_object* v_head_1616_; lean_object* v_tail_1617_; lean_object* v_fst_1618_; lean_object* v_snd_1619_; lean_object* v_fst_1620_; lean_object* v_snd_1621_; lean_object* v_fst_1623_; lean_object* v_snd_1624_; lean_object* v_term_1634_; uint8_t v___x_1635_; 
v_head_1616_ = lean_ctor_get(v_x_1615_, 0);
v_tail_1617_ = lean_ctor_get(v_x_1615_, 1);
v_fst_1618_ = lean_ctor_get(v_x_1614_, 0);
lean_inc(v_fst_1618_);
v_snd_1619_ = lean_ctor_get(v_x_1614_, 1);
lean_inc(v_snd_1619_);
lean_dec_ref(v_x_1614_);
v_fst_1620_ = lean_ctor_get(v_head_1616_, 0);
v_snd_1621_ = lean_ctor_get(v_head_1616_, 1);
v_term_1634_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_1620_);
lean_inc(v_term_1634_);
v___x_1635_ = lp_lean_x2dftml_LeanFtml_termRendersEmpty(v_snd_1619_, v_term_1634_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v_fst_1638_; lean_object* v_snd_1639_; lean_object* v_out_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v_fst_1643_; lean_object* v_snd_1644_; 
v___x_1636_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__14, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__14_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__14);
v___x_1637_ = lp_lean_x2dftml_LeanFtml_emitDef(v_fst_1618_, v_snd_1619_, v___x_1636_);
v_fst_1638_ = lean_ctor_get(v___x_1637_, 0);
lean_inc(v_fst_1638_);
v_snd_1639_ = lean_ctor_get(v___x_1637_, 1);
lean_inc(v_snd_1639_);
lean_dec_ref(v___x_1637_);
v_out_1640_ = l_List_appendTR___redArg(v_fst_1638_, v_term_1634_);
v___x_1641_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__19, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__19_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__19);
v___x_1642_ = lp_lean_x2dftml_LeanFtml_emitDef(v_out_1640_, v_snd_1639_, v___x_1641_);
v_fst_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_fst_1643_);
v_snd_1644_ = lean_ctor_get(v___x_1642_, 1);
lean_inc(v_snd_1644_);
lean_dec_ref(v___x_1642_);
v_fst_1623_ = v_fst_1643_;
v_snd_1624_ = v_snd_1644_;
goto v___jp_1622_;
}
else
{
lean_dec(v_term_1634_);
v_fst_1623_ = v_fst_1618_;
v_snd_1624_ = v_snd_1619_;
goto v___jp_1622_;
}
v___jp_1622_:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v_fst_1627_; lean_object* v_snd_1628_; lean_object* v___x_1629_; lean_object* v_out_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1625_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__4, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__4_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__4);
v___x_1626_ = lp_lean_x2dftml_LeanFtml_emitDef(v_fst_1623_, v_snd_1624_, v___x_1625_);
v_fst_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_fst_1627_);
v_snd_1628_ = lean_ctor_get(v___x_1626_, 1);
lean_inc(v_snd_1628_);
lean_dec_ref(v___x_1626_);
v___x_1629_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_snd_1621_);
v_out_1630_ = l_List_appendTR___redArg(v_fst_1627_, v___x_1629_);
v___x_1631_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___closed__9);
v___x_1632_ = lp_lean_x2dftml_LeanFtml_emitDef(v_out_1630_, v_snd_1628_, v___x_1631_);
v_x_1614_ = v___x_1632_;
v_x_1615_ = v_tail_1617_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0___boxed(lean_object* v_x_1645_, lean_object* v_x_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0(v_x_1645_, v_x_1646_);
lean_dec(v_x_1646_);
return v_res_1647_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__1(void){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_defProcess___closed__0));
v___x_1650_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1649_);
return v___x_1650_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__2(void){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_defProcess___closed__1, &lp_lean_x2dftml_LeanFtml_defProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__1);
v___x_1652_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1651_);
return v___x_1652_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__3(void){
_start:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1653_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_defProcess___closed__2, &lp_lean_x2dftml_LeanFtml_defProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__2);
v___x_1654_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
lean_ctor_set(v___x_1655_, 1, v___x_1653_);
return v___x_1655_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__4(void){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1656_ = lean_box(0);
v___x_1657_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_defProcess___closed__3, &lp_lean_x2dftml_LeanFtml_defProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__3);
v___x_1658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
lean_ctor_set(v___x_1658_, 1, v___x_1656_);
return v___x_1658_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__6(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_defProcess___closed__5));
v___x_1661_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1660_);
return v___x_1661_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__7(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_defProcess___closed__6, &lp_lean_x2dftml_LeanFtml_defProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__6);
v___x_1663_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1662_);
return v___x_1663_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__8(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1664_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_defProcess___closed__7, &lp_lean_x2dftml_LeanFtml_defProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__7);
v___x_1665_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
lean_ctor_set(v___x_1666_, 1, v___x_1664_);
return v___x_1666_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__9(void){
_start:
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1667_ = lean_box(0);
v___x_1668_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_defProcess___closed__8, &lp_lean_x2dftml_LeanFtml_defProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__8);
v___x_1669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1668_);
lean_ctor_set(v___x_1669_, 1, v___x_1667_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_defProcess(lean_object* v_group_1670_, lean_object* v_toks_1671_){
_start:
{
lean_object* v_items_1672_; uint8_t v___x_1673_; 
v_items_1672_ = lp_lean_x2dftml_LeanFtml_collectDefItems(v_group_1670_);
v___x_1673_ = l_List_isEmpty___redArg(v_items_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v_fst_1678_; lean_object* v_snd_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v_fst_1682_; lean_object* v_snd_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1694_; 
v___x_1674_ = lean_box(0);
v___x_1675_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_defProcess___closed__4, &lp_lean_x2dftml_LeanFtml_defProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__4);
v___x_1676_ = lp_lean_x2dftml_LeanFtml_emitDef(v___x_1674_, v_toks_1671_, v___x_1675_);
v___x_1677_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_defProcess_spec__0(v___x_1676_, v_items_1672_);
lean_dec(v_items_1672_);
v_fst_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc(v_fst_1678_);
v_snd_1679_ = lean_ctor_get(v___x_1677_, 1);
lean_inc(v_snd_1679_);
lean_dec_ref(v___x_1677_);
v___x_1680_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_defProcess___closed__9, &lp_lean_x2dftml_LeanFtml_defProcess___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_defProcess___closed__9);
v___x_1681_ = lp_lean_x2dftml_LeanFtml_emitDef(v_fst_1678_, v_snd_1679_, v___x_1680_);
v_fst_1682_ = lean_ctor_get(v___x_1681_, 0);
v_snd_1683_ = lean_ctor_get(v___x_1681_, 1);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1685_ = v___x_1681_;
v_isShared_1686_ = v_isSharedCheck_1694_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_snd_1683_);
lean_inc(v_fst_1682_);
lean_dec(v___x_1681_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1694_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1692_; 
v___x_1687_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___x_1688_ = l_List_appendTR___redArg(v___x_1687_, v_fst_1682_);
v___x_1689_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_nativeProcess___closed__1));
v___x_1690_ = l_List_appendTR___redArg(v___x_1688_, v___x_1689_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 0, v___x_1690_);
v___x_1692_ = v___x_1685_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v___x_1690_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v_snd_1683_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
}
else
{
lean_object* v___x_1695_; lean_object* v___x_1696_; 
lean_dec(v_items_1672_);
v___x_1695_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1695_);
lean_ctor_set(v___x_1696_, 1, v_toks_1671_);
return v___x_1696_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deflistScan(lean_object* v_src_1697_, lean_object* v_toks_1698_, lean_object* v_x_1699_){
_start:
{
lean_object* v_zero_1700_; uint8_t v_isZero_1701_; 
v_zero_1700_ = lean_unsigned_to_nat(0u);
v_isZero_1701_ = lean_nat_dec_eq(v_x_1699_, v_zero_1700_);
if (v_isZero_1701_ == 1)
{
lean_object* v___x_1702_; 
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v_src_1697_);
lean_ctor_set(v___x_1702_, 1, v_toks_1698_);
return v___x_1702_;
}
else
{
if (lean_obj_tag(v_src_1697_) == 0)
{
lean_object* v___x_1703_; 
v___x_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1703_, 0, v_src_1697_);
lean_ctor_set(v___x_1703_, 1, v_toks_1698_);
return v___x_1703_;
}
else
{
lean_object* v_head_1704_; lean_object* v_tail_1705_; lean_object* v_one_1706_; lean_object* v_n_1707_; lean_object* v___x_1720_; uint8_t v___x_1721_; 
v_head_1704_ = lean_ctor_get(v_src_1697_, 0);
lean_inc(v_head_1704_);
v_tail_1705_ = lean_ctor_get(v_src_1697_, 1);
lean_inc(v_tail_1705_);
v_one_1706_ = lean_unsigned_to_nat(1u);
v_n_1707_ = lean_nat_sub(v_x_1699_, v_one_1706_);
v___x_1720_ = lean_unsigned_to_nat(10u);
v___x_1721_ = lean_nat_dec_eq(v_head_1704_, v___x_1720_);
if (v___x_1721_ == 0)
{
lean_dec_ref_known(v_src_1697_, 2);
goto v___jp_1708_;
}
else
{
lean_object* v___x_1722_; 
v___x_1722_ = lp_lean_x2dftml_LeanFtml_defRunAt(v_src_1697_);
if (lean_obj_tag(v___x_1722_) == 0)
{
goto v___jp_1708_;
}
else
{
lean_object* v_val_1723_; lean_object* v_fst_1724_; lean_object* v_snd_1725_; lean_object* v___x_1726_; lean_object* v_fst_1727_; lean_object* v_snd_1728_; lean_object* v___x_1729_; lean_object* v_fst_1730_; lean_object* v_snd_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1739_; 
lean_dec(v_tail_1705_);
lean_dec(v_head_1704_);
v_val_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_val_1723_);
lean_dec_ref_known(v___x_1722_, 1);
v_fst_1724_ = lean_ctor_get(v_val_1723_, 0);
lean_inc(v_fst_1724_);
v_snd_1725_ = lean_ctor_get(v_val_1723_, 1);
lean_inc(v_snd_1725_);
lean_dec(v_val_1723_);
v___x_1726_ = lp_lean_x2dftml_LeanFtml_defProcess(v_fst_1724_, v_toks_1698_);
v_fst_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_fst_1727_);
v_snd_1728_ = lean_ctor_get(v___x_1726_, 1);
lean_inc(v_snd_1728_);
lean_dec_ref(v___x_1726_);
v___x_1729_ = lp_lean_x2dftml_LeanFtml_deflistScan(v_snd_1725_, v_snd_1728_, v_n_1707_);
lean_dec(v_n_1707_);
v_fst_1730_ = lean_ctor_get(v___x_1729_, 0);
v_snd_1731_ = lean_ctor_get(v___x_1729_, 1);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1733_ = v___x_1729_;
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_snd_1731_);
lean_inc(v_fst_1730_);
lean_dec(v___x_1729_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1735_ = l_List_appendTR___redArg(v_fst_1727_, v_fst_1730_);
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 0, v___x_1735_);
v___x_1737_ = v___x_1733_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1735_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_snd_1731_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
v___jp_1708_:
{
lean_object* v___x_1709_; lean_object* v_fst_1710_; lean_object* v_snd_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1719_; 
v___x_1709_ = lp_lean_x2dftml_LeanFtml_deflistScan(v_tail_1705_, v_toks_1698_, v_n_1707_);
lean_dec(v_n_1707_);
v_fst_1710_ = lean_ctor_get(v___x_1709_, 0);
v_snd_1711_ = lean_ctor_get(v___x_1709_, 1);
v_isSharedCheck_1719_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1713_ = v___x_1709_;
v_isShared_1714_ = v_isSharedCheck_1719_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_snd_1711_);
lean_inc(v_fst_1710_);
lean_dec(v___x_1709_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1719_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1715_; lean_object* v___x_1717_; 
v___x_1715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1715_, 0, v_head_1704_);
lean_ctor_set(v___x_1715_, 1, v_fst_1710_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1715_);
v___x_1717_ = v___x_1713_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v___x_1715_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v_snd_1711_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deflistScan___boxed(lean_object* v_src_1740_, lean_object* v_toks_1741_, lean_object* v_x_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = lp_lean_x2dftml_LeanFtml_deflistScan(v_src_1740_, v_toks_1741_, v_x_1742_);
lean_dec(v_x_1742_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deflistBytes(lean_object* v_src_1744_, lean_object* v_toks_1745_){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1746_ = l_List_lengthTR___redArg(v_src_1744_);
v___x_1747_ = lean_unsigned_to_nat(1u);
v___x_1748_ = lean_nat_add(v___x_1746_, v___x_1747_);
lean_dec(v___x_1746_);
v___x_1749_ = lp_lean_x2dftml_LeanFtml_deflistScan(v_src_1744_, v_toks_1745_, v___x_1748_);
lean_dec(v___x_1748_);
return v___x_1749_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_explPh___closed__2(void){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1754_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__1));
v___x_1755_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1754_);
return v___x_1755_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_explPh___closed__3(void){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1756_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_explPh___closed__2, &lp_lean_x2dftml_LeanFtml_explPh___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_explPh___closed__2);
v___x_1757_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__0));
v___x_1758_ = l_List_appendTR___redArg(v___x_1757_, v___x_1756_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explPh(lean_object* v_n_1762_){
_start:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1763_ = lean_box(0);
v___x_1764_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_explPh___closed__3, &lp_lean_x2dftml_LeanFtml_explPh___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_explPh___closed__3);
v___x_1765_ = lean_unsigned_to_nat(10u);
v___x_1766_ = l_Nat_toDigits(v___x_1765_, v_n_1762_);
v___x_1767_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_1766_, v___x_1763_);
v___x_1768_ = l_List_appendTR___redArg(v___x_1764_, v___x_1767_);
v___x_1769_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__4));
v___x_1770_ = l_List_appendTR___redArg(v___x_1768_, v___x_1769_);
return v___x_1770_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_natPh___closed__1(void){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_natPh___closed__0));
v___x_1773_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1772_);
return v___x_1773_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_natPh___closed__2(void){
_start:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1774_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_natPh___closed__1, &lp_lean_x2dftml_LeanFtml_natPh___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_natPh___closed__1);
v___x_1775_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__0));
v___x_1776_ = l_List_appendTR___redArg(v___x_1775_, v___x_1774_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_natPh(lean_object* v_n_1777_){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1778_ = lean_box(0);
v___x_1779_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_natPh___closed__2, &lp_lean_x2dftml_LeanFtml_natPh___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_natPh___closed__2);
v___x_1780_ = lean_unsigned_to_nat(10u);
v___x_1781_ = l_Nat_toDigits(v___x_1780_, v_n_1777_);
v___x_1782_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_1781_, v___x_1778_);
v___x_1783_ = l_List_appendTR___redArg(v___x_1779_, v___x_1782_);
v___x_1784_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__4));
v___x_1785_ = l_List_appendTR___redArg(v___x_1783_, v___x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskPhAt(lean_object* v_s_1786_, lean_object* v_pfx_1787_){
_start:
{
if (lean_obj_tag(v_s_1786_) == 1)
{
lean_object* v_head_1788_; lean_object* v_tail_1789_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v_head_1788_ = lean_ctor_get(v_s_1786_, 0);
lean_inc(v_head_1788_);
v_tail_1789_ = lean_ctor_get(v_s_1786_, 1);
lean_inc(v_tail_1789_);
lean_dec_ref_known(v_s_1786_, 2);
v___x_1790_ = lean_unsigned_to_nat(2u);
v___x_1791_ = lean_nat_dec_eq(v_head_1788_, v___x_1790_);
lean_dec(v_head_1788_);
if (v___x_1791_ == 0)
{
lean_object* v___x_1792_; 
lean_dec(v_tail_1789_);
lean_dec_ref(v_pfx_1787_);
v___x_1792_ = lean_box(0);
return v___x_1792_;
}
else
{
lean_object* v___x_1793_; lean_object* v___x_1794_; 
lean_inc_ref(v_pfx_1787_);
v___x_1793_ = lp_lean_x2dftml_LeanFtml_litBytes(v_pfx_1787_);
v___x_1794_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1793_, v_tail_1789_);
lean_dec(v___x_1793_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v___x_1795_; 
lean_dec_ref(v_pfx_1787_);
v___x_1795_ = lean_box(0);
return v___x_1795_;
}
else
{
lean_object* v_val_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1829_; 
v_val_1796_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1798_ = v___x_1794_;
v_isShared_1799_ = v_isSharedCheck_1829_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_val_1796_);
lean_dec(v___x_1794_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1829_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v_ds_1802_; uint8_t v___x_1803_; 
v___x_1800_ = lean_unsigned_to_nat(0u);
v___x_1801_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_val_1796_);
v_ds_1802_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(v_val_1796_, v_val_1796_, v___x_1801_);
v___x_1803_ = l_List_isEmpty___redArg(v_ds_1802_);
if (v___x_1803_ == 0)
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = l_List_lengthTR___redArg(v_ds_1802_);
lean_inc(v___x_1804_);
v___x_1805_ = l_List_drop___redArg(v___x_1804_, v_val_1796_);
lean_dec(v_val_1796_);
if (lean_obj_tag(v___x_1805_) == 1)
{
lean_object* v_head_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1825_; 
v_head_1806_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1825_ == 0)
{
lean_object* v_unused_1826_; 
v_unused_1826_ = lean_ctor_get(v___x_1805_, 1);
lean_dec(v_unused_1826_);
v___x_1808_ = v___x_1805_;
v_isShared_1809_ = v_isSharedCheck_1825_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_head_1806_);
lean_dec(v___x_1805_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1825_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1810_; uint8_t v___x_1811_; 
v___x_1810_ = lean_unsigned_to_nat(3u);
v___x_1811_ = lean_nat_dec_eq(v_head_1806_, v___x_1810_);
lean_dec(v_head_1806_);
if (v___x_1811_ == 0)
{
lean_object* v___x_1812_; 
lean_del_object(v___x_1808_);
lean_dec(v___x_1804_);
lean_dec(v_ds_1802_);
lean_del_object(v___x_1798_);
lean_dec_ref(v_pfx_1787_);
v___x_1812_ = lean_box(0);
return v___x_1812_;
}
else
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1820_; 
v___x_1813_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v___x_1800_, v_ds_1802_);
lean_dec(v_ds_1802_);
v___x_1814_ = lean_unsigned_to_nat(1u);
v___x_1815_ = lean_string_length(v_pfx_1787_);
lean_dec_ref(v_pfx_1787_);
v___x_1816_ = lean_nat_add(v___x_1814_, v___x_1815_);
v___x_1817_ = lean_nat_add(v___x_1816_, v___x_1804_);
lean_dec(v___x_1804_);
lean_dec(v___x_1816_);
v___x_1818_ = lean_nat_add(v___x_1817_, v___x_1814_);
lean_dec(v___x_1817_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 0);
lean_ctor_set(v___x_1808_, 1, v___x_1818_);
lean_ctor_set(v___x_1808_, 0, v___x_1813_);
v___x_1820_ = v___x_1808_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1813_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v___x_1818_);
v___x_1820_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v___x_1822_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v___x_1820_);
v___x_1822_ = v___x_1798_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
}
}
else
{
lean_object* v___x_1827_; 
lean_dec(v___x_1805_);
lean_dec(v___x_1804_);
lean_dec(v_ds_1802_);
lean_del_object(v___x_1798_);
lean_dec_ref(v_pfx_1787_);
v___x_1827_ = lean_box(0);
return v___x_1827_;
}
}
else
{
lean_object* v___x_1828_; 
lean_dec(v_ds_1802_);
lean_del_object(v___x_1798_);
lean_dec(v_val_1796_);
lean_dec_ref(v_pfx_1787_);
v___x_1828_ = lean_box(0);
return v___x_1828_;
}
}
}
}
}
else
{
lean_object* v___x_1830_; 
lean_dec_ref(v_pfx_1787_);
lean_dec(v_s_1786_);
v___x_1830_ = lean_box(0);
return v___x_1830_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_harvestMask_go(lean_object* v_pfx_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_){
_start:
{
if (lean_obj_tag(v_a_1832_) == 0)
{
lean_object* v___x_1835_; 
lean_dec(v_a_1834_);
lean_dec(v_a_1833_);
lean_dec_ref(v_pfx_1831_);
v___x_1835_ = lean_box(0);
return v___x_1835_;
}
else
{
lean_object* v_tail_1836_; lean_object* v_zero_1837_; uint8_t v_isZero_1838_; 
v_tail_1836_ = lean_ctor_get(v_a_1832_, 1);
v_zero_1837_ = lean_unsigned_to_nat(0u);
v_isZero_1838_ = lean_nat_dec_eq(v_a_1834_, v_zero_1837_);
if (v_isZero_1838_ == 1)
{
lean_object* v___x_1839_; 
lean_dec_ref_known(v_a_1832_, 2);
lean_dec(v_a_1834_);
lean_dec(v_a_1833_);
lean_dec_ref(v_pfx_1831_);
v___x_1839_ = lean_box(0);
return v___x_1839_;
}
else
{
lean_object* v_one_1840_; lean_object* v_n_1841_; lean_object* v___x_1842_; 
v_one_1840_ = lean_unsigned_to_nat(1u);
v_n_1841_ = lean_nat_sub(v_a_1834_, v_one_1840_);
lean_dec(v_a_1834_);
lean_inc_ref(v_pfx_1831_);
lean_inc_ref(v_a_1832_);
v___x_1842_ = lp_lean_x2dftml_LeanFtml_maskPhAt(v_a_1832_, v_pfx_1831_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v___x_1843_; 
lean_inc(v_tail_1836_);
lean_dec_ref_known(v_a_1832_, 2);
v___x_1843_ = lean_nat_add(v_a_1833_, v_one_1840_);
lean_dec(v_a_1833_);
v_a_1832_ = v_tail_1836_;
v_a_1833_ = v___x_1843_;
v_a_1834_ = v_n_1841_;
goto _start;
}
else
{
lean_object* v_val_1845_; lean_object* v_snd_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1867_; 
v_val_1845_ = lean_ctor_get(v___x_1842_, 0);
lean_inc(v_val_1845_);
lean_dec_ref_known(v___x_1842_, 1);
v_snd_1846_ = lean_ctor_get(v_val_1845_, 1);
v_isSharedCheck_1867_ = !lean_is_exclusive(v_val_1845_);
if (v_isSharedCheck_1867_ == 0)
{
lean_object* v_unused_1868_; 
v_unused_1868_ = lean_ctor_get(v_val_1845_, 0);
lean_dec(v_unused_1868_);
v___x_1848_ = v_val_1845_;
v_isShared_1849_ = v_isSharedCheck_1867_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_snd_1846_);
lean_dec(v_val_1845_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1867_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1853_; 
v___x_1850_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_snd_1846_);
lean_inc_ref(v_a_1832_);
v___x_1851_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1832_, v_a_1832_, v_snd_1846_, v___x_1850_);
lean_inc(v_a_1833_);
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 1, v___x_1851_);
lean_ctor_set(v___x_1848_, 0, v_a_1833_);
v___x_1853_ = v___x_1848_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1833_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
lean_object* v___x_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1863_; 
lean_inc(v_snd_1846_);
v___x_1854_ = l_List_drop___redArg(v_snd_1846_, v_a_1832_);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_a_1832_);
if (v_isSharedCheck_1863_ == 0)
{
lean_object* v_unused_1864_; lean_object* v_unused_1865_; 
v_unused_1864_ = lean_ctor_get(v_a_1832_, 1);
lean_dec(v_unused_1864_);
v_unused_1865_ = lean_ctor_get(v_a_1832_, 0);
lean_dec(v_unused_1865_);
v___x_1856_ = v_a_1832_;
v_isShared_1857_ = v_isSharedCheck_1863_;
goto v_resetjp_1855_;
}
else
{
lean_dec(v_a_1832_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1863_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1861_; 
v___x_1858_ = lean_nat_add(v_a_1833_, v_snd_1846_);
lean_dec(v_snd_1846_);
lean_dec(v_a_1833_);
v___x_1859_ = lp_lean_x2dftml_LeanFtml_harvestMask_go(v_pfx_1831_, v___x_1854_, v___x_1858_, v_n_1841_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 1, v___x_1859_);
lean_ctor_set(v___x_1856_, 0, v___x_1853_);
v___x_1861_ = v___x_1856_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1853_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_harvestMask(lean_object* v_s_1869_, lean_object* v_pfx_1870_){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1871_ = lean_unsigned_to_nat(0u);
v___x_1872_ = l_List_lengthTR___redArg(v_s_1869_);
v___x_1873_ = lean_unsigned_to_nat(1u);
v___x_1874_ = lean_nat_add(v___x_1872_, v___x_1873_);
lean_dec(v___x_1872_);
v___x_1875_ = lp_lean_x2dftml_LeanFtml_harvestMask_go(v_pfx_1870_, v_s_1869_, v___x_1871_, v___x_1874_);
return v___x_1875_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__1(lean_object* v_s_1876_, lean_object* v_pat_1877_, uint8_t v___x_1878_, lean_object* v_x_1879_){
_start:
{
if (lean_obj_tag(v_x_1879_) == 0)
{
uint8_t v___x_1880_; 
v___x_1880_ = 0;
return v___x_1880_;
}
else
{
lean_object* v_head_1881_; lean_object* v_tail_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v_head_1881_ = lean_ctor_get(v_x_1879_, 0);
lean_inc(v_head_1881_);
v_tail_1882_ = lean_ctor_get(v_x_1879_, 1);
lean_inc(v_tail_1882_);
lean_dec_ref_known(v_x_1879_, 2);
v___x_1883_ = l_List_drop___redArg(v_head_1881_, v_s_1876_);
v___x_1884_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_pat_1877_, v___x_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
if (v___x_1878_ == 0)
{
v_x_1879_ = v_tail_1882_;
goto _start;
}
else
{
lean_dec(v_tail_1882_);
return v___x_1878_;
}
}
else
{
uint8_t v___x_1886_; 
lean_dec_ref_known(v___x_1884_, 1);
lean_dec(v_tail_1882_);
v___x_1886_ = 1;
return v___x_1886_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__1___boxed(lean_object* v_s_1887_, lean_object* v_pat_1888_, lean_object* v___x_1889_, lean_object* v_x_1890_){
_start:
{
uint8_t v___x_111__boxed_1891_; uint8_t v_res_1892_; lean_object* v_r_1893_; 
v___x_111__boxed_1891_ = lean_unbox(v___x_1889_);
v_res_1892_ = lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__1(v_s_1887_, v_pat_1888_, v___x_111__boxed_1891_, v_x_1890_);
lean_dec(v_pat_1888_);
lean_dec(v_s_1887_);
v_r_1893_ = lean_box(v_res_1892_);
return v_r_1893_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__0(uint8_t v___x_1894_, lean_object* v_x_1895_){
_start:
{
if (lean_obj_tag(v_x_1895_) == 0)
{
uint8_t v___x_1896_; 
v___x_1896_ = 0;
return v___x_1896_;
}
else
{
if (v___x_1894_ == 0)
{
lean_object* v_tail_1897_; 
v_tail_1897_ = lean_ctor_get(v_x_1895_, 1);
v_x_1895_ = v_tail_1897_;
goto _start;
}
else
{
return v___x_1894_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__0___boxed(lean_object* v___x_1899_, lean_object* v_x_1900_){
_start:
{
uint8_t v___x_132__boxed_1901_; uint8_t v_res_1902_; lean_object* v_r_1903_; 
v___x_132__boxed_1901_ = lean_unbox(v___x_1899_);
v_res_1902_ = lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__0(v___x_132__boxed_1901_, v_x_1900_);
lean_dec(v_x_1900_);
v_r_1903_ = lean_box(v_res_1902_);
return v_r_1903_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_existsLitCI(lean_object* v_pat_1904_, lean_object* v_s_1905_){
_start:
{
uint8_t v___x_1906_; uint8_t v___x_1907_; 
v___x_1906_ = l_List_isEmpty___redArg(v_pat_1904_);
v___x_1907_ = 1;
if (v___x_1906_ == 0)
{
uint8_t v___x_1908_; 
v___x_1908_ = lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__0(v___x_1906_, v_s_1905_);
if (v___x_1908_ == 0)
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v___x_1909_ = l_List_lengthTR___redArg(v_s_1905_);
v___x_1910_ = lean_unsigned_to_nat(1u);
v___x_1911_ = lean_nat_add(v___x_1909_, v___x_1910_);
lean_dec(v___x_1909_);
v___x_1912_ = l_List_range(v___x_1911_);
v___x_1913_ = lp_lean_x2dftml_List_any___at___00LeanFtml_existsLitCI_spec__1(v_s_1905_, v_pat_1904_, v___x_1906_, v___x_1912_);
return v___x_1913_;
}
else
{
return v___x_1907_;
}
}
else
{
return v___x_1907_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_existsLitCI___boxed(lean_object* v_pat_1914_, lean_object* v_s_1915_){
_start:
{
uint8_t v_res_1916_; lean_object* v_r_1917_; 
v_res_1916_ = lp_lean_x2dftml_LeanFtml_existsLitCI(v_pat_1914_, v_s_1915_);
lean_dec(v_s_1915_);
lean_dec(v_pat_1914_);
v_r_1917_ = lean_box(v_res_1916_);
return v_r_1917_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawMatchedTag(lean_object* v_pat_1918_, lean_object* v_s_1919_){
_start:
{
lean_object* v___x_1920_; 
lean_inc(v_s_1919_);
v___x_1920_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_pat_1918_, v_s_1919_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v___x_1921_; 
lean_dec(v_s_1919_);
v___x_1921_ = lean_box(0);
return v___x_1921_;
}
else
{
lean_object* v_val_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1935_; 
v_val_1922_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1924_ = v___x_1920_;
v_isShared_1925_ = v_isSharedCheck_1935_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_val_1922_);
lean_dec(v___x_1920_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1935_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1933_; 
v___x_1926_ = l_List_lengthTR___redArg(v_s_1919_);
v___x_1927_ = l_List_lengthTR___redArg(v_val_1922_);
v___x_1928_ = lean_nat_sub(v___x_1926_, v___x_1927_);
lean_dec(v___x_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_s_1919_);
v___x_1930_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_1919_, v_s_1919_, v___x_1928_, v___x_1929_);
lean_dec(v_s_1919_);
v___x_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
lean_ctor_set(v___x_1931_, 1, v_val_1922_);
if (v_isShared_1925_ == 0)
{
lean_ctor_set(v___x_1924_, 0, v___x_1931_);
v___x_1933_ = v___x_1924_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1931_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawMatchedTag___boxed(lean_object* v_pat_1936_, lean_object* v_s_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = lp_lean_x2dftml_LeanFtml_rawMatchedTag(v_pat_1936_, v_s_1937_);
lean_dec(v_pat_1936_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockOpenerAt_spec__0(lean_object* v_val_1939_, lean_object* v_x_1940_){
_start:
{
if (lean_obj_tag(v_x_1940_) == 0)
{
lean_object* v___x_1941_; 
lean_dec(v_val_1939_);
v___x_1941_ = lean_box(0);
return v___x_1941_;
}
else
{
lean_object* v_head_1942_; lean_object* v_tail_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1988_; 
v_head_1942_ = lean_ctor_get(v_x_1940_, 0);
v_tail_1943_ = lean_ctor_get(v_x_1940_, 1);
v_isSharedCheck_1988_ = !lean_is_exclusive(v_x_1940_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1945_ = v_x_1940_;
v_isShared_1946_ = v_isSharedCheck_1988_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_tail_1943_);
lean_inc(v_head_1942_);
lean_dec(v_x_1940_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1988_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1947_; 
lean_inc(v_val_1939_);
v___x_1947_ = lp_lean_x2dftml_LeanFtml_rawMatchedTag(v_head_1942_, v_val_1939_);
lean_dec(v_head_1942_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_del_object(v___x_1945_);
v_x_1940_ = v_tail_1943_;
goto _start;
}
else
{
lean_object* v_val_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1987_; 
lean_dec(v_tail_1943_);
lean_dec(v_val_1939_);
v_val_1949_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1951_ = v___x_1947_;
v_isShared_1952_ = v_isSharedCheck_1987_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_val_1949_);
lean_dec(v___x_1947_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1987_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v_fst_1953_; lean_object* v_snd_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1986_; 
v_fst_1953_ = lean_ctor_get(v_val_1949_, 0);
v_snd_1954_ = lean_ctor_get(v_val_1949_, 1);
v_isSharedCheck_1986_ = !lean_is_exclusive(v_val_1949_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1956_ = v_val_1949_;
v_isShared_1957_ = v_isSharedCheck_1986_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_snd_1954_);
lean_inc(v_fst_1953_);
lean_dec(v_val_1949_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1986_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
if (lean_obj_tag(v_snd_1954_) == 1)
{
lean_object* v_head_1970_; lean_object* v_tail_1971_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v_head_1970_ = lean_ctor_get(v_snd_1954_, 0);
v_tail_1971_ = lean_ctor_get(v_snd_1954_, 1);
v___x_1972_ = lean_unsigned_to_nat(95u);
v___x_1973_ = lean_nat_dec_eq(v_head_1970_, v___x_1972_);
if (v___x_1973_ == 0)
{
goto v___jp_1958_;
}
else
{
lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1983_; 
lean_inc(v_tail_1971_);
lean_del_object(v___x_1956_);
lean_del_object(v___x_1951_);
lean_del_object(v___x_1945_);
v_isSharedCheck_1983_ = !lean_is_exclusive(v_snd_1954_);
if (v_isSharedCheck_1983_ == 0)
{
lean_object* v_unused_1984_; lean_object* v_unused_1985_; 
v_unused_1984_ = lean_ctor_get(v_snd_1954_, 1);
lean_dec(v_unused_1984_);
v_unused_1985_ = lean_ctor_get(v_snd_1954_, 0);
lean_dec(v_unused_1985_);
v___x_1975_ = v_snd_1954_;
v_isShared_1976_ = v_isSharedCheck_1983_;
goto v_resetjp_1974_;
}
else
{
lean_dec(v_snd_1954_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1983_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1977_; lean_object* v___x_1979_; 
v___x_1977_ = lean_box(v___x_1973_);
if (v_isShared_1976_ == 0)
{
lean_ctor_set_tag(v___x_1975_, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1977_);
v___x_1979_ = v___x_1975_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v___x_1977_);
lean_ctor_set(v_reuseFailAlloc_1982_, 1, v_tail_1971_);
v___x_1979_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v_fst_1953_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
return v___x_1981_;
}
}
}
}
else
{
goto v___jp_1958_;
}
v___jp_1958_:
{
uint8_t v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1962_; 
v___x_1959_ = 0;
v___x_1960_ = lean_box(v___x_1959_);
if (v_isShared_1957_ == 0)
{
lean_ctor_set(v___x_1956_, 0, v___x_1960_);
v___x_1962_ = v___x_1956_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1960_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v_snd_1954_);
v___x_1962_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
lean_object* v___x_1964_; 
if (v_isShared_1946_ == 0)
{
lean_ctor_set_tag(v___x_1945_, 0);
lean_ctor_set(v___x_1945_, 1, v___x_1962_);
lean_ctor_set(v___x_1945_, 0, v_fst_1953_);
v___x_1964_ = v___x_1945_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_fst_1953_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v___x_1962_);
v___x_1964_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
lean_object* v___x_1966_; 
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 0, v___x_1964_);
v___x_1966_ = v___x_1951_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1964_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_blockOpenerAt_spec__1(uint8_t v___x_1989_, lean_object* v_head_1990_, lean_object* v_l_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_){
_start:
{
if (lean_obj_tag(v_a_1992_) == 0)
{
lean_dec_ref(v_a_1993_);
lean_inc(v_l_1991_);
return v_l_1991_;
}
else
{
lean_object* v_head_1994_; lean_object* v_tail_1995_; uint8_t v___y_1997_; lean_object* v___x_2001_; uint8_t v___x_2002_; 
v_head_1994_ = lean_ctor_get(v_a_1992_, 0);
lean_inc(v_head_1994_);
v_tail_1995_ = lean_ctor_get(v_a_1992_, 1);
lean_inc(v_tail_1995_);
lean_dec_ref_known(v_a_1992_, 2);
v___x_2001_ = lean_unsigned_to_nat(93u);
v___x_2002_ = lean_nat_dec_eq(v_head_1994_, v___x_2001_);
if (v___x_2002_ == 0)
{
v___y_1997_ = v___x_1989_;
goto v___jp_1996_;
}
else
{
uint8_t v___x_2003_; 
v___x_2003_ = lean_nat_dec_eq(v_head_1990_, v___x_2001_);
v___y_1997_ = v___x_2003_;
goto v___jp_1996_;
}
v___jp_1996_:
{
if (v___y_1997_ == 0)
{
lean_object* v___x_1998_; 
lean_dec(v_tail_1995_);
lean_dec(v_head_1994_);
v___x_1998_ = lean_array_to_list(v_a_1993_);
return v___x_1998_;
}
else
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_array_push(v_a_1993_, v_head_1994_);
v_a_1992_ = v_tail_1995_;
v_a_1993_ = v___x_1999_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_blockOpenerAt_spec__1___boxed(lean_object* v___x_2004_, lean_object* v_head_2005_, lean_object* v_l_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_){
_start:
{
uint8_t v___x_1041__boxed_2009_; lean_object* v_res_2010_; 
v___x_1041__boxed_2009_ = lean_unbox(v___x_2004_);
v_res_2010_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_blockOpenerAt_spec__1(v___x_1041__boxed_2009_, v_head_2005_, v_l_2006_, v_a_2007_, v_a_2008_);
lean_dec(v_l_2006_);
lean_dec(v_head_2005_);
return v_res_2010_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1(void){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__0));
v___x_2013_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2012_);
return v___x_2013_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__3(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__2));
v___x_2016_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2015_);
return v___x_2016_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__5(void){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2018_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__4));
v___x_2019_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2018_);
return v___x_2019_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__6(void){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2020_ = lean_box(0);
v___x_2021_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__5, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__5);
v___x_2022_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
lean_ctor_set(v___x_2022_, 1, v___x_2020_);
return v___x_2022_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7(void){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2023_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__6, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__6);
v___x_2024_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__3, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__3);
v___x_2025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
lean_ctor_set(v___x_2025_, 1, v___x_2023_);
return v___x_2025_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9(void){
_start:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__8));
v___x_2028_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2027_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockOpenerAt(lean_object* v_s_2029_){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1);
lean_inc(v_s_2029_);
v___x_2031_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2030_, v_s_2029_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v___x_2032_; 
lean_dec(v_s_2029_);
v___x_2032_ = lean_box(0);
return v___x_2032_;
}
else
{
lean_object* v_val_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; 
v_val_2033_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_val_2033_);
lean_dec_ref_known(v___x_2031_, 1);
v___x_2034_ = lean_box(0);
v___x_2035_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7);
v___x_2036_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockOpenerAt_spec__0(v_val_2033_, v___x_2035_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v___x_2037_; 
lean_dec(v_s_2029_);
v___x_2037_ = lean_box(0);
return v___x_2037_;
}
else
{
lean_object* v_val_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2120_; 
v_val_2038_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2040_ = v___x_2036_;
v_isShared_2041_ = v_isSharedCheck_2120_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_val_2038_);
lean_dec(v___x_2036_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2120_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v_snd_2042_; lean_object* v_fst_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2119_; 
v_snd_2042_ = lean_ctor_get(v_val_2038_, 1);
v_fst_2043_ = lean_ctor_get(v_val_2038_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_val_2038_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2045_ = v_val_2038_;
v_isShared_2046_ = v_isSharedCheck_2119_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_snd_2042_);
lean_inc(v_fst_2043_);
lean_dec(v_val_2038_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2119_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v_fst_2047_; lean_object* v_snd_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2118_; 
v_fst_2047_ = lean_ctor_get(v_snd_2042_, 0);
v_snd_2048_ = lean_ctor_get(v_snd_2042_, 1);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_snd_2042_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2050_ = v_snd_2042_;
v_isShared_2051_ = v_isSharedCheck_2118_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_snd_2048_);
lean_inc(v_fst_2047_);
lean_dec(v_snd_2042_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2118_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2052_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9);
lean_inc(v_snd_2048_);
v___x_2053_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2052_, v_snd_2048_);
if (lean_obj_tag(v___x_2053_) == 0)
{
if (lean_obj_tag(v_snd_2048_) == 0)
{
lean_object* v___x_2054_; 
lean_del_object(v___x_2050_);
lean_dec(v_fst_2047_);
lean_del_object(v___x_2045_);
lean_dec(v_fst_2043_);
lean_del_object(v___x_2040_);
lean_dec(v_s_2029_);
v___x_2054_ = lean_box(0);
return v___x_2054_;
}
else
{
lean_object* v_head_2055_; uint8_t v___x_2056_; 
v_head_2055_ = lean_ctor_get(v_snd_2048_, 0);
v___x_2056_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_2055_);
if (v___x_2056_ == 0)
{
lean_object* v___x_2057_; 
lean_dec_ref_known(v_snd_2048_, 2);
lean_del_object(v___x_2050_);
lean_dec(v_fst_2047_);
lean_del_object(v___x_2045_);
lean_dec(v_fst_2043_);
lean_del_object(v___x_2040_);
lean_dec(v_s_2029_);
v___x_2057_ = lean_box(0);
return v___x_2057_;
}
else
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v_r3_2061_; 
v___x_2058_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc_ref(v_snd_2048_);
v___x_2059_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_snd_2048_, v_snd_2048_, v___x_2058_);
v___x_2060_ = l_List_lengthTR___redArg(v___x_2059_);
lean_dec(v___x_2059_);
v_r3_2061_ = l_List_drop___redArg(v___x_2060_, v_snd_2048_);
lean_dec_ref_known(v_snd_2048_, 2);
if (lean_obj_tag(v_r3_2061_) == 0)
{
lean_object* v___x_2062_; 
lean_del_object(v___x_2050_);
lean_dec(v_fst_2047_);
lean_del_object(v___x_2045_);
lean_dec(v_fst_2043_);
lean_del_object(v___x_2040_);
lean_dec(v_s_2029_);
v___x_2062_ = lean_box(0);
return v___x_2062_;
}
else
{
lean_object* v_head_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; 
v_head_2063_ = lean_ctor_get(v_r3_2061_, 0);
v___x_2064_ = lean_unsigned_to_nat(93u);
v___x_2065_ = lean_nat_dec_eq(v_head_2063_, v___x_2064_);
if (v___x_2065_ == 0)
{
lean_object* v___x_2066_; lean_object* v_capLen_2067_; lean_object* v___x_2068_; 
lean_inc_ref(v_r3_2061_);
v___x_2066_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_blockOpenerAt_spec__1(v___x_2056_, v_head_2063_, v_r3_2061_, v_r3_2061_, v___x_2058_);
v_capLen_2067_ = l_List_lengthTR___redArg(v___x_2066_);
lean_dec(v___x_2066_);
lean_inc(v_capLen_2067_);
v___x_2068_ = l_List_drop___redArg(v_capLen_2067_, v_r3_2061_);
if (lean_obj_tag(v___x_2068_) == 1)
{
lean_object* v_head_2069_; lean_object* v_tail_2070_; uint8_t v___x_2071_; 
v_head_2069_ = lean_ctor_get(v___x_2068_, 0);
lean_inc(v_head_2069_);
v_tail_2070_ = lean_ctor_get(v___x_2068_, 1);
lean_inc(v_tail_2070_);
lean_dec_ref_known(v___x_2068_, 2);
v___x_2071_ = lean_nat_dec_eq(v_head_2069_, v___x_2064_);
lean_dec(v_head_2069_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2072_; 
lean_dec(v_tail_2070_);
lean_dec(v_capLen_2067_);
lean_dec_ref_known(v_r3_2061_, 2);
lean_del_object(v___x_2050_);
lean_dec(v_fst_2047_);
lean_del_object(v___x_2045_);
lean_dec(v_fst_2043_);
lean_del_object(v___x_2040_);
lean_dec(v_s_2029_);
v___x_2072_ = lean_box(0);
return v___x_2072_;
}
else
{
if (lean_obj_tag(v_tail_2070_) == 1)
{
lean_object* v_head_2073_; lean_object* v_tail_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2096_; 
v_head_2073_ = lean_ctor_get(v_tail_2070_, 0);
v_tail_2074_ = lean_ctor_get(v_tail_2070_, 1);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_tail_2070_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2076_ = v_tail_2070_;
v_isShared_2077_ = v_isSharedCheck_2096_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_tail_2074_);
lean_inc(v_head_2073_);
lean_dec(v_tail_2070_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2096_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
uint8_t v___x_2078_; 
v___x_2078_ = lean_nat_dec_eq(v_head_2073_, v___x_2064_);
lean_dec(v_head_2073_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; 
lean_del_object(v___x_2076_);
lean_dec(v_tail_2074_);
lean_dec(v_capLen_2067_);
lean_dec_ref_known(v_r3_2061_, 2);
lean_del_object(v___x_2050_);
lean_dec(v_fst_2047_);
lean_del_object(v___x_2045_);
lean_dec(v_fst_2043_);
lean_del_object(v___x_2040_);
lean_dec(v_s_2029_);
v___x_2079_ = lean_box(0);
return v___x_2079_;
}
else
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2085_; 
lean_inc_ref(v_r3_2061_);
v___x_2080_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r3_2061_, v_r3_2061_, v_capLen_2067_, v___x_2058_);
lean_dec_ref_known(v_r3_2061_, 2);
v___x_2081_ = l_List_lengthTR___redArg(v_s_2029_);
lean_dec(v_s_2029_);
v___x_2082_ = l_List_lengthTR___redArg(v_tail_2074_);
lean_dec(v_tail_2074_);
v___x_2083_ = lean_nat_sub(v___x_2081_, v___x_2082_);
lean_dec(v___x_2082_);
lean_dec(v___x_2081_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 1, v___x_2083_);
lean_ctor_set(v___x_2050_, 0, v___x_2080_);
v___x_2085_ = v___x_2050_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2080_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
lean_object* v___x_2087_; 
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2085_);
lean_ctor_set(v___x_2045_, 0, v_fst_2047_);
v___x_2087_ = v___x_2045_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_fst_2047_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2089_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set_tag(v___x_2076_, 0);
lean_ctor_set(v___x_2076_, 1, v___x_2087_);
lean_ctor_set(v___x_2076_, 0, v_fst_2043_);
v___x_2089_ = v___x_2076_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_fst_2043_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v___x_2087_);
v___x_2089_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2091_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2089_);
v___x_2091_ = v___x_2040_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2089_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2097_; 
lean_dec(v_tail_2070_);
lean_dec(v_capLen_2067_);
lean_dec_ref_known(v_r3_2061_, 2);
lean_del_object(v___x_2050_);
lean_dec(v_fst_2047_);
lean_del_object(v___x_2045_);
lean_dec(v_fst_2043_);
lean_del_object(v___x_2040_);
lean_dec(v_s_2029_);
v___x_2097_ = lean_box(0);
return v___x_2097_;
}
}
}
else
{
lean_object* v___x_2098_; 
lean_dec(v___x_2068_);
lean_dec(v_capLen_2067_);
lean_dec_ref_known(v_r3_2061_, 2);
lean_del_object(v___x_2050_);
lean_dec(v_fst_2047_);
lean_del_object(v___x_2045_);
lean_dec(v_fst_2043_);
lean_del_object(v___x_2040_);
lean_dec(v_s_2029_);
v___x_2098_ = lean_box(0);
return v___x_2098_;
}
}
else
{
lean_object* v___x_2099_; 
lean_dec_ref_known(v_r3_2061_, 2);
lean_del_object(v___x_2050_);
lean_dec(v_fst_2047_);
lean_del_object(v___x_2045_);
lean_dec(v_fst_2043_);
lean_del_object(v___x_2040_);
lean_dec(v_s_2029_);
v___x_2099_ = lean_box(0);
return v___x_2099_;
}
}
}
}
}
else
{
lean_object* v_val_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2117_; 
lean_dec(v_snd_2048_);
lean_del_object(v___x_2040_);
v_val_2100_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2102_ = v___x_2053_;
v_isShared_2103_ = v_isSharedCheck_2117_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_val_2100_);
lean_dec(v___x_2053_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2117_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2108_; 
v___x_2104_ = l_List_lengthTR___redArg(v_s_2029_);
lean_dec(v_s_2029_);
v___x_2105_ = l_List_lengthTR___redArg(v_val_2100_);
lean_dec(v_val_2100_);
v___x_2106_ = lean_nat_sub(v___x_2104_, v___x_2105_);
lean_dec(v___x_2105_);
lean_dec(v___x_2104_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 1, v___x_2106_);
lean_ctor_set(v___x_2050_, 0, v___x_2034_);
v___x_2108_ = v___x_2050_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2034_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v___x_2106_);
v___x_2108_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
lean_object* v___x_2110_; 
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2108_);
lean_ctor_set(v___x_2045_, 0, v_fst_2047_);
v___x_2110_ = v___x_2045_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_fst_2047_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v___x_2108_);
v___x_2110_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v_fst_2043_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2111_);
v___x_2113_ = v___x_2102_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___lam__0(lean_object* v_s_2121_, lean_object* v_val_2122_, lean_object* v_fst_2123_, lean_object* v_x_2124_){
_start:
{
uint8_t v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2125_ = 0;
v___x_2126_ = l_List_lengthTR___redArg(v_s_2121_);
v___x_2127_ = l_List_lengthTR___redArg(v_val_2122_);
v___x_2128_ = lean_nat_sub(v___x_2126_, v___x_2127_);
lean_dec(v___x_2127_);
lean_dec(v___x_2126_);
v___x_2129_ = lean_box(v___x_2125_);
v___x_2130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2129_);
lean_ctor_set(v___x_2130_, 1, v___x_2128_);
v___x_2131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2131_, 0, v_fst_2123_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___lam__0___boxed(lean_object* v_s_2132_, lean_object* v_val_2133_, lean_object* v_fst_2134_, lean_object* v_x_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___lam__0(v_s_2132_, v_val_2133_, v_fst_2134_, v_x_2135_);
lean_dec(v_x_2135_);
lean_dec(v_val_2133_);
lean_dec(v_s_2132_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0(lean_object* v_val_2137_, lean_object* v_s_2138_, lean_object* v_x_2139_){
_start:
{
if (lean_obj_tag(v_x_2139_) == 0)
{
lean_object* v___x_2140_; 
lean_dec(v_val_2137_);
v___x_2140_ = lean_box(0);
return v___x_2140_;
}
else
{
lean_object* v_head_2141_; lean_object* v_tail_2142_; lean_object* v___x_2143_; 
v_head_2141_ = lean_ctor_get(v_x_2139_, 0);
v_tail_2142_ = lean_ctor_get(v_x_2139_, 1);
lean_inc(v_val_2137_);
v___x_2143_ = lp_lean_x2dftml_LeanFtml_rawMatchedTag(v_head_2141_, v_val_2137_);
if (lean_obj_tag(v___x_2143_) == 0)
{
v_x_2139_ = v_tail_2142_;
goto _start;
}
else
{
lean_object* v_val_2145_; lean_object* v_fst_2146_; lean_object* v_snd_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2190_; 
v_val_2145_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_val_2145_);
lean_dec_ref_known(v___x_2143_, 1);
v_fst_2146_ = lean_ctor_get(v_val_2145_, 0);
v_snd_2147_ = lean_ctor_get(v_val_2145_, 1);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_val_2145_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2149_ = v_val_2145_;
v_isShared_2150_ = v_isSharedCheck_2190_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_snd_2147_);
lean_inc(v_fst_2146_);
lean_dec(v_val_2145_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2190_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2151_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9);
v___x_2152_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2151_, v_snd_2147_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_del_object(v___x_2149_);
lean_dec(v_fst_2146_);
v_x_2139_ = v_tail_2142_;
goto _start;
}
else
{
lean_object* v_val_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2189_; 
lean_dec(v_val_2137_);
v_val_2154_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2156_ = v___x_2152_;
v_isShared_2157_ = v_isSharedCheck_2189_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_val_2154_);
lean_dec(v___x_2152_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2189_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
if (lean_obj_tag(v_val_2154_) == 1)
{
lean_object* v_head_2158_; lean_object* v_tail_2159_; lean_object* v___x_2160_; uint8_t v___x_2161_; 
v_head_2158_ = lean_ctor_get(v_val_2154_, 0);
v_tail_2159_ = lean_ctor_get(v_val_2154_, 1);
v___x_2160_ = lean_unsigned_to_nat(93u);
v___x_2161_ = lean_nat_dec_eq(v_head_2158_, v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; lean_object* v___x_2164_; 
lean_del_object(v___x_2149_);
v___x_2162_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___lam__0(v_s_2138_, v_val_2154_, v_fst_2146_, v_val_2154_);
lean_dec_ref_known(v_val_2154_, 2);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v___x_2162_);
v___x_2164_ = v___x_2156_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v___x_2162_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
else
{
lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2182_; 
lean_inc(v_tail_2159_);
v_isSharedCheck_2182_ = !lean_is_exclusive(v_val_2154_);
if (v_isSharedCheck_2182_ == 0)
{
lean_object* v_unused_2183_; lean_object* v_unused_2184_; 
v_unused_2183_ = lean_ctor_get(v_val_2154_, 1);
lean_dec(v_unused_2183_);
v_unused_2184_ = lean_ctor_get(v_val_2154_, 0);
lean_dec(v_unused_2184_);
v___x_2167_ = v_val_2154_;
v_isShared_2168_ = v_isSharedCheck_2182_;
goto v_resetjp_2166_;
}
else
{
lean_dec(v_val_2154_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2182_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2174_; 
v___x_2169_ = l_List_lengthTR___redArg(v_s_2138_);
v___x_2170_ = l_List_lengthTR___redArg(v_tail_2159_);
lean_dec(v_tail_2159_);
v___x_2171_ = lean_nat_sub(v___x_2169_, v___x_2170_);
lean_dec(v___x_2170_);
lean_dec(v___x_2169_);
v___x_2172_ = lean_box(v___x_2161_);
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 1, v___x_2171_);
lean_ctor_set(v___x_2149_, 0, v___x_2172_);
v___x_2174_ = v___x_2149_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2172_);
lean_ctor_set(v_reuseFailAlloc_2181_, 1, v___x_2171_);
v___x_2174_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
lean_object* v___x_2176_; 
if (v_isShared_2168_ == 0)
{
lean_ctor_set_tag(v___x_2167_, 0);
lean_ctor_set(v___x_2167_, 1, v___x_2174_);
lean_ctor_set(v___x_2167_, 0, v_fst_2146_);
v___x_2176_ = v___x_2167_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_fst_2146_);
lean_ctor_set(v_reuseFailAlloc_2180_, 1, v___x_2174_);
v___x_2176_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
lean_object* v___x_2178_; 
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v___x_2176_);
v___x_2178_ = v___x_2156_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
}
}
else
{
lean_object* v___x_2185_; lean_object* v___x_2187_; 
lean_del_object(v___x_2149_);
v___x_2185_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___lam__0(v_s_2138_, v_val_2154_, v_fst_2146_, v_val_2154_);
lean_dec(v_val_2154_);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v___x_2185_);
v___x_2187_ = v___x_2156_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2185_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0___boxed(lean_object* v_val_2191_, lean_object* v_s_2192_, lean_object* v_x_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0(v_val_2191_, v_s_2192_, v_x_2193_);
lean_dec(v_x_2193_);
lean_dec(v_s_2192_);
return v_res_2194_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1(void){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2196_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__0));
v___x_2197_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2196_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockCloserAt(lean_object* v_s_2198_){
_start:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2199_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1, &lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1);
lean_inc(v_s_2198_);
v___x_2200_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2199_, v_s_2198_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v___x_2201_; 
lean_dec(v_s_2198_);
v___x_2201_ = lean_box(0);
return v___x_2201_;
}
else
{
lean_object* v_val_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v_val_2202_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_val_2202_);
lean_dec_ref_known(v___x_2200_, 1);
v___x_2203_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__7);
v___x_2204_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_blockCloserAt_spec__0(v_val_2202_, v_s_2198_, v___x_2203_);
lean_dec(v_s_2198_);
return v___x_2204_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanTags_go(lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
if (lean_obj_tag(v_a_2211_) == 0)
{
lean_object* v___x_2214_; 
lean_dec(v_a_2213_);
lean_dec(v_a_2212_);
v___x_2214_ = lean_box(0);
return v___x_2214_;
}
else
{
lean_object* v_tail_2215_; lean_object* v_zero_2216_; uint8_t v_isZero_2217_; 
v_tail_2215_ = lean_ctor_get(v_a_2211_, 1);
v_zero_2216_ = lean_unsigned_to_nat(0u);
v_isZero_2217_ = lean_nat_dec_eq(v_a_2213_, v_zero_2216_);
if (v_isZero_2217_ == 1)
{
lean_object* v___x_2218_; 
lean_dec_ref_known(v_a_2211_, 2);
lean_dec(v_a_2213_);
lean_dec(v_a_2212_);
v___x_2218_ = lean_box(0);
return v___x_2218_;
}
else
{
lean_object* v_one_2219_; lean_object* v_n_2220_; lean_object* v___x_2221_; 
v_one_2219_ = lean_unsigned_to_nat(1u);
v_n_2220_ = lean_nat_sub(v_a_2213_, v_one_2219_);
lean_dec(v_a_2213_);
lean_inc_ref(v_a_2211_);
v___x_2221_ = lp_lean_x2dftml_LeanFtml_blockOpenerAt(v_a_2211_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v___x_2222_; 
lean_inc_ref(v_a_2211_);
v___x_2222_ = lp_lean_x2dftml_LeanFtml_blockCloserAt(v_a_2211_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v___x_2223_; 
lean_inc(v_tail_2215_);
lean_dec_ref_known(v_a_2211_, 2);
v___x_2223_ = lean_nat_add(v_a_2212_, v_one_2219_);
lean_dec(v_a_2212_);
v_a_2211_ = v_tail_2215_;
v_a_2212_ = v___x_2223_;
v_a_2213_ = v_n_2220_;
goto _start;
}
else
{
lean_object* v_val_2225_; lean_object* v_snd_2226_; lean_object* v_fst_2227_; lean_object* v_fst_2228_; lean_object* v_snd_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; uint8_t v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2242_; 
v_val_2225_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_val_2225_);
lean_dec_ref_known(v___x_2222_, 1);
v_snd_2226_ = lean_ctor_get(v_val_2225_, 1);
lean_inc(v_snd_2226_);
v_fst_2227_ = lean_ctor_get(v_val_2225_, 0);
lean_inc(v_fst_2227_);
lean_dec(v_val_2225_);
v_fst_2228_ = lean_ctor_get(v_snd_2226_, 0);
lean_inc(v_fst_2228_);
v_snd_2229_ = lean_ctor_get(v_snd_2226_, 1);
lean_inc_n(v_snd_2229_, 3);
lean_dec(v_snd_2226_);
v___x_2230_ = lean_box(0);
lean_inc(v_a_2212_);
v___x_2231_ = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(v___x_2231_, 0, v_fst_2227_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
lean_ctor_set(v___x_2231_, 2, v_a_2212_);
lean_ctor_set(v___x_2231_, 3, v_snd_2229_);
lean_ctor_set_uint8(v___x_2231_, sizeof(void*)*4, v_isZero_2217_);
lean_ctor_set_uint8(v___x_2231_, sizeof(void*)*4 + 1, v_isZero_2217_);
v___x_2232_ = lean_unbox(v_fst_2228_);
lean_dec(v_fst_2228_);
lean_ctor_set_uint8(v___x_2231_, sizeof(void*)*4 + 2, v___x_2232_);
v___x_2233_ = l_List_drop___redArg(v_snd_2229_, v_a_2211_);
v_isSharedCheck_2242_ = !lean_is_exclusive(v_a_2211_);
if (v_isSharedCheck_2242_ == 0)
{
lean_object* v_unused_2243_; lean_object* v_unused_2244_; 
v_unused_2243_ = lean_ctor_get(v_a_2211_, 1);
lean_dec(v_unused_2243_);
v_unused_2244_ = lean_ctor_get(v_a_2211_, 0);
lean_dec(v_unused_2244_);
v___x_2235_ = v_a_2211_;
v_isShared_2236_ = v_isSharedCheck_2242_;
goto v_resetjp_2234_;
}
else
{
lean_dec(v_a_2211_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2242_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2240_; 
v___x_2237_ = lean_nat_add(v_a_2212_, v_snd_2229_);
lean_dec(v_snd_2229_);
lean_dec(v_a_2212_);
v___x_2238_ = lp_lean_x2dftml_LeanFtml_scanTags_go(v___x_2233_, v___x_2237_, v_n_2220_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 1, v___x_2238_);
lean_ctor_set(v___x_2235_, 0, v___x_2231_);
v___x_2240_ = v___x_2235_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v___x_2231_);
lean_ctor_set(v_reuseFailAlloc_2241_, 1, v___x_2238_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
else
{
lean_object* v_val_2245_; lean_object* v_snd_2246_; lean_object* v_snd_2247_; lean_object* v_fst_2248_; lean_object* v_fst_2249_; lean_object* v_fst_2250_; lean_object* v_snd_2251_; uint8_t v___x_2252_; lean_object* v___x_2253_; uint8_t v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2264_; 
v_val_2245_ = lean_ctor_get(v___x_2221_, 0);
lean_inc(v_val_2245_);
lean_dec_ref_known(v___x_2221_, 1);
v_snd_2246_ = lean_ctor_get(v_val_2245_, 1);
lean_inc(v_snd_2246_);
v_snd_2247_ = lean_ctor_get(v_snd_2246_, 1);
lean_inc(v_snd_2247_);
v_fst_2248_ = lean_ctor_get(v_val_2245_, 0);
lean_inc(v_fst_2248_);
lean_dec(v_val_2245_);
v_fst_2249_ = lean_ctor_get(v_snd_2246_, 0);
lean_inc(v_fst_2249_);
lean_dec(v_snd_2246_);
v_fst_2250_ = lean_ctor_get(v_snd_2247_, 0);
lean_inc(v_fst_2250_);
v_snd_2251_ = lean_ctor_get(v_snd_2247_, 1);
lean_inc_n(v_snd_2251_, 3);
lean_dec(v_snd_2247_);
v___x_2252_ = 1;
lean_inc(v_a_2212_);
v___x_2253_ = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(v___x_2253_, 0, v_fst_2248_);
lean_ctor_set(v___x_2253_, 1, v_fst_2250_);
lean_ctor_set(v___x_2253_, 2, v_a_2212_);
lean_ctor_set(v___x_2253_, 3, v_snd_2251_);
lean_ctor_set_uint8(v___x_2253_, sizeof(void*)*4, v___x_2252_);
v___x_2254_ = lean_unbox(v_fst_2249_);
lean_dec(v_fst_2249_);
lean_ctor_set_uint8(v___x_2253_, sizeof(void*)*4 + 1, v___x_2254_);
lean_ctor_set_uint8(v___x_2253_, sizeof(void*)*4 + 2, v_isZero_2217_);
v___x_2255_ = l_List_drop___redArg(v_snd_2251_, v_a_2211_);
v_isSharedCheck_2264_ = !lean_is_exclusive(v_a_2211_);
if (v_isSharedCheck_2264_ == 0)
{
lean_object* v_unused_2265_; lean_object* v_unused_2266_; 
v_unused_2265_ = lean_ctor_get(v_a_2211_, 1);
lean_dec(v_unused_2265_);
v_unused_2266_ = lean_ctor_get(v_a_2211_, 0);
lean_dec(v_unused_2266_);
v___x_2257_ = v_a_2211_;
v_isShared_2258_ = v_isSharedCheck_2264_;
goto v_resetjp_2256_;
}
else
{
lean_dec(v_a_2211_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2264_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v___x_2259_ = lean_nat_add(v_a_2212_, v_snd_2251_);
lean_dec(v_snd_2251_);
lean_dec(v_a_2212_);
v___x_2260_ = lp_lean_x2dftml_LeanFtml_scanTags_go(v___x_2255_, v___x_2259_, v_n_2220_);
if (v_isShared_2258_ == 0)
{
lean_ctor_set(v___x_2257_, 1, v___x_2260_);
lean_ctor_set(v___x_2257_, 0, v___x_2253_);
v___x_2262_ = v___x_2257_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2253_);
lean_ctor_set(v_reuseFailAlloc_2263_, 1, v___x_2260_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanTags(lean_object* v_s_2267_){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2268_ = lean_unsigned_to_nat(0u);
v___x_2269_ = l_List_lengthTR___redArg(v_s_2267_);
v___x_2270_ = lean_unsigned_to_nat(1u);
v___x_2271_ = lean_nat_add(v___x_2269_, v___x_2270_);
lean_dec(v___x_2269_);
v___x_2272_ = lp_lean_x2dftml_LeanFtml_scanTags_go(v_s_2267_, v___x_2268_, v___x_2271_);
return v___x_2272_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_tagIsRawCase(lean_object* v_t_2273_){
_start:
{
lean_object* v___x_2274_; uint8_t v___x_2275_; 
lean_inc(v_t_2273_);
v___x_2274_ = lp_lean_x2dftml_LeanFtml_lowerBytes(v_t_2273_);
v___x_2275_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_t_2273_, v___x_2274_);
lean_dec(v___x_2274_);
lean_dec(v_t_2273_);
if (v___x_2275_ == 0)
{
uint8_t v___x_2276_; 
v___x_2276_ = 1;
return v___x_2276_;
}
else
{
uint8_t v___x_2277_; 
v___x_2277_ = 0;
return v___x_2277_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tagIsRawCase___boxed(lean_object* v_t_2278_){
_start:
{
uint8_t v_res_2279_; lean_object* v_r_2280_; 
v_res_2279_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_t_2278_);
v_r_2280_ = lean_box(v_res_2279_);
return v_r_2280_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findPairOpener(lean_object* v_stack_2281_, lean_object* v_closeTag_2282_, uint8_t v_rawClose_2283_){
_start:
{
if (lean_obj_tag(v_stack_2281_) == 0)
{
lean_object* v___x_2284_; 
v___x_2284_ = lean_box(0);
return v___x_2284_;
}
else
{
lean_object* v_head_2285_; lean_object* v_tail_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2306_; 
v_head_2285_ = lean_ctor_get(v_stack_2281_, 0);
v_tail_2286_ = lean_ctor_get(v_stack_2281_, 1);
v_isSharedCheck_2306_ = !lean_is_exclusive(v_stack_2281_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2288_ = v_stack_2281_;
v_isShared_2289_ = v_isSharedCheck_2306_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_tail_2286_);
lean_inc(v_head_2285_);
lean_dec(v_stack_2281_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2306_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v_tag_2290_; uint8_t v___x_2291_; 
v_tag_2290_ = lean_ctor_get(v_head_2285_, 0);
lean_inc(v_tag_2290_);
v___x_2291_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_2290_);
if (v___x_2291_ == 0)
{
uint8_t v___x_2298_; 
v___x_2298_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_tag_2290_, v_closeTag_2282_);
if (v___x_2298_ == 0)
{
if (v_rawClose_2283_ == 0)
{
lean_del_object(v___x_2288_);
lean_dec(v_head_2285_);
v_stack_2281_ = v_tail_2286_;
goto _start;
}
else
{
lean_dec(v_tail_2286_);
goto v___jp_2292_;
}
}
else
{
lean_dec(v_tail_2286_);
goto v___jp_2292_;
}
}
else
{
lean_object* v___x_2300_; uint8_t v___x_2301_; 
lean_del_object(v___x_2288_);
lean_inc(v_tag_2290_);
v___x_2300_ = lp_lean_x2dftml_LeanFtml_lowerBytes(v_tag_2290_);
v___x_2301_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_2300_, v_closeTag_2282_);
lean_dec(v___x_2300_);
if (v___x_2301_ == 0)
{
lean_dec(v_head_2285_);
v_stack_2281_ = v_tail_2286_;
goto _start;
}
else
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
lean_dec(v_tail_2286_);
v___x_2303_ = lean_box(v___x_2301_);
v___x_2304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2304_, 0, v_head_2285_);
lean_ctor_set(v___x_2304_, 1, v___x_2303_);
v___x_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
return v___x_2305_;
}
}
v___jp_2292_:
{
lean_object* v___x_2293_; lean_object* v___x_2295_; 
v___x_2293_ = lean_box(v___x_2291_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set_tag(v___x_2288_, 0);
lean_ctor_set(v___x_2288_, 1, v___x_2293_);
v___x_2295_ = v___x_2288_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_head_2285_);
lean_ctor_set(v_reuseFailAlloc_2297_, 1, v___x_2293_);
v___x_2295_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
return v___x_2296_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findPairOpener___boxed(lean_object* v_stack_2307_, lean_object* v_closeTag_2308_, lean_object* v_rawClose_2309_){
_start:
{
uint8_t v_rawClose_boxed_2310_; lean_object* v_res_2311_; 
v_rawClose_boxed_2310_ = lean_unbox(v_rawClose_2309_);
v_res_2311_ = lp_lean_x2dftml_LeanFtml_findPairOpener(v_stack_2307_, v_closeTag_2308_, v_rawClose_boxed_2310_);
lean_dec(v_closeTag_2308_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findPair_go(lean_object* v_a_2312_, lean_object* v_a_2313_){
_start:
{
if (lean_obj_tag(v_a_2312_) == 0)
{
lean_object* v___x_2314_; 
lean_dec(v_a_2313_);
v___x_2314_ = lean_box(0);
return v___x_2314_;
}
else
{
lean_object* v_head_2315_; uint8_t v_isOpen_2316_; 
v_head_2315_ = lean_ctor_get(v_a_2312_, 0);
lean_inc(v_head_2315_);
v_isOpen_2316_ = lean_ctor_get_uint8(v_head_2315_, sizeof(void*)*4);
if (v_isOpen_2316_ == 0)
{
lean_object* v_tail_2317_; lean_object* v_tag_2318_; lean_object* v___x_2319_; uint8_t v___x_2320_; lean_object* v___x_2321_; 
v_tail_2317_ = lean_ctor_get(v_a_2312_, 1);
lean_inc(v_tail_2317_);
lean_dec_ref_known(v_a_2312_, 2);
v_tag_2318_ = lean_ctor_get(v_head_2315_, 0);
lean_inc_n(v_tag_2318_, 2);
v___x_2319_ = lp_lean_x2dftml_LeanFtml_lowerBytes(v_tag_2318_);
v___x_2320_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_2318_);
lean_inc(v_a_2313_);
v___x_2321_ = lp_lean_x2dftml_LeanFtml_findPairOpener(v_a_2313_, v___x_2319_, v___x_2320_);
lean_dec(v___x_2319_);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_dec(v_head_2315_);
v_a_2312_ = v_tail_2317_;
goto _start;
}
else
{
lean_object* v_val_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2342_; 
v_val_2323_ = lean_ctor_get(v___x_2321_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2325_ = v___x_2321_;
v_isShared_2326_ = v_isSharedCheck_2342_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_val_2323_);
lean_dec(v___x_2321_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2342_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v_snd_2327_; uint8_t v___x_2328_; 
v_snd_2327_ = lean_ctor_get(v_val_2323_, 1);
v___x_2328_ = lean_unbox(v_snd_2327_);
if (v___x_2328_ == 0)
{
lean_object* v_fst_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2339_; 
lean_dec(v_tail_2317_);
lean_dec(v_a_2313_);
v_fst_2329_ = lean_ctor_get(v_val_2323_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v_val_2323_);
if (v_isSharedCheck_2339_ == 0)
{
lean_object* v_unused_2340_; 
v_unused_2340_ = lean_ctor_get(v_val_2323_, 1);
lean_dec(v_unused_2340_);
v___x_2331_ = v_val_2323_;
v_isShared_2332_ = v_isSharedCheck_2339_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_fst_2329_);
lean_dec(v_val_2323_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2339_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 1, v_head_2315_);
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_fst_2329_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v_head_2315_);
v___x_2334_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
lean_object* v___x_2336_; 
if (v_isShared_2326_ == 0)
{
lean_ctor_set(v___x_2325_, 0, v___x_2334_);
v___x_2336_ = v___x_2325_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2334_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
else
{
lean_del_object(v___x_2325_);
lean_dec(v_val_2323_);
lean_dec(v_head_2315_);
v_a_2312_ = v_tail_2317_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2351_; 
v_tail_2343_ = lean_ctor_get(v_a_2312_, 1);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_a_2312_);
if (v_isSharedCheck_2351_ == 0)
{
lean_object* v_unused_2352_; 
v_unused_2352_ = lean_ctor_get(v_a_2312_, 0);
lean_dec(v_unused_2352_);
v___x_2345_ = v_a_2312_;
v_isShared_2346_ = v_isSharedCheck_2351_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_tail_2343_);
lean_dec(v_a_2312_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2351_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 1, v_a_2313_);
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_head_2315_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v_a_2313_);
v___x_2348_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
v_a_2312_ = v_tail_2343_;
v_a_2313_ = v___x_2348_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findPair(lean_object* v_tags_2353_){
_start:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2354_ = lean_box(0);
v___x_2355_ = lp_lean_x2dftml_LeanFtml_findPair_go(v_tags_2353_, v___x_2354_);
return v___x_2355_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_normalizeAttrValue_spec__0(lean_object* v_a_2356_, lean_object* v_a_2357_){
_start:
{
if (lean_obj_tag(v_a_2356_) == 0)
{
lean_object* v___x_2358_; 
v___x_2358_ = l_List_reverse___redArg(v_a_2357_);
return v___x_2358_;
}
else
{
lean_object* v_head_2359_; lean_object* v_tail_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2388_; 
v_head_2359_ = lean_ctor_get(v_a_2356_, 0);
v_tail_2360_ = lean_ctor_get(v_a_2356_, 1);
v_isSharedCheck_2388_ = !lean_is_exclusive(v_a_2356_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2362_ = v_a_2356_;
v_isShared_2363_ = v_isSharedCheck_2388_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_tail_2360_);
lean_inc(v_head_2359_);
lean_dec(v_a_2356_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2388_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
uint8_t v___y_2370_; lean_object* v___x_2374_; uint8_t v___x_2375_; 
v___x_2374_ = lean_unsigned_to_nat(8u);
v___x_2375_ = lean_nat_dec_le(v_head_2359_, v___x_2374_);
if (v___x_2375_ == 0)
{
lean_object* v___x_2376_; uint8_t v___x_2377_; 
v___x_2376_ = lean_unsigned_to_nat(11u);
v___x_2377_ = lean_nat_dec_eq(v_head_2359_, v___x_2376_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; uint8_t v___x_2379_; 
v___x_2378_ = lean_unsigned_to_nat(12u);
v___x_2379_ = lean_nat_dec_eq(v_head_2359_, v___x_2378_);
if (v___x_2379_ == 0)
{
lean_object* v___x_2380_; uint8_t v___x_2381_; 
v___x_2380_ = lean_unsigned_to_nat(14u);
v___x_2381_ = lean_nat_dec_le(v___x_2380_, v_head_2359_);
if (v___x_2381_ == 0)
{
v___y_2370_ = v___x_2381_;
goto v___jp_2369_;
}
else
{
lean_object* v___x_2382_; uint8_t v___x_2383_; 
v___x_2382_ = lean_unsigned_to_nat(31u);
v___x_2383_ = lean_nat_dec_le(v_head_2359_, v___x_2382_);
if (v___x_2383_ == 0)
{
v___y_2370_ = v___x_2383_;
goto v___jp_2369_;
}
else
{
lean_del_object(v___x_2362_);
lean_dec(v_head_2359_);
v_a_2356_ = v_tail_2360_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_2362_);
lean_dec(v_head_2359_);
v_a_2356_ = v_tail_2360_;
goto _start;
}
}
else
{
lean_del_object(v___x_2362_);
lean_dec(v_head_2359_);
v_a_2356_ = v_tail_2360_;
goto _start;
}
}
else
{
lean_del_object(v___x_2362_);
lean_dec(v_head_2359_);
v_a_2356_ = v_tail_2360_;
goto _start;
}
v___jp_2364_:
{
lean_object* v___x_2366_; 
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 1, v_a_2357_);
v___x_2366_ = v___x_2362_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_head_2359_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v_a_2357_);
v___x_2366_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
v_a_2356_ = v_tail_2360_;
v_a_2357_ = v___x_2366_;
goto _start;
}
}
v___jp_2369_:
{
lean_object* v___x_2371_; uint8_t v___x_2372_; 
v___x_2371_ = lean_unsigned_to_nat(127u);
v___x_2372_ = lean_nat_dec_eq(v_head_2359_, v___x_2371_);
if (v___x_2372_ == 0)
{
goto v___jp_2364_;
}
else
{
if (v___y_2370_ == 0)
{
lean_del_object(v___x_2362_);
lean_dec(v_head_2359_);
v_a_2356_ = v_tail_2360_;
goto _start;
}
else
{
goto v___jp_2364_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1(lean_object* v_as_2391_, size_t v_i_2392_, size_t v_stop_2393_, lean_object* v_b_2394_){
_start:
{
uint8_t v___x_2395_; 
v___x_2395_ = lean_usize_dec_eq(v_i_2392_, v_stop_2393_);
if (v___x_2395_ == 0)
{
size_t v___x_2396_; size_t v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; uint8_t v___x_2407_; 
v___x_2396_ = ((size_t)1ULL);
v___x_2397_ = lean_usize_sub(v_i_2392_, v___x_2396_);
v___x_2398_ = lean_array_uget_borrowed(v_as_2391_, v___x_2397_);
v___x_2399_ = lean_unsigned_to_nat(32u);
v___x_2407_ = lean_nat_dec_eq(v___x_2398_, v___x_2399_);
if (v___x_2407_ == 0)
{
lean_object* v___x_2408_; uint8_t v___x_2409_; 
v___x_2408_ = lean_unsigned_to_nat(9u);
v___x_2409_ = lean_nat_dec_eq(v___x_2398_, v___x_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; uint8_t v___x_2411_; 
v___x_2410_ = lean_unsigned_to_nat(10u);
v___x_2411_ = lean_nat_dec_eq(v___x_2398_, v___x_2410_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; uint8_t v___x_2413_; 
v___x_2412_ = lean_unsigned_to_nat(13u);
v___x_2413_ = lean_nat_dec_eq(v___x_2398_, v___x_2412_);
if (v___x_2413_ == 0)
{
lean_object* v___x_2414_; 
lean_inc(v___x_2398_);
v___x_2414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2398_);
lean_ctor_set(v___x_2414_, 1, v_b_2394_);
v_i_2392_ = v___x_2397_;
v_b_2394_ = v___x_2414_;
goto _start;
}
else
{
goto v___jp_2400_;
}
}
else
{
goto v___jp_2400_;
}
}
else
{
goto v___jp_2400_;
}
}
else
{
goto v___jp_2400_;
}
v___jp_2400_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; uint8_t v___x_2403_; 
v___x_2401_ = l_List_head_x3f___redArg(v_b_2394_);
v___x_2402_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1___closed__0));
v___x_2403_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2401_, v___x_2402_);
lean_dec(v___x_2401_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2399_);
lean_ctor_set(v___x_2404_, 1, v_b_2394_);
v_i_2392_ = v___x_2397_;
v_b_2394_ = v___x_2404_;
goto _start;
}
else
{
v_i_2392_ = v___x_2397_;
goto _start;
}
}
}
else
{
return v_b_2394_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1___boxed(lean_object* v_as_2416_, lean_object* v_i_2417_, lean_object* v_stop_2418_, lean_object* v_b_2419_){
_start:
{
size_t v_i_boxed_2420_; size_t v_stop_boxed_2421_; lean_object* v_res_2422_; 
v_i_boxed_2420_ = lean_unbox_usize(v_i_2417_);
lean_dec(v_i_2417_);
v_stop_boxed_2421_ = lean_unbox_usize(v_stop_2418_);
lean_dec(v_stop_2418_);
v_res_2422_ = lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1(v_as_2416_, v_i_boxed_2420_, v_stop_boxed_2421_, v_b_2419_);
lean_dec_ref(v_as_2416_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1(lean_object* v_init_2423_, lean_object* v_l_2424_){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v___x_2425_ = lean_array_mk(v_l_2424_);
v___x_2426_ = lean_array_get_size(v___x_2425_);
v___x_2427_ = lean_unsigned_to_nat(0u);
v___x_2428_ = lean_nat_dec_lt(v___x_2427_, v___x_2426_);
if (v___x_2428_ == 0)
{
lean_dec_ref(v___x_2425_);
return v_init_2423_;
}
else
{
size_t v___x_2429_; size_t v___x_2430_; lean_object* v___x_2431_; 
v___x_2429_ = lean_usize_of_nat(v___x_2426_);
v___x_2430_ = ((size_t)0ULL);
v___x_2431_ = lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1(v___x_2425_, v___x_2429_, v___x_2430_, v_init_2423_);
lean_dec_ref(v___x_2425_);
return v___x_2431_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeAttrValue(lean_object* v_v_2432_){
_start:
{
lean_object* v___x_2433_; lean_object* v_kept_2434_; lean_object* v_collapsed_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2433_ = lean_box(0);
v_kept_2434_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_normalizeAttrValue_spec__0(v_v_2432_, v___x_2433_);
v_collapsed_2435_ = lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1(v___x_2433_, v_kept_2434_);
v___x_2436_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(v_collapsed_2435_);
lean_dec(v_collapsed_2435_);
v___x_2437_ = l_List_reverse___redArg(v___x_2436_);
v___x_2438_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(v___x_2437_);
lean_dec(v___x_2437_);
v___x_2439_ = l_List_reverse___redArg(v___x_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasPlaceholder(lean_object* v_v_2440_){
_start:
{
lean_object* v___x_2441_; uint8_t v___x_2442_; 
v___x_2441_ = lp_lean_x2dftml_LeanFtml_allPh(v_v_2440_);
v___x_2442_ = l_List_isEmpty___redArg(v___x_2441_);
lean_dec(v___x_2441_);
if (v___x_2442_ == 0)
{
uint8_t v___x_2443_; 
v___x_2443_ = 1;
return v___x_2443_;
}
else
{
uint8_t v___x_2444_; 
v___x_2444_ = 0;
return v___x_2444_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasPlaceholder___boxed(lean_object* v_v_2445_){
_start:
{
uint8_t v_res_2446_; lean_object* v_r_2447_; 
v_res_2446_ = lp_lean_x2dftml_LeanFtml_hasPlaceholder(v_v_2445_);
v_r_2447_ = lean_box(v_res_2446_);
return v_r_2447_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildListAttrs_spec__0(lean_object* v_om_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_){
_start:
{
if (lean_obj_tag(v_a_2449_) == 0)
{
lean_object* v___x_2451_; 
v___x_2451_ = lean_array_to_list(v_a_2450_);
return v___x_2451_;
}
else
{
lean_object* v_head_2452_; lean_object* v_tail_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2475_; 
v_head_2452_ = lean_ctor_get(v_a_2449_, 0);
v_tail_2453_ = lean_ctor_get(v_a_2449_, 1);
v_isSharedCheck_2475_ = !lean_is_exclusive(v_a_2449_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2455_ = v_a_2449_;
v_isShared_2456_ = v_isSharedCheck_2475_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_tail_2453_);
lean_inc(v_head_2452_);
lean_dec(v_a_2449_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2475_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v_val_2458_; lean_object* v___x_2461_; 
v___x_2461_ = lp_lean_x2dftml_LeanFtml_lookupB(v_om_2448_, v_head_2452_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_del_object(v___x_2455_);
lean_dec(v_head_2452_);
v_a_2449_ = v_tail_2453_;
goto _start;
}
else
{
lean_object* v_val_2463_; uint8_t v___x_2464_; 
v_val_2463_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_val_2463_);
lean_dec_ref_known(v___x_2461_, 1);
v___x_2464_ = l_List_isEmpty___redArg(v_val_2463_);
if (v___x_2464_ == 0)
{
uint8_t v___x_2465_; 
lean_inc(v_val_2463_);
v___x_2465_ = lp_lean_x2dftml_LeanFtml_hasPlaceholder(v_val_2463_);
if (v___x_2465_ == 0)
{
lean_object* v___x_2466_; lean_object* v___x_2468_; 
v___x_2466_ = lp_lean_x2dftml_LeanFtml_normalizeAttrValue(v_val_2463_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set_tag(v___x_2455_, 0);
lean_ctor_set(v___x_2455_, 1, v___x_2466_);
v___x_2468_ = v___x_2455_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v_head_2452_);
lean_ctor_set(v_reuseFailAlloc_2469_, 1, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
v_val_2458_ = v___x_2468_;
goto v___jp_2457_;
}
}
else
{
lean_object* v___x_2470_; lean_object* v___x_2472_; 
lean_dec(v_val_2463_);
v___x_2470_ = lean_box(0);
if (v_isShared_2456_ == 0)
{
lean_ctor_set_tag(v___x_2455_, 0);
lean_ctor_set(v___x_2455_, 1, v___x_2470_);
v___x_2472_ = v___x_2455_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_head_2452_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v___x_2470_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
v_val_2458_ = v___x_2472_;
goto v___jp_2457_;
}
}
}
else
{
lean_dec(v_val_2463_);
lean_del_object(v___x_2455_);
lean_dec(v_head_2452_);
v_a_2449_ = v_tail_2453_;
goto _start;
}
}
v___jp_2457_:
{
lean_object* v___x_2459_; 
v___x_2459_ = lean_array_push(v_a_2450_, v_val_2458_);
v_a_2449_ = v_tail_2453_;
v_a_2450_ = v___x_2459_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildListAttrs_spec__0___boxed(lean_object* v_om_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildListAttrs_spec__0(v_om_2476_, v_a_2477_, v_a_2478_);
lean_dec(v_om_2476_);
return v_res_2479_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__0));
v___x_2482_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1(lean_object* v_x_2483_, lean_object* v_x_2484_){
_start:
{
if (lean_obj_tag(v_x_2484_) == 0)
{
return v_x_2483_;
}
else
{
lean_object* v_head_2485_; lean_object* v_tail_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2517_; 
v_head_2485_ = lean_ctor_get(v_x_2484_, 0);
v_tail_2486_ = lean_ctor_get(v_x_2484_, 1);
v_isSharedCheck_2517_ = !lean_is_exclusive(v_x_2484_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2488_ = v_x_2484_;
v_isShared_2489_ = v_isSharedCheck_2517_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_tail_2486_);
lean_inc(v_head_2485_);
lean_dec(v_x_2484_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2517_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v_fst_2490_; lean_object* v_snd_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2516_; 
v_fst_2490_ = lean_ctor_get(v_head_2485_, 0);
v_snd_2491_ = lean_ctor_get(v_head_2485_, 1);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_head_2485_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2493_ = v_head_2485_;
v_isShared_2494_ = v_isSharedCheck_2516_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_snd_2491_);
lean_inc(v_fst_2490_);
lean_dec(v_head_2485_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2516_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; uint8_t v___x_2499_; 
v___x_2495_ = lean_unsigned_to_nat(5u);
v___x_2496_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_fst_2490_);
v___x_2497_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_fst_2490_, v_fst_2490_, v___x_2495_, v___x_2496_);
v___x_2498_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1___closed__1);
v___x_2499_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_2497_, v___x_2498_);
lean_dec(v___x_2497_);
if (v___x_2499_ == 0)
{
lean_del_object(v___x_2493_);
lean_dec(v_snd_2491_);
lean_dec(v_fst_2490_);
lean_del_object(v___x_2488_);
v_x_2484_ = v_tail_2486_;
goto _start;
}
else
{
lean_object* v___x_2501_; lean_object* v___y_2503_; uint8_t v___x_2513_; 
v___x_2501_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_fst_2490_);
lean_inc(v_snd_2491_);
v___x_2513_ = lp_lean_x2dftml_LeanFtml_hasPlaceholder(v_snd_2491_);
if (v___x_2513_ == 0)
{
lean_object* v___x_2514_; 
v___x_2514_ = lp_lean_x2dftml_LeanFtml_normalizeAttrValue(v_snd_2491_);
v___y_2503_ = v___x_2514_;
goto v___jp_2502_;
}
else
{
lean_object* v___x_2515_; 
lean_dec(v_snd_2491_);
v___x_2515_ = lean_box(0);
v___y_2503_ = v___x_2515_;
goto v___jp_2502_;
}
v___jp_2502_:
{
lean_object* v___x_2505_; 
if (v_isShared_2494_ == 0)
{
lean_ctor_set(v___x_2493_, 1, v___y_2503_);
lean_ctor_set(v___x_2493_, 0, v___x_2501_);
v___x_2505_ = v___x_2493_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v___x_2501_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v___y_2503_);
v___x_2505_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
lean_object* v___x_2506_; lean_object* v___x_2508_; 
v___x_2506_ = lean_box(0);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 1, v___x_2506_);
lean_ctor_set(v___x_2488_, 0, v___x_2505_);
v___x_2508_ = v___x_2488_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2505_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v___x_2506_);
v___x_2508_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
lean_object* v___x_2509_; 
v___x_2509_ = l_List_appendTR___redArg(v_x_2483_, v___x_2508_);
v_x_2483_ = v___x_2509_;
v_x_2484_ = v_tail_2486_;
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
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__1(void){
_start:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2519_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__0));
v___x_2520_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2519_);
return v___x_2520_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__3(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__2));
v___x_2523_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2522_);
return v___x_2523_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__5(void){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__4));
v___x_2526_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2525_);
return v___x_2526_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__6(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tokTypeIs___closed__0));
v___x_2528_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2527_);
return v___x_2528_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__7(void){
_start:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2529_ = lean_box(0);
v___x_2530_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__6, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__6);
v___x_2531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
lean_ctor_set(v___x_2531_, 1, v___x_2529_);
return v___x_2531_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__8(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2532_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__7, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__7);
v___x_2533_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__5, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__5);
v___x_2534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
lean_ctor_set(v___x_2534_, 1, v___x_2532_);
return v___x_2534_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__9(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__8, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__8);
v___x_2536_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__3, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__3);
v___x_2537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2536_);
lean_ctor_set(v___x_2537_, 1, v___x_2535_);
return v___x_2537_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__10(void){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2538_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__9, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__9);
v___x_2539_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__1, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__1);
v___x_2540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2539_);
lean_ctor_set(v___x_2540_, 1, v___x_2538_);
return v___x_2540_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__13(void){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2544_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__12));
v___x_2545_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2544_);
return v___x_2545_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__15(void){
_start:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2547_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__14));
v___x_2548_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2547_);
return v___x_2548_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17(void){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__16));
v___x_2551_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2550_);
return v___x_2551_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__21(void){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__12));
v___x_2559_ = l_String_toListImpl(v___x_2558_);
return v___x_2559_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__22(void){
_start:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2560_ = lean_box(0);
v___x_2561_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__21, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__21);
v___x_2562_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_2561_, v___x_2560_);
return v___x_2562_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__23(void){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2563_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17);
v___x_2564_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__22, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__22);
v___x_2565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2565_, 0, v___x_2564_);
lean_ctor_set(v___x_2565_, 1, v___x_2563_);
return v___x_2565_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__24(void){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2566_ = lean_box(0);
v___x_2567_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__23, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__23);
v___x_2568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
lean_ctor_set(v___x_2568_, 1, v___x_2566_);
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs(lean_object* v_attrStr_2569_){
_start:
{
lean_object* v_om_2570_; lean_object* v___y_2572_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v_om_2570_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_attrStr_2569_);
v___x_2580_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__13, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__13);
v___x_2581_ = lp_lean_x2dftml_LeanFtml_lookupB(v_om_2570_, v___x_2580_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v___x_2582_; 
v___x_2582_ = lean_box(0);
v___y_2572_ = v___x_2582_;
goto v___jp_2571_;
}
else
{
lean_object* v_val_2583_; uint8_t v___x_2584_; 
v_val_2583_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_val_2583_);
lean_dec_ref_known(v___x_2581_, 1);
v___x_2584_ = l_List_isEmpty___redArg(v_val_2583_);
if (v___x_2584_ == 0)
{
uint8_t v___x_2585_; 
lean_inc(v_val_2583_);
v___x_2585_ = lp_lean_x2dftml_LeanFtml_hasPlaceholder(v_val_2583_);
if (v___x_2585_ == 0)
{
lean_object* v_nv_2586_; uint8_t v___x_2593_; 
lean_inc(v_val_2583_);
v_nv_2586_ = lp_lean_x2dftml_LeanFtml_normalizeAttrValue(v_val_2583_);
v___x_2593_ = l_List_isEmpty___redArg(v_nv_2586_);
if (v___x_2593_ == 0)
{
lean_object* v___x_2594_; uint8_t v___x_2595_; 
v___x_2594_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__17);
v___x_2595_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_2594_, v_nv_2586_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; lean_object* v___x_2597_; uint8_t v___x_2598_; 
v___x_2596_ = l_List_head_x3f___redArg(v_val_2583_);
lean_dec(v_val_2583_);
v___x_2597_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_normalizeAttrValue_spec__1_spec__1___closed__0));
v___x_2598_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2596_, v___x_2597_);
if (v___x_2598_ == 0)
{
lean_object* v___x_2599_; uint8_t v___x_2600_; 
v___x_2599_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__18));
v___x_2600_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2596_, v___x_2599_);
if (v___x_2600_ == 0)
{
lean_object* v___x_2601_; uint8_t v___x_2602_; 
v___x_2601_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__19));
v___x_2602_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2596_, v___x_2601_);
if (v___x_2602_ == 0)
{
lean_object* v___x_2603_; uint8_t v___x_2604_; 
v___x_2603_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__20));
v___x_2604_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_2596_, v___x_2603_);
lean_dec(v___x_2596_);
if (v___x_2604_ == 0)
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2605_ = l_List_appendTR___redArg(v___x_2594_, v_nv_2586_);
v___x_2606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2580_);
lean_ctor_set(v___x_2606_, 1, v___x_2605_);
v___x_2607_ = lean_box(0);
v___x_2608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2606_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
v___y_2572_ = v___x_2608_;
goto v___jp_2571_;
}
else
{
goto v___jp_2587_;
}
}
else
{
lean_dec(v___x_2596_);
goto v___jp_2587_;
}
}
else
{
lean_dec(v___x_2596_);
goto v___jp_2587_;
}
}
else
{
lean_dec(v___x_2596_);
goto v___jp_2587_;
}
}
else
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
lean_dec(v_val_2583_);
v___x_2609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2580_);
lean_ctor_set(v___x_2609_, 1, v_nv_2586_);
v___x_2610_ = lean_box(0);
v___x_2611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2609_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
v___y_2572_ = v___x_2611_;
goto v___jp_2571_;
}
}
else
{
lean_object* v___x_2612_; 
lean_dec(v_nv_2586_);
lean_dec(v_val_2583_);
v___x_2612_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__24, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__24);
v___y_2572_ = v___x_2612_;
goto v___jp_2571_;
}
v___jp_2587_:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2588_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__15, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__15);
v___x_2589_ = l_List_appendTR___redArg(v___x_2588_, v_nv_2586_);
v___x_2590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2580_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = lean_box(0);
v___x_2592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2590_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
v___y_2572_ = v___x_2592_;
goto v___jp_2571_;
}
}
else
{
lean_object* v___x_2613_; 
lean_dec(v_val_2583_);
v___x_2613_ = lean_box(0);
v___y_2572_ = v___x_2613_;
goto v___jp_2571_;
}
}
else
{
lean_object* v___x_2614_; 
lean_dec(v_val_2583_);
v___x_2614_ = lean_box(0);
v___y_2572_ = v___x_2614_;
goto v___jp_2571_;
}
}
v___jp_2571_:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v_named_2576_; lean_object* v_datas_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2573_ = lean_box(0);
v___x_2574_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__10, &lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__10);
v___x_2575_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__11));
v_named_2576_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildListAttrs_spec__0(v_om_2570_, v___x_2574_, v___x_2575_);
v_datas_2577_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildListAttrs_spec__1(v___x_2573_, v_om_2570_);
v___x_2578_ = l_List_appendTR___redArg(v___y_2572_, v_named_2576_);
v___x_2579_ = l_List_appendTR___redArg(v___x_2578_, v_datas_2577_);
return v___x_2579_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildListAttrs___boxed(lean_object* v_attrStr_2615_){
_start:
{
lean_object* v_res_2616_; 
v_res_2616_ = lp_lean_x2dftml_LeanFtml_buildListAttrs(v_attrStr_2615_);
lean_dec(v_attrStr_2615_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrsToOpts(lean_object* v_pairs_2617_){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2618_ = lean_box(0);
v___x_2619_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v_pairs_2617_, v___x_2618_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_maskNested_spec__0(lean_object* v_blk_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_){
_start:
{
if (lean_obj_tag(v_a_2627_) == 0)
{
lean_object* v___x_2629_; 
v___x_2629_ = l_List_reverse___redArg(v_a_2628_);
return v___x_2629_;
}
else
{
lean_object* v_head_2630_; lean_object* v_tail_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2643_; 
v_head_2630_ = lean_ctor_get(v_a_2627_, 0);
v_tail_2631_ = lean_ctor_get(v_a_2627_, 1);
v_isSharedCheck_2643_ = !lean_is_exclusive(v_a_2627_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2633_ = v_a_2627_;
v_isShared_2634_ = v_isSharedCheck_2643_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_tail_2631_);
lean_inc(v_head_2630_);
lean_dec(v_a_2627_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2643_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v_startPh_2635_; lean_object* v_startPh_2636_; uint8_t v___x_2637_; 
v_startPh_2635_ = lean_ctor_get(v_head_2630_, 0);
v_startPh_2636_ = lean_ctor_get(v_blk_2626_, 0);
v___x_2637_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_startPh_2635_, v_startPh_2636_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2639_; 
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 1, v_a_2628_);
v___x_2639_ = v___x_2633_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_head_2630_);
lean_ctor_set(v_reuseFailAlloc_2641_, 1, v_a_2628_);
v___x_2639_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
v_a_2627_ = v_tail_2631_;
v_a_2628_ = v___x_2639_;
goto _start;
}
}
else
{
lean_del_object(v___x_2633_);
lean_dec(v_head_2630_);
v_a_2627_ = v_tail_2631_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_maskNested_spec__0___boxed(lean_object* v_blk_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_maskNested_spec__0(v_blk_2644_, v_a_2645_, v_a_2646_);
lean_dec_ref(v_blk_2644_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_maskNested_spec__1(lean_object* v_x_2648_, lean_object* v_x_2649_){
_start:
{
if (lean_obj_tag(v_x_2649_) == 0)
{
return v_x_2648_;
}
else
{
lean_object* v_snd_2650_; lean_object* v_snd_2651_; lean_object* v_head_2652_; lean_object* v_tail_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2719_; 
v_snd_2650_ = lean_ctor_get(v_x_2648_, 1);
lean_inc(v_snd_2650_);
v_snd_2651_ = lean_ctor_get(v_snd_2650_, 1);
lean_inc(v_snd_2651_);
v_head_2652_ = lean_ctor_get(v_x_2649_, 0);
v_tail_2653_ = lean_ctor_get(v_x_2649_, 1);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_x_2649_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2655_ = v_x_2649_;
v_isShared_2656_ = v_isSharedCheck_2719_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_tail_2653_);
lean_inc(v_head_2652_);
lean_dec(v_x_2649_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2719_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v_fst_2657_; lean_object* v_fst_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2717_; 
v_fst_2657_ = lean_ctor_get(v_x_2648_, 0);
v_fst_2658_ = lean_ctor_get(v_snd_2650_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v_snd_2650_);
if (v_isSharedCheck_2717_ == 0)
{
lean_object* v_unused_2718_; 
v_unused_2718_ = lean_ctor_get(v_snd_2650_, 1);
lean_dec(v_unused_2718_);
v___x_2660_ = v_snd_2650_;
v_isShared_2661_ = v_isSharedCheck_2717_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_fst_2658_);
lean_dec(v_snd_2650_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2717_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v_fst_2662_; lean_object* v_snd_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2716_; 
v_fst_2662_ = lean_ctor_get(v_snd_2651_, 0);
v_snd_2663_ = lean_ctor_get(v_snd_2651_, 1);
v_isSharedCheck_2716_ = !lean_is_exclusive(v_snd_2651_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2665_ = v_snd_2651_;
v_isShared_2666_ = v_isSharedCheck_2716_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_snd_2663_);
lean_inc(v_fst_2662_);
lean_dec(v_snd_2651_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2716_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v_startPh_2667_; lean_object* v_endPh_2668_; lean_object* v_endKey_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v_startPh_2667_ = lean_ctor_get(v_head_2652_, 0);
v_endPh_2668_ = lean_ctor_get(v_head_2652_, 1);
v_endKey_2669_ = lean_ctor_get(v_head_2652_, 2);
v___x_2670_ = lean_unsigned_to_nat(0u);
v___x_2671_ = lp_lean_x2dftml_LeanFtml_findFrom(v_startPh_2667_, v_fst_2657_, v___x_2670_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_del_object(v___x_2665_);
lean_dec(v_snd_2663_);
lean_dec(v_fst_2662_);
lean_del_object(v___x_2660_);
lean_dec(v_fst_2658_);
lean_del_object(v___x_2655_);
lean_dec(v_head_2652_);
v_x_2649_ = v_tail_2653_;
goto _start;
}
else
{
lean_object* v_val_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v_val_2673_ = lean_ctor_get(v___x_2671_, 0);
lean_inc(v_val_2673_);
lean_dec_ref_known(v___x_2671_, 1);
v___x_2674_ = l_List_lengthTR___redArg(v_startPh_2667_);
v___x_2675_ = lean_nat_add(v_val_2673_, v___x_2674_);
lean_dec(v___x_2674_);
v___x_2676_ = lp_lean_x2dftml_LeanFtml_findFrom(v_endPh_2668_, v_fst_2657_, v___x_2675_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_dec(v_val_2673_);
lean_del_object(v___x_2665_);
lean_dec(v_snd_2663_);
lean_dec(v_fst_2662_);
lean_del_object(v___x_2660_);
lean_dec(v_fst_2658_);
lean_del_object(v___x_2655_);
lean_dec(v_head_2652_);
v_x_2649_ = v_tail_2653_;
goto _start;
}
else
{
lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2713_; 
lean_inc(v_fst_2657_);
v_isSharedCheck_2713_ = !lean_is_exclusive(v_x_2648_);
if (v_isSharedCheck_2713_ == 0)
{
lean_object* v_unused_2714_; lean_object* v_unused_2715_; 
v_unused_2714_ = lean_ctor_get(v_x_2648_, 1);
lean_dec(v_unused_2714_);
v_unused_2715_ = lean_ctor_get(v_x_2648_, 0);
lean_dec(v_unused_2715_);
v___x_2679_ = v_x_2648_;
v_isShared_2680_ = v_isSharedCheck_2713_;
goto v_resetjp_2678_;
}
else
{
lean_dec(v_x_2648_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2713_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v_val_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v_span_2687_; lean_object* v_ph_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2694_; 
v_val_2681_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_val_2681_);
lean_dec_ref_known(v___x_2676_, 1);
v___x_2682_ = l_List_lengthTR___redArg(v_endPh_2668_);
v___x_2683_ = lean_nat_add(v_val_2681_, v___x_2682_);
lean_dec(v___x_2682_);
lean_dec(v_val_2681_);
v___x_2684_ = lean_nat_sub(v___x_2683_, v_val_2673_);
lean_inc(v_val_2673_);
v___x_2685_ = l_List_drop___redArg(v_val_2673_, v_fst_2657_);
v___x_2686_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_2685_);
v_span_2687_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_2685_, v___x_2685_, v___x_2684_, v___x_2686_);
lean_dec(v___x_2685_);
lean_inc(v_snd_2663_);
v_ph_2688_ = lp_lean_x2dftml_LeanFtml_explPh(v_snd_2663_);
lean_inc(v_fst_2657_);
v___x_2689_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_fst_2657_, v_fst_2657_, v_val_2673_, v___x_2686_);
lean_inc(v_ph_2688_);
v___x_2690_ = l_List_appendTR___redArg(v___x_2689_, v_ph_2688_);
v___x_2691_ = l_List_drop___redArg(v___x_2683_, v_fst_2657_);
lean_dec(v_fst_2657_);
v___x_2692_ = l_List_appendTR___redArg(v___x_2690_, v___x_2691_);
lean_inc(v_endKey_2669_);
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 1, v_endKey_2669_);
lean_ctor_set(v___x_2665_, 0, v_span_2687_);
v___x_2694_ = v___x_2665_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_span_2687_);
lean_ctor_set(v_reuseFailAlloc_2712_, 1, v_endKey_2669_);
v___x_2694_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
lean_object* v___x_2696_; 
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v___x_2694_);
lean_ctor_set(v___x_2660_, 0, v_ph_2688_);
v___x_2696_ = v___x_2660_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_ph_2688_);
lean_ctor_set(v_reuseFailAlloc_2711_, 1, v___x_2694_);
v___x_2696_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2697_ = lean_box(0);
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 1, v___x_2697_);
lean_ctor_set(v___x_2655_, 0, v___x_2696_);
v___x_2699_ = v___x_2655_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2696_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2705_; 
v___x_2700_ = l_List_appendTR___redArg(v_fst_2658_, v___x_2699_);
v___x_2701_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_maskNested_spec__0(v_head_2652_, v_fst_2662_, v___x_2697_);
lean_dec(v_head_2652_);
v___x_2702_ = lean_unsigned_to_nat(1u);
v___x_2703_ = lean_nat_add(v_snd_2663_, v___x_2702_);
lean_dec(v_snd_2663_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 1, v___x_2703_);
lean_ctor_set(v___x_2679_, 0, v___x_2701_);
v___x_2705_ = v___x_2679_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2701_);
lean_ctor_set(v_reuseFailAlloc_2709_, 1, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2700_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2692_);
lean_ctor_set(v___x_2707_, 1, v___x_2706_);
v_x_2648_ = v___x_2707_;
v_x_2649_ = v_tail_2653_;
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
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskNested(lean_object* v_body_2720_, lean_object* v_blocks_2721_){
_start:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v_r_2727_; lean_object* v_snd_2728_; lean_object* v_snd_2729_; lean_object* v_fst_2730_; lean_object* v_fst_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2747_; 
v___x_2722_ = lean_box(0);
v___x_2723_ = lean_unsigned_to_nat(0u);
lean_inc(v_blocks_2721_);
v___x_2724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2724_, 0, v_blocks_2721_);
lean_ctor_set(v___x_2724_, 1, v___x_2723_);
v___x_2725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2722_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2726_, 0, v_body_2720_);
lean_ctor_set(v___x_2726_, 1, v___x_2725_);
v_r_2727_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_maskNested_spec__1(v___x_2726_, v_blocks_2721_);
v_snd_2728_ = lean_ctor_get(v_r_2727_, 1);
lean_inc(v_snd_2728_);
v_snd_2729_ = lean_ctor_get(v_snd_2728_, 1);
lean_inc(v_snd_2729_);
v_fst_2730_ = lean_ctor_get(v_r_2727_, 0);
lean_inc(v_fst_2730_);
lean_dec_ref(v_r_2727_);
v_fst_2731_ = lean_ctor_get(v_snd_2728_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v_snd_2728_);
if (v_isSharedCheck_2747_ == 0)
{
lean_object* v_unused_2748_; 
v_unused_2748_ = lean_ctor_get(v_snd_2728_, 1);
lean_dec(v_unused_2748_);
v___x_2733_ = v_snd_2728_;
v_isShared_2734_ = v_isSharedCheck_2747_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_fst_2731_);
lean_dec(v_snd_2728_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2747_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v_fst_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2745_; 
v_fst_2735_ = lean_ctor_get(v_snd_2729_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v_snd_2729_);
if (v_isSharedCheck_2745_ == 0)
{
lean_object* v_unused_2746_; 
v_unused_2746_ = lean_ctor_get(v_snd_2729_, 1);
lean_dec(v_unused_2746_);
v___x_2737_ = v_snd_2729_;
v_isShared_2738_ = v_isSharedCheck_2745_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_fst_2735_);
lean_dec(v_snd_2729_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2745_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2740_; 
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 1, v_fst_2735_);
lean_ctor_set(v___x_2737_, 0, v_fst_2731_);
v___x_2740_ = v___x_2737_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_fst_2731_);
lean_ctor_set(v_reuseFailAlloc_2744_, 1, v_fst_2735_);
v___x_2740_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
lean_object* v___x_2742_; 
if (v_isShared_2734_ == 0)
{
lean_ctor_set(v___x_2733_, 1, v___x_2740_);
lean_ctor_set(v___x_2733_, 0, v_fst_2730_);
v___x_2742_ = v___x_2733_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_fst_2730_);
lean_ctor_set(v_reuseFailAlloc_2743_, 1, v___x_2740_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = lean_unsigned_to_nat(0u);
v___x_2750_ = lean_nat_to_int(v___x_2749_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0(lean_object* v_toks_2755_, lean_object* v_x_2756_, lean_object* v_x_2757_){
_start:
{
if (lean_obj_tag(v_x_2757_) == 0)
{
return v_x_2756_;
}
else
{
lean_object* v_head_2758_; lean_object* v_snd_2759_; lean_object* v_tail_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2843_; 
v_head_2758_ = lean_ctor_get(v_x_2757_, 0);
lean_inc(v_head_2758_);
v_snd_2759_ = lean_ctor_get(v_head_2758_, 1);
lean_inc(v_snd_2759_);
v_tail_2760_ = lean_ctor_get(v_x_2757_, 1);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_x_2757_);
if (v_isSharedCheck_2843_ == 0)
{
lean_object* v_unused_2844_; 
v_unused_2844_ = lean_ctor_get(v_x_2757_, 0);
lean_dec(v_unused_2844_);
v___x_2762_ = v_x_2757_;
v_isShared_2763_ = v_isSharedCheck_2843_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_tail_2760_);
lean_dec(v_x_2757_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2843_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v_fst_2764_; lean_object* v_snd_2765_; lean_object* v_fst_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2841_; 
v_fst_2764_ = lean_ctor_get(v_x_2756_, 0);
v_snd_2765_ = lean_ctor_get(v_x_2756_, 1);
v_fst_2766_ = lean_ctor_get(v_head_2758_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v_head_2758_);
if (v_isSharedCheck_2841_ == 0)
{
lean_object* v_unused_2842_; 
v_unused_2842_ = lean_ctor_get(v_head_2758_, 1);
lean_dec(v_unused_2842_);
v___x_2768_ = v_head_2758_;
v_isShared_2769_ = v_isSharedCheck_2841_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_fst_2766_);
lean_dec(v_head_2758_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2841_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v_fst_2770_; lean_object* v_snd_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2840_; 
v_fst_2770_ = lean_ctor_get(v_snd_2759_, 0);
v_snd_2771_ = lean_ctor_get(v_snd_2759_, 1);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_snd_2759_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2773_ = v_snd_2759_;
v_isShared_2774_ = v_isSharedCheck_2840_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_snd_2771_);
lean_inc(v_fst_2770_);
lean_dec(v_snd_2759_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2840_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2801_; 
lean_inc(v_fst_2770_);
v___x_2801_ = l_List_get_x3fInternal___redArg(v_toks_2755_, v_fst_2770_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_del_object(v___x_2773_);
lean_dec(v_snd_2771_);
lean_dec(v_fst_2770_);
lean_del_object(v___x_2768_);
lean_dec(v_fst_2766_);
lean_del_object(v___x_2762_);
v_x_2757_ = v_tail_2760_;
goto _start;
}
else
{
lean_object* v_val_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2839_; 
v_val_2803_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2805_ = v___x_2801_;
v_isShared_2806_ = v_isSharedCheck_2839_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_val_2803_);
lean_dec(v___x_2801_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2839_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v_rule_2807_; lean_object* v___x_2808_; uint8_t v___x_2809_; 
v_rule_2807_ = lean_ctor_get(v_val_2803_, 0);
v___x_2808_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_2809_ = lean_string_dec_eq(v_rule_2807_, v___x_2808_);
if (v___x_2809_ == 0)
{
lean_del_object(v___x_2805_);
lean_dec(v_val_2803_);
lean_del_object(v___x_2773_);
lean_dec(v_snd_2771_);
lean_dec(v_fst_2770_);
lean_del_object(v___x_2768_);
lean_dec(v_fst_2766_);
lean_del_object(v___x_2762_);
v_x_2757_ = v_tail_2760_;
goto _start;
}
else
{
lean_object* v___x_2811_; lean_object* v___x_2812_; uint8_t v_lvl0_2813_; 
v___x_2811_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_closeListLevel___closed__3));
v___x_2812_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__0, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__0_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__0);
v_lvl0_2813_ = lp_lean_x2dftml_LeanFtml_optIntEq(v_val_2803_, v___x_2811_, v___x_2812_);
if (v_lvl0_2813_ == 0)
{
lean_del_object(v___x_2805_);
goto v___jp_2814_;
}
else
{
lean_object* v___x_2835_; uint8_t v___x_2836_; 
v___x_2835_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__3));
v___x_2836_ = lp_lean_x2dftml_LeanFtml_tokTypeIs(v_val_2803_, v___x_2835_);
if (v___x_2836_ == 0)
{
lean_object* v___x_2837_; uint8_t v___x_2838_; 
v___x_2837_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__4));
v___x_2838_ = lp_lean_x2dftml_LeanFtml_tokTypeIs(v_val_2803_, v___x_2837_);
if (v___x_2838_ == 0)
{
lean_del_object(v___x_2805_);
goto v___jp_2814_;
}
else
{
goto v___jp_2821_;
}
}
else
{
goto v___jp_2821_;
}
}
v___jp_2814_:
{
if (v_lvl0_2813_ == 0)
{
lean_dec(v_val_2803_);
lean_del_object(v___x_2773_);
lean_dec(v_snd_2771_);
lean_dec(v_fst_2770_);
lean_del_object(v___x_2768_);
lean_dec(v_fst_2766_);
lean_del_object(v___x_2762_);
v_x_2757_ = v_tail_2760_;
goto _start;
}
else
{
lean_object* v___x_2816_; uint8_t v___x_2817_; 
v___x_2816_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__1));
v___x_2817_ = lp_lean_x2dftml_LeanFtml_tokTypeIs(v_val_2803_, v___x_2816_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2818_; uint8_t v___x_2819_; 
v___x_2818_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___closed__2));
v___x_2819_ = lp_lean_x2dftml_LeanFtml_tokTypeIs(v_val_2803_, v___x_2818_);
lean_dec(v_val_2803_);
if (v___x_2819_ == 0)
{
lean_del_object(v___x_2773_);
lean_dec(v_snd_2771_);
lean_dec(v_fst_2770_);
lean_del_object(v___x_2768_);
lean_dec(v_fst_2766_);
lean_del_object(v___x_2762_);
v_x_2757_ = v_tail_2760_;
goto _start;
}
else
{
goto v___jp_2775_;
}
}
else
{
lean_dec(v_val_2803_);
goto v___jp_2775_;
}
}
}
v___jp_2821_:
{
if (lean_obj_tag(v_snd_2765_) == 0)
{
lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2832_; 
lean_inc(v_fst_2764_);
lean_dec(v_val_2803_);
lean_del_object(v___x_2773_);
lean_dec(v_snd_2771_);
lean_dec(v_fst_2770_);
lean_del_object(v___x_2768_);
lean_del_object(v___x_2762_);
v_isSharedCheck_2832_ = !lean_is_exclusive(v_x_2756_);
if (v_isSharedCheck_2832_ == 0)
{
lean_object* v_unused_2833_; lean_object* v_unused_2834_; 
v_unused_2833_ = lean_ctor_get(v_x_2756_, 1);
lean_dec(v_unused_2833_);
v_unused_2834_ = lean_ctor_get(v_x_2756_, 0);
lean_dec(v_unused_2834_);
v___x_2823_ = v_x_2756_;
v_isShared_2824_ = v_isSharedCheck_2832_;
goto v_resetjp_2822_;
}
else
{
lean_dec(v_x_2756_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2832_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v_fst_2766_);
v___x_2826_ = v___x_2805_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_fst_2766_);
v___x_2826_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
lean_object* v___x_2828_; 
if (v_isShared_2824_ == 0)
{
lean_ctor_set(v___x_2823_, 1, v___x_2826_);
v___x_2828_ = v___x_2823_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_fst_2764_);
lean_ctor_set(v_reuseFailAlloc_2830_, 1, v___x_2826_);
v___x_2828_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
v_x_2756_ = v___x_2828_;
v_x_2757_ = v_tail_2760_;
goto _start;
}
}
}
}
else
{
lean_del_object(v___x_2805_);
goto v___jp_2814_;
}
}
}
}
}
v___jp_2775_:
{
if (lean_obj_tag(v_snd_2765_) == 0)
{
lean_del_object(v___x_2773_);
lean_dec(v_snd_2771_);
lean_dec(v_fst_2770_);
lean_del_object(v___x_2768_);
lean_dec(v_fst_2766_);
lean_del_object(v___x_2762_);
v_x_2757_ = v_tail_2760_;
goto _start;
}
else
{
lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2798_; 
lean_inc_ref(v_snd_2765_);
lean_inc(v_fst_2764_);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_x_2756_);
if (v_isSharedCheck_2798_ == 0)
{
lean_object* v_unused_2799_; lean_object* v_unused_2800_; 
v_unused_2799_ = lean_ctor_get(v_x_2756_, 1);
lean_dec(v_unused_2799_);
v_unused_2800_ = lean_ctor_get(v_x_2756_, 0);
lean_dec(v_unused_2800_);
v___x_2778_ = v_x_2756_;
v_isShared_2779_ = v_isSharedCheck_2798_;
goto v_resetjp_2777_;
}
else
{
lean_dec(v_x_2756_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2798_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v_val_2780_; lean_object* v___x_2781_; lean_object* v___x_2783_; 
v_val_2780_ = lean_ctor_get(v_snd_2765_, 0);
lean_inc(v_val_2780_);
lean_dec_ref_known(v_snd_2765_, 1);
v___x_2781_ = lean_nat_add(v_fst_2766_, v_snd_2771_);
lean_dec(v_snd_2771_);
lean_dec(v_fst_2766_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 1, v_fst_2770_);
lean_ctor_set(v___x_2773_, 0, v___x_2781_);
v___x_2783_ = v___x_2773_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v___x_2781_);
lean_ctor_set(v_reuseFailAlloc_2797_, 1, v_fst_2770_);
v___x_2783_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
lean_object* v___x_2785_; 
if (v_isShared_2769_ == 0)
{
lean_ctor_set(v___x_2768_, 1, v___x_2783_);
lean_ctor_set(v___x_2768_, 0, v_val_2780_);
v___x_2785_ = v___x_2768_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_val_2780_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v___x_2783_);
v___x_2785_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
lean_object* v___x_2786_; lean_object* v___x_2788_; 
v___x_2786_ = lean_box(0);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 1, v___x_2786_);
lean_ctor_set(v___x_2762_, 0, v___x_2785_);
v___x_2788_ = v___x_2762_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v___x_2785_);
lean_ctor_set(v_reuseFailAlloc_2795_, 1, v___x_2786_);
v___x_2788_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2792_; 
v___x_2789_ = l_List_appendTR___redArg(v_fst_2764_, v___x_2788_);
v___x_2790_ = lean_box(0);
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 1, v___x_2790_);
lean_ctor_set(v___x_2778_, 0, v___x_2789_);
v___x_2792_ = v___x_2778_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v___x_2789_);
lean_ctor_set(v_reuseFailAlloc_2794_, 1, v___x_2790_);
v___x_2792_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
v_x_2756_ = v___x_2792_;
v_x_2757_ = v_tail_2760_;
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
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0___boxed(lean_object* v_toks_2845_, lean_object* v_x_2846_, lean_object* v_x_2847_){
_start:
{
lean_object* v_res_2848_; 
v_res_2848_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0(v_toks_2845_, v_x_2846_, v_x_2847_);
lean_dec(v_toks_2845_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeSpans(lean_object* v_body_2852_, lean_object* v_toks_2853_){
_start:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v_r_2856_; lean_object* v_fst_2857_; 
v___x_2854_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_nativeSpans___closed__0));
v___x_2855_ = lp_lean_x2dftml_LeanFtml_allPh(v_body_2852_);
v_r_2856_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_nativeSpans_spec__0(v_toks_2853_, v___x_2854_, v___x_2855_);
v_fst_2857_ = lean_ctor_get(v_r_2856_, 0);
lean_inc(v_fst_2857_);
lean_dec_ref(v_r_2856_);
return v_fst_2857_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nativeSpans___boxed(lean_object* v_body_2858_, lean_object* v_toks_2859_){
_start:
{
lean_object* v_res_2860_; 
v_res_2860_ = lp_lean_x2dftml_LeanFtml_nativeSpans(v_body_2858_, v_toks_2859_);
lean_dec(v_toks_2859_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskNative_go(lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_){
_start:
{
if (lean_obj_tag(v_a_2861_) == 0)
{
lean_object* v___x_2865_; 
lean_dec(v_a_2864_);
v___x_2865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2865_, 0, v_a_2862_);
lean_ctor_set(v___x_2865_, 1, v_a_2863_);
return v___x_2865_;
}
else
{
lean_object* v_head_2866_; lean_object* v_snd_2867_; lean_object* v_tail_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2919_; 
v_head_2866_ = lean_ctor_get(v_a_2861_, 0);
lean_inc(v_head_2866_);
v_snd_2867_ = lean_ctor_get(v_head_2866_, 1);
lean_inc(v_snd_2867_);
v_tail_2868_ = lean_ctor_get(v_a_2861_, 1);
v_isSharedCheck_2919_ = !lean_is_exclusive(v_a_2861_);
if (v_isSharedCheck_2919_ == 0)
{
lean_object* v_unused_2920_; 
v_unused_2920_ = lean_ctor_get(v_a_2861_, 0);
lean_dec(v_unused_2920_);
v___x_2870_ = v_a_2861_;
v_isShared_2871_ = v_isSharedCheck_2919_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_tail_2868_);
lean_dec(v_a_2861_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2919_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v_fst_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2917_; 
v_fst_2872_ = lean_ctor_get(v_head_2866_, 0);
v_isSharedCheck_2917_ = !lean_is_exclusive(v_head_2866_);
if (v_isSharedCheck_2917_ == 0)
{
lean_object* v_unused_2918_; 
v_unused_2918_ = lean_ctor_get(v_head_2866_, 1);
lean_dec(v_unused_2918_);
v___x_2874_ = v_head_2866_;
v_isShared_2875_ = v_isSharedCheck_2917_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_fst_2872_);
lean_dec(v_head_2866_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2917_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v_fst_2876_; lean_object* v_snd_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2916_; 
v_fst_2876_ = lean_ctor_get(v_snd_2867_, 0);
v_snd_2877_ = lean_ctor_get(v_snd_2867_, 1);
v_isSharedCheck_2916_ = !lean_is_exclusive(v_snd_2867_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2879_ = v_snd_2867_;
v_isShared_2880_ = v_isSharedCheck_2916_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_snd_2877_);
lean_inc(v_fst_2876_);
lean_dec(v_snd_2867_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2916_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v_rawSpan_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v_sPos_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v_ePos_2893_; lean_object* v_ph_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
v___x_2881_ = lean_nat_sub(v_fst_2876_, v_fst_2872_);
lean_inc_n(v_fst_2872_, 2);
v___x_2882_ = l_List_drop___redArg(v_fst_2872_, v_a_2862_);
v___x_2883_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_2882_);
v_rawSpan_2884_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_2882_, v___x_2882_, v___x_2881_, v___x_2883_);
lean_dec(v___x_2882_);
lean_inc_n(v_a_2862_, 2);
v___x_2885_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_2862_, v_a_2862_, v_fst_2872_, v___x_2883_);
v___x_2886_ = l_List_reverse___redArg(v___x_2885_);
lean_inc(v___x_2886_);
v___x_2887_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v___x_2886_, v___x_2886_, v___x_2883_);
lean_dec(v___x_2886_);
v___x_2888_ = l_List_lengthTR___redArg(v___x_2887_);
lean_dec(v___x_2887_);
v_sPos_2889_ = lean_nat_sub(v_fst_2872_, v___x_2888_);
lean_dec(v___x_2888_);
lean_dec(v_fst_2872_);
lean_inc(v_fst_2876_);
v___x_2890_ = l_List_drop___redArg(v_fst_2876_, v_a_2862_);
lean_inc(v___x_2890_);
v___x_2891_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v___x_2890_, v___x_2890_, v___x_2883_);
lean_dec(v___x_2890_);
v___x_2892_ = l_List_lengthTR___redArg(v___x_2891_);
lean_dec(v___x_2891_);
v_ePos_2893_ = lean_nat_add(v_fst_2876_, v___x_2892_);
lean_dec(v___x_2892_);
lean_dec(v_fst_2876_);
lean_inc(v_a_2864_);
v_ph_2894_ = lp_lean_x2dftml_LeanFtml_natPh(v_a_2864_);
v___x_2895_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_2862_, v_a_2862_, v_sPos_2889_, v___x_2883_);
v___x_2896_ = lean_box(0);
v___x_2897_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___x_2898_ = l_List_appendTR___redArg(v___x_2895_, v___x_2897_);
lean_inc(v_ph_2894_);
v___x_2899_ = l_List_appendTR___redArg(v___x_2898_, v_ph_2894_);
v___x_2900_ = l_List_appendTR___redArg(v___x_2899_, v___x_2897_);
v___x_2901_ = l_List_drop___redArg(v_ePos_2893_, v_a_2862_);
lean_dec(v_a_2862_);
v___x_2902_ = l_List_appendTR___redArg(v___x_2900_, v___x_2901_);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v_rawSpan_2884_);
v___x_2904_ = v___x_2879_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_rawSpan_2884_);
lean_ctor_set(v_reuseFailAlloc_2915_, 1, v_snd_2877_);
v___x_2904_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2906_; 
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 1, v___x_2904_);
lean_ctor_set(v___x_2874_, 0, v_ph_2894_);
v___x_2906_ = v___x_2874_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_ph_2894_);
lean_ctor_set(v_reuseFailAlloc_2914_, 1, v___x_2904_);
v___x_2906_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
lean_object* v___x_2908_; 
if (v_isShared_2871_ == 0)
{
lean_ctor_set(v___x_2870_, 1, v___x_2896_);
lean_ctor_set(v___x_2870_, 0, v___x_2906_);
v___x_2908_ = v___x_2870_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v___x_2906_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v___x_2896_);
v___x_2908_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2909_ = l_List_appendTR___redArg(v_a_2863_, v___x_2908_);
v___x_2910_ = lean_unsigned_to_nat(1u);
v___x_2911_ = lean_nat_add(v_a_2864_, v___x_2910_);
lean_dec(v_a_2864_);
v_a_2861_ = v_tail_2868_;
v_a_2862_ = v___x_2902_;
v_a_2863_ = v___x_2909_;
v_a_2864_ = v___x_2911_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskNative(lean_object* v_body_2921_, lean_object* v_toks_2922_){
_start:
{
lean_object* v_spans_2923_; uint8_t v___x_2924_; 
lean_inc(v_body_2921_);
v_spans_2923_ = lp_lean_x2dftml_LeanFtml_nativeSpans(v_body_2921_, v_toks_2922_);
v___x_2924_ = l_List_isEmpty___redArg(v_spans_2923_);
if (v___x_2924_ == 0)
{
lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2925_ = l_List_reverse___redArg(v_spans_2923_);
v___x_2926_ = lean_box(0);
v___x_2927_ = lean_unsigned_to_nat(0u);
v___x_2928_ = lp_lean_x2dftml_LeanFtml_maskNative_go(v___x_2925_, v_body_2921_, v___x_2926_, v___x_2927_);
return v___x_2928_;
}
else
{
lean_object* v___x_2929_; lean_object* v___x_2930_; 
lean_dec(v_spans_2923_);
v___x_2929_ = lean_box(0);
v___x_2930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2930_, 0, v_body_2921_);
lean_ctor_set(v___x_2930_, 1, v___x_2929_);
return v___x_2930_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_maskNative___boxed(lean_object* v_body_2931_, lean_object* v_toks_2932_){
_start:
{
lean_object* v_res_2933_; 
v_res_2933_ = lp_lean_x2dftml_LeanFtml_maskNative(v_body_2931_, v_toks_2932_);
lean_dec(v_toks_2932_);
return v_res_2933_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1(void){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__0));
v___x_2936_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2935_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_liOpenerAt(lean_object* v_s_2937_){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1, &lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1);
lean_inc(v_s_2937_);
v___x_2939_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2938_, v_s_2937_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v___x_2940_; 
lean_dec(v_s_2937_);
v___x_2940_ = lean_box(0);
return v___x_2940_;
}
else
{
lean_object* v_val_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_3000_; 
v_val_2941_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2943_ = v___x_2939_;
v_isShared_2944_ = v_isSharedCheck_3000_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_val_2941_);
lean_dec(v___x_2939_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_3000_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; 
v___x_2945_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9);
lean_inc(v_val_2941_);
v___x_2946_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2945_, v_val_2941_);
if (lean_obj_tag(v___x_2946_) == 0)
{
if (lean_obj_tag(v_val_2941_) == 0)
{
lean_object* v___x_2947_; 
lean_del_object(v___x_2943_);
lean_dec(v_s_2937_);
v___x_2947_ = lean_box(0);
return v___x_2947_;
}
else
{
lean_object* v_head_2948_; uint8_t v___x_2949_; 
v_head_2948_ = lean_ctor_get(v_val_2941_, 0);
v___x_2949_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_2948_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; 
lean_dec_ref_known(v_val_2941_, 2);
lean_del_object(v___x_2943_);
lean_dec(v_s_2937_);
v___x_2950_ = lean_box(0);
return v___x_2950_;
}
else
{
lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v_r3_2954_; 
v___x_2951_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc_ref(v_val_2941_);
v___x_2952_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_2941_, v_val_2941_, v___x_2951_);
v___x_2953_ = l_List_lengthTR___redArg(v___x_2952_);
lean_dec(v___x_2952_);
v_r3_2954_ = l_List_drop___redArg(v___x_2953_, v_val_2941_);
lean_dec_ref_known(v_val_2941_, 2);
if (lean_obj_tag(v_r3_2954_) == 0)
{
lean_object* v___x_2955_; 
lean_del_object(v___x_2943_);
lean_dec(v_s_2937_);
v___x_2955_ = lean_box(0);
return v___x_2955_;
}
else
{
lean_object* v_head_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; 
v_head_2956_ = lean_ctor_get(v_r3_2954_, 0);
v___x_2957_ = lean_unsigned_to_nat(93u);
v___x_2958_ = lean_nat_dec_eq(v_head_2956_, v___x_2957_);
if (v___x_2958_ == 0)
{
lean_object* v___x_2959_; lean_object* v_capLen_2960_; lean_object* v___x_2961_; 
lean_inc_ref(v_r3_2954_);
v___x_2959_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_blockOpenerAt_spec__1(v___x_2949_, v_head_2956_, v_r3_2954_, v_r3_2954_, v___x_2951_);
v_capLen_2960_ = l_List_lengthTR___redArg(v___x_2959_);
lean_dec(v___x_2959_);
lean_inc(v_capLen_2960_);
v___x_2961_ = l_List_drop___redArg(v_capLen_2960_, v_r3_2954_);
if (lean_obj_tag(v___x_2961_) == 1)
{
lean_object* v_head_2962_; lean_object* v_tail_2963_; uint8_t v___x_2964_; 
v_head_2962_ = lean_ctor_get(v___x_2961_, 0);
lean_inc(v_head_2962_);
v_tail_2963_ = lean_ctor_get(v___x_2961_, 1);
lean_inc(v_tail_2963_);
lean_dec_ref_known(v___x_2961_, 2);
v___x_2964_ = lean_nat_dec_eq(v_head_2962_, v___x_2957_);
lean_dec(v_head_2962_);
if (v___x_2964_ == 0)
{
lean_object* v___x_2965_; 
lean_dec(v_tail_2963_);
lean_dec(v_capLen_2960_);
lean_dec_ref_known(v_r3_2954_, 2);
lean_del_object(v___x_2943_);
lean_dec(v_s_2937_);
v___x_2965_ = lean_box(0);
return v___x_2965_;
}
else
{
if (lean_obj_tag(v_tail_2963_) == 1)
{
lean_object* v_head_2966_; lean_object* v_tail_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2983_; 
v_head_2966_ = lean_ctor_get(v_tail_2963_, 0);
v_tail_2967_ = lean_ctor_get(v_tail_2963_, 1);
v_isSharedCheck_2983_ = !lean_is_exclusive(v_tail_2963_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2969_ = v_tail_2963_;
v_isShared_2970_ = v_isSharedCheck_2983_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_tail_2967_);
lean_inc(v_head_2966_);
lean_dec(v_tail_2963_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2983_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
uint8_t v___x_2971_; 
v___x_2971_ = lean_nat_dec_eq(v_head_2966_, v___x_2957_);
lean_dec(v_head_2966_);
if (v___x_2971_ == 0)
{
lean_object* v___x_2972_; 
lean_del_object(v___x_2969_);
lean_dec(v_tail_2967_);
lean_dec(v_capLen_2960_);
lean_dec_ref_known(v_r3_2954_, 2);
lean_del_object(v___x_2943_);
lean_dec(v_s_2937_);
v___x_2972_ = lean_box(0);
return v___x_2972_;
}
else
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2978_; 
lean_inc_ref(v_r3_2954_);
v___x_2973_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r3_2954_, v_r3_2954_, v_capLen_2960_, v___x_2951_);
lean_dec_ref_known(v_r3_2954_, 2);
v___x_2974_ = l_List_lengthTR___redArg(v_s_2937_);
lean_dec(v_s_2937_);
v___x_2975_ = l_List_lengthTR___redArg(v_tail_2967_);
lean_dec(v_tail_2967_);
v___x_2976_ = lean_nat_sub(v___x_2974_, v___x_2975_);
lean_dec(v___x_2975_);
lean_dec(v___x_2974_);
if (v_isShared_2970_ == 0)
{
lean_ctor_set_tag(v___x_2969_, 0);
lean_ctor_set(v___x_2969_, 1, v___x_2976_);
lean_ctor_set(v___x_2969_, 0, v___x_2973_);
v___x_2978_ = v___x_2969_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2973_);
lean_ctor_set(v_reuseFailAlloc_2982_, 1, v___x_2976_);
v___x_2978_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
lean_object* v___x_2980_; 
if (v_isShared_2944_ == 0)
{
lean_ctor_set(v___x_2943_, 0, v___x_2978_);
v___x_2980_ = v___x_2943_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v___x_2978_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
return v___x_2980_;
}
}
}
}
}
else
{
lean_object* v___x_2984_; 
lean_dec(v_tail_2963_);
lean_dec(v_capLen_2960_);
lean_dec_ref_known(v_r3_2954_, 2);
lean_del_object(v___x_2943_);
lean_dec(v_s_2937_);
v___x_2984_ = lean_box(0);
return v___x_2984_;
}
}
}
else
{
lean_object* v___x_2985_; 
lean_dec(v___x_2961_);
lean_dec(v_capLen_2960_);
lean_dec_ref_known(v_r3_2954_, 2);
lean_del_object(v___x_2943_);
lean_dec(v_s_2937_);
v___x_2985_ = lean_box(0);
return v___x_2985_;
}
}
else
{
lean_object* v___x_2986_; 
lean_dec_ref_known(v_r3_2954_, 2);
lean_del_object(v___x_2943_);
lean_dec(v_s_2937_);
v___x_2986_ = lean_box(0);
return v___x_2986_;
}
}
}
}
}
else
{
lean_object* v_val_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2999_; 
lean_del_object(v___x_2943_);
lean_dec(v_val_2941_);
v_val_2987_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2989_ = v___x_2946_;
v_isShared_2990_ = v_isSharedCheck_2999_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_val_2987_);
lean_dec(v___x_2946_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2999_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2997_; 
v___x_2991_ = lean_box(0);
v___x_2992_ = l_List_lengthTR___redArg(v_s_2937_);
lean_dec(v_s_2937_);
v___x_2993_ = l_List_lengthTR___redArg(v_val_2987_);
lean_dec(v_val_2987_);
v___x_2994_ = lean_nat_sub(v___x_2992_, v___x_2993_);
lean_dec(v___x_2993_);
lean_dec(v___x_2992_);
v___x_2995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2995_, 0, v___x_2991_);
lean_ctor_set(v___x_2995_, 1, v___x_2994_);
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 0, v___x_2995_);
v___x_2997_ = v___x_2989_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v___x_2995_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt___lam__0(lean_object* v_snd_3001_, lean_object* v_val_3002_, lean_object* v___x_3003_, lean_object* v_ibody_3004_, lean_object* v_fst_3005_, lean_object* v_x_3006_){
_start:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
v___x_3007_ = lean_nat_add(v_snd_3001_, v_val_3002_);
v___x_3008_ = lean_nat_add(v___x_3007_, v___x_3003_);
lean_dec(v___x_3007_);
v___x_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3009_, 0, v_ibody_3004_);
lean_ctor_set(v___x_3009_, 1, v___x_3008_);
v___x_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3010_, 0, v_fst_3005_);
lean_ctor_set(v___x_3010_, 1, v___x_3009_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt___lam__0___boxed(lean_object* v_snd_3011_, lean_object* v_val_3012_, lean_object* v___x_3013_, lean_object* v_ibody_3014_, lean_object* v_fst_3015_, lean_object* v_x_3016_){
_start:
{
lean_object* v_res_3017_; 
v_res_3017_ = lp_lean_x2dftml_LeanFtml_liMatchAt___lam__0(v_snd_3011_, v_val_3012_, v___x_3013_, v_ibody_3014_, v_fst_3015_, v_x_3016_);
lean_dec(v_x_3016_);
lean_dec(v___x_3013_);
lean_dec(v_val_3012_);
lean_dec(v_snd_3011_);
return v_res_3017_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1(void){
_start:
{
lean_object* v___x_3019_; lean_object* v_closer_3020_; 
v___x_3019_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_liMatchAt___closed__0));
v_closer_3020_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3019_);
return v_closer_3020_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_liMatchAt___closed__2(void){
_start:
{
lean_object* v_closer_3021_; lean_object* v___x_3022_; 
v_closer_3021_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1);
v___x_3022_ = l_List_lengthTR___redArg(v_closer_3021_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_liMatchAt(lean_object* v_s_3026_){
_start:
{
lean_object* v___x_3027_; 
lean_inc(v_s_3026_);
v___x_3027_ = lp_lean_x2dftml_LeanFtml_liOpenerAt(v_s_3026_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v___x_3028_; 
lean_dec(v_s_3026_);
v___x_3028_ = lean_box(0);
return v___x_3028_;
}
else
{
lean_object* v_val_3029_; lean_object* v_fst_3030_; lean_object* v_snd_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3081_; 
v_val_3029_ = lean_ctor_get(v___x_3027_, 0);
lean_inc(v_val_3029_);
lean_dec_ref_known(v___x_3027_, 1);
v_fst_3030_ = lean_ctor_get(v_val_3029_, 0);
v_snd_3031_ = lean_ctor_get(v_val_3029_, 1);
v_isSharedCheck_3081_ = !lean_is_exclusive(v_val_3029_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3033_ = v_val_3029_;
v_isShared_3034_ = v_isSharedCheck_3081_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_snd_3031_);
lean_inc(v_fst_3030_);
lean_dec(v_val_3029_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3081_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v_rest_3035_; lean_object* v_closer_3036_; lean_object* v___x_3037_; 
lean_inc(v_snd_3031_);
v_rest_3035_ = l_List_drop___redArg(v_snd_3031_, v_s_3026_);
lean_dec(v_s_3026_);
v_closer_3036_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1);
lean_inc(v_rest_3035_);
v___x_3037_ = lp_lean_x2dftml_LeanFtml_findSubCI(v_closer_3036_, v_rest_3035_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v___x_3038_; 
lean_dec(v_rest_3035_);
lean_del_object(v___x_3033_);
lean_dec(v_snd_3031_);
lean_dec(v_fst_3030_);
v___x_3038_ = lean_box(0);
return v___x_3038_;
}
else
{
lean_object* v_val_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3080_; 
v_val_3039_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3041_ = v___x_3037_;
v_isShared_3042_ = v_isSharedCheck_3080_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_val_3039_);
lean_dec(v___x_3037_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3080_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3043_; lean_object* v_ibody_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v_after_3047_; 
v___x_3043_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_val_3039_);
lean_inc(v_rest_3035_);
v_ibody_3044_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_rest_3035_, v_rest_3035_, v_val_3039_, v___x_3043_);
v___x_3045_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_liMatchAt___closed__2, &lp_lean_x2dftml_LeanFtml_liMatchAt___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_liMatchAt___closed__2);
v___x_3046_ = lean_nat_add(v_val_3039_, v___x_3045_);
v_after_3047_ = l_List_drop___redArg(v___x_3046_, v_rest_3035_);
lean_dec(v_rest_3035_);
if (lean_obj_tag(v_after_3047_) == 1)
{
lean_object* v_head_3048_; lean_object* v___x_3049_; uint8_t v___x_3050_; 
v_head_3048_ = lean_ctor_get(v_after_3047_, 0);
v___x_3049_ = lean_unsigned_to_nat(93u);
v___x_3050_ = lean_nat_dec_eq(v_head_3048_, v___x_3049_);
if (v___x_3050_ == 0)
{
lean_object* v___x_3051_; lean_object* v___x_3053_; 
lean_del_object(v___x_3033_);
v___x_3051_ = lp_lean_x2dftml_LeanFtml_liMatchAt___lam__0(v_snd_3031_, v_val_3039_, v___x_3045_, v_ibody_3044_, v_fst_3030_, v_after_3047_);
lean_dec_ref_known(v_after_3047_, 2);
lean_dec(v_val_3039_);
lean_dec(v_snd_3031_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 0, v___x_3051_);
v___x_3053_ = v___x_3041_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
else
{
lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3073_; 
v_isSharedCheck_3073_ = !lean_is_exclusive(v_after_3047_);
if (v_isSharedCheck_3073_ == 0)
{
lean_object* v_unused_3074_; lean_object* v_unused_3075_; 
v_unused_3074_ = lean_ctor_get(v_after_3047_, 1);
lean_dec(v_unused_3074_);
v_unused_3075_ = lean_ctor_get(v_after_3047_, 0);
lean_dec(v_unused_3075_);
v___x_3056_ = v_after_3047_;
v_isShared_3057_ = v_isSharedCheck_3073_;
goto v_resetjp_3055_;
}
else
{
lean_dec(v_after_3047_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3073_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3065_; 
v___x_3058_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_liMatchAt___closed__3));
v___x_3059_ = l_List_appendTR___redArg(v_ibody_3044_, v___x_3058_);
v___x_3060_ = lean_nat_add(v_snd_3031_, v_val_3039_);
lean_dec(v_val_3039_);
lean_dec(v_snd_3031_);
v___x_3061_ = lean_nat_add(v___x_3060_, v___x_3045_);
lean_dec(v___x_3060_);
v___x_3062_ = lean_unsigned_to_nat(1u);
v___x_3063_ = lean_nat_add(v___x_3061_, v___x_3062_);
lean_dec(v___x_3061_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 1, v___x_3063_);
lean_ctor_set(v___x_3033_, 0, v___x_3059_);
v___x_3065_ = v___x_3033_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v___x_3059_);
lean_ctor_set(v_reuseFailAlloc_3072_, 1, v___x_3063_);
v___x_3065_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
lean_object* v___x_3067_; 
if (v_isShared_3057_ == 0)
{
lean_ctor_set_tag(v___x_3056_, 0);
lean_ctor_set(v___x_3056_, 1, v___x_3065_);
lean_ctor_set(v___x_3056_, 0, v_fst_3030_);
v___x_3067_ = v___x_3056_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_fst_3030_);
lean_ctor_set(v_reuseFailAlloc_3071_, 1, v___x_3065_);
v___x_3067_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
lean_object* v___x_3069_; 
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 0, v___x_3067_);
v___x_3069_ = v___x_3041_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v___x_3067_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
}
}
}
else
{
lean_object* v___x_3076_; lean_object* v___x_3078_; 
lean_del_object(v___x_3033_);
v___x_3076_ = lp_lean_x2dftml_LeanFtml_liMatchAt___lam__0(v_snd_3031_, v_val_3039_, v___x_3045_, v_ibody_3044_, v_fst_3030_, v_after_3047_);
lean_dec(v_after_3047_);
lean_dec(v_val_3039_);
lean_dec(v_snd_3031_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 0, v___x_3076_);
v___x_3078_ = v___x_3041_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v___x_3076_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanLi_go(lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_){
_start:
{
if (lean_obj_tag(v_a_3082_) == 0)
{
lean_object* v___x_3085_; 
lean_dec(v_a_3084_);
lean_dec(v_a_3083_);
v___x_3085_ = lean_box(0);
return v___x_3085_;
}
else
{
lean_object* v_tail_3086_; lean_object* v_zero_3087_; uint8_t v_isZero_3088_; 
v_tail_3086_ = lean_ctor_get(v_a_3082_, 1);
v_zero_3087_ = lean_unsigned_to_nat(0u);
v_isZero_3088_ = lean_nat_dec_eq(v_a_3084_, v_zero_3087_);
if (v_isZero_3088_ == 1)
{
lean_object* v___x_3089_; 
lean_dec_ref_known(v_a_3082_, 2);
lean_dec(v_a_3084_);
lean_dec(v_a_3083_);
v___x_3089_ = lean_box(0);
return v___x_3089_;
}
else
{
lean_object* v_one_3090_; lean_object* v_n_3091_; lean_object* v___x_3092_; 
v_one_3090_ = lean_unsigned_to_nat(1u);
v_n_3091_ = lean_nat_sub(v_a_3084_, v_one_3090_);
lean_dec(v_a_3084_);
lean_inc_ref(v_a_3082_);
v___x_3092_ = lp_lean_x2dftml_LeanFtml_liMatchAt(v_a_3082_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_object* v___x_3093_; 
lean_inc(v_tail_3086_);
lean_dec_ref_known(v_a_3082_, 2);
v___x_3093_ = lean_nat_add(v_a_3083_, v_one_3090_);
lean_dec(v_a_3083_);
v_a_3082_ = v_tail_3086_;
v_a_3083_ = v___x_3093_;
v_a_3084_ = v_n_3091_;
goto _start;
}
else
{
lean_object* v_val_3095_; lean_object* v_snd_3096_; lean_object* v_snd_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3116_; 
v_val_3095_ = lean_ctor_get(v___x_3092_, 0);
lean_inc(v_val_3095_);
lean_dec_ref_known(v___x_3092_, 1);
v_snd_3096_ = lean_ctor_get(v_val_3095_, 1);
lean_inc(v_snd_3096_);
v_snd_3097_ = lean_ctor_get(v_snd_3096_, 1);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_snd_3096_);
if (v_isSharedCheck_3116_ == 0)
{
lean_object* v_unused_3117_; 
v_unused_3117_ = lean_ctor_get(v_snd_3096_, 0);
lean_dec(v_unused_3117_);
v___x_3099_ = v_snd_3096_;
v_isShared_3100_ = v_isSharedCheck_3116_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_snd_3097_);
lean_dec(v_snd_3096_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3116_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
lean_inc(v_a_3083_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 1, v_val_3095_);
lean_ctor_set(v___x_3099_, 0, v_a_3083_);
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_a_3083_);
lean_ctor_set(v_reuseFailAlloc_3115_, 1, v_val_3095_);
v___x_3102_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
lean_object* v___x_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3112_; 
lean_inc(v_snd_3097_);
v___x_3103_ = l_List_drop___redArg(v_snd_3097_, v_a_3082_);
v_isSharedCheck_3112_ = !lean_is_exclusive(v_a_3082_);
if (v_isSharedCheck_3112_ == 0)
{
lean_object* v_unused_3113_; lean_object* v_unused_3114_; 
v_unused_3113_ = lean_ctor_get(v_a_3082_, 1);
lean_dec(v_unused_3113_);
v_unused_3114_ = lean_ctor_get(v_a_3082_, 0);
lean_dec(v_unused_3114_);
v___x_3105_ = v_a_3082_;
v_isShared_3106_ = v_isSharedCheck_3112_;
goto v_resetjp_3104_;
}
else
{
lean_dec(v_a_3082_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3112_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3110_; 
v___x_3107_ = lean_nat_add(v_a_3083_, v_snd_3097_);
lean_dec(v_snd_3097_);
lean_dec(v_a_3083_);
v___x_3108_ = lp_lean_x2dftml_LeanFtml_scanLi_go(v___x_3103_, v___x_3107_, v_n_3091_);
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 1, v___x_3108_);
lean_ctor_set(v___x_3105_, 0, v___x_3102_);
v___x_3110_ = v___x_3105_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3102_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v___x_3108_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanLi(lean_object* v_body_3118_){
_start:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3119_ = lean_unsigned_to_nat(0u);
v___x_3120_ = l_List_lengthTR___redArg(v_body_3118_);
v___x_3121_ = lean_unsigned_to_nat(1u);
v___x_3122_ = lean_nat_add(v___x_3120_, v___x_3121_);
lean_dec(v___x_3120_);
v___x_3123_ = lp_lean_x2dftml_LeanFtml_scanLi_go(v_body_3118_, v___x_3119_, v___x_3122_);
return v___x_3123_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_restoreMasked_spec__0(lean_object* v_x_3124_, lean_object* v_x_3125_){
_start:
{
if (lean_obj_tag(v_x_3125_) == 0)
{
return v_x_3124_;
}
else
{
lean_object* v_head_3126_; lean_object* v_snd_3127_; lean_object* v_tail_3128_; lean_object* v_fst_3129_; lean_object* v_fst_3130_; lean_object* v___x_3131_; 
v_head_3126_ = lean_ctor_get(v_x_3125_, 0);
lean_inc(v_head_3126_);
v_snd_3127_ = lean_ctor_get(v_head_3126_, 1);
lean_inc(v_snd_3127_);
v_tail_3128_ = lean_ctor_get(v_x_3125_, 1);
lean_inc(v_tail_3128_);
lean_dec_ref_known(v_x_3125_, 2);
v_fst_3129_ = lean_ctor_get(v_head_3126_, 0);
lean_inc(v_fst_3129_);
lean_dec(v_head_3126_);
v_fst_3130_ = lean_ctor_get(v_snd_3127_, 0);
lean_inc(v_fst_3130_);
lean_dec(v_snd_3127_);
v___x_3131_ = lp_lean_x2dftml_LeanFtml_replaceAll(v_fst_3129_, v_fst_3130_, v_x_3124_);
lean_dec(v_fst_3129_);
v_x_3124_ = v___x_3131_;
v_x_3125_ = v_tail_3128_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_restoreMasked(lean_object* v_s_3133_, lean_object* v_nmap_3134_, lean_object* v_natmap_3135_){
_start:
{
lean_object* v_s1_3136_; lean_object* v___x_3137_; 
v_s1_3136_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_restoreMasked_spec__0(v_s_3133_, v_nmap_3134_);
v___x_3137_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_restoreMasked_spec__0(v_s1_3136_, v_natmap_3135_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wholeMask(lean_object* v_b_3138_, lean_object* v_pfx_3139_){
_start:
{
lean_object* v_core_3140_; lean_object* v___x_3141_; 
v_core_3140_ = lp_lean_x2dftml_LeanFtml_trimWsBoth(v_b_3138_);
lean_inc(v_core_3140_);
v___x_3141_ = lp_lean_x2dftml_LeanFtml_maskPhAt(v_core_3140_, v_pfx_3139_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v___x_3142_; 
lean_dec(v_core_3140_);
v___x_3142_ = lean_box(0);
return v___x_3142_;
}
else
{
lean_object* v_val_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3154_; 
v_val_3143_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3145_ = v___x_3141_;
v_isShared_3146_ = v_isSharedCheck_3154_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_val_3143_);
lean_dec(v___x_3141_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3154_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v_snd_3147_; lean_object* v___x_3148_; uint8_t v___x_3149_; 
v_snd_3147_ = lean_ctor_get(v_val_3143_, 1);
lean_inc(v_snd_3147_);
lean_dec(v_val_3143_);
v___x_3148_ = l_List_lengthTR___redArg(v_core_3140_);
v___x_3149_ = lean_nat_dec_eq(v_snd_3147_, v___x_3148_);
lean_dec(v___x_3148_);
lean_dec(v_snd_3147_);
if (v___x_3149_ == 0)
{
lean_object* v___x_3150_; 
lean_del_object(v___x_3145_);
lean_dec(v_core_3140_);
v___x_3150_ = lean_box(0);
return v___x_3150_;
}
else
{
lean_object* v___x_3152_; 
if (v_isShared_3146_ == 0)
{
lean_ctor_set(v___x_3145_, 0, v_core_3140_);
v___x_3152_ = v___x_3145_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_core_3140_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wholeMask___boxed(lean_object* v_b_3155_, lean_object* v_pfx_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = lp_lean_x2dftml_LeanFtml_wholeMask(v_b_3155_, v_pfx_3156_);
lean_dec(v_b_3155_);
return v_res_3157_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_lastMaskWithWsTail_spec__0(lean_object* v_x_3158_){
_start:
{
if (lean_obj_tag(v_x_3158_) == 0)
{
uint8_t v___x_3159_; 
v___x_3159_ = 1;
return v___x_3159_;
}
else
{
lean_object* v_head_3160_; lean_object* v_tail_3161_; uint8_t v___x_3162_; 
v_head_3160_ = lean_ctor_get(v_x_3158_, 0);
v_tail_3161_ = lean_ctor_get(v_x_3158_, 1);
v___x_3162_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_3160_);
if (v___x_3162_ == 0)
{
return v___x_3162_;
}
else
{
v_x_3158_ = v_tail_3161_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_lastMaskWithWsTail_spec__0___boxed(lean_object* v_x_3164_){
_start:
{
uint8_t v_res_3165_; lean_object* v_r_3166_; 
v_res_3165_ = lp_lean_x2dftml_List_all___at___00LeanFtml_lastMaskWithWsTail_spec__0(v_x_3164_);
lean_dec(v_x_3164_);
v_r_3166_ = lean_box(v_res_3165_);
return v_r_3166_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_lastMaskWithWsTail_spec__1(lean_object* v_b_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_){
_start:
{
if (lean_obj_tag(v_a_3168_) == 0)
{
lean_object* v___x_3170_; 
v___x_3170_ = l_List_reverse___redArg(v_a_3169_);
return v___x_3170_;
}
else
{
lean_object* v_head_3171_; lean_object* v_tail_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3187_; 
v_head_3171_ = lean_ctor_get(v_a_3168_, 0);
v_tail_3172_ = lean_ctor_get(v_a_3168_, 1);
v_isSharedCheck_3187_ = !lean_is_exclusive(v_a_3168_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3174_ = v_a_3168_;
v_isShared_3175_ = v_isSharedCheck_3187_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_tail_3172_);
lean_inc(v_head_3171_);
lean_dec(v_a_3168_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3187_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v_fst_3176_; lean_object* v_snd_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; uint8_t v___x_3181_; 
v_fst_3176_ = lean_ctor_get(v_head_3171_, 0);
v_snd_3177_ = lean_ctor_get(v_head_3171_, 1);
v___x_3178_ = l_List_lengthTR___redArg(v_snd_3177_);
v___x_3179_ = lean_nat_add(v_fst_3176_, v___x_3178_);
lean_dec(v___x_3178_);
v___x_3180_ = l_List_drop___redArg(v___x_3179_, v_b_3167_);
v___x_3181_ = lp_lean_x2dftml_List_all___at___00LeanFtml_lastMaskWithWsTail_spec__0(v___x_3180_);
lean_dec(v___x_3180_);
if (v___x_3181_ == 0)
{
lean_del_object(v___x_3174_);
lean_dec(v_head_3171_);
v_a_3168_ = v_tail_3172_;
goto _start;
}
else
{
lean_object* v___x_3184_; 
if (v_isShared_3175_ == 0)
{
lean_ctor_set(v___x_3174_, 1, v_a_3169_);
v___x_3184_ = v___x_3174_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v_head_3171_);
lean_ctor_set(v_reuseFailAlloc_3186_, 1, v_a_3169_);
v___x_3184_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
v_a_3168_ = v_tail_3172_;
v_a_3169_ = v___x_3184_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_lastMaskWithWsTail_spec__1___boxed(lean_object* v_b_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_lastMaskWithWsTail_spec__1(v_b_3188_, v_a_3189_, v_a_3190_);
lean_dec(v_b_3188_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastMaskWithWsTail(lean_object* v_b_3192_, lean_object* v_pfx_3193_){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v_cands_3196_; lean_object* v___x_3197_; 
lean_inc(v_b_3192_);
v___x_3194_ = lp_lean_x2dftml_LeanFtml_harvestMask(v_b_3192_, v_pfx_3193_);
v___x_3195_ = lean_box(0);
v_cands_3196_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_lastMaskWithWsTail_spec__1(v_b_3192_, v___x_3194_, v___x_3195_);
lean_dec(v_b_3192_);
v___x_3197_ = l_List_getLast_x3f___redArg(v_cands_3196_);
lean_dec(v_cands_3196_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(lean_object* v_snd_3198_, lean_object* v_x_3199_){
_start:
{
if (lean_obj_tag(v_x_3199_) == 0)
{
lean_object* v___x_3200_; 
v___x_3200_ = lean_box(0);
return v___x_3200_;
}
else
{
lean_object* v_head_3201_; lean_object* v_tail_3202_; lean_object* v_fst_3203_; uint8_t v___x_3204_; 
v_head_3201_ = lean_ctor_get(v_x_3199_, 0);
v_tail_3202_ = lean_ctor_get(v_x_3199_, 1);
v_fst_3203_ = lean_ctor_get(v_head_3201_, 0);
v___x_3204_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_3203_, v_snd_3198_);
if (v___x_3204_ == 0)
{
v_x_3199_ = v_tail_3202_;
goto _start;
}
else
{
lean_object* v___x_3206_; 
lean_inc(v_head_3201_);
v___x_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3206_, 0, v_head_3201_);
return v___x_3206_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0___boxed(lean_object* v_snd_3207_, lean_object* v_x_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(v_snd_3207_, v_x_3208_);
lean_dec(v_x_3208_);
lean_dec(v_snd_3207_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_nmapEntries_spec__1(lean_object* v_nmap_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_){
_start:
{
if (lean_obj_tag(v_a_3211_) == 0)
{
lean_object* v___x_3213_; 
v___x_3213_ = lean_array_to_list(v_a_3212_);
return v___x_3213_;
}
else
{
lean_object* v_head_3214_; lean_object* v_tail_3215_; lean_object* v_snd_3216_; lean_object* v___x_3217_; 
v_head_3214_ = lean_ctor_get(v_a_3211_, 0);
v_tail_3215_ = lean_ctor_get(v_a_3211_, 1);
v_snd_3216_ = lean_ctor_get(v_head_3214_, 1);
v___x_3217_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(v_snd_3216_, v_nmap_3210_);
if (lean_obj_tag(v___x_3217_) == 0)
{
v_a_3211_ = v_tail_3215_;
goto _start;
}
else
{
lean_object* v_val_3219_; lean_object* v___x_3220_; 
v_val_3219_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_val_3219_);
lean_dec_ref_known(v___x_3217_, 1);
v___x_3220_ = lean_array_push(v_a_3212_, v_val_3219_);
v_a_3211_ = v_tail_3215_;
v_a_3212_ = v___x_3220_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_nmapEntries_spec__1___boxed(lean_object* v_nmap_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_){
_start:
{
lean_object* v_res_3225_; 
v_res_3225_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_nmapEntries_spec__1(v_nmap_3222_, v_a_3223_, v_a_3224_);
lean_dec(v_a_3223_);
lean_dec(v_nmap_3222_);
return v_res_3225_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nmapEntries(lean_object* v_seg_3228_, lean_object* v_nmap_3229_){
_start:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3230_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__1));
v___x_3231_ = lp_lean_x2dftml_LeanFtml_harvestMask(v_seg_3228_, v___x_3230_);
v___x_3232_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_nmapEntries___closed__0));
v___x_3233_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_nmapEntries_spec__1(v_nmap_3229_, v___x_3231_, v___x_3232_);
lean_dec(v___x_3231_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nmapEntries___boxed(lean_object* v_seg_3234_, lean_object* v_nmap_3235_){
_start:
{
lean_object* v_res_3236_; 
v_res_3236_ = lp_lean_x2dftml_LeanFtml_nmapEntries(v_seg_3234_, v_nmap_3235_);
lean_dec(v_nmap_3235_);
return v_res_3236_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_formatItem_spec__1(lean_object* v_x_3237_){
_start:
{
if (lean_obj_tag(v_x_3237_) == 0)
{
return v_x_3237_;
}
else
{
lean_object* v_head_3238_; lean_object* v_tail_3239_; lean_object* v___x_3240_; uint8_t v___x_3241_; 
v_head_3238_ = lean_ctor_get(v_x_3237_, 0);
v_tail_3239_ = lean_ctor_get(v_x_3237_, 1);
v___x_3240_ = lean_unsigned_to_nat(32u);
v___x_3241_ = lean_nat_dec_eq(v_head_3238_, v___x_3240_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; uint8_t v___x_3243_; 
v___x_3242_ = lean_unsigned_to_nat(9u);
v___x_3243_ = lean_nat_dec_eq(v_head_3238_, v___x_3242_);
if (v___x_3243_ == 0)
{
lean_inc_ref(v_x_3237_);
return v_x_3237_;
}
else
{
v_x_3237_ = v_tail_3239_;
goto _start;
}
}
else
{
v_x_3237_ = v_tail_3239_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_formatItem_spec__1___boxed(lean_object* v_x_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_formatItem_spec__1(v_x_3246_);
lean_dec(v_x_3246_);
return v_res_3247_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3249_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__0));
v___x_3250_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3249_);
return v___x_3250_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__2(void){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3251_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__1);
v___x_3252_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_3251_);
return v___x_3252_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3(void){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v___x_3253_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__2, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__2_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__2);
v___x_3254_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_3255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3254_);
lean_ctor_set(v___x_3255_, 1, v___x_3253_);
return v___x_3255_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___x_3256_ = lean_box(0);
v___x_3257_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3);
v___x_3258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3257_);
lean_ctor_set(v___x_3258_, 1, v___x_3256_);
return v___x_3258_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0(lean_object* v_x_3259_, lean_object* v_x_3260_){
_start:
{
if (lean_obj_tag(v_x_3260_) == 0)
{
return v_x_3259_;
}
else
{
lean_object* v_head_3261_; lean_object* v_snd_3262_; lean_object* v_tail_3263_; lean_object* v_fst_3264_; lean_object* v_snd_3265_; lean_object* v_fst_3266_; lean_object* v_snd_3267_; lean_object* v___x_3268_; lean_object* v_tk_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v_fst_3273_; lean_object* v_snd_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3284_; 
v_head_3261_ = lean_ctor_get(v_x_3260_, 0);
v_snd_3262_ = lean_ctor_get(v_head_3261_, 1);
lean_inc(v_snd_3262_);
v_tail_3263_ = lean_ctor_get(v_x_3260_, 1);
lean_inc(v_tail_3263_);
lean_dec_ref_known(v_x_3260_, 2);
v_fst_3264_ = lean_ctor_get(v_x_3259_, 0);
lean_inc(v_fst_3264_);
v_snd_3265_ = lean_ctor_get(v_x_3259_, 1);
lean_inc(v_snd_3265_);
lean_dec_ref(v_x_3259_);
v_fst_3266_ = lean_ctor_get(v_snd_3262_, 0);
lean_inc(v_fst_3266_);
v_snd_3267_ = lean_ctor_get(v_snd_3262_, 1);
lean_inc(v_snd_3267_);
lean_dec(v_snd_3262_);
v___x_3268_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v_tk_3269_ = lp_lean_x2dftml_LeanFtml_setTrail_go(v___x_3268_, v_snd_3265_, v_snd_3267_);
lean_dec(v_snd_3267_);
v___x_3270_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_3271_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__4, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__4_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__4);
v___x_3272_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3270_, v___x_3271_, v_tk_3269_);
v_fst_3273_ = lean_ctor_get(v___x_3272_, 0);
v_snd_3274_ = lean_ctor_get(v___x_3272_, 1);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3276_ = v___x_3272_;
v_isShared_3277_ = v_isSharedCheck_3284_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_snd_3274_);
lean_inc(v_fst_3273_);
lean_dec(v___x_3272_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3284_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3281_; 
v___x_3278_ = l_List_appendTR___redArg(v_fst_3264_, v_fst_3273_);
v___x_3279_ = l_List_appendTR___redArg(v___x_3278_, v_fst_3266_);
if (v_isShared_3277_ == 0)
{
lean_ctor_set(v___x_3276_, 0, v___x_3279_);
v___x_3281_ = v___x_3276_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v___x_3279_);
lean_ctor_set(v_reuseFailAlloc_3283_, 1, v_snd_3274_);
v___x_3281_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
v_x_3259_ = v___x_3281_;
v_x_3260_ = v_tail_3263_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__1(void){
_start:
{
lean_object* v___x_3286_; lean_object* v___x_3287_; 
v___x_3286_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__0));
v___x_3287_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3286_);
return v___x_3287_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__2(void){
_start:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3288_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__1, &lp_lean_x2dftml_LeanFtml_formatItem___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__1);
v___x_3289_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_3288_);
return v___x_3289_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__3(void){
_start:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3290_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__2, &lp_lean_x2dftml_LeanFtml_formatItem___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__2);
v___x_3291_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_3292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3291_);
lean_ctor_set(v___x_3292_, 1, v___x_3290_);
return v___x_3292_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__5(void){
_start:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3294_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__4));
v___x_3295_ = l_String_toListImpl(v___x_3294_);
return v___x_3295_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__7(void){
_start:
{
lean_object* v___x_3297_; lean_object* v___x_3298_; 
v___x_3297_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__6));
v___x_3298_ = l_String_toListImpl(v___x_3297_);
return v___x_3298_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__9(void){
_start:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3300_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__8));
v___x_3301_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3300_);
return v___x_3301_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__10(void){
_start:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; 
v___x_3302_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__9, &lp_lean_x2dftml_LeanFtml_formatItem___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__9);
v___x_3303_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_3302_);
return v___x_3303_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__11(void){
_start:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3304_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__10, &lp_lean_x2dftml_LeanFtml_formatItem___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__10);
v___x_3305_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_3306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3305_);
lean_ctor_set(v___x_3306_, 1, v___x_3304_);
return v___x_3306_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__15(void){
_start:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3311_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__14));
v___x_3312_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3311_);
return v___x_3312_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__16(void){
_start:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___x_3313_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__15, &lp_lean_x2dftml_LeanFtml_formatItem___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__15);
v___x_3314_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_3313_);
return v___x_3314_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__17(void){
_start:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3315_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__16, &lp_lean_x2dftml_LeanFtml_formatItem___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__16);
v___x_3316_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_3317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3316_);
lean_ctor_set(v___x_3317_, 1, v___x_3315_);
return v___x_3317_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__18(void){
_start:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3318_ = lean_box(0);
v___x_3319_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__17, &lp_lean_x2dftml_LeanFtml_formatItem___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__17);
v___x_3320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3319_);
lean_ctor_set(v___x_3320_, 1, v___x_3318_);
return v___x_3320_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__19(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3321_ = lean_box(0);
v___x_3322_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0___closed__3);
v___x_3323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
lean_ctor_set(v___x_3323_, 1, v___x_3321_);
return v___x_3323_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formatItem(lean_object* v_rawBody_3327_, lean_object* v_itemAttrs_3328_, lean_object* v_attached_3329_, lean_object* v_nmap_3330_, lean_object* v_natmap_3331_, uint8_t v_unclosed_3332_, lean_object* v_toks_3333_){
_start:
{
lean_object* v_fst_3335_; lean_object* v_fst_3336_; lean_object* v_fst_3337_; lean_object* v_snd_3338_; lean_object* v___y_3402_; lean_object* v___y_3411_; lean_object* v___y_3412_; lean_object* v___y_3441_; lean_object* v_fst_3442_; lean_object* v_snd_3443_; lean_object* v___y_3450_; lean_object* v___y_3451_; lean_object* v___y_3459_; lean_object* v___y_3460_; lean_object* v___y_3461_; lean_object* v___y_3477_; uint8_t v___y_3478_; uint8_t v___y_3479_; lean_object* v___y_3509_; lean_object* v_b0_3523_; 
v_b0_3523_ = lp_lean_x2dftml_LeanFtml_stripSpaceTab(v_rawBody_3327_);
if (lean_obj_tag(v_b0_3523_) == 1)
{
lean_object* v_head_3524_; lean_object* v_tail_3525_; lean_object* v___x_3526_; uint8_t v___x_3527_; 
v_head_3524_ = lean_ctor_get(v_b0_3523_, 0);
v_tail_3525_ = lean_ctor_get(v_b0_3523_, 1);
v___x_3526_ = lean_unsigned_to_nat(10u);
v___x_3527_ = lean_nat_dec_eq(v_head_3524_, v___x_3526_);
if (v___x_3527_ == 0)
{
v___y_3509_ = v_b0_3523_;
goto v___jp_3508_;
}
else
{
lean_object* v___x_3528_; 
lean_inc(v_tail_3525_);
lean_dec_ref_known(v_b0_3523_, 2);
v___x_3528_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_tail_3525_);
lean_dec(v_tail_3525_);
v___y_3509_ = v___x_3528_;
goto v___jp_3508_;
}
}
else
{
v___y_3509_ = v_b0_3523_;
goto v___jp_3508_;
}
v___jp_3334_:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v_fst_3341_; lean_object* v_snd_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3397_; 
v___x_3339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3339_, 0, v_fst_3335_);
lean_ctor_set(v___x_3339_, 1, v_fst_3336_);
v___x_3340_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_formatItem_spec__0(v___x_3339_, v_attached_3329_);
v_fst_3341_ = lean_ctor_get(v___x_3340_, 0);
v_snd_3342_ = lean_ctor_get(v___x_3340_, 1);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3344_ = v___x_3340_;
v_isShared_3345_ = v_isSharedCheck_3397_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_snd_3342_);
lean_inc(v_fst_3341_);
lean_dec(v___x_3340_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3397_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3352_; 
v___x_3346_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_3347_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__3, &lp_lean_x2dftml_LeanFtml_formatItem___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__3);
v___x_3348_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__5, &lp_lean_x2dftml_LeanFtml_formatItem___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__5);
v___x_3349_ = lp_lean_x2dftml_LeanFtml_attrsToOpts(v_itemAttrs_3328_);
v___x_3350_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 1, v___x_3350_);
lean_ctor_set(v___x_3344_, 0, v___x_3348_);
v___x_3352_ = v___x_3344_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v___x_3348_);
lean_ctor_set(v_reuseFailAlloc_3396_, 1, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3353_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__7, &lp_lean_x2dftml_LeanFtml_formatItem___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__7);
v___x_3354_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_3337_);
v___x_3355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3353_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
v___x_3356_ = lean_box(0);
v___x_3357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3355_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
v___x_3358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3352_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3347_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3346_, v___x_3359_, v_snd_3342_);
if (v_unclosed_3332_ == 0)
{
lean_object* v_fst_3361_; lean_object* v_snd_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3385_; 
v_fst_3361_ = lean_ctor_get(v___x_3360_, 0);
v_snd_3362_ = lean_ctor_get(v___x_3360_, 1);
v_isSharedCheck_3385_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3364_ = v___x_3360_;
v_isShared_3365_ = v_isSharedCheck_3385_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_snd_3362_);
lean_inc(v_fst_3361_);
lean_dec(v___x_3360_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3385_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3369_; 
v___x_3366_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__11, &lp_lean_x2dftml_LeanFtml_formatItem___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__11);
v___x_3367_ = lp_lean_x2dftml_LeanFtml_textVal(v_snd_3338_);
if (v_isShared_3365_ == 0)
{
lean_ctor_set(v___x_3364_, 1, v___x_3367_);
lean_ctor_set(v___x_3364_, 0, v___x_3353_);
v___x_3369_ = v___x_3364_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3353_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v___x_3367_);
v___x_3369_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v_fst_3373_; lean_object* v_snd_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3383_; 
v___x_3370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
lean_ctor_set(v___x_3370_, 1, v___x_3356_);
v___x_3371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3366_);
lean_ctor_set(v___x_3371_, 1, v___x_3370_);
v___x_3372_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3346_, v___x_3371_, v_snd_3362_);
v_fst_3373_ = lean_ctor_get(v___x_3372_, 0);
v_snd_3374_ = lean_ctor_get(v___x_3372_, 1);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3372_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3376_ = v___x_3372_;
v_isShared_3377_ = v_isSharedCheck_3383_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_snd_3374_);
lean_inc(v_fst_3373_);
lean_dec(v___x_3372_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3383_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3381_; 
v___x_3378_ = l_List_appendTR___redArg(v_fst_3361_, v_fst_3341_);
v___x_3379_ = l_List_appendTR___redArg(v___x_3378_, v_fst_3373_);
if (v_isShared_3377_ == 0)
{
lean_ctor_set(v___x_3376_, 0, v___x_3379_);
v___x_3381_ = v___x_3376_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v___x_3379_);
lean_ctor_set(v_reuseFailAlloc_3382_, 1, v_snd_3374_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
}
else
{
lean_object* v_fst_3386_; lean_object* v_snd_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3395_; 
lean_dec(v_snd_3338_);
v_fst_3386_ = lean_ctor_get(v___x_3360_, 0);
v_snd_3387_ = lean_ctor_get(v___x_3360_, 1);
v_isSharedCheck_3395_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3389_ = v___x_3360_;
v_isShared_3390_ = v_isSharedCheck_3395_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_snd_3387_);
lean_inc(v_fst_3386_);
lean_dec(v___x_3360_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3395_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3391_; lean_object* v___x_3393_; 
v___x_3391_ = l_List_appendTR___redArg(v_fst_3386_, v_fst_3341_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 0, v___x_3391_);
v___x_3393_ = v___x_3389_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v___x_3391_);
lean_ctor_set(v_reuseFailAlloc_3394_, 1, v_snd_3387_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
}
}
}
}
v___jp_3398_:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3399_ = lean_box(0);
v___x_3400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3399_);
lean_ctor_set(v___x_3400_, 1, v_toks_3333_);
return v___x_3400_;
}
v___jp_3401_:
{
if (lean_obj_tag(v___y_3402_) == 0)
{
lean_dec(v_attached_3329_);
lean_dec(v_itemAttrs_3328_);
goto v___jp_3398_;
}
else
{
lean_object* v_val_3403_; lean_object* v_snd_3404_; lean_object* v_snd_3405_; lean_object* v_fst_3406_; lean_object* v_fst_3407_; lean_object* v_fst_3408_; lean_object* v_snd_3409_; 
lean_dec(v_toks_3333_);
v_val_3403_ = lean_ctor_get(v___y_3402_, 0);
lean_inc(v_val_3403_);
lean_dec_ref_known(v___y_3402_, 1);
v_snd_3404_ = lean_ctor_get(v_val_3403_, 1);
lean_inc(v_snd_3404_);
v_snd_3405_ = lean_ctor_get(v_snd_3404_, 1);
lean_inc(v_snd_3405_);
v_fst_3406_ = lean_ctor_get(v_val_3403_, 0);
lean_inc(v_fst_3406_);
lean_dec(v_val_3403_);
v_fst_3407_ = lean_ctor_get(v_snd_3404_, 0);
lean_inc(v_fst_3407_);
lean_dec(v_snd_3404_);
v_fst_3408_ = lean_ctor_get(v_snd_3405_, 0);
lean_inc(v_fst_3408_);
v_snd_3409_ = lean_ctor_get(v_snd_3405_, 1);
lean_inc(v_snd_3409_);
lean_dec(v_snd_3405_);
v_fst_3335_ = v_fst_3406_;
v_fst_3336_ = v_fst_3407_;
v_fst_3337_ = v_fst_3408_;
v_snd_3338_ = v_snd_3409_;
goto v___jp_3334_;
}
}
v___jp_3410_:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__1));
lean_inc(v___y_3411_);
v___x_3414_ = lp_lean_x2dftml_LeanFtml_lastMaskWithWsTail(v___y_3411_, v___x_3413_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_dec(v___y_3411_);
lean_dec(v_nmap_3330_);
v___y_3402_ = v___y_3412_;
goto v___jp_3401_;
}
else
{
lean_object* v_val_3415_; lean_object* v_fst_3416_; lean_object* v_snd_3417_; lean_object* v___x_3418_; uint8_t v___x_3419_; 
v_val_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_val_3415_);
lean_dec_ref_known(v___x_3414_, 1);
v_fst_3416_ = lean_ctor_get(v_val_3415_, 0);
lean_inc(v_fst_3416_);
v_snd_3417_ = lean_ctor_get(v_val_3415_, 1);
lean_inc(v_snd_3417_);
lean_dec(v_val_3415_);
v___x_3418_ = lean_unsigned_to_nat(1u);
v___x_3419_ = lean_nat_dec_le(v___x_3418_, v_fst_3416_);
if (v___x_3419_ == 0)
{
lean_dec(v_snd_3417_);
lean_dec(v_fst_3416_);
lean_dec(v___y_3411_);
lean_dec(v_nmap_3330_);
v___y_3402_ = v___y_3412_;
goto v___jp_3401_;
}
else
{
lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; uint8_t v___x_3423_; 
v___x_3420_ = lean_nat_sub(v_fst_3416_, v___x_3418_);
lean_dec(v_fst_3416_);
lean_inc(v___x_3420_);
v___x_3421_ = l_List_get_x3fInternal___redArg(v___y_3411_, v___x_3420_);
v___x_3422_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__19));
v___x_3423_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_3421_, v___x_3422_);
lean_dec(v___x_3421_);
if (v___x_3423_ == 0)
{
lean_dec(v___x_3420_);
lean_dec(v_snd_3417_);
lean_dec(v___y_3411_);
lean_dec(v_nmap_3330_);
v___y_3402_ = v___y_3412_;
goto v___jp_3401_;
}
else
{
lean_object* v___x_3424_; 
lean_dec(v___y_3412_);
v___x_3424_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(v_snd_3417_, v_nmap_3330_);
lean_dec(v_nmap_3330_);
lean_dec(v_snd_3417_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_dec(v___x_3420_);
lean_dec(v___y_3411_);
lean_dec(v_attached_3329_);
lean_dec(v_itemAttrs_3328_);
goto v___jp_3398_;
}
else
{
lean_object* v_val_3425_; lean_object* v_snd_3426_; lean_object* v_fst_3427_; lean_object* v_snd_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v_toks_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v_fst_3434_; lean_object* v_snd_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v_val_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_val_3425_);
lean_dec_ref_known(v___x_3424_, 1);
v_snd_3426_ = lean_ctor_get(v_val_3425_, 1);
lean_inc(v_snd_3426_);
lean_dec(v_val_3425_);
v_fst_3427_ = lean_ctor_get(v_snd_3426_, 0);
lean_inc(v_fst_3427_);
v_snd_3428_ = lean_ctor_get(v_snd_3426_, 1);
lean_inc(v_snd_3428_);
lean_dec(v_snd_3426_);
v___x_3429_ = lean_box(0);
v___x_3430_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v_toks_3431_ = lp_lean_x2dftml_LeanFtml_setTrail_go(v___x_3430_, v_toks_3333_, v_snd_3428_);
lean_dec(v_snd_3428_);
v___x_3432_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__12));
v___x_3433_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3432_, v___x_3429_, v_toks_3431_);
v_fst_3434_ = lean_ctor_get(v___x_3433_, 0);
lean_inc(v_fst_3434_);
v_snd_3435_ = lean_ctor_get(v___x_3433_, 1);
lean_inc(v_snd_3435_);
lean_dec_ref(v___x_3433_);
v___x_3436_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___y_3411_);
v___x_3437_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_3411_, v___y_3411_, v___x_3420_, v___x_3436_);
lean_dec(v___y_3411_);
v___x_3438_ = l_List_appendTR___redArg(v___x_3437_, v_fst_3434_);
v___x_3439_ = l_List_appendTR___redArg(v___x_3438_, v_fst_3427_);
v_fst_3335_ = v___x_3439_;
v_fst_3336_ = v_snd_3435_;
v_fst_3337_ = v___x_3429_;
v_snd_3338_ = v___x_3429_;
goto v___jp_3334_;
}
}
}
}
}
v___jp_3440_:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
lean_inc(v_nmap_3330_);
v___x_3444_ = lp_lean_x2dftml_LeanFtml_restoreMasked(v_fst_3442_, v_nmap_3330_, v_natmap_3331_);
v___x_3445_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__13));
v___x_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3446_, 0, v_snd_3443_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
v___x_3447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3444_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
v___y_3411_ = v___y_3441_;
v___y_3412_ = v___x_3448_;
goto v___jp_3410_;
}
v___jp_3449_:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v_fst_3455_; lean_object* v_snd_3456_; lean_object* v___x_3457_; 
v___x_3452_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_3453_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__18, &lp_lean_x2dftml_LeanFtml_formatItem___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__18);
lean_inc(v_toks_3333_);
v___x_3454_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3452_, v___x_3453_, v_toks_3333_);
v_fst_3455_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_fst_3455_);
v_snd_3456_ = lean_ctor_get(v___x_3454_, 1);
lean_inc(v_snd_3456_);
lean_dec_ref(v___x_3454_);
v___x_3457_ = l_List_appendTR___redArg(v___y_3451_, v_fst_3455_);
v___y_3441_ = v___y_3450_;
v_fst_3442_ = v___x_3457_;
v_snd_3443_ = v_snd_3456_;
goto v___jp_3440_;
}
v___jp_3458_:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v_snd_3466_; lean_object* v_fst_3467_; lean_object* v_snd_3468_; lean_object* v_fst_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v_pfx_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3462_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_3463_ = lean_box(0);
v___x_3464_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__19, &lp_lean_x2dftml_LeanFtml_formatItem___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__19);
v___x_3465_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3462_, v___x_3464_, v_toks_3333_);
v_snd_3466_ = lean_ctor_get(v___y_3459_, 1);
lean_inc(v_snd_3466_);
lean_dec_ref(v___y_3459_);
v_fst_3467_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_fst_3467_);
v_snd_3468_ = lean_ctor_get(v___x_3465_, 1);
lean_inc(v_snd_3468_);
lean_dec_ref(v___x_3465_);
v_fst_3469_ = lean_ctor_get(v_snd_3466_, 0);
lean_inc(v_fst_3469_);
lean_dec(v_snd_3466_);
v___x_3470_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___y_3460_);
v___x_3471_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_3460_, v___y_3460_, v___y_3461_, v___x_3470_);
lean_dec(v___y_3460_);
v_pfx_3472_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_3471_);
lean_dec(v___x_3471_);
v___x_3473_ = l_List_appendTR___redArg(v_pfx_3472_, v_fst_3467_);
v___x_3474_ = l_List_appendTR___redArg(v___x_3473_, v_fst_3469_);
v___x_3475_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__20));
v_fst_3335_ = v___x_3474_;
v_fst_3336_ = v_snd_3468_;
v_fst_3337_ = v___x_3463_;
v_snd_3338_ = v___x_3475_;
goto v___jp_3334_;
}
v___jp_3476_:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; 
v___x_3480_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_natPh___closed__0));
v___x_3481_ = lp_lean_x2dftml_LeanFtml_wholeMask(v___y_3477_, v___x_3480_);
if (lean_obj_tag(v___x_3481_) == 0)
{
lean_object* v___x_3482_; 
lean_inc(v___y_3477_);
v___x_3482_ = lp_lean_x2dftml_LeanFtml_lastMaskWithWsTail(v___y_3477_, v___x_3480_);
if (lean_obj_tag(v___x_3482_) == 0)
{
if (v___y_3478_ == 0)
{
lean_inc(v_toks_3333_);
lean_inc(v___y_3477_);
v___y_3441_ = v___y_3477_;
v_fst_3442_ = v___y_3477_;
v_snd_3443_ = v_toks_3333_;
goto v___jp_3440_;
}
else
{
lean_object* v___x_3483_; lean_object* v___x_3484_; uint8_t v___x_3485_; 
v___x_3483_ = l_List_getLast_x3f___redArg(v___y_3477_);
v___x_3484_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__19));
v___x_3485_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_3483_, v___x_3484_);
lean_dec(v___x_3483_);
if (v___x_3485_ == 0)
{
lean_inc(v_toks_3333_);
lean_inc(v___y_3477_);
v___y_3441_ = v___y_3477_;
v_fst_3442_ = v___y_3477_;
v_snd_3443_ = v_toks_3333_;
goto v___jp_3440_;
}
else
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
lean_inc(v___y_3477_);
v___x_3486_ = lean_array_mk(v___y_3477_);
v___x_3487_ = lean_array_pop(v___x_3486_);
v___x_3488_ = lean_array_to_list(v___x_3487_);
v___x_3489_ = l_List_reverse___redArg(v___x_3488_);
v___x_3490_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_formatItem_spec__1(v___x_3489_);
lean_dec(v___x_3489_);
v___x_3491_ = l_List_reverse___redArg(v___x_3490_);
if (v___y_3479_ == 0)
{
lean_inc(v_toks_3333_);
v___y_3441_ = v___y_3477_;
v_fst_3442_ = v___x_3491_;
v_snd_3443_ = v_toks_3333_;
goto v___jp_3440_;
}
else
{
uint8_t v___x_3492_; 
v___x_3492_ = l_List_isEmpty___redArg(v___x_3491_);
if (v___x_3492_ == 0)
{
v___y_3450_ = v___y_3477_;
v___y_3451_ = v___x_3491_;
goto v___jp_3449_;
}
else
{
uint8_t v___x_3493_; 
v___x_3493_ = l_List_isEmpty___redArg(v_attached_3329_);
if (v___x_3493_ == 0)
{
v___y_3450_ = v___y_3477_;
v___y_3451_ = v___x_3491_;
goto v___jp_3449_;
}
else
{
lean_object* v___x_3494_; 
lean_dec(v___x_3491_);
lean_dec(v_natmap_3331_);
v___x_3494_ = lean_box(0);
v___y_3411_ = v___y_3477_;
v___y_3412_ = v___x_3494_;
goto v___jp_3410_;
}
}
}
}
}
}
else
{
lean_object* v_val_3495_; lean_object* v_snd_3496_; lean_object* v___x_3497_; 
lean_dec(v_nmap_3330_);
v_val_3495_ = lean_ctor_get(v___x_3482_, 0);
lean_inc(v_val_3495_);
lean_dec_ref_known(v___x_3482_, 1);
v_snd_3496_ = lean_ctor_get(v_val_3495_, 1);
lean_inc(v_snd_3496_);
lean_dec(v_val_3495_);
v___x_3497_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(v_snd_3496_, v_natmap_3331_);
lean_dec(v_natmap_3331_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_dec(v_snd_3496_);
lean_dec(v___y_3477_);
lean_dec(v_attached_3329_);
lean_dec(v_itemAttrs_3328_);
goto v___jp_3398_;
}
else
{
lean_object* v_val_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; 
v_val_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_val_3498_);
lean_dec_ref_known(v___x_3497_, 1);
v___x_3499_ = lean_unsigned_to_nat(0u);
v___x_3500_ = lp_lean_x2dftml_LeanFtml_findFrom(v_snd_3496_, v___y_3477_, v___x_3499_);
lean_dec(v_snd_3496_);
if (lean_obj_tag(v___x_3500_) == 0)
{
v___y_3459_ = v_val_3498_;
v___y_3460_ = v___y_3477_;
v___y_3461_ = v___x_3499_;
goto v___jp_3458_;
}
else
{
lean_object* v_val_3501_; 
v_val_3501_ = lean_ctor_get(v___x_3500_, 0);
lean_inc(v_val_3501_);
lean_dec_ref_known(v___x_3500_, 1);
v___y_3459_ = v_val_3498_;
v___y_3460_ = v___y_3477_;
v___y_3461_ = v_val_3501_;
goto v___jp_3458_;
}
}
}
}
else
{
lean_object* v_val_3502_; lean_object* v___x_3503_; 
lean_dec(v___y_3477_);
lean_dec(v_nmap_3330_);
v_val_3502_ = lean_ctor_get(v___x_3481_, 0);
lean_inc(v_val_3502_);
lean_dec_ref_known(v___x_3481_, 1);
v___x_3503_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(v_val_3502_, v_natmap_3331_);
lean_dec(v_natmap_3331_);
lean_dec(v_val_3502_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_dec(v_attached_3329_);
lean_dec(v_itemAttrs_3328_);
goto v___jp_3398_;
}
else
{
lean_object* v_val_3504_; lean_object* v_snd_3505_; lean_object* v_fst_3506_; lean_object* v___x_3507_; 
v_val_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_val_3504_);
lean_dec_ref_known(v___x_3503_, 1);
v_snd_3505_ = lean_ctor_get(v_val_3504_, 1);
lean_inc(v_snd_3505_);
lean_dec(v_val_3504_);
v_fst_3506_ = lean_ctor_get(v_snd_3505_, 0);
lean_inc(v_fst_3506_);
lean_dec(v_snd_3505_);
v___x_3507_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v_fst_3335_ = v_fst_3506_;
v_fst_3336_ = v_toks_3333_;
v_fst_3337_ = v___x_3507_;
v_snd_3338_ = v___x_3507_;
goto v___jp_3334_;
}
}
}
v___jp_3508_:
{
uint8_t v___x_3510_; 
v___x_3510_ = l_List_isEmpty___redArg(v___y_3509_);
if (v___x_3510_ == 0)
{
uint8_t v___x_3511_; uint8_t v___x_3512_; 
v___x_3511_ = 1;
v___x_3512_ = lp_lean_x2dftml_List_all___at___00LeanFtml_lastMaskWithWsTail_spec__0(v___y_3509_);
if (v___x_3512_ == 0)
{
v___y_3477_ = v___y_3509_;
v___y_3478_ = v___x_3511_;
v___y_3479_ = v___x_3511_;
goto v___jp_3476_;
}
else
{
uint8_t v___x_3513_; 
v___x_3513_ = l_List_isEmpty___redArg(v_attached_3329_);
if (v___x_3513_ == 0)
{
v___y_3477_ = v___y_3509_;
v___y_3478_ = v___x_3511_;
v___y_3479_ = v___x_3511_;
goto v___jp_3476_;
}
else
{
lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v_fst_3518_; lean_object* v_snd_3519_; 
lean_dec(v___y_3509_);
lean_dec(v_natmap_3331_);
lean_dec(v_nmap_3330_);
v___x_3514_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_3515_ = lean_box(0);
v___x_3516_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__18, &lp_lean_x2dftml_LeanFtml_formatItem___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__18);
v___x_3517_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3514_, v___x_3516_, v_toks_3333_);
v_fst_3518_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_fst_3518_);
v_snd_3519_ = lean_ctor_get(v___x_3517_, 1);
lean_inc(v_snd_3519_);
lean_dec_ref(v___x_3517_);
v_fst_3335_ = v_fst_3518_;
v_fst_3336_ = v_snd_3519_;
v_fst_3337_ = v___x_3515_;
v_snd_3338_ = v___x_3515_;
goto v___jp_3334_;
}
}
}
else
{
uint8_t v___x_3520_; 
v___x_3520_ = l_List_isEmpty___redArg(v_attached_3329_);
if (v___x_3520_ == 0)
{
v___y_3477_ = v___y_3509_;
v___y_3478_ = v___x_3520_;
v___y_3479_ = v___x_3510_;
goto v___jp_3476_;
}
else
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
lean_dec(v___y_3509_);
lean_dec(v_natmap_3331_);
lean_dec(v_nmap_3330_);
lean_dec(v_attached_3329_);
lean_dec(v_itemAttrs_3328_);
v___x_3521_ = lean_box(0);
v___x_3522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3521_);
lean_ctor_set(v___x_3522_, 1, v_toks_3333_);
return v___x_3522_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formatItem___boxed(lean_object* v_rawBody_3529_, lean_object* v_itemAttrs_3530_, lean_object* v_attached_3531_, lean_object* v_nmap_3532_, lean_object* v_natmap_3533_, lean_object* v_unclosed_3534_, lean_object* v_toks_3535_){
_start:
{
uint8_t v_unclosed_boxed_3536_; lean_object* v_res_3537_; 
v_unclosed_boxed_3536_ = lean_unbox(v_unclosed_3534_);
v_res_3537_ = lp_lean_x2dftml_LeanFtml_formatItem(v_rawBody_3529_, v_itemAttrs_3530_, v_attached_3531_, v_nmap_3532_, v_natmap_3533_, v_unclosed_boxed_3536_, v_toks_3535_);
lean_dec(v_rawBody_3529_);
return v_res_3537_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allMaskPhs_go(lean_object* v_a_3538_, lean_object* v_a_3539_){
_start:
{
if (lean_obj_tag(v_a_3538_) == 0)
{
lean_object* v___x_3540_; 
lean_dec(v_a_3539_);
v___x_3540_ = lean_box(0);
return v___x_3540_;
}
else
{
lean_object* v_tail_3541_; lean_object* v_zero_3542_; uint8_t v_isZero_3543_; 
v_tail_3541_ = lean_ctor_get(v_a_3538_, 1);
v_zero_3542_ = lean_unsigned_to_nat(0u);
v_isZero_3543_ = lean_nat_dec_eq(v_a_3539_, v_zero_3542_);
if (v_isZero_3543_ == 1)
{
lean_object* v___x_3544_; 
lean_dec_ref_known(v_a_3538_, 2);
lean_dec(v_a_3539_);
v___x_3544_ = lean_box(0);
return v___x_3544_;
}
else
{
lean_object* v_one_3545_; lean_object* v_n_3546_; lean_object* v_len_3548_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v_one_3545_ = lean_unsigned_to_nat(1u);
v_n_3546_ = lean_nat_sub(v_a_3539_, v_one_3545_);
lean_dec(v_a_3539_);
v___x_3562_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__1));
lean_inc_ref(v_a_3538_);
v___x_3563_ = lp_lean_x2dftml_LeanFtml_maskPhAt(v_a_3538_, v___x_3562_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v___x_3564_; lean_object* v___x_3565_; 
v___x_3564_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_natPh___closed__0));
lean_inc_ref(v_a_3538_);
v___x_3565_ = lp_lean_x2dftml_LeanFtml_maskPhAt(v_a_3538_, v___x_3564_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_inc(v_tail_3541_);
lean_dec_ref_known(v_a_3538_, 2);
v_a_3538_ = v_tail_3541_;
v_a_3539_ = v_n_3546_;
goto _start;
}
else
{
lean_object* v_val_3567_; lean_object* v_snd_3568_; 
v_val_3567_ = lean_ctor_get(v___x_3565_, 0);
lean_inc(v_val_3567_);
lean_dec_ref_known(v___x_3565_, 1);
v_snd_3568_ = lean_ctor_get(v_val_3567_, 1);
lean_inc(v_snd_3568_);
lean_dec(v_val_3567_);
v_len_3548_ = v_snd_3568_;
goto v___jp_3547_;
}
}
else
{
lean_object* v_val_3569_; lean_object* v_snd_3570_; 
v_val_3569_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_val_3569_);
lean_dec_ref_known(v___x_3563_, 1);
v_snd_3570_ = lean_ctor_get(v_val_3569_, 1);
lean_inc(v_snd_3570_);
lean_dec(v_val_3569_);
v_len_3548_ = v_snd_3570_;
goto v___jp_3547_;
}
v___jp_3547_:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3559_; 
v___x_3549_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_len_3548_);
lean_inc_ref(v_a_3538_);
v___x_3550_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_3538_, v_a_3538_, v_len_3548_, v___x_3549_);
v___x_3551_ = l_List_drop___redArg(v_len_3548_, v_a_3538_);
v_isSharedCheck_3559_ = !lean_is_exclusive(v_a_3538_);
if (v_isSharedCheck_3559_ == 0)
{
lean_object* v_unused_3560_; lean_object* v_unused_3561_; 
v_unused_3560_ = lean_ctor_get(v_a_3538_, 1);
lean_dec(v_unused_3560_);
v_unused_3561_ = lean_ctor_get(v_a_3538_, 0);
lean_dec(v_unused_3561_);
v___x_3553_ = v_a_3538_;
v_isShared_3554_ = v_isSharedCheck_3559_;
goto v_resetjp_3552_;
}
else
{
lean_dec(v_a_3538_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3559_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3555_; lean_object* v___x_3557_; 
v___x_3555_ = lp_lean_x2dftml_LeanFtml_allMaskPhs_go(v___x_3551_, v_n_3546_);
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 1, v___x_3555_);
lean_ctor_set(v___x_3553_, 0, v___x_3550_);
v___x_3557_ = v___x_3553_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v___x_3550_);
lean_ctor_set(v_reuseFailAlloc_3558_, 1, v___x_3555_);
v___x_3557_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
return v___x_3557_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allMaskPhs(lean_object* v_s_3571_){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3572_ = l_List_lengthTR___redArg(v_s_3571_);
v___x_3573_ = lean_unsigned_to_nat(1u);
v___x_3574_ = lean_nat_add(v___x_3572_, v___x_3573_);
lean_dec(v___x_3572_);
v___x_3575_ = lp_lean_x2dftml_LeanFtml_allMaskPhs_go(v_s_3571_, v___x_3574_);
return v___x_3575_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_onlyListsOk_go(lean_object* v_a_3576_, lean_object* v_a_3577_){
_start:
{
if (lean_obj_tag(v_a_3576_) == 0)
{
uint8_t v___x_3578_; 
lean_dec(v_a_3577_);
v___x_3578_ = 1;
return v___x_3578_;
}
else
{
lean_object* v_head_3579_; lean_object* v_tail_3580_; lean_object* v_zero_3581_; uint8_t v_isZero_3582_; 
v_head_3579_ = lean_ctor_get(v_a_3576_, 0);
v_tail_3580_ = lean_ctor_get(v_a_3576_, 1);
v_zero_3581_ = lean_unsigned_to_nat(0u);
v_isZero_3582_ = lean_nat_dec_eq(v_a_3577_, v_zero_3581_);
if (v_isZero_3582_ == 1)
{
lean_dec_ref_known(v_a_3576_, 2);
lean_dec(v_a_3577_);
return v_isZero_3582_;
}
else
{
lean_object* v_one_3583_; lean_object* v_n_3584_; lean_object* v_len_3586_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v_one_3583_ = lean_unsigned_to_nat(1u);
v_n_3584_ = lean_nat_sub(v_a_3577_, v_one_3583_);
lean_dec(v_a_3577_);
v___x_3589_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__1));
lean_inc_ref(v_a_3576_);
v___x_3590_ = lp_lean_x2dftml_LeanFtml_maskPhAt(v_a_3576_, v___x_3589_);
if (lean_obj_tag(v___x_3590_) == 0)
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_natPh___closed__0));
lean_inc_ref(v_a_3576_);
v___x_3592_ = lp_lean_x2dftml_LeanFtml_maskPhAt(v_a_3576_, v___x_3591_);
if (lean_obj_tag(v___x_3592_) == 0)
{
uint8_t v___x_3593_; 
lean_inc(v_tail_3580_);
lean_inc(v_head_3579_);
lean_dec_ref_known(v_a_3576_, 2);
v___x_3593_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_3579_);
lean_dec(v_head_3579_);
if (v___x_3593_ == 0)
{
lean_dec(v_n_3584_);
lean_dec(v_tail_3580_);
return v___x_3593_;
}
else
{
v_a_3576_ = v_tail_3580_;
v_a_3577_ = v_n_3584_;
goto _start;
}
}
else
{
lean_object* v_val_3595_; lean_object* v_snd_3596_; 
v_val_3595_ = lean_ctor_get(v___x_3592_, 0);
lean_inc(v_val_3595_);
lean_dec_ref_known(v___x_3592_, 1);
v_snd_3596_ = lean_ctor_get(v_val_3595_, 1);
lean_inc(v_snd_3596_);
lean_dec(v_val_3595_);
v_len_3586_ = v_snd_3596_;
goto v___jp_3585_;
}
}
else
{
lean_object* v_val_3597_; lean_object* v_snd_3598_; 
v_val_3597_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_val_3597_);
lean_dec_ref_known(v___x_3590_, 1);
v_snd_3598_ = lean_ctor_get(v_val_3597_, 1);
lean_inc(v_snd_3598_);
lean_dec(v_val_3597_);
v_len_3586_ = v_snd_3598_;
goto v___jp_3585_;
}
v___jp_3585_:
{
lean_object* v___x_3587_; 
v___x_3587_ = l_List_drop___redArg(v_len_3586_, v_a_3576_);
lean_dec_ref_known(v_a_3576_, 2);
v_a_3576_ = v___x_3587_;
v_a_3577_ = v_n_3584_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_onlyListsOk_go___boxed(lean_object* v_a_3599_, lean_object* v_a_3600_){
_start:
{
uint8_t v_res_3601_; lean_object* v_r_3602_; 
v_res_3601_ = lp_lean_x2dftml_LeanFtml_onlyListsOk_go(v_a_3599_, v_a_3600_);
v_r_3602_ = lean_box(v_res_3601_);
return v_r_3602_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_onlyListsOk(lean_object* v_s_3603_){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; uint8_t v___x_3607_; 
v___x_3604_ = l_List_lengthTR___redArg(v_s_3603_);
v___x_3605_ = lean_unsigned_to_nat(1u);
v___x_3606_ = lean_nat_add(v___x_3604_, v___x_3605_);
lean_dec(v___x_3604_);
v___x_3607_ = lp_lean_x2dftml_LeanFtml_onlyListsOk_go(v_s_3603_, v___x_3606_);
return v___x_3607_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_onlyListsOk___boxed(lean_object* v_s_3608_){
_start:
{
uint8_t v_res_3609_; lean_object* v_r_3610_; 
v_res_3609_ = lp_lean_x2dftml_LeanFtml_onlyListsOk(v_s_3608_);
v_r_3610_ = lean_box(v_res_3609_);
return v_r_3610_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__1(void){
_start:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3612_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__0));
v___x_3613_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3612_);
return v___x_3613_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__2(void){
_start:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3614_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__1, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__1);
v___x_3615_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_3614_);
return v___x_3615_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3(void){
_start:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3616_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__2, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__2);
v___x_3617_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_3618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3617_);
lean_ctor_set(v___x_3618_, 1, v___x_3616_);
return v___x_3618_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5(void){
_start:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3620_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__4));
v___x_3621_ = l_String_toListImpl(v___x_3620_);
return v___x_3621_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7(void){
_start:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3623_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__6));
v___x_3624_ = l_String_toListImpl(v___x_3623_);
return v___x_3624_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__9(void){
_start:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; 
v___x_3626_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__8));
v___x_3627_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3626_);
return v___x_3627_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__10(void){
_start:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; 
v___x_3628_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__9, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__9);
v___x_3629_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_3628_);
return v___x_3629_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11(void){
_start:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3630_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__10, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__10);
v___x_3631_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_3632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3631_);
lean_ctor_set(v___x_3632_, 1, v___x_3630_);
return v___x_3632_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12(void){
_start:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; 
v___x_3633_ = lean_box(0);
v___x_3634_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_3633_);
return v___x_3634_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13(void){
_start:
{
lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3635_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12);
v___x_3636_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1, &lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_setTrail_go___closed__1);
v___x_3637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3636_);
lean_ctor_set(v___x_3637_, 1, v___x_3635_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens(lean_object* v_tag_3638_, uint8_t v_scored_3639_, uint8_t v_isSynth_3640_, lean_object* v_attrs_3641_, lean_object* v_inner_3642_, lean_object* v_trail_3643_, lean_object* v_toks_3644_, lean_object* v_blocks_3645_){
_start:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v_fst_3664_; lean_object* v_snd_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3694_; 
v___x_3646_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_3647_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3);
v___x_3648_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5);
v___x_3649_ = lp_lean_x2dftml_LeanFtml_textVal(v_tag_3638_);
v___x_3650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3648_);
lean_ctor_set(v___x_3650_, 1, v___x_3649_);
v___x_3651_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__5, &lp_lean_x2dftml_LeanFtml_formatItem___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__5);
v___x_3652_ = lp_lean_x2dftml_LeanFtml_attrsToOpts(v_attrs_3641_);
v___x_3653_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3653_, 0, v___x_3652_);
v___x_3654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3651_);
lean_ctor_set(v___x_3654_, 1, v___x_3653_);
v___x_3655_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7);
v___x_3656_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3656_, 0, v_scored_3639_);
v___x_3657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3655_);
lean_ctor_set(v___x_3657_, 1, v___x_3656_);
v___x_3658_ = lean_box(0);
v___x_3659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3657_);
lean_ctor_set(v___x_3659_, 1, v___x_3658_);
lean_inc_ref(v___x_3659_);
v___x_3660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3660_, 0, v___x_3654_);
lean_ctor_set(v___x_3660_, 1, v___x_3659_);
lean_inc_ref(v___x_3650_);
v___x_3661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3661_, 0, v___x_3650_);
lean_ctor_set(v___x_3661_, 1, v___x_3660_);
v___x_3662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3647_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3646_, v___x_3662_, v_toks_3644_);
v_fst_3664_ = lean_ctor_get(v___x_3663_, 0);
v_snd_3665_ = lean_ctor_get(v___x_3663_, 1);
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3667_ = v___x_3663_;
v_isShared_3668_ = v_isSharedCheck_3694_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_snd_3665_);
lean_inc(v_fst_3664_);
lean_dec(v___x_3663_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3694_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v_endKey_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v_fst_3676_; lean_object* v_snd_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3693_; 
v_endKey_3669_ = l_List_lengthTR___redArg(v_snd_3665_);
v___x_3670_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11);
v___x_3671_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13);
v___x_3672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3671_);
lean_ctor_set(v___x_3672_, 1, v___x_3659_);
v___x_3673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3673_, 0, v___x_3650_);
lean_ctor_set(v___x_3673_, 1, v___x_3672_);
v___x_3674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3670_);
lean_ctor_set(v___x_3674_, 1, v___x_3673_);
v___x_3675_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3646_, v___x_3674_, v_snd_3665_);
v_fst_3676_ = lean_ctor_get(v___x_3675_, 0);
v_snd_3677_ = lean_ctor_get(v___x_3675_, 1);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3679_ = v___x_3675_;
v_isShared_3680_ = v_isSharedCheck_3693_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_snd_3677_);
lean_inc(v_fst_3676_);
lean_dec(v___x_3675_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3693_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3688_; 
lean_inc(v_fst_3664_);
v___x_3681_ = l_List_appendTR___redArg(v_fst_3664_, v_inner_3642_);
lean_inc(v_fst_3676_);
v___x_3682_ = l_List_appendTR___redArg(v___x_3681_, v_fst_3676_);
v___x_3683_ = l_List_appendTR___redArg(v___x_3682_, v_trail_3643_);
v___x_3684_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3684_, 0, v_fst_3664_);
lean_ctor_set(v___x_3684_, 1, v_fst_3676_);
lean_ctor_set(v___x_3684_, 2, v_endKey_3669_);
lean_ctor_set_uint8(v___x_3684_, sizeof(void*)*3, v_scored_3639_);
lean_ctor_set_uint8(v___x_3684_, sizeof(void*)*3 + 1, v_isSynth_3640_);
v___x_3685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3684_);
lean_ctor_set(v___x_3685_, 1, v___x_3658_);
v___x_3686_ = l_List_appendTR___redArg(v_blocks_3645_, v___x_3685_);
if (v_isShared_3680_ == 0)
{
lean_ctor_set(v___x_3679_, 1, v___x_3686_);
lean_ctor_set(v___x_3679_, 0, v_snd_3677_);
v___x_3688_ = v___x_3679_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_snd_3677_);
lean_ctor_set(v_reuseFailAlloc_3692_, 1, v___x_3686_);
v___x_3688_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
lean_object* v___x_3690_; 
if (v_isShared_3668_ == 0)
{
lean_ctor_set(v___x_3667_, 1, v___x_3688_);
lean_ctor_set(v___x_3667_, 0, v___x_3683_);
v___x_3690_ = v___x_3667_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v___x_3683_);
lean_ctor_set(v_reuseFailAlloc_3691_, 1, v___x_3688_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokens___boxed(lean_object* v_tag_3695_, lean_object* v_scored_3696_, lean_object* v_isSynth_3697_, lean_object* v_attrs_3698_, lean_object* v_inner_3699_, lean_object* v_trail_3700_, lean_object* v_toks_3701_, lean_object* v_blocks_3702_){
_start:
{
uint8_t v_scored_boxed_3703_; uint8_t v_isSynth_boxed_3704_; lean_object* v_res_3705_; 
v_scored_boxed_3703_ = lean_unbox(v_scored_3696_);
v_isSynth_boxed_3704_ = lean_unbox(v_isSynth_3697_);
v_res_3705_ = lp_lean_x2dftml_LeanFtml_wrapListTokens(v_tag_3695_, v_scored_boxed_3703_, v_isSynth_boxed_3704_, v_attrs_3698_, v_inner_3699_, v_trail_3700_, v_toks_3701_, v_blocks_3702_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokensUnclosed(lean_object* v_tag_3706_, uint8_t v_scored_3707_, lean_object* v_attrs_3708_, lean_object* v_inner_3709_, lean_object* v_toks_3710_){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v_fst_3729_; lean_object* v_snd_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3738_; 
v___x_3711_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_3712_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3);
v___x_3713_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5);
v___x_3714_ = lp_lean_x2dftml_LeanFtml_textVal(v_tag_3706_);
v___x_3715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3713_);
lean_ctor_set(v___x_3715_, 1, v___x_3714_);
v___x_3716_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__5, &lp_lean_x2dftml_LeanFtml_formatItem___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__5);
v___x_3717_ = lp_lean_x2dftml_LeanFtml_attrsToOpts(v_attrs_3708_);
v___x_3718_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3717_);
v___x_3719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3716_);
lean_ctor_set(v___x_3719_, 1, v___x_3718_);
v___x_3720_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7);
v___x_3721_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_3721_, 0, v_scored_3707_);
v___x_3722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3720_);
lean_ctor_set(v___x_3722_, 1, v___x_3721_);
v___x_3723_ = lean_box(0);
v___x_3724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3722_);
lean_ctor_set(v___x_3724_, 1, v___x_3723_);
v___x_3725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3719_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
v___x_3726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3715_);
lean_ctor_set(v___x_3726_, 1, v___x_3725_);
v___x_3727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3712_);
lean_ctor_set(v___x_3727_, 1, v___x_3726_);
v___x_3728_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3711_, v___x_3727_, v_toks_3710_);
v_fst_3729_ = lean_ctor_get(v___x_3728_, 0);
v_snd_3730_ = lean_ctor_get(v___x_3728_, 1);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3732_ = v___x_3728_;
v_isShared_3733_ = v_isSharedCheck_3738_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_snd_3730_);
lean_inc(v_fst_3729_);
lean_dec(v___x_3728_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3738_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3734_; lean_object* v___x_3736_; 
v___x_3734_ = l_List_appendTR___redArg(v_fst_3729_, v_inner_3709_);
if (v_isShared_3733_ == 0)
{
lean_ctor_set(v___x_3732_, 0, v___x_3734_);
v___x_3736_ = v___x_3732_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v___x_3734_);
lean_ctor_set(v_reuseFailAlloc_3737_, 1, v_snd_3730_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wrapListTokensUnclosed___boxed(lean_object* v_tag_3739_, lean_object* v_scored_3740_, lean_object* v_attrs_3741_, lean_object* v_inner_3742_, lean_object* v_toks_3743_){
_start:
{
uint8_t v_scored_boxed_3744_; lean_object* v_res_3745_; 
v_scored_boxed_3744_ = lean_unbox(v_scored_3740_);
v_res_3745_ = lp_lean_x2dftml_LeanFtml_wrapListTokensUnclosed(v_tag_3739_, v_scored_boxed_3744_, v_attrs_3741_, v_inner_3742_, v_toks_3743_);
return v_res_3745_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__1(void){
_start:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3747_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__0));
v___x_3748_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3747_);
return v___x_3748_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__2(void){
_start:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; 
v___x_3749_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__1, &lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__1);
v___x_3750_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_3749_);
return v___x_3750_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__3(void){
_start:
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3751_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__2, &lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__2);
v___x_3752_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_3753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3752_);
lean_ctor_set(v___x_3753_, 1, v___x_3751_);
return v___x_3753_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__4(void){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v___x_3754_ = lean_box(0);
v___x_3755_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__3, &lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__3);
v___x_3756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3755_);
lean_ctor_set(v___x_3756_, 1, v___x_3754_);
return v___x_3756_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7(void){
_start:
{
lean_object* v___x_3761_; lean_object* v___x_3762_; 
v___x_3761_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__6));
v___x_3762_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3761_);
return v___x_3762_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__8(void){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3763_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7, &lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7);
v___x_3764_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__5));
v___x_3765_ = l_List_appendTR___redArg(v___x_3764_, v___x_3763_);
return v___x_3765_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__10(void){
_start:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3769_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__9));
v___x_3770_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__8, &lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__8);
v___x_3771_ = l_List_appendTR___redArg(v___x_3770_, v___x_3769_);
return v___x_3771_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveBlock(lean_object* v_toks_3772_, lean_object* v_blocks_3773_){
_start:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v_fst_3777_; lean_object* v_snd_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3788_; 
v___x_3774_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_3775_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__4, &lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__4);
v___x_3776_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_3774_, v___x_3775_, v_toks_3772_);
v_fst_3777_ = lean_ctor_get(v___x_3776_, 0);
v_snd_3778_ = lean_ctor_get(v___x_3776_, 1);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3780_ = v___x_3776_;
v_isShared_3781_ = v_isSharedCheck_3788_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_snd_3778_);
lean_inc(v_fst_3777_);
lean_dec(v___x_3776_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3788_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3785_; 
v___x_3782_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__10, &lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__10);
v___x_3783_ = l_List_appendTR___redArg(v___x_3782_, v_fst_3777_);
if (v_isShared_3781_ == 0)
{
lean_ctor_set(v___x_3780_, 1, v_blocks_3773_);
lean_ctor_set(v___x_3780_, 0, v_snd_3778_);
v___x_3785_ = v___x_3780_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_snd_3778_);
lean_ctor_set(v_reuseFailAlloc_3787_, 1, v_blocks_3773_);
v___x_3785_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
lean_object* v___x_3786_; 
v___x_3786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3783_);
lean_ctor_set(v___x_3786_, 1, v___x_3785_);
return v___x_3786_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCIBytes_go(lean_object* v_pat_3789_, lean_object* v_a_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_){
_start:
{
if (lean_obj_tag(v_a_3791_) == 0)
{
lean_object* v___x_3793_; 
lean_dec(v_a_3792_);
lean_dec(v_a_3790_);
v___x_3793_ = lean_box(0);
return v___x_3793_;
}
else
{
lean_object* v_tail_3794_; lean_object* v_zero_3795_; uint8_t v_isZero_3796_; 
v_tail_3794_ = lean_ctor_get(v_a_3791_, 1);
lean_inc(v_tail_3794_);
v_zero_3795_ = lean_unsigned_to_nat(0u);
v_isZero_3796_ = lean_nat_dec_eq(v_a_3792_, v_zero_3795_);
if (v_isZero_3796_ == 1)
{
lean_object* v___x_3797_; 
lean_dec_ref_known(v_a_3791_, 2);
lean_dec(v_tail_3794_);
lean_dec(v_a_3792_);
lean_dec(v_a_3790_);
v___x_3797_ = lean_box(0);
return v___x_3797_;
}
else
{
lean_object* v___x_3798_; 
v___x_3798_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_pat_3789_, v_a_3791_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v_one_3799_; lean_object* v_n_3800_; lean_object* v___x_3801_; 
v_one_3799_ = lean_unsigned_to_nat(1u);
v_n_3800_ = lean_nat_sub(v_a_3792_, v_one_3799_);
lean_dec(v_a_3792_);
v___x_3801_ = lean_nat_add(v_a_3790_, v_one_3799_);
lean_dec(v_a_3790_);
v_a_3790_ = v___x_3801_;
v_a_3791_ = v_tail_3794_;
v_a_3792_ = v_n_3800_;
goto _start;
}
else
{
lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
lean_dec(v_tail_3794_);
lean_dec(v_a_3792_);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3809_ == 0)
{
lean_object* v_unused_3810_; 
v_unused_3810_ = lean_ctor_get(v___x_3798_, 0);
lean_dec(v_unused_3810_);
v___x_3804_ = v___x_3798_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_dec(v___x_3798_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
lean_ctor_set(v___x_3804_, 0, v_a_3790_);
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3790_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCIBytes_go___boxed(lean_object* v_pat_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_){
_start:
{
lean_object* v_res_3815_; 
v_res_3815_ = lp_lean_x2dftml_LeanFtml_findSubCIBytes_go(v_pat_3811_, v_a_3812_, v_a_3813_, v_a_3814_);
lean_dec(v_pat_3811_);
return v_res_3815_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCIBytes(lean_object* v_pat_3816_, lean_object* v_s_3817_){
_start:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3818_ = lean_unsigned_to_nat(0u);
v___x_3819_ = l_List_lengthTR___redArg(v_s_3817_);
v___x_3820_ = lp_lean_x2dftml_LeanFtml_findSubCIBytes_go(v_pat_3816_, v___x_3818_, v_s_3817_, v___x_3819_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSubCIBytes___boxed(lean_object* v_pat_3821_, lean_object* v_s_3822_){
_start:
{
lean_object* v_res_3823_; 
v_res_3823_ = lp_lean_x2dftml_LeanFtml_findSubCIBytes(v_pat_3821_, v_s_3822_);
lean_dec(v_pat_3821_);
return v_res_3823_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__1(void){
_start:
{
lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3825_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__0));
v___x_3826_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3825_);
return v___x_3826_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__2(void){
_start:
{
lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
v___x_3827_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__1, &lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__1);
v___x_3828_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__1);
v___x_3829_ = l_List_appendTR___redArg(v___x_3828_, v___x_3827_);
return v___x_3829_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__3(void){
_start:
{
lean_object* v___x_3830_; lean_object* v___x_3831_; 
v___x_3830_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1);
v___x_3831_ = l_List_reverse___redArg(v___x_3830_);
return v___x_3831_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go(lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_){
_start:
{
if (lean_obj_tag(v_a_3833_) == 0)
{
lean_dec(v_a_3834_);
return v_a_3832_;
}
else
{
lean_object* v_head_3835_; lean_object* v_tail_3836_; lean_object* v_zero_3837_; uint8_t v_isZero_3838_; 
v_head_3835_ = lean_ctor_get(v_a_3833_, 0);
lean_inc(v_head_3835_);
v_tail_3836_ = lean_ctor_get(v_a_3833_, 1);
lean_inc(v_tail_3836_);
v_zero_3837_ = lean_unsigned_to_nat(0u);
v_isZero_3838_ = lean_nat_dec_eq(v_a_3834_, v_zero_3837_);
if (v_isZero_3838_ == 1)
{
lean_dec(v_tail_3836_);
lean_dec_ref_known(v_a_3833_, 2);
lean_dec(v_head_3835_);
lean_dec(v_a_3834_);
return v_a_3832_;
}
else
{
lean_object* v_one_3839_; lean_object* v_n_3840_; lean_object* v___x_3841_; 
v_one_3839_ = lean_unsigned_to_nat(1u);
v_n_3840_ = lean_nat_sub(v_a_3834_, v_one_3839_);
lean_dec(v_a_3834_);
lean_inc_ref(v_a_3833_);
v___x_3841_ = lp_lean_x2dftml_LeanFtml_blockOpenerAt(v_a_3833_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3849_; 
v_isSharedCheck_3849_ = !lean_is_exclusive(v_a_3833_);
if (v_isSharedCheck_3849_ == 0)
{
lean_object* v_unused_3850_; lean_object* v_unused_3851_; 
v_unused_3850_ = lean_ctor_get(v_a_3833_, 1);
lean_dec(v_unused_3850_);
v_unused_3851_ = lean_ctor_get(v_a_3833_, 0);
lean_dec(v_unused_3851_);
v___x_3843_ = v_a_3833_;
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
else
{
lean_dec(v_a_3833_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 1, v_a_3832_);
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_head_3835_);
lean_ctor_set(v_reuseFailAlloc_3848_, 1, v_a_3832_);
v___x_3846_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
v_a_3832_ = v___x_3846_;
v_a_3833_ = v_tail_3836_;
v_a_3834_ = v_n_3840_;
goto _start;
}
}
}
else
{
lean_object* v_val_3852_; lean_object* v_snd_3853_; lean_object* v_snd_3854_; lean_object* v_fst_3855_; lean_object* v_snd_3856_; uint8_t v___x_3857_; 
v_val_3852_ = lean_ctor_get(v___x_3841_, 0);
lean_inc(v_val_3852_);
lean_dec_ref_known(v___x_3841_, 1);
v_snd_3853_ = lean_ctor_get(v_val_3852_, 1);
v_snd_3854_ = lean_ctor_get(v_snd_3853_, 1);
lean_inc(v_snd_3854_);
v_fst_3855_ = lean_ctor_get(v_val_3852_, 0);
lean_inc_n(v_fst_3855_, 2);
lean_dec(v_val_3852_);
v_snd_3856_ = lean_ctor_get(v_snd_3854_, 1);
lean_inc(v_snd_3856_);
lean_dec(v_snd_3854_);
v___x_3857_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_fst_3855_);
if (v___x_3857_ == 0)
{
lean_object* v___x_3859_; uint8_t v_isShared_3860_; uint8_t v_isSharedCheck_3865_; 
lean_dec(v_snd_3856_);
lean_dec(v_fst_3855_);
v_isSharedCheck_3865_ = !lean_is_exclusive(v_a_3833_);
if (v_isSharedCheck_3865_ == 0)
{
lean_object* v_unused_3866_; lean_object* v_unused_3867_; 
v_unused_3866_ = lean_ctor_get(v_a_3833_, 1);
lean_dec(v_unused_3866_);
v_unused_3867_ = lean_ctor_get(v_a_3833_, 0);
lean_dec(v_unused_3867_);
v___x_3859_ = v_a_3833_;
v_isShared_3860_ = v_isSharedCheck_3865_;
goto v_resetjp_3858_;
}
else
{
lean_dec(v_a_3833_);
v___x_3859_ = lean_box(0);
v_isShared_3860_ = v_isSharedCheck_3865_;
goto v_resetjp_3858_;
}
v_resetjp_3858_:
{
lean_object* v___x_3862_; 
if (v_isShared_3860_ == 0)
{
lean_ctor_set(v___x_3859_, 1, v_a_3832_);
v___x_3862_ = v___x_3859_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_head_3835_);
lean_ctor_set(v_reuseFailAlloc_3864_, 1, v_a_3832_);
v___x_3862_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
v_a_3832_ = v___x_3862_;
v_a_3833_ = v_tail_3836_;
v_a_3834_ = v_n_3840_;
goto _start;
}
}
}
else
{
lean_object* v_afterOpen_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3902_; 
v_afterOpen_3868_ = l_List_drop___redArg(v_snd_3856_, v_a_3833_);
v_isSharedCheck_3902_ = !lean_is_exclusive(v_a_3833_);
if (v_isSharedCheck_3902_ == 0)
{
lean_object* v_unused_3903_; lean_object* v_unused_3904_; 
v_unused_3903_ = lean_ctor_get(v_a_3833_, 1);
lean_dec(v_unused_3903_);
v_unused_3904_ = lean_ctor_get(v_a_3833_, 0);
lean_dec(v_unused_3904_);
v___x_3870_ = v_a_3833_;
v_isShared_3871_ = v_isSharedCheck_3902_;
goto v_resetjp_3869_;
}
else
{
lean_dec(v_a_3833_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3902_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v_closePat_3875_; lean_object* v___x_3876_; 
v___x_3872_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__2, &lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__2);
v___x_3873_ = l_List_appendTR___redArg(v___x_3872_, v_fst_3855_);
v___x_3874_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9, &lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_blockOpenerAt___closed__9);
v_closePat_3875_ = l_List_appendTR___redArg(v___x_3873_, v___x_3874_);
lean_inc(v_afterOpen_3868_);
v___x_3876_ = lp_lean_x2dftml_LeanFtml_findSubCIBytes(v_closePat_3875_, v_afterOpen_3868_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_object* v___x_3878_; 
lean_dec(v_closePat_3875_);
lean_dec(v_afterOpen_3868_);
if (v_isShared_3871_ == 0)
{
lean_ctor_set(v___x_3870_, 1, v_a_3832_);
v___x_3878_ = v___x_3870_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_head_3835_);
lean_ctor_set(v_reuseFailAlloc_3880_, 1, v_a_3832_);
v___x_3878_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
v_a_3832_ = v___x_3878_;
v_a_3833_ = v_tail_3836_;
v_a_3834_ = v_n_3840_;
goto _start;
}
}
else
{
lean_object* v_val_3881_; lean_object* v___x_3882_; lean_object* v_middle_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v_r_3886_; lean_object* v___x_3887_; lean_object* v_ws_3888_; lean_object* v_afterWs_3889_; lean_object* v___x_3890_; lean_object* v___y_3892_; lean_object* v___x_3900_; 
lean_del_object(v___x_3870_);
lean_dec(v_tail_3836_);
lean_dec(v_head_3835_);
v_val_3881_ = lean_ctor_get(v___x_3876_, 0);
lean_inc_n(v_val_3881_, 2);
lean_dec_ref_known(v___x_3876_, 1);
v___x_3882_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_afterOpen_3868_);
v_middle_3883_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_afterOpen_3868_, v_afterOpen_3868_, v_val_3881_, v___x_3882_);
v___x_3884_ = l_List_lengthTR___redArg(v_closePat_3875_);
lean_dec(v_closePat_3875_);
v___x_3885_ = lean_nat_add(v_val_3881_, v___x_3884_);
lean_dec(v___x_3884_);
lean_dec(v_val_3881_);
v_r_3886_ = l_List_drop___redArg(v___x_3885_, v_afterOpen_3868_);
lean_dec(v_afterOpen_3868_);
lean_inc(v_r_3886_);
v___x_3887_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r_3886_, v_r_3886_, v___x_3882_);
v_ws_3888_ = l_List_lengthTR___redArg(v___x_3887_);
lean_dec(v___x_3887_);
v_afterWs_3889_ = l_List_drop___redArg(v_ws_3888_, v_r_3886_);
v___x_3890_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1);
v___x_3900_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_3890_, v_afterWs_3889_);
if (lean_obj_tag(v___x_3900_) == 0)
{
v___y_3892_ = v_r_3886_;
goto v___jp_3891_;
}
else
{
lean_object* v_val_3901_; 
lean_dec(v_r_3886_);
v_val_3901_ = lean_ctor_get(v___x_3900_, 0);
lean_inc(v_val_3901_);
lean_dec_ref_known(v___x_3900_, 1);
v___y_3892_ = v_val_3901_;
goto v___jp_3891_;
}
v___jp_3891_:
{
lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v_added_3897_; lean_object* v___x_3898_; 
lean_inc(v___y_3892_);
v___x_3893_ = l_List_reverse___redArg(v___y_3892_);
v___x_3894_ = l_List_reverse___redArg(v_middle_3883_);
v___x_3895_ = l_List_appendTR___redArg(v___x_3893_, v___x_3894_);
v___x_3896_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__3, &lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go___closed__3);
v_added_3897_ = l_List_appendTR___redArg(v___x_3895_, v___x_3896_);
v___x_3898_ = l_List_appendTR___redArg(v_added_3897_, v_a_3832_);
v_a_3832_ = v___x_3898_;
v_a_3833_ = v___y_3892_;
v_a_3834_ = v_n_3840_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveNestedUpper(lean_object* v_bs_3905_){
_start:
{
lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3906_ = lean_box(0);
v___x_3907_ = l_List_lengthTR___redArg(v_bs_3905_);
v___x_3908_ = lp_lean_x2dftml_LeanFtml_dissolveNestedUpper_go(v___x_3906_, v_bs_3905_, v___x_3907_);
v___x_3909_ = l_List_reverse___redArg(v___x_3908_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildExplicit_spec__0(lean_object* v_fst_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_){
_start:
{
if (lean_obj_tag(v_a_3911_) == 0)
{
lean_object* v___x_3913_; 
v___x_3913_ = lean_array_to_list(v_a_3912_);
return v___x_3913_;
}
else
{
lean_object* v_head_3914_; lean_object* v_tail_3915_; lean_object* v___x_3916_; 
v_head_3914_ = lean_ctor_get(v_a_3911_, 0);
v_tail_3915_ = lean_ctor_get(v_a_3911_, 1);
v___x_3916_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(v_head_3914_, v_fst_3910_);
if (lean_obj_tag(v___x_3916_) == 0)
{
v_a_3911_ = v_tail_3915_;
goto _start;
}
else
{
lean_object* v_val_3918_; lean_object* v___x_3919_; 
v_val_3918_ = lean_ctor_get(v___x_3916_, 0);
lean_inc(v_val_3918_);
lean_dec_ref_known(v___x_3916_, 1);
v___x_3919_ = lean_array_push(v_a_3912_, v_val_3918_);
v_a_3911_ = v_tail_3915_;
v_a_3912_ = v___x_3919_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildExplicit_spec__0___boxed(lean_object* v_fst_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_){
_start:
{
lean_object* v_res_3924_; 
v_res_3924_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildExplicit_spec__0(v_fst_3921_, v_a_3922_, v_a_3923_);
lean_dec(v_a_3922_);
lean_dec(v_fst_3921_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__1(lean_object* v_body_3925_, lean_object* v_x_3926_, lean_object* v_x_3927_){
_start:
{
if (lean_obj_tag(v_x_3927_) == 0)
{
return v_x_3926_;
}
else
{
lean_object* v_head_3928_; lean_object* v_snd_3929_; lean_object* v_snd_3930_; lean_object* v_tail_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3956_; 
v_head_3928_ = lean_ctor_get(v_x_3927_, 0);
lean_inc(v_head_3928_);
v_snd_3929_ = lean_ctor_get(v_head_3928_, 1);
v_snd_3930_ = lean_ctor_get(v_snd_3929_, 1);
lean_inc(v_snd_3930_);
v_tail_3931_ = lean_ctor_get(v_x_3927_, 1);
v_isSharedCheck_3956_ = !lean_is_exclusive(v_x_3927_);
if (v_isSharedCheck_3956_ == 0)
{
lean_object* v_unused_3957_; 
v_unused_3957_ = lean_ctor_get(v_x_3927_, 0);
lean_dec(v_unused_3957_);
v___x_3933_ = v_x_3927_;
v_isShared_3934_ = v_isSharedCheck_3956_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_tail_3931_);
lean_dec(v_x_3927_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3956_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v_fst_3935_; lean_object* v_snd_3936_; lean_object* v_fst_3937_; lean_object* v_snd_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_3954_; 
v_fst_3935_ = lean_ctor_get(v_x_3926_, 0);
lean_inc(v_fst_3935_);
v_snd_3936_ = lean_ctor_get(v_x_3926_, 1);
lean_inc(v_snd_3936_);
lean_dec_ref(v_x_3926_);
v_fst_3937_ = lean_ctor_get(v_head_3928_, 0);
lean_inc(v_fst_3937_);
lean_dec(v_head_3928_);
v_snd_3938_ = lean_ctor_get(v_snd_3930_, 1);
v_isSharedCheck_3954_ = !lean_is_exclusive(v_snd_3930_);
if (v_isSharedCheck_3954_ == 0)
{
lean_object* v_unused_3955_; 
v_unused_3955_ = lean_ctor_get(v_snd_3930_, 0);
lean_dec(v_unused_3955_);
v___x_3940_ = v_snd_3930_;
v_isShared_3941_ = v_isSharedCheck_3954_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_snd_3938_);
lean_dec(v_snd_3930_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_3954_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3947_; 
v___x_3942_ = lean_nat_sub(v_fst_3937_, v_snd_3936_);
v___x_3943_ = l_List_drop___redArg(v_snd_3936_, v_body_3925_);
v___x_3944_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_3943_);
v___x_3945_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_3943_, v___x_3943_, v___x_3942_, v___x_3944_);
lean_dec(v___x_3943_);
if (v_isShared_3934_ == 0)
{
lean_ctor_set(v___x_3933_, 1, v_fst_3935_);
lean_ctor_set(v___x_3933_, 0, v___x_3945_);
v___x_3947_ = v___x_3933_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v___x_3945_);
lean_ctor_set(v_reuseFailAlloc_3953_, 1, v_fst_3935_);
v___x_3947_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
lean_object* v___x_3948_; lean_object* v___x_3950_; 
v___x_3948_ = lean_nat_add(v_fst_3937_, v_snd_3938_);
lean_dec(v_snd_3938_);
lean_dec(v_fst_3937_);
if (v_isShared_3941_ == 0)
{
lean_ctor_set(v___x_3940_, 1, v___x_3948_);
lean_ctor_set(v___x_3940_, 0, v___x_3947_);
v___x_3950_ = v___x_3940_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v___x_3947_);
lean_ctor_set(v_reuseFailAlloc_3952_, 1, v___x_3948_);
v___x_3950_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
v_x_3926_ = v___x_3950_;
v_x_3927_ = v_tail_3931_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__1___boxed(lean_object* v_body_3958_, lean_object* v_x_3959_, lean_object* v_x_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__1(v_body_3958_, v_x_3959_, v_x_3960_);
lean_dec(v_body_3958_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__5(lean_object* v_fst_3962_, lean_object* v_snd_3963_, lean_object* v_phs_3964_, lean_object* v_x_3965_, lean_object* v_x_3966_){
_start:
{
if (lean_obj_tag(v_x_3966_) == 0)
{
return v_x_3965_;
}
else
{
lean_object* v_snd_3967_; lean_object* v_head_3968_; lean_object* v_tail_3969_; lean_object* v_fst_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_4058_; 
v_snd_3967_ = lean_ctor_get(v_x_3965_, 1);
lean_inc(v_snd_3967_);
v_head_3968_ = lean_ctor_get(v_x_3966_, 0);
v_tail_3969_ = lean_ctor_get(v_x_3966_, 1);
v_fst_3970_ = lean_ctor_get(v_x_3965_, 0);
v_isSharedCheck_4058_ = !lean_is_exclusive(v_x_3965_);
if (v_isSharedCheck_4058_ == 0)
{
lean_object* v_unused_4059_; 
v_unused_4059_ = lean_ctor_get(v_x_3965_, 1);
lean_dec(v_unused_4059_);
v___x_3972_ = v_x_3965_;
v_isShared_3973_ = v_isSharedCheck_4058_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_fst_3970_);
lean_dec(v_x_3965_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_4058_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v_fst_3974_; lean_object* v_snd_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_4057_; 
v_fst_3974_ = lean_ctor_get(v_snd_3967_, 0);
v_snd_3975_ = lean_ctor_get(v_snd_3967_, 1);
v_isSharedCheck_4057_ = !lean_is_exclusive(v_snd_3967_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_3977_ = v_snd_3967_;
v_isShared_3978_ = v_isSharedCheck_4057_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_snd_3975_);
lean_inc(v_fst_3974_);
lean_dec(v_snd_3967_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_4057_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3979_; 
v___x_3979_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(v_head_3968_, v_fst_3962_);
if (lean_obj_tag(v___x_3979_) == 0)
{
lean_object* v___x_3980_; 
v___x_3980_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_nmapEntries_spec__0(v_head_3968_, v_snd_3963_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3984_; 
v___x_3981_ = lean_unsigned_to_nat(1u);
v___x_3982_ = lean_nat_add(v_snd_3975_, v___x_3981_);
lean_dec(v_snd_3975_);
if (v_isShared_3978_ == 0)
{
lean_ctor_set(v___x_3977_, 1, v___x_3982_);
v___x_3984_ = v___x_3977_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3989_; 
v_reuseFailAlloc_3989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3989_, 0, v_fst_3974_);
lean_ctor_set(v_reuseFailAlloc_3989_, 1, v___x_3982_);
v___x_3984_ = v_reuseFailAlloc_3989_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
lean_object* v___x_3986_; 
if (v_isShared_3973_ == 0)
{
lean_ctor_set(v___x_3972_, 1, v___x_3984_);
v___x_3986_ = v___x_3972_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v_fst_3970_);
lean_ctor_set(v_reuseFailAlloc_3988_, 1, v___x_3984_);
v___x_3986_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
v_x_3965_ = v___x_3986_;
v_x_3966_ = v_tail_3969_;
goto _start;
}
}
}
else
{
lean_object* v_val_3990_; lean_object* v_fst_3992_; lean_object* v_snd_3993_; lean_object* v___x_4016_; lean_object* v___x_4017_; uint8_t v___x_4018_; 
lean_del_object(v___x_3977_);
lean_del_object(v___x_3972_);
v_val_3990_ = lean_ctor_get(v___x_3980_, 0);
lean_inc(v_val_3990_);
lean_dec_ref_known(v___x_3980_, 1);
v___x_4016_ = lean_unsigned_to_nat(1u);
v___x_4017_ = l_List_lengthTR___redArg(v_phs_3964_);
v___x_4018_ = lean_nat_dec_lt(v___x_4016_, v___x_4017_);
lean_dec(v___x_4017_);
if (v___x_4018_ == 0)
{
v_fst_3992_ = v_fst_3970_;
v_snd_3993_ = v_fst_3974_;
goto v___jp_3991_;
}
else
{
lean_object* v___x_4019_; uint8_t v___x_4020_; 
v___x_4019_ = lean_unsigned_to_nat(0u);
v___x_4020_ = lean_nat_dec_lt(v___x_4019_, v_snd_3975_);
if (v___x_4020_ == 0)
{
v_fst_3992_ = v_fst_3970_;
v_snd_3993_ = v_fst_3974_;
goto v___jp_3991_;
}
else
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v_fst_4024_; lean_object* v_snd_4025_; lean_object* v___x_4026_; 
v___x_4021_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_4022_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__19, &lp_lean_x2dftml_LeanFtml_formatItem___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__19);
v___x_4023_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_4021_, v___x_4022_, v_fst_3974_);
v_fst_4024_ = lean_ctor_get(v___x_4023_, 0);
lean_inc(v_fst_4024_);
v_snd_4025_ = lean_ctor_get(v___x_4023_, 1);
lean_inc(v_snd_4025_);
lean_dec_ref(v___x_4023_);
v___x_4026_ = l_List_appendTR___redArg(v_fst_3970_, v_fst_4024_);
v_fst_3992_ = v___x_4026_;
v_snd_3993_ = v_snd_4025_;
goto v___jp_3991_;
}
}
v___jp_3991_:
{
lean_object* v_snd_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4014_; 
v_snd_3994_ = lean_ctor_get(v_val_3990_, 1);
v_isSharedCheck_4014_ = !lean_is_exclusive(v_val_3990_);
if (v_isSharedCheck_4014_ == 0)
{
lean_object* v_unused_4015_; 
v_unused_4015_ = lean_ctor_get(v_val_3990_, 0);
lean_dec(v_unused_4015_);
v___x_3996_ = v_val_3990_;
v_isShared_3997_ = v_isSharedCheck_4014_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_snd_3994_);
lean_dec(v_val_3990_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4014_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v_fst_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4012_; 
v_fst_3998_ = lean_ctor_get(v_snd_3994_, 0);
v_isSharedCheck_4012_ = !lean_is_exclusive(v_snd_3994_);
if (v_isSharedCheck_4012_ == 0)
{
lean_object* v_unused_4013_; 
v_unused_4013_ = lean_ctor_get(v_snd_3994_, 1);
lean_dec(v_unused_4013_);
v___x_4000_ = v_snd_3994_;
v_isShared_4001_ = v_isSharedCheck_4012_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_fst_3998_);
lean_dec(v_snd_3994_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4012_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4006_; 
v___x_4002_ = l_List_appendTR___redArg(v_fst_3992_, v_fst_3998_);
v___x_4003_ = lean_unsigned_to_nat(1u);
v___x_4004_ = lean_nat_add(v_snd_3975_, v___x_4003_);
lean_dec(v_snd_3975_);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 1, v___x_4004_);
lean_ctor_set(v___x_4000_, 0, v_snd_3993_);
v___x_4006_ = v___x_4000_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4011_; 
v_reuseFailAlloc_4011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4011_, 0, v_snd_3993_);
lean_ctor_set(v_reuseFailAlloc_4011_, 1, v___x_4004_);
v___x_4006_ = v_reuseFailAlloc_4011_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
lean_object* v___x_4008_; 
if (v_isShared_3997_ == 0)
{
lean_ctor_set(v___x_3996_, 1, v___x_4006_);
lean_ctor_set(v___x_3996_, 0, v___x_4002_);
v___x_4008_ = v___x_3996_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v___x_4002_);
lean_ctor_set(v_reuseFailAlloc_4010_, 1, v___x_4006_);
v___x_4008_ = v_reuseFailAlloc_4010_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
v_x_3965_ = v___x_4008_;
v_x_3966_ = v_tail_3969_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_val_4027_; lean_object* v_snd_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4055_; 
lean_del_object(v___x_3977_);
lean_del_object(v___x_3972_);
v_val_4027_ = lean_ctor_get(v___x_3979_, 0);
lean_inc(v_val_4027_);
lean_dec_ref_known(v___x_3979_, 1);
v_snd_4028_ = lean_ctor_get(v_val_4027_, 1);
v_isSharedCheck_4055_ = !lean_is_exclusive(v_val_4027_);
if (v_isSharedCheck_4055_ == 0)
{
lean_object* v_unused_4056_; 
v_unused_4056_ = lean_ctor_get(v_val_4027_, 0);
lean_dec(v_unused_4056_);
v___x_4030_ = v_val_4027_;
v_isShared_4031_ = v_isSharedCheck_4055_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_snd_4028_);
lean_dec(v_val_4027_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4055_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v_fst_4032_; lean_object* v_snd_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4054_; 
v_fst_4032_ = lean_ctor_get(v_snd_4028_, 0);
v_snd_4033_ = lean_ctor_get(v_snd_4028_, 1);
v_isSharedCheck_4054_ = !lean_is_exclusive(v_snd_4028_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_4035_ = v_snd_4028_;
v_isShared_4036_ = v_isSharedCheck_4054_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_snd_4033_);
lean_inc(v_fst_4032_);
lean_dec(v_snd_4028_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4054_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4037_; lean_object* v___y_4039_; lean_object* v___x_4050_; uint8_t v___x_4051_; 
v___x_4037_ = lean_unsigned_to_nat(1u);
v___x_4050_ = l_List_lengthTR___redArg(v_phs_3964_);
v___x_4051_ = lean_nat_dec_lt(v___x_4037_, v___x_4050_);
lean_dec(v___x_4050_);
if (v___x_4051_ == 0)
{
lean_object* v___x_4052_; 
v___x_4052_ = lean_box(0);
v___y_4039_ = v___x_4052_;
goto v___jp_4038_;
}
else
{
lean_object* v___x_4053_; 
v___x_4053_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___y_4039_ = v___x_4053_;
goto v___jp_4038_;
}
v___jp_4038_:
{
lean_object* v_tk_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4044_; 
lean_inc(v___y_4039_);
v_tk_4040_ = lp_lean_x2dftml_LeanFtml_setTrail_go(v___y_4039_, v_fst_3974_, v_snd_4033_);
lean_dec(v_snd_4033_);
v___x_4041_ = l_List_appendTR___redArg(v_fst_3970_, v_fst_4032_);
v___x_4042_ = lean_nat_add(v_snd_3975_, v___x_4037_);
lean_dec(v_snd_3975_);
if (v_isShared_4036_ == 0)
{
lean_ctor_set(v___x_4035_, 1, v___x_4042_);
lean_ctor_set(v___x_4035_, 0, v_tk_4040_);
v___x_4044_ = v___x_4035_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_tk_4040_);
lean_ctor_set(v_reuseFailAlloc_4049_, 1, v___x_4042_);
v___x_4044_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
lean_object* v___x_4046_; 
if (v_isShared_4031_ == 0)
{
lean_ctor_set(v___x_4030_, 1, v___x_4044_);
lean_ctor_set(v___x_4030_, 0, v___x_4041_);
v___x_4046_ = v___x_4030_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v___x_4041_);
lean_ctor_set(v_reuseFailAlloc_4048_, 1, v___x_4044_);
v___x_4046_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
v_x_3965_ = v___x_4046_;
v_x_3966_ = v_tail_3969_;
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
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__5___boxed(lean_object* v_fst_4060_, lean_object* v_snd_4061_, lean_object* v_phs_4062_, lean_object* v_x_4063_, lean_object* v_x_4064_){
_start:
{
lean_object* v_res_4065_; 
v_res_4065_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__5(v_fst_4060_, v_snd_4061_, v_phs_4062_, v_x_4063_, v_x_4064_);
lean_dec(v_x_4064_);
lean_dec(v_phs_4062_);
lean_dec(v_snd_4061_);
lean_dec(v_fst_4060_);
return v_res_4065_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_buildExplicit_spec__2(lean_object* v_a_4066_, lean_object* v_a_4067_){
_start:
{
if (lean_obj_tag(v_a_4066_) == 0)
{
lean_object* v___x_4068_; 
v___x_4068_ = l_List_reverse___redArg(v_a_4067_);
return v___x_4068_;
}
else
{
lean_object* v_head_4069_; lean_object* v_tail_4070_; lean_object* v___x_4072_; uint8_t v_isShared_4073_; uint8_t v_isSharedCheck_4079_; 
v_head_4069_ = lean_ctor_get(v_a_4066_, 0);
v_tail_4070_ = lean_ctor_get(v_a_4066_, 1);
v_isSharedCheck_4079_ = !lean_is_exclusive(v_a_4066_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4072_ = v_a_4066_;
v_isShared_4073_ = v_isSharedCheck_4079_;
goto v_resetjp_4071_;
}
else
{
lean_inc(v_tail_4070_);
lean_inc(v_head_4069_);
lean_dec(v_a_4066_);
v___x_4072_ = lean_box(0);
v_isShared_4073_ = v_isSharedCheck_4079_;
goto v_resetjp_4071_;
}
v_resetjp_4071_:
{
lean_object* v_snd_4074_; lean_object* v___x_4076_; 
v_snd_4074_ = lean_ctor_get(v_head_4069_, 1);
lean_inc(v_snd_4074_);
lean_dec(v_head_4069_);
if (v_isShared_4073_ == 0)
{
lean_ctor_set(v___x_4072_, 1, v_a_4067_);
lean_ctor_set(v___x_4072_, 0, v_snd_4074_);
v___x_4076_ = v___x_4072_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_snd_4074_);
lean_ctor_set(v_reuseFailAlloc_4078_, 1, v_a_4067_);
v___x_4076_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
v_a_4066_ = v_tail_4070_;
v_a_4067_ = v___x_4076_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___lam__0(lean_object* v_fst_4080_, lean_object* v_phs_4081_){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; 
v___x_4082_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_nmapEntries___closed__0));
v___x_4083_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildExplicit_spec__0(v_fst_4080_, v_phs_4081_, v___x_4082_);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___lam__0___boxed(lean_object* v_fst_4084_, lean_object* v_phs_4085_){
_start:
{
lean_object* v_res_4086_; 
v_res_4086_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___lam__0(v_fst_4084_, v_phs_4085_);
lean_dec(v_phs_4085_);
lean_dec(v_fst_4084_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4(lean_object* v_fst_4087_, lean_object* v_snd_4088_, uint8_t v_unclosed_4089_, lean_object* v_n_4090_, lean_object* v_trailSeg_4091_, lean_object* v_segs_4092_, lean_object* v_x_4093_, lean_object* v_x_4094_){
_start:
{
if (lean_obj_tag(v_x_4094_) == 0)
{
lean_dec(v_trailSeg_4091_);
lean_dec(v_snd_4088_);
lean_dec(v_fst_4087_);
return v_x_4093_;
}
else
{
lean_object* v_snd_4095_; lean_object* v_snd_4096_; lean_object* v_head_4097_; lean_object* v_tail_4098_; lean_object* v_fst_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4164_; 
v_snd_4095_ = lean_ctor_get(v_x_4093_, 1);
lean_inc(v_snd_4095_);
v_snd_4096_ = lean_ctor_get(v_snd_4095_, 1);
lean_inc(v_snd_4096_);
v_head_4097_ = lean_ctor_get(v_x_4094_, 0);
v_tail_4098_ = lean_ctor_get(v_x_4094_, 1);
v_fst_4099_ = lean_ctor_get(v_x_4093_, 0);
v_isSharedCheck_4164_ = !lean_is_exclusive(v_x_4093_);
if (v_isSharedCheck_4164_ == 0)
{
lean_object* v_unused_4165_; 
v_unused_4165_ = lean_ctor_get(v_x_4093_, 1);
lean_dec(v_unused_4165_);
v___x_4101_ = v_x_4093_;
v_isShared_4102_ = v_isSharedCheck_4164_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_fst_4099_);
lean_dec(v_x_4093_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4164_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
lean_object* v_fst_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4162_; 
v_fst_4103_ = lean_ctor_get(v_snd_4095_, 0);
v_isSharedCheck_4162_ = !lean_is_exclusive(v_snd_4095_);
if (v_isSharedCheck_4162_ == 0)
{
lean_object* v_unused_4163_; 
v_unused_4163_ = lean_ctor_get(v_snd_4095_, 1);
lean_dec(v_unused_4163_);
v___x_4105_ = v_snd_4095_;
v_isShared_4106_ = v_isSharedCheck_4162_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_fst_4103_);
lean_dec(v_snd_4095_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4162_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v_fst_4107_; lean_object* v_snd_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4161_; 
v_fst_4107_ = lean_ctor_get(v_snd_4096_, 0);
v_snd_4108_ = lean_ctor_get(v_snd_4096_, 1);
v_isSharedCheck_4161_ = !lean_is_exclusive(v_snd_4096_);
if (v_isSharedCheck_4161_ == 0)
{
v___x_4110_ = v_snd_4096_;
v_isShared_4111_ = v_isSharedCheck_4161_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_snd_4108_);
lean_inc(v_fst_4107_);
lean_dec(v_snd_4096_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4161_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___y_4113_; lean_object* v___y_4114_; lean_object* v___y_4115_; lean_object* v_snd_4129_; lean_object* v_snd_4130_; lean_object* v_fst_4131_; lean_object* v_fst_4132_; lean_object* v___x_4133_; lean_object* v___y_4135_; lean_object* v___y_4144_; lean_object* v___x_4150_; lean_object* v___x_4151_; uint8_t v___x_4152_; 
v_snd_4129_ = lean_ctor_get(v_head_4097_, 1);
v_snd_4130_ = lean_ctor_get(v_snd_4129_, 1);
v_fst_4131_ = lean_ctor_get(v_snd_4129_, 0);
v_fst_4132_ = lean_ctor_get(v_snd_4130_, 0);
v___x_4133_ = lp_lean_x2dftml_LeanFtml_buildListAttrs(v_fst_4131_);
v___x_4150_ = lean_unsigned_to_nat(1u);
v___x_4151_ = lean_nat_add(v_snd_4108_, v___x_4150_);
v___x_4152_ = lean_nat_dec_lt(v___x_4151_, v_n_4090_);
if (v___x_4152_ == 0)
{
lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
lean_dec(v___x_4151_);
v___x_4153_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__1));
lean_inc(v_trailSeg_4091_);
v___x_4154_ = lp_lean_x2dftml_LeanFtml_harvestMask(v_trailSeg_4091_, v___x_4153_);
v___x_4155_ = lean_box(0);
v___x_4156_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_buildExplicit_spec__2(v___x_4154_, v___x_4155_);
v___x_4157_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___lam__0(v_fst_4087_, v___x_4156_);
lean_dec(v___x_4156_);
v___y_4135_ = v___x_4157_;
goto v___jp_4134_;
}
else
{
lean_object* v___x_4158_; 
v___x_4158_ = l_List_get_x3fInternal___redArg(v_segs_4092_, v___x_4151_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v___x_4159_; 
v___x_4159_ = lean_box(0);
v___y_4144_ = v___x_4159_;
goto v___jp_4143_;
}
else
{
lean_object* v_val_4160_; 
v_val_4160_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_val_4160_);
lean_dec_ref_known(v___x_4158_, 1);
v___y_4144_ = v_val_4160_;
goto v___jp_4143_;
}
}
v___jp_4112_:
{
lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4120_; 
v___x_4116_ = lean_nat_add(v_fst_4107_, v___y_4115_);
lean_dec(v_fst_4107_);
v___x_4117_ = lean_unsigned_to_nat(1u);
v___x_4118_ = lean_nat_add(v_snd_4108_, v___x_4117_);
lean_dec(v_snd_4108_);
if (v_isShared_4111_ == 0)
{
lean_ctor_set(v___x_4110_, 1, v___x_4118_);
lean_ctor_set(v___x_4110_, 0, v___x_4116_);
v___x_4120_ = v___x_4110_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v___x_4116_);
lean_ctor_set(v_reuseFailAlloc_4128_, 1, v___x_4118_);
v___x_4120_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
lean_object* v___x_4122_; 
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 1, v___x_4120_);
lean_ctor_set(v___x_4105_, 0, v___y_4114_);
v___x_4122_ = v___x_4105_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v___y_4114_);
lean_ctor_set(v_reuseFailAlloc_4127_, 1, v___x_4120_);
v___x_4122_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
lean_object* v___x_4124_; 
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 1, v___x_4122_);
lean_ctor_set(v___x_4101_, 0, v___y_4113_);
v___x_4124_ = v___x_4101_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v___y_4113_);
lean_ctor_set(v_reuseFailAlloc_4126_, 1, v___x_4122_);
v___x_4124_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
v_x_4093_ = v___x_4124_;
v_x_4094_ = v_tail_4098_;
goto _start;
}
}
}
}
v___jp_4134_:
{
lean_object* v___x_4136_; lean_object* v_fst_4137_; lean_object* v_snd_4138_; lean_object* v___x_4139_; uint8_t v___x_4140_; 
lean_inc(v_snd_4088_);
lean_inc(v_fst_4087_);
v___x_4136_ = lp_lean_x2dftml_LeanFtml_formatItem(v_fst_4132_, v___x_4133_, v___y_4135_, v_fst_4087_, v_snd_4088_, v_unclosed_4089_, v_fst_4103_);
v_fst_4137_ = lean_ctor_get(v___x_4136_, 0);
lean_inc_n(v_fst_4137_, 2);
v_snd_4138_ = lean_ctor_get(v___x_4136_, 1);
lean_inc(v_snd_4138_);
lean_dec_ref(v___x_4136_);
v___x_4139_ = l_List_appendTR___redArg(v_fst_4099_, v_fst_4137_);
v___x_4140_ = l_List_isEmpty___redArg(v_fst_4137_);
lean_dec(v_fst_4137_);
if (v___x_4140_ == 0)
{
lean_object* v___x_4141_; 
v___x_4141_ = lean_unsigned_to_nat(1u);
v___y_4113_ = v___x_4139_;
v___y_4114_ = v_snd_4138_;
v___y_4115_ = v___x_4141_;
goto v___jp_4112_;
}
else
{
lean_object* v___x_4142_; 
v___x_4142_ = lean_unsigned_to_nat(0u);
v___y_4113_ = v___x_4139_;
v___y_4114_ = v_snd_4138_;
v___y_4115_ = v___x_4142_;
goto v___jp_4112_;
}
}
v___jp_4143_:
{
lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v___x_4145_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__1));
v___x_4146_ = lp_lean_x2dftml_LeanFtml_harvestMask(v___y_4144_, v___x_4145_);
v___x_4147_ = lean_box(0);
v___x_4148_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_buildExplicit_spec__2(v___x_4146_, v___x_4147_);
v___x_4149_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___lam__0(v_fst_4087_, v___x_4148_);
lean_dec(v___x_4148_);
v___y_4135_ = v___x_4149_;
goto v___jp_4134_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4___boxed(lean_object* v_fst_4166_, lean_object* v_snd_4167_, lean_object* v_unclosed_4168_, lean_object* v_n_4169_, lean_object* v_trailSeg_4170_, lean_object* v_segs_4171_, lean_object* v_x_4172_, lean_object* v_x_4173_){
_start:
{
uint8_t v_unclosed_boxed_4174_; lean_object* v_res_4175_; 
v_unclosed_boxed_4174_ = lean_unbox(v_unclosed_4168_);
v_res_4175_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4(v_fst_4166_, v_snd_4167_, v_unclosed_boxed_4174_, v_n_4169_, v_trailSeg_4170_, v_segs_4171_, v_x_4172_, v_x_4173_);
lean_dec(v_x_4173_);
lean_dec(v_segs_4171_);
lean_dec(v_n_4169_);
return v_res_4175_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__1(void){
_start:
{
lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4177_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__0));
v___x_4178_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4177_);
return v___x_4178_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__2(void){
_start:
{
lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4179_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__1);
v___x_4180_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_4179_);
return v___x_4180_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3(void){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; 
v___x_4181_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__2, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__2_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__2);
v___x_4182_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_4183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4182_);
lean_ctor_set(v___x_4183_, 1, v___x_4181_);
return v___x_4183_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5(void){
_start:
{
lean_object* v___x_4185_; lean_object* v___x_4186_; 
v___x_4185_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__4));
v___x_4186_ = l_String_toListImpl(v___x_4185_);
return v___x_4186_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__7(void){
_start:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; 
v___x_4188_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__6));
v___x_4189_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4188_);
return v___x_4189_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__8(void){
_start:
{
lean_object* v___x_4190_; lean_object* v___x_4191_; 
v___x_4190_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__7);
v___x_4191_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_4190_);
return v___x_4191_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9(void){
_start:
{
lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; 
v___x_4192_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__8, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__8_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__8);
v___x_4193_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_4194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4193_);
lean_ctor_set(v___x_4194_, 1, v___x_4192_);
return v___x_4194_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11(void){
_start:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; 
v___x_4196_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__10));
v___x_4197_ = l_String_toListImpl(v___x_4196_);
return v___x_4197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3(uint8_t v___x_4198_, lean_object* v_x_4199_, lean_object* v_x_4200_){
_start:
{
if (lean_obj_tag(v_x_4200_) == 0)
{
return v_x_4199_;
}
else
{
lean_object* v_head_4201_; lean_object* v_snd_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4270_; 
v_head_4201_ = lean_ctor_get(v_x_4200_, 0);
lean_inc(v_head_4201_);
v_snd_4202_ = lean_ctor_get(v_head_4201_, 1);
v_isSharedCheck_4270_ = !lean_is_exclusive(v_head_4201_);
if (v_isSharedCheck_4270_ == 0)
{
lean_object* v_unused_4271_; 
v_unused_4271_ = lean_ctor_get(v_head_4201_, 0);
lean_dec(v_unused_4271_);
v___x_4204_ = v_head_4201_;
v_isShared_4205_ = v_isSharedCheck_4270_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_snd_4202_);
lean_dec(v_head_4201_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4270_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v_tail_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4268_; 
v_tail_4206_ = lean_ctor_get(v_x_4200_, 1);
v_isSharedCheck_4268_ = !lean_is_exclusive(v_x_4200_);
if (v_isSharedCheck_4268_ == 0)
{
lean_object* v_unused_4269_; 
v_unused_4269_ = lean_ctor_get(v_x_4200_, 0);
lean_dec(v_unused_4269_);
v___x_4208_ = v_x_4200_;
v_isShared_4209_ = v_isSharedCheck_4268_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_tail_4206_);
lean_dec(v_x_4200_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4268_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v_fst_4210_; lean_object* v_snd_4211_; lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4267_; 
v_fst_4210_ = lean_ctor_get(v_x_4199_, 0);
v_snd_4211_ = lean_ctor_get(v_x_4199_, 1);
v_isSharedCheck_4267_ = !lean_is_exclusive(v_x_4199_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4213_ = v_x_4199_;
v_isShared_4214_ = v_isSharedCheck_4267_;
goto v_resetjp_4212_;
}
else
{
lean_inc(v_snd_4211_);
lean_inc(v_fst_4210_);
lean_dec(v_x_4199_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4267_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
lean_object* v_fst_4215_; lean_object* v_snd_4216_; lean_object* v___x_4218_; uint8_t v_isShared_4219_; uint8_t v_isSharedCheck_4266_; 
v_fst_4215_ = lean_ctor_get(v_snd_4202_, 0);
v_snd_4216_ = lean_ctor_get(v_snd_4202_, 1);
v_isSharedCheck_4266_ = !lean_is_exclusive(v_snd_4202_);
if (v_isSharedCheck_4266_ == 0)
{
v___x_4218_ = v_snd_4202_;
v_isShared_4219_ = v_isSharedCheck_4266_;
goto v_resetjp_4217_;
}
else
{
lean_inc(v_snd_4216_);
lean_inc(v_fst_4215_);
lean_dec(v_snd_4202_);
v___x_4218_ = lean_box(0);
v_isShared_4219_ = v_isSharedCheck_4266_;
goto v_resetjp_4217_;
}
v_resetjp_4217_:
{
lean_object* v___x_4220_; lean_object* v_tk_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4227_; 
v___x_4220_ = lean_box(0);
v_tk_4221_ = lp_lean_x2dftml_LeanFtml_setTrail_go(v___x_4220_, v_snd_4211_, v_snd_4216_);
lean_dec(v_snd_4216_);
v___x_4222_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_4223_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3);
v___x_4224_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5);
v___x_4225_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_4225_, 0, v___x_4198_);
lean_inc_ref(v___x_4225_);
if (v_isShared_4219_ == 0)
{
lean_ctor_set(v___x_4218_, 1, v___x_4225_);
lean_ctor_set(v___x_4218_, 0, v___x_4224_);
v___x_4227_ = v___x_4218_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4265_; 
v_reuseFailAlloc_4265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4265_, 0, v___x_4224_);
lean_ctor_set(v_reuseFailAlloc_4265_, 1, v___x_4225_);
v___x_4227_ = v_reuseFailAlloc_4265_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
lean_object* v___x_4229_; 
lean_inc_ref(v___x_4227_);
if (v_isShared_4209_ == 0)
{
lean_ctor_set(v___x_4208_, 1, v___x_4220_);
lean_ctor_set(v___x_4208_, 0, v___x_4227_);
v___x_4229_ = v___x_4208_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v___x_4227_);
lean_ctor_set(v_reuseFailAlloc_4264_, 1, v___x_4220_);
v___x_4229_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
lean_object* v___x_4231_; 
if (v_isShared_4205_ == 0)
{
lean_ctor_set_tag(v___x_4204_, 1);
lean_ctor_set(v___x_4204_, 1, v___x_4229_);
lean_ctor_set(v___x_4204_, 0, v___x_4223_);
v___x_4231_ = v___x_4204_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4263_; 
v_reuseFailAlloc_4263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4263_, 0, v___x_4223_);
lean_ctor_set(v_reuseFailAlloc_4263_, 1, v___x_4229_);
v___x_4231_ = v_reuseFailAlloc_4263_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
lean_object* v___x_4232_; lean_object* v_fst_4233_; lean_object* v_snd_4234_; lean_object* v___x_4236_; uint8_t v_isShared_4237_; uint8_t v_isSharedCheck_4262_; 
v___x_4232_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_4222_, v___x_4231_, v_tk_4221_);
v_fst_4233_ = lean_ctor_get(v___x_4232_, 0);
v_snd_4234_ = lean_ctor_get(v___x_4232_, 1);
v_isSharedCheck_4262_ = !lean_is_exclusive(v___x_4232_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4236_ = v___x_4232_;
v_isShared_4237_ = v_isSharedCheck_4262_;
goto v_resetjp_4235_;
}
else
{
lean_inc(v_snd_4234_);
lean_inc(v_fst_4233_);
lean_dec(v___x_4232_);
v___x_4236_ = lean_box(0);
v_isShared_4237_ = v_isSharedCheck_4262_;
goto v_resetjp_4235_;
}
v_resetjp_4235_:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4241_; 
v___x_4238_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9);
v___x_4239_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11);
if (v_isShared_4237_ == 0)
{
lean_ctor_set(v___x_4236_, 1, v___x_4225_);
lean_ctor_set(v___x_4236_, 0, v___x_4239_);
v___x_4241_ = v___x_4236_;
goto v_reusejp_4240_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v___x_4239_);
lean_ctor_set(v_reuseFailAlloc_4261_, 1, v___x_4225_);
v___x_4241_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4240_;
}
v_reusejp_4240_:
{
lean_object* v___x_4243_; 
if (v_isShared_4214_ == 0)
{
lean_ctor_set_tag(v___x_4213_, 1);
lean_ctor_set(v___x_4213_, 1, v___x_4220_);
lean_ctor_set(v___x_4213_, 0, v___x_4241_);
v___x_4243_ = v___x_4213_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v___x_4241_);
lean_ctor_set(v_reuseFailAlloc_4260_, 1, v___x_4220_);
v___x_4243_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v_fst_4247_; lean_object* v_snd_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4259_; 
v___x_4244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4244_, 0, v___x_4227_);
lean_ctor_set(v___x_4244_, 1, v___x_4243_);
v___x_4245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4245_, 0, v___x_4238_);
lean_ctor_set(v___x_4245_, 1, v___x_4244_);
v___x_4246_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_4222_, v___x_4245_, v_snd_4234_);
v_fst_4247_ = lean_ctor_get(v___x_4246_, 0);
v_snd_4248_ = lean_ctor_get(v___x_4246_, 1);
v_isSharedCheck_4259_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4250_ = v___x_4246_;
v_isShared_4251_ = v_isSharedCheck_4259_;
goto v_resetjp_4249_;
}
else
{
lean_inc(v_snd_4248_);
lean_inc(v_fst_4247_);
lean_dec(v___x_4246_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4259_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4256_; 
v___x_4252_ = l_List_appendTR___redArg(v_fst_4210_, v_fst_4233_);
v___x_4253_ = l_List_appendTR___redArg(v___x_4252_, v_fst_4215_);
v___x_4254_ = l_List_appendTR___redArg(v___x_4253_, v_fst_4247_);
if (v_isShared_4251_ == 0)
{
lean_ctor_set(v___x_4250_, 0, v___x_4254_);
v___x_4256_ = v___x_4250_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v___x_4254_);
lean_ctor_set(v_reuseFailAlloc_4258_, 1, v_snd_4248_);
v___x_4256_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
v_x_4199_ = v___x_4256_;
v_x_4200_ = v_tail_4206_;
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___boxed(lean_object* v___x_4272_, lean_object* v_x_4273_, lean_object* v_x_4274_){
_start:
{
uint8_t v___x_4416__boxed_4275_; lean_object* v_res_4276_; 
v___x_4416__boxed_4275_ = lean_unbox(v___x_4272_);
v_res_4276_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3(v___x_4416__boxed_4275_, v_x_4273_, v_x_4274_);
return v_res_4276_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__2(void){
_start:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; 
v___x_4281_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildExplicit___closed__1));
v___x_4282_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4281_);
return v___x_4282_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__3(void){
_start:
{
lean_object* v___x_4283_; lean_object* v___x_4284_; 
v___x_4283_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__2, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__2);
v___x_4284_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_4283_);
return v___x_4284_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__4(void){
_start:
{
lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4285_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__3, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__3);
v___x_4286_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_4287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4286_);
lean_ctor_set(v___x_4287_, 1, v___x_4285_);
return v___x_4287_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__5(void){
_start:
{
lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
v___x_4288_ = lean_box(0);
v___x_4289_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__4, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__4);
v___x_4290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4290_, 0, v___x_4289_);
lean_ctor_set(v___x_4290_, 1, v___x_4288_);
return v___x_4290_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__7(void){
_start:
{
lean_object* v___x_4292_; lean_object* v___x_4293_; 
v___x_4292_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildExplicit___closed__6));
v___x_4293_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4292_);
return v___x_4293_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__8(void){
_start:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; 
v___x_4294_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__7, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__7);
v___x_4295_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_4294_);
return v___x_4295_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__9(void){
_start:
{
lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v___x_4296_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__8, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__8);
v___x_4297_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1, &lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_closeListLevel___closed__1);
v___x_4298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4298_, 0, v___x_4297_);
lean_ctor_set(v___x_4298_, 1, v___x_4296_);
return v___x_4298_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__10(void){
_start:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
v___x_4299_ = lean_box(0);
v___x_4300_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__9, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__9);
v___x_4301_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4301_, 0, v___x_4300_);
lean_ctor_set(v___x_4301_, 1, v___x_4299_);
return v___x_4301_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__12(void){
_start:
{
lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4303_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildExplicit___closed__11));
v___x_4304_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4303_);
return v___x_4304_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit(lean_object* v_tag_4305_, uint8_t v_scored_4306_, lean_object* v_attrStr_4307_, lean_object* v_body0_4308_, uint8_t v_residual_4309_, uint8_t v_unclosed_4310_, uint8_t v_isSynth_4311_, lean_object* v_toks_4312_, lean_object* v_blocks_4313_){
_start:
{
lean_object* v___y_4315_; lean_object* v___y_4316_; lean_object* v___y_4317_; lean_object* v___y_4318_; lean_object* v___y_4319_; lean_object* v___y_4320_; lean_object* v___y_4336_; lean_object* v___y_4337_; lean_object* v___y_4338_; uint8_t v___y_4339_; lean_object* v___y_4340_; lean_object* v___y_4341_; lean_object* v___y_4342_; lean_object* v___y_4343_; lean_object* v___y_4344_; lean_object* v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4382_; lean_object* v___y_4383_; lean_object* v___y_4468_; uint8_t v___x_4480_; 
lean_inc(v_tag_4305_);
v___x_4480_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_4305_);
if (v___x_4480_ == 0)
{
lean_object* v___x_4481_; 
v___x_4481_ = lp_lean_x2dftml_LeanFtml_buildListAttrs(v_attrStr_4307_);
v___y_4468_ = v___x_4481_;
goto v___jp_4467_;
}
else
{
lean_object* v___x_4482_; 
v___x_4482_ = lean_box(0);
v___y_4468_ = v___x_4482_;
goto v___jp_4467_;
}
v___jp_4314_:
{
if (v_unclosed_4310_ == 0)
{
lean_object* v___x_4321_; lean_object* v___x_4322_; 
v___x_4321_ = l_List_appendTR___redArg(v___y_4316_, v___y_4317_);
lean_inc(v___y_4319_);
v___x_4322_ = lp_lean_x2dftml_LeanFtml_wrapListTokens(v_tag_4305_, v_scored_4306_, v_isSynth_4311_, v___y_4320_, v___x_4321_, v___y_4319_, v___y_4315_, v___y_4318_);
return v___x_4322_;
}
else
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v_fst_4325_; lean_object* v_snd_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4334_; 
v___x_4323_ = l_List_appendTR___redArg(v___y_4316_, v___y_4317_);
v___x_4324_ = lp_lean_x2dftml_LeanFtml_wrapListTokensUnclosed(v_tag_4305_, v_scored_4306_, v___y_4320_, v___x_4323_, v___y_4315_);
v_fst_4325_ = lean_ctor_get(v___x_4324_, 0);
v_snd_4326_ = lean_ctor_get(v___x_4324_, 1);
v_isSharedCheck_4334_ = !lean_is_exclusive(v___x_4324_);
if (v_isSharedCheck_4334_ == 0)
{
v___x_4328_ = v___x_4324_;
v_isShared_4329_ = v_isSharedCheck_4334_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_snd_4326_);
lean_inc(v_fst_4325_);
lean_dec(v___x_4324_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4334_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4331_; 
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 1, v___y_4318_);
lean_ctor_set(v___x_4328_, 0, v_snd_4326_);
v___x_4331_ = v___x_4328_;
goto v_reusejp_4330_;
}
else
{
lean_object* v_reuseFailAlloc_4333_; 
v_reuseFailAlloc_4333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4333_, 0, v_snd_4326_);
lean_ctor_set(v_reuseFailAlloc_4333_, 1, v___y_4318_);
v___x_4331_ = v_reuseFailAlloc_4333_;
goto v_reusejp_4330_;
}
v_reusejp_4330_:
{
lean_object* v___x_4332_; 
v___x_4332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4332_, 0, v_fst_4325_);
lean_ctor_set(v___x_4332_, 1, v___x_4331_);
return v___x_4332_;
}
}
}
}
v___jp_4335_:
{
lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v_preNested_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v_fst_4357_; lean_object* v_snd_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4376_; 
v___x_4349_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__1));
v___x_4350_ = lp_lean_x2dftml_LeanFtml_harvestMask(v___y_4348_, v___x_4349_);
v___x_4351_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_buildExplicit_spec__2(v___x_4350_, v___y_4341_);
v___x_4352_ = lean_mk_empty_array_with_capacity(v___y_4344_);
v_preNested_4353_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildExplicit_spec__0(v___y_4336_, v___x_4351_, v___x_4352_);
lean_dec(v___x_4351_);
v___x_4354_ = lean_box(0);
v___x_4355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4355_, 0, v___x_4354_);
lean_ctor_set(v___x_4355_, 1, v_toks_4312_);
lean_inc(v_preNested_4353_);
v___x_4356_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3(v___y_4339_, v___x_4355_, v_preNested_4353_);
v_fst_4357_ = lean_ctor_get(v___x_4356_, 0);
v_snd_4358_ = lean_ctor_get(v___x_4356_, 1);
v_isSharedCheck_4376_ = !lean_is_exclusive(v___x_4356_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4360_ = v___x_4356_;
v_isShared_4361_ = v_isSharedCheck_4376_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_snd_4358_);
lean_inc(v_fst_4357_);
lean_dec(v___x_4356_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4376_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4363_; 
lean_inc_n(v___y_4344_, 2);
if (v_isShared_4361_ == 0)
{
lean_ctor_set(v___x_4360_, 1, v___y_4344_);
lean_ctor_set(v___x_4360_, 0, v___y_4344_);
v___x_4363_ = v___x_4360_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v___y_4344_);
lean_ctor_set(v_reuseFailAlloc_4375_, 1, v___y_4344_);
v___x_4363_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v_snd_4367_; lean_object* v_snd_4368_; lean_object* v_fst_4369_; lean_object* v_fst_4370_; lean_object* v_fst_4371_; uint8_t v___x_4372_; 
v___x_4364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4364_, 0, v_snd_4358_);
lean_ctor_set(v___x_4364_, 1, v___x_4363_);
v___x_4365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4354_);
lean_ctor_set(v___x_4365_, 1, v___x_4364_);
v___x_4366_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__4(v___y_4336_, v___y_4338_, v_unclosed_4310_, v___y_4347_, v___y_4337_, v___y_4340_, v___x_4365_, v___y_4343_);
lean_dec(v___y_4343_);
lean_dec(v___y_4340_);
lean_dec(v___y_4347_);
v_snd_4367_ = lean_ctor_get(v___x_4366_, 1);
lean_inc(v_snd_4367_);
v_snd_4368_ = lean_ctor_get(v_snd_4367_, 1);
lean_inc(v_snd_4368_);
v_fst_4369_ = lean_ctor_get(v___x_4366_, 0);
lean_inc(v_fst_4369_);
lean_dec_ref(v___x_4366_);
v_fst_4370_ = lean_ctor_get(v_snd_4367_, 0);
lean_inc(v_fst_4370_);
lean_dec(v_snd_4367_);
v_fst_4371_ = lean_ctor_get(v_snd_4368_, 0);
lean_inc(v_fst_4371_);
lean_dec(v_snd_4368_);
v___x_4372_ = lean_nat_dec_eq(v_fst_4371_, v___y_4344_);
lean_dec(v___y_4344_);
lean_dec(v_fst_4371_);
if (v___x_4372_ == 0)
{
lean_dec(v_preNested_4353_);
v___y_4315_ = v_fst_4370_;
v___y_4316_ = v_fst_4357_;
v___y_4317_ = v_fst_4369_;
v___y_4318_ = v___y_4342_;
v___y_4319_ = v___y_4345_;
v___y_4320_ = v___y_4346_;
goto v___jp_4314_;
}
else
{
uint8_t v___x_4373_; 
v___x_4373_ = l_List_isEmpty___redArg(v_preNested_4353_);
lean_dec(v_preNested_4353_);
if (v___x_4373_ == 0)
{
v___y_4315_ = v_fst_4370_;
v___y_4316_ = v_fst_4357_;
v___y_4317_ = v_fst_4369_;
v___y_4318_ = v___y_4342_;
v___y_4319_ = v___y_4345_;
v___y_4320_ = v___y_4346_;
goto v___jp_4314_;
}
else
{
lean_object* v___x_4374_; 
lean_dec(v_fst_4369_);
lean_dec(v_fst_4357_);
lean_dec(v___y_4346_);
lean_dec(v_tag_4305_);
v___x_4374_ = lp_lean_x2dftml_LeanFtml_dissolveBlock(v_fst_4370_, v___y_4342_);
return v___x_4374_;
}
}
}
}
}
v___jp_4377_:
{
lean_object* v_lis_4384_; uint8_t v___x_4385_; 
lean_inc(v___y_4380_);
v_lis_4384_ = lp_lean_x2dftml_LeanFtml_scanLi(v___y_4380_);
v___x_4385_ = l_List_isEmpty___redArg(v_lis_4384_);
if (v___x_4385_ == 0)
{
lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v_fst_4390_; lean_object* v_snd_4391_; lean_object* v_segs_4392_; lean_object* v_trailSeg_4393_; lean_object* v_n_4394_; lean_object* v___x_4395_; 
v___x_4386_ = lean_box(0);
v___x_4387_ = lean_unsigned_to_nat(0u);
v___x_4388_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildExplicit___closed__0));
lean_inc(v_lis_4384_);
v___x_4389_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__1(v___y_4380_, v___x_4388_, v_lis_4384_);
v_fst_4390_ = lean_ctor_get(v___x_4389_, 0);
lean_inc(v_fst_4390_);
v_snd_4391_ = lean_ctor_get(v___x_4389_, 1);
lean_inc(v_snd_4391_);
lean_dec_ref(v___x_4389_);
v_segs_4392_ = l_List_reverse___redArg(v_fst_4390_);
v_trailSeg_4393_ = l_List_drop___redArg(v_snd_4391_, v___y_4380_);
lean_dec(v___y_4380_);
v_n_4394_ = l_List_lengthTR___redArg(v_lis_4384_);
v___x_4395_ = l_List_head_x3f___redArg(v_segs_4392_);
if (lean_obj_tag(v___x_4395_) == 0)
{
v___y_4336_ = v___y_4378_;
v___y_4337_ = v_trailSeg_4393_;
v___y_4338_ = v___y_4379_;
v___y_4339_ = v___x_4385_;
v___y_4340_ = v_segs_4392_;
v___y_4341_ = v___x_4386_;
v___y_4342_ = v___y_4381_;
v___y_4343_ = v_lis_4384_;
v___y_4344_ = v___x_4387_;
v___y_4345_ = v___y_4383_;
v___y_4346_ = v___y_4382_;
v___y_4347_ = v_n_4394_;
v___y_4348_ = v___x_4386_;
goto v___jp_4335_;
}
else
{
lean_object* v_val_4396_; 
v_val_4396_ = lean_ctor_get(v___x_4395_, 0);
lean_inc(v_val_4396_);
lean_dec_ref_known(v___x_4395_, 1);
v___y_4336_ = v___y_4378_;
v___y_4337_ = v_trailSeg_4393_;
v___y_4338_ = v___y_4379_;
v___y_4339_ = v___x_4385_;
v___y_4340_ = v_segs_4392_;
v___y_4341_ = v___x_4386_;
v___y_4342_ = v___y_4381_;
v___y_4343_ = v_lis_4384_;
v___y_4344_ = v___x_4387_;
v___y_4345_ = v___y_4383_;
v___y_4346_ = v___y_4382_;
v___y_4347_ = v_n_4394_;
v___y_4348_ = v_val_4396_;
goto v___jp_4335_;
}
}
else
{
lean_object* v_trimmedBody_4397_; uint8_t v___x_4398_; 
lean_dec(v_lis_4384_);
v_trimmedBody_4397_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_4380_);
lean_dec(v___y_4380_);
v___x_4398_ = l_List_isEmpty___redArg(v_trimmedBody_4397_);
if (v___x_4398_ == 0)
{
uint8_t v___x_4399_; 
lean_inc(v_trimmedBody_4397_);
v___x_4399_ = lp_lean_x2dftml_LeanFtml_onlyListsOk(v_trimmedBody_4397_);
if (v___x_4399_ == 0)
{
lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v_fst_4403_; lean_object* v_snd_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v_fst_4407_; lean_object* v_snd_4408_; lean_object* v_restored_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v___x_4400_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_4401_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__5, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__5);
v___x_4402_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_4400_, v___x_4401_, v_toks_4312_);
v_fst_4403_ = lean_ctor_get(v___x_4402_, 0);
lean_inc(v_fst_4403_);
v_snd_4404_ = lean_ctor_get(v___x_4402_, 1);
lean_inc(v_snd_4404_);
lean_dec_ref(v___x_4402_);
v___x_4405_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__10, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__10);
v___x_4406_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_4400_, v___x_4405_, v_snd_4404_);
v_fst_4407_ = lean_ctor_get(v___x_4406_, 0);
lean_inc(v_fst_4407_);
v_snd_4408_ = lean_ctor_get(v___x_4406_, 1);
lean_inc(v_snd_4408_);
lean_dec_ref(v___x_4406_);
v_restored_4409_ = lp_lean_x2dftml_LeanFtml_restoreMasked(v_trimmedBody_4397_, v___y_4378_, v___y_4379_);
v___x_4410_ = l_List_appendTR___redArg(v_fst_4403_, v_restored_4409_);
v___x_4411_ = l_List_appendTR___redArg(v___x_4410_, v_fst_4407_);
lean_inc(v___y_4383_);
v___x_4412_ = lp_lean_x2dftml_LeanFtml_wrapListTokens(v_tag_4305_, v_scored_4306_, v_isSynth_4311_, v___y_4382_, v___x_4411_, v___y_4383_, v_snd_4408_, v___y_4381_);
return v___x_4412_;
}
else
{
lean_object* v_phs_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v_snd_4419_; lean_object* v_fst_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4465_; 
v_phs_4413_ = lp_lean_x2dftml_LeanFtml_allMaskPhs(v_trimmedBody_4397_);
v___x_4414_ = lean_box(0);
v___x_4415_ = lean_unsigned_to_nat(0u);
v___x_4416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4416_, 0, v_toks_4312_);
lean_ctor_set(v___x_4416_, 1, v___x_4415_);
v___x_4417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4414_);
lean_ctor_set(v___x_4417_, 1, v___x_4416_);
v___x_4418_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__5(v___y_4378_, v___y_4379_, v_phs_4413_, v___x_4417_, v_phs_4413_);
lean_dec(v___y_4379_);
lean_dec(v___y_4378_);
v_snd_4419_ = lean_ctor_get(v___x_4418_, 1);
v_fst_4420_ = lean_ctor_get(v___x_4418_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v___x_4418_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4422_ = v___x_4418_;
v_isShared_4423_ = v_isSharedCheck_4465_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_snd_4419_);
lean_inc(v_fst_4420_);
lean_dec(v___x_4418_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4465_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
lean_object* v_fst_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4463_; 
v_fst_4424_ = lean_ctor_get(v_snd_4419_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_snd_4419_);
if (v_isSharedCheck_4463_ == 0)
{
lean_object* v_unused_4464_; 
v_unused_4464_ = lean_ctor_get(v_snd_4419_, 1);
lean_dec(v_unused_4464_);
v___x_4426_ = v_snd_4419_;
v_isShared_4427_ = v_isSharedCheck_4463_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_fst_4424_);
lean_dec(v_snd_4419_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4463_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; uint8_t v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4436_; 
v___x_4428_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_4429_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__3);
v___x_4430_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__5);
v___x_4431_ = lean_unsigned_to_nat(1u);
v___x_4432_ = l_List_lengthTR___redArg(v_phs_4413_);
lean_dec(v_phs_4413_);
v___x_4433_ = lean_nat_dec_lt(v___x_4431_, v___x_4432_);
lean_dec(v___x_4432_);
v___x_4434_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_4434_, 0, v___x_4433_);
lean_inc_ref(v___x_4434_);
if (v_isShared_4427_ == 0)
{
lean_ctor_set(v___x_4426_, 1, v___x_4434_);
lean_ctor_set(v___x_4426_, 0, v___x_4430_);
v___x_4436_ = v___x_4426_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4430_);
lean_ctor_set(v_reuseFailAlloc_4462_, 1, v___x_4434_);
v___x_4436_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
lean_object* v___x_4438_; 
lean_inc_ref(v___x_4436_);
if (v_isShared_4423_ == 0)
{
lean_ctor_set_tag(v___x_4422_, 1);
lean_ctor_set(v___x_4422_, 1, v___x_4414_);
lean_ctor_set(v___x_4422_, 0, v___x_4436_);
v___x_4438_ = v___x_4422_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v___x_4436_);
lean_ctor_set(v_reuseFailAlloc_4461_, 1, v___x_4414_);
v___x_4438_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v_fst_4441_; lean_object* v_snd_4442_; lean_object* v___x_4444_; uint8_t v_isShared_4445_; uint8_t v_isSharedCheck_4460_; 
v___x_4439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4429_);
lean_ctor_set(v___x_4439_, 1, v___x_4438_);
v___x_4440_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_4428_, v___x_4439_, v_fst_4424_);
v_fst_4441_ = lean_ctor_get(v___x_4440_, 0);
v_snd_4442_ = lean_ctor_get(v___x_4440_, 1);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4444_ = v___x_4440_;
v_isShared_4445_ = v_isSharedCheck_4460_;
goto v_resetjp_4443_;
}
else
{
lean_inc(v_snd_4442_);
lean_inc(v_fst_4441_);
lean_dec(v___x_4440_);
v___x_4444_ = lean_box(0);
v_isShared_4445_ = v_isSharedCheck_4460_;
goto v_resetjp_4443_;
}
v_resetjp_4443_:
{
lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4449_; 
v___x_4446_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__9);
v___x_4447_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildExplicit_spec__3___closed__11);
if (v_isShared_4445_ == 0)
{
lean_ctor_set(v___x_4444_, 1, v___x_4434_);
lean_ctor_set(v___x_4444_, 0, v___x_4447_);
v___x_4449_ = v___x_4444_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v___x_4447_);
lean_ctor_set(v_reuseFailAlloc_4459_, 1, v___x_4434_);
v___x_4449_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v_fst_4454_; lean_object* v_snd_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4449_);
lean_ctor_set(v___x_4450_, 1, v___x_4414_);
v___x_4451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4451_, 0, v___x_4436_);
lean_ctor_set(v___x_4451_, 1, v___x_4450_);
v___x_4452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4452_, 0, v___x_4446_);
lean_ctor_set(v___x_4452_, 1, v___x_4451_);
v___x_4453_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_4428_, v___x_4452_, v_snd_4442_);
v_fst_4454_ = lean_ctor_get(v___x_4453_, 0);
lean_inc(v_fst_4454_);
v_snd_4455_ = lean_ctor_get(v___x_4453_, 1);
lean_inc(v_snd_4455_);
lean_dec_ref(v___x_4453_);
v___x_4456_ = l_List_appendTR___redArg(v_fst_4441_, v_fst_4420_);
v___x_4457_ = l_List_appendTR___redArg(v___x_4456_, v_fst_4454_);
lean_inc(v___y_4383_);
v___x_4458_ = lp_lean_x2dftml_LeanFtml_wrapListTokens(v_tag_4305_, v_scored_4306_, v_isSynth_4311_, v___y_4382_, v___x_4457_, v___y_4383_, v_snd_4455_, v___y_4381_);
return v___x_4458_;
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
lean_object* v___x_4466_; 
lean_dec(v_trimmedBody_4397_);
lean_dec(v___y_4382_);
lean_dec(v___y_4379_);
lean_dec(v___y_4378_);
lean_dec(v_tag_4305_);
v___x_4466_ = lp_lean_x2dftml_LeanFtml_dissolveBlock(v_toks_4312_, v___y_4381_);
return v___x_4466_;
}
}
}
v___jp_4467_:
{
lean_object* v___x_4469_; lean_object* v_snd_4470_; lean_object* v_fst_4471_; lean_object* v_fst_4472_; lean_object* v_snd_4473_; lean_object* v___x_4474_; lean_object* v_fst_4475_; lean_object* v_snd_4476_; lean_object* v_body_4477_; 
v___x_4469_ = lp_lean_x2dftml_LeanFtml_maskNested(v_body0_4308_, v_blocks_4313_);
v_snd_4470_ = lean_ctor_get(v___x_4469_, 1);
lean_inc(v_snd_4470_);
v_fst_4471_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_fst_4471_);
lean_dec_ref(v___x_4469_);
v_fst_4472_ = lean_ctor_get(v_snd_4470_, 0);
lean_inc(v_fst_4472_);
v_snd_4473_ = lean_ctor_get(v_snd_4470_, 1);
lean_inc(v_snd_4473_);
lean_dec(v_snd_4470_);
v___x_4474_ = lp_lean_x2dftml_LeanFtml_maskNative(v_fst_4471_, v_toks_4312_);
v_fst_4475_ = lean_ctor_get(v___x_4474_, 0);
lean_inc(v_fst_4475_);
v_snd_4476_ = lean_ctor_get(v___x_4474_, 1);
lean_inc(v_snd_4476_);
lean_dec_ref(v___x_4474_);
v_body_4477_ = lp_lean_x2dftml_LeanFtml_dissolveNestedUpper(v_fst_4475_);
if (v_residual_4309_ == 0)
{
lean_object* v___x_4478_; 
v___x_4478_ = lean_box(0);
v___y_4378_ = v_fst_4472_;
v___y_4379_ = v_snd_4476_;
v___y_4380_ = v_body_4477_;
v___y_4381_ = v_snd_4473_;
v___y_4382_ = v___y_4468_;
v___y_4383_ = v___x_4478_;
goto v___jp_4377_;
}
else
{
lean_object* v___x_4479_; 
v___x_4479_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildExplicit___closed__12, &lp_lean_x2dftml_LeanFtml_buildExplicit___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_buildExplicit___closed__12);
v___y_4378_ = v_fst_4472_;
v___y_4379_ = v_snd_4476_;
v___y_4380_ = v_body_4477_;
v___y_4381_ = v_snd_4473_;
v___y_4382_ = v___y_4468_;
v___y_4383_ = v___x_4479_;
goto v___jp_4377_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildExplicit___boxed(lean_object* v_tag_4483_, lean_object* v_scored_4484_, lean_object* v_attrStr_4485_, lean_object* v_body0_4486_, lean_object* v_residual_4487_, lean_object* v_unclosed_4488_, lean_object* v_isSynth_4489_, lean_object* v_toks_4490_, lean_object* v_blocks_4491_){
_start:
{
uint8_t v_scored_boxed_4492_; uint8_t v_residual_boxed_4493_; uint8_t v_unclosed_boxed_4494_; uint8_t v_isSynth_boxed_4495_; lean_object* v_res_4496_; 
v_scored_boxed_4492_ = lean_unbox(v_scored_4484_);
v_residual_boxed_4493_ = lean_unbox(v_residual_4487_);
v_unclosed_boxed_4494_ = lean_unbox(v_unclosed_4488_);
v_isSynth_boxed_4495_ = lean_unbox(v_isSynth_4489_);
v_res_4496_ = lp_lean_x2dftml_LeanFtml_buildExplicit(v_tag_4483_, v_scored_boxed_4492_, v_attrStr_4485_, v_body0_4486_, v_residual_boxed_4493_, v_unclosed_boxed_4494_, v_isSynth_boxed_4495_, v_toks_4490_, v_blocks_4491_);
lean_dec(v_attrStr_4485_);
return v_res_4496_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1(void){
_start:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4498_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__0));
v___x_4499_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4498_);
return v___x_4499_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3(void){
_start:
{
lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___x_4501_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__2));
v___x_4502_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4501_);
return v___x_4502_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go(lean_object* v_a_4503_, lean_object* v_a_4504_){
_start:
{
if (lean_obj_tag(v_a_4503_) == 0)
{
lean_dec(v_a_4504_);
return v_a_4503_;
}
else
{
lean_object* v_zero_4505_; uint8_t v_isZero_4506_; 
v_zero_4505_ = lean_unsigned_to_nat(0u);
v_isZero_4506_ = lean_nat_dec_eq(v_a_4504_, v_zero_4505_);
if (v_isZero_4506_ == 1)
{
lean_object* v___x_4507_; 
lean_dec(v_a_4504_);
lean_dec(v_a_4503_);
v___x_4507_ = lean_box(0);
return v___x_4507_;
}
else
{
lean_object* v_one_4508_; lean_object* v_n_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
v_one_4508_ = lean_unsigned_to_nat(1u);
v_n_4509_ = lean_nat_sub(v_a_4504_, v_one_4508_);
lean_dec(v_a_4504_);
v___x_4510_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1, &lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1);
lean_inc(v_a_4503_);
v___x_4511_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4510_, v_a_4503_);
if (lean_obj_tag(v___x_4511_) == 0)
{
lean_object* v___x_4512_; lean_object* v___x_4513_; 
v___x_4512_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3, &lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3);
lean_inc(v_a_4503_);
v___x_4513_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4512_, v_a_4503_);
if (lean_obj_tag(v___x_4513_) == 0)
{
lean_object* v___x_4514_; lean_object* v___y_4516_; 
v___x_4514_ = l_List_head_x21___redArg(v_zero_4505_, v_a_4503_);
if (lean_obj_tag(v_a_4503_) == 0)
{
v___y_4516_ = v_a_4503_;
goto v___jp_4515_;
}
else
{
lean_object* v_tail_4519_; 
v_tail_4519_ = lean_ctor_get(v_a_4503_, 1);
lean_inc(v_tail_4519_);
lean_dec_ref_known(v_a_4503_, 2);
v___y_4516_ = v_tail_4519_;
goto v___jp_4515_;
}
v___jp_4515_:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; 
v___x_4517_ = lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go(v___y_4516_, v_n_4509_);
v___x_4518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4514_);
lean_ctor_set(v___x_4518_, 1, v___x_4517_);
return v___x_4518_;
}
}
else
{
lean_object* v_val_4520_; 
lean_dec(v_a_4503_);
v_val_4520_ = lean_ctor_get(v___x_4513_, 0);
lean_inc(v_val_4520_);
lean_dec_ref_known(v___x_4513_, 1);
v_a_4503_ = v_val_4520_;
v_a_4504_ = v_n_4509_;
goto _start;
}
}
else
{
lean_object* v_val_4522_; 
lean_dec(v_a_4503_);
v_val_4522_ = lean_ctor_get(v___x_4511_, 0);
lean_inc(v_val_4522_);
lean_dec_ref_known(v___x_4511_, 1);
v_a_4503_ = v_val_4522_;
v_a_4504_ = v_n_4509_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripBlockCloserTag(lean_object* v_bs_4524_){
_start:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4525_ = l_List_lengthTR___redArg(v_bs_4524_);
v___x_4526_ = lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go(v_bs_4524_, v___x_4525_);
return v___x_4526_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastLiCloseIdx_go(lean_object* v_a_4527_, lean_object* v_a_4528_, lean_object* v_a_4529_){
_start:
{
if (lean_obj_tag(v_a_4528_) == 0)
{
lean_dec(v_a_4527_);
return v_a_4529_;
}
else
{
lean_object* v_tail_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; 
v_tail_4530_ = lean_ctor_get(v_a_4528_, 1);
lean_inc(v_tail_4530_);
v___x_4531_ = lean_unsigned_to_nat(1u);
v___x_4532_ = lean_nat_add(v_a_4527_, v___x_4531_);
v___x_4533_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_liMatchAt___closed__1);
v___x_4534_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4533_, v_a_4528_);
if (lean_obj_tag(v___x_4534_) == 0)
{
lean_dec(v_a_4527_);
v_a_4527_ = v___x_4532_;
v_a_4528_ = v_tail_4530_;
goto _start;
}
else
{
lean_object* v___x_4537_; uint8_t v_isShared_4538_; uint8_t v_isSharedCheck_4543_; 
lean_dec(v_a_4529_);
v_isSharedCheck_4543_ = !lean_is_exclusive(v___x_4534_);
if (v_isSharedCheck_4543_ == 0)
{
lean_object* v_unused_4544_; 
v_unused_4544_ = lean_ctor_get(v___x_4534_, 0);
lean_dec(v_unused_4544_);
v___x_4537_ = v___x_4534_;
v_isShared_4538_ = v_isSharedCheck_4543_;
goto v_resetjp_4536_;
}
else
{
lean_dec(v___x_4534_);
v___x_4537_ = lean_box(0);
v_isShared_4538_ = v_isSharedCheck_4543_;
goto v_resetjp_4536_;
}
v_resetjp_4536_:
{
lean_object* v___x_4540_; 
if (v_isShared_4538_ == 0)
{
lean_ctor_set(v___x_4537_, 0, v_a_4527_);
v___x_4540_ = v___x_4537_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v_a_4527_);
v___x_4540_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
v_a_4527_ = v___x_4532_;
v_a_4528_ = v_tail_4530_;
v_a_4529_ = v___x_4540_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastLiCloseIdx(lean_object* v_bs_4545_){
_start:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4546_ = lean_unsigned_to_nat(0u);
v___x_4547_ = lean_box(0);
v___x_4548_ = lp_lean_x2dftml_LeanFtml_lastLiCloseIdx_go(v___x_4546_, v_bs_4545_, v___x_4547_);
return v___x_4548_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_foldNewlineRun3_go(lean_object* v_a_4549_, lean_object* v_a_4550_, lean_object* v_a_4551_){
_start:
{
lean_object* v___y_4553_; 
if (lean_obj_tag(v_a_4551_) == 0)
{
lean_object* v___x_4557_; uint8_t v___x_4558_; 
v___x_4557_ = lean_unsigned_to_nat(2u);
v___x_4558_ = lean_nat_dec_le(v_a_4550_, v___x_4557_);
if (v___x_4558_ == 0)
{
lean_dec(v_a_4550_);
v___y_4553_ = v___x_4557_;
goto v___jp_4552_;
}
else
{
v___y_4553_ = v_a_4550_;
goto v___jp_4552_;
}
}
else
{
lean_object* v_head_4559_; lean_object* v_tail_4560_; lean_object* v___x_4562_; uint8_t v_isShared_4563_; uint8_t v_isSharedCheck_4583_; 
v_head_4559_ = lean_ctor_get(v_a_4551_, 0);
v_tail_4560_ = lean_ctor_get(v_a_4551_, 1);
v_isSharedCheck_4583_ = !lean_is_exclusive(v_a_4551_);
if (v_isSharedCheck_4583_ == 0)
{
v___x_4562_ = v_a_4551_;
v_isShared_4563_ = v_isSharedCheck_4583_;
goto v_resetjp_4561_;
}
else
{
lean_inc(v_tail_4560_);
lean_inc(v_head_4559_);
lean_dec(v_a_4551_);
v___x_4562_ = lean_box(0);
v_isShared_4563_ = v_isSharedCheck_4583_;
goto v_resetjp_4561_;
}
v_resetjp_4561_:
{
lean_object* v___y_4565_; lean_object* v___x_4576_; uint8_t v___x_4577_; 
v___x_4576_ = lean_unsigned_to_nat(10u);
v___x_4577_ = lean_nat_dec_eq(v_head_4559_, v___x_4576_);
if (v___x_4577_ == 0)
{
lean_object* v___x_4578_; uint8_t v___x_4579_; 
v___x_4578_ = lean_unsigned_to_nat(2u);
v___x_4579_ = lean_nat_dec_le(v_a_4550_, v___x_4578_);
if (v___x_4579_ == 0)
{
lean_dec(v_a_4550_);
v___y_4565_ = v___x_4578_;
goto v___jp_4564_;
}
else
{
v___y_4565_ = v_a_4550_;
goto v___jp_4564_;
}
}
else
{
lean_object* v___x_4580_; lean_object* v___x_4581_; 
lean_del_object(v___x_4562_);
lean_dec(v_head_4559_);
v___x_4580_ = lean_unsigned_to_nat(1u);
v___x_4581_ = lean_nat_add(v_a_4550_, v___x_4580_);
lean_dec(v_a_4550_);
v_a_4550_ = v___x_4581_;
v_a_4551_ = v_tail_4560_;
goto _start;
}
v___jp_4564_:
{
lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4571_; 
v___x_4566_ = lean_unsigned_to_nat(10u);
v___x_4567_ = l_List_replicateTR___redArg(v___y_4565_, v___x_4566_);
v___x_4568_ = l_List_appendTR___redArg(v_a_4549_, v___x_4567_);
v___x_4569_ = lean_box(0);
if (v_isShared_4563_ == 0)
{
lean_ctor_set(v___x_4562_, 1, v___x_4569_);
v___x_4571_ = v___x_4562_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_head_4559_);
lean_ctor_set(v_reuseFailAlloc_4575_, 1, v___x_4569_);
v___x_4571_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4572_ = l_List_appendTR___redArg(v___x_4568_, v___x_4571_);
v___x_4573_ = lean_unsigned_to_nat(0u);
v_a_4549_ = v___x_4572_;
v_a_4550_ = v___x_4573_;
v_a_4551_ = v_tail_4560_;
goto _start;
}
}
}
}
v___jp_4552_:
{
lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v___x_4554_ = lean_unsigned_to_nat(10u);
v___x_4555_ = l_List_replicateTR___redArg(v___y_4553_, v___x_4554_);
v___x_4556_ = l_List_appendTR___redArg(v_a_4549_, v___x_4555_);
return v___x_4556_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_foldNewlineRun3(lean_object* v_bs_4584_){
_start:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4585_ = lean_box(0);
v___x_4586_ = lean_unsigned_to_nat(0u);
v___x_4587_ = lp_lean_x2dftml_LeanFtml_foldNewlineRun3_go(v___x_4585_, v___x_4586_, v_bs_4584_);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_absorbLastLiTail(lean_object* v_bs_4588_){
_start:
{
lean_object* v___x_4589_; 
lean_inc(v_bs_4588_);
v___x_4589_ = lp_lean_x2dftml_LeanFtml_lastLiCloseIdx(v_bs_4588_);
if (lean_obj_tag(v___x_4589_) == 0)
{
return v_bs_4588_;
}
else
{
lean_object* v_val_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v_close_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v_tail_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; 
v_val_4590_ = lean_ctor_get(v___x_4589_, 0);
lean_inc_n(v_val_4590_, 2);
lean_dec_ref_known(v___x_4589_, 1);
v___x_4591_ = lean_unsigned_to_nat(7u);
v___x_4592_ = l_List_drop___redArg(v_val_4590_, v_bs_4588_);
v___x_4593_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_4592_);
v_close_4594_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_4592_, v___x_4592_, v___x_4591_, v___x_4593_);
lean_dec(v___x_4592_);
v___x_4595_ = lean_nat_add(v_val_4590_, v___x_4591_);
v___x_4596_ = l_List_drop___redArg(v___x_4595_, v_bs_4588_);
v_tail_4597_ = lp_lean_x2dftml_LeanFtml_foldNewlineRun3(v___x_4596_);
lean_inc(v_bs_4588_);
v___x_4598_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_4588_, v_bs_4588_, v_val_4590_, v___x_4593_);
lean_dec(v_bs_4588_);
v___x_4599_ = l_List_appendTR___redArg(v___x_4598_, v_tail_4597_);
v___x_4600_ = l_List_appendTR___redArg(v___x_4599_, v_close_4594_);
return v___x_4600_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_absorbTailTrim(lean_object* v_bs_4601_){
_start:
{
lean_object* v___x_4602_; 
lean_inc(v_bs_4601_);
v___x_4602_ = lp_lean_x2dftml_LeanFtml_lastLiCloseIdx(v_bs_4601_);
if (lean_obj_tag(v___x_4602_) == 0)
{
return v_bs_4601_;
}
else
{
lean_object* v_val_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v_close_4607_; lean_object* v___x_4608_; lean_object* v_tail_4609_; lean_object* v_t_4610_; lean_object* v___x_4611_; lean_object* v___y_4613_; uint8_t v___x_4616_; 
v_val_4603_ = lean_ctor_get(v___x_4602_, 0);
lean_inc_n(v_val_4603_, 2);
lean_dec_ref_known(v___x_4602_, 1);
v___x_4604_ = lean_unsigned_to_nat(7u);
v___x_4605_ = l_List_drop___redArg(v_val_4603_, v_bs_4601_);
v___x_4606_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_4605_);
v_close_4607_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_4605_, v___x_4605_, v___x_4604_, v___x_4606_);
lean_dec(v___x_4605_);
v___x_4608_ = lean_nat_add(v_val_4603_, v___x_4604_);
v_tail_4609_ = l_List_drop___redArg(v___x_4608_, v_bs_4601_);
v_t_4610_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_tail_4609_);
lean_inc(v_bs_4601_);
v___x_4611_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_4601_, v_bs_4601_, v_val_4603_, v___x_4606_);
lean_dec(v_bs_4601_);
v___x_4616_ = l_List_isEmpty___redArg(v_t_4610_);
if (v___x_4616_ == 0)
{
lean_dec(v_tail_4609_);
v___y_4613_ = v_t_4610_;
goto v___jp_4612_;
}
else
{
lean_dec(v_t_4610_);
v___y_4613_ = v_tail_4609_;
goto v___jp_4612_;
}
v___jp_4612_:
{
lean_object* v___x_4614_; lean_object* v___x_4615_; 
v___x_4614_ = l_List_appendTR___redArg(v___x_4611_, v___y_4613_);
v___x_4615_ = l_List_appendTR___redArg(v___x_4614_, v_close_4607_);
return v___x_4615_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_absorbTailTrimScored(lean_object* v_bs_4617_){
_start:
{
lean_object* v___x_4618_; 
lean_inc(v_bs_4617_);
v___x_4618_ = lp_lean_x2dftml_LeanFtml_lastLiCloseIdx(v_bs_4617_);
if (lean_obj_tag(v___x_4618_) == 0)
{
return v_bs_4617_;
}
else
{
lean_object* v_val_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v_close_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v_val_4619_ = lean_ctor_get(v___x_4618_, 0);
lean_inc_n(v_val_4619_, 3);
lean_dec_ref_known(v___x_4618_, 1);
v___x_4620_ = lean_unsigned_to_nat(7u);
v___x_4621_ = l_List_drop___redArg(v_val_4619_, v_bs_4617_);
v___x_4622_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_4621_);
v_close_4623_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_4621_, v___x_4621_, v___x_4620_, v___x_4622_);
lean_dec(v___x_4621_);
lean_inc(v_bs_4617_);
v___x_4624_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_4617_, v_bs_4617_, v_val_4619_, v___x_4622_);
v___x_4625_ = lean_nat_add(v_val_4619_, v___x_4620_);
lean_dec(v_val_4619_);
v___x_4626_ = l_List_drop___redArg(v___x_4625_, v_bs_4617_);
lean_dec(v_bs_4617_);
v___x_4627_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_4626_);
lean_dec(v___x_4626_);
v___x_4628_ = l_List_appendTR___redArg(v___x_4624_, v___x_4627_);
v___x_4629_ = l_List_appendTR___redArg(v___x_4628_, v_close_4623_);
return v___x_4629_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degradeOneBody_go(lean_object* v_a_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_){
_start:
{
lean_object* v___y_4634_; lean_object* v___y_4635_; lean_object* v___y_4636_; lean_object* v___y_4637_; lean_object* v___y_4643_; lean_object* v___y_4644_; lean_object* v___y_4645_; lean_object* v___y_4651_; lean_object* v___y_4652_; lean_object* v_val_4655_; 
if (lean_obj_tag(v_a_4631_) == 0)
{
lean_object* v___x_4667_; 
lean_dec(v_a_4632_);
lean_dec(v_a_4630_);
v___x_4667_ = lean_box(0);
return v___x_4667_;
}
else
{
lean_object* v_tail_4668_; lean_object* v_zero_4669_; uint8_t v_isZero_4670_; 
v_tail_4668_ = lean_ctor_get(v_a_4631_, 1);
lean_inc(v_tail_4668_);
v_zero_4669_ = lean_unsigned_to_nat(0u);
v_isZero_4670_ = lean_nat_dec_eq(v_a_4632_, v_zero_4669_);
if (v_isZero_4670_ == 1)
{
lean_object* v___x_4671_; 
lean_dec_ref_known(v_a_4631_, 2);
lean_dec(v_tail_4668_);
lean_dec(v_a_4632_);
lean_dec(v_a_4630_);
v___x_4671_ = lean_box(0);
return v___x_4671_;
}
else
{
lean_object* v___x_4672_; lean_object* v___x_4673_; 
v___x_4672_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1, &lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1);
lean_inc_ref(v_a_4631_);
v___x_4673_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4672_, v_a_4631_);
if (lean_obj_tag(v___x_4673_) == 0)
{
lean_object* v___x_4674_; lean_object* v___x_4675_; 
v___x_4674_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3, &lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3);
lean_inc_ref(v_a_4631_);
v___x_4675_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4674_, v_a_4631_);
if (lean_obj_tag(v___x_4675_) == 0)
{
lean_object* v_one_4676_; lean_object* v_n_4677_; lean_object* v___x_4678_; lean_object* v___x_4680_; uint8_t v_isShared_4681_; uint8_t v_isSharedCheck_4686_; 
v_one_4676_ = lean_unsigned_to_nat(1u);
v_n_4677_ = lean_nat_sub(v_a_4632_, v_one_4676_);
lean_dec(v_a_4632_);
v___x_4678_ = l_List_head_x21___redArg(v_zero_4669_, v_a_4631_);
v_isSharedCheck_4686_ = !lean_is_exclusive(v_a_4631_);
if (v_isSharedCheck_4686_ == 0)
{
lean_object* v_unused_4687_; lean_object* v_unused_4688_; 
v_unused_4687_ = lean_ctor_get(v_a_4631_, 1);
lean_dec(v_unused_4687_);
v_unused_4688_ = lean_ctor_get(v_a_4631_, 0);
lean_dec(v_unused_4688_);
v___x_4680_ = v_a_4631_;
v_isShared_4681_ = v_isSharedCheck_4686_;
goto v_resetjp_4679_;
}
else
{
lean_dec(v_a_4631_);
v___x_4680_ = lean_box(0);
v_isShared_4681_ = v_isSharedCheck_4686_;
goto v_resetjp_4679_;
}
v_resetjp_4679_:
{
lean_object* v___x_4683_; 
if (v_isShared_4681_ == 0)
{
lean_ctor_set(v___x_4680_, 1, v_a_4630_);
lean_ctor_set(v___x_4680_, 0, v___x_4678_);
v___x_4683_ = v___x_4680_;
goto v_reusejp_4682_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v___x_4678_);
lean_ctor_set(v_reuseFailAlloc_4685_, 1, v_a_4630_);
v___x_4683_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4682_;
}
v_reusejp_4682_:
{
v_a_4630_ = v___x_4683_;
v_a_4631_ = v_tail_4668_;
v_a_4632_ = v_n_4677_;
goto _start;
}
}
}
else
{
lean_object* v_val_4689_; 
lean_dec_ref_known(v_a_4631_, 2);
lean_dec(v_tail_4668_);
lean_dec(v_a_4632_);
v_val_4689_ = lean_ctor_get(v___x_4675_, 0);
lean_inc(v_val_4689_);
lean_dec_ref_known(v___x_4675_, 1);
v_val_4655_ = v_val_4689_;
goto v___jp_4654_;
}
}
else
{
lean_object* v_val_4690_; 
lean_dec_ref_known(v_a_4631_, 2);
lean_dec(v_tail_4668_);
lean_dec(v_a_4632_);
v_val_4690_ = lean_ctor_get(v___x_4673_, 0);
lean_inc(v_val_4690_);
lean_dec_ref_known(v___x_4673_, 1);
v_val_4655_ = v_val_4690_;
goto v___jp_4654_;
}
}
}
v___jp_4633_:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; 
lean_inc(v___y_4637_);
v___x_4638_ = l_List_appendTR___redArg(v___y_4636_, v___y_4637_);
v___x_4639_ = l_List_drop___redArg(v___y_4635_, v___y_4634_);
lean_dec(v___y_4634_);
v___x_4640_ = l_List_appendTR___redArg(v___x_4638_, v___x_4639_);
v___x_4641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4640_);
return v___x_4641_;
}
v___jp_4642_:
{
lean_object* v___x_4646_; uint8_t v___x_4647_; 
v___x_4646_ = lean_unsigned_to_nat(2u);
v___x_4647_ = lean_nat_dec_le(v___x_4646_, v___y_4644_);
if (v___x_4647_ == 0)
{
lean_object* v___x_4648_; 
v___x_4648_ = lean_box(0);
v___y_4634_ = v___y_4643_;
v___y_4635_ = v___y_4644_;
v___y_4636_ = v___y_4645_;
v___y_4637_ = v___x_4648_;
goto v___jp_4633_;
}
else
{
lean_object* v___x_4649_; 
v___x_4649_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___y_4634_ = v___y_4643_;
v___y_4635_ = v___y_4644_;
v___y_4636_ = v___y_4645_;
v___y_4637_ = v___x_4649_;
goto v___jp_4633_;
}
}
v___jp_4650_:
{
lean_object* v___x_4653_; 
v___x_4653_ = l_List_reverse___redArg(v_a_4630_);
v___y_4643_ = v___y_4651_;
v___y_4644_ = v___y_4652_;
v___y_4645_ = v___x_4653_;
goto v___jp_4642_;
}
v___jp_4654_:
{
lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v_nls_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; 
v___x_4656_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_val_4655_);
v___x_4657_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v_val_4655_, v_val_4655_, v___x_4656_);
v_nls_4658_ = l_List_lengthTR___redArg(v___x_4657_);
lean_dec(v___x_4657_);
lean_inc(v_a_4630_);
v___x_4659_ = l_List_reverse___redArg(v_a_4630_);
v___x_4660_ = l_List_getLast_x3f___redArg(v___x_4659_);
if (lean_obj_tag(v___x_4660_) == 1)
{
lean_object* v_val_4661_; lean_object* v___x_4662_; uint8_t v___x_4663_; 
v_val_4661_ = lean_ctor_get(v___x_4660_, 0);
lean_inc(v_val_4661_);
lean_dec_ref_known(v___x_4660_, 1);
v___x_4662_ = lean_unsigned_to_nat(10u);
v___x_4663_ = lean_nat_dec_eq(v_val_4661_, v___x_4662_);
lean_dec(v_val_4661_);
if (v___x_4663_ == 0)
{
lean_dec(v___x_4659_);
v___y_4651_ = v_val_4655_;
v___y_4652_ = v_nls_4658_;
goto v___jp_4650_;
}
else
{
lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; 
lean_dec(v_a_4630_);
v___x_4664_ = lean_array_mk(v___x_4659_);
v___x_4665_ = lean_array_pop(v___x_4664_);
v___x_4666_ = lean_array_to_list(v___x_4665_);
v___y_4643_ = v_val_4655_;
v___y_4644_ = v_nls_4658_;
v___y_4645_ = v___x_4666_;
goto v___jp_4642_;
}
}
else
{
lean_dec(v___x_4660_);
lean_dec(v___x_4659_);
v___y_4651_ = v_val_4655_;
v___y_4652_ = v_nls_4658_;
goto v___jp_4650_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degradeOneBody(lean_object* v_bs_4691_){
_start:
{
lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4692_ = lean_box(0);
v___x_4693_ = l_List_lengthTR___redArg(v_bs_4691_);
v___x_4694_ = lp_lean_x2dftml_LeanFtml_degradeOneBody_go(v___x_4692_, v_bs_4691_, v___x_4693_);
return v___x_4694_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_degradeRawBody_go_spec__0(lean_object* v_x_4695_){
_start:
{
if (lean_obj_tag(v_x_4695_) == 0)
{
return v_x_4695_;
}
else
{
lean_object* v_head_4696_; lean_object* v_tail_4697_; lean_object* v___x_4698_; uint8_t v___x_4699_; 
v_head_4696_ = lean_ctor_get(v_x_4695_, 0);
v_tail_4697_ = lean_ctor_get(v_x_4695_, 1);
v___x_4698_ = lean_unsigned_to_nat(10u);
v___x_4699_ = lean_nat_dec_eq(v_head_4696_, v___x_4698_);
if (v___x_4699_ == 0)
{
lean_inc_ref(v_x_4695_);
return v_x_4695_;
}
else
{
v_x_4695_ = v_tail_4697_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_degradeRawBody_go_spec__0___boxed(lean_object* v_x_4701_){
_start:
{
lean_object* v_res_4702_; 
v_res_4702_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_degradeRawBody_go_spec__0(v_x_4701_);
lean_dec(v_x_4701_);
return v_res_4702_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degradeRawBody_go(lean_object* v_a_4703_, lean_object* v_a_4704_){
_start:
{
lean_object* v_zero_4705_; uint8_t v_isZero_4706_; 
v_zero_4705_ = lean_unsigned_to_nat(0u);
v_isZero_4706_ = lean_nat_dec_eq(v_a_4704_, v_zero_4705_);
if (v_isZero_4706_ == 1)
{
lean_dec(v_a_4704_);
return v_a_4703_;
}
else
{
lean_object* v___x_4707_; 
lean_inc(v_a_4703_);
v___x_4707_ = lp_lean_x2dftml_LeanFtml_degradeOneBody(v_a_4703_);
if (lean_obj_tag(v___x_4707_) == 0)
{
lean_dec(v_a_4704_);
return v_a_4703_;
}
else
{
lean_object* v_val_4708_; lean_object* v_one_4709_; lean_object* v_n_4710_; lean_object* v___y_4712_; uint8_t v___x_4715_; 
v_val_4708_ = lean_ctor_get(v___x_4707_, 0);
lean_inc(v_val_4708_);
lean_dec_ref_known(v___x_4707_, 1);
v_one_4709_ = lean_unsigned_to_nat(1u);
v_n_4710_ = lean_nat_sub(v_a_4704_, v_one_4709_);
lean_dec(v_a_4704_);
v___x_4715_ = lp_lean_x2dftml_List_any___at___00LeanFtml_freelinkProcess_spec__0(v_val_4708_);
if (v___x_4715_ == 0)
{
v___y_4712_ = v_val_4708_;
goto v___jp_4711_;
}
else
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4716_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_degradeRawBody_go_spec__0(v_val_4708_);
lean_dec(v_val_4708_);
v___x_4717_ = l_List_reverse___redArg(v___x_4716_);
v___x_4718_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_degradeRawBody_go_spec__0(v___x_4717_);
lean_dec(v___x_4717_);
v___x_4719_ = l_List_reverse___redArg(v___x_4718_);
v___y_4712_ = v___x_4719_;
goto v___jp_4711_;
}
v___jp_4711_:
{
uint8_t v___x_4713_; 
v___x_4713_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___y_4712_, v_a_4703_);
lean_dec(v_a_4703_);
if (v___x_4713_ == 0)
{
v_a_4703_ = v___y_4712_;
v_a_4704_ = v_n_4710_;
goto _start;
}
else
{
lean_dec(v_n_4710_);
return v___y_4712_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degradeRawBody(lean_object* v_bs_4720_){
_start:
{
lean_object* v___x_4721_; lean_object* v___x_4722_; 
v___x_4721_ = l_List_lengthTR___redArg(v_bs_4720_);
v___x_4722_ = lp_lean_x2dftml_LeanFtml_degradeRawBody_go(v_bs_4720_, v___x_4721_);
return v___x_4722_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastCloserTail_go(lean_object* v_a_4723_, lean_object* v_a_4724_, lean_object* v_a_4725_){
_start:
{
if (lean_obj_tag(v_a_4724_) == 0)
{
lean_object* v___x_4726_; 
lean_dec(v_a_4725_);
v___x_4726_ = l_List_reverse___redArg(v_a_4723_);
return v___x_4726_;
}
else
{
lean_object* v_tail_4727_; lean_object* v_zero_4728_; uint8_t v_isZero_4729_; 
v_tail_4727_ = lean_ctor_get(v_a_4724_, 1);
lean_inc(v_tail_4727_);
v_zero_4728_ = lean_unsigned_to_nat(0u);
v_isZero_4729_ = lean_nat_dec_eq(v_a_4725_, v_zero_4728_);
if (v_isZero_4729_ == 1)
{
lean_object* v___x_4730_; 
lean_dec_ref_known(v_a_4724_, 2);
lean_dec(v_tail_4727_);
lean_dec(v_a_4725_);
lean_dec(v_a_4723_);
v___x_4730_ = lean_box(0);
return v___x_4730_;
}
else
{
lean_object* v_one_4731_; lean_object* v_n_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; 
v_one_4731_ = lean_unsigned_to_nat(1u);
v_n_4732_ = lean_nat_sub(v_a_4725_, v_one_4731_);
lean_dec(v_a_4725_);
v___x_4733_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1, &lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__1);
lean_inc_ref(v_a_4724_);
v___x_4734_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4733_, v_a_4724_);
if (lean_obj_tag(v___x_4734_) == 0)
{
lean_object* v___x_4735_; lean_object* v___x_4736_; 
v___x_4735_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3, &lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_stripBlockCloserTag_go___closed__3);
lean_inc_ref(v_a_4724_);
v___x_4736_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4735_, v_a_4724_);
if (lean_obj_tag(v___x_4736_) == 0)
{
lean_object* v___x_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4745_; 
v___x_4737_ = l_List_head_x21___redArg(v_zero_4728_, v_a_4724_);
v_isSharedCheck_4745_ = !lean_is_exclusive(v_a_4724_);
if (v_isSharedCheck_4745_ == 0)
{
lean_object* v_unused_4746_; lean_object* v_unused_4747_; 
v_unused_4746_ = lean_ctor_get(v_a_4724_, 1);
lean_dec(v_unused_4746_);
v_unused_4747_ = lean_ctor_get(v_a_4724_, 0);
lean_dec(v_unused_4747_);
v___x_4739_ = v_a_4724_;
v_isShared_4740_ = v_isSharedCheck_4745_;
goto v_resetjp_4738_;
}
else
{
lean_dec(v_a_4724_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4745_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
lean_ctor_set(v___x_4739_, 1, v_a_4723_);
lean_ctor_set(v___x_4739_, 0, v___x_4737_);
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4744_; 
v_reuseFailAlloc_4744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4744_, 0, v___x_4737_);
lean_ctor_set(v_reuseFailAlloc_4744_, 1, v_a_4723_);
v___x_4742_ = v_reuseFailAlloc_4744_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
v_a_4723_ = v___x_4742_;
v_a_4724_ = v_tail_4727_;
v_a_4725_ = v_n_4732_;
goto _start;
}
}
}
else
{
lean_object* v_val_4748_; 
lean_dec_ref_known(v_a_4724_, 2);
lean_dec(v_tail_4727_);
lean_dec(v_a_4723_);
v_val_4748_ = lean_ctor_get(v___x_4736_, 0);
lean_inc_n(v_val_4748_, 2);
lean_dec_ref_known(v___x_4736_, 1);
v_a_4723_ = v_val_4748_;
v_a_4724_ = v_val_4748_;
v_a_4725_ = v_n_4732_;
goto _start;
}
}
else
{
lean_object* v_val_4750_; 
lean_dec_ref_known(v_a_4724_, 2);
lean_dec(v_tail_4727_);
lean_dec(v_a_4723_);
v_val_4750_ = lean_ctor_get(v___x_4734_, 0);
lean_inc_n(v_val_4750_, 2);
lean_dec_ref_known(v___x_4734_, 1);
v_a_4723_ = v_val_4750_;
v_a_4724_ = v_val_4750_;
v_a_4725_ = v_n_4732_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastCloserTail(lean_object* v_bs_4752_){
_start:
{
lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4753_ = lean_box(0);
v___x_4754_ = l_List_lengthTR___redArg(v_bs_4752_);
v___x_4755_ = lp_lean_x2dftml_LeanFtml_lastCloserTail_go(v___x_4753_, v_bs_4752_, v___x_4754_);
return v___x_4755_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_syntheticUnclosed(uint8_t v_scored_4756_, uint8_t v_rawCase_4757_, lean_object* v_src_4758_){
_start:
{
if (v_scored_4756_ == 0)
{
goto v___jp_4759_;
}
else
{
if (v_rawCase_4757_ == 0)
{
lean_dec(v_src_4758_);
return v_rawCase_4757_;
}
else
{
goto v___jp_4759_;
}
}
v___jp_4759_:
{
lean_object* v___x_4760_; lean_object* v___x_4761_; uint8_t v___x_4762_; 
v___x_4760_ = lp_lean_x2dftml_LeanFtml_lastCloserTail(v_src_4758_);
v___x_4761_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_4760_);
lean_dec(v___x_4760_);
v___x_4762_ = l_List_isEmpty___redArg(v___x_4761_);
lean_dec(v___x_4761_);
return v___x_4762_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_syntheticUnclosed___boxed(lean_object* v_scored_4763_, lean_object* v_rawCase_4764_, lean_object* v_src_4765_){
_start:
{
uint8_t v_scored_boxed_4766_; uint8_t v_rawCase_boxed_4767_; uint8_t v_res_4768_; lean_object* v_r_4769_; 
v_scored_boxed_4766_ = lean_unbox(v_scored_4763_);
v_rawCase_boxed_4767_ = lean_unbox(v_rawCase_4764_);
v_res_4768_ = lp_lean_x2dftml_LeanFtml_syntheticUnclosed(v_scored_boxed_4766_, v_rawCase_boxed_4767_, v_src_4765_);
v_r_4769_ = lean_box(v_res_4768_);
return v_r_4769_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_explLoop_spec__0(lean_object* v_proseOpeners_4770_, lean_object* v_x_4771_){
_start:
{
if (lean_obj_tag(v_x_4771_) == 0)
{
lean_object* v___x_4772_; 
v___x_4772_ = lean_box(0);
return v___x_4772_;
}
else
{
lean_object* v_head_4773_; uint8_t v_isOpen_4774_; 
v_head_4773_ = lean_ctor_get(v_x_4771_, 0);
v_isOpen_4774_ = lean_ctor_get_uint8(v_head_4773_, sizeof(void*)*4);
if (v_isOpen_4774_ == 0)
{
lean_object* v_tail_4775_; 
v_tail_4775_ = lean_ctor_get(v_x_4771_, 1);
lean_inc(v_tail_4775_);
lean_dec_ref_known(v_x_4771_, 2);
v_x_4771_ = v_tail_4775_;
goto _start;
}
else
{
lean_object* v_tail_4777_; lean_object* v_tag_4778_; lean_object* v_start_4779_; uint8_t v___x_4780_; 
lean_inc(v_head_4773_);
v_tail_4777_ = lean_ctor_get(v_x_4771_, 1);
lean_inc(v_tail_4777_);
lean_dec_ref_known(v_x_4771_, 2);
v_tag_4778_ = lean_ctor_get(v_head_4773_, 0);
v_start_4779_ = lean_ctor_get(v_head_4773_, 2);
lean_inc(v_tag_4778_);
v___x_4780_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_4778_);
if (v___x_4780_ == 0)
{
lean_dec(v_head_4773_);
v_x_4771_ = v_tail_4777_;
goto _start;
}
else
{
uint8_t v___x_4782_; 
v___x_4782_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_start_4779_, v_proseOpeners_4770_);
if (v___x_4782_ == 0)
{
lean_object* v___x_4783_; 
lean_dec(v_tail_4777_);
v___x_4783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4783_, 0, v_head_4773_);
return v___x_4783_;
}
else
{
lean_dec(v_head_4773_);
v_x_4771_ = v_tail_4777_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_explLoop_spec__0___boxed(lean_object* v_proseOpeners_4785_, lean_object* v_x_4786_){
_start:
{
lean_object* v_res_4787_; 
v_res_4787_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_explLoop_spec__0(v_proseOpeners_4785_, v_x_4786_);
lean_dec(v_proseOpeners_4785_);
return v_res_4787_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_explLoop_spec__1(lean_object* v_rawBody_4788_, uint8_t v___x_4789_, lean_object* v_x_4790_){
_start:
{
if (lean_obj_tag(v_x_4790_) == 0)
{
uint8_t v___x_4791_; 
v___x_4791_ = 0;
return v___x_4791_;
}
else
{
lean_object* v_head_4792_; lean_object* v_tail_4793_; lean_object* v_startPh_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
v_head_4792_ = lean_ctor_get(v_x_4790_, 0);
v_tail_4793_ = lean_ctor_get(v_x_4790_, 1);
v_startPh_4794_ = lean_ctor_get(v_head_4792_, 0);
v___x_4795_ = lean_unsigned_to_nat(0u);
v___x_4796_ = lp_lean_x2dftml_LeanFtml_findFrom(v_startPh_4794_, v_rawBody_4788_, v___x_4795_);
if (lean_obj_tag(v___x_4796_) == 0)
{
v_x_4790_ = v_tail_4793_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_4796_, 1);
if (v___x_4789_ == 0)
{
v_x_4790_ = v_tail_4793_;
goto _start;
}
else
{
return v___x_4789_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_explLoop_spec__1___boxed(lean_object* v_rawBody_4799_, lean_object* v___x_4800_, lean_object* v_x_4801_){
_start:
{
uint8_t v___x_1195__boxed_4802_; uint8_t v_res_4803_; lean_object* v_r_4804_; 
v___x_1195__boxed_4802_ = lean_unbox(v___x_4800_);
v_res_4803_ = lp_lean_x2dftml_List_any___at___00LeanFtml_explLoop_spec__1(v_rawBody_4799_, v___x_1195__boxed_4802_, v_x_4801_);
lean_dec(v_x_4801_);
lean_dec(v_rawBody_4799_);
v_r_4804_ = lean_box(v_res_4803_);
return v_r_4804_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explLoop(lean_object* v_src_4805_, lean_object* v_toks_4806_, lean_object* v_blocks_4807_, lean_object* v_proseOpeners_4808_, lean_object* v_x_4809_){
_start:
{
lean_object* v_zero_4813_; uint8_t v_isZero_4814_; 
v_zero_4813_ = lean_unsigned_to_nat(0u);
v_isZero_4814_ = lean_nat_dec_eq(v_x_4809_, v_zero_4813_);
if (v_isZero_4814_ == 1)
{
lean_dec(v_x_4809_);
lean_dec(v_proseOpeners_4808_);
goto v___jp_4810_;
}
else
{
lean_object* v_one_4815_; lean_object* v_n_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; 
v_one_4815_ = lean_unsigned_to_nat(1u);
v_n_4816_ = lean_nat_sub(v_x_4809_, v_one_4815_);
lean_dec(v_x_4809_);
lean_inc(v_src_4805_);
v___x_4817_ = lp_lean_x2dftml_LeanFtml_scanTags(v_src_4805_);
lean_inc(v___x_4817_);
v___x_4818_ = lp_lean_x2dftml_LeanFtml_findPair(v___x_4817_);
if (lean_obj_tag(v___x_4818_) == 0)
{
lean_object* v___x_4819_; 
v___x_4819_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_explLoop_spec__0(v_proseOpeners_4808_, v___x_4817_);
if (lean_obj_tag(v___x_4819_) == 0)
{
lean_dec(v_n_4816_);
lean_dec(v_proseOpeners_4808_);
goto v___jp_4810_;
}
else
{
lean_object* v_val_4820_; lean_object* v_tag_4821_; uint8_t v_scored_4822_; lean_object* v_attrs_4823_; lean_object* v_start_4824_; lean_object* v_len_4825_; lean_object* v___x_4826_; lean_object* v_rawBody_4827_; lean_object* v___x_4828_; uint8_t v___x_4829_; lean_object* v___y_4831_; uint8_t v___y_4832_; lean_object* v___y_4843_; 
v_val_4820_ = lean_ctor_get(v___x_4819_, 0);
lean_inc(v_val_4820_);
lean_dec_ref_known(v___x_4819_, 1);
v_tag_4821_ = lean_ctor_get(v_val_4820_, 0);
lean_inc(v_tag_4821_);
v_scored_4822_ = lean_ctor_get_uint8(v_val_4820_, sizeof(void*)*4 + 1);
v_attrs_4823_ = lean_ctor_get(v_val_4820_, 1);
lean_inc(v_attrs_4823_);
v_start_4824_ = lean_ctor_get(v_val_4820_, 2);
lean_inc(v_start_4824_);
v_len_4825_ = lean_ctor_get(v_val_4820_, 3);
lean_inc(v_len_4825_);
lean_dec(v_val_4820_);
v___x_4826_ = lean_nat_add(v_start_4824_, v_len_4825_);
lean_dec(v_len_4825_);
v_rawBody_4827_ = l_List_drop___redArg(v___x_4826_, v_src_4805_);
v___x_4828_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1, &lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_liOpenerAt___closed__1);
v___x_4829_ = lp_lean_x2dftml_LeanFtml_existsLitCI(v___x_4828_, v_rawBody_4827_);
if (v___x_4829_ == 0)
{
lean_object* v___x_4847_; 
lean_dec(v_attrs_4823_);
lean_dec(v_tag_4821_);
lean_inc(v_rawBody_4827_);
v___x_4847_ = lp_lean_x2dftml_LeanFtml_degradeOneBody(v_rawBody_4827_);
if (lean_obj_tag(v___x_4847_) == 0)
{
lean_object* v___x_4848_; 
lean_dec(v_rawBody_4827_);
v___x_4848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4848_, 0, v_start_4824_);
lean_ctor_set(v___x_4848_, 1, v_proseOpeners_4808_);
v_proseOpeners_4808_ = v___x_4848_;
v_x_4809_ = v_n_4816_;
goto _start;
}
else
{
lean_object* v_bare_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; 
lean_dec_ref_known(v___x_4847_, 1);
v_bare_4850_ = lp_lean_x2dftml_LeanFtml_degradeRawBody(v_rawBody_4827_);
v___x_4851_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_src_4805_);
v___x_4852_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_4805_, v_src_4805_, v_start_4824_, v___x_4851_);
lean_dec(v_src_4805_);
v___x_4853_ = l_List_appendTR___redArg(v___x_4852_, v_bare_4850_);
v_src_4805_ = v___x_4853_;
v_x_4809_ = v_n_4816_;
goto _start;
}
}
else
{
lean_object* v_stripped_4855_; 
lean_inc(v_rawBody_4827_);
v_stripped_4855_ = lp_lean_x2dftml_LeanFtml_stripBlockCloserTag(v_rawBody_4827_);
if (v_scored_4822_ == 0)
{
goto v___jp_4856_;
}
else
{
uint8_t v___x_4858_; 
lean_inc(v_tag_4821_);
v___x_4858_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_4821_);
if (v___x_4858_ == 0)
{
goto v___jp_4856_;
}
else
{
lean_object* v___x_4859_; 
v___x_4859_ = lp_lean_x2dftml_LeanFtml_absorbTailTrimScored(v_stripped_4855_);
v___y_4843_ = v___x_4859_;
goto v___jp_4842_;
}
}
v___jp_4856_:
{
lean_object* v___x_4857_; 
v___x_4857_ = lp_lean_x2dftml_LeanFtml_absorbTailTrim(v_stripped_4855_);
v___y_4843_ = v___x_4857_;
goto v___jp_4842_;
}
}
v___jp_4830_:
{
lean_object* v___x_4833_; lean_object* v_snd_4834_; lean_object* v_fst_4835_; lean_object* v_fst_4836_; lean_object* v_snd_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; 
v___x_4833_ = lp_lean_x2dftml_LeanFtml_buildExplicit(v_tag_4821_, v_scored_4822_, v_attrs_4823_, v___y_4831_, v_isZero_4814_, v___y_4832_, v___x_4829_, v_toks_4806_, v_blocks_4807_);
lean_dec(v_attrs_4823_);
v_snd_4834_ = lean_ctor_get(v___x_4833_, 1);
lean_inc(v_snd_4834_);
v_fst_4835_ = lean_ctor_get(v___x_4833_, 0);
lean_inc(v_fst_4835_);
lean_dec_ref(v___x_4833_);
v_fst_4836_ = lean_ctor_get(v_snd_4834_, 0);
lean_inc(v_fst_4836_);
v_snd_4837_ = lean_ctor_get(v_snd_4834_, 1);
lean_inc(v_snd_4837_);
lean_dec(v_snd_4834_);
v___x_4838_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_src_4805_);
v___x_4839_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_4805_, v_src_4805_, v_start_4824_, v___x_4838_);
lean_dec(v_src_4805_);
v___x_4840_ = l_List_appendTR___redArg(v___x_4839_, v_fst_4835_);
v_src_4805_ = v___x_4840_;
v_toks_4806_ = v_fst_4836_;
v_blocks_4807_ = v_snd_4837_;
v_x_4809_ = v_n_4816_;
goto _start;
}
v___jp_4842_:
{
uint8_t v___x_4844_; uint8_t v___x_4845_; 
lean_inc(v_tag_4821_);
v___x_4844_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_4821_);
lean_inc(v_src_4805_);
v___x_4845_ = lp_lean_x2dftml_LeanFtml_syntheticUnclosed(v_scored_4822_, v___x_4844_, v_src_4805_);
if (v___x_4845_ == 0)
{
lean_dec(v_rawBody_4827_);
v___y_4831_ = v___y_4843_;
v___y_4832_ = v_isZero_4814_;
goto v___jp_4830_;
}
else
{
uint8_t v_hasNestedBlock_4846_; 
v_hasNestedBlock_4846_ = lp_lean_x2dftml_List_any___at___00LeanFtml_explLoop_spec__1(v_rawBody_4827_, v___x_4829_, v_blocks_4807_);
lean_dec(v_rawBody_4827_);
if (v_hasNestedBlock_4846_ == 0)
{
v___y_4831_ = v___y_4843_;
v___y_4832_ = v___x_4845_;
goto v___jp_4830_;
}
else
{
v___y_4831_ = v___y_4843_;
v___y_4832_ = v_isZero_4814_;
goto v___jp_4830_;
}
}
}
}
}
else
{
lean_object* v_val_4860_; lean_object* v_snd_4861_; lean_object* v_fst_4862_; lean_object* v_tag_4863_; uint8_t v_residual_4864_; lean_object* v_start_4865_; lean_object* v_len_4866_; lean_object* v_tag_4867_; uint8_t v_scored_4868_; lean_object* v_attrs_4869_; lean_object* v_start_4870_; lean_object* v_len_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v_body_4876_; uint8_t v___x_4877_; lean_object* v___x_4878_; lean_object* v_snd_4879_; lean_object* v_fst_4880_; lean_object* v_fst_4881_; lean_object* v_snd_4882_; lean_object* v___y_4884_; 
lean_dec(v___x_4817_);
v_val_4860_ = lean_ctor_get(v___x_4818_, 0);
lean_inc(v_val_4860_);
lean_dec_ref_known(v___x_4818_, 1);
v_snd_4861_ = lean_ctor_get(v_val_4860_, 1);
lean_inc(v_snd_4861_);
v_fst_4862_ = lean_ctor_get(v_val_4860_, 0);
lean_inc(v_fst_4862_);
lean_dec(v_val_4860_);
v_tag_4863_ = lean_ctor_get(v_snd_4861_, 0);
lean_inc(v_tag_4863_);
v_residual_4864_ = lean_ctor_get_uint8(v_snd_4861_, sizeof(void*)*4 + 2);
v_start_4865_ = lean_ctor_get(v_snd_4861_, 2);
lean_inc(v_start_4865_);
v_len_4866_ = lean_ctor_get(v_snd_4861_, 3);
lean_inc(v_len_4866_);
lean_dec(v_snd_4861_);
v_tag_4867_ = lean_ctor_get(v_fst_4862_, 0);
lean_inc(v_tag_4867_);
v_scored_4868_ = lean_ctor_get_uint8(v_fst_4862_, sizeof(void*)*4 + 1);
v_attrs_4869_ = lean_ctor_get(v_fst_4862_, 1);
lean_inc(v_attrs_4869_);
v_start_4870_ = lean_ctor_get(v_fst_4862_, 2);
lean_inc(v_start_4870_);
v_len_4871_ = lean_ctor_get(v_fst_4862_, 3);
lean_inc(v_len_4871_);
lean_dec(v_fst_4862_);
v___x_4872_ = lean_nat_add(v_start_4870_, v_len_4871_);
lean_dec(v_len_4871_);
v___x_4873_ = lean_nat_sub(v_start_4865_, v___x_4872_);
v___x_4874_ = l_List_drop___redArg(v___x_4872_, v_src_4805_);
v___x_4875_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_4874_);
v_body_4876_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_4874_, v___x_4874_, v___x_4873_, v___x_4875_);
lean_dec(v___x_4874_);
v___x_4877_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_4863_);
v___x_4878_ = lp_lean_x2dftml_LeanFtml_buildExplicit(v_tag_4867_, v_scored_4868_, v_attrs_4869_, v_body_4876_, v_residual_4864_, v_isZero_4814_, v___x_4877_, v_toks_4806_, v_blocks_4807_);
lean_dec(v_attrs_4869_);
v_snd_4879_ = lean_ctor_get(v___x_4878_, 1);
lean_inc(v_snd_4879_);
v_fst_4880_ = lean_ctor_get(v___x_4878_, 0);
lean_inc(v_fst_4880_);
lean_dec_ref(v___x_4878_);
v_fst_4881_ = lean_ctor_get(v_snd_4879_, 0);
lean_inc(v_fst_4881_);
v_snd_4882_ = lean_ctor_get(v_snd_4879_, 1);
lean_inc(v_snd_4882_);
lean_dec(v_snd_4879_);
if (v___x_4877_ == 0)
{
v___y_4884_ = v_fst_4880_;
goto v___jp_4883_;
}
else
{
lean_object* v___x_4891_; lean_object* v___x_4892_; uint8_t v___x_4893_; 
v___x_4891_ = lean_nat_add(v_start_4865_, v_len_4866_);
v___x_4892_ = l_List_lengthTR___redArg(v_src_4805_);
v___x_4893_ = lean_nat_dec_lt(v___x_4891_, v___x_4892_);
lean_dec(v___x_4892_);
if (v___x_4893_ == 0)
{
lean_dec(v___x_4891_);
v___y_4884_ = v_fst_4880_;
goto v___jp_4883_;
}
else
{
lean_object* v___x_4894_; lean_object* v___x_4895_; uint8_t v___x_4896_; 
v___x_4894_ = l_List_get_x3fInternal___redArg(v_src_4805_, v___x_4891_);
v___x_4895_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__19));
v___x_4896_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_4894_, v___x_4895_);
lean_dec(v___x_4894_);
if (v___x_4896_ == 0)
{
lean_object* v___x_4897_; lean_object* v___x_4898_; 
v___x_4897_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___x_4898_ = l_List_appendTR___redArg(v_fst_4880_, v___x_4897_);
v___y_4884_ = v___x_4898_;
goto v___jp_4883_;
}
else
{
v___y_4884_ = v_fst_4880_;
goto v___jp_4883_;
}
}
}
v___jp_4883_:
{
lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v_src_x27_4889_; 
lean_inc(v_src_4805_);
v___x_4885_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_4805_, v_src_4805_, v_start_4870_, v___x_4875_);
v___x_4886_ = l_List_appendTR___redArg(v___x_4885_, v___y_4884_);
v___x_4887_ = lean_nat_add(v_start_4865_, v_len_4866_);
lean_dec(v_len_4866_);
lean_dec(v_start_4865_);
v___x_4888_ = l_List_drop___redArg(v___x_4887_, v_src_4805_);
lean_dec(v_src_4805_);
v_src_x27_4889_ = l_List_appendTR___redArg(v___x_4886_, v___x_4888_);
v_src_4805_ = v_src_x27_4889_;
v_toks_4806_ = v_fst_4881_;
v_blocks_4807_ = v_snd_4882_;
v_x_4809_ = v_n_4816_;
goto _start;
}
}
}
v___jp_4810_:
{
lean_object* v___x_4811_; lean_object* v___x_4812_; 
v___x_4811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4811_, 0, v_toks_4806_);
lean_ctor_set(v___x_4811_, 1, v_blocks_4807_);
v___x_4812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4812_, 0, v_src_4805_);
lean_ctor_set(v___x_4812_, 1, v___x_4811_);
return v___x_4812_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__0(void){
_start:
{
lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; 
v___x_4899_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7, &lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_dissolveBlock___closed__7);
v___x_4900_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__0));
v___x_4901_ = l_List_appendTR___redArg(v___x_4900_, v___x_4899_);
return v___x_4901_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1(void){
_start:
{
lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v_marker_4904_; 
v___x_4902_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_explPh___closed__4));
v___x_4903_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__0, &lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__0);
v_marker_4904_ = l_List_appendTR___redArg(v___x_4903_, v___x_4902_);
return v_marker_4904_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__2(void){
_start:
{
lean_object* v_marker_4905_; lean_object* v___x_4906_; 
v_marker_4905_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1, &lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1);
v___x_4906_ = l_List_lengthTR___redArg(v_marker_4905_);
return v___x_4906_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup_go(lean_object* v_a_4907_, lean_object* v_a_4908_){
_start:
{
if (lean_obj_tag(v_a_4907_) == 0)
{
return v_a_4907_;
}
else
{
lean_object* v_head_4909_; lean_object* v_tail_4910_; lean_object* v_zero_4911_; uint8_t v_isZero_4912_; 
v_head_4909_ = lean_ctor_get(v_a_4907_, 0);
lean_inc(v_head_4909_);
v_tail_4910_ = lean_ctor_get(v_a_4907_, 1);
lean_inc(v_tail_4910_);
v_zero_4911_ = lean_unsigned_to_nat(0u);
v_isZero_4912_ = lean_nat_dec_eq(v_a_4908_, v_zero_4911_);
if (v_isZero_4912_ == 1)
{
lean_object* v___x_4913_; 
lean_dec(v_tail_4910_);
lean_dec_ref_known(v_a_4907_, 2);
lean_dec(v_head_4909_);
v___x_4913_ = lean_box(0);
return v___x_4913_;
}
else
{
lean_object* v_one_4914_; lean_object* v_n_4915_; lean_object* v_marker_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; uint8_t v___x_4920_; 
v_one_4914_ = lean_unsigned_to_nat(1u);
v_n_4915_ = lean_nat_sub(v_a_4908_, v_one_4914_);
v_marker_4916_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1, &lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__1);
v___x_4917_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__2, &lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___closed__2);
v___x_4918_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc_ref(v_a_4907_);
v___x_4919_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_4907_, v_a_4907_, v___x_4917_, v___x_4918_);
v___x_4920_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_4919_, v_marker_4916_);
lean_dec(v___x_4919_);
if (v___x_4920_ == 0)
{
lean_object* v___x_4922_; uint8_t v_isShared_4923_; uint8_t v_isSharedCheck_4928_; 
v_isSharedCheck_4928_ = !lean_is_exclusive(v_a_4907_);
if (v_isSharedCheck_4928_ == 0)
{
lean_object* v_unused_4929_; lean_object* v_unused_4930_; 
v_unused_4929_ = lean_ctor_get(v_a_4907_, 1);
lean_dec(v_unused_4929_);
v_unused_4930_ = lean_ctor_get(v_a_4907_, 0);
lean_dec(v_unused_4930_);
v___x_4922_ = v_a_4907_;
v_isShared_4923_ = v_isSharedCheck_4928_;
goto v_resetjp_4921_;
}
else
{
lean_dec(v_a_4907_);
v___x_4922_ = lean_box(0);
v_isShared_4923_ = v_isSharedCheck_4928_;
goto v_resetjp_4921_;
}
v_resetjp_4921_:
{
lean_object* v___x_4924_; lean_object* v___x_4926_; 
v___x_4924_ = lp_lean_x2dftml_LeanFtml_dissolveCleanup_go(v_tail_4910_, v_n_4915_);
lean_dec(v_n_4915_);
if (v_isShared_4923_ == 0)
{
lean_ctor_set(v___x_4922_, 1, v___x_4924_);
v___x_4926_ = v___x_4922_;
goto v_reusejp_4925_;
}
else
{
lean_object* v_reuseFailAlloc_4927_; 
v_reuseFailAlloc_4927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4927_, 0, v_head_4909_);
lean_ctor_set(v_reuseFailAlloc_4927_, 1, v___x_4924_);
v___x_4926_ = v_reuseFailAlloc_4927_;
goto v_reusejp_4925_;
}
v_reusejp_4925_:
{
return v___x_4926_;
}
}
}
else
{
lean_object* v_after_4931_; lean_object* v___x_4933_; uint8_t v_isShared_4934_; uint8_t v_isSharedCheck_4953_; 
v_after_4931_ = l_List_drop___redArg(v___x_4917_, v_a_4907_);
v_isSharedCheck_4953_ = !lean_is_exclusive(v_a_4907_);
if (v_isSharedCheck_4953_ == 0)
{
lean_object* v_unused_4954_; lean_object* v_unused_4955_; 
v_unused_4954_ = lean_ctor_get(v_a_4907_, 1);
lean_dec(v_unused_4954_);
v_unused_4955_ = lean_ctor_get(v_a_4907_, 0);
lean_dec(v_unused_4955_);
v___x_4933_ = v_a_4907_;
v_isShared_4934_ = v_isSharedCheck_4953_;
goto v_resetjp_4932_;
}
else
{
lean_dec(v_a_4907_);
v___x_4933_ = lean_box(0);
v_isShared_4934_ = v_isSharedCheck_4953_;
goto v_resetjp_4932_;
}
v_resetjp_4932_:
{
lean_object* v___x_4935_; 
v___x_4935_ = lp_lean_x2dftml_LeanFtml_phAt(v_after_4931_, v_zero_4911_);
if (lean_obj_tag(v___x_4935_) == 0)
{
lean_object* v___x_4936_; lean_object* v___x_4938_; 
lean_dec(v_after_4931_);
v___x_4936_ = lp_lean_x2dftml_LeanFtml_dissolveCleanup_go(v_tail_4910_, v_n_4915_);
lean_dec(v_n_4915_);
if (v_isShared_4934_ == 0)
{
lean_ctor_set(v___x_4933_, 1, v___x_4936_);
v___x_4938_ = v___x_4933_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4939_; 
v_reuseFailAlloc_4939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4939_, 0, v_head_4909_);
lean_ctor_set(v_reuseFailAlloc_4939_, 1, v___x_4936_);
v___x_4938_ = v_reuseFailAlloc_4939_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
return v___x_4938_;
}
}
else
{
lean_object* v_val_4940_; lean_object* v_snd_4941_; lean_object* v_ph_4942_; lean_object* v_afterPh_4943_; 
lean_del_object(v___x_4933_);
lean_dec(v_tail_4910_);
lean_dec(v_head_4909_);
v_val_4940_ = lean_ctor_get(v___x_4935_, 0);
lean_inc(v_val_4940_);
lean_dec_ref_known(v___x_4935_, 1);
v_snd_4941_ = lean_ctor_get(v_val_4940_, 1);
lean_inc_n(v_snd_4941_, 2);
lean_dec(v_val_4940_);
lean_inc(v_after_4931_);
v_ph_4942_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_after_4931_, v_after_4931_, v_snd_4941_, v___x_4918_);
v_afterPh_4943_ = l_List_drop___redArg(v_snd_4941_, v_after_4931_);
lean_dec(v_after_4931_);
if (lean_obj_tag(v_afterPh_4943_) == 1)
{
lean_object* v_head_4947_; lean_object* v_tail_4948_; lean_object* v___x_4949_; uint8_t v___x_4950_; 
v_head_4947_ = lean_ctor_get(v_afterPh_4943_, 0);
v_tail_4948_ = lean_ctor_get(v_afterPh_4943_, 1);
v___x_4949_ = lean_unsigned_to_nat(10u);
v___x_4950_ = lean_nat_dec_eq(v_head_4947_, v___x_4949_);
if (v___x_4950_ == 0)
{
goto v___jp_4944_;
}
else
{
lean_object* v___x_4951_; lean_object* v___x_4952_; 
lean_inc(v_tail_4948_);
lean_dec_ref_known(v_afterPh_4943_, 2);
v___x_4951_ = lp_lean_x2dftml_LeanFtml_dissolveCleanup_go(v_tail_4948_, v_n_4915_);
lean_dec(v_n_4915_);
v___x_4952_ = l_List_appendTR___redArg(v_ph_4942_, v___x_4951_);
return v___x_4952_;
}
}
else
{
goto v___jp_4944_;
}
v___jp_4944_:
{
lean_object* v___x_4945_; lean_object* v___x_4946_; 
v___x_4945_ = lp_lean_x2dftml_LeanFtml_dissolveCleanup_go(v_afterPh_4943_, v_n_4915_);
lean_dec(v_n_4915_);
v___x_4946_ = l_List_appendTR___redArg(v_ph_4942_, v___x_4945_);
return v___x_4946_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup_go___boxed(lean_object* v_a_4956_, lean_object* v_a_4957_){
_start:
{
lean_object* v_res_4958_; 
v_res_4958_ = lp_lean_x2dftml_LeanFtml_dissolveCleanup_go(v_a_4956_, v_a_4957_);
lean_dec(v_a_4957_);
return v_res_4958_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dissolveCleanup(lean_object* v_s_4959_){
_start:
{
lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4960_ = l_List_lengthTR___redArg(v_s_4959_);
v___x_4961_ = lean_unsigned_to_nat(1u);
v___x_4962_ = lean_nat_add(v___x_4960_, v___x_4961_);
lean_dec(v___x_4960_);
v___x_4963_ = lp_lean_x2dftml_LeanFtml_dissolveCleanup_go(v_s_4959_, v___x_4962_);
lean_dec(v___x_4962_);
return v___x_4963_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tableTail___closed__1(void){
_start:
{
lean_object* v___x_4965_; lean_object* v___x_4966_; 
v___x_4965_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tableTail___closed__0));
v___x_4966_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4965_);
return v___x_4966_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tableTail___closed__3(void){
_start:
{
lean_object* v___x_4968_; lean_object* v___x_4969_; 
v___x_4968_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tableTail___closed__2));
v___x_4969_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4968_);
return v___x_4969_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tableTail___closed__5(void){
_start:
{
lean_object* v___x_4971_; lean_object* v___x_4972_; 
v___x_4971_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tableTail___closed__4));
v___x_4972_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4971_);
return v___x_4972_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tableTail(lean_object* v_rest_4973_){
_start:
{
lean_object* v___y_4975_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v_r0_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; 
v___x_5015_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_rest_4973_);
v___x_5016_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_rest_4973_, v_rest_4973_, v___x_5015_);
v___x_5017_ = l_List_lengthTR___redArg(v___x_5016_);
lean_dec(v___x_5016_);
v_r0_5018_ = l_List_drop___redArg(v___x_5017_, v_rest_4973_);
v___x_5019_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1, &lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1);
v___x_5020_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_5019_, v_r0_5018_);
if (lean_obj_tag(v___x_5020_) == 0)
{
lean_object* v___x_5021_; 
lean_dec(v_rest_4973_);
v___x_5021_ = lean_box(0);
return v___x_5021_;
}
else
{
lean_object* v_val_5022_; 
v_val_5022_ = lean_ctor_get(v___x_5020_, 0);
lean_inc(v_val_5022_);
lean_dec_ref_known(v___x_5020_, 1);
if (lean_obj_tag(v_val_5022_) == 0)
{
v___y_4975_ = v_val_5022_;
goto v___jp_4974_;
}
else
{
lean_object* v_head_5023_; lean_object* v_tail_5024_; lean_object* v___x_5025_; uint8_t v___x_5026_; 
v_head_5023_ = lean_ctor_get(v_val_5022_, 0);
v_tail_5024_ = lean_ctor_get(v_val_5022_, 1);
v___x_5025_ = lean_unsigned_to_nat(104u);
v___x_5026_ = lean_nat_dec_eq(v_head_5023_, v___x_5025_);
if (v___x_5026_ == 0)
{
lean_object* v___x_5027_; uint8_t v___x_5028_; 
v___x_5027_ = lean_unsigned_to_nat(72u);
v___x_5028_ = lean_nat_dec_eq(v_head_5023_, v___x_5027_);
if (v___x_5028_ == 0)
{
v___y_4975_ = v_val_5022_;
goto v___jp_4974_;
}
else
{
lean_inc(v_tail_5024_);
lean_dec_ref_known(v_val_5022_, 2);
v___y_4975_ = v_tail_5024_;
goto v___jp_4974_;
}
}
else
{
lean_inc(v_tail_5024_);
lean_dec_ref_known(v_val_5022_, 2);
v___y_4975_ = v_tail_5024_;
goto v___jp_4974_;
}
}
}
v___jp_4974_:
{
lean_object* v___x_4976_; lean_object* v___x_4977_; 
v___x_4976_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tableTail___closed__1, &lp_lean_x2dftml_LeanFtml_tableTail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tableTail___closed__1);
v___x_4977_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4976_, v___y_4975_);
if (lean_obj_tag(v___x_4977_) == 0)
{
lean_object* v___x_4978_; 
lean_dec(v_rest_4973_);
v___x_4978_ = lean_box(0);
return v___x_4978_;
}
else
{
lean_object* v_val_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v_r3_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; 
v_val_4979_ = lean_ctor_get(v___x_4977_, 0);
lean_inc_n(v_val_4979_, 2);
lean_dec_ref_known(v___x_4977_, 1);
v___x_4980_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
v___x_4981_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_4979_, v_val_4979_, v___x_4980_);
v___x_4982_ = l_List_lengthTR___redArg(v___x_4981_);
lean_dec(v___x_4981_);
v_r3_4983_ = l_List_drop___redArg(v___x_4982_, v_val_4979_);
lean_dec(v_val_4979_);
v___x_4984_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tableTail___closed__3, &lp_lean_x2dftml_LeanFtml_tableTail___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tableTail___closed__3);
v___x_4985_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4984_, v_r3_4983_);
if (lean_obj_tag(v___x_4985_) == 0)
{
lean_object* v___x_4986_; 
lean_dec(v_rest_4973_);
v___x_4986_ = lean_box(0);
return v___x_4986_;
}
else
{
lean_object* v_val_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v_r5_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; 
v_val_4987_ = lean_ctor_get(v___x_4985_, 0);
lean_inc_n(v_val_4987_, 2);
lean_dec_ref_known(v___x_4985_, 1);
v___x_4988_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_4987_, v_val_4987_, v___x_4980_);
v___x_4989_ = l_List_lengthTR___redArg(v___x_4988_);
lean_dec(v___x_4988_);
v_r5_4990_ = l_List_drop___redArg(v___x_4989_, v_val_4987_);
lean_dec(v_val_4987_);
v___x_4991_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tableTail___closed__5, &lp_lean_x2dftml_LeanFtml_tableTail___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_tableTail___closed__5);
v___x_4992_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_4991_, v_r5_4990_);
if (lean_obj_tag(v___x_4992_) == 0)
{
lean_object* v___x_4993_; 
lean_dec(v_rest_4973_);
v___x_4993_ = lean_box(0);
return v___x_4993_;
}
else
{
lean_object* v_val_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5014_; 
v_val_4994_ = lean_ctor_get(v___x_4992_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v___x_4992_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_4996_ = v___x_4992_;
v_isShared_4997_ = v_isSharedCheck_5014_;
goto v_resetjp_4995_;
}
else
{
lean_inc(v_val_4994_);
lean_dec(v___x_4992_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5014_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
if (lean_obj_tag(v_val_4994_) == 1)
{
lean_object* v_head_4998_; lean_object* v_tail_4999_; lean_object* v___x_5000_; uint8_t v___x_5001_; 
v_head_4998_ = lean_ctor_get(v_val_4994_, 0);
v_tail_4999_ = lean_ctor_get(v_val_4994_, 1);
v___x_5000_ = lean_unsigned_to_nat(10u);
v___x_5001_ = lean_nat_dec_eq(v_head_4998_, v___x_5000_);
if (v___x_5001_ == 0)
{
lean_object* v___x_5002_; 
lean_dec_ref_known(v_val_4994_, 2);
lean_del_object(v___x_4996_);
lean_dec(v_rest_4973_);
v___x_5002_ = lean_box(0);
return v___x_5002_;
}
else
{
if (lean_obj_tag(v_tail_4999_) == 0)
{
lean_object* v___x_5003_; 
lean_dec_ref_known(v_val_4994_, 2);
lean_del_object(v___x_4996_);
lean_dec(v_rest_4973_);
v___x_5003_ = lean_box(0);
return v___x_5003_;
}
else
{
lean_object* v_head_5004_; uint8_t v___x_5005_; 
v_head_5004_ = lean_ctor_get(v_tail_4999_, 0);
v___x_5005_ = lean_nat_dec_eq(v_head_5004_, v___x_5000_);
if (v___x_5005_ == 0)
{
lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5010_; 
v___x_5006_ = l_List_lengthTR___redArg(v_rest_4973_);
lean_dec(v_rest_4973_);
v___x_5007_ = l_List_lengthTR___redArg(v_val_4994_);
lean_dec_ref_known(v_val_4994_, 2);
v___x_5008_ = lean_nat_sub(v___x_5006_, v___x_5007_);
lean_dec(v___x_5007_);
lean_dec(v___x_5006_);
if (v_isShared_4997_ == 0)
{
lean_ctor_set(v___x_4996_, 0, v___x_5008_);
v___x_5010_ = v___x_4996_;
goto v_reusejp_5009_;
}
else
{
lean_object* v_reuseFailAlloc_5011_; 
v_reuseFailAlloc_5011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5011_, 0, v___x_5008_);
v___x_5010_ = v_reuseFailAlloc_5011_;
goto v_reusejp_5009_;
}
v_reusejp_5009_:
{
return v___x_5010_;
}
}
else
{
lean_object* v___x_5012_; 
lean_dec_ref_known(v_val_4994_, 2);
lean_del_object(v___x_4996_);
lean_dec(v_rest_4973_);
v___x_5012_ = lean_box(0);
return v___x_5012_;
}
}
}
}
else
{
lean_object* v___x_5013_; 
lean_del_object(v___x_4996_);
lean_dec(v_val_4994_);
lean_dec(v_rest_4973_);
v___x_5013_ = lean_box(0);
return v___x_5013_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_finalizeOne_spec__0(lean_object* v_x_5029_){
_start:
{
if (lean_obj_tag(v_x_5029_) == 0)
{
uint8_t v___x_5030_; 
v___x_5030_ = 1;
return v___x_5030_;
}
else
{
lean_object* v_head_5031_; lean_object* v_tail_5032_; lean_object* v___x_5033_; uint8_t v___x_5034_; 
v_head_5031_ = lean_ctor_get(v_x_5029_, 0);
v_tail_5032_ = lean_ctor_get(v_x_5029_, 1);
v___x_5033_ = lean_unsigned_to_nat(10u);
v___x_5034_ = lean_nat_dec_eq(v_head_5031_, v___x_5033_);
if (v___x_5034_ == 0)
{
return v___x_5034_;
}
else
{
v_x_5029_ = v_tail_5032_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_finalizeOne_spec__0___boxed(lean_object* v_x_5036_){
_start:
{
uint8_t v_res_5037_; lean_object* v_r_5038_; 
v_res_5037_ = lp_lean_x2dftml_List_all___at___00LeanFtml_finalizeOne_spec__0(v_x_5036_);
lean_dec(v_x_5036_);
v_r_5038_ = lean_box(v_res_5037_);
return v_r_5038_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_finalizeOne_spec__1(lean_object* v_nlRun_5039_, lean_object* v_rest_5040_, lean_object* v_snd_5041_, lean_object* v_x_5042_){
_start:
{
if (lean_obj_tag(v_x_5042_) == 0)
{
uint8_t v___x_5043_; 
lean_dec(v_snd_5041_);
lean_dec(v_nlRun_5039_);
v___x_5043_ = 0;
return v___x_5043_;
}
else
{
lean_object* v_head_5044_; lean_object* v_tail_5045_; lean_object* v_startPh_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; uint8_t v___x_5050_; 
v_head_5044_ = lean_ctor_get(v_x_5042_, 0);
v_tail_5045_ = lean_ctor_get(v_x_5042_, 1);
v_startPh_5046_ = lean_ctor_get(v_head_5044_, 0);
lean_inc(v_nlRun_5039_);
v___x_5047_ = l_List_drop___redArg(v_nlRun_5039_, v_rest_5040_);
v___x_5048_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_snd_5041_);
lean_inc(v___x_5047_);
v___x_5049_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_5047_, v___x_5047_, v_snd_5041_, v___x_5048_);
lean_dec(v___x_5047_);
v___x_5050_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_startPh_5046_, v___x_5049_);
lean_dec(v___x_5049_);
if (v___x_5050_ == 0)
{
v_x_5042_ = v_tail_5045_;
goto _start;
}
else
{
lean_dec(v_snd_5041_);
lean_dec(v_nlRun_5039_);
return v___x_5050_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_finalizeOne_spec__1___boxed(lean_object* v_nlRun_5052_, lean_object* v_rest_5053_, lean_object* v_snd_5054_, lean_object* v_x_5055_){
_start:
{
uint8_t v_res_5056_; lean_object* v_r_5057_; 
v_res_5056_ = lp_lean_x2dftml_List_any___at___00LeanFtml_finalizeOne_spec__1(v_nlRun_5052_, v_rest_5053_, v_snd_5054_, v_x_5055_);
lean_dec(v_x_5055_);
lean_dec(v_rest_5053_);
v_r_5057_ = lean_box(v_res_5056_);
return v_r_5057_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_finalizeOne___closed__1(void){
_start:
{
lean_object* v___x_5059_; lean_object* v___x_5060_; 
v___x_5059_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_finalizeOne___closed__0));
v___x_5060_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5059_);
return v___x_5060_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalizeOne(lean_object* v_src_5064_, lean_object* v_toks_5065_, lean_object* v_blk_5066_, lean_object* v_blocks_5067_){
_start:
{
lean_object* v___y_5069_; lean_object* v___y_5070_; lean_object* v___y_5071_; lean_object* v___y_5072_; lean_object* v_startPh_5089_; lean_object* v_endPh_5090_; lean_object* v_endKey_5091_; uint8_t v_scored_5092_; uint8_t v_isSynth_5093_; lean_object* v___y_5095_; lean_object* v___y_5096_; lean_object* v___y_5097_; uint8_t v___y_5098_; lean_object* v___y_5099_; lean_object* v___y_5102_; lean_object* v___y_5103_; lean_object* v___y_5104_; lean_object* v___y_5105_; lean_object* v___y_5106_; lean_object* v___y_5107_; uint8_t v___y_5108_; lean_object* v___y_5135_; lean_object* v___y_5136_; lean_object* v___y_5137_; lean_object* v___y_5138_; lean_object* v___y_5139_; lean_object* v___y_5140_; uint8_t v___y_5141_; lean_object* v_fst_5149_; lean_object* v_fst_5150_; lean_object* v_snd_5151_; lean_object* v___x_5173_; lean_object* v___x_5174_; 
v_startPh_5089_ = lean_ctor_get(v_blk_5066_, 0);
v_endPh_5090_ = lean_ctor_get(v_blk_5066_, 1);
v_endKey_5091_ = lean_ctor_get(v_blk_5066_, 2);
v_scored_5092_ = lean_ctor_get_uint8(v_blk_5066_, sizeof(void*)*3);
v_isSynth_5093_ = lean_ctor_get_uint8(v_blk_5066_, sizeof(void*)*3 + 1);
v___x_5173_ = lean_unsigned_to_nat(0u);
v___x_5174_ = lp_lean_x2dftml_LeanFtml_findFrom(v_startPh_5089_, v_src_5064_, v___x_5173_);
if (lean_obj_tag(v___x_5174_) == 0)
{
lean_object* v___x_5175_; 
v___x_5175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5175_, 0, v_src_5064_);
lean_ctor_set(v___x_5175_, 1, v_toks_5065_);
return v___x_5175_;
}
else
{
lean_object* v_val_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; 
v_val_5176_ = lean_ctor_get(v___x_5174_, 0);
lean_inc(v_val_5176_);
lean_dec_ref_known(v___x_5174_, 1);
v___x_5177_ = l_List_lengthTR___redArg(v_startPh_5089_);
v___x_5178_ = lean_nat_add(v_val_5176_, v___x_5177_);
lean_dec(v___x_5177_);
v___x_5179_ = lp_lean_x2dftml_LeanFtml_findFrom(v_endPh_5090_, v_src_5064_, v___x_5178_);
if (lean_obj_tag(v___x_5179_) == 0)
{
lean_object* v___x_5180_; 
lean_dec(v_val_5176_);
v___x_5180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5180_, 0, v_src_5064_);
lean_ctor_set(v___x_5180_, 1, v_toks_5065_);
return v___x_5180_;
}
else
{
lean_object* v_val_5181_; lean_object* v___x_5182_; lean_object* v_afterEnd_5183_; lean_object* v___x_5184_; uint8_t v___x_5185_; 
v_val_5181_ = lean_ctor_get(v___x_5179_, 0);
lean_inc(v_val_5181_);
lean_dec_ref_known(v___x_5179_, 1);
v___x_5182_ = l_List_lengthTR___redArg(v_endPh_5090_);
v_afterEnd_5183_ = lean_nat_add(v_val_5181_, v___x_5182_);
lean_dec(v___x_5182_);
lean_dec(v_val_5181_);
v___x_5184_ = lean_unsigned_to_nat(2u);
v___x_5185_ = lean_nat_dec_le(v___x_5184_, v_val_5176_);
if (v___x_5185_ == 0)
{
lean_dec(v_val_5176_);
v_fst_5149_ = v_src_5064_;
v_fst_5150_ = v_toks_5065_;
v_snd_5151_ = v_afterEnd_5183_;
goto v___jp_5148_;
}
else
{
lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; uint8_t v___x_5191_; 
v___x_5186_ = lean_unsigned_to_nat(1u);
v___x_5187_ = lean_nat_sub(v_val_5176_, v___x_5186_);
lean_inc(v___x_5187_);
v___x_5188_ = l_List_get_x3fInternal___redArg(v_src_5064_, v___x_5187_);
v___x_5189_ = lean_unsigned_to_nat(10u);
v___x_5190_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildListAttrs___closed__19));
v___x_5191_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_5188_, v___x_5190_);
lean_dec(v___x_5188_);
if (v___x_5191_ == 0)
{
lean_dec(v___x_5187_);
lean_dec(v_val_5176_);
v_fst_5149_ = v_src_5064_;
v_fst_5150_ = v_toks_5065_;
v_snd_5151_ = v_afterEnd_5183_;
goto v___jp_5148_;
}
else
{
lean_object* v___x_5192_; lean_object* v___x_5193_; uint8_t v___x_5194_; 
v___x_5192_ = lean_nat_sub(v_val_5176_, v___x_5184_);
v___x_5193_ = l_List_get_x3fInternal___redArg(v_src_5064_, v___x_5192_);
v___x_5194_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_5193_, v___x_5190_);
lean_dec(v___x_5193_);
if (v___x_5194_ == 0)
{
lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___y_5198_; lean_object* v___x_5221_; 
v___x_5195_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___x_5187_);
lean_inc(v_src_5064_);
v___x_5196_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_5064_, v_src_5064_, v___x_5187_, v___x_5195_);
v___x_5221_ = lp_lean_x2dftml_LeanFtml_lastIdxOfB(v___x_5189_, v___x_5196_);
if (lean_obj_tag(v___x_5221_) == 0)
{
v___y_5198_ = v___x_5173_;
goto v___jp_5197_;
}
else
{
lean_object* v_val_5222_; lean_object* v___x_5223_; 
v_val_5222_ = lean_ctor_get(v___x_5221_, 0);
lean_inc(v_val_5222_);
lean_dec_ref_known(v___x_5221_, 1);
v___x_5223_ = lean_nat_add(v_val_5222_, v___x_5186_);
lean_dec(v_val_5222_);
v___y_5198_ = v___x_5223_;
goto v___jp_5197_;
}
v___jp_5197_:
{
lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v_prevLine_5201_; uint8_t v___x_5202_; 
v___x_5199_ = lean_nat_sub(v___x_5187_, v___y_5198_);
lean_dec(v___x_5187_);
v___x_5200_ = l_List_drop___redArg(v___y_5198_, v_src_5064_);
lean_inc(v___x_5200_);
v_prevLine_5201_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_5200_, v___x_5200_, v___x_5199_, v___x_5195_);
lean_dec(v___x_5200_);
v___x_5202_ = l_List_isEmpty___redArg(v_prevLine_5201_);
if (v___x_5202_ == 0)
{
lean_object* v___x_5203_; lean_object* v___x_5204_; 
v___x_5203_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_finalizeOne___closed__1, &lp_lean_x2dftml_LeanFtml_finalizeOne___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_finalizeOne___closed__1);
v___x_5204_ = lp_lean_x2dftml_LeanFtml_findFrom(v___x_5203_, v_prevLine_5201_, v___x_5173_);
if (lean_obj_tag(v___x_5204_) == 0)
{
lean_object* v___x_5205_; lean_object* v___x_5206_; uint8_t v___x_5207_; 
v___x_5205_ = l_List_getLast_x3f___redArg(v_prevLine_5201_);
lean_dec(v_prevLine_5201_);
v___x_5206_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phAt___closed__0));
v___x_5207_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_5205_, v___x_5206_);
lean_dec(v___x_5205_);
if (v___x_5207_ == 0)
{
lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v_fst_5211_; lean_object* v_snd_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; 
v___x_5208_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_5209_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__18, &lp_lean_x2dftml_LeanFtml_formatItem___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__18);
v___x_5210_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5208_, v___x_5209_, v_toks_5065_);
v_fst_5211_ = lean_ctor_get(v___x_5210_, 0);
lean_inc_n(v_fst_5211_, 2);
v_snd_5212_ = lean_ctor_get(v___x_5210_, 1);
lean_inc(v_snd_5212_);
lean_dec_ref(v___x_5210_);
v___x_5213_ = l_List_appendTR___redArg(v___x_5196_, v_fst_5211_);
v___x_5214_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_finalizeOne___closed__2));
v___x_5215_ = l_List_appendTR___redArg(v___x_5213_, v___x_5214_);
v___x_5216_ = l_List_drop___redArg(v_val_5176_, v_src_5064_);
lean_dec(v_src_5064_);
v___x_5217_ = l_List_appendTR___redArg(v___x_5215_, v___x_5216_);
v___x_5218_ = l_List_lengthTR___redArg(v_fst_5211_);
lean_dec(v_fst_5211_);
v___x_5219_ = lean_nat_add(v_afterEnd_5183_, v___x_5218_);
lean_dec(v___x_5218_);
lean_dec(v_afterEnd_5183_);
v___x_5220_ = lean_nat_add(v___x_5219_, v___x_5186_);
lean_dec(v___x_5219_);
v_fst_5149_ = v___x_5217_;
v_fst_5150_ = v_snd_5212_;
v_snd_5151_ = v___x_5220_;
goto v___jp_5148_;
}
else
{
lean_dec(v___x_5196_);
lean_dec(v_val_5176_);
v_fst_5149_ = v_src_5064_;
v_fst_5150_ = v_toks_5065_;
v_snd_5151_ = v_afterEnd_5183_;
goto v___jp_5148_;
}
}
else
{
lean_dec_ref_known(v___x_5204_, 1);
lean_dec(v_prevLine_5201_);
lean_dec(v___x_5196_);
lean_dec(v_val_5176_);
v_fst_5149_ = v_src_5064_;
v_fst_5150_ = v_toks_5065_;
v_snd_5151_ = v_afterEnd_5183_;
goto v___jp_5148_;
}
}
else
{
lean_dec(v_prevLine_5201_);
lean_dec(v___x_5196_);
lean_dec(v_val_5176_);
v_fst_5149_ = v_src_5064_;
v_fst_5150_ = v_toks_5065_;
v_snd_5151_ = v_afterEnd_5183_;
goto v___jp_5148_;
}
}
}
else
{
lean_dec(v___x_5187_);
lean_dec(v_val_5176_);
v_fst_5149_ = v_src_5064_;
v_fst_5150_ = v_toks_5065_;
v_snd_5151_ = v_afterEnd_5183_;
goto v___jp_5148_;
}
}
}
}
}
v___jp_5068_:
{
lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v_fst_5076_; lean_object* v_snd_5077_; lean_object* v___x_5079_; uint8_t v_isShared_5080_; uint8_t v_isSharedCheck_5088_; 
v___x_5073_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__12));
v___x_5074_ = lean_box(0);
v___x_5075_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5073_, v___x_5074_, v___y_5070_);
v_fst_5076_ = lean_ctor_get(v___x_5075_, 0);
v_snd_5077_ = lean_ctor_get(v___x_5075_, 1);
v_isSharedCheck_5088_ = !lean_is_exclusive(v___x_5075_);
if (v_isSharedCheck_5088_ == 0)
{
v___x_5079_ = v___x_5075_;
v_isShared_5080_ = v_isSharedCheck_5088_;
goto v_resetjp_5078_;
}
else
{
lean_inc(v_snd_5077_);
lean_inc(v_fst_5076_);
lean_dec(v___x_5075_);
v___x_5079_ = lean_box(0);
v_isShared_5080_ = v_isSharedCheck_5088_;
goto v_resetjp_5078_;
}
v_resetjp_5078_:
{
lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5086_; 
v___x_5081_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___y_5071_);
v___x_5082_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_5071_, v___y_5071_, v___y_5072_, v___x_5081_);
lean_dec(v___y_5071_);
v___x_5083_ = l_List_appendTR___redArg(v___x_5082_, v_fst_5076_);
v___x_5084_ = l_List_appendTR___redArg(v___x_5083_, v___y_5069_);
if (v_isShared_5080_ == 0)
{
lean_ctor_set(v___x_5079_, 0, v___x_5084_);
v___x_5086_ = v___x_5079_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5087_; 
v_reuseFailAlloc_5087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5087_, 0, v___x_5084_);
lean_ctor_set(v_reuseFailAlloc_5087_, 1, v_snd_5077_);
v___x_5086_ = v_reuseFailAlloc_5087_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
return v___x_5086_;
}
}
}
v___jp_5094_:
{
if (v_isSynth_5093_ == 0)
{
v___y_5069_ = v___y_5095_;
v___y_5070_ = v___y_5096_;
v___y_5071_ = v___y_5097_;
v___y_5072_ = v___y_5099_;
goto v___jp_5068_;
}
else
{
if (v___y_5098_ == 0)
{
lean_object* v___x_5100_; 
lean_dec(v___y_5099_);
lean_dec(v___y_5095_);
v___x_5100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5100_, 0, v___y_5097_);
lean_ctor_set(v___x_5100_, 1, v___y_5096_);
return v___x_5100_;
}
else
{
v___y_5069_ = v___y_5095_;
v___y_5070_ = v___y_5096_;
v___y_5071_ = v___y_5097_;
v___y_5072_ = v___y_5099_;
goto v___jp_5068_;
}
}
}
v___jp_5101_:
{
uint8_t v___x_5109_; 
v___x_5109_ = lp_lean_x2dftml_List_all___at___00LeanFtml_finalizeOne_spec__0(v___y_5102_);
if (v___x_5109_ == 0)
{
lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; uint8_t v___x_5113_; 
lean_inc_ref(v___y_5103_);
lean_inc(v___y_5106_);
lean_inc(v___y_5102_);
v___x_5110_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_5102_, v___y_5102_, v___y_5106_, v___y_5103_);
v___x_5111_ = lean_unsigned_to_nat(10u);
v___x_5112_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lookaheadBlocks___closed__3));
v___x_5113_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_5110_, v___x_5112_);
lean_dec(v___x_5110_);
if (v___x_5113_ == 0)
{
lean_object* v___x_5114_; 
lean_dec(v___y_5107_);
lean_dec(v___y_5106_);
lean_dec_ref(v___y_5103_);
lean_dec(v___y_5102_);
v___x_5114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5114_, 0, v___y_5105_);
lean_ctor_set(v___x_5114_, 1, v___y_5104_);
return v___x_5114_;
}
else
{
lean_object* v___x_5115_; 
lean_inc(v___y_5106_);
v___x_5115_ = l_List_get_x3fInternal___redArg(v___y_5102_, v___y_5106_);
if (lean_obj_tag(v___x_5115_) == 0)
{
lean_object* v___x_5116_; 
lean_dec(v___y_5107_);
lean_dec(v___y_5106_);
lean_dec_ref(v___y_5103_);
lean_dec(v___y_5102_);
v___x_5116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5116_, 0, v___y_5105_);
lean_ctor_set(v___x_5116_, 1, v___y_5104_);
return v___x_5116_;
}
else
{
lean_object* v_val_5117_; uint8_t v___x_5118_; 
v_val_5117_ = lean_ctor_get(v___x_5115_, 0);
lean_inc(v_val_5117_);
lean_dec_ref_known(v___x_5115_, 1);
v___x_5118_ = lean_nat_dec_eq(v_val_5117_, v___x_5111_);
if (v___x_5118_ == 0)
{
lean_object* v___x_5119_; uint8_t v___x_5120_; 
v___x_5119_ = lean_unsigned_to_nat(255u);
v___x_5120_ = lean_nat_dec_eq(v_val_5117_, v___x_5119_);
lean_dec(v_val_5117_);
if (v___x_5120_ == 0)
{
lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; uint8_t v___x_5125_; 
v___x_5121_ = lean_unsigned_to_nat(3u);
v___x_5122_ = l_List_drop___redArg(v___y_5106_, v___y_5102_);
lean_dec(v___y_5102_);
lean_inc_ref(v___y_5103_);
lean_inc(v___x_5122_);
v___x_5123_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_5122_, v___x_5122_, v___x_5121_, v___y_5103_);
v___x_5124_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1, &lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_blockCloserAt___closed__1);
v___x_5125_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_5123_, v___x_5124_);
lean_dec(v___x_5123_);
if (v___x_5125_ == 0)
{
lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; 
lean_inc(v___y_5105_);
v___x_5126_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_5105_, v___y_5105_, v___y_5107_, v___y_5103_);
lean_dec(v___y_5105_);
v___x_5127_ = l_List_appendTR___redArg(v___x_5126_, v___x_5122_);
v___x_5128_ = lp_lean_x2dftml_LeanFtml_setTrail_go(v___x_5112_, v___y_5104_, v_endKey_5091_);
v___x_5129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5129_, 0, v___x_5127_);
lean_ctor_set(v___x_5129_, 1, v___x_5128_);
return v___x_5129_;
}
else
{
lean_object* v___x_5130_; 
lean_dec(v___x_5122_);
lean_dec(v___y_5107_);
lean_dec_ref(v___y_5103_);
v___x_5130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5130_, 0, v___y_5105_);
lean_ctor_set(v___x_5130_, 1, v___y_5104_);
return v___x_5130_;
}
}
else
{
lean_object* v___x_5131_; 
lean_dec(v___y_5107_);
lean_dec(v___y_5106_);
lean_dec_ref(v___y_5103_);
lean_dec(v___y_5102_);
v___x_5131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5131_, 0, v___y_5105_);
lean_ctor_set(v___x_5131_, 1, v___y_5104_);
return v___x_5131_;
}
}
else
{
lean_object* v___x_5132_; 
lean_dec(v_val_5117_);
lean_dec(v___y_5107_);
lean_dec(v___y_5106_);
lean_dec_ref(v___y_5103_);
lean_dec(v___y_5102_);
v___x_5132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5132_, 0, v___y_5105_);
lean_ctor_set(v___x_5132_, 1, v___y_5104_);
return v___x_5132_;
}
}
}
}
else
{
lean_dec(v___y_5106_);
lean_dec_ref(v___y_5103_);
if (v_scored_5092_ == 0)
{
v___y_5095_ = v___y_5102_;
v___y_5096_ = v___y_5104_;
v___y_5097_ = v___y_5105_;
v___y_5098_ = v___y_5108_;
v___y_5099_ = v___y_5107_;
goto v___jp_5094_;
}
else
{
if (v___y_5108_ == 0)
{
lean_object* v___x_5133_; 
lean_dec(v___y_5107_);
lean_dec(v___y_5102_);
v___x_5133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5133_, 0, v___y_5105_);
lean_ctor_set(v___x_5133_, 1, v___y_5104_);
return v___x_5133_;
}
else
{
v___y_5095_ = v___y_5102_;
v___y_5096_ = v___y_5104_;
v___y_5097_ = v___y_5105_;
v___y_5098_ = v___y_5108_;
v___y_5099_ = v___y_5107_;
goto v___jp_5094_;
}
}
}
}
v___jp_5134_:
{
lean_object* v___x_5142_; uint8_t v___x_5143_; 
v___x_5142_ = lean_unsigned_to_nat(1u);
v___x_5143_ = lean_nat_dec_le(v___x_5142_, v___y_5137_);
if (v___x_5143_ == 0)
{
lean_dec(v___y_5137_);
v___y_5102_ = v___y_5135_;
v___y_5103_ = v___y_5136_;
v___y_5104_ = v___y_5138_;
v___y_5105_ = v___y_5139_;
v___y_5106_ = v___x_5142_;
v___y_5107_ = v___y_5140_;
v___y_5108_ = v___x_5143_;
goto v___jp_5101_;
}
else
{
if (v___y_5141_ == 0)
{
lean_dec(v___y_5137_);
v___y_5102_ = v___y_5135_;
v___y_5103_ = v___y_5136_;
v___y_5104_ = v___y_5138_;
v___y_5105_ = v___y_5139_;
v___y_5106_ = v___x_5142_;
v___y_5107_ = v___y_5140_;
v___y_5108_ = v___y_5141_;
goto v___jp_5101_;
}
else
{
lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; 
lean_inc(v___y_5139_);
v___x_5144_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_5139_, v___y_5139_, v___y_5140_, v___y_5136_);
lean_dec(v___y_5139_);
v___x_5145_ = l_List_drop___redArg(v___y_5137_, v___y_5135_);
lean_dec(v___y_5135_);
v___x_5146_ = l_List_appendTR___redArg(v___x_5144_, v___x_5145_);
v___x_5147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5147_, 0, v___x_5146_);
lean_ctor_set(v___x_5147_, 1, v___y_5138_);
return v___x_5147_;
}
}
}
v___jp_5148_:
{
lean_object* v_rest_5152_; lean_object* v___x_5153_; 
lean_inc(v_snd_5151_);
v_rest_5152_ = l_List_drop___redArg(v_snd_5151_, v_fst_5149_);
lean_inc(v_rest_5152_);
v___x_5153_ = lp_lean_x2dftml_LeanFtml_tableTail(v_rest_5152_);
if (lean_obj_tag(v___x_5153_) == 0)
{
lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v_nlRun_5156_; lean_object* v___x_5157_; 
v___x_5154_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_rest_5152_);
v___x_5155_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v_rest_5152_, v_rest_5152_, v___x_5154_);
v_nlRun_5156_ = l_List_lengthTR___redArg(v___x_5155_);
lean_dec(v___x_5155_);
lean_inc(v_nlRun_5156_);
v___x_5157_ = lp_lean_x2dftml_LeanFtml_phAt(v_rest_5152_, v_nlRun_5156_);
if (lean_obj_tag(v___x_5157_) == 0)
{
uint8_t v___x_5158_; 
v___x_5158_ = 0;
v___y_5135_ = v_rest_5152_;
v___y_5136_ = v___x_5154_;
v___y_5137_ = v_nlRun_5156_;
v___y_5138_ = v_fst_5150_;
v___y_5139_ = v_fst_5149_;
v___y_5140_ = v_snd_5151_;
v___y_5141_ = v___x_5158_;
goto v___jp_5134_;
}
else
{
lean_object* v_val_5159_; lean_object* v_snd_5160_; uint8_t v___x_5161_; 
v_val_5159_ = lean_ctor_get(v___x_5157_, 0);
lean_inc(v_val_5159_);
lean_dec_ref_known(v___x_5157_, 1);
v_snd_5160_ = lean_ctor_get(v_val_5159_, 1);
lean_inc(v_snd_5160_);
lean_dec(v_val_5159_);
lean_inc(v_nlRun_5156_);
v___x_5161_ = lp_lean_x2dftml_List_any___at___00LeanFtml_finalizeOne_spec__1(v_nlRun_5156_, v_rest_5152_, v_snd_5160_, v_blocks_5067_);
v___y_5135_ = v_rest_5152_;
v___y_5136_ = v___x_5154_;
v___y_5137_ = v_nlRun_5156_;
v___y_5138_ = v_fst_5150_;
v___y_5139_ = v_fst_5149_;
v___y_5140_ = v_snd_5151_;
v___y_5141_ = v___x_5161_;
goto v___jp_5134_;
}
}
else
{
lean_object* v_val_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; 
v_val_5162_ = lean_ctor_get(v___x_5153_, 0);
lean_inc(v_val_5162_);
lean_dec_ref_known(v___x_5153_, 1);
v___x_5163_ = lean_nat_add(v_snd_5151_, v_val_5162_);
lean_dec(v_snd_5151_);
v___x_5164_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_fst_5149_);
v___x_5165_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_fst_5149_, v_fst_5149_, v___x_5163_, v___x_5164_);
lean_dec(v_fst_5149_);
v___x_5166_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_nativeProcess___closed__1));
v___x_5167_ = l_List_appendTR___redArg(v___x_5165_, v___x_5166_);
v___x_5168_ = lean_unsigned_to_nat(1u);
v___x_5169_ = lean_nat_add(v_val_5162_, v___x_5168_);
lean_dec(v_val_5162_);
v___x_5170_ = l_List_drop___redArg(v___x_5169_, v_rest_5152_);
lean_dec(v_rest_5152_);
v___x_5171_ = l_List_appendTR___redArg(v___x_5167_, v___x_5170_);
v___x_5172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5172_, 0, v___x_5171_);
lean_ctor_set(v___x_5172_, 1, v_fst_5150_);
return v___x_5172_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalizeOne___boxed(lean_object* v_src_5224_, lean_object* v_toks_5225_, lean_object* v_blk_5226_, lean_object* v_blocks_5227_){
_start:
{
lean_object* v_res_5228_; 
v_res_5228_ = lp_lean_x2dftml_LeanFtml_finalizeOne(v_src_5224_, v_toks_5225_, v_blk_5226_, v_blocks_5227_);
lean_dec(v_blocks_5227_);
lean_dec_ref(v_blk_5226_);
return v_res_5228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_finalizeExplicit_spec__0(lean_object* v_blocks_5229_, lean_object* v_x_5230_, lean_object* v_x_5231_){
_start:
{
if (lean_obj_tag(v_x_5231_) == 0)
{
return v_x_5230_;
}
else
{
lean_object* v_head_5232_; lean_object* v_tail_5233_; lean_object* v_fst_5234_; lean_object* v_snd_5235_; lean_object* v___x_5236_; 
v_head_5232_ = lean_ctor_get(v_x_5231_, 0);
v_tail_5233_ = lean_ctor_get(v_x_5231_, 1);
v_fst_5234_ = lean_ctor_get(v_x_5230_, 0);
lean_inc(v_fst_5234_);
v_snd_5235_ = lean_ctor_get(v_x_5230_, 1);
lean_inc(v_snd_5235_);
lean_dec_ref(v_x_5230_);
v___x_5236_ = lp_lean_x2dftml_LeanFtml_finalizeOne(v_fst_5234_, v_snd_5235_, v_head_5232_, v_blocks_5229_);
v_x_5230_ = v___x_5236_;
v_x_5231_ = v_tail_5233_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_finalizeExplicit_spec__0___boxed(lean_object* v_blocks_5238_, lean_object* v_x_5239_, lean_object* v_x_5240_){
_start:
{
lean_object* v_res_5241_; 
v_res_5241_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_finalizeExplicit_spec__0(v_blocks_5238_, v_x_5239_, v_x_5240_);
lean_dec(v_x_5240_);
lean_dec(v_blocks_5238_);
return v_res_5241_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalizeExplicit(lean_object* v_src_5242_, lean_object* v_toks_5243_, lean_object* v_blocks_5244_){
_start:
{
lean_object* v_src_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; 
v_src_5245_ = lp_lean_x2dftml_LeanFtml_dissolveCleanup(v_src_5242_);
v___x_5246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5246_, 0, v_src_5245_);
lean_ctor_set(v___x_5246_, 1, v_toks_5243_);
v___x_5247_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_finalizeExplicit_spec__0(v_blocks_5244_, v___x_5246_, v_blocks_5244_);
return v___x_5247_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalizeExplicit___boxed(lean_object* v_src_5248_, lean_object* v_toks_5249_, lean_object* v_blocks_5250_){
_start:
{
lean_object* v_res_5251_; 
v_res_5251_ = lp_lean_x2dftml_LeanFtml_finalizeExplicit(v_src_5248_, v_toks_5249_, v_blocks_5250_);
lean_dec(v_blocks_5250_);
return v_res_5251_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__1(void){
_start:
{
lean_object* v___x_5253_; lean_object* v___x_5254_; 
v___x_5253_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__0));
v___x_5254_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5253_);
return v___x_5254_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__3(void){
_start:
{
lean_object* v___x_5256_; lean_object* v___x_5257_; 
v___x_5256_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__2));
v___x_5257_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5256_);
return v___x_5257_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5(void){
_start:
{
lean_object* v___x_5259_; lean_object* v___x_5260_; 
v___x_5259_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__4));
v___x_5260_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5259_);
return v___x_5260_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7(void){
_start:
{
lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5262_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__6));
v___x_5263_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5262_);
return v___x_5263_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeRefcorr8(lean_object* v_s_5264_){
_start:
{
lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v_s1_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; 
v___x_5265_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__1, &lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__1);
v___x_5266_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__3, &lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__3);
v_s1_5267_ = lp_lean_x2dftml_LeanFtml_replaceFirst(v___x_5265_, v___x_5266_, v_s_5264_);
v___x_5268_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5, &lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5);
v___x_5269_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7, &lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7);
v___x_5270_ = lp_lean_x2dftml_LeanFtml_replaceFirst(v___x_5268_, v___x_5269_, v_s1_5267_);
return v___x_5270_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_normalizeUpperInner9_spec__0(uint8_t v___x_5271_, lean_object* v_l_5272_, lean_object* v_a_5273_, lean_object* v_a_5274_){
_start:
{
if (lean_obj_tag(v_a_5273_) == 0)
{
lean_dec_ref(v_a_5274_);
lean_inc(v_l_5272_);
return v_l_5272_;
}
else
{
lean_object* v_head_5275_; lean_object* v_tail_5276_; lean_object* v___x_5277_; uint8_t v___x_5278_; 
v_head_5275_ = lean_ctor_get(v_a_5273_, 0);
lean_inc(v_head_5275_);
v_tail_5276_ = lean_ctor_get(v_a_5273_, 1);
lean_inc(v_tail_5276_);
lean_dec_ref_known(v_a_5273_, 2);
v___x_5277_ = lean_unsigned_to_nat(10u);
v___x_5278_ = lean_nat_dec_eq(v_head_5275_, v___x_5277_);
if (v___x_5278_ == 0)
{
if (v___x_5271_ == 0)
{
lean_object* v___x_5279_; 
lean_dec(v_tail_5276_);
lean_dec(v_head_5275_);
v___x_5279_ = lean_array_to_list(v_a_5274_);
return v___x_5279_;
}
else
{
lean_object* v___x_5280_; 
v___x_5280_ = lean_array_push(v_a_5274_, v_head_5275_);
v_a_5273_ = v_tail_5276_;
v_a_5274_ = v___x_5280_;
goto _start;
}
}
else
{
lean_object* v___x_5282_; 
lean_dec(v_tail_5276_);
lean_dec(v_head_5275_);
v___x_5282_ = lean_array_to_list(v_a_5274_);
return v___x_5282_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_normalizeUpperInner9_spec__0___boxed(lean_object* v___x_5283_, lean_object* v_l_5284_, lean_object* v_a_5285_, lean_object* v_a_5286_){
_start:
{
uint8_t v___x_117__boxed_5287_; lean_object* v_res_5288_; 
v___x_117__boxed_5287_ = lean_unbox(v___x_5283_);
v_res_5288_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_normalizeUpperInner9_spec__0(v___x_117__boxed_5287_, v_l_5284_, v_a_5285_, v_a_5286_);
lean_dec(v_l_5284_);
return v_res_5288_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1(void){
_start:
{
lean_object* v___x_5290_; lean_object* v_pre_5291_; 
v___x_5290_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__0));
v_pre_5291_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5290_);
return v_pre_5291_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__2(void){
_start:
{
lean_object* v_pre_5292_; lean_object* v___x_5293_; 
v_pre_5292_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1, &lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1);
v___x_5293_ = l_List_lengthTR___redArg(v_pre_5292_);
return v___x_5293_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__4(void){
_start:
{
lean_object* v___x_5295_; lean_object* v_rep_5296_; 
v___x_5295_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__3));
v_rep_5296_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5295_);
return v_rep_5296_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__6(void){
_start:
{
lean_object* v___x_5298_; lean_object* v___x_5299_; 
v___x_5298_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__5));
v___x_5299_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5298_);
return v___x_5299_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUpperInner9(lean_object* v_s_5300_){
_start:
{
lean_object* v_pre_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; uint8_t v___x_5305_; 
v_pre_5301_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1, &lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__1);
v___x_5302_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__2, &lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__2);
v___x_5303_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_s_5300_);
v___x_5304_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_5300_, v_s_5300_, v___x_5302_, v___x_5303_);
v___x_5305_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_5304_, v_pre_5301_);
lean_dec(v___x_5304_);
if (v___x_5305_ == 0)
{
return v_s_5300_;
}
else
{
lean_object* v_rep_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; 
v_rep_5306_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__4, &lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__4);
v___x_5307_ = l_List_drop___redArg(v___x_5302_, v_s_5300_);
lean_dec(v_s_5300_);
lean_inc(v___x_5307_);
v___x_5308_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_normalizeUpperInner9_spec__0(v___x_5305_, v___x_5307_, v___x_5307_, v___x_5303_);
lean_dec(v___x_5307_);
v___x_5309_ = l_List_appendTR___redArg(v_rep_5306_, v___x_5308_);
v___x_5310_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__6, &lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_normalizeUpperInner9___closed__6);
v___x_5311_ = l_List_appendTR___redArg(v___x_5309_, v___x_5310_);
return v___x_5311_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_normalizeS1Tail9___closed__0(void){
_start:
{
lean_object* v_pre_5312_; lean_object* v___x_5313_; 
v_pre_5312_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5, &lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5);
v___x_5313_ = l_List_lengthTR___redArg(v_pre_5312_);
return v___x_5313_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeS1Tail9(lean_object* v_s_5314_){
_start:
{
lean_object* v_pre_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; uint8_t v___x_5319_; 
v_pre_5315_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5, &lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__5);
v___x_5316_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeS1Tail9___closed__0, &lp_lean_x2dftml_LeanFtml_normalizeS1Tail9___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_normalizeS1Tail9___closed__0);
v___x_5317_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_s_5314_);
v___x_5318_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_5314_, v_s_5314_, v___x_5316_, v___x_5317_);
v___x_5319_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_5318_, v_pre_5315_);
lean_dec(v___x_5318_);
if (v___x_5319_ == 0)
{
return v_s_5314_;
}
else
{
lean_object* v_rep_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; 
v_rep_5320_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7, &lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_normalizeRefcorr8___closed__7);
v___x_5321_ = l_List_drop___redArg(v___x_5316_, v_s_5314_);
lean_dec(v_s_5314_);
v___x_5322_ = l_List_appendTR___redArg(v_rep_5320_, v___x_5321_);
return v___x_5322_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listScoredEmptyItem10_spec__0(lean_object* v_x_5323_){
_start:
{
if (lean_obj_tag(v_x_5323_) == 0)
{
lean_object* v___x_5324_; 
v___x_5324_ = lean_box(0);
return v___x_5324_;
}
else
{
lean_object* v_head_5325_; uint8_t v_isOpen_5326_; 
v_head_5325_ = lean_ctor_get(v_x_5323_, 0);
v_isOpen_5326_ = lean_ctor_get_uint8(v_head_5325_, sizeof(void*)*4);
if (v_isOpen_5326_ == 0)
{
lean_object* v_tail_5327_; 
v_tail_5327_ = lean_ctor_get(v_x_5323_, 1);
lean_inc(v_tail_5327_);
lean_dec_ref_known(v_x_5323_, 2);
v_x_5323_ = v_tail_5327_;
goto _start;
}
else
{
lean_object* v_tail_5329_; lean_object* v_tag_5330_; uint8_t v_scored_5331_; uint8_t v___x_5332_; 
lean_inc(v_head_5325_);
v_tail_5329_ = lean_ctor_get(v_x_5323_, 1);
lean_inc(v_tail_5329_);
lean_dec_ref_known(v_x_5323_, 2);
v_tag_5330_ = lean_ctor_get(v_head_5325_, 0);
v_scored_5331_ = lean_ctor_get_uint8(v_head_5325_, sizeof(void*)*4 + 1);
lean_inc(v_tag_5330_);
v___x_5332_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_5330_);
if (v___x_5332_ == 0)
{
lean_dec(v_head_5325_);
v_x_5323_ = v_tail_5329_;
goto _start;
}
else
{
if (v_scored_5331_ == 0)
{
lean_dec(v_head_5325_);
v_x_5323_ = v_tail_5329_;
goto _start;
}
else
{
lean_object* v___x_5335_; 
lean_dec(v_tail_5329_);
v___x_5335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5335_, 0, v_head_5325_);
return v___x_5335_;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1(void){
_start:
{
lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; 
v___x_5338_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__0));
v___x_5339_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__5, &lp_lean_x2dftml_LeanFtml_formatItem___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__5);
v___x_5340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5340_, 0, v___x_5339_);
lean_ctor_set(v___x_5340_, 1, v___x_5338_);
return v___x_5340_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__2(void){
_start:
{
lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; 
v___x_5341_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__12);
v___x_5342_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__7, &lp_lean_x2dftml_LeanFtml_formatItem___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__7);
v___x_5343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5343_, 0, v___x_5342_);
lean_ctor_set(v___x_5343_, 1, v___x_5341_);
return v___x_5343_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3(void){
_start:
{
lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; 
v___x_5344_ = lean_box(0);
v___x_5345_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__2, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__2);
v___x_5346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5346_, 0, v___x_5345_);
lean_ctor_set(v___x_5346_, 1, v___x_5344_);
return v___x_5346_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__4(void){
_start:
{
lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; 
v___x_5347_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3);
v___x_5348_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1);
v___x_5349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5349_, 0, v___x_5348_);
lean_ctor_set(v___x_5349_, 1, v___x_5347_);
return v___x_5349_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5(void){
_start:
{
lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; 
v___x_5350_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__4, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__4);
v___x_5351_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__3, &lp_lean_x2dftml_LeanFtml_formatItem___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__3);
v___x_5352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5352_, 0, v___x_5351_);
lean_ctor_set(v___x_5352_, 1, v___x_5350_);
return v___x_5352_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10(lean_object* v_src0_5353_, lean_object* v_toks_5354_){
_start:
{
lean_object* v___x_5355_; lean_object* v___x_5356_; 
lean_inc(v_src0_5353_);
v___x_5355_ = lp_lean_x2dftml_LeanFtml_scanTags(v_src0_5353_);
lean_inc(v___x_5355_);
v___x_5356_ = lp_lean_x2dftml_LeanFtml_findPair(v___x_5355_);
if (lean_obj_tag(v___x_5356_) == 0)
{
lean_object* v___x_5357_; 
v___x_5357_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listScoredEmptyItem10_spec__0(v___x_5355_);
if (lean_obj_tag(v___x_5357_) == 0)
{
lean_object* v___x_5358_; 
lean_dec(v_toks_5354_);
lean_dec(v_src0_5353_);
v___x_5358_ = lean_box(0);
return v___x_5358_;
}
else
{
lean_object* v_val_5359_; lean_object* v___x_5361_; uint8_t v_isShared_5362_; uint8_t v_isSharedCheck_5437_; 
v_val_5359_ = lean_ctor_get(v___x_5357_, 0);
v_isSharedCheck_5437_ = !lean_is_exclusive(v___x_5357_);
if (v_isSharedCheck_5437_ == 0)
{
v___x_5361_ = v___x_5357_;
v_isShared_5362_ = v_isSharedCheck_5437_;
goto v_resetjp_5360_;
}
else
{
lean_inc(v_val_5359_);
lean_dec(v___x_5357_);
v___x_5361_ = lean_box(0);
v_isShared_5362_ = v_isSharedCheck_5437_;
goto v_resetjp_5360_;
}
v_resetjp_5360_:
{
lean_object* v_tag_5363_; lean_object* v_start_5364_; lean_object* v_len_5365_; lean_object* v___x_5366_; lean_object* v_body_5367_; lean_object* v___x_5368_; 
v_tag_5363_ = lean_ctor_get(v_val_5359_, 0);
lean_inc(v_tag_5363_);
v_start_5364_ = lean_ctor_get(v_val_5359_, 2);
lean_inc(v_start_5364_);
v_len_5365_ = lean_ctor_get(v_val_5359_, 3);
lean_inc(v_len_5365_);
lean_dec(v_val_5359_);
v___x_5366_ = lean_nat_add(v_start_5364_, v_len_5365_);
lean_dec(v_len_5365_);
lean_dec(v_start_5364_);
v_body_5367_ = l_List_drop___redArg(v___x_5366_, v_src0_5353_);
lean_dec(v_src0_5353_);
v___x_5368_ = lp_lean_x2dftml_LeanFtml_scanLi(v_body_5367_);
if (lean_obj_tag(v___x_5368_) == 0)
{
lean_object* v___x_5369_; 
lean_dec(v_tag_5363_);
lean_del_object(v___x_5361_);
lean_dec(v_toks_5354_);
v___x_5369_ = lean_box(0);
return v___x_5369_;
}
else
{
lean_object* v_head_5370_; lean_object* v___x_5372_; uint8_t v_isShared_5373_; uint8_t v_isSharedCheck_5435_; 
v_head_5370_ = lean_ctor_get(v___x_5368_, 0);
v_isSharedCheck_5435_ = !lean_is_exclusive(v___x_5368_);
if (v_isSharedCheck_5435_ == 0)
{
lean_object* v_unused_5436_; 
v_unused_5436_ = lean_ctor_get(v___x_5368_, 1);
lean_dec(v_unused_5436_);
v___x_5372_ = v___x_5368_;
v_isShared_5373_ = v_isSharedCheck_5435_;
goto v_resetjp_5371_;
}
else
{
lean_inc(v_head_5370_);
lean_dec(v___x_5368_);
v___x_5372_ = lean_box(0);
v_isShared_5373_ = v_isSharedCheck_5435_;
goto v_resetjp_5371_;
}
v_resetjp_5371_:
{
lean_object* v_snd_5374_; lean_object* v___x_5376_; uint8_t v_isShared_5377_; uint8_t v_isSharedCheck_5433_; 
v_snd_5374_ = lean_ctor_get(v_head_5370_, 1);
v_isSharedCheck_5433_ = !lean_is_exclusive(v_head_5370_);
if (v_isSharedCheck_5433_ == 0)
{
lean_object* v_unused_5434_; 
v_unused_5434_ = lean_ctor_get(v_head_5370_, 0);
lean_dec(v_unused_5434_);
v___x_5376_ = v_head_5370_;
v_isShared_5377_ = v_isSharedCheck_5433_;
goto v_resetjp_5375_;
}
else
{
lean_inc(v_snd_5374_);
lean_dec(v_head_5370_);
v___x_5376_ = lean_box(0);
v_isShared_5377_ = v_isSharedCheck_5433_;
goto v_resetjp_5375_;
}
v_resetjp_5375_:
{
lean_object* v_snd_5378_; lean_object* v___x_5380_; uint8_t v_isShared_5381_; uint8_t v_isSharedCheck_5431_; 
v_snd_5378_ = lean_ctor_get(v_snd_5374_, 1);
v_isSharedCheck_5431_ = !lean_is_exclusive(v_snd_5374_);
if (v_isSharedCheck_5431_ == 0)
{
lean_object* v_unused_5432_; 
v_unused_5432_ = lean_ctor_get(v_snd_5374_, 0);
lean_dec(v_unused_5432_);
v___x_5380_ = v_snd_5374_;
v_isShared_5381_ = v_isSharedCheck_5431_;
goto v_resetjp_5379_;
}
else
{
lean_inc(v_snd_5378_);
lean_dec(v_snd_5374_);
v___x_5380_ = lean_box(0);
v_isShared_5381_ = v_isSharedCheck_5431_;
goto v_resetjp_5379_;
}
v_resetjp_5379_:
{
lean_object* v_fst_5382_; lean_object* v___x_5384_; uint8_t v_isShared_5385_; uint8_t v_isSharedCheck_5429_; 
v_fst_5382_ = lean_ctor_get(v_snd_5378_, 0);
v_isSharedCheck_5429_ = !lean_is_exclusive(v_snd_5378_);
if (v_isSharedCheck_5429_ == 0)
{
lean_object* v_unused_5430_; 
v_unused_5430_ = lean_ctor_get(v_snd_5378_, 1);
lean_dec(v_unused_5430_);
v___x_5384_ = v_snd_5378_;
v_isShared_5385_ = v_isSharedCheck_5429_;
goto v_resetjp_5383_;
}
else
{
lean_inc(v_fst_5382_);
lean_dec(v_snd_5378_);
v___x_5384_ = lean_box(0);
v_isShared_5385_ = v_isSharedCheck_5429_;
goto v_resetjp_5383_;
}
v_resetjp_5383_:
{
lean_object* v___x_5386_; uint8_t v___x_5387_; 
v___x_5386_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_5382_);
lean_dec(v_fst_5382_);
v___x_5387_ = l_List_isEmpty___redArg(v___x_5386_);
lean_dec(v___x_5386_);
if (v___x_5387_ == 0)
{
lean_object* v___x_5388_; 
lean_del_object(v___x_5384_);
lean_del_object(v___x_5380_);
lean_del_object(v___x_5376_);
lean_del_object(v___x_5372_);
lean_dec(v_tag_5363_);
lean_del_object(v___x_5361_);
lean_dec(v_toks_5354_);
v___x_5388_ = lean_box(0);
return v___x_5388_;
}
else
{
lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5394_; 
v___x_5389_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_5390_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3);
v___x_5391_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5);
v___x_5392_ = lp_lean_x2dftml_LeanFtml_textVal(v_tag_5363_);
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v___x_5392_);
lean_ctor_set(v___x_5384_, 0, v___x_5391_);
v___x_5394_ = v___x_5384_;
goto v_reusejp_5393_;
}
else
{
lean_object* v_reuseFailAlloc_5428_; 
v_reuseFailAlloc_5428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5428_, 0, v___x_5391_);
lean_ctor_set(v_reuseFailAlloc_5428_, 1, v___x_5392_);
v___x_5394_ = v_reuseFailAlloc_5428_;
goto v_reusejp_5393_;
}
v_reusejp_5393_:
{
lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5400_; 
v___x_5395_ = lean_box(0);
v___x_5396_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1);
v___x_5397_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7);
v___x_5398_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5398_, 0, v___x_5387_);
if (v_isShared_5381_ == 0)
{
lean_ctor_set(v___x_5380_, 1, v___x_5398_);
lean_ctor_set(v___x_5380_, 0, v___x_5397_);
v___x_5400_ = v___x_5380_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5427_; 
v_reuseFailAlloc_5427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5427_, 0, v___x_5397_);
lean_ctor_set(v_reuseFailAlloc_5427_, 1, v___x_5398_);
v___x_5400_ = v_reuseFailAlloc_5427_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
lean_object* v___x_5402_; 
if (v_isShared_5373_ == 0)
{
lean_ctor_set(v___x_5372_, 1, v___x_5395_);
lean_ctor_set(v___x_5372_, 0, v___x_5400_);
v___x_5402_ = v___x_5372_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5426_; 
v_reuseFailAlloc_5426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5426_, 0, v___x_5400_);
lean_ctor_set(v_reuseFailAlloc_5426_, 1, v___x_5395_);
v___x_5402_ = v_reuseFailAlloc_5426_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
lean_object* v___x_5404_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set_tag(v___x_5376_, 1);
lean_ctor_set(v___x_5376_, 1, v___x_5402_);
lean_ctor_set(v___x_5376_, 0, v___x_5396_);
v___x_5404_ = v___x_5376_;
goto v_reusejp_5403_;
}
else
{
lean_object* v_reuseFailAlloc_5425_; 
v_reuseFailAlloc_5425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5425_, 0, v___x_5396_);
lean_ctor_set(v_reuseFailAlloc_5425_, 1, v___x_5402_);
v___x_5404_ = v_reuseFailAlloc_5425_;
goto v_reusejp_5403_;
}
v_reusejp_5403_:
{
lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v_fst_5408_; lean_object* v_snd_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v_fst_5412_; lean_object* v_snd_5413_; lean_object* v___x_5415_; uint8_t v_isShared_5416_; uint8_t v_isSharedCheck_5424_; 
v___x_5405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5405_, 0, v___x_5394_);
lean_ctor_set(v___x_5405_, 1, v___x_5404_);
v___x_5406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5406_, 0, v___x_5390_);
lean_ctor_set(v___x_5406_, 1, v___x_5405_);
v___x_5407_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5389_, v___x_5406_, v_toks_5354_);
v_fst_5408_ = lean_ctor_get(v___x_5407_, 0);
lean_inc(v_fst_5408_);
v_snd_5409_ = lean_ctor_get(v___x_5407_, 1);
lean_inc(v_snd_5409_);
lean_dec_ref(v___x_5407_);
v___x_5410_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5);
v___x_5411_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5389_, v___x_5410_, v_snd_5409_);
v_fst_5412_ = lean_ctor_get(v___x_5411_, 0);
v_snd_5413_ = lean_ctor_get(v___x_5411_, 1);
v_isSharedCheck_5424_ = !lean_is_exclusive(v___x_5411_);
if (v_isSharedCheck_5424_ == 0)
{
v___x_5415_ = v___x_5411_;
v_isShared_5416_ = v_isSharedCheck_5424_;
goto v_resetjp_5414_;
}
else
{
lean_inc(v_snd_5413_);
lean_inc(v_fst_5412_);
lean_dec(v___x_5411_);
v___x_5415_ = lean_box(0);
v_isShared_5416_ = v_isSharedCheck_5424_;
goto v_resetjp_5414_;
}
v_resetjp_5414_:
{
lean_object* v___x_5417_; lean_object* v___x_5419_; 
v___x_5417_ = l_List_appendTR___redArg(v_fst_5408_, v_fst_5412_);
if (v_isShared_5416_ == 0)
{
lean_ctor_set(v___x_5415_, 0, v___x_5417_);
v___x_5419_ = v___x_5415_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v___x_5417_);
lean_ctor_set(v_reuseFailAlloc_5423_, 1, v_snd_5413_);
v___x_5419_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
lean_object* v___x_5421_; 
if (v_isShared_5362_ == 0)
{
lean_ctor_set(v___x_5361_, 0, v___x_5419_);
v___x_5421_ = v___x_5361_;
goto v_reusejp_5420_;
}
else
{
lean_object* v_reuseFailAlloc_5422_; 
v_reuseFailAlloc_5422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5422_, 0, v___x_5419_);
v___x_5421_ = v_reuseFailAlloc_5422_;
goto v_reusejp_5420_;
}
v_reusejp_5420_:
{
return v___x_5421_;
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
}
}
}
else
{
lean_object* v___x_5438_; 
lean_dec_ref_known(v___x_5356_, 1);
lean_dec(v___x_5355_);
lean_dec(v_toks_5354_);
lean_dec(v_src0_5353_);
v___x_5438_ = lean_box(0);
return v___x_5438_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimWs10(lean_object* v_s_5439_){
_start:
{
lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; 
v___x_5440_ = l_List_reverse___redArg(v_s_5439_);
v___x_5441_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(v___x_5440_);
lean_dec(v___x_5440_);
v___x_5442_ = l_List_reverse___redArg(v___x_5441_);
return v___x_5442_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstLiAt_go(lean_object* v_a_5443_, lean_object* v_a_5444_){
_start:
{
if (lean_obj_tag(v_a_5443_) == 0)
{
lean_object* v___x_5445_; 
lean_dec(v_a_5444_);
v___x_5445_ = lean_box(0);
return v___x_5445_;
}
else
{
lean_object* v_tail_5446_; lean_object* v___x_5447_; 
v_tail_5446_ = lean_ctor_get(v_a_5443_, 1);
lean_inc(v_tail_5446_);
v___x_5447_ = lp_lean_x2dftml_LeanFtml_liOpenerAt(v_a_5443_);
if (lean_obj_tag(v___x_5447_) == 0)
{
lean_object* v___x_5448_; lean_object* v___x_5449_; 
v___x_5448_ = lean_unsigned_to_nat(1u);
v___x_5449_ = lean_nat_add(v_a_5444_, v___x_5448_);
lean_dec(v_a_5444_);
v_a_5443_ = v_tail_5446_;
v_a_5444_ = v___x_5449_;
goto _start;
}
else
{
lean_object* v___x_5452_; uint8_t v_isShared_5453_; uint8_t v_isSharedCheck_5457_; 
lean_dec(v_tail_5446_);
v_isSharedCheck_5457_ = !lean_is_exclusive(v___x_5447_);
if (v_isSharedCheck_5457_ == 0)
{
lean_object* v_unused_5458_; 
v_unused_5458_ = lean_ctor_get(v___x_5447_, 0);
lean_dec(v_unused_5458_);
v___x_5452_ = v___x_5447_;
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
else
{
lean_dec(v___x_5447_);
v___x_5452_ = lean_box(0);
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
v_resetjp_5451_:
{
lean_object* v___x_5455_; 
if (v_isShared_5453_ == 0)
{
lean_ctor_set(v___x_5452_, 0, v_a_5444_);
v___x_5455_ = v___x_5452_;
goto v_reusejp_5454_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v_a_5444_);
v___x_5455_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5454_;
}
v_reusejp_5454_:
{
return v___x_5455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstLiAt(lean_object* v_s_5459_){
_start:
{
lean_object* v___x_5460_; lean_object* v___x_5461_; 
v___x_5460_ = lean_unsigned_to_nat(0u);
v___x_5461_ = lp_lean_x2dftml_LeanFtml_firstLiAt_go(v_s_5459_, v___x_5460_);
return v___x_5461_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_splitLastCloser11_spec__0(lean_object* v_a_5462_, lean_object* v_a_5463_){
_start:
{
if (lean_obj_tag(v_a_5462_) == 0)
{
lean_object* v___x_5464_; 
v___x_5464_ = l_List_reverse___redArg(v_a_5463_);
return v___x_5464_;
}
else
{
lean_object* v_head_5465_; uint8_t v_isOpen_5466_; 
v_head_5465_ = lean_ctor_get(v_a_5462_, 0);
v_isOpen_5466_ = lean_ctor_get_uint8(v_head_5465_, sizeof(void*)*4);
if (v_isOpen_5466_ == 0)
{
lean_object* v_tail_5467_; lean_object* v___x_5469_; uint8_t v_isShared_5470_; uint8_t v_isSharedCheck_5475_; 
lean_inc(v_head_5465_);
v_tail_5467_ = lean_ctor_get(v_a_5462_, 1);
v_isSharedCheck_5475_ = !lean_is_exclusive(v_a_5462_);
if (v_isSharedCheck_5475_ == 0)
{
lean_object* v_unused_5476_; 
v_unused_5476_ = lean_ctor_get(v_a_5462_, 0);
lean_dec(v_unused_5476_);
v___x_5469_ = v_a_5462_;
v_isShared_5470_ = v_isSharedCheck_5475_;
goto v_resetjp_5468_;
}
else
{
lean_inc(v_tail_5467_);
lean_dec(v_a_5462_);
v___x_5469_ = lean_box(0);
v_isShared_5470_ = v_isSharedCheck_5475_;
goto v_resetjp_5468_;
}
v_resetjp_5468_:
{
lean_object* v___x_5472_; 
if (v_isShared_5470_ == 0)
{
lean_ctor_set(v___x_5469_, 1, v_a_5463_);
v___x_5472_ = v___x_5469_;
goto v_reusejp_5471_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v_head_5465_);
lean_ctor_set(v_reuseFailAlloc_5474_, 1, v_a_5463_);
v___x_5472_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5471_;
}
v_reusejp_5471_:
{
v_a_5462_ = v_tail_5467_;
v_a_5463_ = v___x_5472_;
goto _start;
}
}
}
else
{
lean_object* v_tail_5477_; 
v_tail_5477_ = lean_ctor_get(v_a_5462_, 1);
lean_inc(v_tail_5477_);
lean_dec_ref_known(v_a_5462_, 2);
v_a_5462_ = v_tail_5477_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitLastCloser11(lean_object* v_s_5479_){
_start:
{
lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; 
lean_inc(v_s_5479_);
v___x_5480_ = lp_lean_x2dftml_LeanFtml_scanTags(v_s_5479_);
v___x_5481_ = lean_box(0);
v___x_5482_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_splitLastCloser11_spec__0(v___x_5480_, v___x_5481_);
v___x_5483_ = l_List_getLast_x3f___redArg(v___x_5482_);
lean_dec(v___x_5482_);
if (lean_obj_tag(v___x_5483_) == 0)
{
lean_object* v___x_5484_; 
v___x_5484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5484_, 0, v_s_5479_);
lean_ctor_set(v___x_5484_, 1, v___x_5481_);
return v___x_5484_;
}
else
{
lean_object* v_val_5485_; uint8_t v_residual_5486_; lean_object* v_start_5487_; lean_object* v_len_5488_; lean_object* v___x_5489_; lean_object* v___y_5491_; 
v_val_5485_ = lean_ctor_get(v___x_5483_, 0);
lean_inc(v_val_5485_);
lean_dec_ref_known(v___x_5483_, 1);
v_residual_5486_ = lean_ctor_get_uint8(v_val_5485_, sizeof(void*)*4 + 2);
v_start_5487_ = lean_ctor_get(v_val_5485_, 2);
lean_inc(v_start_5487_);
v_len_5488_ = lean_ctor_get(v_val_5485_, 3);
lean_inc(v_len_5488_);
lean_dec(v_val_5485_);
v___x_5489_ = lean_nat_add(v_start_5487_, v_len_5488_);
lean_dec(v_len_5488_);
lean_dec(v_start_5487_);
if (v_residual_5486_ == 0)
{
lean_object* v___x_5497_; 
v___x_5497_ = lean_unsigned_to_nat(0u);
v___y_5491_ = v___x_5497_;
goto v___jp_5490_;
}
else
{
lean_object* v___x_5498_; 
v___x_5498_ = lean_unsigned_to_nat(1u);
v___y_5491_ = v___x_5498_;
goto v___jp_5490_;
}
v___jp_5490_:
{
lean_object* v_e_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; 
v_e_5492_ = lean_nat_sub(v___x_5489_, v___y_5491_);
lean_dec(v___x_5489_);
v___x_5493_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_e_5492_);
lean_inc(v_s_5479_);
v___x_5494_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_5479_, v_s_5479_, v_e_5492_, v___x_5493_);
v___x_5495_ = l_List_drop___redArg(v_e_5492_, v_s_5479_);
lean_dec(v_s_5479_);
v___x_5496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5496_, 0, v___x_5494_);
lean_ctor_set(v___x_5496_, 1, v___x_5495_);
return v___x_5496_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mkNewlines11_go(lean_object* v_a_5499_, lean_object* v_a_5500_, lean_object* v_a_5501_){
_start:
{
lean_object* v_zero_5502_; uint8_t v_isZero_5503_; 
v_zero_5502_ = lean_unsigned_to_nat(0u);
v_isZero_5503_ = lean_nat_dec_eq(v_a_5499_, v_zero_5502_);
if (v_isZero_5503_ == 1)
{
lean_object* v___x_5504_; lean_object* v___x_5505_; 
lean_dec(v_a_5499_);
v___x_5504_ = l_List_reverse___redArg(v_a_5500_);
v___x_5505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5505_, 0, v___x_5504_);
lean_ctor_set(v___x_5505_, 1, v_a_5501_);
return v___x_5505_;
}
else
{
lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v_fst_5509_; lean_object* v_snd_5510_; lean_object* v___x_5512_; uint8_t v_isShared_5513_; uint8_t v_isSharedCheck_5520_; 
v___x_5506_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__12));
v___x_5507_ = lean_box(0);
v___x_5508_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5506_, v___x_5507_, v_a_5501_);
v_fst_5509_ = lean_ctor_get(v___x_5508_, 0);
v_snd_5510_ = lean_ctor_get(v___x_5508_, 1);
v_isSharedCheck_5520_ = !lean_is_exclusive(v___x_5508_);
if (v_isSharedCheck_5520_ == 0)
{
v___x_5512_ = v___x_5508_;
v_isShared_5513_ = v_isSharedCheck_5520_;
goto v_resetjp_5511_;
}
else
{
lean_inc(v_snd_5510_);
lean_inc(v_fst_5509_);
lean_dec(v___x_5508_);
v___x_5512_ = lean_box(0);
v_isShared_5513_ = v_isSharedCheck_5520_;
goto v_resetjp_5511_;
}
v_resetjp_5511_:
{
lean_object* v_one_5514_; lean_object* v_n_5515_; lean_object* v___x_5517_; 
v_one_5514_ = lean_unsigned_to_nat(1u);
v_n_5515_ = lean_nat_sub(v_a_5499_, v_one_5514_);
lean_dec(v_a_5499_);
if (v_isShared_5513_ == 0)
{
lean_ctor_set_tag(v___x_5512_, 1);
lean_ctor_set(v___x_5512_, 1, v_a_5500_);
v___x_5517_ = v___x_5512_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v_fst_5509_);
lean_ctor_set(v_reuseFailAlloc_5519_, 1, v_a_5500_);
v___x_5517_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
v_a_5499_ = v_n_5515_;
v_a_5500_ = v___x_5517_;
v_a_5501_ = v_snd_5510_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mkNewlines11(lean_object* v_n_5521_, lean_object* v_toks_5522_){
_start:
{
lean_object* v___x_5523_; lean_object* v___x_5524_; 
v___x_5523_ = lean_box(0);
v___x_5524_ = lp_lean_x2dftml_LeanFtml_mkNewlines11_go(v_n_5521_, v___x_5523_, v_toks_5522_);
return v___x_5524_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interleaveNl11(lean_object* v_bs_5525_, lean_object* v_nls_5526_){
_start:
{
if (lean_obj_tag(v_bs_5525_) == 0)
{
lean_dec(v_nls_5526_);
return v_bs_5525_;
}
else
{
lean_object* v_head_5527_; lean_object* v_tail_5528_; lean_object* v___x_5530_; uint8_t v_isShared_5531_; uint8_t v_isSharedCheck_5545_; 
v_head_5527_ = lean_ctor_get(v_bs_5525_, 0);
v_tail_5528_ = lean_ctor_get(v_bs_5525_, 1);
v_isSharedCheck_5545_ = !lean_is_exclusive(v_bs_5525_);
if (v_isSharedCheck_5545_ == 0)
{
v___x_5530_ = v_bs_5525_;
v_isShared_5531_ = v_isSharedCheck_5545_;
goto v_resetjp_5529_;
}
else
{
lean_inc(v_tail_5528_);
lean_inc(v_head_5527_);
lean_dec(v_bs_5525_);
v___x_5530_ = lean_box(0);
v_isShared_5531_ = v_isSharedCheck_5545_;
goto v_resetjp_5529_;
}
v_resetjp_5529_:
{
lean_object* v_b_5533_; lean_object* v_nls_5534_; lean_object* v___x_5539_; uint8_t v___x_5540_; 
v___x_5539_ = lean_unsigned_to_nat(10u);
v___x_5540_ = lean_nat_dec_eq(v_head_5527_, v___x_5539_);
if (v___x_5540_ == 0)
{
v_b_5533_ = v_head_5527_;
v_nls_5534_ = v_nls_5526_;
goto v___jp_5532_;
}
else
{
lean_dec(v_head_5527_);
if (lean_obj_tag(v_nls_5526_) == 1)
{
lean_object* v_head_5541_; lean_object* v_tail_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; 
lean_del_object(v___x_5530_);
v_head_5541_ = lean_ctor_get(v_nls_5526_, 0);
lean_inc(v_head_5541_);
v_tail_5542_ = lean_ctor_get(v_nls_5526_, 1);
lean_inc(v_tail_5542_);
lean_dec_ref_known(v_nls_5526_, 2);
v___x_5543_ = lp_lean_x2dftml_LeanFtml_interleaveNl11(v_tail_5528_, v_tail_5542_);
v___x_5544_ = l_List_appendTR___redArg(v_head_5541_, v___x_5543_);
return v___x_5544_;
}
else
{
v_b_5533_ = v___x_5539_;
v_nls_5534_ = v_nls_5526_;
goto v___jp_5532_;
}
}
v___jp_5532_:
{
lean_object* v___x_5535_; lean_object* v___x_5537_; 
v___x_5535_ = lp_lean_x2dftml_LeanFtml_interleaveNl11(v_tail_5528_, v_nls_5534_);
if (v_isShared_5531_ == 0)
{
lean_ctor_set(v___x_5530_, 1, v___x_5535_);
lean_ctor_set(v___x_5530_, 0, v_b_5533_);
v___x_5537_ = v___x_5530_;
goto v_reusejp_5536_;
}
else
{
lean_object* v_reuseFailAlloc_5538_; 
v_reuseFailAlloc_5538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5538_, 0, v_b_5533_);
lean_ctor_set(v_reuseFailAlloc_5538_, 1, v___x_5535_);
v___x_5537_ = v_reuseFailAlloc_5538_;
goto v_reusejp_5536_;
}
v_reusejp_5536_:
{
return v___x_5537_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__1(lean_object* v_x_5546_){
_start:
{
if (lean_obj_tag(v_x_5546_) == 0)
{
lean_object* v___x_5547_; 
v___x_5547_ = lean_box(0);
return v___x_5547_;
}
else
{
lean_object* v_head_5548_; uint8_t v_isOpen_5549_; 
v_head_5548_ = lean_ctor_get(v_x_5546_, 0);
v_isOpen_5549_ = lean_ctor_get_uint8(v_head_5548_, sizeof(void*)*4);
if (v_isOpen_5549_ == 0)
{
lean_object* v___x_5550_; 
lean_inc(v_head_5548_);
v___x_5550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5550_, 0, v_head_5548_);
return v___x_5550_;
}
else
{
lean_object* v_tail_5551_; 
v_tail_5551_ = lean_ctor_get(v_x_5546_, 1);
v_x_5546_ = v_tail_5551_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__1___boxed(lean_object* v_x_5553_){
_start:
{
lean_object* v_res_5554_; 
v_res_5554_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__1(v_x_5553_);
lean_dec(v_x_5553_);
return v_res_5554_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__0(lean_object* v_x_5555_){
_start:
{
if (lean_obj_tag(v_x_5555_) == 0)
{
lean_object* v___x_5556_; 
v___x_5556_ = lean_box(0);
return v___x_5556_;
}
else
{
lean_object* v_head_5557_; uint8_t v_isOpen_5558_; 
v_head_5557_ = lean_ctor_get(v_x_5555_, 0);
v_isOpen_5558_ = lean_ctor_get_uint8(v_head_5557_, sizeof(void*)*4);
if (v_isOpen_5558_ == 0)
{
lean_object* v_tail_5559_; 
v_tail_5559_ = lean_ctor_get(v_x_5555_, 1);
lean_inc(v_tail_5559_);
lean_dec_ref_known(v_x_5555_, 2);
v_x_5555_ = v_tail_5559_;
goto _start;
}
else
{
lean_object* v_tail_5561_; lean_object* v_tag_5562_; uint8_t v___x_5563_; 
lean_inc(v_head_5557_);
v_tail_5561_ = lean_ctor_get(v_x_5555_, 1);
lean_inc(v_tail_5561_);
lean_dec_ref_known(v_x_5555_, 2);
v_tag_5562_ = lean_ctor_get(v_head_5557_, 0);
lean_inc(v_tag_5562_);
v___x_5563_ = lp_lean_x2dftml_LeanFtml_tagIsRawCase(v_tag_5562_);
if (v___x_5563_ == 0)
{
lean_dec(v_head_5557_);
v_x_5555_ = v_tail_5561_;
goto _start;
}
else
{
lean_object* v___x_5565_; 
lean_dec(v_tail_5561_);
v___x_5565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5565_, 0, v_head_5557_);
return v___x_5565_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_countP_go___at___00LeanFtml_listPostFailedClose10_spec__2(lean_object* v_a_5566_, lean_object* v_a_5567_){
_start:
{
if (lean_obj_tag(v_a_5566_) == 0)
{
return v_a_5567_;
}
else
{
lean_object* v_head_5568_; lean_object* v_tail_5569_; lean_object* v___x_5570_; uint8_t v___x_5571_; 
v_head_5568_ = lean_ctor_get(v_a_5566_, 0);
v_tail_5569_ = lean_ctor_get(v_a_5566_, 1);
v___x_5570_ = lean_unsigned_to_nat(10u);
v___x_5571_ = lean_nat_dec_eq(v_head_5568_, v___x_5570_);
if (v___x_5571_ == 0)
{
v_a_5566_ = v_tail_5569_;
goto _start;
}
else
{
lean_object* v___x_5573_; lean_object* v___x_5574_; 
v___x_5573_ = lean_unsigned_to_nat(1u);
v___x_5574_ = lean_nat_add(v_a_5567_, v___x_5573_);
lean_dec(v_a_5567_);
v_a_5566_ = v_tail_5569_;
v_a_5567_ = v___x_5574_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_countP_go___at___00LeanFtml_listPostFailedClose10_spec__2___boxed(lean_object* v_a_5576_, lean_object* v_a_5577_){
_start:
{
lean_object* v_res_5578_; 
v_res_5578_ = lp_lean_x2dftml_List_countP_go___at___00LeanFtml_listPostFailedClose10_spec__2(v_a_5576_, v_a_5577_);
lean_dec(v_a_5576_);
return v_res_5578_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0(void){
_start:
{
lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; 
v___x_5579_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__3);
v___x_5580_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formatItem___closed__11, &lp_lean_x2dftml_LeanFtml_formatItem___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_formatItem___closed__11);
v___x_5581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5581_, 0, v___x_5580_);
lean_ctor_set(v___x_5581_, 1, v___x_5579_);
return v___x_5581_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose10(lean_object* v_src0_5582_, lean_object* v_toks_5583_){
_start:
{
lean_object* v___x_5584_; lean_object* v___x_5585_; 
lean_inc(v_src0_5582_);
v___x_5584_ = lp_lean_x2dftml_LeanFtml_scanTags(v_src0_5582_);
lean_inc(v___x_5584_);
v___x_5585_ = lp_lean_x2dftml_LeanFtml_findPair(v___x_5584_);
if (lean_obj_tag(v___x_5585_) == 0)
{
lean_object* v___x_5586_; 
v___x_5586_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__0(v___x_5584_);
if (lean_obj_tag(v___x_5586_) == 0)
{
lean_object* v___x_5587_; 
lean_dec(v_toks_5583_);
lean_dec(v_src0_5582_);
v___x_5587_ = lean_box(0);
return v___x_5587_;
}
else
{
lean_object* v_val_5588_; lean_object* v_tag_5589_; uint8_t v_scored_5590_; lean_object* v_start_5591_; lean_object* v_len_5592_; lean_object* v___x_5593_; lean_object* v_body_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; 
v_val_5588_ = lean_ctor_get(v___x_5586_, 0);
lean_inc(v_val_5588_);
lean_dec_ref_known(v___x_5586_, 1);
v_tag_5589_ = lean_ctor_get(v_val_5588_, 0);
lean_inc(v_tag_5589_);
v_scored_5590_ = lean_ctor_get_uint8(v_val_5588_, sizeof(void*)*4 + 1);
v_start_5591_ = lean_ctor_get(v_val_5588_, 2);
lean_inc(v_start_5591_);
v_len_5592_ = lean_ctor_get(v_val_5588_, 3);
lean_inc(v_len_5592_);
lean_dec(v_val_5588_);
v___x_5593_ = lean_nat_add(v_start_5591_, v_len_5592_);
lean_dec(v_len_5592_);
lean_dec(v_start_5591_);
v_body_5594_ = l_List_drop___redArg(v___x_5593_, v_src0_5582_);
lean_dec(v_src0_5582_);
lean_inc(v_body_5594_);
v___x_5595_ = lp_lean_x2dftml_LeanFtml_scanTags(v_body_5594_);
v___x_5596_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_listPostFailedClose10_spec__1(v___x_5595_);
lean_dec(v___x_5595_);
if (lean_obj_tag(v___x_5596_) == 0)
{
lean_object* v___x_5597_; 
lean_dec(v_body_5594_);
lean_dec(v_tag_5589_);
lean_dec(v_toks_5583_);
v___x_5597_ = lean_box(0);
return v___x_5597_;
}
else
{
lean_object* v_val_5598_; lean_object* v___x_5600_; uint8_t v_isShared_5601_; uint8_t v_isSharedCheck_5740_; 
v_val_5598_ = lean_ctor_get(v___x_5596_, 0);
v_isSharedCheck_5740_ = !lean_is_exclusive(v___x_5596_);
if (v_isSharedCheck_5740_ == 0)
{
v___x_5600_ = v___x_5596_;
v_isShared_5601_ = v_isSharedCheck_5740_;
goto v_resetjp_5599_;
}
else
{
lean_inc(v_val_5598_);
lean_dec(v___x_5596_);
v___x_5600_ = lean_box(0);
v_isShared_5601_ = v_isSharedCheck_5740_;
goto v_resetjp_5599_;
}
v_resetjp_5599_:
{
uint8_t v_residual_5602_; lean_object* v_start_5603_; lean_object* v_len_5604_; lean_object* v___x_5605_; lean_object* v___y_5607_; lean_object* v___y_5608_; lean_object* v___y_5609_; lean_object* v___y_5610_; lean_object* v___y_5611_; lean_object* v___y_5612_; lean_object* v___y_5613_; lean_object* v___x_5639_; lean_object* v_pre_5640_; lean_object* v___x_5641_; lean_object* v___y_5643_; 
v_residual_5602_ = lean_ctor_get_uint8(v_val_5598_, sizeof(void*)*4 + 2);
v_start_5603_ = lean_ctor_get(v_val_5598_, 2);
lean_inc_n(v_start_5603_, 2);
v_len_5604_ = lean_ctor_get(v_val_5598_, 3);
lean_inc(v_len_5604_);
lean_dec(v_val_5598_);
v___x_5605_ = lean_unsigned_to_nat(0u);
v___x_5639_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v_body_5594_);
v_pre_5640_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_body_5594_, v_body_5594_, v_start_5603_, v___x_5639_);
v___x_5641_ = lean_nat_add(v_start_5603_, v_len_5604_);
lean_dec(v_len_5604_);
lean_dec(v_start_5603_);
if (v_residual_5602_ == 0)
{
v___y_5643_ = v___x_5605_;
goto v___jp_5642_;
}
else
{
lean_object* v___x_5739_; 
v___x_5739_ = lean_unsigned_to_nat(1u);
v___y_5643_ = v___x_5739_;
goto v___jp_5642_;
}
v___jp_5606_:
{
lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v_fst_5616_; lean_object* v_snd_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v_fst_5620_; lean_object* v_snd_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5638_; 
v___x_5614_ = lp_lean_x2dftml_LeanFtml_rtrimWs10(v___y_5613_);
v___x_5615_ = lp_lean_x2dftml_LeanFtml_splitLastCloser11(v___x_5614_);
v_fst_5616_ = lean_ctor_get(v___x_5615_, 0);
lean_inc(v_fst_5616_);
v_snd_5617_ = lean_ctor_get(v___x_5615_, 1);
lean_inc(v_snd_5617_);
lean_dec_ref(v___x_5615_);
v___x_5618_ = lp_lean_x2dftml_List_countP_go___at___00LeanFtml_listPostFailedClose10_spec__2(v_fst_5616_, v___x_5605_);
v___x_5619_ = lp_lean_x2dftml_LeanFtml_mkNewlines11(v___x_5618_, v___y_5612_);
v_fst_5620_ = lean_ctor_get(v___x_5619_, 0);
v_snd_5621_ = lean_ctor_get(v___x_5619_, 1);
v_isSharedCheck_5638_ = !lean_is_exclusive(v___x_5619_);
if (v_isSharedCheck_5638_ == 0)
{
v___x_5623_ = v___x_5619_;
v_isShared_5624_ = v_isSharedCheck_5638_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_snd_5621_);
lean_inc(v_fst_5620_);
lean_dec(v___x_5619_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5638_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
lean_object* v___x_5625_; lean_object* v_litPh_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5633_; 
v___x_5625_ = lp_lean_x2dftml_LeanFtml_interleaveNl11(v_fst_5616_, v_fst_5620_);
v_litPh_5626_ = l_List_appendTR___redArg(v___y_5609_, v___x_5625_);
v___x_5627_ = l_List_appendTR___redArg(v___y_5610_, v___y_5608_);
v___x_5628_ = l_List_appendTR___redArg(v___x_5627_, v_litPh_5626_);
v___x_5629_ = l_List_appendTR___redArg(v___x_5628_, v___y_5611_);
v___x_5630_ = l_List_appendTR___redArg(v___x_5629_, v___y_5607_);
v___x_5631_ = l_List_appendTR___redArg(v___x_5630_, v_snd_5617_);
if (v_isShared_5624_ == 0)
{
lean_ctor_set(v___x_5623_, 0, v___x_5631_);
v___x_5633_ = v___x_5623_;
goto v_reusejp_5632_;
}
else
{
lean_object* v_reuseFailAlloc_5637_; 
v_reuseFailAlloc_5637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5637_, 0, v___x_5631_);
lean_ctor_set(v_reuseFailAlloc_5637_, 1, v_snd_5621_);
v___x_5633_ = v_reuseFailAlloc_5637_;
goto v_reusejp_5632_;
}
v_reusejp_5632_:
{
lean_object* v___x_5635_; 
if (v_isShared_5601_ == 0)
{
lean_ctor_set(v___x_5600_, 0, v___x_5633_);
v___x_5635_ = v___x_5600_;
goto v_reusejp_5634_;
}
else
{
lean_object* v_reuseFailAlloc_5636_; 
v_reuseFailAlloc_5636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5636_, 0, v___x_5633_);
v___x_5635_ = v_reuseFailAlloc_5636_;
goto v_reusejp_5634_;
}
v_reusejp_5634_:
{
return v___x_5635_;
}
}
}
}
v___jp_5642_:
{
lean_object* v___x_5644_; lean_object* v_post_5645_; lean_object* v___x_5646_; 
v___x_5644_ = lean_nat_sub(v___x_5641_, v___y_5643_);
lean_dec(v___y_5643_);
lean_dec(v___x_5641_);
v_post_5645_ = l_List_drop___redArg(v___x_5644_, v_body_5594_);
lean_dec(v_body_5594_);
lean_inc(v_post_5645_);
v___x_5646_ = lp_lean_x2dftml_LeanFtml_firstLiAt(v_post_5645_);
if (lean_obj_tag(v___x_5646_) == 0)
{
lean_object* v___x_5647_; 
lean_dec(v_post_5645_);
lean_dec(v_pre_5640_);
lean_del_object(v___x_5600_);
lean_dec(v_tag_5589_);
lean_dec(v_toks_5583_);
v___x_5647_ = lean_box(0);
return v___x_5647_;
}
else
{
lean_object* v___x_5648_; 
lean_dec_ref_known(v___x_5646_, 1);
v___x_5648_ = lp_lean_x2dftml_LeanFtml_scanLi(v_pre_5640_);
if (lean_obj_tag(v___x_5648_) == 0)
{
lean_object* v___x_5649_; 
lean_dec(v_post_5645_);
lean_del_object(v___x_5600_);
lean_dec(v_tag_5589_);
lean_dec(v_toks_5583_);
v___x_5649_ = lean_box(0);
return v___x_5649_;
}
else
{
lean_object* v_head_5650_; lean_object* v___x_5652_; uint8_t v_isShared_5653_; uint8_t v_isSharedCheck_5737_; 
v_head_5650_ = lean_ctor_get(v___x_5648_, 0);
v_isSharedCheck_5737_ = !lean_is_exclusive(v___x_5648_);
if (v_isSharedCheck_5737_ == 0)
{
lean_object* v_unused_5738_; 
v_unused_5738_ = lean_ctor_get(v___x_5648_, 1);
lean_dec(v_unused_5738_);
v___x_5652_ = v___x_5648_;
v_isShared_5653_ = v_isSharedCheck_5737_;
goto v_resetjp_5651_;
}
else
{
lean_inc(v_head_5650_);
lean_dec(v___x_5648_);
v___x_5652_ = lean_box(0);
v_isShared_5653_ = v_isSharedCheck_5737_;
goto v_resetjp_5651_;
}
v_resetjp_5651_:
{
lean_object* v_snd_5654_; lean_object* v___x_5656_; uint8_t v_isShared_5657_; uint8_t v_isSharedCheck_5735_; 
v_snd_5654_ = lean_ctor_get(v_head_5650_, 1);
v_isSharedCheck_5735_ = !lean_is_exclusive(v_head_5650_);
if (v_isSharedCheck_5735_ == 0)
{
lean_object* v_unused_5736_; 
v_unused_5736_ = lean_ctor_get(v_head_5650_, 0);
lean_dec(v_unused_5736_);
v___x_5656_ = v_head_5650_;
v_isShared_5657_ = v_isSharedCheck_5735_;
goto v_resetjp_5655_;
}
else
{
lean_inc(v_snd_5654_);
lean_dec(v_head_5650_);
v___x_5656_ = lean_box(0);
v_isShared_5657_ = v_isSharedCheck_5735_;
goto v_resetjp_5655_;
}
v_resetjp_5655_:
{
lean_object* v_snd_5658_; lean_object* v___x_5660_; uint8_t v_isShared_5661_; uint8_t v_isSharedCheck_5733_; 
v_snd_5658_ = lean_ctor_get(v_snd_5654_, 1);
v_isSharedCheck_5733_ = !lean_is_exclusive(v_snd_5654_);
if (v_isSharedCheck_5733_ == 0)
{
lean_object* v_unused_5734_; 
v_unused_5734_ = lean_ctor_get(v_snd_5654_, 0);
lean_dec(v_unused_5734_);
v___x_5660_ = v_snd_5654_;
v_isShared_5661_ = v_isSharedCheck_5733_;
goto v_resetjp_5659_;
}
else
{
lean_inc(v_snd_5658_);
lean_dec(v_snd_5654_);
v___x_5660_ = lean_box(0);
v_isShared_5661_ = v_isSharedCheck_5733_;
goto v_resetjp_5659_;
}
v_resetjp_5659_:
{
lean_object* v_fst_5662_; lean_object* v___x_5664_; uint8_t v_isShared_5665_; uint8_t v_isSharedCheck_5731_; 
v_fst_5662_ = lean_ctor_get(v_snd_5658_, 0);
v_isSharedCheck_5731_ = !lean_is_exclusive(v_snd_5658_);
if (v_isSharedCheck_5731_ == 0)
{
lean_object* v_unused_5732_; 
v_unused_5732_ = lean_ctor_get(v_snd_5658_, 1);
lean_dec(v_unused_5732_);
v___x_5664_ = v_snd_5658_;
v_isShared_5665_ = v_isSharedCheck_5731_;
goto v_resetjp_5663_;
}
else
{
lean_inc(v_fst_5662_);
lean_dec(v_snd_5658_);
v___x_5664_ = lean_box(0);
v_isShared_5665_ = v_isSharedCheck_5731_;
goto v_resetjp_5663_;
}
v_resetjp_5663_:
{
lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5671_; 
v___x_5666_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_5667_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3);
v___x_5668_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5);
v___x_5669_ = lp_lean_x2dftml_LeanFtml_textVal(v_tag_5589_);
if (v_isShared_5665_ == 0)
{
lean_ctor_set(v___x_5664_, 1, v___x_5669_);
lean_ctor_set(v___x_5664_, 0, v___x_5668_);
v___x_5671_ = v___x_5664_;
goto v_reusejp_5670_;
}
else
{
lean_object* v_reuseFailAlloc_5730_; 
v_reuseFailAlloc_5730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5730_, 0, v___x_5668_);
lean_ctor_set(v_reuseFailAlloc_5730_, 1, v___x_5669_);
v___x_5671_ = v_reuseFailAlloc_5730_;
goto v_reusejp_5670_;
}
v_reusejp_5670_:
{
lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5677_; 
v___x_5672_ = lean_box(0);
v___x_5673_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1);
v___x_5674_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7);
v___x_5675_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5675_, 0, v_scored_5590_);
if (v_isShared_5661_ == 0)
{
lean_ctor_set(v___x_5660_, 1, v___x_5675_);
lean_ctor_set(v___x_5660_, 0, v___x_5674_);
v___x_5677_ = v___x_5660_;
goto v_reusejp_5676_;
}
else
{
lean_object* v_reuseFailAlloc_5729_; 
v_reuseFailAlloc_5729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5729_, 0, v___x_5674_);
lean_ctor_set(v_reuseFailAlloc_5729_, 1, v___x_5675_);
v___x_5677_ = v_reuseFailAlloc_5729_;
goto v_reusejp_5676_;
}
v_reusejp_5676_:
{
lean_object* v___x_5679_; 
if (v_isShared_5653_ == 0)
{
lean_ctor_set(v___x_5652_, 1, v___x_5672_);
lean_ctor_set(v___x_5652_, 0, v___x_5677_);
v___x_5679_ = v___x_5652_;
goto v_reusejp_5678_;
}
else
{
lean_object* v_reuseFailAlloc_5728_; 
v_reuseFailAlloc_5728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5728_, 0, v___x_5677_);
lean_ctor_set(v_reuseFailAlloc_5728_, 1, v___x_5672_);
v___x_5679_ = v_reuseFailAlloc_5728_;
goto v_reusejp_5678_;
}
v_reusejp_5678_:
{
lean_object* v___x_5681_; 
lean_inc_ref(v___x_5679_);
if (v_isShared_5657_ == 0)
{
lean_ctor_set_tag(v___x_5656_, 1);
lean_ctor_set(v___x_5656_, 1, v___x_5679_);
lean_ctor_set(v___x_5656_, 0, v___x_5673_);
v___x_5681_ = v___x_5656_;
goto v_reusejp_5680_;
}
else
{
lean_object* v_reuseFailAlloc_5727_; 
v_reuseFailAlloc_5727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5727_, 0, v___x_5673_);
lean_ctor_set(v_reuseFailAlloc_5727_, 1, v___x_5679_);
v___x_5681_ = v_reuseFailAlloc_5727_;
goto v_reusejp_5680_;
}
v_reusejp_5680_:
{
lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v_fst_5685_; lean_object* v_snd_5686_; lean_object* v___x_5688_; uint8_t v_isShared_5689_; uint8_t v_isSharedCheck_5726_; 
lean_inc_ref(v___x_5671_);
v___x_5682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5682_, 0, v___x_5671_);
lean_ctor_set(v___x_5682_, 1, v___x_5681_);
v___x_5683_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5683_, 0, v___x_5667_);
lean_ctor_set(v___x_5683_, 1, v___x_5682_);
v___x_5684_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5666_, v___x_5683_, v_toks_5583_);
v_fst_5685_ = lean_ctor_get(v___x_5684_, 0);
v_snd_5686_ = lean_ctor_get(v___x_5684_, 1);
v_isSharedCheck_5726_ = !lean_is_exclusive(v___x_5684_);
if (v_isSharedCheck_5726_ == 0)
{
v___x_5688_ = v___x_5684_;
v_isShared_5689_ = v_isSharedCheck_5726_;
goto v_resetjp_5687_;
}
else
{
lean_inc(v_snd_5686_);
lean_inc(v_fst_5685_);
lean_dec(v___x_5684_);
v___x_5688_ = lean_box(0);
v_isShared_5689_ = v_isSharedCheck_5726_;
goto v_resetjp_5687_;
}
v_resetjp_5687_:
{
lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v_fst_5692_; lean_object* v_snd_5693_; lean_object* v___x_5695_; uint8_t v_isShared_5696_; uint8_t v_isSharedCheck_5725_; 
v___x_5690_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5);
v___x_5691_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5666_, v___x_5690_, v_snd_5686_);
v_fst_5692_ = lean_ctor_get(v___x_5691_, 0);
v_snd_5693_ = lean_ctor_get(v___x_5691_, 1);
v_isSharedCheck_5725_ = !lean_is_exclusive(v___x_5691_);
if (v_isSharedCheck_5725_ == 0)
{
v___x_5695_ = v___x_5691_;
v_isShared_5696_ = v_isSharedCheck_5725_;
goto v_resetjp_5694_;
}
else
{
lean_inc(v_snd_5693_);
lean_inc(v_fst_5692_);
lean_dec(v___x_5691_);
v___x_5695_ = lean_box(0);
v_isShared_5696_ = v_isSharedCheck_5725_;
goto v_resetjp_5694_;
}
v_resetjp_5694_:
{
lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v_fst_5699_; lean_object* v_snd_5700_; lean_object* v___x_5702_; uint8_t v_isShared_5703_; uint8_t v_isSharedCheck_5724_; 
v___x_5697_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0, &lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0);
v___x_5698_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5666_, v___x_5697_, v_snd_5693_);
v_fst_5699_ = lean_ctor_get(v___x_5698_, 0);
v_snd_5700_ = lean_ctor_get(v___x_5698_, 1);
v_isSharedCheck_5724_ = !lean_is_exclusive(v___x_5698_);
if (v_isSharedCheck_5724_ == 0)
{
v___x_5702_ = v___x_5698_;
v_isShared_5703_ = v_isSharedCheck_5724_;
goto v_resetjp_5701_;
}
else
{
lean_inc(v_snd_5700_);
lean_inc(v_fst_5699_);
lean_dec(v___x_5698_);
v___x_5702_ = lean_box(0);
v_isShared_5703_ = v_isSharedCheck_5724_;
goto v_resetjp_5701_;
}
v_resetjp_5701_:
{
lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5707_; 
v___x_5704_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11);
v___x_5705_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13);
if (v_isShared_5703_ == 0)
{
lean_ctor_set_tag(v___x_5702_, 1);
lean_ctor_set(v___x_5702_, 1, v___x_5679_);
lean_ctor_set(v___x_5702_, 0, v___x_5705_);
v___x_5707_ = v___x_5702_;
goto v_reusejp_5706_;
}
else
{
lean_object* v_reuseFailAlloc_5723_; 
v_reuseFailAlloc_5723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5723_, 0, v___x_5705_);
lean_ctor_set(v_reuseFailAlloc_5723_, 1, v___x_5679_);
v___x_5707_ = v_reuseFailAlloc_5723_;
goto v_reusejp_5706_;
}
v_reusejp_5706_:
{
lean_object* v___x_5709_; 
if (v_isShared_5696_ == 0)
{
lean_ctor_set_tag(v___x_5695_, 1);
lean_ctor_set(v___x_5695_, 1, v___x_5707_);
lean_ctor_set(v___x_5695_, 0, v___x_5671_);
v___x_5709_ = v___x_5695_;
goto v_reusejp_5708_;
}
else
{
lean_object* v_reuseFailAlloc_5722_; 
v_reuseFailAlloc_5722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5722_, 0, v___x_5671_);
lean_ctor_set(v_reuseFailAlloc_5722_, 1, v___x_5707_);
v___x_5709_ = v_reuseFailAlloc_5722_;
goto v_reusejp_5708_;
}
v_reusejp_5708_:
{
lean_object* v___x_5711_; 
if (v_isShared_5689_ == 0)
{
lean_ctor_set_tag(v___x_5688_, 1);
lean_ctor_set(v___x_5688_, 1, v___x_5709_);
lean_ctor_set(v___x_5688_, 0, v___x_5704_);
v___x_5711_ = v___x_5688_;
goto v_reusejp_5710_;
}
else
{
lean_object* v_reuseFailAlloc_5721_; 
v_reuseFailAlloc_5721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5721_, 0, v___x_5704_);
lean_ctor_set(v_reuseFailAlloc_5721_, 1, v___x_5709_);
v___x_5711_ = v_reuseFailAlloc_5721_;
goto v_reusejp_5710_;
}
v_reusejp_5710_:
{
lean_object* v___x_5712_; 
v___x_5712_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5666_, v___x_5711_, v_snd_5700_);
if (lean_obj_tag(v_post_5645_) == 1)
{
lean_object* v_fst_5713_; lean_object* v_snd_5714_; lean_object* v_head_5715_; lean_object* v_tail_5716_; lean_object* v___x_5717_; uint8_t v___x_5718_; 
v_fst_5713_ = lean_ctor_get(v___x_5712_, 0);
lean_inc(v_fst_5713_);
v_snd_5714_ = lean_ctor_get(v___x_5712_, 1);
lean_inc(v_snd_5714_);
lean_dec_ref(v___x_5712_);
v_head_5715_ = lean_ctor_get(v_post_5645_, 0);
v_tail_5716_ = lean_ctor_get(v_post_5645_, 1);
v___x_5717_ = lean_unsigned_to_nat(10u);
v___x_5718_ = lean_nat_dec_eq(v_head_5715_, v___x_5717_);
if (v___x_5718_ == 0)
{
v___y_5607_ = v_fst_5713_;
v___y_5608_ = v_fst_5692_;
v___y_5609_ = v_fst_5662_;
v___y_5610_ = v_fst_5685_;
v___y_5611_ = v_fst_5699_;
v___y_5612_ = v_snd_5714_;
v___y_5613_ = v_post_5645_;
goto v___jp_5606_;
}
else
{
lean_inc(v_tail_5716_);
lean_dec_ref_known(v_post_5645_, 2);
v___y_5607_ = v_fst_5713_;
v___y_5608_ = v_fst_5692_;
v___y_5609_ = v_fst_5662_;
v___y_5610_ = v_fst_5685_;
v___y_5611_ = v_fst_5699_;
v___y_5612_ = v_snd_5714_;
v___y_5613_ = v_tail_5716_;
goto v___jp_5606_;
}
}
else
{
lean_object* v_fst_5719_; lean_object* v_snd_5720_; 
v_fst_5719_ = lean_ctor_get(v___x_5712_, 0);
lean_inc(v_fst_5719_);
v_snd_5720_ = lean_ctor_get(v___x_5712_, 1);
lean_inc(v_snd_5720_);
lean_dec_ref(v___x_5712_);
v___y_5607_ = v_fst_5719_;
v___y_5608_ = v_fst_5692_;
v___y_5609_ = v_fst_5662_;
v___y_5610_ = v_fst_5685_;
v___y_5611_ = v_fst_5699_;
v___y_5612_ = v_snd_5720_;
v___y_5613_ = v_post_5645_;
goto v___jp_5606_;
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
lean_object* v___x_5741_; 
lean_dec_ref_known(v___x_5585_, 1);
lean_dec(v___x_5584_);
lean_dec(v_toks_5583_);
lean_dec(v_src0_5582_);
v___x_5741_ = lean_box(0);
return v___x_5741_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1(void){
_start:
{
lean_object* v___x_5743_; lean_object* v_pre_5744_; 
v___x_5743_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__0));
v_pre_5744_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5743_);
return v_pre_5744_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__2(void){
_start:
{
lean_object* v_pre_5745_; lean_object* v___x_5746_; 
v_pre_5745_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1);
v___x_5746_ = l_List_lengthTR___redArg(v_pre_5745_);
return v___x_5746_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__4(void){
_start:
{
lean_object* v___x_5748_; lean_object* v_tag_5749_; 
v___x_5748_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__3));
v_tag_5749_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5748_);
return v_tag_5749_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__5(void){
_start:
{
lean_object* v_tag_5750_; lean_object* v___x_5751_; 
v_tag_5750_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__4, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__4);
v___x_5751_ = lp_lean_x2dftml_LeanFtml_textVal(v_tag_5750_);
return v___x_5751_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6(void){
_start:
{
lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; 
v___x_5752_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__5, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__5);
v___x_5753_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__5);
v___x_5754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5754_, 0, v___x_5753_);
lean_ctor_set(v___x_5754_, 1, v___x_5752_);
return v___x_5754_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__8(void){
_start:
{
lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; 
v___x_5757_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__7));
v___x_5758_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__7);
v___x_5759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5759_, 0, v___x_5758_);
lean_ctor_set(v___x_5759_, 1, v___x_5757_);
return v___x_5759_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9(void){
_start:
{
lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; 
v___x_5760_ = lean_box(0);
v___x_5761_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__8, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__8);
v___x_5762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5762_, 0, v___x_5761_);
lean_ctor_set(v___x_5762_, 1, v___x_5760_);
return v___x_5762_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__10(void){
_start:
{
lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; 
v___x_5763_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9);
v___x_5764_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__1);
v___x_5765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5765_, 0, v___x_5764_);
lean_ctor_set(v___x_5765_, 1, v___x_5763_);
return v___x_5765_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__11(void){
_start:
{
lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; 
v___x_5766_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__10, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__10);
v___x_5767_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6);
v___x_5768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5768_, 0, v___x_5767_);
lean_ctor_set(v___x_5768_, 1, v___x_5766_);
return v___x_5768_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__12(void){
_start:
{
lean_object* v___x_5769_; lean_object* v___x_5770_; lean_object* v___x_5771_; 
v___x_5769_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__11, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__11);
v___x_5770_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__3);
v___x_5771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5771_, 0, v___x_5770_);
lean_ctor_set(v___x_5771_, 1, v___x_5769_);
return v___x_5771_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__13(void){
_start:
{
lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5774_; 
v___x_5772_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__9);
v___x_5773_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__13);
v___x_5774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5774_, 0, v___x_5773_);
lean_ctor_set(v___x_5774_, 1, v___x_5772_);
return v___x_5774_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__14(void){
_start:
{
lean_object* v___x_5775_; lean_object* v___x_5776_; lean_object* v___x_5777_; 
v___x_5775_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__13, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__13);
v___x_5776_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__6);
v___x_5777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5777_, 0, v___x_5776_);
lean_ctor_set(v___x_5777_, 1, v___x_5775_);
return v___x_5777_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__15(void){
_start:
{
lean_object* v___x_5778_; lean_object* v___x_5779_; lean_object* v___x_5780_; 
v___x_5778_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__14, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__14);
v___x_5779_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11, &lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_wrapListTokens___closed__11);
v___x_5780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5780_, 0, v___x_5779_);
lean_ctor_set(v___x_5780_, 1, v___x_5778_);
return v___x_5780_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__17(void){
_start:
{
lean_object* v___x_5782_; lean_object* v___x_5783_; 
v___x_5782_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__16));
v___x_5783_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5782_);
return v___x_5783_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__19(void){
_start:
{
lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___x_5785_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__18));
v___x_5786_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5785_);
return v___x_5786_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listPostFailedClose9(lean_object* v_src0_5787_, lean_object* v_toks_5788_){
_start:
{
lean_object* v___y_5790_; 
if (lean_obj_tag(v_src0_5787_) == 1)
{
lean_object* v_head_5837_; lean_object* v_tail_5838_; lean_object* v___x_5839_; uint8_t v___x_5840_; 
v_head_5837_ = lean_ctor_get(v_src0_5787_, 0);
v_tail_5838_ = lean_ctor_get(v_src0_5787_, 1);
v___x_5839_ = lean_unsigned_to_nat(10u);
v___x_5840_ = lean_nat_dec_eq(v_head_5837_, v___x_5839_);
if (v___x_5840_ == 0)
{
v___y_5790_ = v_src0_5787_;
goto v___jp_5789_;
}
else
{
lean_inc(v_tail_5838_);
lean_dec_ref_known(v_src0_5787_, 2);
v___y_5790_ = v_tail_5838_;
goto v___jp_5789_;
}
}
else
{
v___y_5790_ = v_src0_5787_;
goto v___jp_5789_;
}
v___jp_5789_:
{
lean_object* v_pre_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; uint8_t v___x_5795_; 
v_pre_5791_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__1);
v___x_5792_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__2, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__2);
v___x_5793_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_firstLine___closed__0));
lean_inc(v___y_5790_);
v___x_5794_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_5790_, v___y_5790_, v___x_5792_, v___x_5793_);
v___x_5795_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_5794_, v_pre_5791_);
lean_dec(v___x_5794_);
if (v___x_5795_ == 0)
{
lean_object* v___x_5796_; 
lean_dec(v___y_5790_);
lean_dec(v_toks_5788_);
v___x_5796_ = lean_box(0);
return v___x_5796_;
}
else
{
lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v_fst_5801_; lean_object* v_snd_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v_fst_5805_; lean_object* v_snd_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; lean_object* v_fst_5809_; lean_object* v_snd_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v_fst_5813_; lean_object* v_snd_5814_; lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v_fst_5817_; lean_object* v_snd_5818_; lean_object* v___x_5820_; uint8_t v_isShared_5821_; uint8_t v_isSharedCheck_5836_; 
v___x_5797_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emitList___closed__0));
v___x_5798_ = lean_box(0);
v___x_5799_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__12, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__12);
v___x_5800_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5797_, v___x_5799_, v_toks_5788_);
v_fst_5801_ = lean_ctor_get(v___x_5800_, 0);
lean_inc(v_fst_5801_);
v_snd_5802_ = lean_ctor_get(v___x_5800_, 1);
lean_inc(v_snd_5802_);
lean_dec_ref(v___x_5800_);
v___x_5803_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5, &lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10___closed__5);
v___x_5804_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5797_, v___x_5803_, v_snd_5802_);
v_fst_5805_ = lean_ctor_get(v___x_5804_, 0);
lean_inc(v_fst_5805_);
v_snd_5806_ = lean_ctor_get(v___x_5804_, 1);
lean_inc(v_snd_5806_);
lean_dec_ref(v___x_5804_);
v___x_5807_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0, &lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose10___closed__0);
v___x_5808_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5797_, v___x_5807_, v_snd_5806_);
v_fst_5809_ = lean_ctor_get(v___x_5808_, 0);
lean_inc(v_fst_5809_);
v_snd_5810_ = lean_ctor_get(v___x_5808_, 1);
lean_inc(v_snd_5810_);
lean_dec_ref(v___x_5808_);
v___x_5811_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__15, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__15);
v___x_5812_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5797_, v___x_5811_, v_snd_5810_);
v_fst_5813_ = lean_ctor_get(v___x_5812_, 0);
lean_inc(v_fst_5813_);
v_snd_5814_ = lean_ctor_get(v___x_5812_, 1);
lean_inc(v_snd_5814_);
lean_dec_ref(v___x_5812_);
v___x_5815_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formatItem___closed__12));
v___x_5816_ = lp_lean_x2dftml_LeanFtml_addTok(v___x_5815_, v___x_5798_, v_snd_5814_);
v_fst_5817_ = lean_ctor_get(v___x_5816_, 0);
v_snd_5818_ = lean_ctor_get(v___x_5816_, 1);
v_isSharedCheck_5836_ = !lean_is_exclusive(v___x_5816_);
if (v_isSharedCheck_5836_ == 0)
{
v___x_5820_ = v___x_5816_;
v_isShared_5821_ = v_isSharedCheck_5836_;
goto v_resetjp_5819_;
}
else
{
lean_inc(v_snd_5818_);
lean_inc(v_fst_5817_);
lean_dec(v___x_5816_);
v___x_5820_ = lean_box(0);
v_isShared_5821_ = v_isSharedCheck_5836_;
goto v_resetjp_5819_;
}
v_resetjp_5819_:
{
lean_object* v___x_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5833_; 
v___x_5822_ = l_List_appendTR___redArg(v_fst_5801_, v_fst_5805_);
v___x_5823_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__17, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__17);
v___x_5824_ = l_List_appendTR___redArg(v___x_5822_, v___x_5823_);
v___x_5825_ = l_List_appendTR___redArg(v___x_5824_, v_fst_5817_);
v___x_5826_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__19, &lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_listPostFailedClose9___closed__19);
v___x_5827_ = l_List_appendTR___redArg(v___x_5825_, v___x_5826_);
v___x_5828_ = l_List_appendTR___redArg(v___x_5827_, v_fst_5809_);
v___x_5829_ = l_List_appendTR___redArg(v___x_5828_, v_fst_5813_);
v___x_5830_ = l_List_drop___redArg(v___x_5792_, v___y_5790_);
lean_dec(v___y_5790_);
v___x_5831_ = l_List_appendTR___redArg(v___x_5829_, v___x_5830_);
if (v_isShared_5821_ == 0)
{
lean_ctor_set(v___x_5820_, 0, v___x_5831_);
v___x_5833_ = v___x_5820_;
goto v_reusejp_5832_;
}
else
{
lean_object* v_reuseFailAlloc_5835_; 
v_reuseFailAlloc_5835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5835_, 0, v___x_5831_);
lean_ctor_set(v_reuseFailAlloc_5835_, 1, v_snd_5818_);
v___x_5833_ = v_reuseFailAlloc_5835_;
goto v_reusejp_5832_;
}
v_reusejp_5832_:
{
lean_object* v___x_5834_; 
v___x_5834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5834_, 0, v___x_5833_);
return v___x_5834_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_listExplicitPass_spec__0(lean_object* v_x_5841_){
_start:
{
if (lean_obj_tag(v_x_5841_) == 0)
{
uint8_t v___x_5842_; 
v___x_5842_ = 0;
return v___x_5842_;
}
else
{
lean_object* v_head_5843_; lean_object* v_tail_5844_; lean_object* v___x_5845_; uint8_t v___x_5846_; 
v_head_5843_ = lean_ctor_get(v_x_5841_, 0);
v_tail_5844_ = lean_ctor_get(v_x_5841_, 1);
v___x_5845_ = lean_unsigned_to_nat(91u);
v___x_5846_ = lp_lean_x2dftml_LeanFtml_byteCiEq(v_head_5843_, v___x_5845_);
if (v___x_5846_ == 0)
{
v_x_5841_ = v_tail_5844_;
goto _start;
}
else
{
return v___x_5846_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_listExplicitPass_spec__0___boxed(lean_object* v_x_5848_){
_start:
{
uint8_t v_res_5849_; lean_object* v_r_5850_; 
v_res_5849_ = lp_lean_x2dftml_List_any___at___00LeanFtml_listExplicitPass_spec__0(v_x_5848_);
lean_dec(v_x_5848_);
v_r_5850_ = lean_box(v_res_5849_);
return v_r_5850_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__1(void){
_start:
{
lean_object* v___x_5852_; lean_object* v___x_5853_; 
v___x_5852_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__0));
v___x_5853_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5852_);
return v___x_5853_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__3(void){
_start:
{
lean_object* v___x_5855_; lean_object* v___x_5856_; 
v___x_5855_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__2));
v___x_5856_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_5855_);
return v___x_5856_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listExplicitPass(lean_object* v_src0_5857_, lean_object* v_toks_5858_){
_start:
{
lean_object* v___x_5859_; 
lean_inc(v_toks_5858_);
lean_inc(v_src0_5857_);
v___x_5859_ = lp_lean_x2dftml_LeanFtml_listScoredEmptyItem10(v_src0_5857_, v_toks_5858_);
if (lean_obj_tag(v___x_5859_) == 0)
{
lean_object* v___x_5860_; 
lean_inc(v_toks_5858_);
lean_inc(v_src0_5857_);
v___x_5860_ = lp_lean_x2dftml_LeanFtml_listPostFailedClose9(v_src0_5857_, v_toks_5858_);
if (lean_obj_tag(v___x_5860_) == 0)
{
lean_object* v___x_5861_; 
lean_inc(v_toks_5858_);
lean_inc(v_src0_5857_);
v___x_5861_ = lp_lean_x2dftml_LeanFtml_listPostFailedClose10(v_src0_5857_, v_toks_5858_);
if (lean_obj_tag(v___x_5861_) == 0)
{
lean_object* v___x_5862_; lean_object* v___x_5863_; lean_object* v_src_5864_; uint8_t v___x_5874_; 
v___x_5862_ = lp_lean_x2dftml_LeanFtml_normalizeRefcorr8(v_src0_5857_);
v___x_5863_ = lp_lean_x2dftml_LeanFtml_normalizeS1Tail9(v___x_5862_);
v_src_5864_ = lp_lean_x2dftml_LeanFtml_normalizeUpperInner9(v___x_5863_);
v___x_5874_ = lp_lean_x2dftml_List_any___at___00LeanFtml_listExplicitPass_spec__0(v_src_5864_);
if (v___x_5874_ == 0)
{
lean_object* v___x_5875_; 
v___x_5875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5875_, 0, v_src_5864_);
lean_ctor_set(v___x_5875_, 1, v_toks_5858_);
return v___x_5875_;
}
else
{
lean_object* v___x_5876_; uint8_t v___x_5877_; 
v___x_5876_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__1, &lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__1);
v___x_5877_ = lp_lean_x2dftml_LeanFtml_existsLitCI(v___x_5876_, v_src_5864_);
if (v___x_5877_ == 0)
{
lean_object* v___x_5878_; uint8_t v___x_5879_; 
v___x_5878_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__3, &lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_listExplicitPass___closed__3);
v___x_5879_ = lp_lean_x2dftml_LeanFtml_existsLitCI(v___x_5878_, v_src_5864_);
if (v___x_5879_ == 0)
{
lean_object* v___x_5880_; 
v___x_5880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5880_, 0, v_src_5864_);
lean_ctor_set(v___x_5880_, 1, v_toks_5858_);
return v___x_5880_;
}
else
{
goto v___jp_5865_;
}
}
else
{
goto v___jp_5865_;
}
}
v___jp_5865_:
{
lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v_snd_5869_; lean_object* v_fst_5870_; lean_object* v_fst_5871_; lean_object* v_snd_5872_; lean_object* v___x_5873_; 
v___x_5866_ = lean_box(0);
v___x_5867_ = lean_unsigned_to_nat(500u);
v___x_5868_ = lp_lean_x2dftml_LeanFtml_explLoop(v_src_5864_, v_toks_5858_, v___x_5866_, v___x_5866_, v___x_5867_);
v_snd_5869_ = lean_ctor_get(v___x_5868_, 1);
lean_inc(v_snd_5869_);
v_fst_5870_ = lean_ctor_get(v___x_5868_, 0);
lean_inc(v_fst_5870_);
lean_dec_ref(v___x_5868_);
v_fst_5871_ = lean_ctor_get(v_snd_5869_, 0);
lean_inc(v_fst_5871_);
v_snd_5872_ = lean_ctor_get(v_snd_5869_, 1);
lean_inc(v_snd_5872_);
lean_dec(v_snd_5869_);
v___x_5873_ = lp_lean_x2dftml_LeanFtml_finalizeExplicit(v_fst_5870_, v_fst_5871_, v_snd_5872_);
lean_dec(v_snd_5872_);
return v___x_5873_;
}
}
else
{
lean_object* v_val_5881_; 
lean_dec(v_toks_5858_);
lean_dec(v_src0_5857_);
v_val_5881_ = lean_ctor_get(v___x_5861_, 0);
lean_inc(v_val_5881_);
lean_dec_ref_known(v___x_5861_, 1);
return v_val_5881_;
}
}
else
{
lean_object* v_val_5882_; 
lean_dec(v_toks_5858_);
lean_dec(v_src0_5857_);
v_val_5882_ = lean_ctor_get(v___x_5860_, 0);
lean_inc(v_val_5882_);
lean_dec_ref_known(v___x_5860_, 1);
return v_val_5882_;
}
}
else
{
lean_object* v_val_5883_; 
lean_dec(v_toks_5858_);
lean_dec(v_src0_5857_);
v_val_5883_ = lean_ctor_get(v___x_5859_, 0);
lean_inc(v_val_5883_);
lean_dec_ref_known(v___x_5859_, 1);
return v_val_5883_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listRule___lam__0(lean_object* v_src_5884_, lean_object* v_toks_5885_){
_start:
{
lean_object* v___x_5886_; lean_object* v_fst_5887_; lean_object* v_snd_5888_; lean_object* v___x_5889_; 
v___x_5886_ = lp_lean_x2dftml_LeanFtml_listNative(v_src_5884_, v_toks_5885_);
v_fst_5887_ = lean_ctor_get(v___x_5886_, 0);
lean_inc(v_fst_5887_);
v_snd_5888_ = lean_ctor_get(v___x_5886_, 1);
lean_inc(v_snd_5888_);
lean_dec_ref(v___x_5886_);
v___x_5889_ = lp_lean_x2dftml_LeanFtml_listExplicitPass(v_fst_5887_, v_snd_5888_);
return v___x_5889_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_listRule(lean_object* v_st_5891_){
_start:
{
lean_object* v___f_5892_; lean_object* v___x_5893_; 
v___f_5892_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_listRule___closed__0));
v___x_5893_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_5891_, v___f_5892_);
return v___x_5893_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_deflistRule(lean_object* v_st_5895_){
_start:
{
lean_object* v___x_5896_; lean_object* v___x_5897_; 
v___x_5896_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_deflistRule___closed__0));
v___x_5897_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_5895_, v___x_5896_);
return v___x_5897_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ContainRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ListRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_ContainRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
