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
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_claimTok(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_asciiLower(lean_object*);
uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omSetB(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
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
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
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
static const lean_string_object lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "link"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "height"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__30_value;
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
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__38;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageProcess___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__39;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageProcess___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageProcess___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageProcess___closed__40_value;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraProcess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan_go(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = ((lean_object*)(lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__0));
v___x_363_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0(lean_object* v_snd_364_, lean_object* v_x_365_, lean_object* v_x_366_){
_start:
{
if (lean_obj_tag(v_x_366_) == 0)
{
return v_x_365_;
}
else
{
lean_object* v_head_367_; lean_object* v_tail_368_; lean_object* v___x_369_; 
v_head_367_ = lean_ctor_get(v_x_366_, 0);
lean_inc(v_head_367_);
v_tail_368_ = lean_ctor_get(v_x_366_, 1);
lean_inc(v_tail_368_);
lean_dec_ref_known(v_x_366_, 2);
v___x_369_ = lp_lean_x2dftml_LeanFtml_lookupB(v_snd_364_, v_head_367_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_dec(v_head_367_);
v_x_366_ = v_tail_368_;
goto _start;
}
else
{
lean_object* v_val_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v_val_371_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_val_371_);
lean_dec_ref_known(v___x_369_, 1);
v___x_372_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1);
v___x_373_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_head_367_, v___x_372_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; 
v___x_374_ = lp_lean_x2dftml_LeanFtml_omSetB(v_x_365_, v_head_367_, v_val_371_);
v_x_365_ = v___x_374_;
v_x_366_ = v_tail_368_;
goto _start;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_val_371_);
v___x_377_ = lp_lean_x2dftml_LeanFtml_omSetB(v_x_365_, v_head_367_, v___x_376_);
v_x_365_ = v___x_377_;
v_x_366_ = v_tail_368_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___boxed(lean_object* v_snd_379_, lean_object* v_x_380_, lean_object* v_x_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0(v_snd_379_, v_x_380_, v_x_381_);
lean_dec(v_snd_379_);
return v_res_382_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__4(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__3));
v___x_392_ = l_String_toListImpl(v___x_391_);
return v___x_392_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__6(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__5));
v___x_395_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__7(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__6, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__6);
v___x_397_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_396_);
return v___x_397_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__8(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__7, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__7);
v___x_399_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__4, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__4);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v___x_398_);
return v___x_400_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__10(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__9));
v___x_403_ = l_String_toListImpl(v___x_402_);
return v___x_403_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__12(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__11));
v___x_406_ = l_String_toListImpl(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__14(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__13));
v___x_409_ = l_String_toListImpl(v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__15(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_410_ = lean_box(0);
v___x_411_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__8, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__8);
v___x_412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___x_410_);
return v___x_412_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__17(void){
_start:
{
lean_object* v___x_415_; uint8_t v___x_416_; 
v___x_415_ = lean_unsigned_to_nat(0u);
v___x_416_ = lp_lean_x2dftml_LeanFtml_isWsByte(v___x_415_);
return v___x_416_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__19(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__18));
v___x_419_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_418_);
return v___x_419_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__21(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__20));
v___x_422_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_421_);
return v___x_422_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__23(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__22));
v___x_425_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_424_);
return v___x_425_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__25(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__24));
v___x_428_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_427_);
return v___x_428_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__27(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__26));
v___x_431_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__29(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__28));
v___x_434_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_433_);
return v___x_434_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__31(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__30));
v___x_437_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_436_);
return v___x_437_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__32(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = lean_box(0);
v___x_439_ = lean_obj_once(&lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1, &lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0___closed__1);
v___x_440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
lean_ctor_set(v___x_440_, 1, v___x_438_);
return v___x_440_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__33(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_441_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__32, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__32);
v___x_442_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__31, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__31);
v___x_443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
lean_ctor_set(v___x_443_, 1, v___x_441_);
return v___x_443_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__34(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_444_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__33, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__33);
v___x_445_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__29, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__29);
v___x_446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
lean_ctor_set(v___x_446_, 1, v___x_444_);
return v___x_446_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__35(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__34, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__34);
v___x_448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__27, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__27);
v___x_449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
lean_ctor_set(v___x_449_, 1, v___x_447_);
return v___x_449_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__36(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__35, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__35);
v___x_451_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__25, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__25);
v___x_452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
lean_ctor_set(v___x_452_, 1, v___x_450_);
return v___x_452_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__37(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_453_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__36, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__36);
v___x_454_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__23, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__23);
v___x_455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
return v___x_455_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__38(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__37, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__37);
v___x_457_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__21, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__21);
v___x_458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v___x_456_);
return v___x_458_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__39(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v_keys_461_; 
v___x_459_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__38, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__38);
v___x_460_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__19, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__19);
v_keys_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_keys_461_, 0, v___x_460_);
lean_ctor_set(v_keys_461_, 1, v___x_459_);
return v_keys_461_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageProcess(lean_object* v_whole_465_, lean_object* v_align_466_, lean_object* v_body_467_, lean_object* v_toks_468_){
_start:
{
lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; uint8_t v___y_477_; lean_object* v___y_478_; lean_object* v___y_479_; uint8_t v___y_490_; uint8_t v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; uint8_t v___y_497_; uint8_t v___y_498_; uint8_t v___y_499_; uint8_t v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; lean_object* v___y_503_; uint8_t v___y_506_; uint8_t v___y_507_; uint8_t v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; uint8_t v___y_519_; uint8_t v___y_520_; uint8_t v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_536_; uint8_t v___y_537_; lean_object* v___y_538_; uint8_t v___y_539_; lean_object* v___y_545_; lean_object* v___y_546_; uint8_t v___y_547_; uint8_t v___y_548_; lean_object* v___y_549_; lean_object* v___x_553_; uint8_t v___x_554_; lean_object* v___y_556_; lean_object* v___y_557_; uint8_t v___y_558_; lean_object* v___y_559_; uint8_t v___y_560_; lean_object* v___y_564_; lean_object* v___y_565_; uint8_t v___y_566_; uint8_t v___y_567_; lean_object* v___y_568_; uint8_t v___y_569_; 
v___x_553_ = lean_unsigned_to_nat(255u);
v___x_554_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_553_, v_whole_465_);
if (v___x_554_ == 0)
{
uint8_t v___x_571_; lean_object* v___y_573_; lean_object* v___y_574_; lean_object* v_fst_575_; uint8_t v_snd_576_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_587_; lean_object* v___y_588_; lean_object* v_fst_591_; lean_object* v_snd_592_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_571_ = 1;
v___x_603_ = lean_box(0);
v___x_604_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__40));
lean_inc(v_body_467_);
v___x_605_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v___x_604_, v_body_467_);
if (lean_obj_tag(v___x_605_) == 0)
{
v_fst_591_ = v_body_467_;
v_snd_592_ = v___x_603_;
goto v___jp_590_;
}
else
{
lean_object* v_val_606_; lean_object* v_fst_607_; lean_object* v_snd_608_; lean_object* v___x_609_; 
lean_dec(v_body_467_);
v_val_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_val_606_);
lean_dec_ref_known(v___x_605_, 1);
v_fst_607_ = lean_ctor_get(v_val_606_, 0);
lean_inc(v_fst_607_);
v_snd_608_ = lean_ctor_get(v_val_606_, 1);
lean_inc(v_snd_608_);
lean_dec(v_val_606_);
v___x_609_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_snd_608_);
lean_dec(v_snd_608_);
v_fst_591_ = v_fst_607_;
v_snd_592_ = v___x_609_;
goto v___jp_590_;
}
v___jp_572_:
{
lean_object* v_linkNow_577_; 
v_linkNow_577_ = lp_lean_x2dftml_LeanFtml_lookupB(v_fst_575_, v___y_574_);
if (lean_obj_tag(v_linkNow_577_) == 0)
{
lean_dec(v_whole_465_);
v___y_536_ = v___y_573_;
v___y_537_ = v_snd_576_;
v___y_538_ = v_fst_575_;
v___y_539_ = v___x_554_;
goto v___jp_535_;
}
else
{
lean_object* v_val_578_; uint8_t v___x_579_; 
v_val_578_ = lean_ctor_get(v_linkNow_577_, 0);
lean_inc(v_val_578_);
lean_dec_ref_known(v_linkNow_577_, 1);
v___x_579_ = l_List_isEmpty___redArg(v_val_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; 
v___x_580_ = l_List_head_x3f___redArg(v_val_578_);
if (lean_obj_tag(v___x_580_) == 0)
{
uint8_t v___x_581_; 
v___x_581_ = lean_uint8_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__17, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__17);
v___y_564_ = v_val_578_;
v___y_565_ = v___y_573_;
v___y_566_ = v___x_571_;
v___y_567_ = v_snd_576_;
v___y_568_ = v_fst_575_;
v___y_569_ = v___x_581_;
goto v___jp_563_;
}
else
{
lean_object* v_val_582_; uint8_t v___x_583_; 
v_val_582_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_val_582_);
lean_dec_ref_known(v___x_580_, 1);
v___x_583_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_val_582_);
lean_dec(v_val_582_);
v___y_564_ = v_val_578_;
v___y_565_ = v___y_573_;
v___y_566_ = v___x_571_;
v___y_567_ = v_snd_576_;
v___y_568_ = v_fst_575_;
v___y_569_ = v___x_583_;
goto v___jp_563_;
}
}
else
{
v___y_556_ = v_val_578_;
v___y_557_ = v___y_573_;
v___y_558_ = v_snd_576_;
v___y_559_ = v_fst_575_;
v___y_560_ = v___x_554_;
goto v___jp_555_;
}
}
}
v___jp_584_:
{
lean_object* v___x_589_; 
lean_inc(v___y_586_);
v___x_589_ = lp_lean_x2dftml_LeanFtml_omSetB(v___y_587_, v___y_586_, v___y_588_);
v___y_573_ = v___y_585_;
v___y_574_ = v___y_586_;
v_fst_575_ = v___x_589_;
v_snd_576_ = v___x_571_;
goto v___jp_572_;
}
v___jp_590_:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v_keys_595_; lean_object* v_attr2_596_; lean_object* v_linkV_597_; 
v___x_593_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__21, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__21);
v___x_594_ = lean_box(0);
v_keys_595_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__39, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__39);
v_attr2_596_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_imageProcess_spec__0(v_snd_592_, v___x_594_, v_keys_595_);
lean_dec(v_snd_592_);
v_linkV_597_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attr2_596_, v___x_593_);
if (lean_obj_tag(v_linkV_597_) == 0)
{
v___y_573_ = v_fst_591_;
v___y_574_ = v___x_593_;
v_fst_575_ = v_attr2_596_;
v_snd_576_ = v___x_554_;
goto v___jp_572_;
}
else
{
lean_object* v_val_598_; lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; 
v_val_598_ = lean_ctor_get(v_linkV_597_, 0);
lean_inc(v_val_598_);
lean_dec_ref_known(v_linkV_597_, 1);
v___x_599_ = l_List_head_x3f___redArg(v_val_598_);
v___x_600_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__16));
v___x_601_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_599_, v___x_600_);
lean_dec(v___x_599_);
if (v___x_601_ == 0)
{
lean_dec(v_val_598_);
v___y_573_ = v_fst_591_;
v___y_574_ = v___x_593_;
v_fst_575_ = v_attr2_596_;
v_snd_576_ = v___x_601_;
goto v___jp_572_;
}
else
{
if (lean_obj_tag(v_val_598_) == 0)
{
v___y_585_ = v_fst_591_;
v___y_586_ = v___x_593_;
v___y_587_ = v_attr2_596_;
v___y_588_ = v_val_598_;
goto v___jp_584_;
}
else
{
lean_object* v_tail_602_; 
v_tail_602_ = lean_ctor_get(v_val_598_, 1);
lean_inc(v_tail_602_);
lean_dec_ref_known(v_val_598_, 2);
v___y_585_ = v_fst_591_;
v___y_586_ = v___x_593_;
v___y_587_ = v_attr2_596_;
v___y_588_ = v_tail_602_;
goto v___jp_584_;
}
}
}
}
}
else
{
lean_object* v___x_610_; 
lean_dec(v_body_467_);
lean_dec(v_align_466_);
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v_whole_465_);
lean_ctor_set(v___x_610_, 1, v_toks_468_);
return v___x_610_;
}
v___jp_469_:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
lean_inc_n(v___y_472_, 2);
v___x_473_ = l_List_appendTR___redArg(v___y_472_, v___y_470_);
v___x_474_ = l_List_appendTR___redArg(v___x_473_, v___y_472_);
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v___y_471_);
return v___x_475_;
}
v___jp_476_:
{
lean_object* v_opts_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v_opts_480_ = l_List_appendTR___redArg(v___y_478_, v___y_479_);
v___x_481_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__0));
v___x_482_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_481_, v_opts_480_, v_toks_468_);
if (v___y_477_ == 0)
{
lean_object* v_fst_483_; lean_object* v_snd_484_; lean_object* v___x_485_; 
v_fst_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_fst_483_);
v_snd_484_ = lean_ctor_get(v___x_482_, 1);
lean_inc(v_snd_484_);
lean_dec_ref(v___x_482_);
v___x_485_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__2));
v___y_470_ = v_fst_483_;
v___y_471_ = v_snd_484_;
v___y_472_ = v___x_485_;
goto v___jp_469_;
}
else
{
lean_object* v_fst_486_; lean_object* v_snd_487_; lean_object* v___x_488_; 
v_fst_486_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_fst_486_);
v_snd_487_ = lean_ctor_get(v___x_482_, 1);
lean_inc(v_snd_487_);
lean_dec_ref(v___x_482_);
v___x_488_ = lean_box(0);
v___y_470_ = v_fst_486_;
v___y_471_ = v_snd_487_;
v___y_472_ = v___x_488_;
goto v___jp_469_;
}
}
v___jp_489_:
{
if (v___y_491_ == 0)
{
v___y_477_ = v___y_490_;
v___y_478_ = v___y_492_;
v___y_479_ = v___y_493_;
goto v___jp_476_;
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__8, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__8);
v___x_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v___y_493_);
v___y_477_ = v___y_490_;
v___y_478_ = v___y_492_;
v___y_479_ = v___x_495_;
goto v___jp_476_;
}
}
v___jp_496_:
{
lean_object* v___x_504_; 
v___x_504_ = l_List_appendTR___redArg(v___y_502_, v___y_503_);
if (v___y_497_ == 0)
{
v___y_490_ = v___y_500_;
v___y_491_ = v___y_499_;
v___y_492_ = v___x_504_;
v___y_493_ = v___y_501_;
goto v___jp_489_;
}
else
{
if (v___y_498_ == 0)
{
v___y_477_ = v___y_500_;
v___y_478_ = v___x_504_;
v___y_479_ = v___y_501_;
goto v___jp_476_;
}
else
{
v___y_490_ = v___y_500_;
v___y_491_ = v___y_499_;
v___y_492_ = v___x_504_;
v___y_493_ = v___y_501_;
goto v___jp_489_;
}
}
}
v___jp_505_:
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = l_List_appendTR___redArg(v___y_509_, v___y_511_);
v___x_513_ = l_List_isEmpty___redArg(v_align_466_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_514_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__10, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__10);
v___x_515_ = lp_lean_x2dftml_LeanFtml_textVal(v_align_466_);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
lean_inc(v___y_510_);
v___x_517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v___y_510_);
v___y_497_ = v___y_506_;
v___y_498_ = v___y_507_;
v___y_499_ = v___y_508_;
v___y_500_ = v___x_513_;
v___y_501_ = v___y_510_;
v___y_502_ = v___x_512_;
v___y_503_ = v___x_517_;
goto v___jp_496_;
}
else
{
lean_dec(v_align_466_);
lean_inc(v___y_510_);
v___y_497_ = v___y_506_;
v___y_498_ = v___y_507_;
v___y_499_ = v___y_508_;
v___y_500_ = v___x_513_;
v___y_501_ = v___y_510_;
v___y_502_ = v___x_512_;
v___y_503_ = v___y_510_;
goto v___jp_496_;
}
}
v___jp_518_:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_524_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__12, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__12);
v___x_525_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_523_);
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__14, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__14);
v___x_528_ = lean_box(0);
v___x_529_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v___y_522_, v___x_528_);
v___x_530_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
v___x_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_527_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
lean_ctor_set(v___x_532_, 1, v___x_528_);
v___x_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_526_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
if (v___y_519_ == 0)
{
v___y_506_ = v___y_519_;
v___y_507_ = v___y_520_;
v___y_508_ = v___y_521_;
v___y_509_ = v___x_533_;
v___y_510_ = v___x_528_;
v___y_511_ = v___x_528_;
goto v___jp_505_;
}
else
{
lean_object* v___x_534_; 
v___x_534_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageProcess___closed__15, &lp_lean_x2dftml_LeanFtml_imageProcess___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_imageProcess___closed__15);
v___y_506_ = v___y_519_;
v___y_507_ = v___y_520_;
v___y_508_ = v___y_521_;
v___y_509_ = v___x_533_;
v___y_510_ = v___x_528_;
v___y_511_ = v___x_534_;
goto v___jp_505_;
}
}
v___jp_535_:
{
lean_object* v___x_540_; lean_object* v___x_541_; uint8_t v_srcStar_542_; 
v___x_540_ = l_List_head_x3f___redArg(v___y_536_);
v___x_541_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__16));
v_srcStar_542_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_540_, v___x_541_);
lean_dec(v___x_540_);
if (v_srcStar_542_ == 0)
{
v___y_519_ = v___y_537_;
v___y_520_ = v___y_539_;
v___y_521_ = v_srcStar_542_;
v___y_522_ = v___y_538_;
v___y_523_ = v___y_536_;
goto v___jp_518_;
}
else
{
if (lean_obj_tag(v___y_536_) == 0)
{
v___y_519_ = v___y_537_;
v___y_520_ = v___y_539_;
v___y_521_ = v_srcStar_542_;
v___y_522_ = v___y_538_;
v___y_523_ = v___y_536_;
goto v___jp_518_;
}
else
{
lean_object* v_tail_543_; 
v_tail_543_ = lean_ctor_get(v___y_536_, 1);
lean_inc(v_tail_543_);
lean_dec_ref_known(v___y_536_, 2);
v___y_519_ = v___y_537_;
v___y_520_ = v___y_539_;
v___y_521_ = v_srcStar_542_;
v___y_522_ = v___y_538_;
v___y_523_ = v_tail_543_;
goto v___jp_518_;
}
}
}
v___jp_544_:
{
uint8_t v___x_550_; 
v___x_550_ = lp_lean_x2dftml_LeanFtml_imageUrlHere(v___y_545_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; 
lean_dec(v___y_549_);
lean_dec(v___y_546_);
lean_dec(v_align_466_);
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v_whole_465_);
lean_ctor_set(v___x_551_, 1, v_toks_468_);
return v___x_551_;
}
else
{
if (v___y_548_ == 0)
{
lean_dec(v_whole_465_);
v___y_536_ = v___y_546_;
v___y_537_ = v___y_547_;
v___y_538_ = v___y_549_;
v___y_539_ = v___y_548_;
goto v___jp_535_;
}
else
{
lean_object* v___x_552_; 
lean_dec(v___y_549_);
lean_dec(v___y_546_);
lean_dec(v_align_466_);
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v_whole_465_);
lean_ctor_set(v___x_552_, 1, v_toks_468_);
return v___x_552_;
}
}
}
v___jp_555_:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_obj_once(&lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1, &lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_any___at___00LeanFtml_imageUrlHere_spec__0___closed__1);
lean_inc(v___y_556_);
v___x_562_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v___x_561_, v___y_556_);
if (lean_obj_tag(v___x_562_) == 0)
{
if (v___y_560_ == 0)
{
lean_dec(v___y_556_);
lean_dec(v_whole_465_);
v___y_536_ = v___y_557_;
v___y_537_ = v___y_558_;
v___y_538_ = v___y_559_;
v___y_539_ = v___x_554_;
goto v___jp_535_;
}
else
{
v___y_545_ = v___y_556_;
v___y_546_ = v___y_557_;
v___y_547_ = v___y_558_;
v___y_548_ = v___y_560_;
v___y_549_ = v___y_559_;
goto v___jp_544_;
}
}
else
{
lean_dec_ref_known(v___x_562_, 1);
v___y_545_ = v___y_556_;
v___y_546_ = v___y_557_;
v___y_547_ = v___y_558_;
v___y_548_ = v___y_560_;
v___y_549_ = v___y_559_;
goto v___jp_544_;
}
}
v___jp_563_:
{
if (v___y_569_ == 0)
{
v___y_556_ = v___y_564_;
v___y_557_ = v___y_565_;
v___y_558_ = v___y_567_;
v___y_559_ = v___y_568_;
v___y_560_ = v___y_569_;
goto v___jp_555_;
}
else
{
lean_object* v___x_570_; 
lean_dec(v___y_568_);
lean_dec(v___y_565_);
lean_dec(v___y_564_);
lean_dec(v_align_466_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v_whole_465_);
lean_ctor_set(v___x_570_, 1, v_toks_468_);
return v___x_570_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan_go(lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
if (lean_obj_tag(v_a_611_) == 0)
{
lean_object* v___x_614_; 
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v_a_611_);
lean_ctor_set(v___x_614_, 1, v_a_612_);
return v___x_614_;
}
else
{
lean_object* v_head_615_; lean_object* v_tail_616_; lean_object* v_zero_617_; uint8_t v_isZero_618_; 
v_head_615_ = lean_ctor_get(v_a_611_, 0);
v_tail_616_ = lean_ctor_get(v_a_611_, 1);
v_zero_617_ = lean_unsigned_to_nat(0u);
v_isZero_618_ = lean_nat_dec_eq(v_a_613_, v_zero_617_);
if (v_isZero_618_ == 1)
{
lean_object* v___x_619_; 
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v_a_611_);
lean_ctor_set(v___x_619_, 1, v_a_612_);
return v___x_619_;
}
else
{
lean_object* v_one_620_; lean_object* v_n_621_; lean_object* v___x_622_; 
lean_inc(v_tail_616_);
lean_inc(v_head_615_);
v_one_620_ = lean_unsigned_to_nat(1u);
v_n_621_ = lean_nat_sub(v_a_613_, v_one_620_);
v___x_622_ = lp_lean_x2dftml_LeanFtml_imageMatchAt(v_a_611_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v___x_623_; lean_object* v_fst_624_; lean_object* v_snd_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_633_; 
v___x_623_ = lp_lean_x2dftml_LeanFtml_imageScan_go(v_tail_616_, v_a_612_, v_n_621_);
lean_dec(v_n_621_);
v_fst_624_ = lean_ctor_get(v___x_623_, 0);
v_snd_625_ = lean_ctor_get(v___x_623_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_633_ == 0)
{
v___x_627_ = v___x_623_;
v_isShared_628_ = v_isSharedCheck_633_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_snd_625_);
lean_inc(v_fst_624_);
lean_dec(v___x_623_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_633_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_629_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_629_, 0, v_head_615_);
lean_ctor_set(v___x_629_, 1, v_fst_624_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v___x_629_);
v___x_631_ = v___x_627_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_snd_625_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
else
{
lean_object* v_val_634_; lean_object* v_snd_635_; lean_object* v_snd_636_; lean_object* v_fst_637_; lean_object* v_fst_638_; lean_object* v_fst_639_; lean_object* v_snd_640_; lean_object* v___x_641_; lean_object* v_fst_642_; lean_object* v_snd_643_; lean_object* v___x_644_; lean_object* v_fst_645_; lean_object* v_snd_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_654_; 
lean_dec(v_tail_616_);
lean_dec(v_head_615_);
v_val_634_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_val_634_);
lean_dec_ref_known(v___x_622_, 1);
v_snd_635_ = lean_ctor_get(v_val_634_, 1);
lean_inc(v_snd_635_);
v_snd_636_ = lean_ctor_get(v_snd_635_, 1);
lean_inc(v_snd_636_);
v_fst_637_ = lean_ctor_get(v_val_634_, 0);
lean_inc(v_fst_637_);
lean_dec(v_val_634_);
v_fst_638_ = lean_ctor_get(v_snd_635_, 0);
lean_inc(v_fst_638_);
lean_dec(v_snd_635_);
v_fst_639_ = lean_ctor_get(v_snd_636_, 0);
lean_inc(v_fst_639_);
v_snd_640_ = lean_ctor_get(v_snd_636_, 1);
lean_inc(v_snd_640_);
lean_dec(v_snd_636_);
v___x_641_ = lp_lean_x2dftml_LeanFtml_imageProcess(v_fst_637_, v_fst_638_, v_fst_639_, v_a_612_);
v_fst_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_fst_642_);
v_snd_643_ = lean_ctor_get(v___x_641_, 1);
lean_inc(v_snd_643_);
lean_dec_ref(v___x_641_);
v___x_644_ = lp_lean_x2dftml_LeanFtml_imageScan_go(v_snd_640_, v_snd_643_, v_n_621_);
lean_dec(v_n_621_);
v_fst_645_ = lean_ctor_get(v___x_644_, 0);
v_snd_646_ = lean_ctor_get(v___x_644_, 1);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_654_ == 0)
{
v___x_648_ = v___x_644_;
v_isShared_649_ = v_isSharedCheck_654_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_snd_646_);
lean_inc(v_fst_645_);
lean_dec(v___x_644_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_654_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_650_ = l_List_appendTR___redArg(v_fst_642_, v_fst_645_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 0, v___x_650_);
v___x_652_ = v___x_648_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_snd_646_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan_go___boxed(lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = lp_lean_x2dftml_LeanFtml_imageScan_go(v_a_655_, v_a_656_, v_a_657_);
lean_dec(v_a_657_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageScan(lean_object* v_src_659_, lean_object* v_toks_660_){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_661_ = l_List_lengthTR___redArg(v_src_659_);
v___x_662_ = lean_unsigned_to_nat(1u);
v___x_663_ = lean_nat_add(v___x_661_, v___x_662_);
lean_dec(v___x_661_);
v___x_664_ = lp_lean_x2dftml_LeanFtml_imageScan_go(v_src_659_, v_toks_660_, v___x_663_);
lean_dec(v___x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageRule(lean_object* v_st_666_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageRule___closed__0));
v___x_668_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_666_, v___x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan_go(lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
if (lean_obj_tag(v_a_672_) == 0)
{
lean_object* v___x_675_; 
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v_a_672_);
lean_ctor_set(v___x_675_, 1, v_a_673_);
return v___x_675_;
}
else
{
lean_object* v_head_676_; lean_object* v_tail_677_; lean_object* v_zero_678_; uint8_t v_isZero_679_; 
v_head_676_ = lean_ctor_get(v_a_672_, 0);
v_tail_677_ = lean_ctor_get(v_a_672_, 1);
v_zero_678_ = lean_unsigned_to_nat(0u);
v_isZero_679_ = lean_nat_dec_eq(v_a_674_, v_zero_678_);
if (v_isZero_679_ == 1)
{
lean_object* v___x_680_; 
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v_a_672_);
lean_ctor_set(v___x_680_, 1, v_a_673_);
return v___x_680_;
}
else
{
lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_734_; 
lean_inc(v_tail_677_);
lean_inc(v_head_676_);
v_isSharedCheck_734_ = !lean_is_exclusive(v_a_672_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; lean_object* v_unused_736_; 
v_unused_735_ = lean_ctor_get(v_a_672_, 1);
lean_dec(v_unused_735_);
v_unused_736_ = lean_ctor_get(v_a_672_, 0);
lean_dec(v_unused_736_);
v___x_682_ = v_a_672_;
v_isShared_683_ = v_isSharedCheck_734_;
goto v_resetjp_681_;
}
else
{
lean_dec(v_a_672_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_734_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v_one_684_; lean_object* v_n_685_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___x_716_; uint8_t v___x_717_; 
v_one_684_ = lean_unsigned_to_nat(1u);
v_n_685_ = lean_nat_sub(v_a_674_, v_one_684_);
v___x_716_ = lean_unsigned_to_nat(10u);
v___x_717_ = lean_nat_dec_eq(v_head_676_, v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___y_721_; uint8_t v___x_732_; 
v___x_718_ = l_List_head_x3f___redArg(v_tail_677_);
v___x_719_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__0));
v___x_732_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_718_, v___x_719_);
lean_dec(v___x_718_);
if (v___x_732_ == 0)
{
goto v___jp_686_;
}
else
{
if (lean_obj_tag(v_tail_677_) == 0)
{
v___y_721_ = v_tail_677_;
goto v___jp_720_;
}
else
{
lean_object* v_tail_733_; 
v_tail_733_ = lean_ctor_get(v_tail_677_, 1);
lean_inc(v_tail_733_);
v___y_721_ = v_tail_733_;
goto v___jp_720_;
}
}
v___jp_720_:
{
lean_object* v___x_722_; uint8_t v___x_723_; 
v___x_722_ = l_List_head_x3f___redArg(v___y_721_);
lean_dec(v___y_721_);
v___x_723_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_722_, v___x_719_);
lean_dec(v___x_722_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
lean_del_object(v___x_682_);
v___x_724_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1));
v___x_725_ = lean_box(0);
v___x_726_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_724_, v___x_725_, v_a_673_);
if (lean_obj_tag(v_tail_677_) == 0)
{
lean_object* v_fst_727_; lean_object* v_snd_728_; 
v_fst_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_fst_727_);
v_snd_728_ = lean_ctor_get(v___x_726_, 1);
lean_inc(v_snd_728_);
lean_dec_ref(v___x_726_);
v___y_701_ = v_snd_728_;
v___y_702_ = v_fst_727_;
v___y_703_ = v_tail_677_;
goto v___jp_700_;
}
else
{
lean_object* v_fst_729_; lean_object* v_snd_730_; lean_object* v_tail_731_; 
v_fst_729_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_fst_729_);
v_snd_730_ = lean_ctor_get(v___x_726_, 1);
lean_inc(v_snd_730_);
lean_dec_ref(v___x_726_);
v_tail_731_ = lean_ctor_get(v_tail_677_, 1);
lean_inc(v_tail_731_);
lean_dec_ref_known(v_tail_677_, 2);
v___y_701_ = v_snd_730_;
v___y_702_ = v_fst_729_;
v___y_703_ = v_tail_731_;
goto v___jp_700_;
}
}
else
{
goto v___jp_686_;
}
}
}
else
{
goto v___jp_686_;
}
v___jp_686_:
{
lean_object* v___x_687_; lean_object* v_fst_688_; lean_object* v_snd_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_699_; 
v___x_687_ = lp_lean_x2dftml_LeanFtml_newlineScan_go(v_tail_677_, v_a_673_, v_n_685_);
lean_dec(v_n_685_);
v_fst_688_ = lean_ctor_get(v___x_687_, 0);
v_snd_689_ = lean_ctor_get(v___x_687_, 1);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_699_ == 0)
{
v___x_691_ = v___x_687_;
v_isShared_692_ = v_isSharedCheck_699_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_snd_689_);
lean_inc(v_fst_688_);
lean_dec(v___x_687_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_699_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 1, v_fst_688_);
v___x_694_ = v___x_682_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_head_676_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_fst_688_);
v___x_694_ = v_reuseFailAlloc_698_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_696_; 
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 0, v___x_694_);
v___x_696_ = v___x_691_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_694_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v_snd_689_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
}
v___jp_700_:
{
lean_object* v___x_704_; lean_object* v_fst_705_; lean_object* v_snd_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_715_; 
v___x_704_ = lp_lean_x2dftml_LeanFtml_newlineScan_go(v___y_703_, v___y_701_, v_n_685_);
lean_dec(v_n_685_);
v_fst_705_ = lean_ctor_get(v___x_704_, 0);
v_snd_706_ = lean_ctor_get(v___x_704_, 1);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_715_ == 0)
{
v___x_708_ = v___x_704_;
v_isShared_709_ = v_isSharedCheck_715_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_snd_706_);
lean_inc(v_fst_705_);
lean_dec(v___x_704_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_715_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_710_ = l_List_appendTR___redArg(v___y_702_, v_fst_705_);
v___x_711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_711_, 0, v_head_676_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v___x_711_);
v___x_713_ = v___x_708_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v___x_711_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v_snd_706_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan_go___boxed(lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = lp_lean_x2dftml_LeanFtml_newlineScan_go(v_a_737_, v_a_738_, v_a_739_);
lean_dec(v_a_739_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineScan(lean_object* v_src_741_, lean_object* v_toks_742_){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_743_ = l_List_lengthTR___redArg(v_src_741_);
v___x_744_ = lean_unsigned_to_nat(1u);
v___x_745_ = lean_nat_add(v___x_743_, v___x_744_);
lean_dec(v___x_743_);
v___x_746_ = lp_lean_x2dftml_LeanFtml_newlineScan_go(v_src_741_, v_toks_742_, v___x_745_);
lean_dec(v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_newlineRule(lean_object* v_st_748_){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineRule___closed__0));
v___x_750_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_748_, v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorIdx___impl(lean_object* v_x_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = lean_obj_tag_nat(v_x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorIdx___impl___boxed(lean_object* v_x_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorIdx___impl(v_x_753_);
lean_dec_ref(v_x_753_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(lean_object* v_t_755_, lean_object* v_k_756_){
_start:
{
lean_object* v_a_757_; lean_object* v___x_758_; 
v_a_757_ = lean_ctor_get(v_t_755_, 0);
lean_inc(v_a_757_);
lean_dec_ref(v_t_755_);
v___x_758_ = lean_apply_1(v_k_756_, v_a_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim(lean_object* v_motive_759_, lean_object* v_ctorIdx_760_, lean_object* v_t_761_, lean_object* v_h_762_, lean_object* v_k_763_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_761_, v_k_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___boxed(lean_object* v_motive_765_, lean_object* v_ctorIdx_766_, lean_object* v_t_767_, lean_object* v_h_768_, lean_object* v_k_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim(v_motive_765_, v_ctorIdx_766_, v_t_767_, v_h_768_, v_k_769_);
lean_dec(v_ctorIdx_766_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_wsB_elim___redArg(lean_object* v_t_771_, lean_object* v_wsB_772_){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_771_, v_wsB_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_wsB_elim(lean_object* v_motive_774_, lean_object* v_t_775_, lean_object* v_h_776_, lean_object* v_wsB_777_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_775_, v_wsB_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_phT_elim___redArg(lean_object* v_t_779_, lean_object* v_phT_780_){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_779_, v_phT_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_PUnit_phT_elim(lean_object* v_motive_782_, lean_object* v_t_783_, lean_object* v_h_784_, lean_object* v_phT_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = lp_lean_x2dftml_LeanFtml_PUnit_ctorElim___redArg(v_t_783_, v_phT_785_);
return v___x_786_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq(lean_object* v_x_787_, lean_object* v_x_788_){
_start:
{
if (lean_obj_tag(v_x_787_) == 0)
{
if (lean_obj_tag(v_x_788_) == 0)
{
lean_object* v_a_789_; lean_object* v_a_790_; uint8_t v___x_791_; 
v_a_789_ = lean_ctor_get(v_x_787_, 0);
v_a_790_ = lean_ctor_get(v_x_788_, 0);
v___x_791_ = lean_nat_dec_eq(v_a_789_, v_a_790_);
return v___x_791_;
}
else
{
uint8_t v___x_792_; 
v___x_792_ = 0;
return v___x_792_;
}
}
else
{
if (lean_obj_tag(v_x_788_) == 0)
{
uint8_t v___x_793_; 
v___x_793_ = 0;
return v___x_793_;
}
else
{
lean_object* v_a_794_; lean_object* v_a_795_; uint8_t v___x_796_; 
v_a_794_ = lean_ctor_get(v_x_787_, 0);
v_a_795_ = lean_ctor_get(v_x_788_, 0);
v___x_796_ = lean_nat_dec_eq(v_a_794_, v_a_795_);
return v___x_796_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq___boxed(lean_object* v_x_797_, lean_object* v_x_798_){
_start:
{
uint8_t v_res_799_; lean_object* v_r_800_; 
v_res_799_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq(v_x_797_, v_x_798_);
lean_dec_ref(v_x_798_);
lean_dec_ref(v_x_797_);
v_r_800_ = lean_box(v_res_799_);
return v_r_800_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit(lean_object* v_x_801_, lean_object* v_x_802_){
_start:
{
uint8_t v___x_803_; 
v___x_803_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit_decEq(v_x_801_, v_x_802_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit___boxed(lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
uint8_t v_res_806_; lean_object* v_r_807_; 
v_res_806_ = lp_lean_x2dftml_LeanFtml_instDecidableEqPUnit(v_x_804_, v_x_805_);
lean_dec_ref(v_x_805_);
lean_dec_ref(v_x_804_);
v_r_807_ = lean_box(v_res_806_);
return v_r_807_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lean_unsigned_to_nat(2u);
v___x_815_ = lean_nat_to_int(v___x_814_);
return v___x_815_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_unsigned_to_nat(1u);
v___x_817_ = lean_nat_to_int(v___x_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr(lean_object* v_x_824_, lean_object* v_prec_825_){
_start:
{
if (lean_obj_tag(v_x_824_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_846_; 
v_a_826_ = lean_ctor_get(v_x_824_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v_x_824_);
if (v_isSharedCheck_846_ == 0)
{
v___x_828_ = v_x_824_;
v_isShared_829_ = v_isSharedCheck_846_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v_x_824_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_846_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___y_831_; lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = lean_unsigned_to_nat(1024u);
v___x_843_ = lean_nat_dec_le(v___x_842_, v_prec_825_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; 
v___x_844_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3, &lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3);
v___y_831_ = v___x_844_;
goto v___jp_830_;
}
else
{
lean_object* v___x_845_; 
v___x_845_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4, &lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4);
v___y_831_ = v___x_845_;
goto v___jp_830_;
}
v___jp_830_:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_832_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__2));
v___x_833_ = l_Nat_reprFast(v_a_826_);
if (v_isShared_829_ == 0)
{
lean_ctor_set_tag(v___x_828_, 3);
lean_ctor_set(v___x_828_, 0, v___x_833_);
v___x_835_ = v___x_828_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v___x_833_);
v___x_835_ = v_reuseFailAlloc_841_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_836_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_832_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
lean_inc(v___y_831_);
v___x_837_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_837_, 0, v___y_831_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
v___x_838_ = 0;
v___x_839_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_839_, 0, v___x_837_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*1, v___x_838_);
v___x_840_ = l_Repr_addAppParen(v___x_839_, v_prec_825_);
return v___x_840_;
}
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_867_; 
v_a_847_ = lean_ctor_get(v_x_824_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v_x_824_);
if (v_isSharedCheck_867_ == 0)
{
v___x_849_ = v_x_824_;
v_isShared_850_ = v_isSharedCheck_867_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v_x_824_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_867_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___y_852_; lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_863_ = lean_unsigned_to_nat(1024u);
v___x_864_ = lean_nat_dec_le(v___x_863_, v_prec_825_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; 
v___x_865_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3, &lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__3);
v___y_852_ = v___x_865_;
goto v___jp_851_;
}
else
{
lean_object* v___x_866_; 
v___x_866_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4, &lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__4);
v___y_852_ = v___x_866_;
goto v___jp_851_;
}
v___jp_851_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_853_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___closed__7));
v___x_854_ = l_Nat_reprFast(v_a_847_);
if (v_isShared_850_ == 0)
{
lean_ctor_set_tag(v___x_849_, 3);
lean_ctor_set(v___x_849_, 0, v___x_854_);
v___x_856_ = v___x_849_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_854_);
v___x_856_ = v_reuseFailAlloc_862_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_857_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_857_, 0, v___x_853_);
lean_ctor_set(v___x_857_, 1, v___x_856_);
lean_inc(v___y_852_);
v___x_858_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_858_, 0, v___y_852_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
v___x_859_ = 0;
v___x_860_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_860_, 0, v___x_858_);
lean_ctor_set_uint8(v___x_860_, sizeof(void*)*1, v___x_859_);
v___x_861_ = l_Repr_addAppParen(v___x_860_, v_prec_825_);
return v___x_861_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprPUnit_repr___boxed(lean_object* v_x_868_, lean_object* v_prec_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = lp_lean_x2dftml_LeanFtml_instReprPUnit_repr(v_x_868_, v_prec_869_);
lean_dec(v_prec_869_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitBytes(lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_a_874_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref_known(v_x_873_, 1);
v___x_875_ = lean_box(0);
v___x_876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_876_, 0, v_a_874_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
return v___x_876_;
}
else
{
lean_object* v_a_877_; lean_object* v___x_878_; 
v_a_877_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v_x_873_, 1);
v___x_878_ = lp_lean_x2dftml_LeanFtml_phBytes(v_a_877_);
return v___x_878_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitAt(lean_object* v_s_879_){
_start:
{
if (lean_obj_tag(v_s_879_) == 0)
{
lean_object* v___x_880_; 
v___x_880_ = lean_box(0);
return v___x_880_;
}
else
{
lean_object* v_head_881_; lean_object* v_tail_882_; lean_object* v___x_887_; uint8_t v___x_888_; 
v_head_881_ = lean_ctor_get(v_s_879_, 0);
v_tail_882_ = lean_ctor_get(v_s_879_, 1);
v___x_887_ = lean_unsigned_to_nat(32u);
v___x_888_ = lean_nat_dec_eq(v_head_881_, v___x_887_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_889_ = lean_unsigned_to_nat(9u);
v___x_890_ = lean_nat_dec_eq(v_head_881_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; uint8_t v___x_892_; 
v___x_891_ = lean_unsigned_to_nat(10u);
v___x_892_ = lean_nat_dec_eq(v_head_881_, v___x_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; uint8_t v___x_894_; 
v___x_893_ = lean_unsigned_to_nat(13u);
v___x_894_ = lean_nat_dec_eq(v_head_881_, v___x_893_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; 
v___x_895_ = lp_lean_x2dftml_LeanFtml_readPlaceholder(v_s_879_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v___x_896_; 
v___x_896_ = lean_box(0);
return v___x_896_;
}
else
{
lean_object* v_val_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_914_; 
v_val_897_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_914_ == 0)
{
v___x_899_ = v___x_895_;
v_isShared_900_ = v_isSharedCheck_914_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_val_897_);
lean_dec(v___x_895_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_914_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v_fst_901_; lean_object* v_snd_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_913_; 
v_fst_901_ = lean_ctor_get(v_val_897_, 0);
v_snd_902_ = lean_ctor_get(v_val_897_, 1);
v_isSharedCheck_913_ = !lean_is_exclusive(v_val_897_);
if (v_isSharedCheck_913_ == 0)
{
v___x_904_ = v_val_897_;
v_isShared_905_ = v_isSharedCheck_913_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_snd_902_);
lean_inc(v_fst_901_);
lean_dec(v_val_897_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_913_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_906_, 0, v_fst_901_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 0, v___x_906_);
v___x_908_ = v___x_904_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_906_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v_snd_902_);
v___x_908_ = v_reuseFailAlloc_912_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
lean_object* v___x_910_; 
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_908_);
v___x_910_ = v___x_899_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
}
}
else
{
lean_inc(v_tail_882_);
lean_inc(v_head_881_);
lean_dec_ref_known(v_s_879_, 2);
goto v___jp_883_;
}
}
else
{
lean_inc(v_tail_882_);
lean_inc(v_head_881_);
lean_dec_ref_known(v_s_879_, 2);
goto v___jp_883_;
}
}
else
{
lean_inc(v_tail_882_);
lean_inc(v_head_881_);
lean_dec_ref_known(v_s_879_, 2);
goto v___jp_883_;
}
}
else
{
lean_inc(v_tail_882_);
lean_inc(v_head_881_);
lean_dec_ref_known(v_s_879_, 2);
goto v___jp_883_;
}
v___jp_883_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_884_, 0, v_head_881_);
v___x_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
lean_ctor_set(v___x_885_, 1, v_tail_882_);
v___x_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
return v___x_886_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits_go(lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_){
_start:
{
lean_object* v_zero_919_; uint8_t v_isZero_920_; 
v_zero_919_ = lean_unsigned_to_nat(0u);
v_isZero_920_ = lean_nat_dec_eq(v_a_918_, v_zero_919_);
if (v_isZero_920_ == 1)
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_921_, 0, v_a_917_);
lean_ctor_set(v___x_921_, 1, v_a_915_);
v___x_922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_922_, 0, v_a_916_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
v___x_923_ = lean_box(0);
v___x_924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_922_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
return v___x_924_;
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
lean_inc(v_a_915_);
lean_inc(v_a_917_);
v___x_925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_925_, 0, v_a_917_);
lean_ctor_set(v___x_925_, 1, v_a_915_);
lean_inc(v_a_916_);
v___x_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_926_, 0, v_a_916_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = lp_lean_x2dftml_LeanFtml_unitAt(v_a_915_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec(v_a_917_);
lean_dec(v_a_916_);
v___x_928_ = lean_box(0);
v___x_929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_926_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
return v___x_929_;
}
else
{
lean_object* v_val_930_; lean_object* v_fst_931_; lean_object* v_snd_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_947_; 
v_val_930_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_val_930_);
lean_dec_ref_known(v___x_927_, 1);
v_fst_931_ = lean_ctor_get(v_val_930_, 0);
v_snd_932_ = lean_ctor_get(v_val_930_, 1);
v_isSharedCheck_947_ = !lean_is_exclusive(v_val_930_);
if (v_isSharedCheck_947_ == 0)
{
v___x_934_ = v_val_930_;
v_isShared_935_ = v_isSharedCheck_947_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_snd_932_);
lean_inc(v_fst_931_);
lean_dec(v_val_930_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_947_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v_one_936_; lean_object* v_n_937_; lean_object* v___x_938_; lean_object* v___x_940_; 
v_one_936_ = lean_unsigned_to_nat(1u);
v_n_937_ = lean_nat_sub(v_a_918_, v_one_936_);
v___x_938_ = lean_box(0);
lean_inc(v_fst_931_);
if (v_isShared_935_ == 0)
{
lean_ctor_set_tag(v___x_934_, 1);
lean_ctor_set(v___x_934_, 1, v___x_938_);
v___x_940_ = v___x_934_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_fst_931_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v___x_938_);
v___x_940_ = v_reuseFailAlloc_946_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_941_ = l_List_appendTR___redArg(v_a_916_, v___x_940_);
v___x_942_ = lp_lean_x2dftml_LeanFtml_unitBytes(v_fst_931_);
v___x_943_ = l_List_appendTR___redArg(v_a_917_, v___x_942_);
v___x_944_ = lp_lean_x2dftml_LeanFtml_unitSplits_go(v_snd_932_, v___x_941_, v___x_943_, v_n_937_);
lean_dec(v_n_937_);
v___x_945_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_926_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
return v___x_945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits_go___boxed(lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = lp_lean_x2dftml_LeanFtml_unitSplits_go(v_a_948_, v_a_949_, v_a_950_, v_a_951_);
lean_dec(v_a_951_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitSplits(lean_object* v_src_953_){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_954_ = lean_box(0);
v___x_955_ = l_List_lengthTR___redArg(v_src_953_);
v___x_956_ = lean_unsigned_to_nat(1u);
v___x_957_ = lean_nat_add(v___x_955_, v___x_956_);
lean_dec(v___x_955_);
v___x_958_ = lp_lean_x2dftml_LeanFtml_unitSplits_go(v_src_953_, v___x_954_, v___x_954_, v___x_957_);
lean_dec(v___x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokenRuleAt(lean_object* v_toks_960_, lean_object* v_n_961_){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = l_List_drop___redArg(v_n_961_, v_toks_960_);
v___x_963_ = l_List_head_x3f___redArg(v___x_962_);
lean_dec(v___x_962_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v___x_964_; 
v___x_964_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tokenRuleAt___closed__0));
return v___x_964_;
}
else
{
lean_object* v_val_965_; lean_object* v_rule_966_; 
v_val_965_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_val_965_);
lean_dec_ref_known(v___x_963_, 1);
v_rule_966_ = lean_ctor_get(v_val_965_, 0);
lean_inc_ref(v_rule_966_);
lean_dec(v_val_965_);
return v_rule_966_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tokenRuleAt___boxed(lean_object* v_toks_967_, lean_object* v_n_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_toks_967_, v_n_968_);
lean_dec(v_toks_967_);
return v_res_969_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_unitIsBreak(lean_object* v_toks_970_, lean_object* v_u_971_){
_start:
{
if (lean_obj_tag(v_u_971_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_973_; uint8_t v___x_974_; 
v_a_972_ = lean_ctor_get(v_u_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref_known(v_u_971_, 1);
v___x_973_ = lean_unsigned_to_nat(10u);
v___x_974_ = lean_nat_dec_eq(v_a_972_, v___x_973_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; uint8_t v___x_976_; 
v___x_975_ = lean_unsigned_to_nat(13u);
v___x_976_ = lean_nat_dec_eq(v_a_972_, v___x_975_);
lean_dec(v_a_972_);
return v___x_976_;
}
else
{
lean_dec(v_a_972_);
return v___x_974_;
}
}
else
{
lean_object* v_a_977_; lean_object* v___x_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v_a_977_ = lean_ctor_get(v_u_971_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v_u_971_, 1);
v___x_978_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_toks_970_, v_a_977_);
v___x_979_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1));
v___x_980_ = lean_string_dec_eq(v___x_978_, v___x_979_);
lean_dec_ref(v___x_978_);
return v___x_980_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitIsBreak___boxed(lean_object* v_toks_981_, lean_object* v_u_982_){
_start:
{
uint8_t v_res_983_; lean_object* v_r_984_; 
v_res_983_ = lp_lean_x2dftml_LeanFtml_unitIsBreak(v_toks_981_, v_u_982_);
lean_dec(v_toks_981_);
v_r_984_ = lean_box(v_res_983_);
return v_r_984_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0(lean_object* v_toks_985_, lean_object* v_x_986_, lean_object* v_x_987_){
_start:
{
if (lean_obj_tag(v_x_987_) == 0)
{
return v_x_986_;
}
else
{
lean_object* v_head_988_; 
v_head_988_ = lean_ctor_get(v_x_987_, 0);
if (lean_obj_tag(v_head_988_) == 0)
{
lean_object* v_tail_989_; 
v_tail_989_ = lean_ctor_get(v_x_987_, 1);
lean_inc(v_tail_989_);
lean_dec_ref_known(v_x_987_, 2);
v_x_987_ = v_tail_989_;
goto _start;
}
else
{
lean_object* v_tail_991_; lean_object* v_a_992_; lean_object* v___x_993_; lean_object* v___x_994_; uint8_t v___x_995_; 
lean_inc_ref(v_head_988_);
v_tail_991_ = lean_ctor_get(v_x_987_, 1);
lean_inc(v_tail_991_);
lean_dec_ref_known(v_x_987_, 2);
v_a_992_ = lean_ctor_get(v_head_988_, 0);
lean_inc_n(v_a_992_, 2);
lean_dec_ref_known(v_head_988_, 1);
v___x_993_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_toks_985_, v_a_992_);
v___x_994_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_newlineScan_go___closed__1));
v___x_995_ = lean_string_dec_eq(v___x_993_, v___x_994_);
lean_dec_ref(v___x_993_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = lp_lean_x2dftml_LeanFtml_phBytes(v_a_992_);
v___x_997_ = l_List_appendTR___redArg(v_x_986_, v___x_996_);
v_x_986_ = v___x_997_;
v_x_987_ = v_tail_991_;
goto _start;
}
else
{
lean_dec(v_a_992_);
v_x_987_ = v_tail_991_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0___boxed(lean_object* v_toks_1000_, lean_object* v_x_1001_, lean_object* v_x_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0(v_toks_1000_, v_x_1001_, v_x_1002_);
lean_dec(v_toks_1000_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterRunBytes(lean_object* v_toks_1004_, lean_object* v_units_1005_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_box(0);
v___x_1007_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_filterRunBytes_spec__0(v_toks_1004_, v___x_1006_, v_units_1005_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_filterRunBytes___boxed(lean_object* v_toks_1008_, lean_object* v_units_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = lp_lean_x2dftml_LeanFtml_filterRunBytes(v_toks_1008_, v_units_1009_);
lean_dec(v_toks_1008_);
return v_res_1010_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(lean_object* v_toks_1011_, lean_object* v_x_1012_){
_start:
{
if (lean_obj_tag(v_x_1012_) == 0)
{
uint8_t v___x_1013_; 
v___x_1013_ = 0;
return v___x_1013_;
}
else
{
lean_object* v_head_1014_; lean_object* v_tail_1015_; uint8_t v___x_1016_; 
v_head_1014_ = lean_ctor_get(v_x_1012_, 0);
lean_inc(v_head_1014_);
v_tail_1015_ = lean_ctor_get(v_x_1012_, 1);
lean_inc(v_tail_1015_);
lean_dec_ref_known(v_x_1012_, 2);
v___x_1016_ = lp_lean_x2dftml_LeanFtml_unitIsBreak(v_toks_1011_, v_head_1014_);
if (v___x_1016_ == 0)
{
v_x_1012_ = v_tail_1015_;
goto _start;
}
else
{
lean_dec(v_tail_1015_);
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0___boxed(lean_object* v_toks_1018_, lean_object* v_x_1019_){
_start:
{
uint8_t v_res_1020_; lean_object* v_r_1021_; 
v_res_1020_ = lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(v_toks_1018_, v_x_1019_);
lean_dec(v_toks_1018_);
v_r_1021_ = lean_box(v_res_1020_);
return v_r_1021_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__0));
v___x_1024_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__2));
v___x_1027_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1(lean_object* v_toks_1028_, lean_object* v_x_1029_){
_start:
{
if (lean_obj_tag(v_x_1029_) == 0)
{
lean_object* v___x_1030_; 
lean_dec(v_toks_1028_);
v___x_1030_ = lean_box(0);
return v___x_1030_;
}
else
{
lean_object* v_head_1031_; lean_object* v_snd_1032_; lean_object* v_tail_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1142_; 
v_head_1031_ = lean_ctor_get(v_x_1029_, 0);
lean_inc(v_head_1031_);
v_snd_1032_ = lean_ctor_get(v_head_1031_, 1);
lean_inc(v_snd_1032_);
v_tail_1033_ = lean_ctor_get(v_x_1029_, 1);
v_isSharedCheck_1142_ = !lean_is_exclusive(v_x_1029_);
if (v_isSharedCheck_1142_ == 0)
{
lean_object* v_unused_1143_; 
v_unused_1143_ = lean_ctor_get(v_x_1029_, 0);
lean_dec(v_unused_1143_);
v___x_1035_ = v_x_1029_;
v_isShared_1036_ = v_isSharedCheck_1142_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_tail_1033_);
lean_dec(v_x_1029_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1142_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v_fst_1037_; lean_object* v_fst_1038_; lean_object* v_snd_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v_fst_1037_ = lean_ctor_get(v_head_1031_, 0);
lean_inc(v_fst_1037_);
lean_dec(v_head_1031_);
v_fst_1038_ = lean_ctor_get(v_snd_1032_, 0);
lean_inc(v_fst_1038_);
v_snd_1039_ = lean_ctor_get(v_snd_1032_, 1);
lean_inc(v_snd_1039_);
lean_dec(v_snd_1032_);
v___x_1040_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__1);
v___x_1041_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1040_, v_snd_1039_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_dec(v_fst_1038_);
lean_dec(v_fst_1037_);
lean_del_object(v___x_1035_);
v_x_1029_ = v_tail_1033_;
goto _start;
}
else
{
lean_object* v_val_1043_; lean_object* v___x_1044_; lean_object* v_attr_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v_val_1043_ = lean_ctor_get(v___x_1041_, 0);
lean_inc_n(v_val_1043_, 2);
lean_dec_ref_known(v___x_1041_, 1);
v___x_1044_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4));
v_attr_1045_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_advRowMatch_spec__0(v_val_1043_, v_val_1043_, v___x_1044_);
v___x_1046_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__3);
v___x_1047_ = l_List_lengthTR___redArg(v_attr_1045_);
v___x_1048_ = l_List_drop___redArg(v___x_1047_, v_val_1043_);
lean_dec(v_val_1043_);
v___x_1049_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1046_, v___x_1048_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_dec(v_attr_1045_);
lean_dec(v_fst_1038_);
lean_dec(v_fst_1037_);
lean_del_object(v___x_1035_);
v_x_1029_ = v_tail_1033_;
goto _start;
}
else
{
lean_object* v_val_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1141_; 
v_val_1051_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1053_ = v___x_1049_;
v_isShared_1054_ = v_isSharedCheck_1141_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_val_1051_);
lean_dec(v___x_1049_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1141_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1___closed__3);
v___x_1056_ = lp_lean_x2dftml_LeanFtml_splitAtFirstCI(v___x_1055_, v_val_1051_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_del_object(v___x_1053_);
lean_dec(v_attr_1045_);
lean_dec(v_fst_1038_);
lean_dec(v_fst_1037_);
lean_del_object(v___x_1035_);
v_x_1029_ = v_tail_1033_;
goto _start;
}
else
{
lean_object* v_val_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1140_; 
v_val_1058_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1060_ = v___x_1056_;
v_isShared_1061_ = v_isSharedCheck_1140_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_val_1058_);
lean_dec(v___x_1056_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1140_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v_fst_1062_; lean_object* v_snd_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1139_; 
v_fst_1062_ = lean_ctor_get(v_val_1058_, 0);
v_snd_1063_ = lean_ctor_get(v_val_1058_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_val_1058_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1065_ = v_val_1058_;
v_isShared_1066_ = v_isSharedCheck_1139_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_snd_1063_);
lean_inc(v_fst_1062_);
lean_dec(v_val_1058_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1139_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = lp_lean_x2dftml_LeanFtml_unitSplits(v_snd_1063_);
v___x_1068_ = l_List_getLast_x3f___redArg(v___x_1067_);
lean_dec(v___x_1067_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_del_object(v___x_1065_);
lean_dec(v_fst_1062_);
lean_del_object(v___x_1060_);
lean_del_object(v___x_1053_);
lean_dec(v_attr_1045_);
lean_dec(v_fst_1038_);
lean_dec(v_fst_1037_);
lean_del_object(v___x_1035_);
v_x_1029_ = v_tail_1033_;
goto _start;
}
else
{
lean_object* v_val_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1138_; 
lean_dec(v_tail_1033_);
v_val_1070_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1072_ = v___x_1068_;
v_isShared_1073_ = v_isSharedCheck_1138_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_val_1070_);
lean_dec(v___x_1068_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1138_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v_snd_1074_; lean_object* v_fst_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1137_; 
v_snd_1074_ = lean_ctor_get(v_val_1070_, 1);
v_fst_1075_ = lean_ctor_get(v_val_1070_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_val_1070_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1077_ = v_val_1070_;
v_isShared_1078_ = v_isSharedCheck_1137_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_snd_1074_);
lean_inc(v_fst_1075_);
lean_dec(v_val_1070_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1137_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v_fst_1079_; lean_object* v_snd_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1136_; 
v_fst_1079_ = lean_ctor_get(v_snd_1074_, 0);
v_snd_1080_ = lean_ctor_get(v_snd_1074_, 1);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_snd_1074_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1082_ = v_snd_1074_;
v_isShared_1083_ = v_isSharedCheck_1136_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_snd_1080_);
lean_inc(v_fst_1079_);
lean_dec(v_snd_1074_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1136_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___y_1105_; lean_object* v___y_1106_; lean_object* v___y_1131_; uint8_t v___x_1134_; 
lean_inc(v_fst_1037_);
v___x_1134_ = lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(v_toks_1028_, v_fst_1037_);
if (v___x_1134_ == 0)
{
lean_dec(v_fst_1037_);
v___y_1131_ = v_fst_1038_;
goto v___jp_1130_;
}
else
{
lean_object* v___x_1135_; 
lean_dec(v_fst_1038_);
v___x_1135_ = lp_lean_x2dftml_LeanFtml_filterRunBytes(v_toks_1028_, v_fst_1037_);
v___y_1131_ = v___x_1135_;
goto v___jp_1130_;
}
v___jp_1084_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1090_ = l_List_appendTR___redArg(v___y_1087_, v___y_1088_);
v___x_1091_ = l_List_appendTR___redArg(v___x_1090_, v___y_1085_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___y_1089_);
v___x_1093_ = v___x_1082_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___y_1089_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v_snd_1080_);
v___x_1093_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
lean_object* v___x_1095_; 
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 1, v___x_1093_);
lean_ctor_set(v___x_1077_, 0, v___y_1086_);
v___x_1095_ = v___x_1077_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___y_1086_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
lean_object* v___x_1097_; 
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 1, v___x_1095_);
lean_ctor_set(v___x_1065_, 0, v___x_1091_);
v___x_1097_ = v___x_1065_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1091_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1099_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 0, v___x_1097_);
v___x_1099_ = v___x_1072_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
}
v___jp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1107_ = lean_unsigned_to_nat(32u);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 1, v_attr_1045_);
lean_ctor_set(v___x_1035_, 0, v___x_1107_);
v___x_1109_ = v___x_1035_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1129_, 1, v_attr_1045_);
v___x_1109_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
lean_object* v___x_1111_; 
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 0, v___x_1109_);
v___x_1111_ = v___x_1060_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1109_);
v___x_1111_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1112_; lean_object* v_fst_1113_; lean_object* v_snd_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1127_; 
lean_inc(v_toks_1028_);
v___x_1112_ = lp_lean_x2dftml_LeanFtml_spanProcess(v___x_1111_, v_fst_1062_, v_toks_1028_);
lean_dec(v_fst_1062_);
lean_dec_ref(v___x_1111_);
v_fst_1113_ = lean_ctor_get(v___x_1112_, 0);
v_snd_1114_ = lean_ctor_get(v___x_1112_, 1);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1116_ = v___x_1112_;
v_isShared_1117_ = v_isSharedCheck_1127_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_snd_1114_);
lean_inc(v_fst_1113_);
lean_dec(v___x_1112_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1127_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
uint8_t v___x_1118_; 
v___x_1118_ = l_List_isEmpty___redArg(v_fst_1113_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v___x_1121_; 
v___x_1119_ = l_List_lengthTR___redArg(v_toks_1028_);
lean_dec(v_toks_1028_);
lean_inc(v_fst_1113_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 1, v_fst_1113_);
lean_ctor_set(v___x_1116_, 0, v___x_1119_);
v___x_1121_ = v___x_1116_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1119_);
lean_ctor_set(v_reuseFailAlloc_1125_, 1, v_fst_1113_);
v___x_1121_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
lean_object* v___x_1123_; 
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1121_);
v___x_1123_ = v___x_1053_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
v___y_1085_ = v___y_1106_;
v___y_1086_ = v_snd_1114_;
v___y_1087_ = v___y_1105_;
v___y_1088_ = v_fst_1113_;
v___y_1089_ = v___x_1123_;
goto v___jp_1084_;
}
}
}
else
{
lean_object* v___x_1126_; 
lean_del_object(v___x_1116_);
lean_del_object(v___x_1053_);
lean_dec(v_toks_1028_);
v___x_1126_ = lean_box(0);
v___y_1085_ = v___y_1106_;
v___y_1086_ = v_snd_1114_;
v___y_1087_ = v___y_1105_;
v___y_1088_ = v_fst_1113_;
v___y_1089_ = v___x_1126_;
goto v___jp_1084_;
}
}
}
}
}
v___jp_1130_:
{
uint8_t v___x_1132_; 
lean_inc(v_fst_1075_);
v___x_1132_ = lp_lean_x2dftml_List_any___at___00LeanFtml_scoredMatchAt_spec__0(v_toks_1028_, v_fst_1075_);
if (v___x_1132_ == 0)
{
lean_dec(v_fst_1075_);
v___y_1105_ = v___y_1131_;
v___y_1106_ = v_fst_1079_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1133_; 
lean_dec(v_fst_1079_);
v___x_1133_ = lp_lean_x2dftml_LeanFtml_filterRunBytes(v_toks_1028_, v_fst_1075_);
v___y_1105_ = v___y_1131_;
v___y_1106_ = v___x_1133_;
goto v___jp_1104_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredMatchAt(lean_object* v_src_1144_, lean_object* v_toks_1145_){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1146_ = lp_lean_x2dftml_LeanFtml_unitSplits(v_src_1144_);
v___x_1147_ = l_List_reverse___redArg(v___x_1146_);
v___x_1148_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_scoredMatchAt_spec__1(v_toks_1145_, v___x_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan_go(lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
if (lean_obj_tag(v_a_1149_) == 0)
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1153_, 0, v_a_1150_);
lean_ctor_set(v___x_1153_, 1, v_a_1151_);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v_a_1149_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
return v___x_1154_;
}
else
{
lean_object* v_head_1155_; lean_object* v_tail_1156_; lean_object* v_zero_1157_; uint8_t v_isZero_1158_; 
v_head_1155_ = lean_ctor_get(v_a_1149_, 0);
v_tail_1156_ = lean_ctor_get(v_a_1149_, 1);
v_zero_1157_ = lean_unsigned_to_nat(0u);
v_isZero_1158_ = lean_nat_dec_eq(v_a_1152_, v_zero_1157_);
if (v_isZero_1158_ == 1)
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1159_, 0, v_a_1150_);
lean_ctor_set(v___x_1159_, 1, v_a_1151_);
v___x_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1160_, 0, v_a_1149_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
return v___x_1160_;
}
else
{
lean_object* v_one_1161_; lean_object* v_n_1162_; lean_object* v___x_1163_; 
lean_inc(v_tail_1156_);
lean_inc(v_head_1155_);
v_one_1161_ = lean_unsigned_to_nat(1u);
v_n_1162_ = lean_nat_sub(v_a_1152_, v_one_1161_);
lean_inc(v_a_1150_);
v___x_1163_ = lp_lean_x2dftml_LeanFtml_scoredMatchAt(v_a_1149_, v_a_1150_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v___x_1164_; lean_object* v_fst_1165_; lean_object* v_snd_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1174_; 
v___x_1164_ = lp_lean_x2dftml_LeanFtml_scoredScan_go(v_tail_1156_, v_a_1150_, v_a_1151_, v_n_1162_);
lean_dec(v_n_1162_);
v_fst_1165_ = lean_ctor_get(v___x_1164_, 0);
v_snd_1166_ = lean_ctor_get(v___x_1164_, 1);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1168_ = v___x_1164_;
v_isShared_1169_ = v_isSharedCheck_1174_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_snd_1166_);
lean_inc(v_fst_1165_);
lean_dec(v___x_1164_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1174_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1170_; lean_object* v___x_1172_; 
v___x_1170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1170_, 0, v_head_1155_);
lean_ctor_set(v___x_1170_, 1, v_fst_1165_);
if (v_isShared_1169_ == 0)
{
lean_ctor_set(v___x_1168_, 0, v___x_1170_);
v___x_1172_ = v___x_1168_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_snd_1166_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
else
{
lean_object* v_val_1175_; lean_object* v_snd_1176_; lean_object* v_snd_1177_; lean_object* v_fst_1178_; lean_object* v_fst_1179_; lean_object* v_fst_1180_; lean_object* v_snd_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1204_; 
lean_dec(v_tail_1156_);
lean_dec(v_head_1155_);
lean_dec(v_a_1150_);
v_val_1175_ = lean_ctor_get(v___x_1163_, 0);
lean_inc(v_val_1175_);
lean_dec_ref_known(v___x_1163_, 1);
v_snd_1176_ = lean_ctor_get(v_val_1175_, 1);
lean_inc(v_snd_1176_);
v_snd_1177_ = lean_ctor_get(v_snd_1176_, 1);
lean_inc(v_snd_1177_);
v_fst_1178_ = lean_ctor_get(v_val_1175_, 0);
lean_inc(v_fst_1178_);
lean_dec(v_val_1175_);
v_fst_1179_ = lean_ctor_get(v_snd_1176_, 0);
lean_inc(v_fst_1179_);
lean_dec(v_snd_1176_);
v_fst_1180_ = lean_ctor_get(v_snd_1177_, 0);
v_snd_1181_ = lean_ctor_get(v_snd_1177_, 1);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_snd_1177_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1183_ = v_snd_1177_;
v_isShared_1184_ = v_isSharedCheck_1204_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_snd_1181_);
lean_inc(v_fst_1180_);
lean_dec(v_snd_1177_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1204_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___y_1186_; 
if (lean_obj_tag(v_fst_1180_) == 0)
{
lean_del_object(v___x_1183_);
v___y_1186_ = v_a_1151_;
goto v___jp_1185_;
}
else
{
lean_object* v_val_1198_; lean_object* v___x_1199_; lean_object* v___x_1201_; 
v_val_1198_ = lean_ctor_get(v_fst_1180_, 0);
lean_inc(v_val_1198_);
lean_dec_ref_known(v_fst_1180_, 1);
v___x_1199_ = lean_box(0);
if (v_isShared_1184_ == 0)
{
lean_ctor_set_tag(v___x_1183_, 1);
lean_ctor_set(v___x_1183_, 1, v___x_1199_);
lean_ctor_set(v___x_1183_, 0, v_val_1198_);
v___x_1201_ = v___x_1183_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_val_1198_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v___x_1199_);
v___x_1201_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
lean_object* v___x_1202_; 
v___x_1202_ = l_List_appendTR___redArg(v_a_1151_, v___x_1201_);
v___y_1186_ = v___x_1202_;
goto v___jp_1185_;
}
}
v___jp_1185_:
{
lean_object* v___x_1187_; lean_object* v_fst_1188_; lean_object* v_snd_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1197_; 
v___x_1187_ = lp_lean_x2dftml_LeanFtml_scoredScan_go(v_snd_1181_, v_fst_1179_, v___y_1186_, v_n_1162_);
lean_dec(v_n_1162_);
v_fst_1188_ = lean_ctor_get(v___x_1187_, 0);
v_snd_1189_ = lean_ctor_get(v___x_1187_, 1);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1191_ = v___x_1187_;
v_isShared_1192_ = v_isSharedCheck_1197_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_snd_1189_);
lean_inc(v_fst_1188_);
lean_dec(v___x_1187_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1197_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1193_; lean_object* v___x_1195_; 
v___x_1193_ = l_List_appendTR___redArg(v_fst_1178_, v_fst_1188_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1193_);
v___x_1195_ = v___x_1191_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1193_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v_snd_1189_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan_go___boxed(lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = lp_lean_x2dftml_LeanFtml_scoredScan_go(v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_);
lean_dec(v_a_1208_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredScan(lean_object* v_src_1210_, lean_object* v_toks_1211_){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1212_ = lean_box(0);
v___x_1213_ = l_List_lengthTR___redArg(v_src_1210_);
v___x_1214_ = lean_unsigned_to_nat(1u);
v___x_1215_ = lean_nat_add(v___x_1213_, v___x_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lp_lean_x2dftml_LeanFtml_scoredScan_go(v_src_1210_, v_toks_1211_, v___x_1212_, v___x_1215_);
lean_dec(v___x_1215_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsRunNl(lean_object* v_x_1219_){
_start:
{
if (lean_obj_tag(v_x_1219_) == 0)
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_box(0);
return v___x_1220_;
}
else
{
lean_object* v_head_1221_; lean_object* v_tail_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
v_head_1221_ = lean_ctor_get(v_x_1219_, 0);
v_tail_1222_ = lean_ctor_get(v_x_1219_, 1);
v___x_1223_ = lean_unsigned_to_nat(10u);
v___x_1224_ = lean_nat_dec_eq(v_head_1221_, v___x_1223_);
if (v___x_1224_ == 0)
{
uint8_t v___x_1225_; 
v___x_1225_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1221_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_box(0);
return v___x_1226_;
}
else
{
lean_object* v___x_1227_; 
v___x_1227_ = lp_lean_x2dftml_LeanFtml_wsRunNl(v_tail_1222_);
if (lean_obj_tag(v___x_1227_) == 0)
{
return v___x_1227_;
}
else
{
lean_object* v_val_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1237_; 
v_val_1228_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1230_ = v___x_1227_;
v_isShared_1231_ = v_isSharedCheck_1237_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_val_1228_);
lean_dec(v___x_1227_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1237_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1235_; 
v___x_1232_ = lean_unsigned_to_nat(1u);
v___x_1233_ = lean_nat_add(v_val_1228_, v___x_1232_);
lean_dec(v_val_1228_);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 0, v___x_1233_);
v___x_1235_ = v___x_1230_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1233_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
}
else
{
lean_object* v___x_1238_; 
v___x_1238_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wsRunNl___closed__0));
return v___x_1238_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsRunNl___boxed(lean_object* v_x_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = lp_lean_x2dftml_LeanFtml_wsRunNl(v_x_1239_);
lean_dec(v_x_1239_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraMatchAt(lean_object* v_src_1241_){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageProcess___closed__1));
lean_inc(v_src_1241_);
v___x_1243_ = lp_lean_x2dftml_LeanFtml_splitAtFirstBytes(v___x_1242_, v_src_1241_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_dec(v_src_1241_);
return v___x_1243_;
}
else
{
lean_object* v_val_1244_; lean_object* v_fst_1245_; lean_object* v_snd_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1271_; 
v_val_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_val_1244_);
lean_dec_ref_known(v___x_1243_, 1);
v_fst_1245_ = lean_ctor_get(v_val_1244_, 0);
v_snd_1246_ = lean_ctor_get(v_val_1244_, 1);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_val_1244_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1248_ = v_val_1244_;
v_isShared_1249_ = v_isSharedCheck_1271_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_snd_1246_);
lean_inc(v_fst_1245_);
lean_dec(v_val_1244_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1271_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1250_; 
v___x_1250_ = lp_lean_x2dftml_LeanFtml_wsRunNl(v_snd_1246_);
lean_dec(v_snd_1246_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v___x_1251_; 
lean_del_object(v___x_1248_);
lean_dec(v_fst_1245_);
lean_dec(v_src_1241_);
v___x_1251_ = lean_box(0);
return v___x_1251_;
}
else
{
lean_object* v_val_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1270_; 
v_val_1252_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1254_ = v___x_1250_;
v_isShared_1255_ = v_isSharedCheck_1270_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_val_1252_);
lean_dec(v___x_1250_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1270_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v_len_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1265_; 
v___x_1256_ = l_List_lengthTR___redArg(v_fst_1245_);
lean_dec(v_fst_1245_);
v___x_1257_ = lean_unsigned_to_nat(1u);
v___x_1258_ = lean_nat_add(v___x_1256_, v___x_1257_);
lean_dec(v___x_1256_);
v___x_1259_ = lean_nat_add(v_val_1252_, v___x_1257_);
lean_dec(v_val_1252_);
v_len_1260_ = lean_nat_add(v___x_1258_, v___x_1259_);
lean_dec(v___x_1259_);
lean_dec(v___x_1258_);
v___x_1261_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_imageMatchAt_spec__0___closed__4));
lean_inc(v_len_1260_);
lean_inc(v_src_1241_);
v___x_1262_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_1241_, v_src_1241_, v_len_1260_, v___x_1261_);
v___x_1263_ = l_List_drop___redArg(v_len_1260_, v_src_1241_);
lean_dec(v_src_1241_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 1, v___x_1263_);
lean_ctor_set(v___x_1248_, 0, v___x_1262_);
v___x_1265_ = v___x_1248_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1262_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v___x_1263_);
v___x_1265_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
lean_object* v___x_1267_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 0, v___x_1265_);
v___x_1267_ = v___x_1254_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
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
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1391_ = lean_box(0);
v___x_1392_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__58));
v___x_1393_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(v___x_1392_, v___x_1391_);
return v___x_1393_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraSkipRules(void){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59, &lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59_once, _init_lp_lean_x2dftml_LeanFtml_paraSkipRules___closed__59);
return v___x_1394_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__2(void){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1397_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__1));
v___x_1398_ = l_String_toListImpl(v___x_1397_);
return v___x_1398_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__4(void){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1400_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__3));
v___x_1401_ = l_String_toListImpl(v___x_1400_);
return v___x_1401_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__5(void){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__4, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__4);
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1402_);
return v___x_1403_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__6(void){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1404_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__5, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__5);
v___x_1405_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__2, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__2);
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
lean_ctor_set(v___x_1406_, 1, v___x_1404_);
return v___x_1406_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__7(void){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1407_ = lean_box(0);
v___x_1408_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__6, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__6);
v___x_1409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
lean_ctor_set(v___x_1409_, 1, v___x_1407_);
return v___x_1409_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__9(void){
_start:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1411_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__8));
v___x_1412_ = l_String_toListImpl(v___x_1411_);
return v___x_1412_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__10(void){
_start:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__9, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__9);
v___x_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1413_);
return v___x_1414_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__11(void){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1415_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__10, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__10);
v___x_1416_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__2, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__2);
v___x_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
lean_ctor_set(v___x_1417_, 1, v___x_1415_);
return v___x_1417_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__12(void){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__11, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__11);
v___x_1420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
lean_ctor_set(v___x_1420_, 1, v___x_1418_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraWrap(lean_object* v_m_1427_, lean_object* v_toks_1428_){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v_fst_1432_; lean_object* v_snd_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v_fst_1436_; lean_object* v_snd_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1449_; 
v___x_1429_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__0));
v___x_1430_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__7, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__7);
v___x_1431_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1429_, v___x_1430_, v_toks_1428_);
v_fst_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_fst_1432_);
v_snd_1433_ = lean_ctor_get(v___x_1431_, 1);
lean_inc(v_snd_1433_);
lean_dec_ref(v___x_1431_);
v___x_1434_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_paraWrap___closed__12, &lp_lean_x2dftml_LeanFtml_paraWrap___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_paraWrap___closed__12);
v___x_1435_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1429_, v___x_1434_, v_snd_1433_);
v_fst_1436_ = lean_ctor_get(v___x_1435_, 0);
v_snd_1437_ = lean_ctor_get(v___x_1435_, 1);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1439_ = v___x_1435_;
v_isShared_1440_ = v_isSharedCheck_1449_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_snd_1437_);
lean_inc(v_fst_1436_);
lean_dec(v___x_1435_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1449_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1447_; 
v___x_1441_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_m_1427_);
v___x_1442_ = l_List_appendTR___redArg(v_fst_1432_, v___x_1441_);
v___x_1443_ = l_List_appendTR___redArg(v___x_1442_, v_fst_1436_);
v___x_1444_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_paraWrap___closed__14));
v___x_1445_ = l_List_appendTR___redArg(v___x_1443_, v___x_1444_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 0, v___x_1445_);
v___x_1447_ = v___x_1439_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_snd_1437_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraWrap___boxed(lean_object* v_m_1450_, lean_object* v_toks_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1450_, v_toks_1451_);
lean_dec(v_m_1450_);
return v_res_1452_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesEndsWith(lean_object* v_s_1453_, lean_object* v_e_1454_){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; uint8_t v___x_1459_; 
v___x_1455_ = l_List_lengthTR___redArg(v_s_1453_);
v___x_1456_ = l_List_lengthTR___redArg(v_e_1454_);
v___x_1457_ = lean_nat_sub(v___x_1455_, v___x_1456_);
lean_dec(v___x_1456_);
lean_dec(v___x_1455_);
v___x_1458_ = l_List_drop___redArg(v___x_1457_, v_s_1453_);
v___x_1459_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_e_1454_, v___x_1458_);
lean_dec(v___x_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesEndsWith___boxed(lean_object* v_s_1460_, lean_object* v_e_1461_){
_start:
{
uint8_t v_res_1462_; lean_object* v_r_1463_; 
v_res_1462_ = lp_lean_x2dftml_LeanFtml_bytesEndsWith(v_s_1460_, v_e_1461_);
lean_dec(v_e_1461_);
lean_dec(v_s_1460_);
v_r_1463_ = lean_box(v_res_1462_);
return v_r_1463_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesContains(lean_object* v_s_1464_, lean_object* v_sub_1465_){
_start:
{
if (lean_obj_tag(v_s_1464_) == 0)
{
uint8_t v___x_1466_; 
v___x_1466_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_sub_1465_, v_s_1464_);
return v___x_1466_;
}
else
{
lean_object* v_tail_1467_; uint8_t v___x_1468_; 
v_tail_1467_ = lean_ctor_get(v_s_1464_, 1);
v___x_1468_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_sub_1465_, v_s_1464_);
if (v___x_1468_ == 0)
{
v_s_1464_ = v_tail_1467_;
goto _start;
}
else
{
return v___x_1468_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesContains___boxed(lean_object* v_s_1470_, lean_object* v_sub_1471_){
_start:
{
uint8_t v_res_1472_; lean_object* v_r_1473_; 
v_res_1472_ = lp_lean_x2dftml_LeanFtml_bytesContains(v_s_1470_, v_sub_1471_);
lean_dec(v_sub_1471_);
lean_dec(v_s_1470_);
v_r_1473_ = lean_box(v_res_1472_);
return v_r_1473_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1(lean_object* v_fst_1474_, lean_object* v_x_1475_){
_start:
{
if (lean_obj_tag(v_x_1475_) == 0)
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_box(0);
return v___x_1476_;
}
else
{
lean_object* v_head_1477_; lean_object* v_tail_1478_; lean_object* v_fst_1479_; uint8_t v___x_1480_; 
v_head_1477_ = lean_ctor_get(v_x_1475_, 0);
v_tail_1478_ = lean_ctor_get(v_x_1475_, 1);
v_fst_1479_ = lean_ctor_get(v_head_1477_, 0);
v___x_1480_ = lean_nat_dec_eq(v_fst_1479_, v_fst_1474_);
if (v___x_1480_ == 0)
{
v_x_1475_ = v_tail_1478_;
goto _start;
}
else
{
lean_object* v___x_1482_; 
lean_inc(v_head_1477_);
v___x_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1482_, 0, v_head_1477_);
return v___x_1482_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1___boxed(lean_object* v_fst_1483_, lean_object* v_x_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1(v_fst_1483_, v_x_1484_);
lean_dec(v_x_1484_);
lean_dec(v_fst_1483_);
return v_res_1485_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0(lean_object* v___x_1486_, uint8_t v___x_1487_, lean_object* v_x_1488_){
_start:
{
if (lean_obj_tag(v_x_1488_) == 0)
{
uint8_t v___x_1489_; 
v___x_1489_ = 0;
return v___x_1489_;
}
else
{
lean_object* v_head_1490_; lean_object* v_tail_1491_; uint8_t v___y_1493_; lean_object* v_fst_1495_; lean_object* v_snd_1496_; uint8_t v___x_1497_; 
v_head_1490_ = lean_ctor_get(v_x_1488_, 0);
v_tail_1491_ = lean_ctor_get(v_x_1488_, 1);
v_fst_1495_ = lean_ctor_get(v_head_1490_, 0);
v_snd_1496_ = lean_ctor_get(v_head_1490_, 1);
v___x_1497_ = lp_lean_x2dftml_LeanFtml_bytesEndsWith(v___x_1486_, v_fst_1495_);
if (v___x_1497_ == 0)
{
v___y_1493_ = v___x_1487_;
goto v___jp_1492_;
}
else
{
uint8_t v___x_1498_; 
v___x_1498_ = lp_lean_x2dftml_LeanFtml_bytesContains(v___x_1486_, v_snd_1496_);
v___y_1493_ = v___x_1498_;
goto v___jp_1492_;
}
v___jp_1492_:
{
if (v___y_1493_ == 0)
{
v_x_1488_ = v_tail_1491_;
goto _start;
}
else
{
return v___y_1493_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0___boxed(lean_object* v___x_1499_, lean_object* v___x_1500_, lean_object* v_x_1501_){
_start:
{
uint8_t v___x_392__boxed_1502_; uint8_t v_res_1503_; lean_object* v_r_1504_; 
v___x_392__boxed_1502_ = lean_unbox(v___x_1500_);
v_res_1503_ = lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0(v___x_1499_, v___x_392__boxed_1502_, v_x_1501_);
lean_dec(v_x_1501_);
lean_dec(v___x_1499_);
v_r_1504_ = lean_box(v_res_1503_);
return v_r_1504_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraProcess(lean_object* v_m_1505_, lean_object* v_toks_1506_, lean_object* v_scored_1507_, lean_object* v_anchors_1508_){
_start:
{
lean_object* v___x_1509_; uint8_t v___x_1510_; 
v___x_1509_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_m_1505_);
v___x_1510_ = l_List_isEmpty___redArg(v___x_1509_);
if (v___x_1510_ == 0)
{
uint8_t v___x_1511_; 
v___x_1511_ = lp_lean_x2dftml_List_any___at___00LeanFtml_paraProcess_spec__0(v___x_1509_, v___x_1510_, v_anchors_1508_);
if (v___x_1511_ == 0)
{
if (lean_obj_tag(v_m_1505_) == 1)
{
lean_object* v_head_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v_head_1512_ = lean_ctor_get(v_m_1505_, 0);
v___x_1513_ = lean_unsigned_to_nat(255u);
v___x_1514_ = lean_nat_dec_eq(v_head_1512_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; 
lean_dec(v___x_1509_);
v___x_1515_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1505_, v_toks_1506_);
lean_dec_ref_known(v_m_1505_, 2);
return v___x_1515_;
}
else
{
lean_object* v___x_1516_; 
lean_inc_ref(v_m_1505_);
v___x_1516_ = lp_lean_x2dftml_LeanFtml_readPlaceholder(v_m_1505_);
if (lean_obj_tag(v___x_1516_) == 0)
{
lean_object* v___x_1517_; 
lean_dec(v___x_1509_);
v___x_1517_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1505_, v_toks_1506_);
lean_dec_ref_known(v_m_1505_, 2);
return v___x_1517_;
}
else
{
lean_object* v_val_1518_; lean_object* v_fst_1519_; lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1548_; 
v_val_1518_ = lean_ctor_get(v___x_1516_, 0);
lean_inc(v_val_1518_);
lean_dec_ref_known(v___x_1516_, 1);
v_fst_1519_ = lean_ctor_get(v_val_1518_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v_val_1518_);
if (v_isSharedCheck_1548_ == 0)
{
lean_object* v_unused_1549_; 
v_unused_1549_ = lean_ctor_get(v_val_1518_, 1);
lean_dec(v_unused_1549_);
v___x_1521_ = v_val_1518_;
v_isShared_1522_ = v_isSharedCheck_1548_;
goto v_resetjp_1520_;
}
else
{
lean_inc(v_fst_1519_);
lean_dec(v_val_1518_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1548_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1535_; 
v___x_1535_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_paraProcess_spec__1(v_fst_1519_, v_scored_1507_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_dec(v___x_1509_);
goto v___jp_1523_;
}
else
{
lean_object* v_val_1536_; lean_object* v_snd_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1546_; 
v_val_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_val_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v_snd_1537_ = lean_ctor_get(v_val_1536_, 1);
v_isSharedCheck_1546_ = !lean_is_exclusive(v_val_1536_);
if (v_isSharedCheck_1546_ == 0)
{
lean_object* v_unused_1547_; 
v_unused_1547_ = lean_ctor_get(v_val_1536_, 0);
lean_dec(v_unused_1547_);
v___x_1539_ = v_val_1536_;
v_isShared_1540_ = v_isSharedCheck_1546_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_snd_1537_);
lean_dec(v_val_1536_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1546_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1541_; uint8_t v___x_1542_; 
v___x_1541_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_snd_1537_);
lean_dec(v_snd_1537_);
v___x_1542_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1509_, v___x_1541_);
lean_dec(v___x_1541_);
lean_dec(v___x_1509_);
if (v___x_1542_ == 0)
{
lean_del_object(v___x_1539_);
goto v___jp_1523_;
}
else
{
lean_object* v___x_1544_; 
lean_del_object(v___x_1521_);
lean_dec(v_fst_1519_);
if (v_isShared_1540_ == 0)
{
lean_ctor_set(v___x_1539_, 1, v_toks_1506_);
lean_ctor_set(v___x_1539_, 0, v_m_1505_);
v___x_1544_ = v___x_1539_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_m_1505_);
lean_ctor_set(v_reuseFailAlloc_1545_, 1, v_toks_1506_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
v___jp_1523_:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; 
v___x_1524_ = lp_lean_x2dftml_LeanFtml_paraSkipRules;
v___x_1525_ = lp_lean_x2dftml_LeanFtml_tokenRuleAt(v_toks_1506_, v_fst_1519_);
v___x_1526_ = l_String_toListImpl(v___x_1525_);
v___x_1527_ = lean_box(0);
v___x_1528_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_1526_, v___x_1527_);
v___x_1529_ = lp_lean_x2dftml_LeanFtml_asciiLower(v___x_1528_);
v___x_1530_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v___x_1529_, v___x_1524_);
lean_dec(v___x_1529_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; 
lean_del_object(v___x_1521_);
v___x_1531_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1505_, v_toks_1506_);
lean_dec_ref_known(v_m_1505_, 2);
return v___x_1531_;
}
else
{
lean_object* v___x_1533_; 
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 1, v_toks_1506_);
lean_ctor_set(v___x_1521_, 0, v_m_1505_);
v___x_1533_ = v___x_1521_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_m_1505_);
lean_ctor_set(v_reuseFailAlloc_1534_, 1, v_toks_1506_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1550_; 
lean_dec(v___x_1509_);
v___x_1550_ = lp_lean_x2dftml_LeanFtml_paraWrap(v_m_1505_, v_toks_1506_);
lean_dec(v_m_1505_);
return v___x_1550_;
}
}
else
{
lean_object* v___x_1551_; 
lean_dec(v___x_1509_);
v___x_1551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1551_, 0, v_m_1505_);
lean_ctor_set(v___x_1551_, 1, v_toks_1506_);
return v___x_1551_;
}
}
else
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
lean_dec(v___x_1509_);
lean_dec(v_m_1505_);
v___x_1552_ = lean_box(0);
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
lean_ctor_set(v___x_1553_, 1, v_toks_1506_);
return v___x_1553_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraProcess___boxed(lean_object* v_m_1554_, lean_object* v_toks_1555_, lean_object* v_scored_1556_, lean_object* v_anchors_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = lp_lean_x2dftml_LeanFtml_paraProcess(v_m_1554_, v_toks_1555_, v_scored_1556_, v_anchors_1557_);
lean_dec(v_anchors_1557_);
lean_dec(v_scored_1556_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan_go(lean_object* v_anchors_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, uint8_t v_a_1563_, lean_object* v_a_1564_){
_start:
{
if (lean_obj_tag(v_a_1560_) == 0)
{
lean_object* v___x_1565_; 
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v_a_1560_);
lean_ctor_set(v___x_1565_, 1, v_a_1561_);
return v___x_1565_;
}
else
{
lean_object* v_head_1566_; lean_object* v_tail_1567_; lean_object* v_zero_1568_; uint8_t v_isZero_1569_; 
v_head_1566_ = lean_ctor_get(v_a_1560_, 0);
v_tail_1567_ = lean_ctor_get(v_a_1560_, 1);
v_zero_1568_ = lean_unsigned_to_nat(0u);
v_isZero_1569_ = lean_nat_dec_eq(v_a_1564_, v_zero_1568_);
if (v_isZero_1569_ == 1)
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1570_, 0, v_a_1560_);
lean_ctor_set(v___x_1570_, 1, v_a_1561_);
return v___x_1570_;
}
else
{
lean_object* v_one_1571_; lean_object* v_n_1572_; 
lean_inc(v_tail_1567_);
lean_inc(v_head_1566_);
v_one_1571_ = lean_unsigned_to_nat(1u);
v_n_1572_ = lean_nat_sub(v_a_1564_, v_one_1571_);
if (v_a_1563_ == 0)
{
lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1591_; 
v_isSharedCheck_1591_ = !lean_is_exclusive(v_a_1560_);
if (v_isSharedCheck_1591_ == 0)
{
lean_object* v_unused_1592_; lean_object* v_unused_1593_; 
v_unused_1592_ = lean_ctor_get(v_a_1560_, 1);
lean_dec(v_unused_1592_);
v_unused_1593_ = lean_ctor_get(v_a_1560_, 0);
lean_dec(v_unused_1593_);
v___x_1574_ = v_a_1560_;
v_isShared_1575_ = v_isSharedCheck_1591_;
goto v_resetjp_1573_;
}
else
{
lean_dec(v_a_1560_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1591_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1576_; uint8_t v___x_1577_; lean_object* v___x_1578_; lean_object* v_fst_1579_; lean_object* v_snd_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1590_; 
v___x_1576_ = lean_unsigned_to_nat(10u);
v___x_1577_ = lean_nat_dec_eq(v_head_1566_, v___x_1576_);
v___x_1578_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1559_, v_tail_1567_, v_a_1561_, v_a_1562_, v___x_1577_, v_n_1572_);
lean_dec(v_n_1572_);
v_fst_1579_ = lean_ctor_get(v___x_1578_, 0);
v_snd_1580_ = lean_ctor_get(v___x_1578_, 1);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1582_ = v___x_1578_;
v_isShared_1583_ = v_isSharedCheck_1590_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_snd_1580_);
lean_inc(v_fst_1579_);
lean_dec(v___x_1578_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1590_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1575_ == 0)
{
lean_ctor_set(v___x_1574_, 1, v_fst_1579_);
v___x_1585_ = v___x_1574_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_head_1566_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_fst_1579_);
v___x_1585_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
lean_object* v___x_1587_; 
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v___x_1585_);
v___x_1587_ = v___x_1582_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1585_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v_snd_1580_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
else
{
lean_object* v___x_1594_; 
v___x_1594_ = lp_lean_x2dftml_LeanFtml_paraMatchAt(v_a_1560_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v___x_1595_; uint8_t v___x_1596_; lean_object* v___x_1597_; lean_object* v_fst_1598_; lean_object* v_snd_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1607_; 
v___x_1595_ = lean_unsigned_to_nat(10u);
v___x_1596_ = lean_nat_dec_eq(v_head_1566_, v___x_1595_);
v___x_1597_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1559_, v_tail_1567_, v_a_1561_, v_a_1562_, v___x_1596_, v_n_1572_);
lean_dec(v_n_1572_);
v_fst_1598_ = lean_ctor_get(v___x_1597_, 0);
v_snd_1599_ = lean_ctor_get(v___x_1597_, 1);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1601_ = v___x_1597_;
v_isShared_1602_ = v_isSharedCheck_1607_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_snd_1599_);
lean_inc(v_fst_1598_);
lean_dec(v___x_1597_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1607_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1605_; 
v___x_1603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1603_, 0, v_head_1566_);
lean_ctor_set(v___x_1603_, 1, v_fst_1598_);
if (v_isShared_1602_ == 0)
{
lean_ctor_set(v___x_1601_, 0, v___x_1603_);
v___x_1605_ = v___x_1601_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1603_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v_snd_1599_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
else
{
lean_object* v_val_1608_; lean_object* v_fst_1609_; lean_object* v_snd_1610_; lean_object* v___x_1611_; lean_object* v_fst_1612_; lean_object* v_snd_1613_; lean_object* v___x_1614_; lean_object* v_fst_1615_; lean_object* v_snd_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v_tail_1567_);
lean_dec(v_head_1566_);
v_val_1608_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_val_1608_);
lean_dec_ref_known(v___x_1594_, 1);
v_fst_1609_ = lean_ctor_get(v_val_1608_, 0);
lean_inc(v_fst_1609_);
v_snd_1610_ = lean_ctor_get(v_val_1608_, 1);
lean_inc(v_snd_1610_);
lean_dec(v_val_1608_);
v___x_1611_ = lp_lean_x2dftml_LeanFtml_paraProcess(v_fst_1609_, v_a_1561_, v_a_1562_, v_anchors_1559_);
v_fst_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_fst_1612_);
v_snd_1613_ = lean_ctor_get(v___x_1611_, 1);
lean_inc(v_snd_1613_);
lean_dec_ref(v___x_1611_);
v___x_1614_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1559_, v_snd_1610_, v_snd_1613_, v_a_1562_, v_a_1563_, v_n_1572_);
lean_dec(v_n_1572_);
v_fst_1615_ = lean_ctor_get(v___x_1614_, 0);
v_snd_1616_ = lean_ctor_get(v___x_1614_, 1);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1618_ = v___x_1614_;
v_isShared_1619_ = v_isSharedCheck_1624_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_snd_1616_);
lean_inc(v_fst_1615_);
lean_dec(v___x_1614_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1624_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1620_; lean_object* v___x_1622_; 
v___x_1620_ = l_List_appendTR___redArg(v_fst_1612_, v_fst_1615_);
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 0, v___x_1620_);
v___x_1622_ = v___x_1618_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1620_);
lean_ctor_set(v_reuseFailAlloc_1623_, 1, v_snd_1616_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan_go___boxed(lean_object* v_anchors_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_){
_start:
{
uint8_t v_a_226__boxed_1631_; lean_object* v_res_1632_; 
v_a_226__boxed_1631_ = lean_unbox(v_a_1629_);
v_res_1632_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_226__boxed_1631_, v_a_1630_);
lean_dec(v_a_1630_);
lean_dec(v_a_1628_);
lean_dec(v_anchors_1625_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan(lean_object* v_src_1633_, lean_object* v_toks_1634_, lean_object* v_scored_1635_, lean_object* v_anchors_1636_){
_start:
{
uint8_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1637_ = 1;
v___x_1638_ = l_List_lengthTR___redArg(v_src_1633_);
v___x_1639_ = lean_unsigned_to_nat(1u);
v___x_1640_ = lean_nat_add(v___x_1638_, v___x_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lp_lean_x2dftml_LeanFtml_paraScan_go(v_anchors_1636_, v_src_1633_, v_toks_1634_, v_scored_1635_, v___x_1637_, v___x_1640_);
lean_dec(v___x_1640_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paraScan___boxed(lean_object* v_src_1642_, lean_object* v_toks_1643_, lean_object* v_scored_1644_, lean_object* v_anchors_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = lp_lean_x2dftml_LeanFtml_paraScan(v_src_1642_, v_toks_1643_, v_scored_1644_, v_anchors_1645_);
lean_dec(v_anchors_1645_);
lean_dec(v_scored_1644_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_paragraphRule(lean_object* v_st_1647_){
_start:
{
lean_object* v_work_1648_; lean_object* v_tokens_1649_; lean_object* v_doc_1650_; uint8_t v_fatal_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1669_; 
v_work_1648_ = lean_ctor_get(v_st_1647_, 0);
v_tokens_1649_ = lean_ctor_get(v_st_1647_, 1);
v_doc_1650_ = lean_ctor_get(v_st_1647_, 2);
v_fatal_1651_ = lean_ctor_get_uint8(v_st_1647_, sizeof(void*)*3);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_st_1647_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1653_ = v_st_1647_;
v_isShared_1654_ = v_isSharedCheck_1669_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_doc_1650_);
lean_inc(v_tokens_1649_);
lean_inc(v_work_1648_);
lean_dec(v_st_1647_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1669_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v_input_1655_; lean_object* v___x_1656_; lean_object* v_snd_1657_; lean_object* v_fst_1658_; lean_object* v_fst_1659_; lean_object* v_snd_1660_; lean_object* v_scoredAnchors_1661_; lean_object* v___x_1662_; lean_object* v_fst_1663_; lean_object* v_snd_1664_; lean_object* v___x_1665_; lean_object* v___x_1667_; 
v_input_1655_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_1648_);
v___x_1656_ = lp_lean_x2dftml_LeanFtml_scoredScan(v_input_1655_, v_tokens_1649_);
v_snd_1657_ = lean_ctor_get(v___x_1656_, 1);
lean_inc(v_snd_1657_);
v_fst_1658_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_fst_1658_);
lean_dec_ref(v___x_1656_);
v_fst_1659_ = lean_ctor_get(v_snd_1657_, 0);
lean_inc(v_fst_1659_);
v_snd_1660_ = lean_ctor_get(v_snd_1657_, 1);
lean_inc(v_snd_1660_);
lean_dec(v_snd_1657_);
v_scoredAnchors_1661_ = lean_ctor_get(v_doc_1650_, 12);
v___x_1662_ = lp_lean_x2dftml_LeanFtml_paraScan(v_fst_1658_, v_fst_1659_, v_snd_1660_, v_scoredAnchors_1661_);
lean_dec(v_snd_1660_);
v_fst_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_fst_1663_);
v_snd_1664_ = lean_ctor_get(v___x_1662_, 1);
lean_inc(v_snd_1664_);
lean_dec_ref(v___x_1662_);
v___x_1665_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_1663_);
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 1, v_snd_1664_);
lean_ctor_set(v___x_1653_, 0, v___x_1665_);
v___x_1667_ = v___x_1653_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1665_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_snd_1664_);
lean_ctor_set(v_reuseFailAlloc_1668_, 2, v_doc_1650_);
lean_ctor_set_uint8(v_reuseFailAlloc_1668_, sizeof(void*)*3, v_fatal_1651_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
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
