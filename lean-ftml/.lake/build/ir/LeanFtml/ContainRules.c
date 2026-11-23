// Lean compiler output
// Module: LeanFtml.ContainRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules public import LeanFtml.LinkRules public import LeanFtml.NotesRules public import LeanFtml.BlockRules
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
lean_object* lean_array_to_list(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_ciBytesEq_spec__0(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsPattern_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode(lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(lean_object*);
uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_lowerBytes_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimChars(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isDigitByte(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_occurrences(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omSetB(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omSet(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_codeFuel(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimSpaceTab(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimRN_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimRN_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimRN(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimRN___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_asciiLower(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_ciAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ciAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ciAt___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ciAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ciAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrencesCI_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrencesCI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_attrGroupCands_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1;
static const lean_array_object lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrGroupCands(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_spanGroupCands_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_spanGroupCands_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanGroupCands(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_spanMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[[span"};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanMatch___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanMatch___closed__1;
static const lean_array_object lp_lean_x2dftml_LeanFtml_spanMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanMatch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanMatch___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanMatch(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_spanBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanBody___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanBody___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_spanBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/span]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanBody___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanBody___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanBody___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanBody___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanMatch_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanMatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanBody___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "role"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__6 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__8 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9;
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "data-"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__10 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_spanProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Span"};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_spanProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "args"};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_spanProcess___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanProcess___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_spanProcess___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanProcess___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_spanProcess___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "u-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanProcess___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_spanProcess___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___closed__14;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanProcess(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanPasses(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_spanRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_spanRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_spanRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_spanRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[[size"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_sizeOpenerAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeOpenerAt___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/size]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeBody_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeBody_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeBody(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeMatchAt(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_sizeValid_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_sizeValid_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_sizeValid_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_sizeValid_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "xx-small"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "x-small"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "small"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "medium"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "large"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "x-large"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "xx-large"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "smaller"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "larger"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__17;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__19;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__20;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__24;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__25;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__26;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "em"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__27_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__28;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "px"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__29_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__30;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeValid___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "%"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeValid___closed__31_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeValid___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___closed__32;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_sizeValid(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_sizeDropByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeDropByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropLineEndRuns_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropLineEndRuns(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_sizeProcess_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_sizeProcess_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Size"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_sizeProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeProcess___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeProcess___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_sizeProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizePasses(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_sizeRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_sizeRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_sizeRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sizeRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isWsU(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isWsU___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsU_go___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsU_go(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsU_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsU(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isolateId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isolateId___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isolateId___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_isolateId___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_isolateId___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isolateId___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isolateId___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isolateId___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isolateId(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue_go(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_normalizeValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimSpaceTab(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_omSetOpt_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omSetOpt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divArgsOrder_spec__1(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4;
static const lean_array_object lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divArgs_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_divArgs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divArgs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_collapseBlankRuns_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseBlankRuns(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(95) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "[[div"};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__1 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divMatch___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divMatch(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_divBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[/div]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divBody___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divBody___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divBody___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divBody___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divMatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_divAuthoredNonEmpty_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divAuthoredNonEmpty(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optBytesEmpty(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optBytesEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_divProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divProcess___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divProcess___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_divProcess___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_divProcess___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_divProcess___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divProcess___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_divProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "vanished"};
static const lean_object* lp_lean_x2dftml_LeanFtml_divProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divProcess___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_divProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_divProcess___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divPasses(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_divRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_divRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_divRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_divRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_collMatchAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "[[/collapsible]]"};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[[collapsible"};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_collProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Collapsible"};
static const lean_object* lp_lean_x2dftml_LeanFtml_collProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_collProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_collProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "count"};
static const lean_object* lp_lean_x2dftml_LeanFtml_collProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_collProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_collProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_collProcess___closed__2;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_collProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_collProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_collProcess___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_collProcess___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_collProcess___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_collProcess___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_collProcess___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsibleRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isTabKeyByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isTabKeyByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabNameCands_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tabNameCands___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tabview"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabNameCands___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabNameCands___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tabNameCands___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tabs"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabNameCands___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabNameCands___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3;
static const lean_array_object lp_lean_x2dftml_LeanFtml_tabNameCands___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabNameCands___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabNameCands___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabNameCands(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tabPairAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabPairAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabPairAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabPairAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_pairSteps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairSteps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairSteps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabG2Cands(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabG1Cands(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabUnitCands_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[/tab]]"};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "[[tab"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabUnitCands(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__2(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[["};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabRegionCands(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabRegionCands___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabviewMatchAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@@"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ">@"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rawCodeShape(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tabTitle___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "untitled"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabTitle___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabTitle___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabTitle___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabTitle___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabTitle(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabTitle___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_singlePairShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_singlePairShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_singlePairShape___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_singlePairShape(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_singlePairShape___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__3(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tabId"};
static const lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_handleTab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Tabview"};
static const lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_handleTab___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_handleTab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tabStart"};
static const lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_handleTab___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_handleTab___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_handleTab___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_handleTab___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_handleTab___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tabviewId"};
static const lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_handleTab___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_handleTab___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_handleTab___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_handleTab___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_handleTab___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_handleTab___closed__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_handleTab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_handleTab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabInnerScan(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabInnerScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tabEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewScan(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewPasses(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimRN_spec__0(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_head_2_; lean_object* v_tail_3_; lean_object* v___x_4_; uint8_t v___x_5_; 
v_head_2_ = lean_ctor_get(v_x_1_, 0);
v_tail_3_ = lean_ctor_get(v_x_1_, 1);
v___x_4_ = lean_unsigned_to_nat(10u);
v___x_5_ = lean_nat_dec_eq(v_head_2_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = lean_unsigned_to_nat(13u);
v___x_7_ = lean_nat_dec_eq(v_head_2_, v___x_6_);
if (v___x_7_ == 0)
{
lean_inc_ref(v_x_1_);
return v_x_1_;
}
else
{
v_x_1_ = v_tail_3_;
goto _start;
}
}
else
{
v_x_1_ = v_tail_3_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimRN_spec__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimRN_spec__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimRN(lean_object* v_bs_12_){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_13_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimRN_spec__0(v_bs_12_);
v___x_14_ = l_List_reverse___redArg(v___x_13_);
v___x_15_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimRN_spec__0(v___x_14_);
lean_dec(v___x_14_);
v___x_16_ = l_List_reverse___redArg(v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimRN___boxed(lean_object* v_bs_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lp_lean_x2dftml_LeanFtml_trimRN(v_bs_17_);
lean_dec(v_bs_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_asciiLower(lean_object* v_bs_19_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_box(0);
v___x_21_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_lowerBytes_spec__0(v_bs_19_, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_ciAt(lean_object* v_pat_24_, lean_object* v_s_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_26_ = l_List_lengthTR___redArg(v_pat_24_);
v___x_27_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v___x_26_);
lean_inc(v_s_25_);
v___x_28_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_25_, v_s_25_, v___x_26_, v___x_27_);
lean_dec(v_s_25_);
v___x_29_ = l_List_lengthTR___redArg(v___x_28_);
v___x_30_ = lean_nat_dec_eq(v___x_29_, v___x_26_);
lean_dec(v___x_26_);
lean_dec(v___x_29_);
if (v___x_30_ == 0)
{
lean_dec(v___x_28_);
lean_dec(v_pat_24_);
return v___x_30_;
}
else
{
lean_object* v___x_31_; uint8_t v___x_32_; 
v___x_31_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v___x_28_, v_pat_24_);
v___x_32_ = lp_lean_x2dftml_List_all___at___00LeanFtml_ciBytesEq_spec__0(v___x_31_);
lean_dec(v___x_31_);
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ciAt___boxed(lean_object* v_pat_33_, lean_object* v_s_34_){
_start:
{
uint8_t v_res_35_; lean_object* v_r_36_; 
v_res_35_ = lp_lean_x2dftml_LeanFtml_ciAt(v_pat_33_, v_s_34_);
v_r_36_ = lean_box(v_res_35_);
return v_r_36_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrencesCI_go(lean_object* v_pat_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
if (lean_obj_tag(v_a_38_) == 0)
{
lean_object* v___x_40_; 
lean_dec(v_a_39_);
lean_dec(v_pat_37_);
v___x_40_ = lean_box(0);
return v___x_40_;
}
else
{
lean_object* v_head_41_; lean_object* v_tail_42_; lean_object* v___y_44_; uint8_t v___x_48_; 
v_head_41_ = lean_ctor_get(v_a_38_, 0);
lean_inc(v_head_41_);
v_tail_42_ = lean_ctor_get(v_a_38_, 1);
lean_inc(v_tail_42_);
lean_inc_ref(v_a_38_);
lean_inc(v_pat_37_);
v___x_48_ = lp_lean_x2dftml_LeanFtml_ciAt(v_pat_37_, v_a_38_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
lean_dec_ref_known(v_a_38_, 2);
v___x_49_ = lean_box(0);
v___y_44_ = v___x_49_;
goto v___jp_43_;
}
else
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_61_; 
lean_inc(v_a_39_);
v___x_50_ = l_List_reverse___redArg(v_a_39_);
v___x_51_ = l_List_lengthTR___redArg(v_pat_37_);
v___x_52_ = l_List_drop___redArg(v___x_51_, v_a_38_);
v_isSharedCheck_61_ = !lean_is_exclusive(v_a_38_);
if (v_isSharedCheck_61_ == 0)
{
lean_object* v_unused_62_; lean_object* v_unused_63_; 
v_unused_62_ = lean_ctor_get(v_a_38_, 1);
lean_dec(v_unused_62_);
v_unused_63_ = lean_ctor_get(v_a_38_, 0);
lean_dec(v_unused_63_);
v___x_54_ = v_a_38_;
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
else
{
lean_dec(v_a_38_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_50_);
lean_ctor_set(v___x_56_, 1, v___x_52_);
v___x_57_ = lean_box(0);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 1, v___x_57_);
lean_ctor_set(v___x_54_, 0, v___x_56_);
v___x_59_ = v___x_54_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v___x_57_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
v___y_44_ = v___x_59_;
goto v___jp_43_;
}
}
}
v___jp_43_:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_45_, 0, v_head_41_);
lean_ctor_set(v___x_45_, 1, v_a_39_);
v___x_46_ = lp_lean_x2dftml_LeanFtml_occurrencesCI_go(v_pat_37_, v_tail_42_, v___x_45_);
v___x_47_ = l_List_appendTR___redArg(v___y_44_, v___x_46_);
return v___x_47_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrencesCI(lean_object* v_pat_64_, lean_object* v_s_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_box(0);
v___x_67_ = lp_lean_x2dftml_LeanFtml_occurrencesCI_go(v_pat_64_, v_s_65_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_attrGroupCands_spec__0(lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
if (lean_obj_tag(v_a_68_) == 0)
{
lean_object* v___x_70_; 
v___x_70_ = lean_array_to_list(v_a_69_);
return v___x_70_;
}
else
{
lean_object* v_head_71_; lean_object* v_tail_72_; lean_object* v_fst_73_; lean_object* v_snd_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_86_; 
v_head_71_ = lean_ctor_get(v_a_68_, 0);
lean_inc(v_head_71_);
v_tail_72_ = lean_ctor_get(v_a_68_, 1);
lean_inc(v_tail_72_);
lean_dec_ref_known(v_a_68_, 2);
v_fst_73_ = lean_ctor_get(v_head_71_, 0);
v_snd_74_ = lean_ctor_get(v_head_71_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_head_71_);
if (v_isSharedCheck_86_ == 0)
{
v___x_76_ = v_head_71_;
v_isShared_77_ = v_isSharedCheck_86_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_snd_74_);
lean_inc(v_fst_73_);
lean_dec(v_head_71_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_86_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
uint8_t v___x_78_; 
v___x_78_ = l_List_isEmpty___redArg(v_fst_73_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_81_; 
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v_fst_73_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 0, v___x_79_);
v___x_81_ = v___x_76_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v_snd_74_);
v___x_81_ = v_reuseFailAlloc_84_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_82_; 
v___x_82_ = lean_array_push(v_a_69_, v___x_81_);
v_a_68_ = v_tail_72_;
v_a_69_ = v___x_82_;
goto _start;
}
}
else
{
lean_del_object(v___x_76_);
lean_dec(v_snd_74_);
lean_dec(v_fst_73_);
v_a_68_ = v_tail_72_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__0));
v___x_89_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrGroupCands(lean_object* v_s_92_){
_start:
{
lean_object* v___y_94_; 
if (lean_obj_tag(v_s_92_) == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_box(0);
v___y_94_ = v___x_105_;
goto v___jp_93_;
}
else
{
lean_object* v_head_106_; uint8_t v___x_107_; 
v_head_106_ = lean_ctor_get(v_s_92_, 0);
v___x_107_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_box(0);
v___y_94_ = v___x_108_;
goto v___jp_93_;
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_109_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1, &lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1);
lean_inc_ref(v_s_92_);
v___x_110_ = lp_lean_x2dftml_LeanFtml_occurrencesCI(v___x_109_, v_s_92_);
v___x_111_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__2));
v___x_112_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_attrGroupCands_spec__0(v___x_110_, v___x_111_);
v___y_94_ = v___x_112_;
goto v___jp_93_;
}
}
v___jp_93_:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1, &lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1);
v___x_96_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_95_, v_s_92_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_box(0);
v___x_98_ = l_List_appendTR___redArg(v___y_94_, v___x_97_);
return v___x_98_;
}
else
{
lean_object* v_val_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_val_99_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_val_99_);
lean_dec_ref_known(v___x_96_, 1);
v___x_100_ = lean_box(0);
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v_val_99_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_101_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = l_List_appendTR___redArg(v___y_94_, v___x_103_);
return v___x_104_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_spanGroupCands_spec__0(lean_object* v_tail_113_, lean_object* v_run_114_, lean_object* v_head_115_, lean_object* v_head_116_, lean_object* v_a_117_, lean_object* v_a_118_){
_start:
{
if (lean_obj_tag(v_a_117_) == 0)
{
lean_object* v___x_119_; 
lean_dec(v_head_116_);
lean_dec(v_head_115_);
lean_dec(v_run_114_);
v___x_119_ = lean_array_to_list(v_a_118_);
return v___x_119_;
}
else
{
lean_object* v_head_120_; lean_object* v_tail_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_159_; 
v_head_120_ = lean_ctor_get(v_a_117_, 0);
v_tail_121_ = lean_ctor_get(v_a_117_, 1);
v_isSharedCheck_159_ = !lean_is_exclusive(v_a_117_);
if (v_isSharedCheck_159_ == 0)
{
v___x_123_ = v_a_117_;
v_isShared_124_ = v_isSharedCheck_159_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_tail_121_);
lean_inc(v_head_120_);
lean_dec(v_a_117_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_159_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; 
lean_inc(v_head_120_);
v___x_125_ = l_List_drop___redArg(v_head_120_, v_tail_113_);
if (lean_obj_tag(v___x_125_) == 1)
{
lean_object* v_head_126_; lean_object* v_tail_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_157_; 
v_head_126_ = lean_ctor_get(v___x_125_, 0);
v_tail_127_ = lean_ctor_get(v___x_125_, 1);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_157_ == 0)
{
v___x_129_ = v___x_125_;
v_isShared_130_ = v_isSharedCheck_157_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_tail_127_);
lean_inc(v_head_126_);
lean_dec(v___x_125_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_157_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(93u);
v___x_132_ = lean_nat_dec_eq(v_head_126_, v___x_131_);
lean_dec(v_head_126_);
if (v___x_132_ == 0)
{
lean_del_object(v___x_129_);
lean_dec(v_tail_127_);
lean_del_object(v___x_123_);
lean_dec(v_head_120_);
v_a_117_ = v_tail_121_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_127_) == 1)
{
lean_object* v_head_134_; lean_object* v_tail_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_155_; 
v_head_134_ = lean_ctor_get(v_tail_127_, 0);
v_tail_135_ = lean_ctor_get(v_tail_127_, 1);
v_isSharedCheck_155_ = !lean_is_exclusive(v_tail_127_);
if (v_isSharedCheck_155_ == 0)
{
v___x_137_ = v_tail_127_;
v_isShared_138_ = v_isSharedCheck_155_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_tail_135_);
lean_inc(v_head_134_);
lean_dec(v_tail_127_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_155_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
uint8_t v___x_139_; 
v___x_139_ = lean_nat_dec_eq(v_head_134_, v___x_131_);
lean_dec(v_head_134_);
if (v___x_139_ == 0)
{
lean_del_object(v___x_137_);
lean_dec(v_tail_135_);
lean_del_object(v___x_129_);
lean_del_object(v___x_123_);
lean_dec(v_head_120_);
v_a_117_ = v_tail_121_;
goto _start;
}
else
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_141_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_run_114_);
v___x_142_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_run_114_, v_run_114_, v_head_120_, v___x_141_);
lean_inc(v_head_115_);
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 1, v___x_142_);
lean_ctor_set(v___x_137_, 0, v_head_115_);
v___x_144_ = v___x_137_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_head_115_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v___x_142_);
v___x_144_ = v_reuseFailAlloc_154_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_146_; 
lean_inc(v_head_116_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v___x_144_);
lean_ctor_set(v___x_129_, 0, v_head_116_);
v___x_146_ = v___x_129_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_head_116_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v___x_144_);
v___x_146_ = v_reuseFailAlloc_153_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 0);
lean_ctor_set(v___x_123_, 1, v_tail_135_);
lean_ctor_set(v___x_123_, 0, v___x_147_);
v___x_149_ = v___x_123_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_tail_135_);
v___x_149_ = v_reuseFailAlloc_152_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_150_; 
v___x_150_ = lean_array_push(v_a_118_, v___x_149_);
v_a_117_ = v_tail_121_;
v_a_118_ = v___x_150_;
goto _start;
}
}
}
}
}
}
else
{
lean_del_object(v___x_129_);
lean_dec(v_tail_127_);
lean_del_object(v___x_123_);
lean_dec(v_head_120_);
v_a_117_ = v_tail_121_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_125_);
lean_del_object(v___x_123_);
lean_dec(v_head_120_);
v_a_117_ = v_tail_121_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_spanGroupCands_spec__0___boxed(lean_object* v_tail_160_, lean_object* v_run_161_, lean_object* v_head_162_, lean_object* v_head_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_spanGroupCands_spec__0(v_tail_160_, v_run_161_, v_head_162_, v_head_163_, v_a_164_, v_a_165_);
lean_dec(v_tail_160_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanGroupCands(lean_object* v_s_167_){
_start:
{
lean_object* v___y_169_; 
if (lean_obj_tag(v_s_167_) == 1)
{
lean_object* v_tail_182_; 
v_tail_182_ = lean_ctor_get(v_s_167_, 1);
if (lean_obj_tag(v_tail_182_) == 1)
{
lean_object* v_head_183_; lean_object* v_head_184_; lean_object* v_tail_185_; uint8_t v___x_186_; 
v_head_183_ = lean_ctor_get(v_s_167_, 0);
v_head_184_ = lean_ctor_get(v_tail_182_, 0);
v_tail_185_ = lean_ctor_get(v_tail_182_, 1);
v___x_186_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_183_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
v___x_187_ = lean_box(0);
v___y_169_ = v___x_187_;
goto v___jp_168_;
}
else
{
lean_object* v___x_188_; lean_object* v_run_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_188_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_tail_185_);
v_run_189_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(v___x_186_, v_tail_185_, v_tail_185_, v___x_188_);
v___x_190_ = l_List_lengthTR___redArg(v_run_189_);
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_nat_add(v___x_190_, v___x_191_);
lean_dec(v___x_190_);
v___x_193_ = l_List_range(v___x_192_);
v___x_194_ = l_List_reverse___redArg(v___x_193_);
lean_inc(v_head_183_);
lean_inc(v_head_184_);
v___x_195_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_spanGroupCands_spec__0(v_tail_185_, v_run_189_, v_head_184_, v_head_183_, v___x_194_, v___x_188_);
v___y_169_ = v___x_195_;
goto v___jp_168_;
}
}
else
{
goto v___jp_180_;
}
}
else
{
goto v___jp_180_;
}
v___jp_168_:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1, &lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1);
v___x_171_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_170_, v_s_167_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_box(0);
v___x_173_ = l_List_appendTR___redArg(v___y_169_, v___x_172_);
return v___x_173_;
}
else
{
lean_object* v_val_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_val_174_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_val_174_);
lean_dec_ref_known(v___x_171_, 1);
v___x_175_ = lean_box(0);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v_val_174_);
v___x_177_ = lean_box(0);
v___x_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = l_List_appendTR___redArg(v___y_169_, v___x_178_);
return v___x_179_;
}
}
v___jp_180_:
{
lean_object* v___x_181_; 
v___x_181_ = lean_box(0);
v___y_169_ = v___x_181_;
goto v___jp_168_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanMatch___closed__1(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__0));
v___x_198_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanMatch(lean_object* v_s_201_, lean_object* v_x_202_){
_start:
{
lean_object* v_zero_203_; uint8_t v_isZero_204_; 
v_zero_203_ = lean_unsigned_to_nat(0u);
v_isZero_204_ = lean_nat_dec_eq(v_x_202_, v_zero_203_);
if (v_isZero_204_ == 1)
{
lean_object* v___x_205_; 
lean_dec(v_s_201_);
v___x_205_ = lean_box(0);
return v___x_205_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanMatch___closed__1, &lp_lean_x2dftml_LeanFtml_spanMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_spanMatch___closed__1);
v___x_207_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_206_, v_s_201_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_box(0);
return v___x_208_;
}
else
{
lean_object* v_val_209_; lean_object* v_one_210_; lean_object* v_n_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_val_209_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_val_209_);
lean_dec_ref_known(v___x_207_, 1);
v_one_210_ = lean_unsigned_to_nat(1u);
v_n_211_ = lean_nat_sub(v_x_202_, v_one_210_);
v___x_212_ = lp_lean_x2dftml_LeanFtml_spanGroupCands(v_val_209_);
v___x_213_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
v___x_214_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanMatch_spec__0(v_n_211_, v___x_212_, v___x_213_);
lean_dec(v_n_211_);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2_spec__2(lean_object* v_n_217_, lean_object* v_s_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
if (lean_obj_tag(v_a_219_) == 0)
{
lean_object* v___x_221_; 
lean_dec(v_s_218_);
v___x_221_ = lean_array_to_list(v_a_220_);
return v___x_221_;
}
else
{
lean_object* v_head_222_; lean_object* v_snd_223_; lean_object* v_tail_224_; lean_object* v_snd_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_head_222_ = lean_ctor_get(v_a_219_, 0);
v_snd_223_ = lean_ctor_get(v_head_222_, 1);
lean_inc(v_snd_223_);
v_tail_224_ = lean_ctor_get(v_a_219_, 1);
lean_inc(v_tail_224_);
lean_dec_ref_known(v_a_219_, 2);
v_snd_225_ = lean_ctor_get(v_snd_223_, 1);
lean_inc_n(v_snd_225_, 2);
lean_dec(v_snd_223_);
v___x_226_ = lp_lean_x2dftml_LeanFtml_spanBody(v_snd_225_, v_n_217_);
v___x_227_ = lean_box(0);
lean_inc(v_s_218_);
v___x_228_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_s_218_, v_snd_225_, v___x_226_, v___x_227_);
lean_dec(v_snd_225_);
v___x_229_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_220_, v___x_228_);
v_a_219_ = v_tail_224_;
v_a_220_ = v___x_229_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2(lean_object* v_s_231_, lean_object* v_n_232_, lean_object* v_a_233_, lean_object* v_a_234_){
_start:
{
if (lean_obj_tag(v_a_233_) == 0)
{
lean_object* v___x_235_; 
lean_dec(v_s_231_);
v___x_235_ = lean_array_to_list(v_a_234_);
return v___x_235_;
}
else
{
lean_object* v_head_236_; lean_object* v_snd_237_; lean_object* v_tail_238_; lean_object* v_snd_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v_head_236_ = lean_ctor_get(v_a_233_, 0);
v_snd_237_ = lean_ctor_get(v_head_236_, 1);
lean_inc(v_snd_237_);
v_tail_238_ = lean_ctor_get(v_a_233_, 1);
lean_inc(v_tail_238_);
lean_dec_ref_known(v_a_233_, 2);
v_snd_239_ = lean_ctor_get(v_snd_237_, 1);
lean_inc_n(v_snd_239_, 2);
lean_dec(v_snd_237_);
v___x_240_ = lp_lean_x2dftml_LeanFtml_spanBody(v_snd_239_, v_n_232_);
v___x_241_ = lean_box(0);
lean_inc(v_s_231_);
v___x_242_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_s_231_, v_snd_239_, v___x_240_, v___x_241_);
lean_dec(v_snd_239_);
v___x_243_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_234_, v___x_242_);
v___x_244_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2_spec__2(v_n_232_, v_s_231_, v_tail_238_, v___x_243_);
return v___x_244_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanBody___closed__2(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__1));
v___x_247_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanBody(lean_object* v_s_248_, lean_object* v_x_249_){
_start:
{
lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v_zero_256_; uint8_t v_isZero_257_; 
v_zero_256_ = lean_unsigned_to_nat(0u);
v_isZero_257_ = lean_nat_dec_eq(v_x_249_, v_zero_256_);
if (v_isZero_257_ == 1)
{
lean_object* v___x_258_; 
lean_dec(v_s_248_);
v___x_258_ = lean_box(0);
return v___x_258_;
}
else
{
lean_object* v_one_259_; lean_object* v_n_260_; lean_object* v___y_262_; lean_object* v___x_272_; lean_object* v___x_273_; 
v_one_259_ = lean_unsigned_to_nat(1u);
v_n_260_ = lean_nat_sub(v_x_249_, v_one_259_);
v___x_272_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanBody___closed__2, &lp_lean_x2dftml_LeanFtml_spanBody___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_spanBody___closed__2);
lean_inc(v_s_248_);
v___x_273_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_272_, v_s_248_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v___x_274_; 
v___x_274_ = lean_box(0);
v___y_262_ = v___x_274_;
goto v___jp_261_;
}
else
{
lean_object* v_val_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_val_275_ = lean_ctor_get(v___x_273_, 0);
lean_inc(v_val_275_);
lean_dec_ref_known(v___x_273_, 1);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v_val_275_);
v___x_278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
lean_ctor_set(v___x_278_, 1, v___x_276_);
v___y_262_ = v___x_278_;
goto v___jp_261_;
}
v___jp_261_:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v_recs_265_; 
lean_inc_n(v_s_248_, 2);
v___x_263_ = lp_lean_x2dftml_LeanFtml_spanMatch(v_s_248_, v_n_260_);
v___x_264_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v_recs_265_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2(v_s_248_, v_n_260_, v___x_263_, v___x_264_);
if (lean_obj_tag(v_s_248_) == 0)
{
lean_object* v___x_266_; 
lean_dec(v_n_260_);
v___x_266_ = lean_box(0);
v___y_251_ = v___y_262_;
v___y_252_ = v_recs_265_;
v___y_253_ = v___x_266_;
goto v___jp_250_;
}
else
{
lean_object* v_head_267_; lean_object* v_tail_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_head_267_ = lean_ctor_get(v_s_248_, 0);
lean_inc(v_head_267_);
v_tail_268_ = lean_ctor_get(v_s_248_, 1);
lean_inc(v_tail_268_);
lean_dec_ref_known(v_s_248_, 2);
v___x_269_ = lp_lean_x2dftml_LeanFtml_spanBody(v_tail_268_, v_n_260_);
lean_dec(v_n_260_);
v___x_270_ = lean_box(0);
v___x_271_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(v_head_267_, v___x_269_, v___x_270_);
v___y_251_ = v___y_262_;
v___y_252_ = v_recs_265_;
v___y_253_ = v___x_271_;
goto v___jp_250_;
}
}
}
v___jp_250_:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = l_List_appendTR___redArg(v___y_251_, v___y_252_);
v___x_255_ = l_List_appendTR___redArg(v___x_254_, v___y_253_);
return v___x_255_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanMatch_spec__0(lean_object* v_n_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
if (lean_obj_tag(v_a_280_) == 0)
{
lean_object* v___x_282_; 
v___x_282_ = lean_array_to_list(v_a_281_);
return v___x_282_;
}
else
{
lean_object* v_head_283_; lean_object* v_tail_284_; lean_object* v_fst_285_; lean_object* v_snd_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_head_283_ = lean_ctor_get(v_a_280_, 0);
lean_inc(v_head_283_);
v_tail_284_ = lean_ctor_get(v_a_280_, 1);
lean_inc(v_tail_284_);
lean_dec_ref_known(v_a_280_, 2);
v_fst_285_ = lean_ctor_get(v_head_283_, 0);
lean_inc(v_fst_285_);
v_snd_286_ = lean_ctor_get(v_head_283_, 1);
lean_inc(v_snd_286_);
lean_dec(v_head_283_);
v___x_287_ = lp_lean_x2dftml_LeanFtml_spanBody(v_snd_286_, v_n_279_);
v___x_288_ = lean_box(0);
v___x_289_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsPattern_spec__0(v_fst_285_, v___x_287_, v___x_288_);
v___x_290_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_281_, v___x_289_);
v_a_280_ = v_tail_284_;
v_a_281_ = v___x_290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanMatch_spec__0___boxed(lean_object* v_n_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanMatch_spec__0(v_n_292_, v_a_293_, v_a_294_);
lean_dec(v_n_292_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2___boxed(lean_object* v_s_296_, lean_object* v_n_297_, lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2(v_s_296_, v_n_297_, v_a_298_, v_a_299_);
lean_dec(v_n_297_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2_spec__2___boxed(lean_object* v_n_301_, lean_object* v_s_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_spanBody_spec__2_spec__2(v_n_301_, v_s_302_, v_a_303_, v_a_304_);
lean_dec(v_n_301_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanMatch___boxed(lean_object* v_s_306_, lean_object* v_x_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = lp_lean_x2dftml_LeanFtml_spanMatch(v_s_306_, v_x_307_);
lean_dec(v_x_307_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanBody___boxed(lean_object* v_s_309_, lean_object* v_x_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = lp_lean_x2dftml_LeanFtml_spanBody(v_s_309_, v_x_310_);
lean_dec(v_x_310_);
return v_res_311_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__0));
v___x_314_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_313_);
return v___x_314_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__2));
v___x_317_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__4));
v___x_320_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_319_);
return v___x_320_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__6));
v___x_323_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__8));
v___x_326_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_325_);
return v___x_326_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__10));
v___x_329_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0(lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
if (lean_obj_tag(v_x_331_) == 0)
{
return v_x_330_;
}
else
{
lean_object* v_head_332_; lean_object* v_tail_333_; lean_object* v_fst_334_; lean_object* v_snd_335_; lean_object* v___x_341_; uint8_t v___x_342_; 
v_head_332_ = lean_ctor_get(v_x_331_, 0);
lean_inc(v_head_332_);
v_tail_333_ = lean_ctor_get(v_x_331_, 1);
lean_inc(v_tail_333_);
lean_dec_ref_known(v_x_331_, 2);
v_fst_334_ = lean_ctor_get(v_head_332_, 0);
lean_inc(v_fst_334_);
v_snd_335_ = lean_ctor_get(v_head_332_, 1);
lean_inc(v_snd_335_);
lean_dec(v_head_332_);
v___x_341_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1);
v___x_342_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_334_, v___x_341_);
if (v___x_342_ == 0)
{
uint8_t v___x_343_; 
v___x_343_ = l_List_isEmpty___redArg(v_snd_335_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_345_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_334_, v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5);
v___x_347_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_334_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7);
v___x_349_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_334_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9);
v___x_351_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_334_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11);
v___x_353_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_352_, v_fst_334_);
if (v___x_353_ == 0)
{
lean_dec(v_snd_335_);
lean_dec(v_fst_334_);
v_x_331_ = v_tail_333_;
goto _start;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_355_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_fst_334_);
v___x_356_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___x_355_);
v___x_357_ = lp_lean_x2dftml_LeanFtml_textVal(v_snd_335_);
v___x_358_ = lp_lean_x2dftml_LeanFtml_omSet(v_x_330_, v___x_356_, v___x_357_);
v_x_330_ = v___x_358_;
v_x_331_ = v_tail_333_;
goto _start;
}
}
else
{
goto v___jp_336_;
}
}
else
{
goto v___jp_336_;
}
}
else
{
goto v___jp_336_;
}
}
else
{
goto v___jp_336_;
}
}
else
{
lean_dec(v_snd_335_);
lean_dec(v_fst_334_);
v_x_331_ = v_tail_333_;
goto _start;
}
}
else
{
lean_dec(v_snd_335_);
lean_dec(v_fst_334_);
v_x_331_ = v_tail_333_;
goto _start;
}
v___jp_336_:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_fst_334_);
v___x_338_ = lp_lean_x2dftml_LeanFtml_textVal(v_snd_335_);
v___x_339_ = lp_lean_x2dftml_LeanFtml_omSet(v_x_330_, v___x_337_, v___x_338_);
v_x_330_ = v___x_339_;
v_x_331_ = v_tail_333_;
goto _start;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__2(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanProcess___closed__1));
v___x_365_ = l_String_toListImpl(v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__3(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__8));
v___x_367_ = l_String_toListImpl(v___x_366_);
return v___x_367_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__5(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanProcess___closed__4));
v___x_370_ = l_String_toListImpl(v___x_369_);
return v___x_370_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__6(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__5, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__5);
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__6, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__6);
v___x_374_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__3, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__3);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___x_373_);
return v___x_375_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__9(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanProcess___closed__8));
v___x_378_ = l_String_toListImpl(v___x_377_);
return v___x_378_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__10(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__9, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__9);
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__10, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__10);
v___x_382_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__3, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__3);
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
lean_ctor_set(v___x_383_, 1, v___x_381_);
return v___x_383_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__12(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__0));
v___x_385_ = l_String_toListImpl(v___x_384_);
return v___x_385_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__14(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanProcess___closed__13));
v___x_388_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanProcess(lean_object* v_g1_389_, lean_object* v_body_390_, lean_object* v_toks_391_){
_start:
{
lean_object* v_content_392_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v___y_430_; lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v___y_438_; 
v_content_392_ = lp_lean_x2dftml_LeanFtml_trimSpaceTab(v_body_390_);
if (lean_obj_tag(v_g1_389_) == 0)
{
lean_object* v___x_450_; 
v___x_450_ = lean_box(0);
v___y_438_ = v___x_450_;
goto v___jp_437_;
}
else
{
lean_object* v_val_451_; 
v_val_451_ = lean_ctor_get(v_g1_389_, 0);
v___y_438_ = v_val_451_;
goto v___jp_437_;
}
v___jp_393_:
{
lean_object* v___x_396_; lean_object* v_startPh_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_t1_408_; lean_object* v___x_409_; lean_object* v_endPh_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v_t2_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_396_ = l_List_lengthTR___redArg(v_toks_391_);
v_startPh_397_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_396_);
v___x_398_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanProcess___closed__0));
v___x_399_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__2, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__2);
v___x_400_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_400_, 0, v___y_394_);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_399_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__7, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7);
lean_inc(v___y_395_);
v___x_403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
lean_ctor_set(v___x_403_, 1, v___y_395_);
v___x_404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_401_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_398_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = lean_box(0);
v___x_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_405_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v_t1_408_ = l_List_appendTR___redArg(v_toks_391_, v___x_407_);
v___x_409_ = l_List_lengthTR___redArg(v_t1_408_);
v_endPh_410_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_409_);
v___x_411_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__11, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11);
v___x_412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___y_395_);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_398_);
lean_ctor_set(v___x_413_, 1, v___x_412_);
v___x_414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___x_406_);
v_t2_415_ = l_List_appendTR___redArg(v_t1_408_, v___x_414_);
v___x_416_ = l_List_appendTR___redArg(v_startPh_397_, v_content_392_);
v___x_417_ = l_List_appendTR___redArg(v___x_416_, v_endPh_410_);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
lean_ctor_set(v___x_418_, 1, v_t2_415_);
return v___x_418_;
}
v___jp_419_:
{
lean_object* v___x_422_; lean_object* v_restArgs_423_; lean_object* v_args_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_422_ = lean_box(0);
v_restArgs_423_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0(v___x_422_, v___y_420_);
v_args_424_ = l_List_appendTR___redArg(v___y_421_, v_restArgs_423_);
v___x_425_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_content_392_);
v___x_426_ = l_List_isEmpty___redArg(v___x_425_);
lean_dec(v___x_425_);
if (v___x_426_ == 0)
{
v___y_394_ = v_args_424_;
v___y_395_ = v___x_422_;
goto v___jp_393_;
}
else
{
uint8_t v___x_427_; 
v___x_427_ = l_List_isEmpty___redArg(v_args_424_);
if (v___x_427_ == 0)
{
v___y_394_ = v_args_424_;
v___y_395_ = v___x_422_;
goto v___jp_393_;
}
else
{
lean_object* v___x_428_; 
lean_dec(v_args_424_);
lean_dec(v_content_392_);
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_422_);
lean_ctor_set(v___x_428_, 1, v_toks_391_);
return v___x_428_;
}
}
}
v___jp_429_:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_433_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_432_);
lean_inc(v___y_431_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v___y_431_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = lean_box(0);
v___x_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_434_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
v___y_420_ = v___y_430_;
v___y_421_ = v___x_436_;
goto v___jp_419_;
}
v___jp_437_:
{
lean_object* v_attr_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v_attr_439_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_438_);
v___x_440_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1);
v___x_441_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attr_439_, v___x_440_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v___x_442_; 
v___x_442_ = lean_box(0);
v___y_420_ = v_attr_439_;
v___y_421_ = v___x_442_;
goto v___jp_419_;
}
else
{
lean_object* v_val_443_; uint8_t v___x_444_; 
v_val_443_ = lean_ctor_get(v___x_441_, 0);
lean_inc(v_val_443_);
lean_dec_ref_known(v___x_441_, 1);
v___x_444_ = l_List_isEmpty___redArg(v_val_443_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_445_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__12, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__12);
v___x_446_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__14, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__14);
v___x_447_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_446_, v_val_443_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
v___x_448_ = l_List_appendTR___redArg(v___x_446_, v_val_443_);
v___y_430_ = v_attr_439_;
v___y_431_ = v___x_445_;
v___y_432_ = v___x_448_;
goto v___jp_429_;
}
else
{
v___y_430_ = v_attr_439_;
v___y_431_ = v___x_445_;
v___y_432_ = v_val_443_;
goto v___jp_429_;
}
}
else
{
lean_object* v___x_449_; 
lean_dec(v_val_443_);
v___x_449_ = lean_box(0);
v___y_420_ = v_attr_439_;
v___y_421_ = v___x_449_;
goto v___jp_419_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanProcess___boxed(lean_object* v_g1_452_, lean_object* v_body_453_, lean_object* v_toks_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = lp_lean_x2dftml_LeanFtml_spanProcess(v_g1_452_, v_body_453_, v_toks_454_);
lean_dec(v_body_453_);
lean_dec(v_g1_452_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanScan(lean_object* v_src_456_, lean_object* v_toks_457_, lean_object* v_x_458_){
_start:
{
lean_object* v_zero_459_; uint8_t v_isZero_460_; 
v_zero_459_ = lean_unsigned_to_nat(0u);
v_isZero_460_ = lean_nat_dec_eq(v_x_458_, v_zero_459_);
if (v_isZero_460_ == 1)
{
lean_object* v___x_461_; 
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v_src_456_);
lean_ctor_set(v___x_461_, 1, v_toks_457_);
return v___x_461_;
}
else
{
if (lean_obj_tag(v_src_456_) == 0)
{
lean_object* v___x_462_; 
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v_src_456_);
lean_ctor_set(v___x_462_, 1, v_toks_457_);
return v___x_462_;
}
else
{
lean_object* v_head_463_; lean_object* v_tail_464_; lean_object* v_one_465_; lean_object* v_n_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v_head_463_ = lean_ctor_get(v_src_456_, 0);
lean_inc(v_head_463_);
v_tail_464_ = lean_ctor_get(v_src_456_, 1);
lean_inc(v_tail_464_);
v_one_465_ = lean_unsigned_to_nat(1u);
v_n_466_ = lean_nat_sub(v_x_458_, v_one_465_);
v___x_467_ = l_List_lengthTR___redArg(v_src_456_);
v___x_468_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_467_);
lean_dec(v___x_467_);
v___x_469_ = lp_lean_x2dftml_LeanFtml_spanMatch(v_src_456_, v___x_468_);
lean_dec(v___x_468_);
v___x_470_ = l_List_head_x3f___redArg(v___x_469_);
lean_dec(v___x_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v___x_471_; lean_object* v_fst_472_; lean_object* v_snd_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_481_; 
v___x_471_ = lp_lean_x2dftml_LeanFtml_spanScan(v_tail_464_, v_toks_457_, v_n_466_);
lean_dec(v_n_466_);
v_fst_472_ = lean_ctor_get(v___x_471_, 0);
v_snd_473_ = lean_ctor_get(v___x_471_, 1);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_481_ == 0)
{
v___x_475_ = v___x_471_;
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_snd_473_);
lean_inc(v_fst_472_);
lean_dec(v___x_471_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_477_, 0, v_head_463_);
lean_ctor_set(v___x_477_, 1, v_fst_472_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_477_);
v___x_479_ = v___x_475_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_snd_473_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
else
{
lean_object* v_val_482_; lean_object* v_snd_483_; lean_object* v_fst_484_; lean_object* v_fst_485_; lean_object* v_snd_486_; lean_object* v___x_487_; lean_object* v_fst_488_; lean_object* v_snd_489_; lean_object* v___x_490_; lean_object* v_fst_491_; lean_object* v_snd_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
lean_dec(v_tail_464_);
lean_dec(v_head_463_);
v_val_482_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_val_482_);
lean_dec_ref_known(v___x_470_, 1);
v_snd_483_ = lean_ctor_get(v_val_482_, 1);
lean_inc(v_snd_483_);
v_fst_484_ = lean_ctor_get(v_val_482_, 0);
lean_inc(v_fst_484_);
lean_dec(v_val_482_);
v_fst_485_ = lean_ctor_get(v_snd_483_, 0);
lean_inc(v_fst_485_);
v_snd_486_ = lean_ctor_get(v_snd_483_, 1);
lean_inc(v_snd_486_);
lean_dec(v_snd_483_);
v___x_487_ = lp_lean_x2dftml_LeanFtml_spanProcess(v_fst_484_, v_fst_485_, v_toks_457_);
lean_dec(v_fst_485_);
lean_dec(v_fst_484_);
v_fst_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_fst_488_);
v_snd_489_ = lean_ctor_get(v___x_487_, 1);
lean_inc(v_snd_489_);
lean_dec_ref(v___x_487_);
v___x_490_ = lp_lean_x2dftml_LeanFtml_spanScan(v_snd_486_, v_snd_489_, v_n_466_);
lean_dec(v_n_466_);
v_fst_491_ = lean_ctor_get(v___x_490_, 0);
v_snd_492_ = lean_ctor_get(v___x_490_, 1);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v___x_490_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_snd_492_);
lean_inc(v_fst_491_);
lean_dec(v___x_490_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_498_; 
v___x_496_ = l_List_appendTR___redArg(v_fst_488_, v_fst_491_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_snd_492_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanScan___boxed(lean_object* v_src_501_, lean_object* v_toks_502_, lean_object* v_x_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = lp_lean_x2dftml_LeanFtml_spanScan(v_src_501_, v_toks_502_, v_x_503_);
lean_dec(v_x_503_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanPasses(lean_object* v_src_505_, lean_object* v_toks_506_, lean_object* v_x_507_){
_start:
{
lean_object* v_zero_508_; uint8_t v_isZero_509_; 
v_zero_508_ = lean_unsigned_to_nat(0u);
v_isZero_509_ = lean_nat_dec_eq(v_x_507_, v_zero_508_);
if (v_isZero_509_ == 1)
{
lean_object* v___x_510_; 
lean_dec(v_x_507_);
v___x_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_510_, 0, v_src_505_);
lean_ctor_set(v___x_510_, 1, v_toks_506_);
return v___x_510_;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v_fst_515_; lean_object* v_snd_516_; uint8_t v___x_517_; 
v___x_511_ = l_List_lengthTR___redArg(v_src_505_);
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = lean_nat_add(v___x_511_, v___x_512_);
lean_dec(v___x_511_);
lean_inc(v_src_505_);
v___x_514_ = lp_lean_x2dftml_LeanFtml_spanScan(v_src_505_, v_toks_506_, v___x_513_);
lean_dec(v___x_513_);
v_fst_515_ = lean_ctor_get(v___x_514_, 0);
v_snd_516_ = lean_ctor_get(v___x_514_, 1);
v___x_517_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_515_, v_src_505_);
lean_dec(v_src_505_);
if (v___x_517_ == 0)
{
lean_object* v_n_518_; 
lean_inc(v_snd_516_);
lean_inc(v_fst_515_);
lean_dec_ref(v___x_514_);
v_n_518_ = lean_nat_sub(v_x_507_, v___x_512_);
lean_dec(v_x_507_);
v_src_505_ = v_fst_515_;
v_toks_506_ = v_snd_516_;
v_x_507_ = v_n_518_;
goto _start;
}
else
{
lean_dec(v_x_507_);
return v___x_514_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanRule___lam__0(lean_object* v_src_520_, lean_object* v_toks_521_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_522_ = l_List_lengthTR___redArg(v_src_520_);
v___x_523_ = lean_unsigned_to_nat(2u);
v___x_524_ = lean_nat_add(v___x_522_, v___x_523_);
lean_dec(v___x_522_);
v___x_525_ = lp_lean_x2dftml_LeanFtml_spanPasses(v_src_520_, v_toks_521_, v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_spanRule(lean_object* v_st_527_){
_start:
{
lean_object* v___f_528_; lean_object* v___x_529_; 
v___f_528_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanRule___closed__0));
v___x_529_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_527_, v___f_528_);
return v___x_529_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1(void){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__0));
v___x_532_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_531_);
return v___x_532_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_sizeOpenerAt(lean_object* v_s_533_){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1, &lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1);
lean_inc(v_s_533_);
v___x_535_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_534_, v_s_533_);
if (lean_obj_tag(v___x_535_) == 0)
{
uint8_t v___x_536_; 
lean_dec(v_s_533_);
v___x_536_ = 0;
return v___x_536_;
}
else
{
lean_object* v___x_537_; lean_object* v___x_538_; 
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = lean_unsigned_to_nat(6u);
v___x_538_ = l_List_drop___redArg(v___x_537_, v_s_533_);
lean_dec(v_s_533_);
if (lean_obj_tag(v___x_538_) == 0)
{
uint8_t v___x_539_; 
v___x_539_ = 0;
return v___x_539_;
}
else
{
lean_object* v_head_540_; uint8_t v___x_541_; 
v_head_540_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_head_540_);
lean_dec_ref_known(v___x_538_, 2);
v___x_541_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_540_);
lean_dec(v_head_540_);
return v___x_541_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeOpenerAt___boxed(lean_object* v_s_542_){
_start:
{
uint8_t v_res_543_; lean_object* v_r_544_; 
v_res_543_ = lp_lean_x2dftml_LeanFtml_sizeOpenerAt(v_s_542_);
v_r_544_ = lean_box(v_res_543_);
return v_r_544_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__1(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__0));
v___x_547_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeBody_go(lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_zero_551_; uint8_t v_isZero_552_; 
v_zero_551_ = lean_unsigned_to_nat(0u);
v_isZero_552_ = lean_nat_dec_eq(v_a_549_, v_zero_551_);
if (v_isZero_552_ == 1)
{
lean_object* v___x_553_; 
lean_dec(v_a_548_);
v___x_553_ = lean_box(0);
return v___x_553_;
}
else
{
lean_object* v_one_554_; lean_object* v_n_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_one_554_ = lean_unsigned_to_nat(1u);
v_n_555_ = lean_nat_sub(v_a_549_, v_one_554_);
v___x_556_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__1, &lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_sizeBody_go___closed__1);
lean_inc(v_a_548_);
v___x_557_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_556_, v_a_548_);
if (lean_obj_tag(v___x_557_) == 0)
{
if (lean_obj_tag(v_a_548_) == 0)
{
lean_object* v___x_558_; 
lean_dec(v_n_555_);
v___x_558_ = lean_box(0);
return v___x_558_;
}
else
{
lean_object* v_head_559_; lean_object* v_tail_560_; uint8_t v___x_561_; 
v_head_559_ = lean_ctor_get(v_a_548_, 0);
lean_inc(v_head_559_);
v_tail_560_ = lean_ctor_get(v_a_548_, 1);
lean_inc(v_tail_560_);
v___x_561_ = lp_lean_x2dftml_LeanFtml_sizeOpenerAt(v_a_548_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; 
v___x_562_ = lp_lean_x2dftml_LeanFtml_sizeBody_go(v_tail_560_, v_n_555_, v_a_550_);
lean_dec(v_n_555_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_dec(v_head_559_);
return v___x_562_;
}
else
{
lean_object* v_val_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_580_; 
v_val_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_580_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_580_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_val_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_580_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v_fst_567_; lean_object* v_snd_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_579_; 
v_fst_567_ = lean_ctor_get(v_val_563_, 0);
v_snd_568_ = lean_ctor_get(v_val_563_, 1);
v_isSharedCheck_579_ = !lean_is_exclusive(v_val_563_);
if (v_isSharedCheck_579_ == 0)
{
v___x_570_ = v_val_563_;
v_isShared_571_ = v_isSharedCheck_579_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_snd_568_);
lean_inc(v_fst_567_);
lean_dec(v_val_563_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_579_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_572_, 0, v_head_559_);
lean_ctor_set(v___x_572_, 1, v_fst_567_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 0, v___x_572_);
v___x_574_ = v___x_570_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_572_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_snd_568_);
v___x_574_ = v_reuseFailAlloc_578_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_576_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___x_574_);
v___x_576_ = v___x_565_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_574_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
}
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = lean_nat_add(v_a_550_, v_one_554_);
v___x_582_ = lp_lean_x2dftml_LeanFtml_sizeBody_go(v_tail_560_, v_n_555_, v___x_581_);
lean_dec(v___x_581_);
lean_dec(v_n_555_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_dec(v_head_559_);
return v___x_582_;
}
else
{
lean_object* v_val_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_600_; 
v_val_583_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_600_ == 0)
{
v___x_585_ = v___x_582_;
v_isShared_586_ = v_isSharedCheck_600_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_val_583_);
lean_dec(v___x_582_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_600_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v_fst_587_; lean_object* v_snd_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_599_; 
v_fst_587_ = lean_ctor_get(v_val_583_, 0);
v_snd_588_ = lean_ctor_get(v_val_583_, 1);
v_isSharedCheck_599_ = !lean_is_exclusive(v_val_583_);
if (v_isSharedCheck_599_ == 0)
{
v___x_590_ = v_val_583_;
v_isShared_591_ = v_isSharedCheck_599_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_snd_588_);
lean_inc(v_fst_587_);
lean_dec(v_val_583_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_599_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_592_, 0, v_head_559_);
lean_ctor_set(v___x_592_, 1, v_fst_587_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 0, v___x_592_);
v___x_594_ = v___x_590_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_592_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_snd_588_);
v___x_594_ = v_reuseFailAlloc_598_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_596_; 
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v___x_594_);
v___x_596_ = v___x_585_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
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
lean_object* v_val_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_631_; 
lean_dec(v_a_548_);
v_val_601_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_631_ == 0)
{
v___x_603_ = v___x_557_;
v_isShared_604_ = v_isSharedCheck_631_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_val_601_);
lean_dec(v___x_557_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_631_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
uint8_t v___x_605_; 
v___x_605_ = lean_nat_dec_eq(v_a_550_, v_zero_551_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; 
lean_del_object(v___x_603_);
v___x_606_ = lean_nat_sub(v_a_550_, v_one_554_);
v___x_607_ = lp_lean_x2dftml_LeanFtml_sizeBody_go(v_val_601_, v_n_555_, v___x_606_);
lean_dec(v___x_606_);
lean_dec(v_n_555_);
if (lean_obj_tag(v___x_607_) == 0)
{
return v___x_607_;
}
else
{
lean_object* v_val_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_625_; 
v_val_608_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_625_ == 0)
{
v___x_610_ = v___x_607_;
v_isShared_611_ = v_isSharedCheck_625_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_val_608_);
lean_dec(v___x_607_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_625_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v_fst_612_; lean_object* v_snd_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_624_; 
v_fst_612_ = lean_ctor_get(v_val_608_, 0);
v_snd_613_ = lean_ctor_get(v_val_608_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_val_608_);
if (v_isSharedCheck_624_ == 0)
{
v___x_615_ = v_val_608_;
v_isShared_616_ = v_isSharedCheck_624_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_snd_613_);
lean_inc(v_fst_612_);
lean_dec(v_val_608_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_624_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_619_; 
v___x_617_ = l_List_appendTR___redArg(v___x_556_, v_fst_612_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v___x_617_);
v___x_619_ = v___x_615_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_617_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_snd_613_);
v___x_619_ = v_reuseFailAlloc_623_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_621_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_619_);
v___x_621_ = v___x_610_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
}
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_629_; 
lean_dec(v_n_555_);
v___x_626_ = lean_box(0);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
lean_ctor_set(v___x_627_, 1, v_val_601_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_627_);
v___x_629_ = v___x_603_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_627_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeBody_go___boxed(lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = lp_lean_x2dftml_LeanFtml_sizeBody_go(v_a_632_, v_a_633_, v_a_634_);
lean_dec(v_a_634_);
lean_dec(v_a_633_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeBody(lean_object* v_s_636_){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_637_ = l_List_lengthTR___redArg(v_s_636_);
v___x_638_ = lean_unsigned_to_nat(1u);
v___x_639_ = lean_nat_add(v___x_637_, v___x_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = lp_lean_x2dftml_LeanFtml_sizeBody_go(v_s_636_, v___x_639_, v___x_640_);
lean_dec(v___x_639_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeMatchAt(lean_object* v_s_642_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1, &lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_sizeOpenerAt___closed__1);
lean_inc(v_s_642_);
v___x_644_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_643_, v_s_642_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v___x_645_; 
lean_dec(v_s_642_);
v___x_645_ = lean_box(0);
return v___x_645_;
}
else
{
lean_object* v_val_646_; 
v_val_646_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_val_646_);
lean_dec_ref_known(v___x_644_, 1);
if (lean_obj_tag(v_val_646_) == 0)
{
lean_object* v___x_647_; 
lean_dec(v_s_642_);
v___x_647_ = lean_box(0);
return v___x_647_;
}
else
{
lean_object* v_head_648_; lean_object* v_tail_649_; uint8_t v___x_650_; 
v_head_648_ = lean_ctor_get(v_val_646_, 0);
lean_inc(v_head_648_);
v_tail_649_ = lean_ctor_get(v_val_646_, 1);
lean_inc(v_tail_649_);
lean_dec_ref_known(v_val_646_, 2);
v___x_650_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_648_);
lean_dec(v_head_648_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
lean_dec(v_tail_649_);
lean_dec(v_s_642_);
v___x_651_ = lean_box(0);
return v___x_651_;
}
else
{
lean_object* v___x_652_; lean_object* v_run_653_; uint8_t v___x_654_; 
v___x_652_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_tail_649_);
v_run_653_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iftagsPattern_spec__2(v___x_650_, v_tail_649_, v_tail_649_, v___x_652_);
v___x_654_ = l_List_isEmpty___redArg(v_run_653_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = l_List_lengthTR___redArg(v_run_653_);
v___x_656_ = l_List_drop___redArg(v___x_655_, v_tail_649_);
lean_dec(v_tail_649_);
if (lean_obj_tag(v___x_656_) == 1)
{
lean_object* v_head_657_; lean_object* v_tail_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_703_; 
v_head_657_ = lean_ctor_get(v___x_656_, 0);
v_tail_658_ = lean_ctor_get(v___x_656_, 1);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_703_ == 0)
{
v___x_660_ = v___x_656_;
v_isShared_661_ = v_isSharedCheck_703_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_tail_658_);
lean_inc(v_head_657_);
lean_dec(v___x_656_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_703_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_662_ = lean_unsigned_to_nat(93u);
v___x_663_ = lean_nat_dec_eq(v_head_657_, v___x_662_);
lean_dec(v_head_657_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; 
lean_del_object(v___x_660_);
lean_dec(v_tail_658_);
lean_dec(v_run_653_);
lean_dec(v_s_642_);
v___x_664_ = lean_box(0);
return v___x_664_;
}
else
{
if (lean_obj_tag(v_tail_658_) == 1)
{
lean_object* v_head_665_; lean_object* v_tail_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_701_; 
v_head_665_ = lean_ctor_get(v_tail_658_, 0);
v_tail_666_ = lean_ctor_get(v_tail_658_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v_tail_658_);
if (v_isSharedCheck_701_ == 0)
{
v___x_668_ = v_tail_658_;
v_isShared_669_ = v_isSharedCheck_701_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_tail_666_);
lean_inc(v_head_665_);
lean_dec(v_tail_658_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_701_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
uint8_t v___x_670_; 
v___x_670_ = lean_nat_dec_eq(v_head_665_, v___x_662_);
lean_dec(v_head_665_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
lean_del_object(v___x_668_);
lean_dec(v_tail_666_);
lean_del_object(v___x_660_);
lean_dec(v_run_653_);
lean_dec(v_s_642_);
v___x_671_ = lean_box(0);
return v___x_671_;
}
else
{
lean_object* v___x_672_; 
v___x_672_ = lp_lean_x2dftml_LeanFtml_sizeBody(v_tail_666_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v___x_673_; 
lean_del_object(v___x_668_);
lean_del_object(v___x_660_);
lean_dec(v_run_653_);
lean_dec(v_s_642_);
v___x_673_ = lean_box(0);
return v___x_673_;
}
else
{
lean_object* v_val_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_700_; 
v_val_674_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_700_ == 0)
{
v___x_676_ = v___x_672_;
v_isShared_677_ = v_isSharedCheck_700_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_val_674_);
lean_dec(v___x_672_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_700_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v_fst_678_; lean_object* v_snd_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_699_; 
v_fst_678_ = lean_ctor_get(v_val_674_, 0);
v_snd_679_ = lean_ctor_get(v_val_674_, 1);
v_isSharedCheck_699_ = !lean_is_exclusive(v_val_674_);
if (v_isSharedCheck_699_ == 0)
{
v___x_681_ = v_val_674_;
v_isShared_682_ = v_isSharedCheck_699_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_snd_679_);
lean_inc(v_fst_678_);
lean_dec(v_val_674_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_699_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_688_; 
v___x_683_ = l_List_lengthTR___redArg(v_s_642_);
v___x_684_ = l_List_lengthTR___redArg(v_snd_679_);
v___x_685_ = lean_nat_sub(v___x_683_, v___x_684_);
lean_dec(v___x_684_);
lean_dec(v___x_683_);
lean_inc(v_s_642_);
v___x_686_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_642_, v_s_642_, v___x_685_, v___x_652_);
lean_dec(v_s_642_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_686_);
v___x_688_ = v___x_681_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_snd_679_);
v___x_688_ = v_reuseFailAlloc_698_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_690_; 
if (v_isShared_669_ == 0)
{
lean_ctor_set_tag(v___x_668_, 0);
lean_ctor_set(v___x_668_, 1, v___x_688_);
lean_ctor_set(v___x_668_, 0, v_fst_678_);
v___x_690_ = v___x_668_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_fst_678_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v___x_688_);
v___x_690_ = v_reuseFailAlloc_697_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_692_; 
if (v_isShared_661_ == 0)
{
lean_ctor_set_tag(v___x_660_, 0);
lean_ctor_set(v___x_660_, 1, v___x_690_);
lean_ctor_set(v___x_660_, 0, v_run_653_);
v___x_692_ = v___x_660_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_run_653_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_690_);
v___x_692_ = v_reuseFailAlloc_696_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_694_; 
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_692_);
v___x_694_ = v___x_676_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
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
lean_object* v___x_702_; 
lean_del_object(v___x_660_);
lean_dec(v_tail_658_);
lean_dec(v_run_653_);
lean_dec(v_s_642_);
v___x_702_ = lean_box(0);
return v___x_702_;
}
}
}
}
else
{
lean_object* v___x_704_; 
lean_dec(v___x_656_);
lean_dec(v_run_653_);
lean_dec(v_s_642_);
v___x_704_ = lean_box(0);
return v___x_704_;
}
}
else
{
lean_object* v___x_705_; 
lean_dec(v_run_653_);
lean_dec(v_tail_649_);
lean_dec(v_s_642_);
v___x_705_ = lean_box(0);
return v___x_705_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_sizeValid_spec__0(lean_object* v_sz_706_, lean_object* v_x_707_){
_start:
{
if (lean_obj_tag(v_x_707_) == 0)
{
uint8_t v___x_708_; 
v___x_708_ = 0;
return v___x_708_;
}
else
{
lean_object* v_head_709_; lean_object* v_tail_710_; uint8_t v___x_711_; 
v_head_709_ = lean_ctor_get(v_x_707_, 0);
v_tail_710_ = lean_ctor_get(v_x_707_, 1);
v___x_711_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_head_709_, v_sz_706_);
if (v___x_711_ == 0)
{
v_x_707_ = v_tail_710_;
goto _start;
}
else
{
return v___x_711_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_sizeValid_spec__0___boxed(lean_object* v_sz_713_, lean_object* v_x_714_){
_start:
{
uint8_t v_res_715_; lean_object* v_r_716_; 
v_res_715_ = lp_lean_x2dftml_List_any___at___00LeanFtml_sizeValid_spec__0(v_sz_713_, v_x_714_);
lean_dec(v_x_714_);
lean_dec(v_sz_713_);
v_r_716_ = lean_box(v_res_715_);
return v_r_716_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_sizeValid_spec__1(lean_object* v_l_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
if (lean_obj_tag(v_a_718_) == 0)
{
lean_dec_ref(v_a_719_);
lean_inc(v_l_717_);
return v_l_717_;
}
else
{
lean_object* v_head_720_; lean_object* v_tail_721_; uint8_t v___x_725_; 
v_head_720_ = lean_ctor_get(v_a_718_, 0);
lean_inc(v_head_720_);
v_tail_721_ = lean_ctor_get(v_a_718_, 1);
lean_inc(v_tail_721_);
lean_dec_ref_known(v_a_718_, 2);
v___x_725_ = lp_lean_x2dftml_LeanFtml_isDigitByte(v_head_720_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; uint8_t v___x_727_; 
v___x_726_ = lean_unsigned_to_nat(46u);
v___x_727_ = lean_nat_dec_eq(v_head_720_, v___x_726_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; 
lean_dec(v_tail_721_);
lean_dec(v_head_720_);
v___x_728_ = lean_array_to_list(v_a_719_);
return v___x_728_;
}
else
{
goto v___jp_722_;
}
}
else
{
goto v___jp_722_;
}
v___jp_722_:
{
lean_object* v___x_723_; 
v___x_723_ = lean_array_push(v_a_719_, v_head_720_);
v_a_718_ = v_tail_721_;
v_a_719_ = v___x_723_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_sizeValid_spec__1___boxed(lean_object* v_l_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_sizeValid_spec__1(v_l_729_, v_a_730_, v_a_731_);
lean_dec(v_l_729_);
return v_res_732_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__1(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__0));
v___x_735_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_734_);
return v___x_735_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__3(void){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_737_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__2));
v___x_738_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_737_);
return v___x_738_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__5(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__4));
v___x_741_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_740_);
return v___x_741_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__7(void){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__6));
v___x_744_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_743_);
return v___x_744_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__9(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__8));
v___x_747_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_746_);
return v___x_747_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__11(void){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__10));
v___x_750_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_749_);
return v___x_750_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__13(void){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__12));
v___x_753_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_752_);
return v___x_753_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__15(void){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__14));
v___x_756_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_755_);
return v___x_756_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__17(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__16));
v___x_759_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_758_);
return v___x_759_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__18(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_760_ = lean_box(0);
v___x_761_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__17, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__17);
v___x_762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v___x_760_);
return v___x_762_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__19(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__18, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__18);
v___x_764_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__15, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__15);
v___x_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v___x_763_);
return v___x_765_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__20(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_766_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__19, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__19);
v___x_767_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__13, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__13);
v___x_768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
lean_ctor_set(v___x_768_, 1, v___x_766_);
return v___x_768_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__21(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_769_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__20, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__20);
v___x_770_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__11, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__11);
v___x_771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
lean_ctor_set(v___x_771_, 1, v___x_769_);
return v___x_771_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__22(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_772_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__21, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__21);
v___x_773_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__9, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__9);
v___x_774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
lean_ctor_set(v___x_774_, 1, v___x_772_);
return v___x_774_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__23(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__22, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__22);
v___x_776_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__7, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__7);
v___x_777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
lean_ctor_set(v___x_777_, 1, v___x_775_);
return v___x_777_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__24(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__23, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__23);
v___x_779_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__5, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__5);
v___x_780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
lean_ctor_set(v___x_780_, 1, v___x_778_);
return v___x_780_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__25(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_781_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__24, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__24);
v___x_782_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__3, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__3);
v___x_783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
lean_ctor_set(v___x_783_, 1, v___x_781_);
return v___x_783_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__26(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v_named_786_; 
v___x_784_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__25, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__25);
v___x_785_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__1, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__1);
v_named_786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_named_786_, 0, v___x_785_);
lean_ctor_set(v_named_786_, 1, v___x_784_);
return v_named_786_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__28(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__27));
v___x_789_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_788_);
return v___x_789_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__30(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__29));
v___x_792_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_791_);
return v___x_792_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__32(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeValid___closed__31));
v___x_795_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_794_);
return v___x_795_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_sizeValid(lean_object* v_sz_796_){
_start:
{
lean_object* v_named_797_; uint8_t v___x_798_; uint8_t v___x_799_; 
v_named_797_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__26, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__26);
v___x_798_ = lp_lean_x2dftml_List_any___at___00LeanFtml_sizeValid_spec__0(v_sz_796_, v_named_797_);
v___x_799_ = 1;
if (v___x_798_ == 0)
{
lean_object* v___x_800_; lean_object* v_run_801_; lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_800_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_sz_796_);
v_run_801_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_sizeValid_spec__1(v_sz_796_, v_sz_796_, v___x_800_);
v___x_802_ = lean_unsigned_to_nat(1u);
v___x_803_ = l_List_lengthTR___redArg(v_run_801_);
lean_dec(v_run_801_);
v___x_804_ = lean_nat_dec_le(v___x_802_, v___x_803_);
if (v___x_804_ == 0)
{
lean_dec(v___x_803_);
lean_dec(v_sz_796_);
return v___x_798_;
}
else
{
lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(5u);
v___x_806_ = lean_nat_dec_le(v___x_803_, v___x_805_);
if (v___x_806_ == 0)
{
lean_dec(v___x_803_);
lean_dec(v_sz_796_);
return v___x_798_;
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_807_ = l_List_drop___redArg(v___x_803_, v_sz_796_);
lean_dec(v_sz_796_);
v___x_808_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__28, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__28_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__28);
v___x_809_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_807_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_810_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__30, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__30_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__30);
v___x_811_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_807_, v___x_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeValid___closed__32, &lp_lean_x2dftml_LeanFtml_sizeValid___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_sizeValid___closed__32);
v___x_813_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_807_, v___x_812_);
lean_dec(v___x_807_);
return v___x_813_;
}
else
{
lean_dec(v___x_807_);
return v___x_799_;
}
}
else
{
lean_dec(v___x_807_);
return v___x_799_;
}
}
}
}
else
{
lean_dec(v_sz_796_);
return v___x_799_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeValid___boxed(lean_object* v_sz_814_){
_start:
{
uint8_t v_res_815_; lean_object* v_r_816_; 
v_res_815_ = lp_lean_x2dftml_LeanFtml_sizeValid(v_sz_814_);
v_r_816_ = lean_box(v_res_815_);
return v_r_816_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_sizeDropByte(lean_object* v_b_817_){
_start:
{
lean_object* v___x_823_; uint8_t v___x_824_; 
v___x_823_ = lean_unsigned_to_nat(8u);
v___x_824_ = lean_nat_dec_le(v_b_817_, v___x_823_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(11u);
v___x_826_ = lean_nat_dec_eq(v_b_817_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = lean_unsigned_to_nat(12u);
v___x_828_ = lean_nat_dec_eq(v_b_817_, v___x_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; uint8_t v___x_830_; 
v___x_829_ = lean_unsigned_to_nat(14u);
v___x_830_ = lean_nat_dec_le(v___x_829_, v_b_817_);
if (v___x_830_ == 0)
{
goto v___jp_818_;
}
else
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = lean_unsigned_to_nat(26u);
v___x_832_ = lean_nat_dec_le(v_b_817_, v___x_831_);
if (v___x_832_ == 0)
{
goto v___jp_818_;
}
else
{
return v___x_832_;
}
}
}
else
{
return v___x_828_;
}
}
else
{
return v___x_826_;
}
}
else
{
return v___x_824_;
}
v___jp_818_:
{
lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_819_ = lean_unsigned_to_nat(28u);
v___x_820_ = lean_nat_dec_le(v___x_819_, v_b_817_);
if (v___x_820_ == 0)
{
return v___x_820_;
}
else
{
lean_object* v___x_821_; uint8_t v___x_822_; 
v___x_821_ = lean_unsigned_to_nat(31u);
v___x_822_ = lean_nat_dec_le(v_b_817_, v___x_821_);
return v___x_822_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeDropByte___boxed(lean_object* v_b_833_){
_start:
{
uint8_t v_res_834_; lean_object* v_r_835_; 
v_res_834_ = lp_lean_x2dftml_LeanFtml_sizeDropByte(v_b_833_);
lean_dec(v_b_833_);
v_r_835_ = lean_box(v_res_834_);
return v_r_835_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropLineEndRuns_go(lean_object* v_a_836_, lean_object* v_a_837_){
_start:
{
if (lean_obj_tag(v_a_836_) == 0)
{
lean_dec(v_a_837_);
return v_a_836_;
}
else
{
lean_object* v_head_838_; lean_object* v_tail_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_863_; 
v_head_838_ = lean_ctor_get(v_a_836_, 0);
v_tail_839_ = lean_ctor_get(v_a_836_, 1);
v_isSharedCheck_863_ = !lean_is_exclusive(v_a_836_);
if (v_isSharedCheck_863_ == 0)
{
v___x_841_ = v_a_836_;
v_isShared_842_ = v_isSharedCheck_863_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_tail_839_);
lean_inc(v_head_838_);
lean_dec(v_a_836_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_863_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_850_ = lean_unsigned_to_nat(32u);
v___x_851_ = lean_nat_dec_eq(v_head_838_, v___x_850_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_852_ = lean_unsigned_to_nat(9u);
v___x_853_ = lean_nat_dec_eq(v_head_838_, v___x_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; uint8_t v___x_855_; 
lean_del_object(v___x_841_);
v___x_854_ = lean_unsigned_to_nat(10u);
v___x_855_ = lean_nat_dec_eq(v_head_838_, v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_856_ = lean_box(0);
v___x_857_ = lp_lean_x2dftml_LeanFtml_dropLineEndRuns_go(v_tail_839_, v___x_856_);
v___x_858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_858_, 0, v_head_838_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
v___x_859_ = l_List_appendTR___redArg(v_a_837_, v___x_858_);
return v___x_859_;
}
else
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
lean_dec(v_head_838_);
lean_dec(v_a_837_);
v___x_860_ = lean_box(0);
v___x_861_ = lp_lean_x2dftml_LeanFtml_dropLineEndRuns_go(v_tail_839_, v___x_860_);
v___x_862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_854_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
return v___x_862_;
}
}
else
{
goto v___jp_843_;
}
}
else
{
goto v___jp_843_;
}
v___jp_843_:
{
lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_844_ = lean_box(0);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 1, v___x_844_);
v___x_846_ = v___x_841_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_head_838_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v___x_844_);
v___x_846_ = v_reuseFailAlloc_849_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
lean_object* v___x_847_; 
v___x_847_ = l_List_appendTR___redArg(v_a_837_, v___x_846_);
v_a_836_ = v_tail_839_;
v_a_837_ = v___x_847_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropLineEndRuns(lean_object* v_s_864_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = lean_box(0);
v___x_866_ = lp_lean_x2dftml_LeanFtml_dropLineEndRuns_go(v_s_864_, v___x_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_sizeProcess_spec__0(uint8_t v___x_867_, lean_object* v_a_868_, lean_object* v_a_869_){
_start:
{
if (lean_obj_tag(v_a_868_) == 0)
{
lean_object* v___x_870_; 
v___x_870_ = l_List_reverse___redArg(v_a_869_);
return v___x_870_;
}
else
{
lean_object* v_head_871_; lean_object* v_tail_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_883_; 
v_head_871_ = lean_ctor_get(v_a_868_, 0);
v_tail_872_ = lean_ctor_get(v_a_868_, 1);
v_isSharedCheck_883_ = !lean_is_exclusive(v_a_868_);
if (v_isSharedCheck_883_ == 0)
{
v___x_874_ = v_a_868_;
v_isShared_875_ = v_isSharedCheck_883_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_tail_872_);
lean_inc(v_head_871_);
lean_dec(v_a_868_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_883_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
uint8_t v___x_876_; 
v___x_876_ = lp_lean_x2dftml_LeanFtml_sizeDropByte(v_head_871_);
if (v___x_876_ == 0)
{
if (v___x_867_ == 0)
{
lean_del_object(v___x_874_);
lean_dec(v_head_871_);
v_a_868_ = v_tail_872_;
goto _start;
}
else
{
lean_object* v___x_879_; 
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v_a_869_);
v___x_879_ = v___x_874_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_head_871_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_a_869_);
v___x_879_ = v_reuseFailAlloc_881_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
v_a_868_ = v_tail_872_;
v_a_869_ = v___x_879_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_874_);
lean_dec(v_head_871_);
v_a_868_ = v_tail_872_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_sizeProcess_spec__0___boxed(lean_object* v___x_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
uint8_t v___x_221__boxed_887_; lean_object* v_res_888_; 
v___x_221__boxed_887_ = lean_unbox(v___x_884_);
v_res_888_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_sizeProcess_spec__0(v___x_221__boxed_887_, v_a_885_, v_a_886_);
return v_res_888_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__2(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeProcess___closed__1));
v___x_892_ = l_String_toListImpl(v___x_891_);
return v___x_892_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__3(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = lean_box(0);
v___x_894_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__7, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7);
v___x_895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
lean_ctor_set(v___x_895_, 1, v___x_893_);
return v___x_895_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__4(void){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_896_ = lean_box(0);
v___x_897_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__11, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11);
v___x_898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
lean_ctor_set(v___x_898_, 1, v___x_896_);
return v___x_898_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__5(void){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_899_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeProcess___closed__4, &lp_lean_x2dftml_LeanFtml_sizeProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__4);
v___x_900_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeProcess___closed__0));
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
lean_ctor_set(v___x_901_, 1, v___x_899_);
return v___x_901_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__6(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_902_ = lean_box(0);
v___x_903_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeProcess___closed__5, &lp_lean_x2dftml_LeanFtml_sizeProcess___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__5);
v___x_904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
lean_ctor_set(v___x_904_, 1, v___x_902_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess(lean_object* v_g1_905_, lean_object* v_body_906_, lean_object* v_full_907_, lean_object* v_toks_908_){
_start:
{
lean_object* v_size_909_; uint8_t v___x_910_; 
v_size_909_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_g1_905_);
lean_inc(v_size_909_);
v___x_910_ = lp_lean_x2dftml_LeanFtml_sizeValid(v_size_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; 
lean_dec(v_size_909_);
lean_dec(v_body_906_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v_full_907_);
lean_ctor_set(v___x_911_, 1, v_toks_908_);
return v___x_911_;
}
else
{
lean_object* v___x_912_; lean_object* v_c1_913_; lean_object* v_c2_914_; uint8_t v___x_915_; 
lean_dec(v_full_907_);
v___x_912_ = lean_box(0);
v_c1_913_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_sizeProcess_spec__0(v___x_910_, v_body_906_, v___x_912_);
v_c2_914_ = lp_lean_x2dftml_LeanFtml_dropLineEndRuns(v_c1_913_);
v___x_915_ = l_List_isEmpty___redArg(v_c2_914_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v_startPh_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v_t1_926_; lean_object* v___x_927_; lean_object* v_endPh_928_; lean_object* v___x_929_; lean_object* v_t2_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_916_ = l_List_lengthTR___redArg(v_toks_908_);
v_startPh_917_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_916_);
v___x_918_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeProcess___closed__0));
v___x_919_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeProcess___closed__2, &lp_lean_x2dftml_LeanFtml_sizeProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__2);
v___x_920_ = lp_lean_x2dftml_LeanFtml_textVal(v_size_909_);
v___x_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_919_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeProcess___closed__3, &lp_lean_x2dftml_LeanFtml_sizeProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__3);
v___x_923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_921_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_918_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
lean_ctor_set(v___x_925_, 1, v___x_912_);
v_t1_926_ = l_List_appendTR___redArg(v_toks_908_, v___x_925_);
v___x_927_ = l_List_lengthTR___redArg(v_t1_926_);
v_endPh_928_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_927_);
v___x_929_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_sizeProcess___closed__6, &lp_lean_x2dftml_LeanFtml_sizeProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_sizeProcess___closed__6);
v_t2_930_ = l_List_appendTR___redArg(v_t1_926_, v___x_929_);
v___x_931_ = l_List_appendTR___redArg(v_startPh_917_, v_c2_914_);
v___x_932_ = l_List_appendTR___redArg(v___x_931_, v_endPh_928_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
lean_ctor_set(v___x_933_, 1, v_t2_930_);
return v___x_933_;
}
else
{
lean_object* v___x_934_; 
lean_dec(v_c2_914_);
lean_dec(v_size_909_);
v___x_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_912_);
lean_ctor_set(v___x_934_, 1, v_toks_908_);
return v___x_934_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeProcess___boxed(lean_object* v_g1_935_, lean_object* v_body_936_, lean_object* v_full_937_, lean_object* v_toks_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = lp_lean_x2dftml_LeanFtml_sizeProcess(v_g1_935_, v_body_936_, v_full_937_, v_toks_938_);
lean_dec(v_g1_935_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeScan(lean_object* v_src_940_, lean_object* v_toks_941_, lean_object* v_x_942_){
_start:
{
lean_object* v_zero_943_; uint8_t v_isZero_944_; 
v_zero_943_ = lean_unsigned_to_nat(0u);
v_isZero_944_ = lean_nat_dec_eq(v_x_942_, v_zero_943_);
if (v_isZero_944_ == 1)
{
lean_object* v___x_945_; 
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v_src_940_);
lean_ctor_set(v___x_945_, 1, v_toks_941_);
return v___x_945_;
}
else
{
if (lean_obj_tag(v_src_940_) == 0)
{
lean_object* v___x_946_; 
v___x_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_946_, 0, v_src_940_);
lean_ctor_set(v___x_946_, 1, v_toks_941_);
return v___x_946_;
}
else
{
lean_object* v_head_947_; lean_object* v_tail_948_; lean_object* v_one_949_; lean_object* v_n_950_; lean_object* v___x_951_; 
v_head_947_ = lean_ctor_get(v_src_940_, 0);
lean_inc(v_head_947_);
v_tail_948_ = lean_ctor_get(v_src_940_, 1);
lean_inc(v_tail_948_);
v_one_949_ = lean_unsigned_to_nat(1u);
v_n_950_ = lean_nat_sub(v_x_942_, v_one_949_);
v___x_951_ = lp_lean_x2dftml_LeanFtml_sizeMatchAt(v_src_940_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v___x_952_; lean_object* v_fst_953_; lean_object* v_snd_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_962_; 
v___x_952_ = lp_lean_x2dftml_LeanFtml_sizeScan(v_tail_948_, v_toks_941_, v_n_950_);
lean_dec(v_n_950_);
v_fst_953_ = lean_ctor_get(v___x_952_, 0);
v_snd_954_ = lean_ctor_get(v___x_952_, 1);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_962_ == 0)
{
v___x_956_ = v___x_952_;
v_isShared_957_ = v_isSharedCheck_962_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_snd_954_);
lean_inc(v_fst_953_);
lean_dec(v___x_952_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_962_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_958_, 0, v_head_947_);
lean_ctor_set(v___x_958_, 1, v_fst_953_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v___x_958_);
v___x_960_ = v___x_956_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_snd_954_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
else
{
lean_object* v_val_963_; lean_object* v_snd_964_; lean_object* v_snd_965_; lean_object* v_fst_966_; lean_object* v_fst_967_; lean_object* v_fst_968_; lean_object* v_snd_969_; lean_object* v___x_970_; lean_object* v_fst_971_; lean_object* v_snd_972_; lean_object* v___x_973_; lean_object* v_fst_974_; lean_object* v_snd_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_983_; 
lean_dec(v_tail_948_);
lean_dec(v_head_947_);
v_val_963_ = lean_ctor_get(v___x_951_, 0);
lean_inc(v_val_963_);
lean_dec_ref_known(v___x_951_, 1);
v_snd_964_ = lean_ctor_get(v_val_963_, 1);
lean_inc(v_snd_964_);
v_snd_965_ = lean_ctor_get(v_snd_964_, 1);
lean_inc(v_snd_965_);
v_fst_966_ = lean_ctor_get(v_val_963_, 0);
lean_inc(v_fst_966_);
lean_dec(v_val_963_);
v_fst_967_ = lean_ctor_get(v_snd_964_, 0);
lean_inc(v_fst_967_);
lean_dec(v_snd_964_);
v_fst_968_ = lean_ctor_get(v_snd_965_, 0);
lean_inc(v_fst_968_);
v_snd_969_ = lean_ctor_get(v_snd_965_, 1);
lean_inc(v_snd_969_);
lean_dec(v_snd_965_);
v___x_970_ = lp_lean_x2dftml_LeanFtml_sizeProcess(v_fst_966_, v_fst_967_, v_fst_968_, v_toks_941_);
lean_dec(v_fst_966_);
v_fst_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_fst_971_);
v_snd_972_ = lean_ctor_get(v___x_970_, 1);
lean_inc(v_snd_972_);
lean_dec_ref(v___x_970_);
v___x_973_ = lp_lean_x2dftml_LeanFtml_sizeScan(v_snd_969_, v_snd_972_, v_n_950_);
lean_dec(v_n_950_);
v_fst_974_ = lean_ctor_get(v___x_973_, 0);
v_snd_975_ = lean_ctor_get(v___x_973_, 1);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_983_ == 0)
{
v___x_977_ = v___x_973_;
v_isShared_978_ = v_isSharedCheck_983_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_snd_975_);
lean_inc(v_fst_974_);
lean_dec(v___x_973_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_983_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; lean_object* v___x_981_; 
v___x_979_ = l_List_appendTR___redArg(v_fst_971_, v_fst_974_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 0, v___x_979_);
v___x_981_ = v___x_977_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_979_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_snd_975_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeScan___boxed(lean_object* v_src_984_, lean_object* v_toks_985_, lean_object* v_x_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = lp_lean_x2dftml_LeanFtml_sizeScan(v_src_984_, v_toks_985_, v_x_986_);
lean_dec(v_x_986_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizePasses(lean_object* v_src_988_, lean_object* v_toks_989_, lean_object* v_x_990_){
_start:
{
lean_object* v_zero_991_; uint8_t v_isZero_992_; 
v_zero_991_ = lean_unsigned_to_nat(0u);
v_isZero_992_ = lean_nat_dec_eq(v_x_990_, v_zero_991_);
if (v_isZero_992_ == 1)
{
lean_object* v___x_993_; 
lean_dec(v_x_990_);
v___x_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_993_, 0, v_src_988_);
lean_ctor_set(v___x_993_, 1, v_toks_989_);
return v___x_993_;
}
else
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v_fst_998_; lean_object* v_snd_999_; uint8_t v___x_1000_; 
v___x_994_ = l_List_lengthTR___redArg(v_src_988_);
v___x_995_ = lean_unsigned_to_nat(1u);
v___x_996_ = lean_nat_add(v___x_994_, v___x_995_);
lean_dec(v___x_994_);
lean_inc(v_src_988_);
v___x_997_ = lp_lean_x2dftml_LeanFtml_sizeScan(v_src_988_, v_toks_989_, v___x_996_);
lean_dec(v___x_996_);
v_fst_998_ = lean_ctor_get(v___x_997_, 0);
v_snd_999_ = lean_ctor_get(v___x_997_, 1);
v___x_1000_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_998_, v_src_988_);
lean_dec(v_src_988_);
if (v___x_1000_ == 0)
{
lean_object* v_n_1001_; 
lean_inc(v_snd_999_);
lean_inc(v_fst_998_);
lean_dec_ref(v___x_997_);
v_n_1001_ = lean_nat_sub(v_x_990_, v___x_995_);
lean_dec(v_x_990_);
v_src_988_ = v_fst_998_;
v_toks_989_ = v_snd_999_;
v_x_990_ = v_n_1001_;
goto _start;
}
else
{
lean_dec(v_x_990_);
return v___x_997_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeRule___lam__0(lean_object* v_src_1003_, lean_object* v_toks_1004_){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1005_ = l_List_lengthTR___redArg(v_src_1003_);
v___x_1006_ = lean_unsigned_to_nat(2u);
v___x_1007_ = lean_nat_add(v___x_1005_, v___x_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lp_lean_x2dftml_LeanFtml_sizePasses(v_src_1003_, v_toks_1004_, v___x_1007_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sizeRule(lean_object* v_st_1010_){
_start:
{
lean_object* v___f_1011_; lean_object* v___x_1012_; 
v___f_1011_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sizeRule___closed__0));
v___x_1012_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1010_, v___f_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isWsU(uint32_t v_c_1013_){
_start:
{
lean_object* v_n_1014_; lean_object* v___x_1026_; uint8_t v___x_1027_; 
v_n_1014_ = lean_uint32_to_nat(v_c_1013_);
v___x_1026_ = lean_unsigned_to_nat(9u);
v___x_1027_ = lean_nat_dec_eq(v_n_1014_, v___x_1026_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; uint8_t v___x_1029_; 
v___x_1028_ = lean_unsigned_to_nat(10u);
v___x_1029_ = lean_nat_dec_eq(v_n_1014_, v___x_1028_);
if (v___x_1029_ == 0)
{
lean_object* v___x_1030_; uint8_t v___x_1031_; 
v___x_1030_ = lean_unsigned_to_nat(11u);
v___x_1031_ = lean_nat_dec_eq(v_n_1014_, v___x_1030_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = lean_unsigned_to_nat(12u);
v___x_1033_ = lean_nat_dec_eq(v_n_1014_, v___x_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = lean_unsigned_to_nat(13u);
v___x_1035_ = lean_nat_dec_eq(v_n_1014_, v___x_1034_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1036_ = lean_unsigned_to_nat(32u);
v___x_1037_ = lean_nat_dec_eq(v_n_1014_, v___x_1036_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1038_ = lean_unsigned_to_nat(133u);
v___x_1039_ = lean_nat_dec_eq(v_n_1014_, v___x_1038_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1040_; uint8_t v___x_1041_; 
v___x_1040_ = lean_unsigned_to_nat(160u);
v___x_1041_ = lean_nat_dec_eq(v_n_1014_, v___x_1040_);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; uint8_t v___x_1043_; 
v___x_1042_ = lean_unsigned_to_nat(5760u);
v___x_1043_ = lean_nat_dec_eq(v_n_1014_, v___x_1042_);
if (v___x_1043_ == 0)
{
lean_object* v___x_1044_; uint8_t v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(8192u);
v___x_1045_ = lean_nat_dec_le(v___x_1044_, v_n_1014_);
if (v___x_1045_ == 0)
{
goto v___jp_1015_;
}
else
{
lean_object* v___x_1046_; uint8_t v___x_1047_; 
v___x_1046_ = lean_unsigned_to_nat(8202u);
v___x_1047_ = lean_nat_dec_le(v_n_1014_, v___x_1046_);
if (v___x_1047_ == 0)
{
goto v___jp_1015_;
}
else
{
lean_dec(v_n_1014_);
return v___x_1047_;
}
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1043_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1041_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1039_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1037_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1035_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1033_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1031_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1029_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1027_;
}
v___jp_1015_:
{
lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1016_ = lean_unsigned_to_nat(8232u);
v___x_1017_ = lean_nat_dec_eq(v_n_1014_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; uint8_t v___x_1019_; 
v___x_1018_ = lean_unsigned_to_nat(8233u);
v___x_1019_ = lean_nat_dec_eq(v_n_1014_, v___x_1018_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; uint8_t v___x_1021_; 
v___x_1020_ = lean_unsigned_to_nat(8239u);
v___x_1021_ = lean_nat_dec_eq(v_n_1014_, v___x_1020_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; uint8_t v___x_1023_; 
v___x_1022_ = lean_unsigned_to_nat(8287u);
v___x_1023_ = lean_nat_dec_eq(v_n_1014_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; uint8_t v___x_1025_; 
v___x_1024_ = lean_unsigned_to_nat(12288u);
v___x_1025_ = lean_nat_dec_eq(v_n_1014_, v___x_1024_);
lean_dec(v_n_1014_);
return v___x_1025_;
}
else
{
lean_dec(v_n_1014_);
return v___x_1023_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1021_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1019_;
}
}
else
{
lean_dec(v_n_1014_);
return v___x_1017_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isWsU___boxed(lean_object* v_c_1048_){
_start:
{
uint32_t v_c_boxed_1049_; uint8_t v_res_1050_; lean_object* v_r_1051_; 
v_c_boxed_1049_ = lean_unbox_uint32(v_c_1048_);
lean_dec(v_c_1048_);
v_res_1050_ = lp_lean_x2dftml_LeanFtml_isWsU(v_c_boxed_1049_);
v_r_1051_ = lean_box(v_res_1050_);
return v_r_1051_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_collapseWsU_go___boxed__const__1(void){
_start:
{
uint32_t v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = 32;
v___x_1053_ = lean_box_uint32(v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsU_go(lean_object* v_a_1054_, uint8_t v_a_1055_){
_start:
{
if (lean_obj_tag(v_a_1054_) == 0)
{
return v_a_1054_;
}
else
{
lean_object* v_head_1056_; lean_object* v_tail_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1073_; 
v_head_1056_ = lean_ctor_get(v_a_1054_, 0);
v_tail_1057_ = lean_ctor_get(v_a_1054_, 1);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_a_1054_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1059_ = v_a_1054_;
v_isShared_1060_ = v_isSharedCheck_1073_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_tail_1057_);
lean_inc(v_head_1056_);
lean_dec(v_a_1054_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1073_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
uint32_t v___x_1061_; uint8_t v___x_1062_; 
v___x_1061_ = lean_unbox_uint32(v_head_1056_);
v___x_1062_ = lp_lean_x2dftml_LeanFtml_isWsU(v___x_1061_);
if (v___x_1062_ == 0)
{
lean_object* v___x_1063_; lean_object* v___x_1065_; 
v___x_1063_ = lp_lean_x2dftml_LeanFtml_collapseWsU_go(v_tail_1057_, v___x_1062_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 1, v___x_1063_);
v___x_1065_ = v___x_1059_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_head_1056_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
else
{
lean_dec(v_head_1056_);
if (v_a_1055_ == 0)
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1067_ = lp_lean_x2dftml_LeanFtml_collapseWsU_go(v_tail_1057_, v___x_1062_);
v___x_1068_ = lp_lean_x2dftml_LeanFtml_collapseWsU_go___boxed__const__1;
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 1, v___x_1067_);
lean_ctor_set(v___x_1059_, 0, v___x_1068_);
v___x_1070_ = v___x_1059_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1068_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v___x_1067_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
else
{
lean_del_object(v___x_1059_);
v_a_1054_ = v_tail_1057_;
v_a_1055_ = v___x_1062_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsU_go___boxed(lean_object* v_a_1074_, lean_object* v_a_1075_){
_start:
{
uint8_t v_a_52__boxed_1076_; lean_object* v_res_1077_; 
v_a_52__boxed_1076_ = lean_unbox(v_a_1075_);
v_res_1077_ = lp_lean_x2dftml_LeanFtml_collapseWsU_go(v_a_1074_, v_a_52__boxed_1076_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsU(lean_object* v_cs_1078_){
_start:
{
uint8_t v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = 0;
v___x_1080_ = lp_lean_x2dftml_LeanFtml_collapseWsU_go(v_cs_1078_, v___x_1079_);
return v___x_1080_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_isolateId___closed__1(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__14, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__14);
v___x_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isolateId(lean_object* v_v_1088_){
_start:
{
lean_object* v___y_1090_; lean_object* v___y_1091_; lean_object* v___y_1092_; uint8_t v___x_1098_; 
v___x_1098_ = l_List_isEmpty___redArg(v_v_1088_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1099_ = lean_unsigned_to_nat(255u);
v___x_1100_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_1099_, v_v_1088_);
if (v___x_1100_ == 0)
{
lean_object* v_cs_1101_; uint8_t v___y_1103_; 
lean_inc(v_v_1088_);
v_cs_1101_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_v_1088_);
if (lean_obj_tag(v_cs_1101_) == 0)
{
v___y_1103_ = v___x_1100_;
goto v___jp_1102_;
}
else
{
lean_object* v_head_1115_; uint32_t v___x_1116_; uint8_t v___x_1117_; 
v_head_1115_ = lean_ctor_get(v_cs_1101_, 0);
v___x_1116_ = lean_unbox_uint32(v_head_1115_);
v___x_1117_ = lp_lean_x2dftml_LeanFtml_isWsU(v___x_1116_);
v___y_1103_ = v___x_1117_;
goto v___jp_1102_;
}
v___jp_1102_:
{
lean_object* v___x_1104_; lean_object* v_collapsed_1105_; uint8_t v___x_1106_; 
v___x_1104_ = lp_lean_x2dftml_LeanFtml_trimChars(v_cs_1101_);
lean_dec(v_cs_1101_);
v_collapsed_1105_ = lp_lean_x2dftml_LeanFtml_collapseWsU(v___x_1104_);
v___x_1106_ = l_List_isEmpty___redArg(v_collapsed_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; uint8_t v___x_1108_; 
v___x_1107_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__14, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__14);
v___x_1108_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1107_, v_v_1088_);
lean_dec(v_v_1088_);
if (v___x_1108_ == 0)
{
if (v___y_1103_ == 0)
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_box(0);
v___y_1090_ = v_collapsed_1105_;
v___y_1091_ = v___x_1107_;
v___y_1092_ = v___x_1109_;
goto v___jp_1089_;
}
else
{
lean_object* v___x_1110_; 
v___x_1110_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isolateId___closed__0));
v___y_1090_ = v_collapsed_1105_;
v___y_1091_ = v___x_1107_;
v___y_1092_ = v___x_1110_;
goto v___jp_1089_;
}
}
else
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1111_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_1112_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_collapsed_1105_, v___x_1111_);
lean_dec(v_collapsed_1105_);
v___x_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
}
else
{
lean_object* v___x_1114_; 
lean_dec(v_collapsed_1105_);
lean_dec(v_v_1088_);
v___x_1114_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_isolateId___closed__1, &lp_lean_x2dftml_LeanFtml_isolateId___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_isolateId___closed__1);
return v___x_1114_;
}
}
}
else
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v_v_1088_);
return v___x_1118_;
}
}
else
{
lean_object* v___x_1119_; 
lean_dec(v_v_1088_);
v___x_1119_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isolateId___closed__2));
return v___x_1119_;
}
v___jp_1089_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_inc(v___y_1092_);
lean_inc(v___y_1091_);
v___x_1093_ = l_List_appendTR___redArg(v___y_1091_, v___y_1092_);
v___x_1094_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_1095_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v___y_1090_, v___x_1094_);
lean_dec(v___y_1090_);
v___x_1096_ = l_List_appendTR___redArg(v___x_1093_, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
return v___x_1097_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue_go(lean_object* v_a_1120_, uint8_t v_a_1121_){
_start:
{
if (lean_obj_tag(v_a_1120_) == 0)
{
return v_a_1120_;
}
else
{
lean_object* v_head_1122_; lean_object* v_tail_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1144_; 
v_head_1122_ = lean_ctor_get(v_a_1120_, 0);
v_tail_1123_ = lean_ctor_get(v_a_1120_, 1);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_a_1120_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1125_ = v_a_1120_;
v_isShared_1126_ = v_isSharedCheck_1144_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_tail_1123_);
lean_inc(v_head_1122_);
lean_dec(v_a_1120_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1144_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; uint8_t v___x_1135_; 
v___x_1127_ = lean_unsigned_to_nat(32u);
v___x_1135_ = lean_nat_dec_eq(v_head_1122_, v___x_1127_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1136_ = lean_unsigned_to_nat(9u);
v___x_1137_ = lean_nat_dec_eq(v_head_1122_, v___x_1136_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1138_ = lean_unsigned_to_nat(13u);
v___x_1139_ = lean_nat_dec_eq(v_head_1122_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1140_ = lean_unsigned_to_nat(10u);
v___x_1141_ = lean_nat_dec_eq(v_head_1122_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
lean_del_object(v___x_1125_);
v___x_1142_ = lp_lean_x2dftml_LeanFtml_normalizeValue_go(v_tail_1123_, v___x_1141_);
v___x_1143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1143_, 0, v_head_1122_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
return v___x_1143_;
}
else
{
lean_dec(v_head_1122_);
goto v___jp_1128_;
}
}
else
{
lean_dec(v_head_1122_);
goto v___jp_1128_;
}
}
else
{
lean_dec(v_head_1122_);
goto v___jp_1128_;
}
}
else
{
lean_dec(v_head_1122_);
goto v___jp_1128_;
}
v___jp_1128_:
{
uint8_t v___x_1129_; 
v___x_1129_ = 1;
if (v_a_1121_ == 0)
{
lean_object* v___x_1130_; lean_object* v___x_1132_; 
v___x_1130_ = lp_lean_x2dftml_LeanFtml_normalizeValue_go(v_tail_1123_, v___x_1129_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 1, v___x_1130_);
lean_ctor_set(v___x_1125_, 0, v___x_1127_);
v___x_1132_ = v___x_1125_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1127_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v___x_1130_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
else
{
lean_del_object(v___x_1125_);
v_a_1120_ = v_tail_1123_;
v_a_1121_ = v___x_1129_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue_go___boxed(lean_object* v_a_1145_, lean_object* v_a_1146_){
_start:
{
uint8_t v_a_260__boxed_1147_; lean_object* v_res_1148_; 
v_a_260__boxed_1147_ = lean_unbox(v_a_1146_);
v_res_1148_ = lp_lean_x2dftml_LeanFtml_normalizeValue_go(v_a_1145_, v_a_260__boxed_1147_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_normalizeValue_spec__0(lean_object* v_a_1149_, lean_object* v_a_1150_){
_start:
{
if (lean_obj_tag(v_a_1149_) == 0)
{
lean_object* v___x_1151_; 
v___x_1151_ = l_List_reverse___redArg(v_a_1150_);
return v___x_1151_;
}
else
{
lean_object* v_head_1152_; lean_object* v_tail_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1167_; 
v_head_1152_ = lean_ctor_get(v_a_1149_, 0);
v_tail_1153_ = lean_ctor_get(v_a_1149_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_a_1149_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1155_ = v_a_1149_;
v_isShared_1156_ = v_isSharedCheck_1167_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_tail_1153_);
lean_inc(v_head_1152_);
lean_dec(v_a_1149_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1167_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; uint8_t v___x_1158_; 
v___x_1157_ = lean_unsigned_to_nat(32u);
v___x_1158_ = lean_nat_dec_lt(v_head_1152_, v___x_1157_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1159_ = lean_unsigned_to_nat(127u);
v___x_1160_ = lean_nat_dec_eq(v_head_1152_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1162_; 
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 1, v_a_1150_);
v___x_1162_ = v___x_1155_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_head_1152_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_a_1150_);
v___x_1162_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
v_a_1149_ = v_tail_1153_;
v_a_1150_ = v___x_1162_;
goto _start;
}
}
else
{
lean_del_object(v___x_1155_);
lean_dec(v_head_1152_);
v_a_1149_ = v_tail_1153_;
goto _start;
}
}
else
{
lean_del_object(v___x_1155_);
lean_dec(v_head_1152_);
v_a_1149_ = v_tail_1153_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue(lean_object* v_v_1168_){
_start:
{
lean_object* v___x_1169_; lean_object* v_v1_1170_; uint8_t v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1169_ = lean_box(0);
v_v1_1170_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_normalizeValue_spec__0(v_v_1168_, v___x_1169_);
v___x_1171_ = 0;
v___x_1172_ = lp_lean_x2dftml_LeanFtml_normalizeValue_go(v_v1_1170_, v___x_1171_);
v___x_1173_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(v___x_1172_);
lean_dec(v___x_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimSpaceTab(lean_object* v_bs_1174_){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1175_ = l_List_reverse___redArg(v_bs_1174_);
v___x_1176_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v___x_1175_);
lean_dec(v___x_1175_);
v___x_1177_ = l_List_reverse___redArg(v___x_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(lean_object* v_k_1178_, lean_object* v_x_1179_){
_start:
{
if (lean_obj_tag(v_x_1179_) == 0)
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_box(0);
return v___x_1180_;
}
else
{
lean_object* v_head_1181_; lean_object* v_tail_1182_; lean_object* v_fst_1183_; uint8_t v___x_1184_; 
v_head_1181_ = lean_ctor_get(v_x_1179_, 0);
v_tail_1182_ = lean_ctor_get(v_x_1179_, 1);
v_fst_1183_ = lean_ctor_get(v_head_1181_, 0);
v___x_1184_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1183_, v_k_1178_);
if (v___x_1184_ == 0)
{
v_x_1179_ = v_tail_1182_;
goto _start;
}
else
{
lean_object* v___x_1186_; 
lean_inc(v_head_1181_);
v___x_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1186_, 0, v_head_1181_);
return v___x_1186_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0___boxed(lean_object* v_k_1187_, lean_object* v_x_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(v_k_1187_, v_x_1188_);
lean_dec(v_x_1188_);
lean_dec(v_k_1187_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_omSetOpt_spec__1(lean_object* v_k_1190_, lean_object* v_v_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_){
_start:
{
if (lean_obj_tag(v_a_1192_) == 0)
{
lean_object* v___x_1194_; 
lean_dec(v_v_1191_);
lean_dec(v_k_1190_);
v___x_1194_ = l_List_reverse___redArg(v_a_1193_);
return v___x_1194_;
}
else
{
lean_object* v_head_1195_; lean_object* v_tail_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1217_; 
v_head_1195_ = lean_ctor_get(v_a_1192_, 0);
v_tail_1196_ = lean_ctor_get(v_a_1192_, 1);
v_isSharedCheck_1217_ = !lean_is_exclusive(v_a_1192_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1198_ = v_a_1192_;
v_isShared_1199_ = v_isSharedCheck_1217_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_tail_1196_);
lean_inc(v_head_1195_);
lean_dec(v_a_1192_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1217_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___y_1201_; lean_object* v_fst_1206_; uint8_t v___x_1207_; 
v_fst_1206_ = lean_ctor_get(v_head_1195_, 0);
v___x_1207_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1206_, v_k_1190_);
if (v___x_1207_ == 0)
{
v___y_1201_ = v_head_1195_;
goto v___jp_1200_;
}
else
{
lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
v_isSharedCheck_1214_ = !lean_is_exclusive(v_head_1195_);
if (v_isSharedCheck_1214_ == 0)
{
lean_object* v_unused_1215_; lean_object* v_unused_1216_; 
v_unused_1215_ = lean_ctor_get(v_head_1195_, 1);
lean_dec(v_unused_1215_);
v_unused_1216_ = lean_ctor_get(v_head_1195_, 0);
lean_dec(v_unused_1216_);
v___x_1209_ = v_head_1195_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_dec(v_head_1195_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
lean_inc(v_v_1191_);
lean_inc(v_k_1190_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v_v_1191_);
lean_ctor_set(v___x_1209_, 0, v_k_1190_);
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_k_1190_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v_v_1191_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
v___y_1201_ = v___x_1212_;
goto v___jp_1200_;
}
}
}
v___jp_1200_:
{
lean_object* v___x_1203_; 
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 1, v_a_1193_);
lean_ctor_set(v___x_1198_, 0, v___y_1201_);
v___x_1203_ = v___x_1198_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v___y_1201_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v_a_1193_);
v___x_1203_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
v_a_1192_ = v_tail_1196_;
v_a_1193_ = v___x_1203_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omSetOpt(lean_object* v_m_1218_, lean_object* v_k_1219_, lean_object* v_v_1220_){
_start:
{
lean_object* v___x_1221_; 
v___x_1221_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(v_k_1219_, v_m_1218_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v_k_1219_);
lean_ctor_set(v___x_1222_, 1, v_v_1220_);
v___x_1223_ = lean_box(0);
v___x_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1222_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
v___x_1225_ = l_List_appendTR___redArg(v_m_1218_, v___x_1224_);
return v___x_1225_;
}
else
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
lean_dec_ref_known(v___x_1221_, 1);
v___x_1226_ = lean_box(0);
v___x_1227_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_omSetOpt_spec__1(v_k_1219_, v_v_1220_, v_m_1218_, v___x_1226_);
return v___x_1227_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesLe(lean_object* v_x_1228_, lean_object* v_x_1229_){
_start:
{
if (lean_obj_tag(v_x_1228_) == 0)
{
uint8_t v___x_1230_; 
v___x_1230_ = 1;
return v___x_1230_;
}
else
{
if (lean_obj_tag(v_x_1229_) == 0)
{
uint8_t v___x_1231_; 
v___x_1231_ = 0;
return v___x_1231_;
}
else
{
lean_object* v_head_1232_; lean_object* v_tail_1233_; lean_object* v_head_1234_; lean_object* v_tail_1235_; uint8_t v___x_1236_; 
v_head_1232_ = lean_ctor_get(v_x_1228_, 0);
v_tail_1233_ = lean_ctor_get(v_x_1228_, 1);
v_head_1234_ = lean_ctor_get(v_x_1229_, 0);
v_tail_1235_ = lean_ctor_get(v_x_1229_, 1);
v___x_1236_ = lean_nat_dec_lt(v_head_1232_, v_head_1234_);
if (v___x_1236_ == 0)
{
uint8_t v___x_1237_; 
v___x_1237_ = lean_nat_dec_lt(v_head_1234_, v_head_1232_);
if (v___x_1237_ == 0)
{
v_x_1228_ = v_tail_1233_;
v_x_1229_ = v_tail_1235_;
goto _start;
}
else
{
return v___x_1236_;
}
}
else
{
return v___x_1236_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesLe___boxed(lean_object* v_x_1239_, lean_object* v_x_1240_){
_start:
{
uint8_t v_res_1241_; lean_object* v_r_1242_; 
v_res_1241_ = lp_lean_x2dftml_LeanFtml_bytesLe(v_x_1239_, v_x_1240_);
lean_dec(v_x_1240_);
lean_dec(v_x_1239_);
v_r_1242_ = lean_box(v_res_1241_);
return v_r_1242_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertArg(lean_object* v_kv_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
lean_object* v___x_1245_; 
v___x_1245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1245_, 0, v_kv_1243_);
lean_ctor_set(v___x_1245_, 1, v_x_1244_);
return v___x_1245_;
}
else
{
lean_object* v_head_1246_; lean_object* v_tail_1247_; lean_object* v_fst_1248_; lean_object* v_fst_1249_; uint8_t v___x_1250_; 
v_head_1246_ = lean_ctor_get(v_x_1244_, 0);
lean_inc(v_head_1246_);
v_tail_1247_ = lean_ctor_get(v_x_1244_, 1);
v_fst_1248_ = lean_ctor_get(v_kv_1243_, 0);
v_fst_1249_ = lean_ctor_get(v_head_1246_, 0);
v___x_1250_ = lp_lean_x2dftml_LeanFtml_bytesLe(v_fst_1248_, v_fst_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1258_; 
lean_inc(v_tail_1247_);
v_isSharedCheck_1258_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1258_ == 0)
{
lean_object* v_unused_1259_; lean_object* v_unused_1260_; 
v_unused_1259_ = lean_ctor_get(v_x_1244_, 1);
lean_dec(v_unused_1259_);
v_unused_1260_ = lean_ctor_get(v_x_1244_, 0);
lean_dec(v_unused_1260_);
v___x_1252_ = v_x_1244_;
v_isShared_1253_ = v_isSharedCheck_1258_;
goto v_resetjp_1251_;
}
else
{
lean_dec(v_x_1244_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1258_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v___x_1256_; 
v___x_1254_ = lp_lean_x2dftml_LeanFtml_insertArg(v_kv_1243_, v_tail_1247_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 1, v___x_1254_);
v___x_1256_ = v___x_1252_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_head_1246_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v___x_1254_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
else
{
lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1267_; 
v_isSharedCheck_1267_ = !lean_is_exclusive(v_head_1246_);
if (v_isSharedCheck_1267_ == 0)
{
lean_object* v_unused_1268_; lean_object* v_unused_1269_; 
v_unused_1268_ = lean_ctor_get(v_head_1246_, 1);
lean_dec(v_unused_1268_);
v_unused_1269_ = lean_ctor_get(v_head_1246_, 0);
lean_dec(v_unused_1269_);
v___x_1262_ = v_head_1246_;
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
else
{
lean_dec(v_head_1246_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
lean_ctor_set_tag(v___x_1262_, 1);
lean_ctor_set(v___x_1262_, 1, v_x_1244_);
lean_ctor_set(v___x_1262_, 0, v_kv_1243_);
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_kv_1243_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_x_1244_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0(lean_object* v_built_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_){
_start:
{
if (lean_obj_tag(v_a_1271_) == 0)
{
lean_object* v___x_1273_; 
v___x_1273_ = lean_array_to_list(v_a_1272_);
return v___x_1273_;
}
else
{
lean_object* v_head_1274_; lean_object* v_tail_1275_; lean_object* v___x_1276_; 
v_head_1274_ = lean_ctor_get(v_a_1271_, 0);
v_tail_1275_ = lean_ctor_get(v_a_1271_, 1);
v___x_1276_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(v_head_1274_, v_built_1270_);
if (lean_obj_tag(v___x_1276_) == 0)
{
v_a_1271_ = v_tail_1275_;
goto _start;
}
else
{
lean_object* v_val_1278_; lean_object* v___x_1279_; 
v_val_1278_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_val_1278_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1279_ = lean_array_push(v_a_1272_, v_val_1278_);
v_a_1271_ = v_tail_1275_;
v_a_1272_ = v___x_1279_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0___boxed(lean_object* v_built_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0(v_built_1281_, v_a_1282_, v_a_1283_);
lean_dec(v_a_1282_);
lean_dec(v_built_1281_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divArgsOrder_spec__1(lean_object* v_a_1285_, lean_object* v_a_1286_){
_start:
{
if (lean_obj_tag(v_a_1285_) == 0)
{
lean_object* v___x_1287_; 
v___x_1287_ = l_List_reverse___redArg(v_a_1286_);
return v___x_1287_;
}
else
{
lean_object* v_head_1288_; lean_object* v_tail_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1301_; 
v_head_1288_ = lean_ctor_get(v_a_1285_, 0);
v_tail_1289_ = lean_ctor_get(v_a_1285_, 1);
v_isSharedCheck_1301_ = !lean_is_exclusive(v_a_1285_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1291_ = v_a_1285_;
v_isShared_1292_ = v_isSharedCheck_1301_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_tail_1289_);
lean_inc(v_head_1288_);
lean_dec(v_a_1285_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1301_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v_fst_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v_fst_1293_ = lean_ctor_get(v_head_1288_, 0);
v___x_1294_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11);
v___x_1295_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1294_, v_fst_1293_);
if (v___x_1295_ == 0)
{
lean_del_object(v___x_1291_);
lean_dec(v_head_1288_);
v_a_1285_ = v_tail_1289_;
goto _start;
}
else
{
lean_object* v___x_1298_; 
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 1, v_a_1286_);
v___x_1298_ = v___x_1291_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_head_1288_);
lean_ctor_set(v_reuseFailAlloc_1300_, 1, v_a_1286_);
v___x_1298_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
v_a_1285_ = v_tail_1289_;
v_a_1286_ = v___x_1298_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1302_ = lean_box(0);
v___x_1303_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9);
v___x_1304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v___x_1302_);
return v___x_1304_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1(void){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1305_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0);
v___x_1306_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7);
v___x_1307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set(v___x_1307_, 1, v___x_1305_);
return v___x_1307_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1308_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1);
v___x_1309_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5);
v___x_1310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set(v___x_1310_, 1, v___x_1308_);
return v___x_1310_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3(void){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1311_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2);
v___x_1312_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_1313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___x_1311_);
return v___x_1313_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1314_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3);
v___x_1315_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1);
v___x_1316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v___x_1314_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder(lean_object* v_built_1319_){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v_ranked_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4);
v___x_1322_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__5));
v_ranked_1323_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0(v_built_1319_, v___x_1321_, v___x_1322_);
v___x_1324_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divArgsOrder_spec__1(v_built_1319_, v___x_1320_);
v___x_1325_ = l_List_appendTR___redArg(v_ranked_1323_, v___x_1324_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divArgs_spec__1(lean_object* v_a_1326_, lean_object* v_a_1327_){
_start:
{
if (lean_obj_tag(v_a_1326_) == 0)
{
lean_object* v___x_1328_; 
v___x_1328_ = l_List_reverse___redArg(v_a_1327_);
return v___x_1328_;
}
else
{
lean_object* v_head_1329_; lean_object* v_tail_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1348_; 
v_head_1329_ = lean_ctor_get(v_a_1326_, 0);
v_tail_1330_ = lean_ctor_get(v_a_1326_, 1);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_a_1326_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1332_ = v_a_1326_;
v_isShared_1333_ = v_isSharedCheck_1348_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_tail_1330_);
lean_inc(v_head_1329_);
lean_dec(v_a_1326_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1348_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v_fst_1334_; lean_object* v_snd_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1347_; 
v_fst_1334_ = lean_ctor_get(v_head_1329_, 0);
v_snd_1335_ = lean_ctor_get(v_head_1329_, 1);
v_isSharedCheck_1347_ = !lean_is_exclusive(v_head_1329_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1337_ = v_head_1329_;
v_isShared_1338_ = v_isSharedCheck_1347_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_snd_1335_);
lean_inc(v_fst_1334_);
lean_dec(v_head_1329_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1347_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1339_; lean_object* v___x_1341_; 
v___x_1339_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_fst_1334_);
if (v_isShared_1338_ == 0)
{
lean_ctor_set(v___x_1337_, 0, v___x_1339_);
v___x_1341_ = v___x_1337_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1339_);
lean_ctor_set(v_reuseFailAlloc_1346_, 1, v_snd_1335_);
v___x_1341_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
lean_object* v___x_1343_; 
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 1, v_a_1327_);
lean_ctor_set(v___x_1332_, 0, v___x_1341_);
v___x_1343_ = v___x_1332_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1341_);
lean_ctor_set(v_reuseFailAlloc_1345_, 1, v_a_1327_);
v___x_1343_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
v_a_1326_ = v_tail_1330_;
v_a_1327_ = v___x_1343_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_divArgs_spec__0(lean_object* v_x_1349_, lean_object* v_x_1350_){
_start:
{
if (lean_obj_tag(v_x_1350_) == 0)
{
return v_x_1349_;
}
else
{
lean_object* v_head_1351_; lean_object* v_tail_1352_; lean_object* v_fst_1353_; lean_object* v_snd_1354_; lean_object* v___x_1360_; uint8_t v___x_1361_; 
v_head_1351_ = lean_ctor_get(v_x_1350_, 0);
lean_inc(v_head_1351_);
v_tail_1352_ = lean_ctor_get(v_x_1350_, 1);
lean_inc(v_tail_1352_);
lean_dec_ref_known(v_x_1350_, 2);
v_fst_1353_ = lean_ctor_get(v_head_1351_, 0);
lean_inc(v_fst_1353_);
v_snd_1354_ = lean_ctor_get(v_head_1351_, 1);
lean_inc(v_snd_1354_);
lean_dec(v_head_1351_);
v___x_1360_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1);
v___x_1361_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1353_, v___x_1360_);
if (v___x_1361_ == 0)
{
lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1362_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_1363_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1353_, v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; uint8_t v___x_1365_; 
v___x_1364_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5);
v___x_1365_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1353_, v___x_1364_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7);
v___x_1367_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1353_, v___x_1366_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; uint8_t v___x_1369_; 
v___x_1368_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9);
v___x_1369_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1353_, v___x_1368_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11);
v___x_1371_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1370_, v_fst_1353_);
if (v___x_1371_ == 0)
{
lean_dec(v_snd_1354_);
lean_dec(v_fst_1353_);
v_x_1350_ = v_tail_1352_;
goto _start;
}
else
{
lean_object* v_lk_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v_lk_1373_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_fst_1353_);
v___x_1374_ = lp_lean_x2dftml_LeanFtml_normalizeValue(v_snd_1354_);
v___x_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
v___x_1376_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1349_, v_lk_1373_, v___x_1375_);
v_x_1349_ = v___x_1376_;
v_x_1350_ = v_tail_1352_;
goto _start;
}
}
else
{
goto v___jp_1355_;
}
}
else
{
goto v___jp_1355_;
}
}
else
{
goto v___jp_1355_;
}
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1378_ = lp_lean_x2dftml_LeanFtml_normalizeValue(v_snd_1354_);
v___x_1379_ = lp_lean_x2dftml_LeanFtml_rtrimSpaceTab(v___x_1378_);
v___x_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
v___x_1381_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1349_, v_fst_1353_, v___x_1380_);
v_x_1349_ = v___x_1381_;
v_x_1350_ = v_tail_1352_;
goto _start;
}
}
else
{
lean_object* v___x_1383_; lean_object* v_val_1384_; uint8_t v___x_1385_; 
v___x_1383_ = lp_lean_x2dftml_LeanFtml_isolateId(v_snd_1354_);
v_val_1384_ = lean_ctor_get(v___x_1383_, 0);
v___x_1385_ = l_List_isEmpty___redArg(v_val_1384_);
if (v___x_1385_ == 0)
{
lean_object* v___x_1386_; 
v___x_1386_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1349_, v_fst_1353_, v___x_1383_);
v_x_1349_ = v___x_1386_;
v_x_1350_ = v_tail_1352_;
goto _start;
}
else
{
lean_dec(v___x_1383_);
lean_dec(v_fst_1353_);
v_x_1350_ = v_tail_1352_;
goto _start;
}
}
v___jp_1355_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1356_ = lp_lean_x2dftml_LeanFtml_normalizeValue(v_snd_1354_);
v___x_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
v___x_1358_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1349_, v_fst_1353_, v___x_1357_);
v_x_1349_ = v___x_1358_;
v_x_1350_ = v_tail_1352_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divArgs(lean_object* v_attr_1389_){
_start:
{
lean_object* v___x_1390_; lean_object* v_built_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1390_ = lean_box(0);
v_built_1391_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_divArgs_spec__0(v___x_1390_, v_attr_1389_);
v___x_1392_ = lp_lean_x2dftml_LeanFtml_divArgsOrder(v_built_1391_);
v___x_1393_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divArgs_spec__1(v___x_1392_, v___x_1390_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_collapseBlankRuns_spec__1(lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
if (lean_obj_tag(v_a_1394_) == 0)
{
lean_object* v___x_1396_; 
v___x_1396_ = l_List_reverse___redArg(v_a_1395_);
return v___x_1396_;
}
else
{
lean_object* v_head_1397_; lean_object* v_tail_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1409_; 
v_head_1397_ = lean_ctor_get(v_a_1394_, 0);
v_tail_1398_ = lean_ctor_get(v_a_1394_, 1);
v_isSharedCheck_1409_ = !lean_is_exclusive(v_a_1394_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1400_ = v_a_1394_;
v_isShared_1401_ = v_isSharedCheck_1409_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_tail_1398_);
lean_inc(v_head_1397_);
lean_dec(v_a_1394_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1409_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1402_ = lean_unsigned_to_nat(10u);
v___x_1403_ = lean_nat_dec_eq(v_head_1397_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_del_object(v___x_1400_);
lean_dec(v_head_1397_);
v_a_1394_ = v_tail_1398_;
goto _start;
}
else
{
lean_object* v___x_1406_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 1, v_a_1395_);
v___x_1406_ = v___x_1400_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_head_1397_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v_a_1395_);
v___x_1406_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
v_a_1394_ = v_tail_1398_;
v_a_1395_ = v___x_1406_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0(lean_object* v_head_1410_, lean_object* v_l_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
if (lean_obj_tag(v_a_1412_) == 0)
{
lean_dec_ref(v_a_1413_);
lean_inc(v_l_1411_);
return v_l_1411_;
}
else
{
lean_object* v_head_1414_; lean_object* v_tail_1415_; uint8_t v___y_1417_; lean_object* v___x_1421_; uint8_t v___x_1422_; uint8_t v___x_1423_; 
v_head_1414_ = lean_ctor_get(v_a_1412_, 0);
lean_inc(v_head_1414_);
v_tail_1415_ = lean_ctor_get(v_a_1412_, 1);
lean_inc(v_tail_1415_);
lean_dec_ref_known(v_a_1412_, 2);
v___x_1421_ = lean_unsigned_to_nat(10u);
v___x_1422_ = lean_nat_dec_eq(v_head_1410_, v___x_1421_);
v___x_1423_ = lean_nat_dec_eq(v_head_1414_, v___x_1421_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; uint8_t v___x_1425_; 
v___x_1424_ = lean_unsigned_to_nat(32u);
v___x_1425_ = lean_nat_dec_eq(v_head_1414_, v___x_1424_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1426_ = lean_unsigned_to_nat(9u);
v___x_1427_ = lean_nat_dec_eq(v_head_1414_, v___x_1426_);
v___y_1417_ = v___x_1427_;
goto v___jp_1416_;
}
else
{
v___y_1417_ = v___x_1422_;
goto v___jp_1416_;
}
}
else
{
v___y_1417_ = v___x_1422_;
goto v___jp_1416_;
}
v___jp_1416_:
{
if (v___y_1417_ == 0)
{
lean_object* v___x_1418_; 
lean_dec(v_tail_1415_);
lean_dec(v_head_1414_);
v___x_1418_ = lean_array_to_list(v_a_1413_);
return v___x_1418_;
}
else
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_array_push(v_a_1413_, v_head_1414_);
v_a_1412_ = v_tail_1415_;
v_a_1413_ = v___x_1419_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0___boxed(lean_object* v_head_1428_, lean_object* v_l_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0(v_head_1428_, v_l_1429_, v_a_1430_, v_a_1431_);
lean_dec(v_l_1429_);
lean_dec(v_head_1428_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseBlankRuns(lean_object* v_s_1433_, lean_object* v_x_1434_){
_start:
{
lean_object* v_zero_1435_; uint8_t v_isZero_1436_; 
v_zero_1435_ = lean_unsigned_to_nat(0u);
v_isZero_1436_ = lean_nat_dec_eq(v_x_1434_, v_zero_1435_);
if (v_isZero_1436_ == 1)
{
lean_dec(v_x_1434_);
return v_s_1433_;
}
else
{
if (lean_obj_tag(v_s_1433_) == 0)
{
lean_dec(v_x_1434_);
return v_s_1433_;
}
else
{
lean_object* v_head_1437_; lean_object* v_tail_1438_; lean_object* v_one_1439_; lean_object* v_n_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; 
v_head_1437_ = lean_ctor_get(v_s_1433_, 0);
v_tail_1438_ = lean_ctor_get(v_s_1433_, 1);
v_one_1439_ = lean_unsigned_to_nat(1u);
v_n_1440_ = lean_nat_sub(v_x_1434_, v_one_1439_);
lean_dec(v_x_1434_);
v___x_1441_ = lean_unsigned_to_nat(10u);
v___x_1442_ = lean_nat_dec_eq(v_head_1437_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1450_; 
lean_inc(v_tail_1438_);
lean_inc(v_head_1437_);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_s_1433_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; lean_object* v_unused_1452_; 
v_unused_1451_ = lean_ctor_get(v_s_1433_, 1);
lean_dec(v_unused_1451_);
v_unused_1452_ = lean_ctor_get(v_s_1433_, 0);
lean_dec(v_unused_1452_);
v___x_1444_ = v_s_1433_;
v_isShared_1445_ = v_isSharedCheck_1450_;
goto v_resetjp_1443_;
}
else
{
lean_dec(v_s_1433_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1450_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1446_; lean_object* v___x_1448_; 
v___x_1446_ = lp_lean_x2dftml_LeanFtml_collapseBlankRuns(v_tail_1438_, v_n_1440_);
if (v_isShared_1445_ == 0)
{
lean_ctor_set(v___x_1444_, 1, v___x_1446_);
v___x_1448_ = v___x_1444_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_head_1437_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v___x_1446_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
else
{
lean_object* v___x_1453_; lean_object* v_run_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; uint8_t v___x_1459_; 
v___x_1453_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc_ref(v_s_1433_);
v_run_1454_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0(v_head_1437_, v_s_1433_, v_s_1433_, v___x_1453_);
v___x_1455_ = lean_unsigned_to_nat(2u);
v___x_1456_ = lean_box(0);
lean_inc(v_run_1454_);
v___x_1457_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_collapseBlankRuns_spec__1(v_run_1454_, v___x_1456_);
v___x_1458_ = l_List_lengthTR___redArg(v___x_1457_);
lean_dec(v___x_1457_);
v___x_1459_ = lean_nat_dec_le(v___x_1455_, v___x_1458_);
lean_dec(v___x_1458_);
if (v___x_1459_ == 0)
{
lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1467_; 
lean_inc(v_tail_1438_);
lean_inc(v_head_1437_);
lean_dec(v_run_1454_);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_s_1433_);
if (v_isSharedCheck_1467_ == 0)
{
lean_object* v_unused_1468_; lean_object* v_unused_1469_; 
v_unused_1468_ = lean_ctor_get(v_s_1433_, 1);
lean_dec(v_unused_1468_);
v_unused_1469_ = lean_ctor_get(v_s_1433_, 0);
lean_dec(v_unused_1469_);
v___x_1461_ = v_s_1433_;
v_isShared_1462_ = v_isSharedCheck_1467_;
goto v_resetjp_1460_;
}
else
{
lean_dec(v_s_1433_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1467_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___x_1463_ = lp_lean_x2dftml_LeanFtml_collapseBlankRuns(v_tail_1438_, v_n_1440_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 1, v___x_1463_);
v___x_1465_ = v___x_1461_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_head_1437_);
lean_ctor_set(v_reuseFailAlloc_1466_, 1, v___x_1463_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
else
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = l_List_lengthTR___redArg(v_run_1454_);
lean_dec(v_run_1454_);
v___x_1471_ = l_List_drop___redArg(v___x_1470_, v_s_1433_);
lean_dec_ref_known(v_s_1433_, 2);
v_s_1433_ = v___x_1471_;
v_x_1434_ = v_n_1440_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divMatch_spec__0(lean_object* v_fst_1473_, lean_object* v_fst_1474_, lean_object* v_fst_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
if (lean_obj_tag(v_a_1476_) == 0)
{
lean_object* v___x_1478_; 
lean_dec(v_fst_1475_);
lean_dec(v_fst_1474_);
lean_dec(v_fst_1473_);
v___x_1478_ = l_List_reverse___redArg(v_a_1477_);
return v___x_1478_;
}
else
{
lean_object* v_head_1479_; lean_object* v_tail_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1491_; 
v_head_1479_ = lean_ctor_get(v_a_1476_, 0);
v_tail_1480_ = lean_ctor_get(v_a_1476_, 1);
v_isSharedCheck_1491_ = !lean_is_exclusive(v_a_1476_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1482_ = v_a_1476_;
v_isShared_1483_ = v_isSharedCheck_1491_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_tail_1480_);
lean_inc(v_head_1479_);
lean_dec(v_a_1476_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1491_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1488_; 
lean_inc(v_fst_1473_);
v___x_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1484_, 0, v_fst_1473_);
lean_ctor_set(v___x_1484_, 1, v_head_1479_);
lean_inc(v_fst_1474_);
v___x_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1485_, 0, v_fst_1474_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
lean_inc(v_fst_1475_);
v___x_1486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1486_, 0, v_fst_1475_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 1, v_a_1477_);
lean_ctor_set(v___x_1482_, 0, v___x_1486_);
v___x_1488_ = v___x_1482_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1486_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v_a_1477_);
v___x_1488_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
v_a_1476_ = v_tail_1480_;
v_a_1477_ = v___x_1488_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1(lean_object* v_n_1494_, lean_object* v_fst_1495_, lean_object* v_fst_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_){
_start:
{
if (lean_obj_tag(v_a_1497_) == 0)
{
lean_object* v___x_1499_; 
lean_dec(v_fst_1496_);
lean_dec(v_fst_1495_);
v___x_1499_ = lean_array_to_list(v_a_1498_);
return v___x_1499_;
}
else
{
lean_object* v_head_1500_; lean_object* v_tail_1501_; lean_object* v___y_1503_; lean_object* v_fst_1506_; lean_object* v_snd_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v_sp_1510_; lean_object* v___x_1511_; 
v_head_1500_ = lean_ctor_get(v_a_1497_, 0);
lean_inc(v_head_1500_);
v_tail_1501_ = lean_ctor_get(v_a_1497_, 1);
lean_inc(v_tail_1501_);
lean_dec_ref_known(v_a_1497_, 2);
v_fst_1506_ = lean_ctor_get(v_head_1500_, 0);
lean_inc(v_fst_1506_);
v_snd_1507_ = lean_ctor_get(v_head_1500_, 1);
lean_inc_n(v_snd_1507_, 2);
lean_dec(v_head_1500_);
v___x_1508_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_1509_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_snd_1507_, v_snd_1507_, v___x_1508_);
v_sp_1510_ = l_List_lengthTR___redArg(v___x_1509_);
lean_dec(v___x_1509_);
v___x_1511_ = l_List_drop___redArg(v_sp_1510_, v_snd_1507_);
lean_dec(v_snd_1507_);
if (lean_obj_tag(v___x_1511_) == 1)
{
lean_object* v_head_1512_; lean_object* v_tail_1513_; lean_object* v___x_1514_; uint8_t v___x_1515_; 
v_head_1512_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_head_1512_);
v_tail_1513_ = lean_ctor_get(v___x_1511_, 1);
lean_inc(v_tail_1513_);
lean_dec_ref_known(v___x_1511_, 2);
v___x_1514_ = lean_unsigned_to_nat(10u);
v___x_1515_ = lean_nat_dec_eq(v_head_1512_, v___x_1514_);
lean_dec(v_head_1512_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; 
lean_dec(v_tail_1513_);
lean_dec(v_fst_1506_);
v___x_1516_ = lean_box(0);
v___y_1503_ = v___x_1516_;
goto v___jp_1502_;
}
else
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1517_ = lp_lean_x2dftml_LeanFtml_divBody(v_tail_1513_, v_n_1494_);
v___x_1518_ = lean_box(0);
lean_inc(v_fst_1496_);
lean_inc(v_fst_1495_);
v___x_1519_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divMatch_spec__0(v_fst_1506_, v_fst_1495_, v_fst_1496_, v___x_1517_, v___x_1518_);
v___y_1503_ = v___x_1519_;
goto v___jp_1502_;
}
}
else
{
lean_object* v___x_1520_; 
lean_dec(v___x_1511_);
lean_dec(v_fst_1506_);
v___x_1520_ = lean_box(0);
v___y_1503_ = v___x_1520_;
goto v___jp_1502_;
}
v___jp_1502_:
{
lean_object* v___x_1504_; 
v___x_1504_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1498_, v___y_1503_);
v_a_1497_ = v_tail_1501_;
v_a_1498_ = v___x_1504_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1(lean_object* v_fst_1521_, lean_object* v_fst_1522_, lean_object* v_n_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
if (lean_obj_tag(v_a_1524_) == 0)
{
lean_object* v___x_1526_; 
lean_dec(v_fst_1522_);
lean_dec(v_fst_1521_);
v___x_1526_ = lean_array_to_list(v_a_1525_);
return v___x_1526_;
}
else
{
lean_object* v_head_1527_; lean_object* v_tail_1528_; lean_object* v___y_1530_; lean_object* v_fst_1533_; lean_object* v_snd_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v_sp_1537_; lean_object* v___x_1538_; 
v_head_1527_ = lean_ctor_get(v_a_1524_, 0);
lean_inc(v_head_1527_);
v_tail_1528_ = lean_ctor_get(v_a_1524_, 1);
lean_inc(v_tail_1528_);
lean_dec_ref_known(v_a_1524_, 2);
v_fst_1533_ = lean_ctor_get(v_head_1527_, 0);
lean_inc(v_fst_1533_);
v_snd_1534_ = lean_ctor_get(v_head_1527_, 1);
lean_inc_n(v_snd_1534_, 2);
lean_dec(v_head_1527_);
v___x_1535_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_1536_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_snd_1534_, v_snd_1534_, v___x_1535_);
v_sp_1537_ = l_List_lengthTR___redArg(v___x_1536_);
lean_dec(v___x_1536_);
v___x_1538_ = l_List_drop___redArg(v_sp_1537_, v_snd_1534_);
lean_dec(v_snd_1534_);
if (lean_obj_tag(v___x_1538_) == 1)
{
lean_object* v_head_1539_; lean_object* v_tail_1540_; lean_object* v___x_1541_; uint8_t v___x_1542_; 
v_head_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_head_1539_);
v_tail_1540_ = lean_ctor_get(v___x_1538_, 1);
lean_inc(v_tail_1540_);
lean_dec_ref_known(v___x_1538_, 2);
v___x_1541_ = lean_unsigned_to_nat(10u);
v___x_1542_ = lean_nat_dec_eq(v_head_1539_, v___x_1541_);
lean_dec(v_head_1539_);
if (v___x_1542_ == 0)
{
lean_object* v___x_1543_; 
lean_dec(v_tail_1540_);
lean_dec(v_fst_1533_);
v___x_1543_ = lean_box(0);
v___y_1530_ = v___x_1543_;
goto v___jp_1529_;
}
else
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1544_ = lp_lean_x2dftml_LeanFtml_divBody(v_tail_1540_, v_n_1523_);
v___x_1545_ = lean_box(0);
lean_inc(v_fst_1522_);
lean_inc(v_fst_1521_);
v___x_1546_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divMatch_spec__0(v_fst_1533_, v_fst_1521_, v_fst_1522_, v___x_1544_, v___x_1545_);
v___y_1530_ = v___x_1546_;
goto v___jp_1529_;
}
}
else
{
lean_object* v___x_1547_; 
lean_dec(v___x_1538_);
lean_dec(v_fst_1533_);
v___x_1547_ = lean_box(0);
v___y_1530_ = v___x_1547_;
goto v___jp_1529_;
}
v___jp_1529_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1525_, v___y_1530_);
v___x_1532_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1(v_n_1523_, v_fst_1521_, v_fst_1522_, v_tail_1528_, v___x_1531_);
return v___x_1532_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2(lean_object* v_fst_1551_, lean_object* v_n_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_){
_start:
{
if (lean_obj_tag(v_a_1553_) == 0)
{
lean_object* v___x_1555_; 
lean_dec(v_fst_1551_);
v___x_1555_ = lean_array_to_list(v_a_1554_);
return v___x_1555_;
}
else
{
lean_object* v_head_1556_; lean_object* v_tail_1557_; lean_object* v_fst_1559_; lean_object* v_snd_1560_; 
v_head_1556_ = lean_ctor_get(v_a_1553_, 0);
lean_inc(v_head_1556_);
v_tail_1557_ = lean_ctor_get(v_a_1553_, 1);
lean_inc(v_tail_1557_);
lean_dec_ref_known(v_a_1553_, 2);
if (lean_obj_tag(v_head_1556_) == 1)
{
lean_object* v_head_1568_; lean_object* v_tail_1569_; lean_object* v___x_1570_; uint8_t v___x_1571_; 
v_head_1568_ = lean_ctor_get(v_head_1556_, 0);
v_tail_1569_ = lean_ctor_get(v_head_1556_, 1);
v___x_1570_ = lean_unsigned_to_nat(95u);
v___x_1571_ = lean_nat_dec_eq(v_head_1568_, v___x_1570_);
if (v___x_1571_ == 0)
{
goto v___jp_1566_;
}
else
{
lean_object* v___x_1572_; 
lean_inc(v_tail_1569_);
lean_dec_ref_known(v_head_1556_, 2);
v___x_1572_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2___closed__0));
v_fst_1559_ = v___x_1572_;
v_snd_1560_ = v_tail_1569_;
goto v___jp_1558_;
}
}
else
{
goto v___jp_1566_;
}
v___jp_1558_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1561_ = lp_lean_x2dftml_LeanFtml_attrGroupCands(v_snd_1560_);
v___x_1562_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0));
lean_inc(v_fst_1551_);
lean_inc(v_fst_1559_);
v___x_1563_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1(v_fst_1559_, v_fst_1551_, v_n_1552_, v___x_1561_, v___x_1562_);
v___x_1564_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1554_, v___x_1563_);
v_a_1553_ = v_tail_1557_;
v_a_1554_ = v___x_1564_;
goto _start;
}
v___jp_1566_:
{
lean_object* v___x_1567_; 
v___x_1567_ = lean_box(0);
v_fst_1559_ = v___x_1567_;
v_snd_1560_ = v_head_1556_;
goto v___jp_1558_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__1));
v___x_1575_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3(lean_object* v_n_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_){
_start:
{
if (lean_obj_tag(v_a_1577_) == 0)
{
lean_object* v___x_1579_; 
v___x_1579_ = lean_array_to_list(v_a_1578_);
return v___x_1579_;
}
else
{
lean_object* v_head_1580_; lean_object* v_tail_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1601_; 
v_head_1580_ = lean_ctor_get(v_a_1577_, 0);
v_tail_1581_ = lean_ctor_get(v_a_1577_, 1);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_a_1577_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1583_ = v_a_1577_;
v_isShared_1584_ = v_isSharedCheck_1601_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_tail_1581_);
lean_inc(v_head_1580_);
lean_dec(v_a_1577_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1601_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v_fst_1585_; lean_object* v_snd_1586_; lean_object* v___y_1588_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v_fst_1585_ = lean_ctor_get(v_head_1580_, 0);
lean_inc(v_fst_1585_);
v_snd_1586_ = lean_ctor_get(v_head_1580_, 1);
lean_inc(v_snd_1586_);
lean_dec(v_head_1580_);
v___x_1593_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2);
v___x_1594_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1593_, v_snd_1586_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v___x_1595_; 
lean_del_object(v___x_1583_);
v___x_1595_ = lean_box(0);
v___y_1588_ = v___x_1595_;
goto v___jp_1587_;
}
else
{
lean_object* v_val_1596_; lean_object* v___x_1597_; lean_object* v___x_1599_; 
v_val_1596_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_val_1596_);
lean_dec_ref_known(v___x_1594_, 1);
v___x_1597_ = lean_box(0);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 1, v___x_1597_);
lean_ctor_set(v___x_1583_, 0, v_val_1596_);
v___x_1599_ = v___x_1583_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_val_1596_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v___x_1597_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
v___y_1588_ = v___x_1599_;
goto v___jp_1587_;
}
}
v___jp_1587_:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1589_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0));
v___x_1590_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2(v_fst_1585_, v_n_1576_, v___y_1588_, v___x_1589_);
v___x_1591_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1578_, v___x_1590_);
v_a_1577_ = v_tail_1581_;
v_a_1578_ = v___x_1591_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divMatch(lean_object* v_s_1605_, lean_object* v_x_1606_){
_start:
{
lean_object* v_zero_1607_; uint8_t v_isZero_1608_; 
v_zero_1607_ = lean_unsigned_to_nat(0u);
v_isZero_1608_ = lean_nat_dec_eq(v_x_1606_, v_zero_1607_);
if (v_isZero_1608_ == 1)
{
lean_object* v___x_1609_; 
lean_dec(v_s_1605_);
v___x_1609_ = lean_box(0);
return v___x_1609_;
}
else
{
lean_object* v_one_1610_; lean_object* v_n_1611_; lean_object* v___y_1613_; 
v_one_1610_ = lean_unsigned_to_nat(1u);
v_n_1611_ = lean_nat_sub(v_x_1606_, v_one_1610_);
if (lean_obj_tag(v_s_1605_) == 1)
{
lean_object* v_head_1620_; lean_object* v_tail_1621_; lean_object* v___x_1622_; uint8_t v___x_1623_; 
v_head_1620_ = lean_ctor_get(v_s_1605_, 0);
v_tail_1621_ = lean_ctor_get(v_s_1605_, 1);
v___x_1622_ = lean_unsigned_to_nat(10u);
v___x_1623_ = lean_nat_dec_eq(v_head_1620_, v___x_1622_);
if (v___x_1623_ == 0)
{
goto v___jp_1616_;
}
else
{
lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1633_; 
lean_inc(v_tail_1621_);
v_isSharedCheck_1633_ = !lean_is_exclusive(v_s_1605_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; lean_object* v_unused_1635_; 
v_unused_1634_ = lean_ctor_get(v_s_1605_, 1);
lean_dec(v_unused_1634_);
v_unused_1635_ = lean_ctor_get(v_s_1605_, 0);
lean_dec(v_unused_1635_);
v___x_1625_ = v_s_1605_;
v_isShared_1626_ = v_isSharedCheck_1633_;
goto v_resetjp_1624_;
}
else
{
lean_dec(v_s_1605_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1633_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1631_; 
v___x_1627_ = lean_box(0);
v___x_1628_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divMatch___closed__0));
v___x_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1628_);
lean_ctor_set(v___x_1629_, 1, v_tail_1621_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 1, v___x_1627_);
lean_ctor_set(v___x_1625_, 0, v___x_1629_);
v___x_1631_ = v___x_1625_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1629_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v___x_1627_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
v___y_1613_ = v___x_1631_;
goto v___jp_1612_;
}
}
}
}
else
{
goto v___jp_1616_;
}
v___jp_1612_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0));
v___x_1615_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3(v_n_1611_, v___y_1613_, v___x_1614_);
lean_dec(v_n_1611_);
return v___x_1615_;
}
v___jp_1616_:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1617_ = lean_box(0);
v___x_1618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1617_);
lean_ctor_set(v___x_1618_, 1, v_s_1605_);
v___x_1619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
lean_ctor_set(v___x_1619_, 1, v___x_1617_);
v___y_1613_ = v___x_1619_;
goto v___jp_1612_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divBody___closed__1(void){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divBody___closed__0));
v___x_1638_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBody(lean_object* v_s_1639_, lean_object* v_x_1640_){
_start:
{
lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v_zero_1647_; uint8_t v_isZero_1648_; 
v_zero_1647_ = lean_unsigned_to_nat(0u);
v_isZero_1648_ = lean_nat_dec_eq(v_x_1640_, v_zero_1647_);
if (v_isZero_1648_ == 1)
{
lean_object* v___x_1649_; 
lean_dec(v_s_1639_);
v___x_1649_ = lean_box(0);
return v___x_1649_;
}
else
{
lean_object* v_one_1650_; lean_object* v_n_1651_; lean_object* v___y_1653_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v_one_1650_ = lean_unsigned_to_nat(1u);
v_n_1651_ = lean_nat_sub(v_x_1640_, v_one_1650_);
v___x_1663_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divBody___closed__1, &lp_lean_x2dftml_LeanFtml_divBody___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divBody___closed__1);
lean_inc(v_s_1639_);
v___x_1664_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1663_, v_s_1639_);
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_box(0);
v___y_1653_ = v___x_1665_;
goto v___jp_1652_;
}
else
{
lean_object* v_val_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_val_1666_ = lean_ctor_get(v___x_1664_, 0);
lean_inc_n(v_val_1666_, 2);
lean_dec_ref_known(v___x_1664_, 1);
v___x_1667_ = lean_box(0);
v___x_1668_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_1669_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_val_1666_, v_val_1666_, v___x_1668_);
v___x_1670_ = l_List_lengthTR___redArg(v___x_1669_);
lean_dec(v___x_1669_);
v___x_1671_ = l_List_drop___redArg(v___x_1670_, v_val_1666_);
lean_dec(v_val_1666_);
v___x_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1667_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
lean_ctor_set(v___x_1673_, 1, v___x_1667_);
v___y_1653_ = v___x_1673_;
goto v___jp_1652_;
}
v___jp_1652_:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v_recs_1656_; 
lean_inc_n(v_s_1639_, 2);
v___x_1654_ = lp_lean_x2dftml_LeanFtml_divMatch(v_s_1639_, v_n_1651_);
v___x_1655_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v_recs_1656_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5(v_s_1639_, v_n_1651_, v___x_1654_, v___x_1655_);
if (lean_obj_tag(v_s_1639_) == 0)
{
lean_object* v___x_1657_; 
lean_dec(v_n_1651_);
v___x_1657_ = lean_box(0);
v___y_1642_ = v_recs_1656_;
v___y_1643_ = v___y_1653_;
v___y_1644_ = v___x_1657_;
goto v___jp_1641_;
}
else
{
lean_object* v_head_1658_; lean_object* v_tail_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v_head_1658_ = lean_ctor_get(v_s_1639_, 0);
lean_inc(v_head_1658_);
v_tail_1659_ = lean_ctor_get(v_s_1639_, 1);
lean_inc(v_tail_1659_);
lean_dec_ref_known(v_s_1639_, 2);
v___x_1660_ = lp_lean_x2dftml_LeanFtml_divBody(v_tail_1659_, v_n_1651_);
lean_dec(v_n_1651_);
v___x_1661_ = lean_box(0);
v___x_1662_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(v_head_1658_, v___x_1660_, v___x_1661_);
v___y_1642_ = v_recs_1656_;
v___y_1643_ = v___y_1653_;
v___y_1644_ = v___x_1662_;
goto v___jp_1641_;
}
}
}
v___jp_1641_:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1645_ = l_List_appendTR___redArg(v___y_1643_, v___y_1642_);
v___x_1646_ = l_List_appendTR___redArg(v___x_1645_, v___y_1644_);
return v___x_1646_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6(lean_object* v_n_1674_, lean_object* v_s_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_){
_start:
{
if (lean_obj_tag(v_a_1676_) == 0)
{
lean_object* v___x_1678_; 
lean_dec(v_s_1675_);
v___x_1678_ = lean_array_to_list(v_a_1677_);
return v___x_1678_;
}
else
{
lean_object* v_head_1679_; lean_object* v_snd_1680_; lean_object* v_snd_1681_; lean_object* v_snd_1682_; lean_object* v_tail_1683_; lean_object* v_snd_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v_head_1679_ = lean_ctor_get(v_a_1676_, 0);
v_snd_1680_ = lean_ctor_get(v_head_1679_, 1);
v_snd_1681_ = lean_ctor_get(v_snd_1680_, 1);
v_snd_1682_ = lean_ctor_get(v_snd_1681_, 1);
lean_inc(v_snd_1682_);
v_tail_1683_ = lean_ctor_get(v_a_1676_, 1);
lean_inc(v_tail_1683_);
lean_dec_ref_known(v_a_1676_, 2);
v_snd_1684_ = lean_ctor_get(v_snd_1682_, 1);
lean_inc_n(v_snd_1684_, 2);
lean_dec(v_snd_1682_);
v___x_1685_ = lp_lean_x2dftml_LeanFtml_divBody(v_snd_1684_, v_n_1674_);
v___x_1686_ = lean_box(0);
lean_inc(v_s_1675_);
v___x_1687_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_s_1675_, v_snd_1684_, v___x_1685_, v___x_1686_);
lean_dec(v_snd_1684_);
v___x_1688_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1677_, v___x_1687_);
v_a_1676_ = v_tail_1683_;
v_a_1677_ = v___x_1688_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5(lean_object* v_s_1690_, lean_object* v_n_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_){
_start:
{
if (lean_obj_tag(v_a_1692_) == 0)
{
lean_object* v___x_1694_; 
lean_dec(v_s_1690_);
v___x_1694_ = lean_array_to_list(v_a_1693_);
return v___x_1694_;
}
else
{
lean_object* v_head_1695_; lean_object* v_snd_1696_; lean_object* v_snd_1697_; lean_object* v_snd_1698_; lean_object* v_tail_1699_; lean_object* v_snd_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v_head_1695_ = lean_ctor_get(v_a_1692_, 0);
v_snd_1696_ = lean_ctor_get(v_head_1695_, 1);
v_snd_1697_ = lean_ctor_get(v_snd_1696_, 1);
v_snd_1698_ = lean_ctor_get(v_snd_1697_, 1);
lean_inc(v_snd_1698_);
v_tail_1699_ = lean_ctor_get(v_a_1692_, 1);
lean_inc(v_tail_1699_);
lean_dec_ref_known(v_a_1692_, 2);
v_snd_1700_ = lean_ctor_get(v_snd_1698_, 1);
lean_inc_n(v_snd_1700_, 2);
lean_dec(v_snd_1698_);
v___x_1701_ = lp_lean_x2dftml_LeanFtml_divBody(v_snd_1700_, v_n_1691_);
v___x_1702_ = lean_box(0);
lean_inc(v_s_1690_);
v___x_1703_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_s_1690_, v_snd_1700_, v___x_1701_, v___x_1702_);
lean_dec(v_snd_1700_);
v___x_1704_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1693_, v___x_1703_);
v___x_1705_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6(v_n_1691_, v_s_1690_, v_tail_1699_, v___x_1704_);
return v___x_1705_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5___boxed(lean_object* v_s_1706_, lean_object* v_n_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5(v_s_1706_, v_n_1707_, v_a_1708_, v_a_1709_);
lean_dec(v_n_1707_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6___boxed(lean_object* v_n_1711_, lean_object* v_s_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6(v_n_1711_, v_s_1712_, v_a_1713_, v_a_1714_);
lean_dec(v_n_1711_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___boxed(lean_object* v_n_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3(v_n_1716_, v_a_1717_, v_a_1718_);
lean_dec(v_n_1716_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2___boxed(lean_object* v_fst_1720_, lean_object* v_n_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2(v_fst_1720_, v_n_1721_, v_a_1722_, v_a_1723_);
lean_dec(v_n_1721_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1___boxed(lean_object* v_fst_1725_, lean_object* v_fst_1726_, lean_object* v_n_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1(v_fst_1725_, v_fst_1726_, v_n_1727_, v_a_1728_, v_a_1729_);
lean_dec(v_n_1727_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1___boxed(lean_object* v_n_1731_, lean_object* v_fst_1732_, lean_object* v_fst_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1(v_n_1731_, v_fst_1732_, v_fst_1733_, v_a_1734_, v_a_1735_);
lean_dec(v_n_1731_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divMatch___boxed(lean_object* v_s_1737_, lean_object* v_x_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = lp_lean_x2dftml_LeanFtml_divMatch(v_s_1737_, v_x_1738_);
lean_dec(v_x_1738_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBody___boxed(lean_object* v_s_1740_, lean_object* v_x_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = lp_lean_x2dftml_LeanFtml_divBody(v_s_1740_, v_x_1741_);
lean_dec(v_x_1741_);
return v_res_1742_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(lean_object* v_a_1743_, lean_object* v_x_1744_){
_start:
{
if (lean_obj_tag(v_x_1744_) == 0)
{
uint8_t v___x_1745_; 
v___x_1745_ = 0;
return v___x_1745_;
}
else
{
lean_object* v_head_1746_; lean_object* v_tail_1747_; uint8_t v___x_1748_; 
v_head_1746_ = lean_ctor_get(v_x_1744_, 0);
v_tail_1747_ = lean_ctor_get(v_x_1744_, 1);
v___x_1748_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_a_1743_, v_head_1746_);
if (v___x_1748_ == 0)
{
v_x_1744_ = v_tail_1747_;
goto _start;
}
else
{
return v___x_1748_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0___boxed(lean_object* v_a_1750_, lean_object* v_x_1751_){
_start:
{
uint8_t v_res_1752_; lean_object* v_r_1753_; 
v_res_1752_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v_a_1750_, v_x_1751_);
lean_dec(v_x_1751_);
lean_dec(v_a_1750_);
v_r_1753_ = lean_box(v_res_1752_);
return v_r_1753_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_divAuthoredNonEmpty_spec__1(lean_object* v_x_1754_, lean_object* v_x_1755_){
_start:
{
if (lean_obj_tag(v_x_1755_) == 0)
{
return v_x_1754_;
}
else
{
lean_object* v_head_1756_; lean_object* v_tail_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1787_; 
v_head_1756_ = lean_ctor_get(v_x_1755_, 0);
v_tail_1757_ = lean_ctor_get(v_x_1755_, 1);
v_isSharedCheck_1787_ = !lean_is_exclusive(v_x_1755_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1759_ = v_x_1755_;
v_isShared_1760_ = v_isSharedCheck_1787_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_tail_1757_);
lean_inc(v_head_1756_);
lean_dec(v_x_1755_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1787_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v_fst_1761_; lean_object* v_snd_1762_; lean_object* v_val_1764_; lean_object* v___x_1775_; uint8_t v___x_1776_; 
v_fst_1761_ = lean_ctor_get(v_head_1756_, 0);
lean_inc(v_fst_1761_);
v_snd_1762_ = lean_ctor_get(v_head_1756_, 1);
lean_inc(v_snd_1762_);
lean_dec(v_head_1756_);
v___x_1775_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_1776_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1761_, v___x_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; uint8_t v___x_1778_; 
v___x_1777_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5);
v___x_1778_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1761_, v___x_1777_);
if (v___x_1778_ == 0)
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7);
v___x_1780_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1761_, v___x_1779_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; uint8_t v___x_1782_; 
v___x_1781_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9);
v___x_1782_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1761_, v___x_1781_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1783_; uint8_t v___x_1784_; 
v___x_1783_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11);
v___x_1784_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1783_, v_fst_1761_);
if (v___x_1784_ == 0)
{
lean_dec(v_snd_1762_);
lean_dec(v_fst_1761_);
lean_del_object(v___x_1759_);
v_x_1755_ = v_tail_1757_;
goto _start;
}
else
{
lean_object* v___x_1786_; 
v___x_1786_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_fst_1761_);
v_val_1764_ = v___x_1786_;
goto v___jp_1763_;
}
}
else
{
v_val_1764_ = v_fst_1761_;
goto v___jp_1763_;
}
}
else
{
v_val_1764_ = v_fst_1761_;
goto v___jp_1763_;
}
}
else
{
v_val_1764_ = v_fst_1761_;
goto v___jp_1763_;
}
}
else
{
v_val_1764_ = v_fst_1761_;
goto v___jp_1763_;
}
v___jp_1763_:
{
uint8_t v___x_1765_; 
v___x_1765_ = l_List_isEmpty___redArg(v_snd_1762_);
lean_dec(v_snd_1762_);
if (v___x_1765_ == 0)
{
uint8_t v___x_1766_; 
v___x_1766_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v_val_1764_, v_x_1754_);
if (v___x_1766_ == 0)
{
lean_object* v___x_1767_; lean_object* v___x_1769_; 
v___x_1767_ = lean_box(0);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 1, v___x_1767_);
lean_ctor_set(v___x_1759_, 0, v_val_1764_);
v___x_1769_ = v___x_1759_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_val_1764_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v___x_1767_);
v___x_1769_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
lean_object* v___x_1770_; 
v___x_1770_ = l_List_appendTR___redArg(v_x_1754_, v___x_1769_);
v_x_1754_ = v___x_1770_;
v_x_1755_ = v_tail_1757_;
goto _start;
}
}
else
{
lean_dec(v_val_1764_);
lean_del_object(v___x_1759_);
v_x_1755_ = v_tail_1757_;
goto _start;
}
}
else
{
lean_dec(v_val_1764_);
lean_del_object(v___x_1759_);
v_x_1755_ = v_tail_1757_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divAuthoredNonEmpty(lean_object* v_attr_1788_){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = lean_box(0);
v___x_1790_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_divAuthoredNonEmpty_spec__1(v___x_1789_, v_attr_1788_);
return v___x_1790_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optBytesEmpty(lean_object* v_x_1791_){
_start:
{
if (lean_obj_tag(v_x_1791_) == 0)
{
uint8_t v___x_1792_; 
v___x_1792_ = 1;
return v___x_1792_;
}
else
{
lean_object* v_val_1793_; lean_object* v___x_1794_; uint8_t v___x_1795_; 
v_val_1793_ = lean_ctor_get(v_x_1791_, 0);
v___x_1794_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_val_1793_);
v___x_1795_ = l_List_isEmpty___redArg(v___x_1794_);
lean_dec(v___x_1794_);
return v___x_1795_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optBytesEmpty___boxed(lean_object* v_x_1796_){
_start:
{
uint8_t v_res_1797_; lean_object* v_r_1798_; 
v_res_1797_ = lp_lean_x2dftml_LeanFtml_optBytesEmpty(v_x_1796_);
lean_dec(v_x_1796_);
v_r_1798_ = lean_box(v_res_1797_);
return v_r_1798_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__0(lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
if (lean_obj_tag(v_a_1799_) == 0)
{
lean_object* v___x_1801_; 
v___x_1801_ = l_List_reverse___redArg(v_a_1800_);
return v___x_1801_;
}
else
{
lean_object* v_head_1802_; lean_object* v_tail_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1812_; 
v_head_1802_ = lean_ctor_get(v_a_1799_, 0);
v_tail_1803_ = lean_ctor_get(v_a_1799_, 1);
v_isSharedCheck_1812_ = !lean_is_exclusive(v_a_1799_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1805_ = v_a_1799_;
v_isShared_1806_ = v_isSharedCheck_1812_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_tail_1803_);
lean_inc(v_head_1802_);
lean_dec(v_a_1799_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1812_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1807_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_head_1802_);
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v_a_1800_);
lean_ctor_set(v___x_1805_, 0, v___x_1807_);
v___x_1809_ = v___x_1805_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1807_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v_a_1800_);
v___x_1809_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
v_a_1799_ = v_tail_1803_;
v_a_1800_ = v___x_1809_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__3(lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
if (lean_obj_tag(v_a_1813_) == 0)
{
lean_object* v___x_1815_; 
v___x_1815_ = l_List_reverse___redArg(v_a_1814_);
return v___x_1815_;
}
else
{
lean_object* v_head_1816_; lean_object* v_tail_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1849_; 
v_head_1816_ = lean_ctor_get(v_a_1813_, 0);
v_tail_1817_ = lean_ctor_get(v_a_1813_, 1);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_a_1813_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1819_ = v_a_1813_;
v_isShared_1820_ = v_isSharedCheck_1849_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_tail_1817_);
lean_inc(v_head_1816_);
lean_dec(v_a_1813_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1849_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___y_1822_; lean_object* v_snd_1827_; 
v_snd_1827_ = lean_ctor_get(v_head_1816_, 1);
if (lean_obj_tag(v_snd_1827_) == 0)
{
lean_object* v_fst_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1836_; 
v_fst_1828_ = lean_ctor_get(v_head_1816_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_head_1816_);
if (v_isSharedCheck_1836_ == 0)
{
lean_object* v_unused_1837_; 
v_unused_1837_ = lean_ctor_get(v_head_1816_, 1);
lean_dec(v_unused_1837_);
v___x_1830_ = v_head_1816_;
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_fst_1828_);
lean_dec(v_head_1816_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1832_; lean_object* v___x_1834_; 
v___x_1832_ = lean_box(3);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v___x_1832_);
v___x_1834_ = v___x_1830_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_fst_1828_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v___x_1832_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
v___y_1822_ = v___x_1834_;
goto v___jp_1821_;
}
}
}
else
{
lean_object* v_fst_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1847_; 
lean_inc_ref(v_snd_1827_);
v_fst_1838_ = lean_ctor_get(v_head_1816_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v_head_1816_);
if (v_isSharedCheck_1847_ == 0)
{
lean_object* v_unused_1848_; 
v_unused_1848_ = lean_ctor_get(v_head_1816_, 1);
lean_dec(v_unused_1848_);
v___x_1840_ = v_head_1816_;
v_isShared_1841_ = v_isSharedCheck_1847_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_fst_1838_);
lean_dec(v_head_1816_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1847_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v_val_1842_; lean_object* v___x_1843_; lean_object* v___x_1845_; 
v_val_1842_ = lean_ctor_get(v_snd_1827_, 0);
lean_inc(v_val_1842_);
lean_dec_ref_known(v_snd_1827_, 1);
v___x_1843_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_1842_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 1, v___x_1843_);
v___x_1845_ = v___x_1840_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_fst_1838_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v___x_1843_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
v___y_1822_ = v___x_1845_;
goto v___jp_1821_;
}
}
}
v___jp_1821_:
{
lean_object* v___x_1824_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 1, v_a_1814_);
lean_ctor_set(v___x_1819_, 0, v___y_1822_);
v___x_1824_ = v___x_1819_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___y_1822_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_a_1814_);
v___x_1824_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
v_a_1813_ = v_tail_1817_;
v_a_1814_ = v___x_1824_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(lean_object* v_a_1850_, lean_object* v_x_1851_){
_start:
{
if (lean_obj_tag(v_x_1851_) == 0)
{
uint8_t v___x_1852_; 
v___x_1852_ = 0;
return v___x_1852_;
}
else
{
lean_object* v_head_1853_; lean_object* v_tail_1854_; uint8_t v___x_1855_; 
v_head_1853_ = lean_ctor_get(v_x_1851_, 0);
v_tail_1854_ = lean_ctor_get(v_x_1851_, 1);
v___x_1855_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1850_, v_head_1853_);
if (v___x_1855_ == 0)
{
v_x_1851_ = v_tail_1854_;
goto _start;
}
else
{
return v___x_1855_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1___boxed(lean_object* v_a_1857_, lean_object* v_x_1858_){
_start:
{
uint8_t v_res_1859_; lean_object* v_r_1860_; 
v_res_1859_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(v_a_1857_, v_x_1858_);
lean_dec(v_x_1858_);
lean_dec(v_a_1857_);
v_r_1860_ = lean_box(v_res_1859_);
return v_r_1860_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2(lean_object* v_authored_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
if (lean_obj_tag(v_a_1862_) == 0)
{
lean_object* v___x_1864_; 
v___x_1864_ = l_List_reverse___redArg(v_a_1863_);
return v___x_1864_;
}
else
{
lean_object* v_head_1865_; lean_object* v_tail_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1880_; 
v_head_1865_ = lean_ctor_get(v_a_1862_, 0);
v_tail_1866_ = lean_ctor_get(v_a_1862_, 1);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_a_1862_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1868_ = v_a_1862_;
v_isShared_1869_ = v_isSharedCheck_1880_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_tail_1866_);
lean_inc(v_head_1865_);
lean_dec(v_a_1862_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1880_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v_fst_1875_; lean_object* v_snd_1876_; uint8_t v___x_1877_; 
v_fst_1875_ = lean_ctor_get(v_head_1865_, 0);
v_snd_1876_ = lean_ctor_get(v_head_1865_, 1);
v___x_1877_ = lp_lean_x2dftml_LeanFtml_optBytesEmpty(v_snd_1876_);
if (v___x_1877_ == 0)
{
goto v___jp_1870_;
}
else
{
uint8_t v___x_1878_; 
v___x_1878_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(v_fst_1875_, v_authored_1861_);
if (v___x_1878_ == 0)
{
lean_del_object(v___x_1868_);
lean_dec(v_head_1865_);
v_a_1862_ = v_tail_1866_;
goto _start;
}
else
{
goto v___jp_1870_;
}
}
v___jp_1870_:
{
lean_object* v___x_1872_; 
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 1, v_a_1863_);
v___x_1872_ = v___x_1868_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_head_1865_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_a_1863_);
v___x_1872_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
v_a_1862_ = v_tail_1866_;
v_a_1863_ = v___x_1872_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2___boxed(lean_object* v_authored_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2(v_authored_1881_, v_a_1882_, v_a_1883_);
lean_dec(v_authored_1881_);
return v_res_1884_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4(lean_object* v_authored_1885_, lean_object* v_x_1886_){
_start:
{
if (lean_obj_tag(v_x_1886_) == 0)
{
uint8_t v___x_1887_; 
v___x_1887_ = 0;
return v___x_1887_;
}
else
{
lean_object* v_head_1888_; lean_object* v_tail_1889_; lean_object* v_fst_1890_; lean_object* v_snd_1891_; uint8_t v___x_1892_; 
v_head_1888_ = lean_ctor_get(v_x_1886_, 0);
v_tail_1889_ = lean_ctor_get(v_x_1886_, 1);
v_fst_1890_ = lean_ctor_get(v_head_1888_, 0);
v_snd_1891_ = lean_ctor_get(v_head_1888_, 1);
v___x_1892_ = lp_lean_x2dftml_LeanFtml_optBytesEmpty(v_snd_1891_);
if (v___x_1892_ == 0)
{
uint8_t v___x_1893_; 
v___x_1893_ = 1;
return v___x_1893_;
}
else
{
uint8_t v___x_1894_; 
v___x_1894_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(v_fst_1890_, v_authored_1885_);
if (v___x_1894_ == 0)
{
v_x_1886_ = v_tail_1889_;
goto _start;
}
else
{
return v___x_1894_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4___boxed(lean_object* v_authored_1896_, lean_object* v_x_1897_){
_start:
{
uint8_t v_res_1898_; lean_object* v_r_1899_; 
v_res_1898_ = lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4(v_authored_1896_, v_x_1897_);
lean_dec(v_x_1897_);
lean_dec(v_authored_1896_);
v_r_1899_ = lean_box(v_res_1898_);
return v_r_1899_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divProcess___closed__4(void){
_start:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1908_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divProcess___closed__3));
v___x_1909_ = l_String_toListImpl(v___x_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divProcess(lean_object* v_g1_1910_, lean_object* v_score_1911_, lean_object* v_g3_1912_, lean_object* v_body_1913_, lean_object* v_toks_1914_){
_start:
{
lean_object* v___y_1916_; lean_object* v___y_1917_; lean_object* v___y_1918_; lean_object* v___y_1960_; lean_object* v___y_1961_; uint8_t v___y_1962_; lean_object* v___y_1971_; 
if (lean_obj_tag(v_g3_1912_) == 0)
{
lean_object* v___x_1981_; 
v___x_1981_ = lean_box(0);
v___y_1971_ = v___x_1981_;
goto v___jp_1970_;
}
else
{
lean_object* v_val_1982_; 
v_val_1982_ = lean_ctor_get(v_g3_1912_, 0);
v___y_1971_ = v_val_1982_;
goto v___jp_1970_;
}
v___jp_1915_:
{
lean_object* v___x_1919_; lean_object* v_startPh_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v_t1_1932_; lean_object* v___x_1933_; lean_object* v_endPh_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v_t2_1940_; uint8_t v___x_1941_; 
v___x_1919_ = l_List_lengthTR___redArg(v_toks_1914_);
v_startPh_1920_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1919_);
v___x_1921_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divProcess___closed__0));
v___x_1922_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__2, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__2);
v___x_1923_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1923_, 0, v___y_1916_);
v___x_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1922_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__7, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7);
lean_inc(v___y_1917_);
v___x_1926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1925_);
lean_ctor_set(v___x_1926_, 1, v___y_1917_);
v___x_1927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1924_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
lean_inc(v___y_1918_);
v___x_1928_ = l_List_appendTR___redArg(v___x_1927_, v___y_1918_);
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1921_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
v___x_1930_ = lean_box(0);
v___x_1931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1929_);
lean_ctor_set(v___x_1931_, 1, v___x_1930_);
v_t1_1932_ = l_List_appendTR___redArg(v_toks_1914_, v___x_1931_);
v___x_1933_ = l_List_lengthTR___redArg(v_t1_1932_);
v_endPh_1934_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1933_);
v___x_1935_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__11, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11);
v___x_1936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1935_);
lean_ctor_set(v___x_1936_, 1, v___y_1917_);
v___x_1937_ = l_List_appendTR___redArg(v___x_1936_, v___y_1918_);
v___x_1938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1921_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1938_);
lean_ctor_set(v___x_1939_, 1, v___x_1930_);
v_t2_1940_ = l_List_appendTR___redArg(v_t1_1932_, v___x_1939_);
v___x_1941_ = l_List_isEmpty___redArg(v_score_1911_);
if (v___x_1941_ == 0)
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v_body_x27_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1942_ = lp_lean_x2dftml_LeanFtml_trimRN(v_body_1913_);
lean_dec(v_body_1913_);
v___x_1943_ = l_List_lengthTR___redArg(v___x_1942_);
v___x_1944_ = lean_unsigned_to_nat(1u);
v___x_1945_ = lean_nat_add(v___x_1943_, v___x_1944_);
lean_dec(v___x_1943_);
v_body_x27_1946_ = lp_lean_x2dftml_LeanFtml_collapseBlankRuns(v___x_1942_, v___x_1945_);
v___x_1947_ = l_List_appendTR___redArg(v_g1_1910_, v_startPh_1920_);
v___x_1948_ = l_List_appendTR___redArg(v___x_1947_, v_body_x27_1946_);
v___x_1949_ = l_List_appendTR___redArg(v___x_1948_, v_endPh_1934_);
v___x_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
lean_ctor_set(v___x_1950_, 1, v_t2_1940_);
return v___x_1950_;
}
else
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
lean_inc(v_g1_1910_);
v___x_1951_ = l_List_appendTR___redArg(v_g1_1910_, v_g1_1910_);
v___x_1952_ = l_List_appendTR___redArg(v___x_1951_, v_startPh_1920_);
v___x_1953_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divProcess___closed__2));
v___x_1954_ = l_List_appendTR___redArg(v___x_1952_, v___x_1953_);
v___x_1955_ = l_List_appendTR___redArg(v___x_1954_, v_body_1913_);
v___x_1956_ = l_List_appendTR___redArg(v___x_1955_, v___x_1953_);
v___x_1957_ = l_List_appendTR___redArg(v___x_1956_, v_endPh_1934_);
v___x_1958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1957_);
lean_ctor_set(v___x_1958_, 1, v_t2_1940_);
return v___x_1958_;
}
}
v___jp_1959_:
{
lean_object* v___x_1963_; lean_object* v_kept_1964_; lean_object* v_optArgs_1965_; 
v___x_1963_ = lean_box(0);
v_kept_1964_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2(v___y_1961_, v___y_1960_, v___x_1963_);
lean_dec(v___y_1961_);
v_optArgs_1965_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__3(v_kept_1964_, v___x_1963_);
if (v___y_1962_ == 0)
{
v___y_1916_ = v_optArgs_1965_;
v___y_1917_ = v___x_1963_;
v___y_1918_ = v___x_1963_;
goto v___jp_1915_;
}
else
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1966_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divProcess___closed__4, &lp_lean_x2dftml_LeanFtml_divProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_divProcess___closed__4);
v___x_1967_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1967_, 0, v___y_1962_);
v___x_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1966_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1968_);
lean_ctor_set(v___x_1969_, 1, v___x_1963_);
v___y_1916_ = v_optArgs_1965_;
v___y_1917_ = v___x_1963_;
v___y_1918_ = v___x_1969_;
goto v___jp_1915_;
}
}
v___jp_1970_:
{
lean_object* v_attr_1972_; lean_object* v_args_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v_authored_1976_; uint8_t v_effective_1977_; 
v_attr_1972_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_1971_);
lean_inc(v_attr_1972_);
v_args_1973_ = lp_lean_x2dftml_LeanFtml_divArgs(v_attr_1972_);
v___x_1974_ = lp_lean_x2dftml_LeanFtml_divAuthoredNonEmpty(v_attr_1972_);
v___x_1975_ = lean_box(0);
v_authored_1976_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__0(v___x_1974_, v___x_1975_);
v_effective_1977_ = lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4(v_authored_1976_, v_args_1973_);
if (v_effective_1977_ == 0)
{
lean_object* v___x_1978_; uint8_t v___x_1979_; 
v___x_1978_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_body_1913_);
v___x_1979_ = l_List_isEmpty___redArg(v___x_1978_);
lean_dec(v___x_1978_);
v___y_1960_ = v_args_1973_;
v___y_1961_ = v_authored_1976_;
v___y_1962_ = v___x_1979_;
goto v___jp_1959_;
}
else
{
uint8_t v___x_1980_; 
v___x_1980_ = 0;
v___y_1960_ = v_args_1973_;
v___y_1961_ = v_authored_1976_;
v___y_1962_ = v___x_1980_;
goto v___jp_1959_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divProcess___boxed(lean_object* v_g1_1983_, lean_object* v_score_1984_, lean_object* v_g3_1985_, lean_object* v_body_1986_, lean_object* v_toks_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = lp_lean_x2dftml_LeanFtml_divProcess(v_g1_1983_, v_score_1984_, v_g3_1985_, v_body_1986_, v_toks_1987_);
lean_dec(v_g3_1985_);
lean_dec(v_score_1984_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divScan(lean_object* v_src_1989_, lean_object* v_toks_1990_, lean_object* v_x_1991_){
_start:
{
lean_object* v_zero_1992_; uint8_t v_isZero_1993_; 
v_zero_1992_ = lean_unsigned_to_nat(0u);
v_isZero_1993_ = lean_nat_dec_eq(v_x_1991_, v_zero_1992_);
if (v_isZero_1993_ == 1)
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1994_, 0, v_src_1989_);
lean_ctor_set(v___x_1994_, 1, v_toks_1990_);
return v___x_1994_;
}
else
{
if (lean_obj_tag(v_src_1989_) == 0)
{
lean_object* v___x_1995_; 
v___x_1995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1995_, 0, v_src_1989_);
lean_ctor_set(v___x_1995_, 1, v_toks_1990_);
return v___x_1995_;
}
else
{
lean_object* v_head_1996_; lean_object* v_tail_1997_; lean_object* v_one_1998_; lean_object* v_n_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v_head_1996_ = lean_ctor_get(v_src_1989_, 0);
lean_inc(v_head_1996_);
v_tail_1997_ = lean_ctor_get(v_src_1989_, 1);
lean_inc(v_tail_1997_);
v_one_1998_ = lean_unsigned_to_nat(1u);
v_n_1999_ = lean_nat_sub(v_x_1991_, v_one_1998_);
v___x_2000_ = l_List_lengthTR___redArg(v_src_1989_);
v___x_2001_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_2000_);
lean_dec(v___x_2000_);
v___x_2002_ = lp_lean_x2dftml_LeanFtml_divMatch(v_src_1989_, v___x_2001_);
lean_dec(v___x_2001_);
v___x_2003_ = l_List_head_x3f___redArg(v___x_2002_);
lean_dec(v___x_2002_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v___x_2004_; lean_object* v_fst_2005_; lean_object* v_snd_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2014_; 
v___x_2004_ = lp_lean_x2dftml_LeanFtml_divScan(v_tail_1997_, v_toks_1990_, v_n_1999_);
lean_dec(v_n_1999_);
v_fst_2005_ = lean_ctor_get(v___x_2004_, 0);
v_snd_2006_ = lean_ctor_get(v___x_2004_, 1);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2008_ = v___x_2004_;
v_isShared_2009_ = v_isSharedCheck_2014_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_snd_2006_);
lean_inc(v_fst_2005_);
lean_dec(v___x_2004_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2014_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2010_, 0, v_head_1996_);
lean_ctor_set(v___x_2010_, 1, v_fst_2005_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 0, v___x_2010_);
v___x_2012_ = v___x_2008_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2010_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v_snd_2006_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
else
{
lean_object* v_val_2015_; lean_object* v_snd_2016_; lean_object* v_snd_2017_; lean_object* v_snd_2018_; lean_object* v_fst_2019_; lean_object* v_fst_2020_; lean_object* v_fst_2021_; lean_object* v_fst_2022_; lean_object* v_snd_2023_; lean_object* v___x_2024_; lean_object* v_fst_2025_; lean_object* v_snd_2026_; lean_object* v___x_2027_; lean_object* v_fst_2028_; lean_object* v_snd_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2037_; 
lean_dec(v_tail_1997_);
lean_dec(v_head_1996_);
v_val_2015_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_val_2015_);
lean_dec_ref_known(v___x_2003_, 1);
v_snd_2016_ = lean_ctor_get(v_val_2015_, 1);
lean_inc(v_snd_2016_);
v_snd_2017_ = lean_ctor_get(v_snd_2016_, 1);
lean_inc(v_snd_2017_);
v_snd_2018_ = lean_ctor_get(v_snd_2017_, 1);
lean_inc(v_snd_2018_);
v_fst_2019_ = lean_ctor_get(v_val_2015_, 0);
lean_inc(v_fst_2019_);
lean_dec(v_val_2015_);
v_fst_2020_ = lean_ctor_get(v_snd_2016_, 0);
lean_inc(v_fst_2020_);
lean_dec(v_snd_2016_);
v_fst_2021_ = lean_ctor_get(v_snd_2017_, 0);
lean_inc(v_fst_2021_);
lean_dec(v_snd_2017_);
v_fst_2022_ = lean_ctor_get(v_snd_2018_, 0);
lean_inc(v_fst_2022_);
v_snd_2023_ = lean_ctor_get(v_snd_2018_, 1);
lean_inc(v_snd_2023_);
lean_dec(v_snd_2018_);
v___x_2024_ = lp_lean_x2dftml_LeanFtml_divProcess(v_fst_2019_, v_fst_2020_, v_fst_2021_, v_fst_2022_, v_toks_1990_);
lean_dec(v_fst_2021_);
lean_dec(v_fst_2020_);
v_fst_2025_ = lean_ctor_get(v___x_2024_, 0);
lean_inc(v_fst_2025_);
v_snd_2026_ = lean_ctor_get(v___x_2024_, 1);
lean_inc(v_snd_2026_);
lean_dec_ref(v___x_2024_);
v___x_2027_ = lp_lean_x2dftml_LeanFtml_divScan(v_snd_2023_, v_snd_2026_, v_n_1999_);
lean_dec(v_n_1999_);
v_fst_2028_ = lean_ctor_get(v___x_2027_, 0);
v_snd_2029_ = lean_ctor_get(v___x_2027_, 1);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2031_ = v___x_2027_;
v_isShared_2032_ = v_isSharedCheck_2037_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_snd_2029_);
lean_inc(v_fst_2028_);
lean_dec(v___x_2027_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2037_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; lean_object* v___x_2035_; 
v___x_2033_ = l_List_appendTR___redArg(v_fst_2025_, v_fst_2028_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v___x_2033_);
v___x_2035_ = v___x_2031_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2033_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v_snd_2029_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divScan___boxed(lean_object* v_src_2038_, lean_object* v_toks_2039_, lean_object* v_x_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = lp_lean_x2dftml_LeanFtml_divScan(v_src_2038_, v_toks_2039_, v_x_2040_);
lean_dec(v_x_2040_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divPasses(lean_object* v_src_2042_, lean_object* v_toks_2043_, lean_object* v_x_2044_){
_start:
{
lean_object* v_zero_2045_; uint8_t v_isZero_2046_; 
v_zero_2045_ = lean_unsigned_to_nat(0u);
v_isZero_2046_ = lean_nat_dec_eq(v_x_2044_, v_zero_2045_);
if (v_isZero_2046_ == 1)
{
lean_object* v___x_2047_; 
lean_dec(v_x_2044_);
v___x_2047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2047_, 0, v_src_2042_);
lean_ctor_set(v___x_2047_, 1, v_toks_2043_);
return v___x_2047_;
}
else
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v_fst_2052_; lean_object* v_snd_2053_; uint8_t v___x_2054_; 
v___x_2048_ = l_List_lengthTR___redArg(v_src_2042_);
v___x_2049_ = lean_unsigned_to_nat(1u);
v___x_2050_ = lean_nat_add(v___x_2048_, v___x_2049_);
lean_dec(v___x_2048_);
lean_inc(v_src_2042_);
v___x_2051_ = lp_lean_x2dftml_LeanFtml_divScan(v_src_2042_, v_toks_2043_, v___x_2050_);
lean_dec(v___x_2050_);
v_fst_2052_ = lean_ctor_get(v___x_2051_, 0);
v_snd_2053_ = lean_ctor_get(v___x_2051_, 1);
v___x_2054_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_2052_, v_src_2042_);
lean_dec(v_src_2042_);
if (v___x_2054_ == 0)
{
lean_object* v_n_2055_; 
lean_inc(v_snd_2053_);
lean_inc(v_fst_2052_);
lean_dec_ref(v___x_2051_);
v_n_2055_ = lean_nat_sub(v_x_2044_, v___x_2049_);
lean_dec(v_x_2044_);
v_src_2042_ = v_fst_2052_;
v_toks_2043_ = v_snd_2053_;
v_x_2044_ = v_n_2055_;
goto _start;
}
else
{
lean_dec(v_x_2044_);
return v___x_2051_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRule___lam__0(lean_object* v_src_2057_, lean_object* v_toks_2058_){
_start:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2059_ = l_List_lengthTR___redArg(v_src_2057_);
v___x_2060_ = lean_unsigned_to_nat(2u);
v___x_2061_ = lean_nat_add(v___x_2059_, v___x_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lp_lean_x2dftml_LeanFtml_divPasses(v_src_2057_, v_toks_2058_, v___x_2061_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRule(lean_object* v_st_2064_){
_start:
{
lean_object* v___f_2065_; lean_object* v___x_2066_; 
v___f_2065_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRule___closed__0));
v___x_2066_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_2064_, v___f_2065_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_collMatchAt_spec__0(lean_object* v_fst_2067_, lean_object* v_fst_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_){
_start:
{
if (lean_obj_tag(v_a_2069_) == 0)
{
lean_object* v___x_2071_; 
lean_dec(v_fst_2068_);
lean_dec(v_fst_2067_);
v___x_2071_ = l_List_reverse___redArg(v_a_2070_);
return v___x_2071_;
}
else
{
lean_object* v_head_2072_; lean_object* v_tail_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2096_; 
v_head_2072_ = lean_ctor_get(v_a_2069_, 0);
v_tail_2073_ = lean_ctor_get(v_a_2069_, 1);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_a_2069_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2075_ = v_a_2069_;
v_isShared_2076_ = v_isSharedCheck_2096_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_tail_2073_);
lean_inc(v_head_2072_);
lean_dec(v_a_2069_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2096_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v_fst_2077_; lean_object* v_snd_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2095_; 
v_fst_2077_ = lean_ctor_get(v_head_2072_, 0);
v_snd_2078_ = lean_ctor_get(v_head_2072_, 1);
v_isSharedCheck_2095_ = !lean_is_exclusive(v_head_2072_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2080_ = v_head_2072_;
v_isShared_2081_ = v_isSharedCheck_2095_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_snd_2078_);
lean_inc(v_fst_2077_);
lean_dec(v_head_2072_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2095_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2087_; 
v___x_2082_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_snd_2078_);
v___x_2083_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_snd_2078_, v_snd_2078_, v___x_2082_);
v___x_2084_ = l_List_lengthTR___redArg(v___x_2083_);
lean_dec(v___x_2083_);
v___x_2085_ = l_List_drop___redArg(v___x_2084_, v_snd_2078_);
lean_dec(v_snd_2078_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 1, v___x_2085_);
v___x_2087_ = v___x_2080_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_fst_2077_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2091_; 
lean_inc(v_fst_2067_);
v___x_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2088_, 0, v_fst_2067_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
lean_inc(v_fst_2068_);
v___x_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2089_, 0, v_fst_2068_);
lean_ctor_set(v___x_2089_, 1, v___x_2088_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 1, v_a_2070_);
lean_ctor_set(v___x_2075_, 0, v___x_2089_);
v___x_2091_ = v___x_2075_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2089_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v_a_2070_);
v___x_2091_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
v_a_2069_ = v_tail_2073_;
v_a_2070_ = v___x_2091_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2098_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__0));
v___x_2099_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2098_);
return v___x_2099_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1(lean_object* v_fst_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_){
_start:
{
if (lean_obj_tag(v_a_2101_) == 0)
{
lean_object* v___x_2103_; 
lean_dec(v_fst_2100_);
v___x_2103_ = lean_array_to_list(v_a_2102_);
return v___x_2103_;
}
else
{
lean_object* v_head_2104_; lean_object* v_tail_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2126_; 
v_head_2104_ = lean_ctor_get(v_a_2101_, 0);
v_tail_2105_ = lean_ctor_get(v_a_2101_, 1);
v_isSharedCheck_2126_ = !lean_is_exclusive(v_a_2101_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2107_ = v_a_2101_;
v_isShared_2108_ = v_isSharedCheck_2126_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_tail_2105_);
lean_inc(v_head_2104_);
lean_dec(v_a_2101_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2126_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v_fst_2109_; lean_object* v_snd_2110_; lean_object* v___y_2112_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v_fst_2109_ = lean_ctor_get(v_head_2104_, 0);
lean_inc(v_fst_2109_);
v_snd_2110_ = lean_ctor_get(v_head_2104_, 1);
lean_inc(v_snd_2110_);
lean_dec(v_head_2104_);
v___x_2117_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1);
v___x_2118_ = lp_lean_x2dftml_LeanFtml_occurrencesCI(v___x_2117_, v_snd_2110_);
v___x_2119_ = l_List_head_x3f___redArg(v___x_2118_);
lean_dec(v___x_2118_);
if (lean_obj_tag(v___x_2119_) == 0)
{
lean_object* v___x_2120_; 
lean_del_object(v___x_2107_);
v___x_2120_ = lean_box(0);
v___y_2112_ = v___x_2120_;
goto v___jp_2111_;
}
else
{
lean_object* v_val_2121_; lean_object* v___x_2122_; lean_object* v___x_2124_; 
v_val_2121_ = lean_ctor_get(v___x_2119_, 0);
lean_inc(v_val_2121_);
lean_dec_ref_known(v___x_2119_, 1);
v___x_2122_ = lean_box(0);
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 1, v___x_2122_);
lean_ctor_set(v___x_2107_, 0, v_val_2121_);
v___x_2124_ = v___x_2107_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_val_2121_);
lean_ctor_set(v_reuseFailAlloc_2125_, 1, v___x_2122_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
v___y_2112_ = v___x_2124_;
goto v___jp_2111_;
}
}
v___jp_2111_:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2113_ = lean_box(0);
lean_inc(v_fst_2100_);
v___x_2114_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_collMatchAt_spec__0(v_fst_2109_, v_fst_2100_, v___y_2112_, v___x_2113_);
v___x_2115_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2102_, v___x_2114_);
v_a_2101_ = v_tail_2105_;
v_a_2102_ = v___x_2115_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2(lean_object* v_fst_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_){
_start:
{
if (lean_obj_tag(v_a_2130_) == 0)
{
lean_object* v___x_2132_; 
lean_dec(v_fst_2129_);
v___x_2132_ = lean_array_to_list(v_a_2131_);
return v___x_2132_;
}
else
{
lean_object* v_head_2133_; lean_object* v_tail_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v_head_2133_ = lean_ctor_get(v_a_2130_, 0);
lean_inc(v_head_2133_);
v_tail_2134_ = lean_ctor_get(v_a_2130_, 1);
lean_inc(v_tail_2134_);
lean_dec_ref_known(v_a_2130_, 2);
v___x_2135_ = lp_lean_x2dftml_LeanFtml_attrGroupCands(v_head_2133_);
v___x_2136_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0));
lean_inc(v_fst_2129_);
v___x_2137_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1(v_fst_2129_, v___x_2135_, v___x_2136_);
v___x_2138_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2131_, v___x_2137_);
v_a_2130_ = v_tail_2134_;
v_a_2131_ = v___x_2138_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2141_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__0));
v___x_2142_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3(lean_object* v_a_2143_, lean_object* v_a_2144_){
_start:
{
if (lean_obj_tag(v_a_2143_) == 0)
{
lean_object* v___x_2145_; 
v___x_2145_ = lean_array_to_list(v_a_2144_);
return v___x_2145_;
}
else
{
lean_object* v_head_2146_; lean_object* v_tail_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2167_; 
v_head_2146_ = lean_ctor_get(v_a_2143_, 0);
v_tail_2147_ = lean_ctor_get(v_a_2143_, 1);
v_isSharedCheck_2167_ = !lean_is_exclusive(v_a_2143_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2149_ = v_a_2143_;
v_isShared_2150_ = v_isSharedCheck_2167_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_tail_2147_);
lean_inc(v_head_2146_);
lean_dec(v_a_2143_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2167_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v_fst_2151_; lean_object* v_snd_2152_; lean_object* v___y_2154_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
v_fst_2151_ = lean_ctor_get(v_head_2146_, 0);
lean_inc(v_fst_2151_);
v_snd_2152_ = lean_ctor_get(v_head_2146_, 1);
lean_inc(v_snd_2152_);
lean_dec(v_head_2146_);
v___x_2159_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1);
v___x_2160_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2159_, v_snd_2152_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v___x_2161_; 
lean_del_object(v___x_2149_);
v___x_2161_ = lean_box(0);
v___y_2154_ = v___x_2161_;
goto v___jp_2153_;
}
else
{
lean_object* v_val_2162_; lean_object* v___x_2163_; lean_object* v___x_2165_; 
v_val_2162_ = lean_ctor_get(v___x_2160_, 0);
lean_inc(v_val_2162_);
lean_dec_ref_known(v___x_2160_, 1);
v___x_2163_ = lean_box(0);
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 1, v___x_2163_);
lean_ctor_set(v___x_2149_, 0, v_val_2162_);
v___x_2165_ = v___x_2149_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_val_2162_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
v___y_2154_ = v___x_2165_;
goto v___jp_2153_;
}
}
v___jp_2153_:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2155_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0));
v___x_2156_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2(v_fst_2151_, v___y_2154_, v___x_2155_);
v___x_2157_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2144_, v___x_2156_);
v_a_2143_ = v_tail_2147_;
v_a_2144_ = v___x_2157_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collMatchAt(lean_object* v_s_2168_){
_start:
{
lean_object* v___y_2170_; 
if (lean_obj_tag(v_s_2168_) == 1)
{
lean_object* v_head_2178_; lean_object* v_tail_2179_; lean_object* v___x_2180_; uint8_t v___x_2181_; 
v_head_2178_ = lean_ctor_get(v_s_2168_, 0);
v_tail_2179_ = lean_ctor_get(v_s_2168_, 1);
v___x_2180_ = lean_unsigned_to_nat(10u);
v___x_2181_ = lean_nat_dec_eq(v_head_2178_, v___x_2180_);
if (v___x_2181_ == 0)
{
goto v___jp_2174_;
}
else
{
lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2191_; 
lean_inc(v_tail_2179_);
v_isSharedCheck_2191_ = !lean_is_exclusive(v_s_2168_);
if (v_isSharedCheck_2191_ == 0)
{
lean_object* v_unused_2192_; lean_object* v_unused_2193_; 
v_unused_2192_ = lean_ctor_get(v_s_2168_, 1);
lean_dec(v_unused_2192_);
v_unused_2193_ = lean_ctor_get(v_s_2168_, 0);
lean_dec(v_unused_2193_);
v___x_2183_ = v_s_2168_;
v_isShared_2184_ = v_isSharedCheck_2191_;
goto v_resetjp_2182_;
}
else
{
lean_dec(v_s_2168_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2191_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2189_; 
v___x_2185_ = lean_box(0);
v___x_2186_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divMatch___closed__0));
v___x_2187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
lean_ctor_set(v___x_2187_, 1, v_tail_2179_);
if (v_isShared_2184_ == 0)
{
lean_ctor_set(v___x_2183_, 1, v___x_2185_);
lean_ctor_set(v___x_2183_, 0, v___x_2187_);
v___x_2189_ = v___x_2183_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v___x_2187_);
lean_ctor_set(v_reuseFailAlloc_2190_, 1, v___x_2185_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
v___y_2170_ = v___x_2189_;
goto v___jp_2169_;
}
}
}
}
else
{
goto v___jp_2174_;
}
v___jp_2169_:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0));
v___x_2172_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3(v___y_2170_, v___x_2171_);
v___x_2173_ = l_List_head_x3f___redArg(v___x_2172_);
lean_dec(v___x_2172_);
return v___x_2173_;
}
v___jp_2174_:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2175_ = lean_box(0);
v___x_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2175_);
lean_ctor_set(v___x_2176_, 1, v_s_2168_);
v___x_2177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2176_);
lean_ctor_set(v___x_2177_, 1, v___x_2175_);
v___y_2170_ = v___x_2177_;
goto v___jp_2169_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_collProcess___closed__2(void){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2196_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__1));
v___x_2197_ = l_String_toListImpl(v___x_2196_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collProcess(lean_object* v_g1_2204_, lean_object* v_g2_2205_, lean_object* v_body_2206_, lean_object* v_doc_2207_, lean_object* v_toks_2208_){
_start:
{
lean_object* v___y_2210_; 
if (lean_obj_tag(v_g2_2205_) == 0)
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_box(0);
v___y_2210_ = v___x_2270_;
goto v___jp_2209_;
}
else
{
lean_object* v_val_2271_; 
v_val_2271_ = lean_ctor_get(v_g2_2205_, 0);
v___y_2210_ = v_val_2271_;
goto v___jp_2209_;
}
v___jp_2209_:
{
lean_object* v_page_2211_; lean_object* v_site_2212_; lean_object* v_inclusions_2213_; lean_object* v_inclusionsNotExist_2214_; lean_object* v_footnotes_2215_; lean_object* v_bibitems_2216_; lean_object* v_bibitemIds_2217_; lean_object* v_headlineId_2218_; lean_object* v_mathId_2219_; lean_object* v_equations_2220_; lean_object* v_collapsibleCount_2221_; lean_object* v_tabviewCounter_2222_; lean_object* v_scoredAnchors_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2269_; 
v_page_2211_ = lean_ctor_get(v_doc_2207_, 0);
v_site_2212_ = lean_ctor_get(v_doc_2207_, 1);
v_inclusions_2213_ = lean_ctor_get(v_doc_2207_, 2);
v_inclusionsNotExist_2214_ = lean_ctor_get(v_doc_2207_, 3);
v_footnotes_2215_ = lean_ctor_get(v_doc_2207_, 4);
v_bibitems_2216_ = lean_ctor_get(v_doc_2207_, 5);
v_bibitemIds_2217_ = lean_ctor_get(v_doc_2207_, 6);
v_headlineId_2218_ = lean_ctor_get(v_doc_2207_, 7);
v_mathId_2219_ = lean_ctor_get(v_doc_2207_, 8);
v_equations_2220_ = lean_ctor_get(v_doc_2207_, 9);
v_collapsibleCount_2221_ = lean_ctor_get(v_doc_2207_, 10);
v_tabviewCounter_2222_ = lean_ctor_get(v_doc_2207_, 11);
v_scoredAnchors_2223_ = lean_ctor_get(v_doc_2207_, 12);
v_isSharedCheck_2269_ = !lean_is_exclusive(v_doc_2207_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2225_ = v_doc_2207_;
v_isShared_2226_ = v_isSharedCheck_2269_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_scoredAnchors_2223_);
lean_inc(v_tabviewCounter_2222_);
lean_inc(v_collapsibleCount_2221_);
lean_inc(v_equations_2220_);
lean_inc(v_mathId_2219_);
lean_inc(v_headlineId_2218_);
lean_inc(v_bibitemIds_2217_);
lean_inc(v_bibitems_2216_);
lean_inc(v_footnotes_2215_);
lean_inc(v_inclusionsNotExist_2214_);
lean_inc(v_inclusions_2213_);
lean_inc(v_site_2212_);
lean_inc(v_page_2211_);
lean_dec(v_doc_2207_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2269_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v_attr_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v_argsOpt_2230_; lean_object* v___x_2231_; lean_object* v_startPh_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v_t1_2246_; lean_object* v___x_2247_; lean_object* v_endPh_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v_t2_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
v_attr_2227_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_2210_);
v___x_2228_ = lean_box(0);
v___x_2229_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v_attr_2227_, v___x_2228_);
v_argsOpt_2230_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_argsOpt_2230_, 0, v___x_2229_);
v___x_2231_ = l_List_lengthTR___redArg(v_toks_2208_);
v_startPh_2232_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_2231_);
v___x_2233_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__0));
v___x_2234_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__2, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__2);
v___x_2235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
lean_ctor_set(v___x_2235_, 1, v_argsOpt_2230_);
v___x_2236_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__7, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7);
v___x_2237_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_collProcess___closed__2, &lp_lean_x2dftml_LeanFtml_collProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_collProcess___closed__2);
lean_inc(v_collapsibleCount_2221_);
v___x_2238_ = lean_nat_to_int(v_collapsibleCount_2221_);
v___x_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2239_, 0, v___x_2238_);
v___x_2240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2237_);
lean_ctor_set(v___x_2240_, 1, v___x_2239_);
v___x_2241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
lean_ctor_set(v___x_2241_, 1, v___x_2228_);
lean_inc_ref(v___x_2241_);
v___x_2242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2236_);
lean_ctor_set(v___x_2242_, 1, v___x_2241_);
lean_inc_ref(v___x_2235_);
v___x_2243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2243_, 0, v___x_2235_);
lean_ctor_set(v___x_2243_, 1, v___x_2242_);
v___x_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2233_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
lean_ctor_set(v___x_2245_, 1, v___x_2228_);
v_t1_2246_ = l_List_appendTR___redArg(v_toks_2208_, v___x_2245_);
v___x_2247_ = l_List_lengthTR___redArg(v_t1_2246_);
v_endPh_2248_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_2247_);
v___x_2249_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__11, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11);
v___x_2250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
lean_ctor_set(v___x_2250_, 1, v___x_2241_);
v___x_2251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2235_);
lean_ctor_set(v___x_2251_, 1, v___x_2250_);
v___x_2252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2233_);
lean_ctor_set(v___x_2252_, 1, v___x_2251_);
v___x_2253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2252_);
lean_ctor_set(v___x_2253_, 1, v___x_2228_);
v_t2_2254_ = l_List_appendTR___redArg(v_t1_2246_, v___x_2253_);
lean_inc(v_g1_2204_);
v___x_2255_ = l_List_appendTR___redArg(v_g1_2204_, v_g1_2204_);
v___x_2256_ = l_List_appendTR___redArg(v___x_2255_, v_startPh_2232_);
v___x_2257_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__4));
v___x_2258_ = l_List_appendTR___redArg(v___x_2256_, v___x_2257_);
v___x_2259_ = l_List_appendTR___redArg(v___x_2258_, v_body_2206_);
v___x_2260_ = l_List_appendTR___redArg(v___x_2259_, v___x_2257_);
v___x_2261_ = l_List_appendTR___redArg(v___x_2260_, v_endPh_2248_);
v___x_2262_ = lean_unsigned_to_nat(1u);
v___x_2263_ = lean_nat_add(v_collapsibleCount_2221_, v___x_2262_);
lean_dec(v_collapsibleCount_2221_);
if (v_isShared_2226_ == 0)
{
lean_ctor_set(v___x_2225_, 10, v___x_2263_);
v___x_2265_ = v___x_2225_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_page_2211_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v_site_2212_);
lean_ctor_set(v_reuseFailAlloc_2268_, 2, v_inclusions_2213_);
lean_ctor_set(v_reuseFailAlloc_2268_, 3, v_inclusionsNotExist_2214_);
lean_ctor_set(v_reuseFailAlloc_2268_, 4, v_footnotes_2215_);
lean_ctor_set(v_reuseFailAlloc_2268_, 5, v_bibitems_2216_);
lean_ctor_set(v_reuseFailAlloc_2268_, 6, v_bibitemIds_2217_);
lean_ctor_set(v_reuseFailAlloc_2268_, 7, v_headlineId_2218_);
lean_ctor_set(v_reuseFailAlloc_2268_, 8, v_mathId_2219_);
lean_ctor_set(v_reuseFailAlloc_2268_, 9, v_equations_2220_);
lean_ctor_set(v_reuseFailAlloc_2268_, 10, v___x_2263_);
lean_ctor_set(v_reuseFailAlloc_2268_, 11, v_tabviewCounter_2222_);
lean_ctor_set(v_reuseFailAlloc_2268_, 12, v_scoredAnchors_2223_);
v___x_2265_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2266_, 0, v_t2_2254_);
lean_ctor_set(v___x_2266_, 1, v___x_2265_);
v___x_2267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2261_);
lean_ctor_set(v___x_2267_, 1, v___x_2266_);
return v___x_2267_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collProcess___boxed(lean_object* v_g1_2272_, lean_object* v_g2_2273_, lean_object* v_body_2274_, lean_object* v_doc_2275_, lean_object* v_toks_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = lp_lean_x2dftml_LeanFtml_collProcess(v_g1_2272_, v_g2_2273_, v_body_2274_, v_doc_2275_, v_toks_2276_);
lean_dec(v_g2_2273_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collScan(lean_object* v_src_2278_, lean_object* v_toks_2279_, lean_object* v_doc_2280_, lean_object* v_x_2281_){
_start:
{
lean_object* v_zero_2282_; uint8_t v_isZero_2283_; 
v_zero_2282_ = lean_unsigned_to_nat(0u);
v_isZero_2283_ = lean_nat_dec_eq(v_x_2281_, v_zero_2282_);
if (v_isZero_2283_ == 1)
{
lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2284_, 0, v_toks_2279_);
lean_ctor_set(v___x_2284_, 1, v_doc_2280_);
v___x_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2285_, 0, v_src_2278_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
return v___x_2285_;
}
else
{
if (lean_obj_tag(v_src_2278_) == 0)
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2286_, 0, v_toks_2279_);
lean_ctor_set(v___x_2286_, 1, v_doc_2280_);
v___x_2287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2287_, 0, v_src_2278_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
return v___x_2287_;
}
else
{
lean_object* v_head_2288_; lean_object* v_tail_2289_; lean_object* v_one_2290_; lean_object* v_n_2291_; lean_object* v___x_2292_; 
v_head_2288_ = lean_ctor_get(v_src_2278_, 0);
lean_inc(v_head_2288_);
v_tail_2289_ = lean_ctor_get(v_src_2278_, 1);
lean_inc(v_tail_2289_);
v_one_2290_ = lean_unsigned_to_nat(1u);
v_n_2291_ = lean_nat_sub(v_x_2281_, v_one_2290_);
v___x_2292_ = lp_lean_x2dftml_LeanFtml_collMatchAt(v_src_2278_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v___x_2293_; lean_object* v_fst_2294_; lean_object* v_snd_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2303_; 
v___x_2293_ = lp_lean_x2dftml_LeanFtml_collScan(v_tail_2289_, v_toks_2279_, v_doc_2280_, v_n_2291_);
lean_dec(v_n_2291_);
v_fst_2294_ = lean_ctor_get(v___x_2293_, 0);
v_snd_2295_ = lean_ctor_get(v___x_2293_, 1);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2297_ = v___x_2293_;
v_isShared_2298_ = v_isSharedCheck_2303_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_snd_2295_);
lean_inc(v_fst_2294_);
lean_dec(v___x_2293_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2303_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2299_; lean_object* v___x_2301_; 
v___x_2299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2299_, 0, v_head_2288_);
lean_ctor_set(v___x_2299_, 1, v_fst_2294_);
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 0, v___x_2299_);
v___x_2301_ = v___x_2297_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2299_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v_snd_2295_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
else
{
lean_object* v_val_2304_; lean_object* v_snd_2305_; lean_object* v_snd_2306_; lean_object* v_fst_2307_; lean_object* v_fst_2308_; lean_object* v_fst_2309_; lean_object* v_snd_2310_; lean_object* v___x_2311_; lean_object* v_snd_2312_; lean_object* v_fst_2313_; lean_object* v_fst_2314_; lean_object* v_snd_2315_; lean_object* v___x_2316_; lean_object* v_fst_2317_; lean_object* v_snd_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2326_; 
lean_dec(v_tail_2289_);
lean_dec(v_head_2288_);
v_val_2304_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_val_2304_);
lean_dec_ref_known(v___x_2292_, 1);
v_snd_2305_ = lean_ctor_get(v_val_2304_, 1);
lean_inc(v_snd_2305_);
v_snd_2306_ = lean_ctor_get(v_snd_2305_, 1);
lean_inc(v_snd_2306_);
v_fst_2307_ = lean_ctor_get(v_val_2304_, 0);
lean_inc(v_fst_2307_);
lean_dec(v_val_2304_);
v_fst_2308_ = lean_ctor_get(v_snd_2305_, 0);
lean_inc(v_fst_2308_);
lean_dec(v_snd_2305_);
v_fst_2309_ = lean_ctor_get(v_snd_2306_, 0);
lean_inc(v_fst_2309_);
v_snd_2310_ = lean_ctor_get(v_snd_2306_, 1);
lean_inc(v_snd_2310_);
lean_dec(v_snd_2306_);
v___x_2311_ = lp_lean_x2dftml_LeanFtml_collProcess(v_fst_2307_, v_fst_2308_, v_fst_2309_, v_doc_2280_, v_toks_2279_);
lean_dec(v_fst_2308_);
v_snd_2312_ = lean_ctor_get(v___x_2311_, 1);
lean_inc(v_snd_2312_);
v_fst_2313_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_fst_2313_);
lean_dec_ref(v___x_2311_);
v_fst_2314_ = lean_ctor_get(v_snd_2312_, 0);
lean_inc(v_fst_2314_);
v_snd_2315_ = lean_ctor_get(v_snd_2312_, 1);
lean_inc(v_snd_2315_);
lean_dec(v_snd_2312_);
v___x_2316_ = lp_lean_x2dftml_LeanFtml_collScan(v_snd_2310_, v_fst_2314_, v_snd_2315_, v_n_2291_);
lean_dec(v_n_2291_);
v_fst_2317_ = lean_ctor_get(v___x_2316_, 0);
v_snd_2318_ = lean_ctor_get(v___x_2316_, 1);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2320_ = v___x_2316_;
v_isShared_2321_ = v_isSharedCheck_2326_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_snd_2318_);
lean_inc(v_fst_2317_);
lean_dec(v___x_2316_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2326_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2322_; lean_object* v___x_2324_; 
v___x_2322_ = l_List_appendTR___redArg(v_fst_2313_, v_fst_2317_);
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v___x_2322_);
v___x_2324_ = v___x_2320_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2322_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v_snd_2318_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collScan___boxed(lean_object* v_src_2327_, lean_object* v_toks_2328_, lean_object* v_doc_2329_, lean_object* v_x_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = lp_lean_x2dftml_LeanFtml_collScan(v_src_2327_, v_toks_2328_, v_doc_2329_, v_x_2330_);
lean_dec(v_x_2330_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsibleRule(lean_object* v_st_2332_){
_start:
{
lean_object* v_work_2333_; lean_object* v_tokens_2334_; lean_object* v_doc_2335_; uint8_t v_fatal_2336_; lean_object* v_continuedDivLeads_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2354_; 
v_work_2333_ = lean_ctor_get(v_st_2332_, 0);
v_tokens_2334_ = lean_ctor_get(v_st_2332_, 1);
v_doc_2335_ = lean_ctor_get(v_st_2332_, 2);
v_fatal_2336_ = lean_ctor_get_uint8(v_st_2332_, sizeof(void*)*4);
v_continuedDivLeads_2337_ = lean_ctor_get(v_st_2332_, 3);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_st_2332_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2339_ = v_st_2332_;
v_isShared_2340_ = v_isSharedCheck_2354_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_continuedDivLeads_2337_);
lean_inc(v_doc_2335_);
lean_inc(v_tokens_2334_);
lean_inc(v_work_2333_);
lean_dec(v_st_2332_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2354_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v_input_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v_snd_2346_; lean_object* v_fst_2347_; lean_object* v_fst_2348_; lean_object* v_snd_2349_; lean_object* v___x_2350_; lean_object* v___x_2352_; 
v_input_2341_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_2333_);
v___x_2342_ = l_List_lengthTR___redArg(v_input_2341_);
v___x_2343_ = lean_unsigned_to_nat(1u);
v___x_2344_ = lean_nat_add(v___x_2342_, v___x_2343_);
lean_dec(v___x_2342_);
v___x_2345_ = lp_lean_x2dftml_LeanFtml_collScan(v_input_2341_, v_tokens_2334_, v_doc_2335_, v___x_2344_);
lean_dec(v___x_2344_);
v_snd_2346_ = lean_ctor_get(v___x_2345_, 1);
lean_inc(v_snd_2346_);
v_fst_2347_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_fst_2347_);
lean_dec_ref(v___x_2345_);
v_fst_2348_ = lean_ctor_get(v_snd_2346_, 0);
lean_inc(v_fst_2348_);
v_snd_2349_ = lean_ctor_get(v_snd_2346_, 1);
lean_inc(v_snd_2349_);
lean_dec(v_snd_2346_);
v___x_2350_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_2347_);
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 2, v_snd_2349_);
lean_ctor_set(v___x_2339_, 1, v_fst_2348_);
lean_ctor_set(v___x_2339_, 0, v___x_2350_);
v___x_2352_ = v___x_2339_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2350_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_fst_2348_);
lean_ctor_set(v_reuseFailAlloc_2353_, 2, v_snd_2349_);
lean_ctor_set(v_reuseFailAlloc_2353_, 3, v_continuedDivLeads_2337_);
lean_ctor_set_uint8(v_reuseFailAlloc_2353_, sizeof(void*)*4, v_fatal_2336_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isTabKeyByte(lean_object* v_b_2355_){
_start:
{
lean_object* v___x_2371_; uint8_t v___x_2372_; 
v___x_2371_ = lean_unsigned_to_nat(48u);
v___x_2372_ = lean_nat_dec_le(v___x_2371_, v_b_2355_);
if (v___x_2372_ == 0)
{
goto v___jp_2366_;
}
else
{
lean_object* v___x_2373_; uint8_t v___x_2374_; 
v___x_2373_ = lean_unsigned_to_nat(57u);
v___x_2374_ = lean_nat_dec_le(v_b_2355_, v___x_2373_);
if (v___x_2374_ == 0)
{
goto v___jp_2366_;
}
else
{
return v___x_2374_;
}
}
v___jp_2356_:
{
lean_object* v___x_2357_; uint8_t v___x_2358_; 
v___x_2357_ = lean_unsigned_to_nat(45u);
v___x_2358_ = lean_nat_dec_eq(v_b_2355_, v___x_2357_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = lean_unsigned_to_nat(95u);
v___x_2360_ = lean_nat_dec_eq(v_b_2355_, v___x_2359_);
return v___x_2360_;
}
else
{
return v___x_2358_;
}
}
v___jp_2361_:
{
lean_object* v___x_2362_; uint8_t v___x_2363_; 
v___x_2362_ = lean_unsigned_to_nat(97u);
v___x_2363_ = lean_nat_dec_le(v___x_2362_, v_b_2355_);
if (v___x_2363_ == 0)
{
goto v___jp_2356_;
}
else
{
lean_object* v___x_2364_; uint8_t v___x_2365_; 
v___x_2364_ = lean_unsigned_to_nat(122u);
v___x_2365_ = lean_nat_dec_le(v_b_2355_, v___x_2364_);
if (v___x_2365_ == 0)
{
goto v___jp_2356_;
}
else
{
return v___x_2365_;
}
}
}
v___jp_2366_:
{
lean_object* v___x_2367_; uint8_t v___x_2368_; 
v___x_2367_ = lean_unsigned_to_nat(65u);
v___x_2368_ = lean_nat_dec_le(v___x_2367_, v_b_2355_);
if (v___x_2368_ == 0)
{
goto v___jp_2361_;
}
else
{
lean_object* v___x_2369_; uint8_t v___x_2370_; 
v___x_2369_ = lean_unsigned_to_nat(90u);
v___x_2370_ = lean_nat_dec_le(v_b_2355_, v___x_2369_);
if (v___x_2370_ == 0)
{
goto v___jp_2361_;
}
else
{
return v___x_2370_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isTabKeyByte___boxed(lean_object* v_b_2375_){
_start:
{
uint8_t v_res_2376_; lean_object* v_r_2377_; 
v_res_2376_ = lp_lean_x2dftml_LeanFtml_isTabKeyByte(v_b_2375_);
lean_dec(v_b_2375_);
v_r_2377_ = lean_box(v_res_2376_);
return v_r_2377_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabNameCands_spec__0(lean_object* v_a_2378_, lean_object* v_a_2379_){
_start:
{
if (lean_obj_tag(v_a_2378_) == 0)
{
lean_object* v___x_2380_; 
v___x_2380_ = lean_array_to_list(v_a_2379_);
return v___x_2380_;
}
else
{
lean_object* v_head_2381_; 
v_head_2381_ = lean_ctor_get(v_a_2378_, 0);
if (lean_obj_tag(v_head_2381_) == 0)
{
lean_object* v_tail_2382_; 
v_tail_2382_ = lean_ctor_get(v_a_2378_, 1);
lean_inc(v_tail_2382_);
lean_dec_ref_known(v_a_2378_, 2);
v_a_2378_ = v_tail_2382_;
goto _start;
}
else
{
lean_object* v_tail_2384_; lean_object* v_val_2385_; lean_object* v___x_2386_; 
lean_inc_ref(v_head_2381_);
v_tail_2384_ = lean_ctor_get(v_a_2378_, 1);
lean_inc(v_tail_2384_);
lean_dec_ref_known(v_a_2378_, 2);
v_val_2385_ = lean_ctor_get(v_head_2381_, 0);
lean_inc(v_val_2385_);
lean_dec_ref_known(v_head_2381_, 1);
v___x_2386_ = lean_array_push(v_a_2379_, v_val_2385_);
v_a_2378_ = v_tail_2384_;
v_a_2379_ = v___x_2386_;
goto _start;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1(void){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabNameCands___closed__0));
v___x_2390_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2389_);
return v___x_2390_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3(void){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabNameCands___closed__2));
v___x_2393_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2392_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabNameCands(lean_object* v_s_2396_){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2397_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1);
lean_inc(v_s_2396_);
v___x_2398_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2397_, v_s_2396_);
v___x_2399_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3, &lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3);
v___x_2400_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2399_, v_s_2396_);
v___x_2401_ = lean_box(0);
v___x_2402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2400_);
lean_ctor_set(v___x_2402_, 1, v___x_2401_);
v___x_2403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2398_);
lean_ctor_set(v___x_2403_, 1, v___x_2402_);
v___x_2404_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabNameCands___closed__4));
v___x_2405_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabNameCands_spec__0(v___x_2403_, v___x_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(lean_object* v_l_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_){
_start:
{
if (lean_obj_tag(v_a_2407_) == 0)
{
lean_dec_ref(v_a_2408_);
lean_inc(v_l_2406_);
return v_l_2406_;
}
else
{
lean_object* v_head_2409_; lean_object* v_tail_2410_; uint8_t v___x_2411_; 
v_head_2409_ = lean_ctor_get(v_a_2407_, 0);
lean_inc(v_head_2409_);
v_tail_2410_ = lean_ctor_get(v_a_2407_, 1);
lean_inc(v_tail_2410_);
lean_dec_ref_known(v_a_2407_, 2);
v___x_2411_ = lp_lean_x2dftml_LeanFtml_isTabKeyByte(v_head_2409_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; 
lean_dec(v_tail_2410_);
lean_dec(v_head_2409_);
v___x_2412_ = lean_array_to_list(v_a_2408_);
return v___x_2412_;
}
else
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_array_push(v_a_2408_, v_head_2409_);
v_a_2407_ = v_tail_2410_;
v_a_2408_ = v___x_2413_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0___boxed(lean_object* v_l_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(v_l_2415_, v_a_2416_, v_a_2417_);
lean_dec(v_l_2415_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(uint8_t v___x_2419_, lean_object* v_l_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_){
_start:
{
if (lean_obj_tag(v_a_2421_) == 0)
{
lean_dec_ref(v_a_2422_);
lean_inc(v_l_2420_);
return v_l_2420_;
}
else
{
lean_object* v_head_2423_; lean_object* v_tail_2424_; lean_object* v___x_2428_; uint8_t v___x_2429_; 
v_head_2423_ = lean_ctor_get(v_a_2421_, 0);
lean_inc(v_head_2423_);
v_tail_2424_ = lean_ctor_get(v_a_2421_, 1);
lean_inc(v_tail_2424_);
lean_dec_ref_known(v_a_2421_, 2);
v___x_2428_ = lean_unsigned_to_nat(34u);
v___x_2429_ = lean_nat_dec_eq(v_head_2423_, v___x_2428_);
if (v___x_2429_ == 0)
{
goto v___jp_2425_;
}
else
{
if (v___x_2419_ == 0)
{
lean_object* v___x_2430_; 
lean_dec(v_tail_2424_);
lean_dec(v_head_2423_);
v___x_2430_ = lean_array_to_list(v_a_2422_);
return v___x_2430_;
}
else
{
goto v___jp_2425_;
}
}
v___jp_2425_:
{
lean_object* v___x_2426_; 
v___x_2426_ = lean_array_push(v_a_2422_, v_head_2423_);
v_a_2421_ = v_tail_2424_;
v_a_2422_ = v___x_2426_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1___boxed(lean_object* v___x_2431_, lean_object* v_l_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_){
_start:
{
uint8_t v___x_204__boxed_2435_; lean_object* v_res_2436_; 
v___x_204__boxed_2435_ = lean_unbox(v___x_2431_);
v_res_2436_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(v___x_204__boxed_2435_, v_l_2432_, v_a_2433_, v_a_2434_);
lean_dec(v_l_2432_);
return v_res_2436_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1(void){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabPairAt___closed__0));
v___x_2439_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabPairAt(lean_object* v_s_2440_){
_start:
{
lean_object* v___x_2441_; lean_object* v_ws_2442_; uint8_t v___x_2443_; 
v___x_2441_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_s_2440_);
v_ws_2442_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_s_2440_, v_s_2440_, v___x_2441_);
v___x_2443_ = l_List_isEmpty___redArg(v_ws_2442_);
if (v___x_2443_ == 0)
{
lean_object* v___x_2444_; lean_object* v_r1_2445_; lean_object* v_key_2446_; uint8_t v___x_2447_; 
v___x_2444_ = l_List_lengthTR___redArg(v_ws_2442_);
lean_dec(v_ws_2442_);
v_r1_2445_ = l_List_drop___redArg(v___x_2444_, v_s_2440_);
lean_dec(v_s_2440_);
lean_inc(v_r1_2445_);
v_key_2446_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(v_r1_2445_, v_r1_2445_, v___x_2441_);
v___x_2447_ = l_List_isEmpty___redArg(v_key_2446_);
if (v___x_2447_ == 0)
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1, &lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1);
v___x_2449_ = l_List_lengthTR___redArg(v_key_2446_);
lean_dec(v_key_2446_);
v___x_2450_ = l_List_drop___redArg(v___x_2449_, v_r1_2445_);
lean_dec(v_r1_2445_);
v___x_2451_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2448_, v___x_2450_);
if (lean_obj_tag(v___x_2451_) == 0)
{
return v___x_2451_;
}
else
{
lean_object* v_val_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2468_; 
v_val_2452_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2454_ = v___x_2451_;
v_isShared_2455_ = v_isSharedCheck_2468_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_val_2452_);
lean_dec(v___x_2451_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2468_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v_val_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
lean_inc(v_val_2452_);
v_val_2456_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(v___x_2447_, v_val_2452_, v_val_2452_, v___x_2441_);
v___x_2457_ = l_List_lengthTR___redArg(v_val_2456_);
lean_dec(v_val_2456_);
v___x_2458_ = l_List_drop___redArg(v___x_2457_, v_val_2452_);
lean_dec(v_val_2452_);
if (lean_obj_tag(v___x_2458_) == 1)
{
lean_object* v_head_2459_; lean_object* v_tail_2460_; lean_object* v___x_2461_; uint8_t v___x_2462_; 
v_head_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_head_2459_);
v_tail_2460_ = lean_ctor_get(v___x_2458_, 1);
lean_inc(v_tail_2460_);
lean_dec_ref_known(v___x_2458_, 2);
v___x_2461_ = lean_unsigned_to_nat(34u);
v___x_2462_ = lean_nat_dec_eq(v_head_2459_, v___x_2461_);
lean_dec(v_head_2459_);
if (v___x_2462_ == 0)
{
lean_object* v___x_2463_; 
lean_dec(v_tail_2460_);
lean_del_object(v___x_2454_);
v___x_2463_ = lean_box(0);
return v___x_2463_;
}
else
{
lean_object* v___x_2465_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v_tail_2460_);
v___x_2465_ = v___x_2454_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_tail_2460_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
else
{
lean_object* v___x_2467_; 
lean_dec(v___x_2458_);
lean_del_object(v___x_2454_);
v___x_2467_ = lean_box(0);
return v___x_2467_;
}
}
}
}
else
{
lean_object* v___x_2469_; 
lean_dec(v_key_2446_);
lean_dec(v_r1_2445_);
v___x_2469_ = lean_box(0);
return v___x_2469_;
}
}
else
{
lean_object* v___x_2470_; 
lean_dec(v_ws_2442_);
lean_dec(v_s_2440_);
v___x_2470_ = lean_box(0);
return v___x_2470_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_pairSteps_spec__0(lean_object* v_a_2471_, lean_object* v_a_2472_){
_start:
{
if (lean_obj_tag(v_a_2471_) == 0)
{
lean_object* v___x_2473_; 
v___x_2473_ = l_List_reverse___redArg(v_a_2472_);
return v___x_2473_;
}
else
{
lean_object* v_head_2474_; lean_object* v_tail_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2494_; 
v_head_2474_ = lean_ctor_get(v_a_2471_, 0);
v_tail_2475_ = lean_ctor_get(v_a_2471_, 1);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_a_2471_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2477_ = v_a_2471_;
v_isShared_2478_ = v_isSharedCheck_2494_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_tail_2475_);
lean_inc(v_head_2474_);
lean_dec(v_a_2471_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2494_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v_fst_2479_; lean_object* v_snd_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2493_; 
v_fst_2479_ = lean_ctor_get(v_head_2474_, 0);
v_snd_2480_ = lean_ctor_get(v_head_2474_, 1);
v_isSharedCheck_2493_ = !lean_is_exclusive(v_head_2474_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2482_ = v_head_2474_;
v_isShared_2483_ = v_isSharedCheck_2493_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_snd_2480_);
lean_inc(v_fst_2479_);
lean_dec(v_head_2474_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2493_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2487_; 
v___x_2484_ = lean_unsigned_to_nat(1u);
v___x_2485_ = lean_nat_add(v_fst_2479_, v___x_2484_);
lean_dec(v_fst_2479_);
if (v_isShared_2483_ == 0)
{
lean_ctor_set(v___x_2482_, 0, v___x_2485_);
v___x_2487_ = v___x_2482_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v___x_2485_);
lean_ctor_set(v_reuseFailAlloc_2492_, 1, v_snd_2480_);
v___x_2487_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
lean_object* v___x_2489_; 
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 1, v_a_2472_);
lean_ctor_set(v___x_2477_, 0, v___x_2487_);
v___x_2489_ = v___x_2477_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2487_);
lean_ctor_set(v_reuseFailAlloc_2491_, 1, v_a_2472_);
v___x_2489_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
v_a_2471_ = v_tail_2475_;
v_a_2472_ = v___x_2489_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairSteps(lean_object* v_s_2495_, lean_object* v_x_2496_){
_start:
{
lean_object* v_zero_2502_; uint8_t v_isZero_2503_; 
v_zero_2502_ = lean_unsigned_to_nat(0u);
v_isZero_2503_ = lean_nat_dec_eq(v_x_2496_, v_zero_2502_);
if (v_isZero_2503_ == 1)
{
goto v___jp_2497_;
}
else
{
lean_object* v___x_2504_; 
lean_inc(v_s_2495_);
v___x_2504_ = lp_lean_x2dftml_LeanFtml_tabPairAt(v_s_2495_);
if (lean_obj_tag(v___x_2504_) == 0)
{
goto v___jp_2497_;
}
else
{
lean_object* v_val_2505_; lean_object* v_one_2506_; lean_object* v_n_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; 
v_val_2505_ = lean_ctor_get(v___x_2504_, 0);
lean_inc(v_val_2505_);
lean_dec_ref_known(v___x_2504_, 1);
v_one_2506_ = lean_unsigned_to_nat(1u);
v_n_2507_ = lean_nat_sub(v_x_2496_, v_one_2506_);
v___x_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2508_, 0, v_zero_2502_);
lean_ctor_set(v___x_2508_, 1, v_s_2495_);
v___x_2509_ = lp_lean_x2dftml_LeanFtml_pairSteps(v_val_2505_, v_n_2507_);
lean_dec(v_n_2507_);
v___x_2510_ = lean_box(0);
v___x_2511_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_pairSteps_spec__0(v___x_2509_, v___x_2510_);
v___x_2512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2508_);
lean_ctor_set(v___x_2512_, 1, v___x_2511_);
return v___x_2512_;
}
}
v___jp_2497_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2498_ = lean_unsigned_to_nat(0u);
v___x_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
lean_ctor_set(v___x_2499_, 1, v_s_2495_);
v___x_2500_ = lean_box(0);
v___x_2501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
return v___x_2501_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairSteps___boxed(lean_object* v_s_2513_, lean_object* v_x_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = lp_lean_x2dftml_LeanFtml_pairSteps(v_s_2513_, v_x_2514_);
lean_dec(v_x_2514_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0(lean_object* v___x_2516_, lean_object* v_s_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_){
_start:
{
if (lean_obj_tag(v_a_2518_) == 0)
{
lean_object* v___x_2520_; 
lean_dec(v_s_2517_);
v___x_2520_ = lean_array_to_list(v_a_2519_);
return v___x_2520_;
}
else
{
lean_object* v_head_2521_; lean_object* v_tail_2522_; lean_object* v_fst_2523_; lean_object* v_snd_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2541_; 
v_head_2521_ = lean_ctor_get(v_a_2518_, 0);
lean_inc(v_head_2521_);
v_tail_2522_ = lean_ctor_get(v_a_2518_, 1);
lean_inc(v_tail_2522_);
lean_dec_ref_known(v_a_2518_, 2);
v_fst_2523_ = lean_ctor_get(v_head_2521_, 0);
v_snd_2524_ = lean_ctor_get(v_head_2521_, 1);
v_isSharedCheck_2541_ = !lean_is_exclusive(v_head_2521_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2526_ = v_head_2521_;
v_isShared_2527_ = v_isSharedCheck_2541_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_snd_2524_);
lean_inc(v_fst_2523_);
lean_dec(v_head_2521_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2541_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2528_; uint8_t v___x_2529_; 
v___x_2528_ = lean_unsigned_to_nat(0u);
v___x_2529_ = lean_nat_dec_eq(v_fst_2523_, v___x_2528_);
lean_dec(v_fst_2523_);
if (v___x_2529_ == 0)
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2536_; 
v___x_2530_ = l_List_lengthTR___redArg(v_snd_2524_);
v___x_2531_ = lean_nat_sub(v___x_2516_, v___x_2530_);
lean_dec(v___x_2530_);
v___x_2532_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_s_2517_);
v___x_2533_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2517_, v_s_2517_, v___x_2531_, v___x_2532_);
v___x_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2534_);
v___x_2536_ = v___x_2526_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2534_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v_snd_2524_);
v___x_2536_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
lean_object* v___x_2537_; 
v___x_2537_ = lean_array_push(v_a_2519_, v___x_2536_);
v_a_2518_ = v_tail_2522_;
v_a_2519_ = v___x_2537_;
goto _start;
}
}
else
{
lean_del_object(v___x_2526_);
lean_dec(v_snd_2524_);
v_a_2518_ = v_tail_2522_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0___boxed(lean_object* v___x_2542_, lean_object* v_s_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0(v___x_2542_, v_s_2543_, v_a_2544_, v_a_2545_);
lean_dec(v___x_2542_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabG2Cands(lean_object* v_s_2547_){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v_steps_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2548_ = l_List_lengthTR___redArg(v_s_2547_);
v___x_2549_ = lean_unsigned_to_nat(1u);
v___x_2550_ = lean_nat_add(v___x_2548_, v___x_2549_);
lean_inc_n(v_s_2547_, 2);
v_steps_2551_ = lp_lean_x2dftml_LeanFtml_pairSteps(v_s_2547_, v___x_2550_);
lean_dec(v___x_2550_);
v___x_2552_ = l_List_reverse___redArg(v_steps_2551_);
v___x_2553_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__2));
v___x_2554_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0(v___x_2548_, v_s_2547_, v___x_2552_, v___x_2553_);
lean_dec(v___x_2548_);
v___x_2555_ = lean_box(0);
v___x_2556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2555_);
lean_ctor_set(v___x_2556_, 1, v_s_2547_);
v___x_2557_ = lean_box(0);
v___x_2558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2556_);
lean_ctor_set(v___x_2558_, 1, v___x_2557_);
v___x_2559_ = l_List_appendTR___redArg(v___x_2554_, v___x_2558_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0(uint8_t v___x_2560_, lean_object* v_l_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_){
_start:
{
if (lean_obj_tag(v_a_2562_) == 0)
{
lean_dec_ref(v_a_2563_);
lean_inc(v_l_2561_);
return v_l_2561_;
}
else
{
lean_object* v_head_2564_; lean_object* v_tail_2565_; lean_object* v___x_2569_; uint8_t v___x_2570_; 
v_head_2564_ = lean_ctor_get(v_a_2562_, 0);
lean_inc(v_head_2564_);
v_tail_2565_ = lean_ctor_get(v_a_2562_, 1);
lean_inc(v_tail_2565_);
lean_dec_ref_known(v_a_2562_, 2);
v___x_2569_ = lean_unsigned_to_nat(93u);
v___x_2570_ = lean_nat_dec_eq(v_head_2564_, v___x_2569_);
if (v___x_2570_ == 0)
{
goto v___jp_2566_;
}
else
{
if (v___x_2560_ == 0)
{
lean_object* v___x_2571_; 
lean_dec(v_tail_2565_);
lean_dec(v_head_2564_);
v___x_2571_ = lean_array_to_list(v_a_2563_);
return v___x_2571_;
}
else
{
goto v___jp_2566_;
}
}
v___jp_2566_:
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_array_push(v_a_2563_, v_head_2564_);
v_a_2562_ = v_tail_2565_;
v_a_2563_ = v___x_2567_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0___boxed(lean_object* v___x_2572_, lean_object* v_l_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_){
_start:
{
uint8_t v___x_243__boxed_2576_; lean_object* v_res_2577_; 
v___x_243__boxed_2576_ = lean_unbox(v___x_2572_);
v_res_2577_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0(v___x_243__boxed_2576_, v_l_2573_, v_a_2574_, v_a_2575_);
lean_dec(v_l_2573_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1(lean_object* v_wsLen_2578_, lean_object* v_s_2579_, lean_object* v_afterWs_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_){
_start:
{
if (lean_obj_tag(v_a_2581_) == 0)
{
lean_object* v___x_2583_; 
lean_dec(v_s_2579_);
v___x_2583_ = lean_array_to_list(v_a_2582_);
return v___x_2583_;
}
else
{
lean_object* v_head_2584_; lean_object* v_tail_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2603_; 
v_head_2584_ = lean_ctor_get(v_a_2581_, 0);
v_tail_2585_ = lean_ctor_get(v_a_2581_, 1);
v_isSharedCheck_2603_ = !lean_is_exclusive(v_a_2581_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2587_ = v_a_2581_;
v_isShared_2588_ = v_isSharedCheck_2603_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_tail_2585_);
lean_inc(v_head_2584_);
lean_dec(v_a_2581_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2603_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2589_; lean_object* v_midLen_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2599_; 
v___x_2589_ = lean_unsigned_to_nat(1u);
v_midLen_2590_ = lean_nat_add(v_head_2584_, v___x_2589_);
lean_dec(v_head_2584_);
v___x_2591_ = lean_nat_add(v_wsLen_2578_, v_midLen_2590_);
v___x_2592_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_s_2579_);
v___x_2593_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2579_, v_s_2579_, v___x_2591_, v___x_2592_);
v___x_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
v___x_2595_ = l_List_drop___redArg(v_midLen_2590_, v_afterWs_2580_);
v___x_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2594_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = lean_box(0);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 1, v___x_2597_);
lean_ctor_set(v___x_2587_, 0, v___x_2596_);
v___x_2599_ = v___x_2587_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v___x_2596_);
lean_ctor_set(v_reuseFailAlloc_2602_, 1, v___x_2597_);
v___x_2599_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
lean_object* v___x_2600_; 
v___x_2600_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2582_, v___x_2599_);
v_a_2581_ = v_tail_2585_;
v_a_2582_ = v___x_2600_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1___boxed(lean_object* v_wsLen_2604_, lean_object* v_s_2605_, lean_object* v_afterWs_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1(v_wsLen_2604_, v_s_2605_, v_afterWs_2606_, v_a_2607_, v_a_2608_);
lean_dec(v_afterWs_2606_);
lean_dec(v_wsLen_2604_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2(lean_object* v_s_2610_, uint8_t v___x_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_){
_start:
{
if (lean_obj_tag(v_a_2612_) == 0)
{
lean_object* v___x_2614_; 
lean_dec(v_s_2610_);
v___x_2614_ = lean_array_to_list(v_a_2613_);
return v___x_2614_;
}
else
{
lean_object* v_head_2615_; lean_object* v_tail_2616_; lean_object* v___x_2617_; lean_object* v_wsLen_2618_; lean_object* v_afterWs_2619_; lean_object* v___x_2620_; lean_object* v_midRun_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v_head_2615_ = lean_ctor_get(v_a_2612_, 0);
v_tail_2616_ = lean_ctor_get(v_a_2612_, 1);
v___x_2617_ = lean_unsigned_to_nat(1u);
v_wsLen_2618_ = lean_nat_add(v_head_2615_, v___x_2617_);
lean_inc(v_wsLen_2618_);
v_afterWs_2619_ = l_List_drop___redArg(v_wsLen_2618_, v_s_2610_);
v___x_2620_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_afterWs_2619_);
v_midRun_2621_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0(v___x_2611_, v_afterWs_2619_, v_afterWs_2619_, v___x_2620_);
v___x_2622_ = l_List_lengthTR___redArg(v_midRun_2621_);
lean_dec(v_midRun_2621_);
v___x_2623_ = l_List_range(v___x_2622_);
lean_inc(v_s_2610_);
v___x_2624_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1(v_wsLen_2618_, v_s_2610_, v_afterWs_2619_, v___x_2623_, v___x_2620_);
lean_dec(v_afterWs_2619_);
lean_dec(v_wsLen_2618_);
v___x_2625_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2613_, v___x_2624_);
v_a_2612_ = v_tail_2616_;
v_a_2613_ = v___x_2625_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2___boxed(lean_object* v_s_2627_, lean_object* v___x_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
uint8_t v___x_319__boxed_2631_; lean_object* v_res_2632_; 
v___x_319__boxed_2631_ = lean_unbox(v___x_2628_);
v_res_2632_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2(v_s_2627_, v___x_319__boxed_2631_, v_a_2629_, v_a_2630_);
lean_dec(v_a_2629_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabG1Cands(lean_object* v_s_2633_){
_start:
{
lean_object* v___y_2635_; lean_object* v___x_2641_; lean_object* v_wsRun_2642_; uint8_t v___x_2643_; 
v___x_2641_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_s_2633_);
v_wsRun_2642_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_s_2633_, v_s_2633_, v___x_2641_);
v___x_2643_ = l_List_isEmpty___redArg(v_wsRun_2642_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2644_ = l_List_lengthTR___redArg(v_wsRun_2642_);
lean_dec(v_wsRun_2642_);
v___x_2645_ = l_List_range(v___x_2644_);
v___x_2646_ = l_List_reverse___redArg(v___x_2645_);
lean_inc(v_s_2633_);
v___x_2647_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2(v_s_2633_, v___x_2643_, v___x_2646_, v___x_2641_);
lean_dec(v___x_2646_);
v___y_2635_ = v___x_2647_;
goto v___jp_2634_;
}
else
{
lean_object* v___x_2648_; 
lean_dec(v_wsRun_2642_);
v___x_2648_ = lean_box(0);
v___y_2635_ = v___x_2648_;
goto v___jp_2634_;
}
v___jp_2634_:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2636_ = lean_box(0);
v___x_2637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2637_, 0, v___x_2636_);
lean_ctor_set(v___x_2637_, 1, v_s_2633_);
v___x_2638_ = lean_box(0);
v___x_2639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2637_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = l_List_appendTR___redArg(v___y_2635_, v___x_2639_);
return v___x_2640_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabUnitCands_spec__0(lean_object* v_s_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_){
_start:
{
if (lean_obj_tag(v_a_2650_) == 0)
{
lean_object* v___x_2652_; 
lean_dec(v_s_2649_);
v___x_2652_ = l_List_reverse___redArg(v_a_2651_);
return v___x_2652_;
}
else
{
lean_object* v_head_2653_; lean_object* v_tail_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2679_; 
v_head_2653_ = lean_ctor_get(v_a_2650_, 0);
v_tail_2654_ = lean_ctor_get(v_a_2650_, 1);
v_isSharedCheck_2679_ = !lean_is_exclusive(v_a_2650_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2656_ = v_a_2650_;
v_isShared_2657_ = v_isSharedCheck_2679_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_tail_2654_);
lean_inc(v_head_2653_);
lean_dec(v_a_2650_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2679_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v_snd_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2677_; 
v_snd_2658_ = lean_ctor_get(v_head_2653_, 1);
v_isSharedCheck_2677_ = !lean_is_exclusive(v_head_2653_);
if (v_isSharedCheck_2677_ == 0)
{
lean_object* v_unused_2678_; 
v_unused_2678_ = lean_ctor_get(v_head_2653_, 0);
lean_dec(v_unused_2678_);
v___x_2660_ = v_head_2653_;
v_isShared_2661_ = v_isSharedCheck_2677_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_snd_2658_);
lean_dec(v_head_2653_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2677_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v_after_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2662_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_snd_2658_);
v___x_2663_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_snd_2658_, v_snd_2658_, v___x_2662_);
v___x_2664_ = l_List_lengthTR___redArg(v___x_2663_);
lean_dec(v___x_2663_);
v_after_2665_ = l_List_drop___redArg(v___x_2664_, v_snd_2658_);
lean_dec(v_snd_2658_);
v___x_2666_ = l_List_lengthTR___redArg(v_s_2649_);
v___x_2667_ = l_List_lengthTR___redArg(v_after_2665_);
v___x_2668_ = lean_nat_sub(v___x_2666_, v___x_2667_);
lean_dec(v___x_2667_);
lean_dec(v___x_2666_);
lean_inc(v_s_2649_);
v___x_2669_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2649_, v_s_2649_, v___x_2668_, v___x_2662_);
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v_after_2665_);
lean_ctor_set(v___x_2660_, 0, v___x_2669_);
v___x_2671_ = v___x_2660_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2676_, 1, v_after_2665_);
v___x_2671_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2673_; 
if (v_isShared_2657_ == 0)
{
lean_ctor_set(v___x_2656_, 1, v_a_2651_);
lean_ctor_set(v___x_2656_, 0, v___x_2671_);
v___x_2673_ = v___x_2656_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2671_);
lean_ctor_set(v_reuseFailAlloc_2675_, 1, v_a_2651_);
v___x_2673_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
v_a_2650_ = v_tail_2654_;
v_a_2651_ = v___x_2673_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__0));
v___x_2682_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2681_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1(lean_object* v_s_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_){
_start:
{
if (lean_obj_tag(v_a_2684_) == 0)
{
lean_object* v___x_2686_; 
lean_dec(v_s_2683_);
v___x_2686_ = lean_array_to_list(v_a_2685_);
return v___x_2686_;
}
else
{
lean_object* v_head_2687_; lean_object* v_tail_2688_; lean_object* v_snd_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v_head_2687_ = lean_ctor_get(v_a_2684_, 0);
lean_inc(v_head_2687_);
v_tail_2688_ = lean_ctor_get(v_a_2684_, 1);
lean_inc(v_tail_2688_);
lean_dec_ref_known(v_a_2684_, 2);
v_snd_2689_ = lean_ctor_get(v_head_2687_, 1);
lean_inc(v_snd_2689_);
lean_dec(v_head_2687_);
v___x_2690_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1);
v___x_2691_ = lp_lean_x2dftml_LeanFtml_occurrencesCI(v___x_2690_, v_snd_2689_);
v___x_2692_ = lean_box(0);
lean_inc(v_s_2683_);
v___x_2693_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabUnitCands_spec__0(v_s_2683_, v___x_2691_, v___x_2692_);
v___x_2694_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2685_, v___x_2693_);
v_a_2684_ = v_tail_2688_;
v_a_2685_ = v___x_2694_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__2(lean_object* v_s_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
if (lean_obj_tag(v_a_2697_) == 0)
{
lean_object* v___x_2699_; 
lean_dec(v_s_2696_);
v___x_2699_ = lean_array_to_list(v_a_2698_);
return v___x_2699_;
}
else
{
lean_object* v_head_2700_; lean_object* v_tail_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; 
v_head_2700_ = lean_ctor_get(v_a_2697_, 0);
lean_inc(v_head_2700_);
v_tail_2701_ = lean_ctor_get(v_a_2697_, 1);
lean_inc(v_tail_2701_);
lean_dec_ref_known(v_a_2697_, 2);
v___x_2702_ = lp_lean_x2dftml_LeanFtml_attrGroupCands(v_head_2700_);
v___x_2703_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
lean_inc(v_s_2696_);
v___x_2704_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1(v_s_2696_, v___x_2702_, v___x_2703_);
v___x_2705_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2698_, v___x_2704_);
v_a_2697_ = v_tail_2701_;
v_a_2698_ = v___x_2705_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1(void){
_start:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2708_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__0));
v___x_2709_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2708_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabUnitCands(lean_object* v_s_2710_){
_start:
{
lean_object* v___y_2712_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2715_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1);
lean_inc(v_s_2710_);
v___x_2716_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2715_, v_s_2710_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v___x_2717_; 
v___x_2717_ = lean_box(0);
v___y_2712_ = v___x_2717_;
goto v___jp_2711_;
}
else
{
lean_object* v_val_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v_val_2718_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_val_2718_);
lean_dec_ref_known(v___x_2716_, 1);
v___x_2719_ = lean_box(0);
v___x_2720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2720_, 0, v_val_2718_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
v___y_2712_ = v___x_2720_;
goto v___jp_2711_;
}
v___jp_2711_:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; 
v___x_2713_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v___x_2714_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__2(v_s_2710_, v___y_2712_, v___x_2713_);
return v___x_2714_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__3(lean_object* v_fst_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_){
_start:
{
if (lean_obj_tag(v_a_2722_) == 0)
{
lean_object* v___x_2724_; 
lean_dec(v_fst_2721_);
v___x_2724_ = l_List_reverse___redArg(v_a_2723_);
return v___x_2724_;
}
else
{
lean_object* v_head_2725_; lean_object* v_tail_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2744_; 
v_head_2725_ = lean_ctor_get(v_a_2722_, 0);
v_tail_2726_ = lean_ctor_get(v_a_2722_, 1);
v_isSharedCheck_2744_ = !lean_is_exclusive(v_a_2722_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2728_ = v_a_2722_;
v_isShared_2729_ = v_isSharedCheck_2744_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_tail_2726_);
lean_inc(v_head_2725_);
lean_dec(v_a_2722_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2744_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v_fst_2730_; lean_object* v_snd_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2743_; 
v_fst_2730_ = lean_ctor_get(v_head_2725_, 0);
v_snd_2731_ = lean_ctor_get(v_head_2725_, 1);
v_isSharedCheck_2743_ = !lean_is_exclusive(v_head_2725_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2733_ = v_head_2725_;
v_isShared_2734_ = v_isSharedCheck_2743_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_snd_2731_);
lean_inc(v_fst_2730_);
lean_dec(v_head_2725_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2743_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2735_; lean_object* v___x_2737_; 
lean_inc(v_fst_2721_);
v___x_2735_ = l_List_appendTR___redArg(v_fst_2721_, v_fst_2730_);
if (v_isShared_2734_ == 0)
{
lean_ctor_set(v___x_2733_, 0, v___x_2735_);
v___x_2737_ = v___x_2733_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v___x_2735_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v_snd_2731_);
v___x_2737_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
lean_object* v___x_2739_; 
if (v_isShared_2729_ == 0)
{
lean_ctor_set(v___x_2728_, 1, v_a_2723_);
lean_ctor_set(v___x_2728_, 0, v___x_2737_);
v___x_2739_ = v___x_2728_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2737_);
lean_ctor_set(v_reuseFailAlloc_2741_, 1, v_a_2723_);
v___x_2739_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
v_a_2722_ = v_tail_2726_;
v_a_2723_ = v___x_2739_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__0(lean_object* v_a_2745_, lean_object* v_a_2746_){
_start:
{
if (lean_obj_tag(v_a_2745_) == 0)
{
lean_object* v___x_2747_; 
v___x_2747_ = l_List_reverse___redArg(v_a_2746_);
return v___x_2747_;
}
else
{
lean_object* v_head_2748_; lean_object* v_tail_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2763_; 
v_head_2748_ = lean_ctor_get(v_a_2745_, 0);
v_tail_2749_ = lean_ctor_get(v_a_2745_, 1);
v_isSharedCheck_2763_ = !lean_is_exclusive(v_a_2745_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2751_ = v_a_2745_;
v_isShared_2752_ = v_isSharedCheck_2763_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_tail_2749_);
lean_inc(v_head_2748_);
lean_dec(v_a_2745_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2763_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2760_; 
v___x_2753_ = lean_box(0);
v___x_2754_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_head_2748_);
v___x_2755_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_head_2748_, v_head_2748_, v___x_2754_);
v___x_2756_ = l_List_lengthTR___redArg(v___x_2755_);
lean_dec(v___x_2755_);
v___x_2757_ = l_List_drop___redArg(v___x_2756_, v_head_2748_);
lean_dec(v_head_2748_);
v___x_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2753_);
lean_ctor_set(v___x_2758_, 1, v___x_2757_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set(v___x_2751_, 1, v_a_2746_);
lean_ctor_set(v___x_2751_, 0, v___x_2758_);
v___x_2760_ = v___x_2751_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v___x_2758_);
lean_ctor_set(v_reuseFailAlloc_2762_, 1, v_a_2746_);
v___x_2760_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
v_a_2745_ = v_tail_2749_;
v_a_2746_ = v___x_2760_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__1(lean_object* v_a_2764_, lean_object* v_a_2765_){
_start:
{
if (lean_obj_tag(v_a_2764_) == 0)
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_array_to_list(v_a_2765_);
return v___x_2766_;
}
else
{
lean_object* v_head_2767_; lean_object* v_tail_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2786_; 
v_head_2767_ = lean_ctor_get(v_a_2764_, 0);
v_tail_2768_ = lean_ctor_get(v_a_2764_, 1);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_a_2764_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2770_ = v_a_2764_;
v_isShared_2771_ = v_isSharedCheck_2786_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_tail_2768_);
lean_inc(v_head_2767_);
lean_dec(v_a_2764_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2786_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___y_2773_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2778_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1, &lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1);
v___x_2779_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2778_, v_head_2767_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v___x_2780_; 
lean_del_object(v___x_2770_);
v___x_2780_ = lean_box(0);
v___y_2773_ = v___x_2780_;
goto v___jp_2772_;
}
else
{
lean_object* v_val_2781_; lean_object* v___x_2782_; lean_object* v___x_2784_; 
v_val_2781_ = lean_ctor_get(v___x_2779_, 0);
lean_inc(v_val_2781_);
lean_dec_ref_known(v___x_2779_, 1);
v___x_2782_ = lean_box(0);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 1, v___x_2782_);
lean_ctor_set(v___x_2770_, 0, v_val_2781_);
v___x_2784_ = v___x_2770_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_val_2781_);
lean_ctor_set(v_reuseFailAlloc_2785_, 1, v___x_2782_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
v___y_2773_ = v___x_2784_;
goto v___jp_2772_;
}
}
v___jp_2772_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2774_ = lean_box(0);
v___x_2775_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__0(v___y_2773_, v___x_2774_);
v___x_2776_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2765_, v___x_2775_);
v_a_2764_ = v_tail_2768_;
v_a_2765_ = v___x_2776_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__2(lean_object* v_a_2787_, lean_object* v_a_2788_){
_start:
{
if (lean_obj_tag(v_a_2787_) == 0)
{
lean_object* v___x_2789_; 
v___x_2789_ = lean_array_to_list(v_a_2788_);
return v___x_2789_;
}
else
{
lean_object* v_head_2790_; lean_object* v_tail_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v_head_2790_ = lean_ctor_get(v_a_2787_, 0);
lean_inc(v_head_2790_);
v_tail_2791_ = lean_ctor_get(v_a_2787_, 1);
lean_inc(v_tail_2791_);
lean_dec_ref_known(v_a_2787_, 2);
v___x_2792_ = lp_lean_x2dftml_LeanFtml_tabNameCands(v_head_2790_);
v___x_2793_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v___x_2794_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__1(v___x_2792_, v___x_2793_);
v___x_2795_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2788_, v___x_2794_);
v_a_2787_ = v_tail_2791_;
v_a_2788_ = v___x_2795_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2798_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__0));
v___x_2799_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2798_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5(lean_object* v_a_2800_, lean_object* v_a_2801_){
_start:
{
if (lean_obj_tag(v_a_2800_) == 0)
{
lean_object* v___x_2802_; 
v___x_2802_ = lean_array_to_list(v_a_2801_);
return v___x_2802_;
}
else
{
lean_object* v_head_2803_; lean_object* v_tail_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2822_; 
v_head_2803_ = lean_ctor_get(v_a_2800_, 0);
v_tail_2804_ = lean_ctor_get(v_a_2800_, 1);
v_isSharedCheck_2822_ = !lean_is_exclusive(v_a_2800_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2806_ = v_a_2800_;
v_isShared_2807_ = v_isSharedCheck_2822_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_tail_2804_);
lean_inc(v_head_2803_);
lean_dec(v_a_2800_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2822_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___y_2809_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1);
v___x_2815_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2814_, v_head_2803_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v___x_2816_; 
lean_del_object(v___x_2806_);
v___x_2816_ = lean_box(0);
v___y_2809_ = v___x_2816_;
goto v___jp_2808_;
}
else
{
lean_object* v_val_2817_; lean_object* v___x_2818_; lean_object* v___x_2820_; 
v_val_2817_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_val_2817_);
lean_dec_ref_known(v___x_2815_, 1);
v___x_2818_ = lean_box(0);
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 1, v___x_2818_);
lean_ctor_set(v___x_2806_, 0, v_val_2817_);
v___x_2820_ = v___x_2806_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_val_2817_);
lean_ctor_set(v_reuseFailAlloc_2821_, 1, v___x_2818_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
v___y_2809_ = v___x_2820_;
goto v___jp_2808_;
}
}
v___jp_2808_:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2810_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v___x_2811_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__2(v___y_2809_, v___x_2810_);
v___x_2812_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2801_, v___x_2811_);
v_a_2800_ = v_tail_2804_;
v_a_2801_ = v___x_2812_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1(void){
_start:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2824_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__0));
v___x_2825_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2824_);
return v___x_2825_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabRegionCands(lean_object* v_s_2826_, lean_object* v_x_2827_){
_start:
{
lean_object* v_zero_2828_; uint8_t v_isZero_2829_; 
v_zero_2828_ = lean_unsigned_to_nat(0u);
v_isZero_2829_ = lean_nat_dec_eq(v_x_2827_, v_zero_2828_);
if (v_isZero_2829_ == 1)
{
lean_object* v___x_2830_; 
lean_dec(v_s_2826_);
v___x_2830_ = lean_box(0);
return v___x_2830_;
}
else
{
lean_object* v_one_2831_; lean_object* v_n_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v_more_2835_; lean_object* v___y_2837_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v_one_2831_ = lean_unsigned_to_nat(1u);
v_n_2832_ = lean_nat_sub(v_x_2827_, v_one_2831_);
lean_inc(v_s_2826_);
v___x_2833_ = lp_lean_x2dftml_LeanFtml_tabUnitCands(v_s_2826_);
v___x_2834_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v_more_2835_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4(v_n_2832_, v___x_2833_, v___x_2834_);
lean_dec(v_n_2832_);
v___x_2840_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1);
v___x_2841_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2840_, v_s_2826_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v___x_2842_; 
v___x_2842_ = lean_box(0);
v___y_2837_ = v___x_2842_;
goto v___jp_2836_;
}
else
{
lean_object* v_val_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v_val_2843_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_val_2843_);
lean_dec_ref_known(v___x_2841_, 1);
v___x_2844_ = lean_box(0);
v___x_2845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2845_, 0, v_val_2843_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___y_2837_ = v___x_2845_;
goto v___jp_2836_;
}
v___jp_2836_:
{
lean_object* v_exit_2838_; lean_object* v___x_2839_; 
v_exit_2838_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5(v___y_2837_, v___x_2834_);
v___x_2839_ = l_List_appendTR___redArg(v_more_2835_, v_exit_2838_);
return v___x_2839_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4(lean_object* v_n_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_){
_start:
{
if (lean_obj_tag(v_a_2847_) == 0)
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_array_to_list(v_a_2848_);
return v___x_2849_;
}
else
{
lean_object* v_head_2850_; lean_object* v_tail_2851_; lean_object* v_fst_2852_; lean_object* v_snd_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; 
v_head_2850_ = lean_ctor_get(v_a_2847_, 0);
lean_inc(v_head_2850_);
v_tail_2851_ = lean_ctor_get(v_a_2847_, 1);
lean_inc(v_tail_2851_);
lean_dec_ref_known(v_a_2847_, 2);
v_fst_2852_ = lean_ctor_get(v_head_2850_, 0);
lean_inc(v_fst_2852_);
v_snd_2853_ = lean_ctor_get(v_head_2850_, 1);
lean_inc(v_snd_2853_);
lean_dec(v_head_2850_);
v___x_2854_ = lp_lean_x2dftml_LeanFtml_tabRegionCands(v_snd_2853_, v_n_2846_);
v___x_2855_ = lean_box(0);
v___x_2856_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__3(v_fst_2852_, v___x_2854_, v___x_2855_);
v___x_2857_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2848_, v___x_2856_);
v_a_2847_ = v_tail_2851_;
v_a_2848_ = v___x_2857_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4___boxed(lean_object* v_n_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4(v_n_2859_, v_a_2860_, v_a_2861_);
lean_dec(v_n_2859_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabRegionCands___boxed(lean_object* v_s_2863_, lean_object* v_x_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = lp_lean_x2dftml_LeanFtml_tabRegionCands(v_s_2863_, v_x_2864_);
lean_dec(v_x_2864_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabviewMatchAt_spec__0(lean_object* v_fst_2866_, lean_object* v_fst_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_){
_start:
{
if (lean_obj_tag(v_a_2868_) == 0)
{
lean_object* v___x_2870_; 
lean_dec(v_fst_2867_);
lean_dec(v_fst_2866_);
v___x_2870_ = l_List_reverse___redArg(v_a_2869_);
return v___x_2870_;
}
else
{
lean_object* v_head_2871_; lean_object* v_tail_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2891_; 
v_head_2871_ = lean_ctor_get(v_a_2868_, 0);
v_tail_2872_ = lean_ctor_get(v_a_2868_, 1);
v_isSharedCheck_2891_ = !lean_is_exclusive(v_a_2868_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2874_ = v_a_2868_;
v_isShared_2875_ = v_isSharedCheck_2891_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_tail_2872_);
lean_inc(v_head_2871_);
lean_dec(v_a_2868_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2891_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v_fst_2876_; lean_object* v_snd_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2890_; 
v_fst_2876_ = lean_ctor_get(v_head_2871_, 0);
v_snd_2877_ = lean_ctor_get(v_head_2871_, 1);
v_isSharedCheck_2890_ = !lean_is_exclusive(v_head_2871_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2879_ = v_head_2871_;
v_isShared_2880_ = v_isSharedCheck_2890_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_snd_2877_);
lean_inc(v_fst_2876_);
lean_dec(v_head_2871_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2890_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2881_; lean_object* v___x_2883_; 
lean_inc(v_fst_2866_);
v___x_2881_ = l_List_appendTR___redArg(v_fst_2866_, v_fst_2876_);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v___x_2881_);
v___x_2883_ = v___x_2879_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v___x_2881_);
lean_ctor_set(v_reuseFailAlloc_2889_, 1, v_snd_2877_);
v___x_2883_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
lean_object* v___x_2884_; lean_object* v___x_2886_; 
lean_inc(v_fst_2867_);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v_fst_2867_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 1, v_a_2869_);
lean_ctor_set(v___x_2874_, 0, v___x_2884_);
v___x_2886_ = v___x_2874_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v___x_2884_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v_a_2869_);
v___x_2886_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
v_a_2868_ = v_tail_2872_;
v_a_2869_ = v___x_2886_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__1(lean_object* v_fst_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_){
_start:
{
if (lean_obj_tag(v_a_2893_) == 0)
{
lean_object* v___x_2895_; 
lean_dec(v_fst_2892_);
v___x_2895_ = lean_array_to_list(v_a_2894_);
return v___x_2895_;
}
else
{
lean_object* v_head_2896_; lean_object* v_tail_2897_; lean_object* v_fst_2898_; lean_object* v_snd_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v_head_2896_ = lean_ctor_get(v_a_2893_, 0);
lean_inc(v_head_2896_);
v_tail_2897_ = lean_ctor_get(v_a_2893_, 1);
lean_inc(v_tail_2897_);
lean_dec_ref_known(v_a_2893_, 2);
v_fst_2898_ = lean_ctor_get(v_head_2896_, 0);
lean_inc(v_fst_2898_);
v_snd_2899_ = lean_ctor_get(v_head_2896_, 1);
lean_inc(v_snd_2899_);
lean_dec(v_head_2896_);
v___x_2900_ = l_List_lengthTR___redArg(v_snd_2899_);
v___x_2901_ = lean_unsigned_to_nat(1u);
v___x_2902_ = lean_nat_add(v___x_2900_, v___x_2901_);
lean_dec(v___x_2900_);
v___x_2903_ = lp_lean_x2dftml_LeanFtml_tabRegionCands(v_snd_2899_, v___x_2902_);
lean_dec(v___x_2902_);
v___x_2904_ = lean_box(0);
lean_inc(v_fst_2892_);
v___x_2905_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabviewMatchAt_spec__0(v_fst_2898_, v_fst_2892_, v___x_2903_, v___x_2904_);
v___x_2906_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2894_, v___x_2905_);
v_a_2893_ = v_tail_2897_;
v_a_2894_ = v___x_2906_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2(lean_object* v_snd_2908_, lean_object* v_fst_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_){
_start:
{
if (lean_obj_tag(v_a_2910_) == 0)
{
lean_object* v___x_2912_; 
lean_dec(v_fst_2909_);
v___x_2912_ = lean_array_to_list(v_a_2911_);
return v___x_2912_;
}
else
{
lean_object* v_head_2913_; lean_object* v_tail_2914_; lean_object* v_r3_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v_head_2913_ = lean_ctor_get(v_a_2910_, 0);
lean_inc(v_head_2913_);
v_tail_2914_ = lean_ctor_get(v_a_2910_, 1);
lean_inc(v_tail_2914_);
lean_dec_ref_known(v_a_2910_, 2);
v_r3_2915_ = l_List_drop___redArg(v_head_2913_, v_snd_2908_);
v___x_2916_ = lp_lean_x2dftml_LeanFtml_tabUnitCands(v_r3_2915_);
v___x_2917_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
lean_inc(v_fst_2909_);
v___x_2918_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__1(v_fst_2909_, v___x_2916_, v___x_2917_);
v___x_2919_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2911_, v___x_2918_);
v_a_2910_ = v_tail_2914_;
v_a_2911_ = v___x_2919_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2___boxed(lean_object* v_snd_2921_, lean_object* v_fst_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2(v_snd_2921_, v_fst_2922_, v_a_2923_, v_a_2924_);
lean_dec(v_snd_2921_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__3(lean_object* v_a_2926_, lean_object* v_a_2927_){
_start:
{
if (lean_obj_tag(v_a_2926_) == 0)
{
lean_object* v___x_2928_; 
v___x_2928_ = lean_array_to_list(v_a_2927_);
return v___x_2928_;
}
else
{
lean_object* v_head_2929_; lean_object* v_tail_2930_; lean_object* v_fst_2931_; lean_object* v_snd_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v_wsLen_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v_head_2929_ = lean_ctor_get(v_a_2926_, 0);
lean_inc(v_head_2929_);
v_tail_2930_ = lean_ctor_get(v_a_2926_, 1);
lean_inc(v_tail_2930_);
lean_dec_ref_known(v_a_2926_, 2);
v_fst_2931_ = lean_ctor_get(v_head_2929_, 0);
lean_inc(v_fst_2931_);
v_snd_2932_ = lean_ctor_get(v_head_2929_, 1);
lean_inc_n(v_snd_2932_, 2);
lean_dec(v_head_2929_);
v___x_2933_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_2934_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_snd_2932_, v_snd_2932_, v___x_2933_);
v_wsLen_2935_ = l_List_lengthTR___redArg(v___x_2934_);
lean_dec(v___x_2934_);
v___x_2936_ = lean_unsigned_to_nat(1u);
v___x_2937_ = lean_nat_add(v_wsLen_2935_, v___x_2936_);
lean_dec(v_wsLen_2935_);
v___x_2938_ = l_List_range(v___x_2937_);
v___x_2939_ = l_List_reverse___redArg(v___x_2938_);
v___x_2940_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2(v_snd_2932_, v_fst_2931_, v___x_2939_, v___x_2933_);
lean_dec(v_snd_2932_);
v___x_2941_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2927_, v___x_2940_);
v_a_2926_ = v_tail_2930_;
v_a_2927_ = v___x_2941_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__4(lean_object* v_a_2943_, lean_object* v_a_2944_){
_start:
{
if (lean_obj_tag(v_a_2943_) == 0)
{
lean_object* v___x_2945_; 
v___x_2945_ = lean_array_to_list(v_a_2944_);
return v___x_2945_;
}
else
{
lean_object* v_head_2946_; lean_object* v_tail_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v_head_2946_ = lean_ctor_get(v_a_2943_, 0);
lean_inc(v_head_2946_);
v_tail_2947_ = lean_ctor_get(v_a_2943_, 1);
lean_inc(v_tail_2947_);
lean_dec_ref_known(v_a_2943_, 2);
v___x_2948_ = lp_lean_x2dftml_LeanFtml_attrGroupCands(v_head_2946_);
v___x_2949_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
v___x_2950_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__3(v___x_2948_, v___x_2949_);
v___x_2951_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2944_, v___x_2950_);
v_a_2943_ = v_tail_2947_;
v_a_2944_ = v___x_2951_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__5(lean_object* v_a_2953_, lean_object* v_a_2954_){
_start:
{
if (lean_obj_tag(v_a_2953_) == 0)
{
lean_object* v___x_2955_; 
v___x_2955_ = lean_array_to_list(v_a_2954_);
return v___x_2955_;
}
else
{
lean_object* v_head_2956_; lean_object* v_tail_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_head_2956_ = lean_ctor_get(v_a_2953_, 0);
lean_inc(v_head_2956_);
v_tail_2957_ = lean_ctor_get(v_a_2953_, 1);
lean_inc(v_tail_2957_);
lean_dec_ref_known(v_a_2953_, 2);
v___x_2958_ = lp_lean_x2dftml_LeanFtml_tabNameCands(v_head_2956_);
v___x_2959_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
v___x_2960_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__4(v___x_2958_, v___x_2959_);
v___x_2961_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2954_, v___x_2960_);
v_a_2953_ = v_tail_2957_;
v_a_2954_ = v___x_2961_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewMatchAt(lean_object* v_s_2963_){
_start:
{
lean_object* v___y_2965_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___x_2968_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1);
v___x_2969_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2968_, v_s_2963_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v___x_2970_; 
v___x_2970_ = lean_box(0);
v___y_2965_ = v___x_2970_;
goto v___jp_2964_;
}
else
{
lean_object* v_val_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v_val_2971_ = lean_ctor_get(v___x_2969_, 0);
lean_inc(v_val_2971_);
lean_dec_ref_known(v___x_2969_, 1);
v___x_2972_ = lean_box(0);
v___x_2973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2973_, 0, v_val_2971_);
lean_ctor_set(v___x_2973_, 1, v___x_2972_);
v___y_2965_ = v___x_2973_;
goto v___jp_2964_;
}
v___jp_2964_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
v___x_2967_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__5(v___y_2965_, v___x_2966_);
return v___x_2967_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(lean_object* v_a_2974_, uint8_t v_a_2975_){
_start:
{
if (lean_obj_tag(v_a_2974_) == 0)
{
return v_a_2974_;
}
else
{
lean_object* v_head_2976_; lean_object* v_tail_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2992_; 
v_head_2976_ = lean_ctor_get(v_a_2974_, 0);
v_tail_2977_ = lean_ctor_get(v_a_2974_, 1);
v_isSharedCheck_2992_ = !lean_is_exclusive(v_a_2974_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2979_ = v_a_2974_;
v_isShared_2980_ = v_isSharedCheck_2992_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_tail_2977_);
lean_inc(v_head_2976_);
lean_dec(v_a_2974_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2992_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
uint8_t v___x_2981_; 
v___x_2981_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_2976_);
if (v___x_2981_ == 0)
{
lean_object* v___x_2982_; lean_object* v___x_2984_; 
v___x_2982_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(v_tail_2977_, v___x_2981_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 1, v___x_2982_);
v___x_2984_ = v___x_2979_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_head_2976_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v___x_2982_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
else
{
lean_dec(v_head_2976_);
if (v_a_2975_ == 0)
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2989_; 
v___x_2986_ = lean_unsigned_to_nat(32u);
v___x_2987_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(v_tail_2977_, v___x_2981_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 1, v___x_2987_);
lean_ctor_set(v___x_2979_, 0, v___x_2986_);
v___x_2989_ = v___x_2979_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v___x_2986_);
lean_ctor_set(v_reuseFailAlloc_2990_, 1, v___x_2987_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
else
{
lean_del_object(v___x_2979_);
v_a_2974_ = v_tail_2977_;
v_a_2975_ = v___x_2981_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes_go___boxed(lean_object* v_a_2993_, lean_object* v_a_2994_){
_start:
{
uint8_t v_a_53__boxed_2995_; lean_object* v_res_2996_; 
v_a_53__boxed_2995_ = lean_unbox(v_a_2994_);
v_res_2996_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(v_a_2993_, v_a_53__boxed_2995_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes(lean_object* v_bs_2997_){
_start:
{
uint8_t v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = 0;
v___x_2999_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(v_bs_2997_, v___x_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3(lean_object* v_x_3000_, lean_object* v_x_3001_){
_start:
{
if (lean_obj_tag(v_x_3001_) == 0)
{
lean_inc(v_x_3000_);
return v_x_3000_;
}
else
{
lean_object* v_head_3002_; lean_object* v_tail_3003_; uint8_t v___x_3004_; 
v_head_3002_ = lean_ctor_get(v_x_3001_, 0);
v_tail_3003_ = lean_ctor_get(v_x_3001_, 1);
v___x_3004_ = lean_nat_dec_le(v_x_3000_, v_head_3002_);
if (v___x_3004_ == 0)
{
v_x_3000_ = v_head_3002_;
v_x_3001_ = v_tail_3003_;
goto _start;
}
else
{
v_x_3001_ = v_tail_3003_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3___boxed(lean_object* v_x_3007_, lean_object* v_x_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3(v_x_3007_, v_x_3008_);
lean_dec(v_x_3008_);
lean_dec(v_x_3007_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(lean_object* v_x_3010_){
_start:
{
if (lean_obj_tag(v_x_3010_) == 0)
{
lean_object* v___x_3011_; 
v___x_3011_ = lean_box(0);
return v___x_3011_;
}
else
{
lean_object* v_head_3012_; lean_object* v_tail_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v_head_3012_ = lean_ctor_get(v_x_3010_, 0);
v_tail_3013_ = lean_ctor_get(v_x_3010_, 1);
v___x_3014_ = lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3(v_head_3012_, v_tail_3013_);
v___x_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3015_, 0, v___x_3014_);
return v___x_3015_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2___boxed(lean_object* v_x_3016_){
_start:
{
lean_object* v_res_3017_; 
v_res_3017_ = lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(v_x_3016_);
lean_dec(v_x_3016_);
return v_res_3017_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(lean_object* v_x_3018_, lean_object* v_x_3019_){
_start:
{
if (lean_obj_tag(v_x_3019_) == 0)
{
lean_inc(v_x_3018_);
return v_x_3018_;
}
else
{
lean_object* v_head_3020_; lean_object* v_tail_3021_; uint8_t v___x_3022_; 
v_head_3020_ = lean_ctor_get(v_x_3019_, 0);
v_tail_3021_ = lean_ctor_get(v_x_3019_, 1);
v___x_3022_ = lean_nat_dec_le(v_x_3018_, v_head_3020_);
if (v___x_3022_ == 0)
{
v_x_3019_ = v_tail_3021_;
goto _start;
}
else
{
v_x_3018_ = v_head_3020_;
v_x_3019_ = v_tail_3021_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1___boxed(lean_object* v_x_3025_, lean_object* v_x_3026_){
_start:
{
lean_object* v_res_3027_; 
v_res_3027_ = lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(v_x_3025_, v_x_3026_);
lean_dec(v_x_3026_);
lean_dec(v_x_3025_);
return v_res_3027_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(lean_object* v_x_3028_){
_start:
{
if (lean_obj_tag(v_x_3028_) == 0)
{
lean_object* v___x_3029_; 
v___x_3029_ = lean_box(0);
return v___x_3029_;
}
else
{
lean_object* v_head_3030_; lean_object* v_tail_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v_head_3030_ = lean_ctor_get(v_x_3028_, 0);
v_tail_3031_ = lean_ctor_get(v_x_3028_, 1);
v___x_3032_ = lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(v_head_3030_, v_tail_3031_);
v___x_3033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
return v___x_3033_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1___boxed(lean_object* v_x_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(v_x_3034_);
lean_dec(v_x_3034_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(lean_object* v_a_3036_, lean_object* v_a_3037_){
_start:
{
if (lean_obj_tag(v_a_3036_) == 0)
{
lean_object* v___x_3038_; 
v___x_3038_ = l_List_reverse___redArg(v_a_3037_);
return v___x_3038_;
}
else
{
lean_object* v_head_3039_; lean_object* v_tail_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3050_; 
v_head_3039_ = lean_ctor_get(v_a_3036_, 0);
v_tail_3040_ = lean_ctor_get(v_a_3036_, 1);
v_isSharedCheck_3050_ = !lean_is_exclusive(v_a_3036_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3042_ = v_a_3036_;
v_isShared_3043_ = v_isSharedCheck_3050_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_tail_3040_);
lean_inc(v_head_3039_);
lean_dec(v_a_3036_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3050_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v_fst_3044_; lean_object* v___x_3045_; lean_object* v___x_3047_; 
v_fst_3044_ = lean_ctor_get(v_head_3039_, 0);
lean_inc(v_fst_3044_);
lean_dec(v_head_3039_);
v___x_3045_ = l_List_lengthTR___redArg(v_fst_3044_);
lean_dec(v_fst_3044_);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 1, v_a_3037_);
lean_ctor_set(v___x_3042_, 0, v___x_3045_);
v___x_3047_ = v___x_3042_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v___x_3045_);
lean_ctor_set(v_reuseFailAlloc_3049_, 1, v_a_3037_);
v___x_3047_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
v_a_3036_ = v_tail_3040_;
v_a_3037_ = v___x_3047_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1(void){
_start:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3052_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__0));
v___x_3053_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3052_);
return v___x_3053_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3(void){
_start:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3055_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__2));
v___x_3056_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3055_);
return v___x_3056_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5(void){
_start:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3058_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__4));
v___x_3059_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3058_);
return v___x_3059_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rawCodeShape(lean_object* v_t_3060_){
_start:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v_atat_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v_lt_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v_gt_3070_; lean_object* v___x_3081_; 
v___x_3061_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1, &lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1);
lean_inc_n(v_t_3060_, 2);
v___x_3062_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_3061_, v_t_3060_);
v___x_3063_ = lean_box(0);
v_atat_3064_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(v___x_3062_, v___x_3063_);
v___x_3065_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3, &lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3);
v___x_3066_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_3065_, v_t_3060_);
v_lt_3067_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(v___x_3066_, v___x_3063_);
v___x_3068_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5, &lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5);
v___x_3069_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_3068_, v_t_3060_);
v_gt_3070_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(v___x_3069_, v___x_3063_);
v___x_3081_ = lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(v_atat_3064_);
if (lean_obj_tag(v___x_3081_) == 1)
{
lean_object* v_val_3082_; lean_object* v___x_3083_; 
v_val_3082_ = lean_ctor_get(v___x_3081_, 0);
lean_inc(v_val_3082_);
lean_dec_ref_known(v___x_3081_, 1);
v___x_3083_ = lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(v_atat_3064_);
lean_dec(v_atat_3064_);
if (lean_obj_tag(v___x_3083_) == 1)
{
lean_object* v_val_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; uint8_t v___x_3087_; 
v_val_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_val_3084_);
lean_dec_ref_known(v___x_3083_, 1);
v___x_3085_ = lean_unsigned_to_nat(2u);
v___x_3086_ = lean_nat_add(v_val_3084_, v___x_3085_);
lean_dec(v_val_3084_);
v___x_3087_ = lean_nat_dec_le(v___x_3086_, v_val_3082_);
lean_dec(v_val_3082_);
lean_dec(v___x_3086_);
if (v___x_3087_ == 0)
{
goto v___jp_3071_;
}
else
{
lean_dec(v_gt_3070_);
lean_dec(v_lt_3067_);
return v___x_3087_;
}
}
else
{
lean_dec(v___x_3083_);
lean_dec(v_val_3082_);
goto v___jp_3071_;
}
}
else
{
lean_dec(v___x_3081_);
lean_dec(v_atat_3064_);
goto v___jp_3071_;
}
v___jp_3071_:
{
lean_object* v___x_3072_; 
v___x_3072_ = lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(v_gt_3070_);
lean_dec(v_gt_3070_);
if (lean_obj_tag(v___x_3072_) == 1)
{
lean_object* v_val_3073_; lean_object* v___x_3074_; 
v_val_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_val_3073_);
lean_dec_ref_known(v___x_3072_, 1);
v___x_3074_ = lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(v_lt_3067_);
lean_dec(v_lt_3067_);
if (lean_obj_tag(v___x_3074_) == 1)
{
lean_object* v_val_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; 
v_val_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_val_3075_);
lean_dec_ref_known(v___x_3074_, 1);
v___x_3076_ = lean_unsigned_to_nat(2u);
v___x_3077_ = lean_nat_add(v_val_3075_, v___x_3076_);
lean_dec(v_val_3075_);
v___x_3078_ = lean_nat_dec_le(v___x_3077_, v_val_3073_);
lean_dec(v_val_3073_);
lean_dec(v___x_3077_);
return v___x_3078_;
}
else
{
uint8_t v___x_3079_; 
lean_dec(v___x_3074_);
lean_dec(v_val_3073_);
v___x_3079_ = 0;
return v___x_3079_;
}
}
else
{
uint8_t v___x_3080_; 
lean_dec(v___x_3072_);
lean_dec(v_lt_3067_);
v___x_3080_ = 0;
return v___x_3080_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___boxed(lean_object* v_t_3088_){
_start:
{
uint8_t v_res_3089_; lean_object* v_r_3090_; 
v_res_3089_ = lp_lean_x2dftml_LeanFtml_rawCodeShape(v_t_3088_);
v_r_3090_ = lean_box(v_res_3089_);
return v_r_3090_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabTitle___closed__1(void){
_start:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3092_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabTitle___closed__0));
v___x_3093_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabTitle(lean_object* v_t0_3094_){
_start:
{
lean_object* v_t_3095_; uint8_t v___x_3096_; 
v_t_3095_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_t0_3094_);
v___x_3096_ = l_List_isEmpty___redArg(v_t_3095_);
if (v___x_3096_ == 0)
{
uint8_t v___x_3097_; 
lean_inc(v_t_3095_);
v___x_3097_ = lp_lean_x2dftml_LeanFtml_rawCodeShape(v_t_3095_);
if (v___x_3097_ == 0)
{
lean_object* v___x_3098_; uint8_t v___x_3099_; 
v___x_3098_ = lean_unsigned_to_nat(255u);
v___x_3099_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_3098_, v_t_3095_);
if (v___x_3099_ == 0)
{
lean_object* v___x_3100_; 
v___x_3100_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes(v_t_3095_);
return v___x_3100_;
}
else
{
lean_object* v___x_3101_; 
lean_dec(v_t_3095_);
v___x_3101_ = lean_box(0);
return v___x_3101_;
}
}
else
{
lean_object* v___x_3102_; 
lean_dec(v_t_3095_);
v___x_3102_ = lean_box(0);
return v___x_3102_;
}
}
else
{
lean_object* v___x_3103_; 
lean_dec(v_t_3095_);
v___x_3103_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabTitle___closed__1, &lp_lean_x2dftml_LeanFtml_tabTitle___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabTitle___closed__1);
return v___x_3103_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabTitle___boxed(lean_object* v_t0_3104_){
_start:
{
lean_object* v_res_3105_; 
v_res_3105_ = lp_lean_x2dftml_LeanFtml_tabTitle(v_t0_3104_);
lean_dec(v_t0_3104_);
return v_res_3105_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_singlePairShape(lean_object* v_t_3109_){
_start:
{
lean_object* v___x_3110_; lean_object* v_key_3111_; uint8_t v___x_3112_; 
v___x_3110_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_t_3109_);
v_key_3111_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(v_t_3109_, v_t_3109_, v___x_3110_);
v___x_3112_ = l_List_isEmpty___redArg(v_key_3111_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3113_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1, &lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1);
v___x_3114_ = l_List_lengthTR___redArg(v_key_3111_);
lean_dec(v_key_3111_);
v___x_3115_ = l_List_drop___redArg(v___x_3114_, v_t_3109_);
lean_dec(v_t_3109_);
v___x_3116_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_3113_, v___x_3115_);
if (lean_obj_tag(v___x_3116_) == 0)
{
return v___x_3112_;
}
else
{
lean_object* v_val_3117_; lean_object* v_val_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; uint8_t v___x_3122_; 
v_val_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc_n(v_val_3117_, 2);
lean_dec_ref_known(v___x_3116_, 1);
v_val_3118_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(v___x_3112_, v_val_3117_, v_val_3117_, v___x_3110_);
v___x_3119_ = l_List_lengthTR___redArg(v_val_3118_);
lean_dec(v_val_3118_);
v___x_3120_ = l_List_drop___redArg(v___x_3119_, v_val_3117_);
lean_dec(v_val_3117_);
v___x_3121_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_singlePairShape___closed__0));
v___x_3122_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_3120_, v___x_3121_);
lean_dec(v___x_3120_);
return v___x_3122_;
}
}
else
{
uint8_t v___x_3123_; 
lean_dec(v_key_3111_);
lean_dec(v_t_3109_);
v___x_3123_ = 0;
return v___x_3123_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_singlePairShape___boxed(lean_object* v_t_3124_){
_start:
{
uint8_t v_res_3125_; lean_object* v_r_3126_; 
v_res_3125_ = lp_lean_x2dftml_LeanFtml_singlePairShape(v_t_3124_);
v_r_3126_ = lean_box(v_res_3125_);
return v_r_3126_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(lean_object* v_l_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_){
_start:
{
if (lean_obj_tag(v_a_3128_) == 0)
{
lean_dec_ref(v_a_3129_);
lean_inc(v_l_3127_);
return v_l_3127_;
}
else
{
lean_object* v_head_3130_; lean_object* v_tail_3131_; lean_object* v___x_3132_; uint8_t v___x_3133_; 
v_head_3130_ = lean_ctor_get(v_a_3128_, 0);
lean_inc(v_head_3130_);
v_tail_3131_ = lean_ctor_get(v_a_3128_, 1);
lean_inc(v_tail_3131_);
lean_dec_ref_known(v_a_3128_, 2);
v___x_3132_ = lean_unsigned_to_nat(10u);
v___x_3133_ = lean_nat_dec_eq(v_head_3130_, v___x_3132_);
if (v___x_3133_ == 0)
{
lean_object* v___x_3134_; 
lean_dec(v_tail_3131_);
lean_dec(v_head_3130_);
v___x_3134_ = lean_array_to_list(v_a_3129_);
return v___x_3134_;
}
else
{
lean_object* v___x_3135_; 
v___x_3135_ = lean_array_push(v_a_3129_, v_head_3130_);
v_a_3128_ = v_tail_3131_;
v_a_3129_ = v___x_3135_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0___boxed(lean_object* v_l_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v_l_3137_, v_a_3138_, v_a_3139_);
lean_dec(v_l_3137_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__1(lean_object* v_fst_3141_, lean_object* v_fst_3142_, lean_object* v_x_3143_){
_start:
{
if (lean_obj_tag(v_x_3143_) == 0)
{
lean_object* v___x_3144_; 
lean_dec(v_fst_3142_);
lean_dec(v_fst_3141_);
v___x_3144_ = lean_box(0);
return v___x_3144_;
}
else
{
lean_object* v_head_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3167_; 
v_head_3145_ = lean_ctor_get(v_x_3143_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v_x_3143_);
if (v_isSharedCheck_3167_ == 0)
{
lean_object* v_unused_3168_; 
v_unused_3168_ = lean_ctor_get(v_x_3143_, 1);
lean_dec(v_unused_3168_);
v___x_3147_ = v_x_3143_;
v_isShared_3148_ = v_isSharedCheck_3167_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_head_3145_);
lean_dec(v_x_3143_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3167_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v_fst_3149_; lean_object* v_snd_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3166_; 
v_fst_3149_ = lean_ctor_get(v_head_3145_, 0);
v_snd_3150_ = lean_ctor_get(v_head_3145_, 1);
v_isSharedCheck_3166_ = !lean_is_exclusive(v_head_3145_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3152_ = v_head_3145_;
v_isShared_3153_ = v_isSharedCheck_3166_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_snd_3150_);
lean_inc(v_fst_3149_);
lean_dec(v_head_3145_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3166_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3159_; 
v___x_3154_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_snd_3150_);
v___x_3155_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v_snd_3150_, v_snd_3150_, v___x_3154_);
v___x_3156_ = l_List_lengthTR___redArg(v___x_3155_);
lean_dec(v___x_3155_);
v___x_3157_ = l_List_drop___redArg(v___x_3156_, v_snd_3150_);
lean_dec(v_snd_3150_);
if (v_isShared_3153_ == 0)
{
lean_ctor_set(v___x_3152_, 1, v___x_3157_);
v___x_3159_ = v___x_3152_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_fst_3149_);
lean_ctor_set(v_reuseFailAlloc_3165_, 1, v___x_3157_);
v___x_3159_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
lean_object* v___x_3161_; 
if (v_isShared_3148_ == 0)
{
lean_ctor_set_tag(v___x_3147_, 0);
lean_ctor_set(v___x_3147_, 1, v___x_3159_);
lean_ctor_set(v___x_3147_, 0, v_fst_3141_);
v___x_3161_ = v___x_3147_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_fst_3141_);
lean_ctor_set(v_reuseFailAlloc_3164_, 1, v___x_3159_);
v___x_3161_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3162_, 0, v_fst_3142_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
v___x_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3162_);
return v___x_3163_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__2(lean_object* v_fst_3169_, lean_object* v_x_3170_){
_start:
{
if (lean_obj_tag(v_x_3170_) == 0)
{
lean_object* v___x_3171_; 
lean_dec(v_fst_3169_);
v___x_3171_ = lean_box(0);
return v___x_3171_;
}
else
{
lean_object* v_head_3172_; lean_object* v_tail_3173_; lean_object* v_fst_3174_; lean_object* v_snd_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
v_head_3172_ = lean_ctor_get(v_x_3170_, 0);
lean_inc(v_head_3172_);
v_tail_3173_ = lean_ctor_get(v_x_3170_, 1);
lean_inc(v_tail_3173_);
lean_dec_ref_known(v_x_3170_, 2);
v_fst_3174_ = lean_ctor_get(v_head_3172_, 0);
lean_inc(v_fst_3174_);
v_snd_3175_ = lean_ctor_get(v_head_3172_, 1);
lean_inc(v_snd_3175_);
lean_dec(v_head_3172_);
v___x_3176_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1, &lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1);
v___x_3177_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_3176_, v_snd_3175_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_dec(v_fst_3174_);
v_x_3170_ = v_tail_3173_;
goto _start;
}
else
{
lean_object* v_val_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v_val_3179_ = lean_ctor_get(v___x_3177_, 0);
lean_inc(v_val_3179_);
lean_dec_ref_known(v___x_3177_, 1);
v___x_3180_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1);
v___x_3181_ = lp_lean_x2dftml_LeanFtml_occurrencesCI(v___x_3180_, v_val_3179_);
lean_inc(v_fst_3169_);
v___x_3182_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__1(v_fst_3174_, v_fst_3169_, v___x_3181_);
if (lean_obj_tag(v___x_3182_) == 0)
{
v_x_3170_ = v_tail_3173_;
goto _start;
}
else
{
lean_dec(v_tail_3173_);
lean_dec(v_fst_3169_);
return v___x_3182_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__3(lean_object* v_x_3184_){
_start:
{
if (lean_obj_tag(v_x_3184_) == 0)
{
lean_object* v___x_3185_; 
v___x_3185_ = lean_box(0);
return v___x_3185_;
}
else
{
lean_object* v_head_3186_; lean_object* v_tail_3187_; lean_object* v_fst_3188_; lean_object* v_snd_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v_head_3186_ = lean_ctor_get(v_x_3184_, 0);
lean_inc(v_head_3186_);
v_tail_3187_ = lean_ctor_get(v_x_3184_, 1);
lean_inc(v_tail_3187_);
lean_dec_ref_known(v_x_3184_, 2);
v_fst_3188_ = lean_ctor_get(v_head_3186_, 0);
lean_inc(v_fst_3188_);
v_snd_3189_ = lean_ctor_get(v_head_3186_, 1);
lean_inc(v_snd_3189_);
lean_dec(v_head_3186_);
v___x_3190_ = lp_lean_x2dftml_LeanFtml_tabG2Cands(v_snd_3189_);
v___x_3191_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__2(v_fst_3188_, v___x_3190_);
if (lean_obj_tag(v___x_3191_) == 0)
{
v_x_3184_ = v_tail_3187_;
goto _start;
}
else
{
lean_dec(v_tail_3187_);
return v___x_3191_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabMatchAt(lean_object* v_s_3193_){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3194_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1);
v___x_3195_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_3194_, v_s_3193_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v___x_3196_; 
v___x_3196_ = lean_box(0);
return v___x_3196_;
}
else
{
lean_object* v_val_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
v_val_3197_ = lean_ctor_get(v___x_3195_, 0);
lean_inc(v_val_3197_);
lean_dec_ref_known(v___x_3195_, 1);
v___x_3198_ = lp_lean_x2dftml_LeanFtml_tabG1Cands(v_val_3197_);
v___x_3199_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__3(v___x_3198_);
return v___x_3199_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3201_ = ((lean_object*)(lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__0));
v___x_3202_ = l_String_toListImpl(v___x_3201_);
return v___x_3202_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0(lean_object* v_x_3203_){
_start:
{
if (lean_obj_tag(v_x_3203_) == 0)
{
lean_object* v___x_3204_; 
v___x_3204_ = lean_box(0);
return v___x_3204_;
}
else
{
lean_object* v_head_3205_; lean_object* v_tail_3206_; lean_object* v_fst_3207_; lean_object* v___x_3208_; uint8_t v___x_3209_; 
v_head_3205_ = lean_ctor_get(v_x_3203_, 0);
v_tail_3206_ = lean_ctor_get(v_x_3203_, 1);
v_fst_3207_ = lean_ctor_get(v_head_3205_, 0);
v___x_3208_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1);
v___x_3209_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_3207_, v___x_3208_);
if (v___x_3209_ == 0)
{
v_x_3203_ = v_tail_3206_;
goto _start;
}
else
{
lean_object* v___x_3211_; 
lean_inc(v_head_3205_);
v___x_3211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3211_, 0, v_head_3205_);
return v___x_3211_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___boxed(lean_object* v_x_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0(v_x_3212_);
lean_dec(v_x_3212_);
return v_res_3213_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__2(void){
_start:
{
lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3216_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__1));
v___x_3217_ = l_String_toListImpl(v___x_3216_);
return v___x_3217_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__3(void){
_start:
{
lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3218_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__2, &lp_lean_x2dftml_LeanFtml_handleTab___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__2);
v___x_3219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3218_);
return v___x_3219_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__4(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__3, &lp_lean_x2dftml_LeanFtml_handleTab___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__3);
v___x_3221_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__3, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__3);
v___x_3222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
lean_ctor_set(v___x_3222_, 1, v___x_3220_);
return v___x_3222_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__6(void){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3224_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__5));
v___x_3225_ = l_String_toListImpl(v___x_3224_);
return v___x_3225_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__8(void){
_start:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3227_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__7));
v___x_3228_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3227_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_handleTab(lean_object* v_g1_3229_, lean_object* v_g2_3230_, lean_object* v_body_3231_, lean_object* v_elId_3232_, lean_object* v_tabId_3233_, lean_object* v_endTabPh_3234_, lean_object* v_toks_3235_){
_start:
{
lean_object* v___y_3237_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3292_; lean_object* v___y_3293_; uint8_t v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3317_; 
if (lean_obj_tag(v_g1_3229_) == 0)
{
lean_object* v___x_3320_; 
v___x_3320_ = lean_box(0);
v___y_3317_ = v___x_3320_;
goto v___jp_3316_;
}
else
{
lean_object* v_val_3321_; 
v_val_3321_ = lean_ctor_get(v_g1_3229_, 0);
lean_inc(v_val_3321_);
v___y_3317_ = v_val_3321_;
goto v___jp_3316_;
}
v___jp_3236_:
{
lean_object* v_entry_3238_; lean_object* v___x_3239_; lean_object* v_tabStartPh_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v_t1_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; 
v_entry_3238_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_entry_3238_, 0, v___y_3237_);
v___x_3239_ = l_List_lengthTR___redArg(v_toks_3235_);
v_tabStartPh_3240_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_3239_);
v___x_3241_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__0));
v___x_3242_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__4, &lp_lean_x2dftml_LeanFtml_handleTab___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__4);
v___x_3243_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__6, &lp_lean_x2dftml_LeanFtml_handleTab___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__6);
v___x_3244_ = lean_nat_to_int(v_elId_3232_);
v___x_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3244_);
v___x_3246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3243_);
lean_ctor_set(v___x_3246_, 1, v___x_3245_);
v___x_3247_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1);
v___x_3248_ = lean_nat_to_int(v_tabId_3233_);
v___x_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3248_);
v___x_3250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3247_);
lean_ctor_set(v___x_3250_, 1, v___x_3249_);
v___x_3251_ = lean_box(0);
v___x_3252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3250_);
lean_ctor_set(v___x_3252_, 1, v___x_3251_);
v___x_3253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3246_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3242_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
v___x_3255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3241_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___x_3256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
lean_ctor_set(v___x_3256_, 1, v___x_3251_);
v_t1_3257_ = l_List_appendTR___redArg(v_toks_3235_, v___x_3256_);
v___x_3258_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__4));
v___x_3259_ = l_List_appendTR___redArg(v_tabStartPh_3240_, v___x_3258_);
v___x_3260_ = l_List_appendTR___redArg(v___x_3259_, v_body_3231_);
v___x_3261_ = l_List_appendTR___redArg(v___x_3260_, v___x_3258_);
v___x_3262_ = l_List_appendTR___redArg(v___x_3261_, v_endTabPh_3234_);
v___x_3263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
lean_ctor_set(v___x_3263_, 1, v_t1_3257_);
v___x_3264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3264_, 0, v_entry_3238_);
lean_ctor_set(v___x_3264_, 1, v___x_3263_);
return v___x_3264_;
}
v___jp_3265_:
{
lean_object* v_title_3269_; lean_object* v_args2_3270_; lean_object* v___x_3271_; lean_object* v_pairs_3272_; lean_object* v___x_3273_; 
v_title_3269_ = lp_lean_x2dftml_LeanFtml_tabTitle(v___y_3268_);
lean_dec(v___y_3268_);
v_args2_3270_ = lp_lean_x2dftml_LeanFtml_omSetB(v___y_3266_, v___y_3267_, v_title_3269_);
v___x_3271_ = lean_box(0);
v_pairs_3272_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v_args2_3270_, v___x_3271_);
v___x_3273_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0(v_pairs_3272_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3274_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1);
lean_inc(v_tabId_3233_);
v___x_3275_ = lean_nat_to_int(v_tabId_3233_);
v___x_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3275_);
v___x_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3274_);
lean_ctor_set(v___x_3277_, 1, v___x_3276_);
v___x_3278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
lean_ctor_set(v___x_3278_, 1, v___x_3271_);
v___x_3279_ = l_List_appendTR___redArg(v_pairs_3272_, v___x_3278_);
v___y_3237_ = v___x_3279_;
goto v___jp_3236_;
}
else
{
lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3289_; 
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3289_ == 0)
{
lean_object* v_unused_3290_; 
v_unused_3290_ = lean_ctor_get(v___x_3273_, 0);
lean_dec(v_unused_3290_);
v___x_3281_ = v___x_3273_;
v_isShared_3282_ = v_isSharedCheck_3289_;
goto v_resetjp_3280_;
}
else
{
lean_dec(v___x_3273_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3289_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3286_; 
v___x_3283_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1);
lean_inc(v_tabId_3233_);
v___x_3284_ = lean_nat_to_int(v_tabId_3233_);
if (v_isShared_3282_ == 0)
{
lean_ctor_set(v___x_3281_, 0, v___x_3284_);
v___x_3286_ = v___x_3281_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v___x_3284_);
v___x_3286_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
lean_object* v___x_3287_; 
v___x_3287_ = lp_lean_x2dftml_LeanFtml_omSet(v_pairs_3272_, v___x_3283_, v___x_3286_);
v___y_3237_ = v___x_3287_;
goto v___jp_3236_;
}
}
}
}
v___jp_3291_:
{
lean_object* v___x_3294_; 
v___x_3294_ = lp_lean_x2dftml_LeanFtml_lookupB(v___y_3293_, v___y_3292_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v___x_3295_; 
v___x_3295_ = lean_box(0);
v___y_3266_ = v___y_3293_;
v___y_3267_ = v___y_3292_;
v___y_3268_ = v___x_3295_;
goto v___jp_3265_;
}
else
{
lean_object* v_val_3296_; 
v_val_3296_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_val_3296_);
lean_dec_ref_known(v___x_3294_, 1);
v___y_3266_ = v___y_3293_;
v___y_3267_ = v___y_3292_;
v___y_3268_ = v_val_3296_;
goto v___jp_3265_;
}
}
v___jp_3297_:
{
lean_object* v_args0_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
v_args0_3301_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_3300_);
lean_dec(v___y_3300_);
v___x_3302_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__8, &lp_lean_x2dftml_LeanFtml_handleTab___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__8);
v___x_3303_ = lp_lean_x2dftml_LeanFtml_lookupB(v_args0_3301_, v___x_3302_);
if (lean_obj_tag(v___x_3303_) == 0)
{
if (v___y_3298_ == 0)
{
lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3304_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_3299_);
lean_dec(v___y_3299_);
v___x_3305_ = lp_lean_x2dftml_LeanFtml_omSetB(v_args0_3301_, v___x_3302_, v___x_3304_);
v___y_3292_ = v___x_3302_;
v___y_3293_ = v___x_3305_;
goto v___jp_3291_;
}
else
{
lean_dec(v___y_3299_);
v___y_3292_ = v___x_3302_;
v___y_3293_ = v_args0_3301_;
goto v___jp_3291_;
}
}
else
{
lean_dec_ref_known(v___x_3303_, 1);
lean_dec(v___y_3299_);
v___y_3292_ = v___x_3302_;
v___y_3293_ = v_args0_3301_;
goto v___jp_3291_;
}
}
v___jp_3306_:
{
lean_object* v_argString0_3309_; 
v_argString0_3309_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_3308_);
if (lean_obj_tag(v_g1_3229_) == 0)
{
uint8_t v___x_3310_; 
v___x_3310_ = 0;
v___y_3298_ = v___x_3310_;
v___y_3299_ = v___y_3307_;
v___y_3300_ = v_argString0_3309_;
goto v___jp_3297_;
}
else
{
lean_object* v___x_3311_; uint8_t v___x_3312_; 
lean_dec_ref_known(v_g1_3229_, 1);
v___x_3311_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_3307_);
v___x_3312_ = lp_lean_x2dftml_LeanFtml_singlePairShape(v___x_3311_);
if (v___x_3312_ == 0)
{
v___y_3298_ = v___x_3312_;
v___y_3299_ = v___y_3307_;
v___y_3300_ = v_argString0_3309_;
goto v___jp_3297_;
}
else
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
v___x_3313_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isolateId___closed__0));
v___x_3314_ = l_List_appendTR___redArg(v_argString0_3309_, v___x_3313_);
lean_inc(v___y_3307_);
v___x_3315_ = l_List_appendTR___redArg(v___x_3314_, v___y_3307_);
v___y_3298_ = v___x_3312_;
v___y_3299_ = v___y_3307_;
v___y_3300_ = v___x_3315_;
goto v___jp_3297_;
}
}
}
v___jp_3316_:
{
if (lean_obj_tag(v_g2_3230_) == 0)
{
lean_object* v___x_3318_; 
v___x_3318_ = lean_box(0);
v___y_3307_ = v___y_3317_;
v___y_3308_ = v___x_3318_;
goto v___jp_3306_;
}
else
{
lean_object* v_val_3319_; 
v_val_3319_ = lean_ctor_get(v_g2_3230_, 0);
v___y_3307_ = v___y_3317_;
v___y_3308_ = v_val_3319_;
goto v___jp_3306_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_handleTab___boxed(lean_object* v_g1_3322_, lean_object* v_g2_3323_, lean_object* v_body_3324_, lean_object* v_elId_3325_, lean_object* v_tabId_3326_, lean_object* v_endTabPh_3327_, lean_object* v_toks_3328_){
_start:
{
lean_object* v_res_3329_; 
v_res_3329_ = lp_lean_x2dftml_LeanFtml_handleTab(v_g1_3322_, v_g2_3323_, v_body_3324_, v_elId_3325_, v_tabId_3326_, v_endTabPh_3327_, v_toks_3328_);
lean_dec(v_g2_3323_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabInnerScan(lean_object* v_src_3330_, lean_object* v_elId_3331_, lean_object* v_tabCounter_3332_, lean_object* v_endTabPh_3333_, lean_object* v_toks_3334_, lean_object* v_x_3335_){
_start:
{
lean_object* v_zero_3336_; uint8_t v_isZero_3337_; 
v_zero_3336_ = lean_unsigned_to_nat(0u);
v_isZero_3337_ = lean_nat_dec_eq(v_x_3335_, v_zero_3336_);
if (v_isZero_3337_ == 1)
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
lean_dec(v_endTabPh_3333_);
lean_dec(v_tabCounter_3332_);
lean_dec(v_elId_3331_);
v___x_3338_ = lean_box(0);
v___x_3339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v_toks_3334_);
v___x_3340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3340_, 0, v_src_3330_);
lean_ctor_set(v___x_3340_, 1, v___x_3339_);
return v___x_3340_;
}
else
{
if (lean_obj_tag(v_src_3330_) == 0)
{
lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
lean_dec(v_endTabPh_3333_);
lean_dec(v_tabCounter_3332_);
lean_dec(v_elId_3331_);
v___x_3341_ = lean_box(0);
v___x_3342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
lean_ctor_set(v___x_3342_, 1, v_toks_3334_);
v___x_3343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3343_, 0, v_src_3330_);
lean_ctor_set(v___x_3343_, 1, v___x_3342_);
return v___x_3343_;
}
else
{
lean_object* v_head_3344_; lean_object* v_tail_3345_; lean_object* v_one_3346_; lean_object* v_n_3347_; lean_object* v___x_3348_; 
v_head_3344_ = lean_ctor_get(v_src_3330_, 0);
lean_inc(v_head_3344_);
v_tail_3345_ = lean_ctor_get(v_src_3330_, 1);
lean_inc(v_tail_3345_);
v_one_3346_ = lean_unsigned_to_nat(1u);
v_n_3347_ = lean_nat_sub(v_x_3335_, v_one_3346_);
v___x_3348_ = lp_lean_x2dftml_LeanFtml_tabMatchAt(v_src_3330_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v___x_3349_; lean_object* v_fst_3350_; lean_object* v_snd_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3359_; 
v___x_3349_ = lp_lean_x2dftml_LeanFtml_tabInnerScan(v_tail_3345_, v_elId_3331_, v_tabCounter_3332_, v_endTabPh_3333_, v_toks_3334_, v_n_3347_);
lean_dec(v_n_3347_);
v_fst_3350_ = lean_ctor_get(v___x_3349_, 0);
v_snd_3351_ = lean_ctor_get(v___x_3349_, 1);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3353_ = v___x_3349_;
v_isShared_3354_ = v_isSharedCheck_3359_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_snd_3351_);
lean_inc(v_fst_3350_);
lean_dec(v___x_3349_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3359_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3355_; lean_object* v___x_3357_; 
v___x_3355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3355_, 0, v_head_3344_);
lean_ctor_set(v___x_3355_, 1, v_fst_3350_);
if (v_isShared_3354_ == 0)
{
lean_ctor_set(v___x_3353_, 0, v___x_3355_);
v___x_3357_ = v___x_3353_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v___x_3355_);
lean_ctor_set(v_reuseFailAlloc_3358_, 1, v_snd_3351_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
else
{
lean_object* v_val_3360_; lean_object* v_snd_3361_; lean_object* v_snd_3362_; lean_object* v_fst_3363_; lean_object* v_fst_3364_; lean_object* v_fst_3365_; lean_object* v_snd_3366_; lean_object* v___x_3367_; lean_object* v_snd_3368_; lean_object* v_fst_3369_; lean_object* v_fst_3370_; lean_object* v_snd_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3399_; 
lean_dec(v_tail_3345_);
lean_dec(v_head_3344_);
v_val_3360_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_val_3360_);
lean_dec_ref_known(v___x_3348_, 1);
v_snd_3361_ = lean_ctor_get(v_val_3360_, 1);
lean_inc(v_snd_3361_);
v_snd_3362_ = lean_ctor_get(v_snd_3361_, 1);
lean_inc(v_snd_3362_);
v_fst_3363_ = lean_ctor_get(v_val_3360_, 0);
lean_inc(v_fst_3363_);
lean_dec(v_val_3360_);
v_fst_3364_ = lean_ctor_get(v_snd_3361_, 0);
lean_inc(v_fst_3364_);
lean_dec(v_snd_3361_);
v_fst_3365_ = lean_ctor_get(v_snd_3362_, 0);
lean_inc(v_fst_3365_);
v_snd_3366_ = lean_ctor_get(v_snd_3362_, 1);
lean_inc(v_snd_3366_);
lean_dec(v_snd_3362_);
lean_inc(v_endTabPh_3333_);
lean_inc(v_tabCounter_3332_);
lean_inc(v_elId_3331_);
v___x_3367_ = lp_lean_x2dftml_LeanFtml_handleTab(v_fst_3363_, v_fst_3364_, v_fst_3365_, v_elId_3331_, v_tabCounter_3332_, v_endTabPh_3333_, v_toks_3334_);
lean_dec(v_fst_3364_);
v_snd_3368_ = lean_ctor_get(v___x_3367_, 1);
lean_inc(v_snd_3368_);
v_fst_3369_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_fst_3369_);
lean_dec_ref(v___x_3367_);
v_fst_3370_ = lean_ctor_get(v_snd_3368_, 0);
v_snd_3371_ = lean_ctor_get(v_snd_3368_, 1);
v_isSharedCheck_3399_ = !lean_is_exclusive(v_snd_3368_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3373_ = v_snd_3368_;
v_isShared_3374_ = v_isSharedCheck_3399_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_snd_3371_);
lean_inc(v_fst_3370_);
lean_dec(v_snd_3368_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3399_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v_snd_3377_; lean_object* v_fst_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3398_; 
v___x_3375_ = lean_nat_add(v_tabCounter_3332_, v_one_3346_);
lean_dec(v_tabCounter_3332_);
v___x_3376_ = lp_lean_x2dftml_LeanFtml_tabInnerScan(v_snd_3366_, v_elId_3331_, v___x_3375_, v_endTabPh_3333_, v_snd_3371_, v_n_3347_);
lean_dec(v_n_3347_);
v_snd_3377_ = lean_ctor_get(v___x_3376_, 1);
v_fst_3378_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3380_ = v___x_3376_;
v_isShared_3381_ = v_isSharedCheck_3398_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_snd_3377_);
lean_inc(v_fst_3378_);
lean_dec(v___x_3376_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3398_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v_fst_3382_; lean_object* v_snd_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3397_; 
v_fst_3382_ = lean_ctor_get(v_snd_3377_, 0);
v_snd_3383_ = lean_ctor_get(v_snd_3377_, 1);
v_isSharedCheck_3397_ = !lean_is_exclusive(v_snd_3377_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3385_ = v_snd_3377_;
v_isShared_3386_ = v_isSharedCheck_3397_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_snd_3383_);
lean_inc(v_fst_3382_);
lean_dec(v_snd_3377_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3397_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3387_; lean_object* v___x_3389_; 
v___x_3387_ = l_List_appendTR___redArg(v_fst_3370_, v_fst_3378_);
if (v_isShared_3374_ == 0)
{
lean_ctor_set_tag(v___x_3373_, 1);
lean_ctor_set(v___x_3373_, 1, v_fst_3382_);
lean_ctor_set(v___x_3373_, 0, v_fst_3369_);
v___x_3389_ = v___x_3373_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_fst_3369_);
lean_ctor_set(v_reuseFailAlloc_3396_, 1, v_fst_3382_);
v___x_3389_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
lean_object* v___x_3391_; 
if (v_isShared_3386_ == 0)
{
lean_ctor_set(v___x_3385_, 0, v___x_3389_);
v___x_3391_ = v___x_3385_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v___x_3389_);
lean_ctor_set(v_reuseFailAlloc_3395_, 1, v_snd_3383_);
v___x_3391_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
lean_object* v___x_3393_; 
if (v_isShared_3381_ == 0)
{
lean_ctor_set(v___x_3380_, 1, v___x_3391_);
lean_ctor_set(v___x_3380_, 0, v___x_3387_);
v___x_3393_ = v___x_3380_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v___x_3387_);
lean_ctor_set(v_reuseFailAlloc_3394_, 1, v___x_3391_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabInnerScan___boxed(lean_object* v_src_3400_, lean_object* v_elId_3401_, lean_object* v_tabCounter_3402_, lean_object* v_endTabPh_3403_, lean_object* v_toks_3404_, lean_object* v_x_3405_){
_start:
{
lean_object* v_res_3406_; 
v_res_3406_ = lp_lean_x2dftml_LeanFtml_tabInnerScan(v_src_3400_, v_elId_3401_, v_tabCounter_3402_, v_endTabPh_3403_, v_toks_3404_, v_x_3405_);
lean_dec(v_x_3405_);
return v_res_3406_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1(void){
_start:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__0));
v___x_3409_ = l_String_toListImpl(v___x_3408_);
return v___x_3409_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2(void){
_start:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3410_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1);
v___x_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
return v___x_3411_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3(void){
_start:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3412_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2);
v___x_3413_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__3, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__3);
v___x_3414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
lean_ctor_set(v___x_3414_, 1, v___x_3412_);
return v___x_3414_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4(void){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3415_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabNameCands___closed__2));
v___x_3416_ = l_String_toListImpl(v___x_3415_);
return v___x_3416_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6(void){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__5));
v___x_3419_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3418_);
return v___x_3419_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7(void){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__2));
v___x_3421_ = l_String_toListImpl(v___x_3420_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess(lean_object* v_g1_3422_, lean_object* v_region_3423_, lean_object* v_doc_3424_, lean_object* v_toks_3425_){
_start:
{
lean_object* v_page_3426_; lean_object* v_site_3427_; lean_object* v_inclusions_3428_; lean_object* v_inclusionsNotExist_3429_; lean_object* v_footnotes_3430_; lean_object* v_bibitems_3431_; lean_object* v_bibitemIds_3432_; lean_object* v_headlineId_3433_; lean_object* v_mathId_3434_; lean_object* v_equations_3435_; lean_object* v_collapsibleCount_3436_; lean_object* v_tabviewCounter_3437_; lean_object* v_scoredAnchors_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3543_; 
v_page_3426_ = lean_ctor_get(v_doc_3424_, 0);
v_site_3427_ = lean_ctor_get(v_doc_3424_, 1);
v_inclusions_3428_ = lean_ctor_get(v_doc_3424_, 2);
v_inclusionsNotExist_3429_ = lean_ctor_get(v_doc_3424_, 3);
v_footnotes_3430_ = lean_ctor_get(v_doc_3424_, 4);
v_bibitems_3431_ = lean_ctor_get(v_doc_3424_, 5);
v_bibitemIds_3432_ = lean_ctor_get(v_doc_3424_, 6);
v_headlineId_3433_ = lean_ctor_get(v_doc_3424_, 7);
v_mathId_3434_ = lean_ctor_get(v_doc_3424_, 8);
v_equations_3435_ = lean_ctor_get(v_doc_3424_, 9);
v_collapsibleCount_3436_ = lean_ctor_get(v_doc_3424_, 10);
v_tabviewCounter_3437_ = lean_ctor_get(v_doc_3424_, 11);
v_scoredAnchors_3438_ = lean_ctor_get(v_doc_3424_, 12);
v_isSharedCheck_3543_ = !lean_is_exclusive(v_doc_3424_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3440_ = v_doc_3424_;
v_isShared_3441_ = v_isSharedCheck_3543_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_scoredAnchors_3438_);
lean_inc(v_tabviewCounter_3437_);
lean_inc(v_collapsibleCount_3436_);
lean_inc(v_equations_3435_);
lean_inc(v_mathId_3434_);
lean_inc(v_headlineId_3433_);
lean_inc(v_bibitemIds_3432_);
lean_inc(v_bibitems_3431_);
lean_inc(v_footnotes_3430_);
lean_inc(v_inclusionsNotExist_3429_);
lean_inc(v_inclusions_3428_);
lean_inc(v_site_3427_);
lean_inc(v_page_3426_);
lean_dec(v_doc_3424_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3543_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v___y_3521_; lean_object* v___y_3525_; 
if (lean_obj_tag(v_g1_3422_) == 0)
{
lean_object* v___x_3541_; 
v___x_3541_ = lean_box(0);
v___y_3525_ = v___x_3541_;
goto v___jp_3524_;
}
else
{
lean_object* v_val_3542_; 
v_val_3542_ = lean_ctor_get(v_g1_3422_, 0);
lean_inc(v_val_3542_);
v___y_3525_ = v_val_3542_;
goto v___jp_3524_;
}
v___jp_3442_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v_t1_3456_; lean_object* v___x_3457_; lean_object* v_endTabPh_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v_t2_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v_snd_3469_; lean_object* v_fst_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3519_; 
v___x_3445_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__0));
v___x_3446_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__4, &lp_lean_x2dftml_LeanFtml_handleTab___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__4);
v___x_3447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__6, &lp_lean_x2dftml_LeanFtml_handleTab___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__6);
lean_inc_n(v_tabviewCounter_3437_, 2);
v___x_3448_ = lean_nat_to_int(v_tabviewCounter_3437_);
v___x_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3448_);
v___x_3450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3450_, 0, v___x_3447_);
lean_ctor_set(v___x_3450_, 1, v___x_3449_);
v___x_3451_ = lean_box(0);
v___x_3452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3450_);
lean_ctor_set(v___x_3452_, 1, v___x_3451_);
lean_inc_ref_n(v___x_3452_, 2);
v___x_3453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3446_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v___x_3454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3445_);
lean_ctor_set(v___x_3454_, 1, v___x_3453_);
v___x_3455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
lean_ctor_set(v___x_3455_, 1, v___x_3451_);
v_t1_3456_ = l_List_appendTR___redArg(v_toks_3425_, v___x_3455_);
v___x_3457_ = l_List_lengthTR___redArg(v_t1_3456_);
v_endTabPh_3458_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_3457_);
v___x_3459_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3);
v___x_3460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
lean_ctor_set(v___x_3460_, 1, v___x_3452_);
v___x_3461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3461_, 0, v___x_3445_);
lean_ctor_set(v___x_3461_, 1, v___x_3460_);
v___x_3462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3462_, 0, v___x_3461_);
lean_ctor_set(v___x_3462_, 1, v___x_3451_);
v_t2_3463_ = l_List_appendTR___redArg(v_t1_3456_, v___x_3462_);
v___x_3464_ = lean_unsigned_to_nat(0u);
v___x_3465_ = l_List_lengthTR___redArg(v_region_3423_);
v___x_3466_ = lean_unsigned_to_nat(1u);
v___x_3467_ = lean_nat_add(v___x_3465_, v___x_3466_);
lean_dec(v___x_3465_);
v___x_3468_ = lp_lean_x2dftml_LeanFtml_tabInnerScan(v_region_3423_, v_tabviewCounter_3437_, v___x_3464_, v_endTabPh_3458_, v_t2_3463_, v___x_3467_);
lean_dec(v___x_3467_);
v_snd_3469_ = lean_ctor_get(v___x_3468_, 1);
v_fst_3470_ = lean_ctor_get(v___x_3468_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3472_ = v___x_3468_;
v_isShared_3473_ = v_isSharedCheck_3519_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_snd_3469_);
lean_inc(v_fst_3470_);
lean_dec(v___x_3468_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3519_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v_fst_3474_; lean_object* v_snd_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3518_; 
v_fst_3474_ = lean_ctor_get(v_snd_3469_, 0);
v_snd_3475_ = lean_ctor_get(v_snd_3469_, 1);
v_isSharedCheck_3518_ = !lean_is_exclusive(v_snd_3469_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3477_ = v_snd_3469_;
v_isShared_3478_ = v_isSharedCheck_3518_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_snd_3475_);
lean_inc(v_fst_3474_);
lean_dec(v_snd_3469_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3518_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3479_; lean_object* v_startPh_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3484_; 
v___x_3479_ = l_List_lengthTR___redArg(v_snd_3475_);
v_startPh_3480_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_3479_);
v___x_3481_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__2, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__2);
v___x_3482_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3482_, 0, v___y_3443_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 1, v___x_3482_);
lean_ctor_set(v___x_3477_, 0, v___x_3481_);
v___x_3484_ = v___x_3477_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v___x_3481_);
lean_ctor_set(v_reuseFailAlloc_3517_, 1, v___x_3482_);
v___x_3484_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3489_; 
v___x_3485_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__7, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7);
v___x_3486_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4);
v___x_3487_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3487_, 0, v_fst_3474_);
if (v_isShared_3473_ == 0)
{
lean_ctor_set(v___x_3472_, 1, v___x_3487_);
lean_ctor_set(v___x_3472_, 0, v___x_3486_);
v___x_3489_ = v___x_3472_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v___x_3486_);
lean_ctor_set(v_reuseFailAlloc_3516_, 1, v___x_3487_);
v___x_3489_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v_t4_3495_; lean_object* v___x_3496_; lean_object* v_endPh_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v_t5_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3512_; 
lean_inc_ref(v___x_3452_);
v___x_3490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
lean_ctor_set(v___x_3490_, 1, v___x_3452_);
v___x_3491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3485_);
lean_ctor_set(v___x_3491_, 1, v___x_3490_);
v___x_3492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3484_);
lean_ctor_set(v___x_3492_, 1, v___x_3491_);
v___x_3493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3445_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3493_);
lean_ctor_set(v___x_3494_, 1, v___x_3451_);
v_t4_3495_ = l_List_appendTR___redArg(v_snd_3475_, v___x_3494_);
v___x_3496_ = l_List_lengthTR___redArg(v_t4_3495_);
v_endPh_3497_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_3496_);
v___x_3498_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__11, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11);
v___x_3499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
lean_ctor_set(v___x_3499_, 1, v___x_3452_);
v___x_3500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3445_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
v___x_3501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3500_);
lean_ctor_set(v___x_3501_, 1, v___x_3451_);
v_t5_3502_ = l_List_appendTR___redArg(v_t4_3495_, v___x_3501_);
lean_inc(v___y_3444_);
v___x_3503_ = l_List_appendTR___redArg(v___y_3444_, v___y_3444_);
v___x_3504_ = l_List_appendTR___redArg(v___x_3503_, v_startPh_3480_);
v___x_3505_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__4));
v___x_3506_ = l_List_appendTR___redArg(v___x_3504_, v___x_3505_);
v___x_3507_ = l_List_appendTR___redArg(v___x_3506_, v_fst_3470_);
v___x_3508_ = l_List_appendTR___redArg(v___x_3507_, v___x_3505_);
v___x_3509_ = l_List_appendTR___redArg(v___x_3508_, v_endPh_3497_);
v___x_3510_ = lean_nat_add(v_tabviewCounter_3437_, v___x_3466_);
lean_dec(v_tabviewCounter_3437_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 11, v___x_3510_);
v___x_3512_ = v___x_3440_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_page_3426_);
lean_ctor_set(v_reuseFailAlloc_3515_, 1, v_site_3427_);
lean_ctor_set(v_reuseFailAlloc_3515_, 2, v_inclusions_3428_);
lean_ctor_set(v_reuseFailAlloc_3515_, 3, v_inclusionsNotExist_3429_);
lean_ctor_set(v_reuseFailAlloc_3515_, 4, v_footnotes_3430_);
lean_ctor_set(v_reuseFailAlloc_3515_, 5, v_bibitems_3431_);
lean_ctor_set(v_reuseFailAlloc_3515_, 6, v_bibitemIds_3432_);
lean_ctor_set(v_reuseFailAlloc_3515_, 7, v_headlineId_3433_);
lean_ctor_set(v_reuseFailAlloc_3515_, 8, v_mathId_3434_);
lean_ctor_set(v_reuseFailAlloc_3515_, 9, v_equations_3435_);
lean_ctor_set(v_reuseFailAlloc_3515_, 10, v_collapsibleCount_3436_);
lean_ctor_set(v_reuseFailAlloc_3515_, 11, v___x_3510_);
lean_ctor_set(v_reuseFailAlloc_3515_, 12, v_scoredAnchors_3438_);
v___x_3512_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3513_, 0, v_t5_3502_);
lean_ctor_set(v___x_3513_, 1, v___x_3512_);
v___x_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3509_);
lean_ctor_set(v___x_3514_, 1, v___x_3513_);
return v___x_3514_;
}
}
}
}
}
}
v___jp_3520_:
{
if (lean_obj_tag(v_g1_3422_) == 0)
{
lean_object* v___x_3522_; 
v___x_3522_ = lean_box(0);
v___y_3443_ = v___y_3521_;
v___y_3444_ = v___x_3522_;
goto v___jp_3442_;
}
else
{
lean_object* v_val_3523_; 
v_val_3523_ = lean_ctor_get(v_g1_3422_, 0);
lean_inc(v_val_3523_);
lean_dec_ref_known(v_g1_3422_, 1);
v___y_3443_ = v___y_3521_;
v___y_3444_ = v_val_3523_;
goto v___jp_3442_;
}
}
v___jp_3524_:
{
lean_object* v_attr_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v_attr_3526_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_3525_);
lean_dec(v___y_3525_);
v___x_3527_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_3528_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attr_3526_, v___x_3527_);
lean_dec(v_attr_3526_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v___x_3529_; 
v___x_3529_ = lean_box(0);
v___y_3521_ = v___x_3529_;
goto v___jp_3520_;
}
else
{
lean_object* v_val_3530_; uint8_t v___x_3531_; 
v_val_3530_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_val_3530_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3531_ = l_List_isEmpty___redArg(v_val_3530_);
if (v___x_3531_ == 0)
{
lean_object* v___x_3532_; uint8_t v___x_3533_; 
v___x_3532_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6);
v___x_3533_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_val_3530_, v___x_3532_);
if (v___x_3533_ == 0)
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3534_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7);
v___x_3535_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_3530_);
v___x_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3534_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_box(0);
v___x_3538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3536_);
lean_ctor_set(v___x_3538_, 1, v___x_3537_);
v___y_3521_ = v___x_3538_;
goto v___jp_3520_;
}
else
{
lean_object* v___x_3539_; 
lean_dec(v_val_3530_);
v___x_3539_ = lean_box(0);
v___y_3521_ = v___x_3539_;
goto v___jp_3520_;
}
}
else
{
lean_object* v___x_3540_; 
lean_dec(v_val_3530_);
v___x_3540_ = lean_box(0);
v___y_3521_ = v___x_3540_;
goto v___jp_3520_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewScan(lean_object* v_src_3544_, lean_object* v_toks_3545_, lean_object* v_doc_3546_, uint8_t v_atStart_3547_, lean_object* v_x_3548_){
_start:
{
lean_object* v_zero_3549_; uint8_t v_isZero_3550_; 
v_zero_3549_ = lean_unsigned_to_nat(0u);
v_isZero_3550_ = lean_nat_dec_eq(v_x_3548_, v_zero_3549_);
if (v_isZero_3550_ == 1)
{
lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3551_, 0, v_toks_3545_);
lean_ctor_set(v___x_3551_, 1, v_doc_3546_);
v___x_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3552_, 0, v_src_3544_);
lean_ctor_set(v___x_3552_, 1, v___x_3551_);
return v___x_3552_;
}
else
{
if (lean_obj_tag(v_src_3544_) == 0)
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3553_, 0, v_toks_3545_);
lean_ctor_set(v___x_3553_, 1, v_doc_3546_);
v___x_3554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3554_, 0, v_src_3544_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
return v___x_3554_;
}
else
{
lean_object* v_head_3555_; lean_object* v_tail_3556_; lean_object* v_one_3557_; lean_object* v_n_3558_; 
v_head_3555_ = lean_ctor_get(v_src_3544_, 0);
lean_inc(v_head_3555_);
v_tail_3556_ = lean_ctor_get(v_src_3544_, 1);
lean_inc(v_tail_3556_);
v_one_3557_ = lean_unsigned_to_nat(1u);
v_n_3558_ = lean_nat_sub(v_x_3548_, v_one_3557_);
if (v_atStart_3547_ == 0)
{
lean_dec_ref_known(v_src_3544_, 2);
goto v___jp_3559_;
}
else
{
lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___x_3573_ = lp_lean_x2dftml_LeanFtml_tabviewMatchAt(v_src_3544_);
v___x_3574_ = l_List_head_x3f___redArg(v___x_3573_);
lean_dec(v___x_3573_);
if (lean_obj_tag(v___x_3574_) == 0)
{
goto v___jp_3559_;
}
else
{
lean_object* v_val_3575_; lean_object* v_snd_3576_; lean_object* v_fst_3577_; lean_object* v_fst_3578_; lean_object* v_snd_3579_; lean_object* v___x_3580_; lean_object* v_snd_3581_; lean_object* v_fst_3582_; lean_object* v_fst_3583_; lean_object* v_snd_3584_; lean_object* v___x_3585_; lean_object* v_fst_3586_; lean_object* v_snd_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3595_; 
lean_dec(v_tail_3556_);
lean_dec(v_head_3555_);
v_val_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_val_3575_);
lean_dec_ref_known(v___x_3574_, 1);
v_snd_3576_ = lean_ctor_get(v_val_3575_, 1);
lean_inc(v_snd_3576_);
v_fst_3577_ = lean_ctor_get(v_val_3575_, 0);
lean_inc(v_fst_3577_);
lean_dec(v_val_3575_);
v_fst_3578_ = lean_ctor_get(v_snd_3576_, 0);
lean_inc(v_fst_3578_);
v_snd_3579_ = lean_ctor_get(v_snd_3576_, 1);
lean_inc(v_snd_3579_);
lean_dec(v_snd_3576_);
v___x_3580_ = lp_lean_x2dftml_LeanFtml_tabviewProcess(v_fst_3577_, v_fst_3578_, v_doc_3546_, v_toks_3545_);
v_snd_3581_ = lean_ctor_get(v___x_3580_, 1);
lean_inc(v_snd_3581_);
v_fst_3582_ = lean_ctor_get(v___x_3580_, 0);
lean_inc(v_fst_3582_);
lean_dec_ref(v___x_3580_);
v_fst_3583_ = lean_ctor_get(v_snd_3581_, 0);
lean_inc(v_fst_3583_);
v_snd_3584_ = lean_ctor_get(v_snd_3581_, 1);
lean_inc(v_snd_3584_);
lean_dec(v_snd_3581_);
v___x_3585_ = lp_lean_x2dftml_LeanFtml_tabviewScan(v_snd_3579_, v_fst_3583_, v_snd_3584_, v_isZero_3550_, v_n_3558_);
lean_dec(v_n_3558_);
v_fst_3586_ = lean_ctor_get(v___x_3585_, 0);
v_snd_3587_ = lean_ctor_get(v___x_3585_, 1);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3589_ = v___x_3585_;
v_isShared_3590_ = v_isSharedCheck_3595_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_snd_3587_);
lean_inc(v_fst_3586_);
lean_dec(v___x_3585_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3595_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3591_; lean_object* v___x_3593_; 
v___x_3591_ = l_List_appendTR___redArg(v_fst_3582_, v_fst_3586_);
if (v_isShared_3590_ == 0)
{
lean_ctor_set(v___x_3589_, 0, v___x_3591_);
v___x_3593_ = v___x_3589_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3591_);
lean_ctor_set(v_reuseFailAlloc_3594_, 1, v_snd_3587_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
v___jp_3559_:
{
lean_object* v___x_3560_; uint8_t v___x_3561_; lean_object* v___x_3562_; lean_object* v_fst_3563_; lean_object* v_snd_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3572_; 
v___x_3560_ = lean_unsigned_to_nat(10u);
v___x_3561_ = lean_nat_dec_eq(v_head_3555_, v___x_3560_);
v___x_3562_ = lp_lean_x2dftml_LeanFtml_tabviewScan(v_tail_3556_, v_toks_3545_, v_doc_3546_, v___x_3561_, v_n_3558_);
lean_dec(v_n_3558_);
v_fst_3563_ = lean_ctor_get(v___x_3562_, 0);
v_snd_3564_ = lean_ctor_get(v___x_3562_, 1);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3562_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3566_ = v___x_3562_;
v_isShared_3567_ = v_isSharedCheck_3572_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_snd_3564_);
lean_inc(v_fst_3563_);
lean_dec(v___x_3562_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3572_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3568_; lean_object* v___x_3570_; 
v___x_3568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3568_, 0, v_head_3555_);
lean_ctor_set(v___x_3568_, 1, v_fst_3563_);
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 0, v___x_3568_);
v___x_3570_ = v___x_3566_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___x_3568_);
lean_ctor_set(v_reuseFailAlloc_3571_, 1, v_snd_3564_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewScan___boxed(lean_object* v_src_3596_, lean_object* v_toks_3597_, lean_object* v_doc_3598_, lean_object* v_atStart_3599_, lean_object* v_x_3600_){
_start:
{
uint8_t v_atStart_boxed_3601_; lean_object* v_res_3602_; 
v_atStart_boxed_3601_ = lean_unbox(v_atStart_3599_);
v_res_3602_ = lp_lean_x2dftml_LeanFtml_tabviewScan(v_src_3596_, v_toks_3597_, v_doc_3598_, v_atStart_boxed_3601_, v_x_3600_);
lean_dec(v_x_3600_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewPasses(lean_object* v_src_3603_, lean_object* v_toks_3604_, lean_object* v_doc_3605_, lean_object* v_x_3606_){
_start:
{
lean_object* v_zero_3607_; uint8_t v_isZero_3608_; 
v_zero_3607_ = lean_unsigned_to_nat(0u);
v_isZero_3608_ = lean_nat_dec_eq(v_x_3606_, v_zero_3607_);
if (v_isZero_3608_ == 1)
{
lean_object* v___x_3609_; lean_object* v___x_3610_; 
lean_dec(v_x_3606_);
v___x_3609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3609_, 0, v_toks_3604_);
lean_ctor_set(v___x_3609_, 1, v_doc_3605_);
v___x_3610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3610_, 0, v_src_3603_);
lean_ctor_set(v___x_3610_, 1, v___x_3609_);
return v___x_3610_;
}
else
{
uint8_t v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v_snd_3616_; lean_object* v_fst_3617_; lean_object* v_fst_3618_; lean_object* v_snd_3619_; uint8_t v___x_3620_; 
v___x_3611_ = 1;
v___x_3612_ = l_List_lengthTR___redArg(v_src_3603_);
v___x_3613_ = lean_unsigned_to_nat(1u);
v___x_3614_ = lean_nat_add(v___x_3612_, v___x_3613_);
lean_dec(v___x_3612_);
lean_inc(v_src_3603_);
v___x_3615_ = lp_lean_x2dftml_LeanFtml_tabviewScan(v_src_3603_, v_toks_3604_, v_doc_3605_, v___x_3611_, v___x_3614_);
lean_dec(v___x_3614_);
v_snd_3616_ = lean_ctor_get(v___x_3615_, 1);
v_fst_3617_ = lean_ctor_get(v___x_3615_, 0);
v_fst_3618_ = lean_ctor_get(v_snd_3616_, 0);
v_snd_3619_ = lean_ctor_get(v_snd_3616_, 1);
v___x_3620_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_3617_, v_src_3603_);
lean_dec(v_src_3603_);
if (v___x_3620_ == 0)
{
lean_object* v_n_3621_; 
lean_inc(v_snd_3619_);
lean_inc(v_fst_3618_);
lean_inc(v_fst_3617_);
lean_dec_ref(v___x_3615_);
v_n_3621_ = lean_nat_sub(v_x_3606_, v___x_3613_);
lean_dec(v_x_3606_);
v_src_3603_ = v_fst_3617_;
v_toks_3604_ = v_fst_3618_;
v_doc_3605_ = v_snd_3619_;
v_x_3606_ = v_n_3621_;
goto _start;
}
else
{
lean_dec(v_x_3606_);
return v___x_3615_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewRule(lean_object* v_st_3623_){
_start:
{
lean_object* v_work_3624_; lean_object* v_tokens_3625_; lean_object* v_doc_3626_; uint8_t v_fatal_3627_; lean_object* v_continuedDivLeads_3628_; lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3645_; 
v_work_3624_ = lean_ctor_get(v_st_3623_, 0);
v_tokens_3625_ = lean_ctor_get(v_st_3623_, 1);
v_doc_3626_ = lean_ctor_get(v_st_3623_, 2);
v_fatal_3627_ = lean_ctor_get_uint8(v_st_3623_, sizeof(void*)*4);
v_continuedDivLeads_3628_ = lean_ctor_get(v_st_3623_, 3);
v_isSharedCheck_3645_ = !lean_is_exclusive(v_st_3623_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3630_ = v_st_3623_;
v_isShared_3631_ = v_isSharedCheck_3645_;
goto v_resetjp_3629_;
}
else
{
lean_inc(v_continuedDivLeads_3628_);
lean_inc(v_doc_3626_);
lean_inc(v_tokens_3625_);
lean_inc(v_work_3624_);
lean_dec(v_st_3623_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3645_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v_input_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v_snd_3637_; lean_object* v_fst_3638_; lean_object* v_fst_3639_; lean_object* v_snd_3640_; lean_object* v___x_3641_; lean_object* v___x_3643_; 
v_input_3632_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_3624_);
v___x_3633_ = l_List_lengthTR___redArg(v_input_3632_);
v___x_3634_ = lean_unsigned_to_nat(2u);
v___x_3635_ = lean_nat_add(v___x_3633_, v___x_3634_);
lean_dec(v___x_3633_);
v___x_3636_ = lp_lean_x2dftml_LeanFtml_tabviewPasses(v_input_3632_, v_tokens_3625_, v_doc_3626_, v___x_3635_);
v_snd_3637_ = lean_ctor_get(v___x_3636_, 1);
lean_inc(v_snd_3637_);
v_fst_3638_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_fst_3638_);
lean_dec_ref(v___x_3636_);
v_fst_3639_ = lean_ctor_get(v_snd_3637_, 0);
lean_inc(v_fst_3639_);
v_snd_3640_ = lean_ctor_get(v_snd_3637_, 1);
lean_inc(v_snd_3640_);
lean_dec(v_snd_3637_);
v___x_3641_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_3638_);
if (v_isShared_3631_ == 0)
{
lean_ctor_set(v___x_3630_, 2, v_snd_3640_);
lean_ctor_set(v___x_3630_, 1, v_fst_3639_);
lean_ctor_set(v___x_3630_, 0, v___x_3641_);
v___x_3643_ = v___x_3630_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v___x_3641_);
lean_ctor_set(v_reuseFailAlloc_3644_, 1, v_fst_3639_);
lean_ctor_set(v_reuseFailAlloc_3644_, 2, v_snd_3640_);
lean_ctor_set(v_reuseFailAlloc_3644_, 3, v_continuedDivLeads_3628_);
lean_ctor_set_uint8(v_reuseFailAlloc_3644_, sizeof(void*)*4, v_fatal_3627_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeRule(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NextRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_LinkRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NotesRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_BlockRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ContainRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_FormRawRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ModuleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_NextRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_LinkRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_NotesRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_BlockRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_collapseWsU_go___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_collapseWsU_go___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_collapseWsU_go___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
