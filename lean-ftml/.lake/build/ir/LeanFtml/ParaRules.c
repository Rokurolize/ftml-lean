// Lean compiler output
// Module: LeanFtml.ParaRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules public import LeanFtml.LinkRules public import LeanFtml.NotesRules public import LeanFtml.BlockRules public import LeanFtml.ContainRules public import LeanFtml.ListRules public import LeanFtml.TableRules
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
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_asciiLower(lean_object*);
uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_claimTok(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_advRowMatch_spec__0(lean_object*, lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_ciAt(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_spanProcess(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omSetB(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtFirstBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtFirstCI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countWsB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countWsB___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageAlignSplits(lean_object*);
static const lean_string_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "image"};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__1;
static const lean_string_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3;
static const lean_array_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[["};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageMatchAt(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageUrlLabelByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlLabelByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_imageUrlLabelDot_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_imageUrlLabelDot_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageUrlLabelDot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageUrlLabelDot___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageUrlLabelDot___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlLabelDot(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageUrlHost(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHost___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "://"};
static const lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ftp"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "gopher"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "news"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__14;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageUrlHere(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageUrlMatches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlMatches___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimImageHrefWs(lean_object*);
static const lean_string_object lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "link"};
static const lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Image"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_blank"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "align"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "src"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__15;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "height"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__29;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__30;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__31;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__32;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__33;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__34;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__35;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__36;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__37;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__38_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageProcess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_imageRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_imageScan, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_imageRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageRule(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Newline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_newlineRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_newlineScan, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_newlineRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_newlineRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_wsB_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_wsB_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_phT_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_phT_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LeanFtml.PUnit.wsB"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LeanFtml.PUnit.phT"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__7_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprPUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprPUnit___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tokenRuleAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_lean_x2dftml_LeanFtml_tokenRuleAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tokenRuleAt___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokenRuleAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokenRuleAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_unitIsBreak(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitIsBreak___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterRunBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterRunBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[[span_"};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1;
static const lean_string_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/span]]"};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredMatchAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_wsRunNl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_wsRunNl___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wsRunNl___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsRunNl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsRunNl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "blockquote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "clearfloat"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "heading"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "horiz"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "separator"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "deflist"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "table"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tableadv"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "list"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "toc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "center"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tabview"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__12_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "divalign"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__14_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "divalignleft"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__15_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "divalignright"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__16_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "divaligncenter"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__17_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "divalignjustify"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__18_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "collapsible"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__19_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "note"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__20_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "math"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__21_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__22_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "module654"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__23_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "footnoteblock"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__24_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "footnoteitem"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__25_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "bibliography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__26_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bibitem"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__27_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "gallery"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__28_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__29_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__27_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__26_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__31_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__25_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__32_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__24_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__33_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__23_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__35_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__22_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__35_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__21_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__37_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__20_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__37_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__19_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__38_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__39_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__18_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__39_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__17_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__40_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__41_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__16_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__41_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__15_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__42_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__43_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__14_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__43_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__13_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__44_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__45_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__12_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__45_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__11_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__46_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__47_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__10_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__47_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__9_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__48_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__49_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__8_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__49_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__7_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__50_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__51_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__6_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__51_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__52_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__5_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__52_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__53_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__4_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__53_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__54_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__54_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__55_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__55_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__56 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__56_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__56_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__57_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__0_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__57_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__58 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__58_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraSkipRules;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraWrap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Paragraph"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraWrap___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraWrap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraWrap___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraWrap___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraWrap___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_paraWrap___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraWrap___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_paraWrap___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__12;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraWrap___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraWrap___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraWrap___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraWrap___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraWrap___closed__14_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraWrap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesEndsWith(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesEndsWith___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesContains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesContains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripPhBytes_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripPhBytes(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_runHasDivStart_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_runHasDivStart_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_runHasDivStart_go___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_runHasDivStart_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runHasDivStart_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_runHasDivStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runHasDivStart___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paragraphRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(lean_object* v_pat_1_, lean_object* v_s_2_){
_start:
{
if (lean_obj_tag(v_s_2_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = lean_box(0);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; uint8_t v___x_6_; 
v_head_4_ = lean_ctor_get(v_s_2_, 0);
v_tail_5_ = lean_ctor_get(v_s_2_, 1);
v___x_6_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_pat_1_, v_s_2_);
if (v___x_6_ == 0)
{
lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_31_; 
lean_inc(v_tail_5_);
lean_inc(v_head_4_);
v_isSharedCheck_31_ = !lean_is_exclusive(v_s_2_);
if (v_isSharedCheck_31_ == 0)
{
lean_object* v_unused_32_; lean_object* v_unused_33_; 
v_unused_32_ = lean_ctor_get(v_s_2_, 1);
lean_dec(v_unused_32_);
v_unused_33_ = lean_ctor_get(v_s_2_, 0);
lean_dec(v_unused_33_);
v___x_8_ = v_s_2_;
v_isShared_9_ = v_isSharedCheck_31_;
goto v_resetjp_7_;
}
else
{
lean_dec(v_s_2_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_31_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v___x_10_; 
v___x_10_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v_pat_1_, v_tail_5_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_del_object(v___x_8_);
lean_dec(v_head_4_);
return v___x_10_;
}
else
{
lean_object* v_val_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_30_; 
v_val_11_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_30_ == 0)
{
v___x_13_ = v___x_10_;
v_isShared_14_ = v_isSharedCheck_30_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_val_11_);
lean_dec(v___x_10_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_30_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v_fst_15_; lean_object* v_snd_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_29_; 
v_fst_15_ = lean_ctor_get(v_val_11_, 0);
v_snd_16_ = lean_ctor_get(v_val_11_, 1);
v_isSharedCheck_29_ = !lean_is_exclusive(v_val_11_);
if (v_isSharedCheck_29_ == 0)
{
v___x_18_ = v_val_11_;
v_isShared_19_ = v_isSharedCheck_29_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_snd_16_);
lean_inc(v_fst_15_);
lean_dec(v_val_11_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_29_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_21_; 
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 1, v_fst_15_);
v___x_21_ = v___x_8_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_head_4_);
lean_ctor_set(v_reuseFailAlloc_28_, 1, v_fst_15_);
v___x_21_ = v_reuseFailAlloc_28_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_23_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 0, v___x_21_);
v___x_23_ = v___x_18_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v___x_21_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_snd_16_);
v___x_23_ = v_reuseFailAlloc_27_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_25_; 
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_23_);
v___x_25_ = v___x_13_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v___x_23_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
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
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_34_ = lean_box(0);
v___x_35_ = l_List_lengthTR___redArg(v_pat_1_);
v___x_36_ = l_List_drop___redArg(v___x_35_, v_s_2_);
lean_dec_ref_known(v_s_2_, 2);
v___x_37_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_34_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtFirstBytes___boxed(lean_object* v_pat_39_, lean_object* v_s_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v_pat_39_, v_s_40_);
lean_dec(v_pat_39_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtFirstCI(lean_object* v_pat_42_, lean_object* v_s_43_){
_start:
{
if (lean_obj_tag(v_s_43_) == 0)
{
lean_object* v___x_44_; 
lean_dec(v_pat_42_);
v___x_44_ = lean_box(0);
return v___x_44_;
}
else
{
lean_object* v_head_45_; lean_object* v_tail_46_; uint8_t v___x_47_; 
v_head_45_ = lean_ctor_get(v_s_43_, 0);
v_tail_46_ = lean_ctor_get(v_s_43_, 1);
lean_inc_ref(v_s_43_);
lean_inc(v_pat_42_);
v___x_47_ = lp_lean_x2dftml_LeanFtml_ciAt(v_pat_42_, v_s_43_);
if (v___x_47_ == 0)
{
lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_72_; 
lean_inc(v_tail_46_);
lean_inc(v_head_45_);
v_isSharedCheck_72_ = !lean_is_exclusive(v_s_43_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; lean_object* v_unused_74_; 
v_unused_73_ = lean_ctor_get(v_s_43_, 1);
lean_dec(v_unused_73_);
v_unused_74_ = lean_ctor_get(v_s_43_, 0);
lean_dec(v_unused_74_);
v___x_49_ = v_s_43_;
v_isShared_50_ = v_isSharedCheck_72_;
goto v_resetjp_48_;
}
else
{
lean_dec(v_s_43_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_72_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; 
v___x_51_ = lp_lean_x2dftml_LeanFtml_splitAtFirstCI(v_pat_42_, v_tail_46_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_del_object(v___x_49_);
lean_dec(v_head_45_);
return v___x_51_;
}
else
{
lean_object* v_val_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_71_; 
v_val_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_71_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_71_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_val_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_71_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v_fst_56_; lean_object* v_snd_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_70_; 
v_fst_56_ = lean_ctor_get(v_val_52_, 0);
v_snd_57_ = lean_ctor_get(v_val_52_, 1);
v_isSharedCheck_70_ = !lean_is_exclusive(v_val_52_);
if (v_isSharedCheck_70_ == 0)
{
v___x_59_ = v_val_52_;
v_isShared_60_ = v_isSharedCheck_70_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_snd_57_);
lean_inc(v_fst_56_);
lean_dec(v_val_52_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_70_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_62_; 
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 1, v_fst_56_);
v___x_62_ = v___x_49_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_head_45_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_fst_56_);
v___x_62_ = v_reuseFailAlloc_69_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
lean_object* v___x_64_; 
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 0, v___x_62_);
v___x_64_ = v___x_59_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_62_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_snd_57_);
v___x_64_ = v_reuseFailAlloc_68_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
lean_object* v___x_66_; 
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 0, v___x_64_);
v___x_66_ = v___x_54_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_64_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
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
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_75_ = lean_box(0);
v___x_76_ = l_List_lengthTR___redArg(v_pat_42_);
lean_dec(v_pat_42_);
v___x_77_ = l_List_drop___redArg(v___x_76_, v_s_43_);
lean_dec_ref_known(v_s_43_, 2);
v___x_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_75_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countWsB(lean_object* v_x_80_){
_start:
{
if (lean_obj_tag(v_x_80_) == 0)
{
lean_object* v___x_81_; 
v___x_81_ = lean_unsigned_to_nat(0u);
return v___x_81_;
}
else
{
lean_object* v_head_82_; lean_object* v_tail_83_; uint8_t v___x_84_; 
v_head_82_ = lean_ctor_get(v_x_80_, 0);
v_tail_83_ = lean_ctor_get(v_x_80_, 1);
v___x_84_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_82_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; 
v___x_85_ = lean_unsigned_to_nat(0u);
return v___x_85_;
}
else
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = lp_lean_x2dftml_LeanFtml_countWsB(v_tail_83_);
v___x_87_ = lean_unsigned_to_nat(1u);
v___x_88_ = lean_nat_add(v___x_86_, v___x_87_);
lean_dec(v___x_86_);
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countWsB___boxed(lean_object* v_x_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = lp_lean_x2dftml_LeanFtml_countWsB(v_x_89_);
lean_dec(v_x_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageAlignSplits(lean_object* v_s_91_){
_start:
{
lean_object* v___y_93_; lean_object* v___y_94_; lean_object* v___y_101_; lean_object* v___y_102_; lean_object* v___y_103_; lean_object* v___y_109_; 
if (lean_obj_tag(v_s_91_) == 1)
{
lean_object* v_tail_122_; 
v_tail_122_ = lean_ctor_get(v_s_91_, 1);
lean_inc(v_tail_122_);
if (lean_obj_tag(v_tail_122_) == 1)
{
lean_object* v_head_123_; lean_object* v_head_124_; lean_object* v_tail_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_150_; 
v_head_123_ = lean_ctor_get(v_s_91_, 0);
v_head_124_ = lean_ctor_get(v_tail_122_, 0);
v_tail_125_ = lean_ctor_get(v_tail_122_, 1);
v_isSharedCheck_150_ = !lean_is_exclusive(v_tail_122_);
if (v_isSharedCheck_150_ == 0)
{
v___x_127_ = v_tail_122_;
v_isShared_128_ = v_isSharedCheck_150_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_tail_125_);
lean_inc(v_head_124_);
lean_dec(v_tail_122_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_150_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_145_ = lean_unsigned_to_nat(102u);
v___x_146_ = lean_nat_dec_eq(v_head_123_, v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(70u);
v___x_148_ = lean_nat_dec_eq(v_head_123_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; 
lean_del_object(v___x_127_);
lean_dec(v_tail_125_);
lean_dec(v_head_124_);
v___x_149_ = lean_box(0);
v___y_109_ = v___x_149_;
goto v___jp_108_;
}
else
{
goto v___jp_137_;
}
}
else
{
goto v___jp_137_;
}
v___jp_129_:
{
lean_object* v___x_130_; lean_object* v___x_132_; 
v___x_130_ = lean_box(0);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v___x_130_);
v___x_132_ = v___x_127_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_head_124_);
lean_ctor_set(v_reuseFailAlloc_136_, 1, v___x_130_);
v___x_132_ = v_reuseFailAlloc_136_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
lean_inc(v_head_123_);
v___x_133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_133_, 0, v_head_123_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v_tail_125_);
v___x_135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_130_);
v___y_109_ = v___x_135_;
goto v___jp_108_;
}
}
v___jp_137_:
{
lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_138_ = lean_unsigned_to_nat(60u);
v___x_139_ = lean_nat_dec_eq(v_head_124_, v___x_138_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = lean_unsigned_to_nat(62u);
v___x_141_ = lean_nat_dec_eq(v_head_124_, v___x_140_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_142_ = lean_unsigned_to_nat(61u);
v___x_143_ = lean_nat_dec_eq(v_head_124_, v___x_142_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
lean_del_object(v___x_127_);
lean_dec(v_tail_125_);
lean_dec(v_head_124_);
v___x_144_ = lean_box(0);
v___y_109_ = v___x_144_;
goto v___jp_108_;
}
else
{
goto v___jp_129_;
}
}
else
{
goto v___jp_129_;
}
}
else
{
goto v___jp_129_;
}
}
}
}
else
{
lean_dec(v_tail_122_);
goto v___jp_120_;
}
}
else
{
goto v___jp_120_;
}
v___jp_92_:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_95_ = l_List_appendTR___redArg(v___y_93_, v___y_94_);
v___x_96_ = lean_box(0);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_s_91_);
v___x_98_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
v___x_99_ = l_List_appendTR___redArg(v___x_95_, v___x_98_);
return v___x_99_;
}
v___jp_100_:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_104_ = lean_box(0);
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v___y_102_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___y_103_);
v___x_107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_104_);
v___y_93_ = v___y_101_;
v___y_94_ = v___x_107_;
goto v___jp_92_;
}
v___jp_108_:
{
if (lean_obj_tag(v_s_91_) == 1)
{
lean_object* v_head_110_; lean_object* v_tail_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_head_110_ = lean_ctor_get(v_s_91_, 0);
v_tail_111_ = lean_ctor_get(v_s_91_, 1);
v___x_112_ = lean_unsigned_to_nat(60u);
v___x_113_ = lean_nat_dec_eq(v_head_110_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(62u);
v___x_115_ = lean_nat_dec_eq(v_head_110_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = lean_unsigned_to_nat(61u);
v___x_117_ = lean_nat_dec_eq(v_head_110_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; 
v___x_118_ = lean_box(0);
v___y_93_ = v___y_109_;
v___y_94_ = v___x_118_;
goto v___jp_92_;
}
else
{
lean_inc(v_tail_111_);
lean_inc(v_head_110_);
v___y_101_ = v___y_109_;
v___y_102_ = v_head_110_;
v___y_103_ = v_tail_111_;
goto v___jp_100_;
}
}
else
{
lean_inc(v_tail_111_);
lean_inc(v_head_110_);
v___y_101_ = v___y_109_;
v___y_102_ = v_head_110_;
v___y_103_ = v_tail_111_;
goto v___jp_100_;
}
}
else
{
lean_inc(v_tail_111_);
lean_inc(v_head_110_);
v___y_101_ = v___y_109_;
v___y_102_ = v_head_110_;
v___y_103_ = v_tail_111_;
goto v___jp_100_;
}
}
else
{
lean_object* v___x_119_; 
v___x_119_ = lean_box(0);
v___y_93_ = v___y_109_;
v___y_94_ = v___x_119_;
goto v___jp_92_;
}
}
v___jp_120_:
{
lean_object* v___x_121_; 
v___x_121_ = lean_box(0);
v___y_109_ = v___x_121_;
goto v___jp_108_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__1(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__0));
v___x_153_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__2));
v___x_156_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0(lean_object* v_src_159_, lean_object* v_x_160_){
_start:
{
if (lean_obj_tag(v_x_160_) == 0)
{
lean_object* v___x_161_; 
lean_dec(v_src_159_);
v___x_161_ = lean_box(0);
return v___x_161_;
}
else
{
lean_object* v_head_162_; lean_object* v_tail_163_; lean_object* v_fst_164_; lean_object* v_snd_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_207_; 
v_head_162_ = lean_ctor_get(v_x_160_, 0);
lean_inc(v_head_162_);
v_tail_163_ = lean_ctor_get(v_x_160_, 1);
lean_inc(v_tail_163_);
lean_dec_ref_known(v_x_160_, 2);
v_fst_164_ = lean_ctor_get(v_head_162_, 0);
v_snd_165_ = lean_ctor_get(v_head_162_, 1);
v_isSharedCheck_207_ = !lean_is_exclusive(v_head_162_);
if (v_isSharedCheck_207_ == 0)
{
v___x_167_ = v_head_162_;
v_isShared_168_ = v_isSharedCheck_207_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_snd_165_);
lean_inc(v_fst_164_);
lean_dec(v_head_162_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_207_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__1, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__1);
v___x_170_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_169_, v_snd_165_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_del_object(v___x_167_);
lean_dec(v_fst_164_);
v_x_160_ = v_tail_163_;
goto _start;
}
else
{
lean_object* v_val_172_; lean_object* v_n_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v_val_172_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_val_172_);
lean_dec_ref_known(v___x_170_, 1);
v_n_173_ = lp_lean_x2dftml_LeanFtml_countWsB(v_val_172_);
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = lean_nat_dec_eq(v_n_173_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3);
v___x_177_ = l_List_drop___redArg(v_n_173_, v_val_172_);
lean_dec(v_val_172_);
v___x_178_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v___x_176_, v___x_177_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_del_object(v___x_167_);
lean_dec(v_fst_164_);
v_x_160_ = v_tail_163_;
goto _start;
}
else
{
lean_object* v_val_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_205_; 
lean_dec(v_tail_163_);
v_val_180_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_205_ == 0)
{
v___x_182_ = v___x_178_;
v_isShared_183_ = v_isSharedCheck_205_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_val_180_);
lean_dec(v___x_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_205_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v_snd_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v_snd_184_ = lean_ctor_get(v_val_180_, 1);
v___x_185_ = l_List_lengthTR___redArg(v_src_159_);
v___x_186_ = l_List_lengthTR___redArg(v_snd_184_);
v___x_187_ = lean_nat_sub(v___x_185_, v___x_186_);
lean_dec(v___x_186_);
lean_dec(v___x_185_);
v___x_188_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4));
lean_inc(v_src_159_);
v___x_189_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_159_, v_src_159_, v___x_187_, v___x_188_);
lean_dec(v_src_159_);
lean_inc(v_val_180_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v_val_180_);
v___x_191_ = v___x_167_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_fst_164_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_val_180_);
v___x_191_ = v_reuseFailAlloc_204_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_201_; 
v_isSharedCheck_201_ = !lean_is_exclusive(v_val_180_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; lean_object* v_unused_203_; 
v_unused_202_ = lean_ctor_get(v_val_180_, 1);
lean_dec(v_unused_202_);
v_unused_203_ = lean_ctor_get(v_val_180_, 0);
lean_dec(v_unused_203_);
v___x_193_ = v_val_180_;
v_isShared_194_ = v_isSharedCheck_201_;
goto v_resetjp_192_;
}
else
{
lean_dec(v_val_180_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_201_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 1, v___x_191_);
lean_ctor_set(v___x_193_, 0, v___x_189_);
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v___x_191_);
v___x_196_ = v_reuseFailAlloc_200_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_object* v___x_198_; 
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_196_);
v___x_198_ = v___x_182_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_196_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
}
}
}
else
{
lean_dec(v_n_173_);
lean_dec(v_val_172_);
lean_del_object(v___x_167_);
lean_dec(v_fst_164_);
v_x_160_ = v_tail_163_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__1(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__0));
v___x_210_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageMatchAt(lean_object* v_src_211_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_imageMatchAt___closed__1);
lean_inc(v_src_211_);
v___x_213_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_212_, v_src_211_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v___x_214_; 
lean_dec(v_src_211_);
v___x_214_ = lean_box(0);
return v___x_214_;
}
else
{
lean_object* v_val_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_val_215_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_val_215_);
lean_dec_ref_known(v___x_213_, 1);
v___x_216_ = lp_lean_x2dftml_LeanFtml_imageAlignSplits(v_val_215_);
v___x_217_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0(v_src_211_, v___x_216_);
return v___x_217_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageUrlLabelByte(lean_object* v_b_218_){
_start:
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = lean_unsigned_to_nat(46u);
v___x_220_ = lean_nat_dec_eq(v_b_218_, v___x_219_);
if (v___x_220_ == 0)
{
uint8_t v___x_221_; 
v___x_221_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_b_218_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = lean_unsigned_to_nat(47u);
v___x_223_ = lean_nat_dec_eq(v_b_218_, v___x_222_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = lean_unsigned_to_nat(34u);
v___x_225_ = lean_nat_dec_eq(v_b_218_, v___x_224_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(39u);
v___x_227_ = lean_nat_dec_eq(v_b_218_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; uint8_t v___x_229_; 
v___x_228_ = lean_unsigned_to_nat(60u);
v___x_229_ = lean_nat_dec_eq(v_b_218_, v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = lean_unsigned_to_nat(92u);
v___x_231_ = lean_nat_dec_eq(v_b_218_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_232_ = lean_unsigned_to_nat(255u);
v___x_233_ = lean_nat_dec_eq(v_b_218_, v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = lean_nat_dec_le(v___x_234_, v_b_218_);
if (v___x_235_ == 0)
{
uint8_t v___x_236_; 
v___x_236_ = 1;
return v___x_236_;
}
else
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = lean_unsigned_to_nat(26u);
v___x_238_ = lean_nat_dec_le(v_b_218_, v___x_237_);
if (v___x_238_ == 0)
{
return v___x_235_;
}
else
{
return v___x_233_;
}
}
}
else
{
return v___x_231_;
}
}
else
{
return v___x_229_;
}
}
else
{
return v___x_227_;
}
}
else
{
return v___x_225_;
}
}
else
{
return v___x_223_;
}
}
else
{
return v___x_221_;
}
}
else
{
return v___x_220_;
}
}
else
{
uint8_t v___x_239_; 
v___x_239_ = 0;
return v___x_239_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlLabelByte___boxed(lean_object* v_b_240_){
_start:
{
uint8_t v_res_241_; lean_object* v_r_242_; 
v_res_241_ = lp_lean_x2dftml_LeanFtml_imageUrlLabelByte(v_b_240_);
lean_dec(v_b_240_);
v_r_242_ = lean_box(v_res_241_);
return v_r_242_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_imageUrlLabelDot_spec__0(lean_object* v_l_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
if (lean_obj_tag(v_a_244_) == 0)
{
lean_dec_ref(v_a_245_);
lean_inc(v_l_243_);
return v_l_243_;
}
else
{
lean_object* v_head_246_; lean_object* v_tail_247_; uint8_t v___x_248_; 
v_head_246_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_head_246_);
v_tail_247_ = lean_ctor_get(v_a_244_, 1);
lean_inc(v_tail_247_);
lean_dec_ref_known(v_a_244_, 2);
v___x_248_ = lp_lean_x2dftml_LeanFtml_imageUrlLabelByte(v_head_246_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
lean_dec(v_tail_247_);
lean_dec(v_head_246_);
v___x_249_ = lean_array_to_list(v_a_245_);
return v___x_249_;
}
else
{
lean_object* v___x_250_; 
v___x_250_ = lean_array_push(v_a_245_, v_head_246_);
v_a_244_ = v_tail_247_;
v_a_245_ = v___x_250_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_imageUrlLabelDot_spec__0___boxed(lean_object* v_l_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_imageUrlLabelDot_spec__0(v_l_252_, v_a_253_, v_a_254_);
lean_dec(v_l_252_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlLabelDot(lean_object* v_s_258_){
_start:
{
lean_object* v___x_259_; lean_object* v_run_260_; uint8_t v___x_261_; 
v___x_259_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4));
lean_inc(v_s_258_);
v_run_260_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_imageUrlLabelDot_spec__0(v_s_258_, v_s_258_, v___x_259_);
v___x_261_ = l_List_isEmpty___redArg(v_run_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_262_ = l_List_lengthTR___redArg(v_run_260_);
lean_dec(v_run_260_);
lean_inc(v___x_262_);
v___x_263_ = l_List_drop___redArg(v___x_262_, v_s_258_);
v___x_264_ = l_List_head_x3f___redArg(v___x_263_);
lean_dec(v___x_263_);
v___x_265_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageUrlLabelDot___closed__0));
v___x_266_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_264_, v___x_265_);
lean_dec(v___x_264_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; 
lean_dec(v___x_262_);
lean_dec(v_s_258_);
v___x_267_ = lean_box(0);
return v___x_267_;
}
else
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_268_ = lean_unsigned_to_nat(1u);
v___x_269_ = lean_nat_add(v___x_262_, v___x_268_);
lean_dec(v___x_262_);
v___x_270_ = l_List_drop___redArg(v___x_269_, v_s_258_);
lean_dec(v_s_258_);
v___x_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
}
else
{
lean_object* v___x_272_; 
lean_dec(v_run_260_);
lean_dec(v_s_258_);
v___x_272_ = lean_box(0);
return v___x_272_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageUrlHost(lean_object* v_x_273_, lean_object* v_x_274_){
_start:
{
lean_object* v_zero_275_; uint8_t v_isZero_276_; 
v_zero_275_ = lean_unsigned_to_nat(0u);
v_isZero_276_ = lean_nat_dec_eq(v_x_274_, v_zero_275_);
if (v_isZero_276_ == 1)
{
uint8_t v___x_277_; 
lean_dec(v_x_274_);
lean_dec(v_x_273_);
v___x_277_ = 0;
return v___x_277_;
}
else
{
lean_object* v_one_278_; lean_object* v_n_279_; 
v_one_278_ = lean_unsigned_to_nat(1u);
v_n_279_ = lean_nat_sub(v_x_274_, v_one_278_);
lean_dec(v_x_274_);
if (lean_obj_tag(v_x_273_) == 0)
{
goto v___jp_280_;
}
else
{
lean_object* v_head_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v_head_284_ = lean_ctor_get(v_x_273_, 0);
v___x_285_ = lean_unsigned_to_nat(97u);
v___x_286_ = lean_nat_dec_le(v___x_285_, v_head_284_);
if (v___x_286_ == 0)
{
goto v___jp_280_;
}
else
{
lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(122u);
v___x_288_ = lean_nat_dec_le(v_head_284_, v___x_287_);
if (v___x_288_ == 0)
{
goto v___jp_280_;
}
else
{
lean_dec_ref_known(v_x_273_, 2);
lean_dec(v_n_279_);
return v___x_288_;
}
}
}
v___jp_280_:
{
lean_object* v___x_281_; 
v___x_281_ = lp_lean_x2dftml_LeanFtml_imageUrlLabelDot(v_x_273_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_dec(v_n_279_);
return v_isZero_276_;
}
else
{
lean_object* v_val_282_; 
v_val_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_val_282_);
lean_dec_ref_known(v___x_281_, 1);
v_x_273_ = v_val_282_;
v_x_274_ = v_n_279_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHost___boxed(lean_object* v_x_289_, lean_object* v_x_290_){
_start:
{
uint8_t v_res_291_; lean_object* v_r_292_; 
v_res_291_ = lp_lean_x2dftml_LeanFtml_imageUrlHost(v_x_289_, v_x_290_);
v_r_292_ = lean_box(v_res_291_);
return v_r_292_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = ((lean_object*)(lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__0));
v___x_295_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0(lean_object* v_s_296_, lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_297_) == 0)
{
uint8_t v___x_298_; 
lean_dec(v_s_296_);
v___x_298_ = 0;
return v___x_298_;
}
else
{
lean_object* v_head_299_; lean_object* v_tail_300_; lean_object* v___x_301_; 
v_head_299_ = lean_ctor_get(v_x_297_, 0);
v_tail_300_ = lean_ctor_get(v_x_297_, 1);
lean_inc(v_s_296_);
v___x_301_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v_head_299_, v_s_296_);
if (lean_obj_tag(v___x_301_) == 0)
{
v_x_297_ = v_tail_300_;
goto _start;
}
else
{
lean_object* v_val_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_val_303_ = lean_ctor_get(v___x_301_, 0);
lean_inc(v_val_303_);
lean_dec_ref_known(v___x_301_, 1);
v___x_304_ = lean_obj_once(&lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1, &lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1);
v___x_305_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_304_, v_val_303_);
if (lean_obj_tag(v___x_305_) == 0)
{
v_x_297_ = v_tail_300_;
goto _start;
}
else
{
lean_object* v_val_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v_val_307_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_val_307_);
lean_dec_ref_known(v___x_305_, 1);
v___x_308_ = l_List_lengthTR___redArg(v_val_307_);
v___x_309_ = lean_unsigned_to_nat(1u);
v___x_310_ = lean_nat_add(v___x_308_, v___x_309_);
lean_dec(v___x_308_);
v___x_311_ = lp_lean_x2dftml_LeanFtml_imageUrlHost(v_val_307_, v___x_310_);
if (v___x_311_ == 0)
{
v_x_297_ = v_tail_300_;
goto _start;
}
else
{
lean_dec(v_s_296_);
return v___x_311_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___boxed(lean_object* v_s_313_, lean_object* v_x_314_){
_start:
{
uint8_t v_res_315_; lean_object* v_r_316_; 
v_res_315_ = lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0(v_s_313_, v_x_314_);
lean_dec(v_x_314_);
v_r_316_ = lean_box(v_res_315_);
return v_r_316_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__1(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__0));
v___x_319_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__3(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__2));
v___x_322_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_321_);
return v___x_322_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__5(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__4));
v___x_325_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__7(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__6));
v___x_328_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_327_);
return v___x_328_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__9(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__8));
v___x_331_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__10(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_box(0);
v___x_333_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__9, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__9);
v___x_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__11(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_335_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__10, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__10);
v___x_336_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__7, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__7);
v___x_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___x_335_);
return v___x_337_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__12(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__11, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__11);
v___x_339_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__5, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__5);
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__13(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__12, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__12);
v___x_342_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__3, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__3);
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
return v___x_343_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__14(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__13, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__13);
v___x_345_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__1, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__1);
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
return v___x_346_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageUrlHere(lean_object* v_s_347_){
_start:
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__14, &lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_imageUrlHere___closed__14);
v___x_349_ = lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0(v_s_347_, v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlHere___boxed(lean_object* v_s_350_){
_start:
{
uint8_t v_res_351_; lean_object* v_r_352_; 
v_res_351_ = lp_lean_x2dftml_LeanFtml_imageUrlHere(v_s_350_);
v_r_352_ = lean_box(v_res_351_);
return v_r_352_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageUrlMatches(lean_object* v_x_353_){
_start:
{
if (lean_obj_tag(v_x_353_) == 0)
{
uint8_t v___x_354_; 
v___x_354_ = lp_lean_x2dftml_LeanFtml_imageUrlHere(v_x_353_);
return v___x_354_;
}
else
{
lean_object* v_tail_355_; uint8_t v___x_356_; 
v_tail_355_ = lean_ctor_get(v_x_353_, 1);
lean_inc(v_tail_355_);
v___x_356_ = lp_lean_x2dftml_LeanFtml_imageUrlHere(v_x_353_);
if (v___x_356_ == 0)
{
v_x_353_ = v_tail_355_;
goto _start;
}
else
{
lean_dec(v_tail_355_);
return v___x_356_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageUrlMatches___boxed(lean_object* v_x_358_){
_start:
{
uint8_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = lp_lean_x2dftml_LeanFtml_imageUrlMatches(v_x_358_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimImageHrefWs(lean_object* v_bs_361_){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = l_List_reverse___redArg(v_bs_361_);
v___x_363_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(v___x_362_);
lean_dec(v___x_362_);
v___x_364_ = l_List_reverse___redArg(v___x_363_);
return v___x_364_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__0));
v___x_367_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0(lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
if (lean_obj_tag(v_a_368_) == 0)
{
lean_object* v___x_370_; 
v___x_370_ = l_List_reverse___redArg(v_a_369_);
return v___x_370_;
}
else
{
lean_object* v_head_371_; lean_object* v_tail_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_396_; 
v_head_371_ = lean_ctor_get(v_a_368_, 0);
v_tail_372_ = lean_ctor_get(v_a_368_, 1);
v_isSharedCheck_396_ = !lean_is_exclusive(v_a_368_);
if (v_isSharedCheck_396_ == 0)
{
v___x_374_ = v_a_368_;
v_isShared_375_ = v_isSharedCheck_396_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_tail_372_);
lean_inc(v_head_371_);
lean_dec(v_a_368_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_396_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___y_377_; lean_object* v_fst_382_; lean_object* v_snd_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v_fst_382_ = lean_ctor_get(v_head_371_, 0);
v_snd_383_ = lean_ctor_get(v_head_371_, 1);
v___x_384_ = lean_obj_once(&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1, &lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1);
v___x_385_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_382_, v___x_384_);
if (v___x_385_ == 0)
{
v___y_377_ = v_head_371_;
goto v___jp_376_;
}
else
{
lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_393_; 
lean_inc(v_snd_383_);
lean_inc(v_fst_382_);
v_isSharedCheck_393_ = !lean_is_exclusive(v_head_371_);
if (v_isSharedCheck_393_ == 0)
{
lean_object* v_unused_394_; lean_object* v_unused_395_; 
v_unused_394_ = lean_ctor_get(v_head_371_, 1);
lean_dec(v_unused_394_);
v_unused_395_ = lean_ctor_get(v_head_371_, 0);
lean_dec(v_unused_395_);
v___x_387_ = v_head_371_;
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
else
{
lean_dec(v_head_371_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_389_ = lp_lean_x2dftml_LeanFtml_rtrimImageHrefWs(v_snd_383_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v___x_389_);
v___x_391_ = v___x_387_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_fst_382_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
v___y_377_ = v___x_391_;
goto v___jp_376_;
}
}
}
v___jp_376_:
{
lean_object* v___x_379_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 1, v_a_369_);
lean_ctor_set(v___x_374_, 0, v___y_377_);
v___x_379_ = v___x_374_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___y_377_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_a_369_);
v___x_379_ = v_reuseFailAlloc_381_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
v_a_368_ = v_tail_372_;
v_a_369_ = v___x_379_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__0));
v___x_399_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1(lean_object* v_snd_400_, lean_object* v_x_401_, lean_object* v_x_402_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
return v_x_401_;
}
else
{
lean_object* v_head_403_; lean_object* v_tail_404_; lean_object* v___x_405_; 
v_head_403_ = lean_ctor_get(v_x_402_, 0);
lean_inc(v_head_403_);
v_tail_404_ = lean_ctor_get(v_x_402_, 1);
lean_inc(v_tail_404_);
lean_dec_ref_known(v_x_402_, 2);
v___x_405_ = lp_lean_x2dftml_LeanFtml_lookupB(v_snd_400_, v_head_403_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_dec(v_head_403_);
v_x_402_ = v_tail_404_;
goto _start;
}
else
{
lean_object* v_val_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v_val_407_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_val_407_);
lean_dec_ref_known(v___x_405_, 1);
v___x_408_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1);
v___x_409_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_head_403_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; 
v___x_410_ = lp_lean_x2dftml_LeanFtml_omSetB(v_x_401_, v_head_403_, v_val_407_);
v_x_401_ = v___x_410_;
v_x_402_ = v_tail_404_;
goto _start;
}
else
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_val_407_);
v___x_413_ = lp_lean_x2dftml_LeanFtml_omSetB(v_x_401_, v_head_403_, v___x_412_);
v_x_401_ = v___x_413_;
v_x_402_ = v_tail_404_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___boxed(lean_object* v_snd_415_, lean_object* v_x_416_, lean_object* v_x_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1(v_snd_415_, v_x_416_, v_x_417_);
lean_dec(v_snd_415_);
return v_res_418_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__4(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__3));
v___x_428_ = l_String_toListImpl(v___x_427_);
return v___x_428_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__6(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__5));
v___x_431_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__7(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__6, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__6);
v___x_433_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_432_);
return v___x_433_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__8(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_434_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__7, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__7);
v___x_435_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__4, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__4);
v___x_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
lean_ctor_set(v___x_436_, 1, v___x_434_);
return v___x_436_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__10(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__9));
v___x_439_ = l_String_toListImpl(v___x_438_);
return v___x_439_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__12(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__11));
v___x_442_ = l_String_toListImpl(v___x_441_);
return v___x_442_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__14(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__13));
v___x_445_ = l_String_toListImpl(v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__15(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_446_ = lean_box(0);
v___x_447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__8, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__8);
v___x_448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___x_446_);
return v___x_448_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__17(void){
_start:
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lp_lean_x2dftml_LeanFtml_isWsByte(v___x_451_);
return v___x_452_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__19(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__18));
v___x_455_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_454_);
return v___x_455_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__21(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__20));
v___x_458_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__23(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__22));
v___x_461_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_460_);
return v___x_461_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__25(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__24));
v___x_464_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__27(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__26));
v___x_467_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_466_);
return v___x_467_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__29(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__28));
v___x_470_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_469_);
return v___x_470_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__30(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_box(0);
v___x_472_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1___closed__1);
v___x_473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set(v___x_473_, 1, v___x_471_);
return v___x_473_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__31(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_474_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__30, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__30_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__30);
v___x_475_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__29, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__29);
v___x_476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
lean_ctor_set(v___x_476_, 1, v___x_474_);
return v___x_476_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__32(void){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__31, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__31);
v___x_478_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__27, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__27);
v___x_479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
lean_ctor_set(v___x_479_, 1, v___x_477_);
return v___x_479_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__33(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_480_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__32, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__32);
v___x_481_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__25, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__25);
v___x_482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v___x_480_);
return v___x_482_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__34(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__33, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__33);
v___x_484_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__23, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__23);
v___x_485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
lean_ctor_set(v___x_485_, 1, v___x_483_);
return v___x_485_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__35(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__34, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__34);
v___x_487_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__21, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__21);
v___x_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
lean_ctor_set(v___x_488_, 1, v___x_486_);
return v___x_488_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__36(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__35, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__35);
v___x_490_ = lean_obj_once(&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1, &lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1);
v___x_491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___x_489_);
return v___x_491_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__37(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v_keys_494_; 
v___x_492_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__36, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__36);
v___x_493_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__19, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__19);
v_keys_494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_keys_494_, 0, v___x_493_);
lean_ctor_set(v_keys_494_, 1, v___x_492_);
return v_keys_494_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageProcess(lean_object* v_whole_498_, lean_object* v_align_499_, lean_object* v_body_500_, lean_object* v_toks_501_){
_start:
{
lean_object* v___y_503_; lean_object* v___y_504_; lean_object* v___y_505_; uint8_t v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; uint8_t v___y_523_; lean_object* v___y_524_; uint8_t v___y_525_; lean_object* v___y_526_; lean_object* v___y_530_; lean_object* v___y_531_; uint8_t v___y_532_; uint8_t v___y_533_; uint8_t v___y_534_; uint8_t v___y_535_; lean_object* v___y_536_; lean_object* v___y_539_; lean_object* v___y_540_; uint8_t v___y_541_; uint8_t v___y_542_; uint8_t v___y_543_; lean_object* v___y_544_; uint8_t v___y_552_; uint8_t v___y_553_; lean_object* v___y_554_; uint8_t v___y_555_; lean_object* v___y_556_; lean_object* v___y_570_; uint8_t v___y_571_; lean_object* v___y_572_; uint8_t v___y_573_; lean_object* v___y_579_; uint8_t v___y_580_; lean_object* v___y_581_; uint8_t v___y_582_; lean_object* v___y_583_; lean_object* v___x_587_; uint8_t v___x_588_; lean_object* v___y_590_; lean_object* v___y_591_; uint8_t v___y_592_; lean_object* v___y_593_; uint8_t v___y_594_; lean_object* v___y_598_; lean_object* v___y_599_; uint8_t v___y_600_; uint8_t v___y_601_; lean_object* v___y_602_; uint8_t v___y_603_; 
v___x_587_ = lean_unsigned_to_nat(255u);
v___x_588_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_587_, v_whole_498_);
if (v___x_588_ == 0)
{
uint8_t v___x_605_; lean_object* v___y_607_; lean_object* v___y_608_; lean_object* v_fst_609_; uint8_t v_snd_610_; lean_object* v___y_619_; lean_object* v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v_fst_625_; lean_object* v_snd_626_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_605_ = 1;
v___x_637_ = lean_box(0);
v___x_638_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__38));
lean_inc(v_body_500_);
v___x_639_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v___x_638_, v_body_500_);
if (lean_obj_tag(v___x_639_) == 0)
{
v_fst_625_ = v_body_500_;
v_snd_626_ = v___x_637_;
goto v___jp_624_;
}
else
{
lean_object* v_val_640_; lean_object* v_fst_641_; lean_object* v_snd_642_; lean_object* v___x_643_; 
lean_dec(v_body_500_);
v_val_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_val_640_);
lean_dec_ref_known(v___x_639_, 1);
v_fst_641_ = lean_ctor_get(v_val_640_, 0);
lean_inc(v_fst_641_);
v_snd_642_ = lean_ctor_get(v_val_640_, 1);
lean_inc(v_snd_642_);
lean_dec(v_val_640_);
v___x_643_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_snd_642_);
lean_dec(v_snd_642_);
v_fst_625_ = v_fst_641_;
v_snd_626_ = v___x_643_;
goto v___jp_624_;
}
v___jp_606_:
{
lean_object* v_linkNow_611_; 
v_linkNow_611_ = lp_lean_x2dftml_LeanFtml_lookupB(v_fst_609_, v___y_608_);
if (lean_obj_tag(v_linkNow_611_) == 0)
{
lean_dec(v_whole_498_);
v___y_570_ = v___y_607_;
v___y_571_ = v_snd_610_;
v___y_572_ = v_fst_609_;
v___y_573_ = v___x_588_;
goto v___jp_569_;
}
else
{
lean_object* v_val_612_; uint8_t v___x_613_; 
v_val_612_ = lean_ctor_get(v_linkNow_611_, 0);
lean_inc(v_val_612_);
lean_dec_ref_known(v_linkNow_611_, 1);
v___x_613_ = l_List_isEmpty___redArg(v_val_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; 
v___x_614_ = l_List_head_x3f___redArg(v_val_612_);
if (lean_obj_tag(v___x_614_) == 0)
{
uint8_t v___x_615_; 
v___x_615_ = lean_uint8_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__17, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__17);
v___y_598_ = v___y_607_;
v___y_599_ = v_val_612_;
v___y_600_ = v___x_605_;
v___y_601_ = v_snd_610_;
v___y_602_ = v_fst_609_;
v___y_603_ = v___x_615_;
goto v___jp_597_;
}
else
{
lean_object* v_val_616_; uint8_t v___x_617_; 
v_val_616_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_val_616_);
lean_dec_ref_known(v___x_614_, 1);
v___x_617_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_val_616_);
lean_dec(v_val_616_);
v___y_598_ = v___y_607_;
v___y_599_ = v_val_612_;
v___y_600_ = v___x_605_;
v___y_601_ = v_snd_610_;
v___y_602_ = v_fst_609_;
v___y_603_ = v___x_617_;
goto v___jp_597_;
}
}
else
{
v___y_590_ = v___y_607_;
v___y_591_ = v_val_612_;
v___y_592_ = v_snd_610_;
v___y_593_ = v_fst_609_;
v___y_594_ = v___x_588_;
goto v___jp_589_;
}
}
}
v___jp_618_:
{
lean_object* v___x_623_; 
lean_inc(v___y_620_);
v___x_623_ = lp_lean_x2dftml_LeanFtml_omSetB(v___y_621_, v___y_620_, v___y_622_);
v___y_607_ = v___y_619_;
v___y_608_ = v___y_620_;
v_fst_609_ = v___x_623_;
v_snd_610_ = v___x_605_;
goto v___jp_606_;
}
v___jp_624_:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_keys_629_; lean_object* v_attr2_630_; lean_object* v_linkV_631_; 
v___x_627_ = lean_obj_once(&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1, &lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0___closed__1);
v___x_628_ = lean_box(0);
v_keys_629_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__37, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__37);
v_attr2_630_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__1(v_snd_626_, v___x_628_, v_keys_629_);
lean_dec(v_snd_626_);
v_linkV_631_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attr2_630_, v___x_627_);
if (lean_obj_tag(v_linkV_631_) == 0)
{
v___y_607_ = v_fst_625_;
v___y_608_ = v___x_627_;
v_fst_609_ = v_attr2_630_;
v_snd_610_ = v___x_588_;
goto v___jp_606_;
}
else
{
lean_object* v_val_632_; lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v_val_632_ = lean_ctor_get(v_linkV_631_, 0);
lean_inc(v_val_632_);
lean_dec_ref_known(v_linkV_631_, 1);
v___x_633_ = l_List_head_x3f___redArg(v_val_632_);
v___x_634_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__16));
v___x_635_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_633_, v___x_634_);
lean_dec(v___x_633_);
if (v___x_635_ == 0)
{
lean_dec(v_val_632_);
v___y_607_ = v_fst_625_;
v___y_608_ = v___x_627_;
v_fst_609_ = v_attr2_630_;
v_snd_610_ = v___x_635_;
goto v___jp_606_;
}
else
{
if (lean_obj_tag(v_val_632_) == 0)
{
v___y_619_ = v_fst_625_;
v___y_620_ = v___x_627_;
v___y_621_ = v_attr2_630_;
v___y_622_ = v_val_632_;
goto v___jp_618_;
}
else
{
lean_object* v_tail_636_; 
v_tail_636_ = lean_ctor_get(v_val_632_, 1);
lean_inc(v_tail_636_);
lean_dec_ref_known(v_val_632_, 2);
v___y_619_ = v_fst_625_;
v___y_620_ = v___x_627_;
v___y_621_ = v_attr2_630_;
v___y_622_ = v_tail_636_;
goto v___jp_618_;
}
}
}
}
}
else
{
lean_object* v___x_644_; 
lean_dec(v_body_500_);
lean_dec(v_align_499_);
v___x_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_644_, 0, v_whole_498_);
lean_ctor_set(v___x_644_, 1, v_toks_501_);
return v___x_644_;
}
v___jp_502_:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
lean_inc_n(v___y_505_, 2);
v___x_506_ = l_List_appendTR___redArg(v___y_505_, v___y_503_);
v___x_507_ = l_List_appendTR___redArg(v___x_506_, v___y_505_);
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v___y_504_);
return v___x_508_;
}
v___jp_509_:
{
lean_object* v_opts_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_opts_513_ = l_List_appendTR___redArg(v___y_511_, v___y_512_);
v___x_514_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__0));
v___x_515_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_514_, v_opts_513_, v_toks_501_);
if (v___y_510_ == 0)
{
lean_object* v_fst_516_; lean_object* v_snd_517_; lean_object* v___x_518_; 
v_fst_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_fst_516_);
v_snd_517_ = lean_ctor_get(v___x_515_, 1);
lean_inc(v_snd_517_);
lean_dec_ref(v___x_515_);
v___x_518_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__2));
v___y_503_ = v_fst_516_;
v___y_504_ = v_snd_517_;
v___y_505_ = v___x_518_;
goto v___jp_502_;
}
else
{
lean_object* v_fst_519_; lean_object* v_snd_520_; lean_object* v___x_521_; 
v_fst_519_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_fst_519_);
v_snd_520_ = lean_ctor_get(v___x_515_, 1);
lean_inc(v_snd_520_);
lean_dec_ref(v___x_515_);
v___x_521_ = lean_box(0);
v___y_503_ = v_fst_519_;
v___y_504_ = v_snd_520_;
v___y_505_ = v___x_521_;
goto v___jp_502_;
}
}
v___jp_522_:
{
if (v___y_525_ == 0)
{
v___y_510_ = v___y_523_;
v___y_511_ = v___y_526_;
v___y_512_ = v___y_524_;
goto v___jp_509_;
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__8, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__8);
v___x_528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
lean_ctor_set(v___x_528_, 1, v___y_524_);
v___y_510_ = v___y_523_;
v___y_511_ = v___y_526_;
v___y_512_ = v___x_528_;
goto v___jp_509_;
}
}
v___jp_529_:
{
lean_object* v___x_537_; 
v___x_537_ = l_List_appendTR___redArg(v___y_530_, v___y_536_);
if (v___y_534_ == 0)
{
v___y_523_ = v___y_532_;
v___y_524_ = v___y_531_;
v___y_525_ = v___y_535_;
v___y_526_ = v___x_537_;
goto v___jp_522_;
}
else
{
if (v___y_533_ == 0)
{
v___y_510_ = v___y_532_;
v___y_511_ = v___x_537_;
v___y_512_ = v___y_531_;
goto v___jp_509_;
}
else
{
v___y_523_ = v___y_532_;
v___y_524_ = v___y_531_;
v___y_525_ = v___y_535_;
v___y_526_ = v___x_537_;
goto v___jp_522_;
}
}
}
v___jp_538_:
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = l_List_appendTR___redArg(v___y_539_, v___y_544_);
v___x_546_ = l_List_isEmpty___redArg(v_align_499_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_547_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__10, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__10);
v___x_548_ = lp_lean_x2dftml_LeanFtml_textVal(v_align_499_);
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_547_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
lean_inc(v___y_540_);
v___x_550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v___y_540_);
v___y_530_ = v___x_545_;
v___y_531_ = v___y_540_;
v___y_532_ = v___x_546_;
v___y_533_ = v___y_541_;
v___y_534_ = v___y_542_;
v___y_535_ = v___y_543_;
v___y_536_ = v___x_550_;
goto v___jp_529_;
}
else
{
lean_dec(v_align_499_);
lean_inc(v___y_540_);
v___y_530_ = v___x_545_;
v___y_531_ = v___y_540_;
v___y_532_ = v___x_546_;
v___y_533_ = v___y_541_;
v___y_534_ = v___y_542_;
v___y_535_ = v___y_543_;
v___y_536_ = v___y_540_;
goto v___jp_529_;
}
}
v___jp_551_:
{
lean_object* v___x_557_; lean_object* v_attr4_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_557_ = lean_box(0);
v_attr4_558_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_imageProcess_spec__0(v___y_554_, v___x_557_);
v___x_559_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__12, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__12);
v___x_560_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_556_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_559_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__14, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__14);
v___x_563_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v_attr4_558_, v___x_557_);
v___x_564_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
v___x_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_562_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
v___x_566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_557_);
v___x_567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_561_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
if (v___y_553_ == 0)
{
v___y_539_ = v___x_567_;
v___y_540_ = v___x_557_;
v___y_541_ = v___y_552_;
v___y_542_ = v___y_553_;
v___y_543_ = v___y_555_;
v___y_544_ = v___x_557_;
goto v___jp_538_;
}
else
{
lean_object* v___x_568_; 
v___x_568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__15, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__15);
v___y_539_ = v___x_567_;
v___y_540_ = v___x_557_;
v___y_541_ = v___y_552_;
v___y_542_ = v___y_553_;
v___y_543_ = v___y_555_;
v___y_544_ = v___x_568_;
goto v___jp_538_;
}
}
v___jp_569_:
{
lean_object* v___x_574_; lean_object* v___x_575_; uint8_t v_srcStar_576_; 
v___x_574_ = l_List_head_x3f___redArg(v___y_570_);
v___x_575_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__16));
v_srcStar_576_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_574_, v___x_575_);
lean_dec(v___x_574_);
if (v_srcStar_576_ == 0)
{
v___y_552_ = v___y_573_;
v___y_553_ = v___y_571_;
v___y_554_ = v___y_572_;
v___y_555_ = v_srcStar_576_;
v___y_556_ = v___y_570_;
goto v___jp_551_;
}
else
{
if (lean_obj_tag(v___y_570_) == 0)
{
v___y_552_ = v___y_573_;
v___y_553_ = v___y_571_;
v___y_554_ = v___y_572_;
v___y_555_ = v_srcStar_576_;
v___y_556_ = v___y_570_;
goto v___jp_551_;
}
else
{
lean_object* v_tail_577_; 
v_tail_577_ = lean_ctor_get(v___y_570_, 1);
lean_inc(v_tail_577_);
lean_dec_ref_known(v___y_570_, 2);
v___y_552_ = v___y_573_;
v___y_553_ = v___y_571_;
v___y_554_ = v___y_572_;
v___y_555_ = v_srcStar_576_;
v___y_556_ = v_tail_577_;
goto v___jp_551_;
}
}
}
v___jp_578_:
{
uint8_t v___x_584_; 
v___x_584_ = lp_lean_x2dftml_LeanFtml_imageUrlHere(v___y_581_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
lean_dec(v___y_583_);
lean_dec(v___y_579_);
lean_dec(v_align_499_);
v___x_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_585_, 0, v_whole_498_);
lean_ctor_set(v___x_585_, 1, v_toks_501_);
return v___x_585_;
}
else
{
if (v___y_580_ == 0)
{
lean_dec(v_whole_498_);
v___y_570_ = v___y_579_;
v___y_571_ = v___y_582_;
v___y_572_ = v___y_583_;
v___y_573_ = v___y_580_;
goto v___jp_569_;
}
else
{
lean_object* v___x_586_; 
lean_dec(v___y_583_);
lean_dec(v___y_579_);
lean_dec(v_align_499_);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v_whole_498_);
lean_ctor_set(v___x_586_, 1, v_toks_501_);
return v___x_586_;
}
}
}
v___jp_589_:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lean_obj_once(&lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1, &lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1);
lean_inc(v___y_591_);
v___x_596_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v___x_595_, v___y_591_);
if (lean_obj_tag(v___x_596_) == 0)
{
if (v___y_594_ == 0)
{
lean_dec(v___y_591_);
lean_dec(v_whole_498_);
v___y_570_ = v___y_590_;
v___y_571_ = v___y_592_;
v___y_572_ = v___y_593_;
v___y_573_ = v___x_588_;
goto v___jp_569_;
}
else
{
v___y_579_ = v___y_590_;
v___y_580_ = v___y_594_;
v___y_581_ = v___y_591_;
v___y_582_ = v___y_592_;
v___y_583_ = v___y_593_;
goto v___jp_578_;
}
}
else
{
lean_dec_ref_known(v___x_596_, 1);
v___y_579_ = v___y_590_;
v___y_580_ = v___y_594_;
v___y_581_ = v___y_591_;
v___y_582_ = v___y_592_;
v___y_583_ = v___y_593_;
goto v___jp_578_;
}
}
v___jp_597_:
{
if (v___y_603_ == 0)
{
v___y_590_ = v___y_598_;
v___y_591_ = v___y_599_;
v___y_592_ = v___y_601_;
v___y_593_ = v___y_602_;
v___y_594_ = v___y_603_;
goto v___jp_589_;
}
else
{
lean_object* v___x_604_; 
lean_dec(v___y_602_);
lean_dec(v___y_599_);
lean_dec(v___y_598_);
lean_dec(v_align_499_);
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v_whole_498_);
lean_ctor_set(v___x_604_, 1, v_toks_501_);
return v___x_604_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan_go(lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_){
_start:
{
if (lean_obj_tag(v_a_645_) == 0)
{
lean_object* v___x_648_; 
v___x_648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_648_, 0, v_a_645_);
lean_ctor_set(v___x_648_, 1, v_a_646_);
return v___x_648_;
}
else
{
lean_object* v_head_649_; lean_object* v_tail_650_; lean_object* v_zero_651_; uint8_t v_isZero_652_; 
v_head_649_ = lean_ctor_get(v_a_645_, 0);
v_tail_650_ = lean_ctor_get(v_a_645_, 1);
v_zero_651_ = lean_unsigned_to_nat(0u);
v_isZero_652_ = lean_nat_dec_eq(v_a_647_, v_zero_651_);
if (v_isZero_652_ == 1)
{
lean_object* v___x_653_; 
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v_a_645_);
lean_ctor_set(v___x_653_, 1, v_a_646_);
return v___x_653_;
}
else
{
lean_object* v_one_654_; lean_object* v_n_655_; lean_object* v___x_656_; 
lean_inc(v_tail_650_);
lean_inc(v_head_649_);
v_one_654_ = lean_unsigned_to_nat(1u);
v_n_655_ = lean_nat_sub(v_a_647_, v_one_654_);
v___x_656_ = lp_lean_x2dftml_LeanFtml_imageMatchAt(v_a_645_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v___x_657_; lean_object* v_fst_658_; lean_object* v_snd_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_667_; 
v___x_657_ = lp_lean_x2dftml_LeanFtml_imageScan_go(v_tail_650_, v_a_646_, v_n_655_);
lean_dec(v_n_655_);
v_fst_658_ = lean_ctor_get(v___x_657_, 0);
v_snd_659_ = lean_ctor_get(v___x_657_, 1);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_667_ == 0)
{
v___x_661_ = v___x_657_;
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_snd_659_);
lean_inc(v_fst_658_);
lean_dec(v___x_657_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_663_, 0, v_head_649_);
lean_ctor_set(v___x_663_, 1, v_fst_658_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v___x_663_);
v___x_665_ = v___x_661_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_snd_659_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
else
{
lean_object* v_val_668_; lean_object* v_snd_669_; lean_object* v_snd_670_; lean_object* v_fst_671_; lean_object* v_fst_672_; lean_object* v_fst_673_; lean_object* v_snd_674_; lean_object* v___x_675_; lean_object* v_fst_676_; lean_object* v_snd_677_; lean_object* v___x_678_; lean_object* v_fst_679_; lean_object* v_snd_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_688_; 
lean_dec(v_tail_650_);
lean_dec(v_head_649_);
v_val_668_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_val_668_);
lean_dec_ref_known(v___x_656_, 1);
v_snd_669_ = lean_ctor_get(v_val_668_, 1);
lean_inc(v_snd_669_);
v_snd_670_ = lean_ctor_get(v_snd_669_, 1);
lean_inc(v_snd_670_);
v_fst_671_ = lean_ctor_get(v_val_668_, 0);
lean_inc(v_fst_671_);
lean_dec(v_val_668_);
v_fst_672_ = lean_ctor_get(v_snd_669_, 0);
lean_inc(v_fst_672_);
lean_dec(v_snd_669_);
v_fst_673_ = lean_ctor_get(v_snd_670_, 0);
lean_inc(v_fst_673_);
v_snd_674_ = lean_ctor_get(v_snd_670_, 1);
lean_inc(v_snd_674_);
lean_dec(v_snd_670_);
v___x_675_ = lp_lean_x2dftml_LeanFtml_imageProcess(v_fst_671_, v_fst_672_, v_fst_673_, v_a_646_);
v_fst_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc(v_fst_676_);
v_snd_677_ = lean_ctor_get(v___x_675_, 1);
lean_inc(v_snd_677_);
lean_dec_ref(v___x_675_);
v___x_678_ = lp_lean_x2dftml_LeanFtml_imageScan_go(v_snd_674_, v_snd_677_, v_n_655_);
lean_dec(v_n_655_);
v_fst_679_ = lean_ctor_get(v___x_678_, 0);
v_snd_680_ = lean_ctor_get(v___x_678_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_688_ == 0)
{
v___x_682_ = v___x_678_;
v_isShared_683_ = v_isSharedCheck_688_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_snd_680_);
lean_inc(v_fst_679_);
lean_dec(v___x_678_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_688_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_684_; lean_object* v___x_686_; 
v___x_684_ = l_List_appendTR___redArg(v_fst_676_, v_fst_679_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v___x_684_);
v___x_686_ = v___x_682_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_snd_680_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan_go___boxed(lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = lp_lean_x2dftml_LeanFtml_imageScan_go(v_a_689_, v_a_690_, v_a_691_);
lean_dec(v_a_691_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan(lean_object* v_src_693_, lean_object* v_toks_694_){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_695_ = l_List_lengthTR___redArg(v_src_693_);
v___x_696_ = lean_unsigned_to_nat(1u);
v___x_697_ = lean_nat_add(v___x_695_, v___x_696_);
lean_dec(v___x_695_);
v___x_698_ = lp_lean_x2dftml_LeanFtml_imageScan_go(v_src_693_, v_toks_694_, v___x_697_);
lean_dec(v___x_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageRule(lean_object* v_st_700_){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageRule___closed__0));
v___x_702_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_700_, v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan_go(lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
if (lean_obj_tag(v_a_706_) == 0)
{
lean_object* v___x_709_; 
v___x_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_709_, 0, v_a_706_);
lean_ctor_set(v___x_709_, 1, v_a_707_);
return v___x_709_;
}
else
{
lean_object* v_head_710_; lean_object* v_tail_711_; lean_object* v_zero_712_; uint8_t v_isZero_713_; 
v_head_710_ = lean_ctor_get(v_a_706_, 0);
v_tail_711_ = lean_ctor_get(v_a_706_, 1);
v_zero_712_ = lean_unsigned_to_nat(0u);
v_isZero_713_ = lean_nat_dec_eq(v_a_708_, v_zero_712_);
if (v_isZero_713_ == 1)
{
lean_object* v___x_714_; 
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v_a_706_);
lean_ctor_set(v___x_714_, 1, v_a_707_);
return v___x_714_;
}
else
{
lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_768_; 
lean_inc(v_tail_711_);
lean_inc(v_head_710_);
v_isSharedCheck_768_ = !lean_is_exclusive(v_a_706_);
if (v_isSharedCheck_768_ == 0)
{
lean_object* v_unused_769_; lean_object* v_unused_770_; 
v_unused_769_ = lean_ctor_get(v_a_706_, 1);
lean_dec(v_unused_769_);
v_unused_770_ = lean_ctor_get(v_a_706_, 0);
lean_dec(v_unused_770_);
v___x_716_ = v_a_706_;
v_isShared_717_ = v_isSharedCheck_768_;
goto v_resetjp_715_;
}
else
{
lean_dec(v_a_706_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_768_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v_one_718_; lean_object* v_n_719_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___x_750_; uint8_t v___x_751_; 
v_one_718_ = lean_unsigned_to_nat(1u);
v_n_719_ = lean_nat_sub(v_a_708_, v_one_718_);
v___x_750_ = lean_unsigned_to_nat(10u);
v___x_751_ = lean_nat_dec_eq(v_head_710_, v___x_750_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___y_755_; uint8_t v___x_766_; 
v___x_752_ = l_List_head_x3f___redArg(v_tail_711_);
v___x_753_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__0));
v___x_766_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_752_, v___x_753_);
lean_dec(v___x_752_);
if (v___x_766_ == 0)
{
goto v___jp_720_;
}
else
{
if (lean_obj_tag(v_tail_711_) == 0)
{
v___y_755_ = v_tail_711_;
goto v___jp_754_;
}
else
{
lean_object* v_tail_767_; 
v_tail_767_ = lean_ctor_get(v_tail_711_, 1);
lean_inc(v_tail_767_);
v___y_755_ = v_tail_767_;
goto v___jp_754_;
}
}
v___jp_754_:
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = l_List_head_x3f___redArg(v___y_755_);
lean_dec(v___y_755_);
v___x_757_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_756_, v___x_753_);
lean_dec(v___x_756_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
lean_del_object(v___x_716_);
v___x_758_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1));
v___x_759_ = lean_box(0);
v___x_760_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_758_, v___x_759_, v_a_707_);
if (lean_obj_tag(v_tail_711_) == 0)
{
lean_object* v_fst_761_; lean_object* v_snd_762_; 
v_fst_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_fst_761_);
v_snd_762_ = lean_ctor_get(v___x_760_, 1);
lean_inc(v_snd_762_);
lean_dec_ref(v___x_760_);
v___y_735_ = v_snd_762_;
v___y_736_ = v_fst_761_;
v___y_737_ = v_tail_711_;
goto v___jp_734_;
}
else
{
lean_object* v_fst_763_; lean_object* v_snd_764_; lean_object* v_tail_765_; 
v_fst_763_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_fst_763_);
v_snd_764_ = lean_ctor_get(v___x_760_, 1);
lean_inc(v_snd_764_);
lean_dec_ref(v___x_760_);
v_tail_765_ = lean_ctor_get(v_tail_711_, 1);
lean_inc(v_tail_765_);
lean_dec_ref_known(v_tail_711_, 2);
v___y_735_ = v_snd_764_;
v___y_736_ = v_fst_763_;
v___y_737_ = v_tail_765_;
goto v___jp_734_;
}
}
else
{
goto v___jp_720_;
}
}
}
else
{
goto v___jp_720_;
}
v___jp_720_:
{
lean_object* v___x_721_; lean_object* v_fst_722_; lean_object* v_snd_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_733_; 
v___x_721_ = lp_lean_x2dftml_LeanFtml_newlineScan_go(v_tail_711_, v_a_707_, v_n_719_);
lean_dec(v_n_719_);
v_fst_722_ = lean_ctor_get(v___x_721_, 0);
v_snd_723_ = lean_ctor_get(v___x_721_, 1);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_733_ == 0)
{
v___x_725_ = v___x_721_;
v_isShared_726_ = v_isSharedCheck_733_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_snd_723_);
lean_inc(v_fst_722_);
lean_dec(v___x_721_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_733_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 1, v_fst_722_);
v___x_728_ = v___x_716_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_head_710_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_fst_722_);
v___x_728_ = v_reuseFailAlloc_732_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_730_; 
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v___x_728_);
v___x_730_ = v___x_725_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_728_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_snd_723_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
v___jp_734_:
{
lean_object* v___x_738_; lean_object* v_fst_739_; lean_object* v_snd_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_749_; 
v___x_738_ = lp_lean_x2dftml_LeanFtml_newlineScan_go(v___y_737_, v___y_735_, v_n_719_);
lean_dec(v_n_719_);
v_fst_739_ = lean_ctor_get(v___x_738_, 0);
v_snd_740_ = lean_ctor_get(v___x_738_, 1);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_749_ == 0)
{
v___x_742_ = v___x_738_;
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_snd_740_);
lean_inc(v_fst_739_);
lean_dec(v___x_738_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
v___x_744_ = l_List_appendTR___redArg(v___y_736_, v_fst_739_);
v___x_745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_745_, 0, v_head_710_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v___x_745_);
v___x_747_ = v___x_742_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_snd_740_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan_go___boxed(lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = lp_lean_x2dftml_LeanFtml_newlineScan_go(v_a_771_, v_a_772_, v_a_773_);
lean_dec(v_a_773_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan(lean_object* v_src_775_, lean_object* v_toks_776_){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_777_ = l_List_lengthTR___redArg(v_src_775_);
v___x_778_ = lean_unsigned_to_nat(1u);
v___x_779_ = lean_nat_add(v___x_777_, v___x_778_);
lean_dec(v___x_777_);
v___x_780_ = lp_lean_x2dftml_LeanFtml_newlineScan_go(v_src_775_, v_toks_776_, v___x_779_);
lean_dec(v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineRule(lean_object* v_st_782_){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_783_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineRule___closed__0));
v___x_784_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_782_, v___x_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorIdx___impl(lean_object* v_x_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = lean_obj_tag_nat(v_x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorIdx___impl___boxed(lean_object* v_x_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorIdx___impl(v_x_787_);
lean_dec_ref(v_x_787_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(lean_object* v_t_789_, lean_object* v_k_790_){
_start:
{
lean_object* v_a_791_; lean_object* v___x_792_; 
v_a_791_ = lean_ctor_get(v_t_789_, 0);
lean_inc(v_a_791_);
lean_dec_ref(v_t_789_);
v___x_792_ = lean_apply_1(v_k_790_, v_a_791_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim(lean_object* v_motive_793_, lean_object* v_ctorIdx_794_, lean_object* v_t_795_, lean_object* v_h_796_, lean_object* v_k_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_795_, v_k_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___boxed(lean_object* v_motive_799_, lean_object* v_ctorIdx_800_, lean_object* v_t_801_, lean_object* v_h_802_, lean_object* v_k_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim(v_motive_799_, v_ctorIdx_800_, v_t_801_, v_h_802_, v_k_803_);
lean_dec(v_ctorIdx_800_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_wsB_elim___redArg(lean_object* v_t_805_, lean_object* v_wsB_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_805_, v_wsB_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_wsB_elim(lean_object* v_motive_808_, lean_object* v_t_809_, lean_object* v_h_810_, lean_object* v_wsB_811_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_809_, v_wsB_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_phT_elim___redArg(lean_object* v_t_813_, lean_object* v_phT_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_813_, v_phT_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_phT_elim(lean_object* v_motive_816_, lean_object* v_t_817_, lean_object* v_h_818_, lean_object* v_phT_819_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_817_, v_phT_819_);
return v___x_820_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq(lean_object* v_x_821_, lean_object* v_x_822_){
_start:
{
if (lean_obj_tag(v_x_821_) == 0)
{
if (lean_obj_tag(v_x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v_a_824_; uint8_t v___x_825_; 
v_a_823_ = lean_ctor_get(v_x_821_, 0);
v_a_824_ = lean_ctor_get(v_x_822_, 0);
v___x_825_ = lean_nat_dec_eq(v_a_823_, v_a_824_);
return v___x_825_;
}
else
{
uint8_t v___x_826_; 
v___x_826_ = 0;
return v___x_826_;
}
}
else
{
if (lean_obj_tag(v_x_822_) == 0)
{
uint8_t v___x_827_; 
v___x_827_ = 0;
return v___x_827_;
}
else
{
lean_object* v_a_828_; lean_object* v_a_829_; uint8_t v___x_830_; 
v_a_828_ = lean_ctor_get(v_x_821_, 0);
v_a_829_ = lean_ctor_get(v_x_822_, 0);
v___x_830_ = lean_nat_dec_eq(v_a_828_, v_a_829_);
return v___x_830_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq___boxed(lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
uint8_t v_res_833_; lean_object* v_r_834_; 
v_res_833_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq(v_x_831_, v_x_832_);
lean_dec_ref(v_x_832_);
lean_dec_ref(v_x_831_);
v_r_834_ = lean_box(v_res_833_);
return v_r_834_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit(lean_object* v_x_835_, lean_object* v_x_836_){
_start:
{
uint8_t v___x_837_; 
v___x_837_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq(v_x_835_, v_x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit___boxed(lean_object* v_x_838_, lean_object* v_x_839_){
_start:
{
uint8_t v_res_840_; lean_object* v_r_841_; 
v_res_840_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit(v_x_838_, v_x_839_);
lean_dec_ref(v_x_839_);
lean_dec_ref(v_x_838_);
v_r_841_ = lean_box(v_res_840_);
return v_r_841_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_unsigned_to_nat(2u);
v___x_849_ = lean_nat_to_int(v___x_848_);
return v___x_849_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_unsigned_to_nat(1u);
v___x_851_ = lean_nat_to_int(v___x_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr(lean_object* v_x_858_, lean_object* v_prec_859_){
_start:
{
if (lean_obj_tag(v_x_858_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_880_; 
v_a_860_ = lean_ctor_get(v_x_858_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v_x_858_);
if (v_isSharedCheck_880_ == 0)
{
v___x_862_ = v_x_858_;
v_isShared_863_ = v_isSharedCheck_880_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v_x_858_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_880_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___y_865_; lean_object* v___x_876_; uint8_t v___x_877_; 
v___x_876_ = lean_unsigned_to_nat(1024u);
v___x_877_ = lean_nat_dec_le(v___x_876_, v_prec_859_);
if (v___x_877_ == 0)
{
lean_object* v___x_878_; 
v___x_878_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3, &lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3);
v___y_865_ = v___x_878_;
goto v___jp_864_;
}
else
{
lean_object* v___x_879_; 
v___x_879_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4, &lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4);
v___y_865_ = v___x_879_;
goto v___jp_864_;
}
v___jp_864_:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_866_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__2));
v___x_867_ = l_Nat_reprFast(v_a_860_);
if (v_isShared_863_ == 0)
{
lean_ctor_set_tag(v___x_862_, 3);
lean_ctor_set(v___x_862_, 0, v___x_867_);
v___x_869_ = v___x_862_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_867_);
v___x_869_ = v_reuseFailAlloc_875_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_870_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_866_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
lean_inc(v___y_865_);
v___x_871_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_871_, 0, v___y_865_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = 0;
v___x_873_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set_uint8(v___x_873_, sizeof(void*)*1, v___x_872_);
v___x_874_ = l_Repr_addAppParen(v___x_873_, v_prec_859_);
return v___x_874_;
}
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_901_; 
v_a_881_ = lean_ctor_get(v_x_858_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v_x_858_);
if (v_isSharedCheck_901_ == 0)
{
v___x_883_ = v_x_858_;
v_isShared_884_ = v_isSharedCheck_901_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v_x_858_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_901_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___y_886_; lean_object* v___x_897_; uint8_t v___x_898_; 
v___x_897_ = lean_unsigned_to_nat(1024u);
v___x_898_ = lean_nat_dec_le(v___x_897_, v_prec_859_);
if (v___x_898_ == 0)
{
lean_object* v___x_899_; 
v___x_899_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3, &lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3);
v___y_886_ = v___x_899_;
goto v___jp_885_;
}
else
{
lean_object* v___x_900_; 
v___x_900_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4, &lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4);
v___y_886_ = v___x_900_;
goto v___jp_885_;
}
v___jp_885_:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_890_; 
v___x_887_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__7));
v___x_888_ = l_Nat_reprFast(v_a_881_);
if (v_isShared_884_ == 0)
{
lean_ctor_set_tag(v___x_883_, 3);
lean_ctor_set(v___x_883_, 0, v___x_888_);
v___x_890_ = v___x_883_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_888_);
v___x_890_ = v_reuseFailAlloc_896_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_891_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_887_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
lean_inc(v___y_886_);
v___x_892_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_892_, 0, v___y_886_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = 0;
v___x_894_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_894_, 0, v___x_892_);
lean_ctor_set_uint8(v___x_894_, sizeof(void*)*1, v___x_893_);
v___x_895_ = l_Repr_addAppParen(v___x_894_, v_prec_859_);
return v___x_895_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___boxed(lean_object* v_x_902_, lean_object* v_prec_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = lp_lean_x2dftml_LeanFtml_instReprPUnit_repr(v_x_902_, v_prec_903_);
lean_dec(v_prec_903_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitBytes(lean_object* v_x_907_){
_start:
{
if (lean_obj_tag(v_x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v_a_908_ = lean_ctor_get(v_x_907_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v_x_907_, 1);
v___x_909_ = lean_box(0);
v___x_910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_910_, 0, v_a_908_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
return v___x_910_;
}
else
{
lean_object* v_a_911_; lean_object* v___x_912_; 
v_a_911_ = lean_ctor_get(v_x_907_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v_x_907_, 1);
v___x_912_ = lp_lean_x2dftml_LeanFtml_phBytes(v_a_911_);
return v___x_912_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitAt(lean_object* v_s_913_){
_start:
{
if (lean_obj_tag(v_s_913_) == 0)
{
lean_object* v___x_914_; 
v___x_914_ = lean_box(0);
return v___x_914_;
}
else
{
lean_object* v_head_915_; lean_object* v_tail_916_; lean_object* v___x_921_; uint8_t v___x_922_; 
v_head_915_ = lean_ctor_get(v_s_913_, 0);
v_tail_916_ = lean_ctor_get(v_s_913_, 1);
v___x_921_ = lean_unsigned_to_nat(32u);
v___x_922_ = lean_nat_dec_eq(v_head_915_, v___x_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_923_ = lean_unsigned_to_nat(9u);
v___x_924_ = lean_nat_dec_eq(v_head_915_, v___x_923_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_925_ = lean_unsigned_to_nat(10u);
v___x_926_ = lean_nat_dec_eq(v_head_915_, v___x_925_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; uint8_t v___x_928_; 
v___x_927_ = lean_unsigned_to_nat(13u);
v___x_928_ = lean_nat_dec_eq(v_head_915_, v___x_927_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; 
v___x_929_ = lp_lean_x2dftml_LeanFtml_readPlaceholder(v_s_913_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_930_; 
v___x_930_ = lean_box(0);
return v___x_930_;
}
else
{
lean_object* v_val_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_948_; 
v_val_931_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_948_ == 0)
{
v___x_933_ = v___x_929_;
v_isShared_934_ = v_isSharedCheck_948_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_val_931_);
lean_dec(v___x_929_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_948_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v_fst_935_; lean_object* v_snd_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_947_; 
v_fst_935_ = lean_ctor_get(v_val_931_, 0);
v_snd_936_ = lean_ctor_get(v_val_931_, 1);
v_isSharedCheck_947_ = !lean_is_exclusive(v_val_931_);
if (v_isSharedCheck_947_ == 0)
{
v___x_938_ = v_val_931_;
v_isShared_939_ = v_isSharedCheck_947_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_snd_936_);
lean_inc(v_fst_935_);
lean_dec(v_val_931_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_947_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_940_, 0, v_fst_935_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 0, v___x_940_);
v___x_942_ = v___x_938_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_940_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_snd_936_);
v___x_942_ = v_reuseFailAlloc_946_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_944_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_942_);
v___x_944_ = v___x_933_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
}
}
else
{
lean_inc(v_tail_916_);
lean_inc(v_head_915_);
lean_dec_ref_known(v_s_913_, 2);
goto v___jp_917_;
}
}
else
{
lean_inc(v_tail_916_);
lean_inc(v_head_915_);
lean_dec_ref_known(v_s_913_, 2);
goto v___jp_917_;
}
}
else
{
lean_inc(v_tail_916_);
lean_inc(v_head_915_);
lean_dec_ref_known(v_s_913_, 2);
goto v___jp_917_;
}
}
else
{
lean_inc(v_tail_916_);
lean_inc(v_head_915_);
lean_dec_ref_known(v_s_913_, 2);
goto v___jp_917_;
}
v___jp_917_:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v_head_915_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
lean_ctor_set(v___x_919_, 1, v_tail_916_);
v___x_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
return v___x_920_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits_go(lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_zero_953_; uint8_t v_isZero_954_; 
v_zero_953_ = lean_unsigned_to_nat(0u);
v_isZero_954_ = lean_nat_dec_eq(v_a_952_, v_zero_953_);
if (v_isZero_954_ == 1)
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_955_, 0, v_a_951_);
lean_ctor_set(v___x_955_, 1, v_a_949_);
v___x_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_956_, 0, v_a_950_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = lean_box(0);
v___x_958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
return v___x_958_;
}
else
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
lean_inc(v_a_949_);
lean_inc(v_a_951_);
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v_a_951_);
lean_ctor_set(v___x_959_, 1, v_a_949_);
lean_inc(v_a_950_);
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v_a_950_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v___x_961_ = lp_lean_x2dftml_LeanFtml_unitAt(v_a_949_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v___x_962_; lean_object* v___x_963_; 
lean_dec(v_a_951_);
lean_dec(v_a_950_);
v___x_962_ = lean_box(0);
v___x_963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_960_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
return v___x_963_;
}
else
{
lean_object* v_val_964_; lean_object* v_fst_965_; lean_object* v_snd_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_981_; 
v_val_964_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_val_964_);
lean_dec_ref_known(v___x_961_, 1);
v_fst_965_ = lean_ctor_get(v_val_964_, 0);
v_snd_966_ = lean_ctor_get(v_val_964_, 1);
v_isSharedCheck_981_ = !lean_is_exclusive(v_val_964_);
if (v_isSharedCheck_981_ == 0)
{
v___x_968_ = v_val_964_;
v_isShared_969_ = v_isSharedCheck_981_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_snd_966_);
lean_inc(v_fst_965_);
lean_dec(v_val_964_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_981_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v_one_970_; lean_object* v_n_971_; lean_object* v___x_972_; lean_object* v___x_974_; 
v_one_970_ = lean_unsigned_to_nat(1u);
v_n_971_ = lean_nat_sub(v_a_952_, v_one_970_);
v___x_972_ = lean_box(0);
lean_inc(v_fst_965_);
if (v_isShared_969_ == 0)
{
lean_ctor_set_tag(v___x_968_, 1);
lean_ctor_set(v___x_968_, 1, v___x_972_);
v___x_974_ = v___x_968_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_fst_965_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v___x_972_);
v___x_974_ = v_reuseFailAlloc_980_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_975_ = l_List_appendTR___redArg(v_a_950_, v___x_974_);
v___x_976_ = lp_lean_x2dftml_LeanFtml_unitBytes(v_fst_965_);
v___x_977_ = l_List_appendTR___redArg(v_a_951_, v___x_976_);
v___x_978_ = lp_lean_x2dftml_LeanFtml_unitSplits_go(v_snd_966_, v___x_975_, v___x_977_, v_n_971_);
lean_dec(v_n_971_);
v___x_979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_960_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
return v___x_979_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits_go___boxed(lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = lp_lean_x2dftml_LeanFtml_unitSplits_go(v_a_982_, v_a_983_, v_a_984_, v_a_985_);
lean_dec(v_a_985_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits(lean_object* v_src_987_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_988_ = lean_box(0);
v___x_989_ = l_List_lengthTR___redArg(v_src_987_);
v___x_990_ = lean_unsigned_to_nat(1u);
v___x_991_ = lean_nat_add(v___x_989_, v___x_990_);
lean_dec(v___x_989_);
v___x_992_ = lp_lean_x2dftml_LeanFtml_unitSplits_go(v_src_987_, v___x_988_, v___x_988_, v___x_991_);
lean_dec(v___x_991_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokenRuleAt(lean_object* v_toks_994_, lean_object* v_n_995_){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = l_List_drop___redArg(v_n_995_, v_toks_994_);
v___x_997_ = l_List_head_x3f___redArg(v___x_996_);
lean_dec(v___x_996_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v___x_998_; 
v___x_998_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tokenRuleAt___closed__0));
return v___x_998_;
}
else
{
lean_object* v_val_999_; lean_object* v_rule_1000_; 
v_val_999_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_val_999_);
lean_dec_ref_known(v___x_997_, 1);
v_rule_1000_ = lean_ctor_get(v_val_999_, 0);
lean_inc_ref(v_rule_1000_);
lean_dec(v_val_999_);
return v_rule_1000_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokenRuleAt___boxed(lean_object* v_toks_1001_, lean_object* v_n_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_toks_1001_, v_n_1002_);
lean_dec(v_toks_1001_);
return v_res_1003_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_unitIsBreak(lean_object* v_toks_1004_, lean_object* v_u_1005_){
_start:
{
if (lean_obj_tag(v_u_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; 
v_a_1006_ = lean_ctor_get(v_u_1005_, 0);
lean_inc(v_a_1006_);
lean_dec_ref_known(v_u_1005_, 1);
v___x_1007_ = lean_unsigned_to_nat(10u);
v___x_1008_ = lean_nat_dec_eq(v_a_1006_, v___x_1007_);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1009_ = lean_unsigned_to_nat(13u);
v___x_1010_ = lean_nat_dec_eq(v_a_1006_, v___x_1009_);
lean_dec(v_a_1006_);
return v___x_1010_;
}
else
{
lean_dec(v_a_1006_);
return v___x_1008_;
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; 
v_a_1011_ = lean_ctor_get(v_u_1005_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v_u_1005_, 1);
v___x_1012_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_toks_1004_, v_a_1011_);
v___x_1013_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1));
v___x_1014_ = lean_string_dec_eq(v___x_1012_, v___x_1013_);
lean_dec_ref(v___x_1012_);
return v___x_1014_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitIsBreak___boxed(lean_object* v_toks_1015_, lean_object* v_u_1016_){
_start:
{
uint8_t v_res_1017_; lean_object* v_r_1018_; 
v_res_1017_ = lp_lean_x2dftml_LeanFtml_unitIsBreak(v_toks_1015_, v_u_1016_);
lean_dec(v_toks_1015_);
v_r_1018_ = lean_box(v_res_1017_);
return v_r_1018_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0(lean_object* v_toks_1019_, lean_object* v_x_1020_, lean_object* v_x_1021_){
_start:
{
if (lean_obj_tag(v_x_1021_) == 0)
{
return v_x_1020_;
}
else
{
lean_object* v_head_1022_; 
v_head_1022_ = lean_ctor_get(v_x_1021_, 0);
if (lean_obj_tag(v_head_1022_) == 0)
{
lean_object* v_tail_1023_; 
v_tail_1023_ = lean_ctor_get(v_x_1021_, 1);
lean_inc(v_tail_1023_);
lean_dec_ref_known(v_x_1021_, 2);
v_x_1021_ = v_tail_1023_;
goto _start;
}
else
{
lean_object* v_tail_1025_; lean_object* v_a_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; 
lean_inc_ref(v_head_1022_);
v_tail_1025_ = lean_ctor_get(v_x_1021_, 1);
lean_inc(v_tail_1025_);
lean_dec_ref_known(v_x_1021_, 2);
v_a_1026_ = lean_ctor_get(v_head_1022_, 0);
lean_inc_n(v_a_1026_, 2);
lean_dec_ref_known(v_head_1022_, 1);
v___x_1027_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_toks_1019_, v_a_1026_);
v___x_1028_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1));
v___x_1029_ = lean_string_dec_eq(v___x_1027_, v___x_1028_);
lean_dec_ref(v___x_1027_);
if (v___x_1029_ == 0)
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = lp_lean_x2dftml_LeanFtml_phBytes(v_a_1026_);
v___x_1031_ = l_List_appendTR___redArg(v_x_1020_, v___x_1030_);
v_x_1020_ = v___x_1031_;
v_x_1021_ = v_tail_1025_;
goto _start;
}
else
{
lean_dec(v_a_1026_);
v_x_1021_ = v_tail_1025_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0___boxed(lean_object* v_toks_1034_, lean_object* v_x_1035_, lean_object* v_x_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0(v_toks_1034_, v_x_1035_, v_x_1036_);
lean_dec(v_toks_1034_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterRunBytes(lean_object* v_toks_1038_, lean_object* v_units_1039_){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = lean_box(0);
v___x_1041_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0(v_toks_1038_, v___x_1040_, v_units_1039_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterRunBytes___boxed(lean_object* v_toks_1042_, lean_object* v_units_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = lp_lean_x2dftml_LeanFtml_filterRunBytes(v_toks_1042_, v_units_1043_);
lean_dec(v_toks_1042_);
return v_res_1044_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(lean_object* v_toks_1045_, lean_object* v_x_1046_){
_start:
{
if (lean_obj_tag(v_x_1046_) == 0)
{
uint8_t v___x_1047_; 
v___x_1047_ = 0;
return v___x_1047_;
}
else
{
lean_object* v_head_1048_; lean_object* v_tail_1049_; uint8_t v___x_1050_; 
v_head_1048_ = lean_ctor_get(v_x_1046_, 0);
lean_inc(v_head_1048_);
v_tail_1049_ = lean_ctor_get(v_x_1046_, 1);
lean_inc(v_tail_1049_);
lean_dec_ref_known(v_x_1046_, 2);
v___x_1050_ = lp_lean_x2dftml_LeanFtml_unitIsBreak(v_toks_1045_, v_head_1048_);
if (v___x_1050_ == 0)
{
v_x_1046_ = v_tail_1049_;
goto _start;
}
else
{
lean_dec(v_tail_1049_);
return v___x_1050_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0___boxed(lean_object* v_toks_1052_, lean_object* v_x_1053_){
_start:
{
uint8_t v_res_1054_; lean_object* v_r_1055_; 
v_res_1054_ = lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(v_toks_1052_, v_x_1053_);
lean_dec(v_toks_1052_);
v_r_1055_ = lean_box(v_res_1054_);
return v_r_1055_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__0));
v___x_1058_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1057_);
return v___x_1058_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__2));
v___x_1061_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1(lean_object* v_toks_1062_, lean_object* v_x_1063_){
_start:
{
if (lean_obj_tag(v_x_1063_) == 0)
{
lean_object* v___x_1064_; 
lean_dec(v_toks_1062_);
v___x_1064_ = lean_box(0);
return v___x_1064_;
}
else
{
lean_object* v_head_1065_; lean_object* v_snd_1066_; lean_object* v_tail_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1176_; 
v_head_1065_ = lean_ctor_get(v_x_1063_, 0);
lean_inc(v_head_1065_);
v_snd_1066_ = lean_ctor_get(v_head_1065_, 1);
lean_inc(v_snd_1066_);
v_tail_1067_ = lean_ctor_get(v_x_1063_, 1);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_x_1063_);
if (v_isSharedCheck_1176_ == 0)
{
lean_object* v_unused_1177_; 
v_unused_1177_ = lean_ctor_get(v_x_1063_, 0);
lean_dec(v_unused_1177_);
v___x_1069_ = v_x_1063_;
v_isShared_1070_ = v_isSharedCheck_1176_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_tail_1067_);
lean_dec(v_x_1063_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1176_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v_fst_1071_; lean_object* v_fst_1072_; lean_object* v_snd_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v_fst_1071_ = lean_ctor_get(v_head_1065_, 0);
lean_inc(v_fst_1071_);
lean_dec(v_head_1065_);
v_fst_1072_ = lean_ctor_get(v_snd_1066_, 0);
lean_inc(v_fst_1072_);
v_snd_1073_ = lean_ctor_get(v_snd_1066_, 1);
lean_inc(v_snd_1073_);
lean_dec(v_snd_1066_);
v___x_1074_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1);
v___x_1075_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1074_, v_snd_1073_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_dec(v_fst_1072_);
lean_dec(v_fst_1071_);
lean_del_object(v___x_1069_);
v_x_1063_ = v_tail_1067_;
goto _start;
}
else
{
lean_object* v_val_1077_; lean_object* v___x_1078_; lean_object* v_attr_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_val_1077_ = lean_ctor_get(v___x_1075_, 0);
lean_inc_n(v_val_1077_, 2);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1078_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4));
v_attr_1079_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_advRowMatch_spec__0(v_val_1077_, v_val_1077_, v___x_1078_);
v___x_1080_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3);
v___x_1081_ = l_List_lengthTR___redArg(v_attr_1079_);
v___x_1082_ = l_List_drop___redArg(v___x_1081_, v_val_1077_);
lean_dec(v_val_1077_);
v___x_1083_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1080_, v___x_1082_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_dec(v_attr_1079_);
lean_dec(v_fst_1072_);
lean_dec(v_fst_1071_);
lean_del_object(v___x_1069_);
v_x_1063_ = v_tail_1067_;
goto _start;
}
else
{
lean_object* v_val_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1175_; 
v_val_1085_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1087_ = v___x_1083_;
v_isShared_1088_ = v_isSharedCheck_1175_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_val_1085_);
lean_dec(v___x_1083_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1175_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3);
v___x_1090_ = lp_lean_x2dftml_LeanFtml_splitAtFirstCI(v___x_1089_, v_val_1085_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_del_object(v___x_1087_);
lean_dec(v_attr_1079_);
lean_dec(v_fst_1072_);
lean_dec(v_fst_1071_);
lean_del_object(v___x_1069_);
v_x_1063_ = v_tail_1067_;
goto _start;
}
else
{
lean_object* v_val_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1174_; 
v_val_1092_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1094_ = v___x_1090_;
v_isShared_1095_ = v_isSharedCheck_1174_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_val_1092_);
lean_dec(v___x_1090_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1174_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v_fst_1096_; lean_object* v_snd_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1173_; 
v_fst_1096_ = lean_ctor_get(v_val_1092_, 0);
v_snd_1097_ = lean_ctor_get(v_val_1092_, 1);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_val_1092_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1099_ = v_val_1092_;
v_isShared_1100_ = v_isSharedCheck_1173_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_snd_1097_);
lean_inc(v_fst_1096_);
lean_dec(v_val_1092_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1173_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lp_lean_x2dftml_LeanFtml_unitSplits(v_snd_1097_);
v___x_1102_ = l_List_getLast_x3f___redArg(v___x_1101_);
lean_dec(v___x_1101_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_del_object(v___x_1099_);
lean_dec(v_fst_1096_);
lean_del_object(v___x_1094_);
lean_del_object(v___x_1087_);
lean_dec(v_attr_1079_);
lean_dec(v_fst_1072_);
lean_dec(v_fst_1071_);
lean_del_object(v___x_1069_);
v_x_1063_ = v_tail_1067_;
goto _start;
}
else
{
lean_object* v_val_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1172_; 
lean_dec(v_tail_1067_);
v_val_1104_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1106_ = v___x_1102_;
v_isShared_1107_ = v_isSharedCheck_1172_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_val_1104_);
lean_dec(v___x_1102_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1172_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v_snd_1108_; lean_object* v_fst_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1171_; 
v_snd_1108_ = lean_ctor_get(v_val_1104_, 1);
v_fst_1109_ = lean_ctor_get(v_val_1104_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v_val_1104_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1111_ = v_val_1104_;
v_isShared_1112_ = v_isSharedCheck_1171_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_snd_1108_);
lean_inc(v_fst_1109_);
lean_dec(v_val_1104_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1171_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v_fst_1113_; lean_object* v_snd_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1170_; 
v_fst_1113_ = lean_ctor_get(v_snd_1108_, 0);
v_snd_1114_ = lean_ctor_get(v_snd_1108_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_snd_1108_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1116_ = v_snd_1108_;
v_isShared_1117_ = v_isSharedCheck_1170_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_snd_1114_);
lean_inc(v_fst_1113_);
lean_dec(v_snd_1108_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1170_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1165_; uint8_t v___x_1168_; 
lean_inc(v_fst_1071_);
v___x_1168_ = lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(v_toks_1062_, v_fst_1071_);
if (v___x_1168_ == 0)
{
lean_dec(v_fst_1071_);
v___y_1165_ = v_fst_1072_;
goto v___jp_1164_;
}
else
{
lean_object* v___x_1169_; 
lean_dec(v_fst_1072_);
v___x_1169_ = lp_lean_x2dftml_LeanFtml_filterRunBytes(v_toks_1062_, v_fst_1071_);
v___y_1165_ = v___x_1169_;
goto v___jp_1164_;
}
v___jp_1118_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1127_; 
v___x_1124_ = l_List_appendTR___redArg(v___y_1121_, v___y_1122_);
v___x_1125_ = l_List_appendTR___redArg(v___x_1124_, v___y_1120_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 0, v___y_1123_);
v___x_1127_ = v___x_1116_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___y_1123_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_snd_1114_);
v___x_1127_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
lean_object* v___x_1129_; 
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 1, v___x_1127_);
lean_ctor_set(v___x_1111_, 0, v___y_1119_);
v___x_1129_ = v___x_1111_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___y_1119_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v___x_1127_);
v___x_1129_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1131_; 
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 1, v___x_1129_);
lean_ctor_set(v___x_1099_, 0, v___x_1125_);
v___x_1131_ = v___x_1099_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1125_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
lean_object* v___x_1133_; 
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v___x_1131_);
v___x_1133_ = v___x_1106_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
v___jp_1138_:
{
lean_object* v___x_1141_; lean_object* v___x_1143_; 
v___x_1141_ = lean_unsigned_to_nat(32u);
if (v_isShared_1070_ == 0)
{
lean_ctor_set(v___x_1069_, 1, v_attr_1079_);
lean_ctor_set(v___x_1069_, 0, v___x_1141_);
v___x_1143_ = v___x_1069_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1141_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_attr_1079_);
v___x_1143_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
lean_object* v___x_1145_; 
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1143_);
v___x_1145_ = v___x_1094_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v___x_1143_);
v___x_1145_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1146_; lean_object* v_fst_1147_; lean_object* v_snd_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1161_; 
lean_inc(v_toks_1062_);
v___x_1146_ = lp_lean_x2dftml_LeanFtml_spanProcess(v___x_1145_, v_fst_1096_, v_toks_1062_);
lean_dec(v_fst_1096_);
lean_dec_ref(v___x_1145_);
v_fst_1147_ = lean_ctor_get(v___x_1146_, 0);
v_snd_1148_ = lean_ctor_get(v___x_1146_, 1);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1150_ = v___x_1146_;
v_isShared_1151_ = v_isSharedCheck_1161_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_snd_1148_);
lean_inc(v_fst_1147_);
lean_dec(v___x_1146_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1161_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
uint8_t v___x_1152_; 
v___x_1152_ = l_List_isEmpty___redArg(v_fst_1147_);
if (v___x_1152_ == 0)
{
lean_object* v___x_1153_; lean_object* v___x_1155_; 
v___x_1153_ = l_List_lengthTR___redArg(v_toks_1062_);
lean_dec(v_toks_1062_);
lean_inc(v_fst_1147_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 1, v_fst_1147_);
lean_ctor_set(v___x_1150_, 0, v___x_1153_);
v___x_1155_ = v___x_1150_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1153_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_fst_1147_);
v___x_1155_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1157_; 
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1155_);
v___x_1157_ = v___x_1087_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
v___y_1119_ = v_snd_1148_;
v___y_1120_ = v___y_1140_;
v___y_1121_ = v___y_1139_;
v___y_1122_ = v_fst_1147_;
v___y_1123_ = v___x_1157_;
goto v___jp_1118_;
}
}
}
else
{
lean_object* v___x_1160_; 
lean_del_object(v___x_1150_);
lean_del_object(v___x_1087_);
lean_dec(v_toks_1062_);
v___x_1160_ = lean_box(0);
v___y_1119_ = v_snd_1148_;
v___y_1120_ = v___y_1140_;
v___y_1121_ = v___y_1139_;
v___y_1122_ = v_fst_1147_;
v___y_1123_ = v___x_1160_;
goto v___jp_1118_;
}
}
}
}
}
v___jp_1164_:
{
uint8_t v___x_1166_; 
lean_inc(v_fst_1109_);
v___x_1166_ = lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(v_toks_1062_, v_fst_1109_);
if (v___x_1166_ == 0)
{
lean_dec(v_fst_1109_);
v___y_1139_ = v___y_1165_;
v___y_1140_ = v_fst_1113_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1167_; 
lean_dec(v_fst_1113_);
v___x_1167_ = lp_lean_x2dftml_LeanFtml_filterRunBytes(v_toks_1062_, v_fst_1109_);
v___y_1139_ = v___y_1165_;
v___y_1140_ = v___x_1167_;
goto v___jp_1138_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredMatchAt(lean_object* v_src_1178_, lean_object* v_toks_1179_){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1180_ = lp_lean_x2dftml_LeanFtml_unitSplits(v_src_1178_);
v___x_1181_ = l_List_reverse___redArg(v___x_1180_);
v___x_1182_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1(v_toks_1179_, v___x_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan_go(lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
if (lean_obj_tag(v_a_1183_) == 0)
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1187_, 0, v_a_1184_);
lean_ctor_set(v___x_1187_, 1, v_a_1185_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v_a_1183_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
return v___x_1188_;
}
else
{
lean_object* v_head_1189_; lean_object* v_tail_1190_; lean_object* v_zero_1191_; uint8_t v_isZero_1192_; 
v_head_1189_ = lean_ctor_get(v_a_1183_, 0);
v_tail_1190_ = lean_ctor_get(v_a_1183_, 1);
v_zero_1191_ = lean_unsigned_to_nat(0u);
v_isZero_1192_ = lean_nat_dec_eq(v_a_1186_, v_zero_1191_);
if (v_isZero_1192_ == 1)
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1193_, 0, v_a_1184_);
lean_ctor_set(v___x_1193_, 1, v_a_1185_);
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v_a_1183_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
return v___x_1194_;
}
else
{
lean_object* v_one_1195_; lean_object* v_n_1196_; lean_object* v___x_1197_; 
lean_inc(v_tail_1190_);
lean_inc(v_head_1189_);
v_one_1195_ = lean_unsigned_to_nat(1u);
v_n_1196_ = lean_nat_sub(v_a_1186_, v_one_1195_);
lean_inc(v_a_1184_);
v___x_1197_ = lp_lean_x2dftml_LeanFtml_scoredMatchAt(v_a_1183_, v_a_1184_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v___x_1198_; lean_object* v_fst_1199_; lean_object* v_snd_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1208_; 
v___x_1198_ = lp_lean_x2dftml_LeanFtml_scoredScan_go(v_tail_1190_, v_a_1184_, v_a_1185_, v_n_1196_);
lean_dec(v_n_1196_);
v_fst_1199_ = lean_ctor_get(v___x_1198_, 0);
v_snd_1200_ = lean_ctor_get(v___x_1198_, 1);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1202_ = v___x_1198_;
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_snd_1200_);
lean_inc(v_fst_1199_);
lean_dec(v___x_1198_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1204_, 0, v_head_1189_);
lean_ctor_set(v___x_1204_, 1, v_fst_1199_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1204_);
v___x_1206_ = v___x_1202_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1204_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_snd_1200_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
else
{
lean_object* v_val_1209_; lean_object* v_snd_1210_; lean_object* v_snd_1211_; lean_object* v_fst_1212_; lean_object* v_fst_1213_; lean_object* v_fst_1214_; lean_object* v_snd_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1238_; 
lean_dec(v_tail_1190_);
lean_dec(v_head_1189_);
lean_dec(v_a_1184_);
v_val_1209_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_val_1209_);
lean_dec_ref_known(v___x_1197_, 1);
v_snd_1210_ = lean_ctor_get(v_val_1209_, 1);
lean_inc(v_snd_1210_);
v_snd_1211_ = lean_ctor_get(v_snd_1210_, 1);
lean_inc(v_snd_1211_);
v_fst_1212_ = lean_ctor_get(v_val_1209_, 0);
lean_inc(v_fst_1212_);
lean_dec(v_val_1209_);
v_fst_1213_ = lean_ctor_get(v_snd_1210_, 0);
lean_inc(v_fst_1213_);
lean_dec(v_snd_1210_);
v_fst_1214_ = lean_ctor_get(v_snd_1211_, 0);
v_snd_1215_ = lean_ctor_get(v_snd_1211_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_snd_1211_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1217_ = v_snd_1211_;
v_isShared_1218_ = v_isSharedCheck_1238_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_snd_1215_);
lean_inc(v_fst_1214_);
lean_dec(v_snd_1211_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1238_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___y_1220_; 
if (lean_obj_tag(v_fst_1214_) == 0)
{
lean_del_object(v___x_1217_);
v___y_1220_ = v_a_1185_;
goto v___jp_1219_;
}
else
{
lean_object* v_val_1232_; lean_object* v___x_1233_; lean_object* v___x_1235_; 
v_val_1232_ = lean_ctor_get(v_fst_1214_, 0);
lean_inc(v_val_1232_);
lean_dec_ref_known(v_fst_1214_, 1);
v___x_1233_ = lean_box(0);
if (v_isShared_1218_ == 0)
{
lean_ctor_set_tag(v___x_1217_, 1);
lean_ctor_set(v___x_1217_, 1, v___x_1233_);
lean_ctor_set(v___x_1217_, 0, v_val_1232_);
v___x_1235_ = v___x_1217_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_val_1232_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v___x_1233_);
v___x_1235_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
lean_object* v___x_1236_; 
v___x_1236_ = l_List_appendTR___redArg(v_a_1185_, v___x_1235_);
v___y_1220_ = v___x_1236_;
goto v___jp_1219_;
}
}
v___jp_1219_:
{
lean_object* v___x_1221_; lean_object* v_fst_1222_; lean_object* v_snd_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1231_; 
v___x_1221_ = lp_lean_x2dftml_LeanFtml_scoredScan_go(v_snd_1215_, v_fst_1213_, v___y_1220_, v_n_1196_);
lean_dec(v_n_1196_);
v_fst_1222_ = lean_ctor_get(v___x_1221_, 0);
v_snd_1223_ = lean_ctor_get(v___x_1221_, 1);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1225_ = v___x_1221_;
v_isShared_1226_ = v_isSharedCheck_1231_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_snd_1223_);
lean_inc(v_fst_1222_);
lean_dec(v___x_1221_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1231_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1227_; lean_object* v___x_1229_; 
v___x_1227_ = l_List_appendTR___redArg(v_fst_1212_, v_fst_1222_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 0, v___x_1227_);
v___x_1229_ = v___x_1225_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1227_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v_snd_1223_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan_go___boxed(lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = lp_lean_x2dftml_LeanFtml_scoredScan_go(v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
lean_dec(v_a_1242_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan(lean_object* v_src_1244_, lean_object* v_toks_1245_){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1246_ = lean_box(0);
v___x_1247_ = l_List_lengthTR___redArg(v_src_1244_);
v___x_1248_ = lean_unsigned_to_nat(1u);
v___x_1249_ = lean_nat_add(v___x_1247_, v___x_1248_);
lean_dec(v___x_1247_);
v___x_1250_ = lp_lean_x2dftml_LeanFtml_scoredScan_go(v_src_1244_, v_toks_1245_, v___x_1246_, v___x_1249_);
lean_dec(v___x_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsRunNl(lean_object* v_x_1253_){
_start:
{
if (lean_obj_tag(v_x_1253_) == 0)
{
lean_object* v___x_1254_; 
v___x_1254_ = lean_box(0);
return v___x_1254_;
}
else
{
lean_object* v_head_1255_; lean_object* v_tail_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; 
v_head_1255_ = lean_ctor_get(v_x_1253_, 0);
v_tail_1256_ = lean_ctor_get(v_x_1253_, 1);
v___x_1257_ = lean_unsigned_to_nat(10u);
v___x_1258_ = lean_nat_dec_eq(v_head_1255_, v___x_1257_);
if (v___x_1258_ == 0)
{
uint8_t v___x_1259_; 
v___x_1259_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1255_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_box(0);
return v___x_1260_;
}
else
{
lean_object* v___x_1261_; 
v___x_1261_ = lp_lean_x2dftml_LeanFtml_wsRunNl(v_tail_1256_);
if (lean_obj_tag(v___x_1261_) == 0)
{
return v___x_1261_;
}
else
{
lean_object* v_val_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1271_; 
v_val_1262_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1264_ = v___x_1261_;
v_isShared_1265_ = v_isSharedCheck_1271_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_val_1262_);
lean_dec(v___x_1261_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1271_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1266_ = lean_unsigned_to_nat(1u);
v___x_1267_ = lean_nat_add(v_val_1262_, v___x_1266_);
lean_dec(v_val_1262_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v___x_1267_);
v___x_1269_ = v___x_1264_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
else
{
lean_object* v___x_1272_; 
v___x_1272_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wsRunNl___closed__0));
return v___x_1272_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsRunNl___boxed(lean_object* v_x_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = lp_lean_x2dftml_LeanFtml_wsRunNl(v_x_1273_);
lean_dec(v_x_1273_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraMatchAt(lean_object* v_src_1275_){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__1));
lean_inc(v_src_1275_);
v___x_1277_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v___x_1276_, v_src_1275_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_dec(v_src_1275_);
return v___x_1277_;
}
else
{
lean_object* v_val_1278_; lean_object* v_fst_1279_; lean_object* v_snd_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1305_; 
v_val_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_val_1278_);
lean_dec_ref_known(v___x_1277_, 1);
v_fst_1279_ = lean_ctor_get(v_val_1278_, 0);
v_snd_1280_ = lean_ctor_get(v_val_1278_, 1);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_val_1278_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1282_ = v_val_1278_;
v_isShared_1283_ = v_isSharedCheck_1305_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_snd_1280_);
lean_inc(v_fst_1279_);
lean_dec(v_val_1278_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1305_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; 
v___x_1284_ = lp_lean_x2dftml_LeanFtml_wsRunNl(v_snd_1280_);
lean_dec(v_snd_1280_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v___x_1285_; 
lean_del_object(v___x_1282_);
lean_dec(v_fst_1279_);
lean_dec(v_src_1275_);
v___x_1285_ = lean_box(0);
return v___x_1285_;
}
else
{
lean_object* v_val_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1304_; 
v_val_1286_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1288_ = v___x_1284_;
v_isShared_1289_ = v_isSharedCheck_1304_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_val_1286_);
lean_dec(v___x_1284_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1304_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v_len_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1299_; 
v___x_1290_ = l_List_lengthTR___redArg(v_fst_1279_);
lean_dec(v_fst_1279_);
v___x_1291_ = lean_unsigned_to_nat(1u);
v___x_1292_ = lean_nat_add(v___x_1290_, v___x_1291_);
lean_dec(v___x_1290_);
v___x_1293_ = lean_nat_add(v_val_1286_, v___x_1291_);
lean_dec(v_val_1286_);
v_len_1294_ = lean_nat_add(v___x_1292_, v___x_1293_);
lean_dec(v___x_1293_);
lean_dec(v___x_1292_);
v___x_1295_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4));
lean_inc(v_len_1294_);
lean_inc(v_src_1275_);
v___x_1296_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_1275_, v_src_1275_, v_len_1294_, v___x_1295_);
v___x_1297_ = l_List_drop___redArg(v_len_1294_, v_src_1275_);
lean_dec(v_src_1275_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 1, v___x_1297_);
lean_ctor_set(v___x_1282_, 0, v___x_1296_);
v___x_1299_ = v___x_1282_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v___x_1296_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v___x_1297_);
v___x_1299_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
lean_object* v___x_1301_; 
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1299_);
v___x_1301_ = v___x_1288_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v___x_1299_);
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
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59(void){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1425_ = lean_box(0);
v___x_1426_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__58));
v___x_1427_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(v___x_1426_, v___x_1425_);
return v___x_1427_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraSkipRules(void){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59, &lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59_once, _init_lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59);
return v___x_1428_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__2(void){
_start:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1431_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__1));
v___x_1432_ = l_String_toListImpl(v___x_1431_);
return v___x_1432_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__4(void){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__3));
v___x_1435_ = l_String_toListImpl(v___x_1434_);
return v___x_1435_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__5(void){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__4, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__4);
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
return v___x_1437_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__6(void){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1438_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__5, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__5);
v___x_1439_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__2, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__2);
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
lean_ctor_set(v___x_1440_, 1, v___x_1438_);
return v___x_1440_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__7(void){
_start:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1441_ = lean_box(0);
v___x_1442_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__6, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__6);
v___x_1443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
lean_ctor_set(v___x_1443_, 1, v___x_1441_);
return v___x_1443_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__9(void){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__8));
v___x_1446_ = l_String_toListImpl(v___x_1445_);
return v___x_1446_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__10(void){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__9, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__9);
v___x_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1447_);
return v___x_1448_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__11(void){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__10, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__10);
v___x_1450_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__2, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__2);
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
lean_ctor_set(v___x_1451_, 1, v___x_1449_);
return v___x_1451_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__12(void){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1452_ = lean_box(0);
v___x_1453_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__11, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__11);
v___x_1454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
lean_ctor_set(v___x_1454_, 1, v___x_1452_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraWrap(lean_object* v_m_1461_, lean_object* v_toks_1462_){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v_fst_1466_; lean_object* v_snd_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v_fst_1470_; lean_object* v_snd_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1483_; 
v___x_1463_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__0));
v___x_1464_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__7, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__7);
v___x_1465_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1463_, v___x_1464_, v_toks_1462_);
v_fst_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_fst_1466_);
v_snd_1467_ = lean_ctor_get(v___x_1465_, 1);
lean_inc(v_snd_1467_);
lean_dec_ref(v___x_1465_);
v___x_1468_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__12, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__12);
v___x_1469_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1463_, v___x_1468_, v_snd_1467_);
v_fst_1470_ = lean_ctor_get(v___x_1469_, 0);
v_snd_1471_ = lean_ctor_get(v___x_1469_, 1);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1473_ = v___x_1469_;
v_isShared_1474_ = v_isSharedCheck_1483_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_snd_1471_);
lean_inc(v_fst_1470_);
lean_dec(v___x_1469_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1483_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1475_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_m_1461_);
v___x_1476_ = l_List_appendTR___redArg(v_fst_1466_, v___x_1475_);
v___x_1477_ = l_List_appendTR___redArg(v___x_1476_, v_fst_1470_);
v___x_1478_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__14));
v___x_1479_ = l_List_appendTR___redArg(v___x_1477_, v___x_1478_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1479_);
v___x_1481_ = v___x_1473_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v_snd_1471_);
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___boxed(lean_object* v_m_1484_, lean_object* v_toks_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1484_, v_toks_1485_);
lean_dec(v_m_1484_);
return v_res_1486_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesEndsWith(lean_object* v_s_1487_, lean_object* v_e_1488_){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; uint8_t v___x_1493_; 
v___x_1489_ = l_List_lengthTR___redArg(v_s_1487_);
v___x_1490_ = l_List_lengthTR___redArg(v_e_1488_);
v___x_1491_ = lean_nat_sub(v___x_1489_, v___x_1490_);
lean_dec(v___x_1490_);
lean_dec(v___x_1489_);
v___x_1492_ = l_List_drop___redArg(v___x_1491_, v_s_1487_);
v___x_1493_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_e_1488_, v___x_1492_);
lean_dec(v___x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesEndsWith___boxed(lean_object* v_s_1494_, lean_object* v_e_1495_){
_start:
{
uint8_t v_res_1496_; lean_object* v_r_1497_; 
v_res_1496_ = lp_lean_x2dftml_LeanFtml_bytesEndsWith(v_s_1494_, v_e_1495_);
lean_dec(v_e_1495_);
lean_dec(v_s_1494_);
v_r_1497_ = lean_box(v_res_1496_);
return v_r_1497_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesContains(lean_object* v_s_1498_, lean_object* v_sub_1499_){
_start:
{
if (lean_obj_tag(v_s_1498_) == 0)
{
uint8_t v___x_1500_; 
v___x_1500_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_sub_1499_, v_s_1498_);
return v___x_1500_;
}
else
{
lean_object* v_tail_1501_; uint8_t v___x_1502_; 
v_tail_1501_ = lean_ctor_get(v_s_1498_, 1);
v___x_1502_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_sub_1499_, v_s_1498_);
if (v___x_1502_ == 0)
{
v_s_1498_ = v_tail_1501_;
goto _start;
}
else
{
return v___x_1502_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesContains___boxed(lean_object* v_s_1504_, lean_object* v_sub_1505_){
_start:
{
uint8_t v_res_1506_; lean_object* v_r_1507_; 
v_res_1506_ = lp_lean_x2dftml_LeanFtml_bytesContains(v_s_1504_, v_sub_1505_);
lean_dec(v_sub_1505_);
lean_dec(v_s_1504_);
v_r_1507_ = lean_box(v_res_1506_);
return v_r_1507_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripPhBytes_go(lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v_zero_1510_; uint8_t v_isZero_1511_; 
v_zero_1510_ = lean_unsigned_to_nat(0u);
v_isZero_1511_ = lean_nat_dec_eq(v_a_1509_, v_zero_1510_);
if (v_isZero_1511_ == 1)
{
lean_object* v___x_1512_; 
lean_dec(v_a_1509_);
lean_dec(v_a_1508_);
v___x_1512_ = lean_box(0);
return v___x_1512_;
}
else
{
if (lean_obj_tag(v_a_1508_) == 0)
{
lean_dec(v_a_1509_);
return v_a_1508_;
}
else
{
lean_object* v_head_1513_; lean_object* v_tail_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1537_; 
v_head_1513_ = lean_ctor_get(v_a_1508_, 0);
v_tail_1514_ = lean_ctor_get(v_a_1508_, 1);
v_isSharedCheck_1537_ = !lean_is_exclusive(v_a_1508_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1516_ = v_a_1508_;
v_isShared_1517_ = v_isSharedCheck_1537_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_tail_1514_);
lean_inc(v_head_1513_);
lean_dec(v_a_1508_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1537_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v_one_1518_; lean_object* v_n_1519_; lean_object* v___x_1526_; uint8_t v___x_1527_; 
v_one_1518_ = lean_unsigned_to_nat(1u);
v_n_1519_ = lean_nat_sub(v_a_1509_, v_one_1518_);
lean_dec(v_a_1509_);
v___x_1526_ = lean_unsigned_to_nat(255u);
v___x_1527_ = lean_nat_dec_eq(v_head_1513_, v___x_1526_);
if (v___x_1527_ == 0)
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_del_object(v___x_1516_);
v___x_1528_ = lp_lean_x2dftml_LeanFtml_stripPhBytes_go(v_tail_1514_, v_n_1519_);
v___x_1529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1529_, 0, v_head_1513_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
return v___x_1529_;
}
else
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v_snd_1532_; 
lean_dec(v_head_1513_);
v___x_1530_ = lean_box(0);
lean_inc(v_tail_1514_);
v___x_1531_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(v_tail_1514_, v___x_1530_);
v_snd_1532_ = lean_ctor_get(v___x_1531_, 1);
lean_inc(v_snd_1532_);
lean_dec_ref(v___x_1531_);
if (lean_obj_tag(v_snd_1532_) == 1)
{
lean_object* v_head_1533_; lean_object* v_tail_1534_; uint8_t v___x_1535_; 
v_head_1533_ = lean_ctor_get(v_snd_1532_, 0);
lean_inc(v_head_1533_);
v_tail_1534_ = lean_ctor_get(v_snd_1532_, 1);
lean_inc(v_tail_1534_);
lean_dec_ref_known(v_snd_1532_, 2);
v___x_1535_ = lean_nat_dec_eq(v_head_1533_, v___x_1526_);
lean_dec(v_head_1533_);
if (v___x_1535_ == 0)
{
lean_dec(v_tail_1534_);
goto v___jp_1520_;
}
else
{
lean_del_object(v___x_1516_);
lean_dec(v_tail_1514_);
v_a_1508_ = v_tail_1534_;
v_a_1509_ = v_n_1519_;
goto _start;
}
}
else
{
lean_dec(v_snd_1532_);
goto v___jp_1520_;
}
}
v___jp_1520_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1524_; 
v___x_1521_ = lean_unsigned_to_nat(255u);
v___x_1522_ = lp_lean_x2dftml_LeanFtml_stripPhBytes_go(v_tail_1514_, v_n_1519_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 1, v___x_1522_);
lean_ctor_set(v___x_1516_, 0, v___x_1521_);
v___x_1524_ = v___x_1516_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1521_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v___x_1522_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripPhBytes(lean_object* v_bs_1538_){
_start:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1539_ = l_List_lengthTR___redArg(v_bs_1538_);
v___x_1540_ = lean_unsigned_to_nat(1u);
v___x_1541_ = lean_nat_add(v___x_1539_, v___x_1540_);
lean_dec(v___x_1539_);
v___x_1542_ = lp_lean_x2dftml_LeanFtml_stripPhBytes_go(v_bs_1538_, v___x_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_runHasDivStart_go(lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
if (lean_obj_tag(v_a_1544_) == 0)
{
lean_object* v___x_1547_; uint8_t v___x_1548_; 
v___x_1547_ = lean_unsigned_to_nat(0u);
v___x_1548_ = lean_nat_dec_eq(v_a_1546_, v___x_1547_);
lean_dec(v_a_1546_);
if (v___x_1548_ == 0)
{
return v___x_1548_;
}
else
{
uint8_t v___x_1549_; 
v___x_1549_ = 0;
return v___x_1549_;
}
}
else
{
lean_object* v_head_1550_; lean_object* v_tail_1551_; lean_object* v___x_1552_; uint8_t v___x_1553_; 
v_head_1550_ = lean_ctor_get(v_a_1544_, 0);
lean_inc(v_head_1550_);
v_tail_1551_ = lean_ctor_get(v_a_1544_, 1);
lean_inc(v_tail_1551_);
lean_dec_ref_known(v_a_1544_, 2);
v___x_1552_ = lean_unsigned_to_nat(255u);
v___x_1553_ = lean_nat_dec_eq(v_head_1550_, v___x_1552_);
lean_dec(v_head_1550_);
if (v___x_1553_ == 0)
{
lean_object* v_zero_1554_; uint8_t v_isZero_1555_; 
v_zero_1554_ = lean_unsigned_to_nat(0u);
v_isZero_1555_ = lean_nat_dec_eq(v_a_1546_, v_zero_1554_);
if (v_isZero_1555_ == 1)
{
lean_dec(v_tail_1551_);
lean_dec(v_a_1546_);
return v___x_1553_;
}
else
{
lean_object* v_one_1556_; lean_object* v_n_1557_; 
v_one_1556_ = lean_unsigned_to_nat(1u);
v_n_1557_ = lean_nat_sub(v_a_1546_, v_one_1556_);
lean_dec(v_a_1546_);
v_a_1544_ = v_tail_1551_;
v_a_1546_ = v_n_1557_;
goto _start;
}
}
else
{
lean_object* v_zero_1559_; uint8_t v_isZero_1560_; 
v_zero_1559_ = lean_unsigned_to_nat(0u);
v_isZero_1560_ = lean_nat_dec_eq(v_a_1546_, v_zero_1559_);
if (v_isZero_1560_ == 1)
{
uint8_t v___x_1561_; 
lean_dec(v_tail_1551_);
lean_dec(v_a_1546_);
v___x_1561_ = 0;
return v___x_1561_;
}
else
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v_fst_1564_; lean_object* v_snd_1565_; lean_object* v_one_1566_; lean_object* v_n_1567_; 
v___x_1562_ = lean_box(0);
lean_inc(v_tail_1551_);
v___x_1563_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(v_tail_1551_, v___x_1562_);
v_fst_1564_ = lean_ctor_get(v___x_1563_, 0);
lean_inc(v_fst_1564_);
v_snd_1565_ = lean_ctor_get(v___x_1563_, 1);
lean_inc(v_snd_1565_);
lean_dec_ref(v___x_1563_);
v_one_1566_ = lean_unsigned_to_nat(1u);
v_n_1567_ = lean_nat_sub(v_a_1546_, v_one_1566_);
lean_dec(v_a_1546_);
if (lean_obj_tag(v_snd_1565_) == 1)
{
lean_object* v_head_1568_; lean_object* v_tail_1569_; uint8_t v___x_1570_; 
v_head_1568_ = lean_ctor_get(v_snd_1565_, 0);
lean_inc(v_head_1568_);
v_tail_1569_ = lean_ctor_get(v_snd_1565_, 1);
lean_inc(v_tail_1569_);
lean_dec_ref_known(v_snd_1565_, 2);
v___x_1570_ = lean_nat_dec_eq(v_head_1568_, v___x_1552_);
lean_dec(v_head_1568_);
if (v___x_1570_ == 0)
{
lean_dec(v_tail_1569_);
lean_dec(v_fst_1564_);
v_a_1544_ = v_tail_1551_;
v_a_1546_ = v_n_1567_;
goto _start;
}
else
{
lean_object* v_id_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; uint8_t v___x_1575_; 
lean_dec(v_tail_1551_);
v_id_1572_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v_zero_1559_, v_fst_1564_);
lean_dec(v_fst_1564_);
v___x_1573_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_a_1545_, v_id_1572_);
v___x_1574_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runHasDivStart_go___closed__0));
v___x_1575_ = lean_string_dec_eq(v___x_1573_, v___x_1574_);
lean_dec_ref(v___x_1573_);
if (v___x_1575_ == 0)
{
v_a_1544_ = v_tail_1569_;
v_a_1546_ = v_n_1567_;
goto _start;
}
else
{
lean_dec(v_tail_1569_);
lean_dec(v_n_1567_);
return v___x_1575_;
}
}
}
else
{
lean_dec(v_snd_1565_);
lean_dec(v_fst_1564_);
v_a_1544_ = v_tail_1551_;
v_a_1546_ = v_n_1567_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runHasDivStart_go___boxed(lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_){
_start:
{
uint8_t v_res_1581_; lean_object* v_r_1582_; 
v_res_1581_ = lp_lean_x2dftml_LeanFtml_runHasDivStart_go(v_a_1578_, v_a_1579_, v_a_1580_);
lean_dec(v_a_1579_);
v_r_1582_ = lean_box(v_res_1581_);
return v_r_1582_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_runHasDivStart(lean_object* v_m_1583_, lean_object* v_toks_1584_){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; uint8_t v___x_1588_; 
v___x_1585_ = l_List_lengthTR___redArg(v_m_1583_);
v___x_1586_ = lean_unsigned_to_nat(1u);
v___x_1587_ = lean_nat_add(v___x_1585_, v___x_1586_);
lean_dec(v___x_1585_);
v___x_1588_ = lp_lean_x2dftml_LeanFtml_runHasDivStart_go(v_m_1583_, v_toks_1584_, v___x_1587_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runHasDivStart___boxed(lean_object* v_m_1589_, lean_object* v_toks_1590_){
_start:
{
uint8_t v_res_1591_; lean_object* v_r_1592_; 
v_res_1591_ = lp_lean_x2dftml_LeanFtml_runHasDivStart(v_m_1589_, v_toks_1590_);
lean_dec(v_toks_1590_);
v_r_1592_ = lean_box(v_res_1591_);
return v_r_1592_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__2(lean_object* v_m_1593_, lean_object* v_x_1594_){
_start:
{
if (lean_obj_tag(v_x_1594_) == 0)
{
uint8_t v___x_1595_; 
lean_dec(v_m_1593_);
v___x_1595_ = 0;
return v___x_1595_;
}
else
{
lean_object* v_head_1596_; lean_object* v_tail_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; uint8_t v___x_1600_; 
v_head_1596_ = lean_ctor_get(v_x_1594_, 0);
v_tail_1597_ = lean_ctor_get(v_x_1594_, 1);
lean_inc(v_m_1593_);
v___x_1598_ = lp_lean_x2dftml_LeanFtml_stripPhBytes(v_m_1593_);
v___x_1599_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_1598_);
lean_dec(v___x_1598_);
v___x_1600_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1599_, v_head_1596_);
lean_dec(v___x_1599_);
if (v___x_1600_ == 0)
{
v_x_1594_ = v_tail_1597_;
goto _start;
}
else
{
lean_dec(v_m_1593_);
return v___x_1600_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__2___boxed(lean_object* v_m_1602_, lean_object* v_x_1603_){
_start:
{
uint8_t v_res_1604_; lean_object* v_r_1605_; 
v_res_1604_ = lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__2(v_m_1602_, v_x_1603_);
lean_dec(v_x_1603_);
v_r_1605_ = lean_box(v_res_1604_);
return v_r_1605_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1(lean_object* v_fst_1606_, lean_object* v_x_1607_){
_start:
{
if (lean_obj_tag(v_x_1607_) == 0)
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_box(0);
return v___x_1608_;
}
else
{
lean_object* v_head_1609_; lean_object* v_tail_1610_; lean_object* v_fst_1611_; uint8_t v___x_1612_; 
v_head_1609_ = lean_ctor_get(v_x_1607_, 0);
v_tail_1610_ = lean_ctor_get(v_x_1607_, 1);
v_fst_1611_ = lean_ctor_get(v_head_1609_, 0);
v___x_1612_ = lean_nat_dec_eq(v_fst_1611_, v_fst_1606_);
if (v___x_1612_ == 0)
{
v_x_1607_ = v_tail_1610_;
goto _start;
}
else
{
lean_object* v___x_1614_; 
lean_inc(v_head_1609_);
v___x_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1614_, 0, v_head_1609_);
return v___x_1614_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1___boxed(lean_object* v_fst_1615_, lean_object* v_x_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1(v_fst_1615_, v_x_1616_);
lean_dec(v_x_1616_);
lean_dec(v_fst_1615_);
return v_res_1617_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0(lean_object* v___x_1618_, lean_object* v_x_1619_){
_start:
{
if (lean_obj_tag(v_x_1619_) == 0)
{
uint8_t v___x_1620_; 
v___x_1620_ = 0;
return v___x_1620_;
}
else
{
lean_object* v_head_1621_; lean_object* v_tail_1622_; lean_object* v_fst_1623_; lean_object* v_snd_1624_; uint8_t v___x_1625_; 
v_head_1621_ = lean_ctor_get(v_x_1619_, 0);
v_tail_1622_ = lean_ctor_get(v_x_1619_, 1);
v_fst_1623_ = lean_ctor_get(v_head_1621_, 0);
v_snd_1624_ = lean_ctor_get(v_head_1621_, 1);
v___x_1625_ = lp_lean_x2dftml_LeanFtml_bytesEndsWith(v___x_1618_, v_fst_1623_);
if (v___x_1625_ == 0)
{
v_x_1619_ = v_tail_1622_;
goto _start;
}
else
{
uint8_t v___x_1627_; 
v___x_1627_ = lp_lean_x2dftml_LeanFtml_bytesContains(v___x_1618_, v_snd_1624_);
if (v___x_1627_ == 0)
{
v_x_1619_ = v_tail_1622_;
goto _start;
}
else
{
return v___x_1627_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0___boxed(lean_object* v___x_1629_, lean_object* v_x_1630_){
_start:
{
uint8_t v_res_1631_; lean_object* v_r_1632_; 
v_res_1631_ = lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0(v___x_1629_, v_x_1630_);
lean_dec(v_x_1630_);
lean_dec(v___x_1629_);
v_r_1632_ = lean_box(v_res_1631_);
return v_r_1632_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraProcess(lean_object* v_m_1633_, lean_object* v_toks_1634_, lean_object* v_scored_1635_, lean_object* v_anchors_1636_, lean_object* v_leads_1637_){
_start:
{
lean_object* v___y_1639_; uint8_t v___x_1678_; 
v___x_1678_ = l_List_isEmpty___redArg(v_leads_1637_);
if (v___x_1678_ == 0)
{
uint8_t v___x_1679_; 
lean_inc(v_m_1633_);
v___x_1679_ = lp_lean_x2dftml_LeanFtml_runHasDivStart(v_m_1633_, v_toks_1634_);
if (v___x_1679_ == 0)
{
goto v___jp_1649_;
}
else
{
uint8_t v___x_1680_; 
lean_inc(v_m_1633_);
v___x_1680_ = lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__2(v_m_1633_, v_leads_1637_);
if (v___x_1680_ == 0)
{
goto v___jp_1649_;
}
else
{
lean_object* v___x_1681_; 
v___x_1681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1681_, 0, v_m_1633_);
lean_ctor_set(v___x_1681_, 1, v_toks_1634_);
return v___x_1681_;
}
}
}
else
{
goto v___jp_1649_;
}
v___jp_1638_:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; uint8_t v___x_1646_; 
v___x_1640_ = lp_lean_x2dftml_LeanFtml_paraSkipRules;
v___x_1641_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_toks_1634_, v___y_1639_);
v___x_1642_ = l_String_toListImpl(v___x_1641_);
v___x_1643_ = lean_box(0);
v___x_1644_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_1642_, v___x_1643_);
v___x_1645_ = lp_lean_x2dftml_LeanFtml_asciiLower(v___x_1644_);
v___x_1646_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v___x_1645_, v___x_1640_);
lean_dec(v___x_1645_);
if (v___x_1646_ == 0)
{
lean_object* v___x_1647_; 
v___x_1647_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1633_, v_toks_1634_);
lean_dec(v_m_1633_);
return v___x_1647_;
}
else
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1648_, 0, v_m_1633_);
lean_ctor_set(v___x_1648_, 1, v_toks_1634_);
return v___x_1648_;
}
}
v___jp_1649_:
{
lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1650_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_m_1633_);
v___x_1651_ = l_List_isEmpty___redArg(v___x_1650_);
if (v___x_1651_ == 0)
{
uint8_t v___x_1652_; 
v___x_1652_ = lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0(v___x_1650_, v_anchors_1636_);
if (v___x_1652_ == 0)
{
if (lean_obj_tag(v_m_1633_) == 1)
{
lean_object* v_head_1653_; lean_object* v___x_1654_; uint8_t v___x_1655_; 
v_head_1653_ = lean_ctor_get(v_m_1633_, 0);
v___x_1654_ = lean_unsigned_to_nat(255u);
v___x_1655_ = lean_nat_dec_eq(v_head_1653_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; 
lean_dec(v___x_1650_);
v___x_1656_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1633_, v_toks_1634_);
lean_dec_ref_known(v_m_1633_, 2);
return v___x_1656_;
}
else
{
lean_object* v___x_1657_; 
lean_inc_ref(v_m_1633_);
v___x_1657_ = lp_lean_x2dftml_LeanFtml_readPlaceholder(v_m_1633_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v___x_1658_; 
lean_dec(v___x_1650_);
v___x_1658_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1633_, v_toks_1634_);
lean_dec_ref_known(v_m_1633_, 2);
return v___x_1658_;
}
else
{
lean_object* v_val_1659_; lean_object* v_fst_1660_; lean_object* v___x_1661_; 
v_val_1659_ = lean_ctor_get(v___x_1657_, 0);
lean_inc(v_val_1659_);
lean_dec_ref_known(v___x_1657_, 1);
v_fst_1660_ = lean_ctor_get(v_val_1659_, 0);
lean_inc(v_fst_1660_);
lean_dec(v_val_1659_);
v___x_1661_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1(v_fst_1660_, v_scored_1635_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_dec(v___x_1650_);
v___y_1639_ = v_fst_1660_;
goto v___jp_1638_;
}
else
{
lean_object* v_val_1662_; lean_object* v_snd_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1672_; 
v_val_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_val_1662_);
lean_dec_ref_known(v___x_1661_, 1);
v_snd_1663_ = lean_ctor_get(v_val_1662_, 1);
v_isSharedCheck_1672_ = !lean_is_exclusive(v_val_1662_);
if (v_isSharedCheck_1672_ == 0)
{
lean_object* v_unused_1673_; 
v_unused_1673_ = lean_ctor_get(v_val_1662_, 0);
lean_dec(v_unused_1673_);
v___x_1665_ = v_val_1662_;
v_isShared_1666_ = v_isSharedCheck_1672_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_snd_1663_);
lean_dec(v_val_1662_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1672_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_snd_1663_);
lean_dec(v_snd_1663_);
v___x_1668_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1650_, v___x_1667_);
lean_dec(v___x_1667_);
lean_dec(v___x_1650_);
if (v___x_1668_ == 0)
{
lean_del_object(v___x_1665_);
v___y_1639_ = v_fst_1660_;
goto v___jp_1638_;
}
else
{
lean_object* v___x_1670_; 
lean_dec(v_fst_1660_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 1, v_toks_1634_);
lean_ctor_set(v___x_1665_, 0, v_m_1633_);
v___x_1670_ = v___x_1665_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_m_1633_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_toks_1634_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1674_; 
lean_dec(v___x_1650_);
v___x_1674_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1633_, v_toks_1634_);
lean_dec(v_m_1633_);
return v___x_1674_;
}
}
else
{
lean_object* v___x_1675_; 
lean_dec(v___x_1650_);
v___x_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1675_, 0, v_m_1633_);
lean_ctor_set(v___x_1675_, 1, v_toks_1634_);
return v___x_1675_;
}
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
lean_dec(v___x_1650_);
lean_dec(v_m_1633_);
v___x_1676_ = lean_box(0);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
lean_ctor_set(v___x_1677_, 1, v_toks_1634_);
return v___x_1677_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraProcess___boxed(lean_object* v_m_1682_, lean_object* v_toks_1683_, lean_object* v_scored_1684_, lean_object* v_anchors_1685_, lean_object* v_leads_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = lp_lean_x2dftml_LeanFtml_paraProcess(v_m_1682_, v_toks_1683_, v_scored_1684_, v_anchors_1685_, v_leads_1686_);
lean_dec(v_leads_1686_);
lean_dec(v_anchors_1685_);
lean_dec(v_scored_1684_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan_go(lean_object* v_anchors_1688_, lean_object* v_leads_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, uint8_t v_a_1693_, lean_object* v_a_1694_){
_start:
{
if (lean_obj_tag(v_a_1690_) == 0)
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v_a_1690_);
lean_ctor_set(v___x_1695_, 1, v_a_1691_);
return v___x_1695_;
}
else
{
lean_object* v_head_1696_; lean_object* v_tail_1697_; lean_object* v_zero_1698_; uint8_t v_isZero_1699_; 
v_head_1696_ = lean_ctor_get(v_a_1690_, 0);
v_tail_1697_ = lean_ctor_get(v_a_1690_, 1);
v_zero_1698_ = lean_unsigned_to_nat(0u);
v_isZero_1699_ = lean_nat_dec_eq(v_a_1694_, v_zero_1698_);
if (v_isZero_1699_ == 1)
{
lean_object* v___x_1700_; 
v___x_1700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1700_, 0, v_a_1690_);
lean_ctor_set(v___x_1700_, 1, v_a_1691_);
return v___x_1700_;
}
else
{
lean_object* v_one_1701_; lean_object* v_n_1702_; 
lean_inc(v_tail_1697_);
lean_inc(v_head_1696_);
v_one_1701_ = lean_unsigned_to_nat(1u);
v_n_1702_ = lean_nat_sub(v_a_1694_, v_one_1701_);
if (v_a_1693_ == 0)
{
lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1721_; 
v_isSharedCheck_1721_ = !lean_is_exclusive(v_a_1690_);
if (v_isSharedCheck_1721_ == 0)
{
lean_object* v_unused_1722_; lean_object* v_unused_1723_; 
v_unused_1722_ = lean_ctor_get(v_a_1690_, 1);
lean_dec(v_unused_1722_);
v_unused_1723_ = lean_ctor_get(v_a_1690_, 0);
lean_dec(v_unused_1723_);
v___x_1704_ = v_a_1690_;
v_isShared_1705_ = v_isSharedCheck_1721_;
goto v_resetjp_1703_;
}
else
{
lean_dec(v_a_1690_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1721_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1706_; uint8_t v___x_1707_; lean_object* v___x_1708_; lean_object* v_fst_1709_; lean_object* v_snd_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1720_; 
v___x_1706_ = lean_unsigned_to_nat(10u);
v___x_1707_ = lean_nat_dec_eq(v_head_1696_, v___x_1706_);
v___x_1708_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1688_, v_leads_1689_, v_tail_1697_, v_a_1691_, v_a_1692_, v___x_1707_, v_n_1702_);
lean_dec(v_n_1702_);
v_fst_1709_ = lean_ctor_get(v___x_1708_, 0);
v_snd_1710_ = lean_ctor_get(v___x_1708_, 1);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1712_ = v___x_1708_;
v_isShared_1713_ = v_isSharedCheck_1720_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_snd_1710_);
lean_inc(v_fst_1709_);
lean_dec(v___x_1708_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1720_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 1, v_fst_1709_);
v___x_1715_ = v___x_1704_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_head_1696_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v_fst_1709_);
v___x_1715_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1717_; 
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1715_);
v___x_1717_ = v___x_1712_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v___x_1715_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v_snd_1710_);
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
else
{
lean_object* v___x_1724_; 
v___x_1724_ = lp_lean_x2dftml_LeanFtml_paraMatchAt(v_a_1690_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v___x_1725_; uint8_t v___x_1726_; lean_object* v___x_1727_; lean_object* v_fst_1728_; lean_object* v_snd_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1737_; 
v___x_1725_ = lean_unsigned_to_nat(10u);
v___x_1726_ = lean_nat_dec_eq(v_head_1696_, v___x_1725_);
v___x_1727_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1688_, v_leads_1689_, v_tail_1697_, v_a_1691_, v_a_1692_, v___x_1726_, v_n_1702_);
lean_dec(v_n_1702_);
v_fst_1728_ = lean_ctor_get(v___x_1727_, 0);
v_snd_1729_ = lean_ctor_get(v___x_1727_, 1);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1731_ = v___x_1727_;
v_isShared_1732_ = v_isSharedCheck_1737_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_snd_1729_);
lean_inc(v_fst_1728_);
lean_dec(v___x_1727_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1737_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1733_; lean_object* v___x_1735_; 
v___x_1733_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1733_, 0, v_head_1696_);
lean_ctor_set(v___x_1733_, 1, v_fst_1728_);
if (v_isShared_1732_ == 0)
{
lean_ctor_set(v___x_1731_, 0, v___x_1733_);
v___x_1735_ = v___x_1731_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_snd_1729_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
else
{
lean_object* v_val_1738_; lean_object* v_fst_1739_; lean_object* v_snd_1740_; lean_object* v___x_1741_; lean_object* v_fst_1742_; lean_object* v_snd_1743_; lean_object* v___x_1744_; lean_object* v_fst_1745_; lean_object* v_snd_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1754_; 
lean_dec(v_tail_1697_);
lean_dec(v_head_1696_);
v_val_1738_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_val_1738_);
lean_dec_ref_known(v___x_1724_, 1);
v_fst_1739_ = lean_ctor_get(v_val_1738_, 0);
lean_inc(v_fst_1739_);
v_snd_1740_ = lean_ctor_get(v_val_1738_, 1);
lean_inc(v_snd_1740_);
lean_dec(v_val_1738_);
v___x_1741_ = lp_lean_x2dftml_LeanFtml_paraProcess(v_fst_1739_, v_a_1691_, v_a_1692_, v_anchors_1688_, v_leads_1689_);
v_fst_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_fst_1742_);
v_snd_1743_ = lean_ctor_get(v___x_1741_, 1);
lean_inc(v_snd_1743_);
lean_dec_ref(v___x_1741_);
v___x_1744_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1688_, v_leads_1689_, v_snd_1740_, v_snd_1743_, v_a_1692_, v_a_1693_, v_n_1702_);
lean_dec(v_n_1702_);
v_fst_1745_ = lean_ctor_get(v___x_1744_, 0);
v_snd_1746_ = lean_ctor_get(v___x_1744_, 1);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1748_ = v___x_1744_;
v_isShared_1749_ = v_isSharedCheck_1754_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_snd_1746_);
lean_inc(v_fst_1745_);
lean_dec(v___x_1744_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1754_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1750_ = l_List_appendTR___redArg(v_fst_1742_, v_fst_1745_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set(v___x_1748_, 0, v___x_1750_);
v___x_1752_ = v___x_1748_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v_snd_1746_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan_go___boxed(lean_object* v_anchors_1755_, lean_object* v_leads_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_){
_start:
{
uint8_t v_a_226__boxed_1762_; lean_object* v_res_1763_; 
v_a_226__boxed_1762_ = lean_unbox(v_a_1760_);
v_res_1763_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1755_, v_leads_1756_, v_a_1757_, v_a_1758_, v_a_1759_, v_a_226__boxed_1762_, v_a_1761_);
lean_dec(v_a_1761_);
lean_dec(v_a_1759_);
lean_dec(v_leads_1756_);
lean_dec(v_anchors_1755_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan(lean_object* v_src_1764_, lean_object* v_toks_1765_, lean_object* v_scored_1766_, lean_object* v_anchors_1767_, lean_object* v_leads_1768_){
_start:
{
uint8_t v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1769_ = 1;
v___x_1770_ = l_List_lengthTR___redArg(v_src_1764_);
v___x_1771_ = lean_unsigned_to_nat(1u);
v___x_1772_ = lean_nat_add(v___x_1770_, v___x_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1767_, v_leads_1768_, v_src_1764_, v_toks_1765_, v_scored_1766_, v___x_1769_, v___x_1772_);
lean_dec(v___x_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan___boxed(lean_object* v_src_1774_, lean_object* v_toks_1775_, lean_object* v_scored_1776_, lean_object* v_anchors_1777_, lean_object* v_leads_1778_){
_start:
{
lean_object* v_res_1779_; 
v_res_1779_ = lp_lean_x2dftml_LeanFtml_paraScan(v_src_1774_, v_toks_1775_, v_scored_1776_, v_anchors_1777_, v_leads_1778_);
lean_dec(v_leads_1778_);
lean_dec(v_anchors_1777_);
lean_dec(v_scored_1776_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paragraphRule(lean_object* v_st_1780_){
_start:
{
lean_object* v_work_1781_; lean_object* v_tokens_1782_; lean_object* v_doc_1783_; uint8_t v_fatal_1784_; lean_object* v_continuedDivLeads_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1803_; 
v_work_1781_ = lean_ctor_get(v_st_1780_, 0);
v_tokens_1782_ = lean_ctor_get(v_st_1780_, 1);
v_doc_1783_ = lean_ctor_get(v_st_1780_, 2);
v_fatal_1784_ = lean_ctor_get_uint8(v_st_1780_, sizeof(void*)*4);
v_continuedDivLeads_1785_ = lean_ctor_get(v_st_1780_, 3);
v_isSharedCheck_1803_ = !lean_is_exclusive(v_st_1780_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1787_ = v_st_1780_;
v_isShared_1788_ = v_isSharedCheck_1803_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_continuedDivLeads_1785_);
lean_inc(v_doc_1783_);
lean_inc(v_tokens_1782_);
lean_inc(v_work_1781_);
lean_dec(v_st_1780_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1803_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v_input_1789_; lean_object* v___x_1790_; lean_object* v_snd_1791_; lean_object* v_fst_1792_; lean_object* v_fst_1793_; lean_object* v_snd_1794_; lean_object* v_scoredAnchors_1795_; lean_object* v___x_1796_; lean_object* v_fst_1797_; lean_object* v_snd_1798_; lean_object* v___x_1799_; lean_object* v___x_1801_; 
v_input_1789_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_1781_);
v___x_1790_ = lp_lean_x2dftml_LeanFtml_scoredScan(v_input_1789_, v_tokens_1782_);
v_snd_1791_ = lean_ctor_get(v___x_1790_, 1);
lean_inc(v_snd_1791_);
v_fst_1792_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_fst_1792_);
lean_dec_ref(v___x_1790_);
v_fst_1793_ = lean_ctor_get(v_snd_1791_, 0);
lean_inc(v_fst_1793_);
v_snd_1794_ = lean_ctor_get(v_snd_1791_, 1);
lean_inc(v_snd_1794_);
lean_dec(v_snd_1791_);
v_scoredAnchors_1795_ = lean_ctor_get(v_doc_1783_, 12);
v___x_1796_ = lp_lean_x2dftml_LeanFtml_paraScan(v_fst_1792_, v_fst_1793_, v_snd_1794_, v_scoredAnchors_1795_, v_continuedDivLeads_1785_);
lean_dec(v_snd_1794_);
v_fst_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_fst_1797_);
v_snd_1798_ = lean_ctor_get(v___x_1796_, 1);
lean_inc(v_snd_1798_);
lean_dec_ref(v___x_1796_);
v___x_1799_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_1797_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 1, v_snd_1798_);
lean_ctor_set(v___x_1787_, 0, v___x_1799_);
v___x_1801_ = v___x_1787_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1799_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v_snd_1798_);
lean_ctor_set(v_reuseFailAlloc_1802_, 2, v_doc_1783_);
lean_ctor_set(v_reuseFailAlloc_1802_, 3, v_continuedDivLeads_1785_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*4, v_fatal_1784_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
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
lean_object* initialize_lean_x2dftml_LeanFtml_ContainRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ListRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TableRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ParaRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_ContainRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ListRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_TableRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_paraSkipRules = _init_lp_lean_x2dftml_LeanFtml_paraSkipRules();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_paraSkipRules);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
