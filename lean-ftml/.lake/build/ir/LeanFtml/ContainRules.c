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
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_lowerAsciiB_spec__0(lean_object*, lean_object*);
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
v___x_21_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_lowerAsciiB_spec__0(v_bs_19_, v___x_20_);
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
lean_object* v___x_1118_; uint8_t v___x_1119_; 
v___x_1118_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__14, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__14);
v___x_1119_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1118_, v_v_1088_);
if (v___x_1119_ == 0)
{
lean_object* v___x_1120_; 
v___x_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1120_, 0, v_v_1088_);
return v___x_1120_;
}
else
{
lean_object* v___x_1121_; 
lean_dec(v_v_1088_);
v___x_1121_ = lean_box(0);
return v___x_1121_;
}
}
}
else
{
lean_object* v___x_1122_; 
lean_dec(v_v_1088_);
v___x_1122_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isolateId___closed__2));
return v___x_1122_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue_go(lean_object* v_a_1123_, uint8_t v_a_1124_){
_start:
{
if (lean_obj_tag(v_a_1123_) == 0)
{
return v_a_1123_;
}
else
{
lean_object* v_head_1125_; lean_object* v_tail_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1147_; 
v_head_1125_ = lean_ctor_get(v_a_1123_, 0);
v_tail_1126_ = lean_ctor_get(v_a_1123_, 1);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_a_1123_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1128_ = v_a_1123_;
v_isShared_1129_ = v_isSharedCheck_1147_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_tail_1126_);
lean_inc(v_head_1125_);
lean_dec(v_a_1123_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1147_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1130_; uint8_t v___x_1138_; 
v___x_1130_ = lean_unsigned_to_nat(32u);
v___x_1138_ = lean_nat_dec_eq(v_head_1125_, v___x_1130_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; uint8_t v___x_1140_; 
v___x_1139_ = lean_unsigned_to_nat(9u);
v___x_1140_ = lean_nat_dec_eq(v_head_1125_, v___x_1139_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; uint8_t v___x_1142_; 
v___x_1141_ = lean_unsigned_to_nat(13u);
v___x_1142_ = lean_nat_dec_eq(v_head_1125_, v___x_1141_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; uint8_t v___x_1144_; 
v___x_1143_ = lean_unsigned_to_nat(10u);
v___x_1144_ = lean_nat_dec_eq(v_head_1125_, v___x_1143_);
if (v___x_1144_ == 0)
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_del_object(v___x_1128_);
v___x_1145_ = lp_lean_x2dftml_LeanFtml_normalizeValue_go(v_tail_1126_, v___x_1144_);
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v_head_1125_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
return v___x_1146_;
}
else
{
lean_dec(v_head_1125_);
goto v___jp_1131_;
}
}
else
{
lean_dec(v_head_1125_);
goto v___jp_1131_;
}
}
else
{
lean_dec(v_head_1125_);
goto v___jp_1131_;
}
}
else
{
lean_dec(v_head_1125_);
goto v___jp_1131_;
}
v___jp_1131_:
{
uint8_t v___x_1132_; 
v___x_1132_ = 1;
if (v_a_1124_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1135_; 
v___x_1133_ = lp_lean_x2dftml_LeanFtml_normalizeValue_go(v_tail_1126_, v___x_1132_);
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 1, v___x_1133_);
lean_ctor_set(v___x_1128_, 0, v___x_1130_);
v___x_1135_ = v___x_1128_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1130_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v___x_1133_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
else
{
lean_del_object(v___x_1128_);
v_a_1123_ = v_tail_1126_;
v_a_1124_ = v___x_1132_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue_go___boxed(lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
uint8_t v_a_260__boxed_1150_; lean_object* v_res_1151_; 
v_a_260__boxed_1150_ = lean_unbox(v_a_1149_);
v_res_1151_ = lp_lean_x2dftml_LeanFtml_normalizeValue_go(v_a_1148_, v_a_260__boxed_1150_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_normalizeValue_spec__0(lean_object* v_a_1152_, lean_object* v_a_1153_){
_start:
{
if (lean_obj_tag(v_a_1152_) == 0)
{
lean_object* v___x_1154_; 
v___x_1154_ = l_List_reverse___redArg(v_a_1153_);
return v___x_1154_;
}
else
{
lean_object* v_head_1155_; lean_object* v_tail_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1170_; 
v_head_1155_ = lean_ctor_get(v_a_1152_, 0);
v_tail_1156_ = lean_ctor_get(v_a_1152_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_a_1152_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1158_ = v_a_1152_;
v_isShared_1159_ = v_isSharedCheck_1170_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_tail_1156_);
lean_inc(v_head_1155_);
lean_dec(v_a_1152_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1170_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = lean_unsigned_to_nat(32u);
v___x_1161_ = lean_nat_dec_lt(v_head_1155_, v___x_1160_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; uint8_t v___x_1163_; 
v___x_1162_ = lean_unsigned_to_nat(127u);
v___x_1163_ = lean_nat_dec_eq(v_head_1155_, v___x_1162_);
if (v___x_1163_ == 0)
{
lean_object* v___x_1165_; 
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 1, v_a_1153_);
v___x_1165_ = v___x_1158_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_head_1155_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v_a_1153_);
v___x_1165_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
v_a_1152_ = v_tail_1156_;
v_a_1153_ = v___x_1165_;
goto _start;
}
}
else
{
lean_del_object(v___x_1158_);
lean_dec(v_head_1155_);
v_a_1152_ = v_tail_1156_;
goto _start;
}
}
else
{
lean_del_object(v___x_1158_);
lean_dec(v_head_1155_);
v_a_1152_ = v_tail_1156_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeValue(lean_object* v_v_1171_){
_start:
{
lean_object* v___x_1172_; lean_object* v_v1_1173_; uint8_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1172_ = lean_box(0);
v_v1_1173_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_normalizeValue_spec__0(v_v_1171_, v___x_1172_);
v___x_1174_ = 0;
v___x_1175_ = lp_lean_x2dftml_LeanFtml_normalizeValue_go(v_v1_1173_, v___x_1174_);
v___x_1176_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(v___x_1175_);
lean_dec(v___x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimSpaceTab(lean_object* v_bs_1177_){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = l_List_reverse___redArg(v_bs_1177_);
v___x_1179_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v___x_1178_);
lean_dec(v___x_1178_);
v___x_1180_ = l_List_reverse___redArg(v___x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(lean_object* v_k_1181_, lean_object* v_x_1182_){
_start:
{
if (lean_obj_tag(v_x_1182_) == 0)
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_box(0);
return v___x_1183_;
}
else
{
lean_object* v_head_1184_; lean_object* v_tail_1185_; lean_object* v_fst_1186_; uint8_t v___x_1187_; 
v_head_1184_ = lean_ctor_get(v_x_1182_, 0);
v_tail_1185_ = lean_ctor_get(v_x_1182_, 1);
v_fst_1186_ = lean_ctor_get(v_head_1184_, 0);
v___x_1187_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1186_, v_k_1181_);
if (v___x_1187_ == 0)
{
v_x_1182_ = v_tail_1185_;
goto _start;
}
else
{
lean_object* v___x_1189_; 
lean_inc(v_head_1184_);
v___x_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1189_, 0, v_head_1184_);
return v___x_1189_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0___boxed(lean_object* v_k_1190_, lean_object* v_x_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(v_k_1190_, v_x_1191_);
lean_dec(v_x_1191_);
lean_dec(v_k_1190_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_omSetOpt_spec__1(lean_object* v_k_1193_, lean_object* v_v_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_){
_start:
{
if (lean_obj_tag(v_a_1195_) == 0)
{
lean_object* v___x_1197_; 
lean_dec(v_v_1194_);
lean_dec(v_k_1193_);
v___x_1197_ = l_List_reverse___redArg(v_a_1196_);
return v___x_1197_;
}
else
{
lean_object* v_head_1198_; lean_object* v_tail_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1220_; 
v_head_1198_ = lean_ctor_get(v_a_1195_, 0);
v_tail_1199_ = lean_ctor_get(v_a_1195_, 1);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_a_1195_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1201_ = v_a_1195_;
v_isShared_1202_ = v_isSharedCheck_1220_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_tail_1199_);
lean_inc(v_head_1198_);
lean_dec(v_a_1195_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1220_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___y_1204_; lean_object* v_fst_1209_; uint8_t v___x_1210_; 
v_fst_1209_ = lean_ctor_get(v_head_1198_, 0);
v___x_1210_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1209_, v_k_1193_);
if (v___x_1210_ == 0)
{
v___y_1204_ = v_head_1198_;
goto v___jp_1203_;
}
else
{
lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
v_isSharedCheck_1217_ = !lean_is_exclusive(v_head_1198_);
if (v_isSharedCheck_1217_ == 0)
{
lean_object* v_unused_1218_; lean_object* v_unused_1219_; 
v_unused_1218_ = lean_ctor_get(v_head_1198_, 1);
lean_dec(v_unused_1218_);
v_unused_1219_ = lean_ctor_get(v_head_1198_, 0);
lean_dec(v_unused_1219_);
v___x_1212_ = v_head_1198_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_dec(v_head_1198_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
lean_inc(v_v_1194_);
lean_inc(v_k_1193_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 1, v_v_1194_);
lean_ctor_set(v___x_1212_, 0, v_k_1193_);
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_k_1193_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v_v_1194_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
v___y_1204_ = v___x_1215_;
goto v___jp_1203_;
}
}
}
v___jp_1203_:
{
lean_object* v___x_1206_; 
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 1, v_a_1196_);
lean_ctor_set(v___x_1201_, 0, v___y_1204_);
v___x_1206_ = v___x_1201_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___y_1204_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_a_1196_);
v___x_1206_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
v_a_1195_ = v_tail_1199_;
v_a_1196_ = v___x_1206_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omSetOpt(lean_object* v_m_1221_, lean_object* v_k_1222_, lean_object* v_v_1223_){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(v_k_1222_, v_m_1221_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1225_, 0, v_k_1222_);
lean_ctor_set(v___x_1225_, 1, v_v_1223_);
v___x_1226_ = lean_box(0);
v___x_1227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = l_List_appendTR___redArg(v_m_1221_, v___x_1227_);
return v___x_1228_;
}
else
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_dec_ref_known(v___x_1224_, 1);
v___x_1229_ = lean_box(0);
v___x_1230_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_omSetOpt_spec__1(v_k_1222_, v_v_1223_, v_m_1221_, v___x_1229_);
return v___x_1230_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesLe(lean_object* v_x_1231_, lean_object* v_x_1232_){
_start:
{
if (lean_obj_tag(v_x_1231_) == 0)
{
uint8_t v___x_1233_; 
v___x_1233_ = 1;
return v___x_1233_;
}
else
{
if (lean_obj_tag(v_x_1232_) == 0)
{
uint8_t v___x_1234_; 
v___x_1234_ = 0;
return v___x_1234_;
}
else
{
lean_object* v_head_1235_; lean_object* v_tail_1236_; lean_object* v_head_1237_; lean_object* v_tail_1238_; uint8_t v___x_1239_; 
v_head_1235_ = lean_ctor_get(v_x_1231_, 0);
v_tail_1236_ = lean_ctor_get(v_x_1231_, 1);
v_head_1237_ = lean_ctor_get(v_x_1232_, 0);
v_tail_1238_ = lean_ctor_get(v_x_1232_, 1);
v___x_1239_ = lean_nat_dec_lt(v_head_1235_, v_head_1237_);
if (v___x_1239_ == 0)
{
uint8_t v___x_1240_; 
v___x_1240_ = lean_nat_dec_lt(v_head_1237_, v_head_1235_);
if (v___x_1240_ == 0)
{
v_x_1231_ = v_tail_1236_;
v_x_1232_ = v_tail_1238_;
goto _start;
}
else
{
return v___x_1239_;
}
}
else
{
return v___x_1239_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesLe___boxed(lean_object* v_x_1242_, lean_object* v_x_1243_){
_start:
{
uint8_t v_res_1244_; lean_object* v_r_1245_; 
v_res_1244_ = lp_lean_x2dftml_LeanFtml_bytesLe(v_x_1242_, v_x_1243_);
lean_dec(v_x_1243_);
lean_dec(v_x_1242_);
v_r_1245_ = lean_box(v_res_1244_);
return v_r_1245_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_insertArg(lean_object* v_kv_1246_, lean_object* v_x_1247_){
_start:
{
if (lean_obj_tag(v_x_1247_) == 0)
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1248_, 0, v_kv_1246_);
lean_ctor_set(v___x_1248_, 1, v_x_1247_);
return v___x_1248_;
}
else
{
lean_object* v_head_1249_; lean_object* v_tail_1250_; lean_object* v_fst_1251_; lean_object* v_fst_1252_; uint8_t v___x_1253_; 
v_head_1249_ = lean_ctor_get(v_x_1247_, 0);
lean_inc(v_head_1249_);
v_tail_1250_ = lean_ctor_get(v_x_1247_, 1);
v_fst_1251_ = lean_ctor_get(v_kv_1246_, 0);
v_fst_1252_ = lean_ctor_get(v_head_1249_, 0);
v___x_1253_ = lp_lean_x2dftml_LeanFtml_bytesLe(v_fst_1251_, v_fst_1252_);
if (v___x_1253_ == 0)
{
lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1261_; 
lean_inc(v_tail_1250_);
v_isSharedCheck_1261_ = !lean_is_exclusive(v_x_1247_);
if (v_isSharedCheck_1261_ == 0)
{
lean_object* v_unused_1262_; lean_object* v_unused_1263_; 
v_unused_1262_ = lean_ctor_get(v_x_1247_, 1);
lean_dec(v_unused_1262_);
v_unused_1263_ = lean_ctor_get(v_x_1247_, 0);
lean_dec(v_unused_1263_);
v___x_1255_ = v_x_1247_;
v_isShared_1256_ = v_isSharedCheck_1261_;
goto v_resetjp_1254_;
}
else
{
lean_dec(v_x_1247_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1261_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1257_; lean_object* v___x_1259_; 
v___x_1257_ = lp_lean_x2dftml_LeanFtml_insertArg(v_kv_1246_, v_tail_1250_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 1, v___x_1257_);
v___x_1259_ = v___x_1255_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_head_1249_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v___x_1257_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
else
{
lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
v_isSharedCheck_1270_ = !lean_is_exclusive(v_head_1249_);
if (v_isSharedCheck_1270_ == 0)
{
lean_object* v_unused_1271_; lean_object* v_unused_1272_; 
v_unused_1271_ = lean_ctor_get(v_head_1249_, 1);
lean_dec(v_unused_1271_);
v_unused_1272_ = lean_ctor_get(v_head_1249_, 0);
lean_dec(v_unused_1272_);
v___x_1265_ = v_head_1249_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_dec(v_head_1249_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set_tag(v___x_1265_, 1);
lean_ctor_set(v___x_1265_, 1, v_x_1247_);
lean_ctor_set(v___x_1265_, 0, v_kv_1246_);
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_kv_1246_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_x_1247_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0(lean_object* v_built_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
if (lean_obj_tag(v_a_1274_) == 0)
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_array_to_list(v_a_1275_);
return v___x_1276_;
}
else
{
lean_object* v_head_1277_; lean_object* v_tail_1278_; lean_object* v___x_1279_; 
v_head_1277_ = lean_ctor_get(v_a_1274_, 0);
v_tail_1278_ = lean_ctor_get(v_a_1274_, 1);
v___x_1279_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_omSetOpt_spec__0(v_head_1277_, v_built_1273_);
if (lean_obj_tag(v___x_1279_) == 0)
{
v_a_1274_ = v_tail_1278_;
goto _start;
}
else
{
lean_object* v_val_1281_; lean_object* v___x_1282_; 
v_val_1281_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_val_1281_);
lean_dec_ref_known(v___x_1279_, 1);
v___x_1282_ = lean_array_push(v_a_1275_, v_val_1281_);
v_a_1274_ = v_tail_1278_;
v_a_1275_ = v___x_1282_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0___boxed(lean_object* v_built_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0(v_built_1284_, v_a_1285_, v_a_1286_);
lean_dec(v_a_1285_);
lean_dec(v_built_1284_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divArgsOrder_spec__1(lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
if (lean_obj_tag(v_a_1288_) == 0)
{
lean_object* v___x_1290_; 
v___x_1290_ = l_List_reverse___redArg(v_a_1289_);
return v___x_1290_;
}
else
{
lean_object* v_head_1291_; lean_object* v_tail_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1304_; 
v_head_1291_ = lean_ctor_get(v_a_1288_, 0);
v_tail_1292_ = lean_ctor_get(v_a_1288_, 1);
v_isSharedCheck_1304_ = !lean_is_exclusive(v_a_1288_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1294_ = v_a_1288_;
v_isShared_1295_ = v_isSharedCheck_1304_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_tail_1292_);
lean_inc(v_head_1291_);
lean_dec(v_a_1288_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1304_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v_fst_1296_; lean_object* v___x_1297_; uint8_t v___x_1298_; 
v_fst_1296_ = lean_ctor_get(v_head_1291_, 0);
v___x_1297_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11);
v___x_1298_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1297_, v_fst_1296_);
if (v___x_1298_ == 0)
{
lean_del_object(v___x_1294_);
lean_dec(v_head_1291_);
v_a_1288_ = v_tail_1292_;
goto _start;
}
else
{
lean_object* v___x_1301_; 
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 1, v_a_1289_);
v___x_1301_ = v___x_1294_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_head_1291_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v_a_1289_);
v___x_1301_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
v_a_1288_ = v_tail_1292_;
v_a_1289_ = v___x_1301_;
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
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1305_ = lean_box(0);
v___x_1306_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9);
v___x_1307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set(v___x_1307_, 1, v___x_1305_);
return v___x_1307_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1308_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__0);
v___x_1309_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7);
v___x_1310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set(v___x_1310_, 1, v___x_1308_);
return v___x_1310_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2(void){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1311_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__1);
v___x_1312_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5);
v___x_1313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___x_1311_);
return v___x_1313_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1314_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__2);
v___x_1315_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_1316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v___x_1314_);
return v___x_1316_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1317_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__3);
v___x_1318_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1);
v___x_1319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set(v___x_1319_, 1, v___x_1317_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divArgsOrder(lean_object* v_built_1322_){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v_ranked_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1323_ = lean_box(0);
v___x_1324_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4, &lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__4);
v___x_1325_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divArgsOrder___closed__5));
v_ranked_1326_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_divArgsOrder_spec__0(v_built_1322_, v___x_1324_, v___x_1325_);
v___x_1327_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divArgsOrder_spec__1(v_built_1322_, v___x_1323_);
v___x_1328_ = l_List_appendTR___redArg(v_ranked_1326_, v___x_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divArgs_spec__1(lean_object* v_a_1329_, lean_object* v_a_1330_){
_start:
{
if (lean_obj_tag(v_a_1329_) == 0)
{
lean_object* v___x_1331_; 
v___x_1331_ = l_List_reverse___redArg(v_a_1330_);
return v___x_1331_;
}
else
{
lean_object* v_head_1332_; lean_object* v_tail_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1351_; 
v_head_1332_ = lean_ctor_get(v_a_1329_, 0);
v_tail_1333_ = lean_ctor_get(v_a_1329_, 1);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_a_1329_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1335_ = v_a_1329_;
v_isShared_1336_ = v_isSharedCheck_1351_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_tail_1333_);
lean_inc(v_head_1332_);
lean_dec(v_a_1329_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1351_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v_fst_1337_; lean_object* v_snd_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1350_; 
v_fst_1337_ = lean_ctor_get(v_head_1332_, 0);
v_snd_1338_ = lean_ctor_get(v_head_1332_, 1);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_head_1332_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1340_ = v_head_1332_;
v_isShared_1341_ = v_isSharedCheck_1350_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_snd_1338_);
lean_inc(v_fst_1337_);
lean_dec(v_head_1332_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1350_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1342_; lean_object* v___x_1344_; 
v___x_1342_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_fst_1337_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 0, v___x_1342_);
v___x_1344_ = v___x_1340_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1342_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v_snd_1338_);
v___x_1344_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
lean_object* v___x_1346_; 
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 1, v_a_1330_);
lean_ctor_set(v___x_1335_, 0, v___x_1344_);
v___x_1346_ = v___x_1335_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1344_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v_a_1330_);
v___x_1346_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
v_a_1329_ = v_tail_1333_;
v_a_1330_ = v___x_1346_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_divArgs_spec__0(lean_object* v_x_1352_, lean_object* v_x_1353_){
_start:
{
if (lean_obj_tag(v_x_1353_) == 0)
{
return v_x_1352_;
}
else
{
lean_object* v_head_1354_; lean_object* v_tail_1355_; lean_object* v_fst_1356_; lean_object* v_snd_1357_; lean_object* v___x_1363_; uint8_t v___x_1364_; 
v_head_1354_ = lean_ctor_get(v_x_1353_, 0);
lean_inc(v_head_1354_);
v_tail_1355_ = lean_ctor_get(v_x_1353_, 1);
lean_inc(v_tail_1355_);
lean_dec_ref_known(v_x_1353_, 2);
v_fst_1356_ = lean_ctor_get(v_head_1354_, 0);
lean_inc(v_fst_1356_);
v_snd_1357_ = lean_ctor_get(v_head_1354_, 1);
lean_inc(v_snd_1357_);
lean_dec(v_head_1354_);
v___x_1363_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__1);
v___x_1364_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1356_, v___x_1363_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_1366_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1356_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; uint8_t v___x_1368_; 
v___x_1367_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5);
v___x_1368_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1356_, v___x_1367_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1369_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7);
v___x_1370_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1356_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1371_; uint8_t v___x_1372_; 
v___x_1371_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9);
v___x_1372_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1356_, v___x_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; uint8_t v___x_1374_; 
v___x_1373_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11);
v___x_1374_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1373_, v_fst_1356_);
if (v___x_1374_ == 0)
{
lean_dec(v_snd_1357_);
lean_dec(v_fst_1356_);
v_x_1353_ = v_tail_1355_;
goto _start;
}
else
{
lean_object* v_lk_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v_lk_1376_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_fst_1356_);
v___x_1377_ = lp_lean_x2dftml_LeanFtml_normalizeValue(v_snd_1357_);
v___x_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
v___x_1379_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1352_, v_lk_1376_, v___x_1378_);
v_x_1352_ = v___x_1379_;
v_x_1353_ = v_tail_1355_;
goto _start;
}
}
else
{
goto v___jp_1358_;
}
}
else
{
goto v___jp_1358_;
}
}
else
{
goto v___jp_1358_;
}
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1381_ = lp_lean_x2dftml_LeanFtml_normalizeValue(v_snd_1357_);
v___x_1382_ = lp_lean_x2dftml_LeanFtml_rtrimSpaceTab(v___x_1381_);
v___x_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
v___x_1384_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1352_, v_fst_1356_, v___x_1383_);
v_x_1352_ = v___x_1384_;
v_x_1353_ = v_tail_1355_;
goto _start;
}
}
else
{
lean_object* v___x_1386_; 
v___x_1386_ = lp_lean_x2dftml_LeanFtml_isolateId(v_snd_1357_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v___x_1387_; 
v___x_1387_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1352_, v_fst_1356_, v___x_1386_);
v_x_1352_ = v___x_1387_;
v_x_1353_ = v_tail_1355_;
goto _start;
}
else
{
lean_object* v_val_1389_; uint8_t v___x_1390_; 
v_val_1389_ = lean_ctor_get(v___x_1386_, 0);
v___x_1390_ = l_List_isEmpty___redArg(v_val_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; 
v___x_1391_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1352_, v_fst_1356_, v___x_1386_);
v_x_1352_ = v___x_1391_;
v_x_1353_ = v_tail_1355_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_1386_, 1);
lean_dec(v_fst_1356_);
v_x_1353_ = v_tail_1355_;
goto _start;
}
}
}
v___jp_1358_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1359_ = lp_lean_x2dftml_LeanFtml_normalizeValue(v_snd_1357_);
v___x_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
v___x_1361_ = lp_lean_x2dftml_LeanFtml_omSetOpt(v_x_1352_, v_fst_1356_, v___x_1360_);
v_x_1352_ = v___x_1361_;
v_x_1353_ = v_tail_1355_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divArgs(lean_object* v_attr_1394_){
_start:
{
lean_object* v___x_1395_; lean_object* v_built_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1395_ = lean_box(0);
v_built_1396_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_divArgs_spec__0(v___x_1395_, v_attr_1394_);
v___x_1397_ = lp_lean_x2dftml_LeanFtml_divArgsOrder(v_built_1396_);
v___x_1398_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divArgs_spec__1(v___x_1397_, v___x_1395_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_collapseBlankRuns_spec__1(lean_object* v_a_1399_, lean_object* v_a_1400_){
_start:
{
if (lean_obj_tag(v_a_1399_) == 0)
{
lean_object* v___x_1401_; 
v___x_1401_ = l_List_reverse___redArg(v_a_1400_);
return v___x_1401_;
}
else
{
lean_object* v_head_1402_; lean_object* v_tail_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1414_; 
v_head_1402_ = lean_ctor_get(v_a_1399_, 0);
v_tail_1403_ = lean_ctor_get(v_a_1399_, 1);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_a_1399_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1405_ = v_a_1399_;
v_isShared_1406_ = v_isSharedCheck_1414_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_tail_1403_);
lean_inc(v_head_1402_);
lean_dec(v_a_1399_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1414_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = lean_unsigned_to_nat(10u);
v___x_1408_ = lean_nat_dec_eq(v_head_1402_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_del_object(v___x_1405_);
lean_dec(v_head_1402_);
v_a_1399_ = v_tail_1403_;
goto _start;
}
else
{
lean_object* v___x_1411_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 1, v_a_1400_);
v___x_1411_ = v___x_1405_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_head_1402_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v_a_1400_);
v___x_1411_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
v_a_1399_ = v_tail_1403_;
v_a_1400_ = v___x_1411_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0(lean_object* v_head_1415_, lean_object* v_l_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_){
_start:
{
if (lean_obj_tag(v_a_1417_) == 0)
{
lean_dec_ref(v_a_1418_);
lean_inc(v_l_1416_);
return v_l_1416_;
}
else
{
lean_object* v_head_1419_; lean_object* v_tail_1420_; uint8_t v___y_1422_; lean_object* v___x_1426_; uint8_t v___x_1427_; uint8_t v___x_1428_; 
v_head_1419_ = lean_ctor_get(v_a_1417_, 0);
lean_inc(v_head_1419_);
v_tail_1420_ = lean_ctor_get(v_a_1417_, 1);
lean_inc(v_tail_1420_);
lean_dec_ref_known(v_a_1417_, 2);
v___x_1426_ = lean_unsigned_to_nat(10u);
v___x_1427_ = lean_nat_dec_eq(v_head_1415_, v___x_1426_);
v___x_1428_ = lean_nat_dec_eq(v_head_1419_, v___x_1426_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = lean_unsigned_to_nat(32u);
v___x_1430_ = lean_nat_dec_eq(v_head_1419_, v___x_1429_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; uint8_t v___x_1432_; 
v___x_1431_ = lean_unsigned_to_nat(9u);
v___x_1432_ = lean_nat_dec_eq(v_head_1419_, v___x_1431_);
v___y_1422_ = v___x_1432_;
goto v___jp_1421_;
}
else
{
v___y_1422_ = v___x_1427_;
goto v___jp_1421_;
}
}
else
{
v___y_1422_ = v___x_1427_;
goto v___jp_1421_;
}
v___jp_1421_:
{
if (v___y_1422_ == 0)
{
lean_object* v___x_1423_; 
lean_dec(v_tail_1420_);
lean_dec(v_head_1419_);
v___x_1423_ = lean_array_to_list(v_a_1418_);
return v___x_1423_;
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_array_push(v_a_1418_, v_head_1419_);
v_a_1417_ = v_tail_1420_;
v_a_1418_ = v___x_1424_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0___boxed(lean_object* v_head_1433_, lean_object* v_l_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0(v_head_1433_, v_l_1434_, v_a_1435_, v_a_1436_);
lean_dec(v_l_1434_);
lean_dec(v_head_1433_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseBlankRuns(lean_object* v_s_1438_, lean_object* v_x_1439_){
_start:
{
lean_object* v_zero_1440_; uint8_t v_isZero_1441_; 
v_zero_1440_ = lean_unsigned_to_nat(0u);
v_isZero_1441_ = lean_nat_dec_eq(v_x_1439_, v_zero_1440_);
if (v_isZero_1441_ == 1)
{
lean_dec(v_x_1439_);
return v_s_1438_;
}
else
{
if (lean_obj_tag(v_s_1438_) == 0)
{
lean_dec(v_x_1439_);
return v_s_1438_;
}
else
{
lean_object* v_head_1442_; lean_object* v_tail_1443_; lean_object* v_one_1444_; lean_object* v_n_1445_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v_head_1442_ = lean_ctor_get(v_s_1438_, 0);
v_tail_1443_ = lean_ctor_get(v_s_1438_, 1);
v_one_1444_ = lean_unsigned_to_nat(1u);
v_n_1445_ = lean_nat_sub(v_x_1439_, v_one_1444_);
lean_dec(v_x_1439_);
v___x_1446_ = lean_unsigned_to_nat(10u);
v___x_1447_ = lean_nat_dec_eq(v_head_1442_, v___x_1446_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1455_; 
lean_inc(v_tail_1443_);
lean_inc(v_head_1442_);
v_isSharedCheck_1455_ = !lean_is_exclusive(v_s_1438_);
if (v_isSharedCheck_1455_ == 0)
{
lean_object* v_unused_1456_; lean_object* v_unused_1457_; 
v_unused_1456_ = lean_ctor_get(v_s_1438_, 1);
lean_dec(v_unused_1456_);
v_unused_1457_ = lean_ctor_get(v_s_1438_, 0);
lean_dec(v_unused_1457_);
v___x_1449_ = v_s_1438_;
v_isShared_1450_ = v_isSharedCheck_1455_;
goto v_resetjp_1448_;
}
else
{
lean_dec(v_s_1438_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1455_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1451_ = lp_lean_x2dftml_LeanFtml_collapseBlankRuns(v_tail_1443_, v_n_1445_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 1, v___x_1451_);
v___x_1453_ = v___x_1449_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_head_1442_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
else
{
lean_object* v___x_1458_; lean_object* v_run_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; 
v___x_1458_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc_ref(v_s_1438_);
v_run_1459_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_collapseBlankRuns_spec__0(v_head_1442_, v_s_1438_, v_s_1438_, v___x_1458_);
v___x_1460_ = lean_unsigned_to_nat(2u);
v___x_1461_ = lean_box(0);
lean_inc(v_run_1459_);
v___x_1462_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_collapseBlankRuns_spec__1(v_run_1459_, v___x_1461_);
v___x_1463_ = l_List_lengthTR___redArg(v___x_1462_);
lean_dec(v___x_1462_);
v___x_1464_ = lean_nat_dec_le(v___x_1460_, v___x_1463_);
lean_dec(v___x_1463_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1472_; 
lean_inc(v_tail_1443_);
lean_inc(v_head_1442_);
lean_dec(v_run_1459_);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_s_1438_);
if (v_isSharedCheck_1472_ == 0)
{
lean_object* v_unused_1473_; lean_object* v_unused_1474_; 
v_unused_1473_ = lean_ctor_get(v_s_1438_, 1);
lean_dec(v_unused_1473_);
v_unused_1474_ = lean_ctor_get(v_s_1438_, 0);
lean_dec(v_unused_1474_);
v___x_1466_ = v_s_1438_;
v_isShared_1467_ = v_isSharedCheck_1472_;
goto v_resetjp_1465_;
}
else
{
lean_dec(v_s_1438_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1472_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; lean_object* v___x_1470_; 
v___x_1468_ = lp_lean_x2dftml_LeanFtml_collapseBlankRuns(v_tail_1443_, v_n_1445_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 1, v___x_1468_);
v___x_1470_ = v___x_1466_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_head_1442_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v___x_1468_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
else
{
lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1475_ = l_List_lengthTR___redArg(v_run_1459_);
lean_dec(v_run_1459_);
v___x_1476_ = l_List_drop___redArg(v___x_1475_, v_s_1438_);
lean_dec_ref_known(v_s_1438_, 2);
v_s_1438_ = v___x_1476_;
v_x_1439_ = v_n_1445_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divMatch_spec__0(lean_object* v_fst_1478_, lean_object* v_fst_1479_, lean_object* v_fst_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_){
_start:
{
if (lean_obj_tag(v_a_1481_) == 0)
{
lean_object* v___x_1483_; 
lean_dec(v_fst_1480_);
lean_dec(v_fst_1479_);
lean_dec(v_fst_1478_);
v___x_1483_ = l_List_reverse___redArg(v_a_1482_);
return v___x_1483_;
}
else
{
lean_object* v_head_1484_; lean_object* v_tail_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1496_; 
v_head_1484_ = lean_ctor_get(v_a_1481_, 0);
v_tail_1485_ = lean_ctor_get(v_a_1481_, 1);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_a_1481_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1487_ = v_a_1481_;
v_isShared_1488_ = v_isSharedCheck_1496_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_tail_1485_);
lean_inc(v_head_1484_);
lean_dec(v_a_1481_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1496_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
lean_inc(v_fst_1478_);
v___x_1489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1489_, 0, v_fst_1478_);
lean_ctor_set(v___x_1489_, 1, v_head_1484_);
lean_inc(v_fst_1479_);
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v_fst_1479_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
lean_inc(v_fst_1480_);
v___x_1491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1491_, 0, v_fst_1480_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 1, v_a_1482_);
lean_ctor_set(v___x_1487_, 0, v___x_1491_);
v___x_1493_ = v___x_1487_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1491_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_a_1482_);
v___x_1493_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
v_a_1481_ = v_tail_1485_;
v_a_1482_ = v___x_1493_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1(lean_object* v_n_1499_, lean_object* v_fst_1500_, lean_object* v_fst_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_){
_start:
{
if (lean_obj_tag(v_a_1502_) == 0)
{
lean_object* v___x_1504_; 
lean_dec(v_fst_1501_);
lean_dec(v_fst_1500_);
v___x_1504_ = lean_array_to_list(v_a_1503_);
return v___x_1504_;
}
else
{
lean_object* v_head_1505_; lean_object* v_tail_1506_; lean_object* v___y_1508_; lean_object* v_fst_1511_; lean_object* v_snd_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v_sp_1515_; lean_object* v___x_1516_; 
v_head_1505_ = lean_ctor_get(v_a_1502_, 0);
lean_inc(v_head_1505_);
v_tail_1506_ = lean_ctor_get(v_a_1502_, 1);
lean_inc(v_tail_1506_);
lean_dec_ref_known(v_a_1502_, 2);
v_fst_1511_ = lean_ctor_get(v_head_1505_, 0);
lean_inc(v_fst_1511_);
v_snd_1512_ = lean_ctor_get(v_head_1505_, 1);
lean_inc_n(v_snd_1512_, 2);
lean_dec(v_head_1505_);
v___x_1513_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_1514_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_snd_1512_, v_snd_1512_, v___x_1513_);
v_sp_1515_ = l_List_lengthTR___redArg(v___x_1514_);
lean_dec(v___x_1514_);
v___x_1516_ = l_List_drop___redArg(v_sp_1515_, v_snd_1512_);
lean_dec(v_snd_1512_);
if (lean_obj_tag(v___x_1516_) == 1)
{
lean_object* v_head_1517_; lean_object* v_tail_1518_; lean_object* v___x_1519_; uint8_t v___x_1520_; 
v_head_1517_ = lean_ctor_get(v___x_1516_, 0);
lean_inc(v_head_1517_);
v_tail_1518_ = lean_ctor_get(v___x_1516_, 1);
lean_inc(v_tail_1518_);
lean_dec_ref_known(v___x_1516_, 2);
v___x_1519_ = lean_unsigned_to_nat(10u);
v___x_1520_ = lean_nat_dec_eq(v_head_1517_, v___x_1519_);
lean_dec(v_head_1517_);
if (v___x_1520_ == 0)
{
lean_object* v___x_1521_; 
lean_dec(v_tail_1518_);
lean_dec(v_fst_1511_);
v___x_1521_ = lean_box(0);
v___y_1508_ = v___x_1521_;
goto v___jp_1507_;
}
else
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1522_ = lp_lean_x2dftml_LeanFtml_divBody(v_tail_1518_, v_n_1499_);
v___x_1523_ = lean_box(0);
lean_inc(v_fst_1501_);
lean_inc(v_fst_1500_);
v___x_1524_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divMatch_spec__0(v_fst_1511_, v_fst_1500_, v_fst_1501_, v___x_1522_, v___x_1523_);
v___y_1508_ = v___x_1524_;
goto v___jp_1507_;
}
}
else
{
lean_object* v___x_1525_; 
lean_dec(v___x_1516_);
lean_dec(v_fst_1511_);
v___x_1525_ = lean_box(0);
v___y_1508_ = v___x_1525_;
goto v___jp_1507_;
}
v___jp_1507_:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1503_, v___y_1508_);
v_a_1502_ = v_tail_1506_;
v_a_1503_ = v___x_1509_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1(lean_object* v_fst_1526_, lean_object* v_fst_1527_, lean_object* v_n_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_){
_start:
{
if (lean_obj_tag(v_a_1529_) == 0)
{
lean_object* v___x_1531_; 
lean_dec(v_fst_1527_);
lean_dec(v_fst_1526_);
v___x_1531_ = lean_array_to_list(v_a_1530_);
return v___x_1531_;
}
else
{
lean_object* v_head_1532_; lean_object* v_tail_1533_; lean_object* v___y_1535_; lean_object* v_fst_1538_; lean_object* v_snd_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v_sp_1542_; lean_object* v___x_1543_; 
v_head_1532_ = lean_ctor_get(v_a_1529_, 0);
lean_inc(v_head_1532_);
v_tail_1533_ = lean_ctor_get(v_a_1529_, 1);
lean_inc(v_tail_1533_);
lean_dec_ref_known(v_a_1529_, 2);
v_fst_1538_ = lean_ctor_get(v_head_1532_, 0);
lean_inc(v_fst_1538_);
v_snd_1539_ = lean_ctor_get(v_head_1532_, 1);
lean_inc_n(v_snd_1539_, 2);
lean_dec(v_head_1532_);
v___x_1540_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_1541_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_snd_1539_, v_snd_1539_, v___x_1540_);
v_sp_1542_ = l_List_lengthTR___redArg(v___x_1541_);
lean_dec(v___x_1541_);
v___x_1543_ = l_List_drop___redArg(v_sp_1542_, v_snd_1539_);
lean_dec(v_snd_1539_);
if (lean_obj_tag(v___x_1543_) == 1)
{
lean_object* v_head_1544_; lean_object* v_tail_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; 
v_head_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_head_1544_);
v_tail_1545_ = lean_ctor_get(v___x_1543_, 1);
lean_inc(v_tail_1545_);
lean_dec_ref_known(v___x_1543_, 2);
v___x_1546_ = lean_unsigned_to_nat(10u);
v___x_1547_ = lean_nat_dec_eq(v_head_1544_, v___x_1546_);
lean_dec(v_head_1544_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; 
lean_dec(v_tail_1545_);
lean_dec(v_fst_1538_);
v___x_1548_ = lean_box(0);
v___y_1535_ = v___x_1548_;
goto v___jp_1534_;
}
else
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1549_ = lp_lean_x2dftml_LeanFtml_divBody(v_tail_1545_, v_n_1528_);
v___x_1550_ = lean_box(0);
lean_inc(v_fst_1527_);
lean_inc(v_fst_1526_);
v___x_1551_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divMatch_spec__0(v_fst_1538_, v_fst_1526_, v_fst_1527_, v___x_1549_, v___x_1550_);
v___y_1535_ = v___x_1551_;
goto v___jp_1534_;
}
}
else
{
lean_object* v___x_1552_; 
lean_dec(v___x_1543_);
lean_dec(v_fst_1538_);
v___x_1552_ = lean_box(0);
v___y_1535_ = v___x_1552_;
goto v___jp_1534_;
}
v___jp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1530_, v___y_1535_);
v___x_1537_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1(v_n_1528_, v_fst_1526_, v_fst_1527_, v_tail_1533_, v___x_1536_);
return v___x_1537_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2(lean_object* v_fst_1556_, lean_object* v_n_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_){
_start:
{
if (lean_obj_tag(v_a_1558_) == 0)
{
lean_object* v___x_1560_; 
lean_dec(v_fst_1556_);
v___x_1560_ = lean_array_to_list(v_a_1559_);
return v___x_1560_;
}
else
{
lean_object* v_head_1561_; lean_object* v_tail_1562_; lean_object* v_fst_1564_; lean_object* v_snd_1565_; 
v_head_1561_ = lean_ctor_get(v_a_1558_, 0);
lean_inc(v_head_1561_);
v_tail_1562_ = lean_ctor_get(v_a_1558_, 1);
lean_inc(v_tail_1562_);
lean_dec_ref_known(v_a_1558_, 2);
if (lean_obj_tag(v_head_1561_) == 1)
{
lean_object* v_head_1573_; lean_object* v_tail_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; 
v_head_1573_ = lean_ctor_get(v_head_1561_, 0);
v_tail_1574_ = lean_ctor_get(v_head_1561_, 1);
v___x_1575_ = lean_unsigned_to_nat(95u);
v___x_1576_ = lean_nat_dec_eq(v_head_1573_, v___x_1575_);
if (v___x_1576_ == 0)
{
goto v___jp_1571_;
}
else
{
lean_object* v___x_1577_; 
lean_inc(v_tail_1574_);
lean_dec_ref_known(v_head_1561_, 2);
v___x_1577_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2___closed__0));
v_fst_1564_ = v___x_1577_;
v_snd_1565_ = v_tail_1574_;
goto v___jp_1563_;
}
}
else
{
goto v___jp_1571_;
}
v___jp_1563_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1566_ = lp_lean_x2dftml_LeanFtml_attrGroupCands(v_snd_1565_);
v___x_1567_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0));
lean_inc(v_fst_1556_);
lean_inc(v_fst_1564_);
v___x_1568_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1(v_fst_1564_, v_fst_1556_, v_n_1557_, v___x_1566_, v___x_1567_);
v___x_1569_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1559_, v___x_1568_);
v_a_1558_ = v_tail_1562_;
v_a_1559_ = v___x_1569_;
goto _start;
}
v___jp_1571_:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_box(0);
v_fst_1564_ = v___x_1572_;
v_snd_1565_ = v_head_1561_;
goto v___jp_1563_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__1));
v___x_1580_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1579_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3(lean_object* v_n_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_){
_start:
{
if (lean_obj_tag(v_a_1582_) == 0)
{
lean_object* v___x_1584_; 
v___x_1584_ = lean_array_to_list(v_a_1583_);
return v___x_1584_;
}
else
{
lean_object* v_head_1585_; lean_object* v_tail_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1606_; 
v_head_1585_ = lean_ctor_get(v_a_1582_, 0);
v_tail_1586_ = lean_ctor_get(v_a_1582_, 1);
v_isSharedCheck_1606_ = !lean_is_exclusive(v_a_1582_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1588_ = v_a_1582_;
v_isShared_1589_ = v_isSharedCheck_1606_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_tail_1586_);
lean_inc(v_head_1585_);
lean_dec(v_a_1582_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1606_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v_fst_1590_; lean_object* v_snd_1591_; lean_object* v___y_1593_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v_fst_1590_ = lean_ctor_get(v_head_1585_, 0);
lean_inc(v_fst_1590_);
v_snd_1591_ = lean_ctor_get(v_head_1585_, 1);
lean_inc(v_snd_1591_);
lean_dec(v_head_1585_);
v___x_1598_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__2);
v___x_1599_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1598_, v_snd_1591_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v___x_1600_; 
lean_del_object(v___x_1588_);
v___x_1600_ = lean_box(0);
v___y_1593_ = v___x_1600_;
goto v___jp_1592_;
}
else
{
lean_object* v_val_1601_; lean_object* v___x_1602_; lean_object* v___x_1604_; 
v_val_1601_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_val_1601_);
lean_dec_ref_known(v___x_1599_, 1);
v___x_1602_ = lean_box(0);
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 1, v___x_1602_);
lean_ctor_set(v___x_1588_, 0, v_val_1601_);
v___x_1604_ = v___x_1588_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_val_1601_);
lean_ctor_set(v_reuseFailAlloc_1605_, 1, v___x_1602_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
v___y_1593_ = v___x_1604_;
goto v___jp_1592_;
}
}
v___jp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1594_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0));
v___x_1595_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2(v_fst_1590_, v_n_1581_, v___y_1593_, v___x_1594_);
v___x_1596_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1583_, v___x_1595_);
v_a_1582_ = v_tail_1586_;
v_a_1583_ = v___x_1596_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divMatch(lean_object* v_s_1610_, lean_object* v_x_1611_){
_start:
{
lean_object* v_zero_1612_; uint8_t v_isZero_1613_; 
v_zero_1612_ = lean_unsigned_to_nat(0u);
v_isZero_1613_ = lean_nat_dec_eq(v_x_1611_, v_zero_1612_);
if (v_isZero_1613_ == 1)
{
lean_object* v___x_1614_; 
lean_dec(v_s_1610_);
v___x_1614_ = lean_box(0);
return v___x_1614_;
}
else
{
lean_object* v_one_1615_; lean_object* v_n_1616_; lean_object* v___y_1618_; 
v_one_1615_ = lean_unsigned_to_nat(1u);
v_n_1616_ = lean_nat_sub(v_x_1611_, v_one_1615_);
if (lean_obj_tag(v_s_1610_) == 1)
{
lean_object* v_head_1625_; lean_object* v_tail_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
v_head_1625_ = lean_ctor_get(v_s_1610_, 0);
v_tail_1626_ = lean_ctor_get(v_s_1610_, 1);
v___x_1627_ = lean_unsigned_to_nat(10u);
v___x_1628_ = lean_nat_dec_eq(v_head_1625_, v___x_1627_);
if (v___x_1628_ == 0)
{
goto v___jp_1621_;
}
else
{
lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1638_; 
lean_inc(v_tail_1626_);
v_isSharedCheck_1638_ = !lean_is_exclusive(v_s_1610_);
if (v_isSharedCheck_1638_ == 0)
{
lean_object* v_unused_1639_; lean_object* v_unused_1640_; 
v_unused_1639_ = lean_ctor_get(v_s_1610_, 1);
lean_dec(v_unused_1639_);
v_unused_1640_ = lean_ctor_get(v_s_1610_, 0);
lean_dec(v_unused_1640_);
v___x_1630_ = v_s_1610_;
v_isShared_1631_ = v_isSharedCheck_1638_;
goto v_resetjp_1629_;
}
else
{
lean_dec(v_s_1610_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1638_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1636_; 
v___x_1632_ = lean_box(0);
v___x_1633_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divMatch___closed__0));
v___x_1634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
lean_ctor_set(v___x_1634_, 1, v_tail_1626_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 1, v___x_1632_);
lean_ctor_set(v___x_1630_, 0, v___x_1634_);
v___x_1636_ = v___x_1630_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1634_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v___x_1632_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
v___y_1618_ = v___x_1636_;
goto v___jp_1617_;
}
}
}
}
else
{
goto v___jp_1621_;
}
v___jp_1617_:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1619_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___closed__0));
v___x_1620_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3(v_n_1616_, v___y_1618_, v___x_1619_);
lean_dec(v_n_1616_);
return v___x_1620_;
}
v___jp_1621_:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1622_ = lean_box(0);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
lean_ctor_set(v___x_1623_, 1, v_s_1610_);
v___x_1624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
lean_ctor_set(v___x_1624_, 1, v___x_1622_);
v___y_1618_ = v___x_1624_;
goto v___jp_1617_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divBody___closed__1(void){
_start:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1642_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divBody___closed__0));
v___x_1643_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBody(lean_object* v_s_1644_, lean_object* v_x_1645_){
_start:
{
lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v_zero_1652_; uint8_t v_isZero_1653_; 
v_zero_1652_ = lean_unsigned_to_nat(0u);
v_isZero_1653_ = lean_nat_dec_eq(v_x_1645_, v_zero_1652_);
if (v_isZero_1653_ == 1)
{
lean_object* v___x_1654_; 
lean_dec(v_s_1644_);
v___x_1654_ = lean_box(0);
return v___x_1654_;
}
else
{
lean_object* v_one_1655_; lean_object* v_n_1656_; lean_object* v___y_1658_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v_one_1655_ = lean_unsigned_to_nat(1u);
v_n_1656_ = lean_nat_sub(v_x_1645_, v_one_1655_);
v___x_1668_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divBody___closed__1, &lp_lean_x2dftml_LeanFtml_divBody___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_divBody___closed__1);
lean_inc(v_s_1644_);
v___x_1669_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1668_, v_s_1644_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_box(0);
v___y_1658_ = v___x_1670_;
goto v___jp_1657_;
}
else
{
lean_object* v_val_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v_val_1671_ = lean_ctor_get(v___x_1669_, 0);
lean_inc_n(v_val_1671_, 2);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1672_ = lean_box(0);
v___x_1673_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_1674_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_val_1671_, v_val_1671_, v___x_1673_);
v___x_1675_ = l_List_lengthTR___redArg(v___x_1674_);
lean_dec(v___x_1674_);
v___x_1676_ = l_List_drop___redArg(v___x_1675_, v_val_1671_);
lean_dec(v_val_1671_);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1672_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
lean_ctor_set(v___x_1678_, 1, v___x_1672_);
v___y_1658_ = v___x_1678_;
goto v___jp_1657_;
}
v___jp_1657_:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v_recs_1661_; 
lean_inc_n(v_s_1644_, 2);
v___x_1659_ = lp_lean_x2dftml_LeanFtml_divMatch(v_s_1644_, v_n_1656_);
v___x_1660_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v_recs_1661_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5(v_s_1644_, v_n_1656_, v___x_1659_, v___x_1660_);
if (lean_obj_tag(v_s_1644_) == 0)
{
lean_object* v___x_1662_; 
lean_dec(v_n_1656_);
v___x_1662_ = lean_box(0);
v___y_1647_ = v___y_1658_;
v___y_1648_ = v_recs_1661_;
v___y_1649_ = v___x_1662_;
goto v___jp_1646_;
}
else
{
lean_object* v_head_1663_; lean_object* v_tail_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_head_1663_ = lean_ctor_get(v_s_1644_, 0);
lean_inc(v_head_1663_);
v_tail_1664_ = lean_ctor_get(v_s_1644_, 1);
lean_inc(v_tail_1664_);
lean_dec_ref_known(v_s_1644_, 2);
v___x_1665_ = lp_lean_x2dftml_LeanFtml_divBody(v_tail_1664_, v_n_1656_);
lean_dec(v_n_1656_);
v___x_1666_ = lean_box(0);
v___x_1667_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__6(v_head_1663_, v___x_1665_, v___x_1666_);
v___y_1647_ = v___y_1658_;
v___y_1648_ = v_recs_1661_;
v___y_1649_ = v___x_1667_;
goto v___jp_1646_;
}
}
}
v___jp_1646_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = l_List_appendTR___redArg(v___y_1647_, v___y_1648_);
v___x_1651_ = l_List_appendTR___redArg(v___x_1650_, v___y_1649_);
return v___x_1651_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6(lean_object* v_n_1679_, lean_object* v_s_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_){
_start:
{
if (lean_obj_tag(v_a_1681_) == 0)
{
lean_object* v___x_1683_; 
lean_dec(v_s_1680_);
v___x_1683_ = lean_array_to_list(v_a_1682_);
return v___x_1683_;
}
else
{
lean_object* v_head_1684_; lean_object* v_snd_1685_; lean_object* v_snd_1686_; lean_object* v_snd_1687_; lean_object* v_tail_1688_; lean_object* v_snd_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v_head_1684_ = lean_ctor_get(v_a_1681_, 0);
v_snd_1685_ = lean_ctor_get(v_head_1684_, 1);
v_snd_1686_ = lean_ctor_get(v_snd_1685_, 1);
v_snd_1687_ = lean_ctor_get(v_snd_1686_, 1);
lean_inc(v_snd_1687_);
v_tail_1688_ = lean_ctor_get(v_a_1681_, 1);
lean_inc(v_tail_1688_);
lean_dec_ref_known(v_a_1681_, 2);
v_snd_1689_ = lean_ctor_get(v_snd_1687_, 1);
lean_inc_n(v_snd_1689_, 2);
lean_dec(v_snd_1687_);
v___x_1690_ = lp_lean_x2dftml_LeanFtml_divBody(v_snd_1689_, v_n_1679_);
v___x_1691_ = lean_box(0);
lean_inc(v_s_1680_);
v___x_1692_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_s_1680_, v_snd_1689_, v___x_1690_, v___x_1691_);
lean_dec(v_snd_1689_);
v___x_1693_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1682_, v___x_1692_);
v_a_1681_ = v_tail_1688_;
v_a_1682_ = v___x_1693_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5(lean_object* v_s_1695_, lean_object* v_n_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_){
_start:
{
if (lean_obj_tag(v_a_1697_) == 0)
{
lean_object* v___x_1699_; 
lean_dec(v_s_1695_);
v___x_1699_ = lean_array_to_list(v_a_1698_);
return v___x_1699_;
}
else
{
lean_object* v_head_1700_; lean_object* v_snd_1701_; lean_object* v_snd_1702_; lean_object* v_snd_1703_; lean_object* v_tail_1704_; lean_object* v_snd_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v_head_1700_ = lean_ctor_get(v_a_1697_, 0);
v_snd_1701_ = lean_ctor_get(v_head_1700_, 1);
v_snd_1702_ = lean_ctor_get(v_snd_1701_, 1);
v_snd_1703_ = lean_ctor_get(v_snd_1702_, 1);
lean_inc(v_snd_1703_);
v_tail_1704_ = lean_ctor_get(v_a_1697_, 1);
lean_inc(v_tail_1704_);
lean_dec_ref_known(v_a_1697_, 2);
v_snd_1705_ = lean_ctor_get(v_snd_1703_, 1);
lean_inc_n(v_snd_1705_, 2);
lean_dec(v_snd_1703_);
v___x_1706_ = lp_lean_x2dftml_LeanFtml_divBody(v_snd_1705_, v_n_1696_);
v___x_1707_ = lean_box(0);
lean_inc(v_s_1695_);
v___x_1708_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iftagsBody_spec__4(v_s_1695_, v_snd_1705_, v___x_1706_, v___x_1707_);
lean_dec(v_snd_1705_);
v___x_1709_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1698_, v___x_1708_);
v___x_1710_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6(v_n_1696_, v_s_1695_, v_tail_1704_, v___x_1709_);
return v___x_1710_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5___boxed(lean_object* v_s_1711_, lean_object* v_n_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5(v_s_1711_, v_n_1712_, v_a_1713_, v_a_1714_);
lean_dec(v_n_1712_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6___boxed(lean_object* v_n_1716_, lean_object* v_s_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divBody_spec__5_spec__6(v_n_1716_, v_s_1717_, v_a_1718_, v_a_1719_);
lean_dec(v_n_1716_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3___boxed(lean_object* v_n_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__3(v_n_1721_, v_a_1722_, v_a_1723_);
lean_dec(v_n_1721_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2___boxed(lean_object* v_fst_1725_, lean_object* v_n_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__2(v_fst_1725_, v_n_1726_, v_a_1727_, v_a_1728_);
lean_dec(v_n_1726_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1___boxed(lean_object* v_fst_1730_, lean_object* v_fst_1731_, lean_object* v_n_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1(v_fst_1730_, v_fst_1731_, v_n_1732_, v_a_1733_, v_a_1734_);
lean_dec(v_n_1732_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1___boxed(lean_object* v_n_1736_, lean_object* v_fst_1737_, lean_object* v_fst_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_divMatch_spec__1_spec__1(v_n_1736_, v_fst_1737_, v_fst_1738_, v_a_1739_, v_a_1740_);
lean_dec(v_n_1736_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divMatch___boxed(lean_object* v_s_1742_, lean_object* v_x_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = lp_lean_x2dftml_LeanFtml_divMatch(v_s_1742_, v_x_1743_);
lean_dec(v_x_1743_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divBody___boxed(lean_object* v_s_1745_, lean_object* v_x_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = lp_lean_x2dftml_LeanFtml_divBody(v_s_1745_, v_x_1746_);
lean_dec(v_x_1746_);
return v_res_1747_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(lean_object* v_a_1748_, lean_object* v_x_1749_){
_start:
{
if (lean_obj_tag(v_x_1749_) == 0)
{
uint8_t v___x_1750_; 
v___x_1750_ = 0;
return v___x_1750_;
}
else
{
lean_object* v_head_1751_; lean_object* v_tail_1752_; uint8_t v___x_1753_; 
v_head_1751_ = lean_ctor_get(v_x_1749_, 0);
v_tail_1752_ = lean_ctor_get(v_x_1749_, 1);
v___x_1753_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_a_1748_, v_head_1751_);
if (v___x_1753_ == 0)
{
v_x_1749_ = v_tail_1752_;
goto _start;
}
else
{
return v___x_1753_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0___boxed(lean_object* v_a_1755_, lean_object* v_x_1756_){
_start:
{
uint8_t v_res_1757_; lean_object* v_r_1758_; 
v_res_1757_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v_a_1755_, v_x_1756_);
lean_dec(v_x_1756_);
lean_dec(v_a_1755_);
v_r_1758_ = lean_box(v_res_1757_);
return v_r_1758_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_divAuthoredNonEmpty_spec__1(lean_object* v_x_1759_, lean_object* v_x_1760_){
_start:
{
if (lean_obj_tag(v_x_1760_) == 0)
{
return v_x_1759_;
}
else
{
lean_object* v_head_1761_; lean_object* v_tail_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1792_; 
v_head_1761_ = lean_ctor_get(v_x_1760_, 0);
v_tail_1762_ = lean_ctor_get(v_x_1760_, 1);
v_isSharedCheck_1792_ = !lean_is_exclusive(v_x_1760_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1764_ = v_x_1760_;
v_isShared_1765_ = v_isSharedCheck_1792_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_tail_1762_);
lean_inc(v_head_1761_);
lean_dec(v_x_1760_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1792_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v_fst_1766_; lean_object* v_snd_1767_; lean_object* v_val_1769_; lean_object* v___x_1780_; uint8_t v___x_1781_; 
v_fst_1766_ = lean_ctor_get(v_head_1761_, 0);
lean_inc(v_fst_1766_);
v_snd_1767_ = lean_ctor_get(v_head_1761_, 1);
lean_inc(v_snd_1767_);
lean_dec(v_head_1761_);
v___x_1780_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_1781_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1766_, v___x_1780_);
if (v___x_1781_ == 0)
{
lean_object* v___x_1782_; uint8_t v___x_1783_; 
v___x_1782_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__5);
v___x_1783_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1766_, v___x_1782_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; uint8_t v___x_1785_; 
v___x_1784_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__7);
v___x_1785_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1766_, v___x_1784_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; uint8_t v___x_1787_; 
v___x_1786_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__9);
v___x_1787_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1766_, v___x_1786_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1788_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__11);
v___x_1789_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1788_, v_fst_1766_);
if (v___x_1789_ == 0)
{
lean_dec(v_snd_1767_);
lean_dec(v_fst_1766_);
lean_del_object(v___x_1764_);
v_x_1760_ = v_tail_1762_;
goto _start;
}
else
{
lean_object* v___x_1791_; 
v___x_1791_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_fst_1766_);
v_val_1769_ = v___x_1791_;
goto v___jp_1768_;
}
}
else
{
v_val_1769_ = v_fst_1766_;
goto v___jp_1768_;
}
}
else
{
v_val_1769_ = v_fst_1766_;
goto v___jp_1768_;
}
}
else
{
v_val_1769_ = v_fst_1766_;
goto v___jp_1768_;
}
}
else
{
v_val_1769_ = v_fst_1766_;
goto v___jp_1768_;
}
v___jp_1768_:
{
uint8_t v___x_1770_; 
v___x_1770_ = l_List_isEmpty___redArg(v_snd_1767_);
lean_dec(v_snd_1767_);
if (v___x_1770_ == 0)
{
uint8_t v___x_1771_; 
v___x_1771_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v_val_1769_, v_x_1759_);
if (v___x_1771_ == 0)
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1772_ = lean_box(0);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 1, v___x_1772_);
lean_ctor_set(v___x_1764_, 0, v_val_1769_);
v___x_1774_ = v___x_1764_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_val_1769_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_List_appendTR___redArg(v_x_1759_, v___x_1774_);
v_x_1759_ = v___x_1775_;
v_x_1760_ = v_tail_1762_;
goto _start;
}
}
else
{
lean_dec(v_val_1769_);
lean_del_object(v___x_1764_);
v_x_1760_ = v_tail_1762_;
goto _start;
}
}
else
{
lean_dec(v_val_1769_);
lean_del_object(v___x_1764_);
v_x_1760_ = v_tail_1762_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divAuthoredNonEmpty(lean_object* v_attr_1793_){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = lean_box(0);
v___x_1795_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_divAuthoredNonEmpty_spec__1(v___x_1794_, v_attr_1793_);
return v___x_1795_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optBytesEmpty(lean_object* v_x_1796_){
_start:
{
if (lean_obj_tag(v_x_1796_) == 0)
{
uint8_t v___x_1797_; 
v___x_1797_ = 1;
return v___x_1797_;
}
else
{
lean_object* v_val_1798_; lean_object* v___x_1799_; uint8_t v___x_1800_; 
v_val_1798_ = lean_ctor_get(v_x_1796_, 0);
v___x_1799_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_val_1798_);
v___x_1800_ = l_List_isEmpty___redArg(v___x_1799_);
lean_dec(v___x_1799_);
return v___x_1800_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optBytesEmpty___boxed(lean_object* v_x_1801_){
_start:
{
uint8_t v_res_1802_; lean_object* v_r_1803_; 
v_res_1802_ = lp_lean_x2dftml_LeanFtml_optBytesEmpty(v_x_1801_);
lean_dec(v_x_1801_);
v_r_1803_ = lean_box(v_res_1802_);
return v_r_1803_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__0(lean_object* v_a_1804_, lean_object* v_a_1805_){
_start:
{
if (lean_obj_tag(v_a_1804_) == 0)
{
lean_object* v___x_1806_; 
v___x_1806_ = l_List_reverse___redArg(v_a_1805_);
return v___x_1806_;
}
else
{
lean_object* v_head_1807_; lean_object* v_tail_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1817_; 
v_head_1807_ = lean_ctor_get(v_a_1804_, 0);
v_tail_1808_ = lean_ctor_get(v_a_1804_, 1);
v_isSharedCheck_1817_ = !lean_is_exclusive(v_a_1804_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1810_ = v_a_1804_;
v_isShared_1811_ = v_isSharedCheck_1817_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_tail_1808_);
lean_inc(v_head_1807_);
lean_dec(v_a_1804_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1817_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1812_; lean_object* v___x_1814_; 
v___x_1812_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_head_1807_);
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 1, v_a_1805_);
lean_ctor_set(v___x_1810_, 0, v___x_1812_);
v___x_1814_ = v___x_1810_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v___x_1812_);
lean_ctor_set(v_reuseFailAlloc_1816_, 1, v_a_1805_);
v___x_1814_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
v_a_1804_ = v_tail_1808_;
v_a_1805_ = v___x_1814_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__3(lean_object* v_a_1818_, lean_object* v_a_1819_){
_start:
{
if (lean_obj_tag(v_a_1818_) == 0)
{
lean_object* v___x_1820_; 
v___x_1820_ = l_List_reverse___redArg(v_a_1819_);
return v___x_1820_;
}
else
{
lean_object* v_head_1821_; lean_object* v_tail_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1854_; 
v_head_1821_ = lean_ctor_get(v_a_1818_, 0);
v_tail_1822_ = lean_ctor_get(v_a_1818_, 1);
v_isSharedCheck_1854_ = !lean_is_exclusive(v_a_1818_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1824_ = v_a_1818_;
v_isShared_1825_ = v_isSharedCheck_1854_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_tail_1822_);
lean_inc(v_head_1821_);
lean_dec(v_a_1818_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1854_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___y_1827_; lean_object* v_snd_1832_; 
v_snd_1832_ = lean_ctor_get(v_head_1821_, 1);
if (lean_obj_tag(v_snd_1832_) == 0)
{
lean_object* v_fst_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1841_; 
v_fst_1833_ = lean_ctor_get(v_head_1821_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v_head_1821_);
if (v_isSharedCheck_1841_ == 0)
{
lean_object* v_unused_1842_; 
v_unused_1842_ = lean_ctor_get(v_head_1821_, 1);
lean_dec(v_unused_1842_);
v___x_1835_ = v_head_1821_;
v_isShared_1836_ = v_isSharedCheck_1841_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_fst_1833_);
lean_dec(v_head_1821_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1841_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1837_; lean_object* v___x_1839_; 
v___x_1837_ = lean_box(3);
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 1, v___x_1837_);
v___x_1839_ = v___x_1835_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_fst_1833_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v___x_1837_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
v___y_1827_ = v___x_1839_;
goto v___jp_1826_;
}
}
}
else
{
lean_object* v_fst_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1852_; 
lean_inc_ref(v_snd_1832_);
v_fst_1843_ = lean_ctor_get(v_head_1821_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v_head_1821_);
if (v_isSharedCheck_1852_ == 0)
{
lean_object* v_unused_1853_; 
v_unused_1853_ = lean_ctor_get(v_head_1821_, 1);
lean_dec(v_unused_1853_);
v___x_1845_ = v_head_1821_;
v_isShared_1846_ = v_isSharedCheck_1852_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_fst_1843_);
lean_dec(v_head_1821_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1852_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v_val_1847_; lean_object* v___x_1848_; lean_object* v___x_1850_; 
v_val_1847_ = lean_ctor_get(v_snd_1832_, 0);
lean_inc(v_val_1847_);
lean_dec_ref_known(v_snd_1832_, 1);
v___x_1848_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_1847_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1848_);
v___x_1850_ = v___x_1845_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_fst_1843_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
v___y_1827_ = v___x_1850_;
goto v___jp_1826_;
}
}
}
v___jp_1826_:
{
lean_object* v___x_1829_; 
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 1, v_a_1819_);
lean_ctor_set(v___x_1824_, 0, v___y_1827_);
v___x_1829_ = v___x_1824_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___y_1827_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_a_1819_);
v___x_1829_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
v_a_1818_ = v_tail_1822_;
v_a_1819_ = v___x_1829_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(lean_object* v_a_1855_, lean_object* v_x_1856_){
_start:
{
if (lean_obj_tag(v_x_1856_) == 0)
{
uint8_t v___x_1857_; 
v___x_1857_ = 0;
return v___x_1857_;
}
else
{
lean_object* v_head_1858_; lean_object* v_tail_1859_; uint8_t v___x_1860_; 
v_head_1858_ = lean_ctor_get(v_x_1856_, 0);
v_tail_1859_ = lean_ctor_get(v_x_1856_, 1);
v___x_1860_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1855_, v_head_1858_);
if (v___x_1860_ == 0)
{
v_x_1856_ = v_tail_1859_;
goto _start;
}
else
{
return v___x_1860_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1___boxed(lean_object* v_a_1862_, lean_object* v_x_1863_){
_start:
{
uint8_t v_res_1864_; lean_object* v_r_1865_; 
v_res_1864_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(v_a_1862_, v_x_1863_);
lean_dec(v_x_1863_);
lean_dec(v_a_1862_);
v_r_1865_ = lean_box(v_res_1864_);
return v_r_1865_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2(lean_object* v_authored_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_){
_start:
{
if (lean_obj_tag(v_a_1867_) == 0)
{
lean_object* v___x_1869_; 
v___x_1869_ = l_List_reverse___redArg(v_a_1868_);
return v___x_1869_;
}
else
{
lean_object* v_head_1870_; lean_object* v_tail_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1885_; 
v_head_1870_ = lean_ctor_get(v_a_1867_, 0);
v_tail_1871_ = lean_ctor_get(v_a_1867_, 1);
v_isSharedCheck_1885_ = !lean_is_exclusive(v_a_1867_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1873_ = v_a_1867_;
v_isShared_1874_ = v_isSharedCheck_1885_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_tail_1871_);
lean_inc(v_head_1870_);
lean_dec(v_a_1867_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1885_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v_fst_1880_; lean_object* v_snd_1881_; uint8_t v___x_1882_; 
v_fst_1880_ = lean_ctor_get(v_head_1870_, 0);
v_snd_1881_ = lean_ctor_get(v_head_1870_, 1);
v___x_1882_ = lp_lean_x2dftml_LeanFtml_optBytesEmpty(v_snd_1881_);
if (v___x_1882_ == 0)
{
goto v___jp_1875_;
}
else
{
uint8_t v___x_1883_; 
v___x_1883_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(v_fst_1880_, v_authored_1866_);
if (v___x_1883_ == 0)
{
lean_del_object(v___x_1873_);
lean_dec(v_head_1870_);
v_a_1867_ = v_tail_1871_;
goto _start;
}
else
{
goto v___jp_1875_;
}
}
v___jp_1875_:
{
lean_object* v___x_1877_; 
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 1, v_a_1868_);
v___x_1877_ = v___x_1873_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_head_1870_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v_a_1868_);
v___x_1877_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
v_a_1867_ = v_tail_1871_;
v_a_1868_ = v___x_1877_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2___boxed(lean_object* v_authored_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2(v_authored_1886_, v_a_1887_, v_a_1888_);
lean_dec(v_authored_1886_);
return v_res_1889_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4(lean_object* v_authored_1890_, lean_object* v_x_1891_){
_start:
{
if (lean_obj_tag(v_x_1891_) == 0)
{
uint8_t v___x_1892_; 
v___x_1892_ = 0;
return v___x_1892_;
}
else
{
lean_object* v_head_1893_; lean_object* v_tail_1894_; lean_object* v_fst_1895_; lean_object* v_snd_1896_; uint8_t v___x_1897_; 
v_head_1893_ = lean_ctor_get(v_x_1891_, 0);
v_tail_1894_ = lean_ctor_get(v_x_1891_, 1);
v_fst_1895_ = lean_ctor_get(v_head_1893_, 0);
v_snd_1896_ = lean_ctor_get(v_head_1893_, 1);
v___x_1897_ = lp_lean_x2dftml_LeanFtml_optBytesEmpty(v_snd_1896_);
if (v___x_1897_ == 0)
{
uint8_t v___x_1898_; 
v___x_1898_ = 1;
return v___x_1898_;
}
else
{
uint8_t v___x_1899_; 
v___x_1899_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divProcess_spec__1(v_fst_1895_, v_authored_1890_);
if (v___x_1899_ == 0)
{
v_x_1891_ = v_tail_1894_;
goto _start;
}
else
{
return v___x_1899_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4___boxed(lean_object* v_authored_1901_, lean_object* v_x_1902_){
_start:
{
uint8_t v_res_1903_; lean_object* v_r_1904_; 
v_res_1903_ = lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4(v_authored_1901_, v_x_1902_);
lean_dec(v_x_1902_);
lean_dec(v_authored_1901_);
v_r_1904_ = lean_box(v_res_1903_);
return v_r_1904_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_divProcess___closed__4(void){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divProcess___closed__3));
v___x_1914_ = l_String_toListImpl(v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divProcess(lean_object* v_g1_1915_, lean_object* v_score_1916_, lean_object* v_g3_1917_, lean_object* v_body_1918_, lean_object* v_toks_1919_){
_start:
{
lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1965_; lean_object* v___y_1966_; uint8_t v___y_1967_; lean_object* v___y_1976_; 
if (lean_obj_tag(v_g3_1917_) == 0)
{
lean_object* v___x_1986_; 
v___x_1986_ = lean_box(0);
v___y_1976_ = v___x_1986_;
goto v___jp_1975_;
}
else
{
lean_object* v_val_1987_; 
v_val_1987_ = lean_ctor_get(v_g3_1917_, 0);
v___y_1976_ = v_val_1987_;
goto v___jp_1975_;
}
v___jp_1920_:
{
lean_object* v___x_1924_; lean_object* v_startPh_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v_t1_1937_; lean_object* v___x_1938_; lean_object* v_endPh_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v_t2_1945_; uint8_t v___x_1946_; 
v___x_1924_ = l_List_lengthTR___redArg(v_toks_1919_);
v_startPh_1925_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1924_);
v___x_1926_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divProcess___closed__0));
v___x_1927_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__2, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__2);
v___x_1928_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1928_, 0, v___y_1922_);
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1927_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
v___x_1930_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__7, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7);
lean_inc(v___y_1921_);
v___x_1931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
lean_ctor_set(v___x_1931_, 1, v___y_1921_);
v___x_1932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1929_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
lean_inc(v___y_1923_);
v___x_1933_ = l_List_appendTR___redArg(v___x_1932_, v___y_1923_);
v___x_1934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1926_);
lean_ctor_set(v___x_1934_, 1, v___x_1933_);
v___x_1935_ = lean_box(0);
v___x_1936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1934_);
lean_ctor_set(v___x_1936_, 1, v___x_1935_);
v_t1_1937_ = l_List_appendTR___redArg(v_toks_1919_, v___x_1936_);
v___x_1938_ = l_List_lengthTR___redArg(v_t1_1937_);
v_endPh_1939_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1938_);
v___x_1940_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__11, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11);
v___x_1941_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1940_);
lean_ctor_set(v___x_1941_, 1, v___y_1921_);
v___x_1942_ = l_List_appendTR___redArg(v___x_1941_, v___y_1923_);
v___x_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1926_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
v___x_1944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1943_);
lean_ctor_set(v___x_1944_, 1, v___x_1935_);
v_t2_1945_ = l_List_appendTR___redArg(v_t1_1937_, v___x_1944_);
v___x_1946_ = l_List_isEmpty___redArg(v_score_1916_);
if (v___x_1946_ == 0)
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v_body_x27_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1947_ = lp_lean_x2dftml_LeanFtml_trimRN(v_body_1918_);
lean_dec(v_body_1918_);
v___x_1948_ = l_List_lengthTR___redArg(v___x_1947_);
v___x_1949_ = lean_unsigned_to_nat(1u);
v___x_1950_ = lean_nat_add(v___x_1948_, v___x_1949_);
lean_dec(v___x_1948_);
v_body_x27_1951_ = lp_lean_x2dftml_LeanFtml_collapseBlankRuns(v___x_1947_, v___x_1950_);
v___x_1952_ = l_List_appendTR___redArg(v_g1_1915_, v_startPh_1925_);
v___x_1953_ = l_List_appendTR___redArg(v___x_1952_, v_body_x27_1951_);
v___x_1954_ = l_List_appendTR___redArg(v___x_1953_, v_endPh_1939_);
v___x_1955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1954_);
lean_ctor_set(v___x_1955_, 1, v_t2_1945_);
return v___x_1955_;
}
else
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
lean_inc(v_g1_1915_);
v___x_1956_ = l_List_appendTR___redArg(v_g1_1915_, v_g1_1915_);
v___x_1957_ = l_List_appendTR___redArg(v___x_1956_, v_startPh_1925_);
v___x_1958_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divProcess___closed__2));
v___x_1959_ = l_List_appendTR___redArg(v___x_1957_, v___x_1958_);
v___x_1960_ = l_List_appendTR___redArg(v___x_1959_, v_body_1918_);
v___x_1961_ = l_List_appendTR___redArg(v___x_1960_, v___x_1958_);
v___x_1962_ = l_List_appendTR___redArg(v___x_1961_, v_endPh_1939_);
v___x_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
lean_ctor_set(v___x_1963_, 1, v_t2_1945_);
return v___x_1963_;
}
}
v___jp_1964_:
{
lean_object* v___x_1968_; lean_object* v_kept_1969_; lean_object* v_optArgs_1970_; 
v___x_1968_ = lean_box(0);
v_kept_1969_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_divProcess_spec__2(v___y_1965_, v___y_1966_, v___x_1968_);
lean_dec(v___y_1965_);
v_optArgs_1970_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__3(v_kept_1969_, v___x_1968_);
if (v___y_1967_ == 0)
{
v___y_1921_ = v___x_1968_;
v___y_1922_ = v_optArgs_1970_;
v___y_1923_ = v___x_1968_;
goto v___jp_1920_;
}
else
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1971_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_divProcess___closed__4, &lp_lean_x2dftml_LeanFtml_divProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_divProcess___closed__4);
v___x_1972_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1972_, 0, v___y_1967_);
v___x_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1971_);
lean_ctor_set(v___x_1973_, 1, v___x_1972_);
v___x_1974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
lean_ctor_set(v___x_1974_, 1, v___x_1968_);
v___y_1921_ = v___x_1968_;
v___y_1922_ = v_optArgs_1970_;
v___y_1923_ = v___x_1974_;
goto v___jp_1920_;
}
}
v___jp_1975_:
{
lean_object* v_attr_1977_; lean_object* v_args_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v_authored_1981_; uint8_t v_effective_1982_; 
v_attr_1977_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_1976_);
lean_inc(v_attr_1977_);
v_args_1978_ = lp_lean_x2dftml_LeanFtml_divArgs(v_attr_1977_);
v___x_1979_ = lp_lean_x2dftml_LeanFtml_divAuthoredNonEmpty(v_attr_1977_);
v___x_1980_ = lean_box(0);
v_authored_1981_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_divProcess_spec__0(v___x_1979_, v___x_1980_);
v_effective_1982_ = lp_lean_x2dftml_List_any___at___00LeanFtml_divProcess_spec__4(v_authored_1981_, v_args_1978_);
if (v_effective_1982_ == 0)
{
lean_object* v___x_1983_; uint8_t v___x_1984_; 
v___x_1983_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_body_1918_);
v___x_1984_ = l_List_isEmpty___redArg(v___x_1983_);
lean_dec(v___x_1983_);
v___y_1965_ = v_authored_1981_;
v___y_1966_ = v_args_1978_;
v___y_1967_ = v___x_1984_;
goto v___jp_1964_;
}
else
{
uint8_t v___x_1985_; 
v___x_1985_ = 0;
v___y_1965_ = v_authored_1981_;
v___y_1966_ = v_args_1978_;
v___y_1967_ = v___x_1985_;
goto v___jp_1964_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divProcess___boxed(lean_object* v_g1_1988_, lean_object* v_score_1989_, lean_object* v_g3_1990_, lean_object* v_body_1991_, lean_object* v_toks_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = lp_lean_x2dftml_LeanFtml_divProcess(v_g1_1988_, v_score_1989_, v_g3_1990_, v_body_1991_, v_toks_1992_);
lean_dec(v_g3_1990_);
lean_dec(v_score_1989_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divScan(lean_object* v_src_1994_, lean_object* v_toks_1995_, lean_object* v_x_1996_){
_start:
{
lean_object* v_zero_1997_; uint8_t v_isZero_1998_; 
v_zero_1997_ = lean_unsigned_to_nat(0u);
v_isZero_1998_ = lean_nat_dec_eq(v_x_1996_, v_zero_1997_);
if (v_isZero_1998_ == 1)
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1999_, 0, v_src_1994_);
lean_ctor_set(v___x_1999_, 1, v_toks_1995_);
return v___x_1999_;
}
else
{
if (lean_obj_tag(v_src_1994_) == 0)
{
lean_object* v___x_2000_; 
v___x_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2000_, 0, v_src_1994_);
lean_ctor_set(v___x_2000_, 1, v_toks_1995_);
return v___x_2000_;
}
else
{
lean_object* v_head_2001_; lean_object* v_tail_2002_; lean_object* v_one_2003_; lean_object* v_n_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v_head_2001_ = lean_ctor_get(v_src_1994_, 0);
lean_inc(v_head_2001_);
v_tail_2002_ = lean_ctor_get(v_src_1994_, 1);
lean_inc(v_tail_2002_);
v_one_2003_ = lean_unsigned_to_nat(1u);
v_n_2004_ = lean_nat_sub(v_x_1996_, v_one_2003_);
v___x_2005_ = l_List_lengthTR___redArg(v_src_1994_);
v___x_2006_ = lp_lean_x2dftml_LeanFtml_codeFuel(v___x_2005_);
lean_dec(v___x_2005_);
v___x_2007_ = lp_lean_x2dftml_LeanFtml_divMatch(v_src_1994_, v___x_2006_);
lean_dec(v___x_2006_);
v___x_2008_ = l_List_head_x3f___redArg(v___x_2007_);
lean_dec(v___x_2007_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v___x_2009_; lean_object* v_fst_2010_; lean_object* v_snd_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2019_; 
v___x_2009_ = lp_lean_x2dftml_LeanFtml_divScan(v_tail_2002_, v_toks_1995_, v_n_2004_);
lean_dec(v_n_2004_);
v_fst_2010_ = lean_ctor_get(v___x_2009_, 0);
v_snd_2011_ = lean_ctor_get(v___x_2009_, 1);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2013_ = v___x_2009_;
v_isShared_2014_ = v_isSharedCheck_2019_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_snd_2011_);
lean_inc(v_fst_2010_);
lean_dec(v___x_2009_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2019_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2015_; lean_object* v___x_2017_; 
v___x_2015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2015_, 0, v_head_2001_);
lean_ctor_set(v___x_2015_, 1, v_fst_2010_);
if (v_isShared_2014_ == 0)
{
lean_ctor_set(v___x_2013_, 0, v___x_2015_);
v___x_2017_ = v___x_2013_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2015_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v_snd_2011_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
else
{
lean_object* v_val_2020_; lean_object* v_snd_2021_; lean_object* v_snd_2022_; lean_object* v_snd_2023_; lean_object* v_fst_2024_; lean_object* v_fst_2025_; lean_object* v_fst_2026_; lean_object* v_fst_2027_; lean_object* v_snd_2028_; lean_object* v___x_2029_; lean_object* v_fst_2030_; lean_object* v_snd_2031_; lean_object* v___x_2032_; lean_object* v_fst_2033_; lean_object* v_snd_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2042_; 
lean_dec(v_tail_2002_);
lean_dec(v_head_2001_);
v_val_2020_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_val_2020_);
lean_dec_ref_known(v___x_2008_, 1);
v_snd_2021_ = lean_ctor_get(v_val_2020_, 1);
lean_inc(v_snd_2021_);
v_snd_2022_ = lean_ctor_get(v_snd_2021_, 1);
lean_inc(v_snd_2022_);
v_snd_2023_ = lean_ctor_get(v_snd_2022_, 1);
lean_inc(v_snd_2023_);
v_fst_2024_ = lean_ctor_get(v_val_2020_, 0);
lean_inc(v_fst_2024_);
lean_dec(v_val_2020_);
v_fst_2025_ = lean_ctor_get(v_snd_2021_, 0);
lean_inc(v_fst_2025_);
lean_dec(v_snd_2021_);
v_fst_2026_ = lean_ctor_get(v_snd_2022_, 0);
lean_inc(v_fst_2026_);
lean_dec(v_snd_2022_);
v_fst_2027_ = lean_ctor_get(v_snd_2023_, 0);
lean_inc(v_fst_2027_);
v_snd_2028_ = lean_ctor_get(v_snd_2023_, 1);
lean_inc(v_snd_2028_);
lean_dec(v_snd_2023_);
v___x_2029_ = lp_lean_x2dftml_LeanFtml_divProcess(v_fst_2024_, v_fst_2025_, v_fst_2026_, v_fst_2027_, v_toks_1995_);
lean_dec(v_fst_2026_);
lean_dec(v_fst_2025_);
v_fst_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_fst_2030_);
v_snd_2031_ = lean_ctor_get(v___x_2029_, 1);
lean_inc(v_snd_2031_);
lean_dec_ref(v___x_2029_);
v___x_2032_ = lp_lean_x2dftml_LeanFtml_divScan(v_snd_2028_, v_snd_2031_, v_n_2004_);
lean_dec(v_n_2004_);
v_fst_2033_ = lean_ctor_get(v___x_2032_, 0);
v_snd_2034_ = lean_ctor_get(v___x_2032_, 1);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2036_ = v___x_2032_;
v_isShared_2037_ = v_isSharedCheck_2042_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_snd_2034_);
lean_inc(v_fst_2033_);
lean_dec(v___x_2032_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2042_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2038_; lean_object* v___x_2040_; 
v___x_2038_ = l_List_appendTR___redArg(v_fst_2030_, v_fst_2033_);
if (v_isShared_2037_ == 0)
{
lean_ctor_set(v___x_2036_, 0, v___x_2038_);
v___x_2040_ = v___x_2036_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2038_);
lean_ctor_set(v_reuseFailAlloc_2041_, 1, v_snd_2034_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divScan___boxed(lean_object* v_src_2043_, lean_object* v_toks_2044_, lean_object* v_x_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = lp_lean_x2dftml_LeanFtml_divScan(v_src_2043_, v_toks_2044_, v_x_2045_);
lean_dec(v_x_2045_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divPasses(lean_object* v_src_2047_, lean_object* v_toks_2048_, lean_object* v_x_2049_){
_start:
{
lean_object* v_zero_2050_; uint8_t v_isZero_2051_; 
v_zero_2050_ = lean_unsigned_to_nat(0u);
v_isZero_2051_ = lean_nat_dec_eq(v_x_2049_, v_zero_2050_);
if (v_isZero_2051_ == 1)
{
lean_object* v___x_2052_; 
lean_dec(v_x_2049_);
v___x_2052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2052_, 0, v_src_2047_);
lean_ctor_set(v___x_2052_, 1, v_toks_2048_);
return v___x_2052_;
}
else
{
lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v_fst_2057_; lean_object* v_snd_2058_; uint8_t v___x_2059_; 
v___x_2053_ = l_List_lengthTR___redArg(v_src_2047_);
v___x_2054_ = lean_unsigned_to_nat(1u);
v___x_2055_ = lean_nat_add(v___x_2053_, v___x_2054_);
lean_dec(v___x_2053_);
lean_inc(v_src_2047_);
v___x_2056_ = lp_lean_x2dftml_LeanFtml_divScan(v_src_2047_, v_toks_2048_, v___x_2055_);
lean_dec(v___x_2055_);
v_fst_2057_ = lean_ctor_get(v___x_2056_, 0);
v_snd_2058_ = lean_ctor_get(v___x_2056_, 1);
v___x_2059_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_2057_, v_src_2047_);
lean_dec(v_src_2047_);
if (v___x_2059_ == 0)
{
lean_object* v_n_2060_; 
lean_inc(v_snd_2058_);
lean_inc(v_fst_2057_);
lean_dec_ref(v___x_2056_);
v_n_2060_ = lean_nat_sub(v_x_2049_, v___x_2054_);
lean_dec(v_x_2049_);
v_src_2047_ = v_fst_2057_;
v_toks_2048_ = v_snd_2058_;
v_x_2049_ = v_n_2060_;
goto _start;
}
else
{
lean_dec(v_x_2049_);
return v___x_2056_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRule___lam__0(lean_object* v_src_2062_, lean_object* v_toks_2063_){
_start:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2064_ = l_List_lengthTR___redArg(v_src_2062_);
v___x_2065_ = lean_unsigned_to_nat(2u);
v___x_2066_ = lean_nat_add(v___x_2064_, v___x_2065_);
lean_dec(v___x_2064_);
v___x_2067_ = lp_lean_x2dftml_LeanFtml_divPasses(v_src_2062_, v_toks_2063_, v___x_2066_);
return v___x_2067_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_divRule(lean_object* v_st_2069_){
_start:
{
lean_object* v___f_2070_; lean_object* v___x_2071_; 
v___f_2070_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divRule___closed__0));
v___x_2071_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_2069_, v___f_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_collMatchAt_spec__0(lean_object* v_fst_2072_, lean_object* v_fst_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_){
_start:
{
if (lean_obj_tag(v_a_2074_) == 0)
{
lean_object* v___x_2076_; 
lean_dec(v_fst_2073_);
lean_dec(v_fst_2072_);
v___x_2076_ = l_List_reverse___redArg(v_a_2075_);
return v___x_2076_;
}
else
{
lean_object* v_head_2077_; lean_object* v_tail_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2101_; 
v_head_2077_ = lean_ctor_get(v_a_2074_, 0);
v_tail_2078_ = lean_ctor_get(v_a_2074_, 1);
v_isSharedCheck_2101_ = !lean_is_exclusive(v_a_2074_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2080_ = v_a_2074_;
v_isShared_2081_ = v_isSharedCheck_2101_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_tail_2078_);
lean_inc(v_head_2077_);
lean_dec(v_a_2074_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2101_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v_fst_2082_; lean_object* v_snd_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2100_; 
v_fst_2082_ = lean_ctor_get(v_head_2077_, 0);
v_snd_2083_ = lean_ctor_get(v_head_2077_, 1);
v_isSharedCheck_2100_ = !lean_is_exclusive(v_head_2077_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2085_ = v_head_2077_;
v_isShared_2086_ = v_isSharedCheck_2100_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_snd_2083_);
lean_inc(v_fst_2082_);
lean_dec(v_head_2077_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2100_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2092_; 
v___x_2087_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_snd_2083_);
v___x_2088_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_snd_2083_, v_snd_2083_, v___x_2087_);
v___x_2089_ = l_List_lengthTR___redArg(v___x_2088_);
lean_dec(v___x_2088_);
v___x_2090_ = l_List_drop___redArg(v___x_2089_, v_snd_2083_);
lean_dec(v_snd_2083_);
if (v_isShared_2086_ == 0)
{
lean_ctor_set(v___x_2085_, 1, v___x_2090_);
v___x_2092_ = v___x_2085_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_fst_2082_);
lean_ctor_set(v_reuseFailAlloc_2099_, 1, v___x_2090_);
v___x_2092_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2096_; 
lean_inc(v_fst_2072_);
v___x_2093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2093_, 0, v_fst_2072_);
lean_ctor_set(v___x_2093_, 1, v___x_2092_);
lean_inc(v_fst_2073_);
v___x_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2094_, 0, v_fst_2073_);
lean_ctor_set(v___x_2094_, 1, v___x_2093_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 1, v_a_2075_);
lean_ctor_set(v___x_2080_, 0, v___x_2094_);
v___x_2096_ = v___x_2080_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2094_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v_a_2075_);
v___x_2096_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
v_a_2074_ = v_tail_2078_;
v_a_2075_ = v___x_2096_;
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
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__0));
v___x_2104_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1(lean_object* v_fst_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_){
_start:
{
if (lean_obj_tag(v_a_2106_) == 0)
{
lean_object* v___x_2108_; 
lean_dec(v_fst_2105_);
v___x_2108_ = lean_array_to_list(v_a_2107_);
return v___x_2108_;
}
else
{
lean_object* v_head_2109_; lean_object* v_tail_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2131_; 
v_head_2109_ = lean_ctor_get(v_a_2106_, 0);
v_tail_2110_ = lean_ctor_get(v_a_2106_, 1);
v_isSharedCheck_2131_ = !lean_is_exclusive(v_a_2106_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2112_ = v_a_2106_;
v_isShared_2113_ = v_isSharedCheck_2131_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_tail_2110_);
lean_inc(v_head_2109_);
lean_dec(v_a_2106_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2131_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v_fst_2114_; lean_object* v_snd_2115_; lean_object* v___y_2117_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v_fst_2114_ = lean_ctor_get(v_head_2109_, 0);
lean_inc(v_fst_2114_);
v_snd_2115_ = lean_ctor_get(v_head_2109_, 1);
lean_inc(v_snd_2115_);
lean_dec(v_head_2109_);
v___x_2122_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1___closed__1);
v___x_2123_ = lp_lean_x2dftml_LeanFtml_occurrencesCI(v___x_2122_, v_snd_2115_);
v___x_2124_ = l_List_head_x3f___redArg(v___x_2123_);
lean_dec(v___x_2123_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v___x_2125_; 
lean_del_object(v___x_2112_);
v___x_2125_ = lean_box(0);
v___y_2117_ = v___x_2125_;
goto v___jp_2116_;
}
else
{
lean_object* v_val_2126_; lean_object* v___x_2127_; lean_object* v___x_2129_; 
v_val_2126_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_val_2126_);
lean_dec_ref_known(v___x_2124_, 1);
v___x_2127_ = lean_box(0);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 1, v___x_2127_);
lean_ctor_set(v___x_2112_, 0, v_val_2126_);
v___x_2129_ = v___x_2112_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_val_2126_);
lean_ctor_set(v_reuseFailAlloc_2130_, 1, v___x_2127_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
v___y_2117_ = v___x_2129_;
goto v___jp_2116_;
}
}
v___jp_2116_:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2118_ = lean_box(0);
lean_inc(v_fst_2105_);
v___x_2119_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_collMatchAt_spec__0(v_fst_2114_, v_fst_2105_, v___y_2117_, v___x_2118_);
v___x_2120_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2107_, v___x_2119_);
v_a_2106_ = v_tail_2110_;
v_a_2107_ = v___x_2120_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2(lean_object* v_fst_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_){
_start:
{
if (lean_obj_tag(v_a_2135_) == 0)
{
lean_object* v___x_2137_; 
lean_dec(v_fst_2134_);
v___x_2137_ = lean_array_to_list(v_a_2136_);
return v___x_2137_;
}
else
{
lean_object* v_head_2138_; lean_object* v_tail_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v_head_2138_ = lean_ctor_get(v_a_2135_, 0);
lean_inc(v_head_2138_);
v_tail_2139_ = lean_ctor_get(v_a_2135_, 1);
lean_inc(v_tail_2139_);
lean_dec_ref_known(v_a_2135_, 2);
v___x_2140_ = lp_lean_x2dftml_LeanFtml_attrGroupCands(v_head_2138_);
v___x_2141_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0));
lean_inc(v_fst_2134_);
v___x_2142_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__1(v_fst_2134_, v___x_2140_, v___x_2141_);
v___x_2143_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2136_, v___x_2142_);
v_a_2135_ = v_tail_2139_;
v_a_2136_ = v___x_2143_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__0));
v___x_2147_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2146_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3(lean_object* v_a_2148_, lean_object* v_a_2149_){
_start:
{
if (lean_obj_tag(v_a_2148_) == 0)
{
lean_object* v___x_2150_; 
v___x_2150_ = lean_array_to_list(v_a_2149_);
return v___x_2150_;
}
else
{
lean_object* v_head_2151_; lean_object* v_tail_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2172_; 
v_head_2151_ = lean_ctor_get(v_a_2148_, 0);
v_tail_2152_ = lean_ctor_get(v_a_2148_, 1);
v_isSharedCheck_2172_ = !lean_is_exclusive(v_a_2148_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2154_ = v_a_2148_;
v_isShared_2155_ = v_isSharedCheck_2172_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_tail_2152_);
lean_inc(v_head_2151_);
lean_dec(v_a_2148_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2172_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v_fst_2156_; lean_object* v_snd_2157_; lean_object* v___y_2159_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v_fst_2156_ = lean_ctor_get(v_head_2151_, 0);
lean_inc(v_fst_2156_);
v_snd_2157_ = lean_ctor_get(v_head_2151_, 1);
lean_inc(v_snd_2157_);
lean_dec(v_head_2151_);
v___x_2164_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3___closed__1);
v___x_2165_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2164_, v_snd_2157_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v___x_2166_; 
lean_del_object(v___x_2154_);
v___x_2166_ = lean_box(0);
v___y_2159_ = v___x_2166_;
goto v___jp_2158_;
}
else
{
lean_object* v_val_2167_; lean_object* v___x_2168_; lean_object* v___x_2170_; 
v_val_2167_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_val_2167_);
lean_dec_ref_known(v___x_2165_, 1);
v___x_2168_ = lean_box(0);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 1, v___x_2168_);
lean_ctor_set(v___x_2154_, 0, v_val_2167_);
v___x_2170_ = v___x_2154_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_val_2167_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v___x_2168_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
v___y_2159_ = v___x_2170_;
goto v___jp_2158_;
}
}
v___jp_2158_:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2160_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0));
v___x_2161_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2(v_fst_2156_, v___y_2159_, v___x_2160_);
v___x_2162_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2149_, v___x_2161_);
v_a_2148_ = v_tail_2152_;
v_a_2149_ = v___x_2162_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collMatchAt(lean_object* v_s_2173_){
_start:
{
lean_object* v___y_2175_; 
if (lean_obj_tag(v_s_2173_) == 1)
{
lean_object* v_head_2183_; lean_object* v_tail_2184_; lean_object* v___x_2185_; uint8_t v___x_2186_; 
v_head_2183_ = lean_ctor_get(v_s_2173_, 0);
v_tail_2184_ = lean_ctor_get(v_s_2173_, 1);
v___x_2185_ = lean_unsigned_to_nat(10u);
v___x_2186_ = lean_nat_dec_eq(v_head_2183_, v___x_2185_);
if (v___x_2186_ == 0)
{
goto v___jp_2179_;
}
else
{
lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2196_; 
lean_inc(v_tail_2184_);
v_isSharedCheck_2196_ = !lean_is_exclusive(v_s_2173_);
if (v_isSharedCheck_2196_ == 0)
{
lean_object* v_unused_2197_; lean_object* v_unused_2198_; 
v_unused_2197_ = lean_ctor_get(v_s_2173_, 1);
lean_dec(v_unused_2197_);
v_unused_2198_ = lean_ctor_get(v_s_2173_, 0);
lean_dec(v_unused_2198_);
v___x_2188_ = v_s_2173_;
v_isShared_2189_ = v_isSharedCheck_2196_;
goto v_resetjp_2187_;
}
else
{
lean_dec(v_s_2173_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2196_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2194_; 
v___x_2190_ = lean_box(0);
v___x_2191_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_divMatch___closed__0));
v___x_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2191_);
lean_ctor_set(v___x_2192_, 1, v_tail_2184_);
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 1, v___x_2190_);
lean_ctor_set(v___x_2188_, 0, v___x_2192_);
v___x_2194_ = v___x_2188_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2192_);
lean_ctor_set(v_reuseFailAlloc_2195_, 1, v___x_2190_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
v___y_2175_ = v___x_2194_;
goto v___jp_2174_;
}
}
}
}
else
{
goto v___jp_2179_;
}
v___jp_2174_:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2176_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__2___closed__0));
v___x_2177_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collMatchAt_spec__3(v___y_2175_, v___x_2176_);
v___x_2178_ = l_List_head_x3f___redArg(v___x_2177_);
lean_dec(v___x_2177_);
return v___x_2178_;
}
v___jp_2179_:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2180_ = lean_box(0);
v___x_2181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
lean_ctor_set(v___x_2181_, 1, v_s_2173_);
v___x_2182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
lean_ctor_set(v___x_2182_, 1, v___x_2180_);
v___y_2175_ = v___x_2182_;
goto v___jp_2174_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_collProcess___closed__2(void){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__1));
v___x_2202_ = l_String_toListImpl(v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collProcess(lean_object* v_g1_2209_, lean_object* v_g2_2210_, lean_object* v_body_2211_, lean_object* v_doc_2212_, lean_object* v_toks_2213_){
_start:
{
lean_object* v___y_2215_; 
if (lean_obj_tag(v_g2_2210_) == 0)
{
lean_object* v___x_2275_; 
v___x_2275_ = lean_box(0);
v___y_2215_ = v___x_2275_;
goto v___jp_2214_;
}
else
{
lean_object* v_val_2276_; 
v_val_2276_ = lean_ctor_get(v_g2_2210_, 0);
v___y_2215_ = v_val_2276_;
goto v___jp_2214_;
}
v___jp_2214_:
{
lean_object* v_page_2216_; lean_object* v_site_2217_; lean_object* v_inclusions_2218_; lean_object* v_inclusionsNotExist_2219_; lean_object* v_footnotes_2220_; lean_object* v_bibitems_2221_; lean_object* v_bibitemIds_2222_; lean_object* v_headlineId_2223_; lean_object* v_mathId_2224_; lean_object* v_equations_2225_; lean_object* v_collapsibleCount_2226_; lean_object* v_tabviewCounter_2227_; lean_object* v_scoredAnchors_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2274_; 
v_page_2216_ = lean_ctor_get(v_doc_2212_, 0);
v_site_2217_ = lean_ctor_get(v_doc_2212_, 1);
v_inclusions_2218_ = lean_ctor_get(v_doc_2212_, 2);
v_inclusionsNotExist_2219_ = lean_ctor_get(v_doc_2212_, 3);
v_footnotes_2220_ = lean_ctor_get(v_doc_2212_, 4);
v_bibitems_2221_ = lean_ctor_get(v_doc_2212_, 5);
v_bibitemIds_2222_ = lean_ctor_get(v_doc_2212_, 6);
v_headlineId_2223_ = lean_ctor_get(v_doc_2212_, 7);
v_mathId_2224_ = lean_ctor_get(v_doc_2212_, 8);
v_equations_2225_ = lean_ctor_get(v_doc_2212_, 9);
v_collapsibleCount_2226_ = lean_ctor_get(v_doc_2212_, 10);
v_tabviewCounter_2227_ = lean_ctor_get(v_doc_2212_, 11);
v_scoredAnchors_2228_ = lean_ctor_get(v_doc_2212_, 12);
v_isSharedCheck_2274_ = !lean_is_exclusive(v_doc_2212_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2230_ = v_doc_2212_;
v_isShared_2231_ = v_isSharedCheck_2274_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_scoredAnchors_2228_);
lean_inc(v_tabviewCounter_2227_);
lean_inc(v_collapsibleCount_2226_);
lean_inc(v_equations_2225_);
lean_inc(v_mathId_2224_);
lean_inc(v_headlineId_2223_);
lean_inc(v_bibitemIds_2222_);
lean_inc(v_bibitems_2221_);
lean_inc(v_footnotes_2220_);
lean_inc(v_inclusionsNotExist_2219_);
lean_inc(v_inclusions_2218_);
lean_inc(v_site_2217_);
lean_inc(v_page_2216_);
lean_dec(v_doc_2212_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2274_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v_attr_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v_argsOpt_2235_; lean_object* v___x_2236_; lean_object* v_startPh_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v_t1_2251_; lean_object* v___x_2252_; lean_object* v_endPh_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v_t2_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2270_; 
v_attr_2232_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_2215_);
v___x_2233_ = lean_box(0);
v___x_2234_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v_attr_2232_, v___x_2233_);
v_argsOpt_2235_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_argsOpt_2235_, 0, v___x_2234_);
v___x_2236_ = l_List_lengthTR___redArg(v_toks_2213_);
v_startPh_2237_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_2236_);
v___x_2238_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__0));
v___x_2239_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__2, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__2);
v___x_2240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2239_);
lean_ctor_set(v___x_2240_, 1, v_argsOpt_2235_);
v___x_2241_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__7, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7);
v___x_2242_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_collProcess___closed__2, &lp_lean_x2dftml_LeanFtml_collProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_collProcess___closed__2);
lean_inc(v_collapsibleCount_2226_);
v___x_2243_ = lean_nat_to_int(v_collapsibleCount_2226_);
v___x_2244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
v___x_2245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2242_);
lean_ctor_set(v___x_2245_, 1, v___x_2244_);
v___x_2246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2245_);
lean_ctor_set(v___x_2246_, 1, v___x_2233_);
lean_inc_ref(v___x_2246_);
v___x_2247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2241_);
lean_ctor_set(v___x_2247_, 1, v___x_2246_);
lean_inc_ref(v___x_2240_);
v___x_2248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2240_);
lean_ctor_set(v___x_2248_, 1, v___x_2247_);
v___x_2249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2238_);
lean_ctor_set(v___x_2249_, 1, v___x_2248_);
v___x_2250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
lean_ctor_set(v___x_2250_, 1, v___x_2233_);
v_t1_2251_ = l_List_appendTR___redArg(v_toks_2213_, v___x_2250_);
v___x_2252_ = l_List_lengthTR___redArg(v_t1_2251_);
v_endPh_2253_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_2252_);
v___x_2254_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__11, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11);
v___x_2255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2254_);
lean_ctor_set(v___x_2255_, 1, v___x_2246_);
v___x_2256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2240_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2238_);
lean_ctor_set(v___x_2257_, 1, v___x_2256_);
v___x_2258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2257_);
lean_ctor_set(v___x_2258_, 1, v___x_2233_);
v_t2_2259_ = l_List_appendTR___redArg(v_t1_2251_, v___x_2258_);
lean_inc(v_g1_2209_);
v___x_2260_ = l_List_appendTR___redArg(v_g1_2209_, v_g1_2209_);
v___x_2261_ = l_List_appendTR___redArg(v___x_2260_, v_startPh_2237_);
v___x_2262_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__4));
v___x_2263_ = l_List_appendTR___redArg(v___x_2261_, v___x_2262_);
v___x_2264_ = l_List_appendTR___redArg(v___x_2263_, v_body_2211_);
v___x_2265_ = l_List_appendTR___redArg(v___x_2264_, v___x_2262_);
v___x_2266_ = l_List_appendTR___redArg(v___x_2265_, v_endPh_2253_);
v___x_2267_ = lean_unsigned_to_nat(1u);
v___x_2268_ = lean_nat_add(v_collapsibleCount_2226_, v___x_2267_);
lean_dec(v_collapsibleCount_2226_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 10, v___x_2268_);
v___x_2270_ = v___x_2230_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_page_2216_);
lean_ctor_set(v_reuseFailAlloc_2273_, 1, v_site_2217_);
lean_ctor_set(v_reuseFailAlloc_2273_, 2, v_inclusions_2218_);
lean_ctor_set(v_reuseFailAlloc_2273_, 3, v_inclusionsNotExist_2219_);
lean_ctor_set(v_reuseFailAlloc_2273_, 4, v_footnotes_2220_);
lean_ctor_set(v_reuseFailAlloc_2273_, 5, v_bibitems_2221_);
lean_ctor_set(v_reuseFailAlloc_2273_, 6, v_bibitemIds_2222_);
lean_ctor_set(v_reuseFailAlloc_2273_, 7, v_headlineId_2223_);
lean_ctor_set(v_reuseFailAlloc_2273_, 8, v_mathId_2224_);
lean_ctor_set(v_reuseFailAlloc_2273_, 9, v_equations_2225_);
lean_ctor_set(v_reuseFailAlloc_2273_, 10, v___x_2268_);
lean_ctor_set(v_reuseFailAlloc_2273_, 11, v_tabviewCounter_2227_);
lean_ctor_set(v_reuseFailAlloc_2273_, 12, v_scoredAnchors_2228_);
v___x_2270_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2271_, 0, v_t2_2259_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
v___x_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2266_);
lean_ctor_set(v___x_2272_, 1, v___x_2271_);
return v___x_2272_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collProcess___boxed(lean_object* v_g1_2277_, lean_object* v_g2_2278_, lean_object* v_body_2279_, lean_object* v_doc_2280_, lean_object* v_toks_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = lp_lean_x2dftml_LeanFtml_collProcess(v_g1_2277_, v_g2_2278_, v_body_2279_, v_doc_2280_, v_toks_2281_);
lean_dec(v_g2_2278_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collScan(lean_object* v_src_2283_, lean_object* v_toks_2284_, lean_object* v_doc_2285_, lean_object* v_x_2286_){
_start:
{
lean_object* v_zero_2287_; uint8_t v_isZero_2288_; 
v_zero_2287_ = lean_unsigned_to_nat(0u);
v_isZero_2288_ = lean_nat_dec_eq(v_x_2286_, v_zero_2287_);
if (v_isZero_2288_ == 1)
{
lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2289_, 0, v_toks_2284_);
lean_ctor_set(v___x_2289_, 1, v_doc_2285_);
v___x_2290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2290_, 0, v_src_2283_);
lean_ctor_set(v___x_2290_, 1, v___x_2289_);
return v___x_2290_;
}
else
{
if (lean_obj_tag(v_src_2283_) == 0)
{
lean_object* v___x_2291_; lean_object* v___x_2292_; 
v___x_2291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2291_, 0, v_toks_2284_);
lean_ctor_set(v___x_2291_, 1, v_doc_2285_);
v___x_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2292_, 0, v_src_2283_);
lean_ctor_set(v___x_2292_, 1, v___x_2291_);
return v___x_2292_;
}
else
{
lean_object* v_head_2293_; lean_object* v_tail_2294_; lean_object* v_one_2295_; lean_object* v_n_2296_; lean_object* v___x_2297_; 
v_head_2293_ = lean_ctor_get(v_src_2283_, 0);
lean_inc(v_head_2293_);
v_tail_2294_ = lean_ctor_get(v_src_2283_, 1);
lean_inc(v_tail_2294_);
v_one_2295_ = lean_unsigned_to_nat(1u);
v_n_2296_ = lean_nat_sub(v_x_2286_, v_one_2295_);
v___x_2297_ = lp_lean_x2dftml_LeanFtml_collMatchAt(v_src_2283_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v___x_2298_; lean_object* v_fst_2299_; lean_object* v_snd_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2308_; 
v___x_2298_ = lp_lean_x2dftml_LeanFtml_collScan(v_tail_2294_, v_toks_2284_, v_doc_2285_, v_n_2296_);
lean_dec(v_n_2296_);
v_fst_2299_ = lean_ctor_get(v___x_2298_, 0);
v_snd_2300_ = lean_ctor_get(v___x_2298_, 1);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2302_ = v___x_2298_;
v_isShared_2303_ = v_isSharedCheck_2308_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_snd_2300_);
lean_inc(v_fst_2299_);
lean_dec(v___x_2298_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2308_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2304_; lean_object* v___x_2306_; 
v___x_2304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2304_, 0, v_head_2293_);
lean_ctor_set(v___x_2304_, 1, v_fst_2299_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 0, v___x_2304_);
v___x_2306_ = v___x_2302_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v___x_2304_);
lean_ctor_set(v_reuseFailAlloc_2307_, 1, v_snd_2300_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
else
{
lean_object* v_val_2309_; lean_object* v_snd_2310_; lean_object* v_snd_2311_; lean_object* v_fst_2312_; lean_object* v_fst_2313_; lean_object* v_fst_2314_; lean_object* v_snd_2315_; lean_object* v___x_2316_; lean_object* v_snd_2317_; lean_object* v_fst_2318_; lean_object* v_fst_2319_; lean_object* v_snd_2320_; lean_object* v___x_2321_; lean_object* v_fst_2322_; lean_object* v_snd_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2331_; 
lean_dec(v_tail_2294_);
lean_dec(v_head_2293_);
v_val_2309_ = lean_ctor_get(v___x_2297_, 0);
lean_inc(v_val_2309_);
lean_dec_ref_known(v___x_2297_, 1);
v_snd_2310_ = lean_ctor_get(v_val_2309_, 1);
lean_inc(v_snd_2310_);
v_snd_2311_ = lean_ctor_get(v_snd_2310_, 1);
lean_inc(v_snd_2311_);
v_fst_2312_ = lean_ctor_get(v_val_2309_, 0);
lean_inc(v_fst_2312_);
lean_dec(v_val_2309_);
v_fst_2313_ = lean_ctor_get(v_snd_2310_, 0);
lean_inc(v_fst_2313_);
lean_dec(v_snd_2310_);
v_fst_2314_ = lean_ctor_get(v_snd_2311_, 0);
lean_inc(v_fst_2314_);
v_snd_2315_ = lean_ctor_get(v_snd_2311_, 1);
lean_inc(v_snd_2315_);
lean_dec(v_snd_2311_);
v___x_2316_ = lp_lean_x2dftml_LeanFtml_collProcess(v_fst_2312_, v_fst_2313_, v_fst_2314_, v_doc_2285_, v_toks_2284_);
lean_dec(v_fst_2313_);
v_snd_2317_ = lean_ctor_get(v___x_2316_, 1);
lean_inc(v_snd_2317_);
v_fst_2318_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_fst_2318_);
lean_dec_ref(v___x_2316_);
v_fst_2319_ = lean_ctor_get(v_snd_2317_, 0);
lean_inc(v_fst_2319_);
v_snd_2320_ = lean_ctor_get(v_snd_2317_, 1);
lean_inc(v_snd_2320_);
lean_dec(v_snd_2317_);
v___x_2321_ = lp_lean_x2dftml_LeanFtml_collScan(v_snd_2315_, v_fst_2319_, v_snd_2320_, v_n_2296_);
lean_dec(v_n_2296_);
v_fst_2322_ = lean_ctor_get(v___x_2321_, 0);
v_snd_2323_ = lean_ctor_get(v___x_2321_, 1);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2325_ = v___x_2321_;
v_isShared_2326_ = v_isSharedCheck_2331_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_snd_2323_);
lean_inc(v_fst_2322_);
lean_dec(v___x_2321_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2331_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2327_; lean_object* v___x_2329_; 
v___x_2327_ = l_List_appendTR___redArg(v_fst_2318_, v_fst_2322_);
if (v_isShared_2326_ == 0)
{
lean_ctor_set(v___x_2325_, 0, v___x_2327_);
v___x_2329_ = v___x_2325_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v___x_2327_);
lean_ctor_set(v_reuseFailAlloc_2330_, 1, v_snd_2323_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collScan___boxed(lean_object* v_src_2332_, lean_object* v_toks_2333_, lean_object* v_doc_2334_, lean_object* v_x_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = lp_lean_x2dftml_LeanFtml_collScan(v_src_2332_, v_toks_2333_, v_doc_2334_, v_x_2335_);
lean_dec(v_x_2335_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsibleRule(lean_object* v_st_2337_){
_start:
{
lean_object* v_work_2338_; lean_object* v_tokens_2339_; lean_object* v_doc_2340_; uint8_t v_fatal_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2358_; 
v_work_2338_ = lean_ctor_get(v_st_2337_, 0);
v_tokens_2339_ = lean_ctor_get(v_st_2337_, 1);
v_doc_2340_ = lean_ctor_get(v_st_2337_, 2);
v_fatal_2341_ = lean_ctor_get_uint8(v_st_2337_, sizeof(void*)*3);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_st_2337_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2343_ = v_st_2337_;
v_isShared_2344_ = v_isSharedCheck_2358_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_doc_2340_);
lean_inc(v_tokens_2339_);
lean_inc(v_work_2338_);
lean_dec(v_st_2337_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2358_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v_input_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v_snd_2350_; lean_object* v_fst_2351_; lean_object* v_fst_2352_; lean_object* v_snd_2353_; lean_object* v___x_2354_; lean_object* v___x_2356_; 
v_input_2345_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_2338_);
v___x_2346_ = l_List_lengthTR___redArg(v_input_2345_);
v___x_2347_ = lean_unsigned_to_nat(1u);
v___x_2348_ = lean_nat_add(v___x_2346_, v___x_2347_);
lean_dec(v___x_2346_);
v___x_2349_ = lp_lean_x2dftml_LeanFtml_collScan(v_input_2345_, v_tokens_2339_, v_doc_2340_, v___x_2348_);
lean_dec(v___x_2348_);
v_snd_2350_ = lean_ctor_get(v___x_2349_, 1);
lean_inc(v_snd_2350_);
v_fst_2351_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_fst_2351_);
lean_dec_ref(v___x_2349_);
v_fst_2352_ = lean_ctor_get(v_snd_2350_, 0);
lean_inc(v_fst_2352_);
v_snd_2353_ = lean_ctor_get(v_snd_2350_, 1);
lean_inc(v_snd_2353_);
lean_dec(v_snd_2350_);
v___x_2354_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_2351_);
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 2, v_snd_2353_);
lean_ctor_set(v___x_2343_, 1, v_fst_2352_);
lean_ctor_set(v___x_2343_, 0, v___x_2354_);
v___x_2356_ = v___x_2343_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2354_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v_fst_2352_);
lean_ctor_set(v_reuseFailAlloc_2357_, 2, v_snd_2353_);
lean_ctor_set_uint8(v_reuseFailAlloc_2357_, sizeof(void*)*3, v_fatal_2341_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isTabKeyByte(lean_object* v_b_2359_){
_start:
{
lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2375_ = lean_unsigned_to_nat(48u);
v___x_2376_ = lean_nat_dec_le(v___x_2375_, v_b_2359_);
if (v___x_2376_ == 0)
{
goto v___jp_2370_;
}
else
{
lean_object* v___x_2377_; uint8_t v___x_2378_; 
v___x_2377_ = lean_unsigned_to_nat(57u);
v___x_2378_ = lean_nat_dec_le(v_b_2359_, v___x_2377_);
if (v___x_2378_ == 0)
{
goto v___jp_2370_;
}
else
{
return v___x_2378_;
}
}
v___jp_2360_:
{
lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2361_ = lean_unsigned_to_nat(45u);
v___x_2362_ = lean_nat_dec_eq(v_b_2359_, v___x_2361_);
if (v___x_2362_ == 0)
{
lean_object* v___x_2363_; uint8_t v___x_2364_; 
v___x_2363_ = lean_unsigned_to_nat(95u);
v___x_2364_ = lean_nat_dec_eq(v_b_2359_, v___x_2363_);
return v___x_2364_;
}
else
{
return v___x_2362_;
}
}
v___jp_2365_:
{
lean_object* v___x_2366_; uint8_t v___x_2367_; 
v___x_2366_ = lean_unsigned_to_nat(97u);
v___x_2367_ = lean_nat_dec_le(v___x_2366_, v_b_2359_);
if (v___x_2367_ == 0)
{
goto v___jp_2360_;
}
else
{
lean_object* v___x_2368_; uint8_t v___x_2369_; 
v___x_2368_ = lean_unsigned_to_nat(122u);
v___x_2369_ = lean_nat_dec_le(v_b_2359_, v___x_2368_);
if (v___x_2369_ == 0)
{
goto v___jp_2360_;
}
else
{
return v___x_2369_;
}
}
}
v___jp_2370_:
{
lean_object* v___x_2371_; uint8_t v___x_2372_; 
v___x_2371_ = lean_unsigned_to_nat(65u);
v___x_2372_ = lean_nat_dec_le(v___x_2371_, v_b_2359_);
if (v___x_2372_ == 0)
{
goto v___jp_2365_;
}
else
{
lean_object* v___x_2373_; uint8_t v___x_2374_; 
v___x_2373_ = lean_unsigned_to_nat(90u);
v___x_2374_ = lean_nat_dec_le(v_b_2359_, v___x_2373_);
if (v___x_2374_ == 0)
{
goto v___jp_2365_;
}
else
{
return v___x_2374_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isTabKeyByte___boxed(lean_object* v_b_2379_){
_start:
{
uint8_t v_res_2380_; lean_object* v_r_2381_; 
v_res_2380_ = lp_lean_x2dftml_LeanFtml_isTabKeyByte(v_b_2379_);
lean_dec(v_b_2379_);
v_r_2381_ = lean_box(v_res_2380_);
return v_r_2381_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabNameCands_spec__0(lean_object* v_a_2382_, lean_object* v_a_2383_){
_start:
{
if (lean_obj_tag(v_a_2382_) == 0)
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_array_to_list(v_a_2383_);
return v___x_2384_;
}
else
{
lean_object* v_head_2385_; 
v_head_2385_ = lean_ctor_get(v_a_2382_, 0);
if (lean_obj_tag(v_head_2385_) == 0)
{
lean_object* v_tail_2386_; 
v_tail_2386_ = lean_ctor_get(v_a_2382_, 1);
lean_inc(v_tail_2386_);
lean_dec_ref_known(v_a_2382_, 2);
v_a_2382_ = v_tail_2386_;
goto _start;
}
else
{
lean_object* v_tail_2388_; lean_object* v_val_2389_; lean_object* v___x_2390_; 
lean_inc_ref(v_head_2385_);
v_tail_2388_ = lean_ctor_get(v_a_2382_, 1);
lean_inc(v_tail_2388_);
lean_dec_ref_known(v_a_2382_, 2);
v_val_2389_ = lean_ctor_get(v_head_2385_, 0);
lean_inc(v_val_2389_);
lean_dec_ref_known(v_head_2385_, 1);
v___x_2390_ = lean_array_push(v_a_2383_, v_val_2389_);
v_a_2382_ = v_tail_2388_;
v_a_2383_ = v___x_2390_;
goto _start;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1(void){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabNameCands___closed__0));
v___x_2394_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2393_);
return v___x_2394_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3(void){
_start:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2396_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabNameCands___closed__2));
v___x_2397_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2396_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabNameCands(lean_object* v_s_2400_){
_start:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2401_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabNameCands___closed__1);
lean_inc(v_s_2400_);
v___x_2402_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2401_, v_s_2400_);
v___x_2403_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3, &lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tabNameCands___closed__3);
v___x_2404_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2403_, v_s_2400_);
v___x_2405_ = lean_box(0);
v___x_2406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2404_);
lean_ctor_set(v___x_2406_, 1, v___x_2405_);
v___x_2407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2402_);
lean_ctor_set(v___x_2407_, 1, v___x_2406_);
v___x_2408_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabNameCands___closed__4));
v___x_2409_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabNameCands_spec__0(v___x_2407_, v___x_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(lean_object* v_l_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_){
_start:
{
if (lean_obj_tag(v_a_2411_) == 0)
{
lean_dec_ref(v_a_2412_);
lean_inc(v_l_2410_);
return v_l_2410_;
}
else
{
lean_object* v_head_2413_; lean_object* v_tail_2414_; uint8_t v___x_2415_; 
v_head_2413_ = lean_ctor_get(v_a_2411_, 0);
lean_inc(v_head_2413_);
v_tail_2414_ = lean_ctor_get(v_a_2411_, 1);
lean_inc(v_tail_2414_);
lean_dec_ref_known(v_a_2411_, 2);
v___x_2415_ = lp_lean_x2dftml_LeanFtml_isTabKeyByte(v_head_2413_);
if (v___x_2415_ == 0)
{
lean_object* v___x_2416_; 
lean_dec(v_tail_2414_);
lean_dec(v_head_2413_);
v___x_2416_ = lean_array_to_list(v_a_2412_);
return v___x_2416_;
}
else
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_array_push(v_a_2412_, v_head_2413_);
v_a_2411_ = v_tail_2414_;
v_a_2412_ = v___x_2417_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0___boxed(lean_object* v_l_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(v_l_2419_, v_a_2420_, v_a_2421_);
lean_dec(v_l_2419_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(uint8_t v___x_2423_, lean_object* v_l_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_){
_start:
{
if (lean_obj_tag(v_a_2425_) == 0)
{
lean_dec_ref(v_a_2426_);
lean_inc(v_l_2424_);
return v_l_2424_;
}
else
{
lean_object* v_head_2427_; lean_object* v_tail_2428_; lean_object* v___x_2432_; uint8_t v___x_2433_; 
v_head_2427_ = lean_ctor_get(v_a_2425_, 0);
lean_inc(v_head_2427_);
v_tail_2428_ = lean_ctor_get(v_a_2425_, 1);
lean_inc(v_tail_2428_);
lean_dec_ref_known(v_a_2425_, 2);
v___x_2432_ = lean_unsigned_to_nat(34u);
v___x_2433_ = lean_nat_dec_eq(v_head_2427_, v___x_2432_);
if (v___x_2433_ == 0)
{
goto v___jp_2429_;
}
else
{
if (v___x_2423_ == 0)
{
lean_object* v___x_2434_; 
lean_dec(v_tail_2428_);
lean_dec(v_head_2427_);
v___x_2434_ = lean_array_to_list(v_a_2426_);
return v___x_2434_;
}
else
{
goto v___jp_2429_;
}
}
v___jp_2429_:
{
lean_object* v___x_2430_; 
v___x_2430_ = lean_array_push(v_a_2426_, v_head_2427_);
v_a_2425_ = v_tail_2428_;
v_a_2426_ = v___x_2430_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1___boxed(lean_object* v___x_2435_, lean_object* v_l_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_){
_start:
{
uint8_t v___x_204__boxed_2439_; lean_object* v_res_2440_; 
v___x_204__boxed_2439_ = lean_unbox(v___x_2435_);
v_res_2440_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(v___x_204__boxed_2439_, v_l_2436_, v_a_2437_, v_a_2438_);
lean_dec(v_l_2436_);
return v_res_2440_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1(void){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2442_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabPairAt___closed__0));
v___x_2443_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2442_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabPairAt(lean_object* v_s_2444_){
_start:
{
lean_object* v___x_2445_; lean_object* v_ws_2446_; uint8_t v___x_2447_; 
v___x_2445_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_s_2444_);
v_ws_2446_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_s_2444_, v_s_2444_, v___x_2445_);
v___x_2447_ = l_List_isEmpty___redArg(v_ws_2446_);
if (v___x_2447_ == 0)
{
lean_object* v___x_2448_; lean_object* v_r1_2449_; lean_object* v_key_2450_; uint8_t v___x_2451_; 
v___x_2448_ = l_List_lengthTR___redArg(v_ws_2446_);
lean_dec(v_ws_2446_);
v_r1_2449_ = l_List_drop___redArg(v___x_2448_, v_s_2444_);
lean_dec(v_s_2444_);
lean_inc(v_r1_2449_);
v_key_2450_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(v_r1_2449_, v_r1_2449_, v___x_2445_);
v___x_2451_ = l_List_isEmpty___redArg(v_key_2450_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2452_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1, &lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1);
v___x_2453_ = l_List_lengthTR___redArg(v_key_2450_);
lean_dec(v_key_2450_);
v___x_2454_ = l_List_drop___redArg(v___x_2453_, v_r1_2449_);
lean_dec(v_r1_2449_);
v___x_2455_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2452_, v___x_2454_);
if (lean_obj_tag(v___x_2455_) == 0)
{
return v___x_2455_;
}
else
{
lean_object* v_val_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2472_; 
v_val_2456_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2458_ = v___x_2455_;
v_isShared_2459_ = v_isSharedCheck_2472_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_val_2456_);
lean_dec(v___x_2455_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2472_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v_val_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
lean_inc(v_val_2456_);
v_val_2460_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(v___x_2451_, v_val_2456_, v_val_2456_, v___x_2445_);
v___x_2461_ = l_List_lengthTR___redArg(v_val_2460_);
lean_dec(v_val_2460_);
v___x_2462_ = l_List_drop___redArg(v___x_2461_, v_val_2456_);
lean_dec(v_val_2456_);
if (lean_obj_tag(v___x_2462_) == 1)
{
lean_object* v_head_2463_; lean_object* v_tail_2464_; lean_object* v___x_2465_; uint8_t v___x_2466_; 
v_head_2463_ = lean_ctor_get(v___x_2462_, 0);
lean_inc(v_head_2463_);
v_tail_2464_ = lean_ctor_get(v___x_2462_, 1);
lean_inc(v_tail_2464_);
lean_dec_ref_known(v___x_2462_, 2);
v___x_2465_ = lean_unsigned_to_nat(34u);
v___x_2466_ = lean_nat_dec_eq(v_head_2463_, v___x_2465_);
lean_dec(v_head_2463_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; 
lean_dec(v_tail_2464_);
lean_del_object(v___x_2458_);
v___x_2467_ = lean_box(0);
return v___x_2467_;
}
else
{
lean_object* v___x_2469_; 
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v_tail_2464_);
v___x_2469_ = v___x_2458_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_tail_2464_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
else
{
lean_object* v___x_2471_; 
lean_dec(v___x_2462_);
lean_del_object(v___x_2458_);
v___x_2471_ = lean_box(0);
return v___x_2471_;
}
}
}
}
else
{
lean_object* v___x_2473_; 
lean_dec(v_key_2450_);
lean_dec(v_r1_2449_);
v___x_2473_ = lean_box(0);
return v___x_2473_;
}
}
else
{
lean_object* v___x_2474_; 
lean_dec(v_ws_2446_);
lean_dec(v_s_2444_);
v___x_2474_ = lean_box(0);
return v___x_2474_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_pairSteps_spec__0(lean_object* v_a_2475_, lean_object* v_a_2476_){
_start:
{
if (lean_obj_tag(v_a_2475_) == 0)
{
lean_object* v___x_2477_; 
v___x_2477_ = l_List_reverse___redArg(v_a_2476_);
return v___x_2477_;
}
else
{
lean_object* v_head_2478_; lean_object* v_tail_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2498_; 
v_head_2478_ = lean_ctor_get(v_a_2475_, 0);
v_tail_2479_ = lean_ctor_get(v_a_2475_, 1);
v_isSharedCheck_2498_ = !lean_is_exclusive(v_a_2475_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2481_ = v_a_2475_;
v_isShared_2482_ = v_isSharedCheck_2498_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_tail_2479_);
lean_inc(v_head_2478_);
lean_dec(v_a_2475_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2498_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v_fst_2483_; lean_object* v_snd_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2497_; 
v_fst_2483_ = lean_ctor_get(v_head_2478_, 0);
v_snd_2484_ = lean_ctor_get(v_head_2478_, 1);
v_isSharedCheck_2497_ = !lean_is_exclusive(v_head_2478_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2486_ = v_head_2478_;
v_isShared_2487_ = v_isSharedCheck_2497_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_snd_2484_);
lean_inc(v_fst_2483_);
lean_dec(v_head_2478_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2497_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2491_; 
v___x_2488_ = lean_unsigned_to_nat(1u);
v___x_2489_ = lean_nat_add(v_fst_2483_, v___x_2488_);
lean_dec(v_fst_2483_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 0, v___x_2489_);
v___x_2491_ = v___x_2486_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v___x_2489_);
lean_ctor_set(v_reuseFailAlloc_2496_, 1, v_snd_2484_);
v___x_2491_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
lean_object* v___x_2493_; 
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 1, v_a_2476_);
lean_ctor_set(v___x_2481_, 0, v___x_2491_);
v___x_2493_ = v___x_2481_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v___x_2491_);
lean_ctor_set(v_reuseFailAlloc_2495_, 1, v_a_2476_);
v___x_2493_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
v_a_2475_ = v_tail_2479_;
v_a_2476_ = v___x_2493_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairSteps(lean_object* v_s_2499_, lean_object* v_x_2500_){
_start:
{
lean_object* v_zero_2506_; uint8_t v_isZero_2507_; 
v_zero_2506_ = lean_unsigned_to_nat(0u);
v_isZero_2507_ = lean_nat_dec_eq(v_x_2500_, v_zero_2506_);
if (v_isZero_2507_ == 1)
{
goto v___jp_2501_;
}
else
{
lean_object* v___x_2508_; 
lean_inc(v_s_2499_);
v___x_2508_ = lp_lean_x2dftml_LeanFtml_tabPairAt(v_s_2499_);
if (lean_obj_tag(v___x_2508_) == 0)
{
goto v___jp_2501_;
}
else
{
lean_object* v_val_2509_; lean_object* v_one_2510_; lean_object* v_n_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v_val_2509_ = lean_ctor_get(v___x_2508_, 0);
lean_inc(v_val_2509_);
lean_dec_ref_known(v___x_2508_, 1);
v_one_2510_ = lean_unsigned_to_nat(1u);
v_n_2511_ = lean_nat_sub(v_x_2500_, v_one_2510_);
v___x_2512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2512_, 0, v_zero_2506_);
lean_ctor_set(v___x_2512_, 1, v_s_2499_);
v___x_2513_ = lp_lean_x2dftml_LeanFtml_pairSteps(v_val_2509_, v_n_2511_);
lean_dec(v_n_2511_);
v___x_2514_ = lean_box(0);
v___x_2515_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_pairSteps_spec__0(v___x_2513_, v___x_2514_);
v___x_2516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2512_);
lean_ctor_set(v___x_2516_, 1, v___x_2515_);
return v___x_2516_;
}
}
v___jp_2501_:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2502_ = lean_unsigned_to_nat(0u);
v___x_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
lean_ctor_set(v___x_2503_, 1, v_s_2499_);
v___x_2504_ = lean_box(0);
v___x_2505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2503_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
return v___x_2505_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pairSteps___boxed(lean_object* v_s_2517_, lean_object* v_x_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = lp_lean_x2dftml_LeanFtml_pairSteps(v_s_2517_, v_x_2518_);
lean_dec(v_x_2518_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0(lean_object* v___x_2520_, lean_object* v_s_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_){
_start:
{
if (lean_obj_tag(v_a_2522_) == 0)
{
lean_object* v___x_2524_; 
lean_dec(v_s_2521_);
v___x_2524_ = lean_array_to_list(v_a_2523_);
return v___x_2524_;
}
else
{
lean_object* v_head_2525_; lean_object* v_tail_2526_; lean_object* v_fst_2527_; lean_object* v_snd_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2545_; 
v_head_2525_ = lean_ctor_get(v_a_2522_, 0);
lean_inc(v_head_2525_);
v_tail_2526_ = lean_ctor_get(v_a_2522_, 1);
lean_inc(v_tail_2526_);
lean_dec_ref_known(v_a_2522_, 2);
v_fst_2527_ = lean_ctor_get(v_head_2525_, 0);
v_snd_2528_ = lean_ctor_get(v_head_2525_, 1);
v_isSharedCheck_2545_ = !lean_is_exclusive(v_head_2525_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2530_ = v_head_2525_;
v_isShared_2531_ = v_isSharedCheck_2545_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_snd_2528_);
lean_inc(v_fst_2527_);
lean_dec(v_head_2525_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2545_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2532_; uint8_t v___x_2533_; 
v___x_2532_ = lean_unsigned_to_nat(0u);
v___x_2533_ = lean_nat_dec_eq(v_fst_2527_, v___x_2532_);
lean_dec(v_fst_2527_);
if (v___x_2533_ == 0)
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2540_; 
v___x_2534_ = l_List_lengthTR___redArg(v_snd_2528_);
v___x_2535_ = lean_nat_sub(v___x_2520_, v___x_2534_);
lean_dec(v___x_2534_);
v___x_2536_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_s_2521_);
v___x_2537_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2521_, v_s_2521_, v___x_2535_, v___x_2536_);
v___x_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2537_);
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 0, v___x_2538_);
v___x_2540_ = v___x_2530_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2538_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v_snd_2528_);
v___x_2540_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
lean_object* v___x_2541_; 
v___x_2541_ = lean_array_push(v_a_2523_, v___x_2540_);
v_a_2522_ = v_tail_2526_;
v_a_2523_ = v___x_2541_;
goto _start;
}
}
else
{
lean_del_object(v___x_2530_);
lean_dec(v_snd_2528_);
v_a_2522_ = v_tail_2526_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0___boxed(lean_object* v___x_2546_, lean_object* v_s_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0(v___x_2546_, v_s_2547_, v_a_2548_, v_a_2549_);
lean_dec(v___x_2546_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabG2Cands(lean_object* v_s_2551_){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v_steps_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2552_ = l_List_lengthTR___redArg(v_s_2551_);
v___x_2553_ = lean_unsigned_to_nat(1u);
v___x_2554_ = lean_nat_add(v___x_2552_, v___x_2553_);
lean_inc_n(v_s_2551_, 2);
v_steps_2555_ = lp_lean_x2dftml_LeanFtml_pairSteps(v_s_2551_, v___x_2554_);
lean_dec(v___x_2554_);
v___x_2556_ = l_List_reverse___redArg(v_steps_2555_);
v___x_2557_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__2));
v___x_2558_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_tabG2Cands_spec__0(v___x_2552_, v_s_2551_, v___x_2556_, v___x_2557_);
lean_dec(v___x_2552_);
v___x_2559_ = lean_box(0);
v___x_2560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2559_);
lean_ctor_set(v___x_2560_, 1, v_s_2551_);
v___x_2561_ = lean_box(0);
v___x_2562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2560_);
lean_ctor_set(v___x_2562_, 1, v___x_2561_);
v___x_2563_ = l_List_appendTR___redArg(v___x_2558_, v___x_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0(uint8_t v___x_2564_, lean_object* v_l_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_){
_start:
{
if (lean_obj_tag(v_a_2566_) == 0)
{
lean_dec_ref(v_a_2567_);
lean_inc(v_l_2565_);
return v_l_2565_;
}
else
{
lean_object* v_head_2568_; lean_object* v_tail_2569_; lean_object* v___x_2573_; uint8_t v___x_2574_; 
v_head_2568_ = lean_ctor_get(v_a_2566_, 0);
lean_inc(v_head_2568_);
v_tail_2569_ = lean_ctor_get(v_a_2566_, 1);
lean_inc(v_tail_2569_);
lean_dec_ref_known(v_a_2566_, 2);
v___x_2573_ = lean_unsigned_to_nat(93u);
v___x_2574_ = lean_nat_dec_eq(v_head_2568_, v___x_2573_);
if (v___x_2574_ == 0)
{
goto v___jp_2570_;
}
else
{
if (v___x_2564_ == 0)
{
lean_object* v___x_2575_; 
lean_dec(v_tail_2569_);
lean_dec(v_head_2568_);
v___x_2575_ = lean_array_to_list(v_a_2567_);
return v___x_2575_;
}
else
{
goto v___jp_2570_;
}
}
v___jp_2570_:
{
lean_object* v___x_2571_; 
v___x_2571_ = lean_array_push(v_a_2567_, v_head_2568_);
v_a_2566_ = v_tail_2569_;
v_a_2567_ = v___x_2571_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0___boxed(lean_object* v___x_2576_, lean_object* v_l_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_){
_start:
{
uint8_t v___x_243__boxed_2580_; lean_object* v_res_2581_; 
v___x_243__boxed_2580_ = lean_unbox(v___x_2576_);
v_res_2581_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0(v___x_243__boxed_2580_, v_l_2577_, v_a_2578_, v_a_2579_);
lean_dec(v_l_2577_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1(lean_object* v_wsLen_2582_, lean_object* v_s_2583_, lean_object* v_afterWs_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_){
_start:
{
if (lean_obj_tag(v_a_2585_) == 0)
{
lean_object* v___x_2587_; 
lean_dec(v_s_2583_);
v___x_2587_ = lean_array_to_list(v_a_2586_);
return v___x_2587_;
}
else
{
lean_object* v_head_2588_; lean_object* v_tail_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2607_; 
v_head_2588_ = lean_ctor_get(v_a_2585_, 0);
v_tail_2589_ = lean_ctor_get(v_a_2585_, 1);
v_isSharedCheck_2607_ = !lean_is_exclusive(v_a_2585_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2591_ = v_a_2585_;
v_isShared_2592_ = v_isSharedCheck_2607_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_tail_2589_);
lean_inc(v_head_2588_);
lean_dec(v_a_2585_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2607_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2593_; lean_object* v_midLen_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2603_; 
v___x_2593_ = lean_unsigned_to_nat(1u);
v_midLen_2594_ = lean_nat_add(v_head_2588_, v___x_2593_);
lean_dec(v_head_2588_);
v___x_2595_ = lean_nat_add(v_wsLen_2582_, v_midLen_2594_);
v___x_2596_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_s_2583_);
v___x_2597_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2583_, v_s_2583_, v___x_2595_, v___x_2596_);
v___x_2598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
v___x_2599_ = l_List_drop___redArg(v_midLen_2594_, v_afterWs_2584_);
v___x_2600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2598_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
v___x_2601_ = lean_box(0);
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 1, v___x_2601_);
lean_ctor_set(v___x_2591_, 0, v___x_2600_);
v___x_2603_ = v___x_2591_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v___x_2600_);
lean_ctor_set(v_reuseFailAlloc_2606_, 1, v___x_2601_);
v___x_2603_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
lean_object* v___x_2604_; 
v___x_2604_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2586_, v___x_2603_);
v_a_2585_ = v_tail_2589_;
v_a_2586_ = v___x_2604_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1___boxed(lean_object* v_wsLen_2608_, lean_object* v_s_2609_, lean_object* v_afterWs_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_){
_start:
{
lean_object* v_res_2613_; 
v_res_2613_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1(v_wsLen_2608_, v_s_2609_, v_afterWs_2610_, v_a_2611_, v_a_2612_);
lean_dec(v_afterWs_2610_);
lean_dec(v_wsLen_2608_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2(lean_object* v_s_2614_, uint8_t v___x_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_){
_start:
{
if (lean_obj_tag(v_a_2616_) == 0)
{
lean_object* v___x_2618_; 
lean_dec(v_s_2614_);
v___x_2618_ = lean_array_to_list(v_a_2617_);
return v___x_2618_;
}
else
{
lean_object* v_head_2619_; lean_object* v_tail_2620_; lean_object* v___x_2621_; lean_object* v_wsLen_2622_; lean_object* v_afterWs_2623_; lean_object* v___x_2624_; lean_object* v_midRun_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v_head_2619_ = lean_ctor_get(v_a_2616_, 0);
v_tail_2620_ = lean_ctor_get(v_a_2616_, 1);
v___x_2621_ = lean_unsigned_to_nat(1u);
v_wsLen_2622_ = lean_nat_add(v_head_2619_, v___x_2621_);
lean_inc(v_wsLen_2622_);
v_afterWs_2623_ = l_List_drop___redArg(v_wsLen_2622_, v_s_2614_);
v___x_2624_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_afterWs_2623_);
v_midRun_2625_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabG1Cands_spec__0(v___x_2615_, v_afterWs_2623_, v_afterWs_2623_, v___x_2624_);
v___x_2626_ = l_List_lengthTR___redArg(v_midRun_2625_);
lean_dec(v_midRun_2625_);
v___x_2627_ = l_List_range(v___x_2626_);
lean_inc(v_s_2614_);
v___x_2628_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__1(v_wsLen_2622_, v_s_2614_, v_afterWs_2623_, v___x_2627_, v___x_2624_);
lean_dec(v_afterWs_2623_);
lean_dec(v_wsLen_2622_);
v___x_2629_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2617_, v___x_2628_);
v_a_2616_ = v_tail_2620_;
v_a_2617_ = v___x_2629_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2___boxed(lean_object* v_s_2631_, lean_object* v___x_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_){
_start:
{
uint8_t v___x_319__boxed_2635_; lean_object* v_res_2636_; 
v___x_319__boxed_2635_ = lean_unbox(v___x_2632_);
v_res_2636_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2(v_s_2631_, v___x_319__boxed_2635_, v_a_2633_, v_a_2634_);
lean_dec(v_a_2633_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabG1Cands(lean_object* v_s_2637_){
_start:
{
lean_object* v___y_2639_; lean_object* v___x_2645_; lean_object* v_wsRun_2646_; uint8_t v___x_2647_; 
v___x_2645_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_s_2637_);
v_wsRun_2646_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_s_2637_, v_s_2637_, v___x_2645_);
v___x_2647_ = l_List_isEmpty___redArg(v_wsRun_2646_);
if (v___x_2647_ == 0)
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2648_ = l_List_lengthTR___redArg(v_wsRun_2646_);
lean_dec(v_wsRun_2646_);
v___x_2649_ = l_List_range(v___x_2648_);
v___x_2650_ = l_List_reverse___redArg(v___x_2649_);
lean_inc(v_s_2637_);
v___x_2651_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabG1Cands_spec__2(v_s_2637_, v___x_2647_, v___x_2650_, v___x_2645_);
lean_dec(v___x_2650_);
v___y_2639_ = v___x_2651_;
goto v___jp_2638_;
}
else
{
lean_object* v___x_2652_; 
lean_dec(v_wsRun_2646_);
v___x_2652_ = lean_box(0);
v___y_2639_ = v___x_2652_;
goto v___jp_2638_;
}
v___jp_2638_:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2640_ = lean_box(0);
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
lean_ctor_set(v___x_2641_, 1, v_s_2637_);
v___x_2642_ = lean_box(0);
v___x_2643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = l_List_appendTR___redArg(v___y_2639_, v___x_2643_);
return v___x_2644_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabUnitCands_spec__0(lean_object* v_s_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_){
_start:
{
if (lean_obj_tag(v_a_2654_) == 0)
{
lean_object* v___x_2656_; 
lean_dec(v_s_2653_);
v___x_2656_ = l_List_reverse___redArg(v_a_2655_);
return v___x_2656_;
}
else
{
lean_object* v_head_2657_; lean_object* v_tail_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2683_; 
v_head_2657_ = lean_ctor_get(v_a_2654_, 0);
v_tail_2658_ = lean_ctor_get(v_a_2654_, 1);
v_isSharedCheck_2683_ = !lean_is_exclusive(v_a_2654_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2660_ = v_a_2654_;
v_isShared_2661_ = v_isSharedCheck_2683_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_tail_2658_);
lean_inc(v_head_2657_);
lean_dec(v_a_2654_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2683_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v_snd_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2681_; 
v_snd_2662_ = lean_ctor_get(v_head_2657_, 1);
v_isSharedCheck_2681_ = !lean_is_exclusive(v_head_2657_);
if (v_isSharedCheck_2681_ == 0)
{
lean_object* v_unused_2682_; 
v_unused_2682_ = lean_ctor_get(v_head_2657_, 0);
lean_dec(v_unused_2682_);
v___x_2664_ = v_head_2657_;
v_isShared_2665_ = v_isSharedCheck_2681_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_snd_2662_);
lean_dec(v_head_2657_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2681_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v_after_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2675_; 
v___x_2666_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_snd_2662_);
v___x_2667_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_snd_2662_, v_snd_2662_, v___x_2666_);
v___x_2668_ = l_List_lengthTR___redArg(v___x_2667_);
lean_dec(v___x_2667_);
v_after_2669_ = l_List_drop___redArg(v___x_2668_, v_snd_2662_);
lean_dec(v_snd_2662_);
v___x_2670_ = l_List_lengthTR___redArg(v_s_2653_);
v___x_2671_ = l_List_lengthTR___redArg(v_after_2669_);
v___x_2672_ = lean_nat_sub(v___x_2670_, v___x_2671_);
lean_dec(v___x_2671_);
lean_dec(v___x_2670_);
lean_inc(v_s_2653_);
v___x_2673_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_2653_, v_s_2653_, v___x_2672_, v___x_2666_);
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 1, v_after_2669_);
lean_ctor_set(v___x_2664_, 0, v___x_2673_);
v___x_2675_ = v___x_2664_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v___x_2673_);
lean_ctor_set(v_reuseFailAlloc_2680_, 1, v_after_2669_);
v___x_2675_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
lean_object* v___x_2677_; 
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v_a_2655_);
lean_ctor_set(v___x_2660_, 0, v___x_2675_);
v___x_2677_ = v___x_2660_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v___x_2675_);
lean_ctor_set(v_reuseFailAlloc_2679_, 1, v_a_2655_);
v___x_2677_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
v_a_2654_ = v_tail_2658_;
v_a_2655_ = v___x_2677_;
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
lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2685_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__0));
v___x_2686_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2685_);
return v___x_2686_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1(lean_object* v_s_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_){
_start:
{
if (lean_obj_tag(v_a_2688_) == 0)
{
lean_object* v___x_2690_; 
lean_dec(v_s_2687_);
v___x_2690_ = lean_array_to_list(v_a_2689_);
return v___x_2690_;
}
else
{
lean_object* v_head_2691_; lean_object* v_tail_2692_; lean_object* v_snd_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v_head_2691_ = lean_ctor_get(v_a_2688_, 0);
lean_inc(v_head_2691_);
v_tail_2692_ = lean_ctor_get(v_a_2688_, 1);
lean_inc(v_tail_2692_);
lean_dec_ref_known(v_a_2688_, 2);
v_snd_2693_ = lean_ctor_get(v_head_2691_, 1);
lean_inc(v_snd_2693_);
lean_dec(v_head_2691_);
v___x_2694_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1);
v___x_2695_ = lp_lean_x2dftml_LeanFtml_occurrencesCI(v___x_2694_, v_snd_2693_);
v___x_2696_ = lean_box(0);
lean_inc(v_s_2687_);
v___x_2697_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabUnitCands_spec__0(v_s_2687_, v___x_2695_, v___x_2696_);
v___x_2698_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2689_, v___x_2697_);
v_a_2688_ = v_tail_2692_;
v_a_2689_ = v___x_2698_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__2(lean_object* v_s_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_){
_start:
{
if (lean_obj_tag(v_a_2701_) == 0)
{
lean_object* v___x_2703_; 
lean_dec(v_s_2700_);
v___x_2703_ = lean_array_to_list(v_a_2702_);
return v___x_2703_;
}
else
{
lean_object* v_head_2704_; lean_object* v_tail_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v_head_2704_ = lean_ctor_get(v_a_2701_, 0);
lean_inc(v_head_2704_);
v_tail_2705_ = lean_ctor_get(v_a_2701_, 1);
lean_inc(v_tail_2705_);
lean_dec_ref_known(v_a_2701_, 2);
v___x_2706_ = lp_lean_x2dftml_LeanFtml_attrGroupCands(v_head_2704_);
v___x_2707_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
lean_inc(v_s_2700_);
v___x_2708_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1(v_s_2700_, v___x_2706_, v___x_2707_);
v___x_2709_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2702_, v___x_2708_);
v_a_2701_ = v_tail_2705_;
v_a_2702_ = v___x_2709_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1(void){
_start:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2712_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__0));
v___x_2713_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabUnitCands(lean_object* v_s_2714_){
_start:
{
lean_object* v___y_2716_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2719_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1);
lean_inc(v_s_2714_);
v___x_2720_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2719_, v_s_2714_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v___x_2721_; 
v___x_2721_ = lean_box(0);
v___y_2716_ = v___x_2721_;
goto v___jp_2715_;
}
else
{
lean_object* v_val_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v_val_2722_ = lean_ctor_get(v___x_2720_, 0);
lean_inc(v_val_2722_);
lean_dec_ref_known(v___x_2720_, 1);
v___x_2723_ = lean_box(0);
v___x_2724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2724_, 0, v_val_2722_);
lean_ctor_set(v___x_2724_, 1, v___x_2723_);
v___y_2716_ = v___x_2724_;
goto v___jp_2715_;
}
v___jp_2715_:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2717_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v___x_2718_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__2(v_s_2714_, v___y_2716_, v___x_2717_);
return v___x_2718_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__3(lean_object* v_fst_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_){
_start:
{
if (lean_obj_tag(v_a_2726_) == 0)
{
lean_object* v___x_2728_; 
lean_dec(v_fst_2725_);
v___x_2728_ = l_List_reverse___redArg(v_a_2727_);
return v___x_2728_;
}
else
{
lean_object* v_head_2729_; lean_object* v_tail_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2748_; 
v_head_2729_ = lean_ctor_get(v_a_2726_, 0);
v_tail_2730_ = lean_ctor_get(v_a_2726_, 1);
v_isSharedCheck_2748_ = !lean_is_exclusive(v_a_2726_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2732_ = v_a_2726_;
v_isShared_2733_ = v_isSharedCheck_2748_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_tail_2730_);
lean_inc(v_head_2729_);
lean_dec(v_a_2726_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2748_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v_fst_2734_; lean_object* v_snd_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2747_; 
v_fst_2734_ = lean_ctor_get(v_head_2729_, 0);
v_snd_2735_ = lean_ctor_get(v_head_2729_, 1);
v_isSharedCheck_2747_ = !lean_is_exclusive(v_head_2729_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2737_ = v_head_2729_;
v_isShared_2738_ = v_isSharedCheck_2747_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_snd_2735_);
lean_inc(v_fst_2734_);
lean_dec(v_head_2729_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2747_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2739_; lean_object* v___x_2741_; 
lean_inc(v_fst_2725_);
v___x_2739_ = l_List_appendTR___redArg(v_fst_2725_, v_fst_2734_);
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 0, v___x_2739_);
v___x_2741_ = v___x_2737_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v___x_2739_);
lean_ctor_set(v_reuseFailAlloc_2746_, 1, v_snd_2735_);
v___x_2741_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
lean_object* v___x_2743_; 
if (v_isShared_2733_ == 0)
{
lean_ctor_set(v___x_2732_, 1, v_a_2727_);
lean_ctor_set(v___x_2732_, 0, v___x_2741_);
v___x_2743_ = v___x_2732_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v___x_2741_);
lean_ctor_set(v_reuseFailAlloc_2745_, 1, v_a_2727_);
v___x_2743_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
v_a_2726_ = v_tail_2730_;
v_a_2727_ = v___x_2743_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__0(lean_object* v_a_2749_, lean_object* v_a_2750_){
_start:
{
if (lean_obj_tag(v_a_2749_) == 0)
{
lean_object* v___x_2751_; 
v___x_2751_ = l_List_reverse___redArg(v_a_2750_);
return v___x_2751_;
}
else
{
lean_object* v_head_2752_; lean_object* v_tail_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2767_; 
v_head_2752_ = lean_ctor_get(v_a_2749_, 0);
v_tail_2753_ = lean_ctor_get(v_a_2749_, 1);
v_isSharedCheck_2767_ = !lean_is_exclusive(v_a_2749_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2755_ = v_a_2749_;
v_isShared_2756_ = v_isSharedCheck_2767_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_tail_2753_);
lean_inc(v_head_2752_);
lean_dec(v_a_2749_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2767_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2764_; 
v___x_2757_ = lean_box(0);
v___x_2758_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_head_2752_);
v___x_2759_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_head_2752_, v_head_2752_, v___x_2758_);
v___x_2760_ = l_List_lengthTR___redArg(v___x_2759_);
lean_dec(v___x_2759_);
v___x_2761_ = l_List_drop___redArg(v___x_2760_, v_head_2752_);
lean_dec(v_head_2752_);
v___x_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2757_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 1, v_a_2750_);
lean_ctor_set(v___x_2755_, 0, v___x_2762_);
v___x_2764_ = v___x_2755_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2762_);
lean_ctor_set(v_reuseFailAlloc_2766_, 1, v_a_2750_);
v___x_2764_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
v_a_2749_ = v_tail_2753_;
v_a_2750_ = v___x_2764_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__1(lean_object* v_a_2768_, lean_object* v_a_2769_){
_start:
{
if (lean_obj_tag(v_a_2768_) == 0)
{
lean_object* v___x_2770_; 
v___x_2770_ = lean_array_to_list(v_a_2769_);
return v___x_2770_;
}
else
{
lean_object* v_head_2771_; lean_object* v_tail_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2790_; 
v_head_2771_ = lean_ctor_get(v_a_2768_, 0);
v_tail_2772_ = lean_ctor_get(v_a_2768_, 1);
v_isSharedCheck_2790_ = !lean_is_exclusive(v_a_2768_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2774_ = v_a_2768_;
v_isShared_2775_ = v_isSharedCheck_2790_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_tail_2772_);
lean_inc(v_head_2771_);
lean_dec(v_a_2768_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2790_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___y_2777_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2782_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1, &lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1);
v___x_2783_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2782_, v_head_2771_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v___x_2784_; 
lean_del_object(v___x_2774_);
v___x_2784_ = lean_box(0);
v___y_2777_ = v___x_2784_;
goto v___jp_2776_;
}
else
{
lean_object* v_val_2785_; lean_object* v___x_2786_; lean_object* v___x_2788_; 
v_val_2785_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_val_2785_);
lean_dec_ref_known(v___x_2783_, 1);
v___x_2786_ = lean_box(0);
if (v_isShared_2775_ == 0)
{
lean_ctor_set(v___x_2774_, 1, v___x_2786_);
lean_ctor_set(v___x_2774_, 0, v_val_2785_);
v___x_2788_ = v___x_2774_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_val_2785_);
lean_ctor_set(v_reuseFailAlloc_2789_, 1, v___x_2786_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
v___y_2777_ = v___x_2788_;
goto v___jp_2776_;
}
}
v___jp_2776_:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2778_ = lean_box(0);
v___x_2779_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__0(v___y_2777_, v___x_2778_);
v___x_2780_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2769_, v___x_2779_);
v_a_2768_ = v_tail_2772_;
v_a_2769_ = v___x_2780_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__2(lean_object* v_a_2791_, lean_object* v_a_2792_){
_start:
{
if (lean_obj_tag(v_a_2791_) == 0)
{
lean_object* v___x_2793_; 
v___x_2793_ = lean_array_to_list(v_a_2792_);
return v___x_2793_;
}
else
{
lean_object* v_head_2794_; lean_object* v_tail_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_head_2794_ = lean_ctor_get(v_a_2791_, 0);
lean_inc(v_head_2794_);
v_tail_2795_ = lean_ctor_get(v_a_2791_, 1);
lean_inc(v_tail_2795_);
lean_dec_ref_known(v_a_2791_, 2);
v___x_2796_ = lp_lean_x2dftml_LeanFtml_tabNameCands(v_head_2794_);
v___x_2797_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v___x_2798_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__1(v___x_2796_, v___x_2797_);
v___x_2799_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2792_, v___x_2798_);
v_a_2791_ = v_tail_2795_;
v_a_2792_ = v___x_2799_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__0));
v___x_2803_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2802_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5(lean_object* v_a_2804_, lean_object* v_a_2805_){
_start:
{
if (lean_obj_tag(v_a_2804_) == 0)
{
lean_object* v___x_2806_; 
v___x_2806_ = lean_array_to_list(v_a_2805_);
return v___x_2806_;
}
else
{
lean_object* v_head_2807_; lean_object* v_tail_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2826_; 
v_head_2807_ = lean_ctor_get(v_a_2804_, 0);
v_tail_2808_ = lean_ctor_get(v_a_2804_, 1);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_a_2804_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2810_ = v_a_2804_;
v_isShared_2811_ = v_isSharedCheck_2826_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_tail_2808_);
lean_inc(v_head_2807_);
lean_dec(v_a_2804_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2826_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___y_2813_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___x_2818_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5___closed__1);
v___x_2819_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2818_, v_head_2807_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v___x_2820_; 
lean_del_object(v___x_2810_);
v___x_2820_ = lean_box(0);
v___y_2813_ = v___x_2820_;
goto v___jp_2812_;
}
else
{
lean_object* v_val_2821_; lean_object* v___x_2822_; lean_object* v___x_2824_; 
v_val_2821_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_val_2821_);
lean_dec_ref_known(v___x_2819_, 1);
v___x_2822_ = lean_box(0);
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 1, v___x_2822_);
lean_ctor_set(v___x_2810_, 0, v_val_2821_);
v___x_2824_ = v___x_2810_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_val_2821_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v___x_2822_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
v___y_2813_ = v___x_2824_;
goto v___jp_2812_;
}
}
v___jp_2812_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2814_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v___x_2815_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__2(v___y_2813_, v___x_2814_);
v___x_2816_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2805_, v___x_2815_);
v_a_2804_ = v_tail_2808_;
v_a_2805_ = v___x_2816_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1(void){
_start:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2828_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__0));
v___x_2829_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2828_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabRegionCands(lean_object* v_s_2830_, lean_object* v_x_2831_){
_start:
{
lean_object* v_zero_2832_; uint8_t v_isZero_2833_; 
v_zero_2832_ = lean_unsigned_to_nat(0u);
v_isZero_2833_ = lean_nat_dec_eq(v_x_2831_, v_zero_2832_);
if (v_isZero_2833_ == 1)
{
lean_object* v___x_2834_; 
lean_dec(v_s_2830_);
v___x_2834_ = lean_box(0);
return v___x_2834_;
}
else
{
lean_object* v_one_2835_; lean_object* v_n_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v_more_2839_; lean_object* v___y_2841_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v_one_2835_ = lean_unsigned_to_nat(1u);
v_n_2836_ = lean_nat_sub(v_x_2831_, v_one_2835_);
lean_inc(v_s_2830_);
v___x_2837_ = lp_lean_x2dftml_LeanFtml_tabUnitCands(v_s_2830_);
v___x_2838_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanBody___closed__0));
v_more_2839_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4(v_n_2836_, v___x_2837_, v___x_2838_);
lean_dec(v_n_2836_);
v___x_2844_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1);
v___x_2845_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2844_, v_s_2830_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v___x_2846_; 
v___x_2846_ = lean_box(0);
v___y_2841_ = v___x_2846_;
goto v___jp_2840_;
}
else
{
lean_object* v_val_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_val_2847_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_val_2847_);
lean_dec_ref_known(v___x_2845_, 1);
v___x_2848_ = lean_box(0);
v___x_2849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2849_, 0, v_val_2847_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
v___y_2841_ = v___x_2849_;
goto v___jp_2840_;
}
v___jp_2840_:
{
lean_object* v_exit_2842_; lean_object* v___x_2843_; 
v_exit_2842_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__5(v___y_2841_, v___x_2838_);
v___x_2843_ = l_List_appendTR___redArg(v_more_2839_, v_exit_2842_);
return v___x_2843_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4(lean_object* v_n_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_){
_start:
{
if (lean_obj_tag(v_a_2851_) == 0)
{
lean_object* v___x_2853_; 
v___x_2853_ = lean_array_to_list(v_a_2852_);
return v___x_2853_;
}
else
{
lean_object* v_head_2854_; lean_object* v_tail_2855_; lean_object* v_fst_2856_; lean_object* v_snd_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v_head_2854_ = lean_ctor_get(v_a_2851_, 0);
lean_inc(v_head_2854_);
v_tail_2855_ = lean_ctor_get(v_a_2851_, 1);
lean_inc(v_tail_2855_);
lean_dec_ref_known(v_a_2851_, 2);
v_fst_2856_ = lean_ctor_get(v_head_2854_, 0);
lean_inc(v_fst_2856_);
v_snd_2857_ = lean_ctor_get(v_head_2854_, 1);
lean_inc(v_snd_2857_);
lean_dec(v_head_2854_);
v___x_2858_ = lp_lean_x2dftml_LeanFtml_tabRegionCands(v_snd_2857_, v_n_2850_);
v___x_2859_ = lean_box(0);
v___x_2860_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabRegionCands_spec__3(v_fst_2856_, v___x_2858_, v___x_2859_);
v___x_2861_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2852_, v___x_2860_);
v_a_2851_ = v_tail_2855_;
v_a_2852_ = v___x_2861_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4___boxed(lean_object* v_n_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_){
_start:
{
lean_object* v_res_2866_; 
v_res_2866_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabRegionCands_spec__4(v_n_2863_, v_a_2864_, v_a_2865_);
lean_dec(v_n_2863_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabRegionCands___boxed(lean_object* v_s_2867_, lean_object* v_x_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = lp_lean_x2dftml_LeanFtml_tabRegionCands(v_s_2867_, v_x_2868_);
lean_dec(v_x_2868_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabviewMatchAt_spec__0(lean_object* v_fst_2870_, lean_object* v_fst_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_){
_start:
{
if (lean_obj_tag(v_a_2872_) == 0)
{
lean_object* v___x_2874_; 
lean_dec(v_fst_2871_);
lean_dec(v_fst_2870_);
v___x_2874_ = l_List_reverse___redArg(v_a_2873_);
return v___x_2874_;
}
else
{
lean_object* v_head_2875_; lean_object* v_tail_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2895_; 
v_head_2875_ = lean_ctor_get(v_a_2872_, 0);
v_tail_2876_ = lean_ctor_get(v_a_2872_, 1);
v_isSharedCheck_2895_ = !lean_is_exclusive(v_a_2872_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2878_ = v_a_2872_;
v_isShared_2879_ = v_isSharedCheck_2895_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_tail_2876_);
lean_inc(v_head_2875_);
lean_dec(v_a_2872_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2895_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v_fst_2880_; lean_object* v_snd_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2894_; 
v_fst_2880_ = lean_ctor_get(v_head_2875_, 0);
v_snd_2881_ = lean_ctor_get(v_head_2875_, 1);
v_isSharedCheck_2894_ = !lean_is_exclusive(v_head_2875_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2883_ = v_head_2875_;
v_isShared_2884_ = v_isSharedCheck_2894_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_snd_2881_);
lean_inc(v_fst_2880_);
lean_dec(v_head_2875_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2894_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2885_; lean_object* v___x_2887_; 
lean_inc(v_fst_2870_);
v___x_2885_ = l_List_appendTR___redArg(v_fst_2870_, v_fst_2880_);
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 0, v___x_2885_);
v___x_2887_ = v___x_2883_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v___x_2885_);
lean_ctor_set(v_reuseFailAlloc_2893_, 1, v_snd_2881_);
v___x_2887_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
lean_object* v___x_2888_; lean_object* v___x_2890_; 
lean_inc(v_fst_2871_);
v___x_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2888_, 0, v_fst_2871_);
lean_ctor_set(v___x_2888_, 1, v___x_2887_);
if (v_isShared_2879_ == 0)
{
lean_ctor_set(v___x_2878_, 1, v_a_2873_);
lean_ctor_set(v___x_2878_, 0, v___x_2888_);
v___x_2890_ = v___x_2878_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v___x_2888_);
lean_ctor_set(v_reuseFailAlloc_2892_, 1, v_a_2873_);
v___x_2890_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
v_a_2872_ = v_tail_2876_;
v_a_2873_ = v___x_2890_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__1(lean_object* v_fst_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_){
_start:
{
if (lean_obj_tag(v_a_2897_) == 0)
{
lean_object* v___x_2899_; 
lean_dec(v_fst_2896_);
v___x_2899_ = lean_array_to_list(v_a_2898_);
return v___x_2899_;
}
else
{
lean_object* v_head_2900_; lean_object* v_tail_2901_; lean_object* v_fst_2902_; lean_object* v_snd_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v_head_2900_ = lean_ctor_get(v_a_2897_, 0);
lean_inc(v_head_2900_);
v_tail_2901_ = lean_ctor_get(v_a_2897_, 1);
lean_inc(v_tail_2901_);
lean_dec_ref_known(v_a_2897_, 2);
v_fst_2902_ = lean_ctor_get(v_head_2900_, 0);
lean_inc(v_fst_2902_);
v_snd_2903_ = lean_ctor_get(v_head_2900_, 1);
lean_inc(v_snd_2903_);
lean_dec(v_head_2900_);
v___x_2904_ = l_List_lengthTR___redArg(v_snd_2903_);
v___x_2905_ = lean_unsigned_to_nat(1u);
v___x_2906_ = lean_nat_add(v___x_2904_, v___x_2905_);
lean_dec(v___x_2904_);
v___x_2907_ = lp_lean_x2dftml_LeanFtml_tabRegionCands(v_snd_2903_, v___x_2906_);
lean_dec(v___x_2906_);
v___x_2908_ = lean_box(0);
lean_inc(v_fst_2896_);
v___x_2909_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tabviewMatchAt_spec__0(v_fst_2902_, v_fst_2896_, v___x_2907_, v___x_2908_);
v___x_2910_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2898_, v___x_2909_);
v_a_2897_ = v_tail_2901_;
v_a_2898_ = v___x_2910_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2(lean_object* v_snd_2912_, lean_object* v_fst_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_){
_start:
{
if (lean_obj_tag(v_a_2914_) == 0)
{
lean_object* v___x_2916_; 
lean_dec(v_fst_2913_);
v___x_2916_ = lean_array_to_list(v_a_2915_);
return v___x_2916_;
}
else
{
lean_object* v_head_2917_; lean_object* v_tail_2918_; lean_object* v_r3_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; 
v_head_2917_ = lean_ctor_get(v_a_2914_, 0);
lean_inc(v_head_2917_);
v_tail_2918_ = lean_ctor_get(v_a_2914_, 1);
lean_inc(v_tail_2918_);
lean_dec_ref_known(v_a_2914_, 2);
v_r3_2919_ = l_List_drop___redArg(v_head_2917_, v_snd_2912_);
v___x_2920_ = lp_lean_x2dftml_LeanFtml_tabUnitCands(v_r3_2919_);
v___x_2921_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
lean_inc(v_fst_2913_);
v___x_2922_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__1(v_fst_2913_, v___x_2920_, v___x_2921_);
v___x_2923_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2915_, v___x_2922_);
v_a_2914_ = v_tail_2918_;
v_a_2915_ = v___x_2923_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2___boxed(lean_object* v_snd_2925_, lean_object* v_fst_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2(v_snd_2925_, v_fst_2926_, v_a_2927_, v_a_2928_);
lean_dec(v_snd_2925_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__3(lean_object* v_a_2930_, lean_object* v_a_2931_){
_start:
{
if (lean_obj_tag(v_a_2930_) == 0)
{
lean_object* v___x_2932_; 
v___x_2932_ = lean_array_to_list(v_a_2931_);
return v___x_2932_;
}
else
{
lean_object* v_head_2933_; lean_object* v_tail_2934_; lean_object* v_fst_2935_; lean_object* v_snd_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v_wsLen_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v_head_2933_ = lean_ctor_get(v_a_2930_, 0);
lean_inc(v_head_2933_);
v_tail_2934_ = lean_ctor_get(v_a_2930_, 1);
lean_inc(v_tail_2934_);
lean_dec_ref_known(v_a_2930_, 2);
v_fst_2935_ = lean_ctor_get(v_head_2933_, 0);
lean_inc(v_fst_2935_);
v_snd_2936_ = lean_ctor_get(v_head_2933_, 1);
lean_inc_n(v_snd_2936_, 2);
lean_dec(v_head_2933_);
v___x_2937_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
v___x_2938_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_snd_2936_, v_snd_2936_, v___x_2937_);
v_wsLen_2939_ = l_List_lengthTR___redArg(v___x_2938_);
lean_dec(v___x_2938_);
v___x_2940_ = lean_unsigned_to_nat(1u);
v___x_2941_ = lean_nat_add(v_wsLen_2939_, v___x_2940_);
lean_dec(v_wsLen_2939_);
v___x_2942_ = l_List_range(v___x_2941_);
v___x_2943_ = l_List_reverse___redArg(v___x_2942_);
v___x_2944_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__2(v_snd_2936_, v_fst_2935_, v___x_2943_, v___x_2937_);
lean_dec(v_snd_2936_);
v___x_2945_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2931_, v___x_2944_);
v_a_2930_ = v_tail_2934_;
v_a_2931_ = v___x_2945_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__4(lean_object* v_a_2947_, lean_object* v_a_2948_){
_start:
{
if (lean_obj_tag(v_a_2947_) == 0)
{
lean_object* v___x_2949_; 
v___x_2949_ = lean_array_to_list(v_a_2948_);
return v___x_2949_;
}
else
{
lean_object* v_head_2950_; lean_object* v_tail_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v_head_2950_ = lean_ctor_get(v_a_2947_, 0);
lean_inc(v_head_2950_);
v_tail_2951_ = lean_ctor_get(v_a_2947_, 1);
lean_inc(v_tail_2951_);
lean_dec_ref_known(v_a_2947_, 2);
v___x_2952_ = lp_lean_x2dftml_LeanFtml_attrGroupCands(v_head_2950_);
v___x_2953_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
v___x_2954_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__3(v___x_2952_, v___x_2953_);
v___x_2955_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2948_, v___x_2954_);
v_a_2947_ = v_tail_2951_;
v_a_2948_ = v___x_2955_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__5(lean_object* v_a_2957_, lean_object* v_a_2958_){
_start:
{
if (lean_obj_tag(v_a_2957_) == 0)
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_array_to_list(v_a_2958_);
return v___x_2959_;
}
else
{
lean_object* v_head_2960_; lean_object* v_tail_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_head_2960_ = lean_ctor_get(v_a_2957_, 0);
lean_inc(v_head_2960_);
v_tail_2961_ = lean_ctor_get(v_a_2957_, 1);
lean_inc(v_tail_2961_);
lean_dec_ref_known(v_a_2957_, 2);
v___x_2962_ = lp_lean_x2dftml_LeanFtml_tabNameCands(v_head_2960_);
v___x_2963_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
v___x_2964_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__4(v___x_2962_, v___x_2963_);
v___x_2965_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2958_, v___x_2964_);
v_a_2957_ = v_tail_2961_;
v_a_2958_ = v___x_2965_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewMatchAt(lean_object* v_s_2967_){
_start:
{
lean_object* v___y_2969_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2972_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabRegionCands___closed__1);
v___x_2973_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_2972_, v_s_2967_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v___x_2974_; 
v___x_2974_ = lean_box(0);
v___y_2969_ = v___x_2974_;
goto v___jp_2968_;
}
else
{
lean_object* v_val_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
v_val_2975_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_val_2975_);
lean_dec_ref_known(v___x_2973_, 1);
v___x_2976_ = lean_box(0);
v___x_2977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2977_, 0, v_val_2975_);
lean_ctor_set(v___x_2977_, 1, v___x_2976_);
v___y_2969_ = v___x_2977_;
goto v___jp_2968_;
}
v___jp_2968_:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2970_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_spanMatch___closed__2));
v___x_2971_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabviewMatchAt_spec__5(v___y_2969_, v___x_2970_);
return v___x_2971_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(lean_object* v_a_2978_, uint8_t v_a_2979_){
_start:
{
if (lean_obj_tag(v_a_2978_) == 0)
{
return v_a_2978_;
}
else
{
lean_object* v_head_2980_; lean_object* v_tail_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2996_; 
v_head_2980_ = lean_ctor_get(v_a_2978_, 0);
v_tail_2981_ = lean_ctor_get(v_a_2978_, 1);
v_isSharedCheck_2996_ = !lean_is_exclusive(v_a_2978_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2983_ = v_a_2978_;
v_isShared_2984_ = v_isSharedCheck_2996_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_tail_2981_);
lean_inc(v_head_2980_);
lean_dec(v_a_2978_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2996_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
uint8_t v___x_2985_; 
v___x_2985_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_2980_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2986_; lean_object* v___x_2988_; 
v___x_2986_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(v_tail_2981_, v___x_2985_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 1, v___x_2986_);
v___x_2988_ = v___x_2983_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_head_2980_);
lean_ctor_set(v_reuseFailAlloc_2989_, 1, v___x_2986_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
else
{
lean_dec(v_head_2980_);
if (v_a_2979_ == 0)
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2993_; 
v___x_2990_ = lean_unsigned_to_nat(32u);
v___x_2991_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(v_tail_2981_, v___x_2985_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 1, v___x_2991_);
lean_ctor_set(v___x_2983_, 0, v___x_2990_);
v___x_2993_ = v___x_2983_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v___x_2990_);
lean_ctor_set(v_reuseFailAlloc_2994_, 1, v___x_2991_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
else
{
lean_del_object(v___x_2983_);
v_a_2978_ = v_tail_2981_;
v_a_2979_ = v___x_2985_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes_go___boxed(lean_object* v_a_2997_, lean_object* v_a_2998_){
_start:
{
uint8_t v_a_53__boxed_2999_; lean_object* v_res_3000_; 
v_a_53__boxed_2999_ = lean_unbox(v_a_2998_);
v_res_3000_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(v_a_2997_, v_a_53__boxed_2999_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWsBytes(lean_object* v_bs_3001_){
_start:
{
uint8_t v___x_3002_; lean_object* v___x_3003_; 
v___x_3002_ = 0;
v___x_3003_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes_go(v_bs_3001_, v___x_3002_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3(lean_object* v_x_3004_, lean_object* v_x_3005_){
_start:
{
if (lean_obj_tag(v_x_3005_) == 0)
{
lean_inc(v_x_3004_);
return v_x_3004_;
}
else
{
lean_object* v_head_3006_; lean_object* v_tail_3007_; uint8_t v___x_3008_; 
v_head_3006_ = lean_ctor_get(v_x_3005_, 0);
v_tail_3007_ = lean_ctor_get(v_x_3005_, 1);
v___x_3008_ = lean_nat_dec_le(v_x_3004_, v_head_3006_);
if (v___x_3008_ == 0)
{
v_x_3004_ = v_head_3006_;
v_x_3005_ = v_tail_3007_;
goto _start;
}
else
{
v_x_3005_ = v_tail_3007_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3___boxed(lean_object* v_x_3011_, lean_object* v_x_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3(v_x_3011_, v_x_3012_);
lean_dec(v_x_3012_);
lean_dec(v_x_3011_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(lean_object* v_x_3014_){
_start:
{
if (lean_obj_tag(v_x_3014_) == 0)
{
lean_object* v___x_3015_; 
v___x_3015_ = lean_box(0);
return v___x_3015_;
}
else
{
lean_object* v_head_3016_; lean_object* v_tail_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v_head_3016_ = lean_ctor_get(v_x_3014_, 0);
v_tail_3017_ = lean_ctor_get(v_x_3014_, 1);
v___x_3018_ = lp_lean_x2dftml_List_foldl___at___00List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2_spec__3(v_head_3016_, v_tail_3017_);
v___x_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3018_);
return v___x_3019_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2___boxed(lean_object* v_x_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(v_x_3020_);
lean_dec(v_x_3020_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(lean_object* v_x_3022_, lean_object* v_x_3023_){
_start:
{
if (lean_obj_tag(v_x_3023_) == 0)
{
lean_inc(v_x_3022_);
return v_x_3022_;
}
else
{
lean_object* v_head_3024_; lean_object* v_tail_3025_; uint8_t v___x_3026_; 
v_head_3024_ = lean_ctor_get(v_x_3023_, 0);
v_tail_3025_ = lean_ctor_get(v_x_3023_, 1);
v___x_3026_ = lean_nat_dec_le(v_x_3022_, v_head_3024_);
if (v___x_3026_ == 0)
{
v_x_3023_ = v_tail_3025_;
goto _start;
}
else
{
v_x_3022_ = v_head_3024_;
v_x_3023_ = v_tail_3025_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1___boxed(lean_object* v_x_3029_, lean_object* v_x_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(v_x_3029_, v_x_3030_);
lean_dec(v_x_3030_);
lean_dec(v_x_3029_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(lean_object* v_x_3032_){
_start:
{
if (lean_obj_tag(v_x_3032_) == 0)
{
lean_object* v___x_3033_; 
v___x_3033_ = lean_box(0);
return v___x_3033_;
}
else
{
lean_object* v_head_3034_; lean_object* v_tail_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; 
v_head_3034_ = lean_ctor_get(v_x_3032_, 0);
v_tail_3035_ = lean_ctor_get(v_x_3032_, 1);
v___x_3036_ = lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(v_head_3034_, v_tail_3035_);
v___x_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3037_, 0, v___x_3036_);
return v___x_3037_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1___boxed(lean_object* v_x_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(v_x_3038_);
lean_dec(v_x_3038_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(lean_object* v_a_3040_, lean_object* v_a_3041_){
_start:
{
if (lean_obj_tag(v_a_3040_) == 0)
{
lean_object* v___x_3042_; 
v___x_3042_ = l_List_reverse___redArg(v_a_3041_);
return v___x_3042_;
}
else
{
lean_object* v_head_3043_; lean_object* v_tail_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3054_; 
v_head_3043_ = lean_ctor_get(v_a_3040_, 0);
v_tail_3044_ = lean_ctor_get(v_a_3040_, 1);
v_isSharedCheck_3054_ = !lean_is_exclusive(v_a_3040_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3046_ = v_a_3040_;
v_isShared_3047_ = v_isSharedCheck_3054_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_tail_3044_);
lean_inc(v_head_3043_);
lean_dec(v_a_3040_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3054_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v_fst_3048_; lean_object* v___x_3049_; lean_object* v___x_3051_; 
v_fst_3048_ = lean_ctor_get(v_head_3043_, 0);
lean_inc(v_fst_3048_);
lean_dec(v_head_3043_);
v___x_3049_ = l_List_lengthTR___redArg(v_fst_3048_);
lean_dec(v_fst_3048_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set(v___x_3046_, 1, v_a_3041_);
lean_ctor_set(v___x_3046_, 0, v___x_3049_);
v___x_3051_ = v___x_3046_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v___x_3049_);
lean_ctor_set(v_reuseFailAlloc_3053_, 1, v_a_3041_);
v___x_3051_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
v_a_3040_ = v_tail_3044_;
v_a_3041_ = v___x_3051_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1(void){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; 
v___x_3056_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__0));
v___x_3057_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3056_);
return v___x_3057_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3(void){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__2));
v___x_3060_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3059_);
return v___x_3060_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5(void){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3062_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__4));
v___x_3063_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rawCodeShape(lean_object* v_t_3064_){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v_atat_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v_lt_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v_gt_3074_; lean_object* v___x_3085_; 
v___x_3065_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1, &lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__1);
lean_inc_n(v_t_3064_, 2);
v___x_3066_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_3065_, v_t_3064_);
v___x_3067_ = lean_box(0);
v_atat_3068_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(v___x_3066_, v___x_3067_);
v___x_3069_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3, &lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__3);
v___x_3070_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_3069_, v_t_3064_);
v_lt_3071_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(v___x_3070_, v___x_3067_);
v___x_3072_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5, &lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_rawCodeShape___closed__5);
v___x_3073_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_3072_, v_t_3064_);
v_gt_3074_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_rawCodeShape_spec__0(v___x_3073_, v___x_3067_);
v___x_3085_ = lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(v_atat_3068_);
if (lean_obj_tag(v___x_3085_) == 1)
{
lean_object* v_val_3086_; lean_object* v___x_3087_; 
v_val_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_val_3086_);
lean_dec_ref_known(v___x_3085_, 1);
v___x_3087_ = lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(v_atat_3068_);
lean_dec(v_atat_3068_);
if (lean_obj_tag(v___x_3087_) == 1)
{
lean_object* v_val_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; uint8_t v___x_3091_; 
v_val_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_val_3088_);
lean_dec_ref_known(v___x_3087_, 1);
v___x_3089_ = lean_unsigned_to_nat(2u);
v___x_3090_ = lean_nat_add(v_val_3088_, v___x_3089_);
lean_dec(v_val_3088_);
v___x_3091_ = lean_nat_dec_le(v___x_3090_, v_val_3086_);
lean_dec(v_val_3086_);
lean_dec(v___x_3090_);
if (v___x_3091_ == 0)
{
goto v___jp_3075_;
}
else
{
lean_dec(v_gt_3074_);
lean_dec(v_lt_3071_);
return v___x_3091_;
}
}
else
{
lean_dec(v___x_3087_);
lean_dec(v_val_3086_);
goto v___jp_3075_;
}
}
else
{
lean_dec(v___x_3085_);
lean_dec(v_atat_3068_);
goto v___jp_3075_;
}
v___jp_3075_:
{
lean_object* v___x_3076_; 
v___x_3076_ = lp_lean_x2dftml_List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1(v_gt_3074_);
lean_dec(v_gt_3074_);
if (lean_obj_tag(v___x_3076_) == 1)
{
lean_object* v_val_3077_; lean_object* v___x_3078_; 
v_val_3077_ = lean_ctor_get(v___x_3076_, 0);
lean_inc(v_val_3077_);
lean_dec_ref_known(v___x_3076_, 1);
v___x_3078_ = lp_lean_x2dftml_List_min_x3f___at___00LeanFtml_rawCodeShape_spec__2(v_lt_3071_);
lean_dec(v_lt_3071_);
if (lean_obj_tag(v___x_3078_) == 1)
{
lean_object* v_val_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; uint8_t v___x_3082_; 
v_val_3079_ = lean_ctor_get(v___x_3078_, 0);
lean_inc(v_val_3079_);
lean_dec_ref_known(v___x_3078_, 1);
v___x_3080_ = lean_unsigned_to_nat(2u);
v___x_3081_ = lean_nat_add(v_val_3079_, v___x_3080_);
lean_dec(v_val_3079_);
v___x_3082_ = lean_nat_dec_le(v___x_3081_, v_val_3077_);
lean_dec(v_val_3077_);
lean_dec(v___x_3081_);
return v___x_3082_;
}
else
{
uint8_t v___x_3083_; 
lean_dec(v___x_3078_);
lean_dec(v_val_3077_);
v___x_3083_ = 0;
return v___x_3083_;
}
}
else
{
uint8_t v___x_3084_; 
lean_dec(v___x_3076_);
lean_dec(v_lt_3071_);
v___x_3084_ = 0;
return v___x_3084_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawCodeShape___boxed(lean_object* v_t_3092_){
_start:
{
uint8_t v_res_3093_; lean_object* v_r_3094_; 
v_res_3093_ = lp_lean_x2dftml_LeanFtml_rawCodeShape(v_t_3092_);
v_r_3094_ = lean_box(v_res_3093_);
return v_r_3094_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabTitle___closed__1(void){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3096_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabTitle___closed__0));
v___x_3097_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabTitle(lean_object* v_t0_3098_){
_start:
{
lean_object* v_t_3099_; uint8_t v___x_3100_; 
v_t_3099_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_t0_3098_);
v___x_3100_ = l_List_isEmpty___redArg(v_t_3099_);
if (v___x_3100_ == 0)
{
uint8_t v___x_3101_; 
lean_inc(v_t_3099_);
v___x_3101_ = lp_lean_x2dftml_LeanFtml_rawCodeShape(v_t_3099_);
if (v___x_3101_ == 0)
{
lean_object* v___x_3102_; uint8_t v___x_3103_; 
v___x_3102_ = lean_unsigned_to_nat(255u);
v___x_3103_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_3102_, v_t_3099_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; 
v___x_3104_ = lp_lean_x2dftml_LeanFtml_collapseWsBytes(v_t_3099_);
return v___x_3104_;
}
else
{
lean_object* v___x_3105_; 
lean_dec(v_t_3099_);
v___x_3105_ = lean_box(0);
return v___x_3105_;
}
}
else
{
lean_object* v___x_3106_; 
lean_dec(v_t_3099_);
v___x_3106_ = lean_box(0);
return v___x_3106_;
}
}
else
{
lean_object* v___x_3107_; 
lean_dec(v_t_3099_);
v___x_3107_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabTitle___closed__1, &lp_lean_x2dftml_LeanFtml_tabTitle___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabTitle___closed__1);
return v___x_3107_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabTitle___boxed(lean_object* v_t0_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = lp_lean_x2dftml_LeanFtml_tabTitle(v_t0_3108_);
lean_dec(v_t0_3108_);
return v_res_3109_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_singlePairShape(lean_object* v_t_3113_){
_start:
{
lean_object* v___x_3114_; lean_object* v_key_3115_; uint8_t v___x_3116_; 
v___x_3114_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_t_3113_);
v_key_3115_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__0(v_t_3113_, v_t_3113_, v___x_3114_);
v___x_3116_ = l_List_isEmpty___redArg(v_key_3115_);
if (v___x_3116_ == 0)
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3117_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1, &lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabPairAt___closed__1);
v___x_3118_ = l_List_lengthTR___redArg(v_key_3115_);
lean_dec(v_key_3115_);
v___x_3119_ = l_List_drop___redArg(v___x_3118_, v_t_3113_);
lean_dec(v_t_3113_);
v___x_3120_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_3117_, v___x_3119_);
if (lean_obj_tag(v___x_3120_) == 0)
{
return v___x_3116_;
}
else
{
lean_object* v_val_3121_; lean_object* v_val_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; uint8_t v___x_3126_; 
v_val_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc_n(v_val_3121_, 2);
lean_dec_ref_known(v___x_3120_, 1);
v_val_3122_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabPairAt_spec__1(v___x_3116_, v_val_3121_, v_val_3121_, v___x_3114_);
v___x_3123_ = l_List_lengthTR___redArg(v_val_3122_);
lean_dec(v_val_3122_);
v___x_3124_ = l_List_drop___redArg(v___x_3123_, v_val_3121_);
lean_dec(v_val_3121_);
v___x_3125_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_singlePairShape___closed__0));
v___x_3126_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_3124_, v___x_3125_);
lean_dec(v___x_3124_);
return v___x_3126_;
}
}
else
{
uint8_t v___x_3127_; 
lean_dec(v_key_3115_);
lean_dec(v_t_3113_);
v___x_3127_ = 0;
return v___x_3127_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_singlePairShape___boxed(lean_object* v_t_3128_){
_start:
{
uint8_t v_res_3129_; lean_object* v_r_3130_; 
v_res_3129_ = lp_lean_x2dftml_LeanFtml_singlePairShape(v_t_3128_);
v_r_3130_ = lean_box(v_res_3129_);
return v_r_3130_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(lean_object* v_l_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_){
_start:
{
if (lean_obj_tag(v_a_3132_) == 0)
{
lean_dec_ref(v_a_3133_);
lean_inc(v_l_3131_);
return v_l_3131_;
}
else
{
lean_object* v_head_3134_; lean_object* v_tail_3135_; lean_object* v___x_3136_; uint8_t v___x_3137_; 
v_head_3134_ = lean_ctor_get(v_a_3132_, 0);
lean_inc(v_head_3134_);
v_tail_3135_ = lean_ctor_get(v_a_3132_, 1);
lean_inc(v_tail_3135_);
lean_dec_ref_known(v_a_3132_, 2);
v___x_3136_ = lean_unsigned_to_nat(10u);
v___x_3137_ = lean_nat_dec_eq(v_head_3134_, v___x_3136_);
if (v___x_3137_ == 0)
{
lean_object* v___x_3138_; 
lean_dec(v_tail_3135_);
lean_dec(v_head_3134_);
v___x_3138_ = lean_array_to_list(v_a_3133_);
return v___x_3138_;
}
else
{
lean_object* v___x_3139_; 
v___x_3139_ = lean_array_push(v_a_3133_, v_head_3134_);
v_a_3132_ = v_tail_3135_;
v_a_3133_ = v___x_3139_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0___boxed(lean_object* v_l_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_){
_start:
{
lean_object* v_res_3144_; 
v_res_3144_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v_l_3141_, v_a_3142_, v_a_3143_);
lean_dec(v_l_3141_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__1(lean_object* v_fst_3145_, lean_object* v_fst_3146_, lean_object* v_x_3147_){
_start:
{
if (lean_obj_tag(v_x_3147_) == 0)
{
lean_object* v___x_3148_; 
lean_dec(v_fst_3146_);
lean_dec(v_fst_3145_);
v___x_3148_ = lean_box(0);
return v___x_3148_;
}
else
{
lean_object* v_head_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3171_; 
v_head_3149_ = lean_ctor_get(v_x_3147_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v_x_3147_);
if (v_isSharedCheck_3171_ == 0)
{
lean_object* v_unused_3172_; 
v_unused_3172_ = lean_ctor_get(v_x_3147_, 1);
lean_dec(v_unused_3172_);
v___x_3151_ = v_x_3147_;
v_isShared_3152_ = v_isSharedCheck_3171_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_head_3149_);
lean_dec(v_x_3147_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3171_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v_fst_3153_; lean_object* v_snd_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3170_; 
v_fst_3153_ = lean_ctor_get(v_head_3149_, 0);
v_snd_3154_ = lean_ctor_get(v_head_3149_, 1);
v_isSharedCheck_3170_ = !lean_is_exclusive(v_head_3149_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3156_ = v_head_3149_;
v_isShared_3157_ = v_isSharedCheck_3170_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_snd_3154_);
lean_inc(v_fst_3153_);
lean_dec(v_head_3149_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3170_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3163_; 
v___x_3158_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ciAt___closed__0));
lean_inc(v_snd_3154_);
v___x_3159_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v_snd_3154_, v_snd_3154_, v___x_3158_);
v___x_3160_ = l_List_lengthTR___redArg(v___x_3159_);
lean_dec(v___x_3159_);
v___x_3161_ = l_List_drop___redArg(v___x_3160_, v_snd_3154_);
lean_dec(v_snd_3154_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 1, v___x_3161_);
v___x_3163_ = v___x_3156_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_fst_3153_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v___x_3161_);
v___x_3163_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
lean_object* v___x_3165_; 
if (v_isShared_3152_ == 0)
{
lean_ctor_set_tag(v___x_3151_, 0);
lean_ctor_set(v___x_3151_, 1, v___x_3163_);
lean_ctor_set(v___x_3151_, 0, v_fst_3145_);
v___x_3165_ = v___x_3151_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_fst_3145_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v___x_3163_);
v___x_3165_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3166_, 0, v_fst_3146_);
lean_ctor_set(v___x_3166_, 1, v___x_3165_);
v___x_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3166_);
return v___x_3167_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__2(lean_object* v_fst_3173_, lean_object* v_x_3174_){
_start:
{
if (lean_obj_tag(v_x_3174_) == 0)
{
lean_object* v___x_3175_; 
lean_dec(v_fst_3173_);
v___x_3175_ = lean_box(0);
return v___x_3175_;
}
else
{
lean_object* v_head_3176_; lean_object* v_tail_3177_; lean_object* v_fst_3178_; lean_object* v_snd_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v_head_3176_ = lean_ctor_get(v_x_3174_, 0);
lean_inc(v_head_3176_);
v_tail_3177_ = lean_ctor_get(v_x_3174_, 1);
lean_inc(v_tail_3177_);
lean_dec_ref_known(v_x_3174_, 2);
v_fst_3178_ = lean_ctor_get(v_head_3176_, 0);
lean_inc(v_fst_3178_);
v_snd_3179_ = lean_ctor_get(v_head_3176_, 1);
lean_inc(v_snd_3179_);
lean_dec(v_head_3176_);
v___x_3180_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1, &lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_attrGroupCands___closed__1);
v___x_3181_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_3180_, v_snd_3179_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_dec(v_fst_3178_);
v_x_3174_ = v_tail_3177_;
goto _start;
}
else
{
lean_object* v_val_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
v_val_3183_ = lean_ctor_get(v___x_3181_, 0);
lean_inc(v_val_3183_);
lean_dec_ref_known(v___x_3181_, 1);
v___x_3184_ = lean_obj_once(&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1, &lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1_once, _init_lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_tabUnitCands_spec__1___closed__1);
v___x_3185_ = lp_lean_x2dftml_LeanFtml_occurrencesCI(v___x_3184_, v_val_3183_);
lean_inc(v_fst_3173_);
v___x_3186_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__1(v_fst_3178_, v_fst_3173_, v___x_3185_);
if (lean_obj_tag(v___x_3186_) == 0)
{
v_x_3174_ = v_tail_3177_;
goto _start;
}
else
{
lean_dec(v_tail_3177_);
lean_dec(v_fst_3173_);
return v___x_3186_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__3(lean_object* v_x_3188_){
_start:
{
if (lean_obj_tag(v_x_3188_) == 0)
{
lean_object* v___x_3189_; 
v___x_3189_ = lean_box(0);
return v___x_3189_;
}
else
{
lean_object* v_head_3190_; lean_object* v_tail_3191_; lean_object* v_fst_3192_; lean_object* v_snd_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v_head_3190_ = lean_ctor_get(v_x_3188_, 0);
lean_inc(v_head_3190_);
v_tail_3191_ = lean_ctor_get(v_x_3188_, 1);
lean_inc(v_tail_3191_);
lean_dec_ref_known(v_x_3188_, 2);
v_fst_3192_ = lean_ctor_get(v_head_3190_, 0);
lean_inc(v_fst_3192_);
v_snd_3193_ = lean_ctor_get(v_head_3190_, 1);
lean_inc(v_snd_3193_);
lean_dec(v_head_3190_);
v___x_3194_ = lp_lean_x2dftml_LeanFtml_tabG2Cands(v_snd_3193_);
v___x_3195_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__2(v_fst_3192_, v___x_3194_);
if (lean_obj_tag(v___x_3195_) == 0)
{
v_x_3188_ = v_tail_3191_;
goto _start;
}
else
{
lean_dec(v_tail_3191_);
return v___x_3195_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabMatchAt(lean_object* v_s_3197_){
_start:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3198_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1, &lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabUnitCands___closed__1);
v___x_3199_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_3198_, v_s_3197_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v___x_3200_; 
v___x_3200_ = lean_box(0);
return v___x_3200_;
}
else
{
lean_object* v_val_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v_val_3201_ = lean_ctor_get(v___x_3199_, 0);
lean_inc(v_val_3201_);
lean_dec_ref_known(v___x_3199_, 1);
v___x_3202_ = lp_lean_x2dftml_LeanFtml_tabG1Cands(v_val_3201_);
v___x_3203_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_tabMatchAt_spec__3(v___x_3202_);
return v___x_3203_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = ((lean_object*)(lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__0));
v___x_3206_ = l_String_toListImpl(v___x_3205_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0(lean_object* v_x_3207_){
_start:
{
if (lean_obj_tag(v_x_3207_) == 0)
{
lean_object* v___x_3208_; 
v___x_3208_ = lean_box(0);
return v___x_3208_;
}
else
{
lean_object* v_head_3209_; lean_object* v_tail_3210_; lean_object* v_fst_3211_; lean_object* v___x_3212_; uint8_t v___x_3213_; 
v_head_3209_ = lean_ctor_get(v_x_3207_, 0);
v_tail_3210_ = lean_ctor_get(v_x_3207_, 1);
v_fst_3211_ = lean_ctor_get(v_head_3209_, 0);
v___x_3212_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1);
v___x_3213_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_3211_, v___x_3212_);
if (v___x_3213_ == 0)
{
v_x_3207_ = v_tail_3210_;
goto _start;
}
else
{
lean_object* v___x_3215_; 
lean_inc(v_head_3209_);
v___x_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3215_, 0, v_head_3209_);
return v___x_3215_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___boxed(lean_object* v_x_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0(v_x_3216_);
lean_dec(v_x_3216_);
return v_res_3217_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__2(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3220_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__1));
v___x_3221_ = l_String_toListImpl(v___x_3220_);
return v___x_3221_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__3(void){
_start:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__2, &lp_lean_x2dftml_LeanFtml_handleTab___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__2);
v___x_3223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3222_);
return v___x_3223_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__4(void){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3224_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__3, &lp_lean_x2dftml_LeanFtml_handleTab___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__3);
v___x_3225_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__3, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__3);
v___x_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3225_);
lean_ctor_set(v___x_3226_, 1, v___x_3224_);
return v___x_3226_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__6(void){
_start:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; 
v___x_3228_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__5));
v___x_3229_ = l_String_toListImpl(v___x_3228_);
return v___x_3229_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__8(void){
_start:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; 
v___x_3231_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__7));
v___x_3232_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3231_);
return v___x_3232_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_handleTab(lean_object* v_g1_3233_, lean_object* v_g2_3234_, lean_object* v_body_3235_, lean_object* v_elId_3236_, lean_object* v_tabId_3237_, lean_object* v_endTabPh_3238_, lean_object* v_toks_3239_){
_start:
{
lean_object* v___y_3241_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3296_; lean_object* v___y_3297_; uint8_t v___y_3302_; lean_object* v___y_3303_; lean_object* v___y_3304_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3321_; 
if (lean_obj_tag(v_g1_3233_) == 0)
{
lean_object* v___x_3324_; 
v___x_3324_ = lean_box(0);
v___y_3321_ = v___x_3324_;
goto v___jp_3320_;
}
else
{
lean_object* v_val_3325_; 
v_val_3325_ = lean_ctor_get(v_g1_3233_, 0);
lean_inc(v_val_3325_);
v___y_3321_ = v_val_3325_;
goto v___jp_3320_;
}
v___jp_3240_:
{
lean_object* v_entry_3242_; lean_object* v___x_3243_; lean_object* v_tabStartPh_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v_t1_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v_entry_3242_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_entry_3242_, 0, v___y_3241_);
v___x_3243_ = l_List_lengthTR___redArg(v_toks_3239_);
v_tabStartPh_3244_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_3243_);
v___x_3245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__0));
v___x_3246_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__4, &lp_lean_x2dftml_LeanFtml_handleTab___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__4);
v___x_3247_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__6, &lp_lean_x2dftml_LeanFtml_handleTab___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__6);
v___x_3248_ = lean_nat_to_int(v_elId_3236_);
v___x_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3248_);
v___x_3250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3247_);
lean_ctor_set(v___x_3250_, 1, v___x_3249_);
v___x_3251_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1);
v___x_3252_ = lean_nat_to_int(v_tabId_3237_);
v___x_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
v___x_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3251_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
v___x_3255_ = lean_box(0);
v___x_3256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3254_);
lean_ctor_set(v___x_3256_, 1, v___x_3255_);
v___x_3257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3250_);
lean_ctor_set(v___x_3257_, 1, v___x_3256_);
v___x_3258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3246_);
lean_ctor_set(v___x_3258_, 1, v___x_3257_);
v___x_3259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3245_);
lean_ctor_set(v___x_3259_, 1, v___x_3258_);
v___x_3260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3259_);
lean_ctor_set(v___x_3260_, 1, v___x_3255_);
v_t1_3261_ = l_List_appendTR___redArg(v_toks_3239_, v___x_3260_);
v___x_3262_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__4));
v___x_3263_ = l_List_appendTR___redArg(v_tabStartPh_3244_, v___x_3262_);
v___x_3264_ = l_List_appendTR___redArg(v___x_3263_, v_body_3235_);
v___x_3265_ = l_List_appendTR___redArg(v___x_3264_, v___x_3262_);
v___x_3266_ = l_List_appendTR___redArg(v___x_3265_, v_endTabPh_3238_);
v___x_3267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3266_);
lean_ctor_set(v___x_3267_, 1, v_t1_3261_);
v___x_3268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3268_, 0, v_entry_3242_);
lean_ctor_set(v___x_3268_, 1, v___x_3267_);
return v___x_3268_;
}
v___jp_3269_:
{
lean_object* v_title_3273_; lean_object* v_args2_3274_; lean_object* v___x_3275_; lean_object* v_pairs_3276_; lean_object* v___x_3277_; 
v_title_3273_ = lp_lean_x2dftml_LeanFtml_tabTitle(v___y_3272_);
lean_dec(v___y_3272_);
v_args2_3274_ = lp_lean_x2dftml_LeanFtml_omSetB(v___y_3271_, v___y_3270_, v_title_3273_);
v___x_3275_ = lean_box(0);
v_pairs_3276_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v_args2_3274_, v___x_3275_);
v___x_3277_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0(v_pairs_3276_);
if (lean_obj_tag(v___x_3277_) == 0)
{
lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3278_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1);
lean_inc(v_tabId_3237_);
v___x_3279_ = lean_nat_to_int(v_tabId_3237_);
v___x_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3279_);
v___x_3281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3281_, 0, v___x_3278_);
lean_ctor_set(v___x_3281_, 1, v___x_3280_);
v___x_3282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3281_);
lean_ctor_set(v___x_3282_, 1, v___x_3275_);
v___x_3283_ = l_List_appendTR___redArg(v_pairs_3276_, v___x_3282_);
v___y_3241_ = v___x_3283_;
goto v___jp_3240_;
}
else
{
lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3293_; 
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3277_);
if (v_isSharedCheck_3293_ == 0)
{
lean_object* v_unused_3294_; 
v_unused_3294_ = lean_ctor_get(v___x_3277_, 0);
lean_dec(v_unused_3294_);
v___x_3285_ = v___x_3277_;
v_isShared_3286_ = v_isSharedCheck_3293_;
goto v_resetjp_3284_;
}
else
{
lean_dec(v___x_3277_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3293_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3290_; 
v___x_3287_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_handleTab_spec__0___closed__1);
lean_inc(v_tabId_3237_);
v___x_3288_ = lean_nat_to_int(v_tabId_3237_);
if (v_isShared_3286_ == 0)
{
lean_ctor_set(v___x_3285_, 0, v___x_3288_);
v___x_3290_ = v___x_3285_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3288_);
v___x_3290_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
lean_object* v___x_3291_; 
v___x_3291_ = lp_lean_x2dftml_LeanFtml_omSet(v_pairs_3276_, v___x_3287_, v___x_3290_);
v___y_3241_ = v___x_3291_;
goto v___jp_3240_;
}
}
}
}
v___jp_3295_:
{
lean_object* v___x_3298_; 
v___x_3298_ = lp_lean_x2dftml_LeanFtml_lookupB(v___y_3297_, v___y_3296_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v___x_3299_; 
v___x_3299_ = lean_box(0);
v___y_3270_ = v___y_3296_;
v___y_3271_ = v___y_3297_;
v___y_3272_ = v___x_3299_;
goto v___jp_3269_;
}
else
{
lean_object* v_val_3300_; 
v_val_3300_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_val_3300_);
lean_dec_ref_known(v___x_3298_, 1);
v___y_3270_ = v___y_3296_;
v___y_3271_ = v___y_3297_;
v___y_3272_ = v_val_3300_;
goto v___jp_3269_;
}
}
v___jp_3301_:
{
lean_object* v_args0_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v_args0_3305_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_3304_);
lean_dec(v___y_3304_);
v___x_3306_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__8, &lp_lean_x2dftml_LeanFtml_handleTab___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__8);
v___x_3307_ = lp_lean_x2dftml_LeanFtml_lookupB(v_args0_3305_, v___x_3306_);
if (lean_obj_tag(v___x_3307_) == 0)
{
if (v___y_3302_ == 0)
{
lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___x_3308_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_3303_);
lean_dec(v___y_3303_);
v___x_3309_ = lp_lean_x2dftml_LeanFtml_omSetB(v_args0_3305_, v___x_3306_, v___x_3308_);
v___y_3296_ = v___x_3306_;
v___y_3297_ = v___x_3309_;
goto v___jp_3295_;
}
else
{
lean_dec(v___y_3303_);
v___y_3296_ = v___x_3306_;
v___y_3297_ = v_args0_3305_;
goto v___jp_3295_;
}
}
else
{
lean_dec_ref_known(v___x_3307_, 1);
lean_dec(v___y_3303_);
v___y_3296_ = v___x_3306_;
v___y_3297_ = v_args0_3305_;
goto v___jp_3295_;
}
}
v___jp_3310_:
{
lean_object* v_argString0_3313_; 
v_argString0_3313_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_3312_);
if (lean_obj_tag(v_g1_3233_) == 0)
{
uint8_t v___x_3314_; 
v___x_3314_ = 0;
v___y_3302_ = v___x_3314_;
v___y_3303_ = v___y_3311_;
v___y_3304_ = v_argString0_3313_;
goto v___jp_3301_;
}
else
{
lean_object* v___x_3315_; uint8_t v___x_3316_; 
lean_dec_ref_known(v_g1_3233_, 1);
v___x_3315_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_3311_);
v___x_3316_ = lp_lean_x2dftml_LeanFtml_singlePairShape(v___x_3315_);
if (v___x_3316_ == 0)
{
v___y_3302_ = v___x_3316_;
v___y_3303_ = v___y_3311_;
v___y_3304_ = v_argString0_3313_;
goto v___jp_3301_;
}
else
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3317_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isolateId___closed__0));
v___x_3318_ = l_List_appendTR___redArg(v_argString0_3313_, v___x_3317_);
lean_inc(v___y_3311_);
v___x_3319_ = l_List_appendTR___redArg(v___x_3318_, v___y_3311_);
v___y_3302_ = v___x_3316_;
v___y_3303_ = v___y_3311_;
v___y_3304_ = v___x_3319_;
goto v___jp_3301_;
}
}
}
v___jp_3320_:
{
if (lean_obj_tag(v_g2_3234_) == 0)
{
lean_object* v___x_3322_; 
v___x_3322_ = lean_box(0);
v___y_3311_ = v___y_3321_;
v___y_3312_ = v___x_3322_;
goto v___jp_3310_;
}
else
{
lean_object* v_val_3323_; 
v_val_3323_ = lean_ctor_get(v_g2_3234_, 0);
v___y_3311_ = v___y_3321_;
v___y_3312_ = v_val_3323_;
goto v___jp_3310_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_handleTab___boxed(lean_object* v_g1_3326_, lean_object* v_g2_3327_, lean_object* v_body_3328_, lean_object* v_elId_3329_, lean_object* v_tabId_3330_, lean_object* v_endTabPh_3331_, lean_object* v_toks_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = lp_lean_x2dftml_LeanFtml_handleTab(v_g1_3326_, v_g2_3327_, v_body_3328_, v_elId_3329_, v_tabId_3330_, v_endTabPh_3331_, v_toks_3332_);
lean_dec(v_g2_3327_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabInnerScan(lean_object* v_src_3334_, lean_object* v_elId_3335_, lean_object* v_tabCounter_3336_, lean_object* v_endTabPh_3337_, lean_object* v_toks_3338_, lean_object* v_x_3339_){
_start:
{
lean_object* v_zero_3340_; uint8_t v_isZero_3341_; 
v_zero_3340_ = lean_unsigned_to_nat(0u);
v_isZero_3341_ = lean_nat_dec_eq(v_x_3339_, v_zero_3340_);
if (v_isZero_3341_ == 1)
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
lean_dec(v_endTabPh_3337_);
lean_dec(v_tabCounter_3336_);
lean_dec(v_elId_3335_);
v___x_3342_ = lean_box(0);
v___x_3343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
lean_ctor_set(v___x_3343_, 1, v_toks_3338_);
v___x_3344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3344_, 0, v_src_3334_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
return v___x_3344_;
}
else
{
if (lean_obj_tag(v_src_3334_) == 0)
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
lean_dec(v_endTabPh_3337_);
lean_dec(v_tabCounter_3336_);
lean_dec(v_elId_3335_);
v___x_3345_ = lean_box(0);
v___x_3346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3345_);
lean_ctor_set(v___x_3346_, 1, v_toks_3338_);
v___x_3347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3347_, 0, v_src_3334_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
return v___x_3347_;
}
else
{
lean_object* v_head_3348_; lean_object* v_tail_3349_; lean_object* v_one_3350_; lean_object* v_n_3351_; lean_object* v___x_3352_; 
v_head_3348_ = lean_ctor_get(v_src_3334_, 0);
lean_inc(v_head_3348_);
v_tail_3349_ = lean_ctor_get(v_src_3334_, 1);
lean_inc(v_tail_3349_);
v_one_3350_ = lean_unsigned_to_nat(1u);
v_n_3351_ = lean_nat_sub(v_x_3339_, v_one_3350_);
v___x_3352_ = lp_lean_x2dftml_LeanFtml_tabMatchAt(v_src_3334_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v___x_3353_; lean_object* v_fst_3354_; lean_object* v_snd_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3363_; 
v___x_3353_ = lp_lean_x2dftml_LeanFtml_tabInnerScan(v_tail_3349_, v_elId_3335_, v_tabCounter_3336_, v_endTabPh_3337_, v_toks_3338_, v_n_3351_);
lean_dec(v_n_3351_);
v_fst_3354_ = lean_ctor_get(v___x_3353_, 0);
v_snd_3355_ = lean_ctor_get(v___x_3353_, 1);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3357_ = v___x_3353_;
v_isShared_3358_ = v_isSharedCheck_3363_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_snd_3355_);
lean_inc(v_fst_3354_);
lean_dec(v___x_3353_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3363_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___x_3359_; lean_object* v___x_3361_; 
v___x_3359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3359_, 0, v_head_3348_);
lean_ctor_set(v___x_3359_, 1, v_fst_3354_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 0, v___x_3359_);
v___x_3361_ = v___x_3357_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v___x_3359_);
lean_ctor_set(v_reuseFailAlloc_3362_, 1, v_snd_3355_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
else
{
lean_object* v_val_3364_; lean_object* v_snd_3365_; lean_object* v_snd_3366_; lean_object* v_fst_3367_; lean_object* v_fst_3368_; lean_object* v_fst_3369_; lean_object* v_snd_3370_; lean_object* v___x_3371_; lean_object* v_snd_3372_; lean_object* v_fst_3373_; lean_object* v_fst_3374_; lean_object* v_snd_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3403_; 
lean_dec(v_tail_3349_);
lean_dec(v_head_3348_);
v_val_3364_ = lean_ctor_get(v___x_3352_, 0);
lean_inc(v_val_3364_);
lean_dec_ref_known(v___x_3352_, 1);
v_snd_3365_ = lean_ctor_get(v_val_3364_, 1);
lean_inc(v_snd_3365_);
v_snd_3366_ = lean_ctor_get(v_snd_3365_, 1);
lean_inc(v_snd_3366_);
v_fst_3367_ = lean_ctor_get(v_val_3364_, 0);
lean_inc(v_fst_3367_);
lean_dec(v_val_3364_);
v_fst_3368_ = lean_ctor_get(v_snd_3365_, 0);
lean_inc(v_fst_3368_);
lean_dec(v_snd_3365_);
v_fst_3369_ = lean_ctor_get(v_snd_3366_, 0);
lean_inc(v_fst_3369_);
v_snd_3370_ = lean_ctor_get(v_snd_3366_, 1);
lean_inc(v_snd_3370_);
lean_dec(v_snd_3366_);
lean_inc(v_endTabPh_3337_);
lean_inc(v_tabCounter_3336_);
lean_inc(v_elId_3335_);
v___x_3371_ = lp_lean_x2dftml_LeanFtml_handleTab(v_fst_3367_, v_fst_3368_, v_fst_3369_, v_elId_3335_, v_tabCounter_3336_, v_endTabPh_3337_, v_toks_3338_);
lean_dec(v_fst_3368_);
v_snd_3372_ = lean_ctor_get(v___x_3371_, 1);
lean_inc(v_snd_3372_);
v_fst_3373_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_fst_3373_);
lean_dec_ref(v___x_3371_);
v_fst_3374_ = lean_ctor_get(v_snd_3372_, 0);
v_snd_3375_ = lean_ctor_get(v_snd_3372_, 1);
v_isSharedCheck_3403_ = !lean_is_exclusive(v_snd_3372_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3377_ = v_snd_3372_;
v_isShared_3378_ = v_isSharedCheck_3403_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_snd_3375_);
lean_inc(v_fst_3374_);
lean_dec(v_snd_3372_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3403_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v_snd_3381_; lean_object* v_fst_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3402_; 
v___x_3379_ = lean_nat_add(v_tabCounter_3336_, v_one_3350_);
lean_dec(v_tabCounter_3336_);
v___x_3380_ = lp_lean_x2dftml_LeanFtml_tabInnerScan(v_snd_3370_, v_elId_3335_, v___x_3379_, v_endTabPh_3337_, v_snd_3375_, v_n_3351_);
lean_dec(v_n_3351_);
v_snd_3381_ = lean_ctor_get(v___x_3380_, 1);
v_fst_3382_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3384_ = v___x_3380_;
v_isShared_3385_ = v_isSharedCheck_3402_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_snd_3381_);
lean_inc(v_fst_3382_);
lean_dec(v___x_3380_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3402_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v_fst_3386_; lean_object* v_snd_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3401_; 
v_fst_3386_ = lean_ctor_get(v_snd_3381_, 0);
v_snd_3387_ = lean_ctor_get(v_snd_3381_, 1);
v_isSharedCheck_3401_ = !lean_is_exclusive(v_snd_3381_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3389_ = v_snd_3381_;
v_isShared_3390_ = v_isSharedCheck_3401_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_snd_3387_);
lean_inc(v_fst_3386_);
lean_dec(v_snd_3381_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3401_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3391_; lean_object* v___x_3393_; 
v___x_3391_ = l_List_appendTR___redArg(v_fst_3374_, v_fst_3382_);
if (v_isShared_3378_ == 0)
{
lean_ctor_set_tag(v___x_3377_, 1);
lean_ctor_set(v___x_3377_, 1, v_fst_3386_);
lean_ctor_set(v___x_3377_, 0, v_fst_3373_);
v___x_3393_ = v___x_3377_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_fst_3373_);
lean_ctor_set(v_reuseFailAlloc_3400_, 1, v_fst_3386_);
v___x_3393_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
lean_object* v___x_3395_; 
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 0, v___x_3393_);
v___x_3395_ = v___x_3389_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v___x_3393_);
lean_ctor_set(v_reuseFailAlloc_3399_, 1, v_snd_3387_);
v___x_3395_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
lean_object* v___x_3397_; 
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 1, v___x_3395_);
lean_ctor_set(v___x_3384_, 0, v___x_3391_);
v___x_3397_ = v___x_3384_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v___x_3391_);
lean_ctor_set(v_reuseFailAlloc_3398_, 1, v___x_3395_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabInnerScan___boxed(lean_object* v_src_3404_, lean_object* v_elId_3405_, lean_object* v_tabCounter_3406_, lean_object* v_endTabPh_3407_, lean_object* v_toks_3408_, lean_object* v_x_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = lp_lean_x2dftml_LeanFtml_tabInnerScan(v_src_3404_, v_elId_3405_, v_tabCounter_3406_, v_endTabPh_3407_, v_toks_3408_, v_x_3409_);
lean_dec(v_x_3409_);
return v_res_3410_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1(void){
_start:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3412_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__0));
v___x_3413_ = l_String_toListImpl(v___x_3412_);
return v___x_3413_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2(void){
_start:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; 
v___x_3414_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__1);
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
return v___x_3415_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3(void){
_start:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3416_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__2);
v___x_3417_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__3, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__3);
v___x_3418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
lean_ctor_set(v___x_3418_, 1, v___x_3416_);
return v___x_3418_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4(void){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3419_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabNameCands___closed__2));
v___x_3420_ = l_String_toListImpl(v___x_3419_);
return v___x_3420_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6(void){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3422_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__5));
v___x_3423_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3422_);
return v___x_3423_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7(void){
_start:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3424_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__2));
v___x_3425_ = l_String_toListImpl(v___x_3424_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewProcess(lean_object* v_g1_3426_, lean_object* v_region_3427_, lean_object* v_doc_3428_, lean_object* v_toks_3429_){
_start:
{
lean_object* v_page_3430_; lean_object* v_site_3431_; lean_object* v_inclusions_3432_; lean_object* v_inclusionsNotExist_3433_; lean_object* v_footnotes_3434_; lean_object* v_bibitems_3435_; lean_object* v_bibitemIds_3436_; lean_object* v_headlineId_3437_; lean_object* v_mathId_3438_; lean_object* v_equations_3439_; lean_object* v_collapsibleCount_3440_; lean_object* v_tabviewCounter_3441_; lean_object* v_scoredAnchors_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3547_; 
v_page_3430_ = lean_ctor_get(v_doc_3428_, 0);
v_site_3431_ = lean_ctor_get(v_doc_3428_, 1);
v_inclusions_3432_ = lean_ctor_get(v_doc_3428_, 2);
v_inclusionsNotExist_3433_ = lean_ctor_get(v_doc_3428_, 3);
v_footnotes_3434_ = lean_ctor_get(v_doc_3428_, 4);
v_bibitems_3435_ = lean_ctor_get(v_doc_3428_, 5);
v_bibitemIds_3436_ = lean_ctor_get(v_doc_3428_, 6);
v_headlineId_3437_ = lean_ctor_get(v_doc_3428_, 7);
v_mathId_3438_ = lean_ctor_get(v_doc_3428_, 8);
v_equations_3439_ = lean_ctor_get(v_doc_3428_, 9);
v_collapsibleCount_3440_ = lean_ctor_get(v_doc_3428_, 10);
v_tabviewCounter_3441_ = lean_ctor_get(v_doc_3428_, 11);
v_scoredAnchors_3442_ = lean_ctor_get(v_doc_3428_, 12);
v_isSharedCheck_3547_ = !lean_is_exclusive(v_doc_3428_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3444_ = v_doc_3428_;
v_isShared_3445_ = v_isSharedCheck_3547_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_scoredAnchors_3442_);
lean_inc(v_tabviewCounter_3441_);
lean_inc(v_collapsibleCount_3440_);
lean_inc(v_equations_3439_);
lean_inc(v_mathId_3438_);
lean_inc(v_headlineId_3437_);
lean_inc(v_bibitemIds_3436_);
lean_inc(v_bibitems_3435_);
lean_inc(v_footnotes_3434_);
lean_inc(v_inclusionsNotExist_3433_);
lean_inc(v_inclusions_3432_);
lean_inc(v_site_3431_);
lean_inc(v_page_3430_);
lean_dec(v_doc_3428_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3547_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3525_; lean_object* v___y_3529_; 
if (lean_obj_tag(v_g1_3426_) == 0)
{
lean_object* v___x_3545_; 
v___x_3545_ = lean_box(0);
v___y_3529_ = v___x_3545_;
goto v___jp_3528_;
}
else
{
lean_object* v_val_3546_; 
v_val_3546_ = lean_ctor_get(v_g1_3426_, 0);
lean_inc(v_val_3546_);
v___y_3529_ = v_val_3546_;
goto v___jp_3528_;
}
v___jp_3446_:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v_t1_3460_; lean_object* v___x_3461_; lean_object* v_endTabPh_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v_t2_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v_snd_3473_; lean_object* v_fst_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3523_; 
v___x_3449_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_handleTab___closed__0));
v___x_3450_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__4, &lp_lean_x2dftml_LeanFtml_handleTab___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__4);
v___x_3451_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_handleTab___closed__6, &lp_lean_x2dftml_LeanFtml_handleTab___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_handleTab___closed__6);
lean_inc_n(v_tabviewCounter_3441_, 2);
v___x_3452_ = lean_nat_to_int(v_tabviewCounter_3441_);
v___x_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3452_);
v___x_3454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3451_);
lean_ctor_set(v___x_3454_, 1, v___x_3453_);
v___x_3455_ = lean_box(0);
v___x_3456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3454_);
lean_ctor_set(v___x_3456_, 1, v___x_3455_);
lean_inc_ref_n(v___x_3456_, 2);
v___x_3457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3450_);
lean_ctor_set(v___x_3457_, 1, v___x_3456_);
v___x_3458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3449_);
lean_ctor_set(v___x_3458_, 1, v___x_3457_);
v___x_3459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3459_, 0, v___x_3458_);
lean_ctor_set(v___x_3459_, 1, v___x_3455_);
v_t1_3460_ = l_List_appendTR___redArg(v_toks_3429_, v___x_3459_);
v___x_3461_ = l_List_lengthTR___redArg(v_t1_3460_);
v_endTabPh_3462_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_3461_);
v___x_3463_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__3);
v___x_3464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3463_);
lean_ctor_set(v___x_3464_, 1, v___x_3456_);
v___x_3465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3465_, 0, v___x_3449_);
lean_ctor_set(v___x_3465_, 1, v___x_3464_);
v___x_3466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3465_);
lean_ctor_set(v___x_3466_, 1, v___x_3455_);
v_t2_3467_ = l_List_appendTR___redArg(v_t1_3460_, v___x_3466_);
v___x_3468_ = lean_unsigned_to_nat(0u);
v___x_3469_ = l_List_lengthTR___redArg(v_region_3427_);
v___x_3470_ = lean_unsigned_to_nat(1u);
v___x_3471_ = lean_nat_add(v___x_3469_, v___x_3470_);
lean_dec(v___x_3469_);
v___x_3472_ = lp_lean_x2dftml_LeanFtml_tabInnerScan(v_region_3427_, v_tabviewCounter_3441_, v___x_3468_, v_endTabPh_3462_, v_t2_3467_, v___x_3471_);
lean_dec(v___x_3471_);
v_snd_3473_ = lean_ctor_get(v___x_3472_, 1);
v_fst_3474_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3476_ = v___x_3472_;
v_isShared_3477_ = v_isSharedCheck_3523_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_snd_3473_);
lean_inc(v_fst_3474_);
lean_dec(v___x_3472_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3523_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v_fst_3478_; lean_object* v_snd_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3522_; 
v_fst_3478_ = lean_ctor_get(v_snd_3473_, 0);
v_snd_3479_ = lean_ctor_get(v_snd_3473_, 1);
v_isSharedCheck_3522_ = !lean_is_exclusive(v_snd_3473_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3481_ = v_snd_3473_;
v_isShared_3482_ = v_isSharedCheck_3522_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_snd_3479_);
lean_inc(v_fst_3478_);
lean_dec(v_snd_3473_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3522_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3483_; lean_object* v_startPh_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3488_; 
v___x_3483_ = l_List_lengthTR___redArg(v_snd_3479_);
v_startPh_3484_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_3483_);
v___x_3485_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__2, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__2);
v___x_3486_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3486_, 0, v___y_3447_);
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 1, v___x_3486_);
lean_ctor_set(v___x_3481_, 0, v___x_3485_);
v___x_3488_ = v___x_3481_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v___x_3485_);
lean_ctor_set(v_reuseFailAlloc_3521_, 1, v___x_3486_);
v___x_3488_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3493_; 
v___x_3489_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__7, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__7);
v___x_3490_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__4);
v___x_3491_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3491_, 0, v_fst_3478_);
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 1, v___x_3491_);
lean_ctor_set(v___x_3476_, 0, v___x_3490_);
v___x_3493_ = v___x_3476_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v___x_3490_);
lean_ctor_set(v_reuseFailAlloc_3520_, 1, v___x_3491_);
v___x_3493_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v_t4_3499_; lean_object* v___x_3500_; lean_object* v_endPh_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v_t5_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3516_; 
lean_inc_ref(v___x_3456_);
v___x_3494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3493_);
lean_ctor_set(v___x_3494_, 1, v___x_3456_);
v___x_3495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3489_);
lean_ctor_set(v___x_3495_, 1, v___x_3494_);
v___x_3496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3488_);
lean_ctor_set(v___x_3496_, 1, v___x_3495_);
v___x_3497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3449_);
lean_ctor_set(v___x_3497_, 1, v___x_3496_);
v___x_3498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3497_);
lean_ctor_set(v___x_3498_, 1, v___x_3455_);
v_t4_3499_ = l_List_appendTR___redArg(v_snd_3479_, v___x_3498_);
v___x_3500_ = l_List_lengthTR___redArg(v_t4_3499_);
v_endPh_3501_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_3500_);
v___x_3502_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_spanProcess___closed__11, &lp_lean_x2dftml_LeanFtml_spanProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_spanProcess___closed__11);
v___x_3503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
lean_ctor_set(v___x_3503_, 1, v___x_3456_);
v___x_3504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3449_);
lean_ctor_set(v___x_3504_, 1, v___x_3503_);
v___x_3505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
lean_ctor_set(v___x_3505_, 1, v___x_3455_);
v_t5_3506_ = l_List_appendTR___redArg(v_t4_3499_, v___x_3505_);
lean_inc(v___y_3448_);
v___x_3507_ = l_List_appendTR___redArg(v___y_3448_, v___y_3448_);
v___x_3508_ = l_List_appendTR___redArg(v___x_3507_, v_startPh_3484_);
v___x_3509_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_collProcess___closed__4));
v___x_3510_ = l_List_appendTR___redArg(v___x_3508_, v___x_3509_);
v___x_3511_ = l_List_appendTR___redArg(v___x_3510_, v_fst_3474_);
v___x_3512_ = l_List_appendTR___redArg(v___x_3511_, v___x_3509_);
v___x_3513_ = l_List_appendTR___redArg(v___x_3512_, v_endPh_3501_);
v___x_3514_ = lean_nat_add(v_tabviewCounter_3441_, v___x_3470_);
lean_dec(v_tabviewCounter_3441_);
if (v_isShared_3445_ == 0)
{
lean_ctor_set(v___x_3444_, 11, v___x_3514_);
v___x_3516_ = v___x_3444_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_page_3430_);
lean_ctor_set(v_reuseFailAlloc_3519_, 1, v_site_3431_);
lean_ctor_set(v_reuseFailAlloc_3519_, 2, v_inclusions_3432_);
lean_ctor_set(v_reuseFailAlloc_3519_, 3, v_inclusionsNotExist_3433_);
lean_ctor_set(v_reuseFailAlloc_3519_, 4, v_footnotes_3434_);
lean_ctor_set(v_reuseFailAlloc_3519_, 5, v_bibitems_3435_);
lean_ctor_set(v_reuseFailAlloc_3519_, 6, v_bibitemIds_3436_);
lean_ctor_set(v_reuseFailAlloc_3519_, 7, v_headlineId_3437_);
lean_ctor_set(v_reuseFailAlloc_3519_, 8, v_mathId_3438_);
lean_ctor_set(v_reuseFailAlloc_3519_, 9, v_equations_3439_);
lean_ctor_set(v_reuseFailAlloc_3519_, 10, v_collapsibleCount_3440_);
lean_ctor_set(v_reuseFailAlloc_3519_, 11, v___x_3514_);
lean_ctor_set(v_reuseFailAlloc_3519_, 12, v_scoredAnchors_3442_);
v___x_3516_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3517_, 0, v_t5_3506_);
lean_ctor_set(v___x_3517_, 1, v___x_3516_);
v___x_3518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3513_);
lean_ctor_set(v___x_3518_, 1, v___x_3517_);
return v___x_3518_;
}
}
}
}
}
}
v___jp_3524_:
{
if (lean_obj_tag(v_g1_3426_) == 0)
{
lean_object* v___x_3526_; 
v___x_3526_ = lean_box(0);
v___y_3447_ = v___y_3525_;
v___y_3448_ = v___x_3526_;
goto v___jp_3446_;
}
else
{
lean_object* v_val_3527_; 
v_val_3527_ = lean_ctor_get(v_g1_3426_, 0);
lean_inc(v_val_3527_);
lean_dec_ref_known(v_g1_3426_, 1);
v___y_3447_ = v___y_3525_;
v___y_3448_ = v_val_3527_;
goto v___jp_3446_;
}
}
v___jp_3528_:
{
lean_object* v_attr_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v_attr_3530_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_3529_);
lean_dec(v___y_3529_);
v___x_3531_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_spanProcess_spec__0___closed__3);
v___x_3532_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attr_3530_, v___x_3531_);
lean_dec(v_attr_3530_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v___x_3533_; 
v___x_3533_ = lean_box(0);
v___y_3525_ = v___x_3533_;
goto v___jp_3524_;
}
else
{
lean_object* v_val_3534_; uint8_t v___x_3535_; 
v_val_3534_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_val_3534_);
lean_dec_ref_known(v___x_3532_, 1);
v___x_3535_ = l_List_isEmpty___redArg(v_val_3534_);
if (v___x_3535_ == 0)
{
lean_object* v___x_3536_; uint8_t v___x_3537_; 
v___x_3536_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__6);
v___x_3537_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_val_3534_, v___x_3536_);
if (v___x_3537_ == 0)
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3538_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7, &lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_tabviewProcess___closed__7);
v___x_3539_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_3534_);
v___x_3540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3538_);
lean_ctor_set(v___x_3540_, 1, v___x_3539_);
v___x_3541_ = lean_box(0);
v___x_3542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3540_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
v___y_3525_ = v___x_3542_;
goto v___jp_3524_;
}
else
{
lean_object* v___x_3543_; 
lean_dec(v_val_3534_);
v___x_3543_ = lean_box(0);
v___y_3525_ = v___x_3543_;
goto v___jp_3524_;
}
}
else
{
lean_object* v___x_3544_; 
lean_dec(v_val_3534_);
v___x_3544_ = lean_box(0);
v___y_3525_ = v___x_3544_;
goto v___jp_3524_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewScan(lean_object* v_src_3548_, lean_object* v_toks_3549_, lean_object* v_doc_3550_, uint8_t v_atStart_3551_, lean_object* v_x_3552_){
_start:
{
lean_object* v_zero_3553_; uint8_t v_isZero_3554_; 
v_zero_3553_ = lean_unsigned_to_nat(0u);
v_isZero_3554_ = lean_nat_dec_eq(v_x_3552_, v_zero_3553_);
if (v_isZero_3554_ == 1)
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3555_, 0, v_toks_3549_);
lean_ctor_set(v___x_3555_, 1, v_doc_3550_);
v___x_3556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3556_, 0, v_src_3548_);
lean_ctor_set(v___x_3556_, 1, v___x_3555_);
return v___x_3556_;
}
else
{
if (lean_obj_tag(v_src_3548_) == 0)
{
lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3557_, 0, v_toks_3549_);
lean_ctor_set(v___x_3557_, 1, v_doc_3550_);
v___x_3558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3558_, 0, v_src_3548_);
lean_ctor_set(v___x_3558_, 1, v___x_3557_);
return v___x_3558_;
}
else
{
lean_object* v_head_3559_; lean_object* v_tail_3560_; lean_object* v_one_3561_; lean_object* v_n_3562_; 
v_head_3559_ = lean_ctor_get(v_src_3548_, 0);
lean_inc(v_head_3559_);
v_tail_3560_ = lean_ctor_get(v_src_3548_, 1);
lean_inc(v_tail_3560_);
v_one_3561_ = lean_unsigned_to_nat(1u);
v_n_3562_ = lean_nat_sub(v_x_3552_, v_one_3561_);
if (v_atStart_3551_ == 0)
{
lean_dec_ref_known(v_src_3548_, 2);
goto v___jp_3563_;
}
else
{
lean_object* v___x_3577_; lean_object* v___x_3578_; 
v___x_3577_ = lp_lean_x2dftml_LeanFtml_tabviewMatchAt(v_src_3548_);
v___x_3578_ = l_List_head_x3f___redArg(v___x_3577_);
lean_dec(v___x_3577_);
if (lean_obj_tag(v___x_3578_) == 0)
{
goto v___jp_3563_;
}
else
{
lean_object* v_val_3579_; lean_object* v_snd_3580_; lean_object* v_fst_3581_; lean_object* v_fst_3582_; lean_object* v_snd_3583_; lean_object* v___x_3584_; lean_object* v_snd_3585_; lean_object* v_fst_3586_; lean_object* v_fst_3587_; lean_object* v_snd_3588_; lean_object* v___x_3589_; lean_object* v_fst_3590_; lean_object* v_snd_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3599_; 
lean_dec(v_tail_3560_);
lean_dec(v_head_3559_);
v_val_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_val_3579_);
lean_dec_ref_known(v___x_3578_, 1);
v_snd_3580_ = lean_ctor_get(v_val_3579_, 1);
lean_inc(v_snd_3580_);
v_fst_3581_ = lean_ctor_get(v_val_3579_, 0);
lean_inc(v_fst_3581_);
lean_dec(v_val_3579_);
v_fst_3582_ = lean_ctor_get(v_snd_3580_, 0);
lean_inc(v_fst_3582_);
v_snd_3583_ = lean_ctor_get(v_snd_3580_, 1);
lean_inc(v_snd_3583_);
lean_dec(v_snd_3580_);
v___x_3584_ = lp_lean_x2dftml_LeanFtml_tabviewProcess(v_fst_3581_, v_fst_3582_, v_doc_3550_, v_toks_3549_);
v_snd_3585_ = lean_ctor_get(v___x_3584_, 1);
lean_inc(v_snd_3585_);
v_fst_3586_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_fst_3586_);
lean_dec_ref(v___x_3584_);
v_fst_3587_ = lean_ctor_get(v_snd_3585_, 0);
lean_inc(v_fst_3587_);
v_snd_3588_ = lean_ctor_get(v_snd_3585_, 1);
lean_inc(v_snd_3588_);
lean_dec(v_snd_3585_);
v___x_3589_ = lp_lean_x2dftml_LeanFtml_tabviewScan(v_snd_3583_, v_fst_3587_, v_snd_3588_, v_isZero_3554_, v_n_3562_);
lean_dec(v_n_3562_);
v_fst_3590_ = lean_ctor_get(v___x_3589_, 0);
v_snd_3591_ = lean_ctor_get(v___x_3589_, 1);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3593_ = v___x_3589_;
v_isShared_3594_ = v_isSharedCheck_3599_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_snd_3591_);
lean_inc(v_fst_3590_);
lean_dec(v___x_3589_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3599_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3595_; lean_object* v___x_3597_; 
v___x_3595_ = l_List_appendTR___redArg(v_fst_3586_, v_fst_3590_);
if (v_isShared_3594_ == 0)
{
lean_ctor_set(v___x_3593_, 0, v___x_3595_);
v___x_3597_ = v___x_3593_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v___x_3595_);
lean_ctor_set(v_reuseFailAlloc_3598_, 1, v_snd_3591_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
v___jp_3563_:
{
lean_object* v___x_3564_; uint8_t v___x_3565_; lean_object* v___x_3566_; lean_object* v_fst_3567_; lean_object* v_snd_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3576_; 
v___x_3564_ = lean_unsigned_to_nat(10u);
v___x_3565_ = lean_nat_dec_eq(v_head_3559_, v___x_3564_);
v___x_3566_ = lp_lean_x2dftml_LeanFtml_tabviewScan(v_tail_3560_, v_toks_3549_, v_doc_3550_, v___x_3565_, v_n_3562_);
lean_dec(v_n_3562_);
v_fst_3567_ = lean_ctor_get(v___x_3566_, 0);
v_snd_3568_ = lean_ctor_get(v___x_3566_, 1);
v_isSharedCheck_3576_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3570_ = v___x_3566_;
v_isShared_3571_ = v_isSharedCheck_3576_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_snd_3568_);
lean_inc(v_fst_3567_);
lean_dec(v___x_3566_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3576_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3572_; lean_object* v___x_3574_; 
v___x_3572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3572_, 0, v_head_3559_);
lean_ctor_set(v___x_3572_, 1, v_fst_3567_);
if (v_isShared_3571_ == 0)
{
lean_ctor_set(v___x_3570_, 0, v___x_3572_);
v___x_3574_ = v___x_3570_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v___x_3572_);
lean_ctor_set(v_reuseFailAlloc_3575_, 1, v_snd_3568_);
v___x_3574_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
return v___x_3574_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewScan___boxed(lean_object* v_src_3600_, lean_object* v_toks_3601_, lean_object* v_doc_3602_, lean_object* v_atStart_3603_, lean_object* v_x_3604_){
_start:
{
uint8_t v_atStart_boxed_3605_; lean_object* v_res_3606_; 
v_atStart_boxed_3605_ = lean_unbox(v_atStart_3603_);
v_res_3606_ = lp_lean_x2dftml_LeanFtml_tabviewScan(v_src_3600_, v_toks_3601_, v_doc_3602_, v_atStart_boxed_3605_, v_x_3604_);
lean_dec(v_x_3604_);
return v_res_3606_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewPasses(lean_object* v_src_3607_, lean_object* v_toks_3608_, lean_object* v_doc_3609_, lean_object* v_x_3610_){
_start:
{
lean_object* v_zero_3611_; uint8_t v_isZero_3612_; 
v_zero_3611_ = lean_unsigned_to_nat(0u);
v_isZero_3612_ = lean_nat_dec_eq(v_x_3610_, v_zero_3611_);
if (v_isZero_3612_ == 1)
{
lean_object* v___x_3613_; lean_object* v___x_3614_; 
lean_dec(v_x_3610_);
v___x_3613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3613_, 0, v_toks_3608_);
lean_ctor_set(v___x_3613_, 1, v_doc_3609_);
v___x_3614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3614_, 0, v_src_3607_);
lean_ctor_set(v___x_3614_, 1, v___x_3613_);
return v___x_3614_;
}
else
{
uint8_t v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v_snd_3620_; lean_object* v_fst_3621_; lean_object* v_fst_3622_; lean_object* v_snd_3623_; uint8_t v___x_3624_; 
v___x_3615_ = 1;
v___x_3616_ = l_List_lengthTR___redArg(v_src_3607_);
v___x_3617_ = lean_unsigned_to_nat(1u);
v___x_3618_ = lean_nat_add(v___x_3616_, v___x_3617_);
lean_dec(v___x_3616_);
lean_inc(v_src_3607_);
v___x_3619_ = lp_lean_x2dftml_LeanFtml_tabviewScan(v_src_3607_, v_toks_3608_, v_doc_3609_, v___x_3615_, v___x_3618_);
lean_dec(v___x_3618_);
v_snd_3620_ = lean_ctor_get(v___x_3619_, 1);
v_fst_3621_ = lean_ctor_get(v___x_3619_, 0);
v_fst_3622_ = lean_ctor_get(v_snd_3620_, 0);
v_snd_3623_ = lean_ctor_get(v_snd_3620_, 1);
v___x_3624_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_3621_, v_src_3607_);
lean_dec(v_src_3607_);
if (v___x_3624_ == 0)
{
lean_object* v_n_3625_; 
lean_inc(v_snd_3623_);
lean_inc(v_fst_3622_);
lean_inc(v_fst_3621_);
lean_dec_ref(v___x_3619_);
v_n_3625_ = lean_nat_sub(v_x_3610_, v___x_3617_);
lean_dec(v_x_3610_);
v_src_3607_ = v_fst_3621_;
v_toks_3608_ = v_fst_3622_;
v_doc_3609_ = v_snd_3623_;
v_x_3610_ = v_n_3625_;
goto _start;
}
else
{
lean_dec(v_x_3610_);
return v___x_3619_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tabviewRule(lean_object* v_st_3627_){
_start:
{
lean_object* v_work_3628_; lean_object* v_tokens_3629_; lean_object* v_doc_3630_; uint8_t v_fatal_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3648_; 
v_work_3628_ = lean_ctor_get(v_st_3627_, 0);
v_tokens_3629_ = lean_ctor_get(v_st_3627_, 1);
v_doc_3630_ = lean_ctor_get(v_st_3627_, 2);
v_fatal_3631_ = lean_ctor_get_uint8(v_st_3627_, sizeof(void*)*3);
v_isSharedCheck_3648_ = !lean_is_exclusive(v_st_3627_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3633_ = v_st_3627_;
v_isShared_3634_ = v_isSharedCheck_3648_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_doc_3630_);
lean_inc(v_tokens_3629_);
lean_inc(v_work_3628_);
lean_dec(v_st_3627_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3648_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v_input_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v_snd_3640_; lean_object* v_fst_3641_; lean_object* v_fst_3642_; lean_object* v_snd_3643_; lean_object* v___x_3644_; lean_object* v___x_3646_; 
v_input_3635_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_3628_);
v___x_3636_ = l_List_lengthTR___redArg(v_input_3635_);
v___x_3637_ = lean_unsigned_to_nat(2u);
v___x_3638_ = lean_nat_add(v___x_3636_, v___x_3637_);
lean_dec(v___x_3636_);
v___x_3639_ = lp_lean_x2dftml_LeanFtml_tabviewPasses(v_input_3635_, v_tokens_3629_, v_doc_3630_, v___x_3638_);
v_snd_3640_ = lean_ctor_get(v___x_3639_, 1);
lean_inc(v_snd_3640_);
v_fst_3641_ = lean_ctor_get(v___x_3639_, 0);
lean_inc(v_fst_3641_);
lean_dec_ref(v___x_3639_);
v_fst_3642_ = lean_ctor_get(v_snd_3640_, 0);
lean_inc(v_fst_3642_);
v_snd_3643_ = lean_ctor_get(v_snd_3640_, 1);
lean_inc(v_snd_3643_);
lean_dec(v_snd_3640_);
v___x_3644_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_3641_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 2, v_snd_3643_);
lean_ctor_set(v___x_3633_, 1, v_fst_3642_);
lean_ctor_set(v___x_3633_, 0, v___x_3644_);
v___x_3646_ = v___x_3633_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v___x_3644_);
lean_ctor_set(v_reuseFailAlloc_3647_, 1, v_fst_3642_);
lean_ctor_set(v_reuseFailAlloc_3647_, 2, v_snd_3643_);
lean_ctor_set_uint8(v_reuseFailAlloc_3647_, sizeof(void*)*3, v_fatal_3631_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
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
