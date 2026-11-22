// Lean compiler output
// Module: LeanFtml.CodeEmbedRules
// Imports: public import Init public meta import Init public import LeanFtml.RenderCore public import LeanFtml.InlineSimpleRules public import LeanFtml.Pcre public import LeanFtml.EmbedPatterns
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
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_pcreMatch(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_parsePcre(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_pcreReplaceAll(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_byteMatchCI(uint8_t, lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_pcreIsWsByte(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWrdByte(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_asciiLowerBytes(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_embedPatternStrings;
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_phpTrimSet(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpTrimSet___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_rtrimBytesP_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimBytesP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpTrimBytes_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpTrimBytes_spec__0___boxed(lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_phpTrimBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_phpTrimSet___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_phpTrimBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_phpTrimBytes___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpTrimBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpTrimBytes___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crlfToLf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropCodeBlankLines(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nbspToSpace(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___lam__0___boxed(lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeAttrType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeAttrType___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeAttrType___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeAttrType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeAttrType___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeAttrType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeAttrType___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeAttrType___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeAttrType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeAttrType___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeAttrType(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeAttrType___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeType(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeType___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "php"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cpp"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "css"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "html"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "xhtml"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "diff"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dtd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "java"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "javascript"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sql"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "perl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "python"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ruby"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeLangs___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xml"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeLangs___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__27;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__28;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__29;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__30;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__31;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__32;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__33;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__34;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__35;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__36;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__37;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__38;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__39;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__40;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeLangs___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeLangs___closed__41;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeLangs;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "[[UNMIRRORED:Text_Highlighter:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__5;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__6_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBoundaryName_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeBoundaryName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Text_Highlighter:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryName___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBoundaryName___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryName(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryName___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__0_value)}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__1_value)}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__2 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__2_value)}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__3 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCode___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__1;
static const lean_array_object lp_lean_x2dftml_LeanFtml_renderCode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCode___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderCode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "<div class=\"code\">\n<pre><code>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCode___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCode___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCode___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderCode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "</code></pre></div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCode___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCode___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderCode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "<div class=\"code\"></div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCode___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCode___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCode___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCode___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCode___closed__11;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCode(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCode___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_embedPatterns_spec__0(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_embedPatterns___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedPatterns___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedPatterns___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedPatterns___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedPatterns___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedPatterns;
static const lean_string_object lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "/language=\"JavaScript[^\"]*\"/i"};
static const lean_object* lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_languageStripPattern;
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = ";<[^>]*\\s*on[a-z]+\\s*=[^>]+>;si"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedEventPattern;
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "<div class=\"error-block\">Sorry, no match for the embedded content.</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedError___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedError___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedError___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedError___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedError;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_srcValueAt_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_srcValueAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_srcValueAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_srcValueAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_findSrcValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_findSrcValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSrcValue(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSrcValue___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrMatchHere(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_attrValues___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "src"};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrValues___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrValues___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_attrValues___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_attrValues___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrValues(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_bytesContainsSub_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_bytesContainsSub_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesContainsSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesContainsSub___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "javascript:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "vbscript:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_srcHasBadScheme(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_srcHasBadScheme___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_valueHasBadScheme(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_valueHasBadScheme___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_renderEmbedWith_finishEmbed_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_renderEmbedWith_finishEmbed_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbedWith_finishEmbed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_renderEmbedWith_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbedWith(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbedWith___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbed___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_phpTrimSet(lean_object* v_b_1_){
_start:
{
lean_object* v___x_2_; uint8_t v___x_3_; 
v___x_2_ = lean_unsigned_to_nat(32u);
v___x_3_ = lean_nat_dec_eq(v_b_1_, v___x_2_);
if (v___x_3_ == 0)
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_unsigned_to_nat(9u);
v___x_5_ = lean_nat_dec_eq(v_b_1_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = lean_unsigned_to_nat(10u);
v___x_7_ = lean_nat_dec_eq(v_b_1_, v___x_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_8_ = lean_unsigned_to_nat(13u);
v___x_9_ = lean_nat_dec_eq(v_b_1_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_nat_dec_eq(v_b_1_, v___x_10_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; uint8_t v___x_13_; 
v___x_12_ = lean_unsigned_to_nat(11u);
v___x_13_ = lean_nat_dec_eq(v_b_1_, v___x_12_);
return v___x_13_;
}
else
{
return v___x_11_;
}
}
else
{
return v___x_9_;
}
}
else
{
return v___x_7_;
}
}
else
{
return v___x_5_;
}
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpTrimSet___boxed(lean_object* v_b_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = lp_lean_x2dftml_LeanFtml_phpTrimSet(v_b_14_);
lean_dec(v_b_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_rtrimBytesP_spec__0(lean_object* v_p_17_, lean_object* v_x_18_){
_start:
{
if (lean_obj_tag(v_x_18_) == 0)
{
lean_dec_ref(v_p_17_);
return v_x_18_;
}
else
{
lean_object* v_head_19_; lean_object* v_tail_20_; lean_object* v___x_21_; uint8_t v___x_22_; 
v_head_19_ = lean_ctor_get(v_x_18_, 0);
v_tail_20_ = lean_ctor_get(v_x_18_, 1);
lean_inc_ref(v_p_17_);
lean_inc(v_head_19_);
v___x_21_ = lean_apply_1(v_p_17_, v_head_19_);
v___x_22_ = lean_unbox(v___x_21_);
if (v___x_22_ == 0)
{
lean_dec_ref(v_p_17_);
return v_x_18_;
}
else
{
lean_inc(v_tail_20_);
lean_dec_ref_known(v_x_18_, 2);
v_x_18_ = v_tail_20_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rtrimBytesP(lean_object* v_p_24_, lean_object* v_bs_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = l_List_reverse___redArg(v_bs_25_);
v___x_27_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_rtrimBytesP_spec__0(v_p_24_, v___x_26_);
v___x_28_ = l_List_reverse___redArg(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpTrimBytes_spec__0(lean_object* v_x_29_){
_start:
{
if (lean_obj_tag(v_x_29_) == 0)
{
return v_x_29_;
}
else
{
lean_object* v_head_30_; lean_object* v_tail_31_; uint8_t v___x_32_; 
v_head_30_ = lean_ctor_get(v_x_29_, 0);
v_tail_31_ = lean_ctor_get(v_x_29_, 1);
v___x_32_ = lp_lean_x2dftml_LeanFtml_phpTrimSet(v_head_30_);
if (v___x_32_ == 0)
{
lean_inc_ref(v_x_29_);
return v_x_29_;
}
else
{
v_x_29_ = v_tail_31_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpTrimBytes_spec__0___boxed(lean_object* v_x_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpTrimBytes_spec__0(v_x_34_);
lean_dec(v_x_34_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpTrimBytes(lean_object* v_bs_37_){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phpTrimBytes___closed__0));
v___x_39_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_phpTrimBytes_spec__0(v_bs_37_);
v___x_40_ = lp_lean_x2dftml_LeanFtml_rtrimBytesP(v___x_38_, v___x_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpTrimBytes___boxed(lean_object* v_bs_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_bs_41_);
lean_dec(v_bs_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_crlfToLf(lean_object* v_x_43_){
_start:
{
if (lean_obj_tag(v_x_43_) == 0)
{
return v_x_43_;
}
else
{
lean_object* v_head_44_; lean_object* v_tail_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_71_; 
v_head_44_ = lean_ctor_get(v_x_43_, 0);
v_tail_45_ = lean_ctor_get(v_x_43_, 1);
v_isSharedCheck_71_ = !lean_is_exclusive(v_x_43_);
if (v_isSharedCheck_71_ == 0)
{
v___x_47_ = v_x_43_;
v_isShared_48_ = v_isSharedCheck_71_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_tail_45_);
lean_inc(v_head_44_);
lean_dec(v_x_43_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_71_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v_b_50_; lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = lean_unsigned_to_nat(13u);
v___x_56_ = lean_nat_dec_eq(v_head_44_, v___x_55_);
if (v___x_56_ == 0)
{
v_b_50_ = v_head_44_;
goto v___jp_49_;
}
else
{
lean_dec(v_head_44_);
if (lean_obj_tag(v_tail_45_) == 1)
{
lean_object* v_head_57_; lean_object* v_tail_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v_head_57_ = lean_ctor_get(v_tail_45_, 0);
v_tail_58_ = lean_ctor_get(v_tail_45_, 1);
v___x_59_ = lean_unsigned_to_nat(10u);
v___x_60_ = lean_nat_dec_eq(v_head_57_, v___x_59_);
if (v___x_60_ == 0)
{
v_b_50_ = v___x_55_;
goto v___jp_49_;
}
else
{
lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_68_; 
lean_inc(v_tail_58_);
lean_del_object(v___x_47_);
v_isSharedCheck_68_ = !lean_is_exclusive(v_tail_45_);
if (v_isSharedCheck_68_ == 0)
{
lean_object* v_unused_69_; lean_object* v_unused_70_; 
v_unused_69_ = lean_ctor_get(v_tail_45_, 1);
lean_dec(v_unused_69_);
v_unused_70_ = lean_ctor_get(v_tail_45_, 0);
lean_dec(v_unused_70_);
v___x_62_ = v_tail_45_;
v_isShared_63_ = v_isSharedCheck_68_;
goto v_resetjp_61_;
}
else
{
lean_dec(v_tail_45_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_68_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_64_ = lp_lean_x2dftml_LeanFtml_crlfToLf(v_tail_58_);
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 1, v___x_64_);
lean_ctor_set(v___x_62_, 0, v___x_59_);
v___x_66_ = v___x_62_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_59_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v___x_64_);
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
else
{
v_b_50_ = v___x_55_;
goto v___jp_49_;
}
}
v___jp_49_:
{
lean_object* v___x_51_; lean_object* v___x_53_; 
v___x_51_ = lp_lean_x2dftml_LeanFtml_crlfToLf(v_tail_45_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 1, v___x_51_);
lean_ctor_set(v___x_47_, 0, v_b_50_);
v___x_53_ = v___x_47_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_b_50_);
lean_ctor_set(v_reuseFailAlloc_54_, 1, v___x_51_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropCodeBlankLines(lean_object* v_x_72_, lean_object* v_x_73_){
_start:
{
lean_object* v_zero_74_; uint8_t v_isZero_75_; 
v_zero_74_ = lean_unsigned_to_nat(0u);
v_isZero_75_ = lean_nat_dec_eq(v_x_73_, v_zero_74_);
if (v_isZero_75_ == 1)
{
lean_dec(v_x_73_);
return v_x_72_;
}
else
{
lean_object* v_t_76_; 
v_t_76_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_x_72_);
if (lean_obj_tag(v_t_76_) == 1)
{
lean_object* v_head_77_; lean_object* v_tail_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v_head_77_ = lean_ctor_get(v_t_76_, 0);
lean_inc(v_head_77_);
v_tail_78_ = lean_ctor_get(v_t_76_, 1);
lean_inc(v_tail_78_);
lean_dec_ref_known(v_t_76_, 2);
v___x_79_ = lean_unsigned_to_nat(10u);
v___x_80_ = lean_nat_dec_eq(v_head_77_, v___x_79_);
lean_dec(v_head_77_);
if (v___x_80_ == 0)
{
lean_dec(v_tail_78_);
lean_dec(v_x_73_);
return v_x_72_;
}
else
{
lean_object* v_one_81_; lean_object* v_n_82_; 
lean_dec(v_x_72_);
v_one_81_ = lean_unsigned_to_nat(1u);
v_n_82_ = lean_nat_sub(v_x_73_, v_one_81_);
lean_dec(v_x_73_);
v_x_72_ = v_tail_78_;
v_x_73_ = v_n_82_;
goto _start;
}
}
else
{
lean_dec(v_t_76_);
lean_dec(v_x_73_);
return v_x_72_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_nbspToSpace(lean_object* v_x_84_){
_start:
{
if (lean_obj_tag(v_x_84_) == 0)
{
return v_x_84_;
}
else
{
lean_object* v_head_85_; lean_object* v_tail_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_113_; 
v_head_85_ = lean_ctor_get(v_x_84_, 0);
v_tail_86_ = lean_ctor_get(v_x_84_, 1);
v_isSharedCheck_113_ = !lean_is_exclusive(v_x_84_);
if (v_isSharedCheck_113_ == 0)
{
v___x_88_ = v_x_84_;
v_isShared_89_ = v_isSharedCheck_113_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_tail_86_);
lean_inc(v_head_85_);
lean_dec(v_x_84_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_113_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v_b_91_; lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_96_ = lean_unsigned_to_nat(194u);
v___x_97_ = lean_nat_dec_eq(v_head_85_, v___x_96_);
if (v___x_97_ == 0)
{
v_b_91_ = v_head_85_;
goto v___jp_90_;
}
else
{
lean_dec(v_head_85_);
if (lean_obj_tag(v_tail_86_) == 1)
{
lean_object* v_head_98_; lean_object* v_tail_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v_head_98_ = lean_ctor_get(v_tail_86_, 0);
v_tail_99_ = lean_ctor_get(v_tail_86_, 1);
v___x_100_ = lean_unsigned_to_nat(160u);
v___x_101_ = lean_nat_dec_eq(v_head_98_, v___x_100_);
if (v___x_101_ == 0)
{
v_b_91_ = v___x_96_;
goto v___jp_90_;
}
else
{
lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_110_; 
lean_inc(v_tail_99_);
lean_del_object(v___x_88_);
v_isSharedCheck_110_ = !lean_is_exclusive(v_tail_86_);
if (v_isSharedCheck_110_ == 0)
{
lean_object* v_unused_111_; lean_object* v_unused_112_; 
v_unused_111_ = lean_ctor_get(v_tail_86_, 1);
lean_dec(v_unused_111_);
v_unused_112_ = lean_ctor_get(v_tail_86_, 0);
lean_dec(v_unused_112_);
v___x_103_ = v_tail_86_;
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
else
{
lean_dec(v_tail_86_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_105_ = lean_unsigned_to_nat(32u);
v___x_106_ = lp_lean_x2dftml_LeanFtml_nbspToSpace(v_tail_99_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___x_106_);
lean_ctor_set(v___x_103_, 0, v___x_105_);
v___x_108_ = v___x_103_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_105_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
}
else
{
v_b_91_ = v___x_96_;
goto v___jp_90_;
}
}
v___jp_90_:
{
lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_92_ = lp_lean_x2dftml_LeanFtml_nbspToSpace(v_tail_86_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 1, v___x_92_);
lean_ctor_set(v___x_88_, 0, v_b_91_);
v___x_94_ = v___x_88_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_b_91_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v___x_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___lam__0(lean_object* v_b_114_){
_start:
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(32u);
v___x_116_ = lean_nat_dec_eq(v_b_114_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(9u);
v___x_118_ = lean_nat_dec_eq(v_b_114_, v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(10u);
v___x_120_ = lean_nat_dec_eq(v_b_114_, v___x_119_);
return v___x_120_;
}
else
{
return v___x_118_;
}
}
else
{
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___lam__0___boxed(lean_object* v_b_121_){
_start:
{
uint8_t v_res_122_; lean_object* v_r_123_; 
v_res_122_ = lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___lam__0(v_b_121_);
lean_dec(v_b_121_);
v_r_123_ = lean_box(v_res_122_);
return v_r_123_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody(lean_object* v_body_125_){
_start:
{
lean_object* v___f_126_; lean_object* v_b1_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v_b2_131_; lean_object* v_b3_132_; lean_object* v___x_133_; 
v___f_126_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody___closed__0));
v_b1_127_ = lp_lean_x2dftml_LeanFtml_crlfToLf(v_body_125_);
v___x_128_ = l_List_lengthTR___redArg(v_b1_127_);
v___x_129_ = lean_unsigned_to_nat(1u);
v___x_130_ = lean_nat_add(v___x_128_, v___x_129_);
lean_dec(v___x_128_);
v_b2_131_ = lp_lean_x2dftml_LeanFtml_dropCodeBlankLines(v_b1_127_, v___x_130_);
v_b3_132_ = lp_lean_x2dftml_LeanFtml_rtrimBytesP(v___f_126_, v_b2_131_);
v___x_133_ = lp_lean_x2dftml_LeanFtml_nbspToSpace(v_b3_132_);
return v___x_133_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeAttrType___closed__1(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeAttrType___closed__0));
v___x_136_ = l_String_toListImpl(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeAttrType___closed__3(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeAttrType___closed__2));
v___x_139_ = l_String_toListImpl(v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeAttrType(lean_object* v_opts_140_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeAttrType___closed__1, &lp_lean_x2dftml_LeanFtml_codeAttrType___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_codeAttrType___closed__1);
v___x_142_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_140_, v___x_141_);
if (lean_obj_tag(v___x_142_) == 1)
{
lean_object* v_val_143_; 
v_val_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_val_143_);
lean_dec_ref_known(v___x_142_, 1);
if (lean_obj_tag(v_val_143_) == 4)
{
lean_object* v_a_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v_a_144_ = lean_ctor_get(v_val_143_, 0);
lean_inc(v_a_144_);
lean_dec_ref_known(v_val_143_, 1);
v___x_145_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeAttrType___closed__3, &lp_lean_x2dftml_LeanFtml_codeAttrType___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_codeAttrType___closed__3);
v___x_146_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_a_144_, v___x_145_);
lean_dec(v_a_144_);
return v___x_146_;
}
else
{
lean_object* v___x_147_; 
lean_dec(v_val_143_);
v___x_147_ = lean_box(0);
return v___x_147_;
}
}
else
{
lean_object* v___x_148_; 
lean_dec(v___x_142_);
v___x_148_ = lean_box(0);
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeAttrType___boxed(lean_object* v_opts_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = lp_lean_x2dftml_LeanFtml_codeAttrType(v_opts_149_);
lean_dec(v_opts_149_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeType(lean_object* v_opts_151_){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lp_lean_x2dftml_LeanFtml_codeAttrType(v_opts_151_);
v___x_153_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v___x_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeType___boxed(lean_object* v_opts_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = lp_lean_x2dftml_LeanFtml_codeType(v_opts_154_);
lean_dec(v_opts_154_);
return v_res_155_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__1(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__0));
v___x_158_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_157_);
return v___x_158_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__3(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__2));
v___x_161_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_160_);
return v___x_161_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__5(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__4));
v___x_164_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_163_);
return v___x_164_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__7(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__6));
v___x_167_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_166_);
return v___x_167_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__9(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__8));
v___x_170_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__11(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__10));
v___x_173_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_172_);
return v___x_173_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__13(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__12));
v___x_176_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_175_);
return v___x_176_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__15(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__14));
v___x_179_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_178_);
return v___x_179_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__17(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__16));
v___x_182_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__19(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__18));
v___x_185_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_184_);
return v___x_185_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__21(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__20));
v___x_188_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_187_);
return v___x_188_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__23(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__22));
v___x_191_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__25(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__24));
v___x_194_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__27(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeLangs___closed__26));
v___x_197_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_196_);
return v___x_197_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__28(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = lean_box(0);
v___x_199_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__27, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__27);
v___x_200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_198_);
return v___x_200_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__29(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__28, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__28_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__28);
v___x_202_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__25, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__25);
v___x_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___x_201_);
return v___x_203_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__30(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_204_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__29, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__29);
v___x_205_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__23, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__23);
v___x_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v___x_204_);
return v___x_206_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__31(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__30, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__30_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__30);
v___x_208_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__21, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__21);
v___x_209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
lean_ctor_set(v___x_209_, 1, v___x_207_);
return v___x_209_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__32(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_210_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__31, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__31);
v___x_211_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__19, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__19);
v___x_212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
lean_ctor_set(v___x_212_, 1, v___x_210_);
return v___x_212_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__33(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__32, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__32);
v___x_214_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__17, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__17);
v___x_215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___x_213_);
return v___x_215_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__34(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_216_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__33, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__33);
v___x_217_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__15, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__15);
v___x_218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___x_216_);
return v___x_218_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__35(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_219_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__34, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__34);
v___x_220_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__13, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__13);
v___x_221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v___x_219_);
return v___x_221_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__36(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_222_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__35, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__35);
v___x_223_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__11, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__11);
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v___x_222_);
return v___x_224_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__37(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__36, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__36);
v___x_226_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__9, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__9);
v___x_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
return v___x_227_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__38(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__37, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__37);
v___x_229_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__7, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__7);
v___x_230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
lean_ctor_set(v___x_230_, 1, v___x_228_);
return v___x_230_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__39(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_231_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__38, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__38);
v___x_232_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__5, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__5);
v___x_233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v___x_231_);
return v___x_233_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__40(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_234_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__39, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__39);
v___x_235_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__3, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__3);
v___x_236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v___x_234_);
return v___x_236_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__41(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_237_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__40, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__40_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__40);
v___x_238_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__1, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__1);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set(v___x_239_, 1, v___x_237_);
return v___x_239_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeLangs(void){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeLangs___closed__41, &lp_lean_x2dftml_LeanFtml_codeLangs___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_codeLangs___closed__41);
return v___x_240_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__2(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__1));
v___x_246_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__3(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__2, &lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__2);
v___x_248_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__0));
v___x_249_ = l_List_appendTR___redArg(v___x_248_, v___x_247_);
return v___x_249_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__5(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__4));
v___x_252_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryMarker(lean_object* v_ty_256_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_257_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__3, &lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__3);
v___x_258_ = l_List_appendTR___redArg(v___x_257_, v_ty_256_);
v___x_259_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__5, &lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__5);
v___x_260_ = l_List_appendTR___redArg(v___x_258_, v___x_259_);
v___x_261_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__6));
v___x_262_ = l_List_appendTR___redArg(v___x_260_, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(lean_object* v_a_263_, lean_object* v_x_264_){
_start:
{
if (lean_obj_tag(v_x_264_) == 0)
{
uint8_t v___x_265_; 
v___x_265_ = 0;
return v___x_265_;
}
else
{
lean_object* v_head_266_; lean_object* v_tail_267_; uint8_t v___x_268_; 
v_head_266_ = lean_ctor_get(v_x_264_, 0);
v_tail_267_ = lean_ctor_get(v_x_264_, 1);
v___x_268_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_a_263_, v_head_266_);
if (v___x_268_ == 0)
{
v_x_264_ = v_tail_267_;
goto _start;
}
else
{
return v___x_268_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0___boxed(lean_object* v_a_270_, lean_object* v_x_271_){
_start:
{
uint8_t v_res_272_; lean_object* v_r_273_; 
v_res_272_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(v_a_270_, v_x_271_);
lean_dec(v_x_271_);
lean_dec(v_a_270_);
v_r_273_ = lean_box(v_res_272_);
return v_r_273_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBoundaryName_spec__1(lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
if (lean_obj_tag(v_a_274_) == 0)
{
lean_object* v___x_276_; 
v___x_276_ = l_List_reverse___redArg(v_a_275_);
return v___x_276_;
}
else
{
lean_object* v_head_277_; lean_object* v_tail_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_288_; 
v_head_277_ = lean_ctor_get(v_a_274_, 0);
v_tail_278_ = lean_ctor_get(v_a_274_, 1);
v_isSharedCheck_288_ = !lean_is_exclusive(v_a_274_);
if (v_isSharedCheck_288_ == 0)
{
v___x_280_ = v_a_274_;
v_isShared_281_ = v_isSharedCheck_288_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_tail_278_);
lean_inc(v_head_277_);
lean_dec(v_a_274_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_288_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
uint32_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_282_ = l_Char_ofNat(v_head_277_);
lean_dec(v_head_277_);
v___x_283_ = lean_box_uint32(v___x_282_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 1, v_a_275_);
lean_ctor_set(v___x_280_, 0, v___x_283_);
v___x_285_ = v___x_280_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_a_275_);
v___x_285_ = v_reuseFailAlloc_287_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
v_a_274_ = v_tail_278_;
v_a_275_ = v___x_285_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryName(lean_object* v_opts_290_){
_start:
{
lean_object* v_ty_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_ty_291_ = lp_lean_x2dftml_LeanFtml_codeType(v_opts_290_);
v___x_292_ = lp_lean_x2dftml_LeanFtml_codeLangs;
v___x_293_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(v_ty_291_, v___x_292_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; 
lean_dec(v_ty_291_);
v___x_294_ = lean_box(0);
return v___x_294_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_295_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryName___closed__0));
v___x_296_ = lean_box(0);
v___x_297_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_codeBoundaryName_spec__1(v_ty_291_, v___x_296_);
v___x_298_ = lean_string_mk(v___x_297_);
v___x_299_ = lean_string_append(v___x_295_, v___x_298_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryName___boxed(lean_object* v_opts_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = lp_lean_x2dftml_LeanFtml_codeBoundaryName(v_opts_301_);
lean_dec(v_opts_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0(lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
if (lean_obj_tag(v_a_315_) == 0)
{
lean_object* v___x_317_; 
v___x_317_ = lean_array_to_list(v_a_316_);
return v___x_317_;
}
else
{
lean_object* v_head_318_; lean_object* v_tail_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_334_; 
v_head_318_ = lean_ctor_get(v_a_315_, 0);
v_tail_319_ = lean_ctor_get(v_a_315_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v_a_315_);
if (v_isSharedCheck_334_ == 0)
{
v___x_321_ = v_a_315_;
v_isShared_322_ = v_isSharedCheck_334_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_tail_319_);
lean_inc(v_head_318_);
lean_dec(v_a_315_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_334_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___y_324_; lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_327_ = lean_box(0);
v___x_328_ = lean_unsigned_to_nat(9u);
v___x_329_ = lean_nat_dec_eq(v_head_318_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_331_; 
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v___x_327_);
v___x_331_ = v___x_321_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_head_318_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v___x_327_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
v___y_324_ = v___x_331_;
goto v___jp_323_;
}
}
else
{
lean_object* v___x_333_; 
lean_del_object(v___x_321_);
lean_dec(v_head_318_);
v___x_333_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0___closed__3));
v___y_324_ = v___x_333_;
goto v___jp_323_;
}
v___jp_323_:
{
lean_object* v___x_325_; 
v___x_325_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_316_, v___y_324_);
v_a_315_ = v_tail_319_;
v_a_316_ = v___x_325_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__1(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderCode___closed__0));
v___x_337_ = l_String_toListImpl(v___x_336_);
return v___x_337_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__4(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderCode___closed__3));
v___x_342_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__5(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_343_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCode___closed__4, &lp_lean_x2dftml_LeanFtml_renderCode___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__4);
v___x_344_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__0));
v___x_345_ = l_List_appendTR___redArg(v___x_344_, v___x_343_);
return v___x_345_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__7(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderCode___closed__6));
v___x_348_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__9(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderCode___closed__8));
v___x_351_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__10(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCode___closed__9, &lp_lean_x2dftml_LeanFtml_renderCode___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__9);
v___x_353_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__0));
v___x_354_ = l_List_appendTR___redArg(v___x_353_, v___x_352_);
return v___x_354_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__11(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_355_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__6));
v___x_356_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCode___closed__10, &lp_lean_x2dftml_LeanFtml_renderCode___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__10);
v___x_357_ = l_List_appendTR___redArg(v___x_356_, v___x_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCode(lean_object* v_opts_358_){
_start:
{
lean_object* v_ty_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v_ty_359_ = lp_lean_x2dftml_LeanFtml_codeType(v_opts_358_);
v___x_360_ = lp_lean_x2dftml_LeanFtml_codeLangs;
v___x_361_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(v_ty_359_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v_body_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
lean_dec(v_ty_359_);
v___x_362_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCode___closed__1, &lp_lean_x2dftml_LeanFtml_renderCode___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__1);
v___x_363_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_358_, v___x_362_);
v_body_364_ = lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody(v___x_363_);
v___x_365_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_body_364_);
v___x_366_ = lean_box(0);
v___x_367_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v___x_365_, v___x_366_);
lean_dec(v___x_365_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; lean_object* v_tabbed_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_368_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderCode___closed__2));
v_tabbed_369_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderCode_spec__0(v_body_364_, v___x_368_);
v___x_370_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCode___closed__5, &lp_lean_x2dftml_LeanFtml_renderCode___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__5);
v___x_371_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_tabbed_369_);
v___x_372_ = l_List_appendTR___redArg(v___x_370_, v___x_371_);
v___x_373_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCode___closed__7, &lp_lean_x2dftml_LeanFtml_renderCode___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__7);
v___x_374_ = l_List_appendTR___redArg(v___x_372_, v___x_373_);
v___x_375_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryMarker___closed__6));
v___x_376_ = l_List_appendTR___redArg(v___x_374_, v___x_375_);
return v___x_376_;
}
else
{
lean_object* v___x_377_; 
lean_dec(v_body_364_);
v___x_377_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCode___closed__11, &lp_lean_x2dftml_LeanFtml_renderCode___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderCode___closed__11);
return v___x_377_;
}
}
else
{
lean_object* v___x_378_; 
v___x_378_ = lp_lean_x2dftml_LeanFtml_codeBoundaryMarker(v_ty_359_);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCode___boxed(lean_object* v_opts_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = lp_lean_x2dftml_LeanFtml_renderCode(v_opts_379_);
lean_dec(v_opts_379_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_embedPatterns_spec__0(lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
if (lean_obj_tag(v_a_381_) == 0)
{
lean_object* v___x_383_; 
v___x_383_ = lean_array_to_list(v_a_382_);
return v___x_383_;
}
else
{
lean_object* v_head_384_; lean_object* v_tail_385_; lean_object* v_snd_386_; lean_object* v___x_387_; 
v_head_384_ = lean_ctor_get(v_a_381_, 0);
lean_inc(v_head_384_);
v_tail_385_ = lean_ctor_get(v_a_381_, 1);
lean_inc(v_tail_385_);
lean_dec_ref_known(v_a_381_, 2);
v_snd_386_ = lean_ctor_get(v_head_384_, 1);
lean_inc(v_snd_386_);
lean_dec(v_head_384_);
v___x_387_ = lp_lean_x2dftml_LeanFtml_parsePcre(v_snd_386_);
if (lean_obj_tag(v___x_387_) == 0)
{
v_a_381_ = v_tail_385_;
goto _start;
}
else
{
lean_object* v_val_389_; lean_object* v___x_390_; 
v_val_389_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_val_389_);
lean_dec_ref_known(v___x_387_, 1);
v___x_390_ = lean_array_push(v_a_382_, v_val_389_);
v_a_381_ = v_tail_385_;
v_a_382_ = v___x_390_;
goto _start;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedPatterns___closed__1(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_394_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedPatterns___closed__0));
v___x_395_ = lp_lean_x2dftml_LeanFtml_embedPatternStrings;
v___x_396_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_embedPatterns_spec__0(v___x_395_, v___x_394_);
return v___x_396_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedPatterns(void){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedPatterns___closed__1, &lp_lean_x2dftml_LeanFtml_embedPatterns___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_embedPatterns___closed__1);
return v___x_397_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__1(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__0));
v___x_400_ = lp_lean_x2dftml_LeanFtml_parsePcre(v___x_399_);
return v___x_400_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_languageStripPattern(void){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__1, &lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__1);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; 
v___x_406_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_languageStripPattern___closed__2));
return v___x_406_;
}
else
{
lean_object* v_val_407_; 
v_val_407_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_val_407_);
return v_val_407_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__1(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__0));
v___x_410_ = lp_lean_x2dftml_LeanFtml_parsePcre(v___x_409_);
return v___x_410_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedEventPattern(void){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__1, &lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__1);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v___x_415_; 
v___x_415_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedEventPattern___closed__2));
return v___x_415_;
}
else
{
lean_object* v_val_416_; 
v_val_416_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_val_416_);
return v_val_416_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedError___closed__1(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedError___closed__0));
v___x_419_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_418_);
return v___x_419_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedError(void){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedError___closed__1, &lp_lean_x2dftml_LeanFtml_embedError___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_embedError___closed__1);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_srcValueAt_spec__1(lean_object* v_head_421_, uint8_t v___y_422_, lean_object* v_l_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
if (lean_obj_tag(v_a_424_) == 0)
{
lean_dec_ref(v_a_425_);
lean_inc(v_l_423_);
return v_l_423_;
}
else
{
lean_object* v_head_426_; lean_object* v_tail_427_; uint8_t v___x_428_; 
v_head_426_ = lean_ctor_get(v_a_424_, 0);
lean_inc(v_head_426_);
v_tail_427_ = lean_ctor_get(v_a_424_, 1);
lean_inc(v_tail_427_);
lean_dec_ref_known(v_a_424_, 2);
v___x_428_ = lean_nat_dec_eq(v_head_426_, v_head_421_);
if (v___x_428_ == 0)
{
if (v___y_422_ == 0)
{
lean_object* v___x_429_; 
lean_dec(v_tail_427_);
lean_dec(v_head_426_);
v___x_429_ = lean_array_to_list(v_a_425_);
return v___x_429_;
}
else
{
lean_object* v___x_430_; 
v___x_430_ = lean_array_push(v_a_425_, v_head_426_);
v_a_424_ = v_tail_427_;
v_a_425_ = v___x_430_;
goto _start;
}
}
else
{
lean_object* v___x_432_; 
lean_dec(v_tail_427_);
lean_dec(v_head_426_);
v___x_432_ = lean_array_to_list(v_a_425_);
return v___x_432_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_srcValueAt_spec__1___boxed(lean_object* v_head_433_, lean_object* v___y_434_, lean_object* v_l_435_, lean_object* v_a_436_, lean_object* v_a_437_){
_start:
{
uint8_t v___y_869__boxed_438_; lean_object* v_res_439_; 
v___y_869__boxed_438_ = lean_unbox(v___y_434_);
v_res_439_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_srcValueAt_spec__1(v_head_433_, v___y_869__boxed_438_, v_l_435_, v_a_436_, v_a_437_);
lean_dec(v_l_435_);
lean_dec(v_head_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0(lean_object* v_x_440_){
_start:
{
if (lean_obj_tag(v_x_440_) == 0)
{
return v_x_440_;
}
else
{
lean_object* v_head_441_; lean_object* v_tail_442_; uint8_t v___x_443_; 
v_head_441_ = lean_ctor_get(v_x_440_, 0);
v_tail_442_ = lean_ctor_get(v_x_440_, 1);
v___x_443_ = lp_lean_x2dftml_LeanFtml_pcreIsWsByte(v_head_441_);
if (v___x_443_ == 0)
{
lean_inc_ref(v_x_440_);
return v_x_440_;
}
else
{
v_x_440_ = v_tail_442_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0___boxed(lean_object* v_x_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0(v_x_445_);
lean_dec(v_x_445_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_srcValueAt(lean_object* v_subj_447_, lean_object* v_pos_448_){
_start:
{
lean_object* v___y_450_; lean_object* v___y_451_; uint8_t v___y_452_; uint8_t v___y_461_; lean_object* v___y_498_; lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(0u);
v___x_506_ = lean_nat_dec_eq(v_pos_448_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_507_ = lean_unsigned_to_nat(1u);
v___x_508_ = lean_nat_sub(v_pos_448_, v___x_507_);
v___x_509_ = l_List_drop___redArg(v___x_508_, v_subj_447_);
if (lean_obj_tag(v___x_509_) == 0)
{
v___y_498_ = v___x_505_;
goto v___jp_497_;
}
else
{
lean_object* v_head_510_; 
v_head_510_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_head_510_);
lean_dec_ref_known(v___x_509_, 2);
v___y_498_ = v_head_510_;
goto v___jp_497_;
}
}
else
{
v___y_461_ = v___x_506_;
goto v___jp_460_;
}
v___jp_449_:
{
lean_object* v___x_453_; lean_object* v_val_454_; lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_453_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderCode___closed__2));
lean_inc(v___y_451_);
v_val_454_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_srcValueAt_spec__1(v___y_450_, v___y_452_, v___y_451_, v___y_451_, v___x_453_);
lean_dec(v___y_450_);
v___x_455_ = l_List_lengthTR___redArg(v_val_454_);
v___x_456_ = l_List_lengthTR___redArg(v___y_451_);
lean_dec(v___y_451_);
v___x_457_ = lean_nat_dec_lt(v___x_455_, v___x_456_);
lean_dec(v___x_456_);
lean_dec(v___x_455_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
lean_dec(v_val_454_);
v___x_458_ = lean_box(0);
return v___x_458_;
}
else
{
lean_object* v___x_459_; 
v___x_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_459_, 0, v_val_454_);
return v___x_459_;
}
}
v___jp_460_:
{
lean_object* v___x_462_; 
v___x_462_ = l_List_drop___redArg(v_pos_448_, v_subj_447_);
if (lean_obj_tag(v___x_462_) == 1)
{
lean_object* v_tail_463_; 
v_tail_463_ = lean_ctor_get(v___x_462_, 1);
lean_inc(v_tail_463_);
if (lean_obj_tag(v_tail_463_) == 1)
{
lean_object* v_tail_464_; 
v_tail_464_ = lean_ctor_get(v_tail_463_, 1);
lean_inc(v_tail_464_);
if (lean_obj_tag(v_tail_464_) == 1)
{
lean_object* v_head_465_; lean_object* v_head_466_; lean_object* v_head_467_; lean_object* v_tail_468_; lean_object* v___x_469_; uint8_t v___x_470_; 
v_head_465_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_head_465_);
lean_dec_ref_known(v___x_462_, 2);
v_head_466_ = lean_ctor_get(v_tail_463_, 0);
lean_inc(v_head_466_);
lean_dec_ref_known(v_tail_463_, 2);
v_head_467_ = lean_ctor_get(v_tail_464_, 0);
lean_inc(v_head_467_);
v_tail_468_ = lean_ctor_get(v_tail_464_, 1);
lean_inc(v_tail_468_);
lean_dec_ref_known(v_tail_464_, 2);
v___x_469_ = lean_unsigned_to_nat(115u);
v___x_470_ = lp_lean_x2dftml_LeanFtml_byteMatchCI(v___y_461_, v___x_469_, v_head_465_);
lean_dec(v_head_465_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; 
lean_dec(v_tail_468_);
lean_dec(v_head_467_);
lean_dec(v_head_466_);
v___x_471_ = lean_box(0);
return v___x_471_;
}
else
{
lean_object* v___x_472_; uint8_t v___x_473_; 
v___x_472_ = lean_unsigned_to_nat(114u);
v___x_473_ = lp_lean_x2dftml_LeanFtml_byteMatchCI(v___y_461_, v___x_472_, v_head_466_);
lean_dec(v_head_466_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; 
lean_dec(v_tail_468_);
lean_dec(v_head_467_);
v___x_474_ = lean_box(0);
return v___x_474_;
}
else
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = lean_unsigned_to_nat(99u);
v___x_476_ = lp_lean_x2dftml_LeanFtml_byteMatchCI(v___y_461_, v___x_475_, v_head_467_);
lean_dec(v_head_467_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; 
lean_dec(v_tail_468_);
v___x_477_ = lean_box(0);
return v___x_477_;
}
else
{
lean_object* v_rest2_478_; 
v_rest2_478_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0(v_tail_468_);
lean_dec(v_tail_468_);
if (lean_obj_tag(v_rest2_478_) == 1)
{
lean_object* v_head_479_; lean_object* v_tail_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_head_479_ = lean_ctor_get(v_rest2_478_, 0);
lean_inc(v_head_479_);
v_tail_480_ = lean_ctor_get(v_rest2_478_, 1);
lean_inc(v_tail_480_);
lean_dec_ref_known(v_rest2_478_, 2);
v___x_481_ = lean_unsigned_to_nat(61u);
v___x_482_ = lean_nat_dec_eq(v_head_479_, v___x_481_);
lean_dec(v_head_479_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; 
lean_dec(v_tail_480_);
v___x_483_ = lean_box(0);
return v___x_483_;
}
else
{
lean_object* v_rest4_484_; 
v_rest4_484_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0(v_tail_480_);
lean_dec(v_tail_480_);
if (lean_obj_tag(v_rest4_484_) == 1)
{
lean_object* v_head_485_; lean_object* v_tail_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_head_485_ = lean_ctor_get(v_rest4_484_, 0);
lean_inc(v_head_485_);
v_tail_486_ = lean_ctor_get(v_rest4_484_, 1);
lean_inc(v_tail_486_);
lean_dec_ref_known(v_rest4_484_, 2);
v___x_487_ = lean_unsigned_to_nat(34u);
v___x_488_ = lean_nat_dec_eq(v_head_485_, v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_489_ = lean_unsigned_to_nat(39u);
v___x_490_ = lean_nat_dec_eq(v_head_485_, v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; 
lean_dec(v_tail_486_);
lean_dec(v_head_485_);
v___x_491_ = lean_box(0);
return v___x_491_;
}
else
{
v___y_450_ = v_head_485_;
v___y_451_ = v_tail_486_;
v___y_452_ = v___x_490_;
goto v___jp_449_;
}
}
else
{
v___y_450_ = v_head_485_;
v___y_451_ = v_tail_486_;
v___y_452_ = v___x_488_;
goto v___jp_449_;
}
}
else
{
lean_object* v___x_492_; 
lean_dec(v_rest4_484_);
v___x_492_ = lean_box(0);
return v___x_492_;
}
}
}
else
{
lean_object* v___x_493_; 
lean_dec(v_rest2_478_);
v___x_493_ = lean_box(0);
return v___x_493_;
}
}
}
}
}
else
{
lean_object* v___x_494_; 
lean_dec(v_tail_464_);
lean_dec_ref_known(v_tail_463_, 2);
lean_dec_ref_known(v___x_462_, 2);
v___x_494_ = lean_box(0);
return v___x_494_;
}
}
else
{
lean_object* v___x_495_; 
lean_dec(v_tail_463_);
lean_dec_ref_known(v___x_462_, 2);
v___x_495_ = lean_box(0);
return v___x_495_;
}
}
else
{
lean_object* v___x_496_; 
lean_dec(v___x_462_);
v___x_496_ = lean_box(0);
return v___x_496_;
}
}
v___jp_497_:
{
uint8_t v___x_499_; 
v___x_499_ = lp_lean_x2dftml_LeanFtml_isWrdByte(v___y_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_500_ = lean_unsigned_to_nat(45u);
v___x_501_ = lean_nat_dec_eq(v___y_498_, v___x_500_);
lean_dec(v___y_498_);
if (v___x_501_ == 0)
{
uint8_t v___x_502_; 
v___x_502_ = 1;
v___y_461_ = v___x_502_;
goto v___jp_460_;
}
else
{
lean_object* v___x_503_; 
lean_dec(v_pos_448_);
v___x_503_ = lean_box(0);
return v___x_503_;
}
}
else
{
lean_object* v___x_504_; 
lean_dec(v___y_498_);
lean_dec(v_pos_448_);
v___x_504_ = lean_box(0);
return v___x_504_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_srcValueAt___boxed(lean_object* v_subj_511_, lean_object* v_pos_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = lp_lean_x2dftml_LeanFtml_srcValueAt(v_subj_511_, v_pos_512_);
lean_dec(v_subj_511_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_findSrcValue_spec__0(lean_object* v_subj_514_, lean_object* v_x_515_){
_start:
{
if (lean_obj_tag(v_x_515_) == 0)
{
lean_object* v___x_516_; 
v___x_516_ = lean_box(0);
return v___x_516_;
}
else
{
lean_object* v_head_517_; lean_object* v_tail_518_; lean_object* v___x_519_; 
v_head_517_ = lean_ctor_get(v_x_515_, 0);
lean_inc(v_head_517_);
v_tail_518_ = lean_ctor_get(v_x_515_, 1);
lean_inc(v_tail_518_);
lean_dec_ref_known(v_x_515_, 2);
v___x_519_ = lp_lean_x2dftml_LeanFtml_srcValueAt(v_subj_514_, v_head_517_);
if (lean_obj_tag(v___x_519_) == 0)
{
v_x_515_ = v_tail_518_;
goto _start;
}
else
{
lean_dec(v_tail_518_);
return v___x_519_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_findSrcValue_spec__0___boxed(lean_object* v_subj_521_, lean_object* v_x_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_findSrcValue_spec__0(v_subj_521_, v_x_522_);
lean_dec(v_subj_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSrcValue(lean_object* v_subj_524_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_525_ = l_List_lengthTR___redArg(v_subj_524_);
v___x_526_ = lean_unsigned_to_nat(1u);
v___x_527_ = lean_nat_add(v___x_525_, v___x_526_);
lean_dec(v___x_525_);
v___x_528_ = l_List_range(v___x_527_);
v___x_529_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_findSrcValue_spec__0(v_subj_524_, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSrcValue___boxed(lean_object* v_subj_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = lp_lean_x2dftml_LeanFtml_findSrcValue(v_subj_530_);
lean_dec(v_subj_530_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__0(lean_object* v_a_532_, lean_object* v_a_533_){
_start:
{
if (lean_obj_tag(v_a_532_) == 0)
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = l_List_reverse___redArg(v_a_533_);
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
lean_ctor_set(v___x_535_, 1, v_a_532_);
return v___x_535_;
}
else
{
lean_object* v_head_536_; lean_object* v_tail_537_; uint8_t v___x_541_; 
v_head_536_ = lean_ctor_get(v_a_532_, 0);
v_tail_537_ = lean_ctor_get(v_a_532_, 1);
v___x_541_ = lp_lean_x2dftml_LeanFtml_isWrdByte(v_head_536_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_542_ = lean_unsigned_to_nat(45u);
v___x_543_ = lean_nat_dec_eq(v_head_536_, v___x_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = l_List_reverse___redArg(v_a_533_);
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
lean_ctor_set(v___x_545_, 1, v_a_532_);
return v___x_545_;
}
else
{
lean_inc(v_tail_537_);
lean_inc(v_head_536_);
lean_dec_ref_known(v_a_532_, 2);
goto v___jp_538_;
}
}
else
{
lean_inc(v_tail_537_);
lean_inc(v_head_536_);
lean_dec_ref_known(v_a_532_, 2);
goto v___jp_538_;
}
v___jp_538_:
{
lean_object* v___x_539_; 
v___x_539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_539_, 0, v_head_536_);
lean_ctor_set(v___x_539_, 1, v_a_533_);
v_a_532_ = v_tail_537_;
v_a_533_ = v___x_539_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__1(lean_object* v_head_546_, uint8_t v___x_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
if (lean_obj_tag(v_a_548_) == 0)
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = l_List_reverse___redArg(v_a_549_);
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
lean_ctor_set(v___x_551_, 1, v_a_548_);
return v___x_551_;
}
else
{
lean_object* v_head_552_; lean_object* v_tail_553_; uint8_t v___y_555_; lean_object* v___x_568_; uint8_t v___x_569_; 
v_head_552_ = lean_ctor_get(v_a_548_, 0);
v_tail_553_ = lean_ctor_get(v_a_548_, 1);
v___x_568_ = lean_unsigned_to_nat(34u);
v___x_569_ = lean_nat_dec_eq(v_head_552_, v___x_568_);
if (v___x_569_ == 0)
{
uint8_t v___x_570_; 
v___x_570_ = lean_nat_dec_eq(v_head_546_, v___x_568_);
v___y_555_ = v___x_570_;
goto v___jp_554_;
}
else
{
v___y_555_ = v___x_547_;
goto v___jp_554_;
}
v___jp_554_:
{
if (v___y_555_ == 0)
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = l_List_reverse___redArg(v_a_549_);
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
lean_ctor_set(v___x_557_, 1, v_a_548_);
return v___x_557_;
}
else
{
lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_565_; 
lean_inc(v_tail_553_);
lean_inc(v_head_552_);
v_isSharedCheck_565_ = !lean_is_exclusive(v_a_548_);
if (v_isSharedCheck_565_ == 0)
{
lean_object* v_unused_566_; lean_object* v_unused_567_; 
v_unused_566_ = lean_ctor_get(v_a_548_, 1);
lean_dec(v_unused_566_);
v_unused_567_ = lean_ctor_get(v_a_548_, 0);
lean_dec(v_unused_567_);
v___x_559_ = v_a_548_;
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
else
{
lean_dec(v_a_548_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 1, v_a_549_);
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_head_552_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_a_549_);
v___x_562_ = v_reuseFailAlloc_564_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
v_a_548_ = v_tail_553_;
v_a_549_ = v___x_562_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__1___boxed(lean_object* v_head_571_, lean_object* v___x_572_, lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
uint8_t v___x_431__boxed_575_; lean_object* v_res_576_; 
v___x_431__boxed_575_ = lean_unbox(v___x_572_);
v_res_576_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__1(v_head_571_, v___x_431__boxed_575_, v_a_573_, v_a_574_);
lean_dec(v_head_571_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrMatchHere(lean_object* v_bs_577_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_621_; 
v___x_578_ = lean_box(0);
v___x_579_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__0(v_bs_577_, v___x_578_);
v_fst_580_ = lean_ctor_get(v___x_579_, 0);
v_snd_581_ = lean_ctor_get(v___x_579_, 1);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_621_ == 0)
{
v___x_583_ = v___x_579_;
v_isShared_584_ = v_isSharedCheck_621_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_snd_581_);
lean_inc(v_fst_580_);
lean_dec(v___x_579_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_621_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
uint8_t v___x_585_; 
v___x_585_ = l_List_isEmpty___redArg(v_fst_580_);
if (v___x_585_ == 0)
{
lean_object* v_r2_586_; 
v_r2_586_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0(v_snd_581_);
lean_dec(v_snd_581_);
if (lean_obj_tag(v_r2_586_) == 1)
{
lean_object* v_head_587_; lean_object* v_tail_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v_head_587_ = lean_ctor_get(v_r2_586_, 0);
lean_inc(v_head_587_);
v_tail_588_ = lean_ctor_get(v_r2_586_, 1);
lean_inc(v_tail_588_);
lean_dec_ref_known(v_r2_586_, 2);
v___x_589_ = lean_unsigned_to_nat(61u);
v___x_590_ = lean_nat_dec_eq(v_head_587_, v___x_589_);
lean_dec(v_head_587_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; 
lean_dec(v_tail_588_);
lean_del_object(v___x_583_);
lean_dec(v_fst_580_);
v___x_591_ = lean_box(0);
return v___x_591_;
}
else
{
lean_object* v_r4_592_; 
v_r4_592_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_srcValueAt_spec__0(v_tail_588_);
lean_dec(v_tail_588_);
if (lean_obj_tag(v_r4_592_) == 1)
{
lean_object* v_head_593_; lean_object* v_tail_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_head_593_ = lean_ctor_get(v_r4_592_, 0);
lean_inc(v_head_593_);
v_tail_594_ = lean_ctor_get(v_r4_592_, 1);
lean_inc(v_tail_594_);
lean_dec_ref_known(v_r4_592_, 2);
v___x_595_ = lean_unsigned_to_nat(34u);
v___x_596_ = lean_nat_dec_eq(v_head_593_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; 
lean_dec(v_tail_594_);
lean_dec(v_head_593_);
lean_del_object(v___x_583_);
lean_dec(v_fst_580_);
v___x_597_ = lean_box(0);
return v___x_597_;
}
else
{
lean_object* v___x_598_; lean_object* v_snd_599_; 
v___x_598_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_attrMatchHere_spec__1(v_head_593_, v___x_585_, v_tail_594_, v___x_578_);
lean_dec(v_head_593_);
v_snd_599_ = lean_ctor_get(v___x_598_, 1);
lean_inc(v_snd_599_);
if (lean_obj_tag(v_snd_599_) == 1)
{
lean_object* v_fst_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_615_; 
v_fst_600_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v___x_598_, 1);
lean_dec(v_unused_616_);
v___x_602_ = v___x_598_;
v_isShared_603_ = v_isSharedCheck_615_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_fst_600_);
lean_dec(v___x_598_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_615_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v_head_604_; lean_object* v_tail_605_; uint8_t v___x_606_; 
v_head_604_ = lean_ctor_get(v_snd_599_, 0);
lean_inc(v_head_604_);
v_tail_605_ = lean_ctor_get(v_snd_599_, 1);
lean_inc(v_tail_605_);
lean_dec_ref_known(v_snd_599_, 2);
v___x_606_ = lean_nat_dec_eq(v_head_604_, v___x_595_);
lean_dec(v_head_604_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
lean_dec(v_tail_605_);
lean_del_object(v___x_602_);
lean_dec(v_fst_600_);
lean_del_object(v___x_583_);
lean_dec(v_fst_580_);
v___x_607_ = lean_box(0);
return v___x_607_;
}
else
{
lean_object* v___x_609_; 
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 1, v_tail_605_);
v___x_609_ = v___x_602_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_fst_600_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v_tail_605_);
v___x_609_ = v_reuseFailAlloc_614_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
lean_object* v___x_611_; 
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 1, v___x_609_);
v___x_611_ = v___x_583_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_fst_580_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v___x_609_);
v___x_611_ = v_reuseFailAlloc_613_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_612_; 
v___x_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
}
}
}
}
else
{
lean_object* v___x_617_; 
lean_dec(v_snd_599_);
lean_dec_ref(v___x_598_);
lean_del_object(v___x_583_);
lean_dec(v_fst_580_);
v___x_617_ = lean_box(0);
return v___x_617_;
}
}
}
else
{
lean_object* v___x_618_; 
lean_dec(v_r4_592_);
lean_del_object(v___x_583_);
lean_dec(v_fst_580_);
v___x_618_ = lean_box(0);
return v___x_618_;
}
}
}
else
{
lean_object* v___x_619_; 
lean_dec(v_r2_586_);
lean_del_object(v___x_583_);
lean_dec(v_fst_580_);
v___x_619_ = lean_box(0);
return v___x_619_;
}
}
else
{
lean_object* v___x_620_; 
lean_del_object(v___x_583_);
lean_dec(v_snd_581_);
lean_dec(v_fst_580_);
v___x_620_ = lean_box(0);
return v___x_620_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_attrValues___closed__1(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrValues___closed__0));
v___x_624_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrValues(lean_object* v_x_625_, lean_object* v_x_626_){
_start:
{
lean_object* v_zero_627_; uint8_t v_isZero_628_; 
v_zero_627_ = lean_unsigned_to_nat(0u);
v_isZero_628_ = lean_nat_dec_eq(v_x_626_, v_zero_627_);
if (v_isZero_628_ == 1)
{
lean_object* v___x_629_; 
lean_dec(v_x_626_);
lean_dec(v_x_625_);
v___x_629_ = lean_box(0);
return v___x_629_;
}
else
{
lean_object* v_one_630_; lean_object* v_n_631_; lean_object* v___x_632_; 
v_one_630_ = lean_unsigned_to_nat(1u);
v_n_631_ = lean_nat_sub(v_x_626_, v_one_630_);
lean_dec(v_x_626_);
lean_inc(v_x_625_);
v___x_632_ = lp_lean_x2dftml_LeanFtml_attrMatchHere(v_x_625_);
if (lean_obj_tag(v___x_632_) == 0)
{
if (lean_obj_tag(v_x_625_) == 0)
{
lean_object* v___x_633_; 
lean_dec(v_n_631_);
v___x_633_ = lean_box(0);
return v___x_633_;
}
else
{
lean_object* v_tail_634_; 
v_tail_634_ = lean_ctor_get(v_x_625_, 1);
lean_inc(v_tail_634_);
lean_dec_ref_known(v_x_625_, 2);
v_x_625_ = v_tail_634_;
v_x_626_ = v_n_631_;
goto _start;
}
}
else
{
lean_object* v_val_636_; lean_object* v_snd_637_; lean_object* v_fst_638_; lean_object* v_fst_639_; lean_object* v_snd_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_656_; 
lean_dec(v_x_625_);
v_val_636_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_val_636_);
lean_dec_ref_known(v___x_632_, 1);
v_snd_637_ = lean_ctor_get(v_val_636_, 1);
lean_inc(v_snd_637_);
v_fst_638_ = lean_ctor_get(v_val_636_, 0);
lean_inc(v_fst_638_);
lean_dec(v_val_636_);
v_fst_639_ = lean_ctor_get(v_snd_637_, 0);
v_snd_640_ = lean_ctor_get(v_snd_637_, 1);
v_isSharedCheck_656_ = !lean_is_exclusive(v_snd_637_);
if (v_isSharedCheck_656_ == 0)
{
v___x_642_ = v_snd_637_;
v_isShared_643_ = v_isSharedCheck_656_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_snd_640_);
lean_inc(v_fst_639_);
lean_dec(v_snd_637_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_656_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___y_645_; lean_object* v___x_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_648_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v_fst_638_);
v___x_649_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_attrValues___closed__1, &lp_lean_x2dftml_LeanFtml_attrValues___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_attrValues___closed__1);
v___x_650_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v___x_648_, v___x_649_);
lean_dec(v___x_648_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; lean_object* v___x_653_; 
v___x_651_ = lean_box(0);
if (v_isShared_643_ == 0)
{
lean_ctor_set_tag(v___x_642_, 1);
lean_ctor_set(v___x_642_, 1, v___x_651_);
v___x_653_ = v___x_642_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_fst_639_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v___x_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
v___y_645_ = v___x_653_;
goto v___jp_644_;
}
}
else
{
lean_object* v___x_655_; 
lean_del_object(v___x_642_);
lean_dec(v_fst_639_);
v___x_655_ = lean_box(0);
v___y_645_ = v___x_655_;
goto v___jp_644_;
}
v___jp_644_:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lp_lean_x2dftml_LeanFtml_attrValues(v_snd_640_, v_n_631_);
v___x_647_ = l_List_appendTR___redArg(v___y_645_, v___x_646_);
return v___x_647_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_bytesContainsSub_spec__0(lean_object* v_subj_657_, lean_object* v_pat_658_, lean_object* v_x_659_){
_start:
{
if (lean_obj_tag(v_x_659_) == 0)
{
uint8_t v___x_660_; 
v___x_660_ = 0;
return v___x_660_;
}
else
{
lean_object* v_head_661_; lean_object* v_tail_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v_head_661_ = lean_ctor_get(v_x_659_, 0);
lean_inc(v_head_661_);
v_tail_662_ = lean_ctor_get(v_x_659_, 1);
lean_inc(v_tail_662_);
lean_dec_ref_known(v_x_659_, 2);
v___x_663_ = l_List_drop___redArg(v_head_661_, v_subj_657_);
v___x_664_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v_pat_658_, v___x_663_);
lean_dec(v___x_663_);
if (v___x_664_ == 0)
{
v_x_659_ = v_tail_662_;
goto _start;
}
else
{
lean_dec(v_tail_662_);
return v___x_664_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_bytesContainsSub_spec__0___boxed(lean_object* v_subj_666_, lean_object* v_pat_667_, lean_object* v_x_668_){
_start:
{
uint8_t v_res_669_; lean_object* v_r_670_; 
v_res_669_ = lp_lean_x2dftml_List_any___at___00LeanFtml_bytesContainsSub_spec__0(v_subj_666_, v_pat_667_, v_x_668_);
lean_dec(v_pat_667_);
lean_dec(v_subj_666_);
v_r_670_ = lean_box(v_res_669_);
return v_r_670_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_bytesContainsSub(lean_object* v_pat_671_, lean_object* v_subj_672_){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; uint8_t v___x_677_; 
v___x_673_ = l_List_lengthTR___redArg(v_subj_672_);
v___x_674_ = lean_unsigned_to_nat(1u);
v___x_675_ = lean_nat_add(v___x_673_, v___x_674_);
lean_dec(v___x_673_);
v___x_676_ = l_List_range(v___x_675_);
v___x_677_ = lp_lean_x2dftml_List_any___at___00LeanFtml_bytesContainsSub_spec__0(v_subj_672_, v_pat_671_, v___x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesContainsSub___boxed(lean_object* v_pat_678_, lean_object* v_subj_679_){
_start:
{
uint8_t v_res_680_; lean_object* v_r_681_; 
v_res_680_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v_pat_678_, v_subj_679_);
lean_dec(v_subj_679_);
lean_dec(v_pat_678_);
v_r_681_ = lean_box(v_res_680_);
return v_r_681_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__0));
v___x_684_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_683_);
return v___x_684_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__2));
v___x_687_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_686_);
return v___x_687_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_srcHasBadScheme(lean_object* v_val_688_){
_start:
{
lean_object* v___x_689_; lean_object* v_lv_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_689_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_val_688_);
v_lv_690_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v___x_689_);
v___x_691_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1, &lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1);
v___x_692_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_691_, v_lv_690_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_693_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3, &lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3);
v___x_694_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_693_, v_lv_690_);
lean_dec(v_lv_690_);
return v___x_694_;
}
else
{
lean_dec(v_lv_690_);
return v___x_692_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_srcHasBadScheme___boxed(lean_object* v_val_695_){
_start:
{
uint8_t v_res_696_; lean_object* v_r_697_; 
v_res_696_ = lp_lean_x2dftml_LeanFtml_srcHasBadScheme(v_val_695_);
lean_dec(v_val_695_);
v_r_697_ = lean_box(v_res_696_);
return v_r_697_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_valueHasBadScheme(lean_object* v_val_698_){
_start:
{
lean_object* v_lv_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v_lv_699_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v_val_698_);
v___x_700_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1, &lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__1);
v___x_701_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_700_, v_lv_699_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; uint8_t v___x_703_; 
v___x_702_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3, &lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_srcHasBadScheme___closed__3);
v___x_703_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_702_, v_lv_699_);
lean_dec(v_lv_699_);
return v___x_703_;
}
else
{
lean_dec(v_lv_699_);
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_valueHasBadScheme___boxed(lean_object* v_val_704_){
_start:
{
uint8_t v_res_705_; lean_object* v_r_706_; 
v_res_705_ = lp_lean_x2dftml_LeanFtml_valueHasBadScheme(v_val_704_);
v_r_706_ = lean_box(v_res_705_);
return v_r_706_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_renderEmbedWith_finishEmbed_spec__0(lean_object* v_x_707_){
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
lean_inc(v_head_709_);
v_tail_710_ = lean_ctor_get(v_x_707_, 1);
lean_inc(v_tail_710_);
lean_dec_ref_known(v_x_707_, 2);
v___x_711_ = lp_lean_x2dftml_LeanFtml_valueHasBadScheme(v_head_709_);
if (v___x_711_ == 0)
{
v_x_707_ = v_tail_710_;
goto _start;
}
else
{
lean_dec(v_tail_710_);
return v___x_711_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_renderEmbedWith_finishEmbed_spec__0___boxed(lean_object* v_x_713_){
_start:
{
uint8_t v_res_714_; lean_object* v_r_715_; 
v_res_714_ = lp_lean_x2dftml_List_any___at___00LeanFtml_renderEmbedWith_finishEmbed_spec__0(v_x_713_);
v_r_715_ = lean_box(v_res_714_);
return v_r_715_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbedWith_finishEmbed(lean_object* v_c_716_){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_717_ = l_List_lengthTR___redArg(v_c_716_);
v___x_718_ = lean_unsigned_to_nat(1u);
v___x_719_ = lean_nat_add(v___x_717_, v___x_718_);
lean_dec(v___x_717_);
lean_inc(v_c_716_);
v___x_720_ = lp_lean_x2dftml_LeanFtml_attrValues(v_c_716_, v___x_719_);
v___x_721_ = lp_lean_x2dftml_List_any___at___00LeanFtml_renderEmbedWith_finishEmbed_spec__0(v___x_720_);
if (v___x_721_ == 0)
{
return v_c_716_;
}
else
{
lean_object* v___x_722_; 
lean_dec(v_c_716_);
v___x_722_ = lp_lean_x2dftml_LeanFtml_embedError;
return v___x_722_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_renderEmbedWith_spec__0(lean_object* v_content_723_, lean_object* v_x_724_){
_start:
{
if (lean_obj_tag(v_x_724_) == 0)
{
lean_object* v___x_725_; 
lean_dec(v_content_723_);
v___x_725_ = lean_box(0);
return v___x_725_;
}
else
{
lean_object* v_head_726_; lean_object* v_tail_727_; uint8_t v___x_728_; 
v_head_726_ = lean_ctor_get(v_x_724_, 0);
lean_inc_n(v_head_726_, 2);
v_tail_727_ = lean_ctor_get(v_x_724_, 1);
lean_inc(v_tail_727_);
lean_dec_ref_known(v_x_724_, 2);
lean_inc(v_content_723_);
v___x_728_ = lp_lean_x2dftml_LeanFtml_pcreMatch(v_head_726_, v_content_723_);
if (v___x_728_ == 0)
{
lean_dec(v_head_726_);
v_x_724_ = v_tail_727_;
goto _start;
}
else
{
lean_object* v___x_730_; 
lean_dec(v_tail_727_);
lean_dec(v_content_723_);
v___x_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_730_, 0, v_head_726_);
return v___x_730_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__1(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__0));
v___x_733_ = l_String_toListImpl(v___x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbedWith(lean_object* v_pats_734_, lean_object* v_opts_735_){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v_content_738_; lean_object* v___x_739_; 
v___x_736_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__1, &lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderEmbedWith___closed__1);
v___x_737_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_735_, v___x_736_);
v_content_738_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v___x_737_);
lean_dec(v___x_737_);
lean_inc(v_content_738_);
v___x_739_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_renderEmbedWith_spec__0(v_content_738_, v_pats_734_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v___x_740_; 
lean_dec(v_content_738_);
v___x_740_ = lp_lean_x2dftml_LeanFtml_embedError;
return v___x_740_;
}
else
{
lean_object* v___x_741_; lean_object* v_stripped_742_; lean_object* v___x_743_; uint8_t v___x_744_; 
lean_dec_ref_known(v___x_739_, 1);
v___x_741_ = lp_lean_x2dftml_LeanFtml_languageStripPattern;
v_stripped_742_ = lp_lean_x2dftml_LeanFtml_pcreReplaceAll(v___x_741_, v_content_738_);
v___x_743_ = lp_lean_x2dftml_LeanFtml_embedEventPattern;
lean_inc(v_stripped_742_);
v___x_744_ = lp_lean_x2dftml_LeanFtml_pcreMatch(v___x_743_, v_stripped_742_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; 
v___x_745_ = lp_lean_x2dftml_LeanFtml_findSrcValue(v_stripped_742_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lp_lean_x2dftml_LeanFtml_renderEmbedWith_finishEmbed(v_stripped_742_);
return v___x_746_;
}
else
{
lean_object* v_val_747_; uint8_t v___x_748_; 
v_val_747_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_val_747_);
lean_dec_ref_known(v___x_745_, 1);
v___x_748_ = lp_lean_x2dftml_LeanFtml_srcHasBadScheme(v_val_747_);
lean_dec(v_val_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; 
v___x_749_ = lp_lean_x2dftml_LeanFtml_renderEmbedWith_finishEmbed(v_stripped_742_);
return v___x_749_;
}
else
{
lean_object* v___x_750_; 
lean_dec(v_stripped_742_);
v___x_750_ = lean_box(0);
return v___x_750_;
}
}
}
else
{
lean_object* v___x_751_; 
lean_dec(v_stripped_742_);
v___x_751_ = lp_lean_x2dftml_LeanFtml_embedError;
return v___x_751_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbedWith___boxed(lean_object* v_pats_752_, lean_object* v_opts_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = lp_lean_x2dftml_LeanFtml_renderEmbedWith(v_pats_752_, v_opts_753_);
lean_dec(v_opts_753_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbed(lean_object* v_opts_755_){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lp_lean_x2dftml_LeanFtml_embedPatterns;
v___x_757_ = lp_lean_x2dftml_LeanFtml_renderEmbedWith(v___x_756_, v_opts_755_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmbed___boxed(lean_object* v_opts_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = lp_lean_x2dftml_LeanFtml_renderEmbed(v_opts_758_);
lean_dec(v_opts_758_);
return v_res_759_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RenderCore(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Pcre(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_EmbedPatterns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_CodeEmbedRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Pcre(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_EmbedPatterns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_codeLangs = _init_lp_lean_x2dftml_LeanFtml_codeLangs();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_codeLangs);
lp_lean_x2dftml_LeanFtml_embedPatterns = _init_lp_lean_x2dftml_LeanFtml_embedPatterns();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_embedPatterns);
lp_lean_x2dftml_LeanFtml_languageStripPattern = _init_lp_lean_x2dftml_LeanFtml_languageStripPattern();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_languageStripPattern);
lp_lean_x2dftml_LeanFtml_embedEventPattern = _init_lp_lean_x2dftml_LeanFtml_embedEventPattern();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_embedEventPattern);
lp_lean_x2dftml_LeanFtml_embedError = _init_lp_lean_x2dftml_LeanFtml_embedError();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_embedError);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
