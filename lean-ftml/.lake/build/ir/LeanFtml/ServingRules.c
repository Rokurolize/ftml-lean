// Lean compiler output
// Module: LeanFtml.ServingRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.RenderCore public import LeanFtml.FinalRules public import LeanFtml.InlineSimpleRules public import LeanFtml.CodeEmbedRules
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
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phpTrimBytes(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_parsePcre_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_asciiLowerBytes(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_bytesContainsSub(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_phpTruthyBytes(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_urlencodeBytes(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_phpEmptyOpt(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_startsWithBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_startsWithBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(103) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(110) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(112) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(112) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(106) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(102) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(105) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(103) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__10_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageExtSuffix(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_phpBasename_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_phpBasename_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpBasename_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpBasename_spec__0___boxed(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_phpBasename___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_phpBasename___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_phpBasename___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpBasename(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeByte_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeByte_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeByte(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeByte___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeSeq_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeSeq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ServingRules_0__LeanFtml_explodeByte_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ServingRules_0__LeanFtml_explodeByte_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeSeq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeSeq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIndexOfByte_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIndexOfByte_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIndexOfByte(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIndexOfByte___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripSlashesBytes(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(59) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(112) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(115) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(110) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nbspSpaces(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_containsSubFrom1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containsSubFrom1___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "backlinks"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "categories"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "css"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "join"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "listpages"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pagetree"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rate"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "redirect"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tagcloud"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__17;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__19;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__20;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__24;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__25;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__26;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moduleAvailableNames;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moduleMarkerByte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(190) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleMarkerByte___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleMarkerByte___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moduleMarkerByte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(195) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_moduleMarkerByte___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moduleMarkerByte___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleMarkerByte___closed__1_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_moduleMarkerByte = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moduleMarkerByte___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "moduleName"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "<div class=\"error-block\">[[module <em>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "</em>]] No such module, please "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "<a href=\"https://www.wikidot.com/doc:modules\" "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "target=\"_blank\">check available modules</a> "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "and fix this page.</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "module \""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__16;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderModule___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__17_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "module_body"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderModule___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " module_body=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderModule___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderModule___closed__23;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderModule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderModule___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_mathTypeValid_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_mathTypeValid_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathTypeValid(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathTypeValid___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMath___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "<div class=\"error-block\">Unsupported math "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMath___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMath___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "environment \""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMath___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMath___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\"</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMath___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMath___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "<div class=\"error-block\">The equation has not "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMath___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMath___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "been processed correctly. Most prabably it has "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMath___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMath___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "syntax error(s).</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMath___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMath___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMath___closed__16;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderMath(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderMath___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "userName"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUser___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUser___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUser___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUser___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUser___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "<span class=\"error-inline\"><em>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUser___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUser___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUser___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUser___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUser___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "</em> does not match any existing user name</span>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUser___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUser___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUser___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUser___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUser(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUser___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "muse-probe-g14-target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "other-page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "empty-page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = ":sandbox:other-page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "muse-probe-g14b-target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "muse-probe-r2link-free-exists"};
static const lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "muse-probe-r2link-free-exists2"};
static const lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "muse-probe-r2notes-x-inc-src"};
static const lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__17;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__19;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__20;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__23;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "<a class=\"newpage\" href=\"/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "</a>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "<a href=\"/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "anchor"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<a"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " href=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " target=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "site"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "<a href=\"http://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__30_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__31;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__32_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "textFromTitle"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__34_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__35;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFreelink___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "nonbr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__36_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFreelink___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___closed__37;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageAttrMap(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageAttrMap___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_attrLookup_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_attrLookup_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrLookup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrLookup___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "small"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "medium"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "thumbnail"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "square"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageSizeOk(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "link"};
static const lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_linkLooseNull(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_linkLooseNull___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_imageHref_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_imageHref_spec__0___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageHref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageHref___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageHref___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageHref___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageHref___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageHref___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageHref___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageHref___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_imageHref___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageHref___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageHref___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageHref(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageHref___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "height"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__13;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_renderImage_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_renderImage_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderImage_spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__3(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__3___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "<div class=\"image-container"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "align"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "f<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "f>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " aligncenter"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " alignright"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " alignleft"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " floatright"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " floatleft"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " />"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<a href=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "src"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__30_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__31;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ":first"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__32_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__33;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "flickr:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__34_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__35;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " class=\"image\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__36_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__37;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "<img src=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__38_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__39;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " alt=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__40_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__41;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "/local--files//"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__42_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__43;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "/local--resized-images//"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__44_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__45;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ".jpg"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__46_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__47;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "/local--files/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__48_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__49;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "/local--resized-images/"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__50_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__51;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderImage___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__52;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderImage___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderImage___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderImage___closed__53_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderImage(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderImage___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_gallerySize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "original"};
static const lean_object* lp_lean_x2dftml_LeanFtml_gallerySize___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_gallerySize___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_gallerySize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_gallerySize___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gallerySize(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gallerySize___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_galleryGetAttrs_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_galleryGetAttrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryGetAttrs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryGetAttrs___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_galleryGetAttrs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_galleryGetAttrs___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryGetAttrs___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryGetAttrs___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryGetAttrs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryGetAttrs___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_galleryAttrGet_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_galleryAttrGet_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryAttrGet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryAttrGet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gallerySplitRow_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gallerySplitRow(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(58) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_renderModule___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRowSrc(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRowSrc___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "<div class=\"gallery-item "};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "\"><table><tr><td><a href=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\" "};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "><img src=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\" alt=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "\"/></a></td></tr></table></div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "target=\"_blank\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderGallery_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderGallery_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderGallery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sources"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderGallery___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderGallery___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderGallery___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "<div class=\"error-block\">Error selecting page.</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderGallery___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderGallery___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderGallery___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderGallery___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "<div class=\"gallery-box\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderGallery___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderGallery___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderGallery___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderGallery___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___closed__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderGallery(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_startsWithBytes(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v_head_7_; lean_object* v_tail_8_; uint8_t v___x_9_; 
v_head_5_ = lean_ctor_get(v_x_1_, 0);
v_tail_6_ = lean_ctor_get(v_x_1_, 1);
v_head_7_ = lean_ctor_get(v_x_2_, 0);
v_tail_8_ = lean_ctor_get(v_x_2_, 1);
v___x_9_ = lean_nat_dec_eq(v_head_5_, v_head_7_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
v_x_1_ = v_tail_6_;
v_x_2_ = v_tail_8_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_startsWithBytes___boxed(lean_object* v_x_11_, lean_object* v_x_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v_x_11_, v_x_12_);
lean_dec(v_x_12_);
lean_dec(v_x_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash(lean_object* v_bs_15_){
_start:
{
if (lean_obj_tag(v_bs_15_) == 1)
{
lean_object* v_head_16_; lean_object* v_tail_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v_head_16_ = lean_ctor_get(v_bs_15_, 0);
v_tail_17_ = lean_ctor_get(v_bs_15_, 1);
v___x_18_ = lean_unsigned_to_nat(47u);
v___x_19_ = lean_nat_dec_eq(v_head_16_, v___x_18_);
if (v___x_19_ == 0)
{
lean_inc_ref(v_bs_15_);
return v_bs_15_;
}
else
{
lean_inc(v_tail_17_);
return v_tail_17_;
}
}
else
{
lean_inc(v_bs_15_);
return v_bs_15_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash___boxed(lean_object* v_bs_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash(v_bs_20_);
lean_dec(v_bs_20_);
return v_res_21_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageExtSuffix(lean_object* v_bs_55_){
_start:
{
lean_object* v_lowered_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v_lowered_56_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v_bs_55_);
v___x_57_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__3));
v___x_58_ = l_List_lengthTR___redArg(v_lowered_56_);
v___x_59_ = lean_unsigned_to_nat(4u);
v___x_60_ = lean_nat_sub(v___x_58_, v___x_59_);
lean_dec(v___x_58_);
v___x_61_ = l_List_drop___redArg(v___x_60_, v_lowered_56_);
lean_dec(v_lowered_56_);
v___x_62_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_57_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__6));
v___x_64_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_63_, v___x_61_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageExtSuffix___closed__10));
v___x_66_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_65_, v___x_61_);
lean_dec(v___x_61_);
return v___x_66_;
}
else
{
lean_dec(v___x_61_);
return v___x_64_;
}
}
else
{
lean_dec(v___x_61_);
return v___x_62_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageExtSuffix___boxed(lean_object* v_bs_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = lp_lean_x2dftml_LeanFtml_imageExtSuffix(v_bs_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_phpBasename_spec__1(lean_object* v_l_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
if (lean_obj_tag(v_a_71_) == 0)
{
lean_dec_ref(v_a_72_);
lean_inc(v_l_70_);
return v_l_70_;
}
else
{
lean_object* v_head_73_; lean_object* v_tail_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v_head_73_ = lean_ctor_get(v_a_71_, 0);
lean_inc(v_head_73_);
v_tail_74_ = lean_ctor_get(v_a_71_, 1);
lean_inc(v_tail_74_);
lean_dec_ref_known(v_a_71_, 2);
v___x_75_ = lean_unsigned_to_nat(47u);
v___x_76_ = lean_nat_dec_eq(v_head_73_, v___x_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
v___x_77_ = lean_array_push(v_a_72_, v_head_73_);
v_a_71_ = v_tail_74_;
v_a_72_ = v___x_77_;
goto _start;
}
else
{
lean_object* v___x_79_; 
lean_dec(v_tail_74_);
lean_dec(v_head_73_);
v___x_79_ = lean_array_to_list(v_a_72_);
return v___x_79_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_phpBasename_spec__1___boxed(lean_object* v_l_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_phpBasename_spec__1(v_l_80_, v_a_81_, v_a_82_);
lean_dec(v_l_80_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpBasename_spec__0(lean_object* v_x_84_){
_start:
{
if (lean_obj_tag(v_x_84_) == 0)
{
return v_x_84_;
}
else
{
lean_object* v_head_85_; lean_object* v_tail_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v_head_85_ = lean_ctor_get(v_x_84_, 0);
v_tail_86_ = lean_ctor_get(v_x_84_, 1);
v___x_87_ = lean_unsigned_to_nat(47u);
v___x_88_ = lean_nat_dec_eq(v_head_85_, v___x_87_);
if (v___x_88_ == 0)
{
lean_inc_ref(v_x_84_);
return v_x_84_;
}
else
{
v_x_84_ = v_tail_86_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpBasename_spec__0___boxed(lean_object* v_x_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpBasename_spec__0(v_x_90_);
lean_dec(v_x_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpBasename(lean_object* v_bs_94_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v_trimmed_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_95_ = l_List_reverse___redArg(v_bs_94_);
v___x_96_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpBasename_spec__0(v___x_95_);
lean_dec(v___x_95_);
v_trimmed_97_ = l_List_reverse___redArg(v___x_96_);
v___x_98_ = l_List_reverse___redArg(v_trimmed_97_);
v___x_99_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phpBasename___closed__0));
lean_inc(v___x_98_);
v___x_100_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_phpBasename_spec__1(v___x_98_, v___x_98_, v___x_99_);
lean_dec(v___x_98_);
v___x_101_ = l_List_reverse___redArg(v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeByte_go(lean_object* v_sep_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
if (lean_obj_tag(v_a_103_) == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_106_ = l_List_reverse___redArg(v_a_104_);
v___x_107_ = lean_box(0);
v___x_108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = l_List_appendTR___redArg(v_a_105_, v___x_108_);
return v___x_109_;
}
else
{
lean_object* v_head_110_; lean_object* v_tail_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_127_; 
v_head_110_ = lean_ctor_get(v_a_103_, 0);
v_tail_111_ = lean_ctor_get(v_a_103_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_a_103_);
if (v_isSharedCheck_127_ == 0)
{
v___x_113_ = v_a_103_;
v_isShared_114_ = v_isSharedCheck_127_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_tail_111_);
lean_inc(v_head_110_);
lean_dec(v_a_103_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_127_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
uint8_t v___x_115_; 
v___x_115_ = lean_nat_dec_eq(v_head_110_, v_sep_102_);
if (v___x_115_ == 0)
{
lean_object* v___x_117_; 
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v_a_104_);
v___x_117_ = v___x_113_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_head_110_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_a_104_);
v___x_117_ = v_reuseFailAlloc_119_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
v_a_103_ = v_tail_111_;
v_a_104_ = v___x_117_;
goto _start;
}
}
else
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_123_; 
lean_dec(v_head_110_);
v___x_120_ = lean_box(0);
v___x_121_ = l_List_reverse___redArg(v_a_104_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___x_120_);
lean_ctor_set(v___x_113_, 0, v___x_121_);
v___x_123_ = v___x_113_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_121_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_120_);
v___x_123_ = v_reuseFailAlloc_126_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_124_; 
v___x_124_ = l_List_appendTR___redArg(v_a_105_, v___x_123_);
v_a_103_ = v_tail_111_;
v_a_104_ = v___x_120_;
v_a_105_ = v___x_124_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeByte_go___boxed(lean_object* v_sep_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = lp_lean_x2dftml_LeanFtml_explodeByte_go(v_sep_128_, v_a_129_, v_a_130_, v_a_131_);
lean_dec(v_sep_128_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeByte(lean_object* v_sep_133_, lean_object* v_bs_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_box(0);
v___x_136_ = lp_lean_x2dftml_LeanFtml_explodeByte_go(v_sep_133_, v_bs_134_, v___x_135_, v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeByte___boxed(lean_object* v_sep_137_, lean_object* v_bs_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lp_lean_x2dftml_LeanFtml_explodeByte(v_sep_137_, v_bs_138_);
lean_dec(v_sep_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeSeq_go(lean_object* v_pat_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
if (lean_obj_tag(v_a_141_) == 0)
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_144_ = l_List_reverse___redArg(v_a_142_);
v___x_145_ = lean_box(0);
v___x_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_144_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = l_List_appendTR___redArg(v_a_143_, v___x_146_);
return v___x_147_;
}
else
{
lean_object* v_head_148_; lean_object* v_tail_149_; uint8_t v___x_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_169_; 
v_head_148_ = lean_ctor_get(v_a_141_, 0);
lean_inc(v_head_148_);
v_tail_149_ = lean_ctor_get(v_a_141_, 1);
lean_inc(v_tail_149_);
v___x_150_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v_pat_140_, v_a_141_);
v_isSharedCheck_169_ = !lean_is_exclusive(v_a_141_);
if (v_isSharedCheck_169_ == 0)
{
lean_object* v_unused_170_; lean_object* v_unused_171_; 
v_unused_170_ = lean_ctor_get(v_a_141_, 1);
lean_dec(v_unused_170_);
v_unused_171_ = lean_ctor_get(v_a_141_, 0);
lean_dec(v_unused_171_);
v___x_152_ = v_a_141_;
v_isShared_153_ = v_isSharedCheck_169_;
goto v_resetjp_151_;
}
else
{
lean_dec(v_a_141_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_169_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
if (v___x_150_ == 0)
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 1, v_a_142_);
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_head_148_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_a_142_);
v___x_155_ = v_reuseFailAlloc_157_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
v_a_141_ = v_tail_149_;
v_a_142_ = v___x_155_;
goto _start;
}
}
else
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_165_; 
lean_dec(v_head_148_);
v___x_158_ = l_List_lengthTR___redArg(v_pat_140_);
v___x_159_ = lean_unsigned_to_nat(1u);
v___x_160_ = lean_nat_sub(v___x_158_, v___x_159_);
lean_dec(v___x_158_);
v___x_161_ = l_List_drop___redArg(v___x_160_, v_tail_149_);
lean_dec(v_tail_149_);
v___x_162_ = lean_box(0);
v___x_163_ = l_List_reverse___redArg(v_a_142_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 1, v___x_162_);
lean_ctor_set(v___x_152_, 0, v___x_163_);
v___x_165_ = v___x_152_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_163_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_162_);
v___x_165_ = v_reuseFailAlloc_168_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
lean_object* v___x_166_; 
v___x_166_ = l_List_appendTR___redArg(v_a_143_, v___x_165_);
v_a_141_ = v___x_161_;
v_a_142_ = v___x_162_;
v_a_143_ = v___x_166_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeSeq_go___boxed(lean_object* v_pat_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = lp_lean_x2dftml_LeanFtml_explodeSeq_go(v_pat_172_, v_a_173_, v_a_174_, v_a_175_);
lean_dec(v_pat_172_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ServingRules_0__LeanFtml_explodeByte_go_match__1_splitter___redArg(lean_object* v_x_177_, lean_object* v_x_178_, lean_object* v_x_179_, lean_object* v_h__1_180_, lean_object* v_h__2_181_){
_start:
{
if (lean_obj_tag(v_x_177_) == 0)
{
lean_object* v___x_182_; 
lean_dec(v_h__2_181_);
v___x_182_ = lean_apply_2(v_h__1_180_, v_x_178_, v_x_179_);
return v___x_182_;
}
else
{
lean_object* v_head_183_; lean_object* v_tail_184_; lean_object* v___x_185_; 
lean_dec(v_h__1_180_);
v_head_183_ = lean_ctor_get(v_x_177_, 0);
lean_inc(v_head_183_);
v_tail_184_ = lean_ctor_get(v_x_177_, 1);
lean_inc(v_tail_184_);
lean_dec_ref_known(v_x_177_, 2);
v___x_185_ = lean_apply_4(v_h__2_181_, v_head_183_, v_tail_184_, v_x_178_, v_x_179_);
return v___x_185_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_ServingRules_0__LeanFtml_explodeByte_go_match__1_splitter(lean_object* v_motive_186_, lean_object* v_x_187_, lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v_h__1_190_, lean_object* v_h__2_191_){
_start:
{
if (lean_obj_tag(v_x_187_) == 0)
{
lean_object* v___x_192_; 
lean_dec(v_h__2_191_);
v___x_192_ = lean_apply_2(v_h__1_190_, v_x_188_, v_x_189_);
return v___x_192_;
}
else
{
lean_object* v_head_193_; lean_object* v_tail_194_; lean_object* v___x_195_; 
lean_dec(v_h__1_190_);
v_head_193_ = lean_ctor_get(v_x_187_, 0);
lean_inc(v_head_193_);
v_tail_194_ = lean_ctor_get(v_x_187_, 1);
lean_inc(v_tail_194_);
lean_dec_ref_known(v_x_187_, 2);
v___x_195_ = lean_apply_4(v_h__2_191_, v_head_193_, v_tail_194_, v_x_188_, v_x_189_);
return v___x_195_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeSeq(lean_object* v_pat_196_, lean_object* v_bs_197_){
_start:
{
if (lean_obj_tag(v_pat_196_) == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_box(0);
v___x_199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_199_, 0, v_bs_197_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
return v___x_199_;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_box(0);
v___x_201_ = lp_lean_x2dftml_LeanFtml_explodeSeq_go(v_pat_196_, v_bs_197_, v___x_200_, v___x_200_);
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeSeq___boxed(lean_object* v_pat_202_, lean_object* v_bs_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = lp_lean_x2dftml_LeanFtml_explodeSeq(v_pat_202_, v_bs_203_);
lean_dec(v_pat_202_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIndexOfByte_go(lean_object* v_b_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
if (lean_obj_tag(v_a_206_) == 0)
{
lean_dec(v_a_207_);
return v_a_208_;
}
else
{
lean_object* v_head_209_; lean_object* v_tail_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v_head_209_ = lean_ctor_get(v_a_206_, 0);
v_tail_210_ = lean_ctor_get(v_a_206_, 1);
v___x_211_ = lean_unsigned_to_nat(1u);
v___x_212_ = lean_nat_add(v_a_207_, v___x_211_);
v___x_213_ = lean_nat_dec_eq(v_head_209_, v_b_205_);
if (v___x_213_ == 0)
{
lean_dec(v_a_207_);
v_a_206_ = v_tail_210_;
v_a_207_ = v___x_212_;
goto _start;
}
else
{
lean_object* v___x_215_; 
lean_dec(v_a_208_);
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v_a_207_);
v_a_206_ = v_tail_210_;
v_a_207_ = v___x_212_;
v_a_208_ = v___x_215_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIndexOfByte_go___boxed(lean_object* v_b_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = lp_lean_x2dftml_LeanFtml_lastIndexOfByte_go(v_b_217_, v_a_218_, v_a_219_, v_a_220_);
lean_dec(v_a_218_);
lean_dec(v_b_217_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIndexOfByte(lean_object* v_b_222_, lean_object* v_bs_223_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_224_ = lean_unsigned_to_nat(0u);
v___x_225_ = lean_box(0);
v___x_226_ = lp_lean_x2dftml_LeanFtml_lastIndexOfByte_go(v_b_222_, v_bs_223_, v___x_224_, v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastIndexOfByte___boxed(lean_object* v_b_227_, lean_object* v_bs_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = lp_lean_x2dftml_LeanFtml_lastIndexOfByte(v_b_227_, v_bs_228_);
lean_dec(v_bs_228_);
lean_dec(v_b_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripSlashesBytes(lean_object* v_x_230_){
_start:
{
if (lean_obj_tag(v_x_230_) == 0)
{
return v_x_230_;
}
else
{
lean_object* v_head_231_; lean_object* v_tail_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_257_; 
v_head_231_ = lean_ctor_get(v_x_230_, 0);
v_tail_232_ = lean_ctor_get(v_x_230_, 1);
v_isSharedCheck_257_ = !lean_is_exclusive(v_x_230_);
if (v_isSharedCheck_257_ == 0)
{
v___x_234_ = v_x_230_;
v_isShared_235_ = v_isSharedCheck_257_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_tail_232_);
lean_inc(v_head_231_);
lean_dec(v_x_230_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_257_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_236_ = lean_unsigned_to_nat(92u);
v___x_237_ = lean_nat_dec_eq(v_head_231_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_240_; 
v___x_238_ = lp_lean_x2dftml_LeanFtml_stripSlashesBytes(v_tail_232_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v___x_238_);
v___x_240_ = v___x_234_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_head_231_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v___x_238_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
else
{
lean_del_object(v___x_234_);
lean_dec(v_head_231_);
if (lean_obj_tag(v_tail_232_) == 0)
{
return v_tail_232_;
}
else
{
lean_object* v_head_242_; lean_object* v_tail_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_256_; 
v_head_242_ = lean_ctor_get(v_tail_232_, 0);
v_tail_243_ = lean_ctor_get(v_tail_232_, 1);
v_isSharedCheck_256_ = !lean_is_exclusive(v_tail_232_);
if (v_isSharedCheck_256_ == 0)
{
v___x_245_ = v_tail_232_;
v_isShared_246_ = v_isSharedCheck_256_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_tail_243_);
lean_inc(v_head_242_);
lean_dec(v_tail_232_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_256_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___y_248_; lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = lean_unsigned_to_nat(48u);
v___x_254_ = lean_nat_dec_eq(v_head_242_, v___x_253_);
if (v___x_254_ == 0)
{
v___y_248_ = v_head_242_;
goto v___jp_247_;
}
else
{
lean_object* v___x_255_; 
lean_dec(v_head_242_);
v___x_255_ = lean_unsigned_to_nat(0u);
v___y_248_ = v___x_255_;
goto v___jp_247_;
}
v___jp_247_:
{
lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_249_ = lp_lean_x2dftml_LeanFtml_stripSlashesBytes(v_tail_243_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 1, v___x_249_);
lean_ctor_set(v___x_245_, 0, v___y_248_);
v___x_251_ = v___x_245_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___y_248_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v___x_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nbspSpaces(lean_object* v_x_276_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
return v_x_276_;
}
else
{
lean_object* v_head_277_; lean_object* v_tail_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_291_; 
v_head_277_ = lean_ctor_get(v_x_276_, 0);
v_tail_278_ = lean_ctor_get(v_x_276_, 1);
v_isSharedCheck_291_ = !lean_is_exclusive(v_x_276_);
if (v_isSharedCheck_291_ == 0)
{
v___x_280_ = v_x_276_;
v_isShared_281_ = v_isSharedCheck_291_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_tail_278_);
lean_inc(v_head_277_);
lean_dec(v_x_276_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_291_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_282_ = lean_unsigned_to_nat(32u);
v___x_283_ = lean_nat_dec_eq(v_head_277_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_284_ = lp_lean_x2dftml_LeanFtml_nbspSpaces(v_tail_278_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 1, v___x_284_);
v___x_286_ = v___x_280_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_head_277_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
lean_del_object(v___x_280_);
lean_dec(v_head_277_);
v___x_288_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_nbspSpaces___closed__5));
v___x_289_ = lp_lean_x2dftml_LeanFtml_nbspSpaces(v_tail_278_);
v___x_290_ = l_List_appendTR___redArg(v___x_288_, v___x_289_);
return v___x_290_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_containsSubFrom1(lean_object* v_pat_292_, lean_object* v_subj_293_){
_start:
{
if (lean_obj_tag(v_subj_293_) == 0)
{
uint8_t v___x_294_; 
v___x_294_ = 0;
return v___x_294_;
}
else
{
lean_object* v_tail_295_; uint8_t v___x_296_; 
v_tail_295_ = lean_ctor_get(v_subj_293_, 1);
v___x_296_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v_pat_292_, v_tail_295_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_containsSubFrom1___boxed(lean_object* v_pat_297_, lean_object* v_subj_298_){
_start:
{
uint8_t v_res_299_; lean_object* v_r_300_; 
v_res_299_ = lp_lean_x2dftml_LeanFtml_containsSubFrom1(v_pat_297_, v_subj_298_);
lean_dec(v_subj_298_);
lean_dec(v_pat_297_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__1(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__0));
v___x_303_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_302_);
return v___x_303_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__3(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__2));
v___x_306_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_305_);
return v___x_306_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__5(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__4));
v___x_309_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_308_);
return v___x_309_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__7(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__6));
v___x_312_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_311_);
return v___x_312_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__9(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__8));
v___x_315_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_314_);
return v___x_315_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__11(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__10));
v___x_318_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__13(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__12));
v___x_321_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_320_);
return v___x_321_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__15(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__14));
v___x_324_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_323_);
return v___x_324_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__17(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__16));
v___x_327_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__18(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_328_ = lean_box(0);
v___x_329_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__17, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__17);
v___x_330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set(v___x_330_, 1, v___x_328_);
return v___x_330_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__19(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__18, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__18);
v___x_332_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__15, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__15);
v___x_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v___x_331_);
return v___x_333_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__20(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__19, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__19);
v___x_335_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__13, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__13);
v___x_336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
return v___x_336_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__21(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__20, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__20);
v___x_338_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__11, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__11);
v___x_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__22(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__21, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__21);
v___x_341_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__9, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__9);
v___x_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v___x_340_);
return v___x_342_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__23(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_343_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__22, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__22);
v___x_344_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__7, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__7);
v___x_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
lean_ctor_set(v___x_345_, 1, v___x_343_);
return v___x_345_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__24(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__23, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__23);
v___x_347_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__5, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__5);
v___x_348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v___x_346_);
return v___x_348_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__25(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__24, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__24);
v___x_350_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__3, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__3);
v___x_351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v___x_349_);
return v___x_351_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__26(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__25, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__25);
v___x_353_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__1, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__1);
v___x_354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___x_352_);
return v___x_354_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames(void){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__26, &lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames___closed__26);
return v___x_355_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__1(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__0));
v___x_365_ = l_String_toListImpl(v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__3(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__2));
v___x_368_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_367_);
return v___x_368_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__5(void){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__4));
v___x_371_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_370_);
return v___x_371_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__7(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__6));
v___x_374_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_373_);
return v___x_374_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__9(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__8));
v___x_377_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__11(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__10));
v___x_380_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__13(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__12));
v___x_383_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_382_);
return v___x_383_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__14(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_384_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__13, &lp_lean_x2dftml_LeanFtml_renderModule___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__13);
v___x_385_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleMarkerByte));
v___x_386_ = l_List_appendTR___redArg(v___x_385_, v___x_384_);
return v___x_386_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__16(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__15));
v___x_389_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_388_);
return v___x_389_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__19(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__18));
v___x_395_ = l_String_toListImpl(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__21(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__20));
v___x_398_ = l_String_toListImpl(v___x_397_);
return v___x_398_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__23(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__22));
v___x_401_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderModule(lean_object* v_opts_402_){
_start:
{
lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___x_409_; lean_object* v_name_410_; lean_object* v___y_412_; lean_object* v___x_437_; lean_object* v_attr0_438_; lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_409_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__1, &lp_lean_x2dftml_LeanFtml_renderModule___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__1);
v_name_410_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_402_, v___x_409_);
v___x_437_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__19, &lp_lean_x2dftml_LeanFtml_renderModule___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__19);
v_attr0_438_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_402_, v___x_437_);
v___x_439_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__21, &lp_lean_x2dftml_LeanFtml_renderModule___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__21);
v___x_440_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_402_, v___x_439_);
v___x_441_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_440_);
lean_dec(v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v_body_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_body_442_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_402_, v___x_439_);
v___x_443_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__23, &lp_lean_x2dftml_LeanFtml_renderModule___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__23);
v___x_444_ = l_List_appendTR___redArg(v_attr0_438_, v___x_443_);
v___x_445_ = lp_lean_x2dftml_LeanFtml_urlencodeBytes(v_body_442_);
v___x_446_ = l_List_appendTR___redArg(v___x_444_, v___x_445_);
v___x_447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__16, &lp_lean_x2dftml_LeanFtml_renderModule___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__16);
v___x_448_ = l_List_appendTR___redArg(v___x_446_, v___x_447_);
v___y_412_ = v___x_448_;
goto v___jp_411_;
}
else
{
v___y_412_ = v_attr0_438_;
goto v___jp_411_;
}
v___jp_403_:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = l_List_appendTR___redArg(v___y_405_, v___y_406_);
lean_inc(v___y_404_);
v___x_408_ = l_List_appendTR___redArg(v___x_407_, v___y_404_);
return v___x_408_;
}
v___jp_411_:
{
lean_object* v___x_413_; lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_413_ = lp_lean_x2dftml_LeanFtml_moduleAvailableNames;
lean_inc(v_name_410_);
v___x_414_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v_name_410_);
v___x_415_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(v___x_414_, v___x_413_);
lean_dec(v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
lean_dec(v___y_412_);
v___x_416_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__3, &lp_lean_x2dftml_LeanFtml_renderModule___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__3);
v___x_417_ = l_List_appendTR___redArg(v___x_416_, v_name_410_);
v___x_418_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__5, &lp_lean_x2dftml_LeanFtml_renderModule___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__5);
v___x_419_ = l_List_appendTR___redArg(v___x_417_, v___x_418_);
v___x_420_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__7, &lp_lean_x2dftml_LeanFtml_renderModule___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__7);
v___x_421_ = l_List_appendTR___redArg(v___x_419_, v___x_420_);
v___x_422_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__9, &lp_lean_x2dftml_LeanFtml_renderModule___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__9);
v___x_423_ = l_List_appendTR___redArg(v___x_421_, v___x_422_);
v___x_424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__11, &lp_lean_x2dftml_LeanFtml_renderModule___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__11);
v___x_425_ = l_List_appendTR___redArg(v___x_423_, v___x_424_);
return v___x_425_;
}
else
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_426_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moduleMarkerByte));
v___x_427_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__14, &lp_lean_x2dftml_LeanFtml_renderModule___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__14);
v___x_428_ = l_List_appendTR___redArg(v___x_427_, v_name_410_);
v___x_429_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__16, &lp_lean_x2dftml_LeanFtml_renderModule___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__16);
v___x_430_ = l_List_appendTR___redArg(v___x_428_, v___x_429_);
v___x_431_ = l_List_isEmpty___redArg(v___y_412_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_432_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__17));
v___x_433_ = lp_lean_x2dftml_LeanFtml_urlencodeBytes(v___y_412_);
v___x_434_ = l_List_appendTR___redArg(v___x_432_, v___x_433_);
v___x_435_ = l_List_appendTR___redArg(v___x_434_, v___x_432_);
v___y_404_ = v___x_426_;
v___y_405_ = v___x_430_;
v___y_406_ = v___x_435_;
goto v___jp_403_;
}
else
{
lean_object* v___x_436_; 
lean_dec(v___y_412_);
v___x_436_ = lean_box(0);
v___y_404_ = v___x_426_;
v___y_405_ = v___x_430_;
v___y_406_ = v___x_436_;
goto v___jp_403_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderModule___boxed(lean_object* v_opts_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = lp_lean_x2dftml_LeanFtml_renderModule(v_opts_449_);
lean_dec(v_opts_449_);
return v_res_450_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_mathTypeValid_spec__0(lean_object* v_x_451_){
_start:
{
if (lean_obj_tag(v_x_451_) == 0)
{
uint8_t v___x_452_; 
v___x_452_ = 1;
return v___x_452_;
}
else
{
lean_object* v_head_453_; lean_object* v_tail_454_; lean_object* v___x_461_; uint8_t v___x_462_; 
v_head_453_ = lean_ctor_get(v_x_451_, 0);
v_tail_454_ = lean_ctor_get(v_x_451_, 1);
v___x_461_ = lean_unsigned_to_nat(97u);
v___x_462_ = lean_nat_dec_le(v___x_461_, v_head_453_);
if (v___x_462_ == 0)
{
goto v___jp_455_;
}
else
{
lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_463_ = lean_unsigned_to_nat(122u);
v___x_464_ = lean_nat_dec_le(v_head_453_, v___x_463_);
if (v___x_464_ == 0)
{
goto v___jp_455_;
}
else
{
v_x_451_ = v_tail_454_;
goto _start;
}
}
v___jp_455_:
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = lean_unsigned_to_nat(48u);
v___x_457_ = lean_nat_dec_le(v___x_456_, v_head_453_);
if (v___x_457_ == 0)
{
return v___x_457_;
}
else
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = lean_unsigned_to_nat(57u);
v___x_459_ = lean_nat_dec_le(v_head_453_, v___x_458_);
if (v___x_459_ == 0)
{
return v___x_459_;
}
else
{
v_x_451_ = v_tail_454_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_mathTypeValid_spec__0___boxed(lean_object* v_x_466_){
_start:
{
uint8_t v_res_467_; lean_object* v_r_468_; 
v_res_467_ = lp_lean_x2dftml_List_all___at___00LeanFtml_mathTypeValid_spec__0(v_x_466_);
lean_dec(v_x_466_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathTypeValid(lean_object* v_x_469_){
_start:
{
if (lean_obj_tag(v_x_469_) == 0)
{
uint8_t v___x_470_; 
v___x_470_ = 0;
return v___x_470_;
}
else
{
lean_object* v_head_471_; lean_object* v_tail_472_; lean_object* v___x_473_; uint8_t v___x_474_; 
v_head_471_ = lean_ctor_get(v_x_469_, 0);
v_tail_472_ = lean_ctor_get(v_x_469_, 1);
v___x_473_ = lean_unsigned_to_nat(97u);
v___x_474_ = lean_nat_dec_le(v___x_473_, v_head_471_);
if (v___x_474_ == 0)
{
return v___x_474_;
}
else
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = lean_unsigned_to_nat(122u);
v___x_476_ = lean_nat_dec_le(v_head_471_, v___x_475_);
if (v___x_476_ == 0)
{
return v___x_476_;
}
else
{
uint8_t v___x_477_; 
v___x_477_ = lp_lean_x2dftml_List_all___at___00LeanFtml_mathTypeValid_spec__0(v_tail_472_);
return v___x_477_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathTypeValid___boxed(lean_object* v_x_478_){
_start:
{
uint8_t v_res_479_; lean_object* v_r_480_; 
v_res_479_ = lp_lean_x2dftml_LeanFtml_mathTypeValid(v_x_478_);
lean_dec(v_x_478_);
v_r_480_ = lean_box(v_res_479_);
return v_r_480_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__1(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMath___closed__0));
v___x_483_ = l_String_toListImpl(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__3(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMath___closed__2));
v___x_486_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__5(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMath___closed__4));
v___x_489_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_488_);
return v___x_489_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__6(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__5, &lp_lean_x2dftml_LeanFtml_renderMath___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__5);
v___x_491_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__3, &lp_lean_x2dftml_LeanFtml_renderMath___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__3);
v___x_492_ = l_List_appendTR___redArg(v___x_491_, v___x_490_);
return v___x_492_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__8(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMath___closed__7));
v___x_495_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_494_);
return v___x_495_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__10(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMath___closed__9));
v___x_498_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_497_);
return v___x_498_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__12(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMath___closed__11));
v___x_501_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_500_);
return v___x_501_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__13(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__12, &lp_lean_x2dftml_LeanFtml_renderMath___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__12);
v___x_503_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__10, &lp_lean_x2dftml_LeanFtml_renderMath___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__10);
v___x_504_ = l_List_appendTR___redArg(v___x_503_, v___x_502_);
return v___x_504_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__15(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMath___closed__14));
v___x_507_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_506_);
return v___x_507_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__16(void){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_508_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__15, &lp_lean_x2dftml_LeanFtml_renderMath___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__15);
v___x_509_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__13, &lp_lean_x2dftml_LeanFtml_renderMath___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__13);
v___x_510_ = l_List_appendTR___redArg(v___x_509_, v___x_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderMath(lean_object* v_opts_511_){
_start:
{
lean_object* v___x_512_; lean_object* v_ty_513_; uint8_t v___x_514_; 
v___x_512_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__1, &lp_lean_x2dftml_LeanFtml_renderMath___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__1);
v_ty_513_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_511_, v___x_512_);
v___x_514_ = lp_lean_x2dftml_LeanFtml_mathTypeValid(v_ty_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_515_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__6, &lp_lean_x2dftml_LeanFtml_renderMath___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__6);
v___x_516_ = l_List_appendTR___redArg(v___x_515_, v_ty_513_);
v___x_517_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__8, &lp_lean_x2dftml_LeanFtml_renderMath___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__8);
v___x_518_ = l_List_appendTR___redArg(v___x_516_, v___x_517_);
return v___x_518_;
}
else
{
lean_object* v___x_519_; 
lean_dec(v_ty_513_);
v___x_519_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMath___closed__16, &lp_lean_x2dftml_LeanFtml_renderMath___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderMath___closed__16);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderMath___boxed(lean_object* v_opts_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = lp_lean_x2dftml_LeanFtml_renderMath(v_opts_520_);
lean_dec(v_opts_520_);
return v_res_521_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUser___closed__1(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUser___closed__0));
v___x_524_ = l_String_toListImpl(v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUser___closed__3(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUser___closed__2));
v___x_527_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_526_);
return v___x_527_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUser___closed__5(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUser___closed__4));
v___x_530_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUser(lean_object* v_opts_531_){
_start:
{
lean_object* v___x_532_; lean_object* v_name_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_532_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUser___closed__1, &lp_lean_x2dftml_LeanFtml_renderUser___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderUser___closed__1);
v_name_533_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_531_, v___x_532_);
v___x_534_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUser___closed__3, &lp_lean_x2dftml_LeanFtml_renderUser___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderUser___closed__3);
v___x_535_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_name_533_);
v___x_536_ = l_List_appendTR___redArg(v___x_534_, v___x_535_);
v___x_537_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUser___closed__5, &lp_lean_x2dftml_LeanFtml_renderUser___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderUser___closed__5);
v___x_538_ = l_List_appendTR___redArg(v___x_536_, v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUser___boxed(lean_object* v_opts_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = lp_lean_x2dftml_LeanFtml_renderUser(v_opts_539_);
lean_dec(v_opts_539_);
return v_res_540_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__1(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__0));
v___x_543_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_542_);
return v___x_543_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__3(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__2));
v___x_546_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__5(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__4));
v___x_549_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_548_);
return v___x_549_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__7(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__6));
v___x_552_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_551_);
return v___x_552_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__9(void){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__8));
v___x_555_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_554_);
return v___x_555_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__11(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__10));
v___x_558_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_557_);
return v___x_558_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__13(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__12));
v___x_561_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_560_);
return v___x_561_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__15(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__14));
v___x_564_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_563_);
return v___x_564_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__16(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_565_ = lean_box(0);
v___x_566_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__15, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__15);
v___x_567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v___x_565_);
return v___x_567_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__17(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__16, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__16);
v___x_569_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__13, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__13);
v___x_570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
lean_ctor_set(v___x_570_, 1, v___x_568_);
return v___x_570_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__18(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__17, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__17);
v___x_572_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__11, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__11);
v___x_573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_571_);
return v___x_573_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__19(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_574_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__18, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__18);
v___x_575_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__9, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__9);
v___x_576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v___x_574_);
return v___x_576_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__20(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_577_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__19, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__19);
v___x_578_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__7, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__7);
v___x_579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
lean_ctor_set(v___x_579_, 1, v___x_577_);
return v___x_579_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__21(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_580_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__20, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__20);
v___x_581_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__5, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__5);
v___x_582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v___x_580_);
return v___x_582_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__22(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__21, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__21);
v___x_584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__3, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__3);
v___x_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
lean_ctor_set(v___x_585_, 1, v___x_583_);
return v___x_585_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__23(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_586_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__22, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__22);
v___x_587_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__1, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__1);
v___x_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v___x_586_);
return v___x_588_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages(void){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__23, &lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages___closed__23);
return v___x_589_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__1(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__0));
v___x_592_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_591_);
return v___x_592_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__2));
v___x_595_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_594_);
return v___x_595_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_597_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__4));
v___x_598_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_597_);
return v___x_598_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__7(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__6));
v___x_601_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_600_);
return v___x_601_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__9(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__8));
v___x_604_ = l_String_toListImpl(v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__11(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__10));
v___x_607_ = l_String_toListImpl(v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__13(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__12));
v___x_610_ = l_String_toListImpl(v___x_609_);
return v___x_610_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__15(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__14));
v___x_613_ = l_String_toListImpl(v___x_612_);
return v___x_613_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__17(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__16));
v___x_616_ = l_String_toListImpl(v___x_615_);
return v___x_616_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__19(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__18));
v___x_619_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_618_);
return v___x_619_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__21(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__20));
v___x_622_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_621_);
return v___x_622_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__22));
v___x_625_ = l_String_toListImpl(v___x_624_);
return v___x_625_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25(void){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__24));
v___x_628_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_627_);
return v___x_628_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__27(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__26));
v___x_631_ = l_String_toListImpl(v___x_630_);
return v___x_631_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__29(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__28));
v___x_634_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_633_);
return v___x_634_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__31(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__30));
v___x_637_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_636_);
return v___x_637_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__32));
v___x_640_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_639_);
return v___x_640_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__35(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__34));
v___x_643_ = l_String_toListImpl(v___x_642_);
return v___x_643_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__37(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFreelink___closed__36));
v___x_646_ = l_String_toListImpl(v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink(lean_object* v_opts_647_){
_start:
{
lean_object* v___y_649_; lean_object* v___y_650_; uint8_t v___y_651_; lean_object* v___y_652_; lean_object* v___x_669_; lean_object* v_page_670_; lean_object* v___x_671_; lean_object* v_text_672_; lean_object* v___x_673_; lean_object* v_anchor_674_; lean_object* v___x_675_; lean_object* v_extra_676_; uint8_t v___y_678_; uint8_t v___y_679_; lean_object* v___y_680_; lean_object* v___x_691_; lean_object* v_url_692_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_708_; lean_object* v___x_718_; lean_object* v_site_719_; uint8_t v___y_721_; uint8_t v___y_722_; uint8_t v___y_745_; lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_669_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__9, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__9);
v_page_670_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_647_, v___x_669_);
v___x_671_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__11, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__11);
v_text_672_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_647_, v___x_671_);
v___x_673_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__13, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__13);
v_anchor_674_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_647_, v___x_673_);
v___x_675_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__15, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__15);
v_extra_676_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_647_, v___x_675_);
v___x_691_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__17, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__17);
v_url_692_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_647_, v___x_691_);
v___x_718_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__27, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__27);
v_site_719_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_647_, v___x_718_);
v___x_751_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__37, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__37);
v___x_752_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_647_, v___x_751_);
v___x_753_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_752_);
lean_dec(v___x_752_);
if (v___x_753_ == 0)
{
uint8_t v___x_754_; 
v___x_754_ = 1;
v___y_745_ = v___x_754_;
goto v___jp_744_;
}
else
{
uint8_t v___x_755_; 
v___x_755_ = 0;
v___y_745_ = v___x_755_;
goto v___jp_744_;
}
v___jp_648_:
{
if (v___y_651_ == 0)
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_653_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__1, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__1);
v___x_654_ = l_List_appendTR___redArg(v___x_653_, v___y_649_);
v___x_655_ = l_List_appendTR___redArg(v___x_654_, v___y_650_);
v___x_656_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3);
v___x_657_ = l_List_appendTR___redArg(v___x_655_, v___x_656_);
v___x_658_ = l_List_appendTR___redArg(v___x_657_, v___y_652_);
v___x_659_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5);
v___x_660_ = l_List_appendTR___redArg(v___x_658_, v___x_659_);
return v___x_660_;
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_661_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__7, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__7);
v___x_662_ = l_List_appendTR___redArg(v___x_661_, v___y_649_);
v___x_663_ = l_List_appendTR___redArg(v___x_662_, v___y_650_);
v___x_664_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3);
v___x_665_ = l_List_appendTR___redArg(v___x_663_, v___x_664_);
v___x_666_ = l_List_appendTR___redArg(v___x_665_, v___y_652_);
v___x_667_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5);
v___x_668_ = l_List_appendTR___redArg(v___x_666_, v___x_667_);
return v___x_668_;
}
}
v___jp_677_:
{
lean_object* v___x_681_; lean_object* v_pageE_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v_suffix_687_; lean_object* v___x_688_; lean_object* v_t_689_; 
v___x_681_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_page_670_);
lean_dec(v_page_670_);
v_pageE_682_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_681_);
v___x_683_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_anchor_674_);
lean_dec(v_anchor_674_);
v___x_684_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_683_);
v___x_685_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_extra_676_);
lean_dec(v_extra_676_);
v___x_686_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_685_);
v_suffix_687_ = l_List_appendTR___redArg(v___x_684_, v___x_686_);
v___x_688_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v___y_680_);
lean_dec(v___y_680_);
v_t_689_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_688_);
if (v___y_678_ == 0)
{
v___y_649_ = v_pageE_682_;
v___y_650_ = v_suffix_687_;
v___y_651_ = v___y_679_;
v___y_652_ = v_t_689_;
goto v___jp_648_;
}
else
{
lean_object* v___x_690_; 
v___x_690_ = lp_lean_x2dftml_LeanFtml_nbspSpaces(v_t_689_);
v___y_649_ = v_pageE_682_;
v___y_650_ = v_suffix_687_;
v___y_651_ = v___y_679_;
v___y_652_ = v___x_690_;
goto v___jp_648_;
}
}
v___jp_693_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_696_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__19, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__19);
v___x_697_ = l_List_appendTR___redArg(v___x_696_, v___y_695_);
v___x_698_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__21, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__21);
v___x_699_ = l_List_appendTR___redArg(v___x_697_, v___x_698_);
v___x_700_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_url_692_);
v___x_701_ = l_List_appendTR___redArg(v___x_699_, v___x_700_);
v___x_702_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3);
v___x_703_ = l_List_appendTR___redArg(v___x_701_, v___x_702_);
v___x_704_ = l_List_appendTR___redArg(v___x_703_, v___y_694_);
v___x_705_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5);
v___x_706_ = l_List_appendTR___redArg(v___x_704_, v___x_705_);
return v___x_706_;
}
v___jp_707_:
{
lean_object* v___x_709_; lean_object* v_target_710_; uint8_t v___x_711_; 
v___x_709_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23);
v_target_710_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_647_, v___x_709_);
v___x_711_ = l_List_isEmpty___redArg(v_target_710_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_712_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25);
v___x_713_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_target_710_);
v___x_714_ = l_List_appendTR___redArg(v___x_712_, v___x_713_);
v___x_715_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__16, &lp_lean_x2dftml_LeanFtml_renderModule___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__16);
v___x_716_ = l_List_appendTR___redArg(v___x_714_, v___x_715_);
v___y_694_ = v___y_708_;
v___y_695_ = v___x_716_;
goto v___jp_693_;
}
else
{
lean_object* v___x_717_; 
lean_dec(v_target_710_);
v___x_717_ = lean_box(0);
v___y_694_ = v___y_708_;
v___y_695_ = v___x_717_;
goto v___jp_693_;
}
}
v___jp_720_:
{
uint8_t v___x_723_; 
v___x_723_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_url_692_);
if (v___x_723_ == 0)
{
uint8_t v___x_724_; 
lean_dec(v_url_692_);
v___x_724_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_site_719_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; uint8_t v_pageExists_726_; 
lean_dec(v_site_719_);
v___x_725_ = lp_lean_x2dftml_LeanFtml_freelinkExistingPages;
v_pageExists_726_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(v_page_670_, v___x_725_);
if (v___y_722_ == 0)
{
v___y_678_ = v___y_721_;
v___y_679_ = v_pageExists_726_;
v___y_680_ = v_text_672_;
goto v___jp_677_;
}
else
{
if (v_pageExists_726_ == 0)
{
lean_dec(v_text_672_);
lean_inc(v_page_670_);
v___y_678_ = v___y_721_;
v___y_679_ = v_pageExists_726_;
v___y_680_ = v_page_670_;
goto v___jp_677_;
}
else
{
v___y_678_ = v___y_721_;
v___y_679_ = v_pageExists_726_;
v___y_680_ = v_text_672_;
goto v___jp_677_;
}
}
}
else
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec(v_extra_676_);
lean_dec(v_anchor_674_);
v___x_727_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__29, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__29);
v___x_728_ = l_List_appendTR___redArg(v___x_727_, v_site_719_);
v___x_729_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__31, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__31);
v___x_730_ = l_List_appendTR___redArg(v___x_728_, v___x_729_);
v___x_731_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33);
v___x_732_ = l_List_appendTR___redArg(v___x_730_, v___x_731_);
v___x_733_ = l_List_appendTR___redArg(v___x_732_, v_page_670_);
v___x_734_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3);
v___x_735_ = l_List_appendTR___redArg(v___x_733_, v___x_734_);
v___x_736_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_text_672_);
lean_dec(v_text_672_);
v___x_737_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_736_);
v___x_738_ = l_List_appendTR___redArg(v___x_735_, v___x_737_);
v___x_739_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5);
v___x_740_ = l_List_appendTR___redArg(v___x_738_, v___x_739_);
return v___x_740_;
}
}
else
{
lean_object* v___x_741_; lean_object* v_t_742_; 
lean_dec(v_site_719_);
lean_dec(v_extra_676_);
lean_dec(v_anchor_674_);
lean_dec(v_page_670_);
v___x_741_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_text_672_);
lean_dec(v_text_672_);
v_t_742_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_741_);
if (v___y_721_ == 0)
{
v___y_708_ = v_t_742_;
goto v___jp_707_;
}
else
{
lean_object* v___x_743_; 
v___x_743_ = lp_lean_x2dftml_LeanFtml_nbspSpaces(v_t_742_);
v___y_708_ = v___x_743_;
goto v___jp_707_;
}
}
}
v___jp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_746_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__35, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__35);
v___x_747_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_647_, v___x_746_);
v___x_748_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_747_);
lean_dec(v___x_747_);
if (v___x_748_ == 0)
{
uint8_t v___x_749_; 
v___x_749_ = 1;
v___y_721_ = v___y_745_;
v___y_722_ = v___x_749_;
goto v___jp_720_;
}
else
{
uint8_t v___x_750_; 
v___x_750_ = 0;
v___y_721_ = v___y_745_;
v___y_722_ = v___x_750_;
goto v___jp_720_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink___boxed(lean_object* v_opts_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = lp_lean_x2dftml_LeanFtml_renderFreelink(v_opts_756_);
lean_dec(v_opts_756_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageAttrMap(lean_object* v_opts_758_){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__19, &lp_lean_x2dftml_LeanFtml_renderModule___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__19);
v___x_760_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_758_, v___x_759_);
if (lean_obj_tag(v___x_760_) == 1)
{
lean_object* v_val_761_; 
v_val_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_val_761_);
lean_dec_ref_known(v___x_760_, 1);
if (lean_obj_tag(v_val_761_) == 4)
{
lean_object* v_a_762_; 
v_a_762_ = lean_ctor_get(v_val_761_, 0);
lean_inc(v_a_762_);
lean_dec_ref_known(v_val_761_, 1);
return v_a_762_;
}
else
{
lean_object* v___x_763_; 
lean_dec(v_val_761_);
v___x_763_ = lean_box(0);
return v___x_763_;
}
}
else
{
lean_object* v___x_764_; 
lean_dec(v___x_760_);
v___x_764_ = lean_box(0);
return v___x_764_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageAttrMap___boxed(lean_object* v_opts_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = lp_lean_x2dftml_LeanFtml_imageAttrMap(v_opts_765_);
lean_dec(v_opts_765_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_attrLookup_spec__0(lean_object* v_key_767_, lean_object* v_x_768_){
_start:
{
if (lean_obj_tag(v_x_768_) == 0)
{
lean_object* v___x_769_; 
lean_dec_ref(v_key_767_);
v___x_769_ = lean_box(0);
return v___x_769_;
}
else
{
lean_object* v_head_770_; lean_object* v_tail_771_; lean_object* v_fst_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
v_head_770_ = lean_ctor_get(v_x_768_, 0);
v_tail_771_ = lean_ctor_get(v_x_768_, 1);
v_fst_772_ = lean_ctor_get(v_head_770_, 0);
lean_inc_ref(v_key_767_);
v___x_773_ = l_String_toListImpl(v_key_767_);
v___x_774_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_772_, v___x_773_);
lean_dec(v___x_773_);
if (v___x_774_ == 0)
{
v_x_768_ = v_tail_771_;
goto _start;
}
else
{
lean_object* v___x_776_; 
lean_dec_ref(v_key_767_);
lean_inc(v_head_770_);
v___x_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_776_, 0, v_head_770_);
return v___x_776_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_attrLookup_spec__0___boxed(lean_object* v_key_777_, lean_object* v_x_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_attrLookup_spec__0(v_key_777_, v_x_778_);
lean_dec(v_x_778_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrLookup(lean_object* v_m_780_, lean_object* v_key_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_attrLookup_spec__0(v_key_781_, v_m_780_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v___x_783_; 
v___x_783_ = lean_box(0);
return v___x_783_;
}
else
{
lean_object* v_val_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_794_; 
v_val_784_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_794_ == 0)
{
v___x_786_ = v___x_782_;
v_isShared_787_ = v_isSharedCheck_794_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_val_784_);
lean_dec(v___x_782_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_794_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v_snd_788_; 
v_snd_788_ = lean_ctor_get(v_val_784_, 1);
lean_inc(v_snd_788_);
lean_dec(v_val_784_);
if (lean_obj_tag(v_snd_788_) == 3)
{
lean_object* v___x_789_; 
lean_del_object(v___x_786_);
v___x_789_ = lean_box(0);
return v___x_789_;
}
else
{
lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_790_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_snd_788_);
lean_dec(v_snd_788_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v___x_790_);
v___x_792_ = v___x_786_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrLookup___boxed(lean_object* v_m_795_, lean_object* v_key_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = lp_lean_x2dftml_LeanFtml_attrLookup(v_m_795_, v_key_796_);
lean_dec(v_m_795_);
return v_res_797_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__0));
v___x_800_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_799_);
return v___x_800_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__2));
v___x_803_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_802_);
return v___x_803_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__4));
v___x_806_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_805_);
return v___x_806_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__6));
v___x_809_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_808_);
return v___x_809_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_imageSizeOk(lean_object* v_size_810_){
_start:
{
lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_811_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1);
v___x_812_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_810_, v___x_811_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_813_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3);
v___x_814_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_810_, v___x_813_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5);
v___x_816_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_810_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_817_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7);
v___x_818_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_810_, v___x_817_);
return v___x_818_;
}
else
{
return v___x_816_;
}
}
else
{
return v___x_814_;
}
}
else
{
return v___x_812_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageSizeOk___boxed(lean_object* v_size_819_){
_start:
{
uint8_t v_res_820_; lean_object* v_r_821_; 
v_res_820_ = lp_lean_x2dftml_LeanFtml_imageSizeOk(v_size_819_);
lean_dec(v_size_819_);
v_r_821_ = lean_box(v_res_820_);
return v_r_821_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = ((lean_object*)(lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__0));
v___x_824_ = l_String_toListImpl(v___x_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0(lean_object* v_x_825_){
_start:
{
if (lean_obj_tag(v_x_825_) == 0)
{
lean_object* v___x_826_; 
v___x_826_ = lean_box(0);
return v___x_826_;
}
else
{
lean_object* v_head_827_; lean_object* v_tail_828_; lean_object* v_fst_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v_head_827_ = lean_ctor_get(v_x_825_, 0);
v_tail_828_ = lean_ctor_get(v_x_825_, 1);
v_fst_829_ = lean_ctor_get(v_head_827_, 0);
v___x_830_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1);
v___x_831_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_829_, v___x_830_);
if (v___x_831_ == 0)
{
v_x_825_ = v_tail_828_;
goto _start;
}
else
{
lean_object* v___x_833_; 
lean_inc(v_head_827_);
v___x_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_833_, 0, v_head_827_);
return v___x_833_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___boxed(lean_object* v_x_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0(v_x_834_);
lean_dec(v_x_834_);
return v_res_835_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_linkLooseNull(lean_object* v_m_836_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0(v_m_836_);
if (lean_obj_tag(v___x_837_) == 0)
{
uint8_t v___x_838_; 
v___x_838_ = 1;
return v___x_838_;
}
else
{
lean_object* v_val_839_; lean_object* v_snd_840_; 
v_val_839_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_val_839_);
lean_dec_ref_known(v___x_837_, 1);
v_snd_840_ = lean_ctor_get(v_val_839_, 1);
lean_inc(v_snd_840_);
lean_dec(v_val_839_);
if (lean_obj_tag(v_snd_840_) == 3)
{
uint8_t v___x_841_; 
v___x_841_ = 1;
return v___x_841_;
}
else
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_snd_840_);
lean_dec(v_snd_840_);
v___x_843_ = l_List_isEmpty___redArg(v___x_842_);
lean_dec(v___x_842_);
return v___x_843_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_linkLooseNull___boxed(lean_object* v_m_844_){
_start:
{
uint8_t v_res_845_; lean_object* v_r_846_; 
v_res_845_ = lp_lean_x2dftml_LeanFtml_linkLooseNull(v_m_844_);
lean_dec(v_m_844_);
v_r_846_ = lean_box(v_res_845_);
return v_r_846_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_imageHref_spec__0(lean_object* v_x_847_){
_start:
{
if (lean_obj_tag(v_x_847_) == 0)
{
return v_x_847_;
}
else
{
lean_object* v_head_848_; lean_object* v_tail_849_; lean_object* v___x_850_; uint8_t v___x_851_; 
v_head_848_ = lean_ctor_get(v_x_847_, 0);
v_tail_849_ = lean_ctor_get(v_x_847_, 1);
v___x_850_ = lean_unsigned_to_nat(47u);
v___x_851_ = lean_nat_dec_eq(v_head_848_, v___x_850_);
if (v___x_851_ == 0)
{
lean_inc_ref(v_x_847_);
return v_x_847_;
}
else
{
v_x_847_ = v_tail_849_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_imageHref_spec__0___boxed(lean_object* v_x_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_imageHref_spec__0(v_x_853_);
lean_dec(v_x_853_);
return v_res_854_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageHref___closed__1(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageHref___closed__0));
v___x_857_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageHref(lean_object* v_link_864_){
_start:
{
lean_object* v___x_865_; uint8_t v___x_866_; 
v___x_865_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageHref___closed__1, &lp_lean_x2dftml_LeanFtml_imageHref___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_imageHref___closed__1);
v___x_866_ = lp_lean_x2dftml_LeanFtml_containsSubFrom1(v___x_865_, v_link_864_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_867_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageHref___closed__2));
v___x_868_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_867_, v_link_864_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageHref___closed__3));
v___x_870_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_imageHref_spec__0(v_link_864_);
v___x_871_ = l_List_appendTR___redArg(v___x_869_, v___x_870_);
return v___x_871_;
}
else
{
lean_inc(v_link_864_);
return v_link_864_;
}
}
else
{
lean_inc(v_link_864_);
return v_link_864_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageHref___boxed(lean_object* v_link_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = lp_lean_x2dftml_LeanFtml_imageHref(v_link_872_);
lean_dec(v_link_872_);
return v_res_873_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__1(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__0));
v___x_876_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__2));
v___x_879_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_878_);
return v___x_879_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5(void){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_881_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__4));
v___x_882_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_881_);
return v___x_882_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__7(void){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__6));
v___x_885_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_884_);
return v___x_885_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__9(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__8));
v___x_888_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_887_);
return v___x_888_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__11(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__10));
v___x_891_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__13(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__12));
v___x_894_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_imageAttrEmit(lean_object* v_kv_895_){
_start:
{
lean_object* v_fst_896_; lean_object* v_snd_897_; lean_object* v___x_898_; lean_object* v_key_899_; lean_object* v___x_911_; uint8_t v___x_912_; 
v_fst_896_ = lean_ctor_get(v_kv_895_, 0);
lean_inc(v_fst_896_);
v_snd_897_ = lean_ctor_get(v_kv_895_, 1);
lean_inc(v_snd_897_);
lean_dec_ref(v_kv_895_);
v___x_898_ = lean_box(0);
v_key_899_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_parsePcre_spec__0(v_fst_896_, v___x_898_);
v___x_911_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3);
v___x_912_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_key_899_, v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; uint8_t v___x_914_; 
v___x_913_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5);
v___x_914_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_key_899_, v___x_913_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; uint8_t v___x_916_; 
v___x_915_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__7, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__7);
v___x_916_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_key_899_, v___x_915_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_917_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__9, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__9);
v___x_918_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_key_899_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_919_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__11, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__11);
v___x_920_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_key_899_, v___x_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; uint8_t v___x_922_; 
v___x_921_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__13, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__13);
v___x_922_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_key_899_, v___x_921_);
if (v___x_922_ == 0)
{
lean_dec(v_key_899_);
lean_dec(v_snd_897_);
return v___x_898_;
}
else
{
goto v___jp_900_;
}
}
else
{
goto v___jp_900_;
}
}
else
{
goto v___jp_900_;
}
}
else
{
goto v___jp_900_;
}
}
else
{
goto v___jp_900_;
}
}
else
{
goto v___jp_900_;
}
v___jp_900_:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_901_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderModule___closed__17));
v___x_902_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_key_899_);
v___x_903_ = l_List_appendTR___redArg(v___x_901_, v___x_902_);
v___x_904_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__1, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__1);
v___x_905_ = l_List_appendTR___redArg(v___x_903_, v___x_904_);
v___x_906_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_snd_897_);
lean_dec(v_snd_897_);
v___x_907_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_906_);
v___x_908_ = l_List_appendTR___redArg(v___x_905_, v___x_907_);
v___x_909_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__16, &lp_lean_x2dftml_LeanFtml_renderModule___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__16);
v___x_910_ = l_List_appendTR___redArg(v___x_908_, v___x_909_);
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_renderImage_spec__0(uint8_t v___x_923_, lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
if (lean_obj_tag(v_a_924_) == 0)
{
lean_object* v___x_926_; 
v___x_926_ = l_List_reverse___redArg(v_a_925_);
return v___x_926_;
}
else
{
lean_object* v_head_927_; lean_object* v_tail_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_941_; 
v_head_927_ = lean_ctor_get(v_a_924_, 0);
v_tail_928_ = lean_ctor_get(v_a_924_, 1);
v_isSharedCheck_941_ = !lean_is_exclusive(v_a_924_);
if (v_isSharedCheck_941_ == 0)
{
v___x_930_ = v_a_924_;
v_isShared_931_ = v_isSharedCheck_941_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_tail_928_);
lean_inc(v_head_927_);
lean_dec(v_a_924_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_941_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v_fst_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v_fst_937_ = lean_ctor_get(v_head_927_, 0);
v___x_938_ = lean_obj_once(&lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1, &lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__1);
v___x_939_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_937_, v___x_938_);
if (v___x_939_ == 0)
{
goto v___jp_932_;
}
else
{
if (v___x_923_ == 0)
{
lean_del_object(v___x_930_);
lean_dec(v_head_927_);
v_a_924_ = v_tail_928_;
goto _start;
}
else
{
goto v___jp_932_;
}
}
v___jp_932_:
{
lean_object* v___x_934_; 
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v_a_925_);
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_head_927_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_a_925_);
v___x_934_ = v_reuseFailAlloc_936_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
v_a_924_ = v_tail_928_;
v_a_925_ = v___x_934_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_renderImage_spec__0___boxed(lean_object* v___x_942_, lean_object* v_a_943_, lean_object* v_a_944_){
_start:
{
uint8_t v___x_1095__boxed_945_; lean_object* v_res_946_; 
v___x_1095__boxed_945_ = lean_unbox(v___x_942_);
v_res_946_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_renderImage_spec__0(v___x_1095__boxed_945_, v_a_943_, v_a_944_);
return v_res_946_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__2(lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_947_) == 0)
{
uint8_t v___x_948_; 
v___x_948_ = 0;
return v___x_948_;
}
else
{
lean_object* v_head_949_; lean_object* v_tail_950_; lean_object* v_fst_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; uint8_t v___x_956_; 
v_head_949_ = lean_ctor_get(v_x_947_, 0);
lean_inc(v_head_949_);
v_tail_950_ = lean_ctor_get(v_x_947_, 1);
lean_inc(v_tail_950_);
lean_dec_ref_known(v_x_947_, 2);
v_fst_951_ = lean_ctor_get(v_head_949_, 0);
lean_inc(v_fst_951_);
lean_dec(v_head_949_);
v___x_952_ = lean_box(0);
v___x_953_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_parsePcre_spec__0(v_fst_951_, v___x_952_);
v___x_954_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v___x_953_);
v___x_955_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__3);
v___x_956_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v___x_954_, v___x_955_);
lean_dec(v___x_954_);
if (v___x_956_ == 0)
{
v_x_947_ = v_tail_950_;
goto _start;
}
else
{
lean_dec(v_tail_950_);
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__2___boxed(lean_object* v_x_958_){
_start:
{
uint8_t v_res_959_; lean_object* v_r_960_; 
v_res_959_ = lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__2(v_x_958_);
v_r_960_ = lean_box(v_res_959_);
return v_r_960_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderImage_spec__1(lean_object* v_x_961_, lean_object* v_x_962_){
_start:
{
if (lean_obj_tag(v_x_962_) == 0)
{
return v_x_961_;
}
else
{
lean_object* v_head_963_; lean_object* v_tail_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_head_963_ = lean_ctor_get(v_x_962_, 0);
lean_inc(v_head_963_);
v_tail_964_ = lean_ctor_get(v_x_962_, 1);
lean_inc(v_tail_964_);
lean_dec_ref_known(v_x_962_, 2);
v___x_965_ = lp_lean_x2dftml_LeanFtml_imageAttrEmit(v_head_963_);
v___x_966_ = l_List_appendTR___redArg(v_x_961_, v___x_965_);
v_x_961_ = v___x_966_;
v_x_962_ = v_tail_964_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__3(lean_object* v_x_968_){
_start:
{
if (lean_obj_tag(v_x_968_) == 0)
{
uint8_t v___x_969_; 
v___x_969_ = 0;
return v___x_969_;
}
else
{
lean_object* v_head_970_; lean_object* v_tail_971_; lean_object* v_fst_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; uint8_t v___x_977_; 
v_head_970_ = lean_ctor_get(v_x_968_, 0);
lean_inc(v_head_970_);
v_tail_971_ = lean_ctor_get(v_x_968_, 1);
lean_inc(v_tail_971_);
lean_dec_ref_known(v_x_968_, 2);
v_fst_972_ = lean_ctor_get(v_head_970_, 0);
lean_inc(v_fst_972_);
lean_dec(v_head_970_);
v___x_973_ = lean_box(0);
v___x_974_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_parsePcre_spec__0(v_fst_972_, v___x_973_);
v___x_975_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v___x_974_);
v___x_976_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5);
v___x_977_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v___x_975_, v___x_976_);
lean_dec(v___x_975_);
if (v___x_977_ == 0)
{
v_x_968_ = v_tail_971_;
goto _start;
}
else
{
lean_dec(v_tail_971_);
return v___x_977_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__3___boxed(lean_object* v_x_979_){
_start:
{
uint8_t v_res_980_; lean_object* v_r_981_; 
v_res_980_ = lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__3(v_x_979_);
v_r_981_ = lean_box(v_res_980_);
return v_r_981_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__1(void){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__0));
v___x_984_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_983_);
return v___x_984_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__3(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__2));
v___x_987_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_986_);
return v___x_987_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__5(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__4));
v___x_990_ = l_String_toListImpl(v___x_989_);
return v___x_990_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__7(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__6));
v___x_993_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__9(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__8));
v___x_996_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_995_);
return v___x_996_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__11(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__10));
v___x_999_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_998_);
return v___x_999_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__13(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__12));
v___x_1002_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1001_);
return v___x_1002_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__15(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__14));
v___x_1005_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1004_);
return v___x_1005_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__17(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__16));
v___x_1008_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1007_);
return v___x_1008_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__19(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__18));
v___x_1011_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__21(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__20));
v___x_1014_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__23(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__22));
v___x_1017_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1016_);
return v___x_1017_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__25(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__24));
v___x_1020_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1019_);
return v___x_1020_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__27(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__26));
v___x_1023_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1022_);
return v___x_1023_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__29(void){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__28));
v___x_1026_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1025_);
return v___x_1026_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__31(void){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1028_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__30));
v___x_1029_ = l_String_toListImpl(v___x_1028_);
return v___x_1029_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__33(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__32));
v___x_1032_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1031_);
return v___x_1032_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__35(void){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__34));
v___x_1035_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1034_);
return v___x_1035_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__37(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__36));
v___x_1038_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1037_);
return v___x_1038_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__39(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__38));
v___x_1041_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1040_);
return v___x_1041_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__41(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__40));
v___x_1044_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1043_);
return v___x_1044_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__43(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__42));
v___x_1047_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1046_);
return v___x_1047_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__45(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__44));
v___x_1050_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1049_);
return v___x_1050_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__47(void){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__46));
v___x_1053_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1052_);
return v___x_1053_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__49(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__48));
v___x_1056_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1055_);
return v___x_1056_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__51(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__50));
v___x_1059_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1058_);
return v___x_1059_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__52(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3);
v___x_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderImage(lean_object* v_opts_1063_){
_start:
{
lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1075_; lean_object* v___y_1076_; lean_object* v___y_1096_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1107_; lean_object* v___y_1108_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___x_1129_; lean_object* v_src0_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; 
v___x_1129_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__31, &lp_lean_x2dftml_LeanFtml_renderImage___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__31);
v_src0_1130_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_1063_, v___x_1129_);
v___x_1131_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__33, &lp_lean_x2dftml_LeanFtml_renderImage___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__33);
v___x_1132_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_1131_, v_src0_1130_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1133_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__35, &lp_lean_x2dftml_LeanFtml_renderImage___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__35);
v___x_1134_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_1133_, v_src0_1130_);
if (v___x_1134_ == 0)
{
lean_object* v_attr_1135_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v_fst_1165_; lean_object* v_val_1166_; lean_object* v_fst_1170_; lean_object* v_snd_1171_; lean_object* v___x_1173_; lean_object* v_link0_1174_; lean_object* v___y_1176_; lean_object* v___y_1209_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v_attr_1135_ = lp_lean_x2dftml_LeanFtml_imageAttrMap(v_opts_1063_);
v___x_1173_ = ((lean_object*)(lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__0));
v_link0_1174_ = lp_lean_x2dftml_LeanFtml_attrLookup(v_attr_1135_, v___x_1173_);
v___x_1212_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageHref___closed__1, &lp_lean_x2dftml_LeanFtml_imageHref___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_imageHref___closed__1);
v___x_1213_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_1212_, v_src0_1130_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; lean_object* v_size0_1215_; 
v___x_1214_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__53));
v_size0_1215_ = lp_lean_x2dftml_LeanFtml_attrLookup(v_attr_1135_, v___x_1214_);
if (lean_obj_tag(v_size0_1215_) == 0)
{
v___y_1209_ = v_size0_1215_;
goto v___jp_1208_;
}
else
{
lean_object* v_val_1216_; uint8_t v___x_1217_; 
v_val_1216_ = lean_ctor_get(v_size0_1215_, 0);
v___x_1217_ = lp_lean_x2dftml_LeanFtml_imageSizeOk(v_val_1216_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; 
lean_dec_ref_known(v_size0_1215_, 1);
v___x_1218_ = lean_box(0);
v___y_1209_ = v___x_1218_;
goto v___jp_1208_;
}
else
{
v___y_1176_ = v_size0_1215_;
goto v___jp_1175_;
}
}
}
else
{
lean_inc(v_src0_1130_);
v_fst_1170_ = v_src0_1130_;
v_snd_1171_ = v_link0_1174_;
goto v___jp_1169_;
}
v___jp_1136_:
{
lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1142_ = l_List_appendTR___redArg(v___y_1139_, v___y_1141_);
v___x_1143_ = lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__2(v_attr_1135_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; 
v___x_1144_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__37, &lp_lean_x2dftml_LeanFtml_renderImage___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__37);
v___y_1107_ = v___y_1137_;
v___y_1108_ = v___y_1138_;
v___y_1109_ = v___x_1142_;
v___y_1110_ = v___y_1140_;
v___y_1111_ = v___x_1144_;
goto v___jp_1106_;
}
else
{
lean_inc(v___y_1137_);
v___y_1107_ = v___y_1137_;
v___y_1108_ = v___y_1138_;
v___y_1109_ = v___x_1142_;
v___y_1110_ = v___y_1140_;
v___y_1111_ = v___y_1137_;
goto v___jp_1106_;
}
}
v___jp_1145_:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; 
v___x_1148_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__39, &lp_lean_x2dftml_LeanFtml_renderImage___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__39);
v___x_1149_ = lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii(v___y_1146_);
v___x_1150_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_1149_);
v___x_1151_ = l_List_appendTR___redArg(v___x_1148_, v___x_1150_);
v___x_1152_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderModule___closed__16, &lp_lean_x2dftml_LeanFtml_renderModule___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_renderModule___closed__16);
v___x_1153_ = l_List_appendTR___redArg(v___x_1151_, v___x_1152_);
v___x_1154_ = lean_box(0);
lean_inc_n(v_attr_1135_, 2);
v___x_1155_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_renderImage_spec__0(v___x_1134_, v_attr_1135_, v___x_1154_);
v___x_1156_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderImage_spec__1(v___x_1154_, v___x_1155_);
v___x_1157_ = l_List_appendTR___redArg(v___x_1153_, v___x_1156_);
v___x_1158_ = lp_lean_x2dftml_List_any___at___00LeanFtml_renderImage_spec__3(v_attr_1135_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1159_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__41, &lp_lean_x2dftml_LeanFtml_renderImage___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__41);
v___x_1160_ = lp_lean_x2dftml_LeanFtml_phpBasename(v_src0_1130_);
v___x_1161_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_1160_);
v___x_1162_ = l_List_appendTR___redArg(v___x_1159_, v___x_1161_);
v___x_1163_ = l_List_appendTR___redArg(v___x_1162_, v___x_1152_);
v___y_1137_ = v___x_1154_;
v___y_1138_ = v___y_1147_;
v___y_1139_ = v___x_1157_;
v___y_1140_ = v___x_1152_;
v___y_1141_ = v___x_1163_;
goto v___jp_1136_;
}
else
{
lean_dec(v_src0_1130_);
v___y_1137_ = v___x_1154_;
v___y_1138_ = v___y_1147_;
v___y_1139_ = v___x_1157_;
v___y_1140_ = v___x_1152_;
v___y_1141_ = v___x_1154_;
goto v___jp_1136_;
}
}
v___jp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = lp_lean_x2dftml_LeanFtml_imageHref(v_val_1166_);
lean_dec(v_val_1166_);
v___x_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
v___y_1146_ = v_fst_1165_;
v___y_1147_ = v___x_1168_;
goto v___jp_1145_;
}
v___jp_1169_:
{
if (lean_obj_tag(v_snd_1171_) == 0)
{
v___y_1146_ = v_fst_1170_;
v___y_1147_ = v_snd_1171_;
goto v___jp_1145_;
}
else
{
lean_object* v_val_1172_; 
v_val_1172_ = lean_ctor_get(v_snd_1171_, 0);
lean_inc(v_val_1172_);
lean_dec_ref_known(v_snd_1171_, 1);
v_fst_1165_ = v_fst_1170_;
v_val_1166_ = v_val_1172_;
goto v___jp_1164_;
}
}
v___jp_1175_:
{
lean_object* v___x_1177_; uint8_t v___x_1178_; 
v___x_1177_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageHref___closed__3));
v___x_1178_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_1177_, v_src0_1130_);
if (v___x_1178_ == 0)
{
if (lean_obj_tag(v___y_1176_) == 0)
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__43, &lp_lean_x2dftml_LeanFtml_renderImage___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__43);
lean_inc(v_src0_1130_);
v___x_1180_ = l_List_appendTR___redArg(v___x_1179_, v_src0_1130_);
v_fst_1170_ = v___x_1180_;
v_snd_1171_ = v_link0_1174_;
goto v___jp_1169_;
}
else
{
lean_object* v_val_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; 
v_val_1181_ = lean_ctor_get(v___y_1176_, 0);
lean_inc(v_val_1181_);
lean_dec_ref_known(v___y_1176_, 1);
v___x_1182_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__45, &lp_lean_x2dftml_LeanFtml_renderImage___closed__45_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__45);
lean_inc(v_src0_1130_);
v___x_1183_ = l_List_appendTR___redArg(v___x_1182_, v_src0_1130_);
v___x_1184_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33);
v___x_1185_ = l_List_appendTR___redArg(v___x_1183_, v___x_1184_);
v___x_1186_ = l_List_appendTR___redArg(v___x_1185_, v_val_1181_);
v___x_1187_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__47, &lp_lean_x2dftml_LeanFtml_renderImage___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__47);
v___x_1188_ = l_List_appendTR___redArg(v___x_1186_, v___x_1187_);
v___x_1189_ = lp_lean_x2dftml_LeanFtml_linkLooseNull(v_attr_1135_);
if (v___x_1189_ == 0)
{
v_fst_1170_ = v___x_1188_;
v_snd_1171_ = v_link0_1174_;
goto v___jp_1169_;
}
else
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
lean_dec(v_link0_1174_);
v___x_1190_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__43, &lp_lean_x2dftml_LeanFtml_renderImage___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__43);
v___x_1191_ = lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash(v_src0_1130_);
v___x_1192_ = l_List_appendTR___redArg(v___x_1190_, v___x_1191_);
v_fst_1165_ = v___x_1188_;
v_val_1166_ = v___x_1192_;
goto v___jp_1164_;
}
}
}
else
{
if (lean_obj_tag(v___y_1176_) == 0)
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__49, &lp_lean_x2dftml_LeanFtml_renderImage___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__49);
v___x_1194_ = lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash(v_src0_1130_);
v___x_1195_ = l_List_appendTR___redArg(v___x_1193_, v___x_1194_);
v_fst_1170_ = v___x_1195_;
v_snd_1171_ = v_link0_1174_;
goto v___jp_1169_;
}
else
{
lean_object* v_val_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v_val_1196_ = lean_ctor_get(v___y_1176_, 0);
lean_inc(v_val_1196_);
lean_dec_ref_known(v___y_1176_, 1);
v___x_1197_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__51, &lp_lean_x2dftml_LeanFtml_renderImage___closed__51_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__51);
v___x_1198_ = lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash(v_src0_1130_);
lean_inc(v___x_1198_);
v___x_1199_ = l_List_appendTR___redArg(v___x_1197_, v___x_1198_);
v___x_1200_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33);
v___x_1201_ = l_List_appendTR___redArg(v___x_1199_, v___x_1200_);
v___x_1202_ = l_List_appendTR___redArg(v___x_1201_, v_val_1196_);
v___x_1203_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__47, &lp_lean_x2dftml_LeanFtml_renderImage___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__47);
v___x_1204_ = l_List_appendTR___redArg(v___x_1202_, v___x_1203_);
v___x_1205_ = lp_lean_x2dftml_LeanFtml_linkLooseNull(v_attr_1135_);
if (v___x_1205_ == 0)
{
lean_dec(v___x_1198_);
v_fst_1170_ = v___x_1204_;
v_snd_1171_ = v_link0_1174_;
goto v___jp_1169_;
}
else
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec(v_link0_1174_);
v___x_1206_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__49, &lp_lean_x2dftml_LeanFtml_renderImage___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__49);
v___x_1207_ = l_List_appendTR___redArg(v___x_1206_, v___x_1198_);
v_fst_1165_ = v___x_1204_;
v_val_1166_ = v___x_1207_;
goto v___jp_1164_;
}
}
}
}
v___jp_1208_:
{
uint8_t v___x_1210_; 
lean_inc(v_src0_1130_);
v___x_1210_ = lp_lean_x2dftml_LeanFtml_imageExtSuffix(v_src0_1130_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; 
lean_dec(v___y_1209_);
v___x_1211_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__52, &lp_lean_x2dftml_LeanFtml_renderImage___closed__52_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__52);
v___y_1176_ = v___x_1211_;
goto v___jp_1175_;
}
else
{
v___y_1176_ = v___y_1209_;
goto v___jp_1175_;
}
}
}
else
{
lean_object* v___x_1219_; 
lean_dec(v_src0_1130_);
v___x_1219_ = lean_box(0);
return v___x_1219_;
}
}
else
{
lean_object* v___x_1220_; 
lean_dec(v_src0_1130_);
v___x_1220_ = lean_box(0);
return v___x_1220_;
}
v___jp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1067_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__1, &lp_lean_x2dftml_LeanFtml_renderImage___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__1);
v___x_1068_ = l_List_appendTR___redArg(v___x_1067_, v___y_1066_);
v___x_1069_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__3);
v___x_1070_ = l_List_appendTR___redArg(v___x_1068_, v___x_1069_);
v___x_1071_ = l_List_appendTR___redArg(v___x_1070_, v___y_1065_);
v___x_1072_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__3, &lp_lean_x2dftml_LeanFtml_renderImage___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__3);
v___x_1073_ = l_List_appendTR___redArg(v___x_1071_, v___x_1072_);
return v___x_1073_;
}
v___jp_1074_:
{
lean_object* v___x_1077_; lean_object* v_align_1078_; uint8_t v___x_1079_; 
v___x_1077_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__5, &lp_lean_x2dftml_LeanFtml_renderImage___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__5);
v_align_1078_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_1063_, v___x_1077_);
v___x_1079_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_align_1078_);
if (v___x_1079_ == 0)
{
lean_dec(v_align_1078_);
lean_dec(v___y_1075_);
return v___y_1076_;
}
else
{
lean_object* v___x_1080_; uint8_t v___x_1081_; 
v___x_1080_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__7, &lp_lean_x2dftml_LeanFtml_renderImage___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__7);
v___x_1081_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_align_1078_, v___x_1080_);
if (v___x_1081_ == 0)
{
lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1082_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__9, &lp_lean_x2dftml_LeanFtml_renderImage___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__9);
v___x_1083_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_align_1078_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; uint8_t v___x_1085_; 
v___x_1084_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__11, &lp_lean_x2dftml_LeanFtml_renderImage___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__11);
v___x_1085_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_align_1078_, v___x_1084_);
if (v___x_1085_ == 0)
{
lean_object* v___x_1086_; uint8_t v___x_1087_; 
v___x_1086_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__13, &lp_lean_x2dftml_LeanFtml_renderImage___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__13);
v___x_1087_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_align_1078_, v___x_1086_);
if (v___x_1087_ == 0)
{
lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1088_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__15, &lp_lean_x2dftml_LeanFtml_renderImage___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__15);
v___x_1089_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_align_1078_, v___x_1088_);
lean_dec(v_align_1078_);
if (v___x_1089_ == 0)
{
v___y_1065_ = v___y_1076_;
v___y_1066_ = v___y_1075_;
goto v___jp_1064_;
}
else
{
lean_object* v___x_1090_; 
lean_dec(v___y_1075_);
v___x_1090_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__17, &lp_lean_x2dftml_LeanFtml_renderImage___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__17);
v___y_1065_ = v___y_1076_;
v___y_1066_ = v___x_1090_;
goto v___jp_1064_;
}
}
else
{
lean_object* v___x_1091_; 
lean_dec(v_align_1078_);
lean_dec(v___y_1075_);
v___x_1091_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__19, &lp_lean_x2dftml_LeanFtml_renderImage___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__19);
v___y_1065_ = v___y_1076_;
v___y_1066_ = v___x_1091_;
goto v___jp_1064_;
}
}
else
{
lean_object* v___x_1092_; 
lean_dec(v_align_1078_);
lean_dec(v___y_1075_);
v___x_1092_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__21, &lp_lean_x2dftml_LeanFtml_renderImage___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__21);
v___y_1065_ = v___y_1076_;
v___y_1066_ = v___x_1092_;
goto v___jp_1064_;
}
}
else
{
lean_object* v___x_1093_; 
lean_dec(v_align_1078_);
lean_dec(v___y_1075_);
v___x_1093_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__23, &lp_lean_x2dftml_LeanFtml_renderImage___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__23);
v___y_1065_ = v___y_1076_;
v___y_1066_ = v___x_1093_;
goto v___jp_1064_;
}
}
else
{
lean_object* v___x_1094_; 
lean_dec(v_align_1078_);
lean_dec(v___y_1075_);
v___x_1094_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__25, &lp_lean_x2dftml_LeanFtml_renderImage___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__25);
v___y_1065_ = v___y_1076_;
v___y_1066_ = v___x_1094_;
goto v___jp_1064_;
}
}
}
v___jp_1095_:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1100_ = l_List_appendTR___redArg(v___y_1098_, v___y_1099_);
v___x_1101_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__13, &lp_lean_x2dftml_LeanFtml_renderImage___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__13);
v___x_1102_ = l_List_appendTR___redArg(v___x_1100_, v___x_1101_);
v___x_1103_ = l_List_appendTR___redArg(v___x_1102_, v___y_1097_);
v___x_1104_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__5);
v___x_1105_ = l_List_appendTR___redArg(v___x_1103_, v___x_1104_);
v___y_1075_ = v___y_1096_;
v___y_1076_ = v___x_1105_;
goto v___jp_1074_;
}
v___jp_1106_:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v_img_1114_; 
v___x_1112_ = l_List_appendTR___redArg(v___y_1109_, v___y_1111_);
v___x_1113_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__27, &lp_lean_x2dftml_LeanFtml_renderImage___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__27);
v_img_1114_ = l_List_appendTR___redArg(v___x_1112_, v___x_1113_);
if (lean_obj_tag(v___y_1108_) == 0)
{
lean_dec(v___y_1110_);
v___y_1075_ = v___y_1107_;
v___y_1076_ = v_img_1114_;
goto v___jp_1074_;
}
else
{
lean_object* v_val_1115_; uint8_t v___x_1116_; 
v_val_1115_ = lean_ctor_get(v___y_1108_, 0);
lean_inc(v_val_1115_);
lean_dec_ref_known(v___y_1108_, 1);
v___x_1116_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_val_1115_);
if (v___x_1116_ == 0)
{
lean_dec(v_val_1115_);
lean_dec(v___y_1110_);
v___y_1075_ = v___y_1107_;
v___y_1076_ = v_img_1114_;
goto v___jp_1074_;
}
else
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v___x_1117_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__29, &lp_lean_x2dftml_LeanFtml_renderImage___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__29);
v___x_1118_ = lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii(v_val_1115_);
v___x_1119_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_1118_);
v___x_1120_ = l_List_appendTR___redArg(v___x_1117_, v___x_1119_);
lean_inc(v___y_1110_);
v___x_1121_ = l_List_appendTR___redArg(v___x_1120_, v___y_1110_);
v___x_1122_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__23);
v___x_1123_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1063_, v___x_1122_);
v___x_1124_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_1123_);
lean_dec(v___x_1123_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1125_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__25);
v___x_1126_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_1063_, v___x_1122_);
v___x_1127_ = l_List_appendTR___redArg(v___x_1125_, v___x_1126_);
v___x_1128_ = l_List_appendTR___redArg(v___x_1127_, v___y_1110_);
v___y_1096_ = v___y_1107_;
v___y_1097_ = v_img_1114_;
v___y_1098_ = v___x_1121_;
v___y_1099_ = v___x_1128_;
goto v___jp_1095_;
}
else
{
lean_dec(v___y_1110_);
lean_inc(v___y_1107_);
v___y_1096_ = v___y_1107_;
v___y_1097_ = v_img_1114_;
v___y_1098_ = v___x_1121_;
v___y_1099_ = v___y_1107_;
goto v___jp_1095_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderImage___boxed(lean_object* v_opts_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = lp_lean_x2dftml_LeanFtml_renderImage(v_opts_1221_);
lean_dec(v_opts_1221_);
return v_res_1222_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_gallerySize___closed__1(void){
_start:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1224_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_gallerySize___closed__0));
v___x_1225_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gallerySize(lean_object* v_size_1226_){
_start:
{
lean_object* v___x_1227_; uint8_t v___x_1228_; 
v___x_1227_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__1);
v___x_1228_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_1226_, v___x_1227_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; uint8_t v___x_1230_; 
v___x_1229_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__3);
v___x_1230_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_1226_, v___x_1229_);
if (v___x_1230_ == 0)
{
lean_object* v___x_1231_; uint8_t v___x_1232_; 
v___x_1231_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__5);
v___x_1232_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_1226_, v___x_1231_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7, &lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_imageSizeOk___closed__7);
v___x_1234_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_1226_, v___x_1233_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_gallerySize___closed__1, &lp_lean_x2dftml_LeanFtml_gallerySize___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_gallerySize___closed__1);
v___x_1236_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_1226_, v___x_1235_);
if (v___x_1236_ == 0)
{
return v___x_1231_;
}
else
{
lean_inc(v_size_1226_);
return v_size_1226_;
}
}
else
{
lean_inc(v_size_1226_);
return v_size_1226_;
}
}
else
{
lean_inc(v_size_1226_);
return v_size_1226_;
}
}
else
{
lean_inc(v_size_1226_);
return v_size_1226_;
}
}
else
{
lean_inc(v_size_1226_);
return v_size_1226_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gallerySize___boxed(lean_object* v_size_1237_){
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = lp_lean_x2dftml_LeanFtml_gallerySize(v_size_1237_);
lean_dec(v_size_1237_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_galleryGetAttrs_spec__0(lean_object* v_x_1239_, lean_object* v_x_1240_){
_start:
{
if (lean_obj_tag(v_x_1240_) == 0)
{
return v_x_1239_;
}
else
{
lean_object* v_head_1241_; lean_object* v_tail_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1285_; 
v_head_1241_ = lean_ctor_get(v_x_1240_, 0);
v_tail_1242_ = lean_ctor_get(v_x_1240_, 1);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_x_1240_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1244_ = v_x_1240_;
v_isShared_1245_ = v_isSharedCheck_1285_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_tail_1242_);
lean_inc(v_head_1241_);
lean_dec(v_x_1240_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1285_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v_fst_1246_; lean_object* v_snd_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1284_; 
v_fst_1246_ = lean_ctor_get(v_x_1239_, 0);
v_snd_1247_ = lean_ctor_get(v_x_1239_, 1);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_x_1239_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1249_ = v_x_1239_;
v_isShared_1250_ = v_isSharedCheck_1284_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_snd_1247_);
lean_inc(v_fst_1246_);
lean_dec(v_x_1239_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1284_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = lean_unsigned_to_nat(34u);
v___x_1252_ = lp_lean_x2dftml_LeanFtml_lastIndexOfByte(v___x_1251_, v_head_1241_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1253_ = lean_box(0);
v___x_1254_ = lean_unsigned_to_nat(1u);
v___x_1255_ = l_List_drop___redArg(v___x_1254_, v_head_1241_);
lean_dec(v_head_1241_);
v___x_1256_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v___x_1255_);
lean_dec(v___x_1255_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 1, v___x_1253_);
v___x_1258_ = v___x_1249_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_fst_1246_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v___x_1253_);
v___x_1258_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1260_; 
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 1, v___x_1253_);
lean_ctor_set(v___x_1244_, 0, v___x_1258_);
v___x_1260_ = v___x_1244_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1258_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v___x_1253_);
v___x_1260_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = l_List_appendTR___redArg(v_snd_1247_, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1256_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v_x_1239_ = v___x_1262_;
v_x_1240_ = v_tail_1242_;
goto _start;
}
}
}
else
{
lean_object* v_val_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1275_; 
v_val_1266_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_val_1266_);
lean_dec_ref_known(v___x_1252_, 1);
v___x_1267_ = lean_unsigned_to_nat(1u);
v___x_1268_ = lean_nat_add(v_val_1266_, v___x_1267_);
v___x_1269_ = l_List_drop___redArg(v___x_1268_, v_head_1241_);
v___x_1270_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v___x_1269_);
lean_dec(v___x_1269_);
v___x_1271_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phpBasename___closed__0));
lean_inc(v_head_1241_);
v___x_1272_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_head_1241_, v_head_1241_, v_val_1266_, v___x_1271_);
lean_dec(v_head_1241_);
v___x_1273_ = lp_lean_x2dftml_LeanFtml_stripSlashesBytes(v___x_1272_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 1, v___x_1273_);
v___x_1275_ = v___x_1249_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_fst_1246_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1276_ = lean_box(0);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 1, v___x_1276_);
lean_ctor_set(v___x_1244_, 0, v___x_1275_);
v___x_1278_ = v___x_1244_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1275_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = l_List_appendTR___redArg(v_snd_1247_, v___x_1278_);
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1270_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v_x_1239_ = v___x_1280_;
v_x_1240_ = v_tail_1242_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryGetAttrs(lean_object* v_text_1292_){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v_pieces_1296_; 
v___x_1293_ = lean_box(0);
v___x_1294_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryGetAttrs___closed__1));
v___x_1295_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_text_1292_);
v_pieces_1296_ = lp_lean_x2dftml_LeanFtml_explodeSeq(v___x_1294_, v___x_1295_);
if (lean_obj_tag(v_pieces_1296_) == 0)
{
return v___x_1293_;
}
else
{
lean_object* v_head_1297_; lean_object* v_tail_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1308_; 
v_head_1297_ = lean_ctor_get(v_pieces_1296_, 0);
v_tail_1298_ = lean_ctor_get(v_pieces_1296_, 1);
v_isSharedCheck_1308_ = !lean_is_exclusive(v_pieces_1296_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1300_ = v_pieces_1296_;
v_isShared_1301_ = v_isSharedCheck_1308_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_tail_1298_);
lean_inc(v_head_1297_);
lean_dec(v_pieces_1296_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1308_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1302_; lean_object* v___x_1304_; 
v___x_1302_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_head_1297_);
lean_dec(v_head_1297_);
if (v_isShared_1301_ == 0)
{
lean_ctor_set_tag(v___x_1300_, 0);
lean_ctor_set(v___x_1300_, 1, v___x_1293_);
lean_ctor_set(v___x_1300_, 0, v___x_1302_);
v___x_1304_ = v___x_1300_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v___x_1293_);
v___x_1304_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
lean_object* v___x_1305_; lean_object* v_snd_1306_; 
v___x_1305_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_galleryGetAttrs_spec__0(v___x_1304_, v_tail_1298_);
v_snd_1306_ = lean_ctor_get(v___x_1305_, 1);
lean_inc(v_snd_1306_);
lean_dec_ref(v___x_1305_);
return v_snd_1306_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryGetAttrs___boxed(lean_object* v_text_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = lp_lean_x2dftml_LeanFtml_galleryGetAttrs(v_text_1309_);
lean_dec(v_text_1309_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_galleryAttrGet_spec__0(lean_object* v_key_1311_, lean_object* v_x_1312_){
_start:
{
if (lean_obj_tag(v_x_1312_) == 0)
{
lean_object* v___x_1313_; 
v___x_1313_ = lean_box(0);
return v___x_1313_;
}
else
{
lean_object* v_head_1314_; lean_object* v_tail_1315_; lean_object* v_fst_1316_; uint8_t v___x_1317_; 
v_head_1314_ = lean_ctor_get(v_x_1312_, 0);
v_tail_1315_ = lean_ctor_get(v_x_1312_, 1);
v_fst_1316_ = lean_ctor_get(v_head_1314_, 0);
v___x_1317_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_fst_1316_, v_key_1311_);
if (v___x_1317_ == 0)
{
v_x_1312_ = v_tail_1315_;
goto _start;
}
else
{
lean_object* v___x_1319_; 
lean_inc(v_head_1314_);
v___x_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1319_, 0, v_head_1314_);
return v___x_1319_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_galleryAttrGet_spec__0___boxed(lean_object* v_key_1320_, lean_object* v_x_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_galleryAttrGet_spec__0(v_key_1320_, v_x_1321_);
lean_dec(v_x_1321_);
lean_dec(v_key_1320_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryAttrGet(lean_object* v_attrs_1323_, lean_object* v_key_1324_){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = l_List_reverse___redArg(v_attrs_1323_);
v___x_1326_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_galleryAttrGet_spec__0(v_key_1324_, v___x_1325_);
lean_dec(v___x_1325_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_box(0);
return v___x_1327_;
}
else
{
lean_object* v_val_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1336_; 
v_val_1328_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1330_ = v___x_1326_;
v_isShared_1331_ = v_isSharedCheck_1336_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_val_1328_);
lean_dec(v___x_1326_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1336_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v_snd_1332_; lean_object* v___x_1334_; 
v_snd_1332_ = lean_ctor_get(v_val_1328_, 1);
lean_inc(v_snd_1332_);
lean_dec(v_val_1328_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v_snd_1332_);
v___x_1334_ = v___x_1330_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_snd_1332_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryAttrGet___boxed(lean_object* v_attrs_1337_, lean_object* v_key_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = lp_lean_x2dftml_LeanFtml_galleryAttrGet(v_attrs_1337_, v_key_1338_);
lean_dec(v_key_1338_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gallerySplitRow_go(lean_object* v_a_1340_, lean_object* v_a_1341_){
_start:
{
if (lean_obj_tag(v_a_1340_) == 0)
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1342_ = l_List_reverse___redArg(v_a_1341_);
v___x_1343_ = lean_box(0);
v___x_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1342_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
return v___x_1344_;
}
else
{
lean_object* v_head_1345_; lean_object* v_tail_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1359_; 
v_head_1345_ = lean_ctor_get(v_a_1340_, 0);
v_tail_1346_ = lean_ctor_get(v_a_1340_, 1);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_a_1340_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1348_ = v_a_1340_;
v_isShared_1349_ = v_isSharedCheck_1359_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_tail_1346_);
lean_inc(v_head_1345_);
lean_dec(v_a_1340_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1359_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1350_ = lean_unsigned_to_nat(32u);
v___x_1351_ = lean_nat_dec_eq(v_head_1345_, v___x_1350_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1353_; 
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 1, v_a_1341_);
v___x_1353_ = v___x_1348_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_head_1345_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_a_1341_);
v___x_1353_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
v_a_1340_ = v_tail_1346_;
v_a_1341_ = v___x_1353_;
goto _start;
}
}
else
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
lean_del_object(v___x_1348_);
lean_dec(v_head_1345_);
v___x_1356_ = l_List_reverse___redArg(v_a_1341_);
v___x_1357_ = lp_lean_x2dftml_LeanFtml_galleryGetAttrs(v_tail_1346_);
lean_dec(v_tail_1346_);
v___x_1358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
return v___x_1358_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gallerySplitRow(lean_object* v_body_1360_){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_box(0);
v___x_1362_ = lp_lean_x2dftml_LeanFtml_gallerySplitRow_go(v_body_1360_, v___x_1361_);
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRowSrc(lean_object* v_row_1369_){
_start:
{
lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__0));
v___x_1371_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_1370_, v_row_1369_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_box(0);
return v___x_1372_;
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v_fst_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1373_ = lean_unsigned_to_nat(2u);
v___x_1374_ = l_List_drop___redArg(v___x_1373_, v_row_1369_);
v___x_1375_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v___x_1374_);
lean_dec(v___x_1374_);
v___x_1376_ = lp_lean_x2dftml_LeanFtml_gallerySplitRow(v___x_1375_);
v_fst_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_fst_1377_);
lean_dec_ref(v___x_1376_);
v___x_1378_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__1));
v___x_1379_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_1378_, v_fst_1377_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_fst_1377_);
return v___x_1380_;
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1381_ = lean_unsigned_to_nat(1u);
v___x_1382_ = l_List_drop___redArg(v___x_1381_, v_fst_1377_);
lean_dec(v_fst_1377_);
v___x_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
return v___x_1383_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRowSrc___boxed(lean_object* v_row_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = lp_lean_x2dftml_LeanFtml_galleryRowSrc(v_row_1384_);
lean_dec(v_row_1384_);
return v_res_1385_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__1(void){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__0));
v___x_1388_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1387_);
return v___x_1388_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__3(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__2));
v___x_1391_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1390_);
return v___x_1391_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__5(void){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__4));
v___x_1394_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1393_);
return v___x_1394_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__7(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__6));
v___x_1397_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1396_);
return v___x_1397_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__9(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__8));
v___x_1400_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1399_);
return v___x_1400_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__11(void){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__10));
v___x_1403_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1402_);
return v___x_1403_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12(void){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = ((lean_object*)(lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_linkLooseNull_spec__0___closed__0));
v___x_1405_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1404_);
return v___x_1405_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14(void){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__13));
v___x_1408_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep(lean_object* v_size_1409_, lean_object* v_st_1410_, lean_object* v_row_1411_){
_start:
{
lean_object* v_snd_1412_; lean_object* v_fst_1413_; lean_object* v_snd_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1534_; 
v_snd_1412_ = lean_ctor_get(v_st_1410_, 1);
lean_inc(v_snd_1412_);
v_fst_1413_ = lean_ctor_get(v_snd_1412_, 0);
v_snd_1414_ = lean_ctor_get(v_snd_1412_, 1);
v_isSharedCheck_1534_ = !lean_is_exclusive(v_snd_1412_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1416_ = v_snd_1412_;
v_isShared_1417_ = v_isSharedCheck_1534_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_snd_1414_);
lean_inc(v_fst_1413_);
lean_dec(v_snd_1412_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1534_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v_target_1445_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v_fst_1450_; lean_object* v_snd_1451_; lean_object* v___y_1457_; lean_object* v_fst_1458_; lean_object* v_fst_1459_; lean_object* v_snd_1460_; lean_object* v___x_1469_; uint8_t v___x_1470_; 
v_target_1445_ = lean_box(0);
v___x_1469_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__0));
v___x_1470_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_1469_, v_row_1411_);
if (v___x_1470_ == 0)
{
lean_del_object(v___x_1416_);
lean_dec(v_snd_1414_);
lean_dec(v_fst_1413_);
lean_dec(v_size_1409_);
return v_st_1410_;
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v_body_1473_; lean_object* v___x_1474_; lean_object* v_fst_1475_; lean_object* v_snd_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1533_; 
v___x_1471_ = lean_unsigned_to_nat(2u);
v___x_1472_ = l_List_drop___redArg(v___x_1471_, v_row_1411_);
v_body_1473_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v___x_1472_);
lean_dec(v___x_1472_);
v___x_1474_ = lp_lean_x2dftml_LeanFtml_gallerySplitRow(v_body_1473_);
v_fst_1475_ = lean_ctor_get(v___x_1474_, 0);
v_snd_1476_ = lean_ctor_get(v___x_1474_, 1);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1478_ = v___x_1474_;
v_isShared_1479_ = v_isSharedCheck_1533_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_snd_1476_);
lean_inc(v_fst_1475_);
lean_dec(v___x_1474_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1533_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___y_1481_; lean_object* v_fst_1482_; lean_object* v_snd_1483_; lean_object* v_fst_1487_; lean_object* v_snd_1488_; lean_object* v___x_1528_; uint8_t v___x_1529_; 
v___x_1528_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__1));
v___x_1529_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_1528_, v_fst_1475_);
if (v___x_1529_ == 0)
{
v_fst_1487_ = v_fst_1475_;
v_snd_1488_ = v_target_1445_;
goto v___jp_1486_;
}
else
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1530_ = lean_unsigned_to_nat(1u);
v___x_1531_ = l_List_drop___redArg(v___x_1530_, v_fst_1475_);
lean_dec(v_fst_1475_);
v___x_1532_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14);
v_fst_1487_ = v___x_1531_;
v_snd_1488_ = v___x_1532_;
goto v___jp_1486_;
}
v___jp_1480_:
{
lean_object* v___x_1484_; uint8_t v___x_1485_; 
v___x_1484_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_gallerySize___closed__1, &lp_lean_x2dftml_LeanFtml_gallerySize___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_gallerySize___closed__1);
v___x_1485_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_size_1409_, v___x_1484_);
if (v___x_1485_ == 0)
{
v___y_1457_ = v___y_1481_;
v_fst_1458_ = v_fst_1482_;
v_fst_1459_ = v_snd_1483_;
v_snd_1460_ = v_snd_1476_;
goto v___jp_1456_;
}
else
{
lean_dec(v_snd_1483_);
lean_inc(v_fst_1482_);
v___y_1457_ = v___y_1481_;
v_fst_1458_ = v_fst_1482_;
v_fst_1459_ = v_fst_1482_;
v_snd_1460_ = v_snd_1476_;
goto v___jp_1456_;
}
}
v___jp_1486_:
{
lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1489_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__35, &lp_lean_x2dftml_LeanFtml_renderImage___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__35);
v___x_1490_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_1489_, v_fst_1487_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1525_; 
v_isSharedCheck_1525_ = !lean_is_exclusive(v_st_1410_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; lean_object* v_unused_1527_; 
v_unused_1526_ = lean_ctor_get(v_st_1410_, 1);
lean_dec(v_unused_1526_);
v_unused_1527_ = lean_ctor_get(v_st_1410_, 0);
lean_dec(v_unused_1527_);
v___x_1492_ = v_st_1410_;
v_isShared_1493_ = v_isSharedCheck_1525_;
goto v_resetjp_1491_;
}
else
{
lean_dec(v_st_1410_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1525_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1494_; uint8_t v___x_1495_; 
v___x_1494_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageHref___closed__1, &lp_lean_x2dftml_LeanFtml_imageHref___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_imageHref___closed__1);
v___x_1495_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_1494_, v_fst_1487_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1496_; uint8_t v___x_1497_; 
lean_del_object(v___x_1492_);
lean_del_object(v___x_1478_);
lean_dec(v_fst_1413_);
v___x_1496_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_imageHref___closed__3));
v___x_1497_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_1496_, v_fst_1487_);
if (v___x_1497_ == 0)
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1498_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__43, &lp_lean_x2dftml_LeanFtml_renderImage___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__43);
lean_inc(v_fst_1487_);
v___x_1499_ = l_List_appendTR___redArg(v___x_1498_, v_fst_1487_);
v___x_1500_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__45, &lp_lean_x2dftml_LeanFtml_renderImage___closed__45_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__45);
v___x_1501_ = l_List_appendTR___redArg(v___x_1500_, v_fst_1487_);
v___x_1502_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33);
v___x_1503_ = l_List_appendTR___redArg(v___x_1501_, v___x_1502_);
lean_inc(v_size_1409_);
v___x_1504_ = l_List_appendTR___redArg(v___x_1503_, v_size_1409_);
v___x_1505_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__47, &lp_lean_x2dftml_LeanFtml_renderImage___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__47);
v___x_1506_ = l_List_appendTR___redArg(v___x_1504_, v___x_1505_);
v___y_1481_ = v_snd_1488_;
v_fst_1482_ = v___x_1499_;
v_snd_1483_ = v___x_1506_;
goto v___jp_1480_;
}
else
{
lean_object* v_stripped_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v_stripped_1507_ = lp_lean_x2dftml_LeanFtml_stripOneLeadingSlash(v_fst_1487_);
lean_dec(v_fst_1487_);
v___x_1508_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__49, &lp_lean_x2dftml_LeanFtml_renderImage___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__49);
lean_inc(v_stripped_1507_);
v___x_1509_ = l_List_appendTR___redArg(v___x_1508_, v_stripped_1507_);
v___x_1510_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__51, &lp_lean_x2dftml_LeanFtml_renderImage___closed__51_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__51);
v___x_1511_ = l_List_appendTR___redArg(v___x_1510_, v_stripped_1507_);
v___x_1512_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33, &lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderFreelink___closed__33);
v___x_1513_ = l_List_appendTR___redArg(v___x_1511_, v___x_1512_);
lean_inc(v_size_1409_);
v___x_1514_ = l_List_appendTR___redArg(v___x_1513_, v_size_1409_);
v___x_1515_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__47, &lp_lean_x2dftml_LeanFtml_renderImage___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__47);
v___x_1516_ = l_List_appendTR___redArg(v___x_1514_, v___x_1515_);
v___y_1481_ = v_snd_1488_;
v_fst_1482_ = v___x_1509_;
v_snd_1483_ = v___x_1516_;
goto v___jp_1480_;
}
}
else
{
lean_object* v___x_1517_; lean_object* v___x_1519_; 
v___x_1517_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12);
lean_inc(v_fst_1487_);
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 1, v_fst_1487_);
lean_ctor_set(v___x_1478_, 0, v___x_1517_);
v___x_1519_ = v___x_1478_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v_fst_1487_);
v___x_1519_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
lean_object* v___x_1521_; 
if (v_isShared_1493_ == 0)
{
lean_ctor_set_tag(v___x_1492_, 1);
lean_ctor_set(v___x_1492_, 1, v_target_1445_);
lean_ctor_set(v___x_1492_, 0, v___x_1519_);
v___x_1521_ = v___x_1492_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v_target_1445_);
v___x_1521_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_List_appendTR___redArg(v_snd_1476_, v___x_1521_);
v___y_1457_ = v_snd_1488_;
v_fst_1458_ = v_fst_1413_;
v_fst_1459_ = v_fst_1487_;
v_snd_1460_ = v___x_1522_;
goto v___jp_1456_;
}
}
}
}
}
else
{
lean_dec(v_snd_1488_);
lean_dec(v_fst_1487_);
lean_del_object(v___x_1478_);
lean_dec(v_snd_1476_);
lean_del_object(v___x_1416_);
lean_dec(v_snd_1414_);
lean_dec(v_fst_1413_);
lean_dec(v_size_1409_);
return v_st_1410_;
}
}
}
}
v___jp_1418_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__1, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__1);
v___x_1425_ = l_List_appendTR___redArg(v_snd_1414_, v___x_1424_);
v___x_1426_ = l_List_appendTR___redArg(v___x_1425_, v_size_1409_);
v___x_1427_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__3, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__3);
v___x_1428_ = l_List_appendTR___redArg(v___x_1426_, v___x_1427_);
v___x_1429_ = l_List_appendTR___redArg(v___x_1428_, v___y_1419_);
v___x_1430_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__5, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__5);
v___x_1431_ = l_List_appendTR___redArg(v___x_1429_, v___x_1430_);
lean_inc(v___y_1422_);
v___x_1432_ = l_List_appendTR___redArg(v___x_1431_, v___y_1422_);
v___x_1433_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__7, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__7);
v___x_1434_ = l_List_appendTR___redArg(v___x_1432_, v___x_1433_);
v___x_1435_ = l_List_appendTR___redArg(v___x_1434_, v___y_1420_);
v___x_1436_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__9, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__9);
v___x_1437_ = l_List_appendTR___redArg(v___x_1435_, v___x_1436_);
v___x_1438_ = l_List_appendTR___redArg(v___x_1437_, v___y_1423_);
v___x_1439_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__11, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__11);
v___x_1440_ = l_List_appendTR___redArg(v___x_1438_, v___x_1439_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 1, v___x_1440_);
lean_ctor_set(v___x_1416_, 0, v___y_1421_);
v___x_1442_ = v___x_1416_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___y_1421_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1443_; 
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___y_1422_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
return v___x_1443_;
}
}
v___jp_1446_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5, &lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_imageAttrEmit___closed__5);
v___x_1453_ = lp_lean_x2dftml_LeanFtml_galleryAttrGet(v___y_1447_, v___x_1452_);
if (lean_obj_tag(v___x_1453_) == 0)
{
v___y_1419_ = v_fst_1450_;
v___y_1420_ = v___y_1448_;
v___y_1421_ = v___y_1449_;
v___y_1422_ = v_snd_1451_;
v___y_1423_ = v_target_1445_;
goto v___jp_1418_;
}
else
{
lean_object* v_val_1454_; lean_object* v___x_1455_; 
v_val_1454_ = lean_ctor_get(v___x_1453_, 0);
lean_inc(v_val_1454_);
lean_dec_ref_known(v___x_1453_, 1);
v___x_1455_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_val_1454_);
v___y_1419_ = v_fst_1450_;
v___y_1420_ = v___y_1448_;
v___y_1421_ = v___y_1449_;
v___y_1422_ = v_snd_1451_;
v___y_1423_ = v___x_1455_;
goto v___jp_1418_;
}
}
v___jp_1456_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1461_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__12);
lean_inc(v_snd_1460_);
v___x_1462_ = lp_lean_x2dftml_LeanFtml_galleryAttrGet(v_snd_1460_, v___x_1461_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_inc(v_fst_1458_);
v___y_1447_ = v_snd_1460_;
v___y_1448_ = v_fst_1459_;
v___y_1449_ = v_fst_1458_;
v_fst_1450_ = v_fst_1458_;
v_snd_1451_ = v___y_1457_;
goto v___jp_1446_;
}
else
{
lean_object* v_val_1463_; lean_object* v___x_1464_; uint8_t v___x_1465_; 
v_val_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v___x_1464_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_galleryRowSrc___closed__1));
v___x_1465_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_1464_, v_val_1463_);
if (v___x_1465_ == 0)
{
v___y_1447_ = v_snd_1460_;
v___y_1448_ = v_fst_1459_;
v___y_1449_ = v_fst_1458_;
v_fst_1450_ = v_val_1463_;
v_snd_1451_ = v___y_1457_;
goto v___jp_1446_;
}
else
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
lean_dec(v___y_1457_);
v___x_1466_ = lean_unsigned_to_nat(1u);
v___x_1467_ = l_List_drop___redArg(v___x_1466_, v_val_1463_);
lean_dec(v_val_1463_);
v___x_1468_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14, &lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_galleryRowStep___closed__14);
v___y_1447_ = v_snd_1460_;
v___y_1448_ = v_fst_1459_;
v___y_1449_ = v_fst_1458_;
v_fst_1450_ = v___x_1467_;
v_snd_1451_ = v___x_1468_;
goto v___jp_1446_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_galleryRowStep___boxed(lean_object* v_size_1535_, lean_object* v_st_1536_, lean_object* v_row_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = lp_lean_x2dftml_LeanFtml_galleryRowStep(v_size_1535_, v_st_1536_, v_row_1537_);
lean_dec(v_row_1537_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderGallery_spec__0(lean_object* v_size_1539_, lean_object* v_x_1540_, lean_object* v_x_1541_){
_start:
{
if (lean_obj_tag(v_x_1541_) == 0)
{
lean_dec(v_size_1539_);
return v_x_1540_;
}
else
{
lean_object* v_head_1542_; lean_object* v_tail_1543_; lean_object* v___x_1544_; 
v_head_1542_ = lean_ctor_get(v_x_1541_, 0);
v_tail_1543_ = lean_ctor_get(v_x_1541_, 1);
lean_inc(v_size_1539_);
v___x_1544_ = lp_lean_x2dftml_LeanFtml_galleryRowStep(v_size_1539_, v_x_1540_, v_head_1542_);
v_x_1540_ = v___x_1544_;
v_x_1541_ = v_tail_1543_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderGallery_spec__0___boxed(lean_object* v_size_1546_, lean_object* v_x_1547_, lean_object* v_x_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderGallery_spec__0(v_size_1546_, v_x_1547_, v_x_1548_);
lean_dec(v_x_1548_);
return v_res_1549_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__1(void){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderGallery___closed__0));
v___x_1552_ = l_String_toListImpl(v___x_1551_);
return v___x_1552_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__3(void){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderGallery___closed__2));
v___x_1555_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1554_);
return v___x_1555_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__4(void){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderImage___closed__53));
v___x_1557_ = l_String_toListImpl(v___x_1556_);
return v___x_1557_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__6(void){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1559_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderGallery___closed__5));
v___x_1560_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1559_);
return v___x_1560_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__7(void){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1561_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderGallery___closed__6, &lp_lean_x2dftml_LeanFtml_renderGallery___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__6);
v___x_1562_ = lean_box(0);
v___x_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1562_);
lean_ctor_set(v___x_1563_, 1, v___x_1561_);
return v___x_1563_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__8(void){
_start:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1564_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderGallery___closed__7, &lp_lean_x2dftml_LeanFtml_renderGallery___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__7);
v___x_1565_ = lean_box(0);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
lean_ctor_set(v___x_1566_, 1, v___x_1564_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderGallery(lean_object* v_opts_1567_){
_start:
{
lean_object* v___x_1568_; lean_object* v_sources_1569_; uint8_t v___x_1570_; 
v___x_1568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderGallery___closed__1, &lp_lean_x2dftml_LeanFtml_renderGallery___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__1);
v_sources_1569_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_1567_, v___x_1568_);
v___x_1570_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_sources_1569_);
if (v___x_1570_ == 0)
{
lean_object* v___x_1571_; 
lean_dec(v_sources_1569_);
v___x_1571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderGallery___closed__3, &lp_lean_x2dftml_LeanFtml_renderGallery___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__3);
return v___x_1571_;
}
else
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v_size_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v_snd_1579_; lean_object* v_snd_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1572_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderGallery___closed__4, &lp_lean_x2dftml_LeanFtml_renderGallery___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__4);
v___x_1573_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_1567_, v___x_1572_);
v_size_1574_ = lp_lean_x2dftml_LeanFtml_gallerySize(v___x_1573_);
lean_dec(v___x_1573_);
v___x_1575_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderGallery___closed__8, &lp_lean_x2dftml_LeanFtml_renderGallery___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderGallery___closed__8);
v___x_1576_ = lean_unsigned_to_nat(10u);
v___x_1577_ = lp_lean_x2dftml_LeanFtml_explodeByte(v___x_1576_, v_sources_1569_);
v___x_1578_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderGallery_spec__0(v_size_1574_, v___x_1575_, v___x_1577_);
lean_dec(v___x_1577_);
v_snd_1579_ = lean_ctor_get(v___x_1578_, 1);
lean_inc(v_snd_1579_);
lean_dec_ref(v___x_1578_);
v_snd_1580_ = lean_ctor_get(v_snd_1579_, 1);
lean_inc(v_snd_1580_);
lean_dec(v_snd_1579_);
v___x_1581_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderImage___closed__3, &lp_lean_x2dftml_LeanFtml_renderImage___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderImage___closed__3);
v___x_1582_ = l_List_appendTR___redArg(v_snd_1580_, v___x_1581_);
return v___x_1582_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderGallery___boxed(lean_object* v_opts_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = lp_lean_x2dftml_LeanFtml_renderGallery(v_opts_1583_);
lean_dec(v_opts_1583_);
return v_res_1584_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RenderCore(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FinalRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeEmbedRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ServingRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_RenderCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_FinalRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_CodeEmbedRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_moduleAvailableNames = _init_lp_lean_x2dftml_LeanFtml_moduleAvailableNames();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_moduleAvailableNames);
lp_lean_x2dftml_LeanFtml_freelinkExistingPages = _init_lp_lean_x2dftml_LeanFtml_freelinkExistingPages();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_freelinkExistingPages);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
