// Lean compiler output
// Module: LeanFtml.TokenState
// Imports: public import Init public meta import Init
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isPcreWs(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isPcreWs___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isPhpTrim(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isPhpTrim___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimChars(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimChars___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_int_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_int_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_null_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_null_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_map_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_map_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_list_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_list_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_bytes_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_bytes_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedOptVal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedOptVal_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedOptVal_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedOptVal_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedOptVal_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedOptVal = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedOptVal_default___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omGet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omSet(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTokenEntry_default___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_text_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_tok_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_tok_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedTSeg_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTSeg_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTSeg_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTSeg_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTSeg_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedTSeg = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedTSeg_default___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normSegs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushTok(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_allText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_allText___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_allText___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allText(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ParseState_ofSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ParseState_ofSource___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ParseState_ofSource___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ParseState_ofSource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 0, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_ParseState_ofSource___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ParseState_ofSource___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ParseState_ofSource___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseState_ofSource(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseState_addToken(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Bytes(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Bytes___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_segBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_segBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_segBytes___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_segBytes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_segBytes___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_segBytes___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_byteForm_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isContByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isContByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_utf8Valid_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Valid_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_utf8Valid(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Valid___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "0123456789abcdef"};
static const lean_object* lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___lam__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_escapeJsonR3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escapeJsonR3___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__2(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__4_value;
static const lean_string_object lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "{\"$bytes\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serOptVal___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]}"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serOptVal___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serOptVal___closed__9_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serOptVal(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serOptMap(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_serSeg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "{\"t\":"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serSeg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serSeg___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serSeg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "{\"k\":"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serSeg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serSeg___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serSeg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serToken(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "{\"id\":"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ",\"segments\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "],\"tokens\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "],\"equations\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "],\"mathId\":"};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ",\"footnotes\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "],\"bibitems\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "],\"bibitemIds\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "],\"scoredAnchors\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "],\"inclusions\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_serState___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "],\"inclusionsNotExist\":["};
static const lean_object* lp_lean_x2dftml_LeanFtml_serState___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_serState___closed__10_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serState(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isPcreWs(uint32_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 32;
v___x_3_ = lean_uint32_dec_eq(v_c_1_, v___x_2_);
if (v___x_3_ == 0)
{
uint32_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 9;
v___x_5_ = lean_uint32_dec_eq(v_c_1_, v___x_4_);
if (v___x_5_ == 0)
{
uint32_t v___x_6_; uint8_t v___x_7_; 
v___x_6_ = 10;
v___x_7_ = lean_uint32_dec_eq(v_c_1_, v___x_6_);
if (v___x_7_ == 0)
{
uint32_t v___x_8_; uint8_t v___x_9_; 
v___x_8_ = 11;
v___x_9_ = lean_uint32_dec_eq(v_c_1_, v___x_8_);
if (v___x_9_ == 0)
{
uint32_t v___x_10_; uint8_t v___x_11_; 
v___x_10_ = 12;
v___x_11_ = lean_uint32_dec_eq(v_c_1_, v___x_10_);
if (v___x_11_ == 0)
{
uint32_t v___x_12_; uint8_t v___x_13_; 
v___x_12_ = 13;
v___x_13_ = lean_uint32_dec_eq(v_c_1_, v___x_12_);
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isPcreWs___boxed(lean_object* v_c_14_){
_start:
{
uint32_t v_c_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_c_boxed_15_ = lean_unbox_uint32(v_c_14_);
lean_dec(v_c_14_);
v_res_16_ = lp_lean_x2dftml_LeanFtml_isPcreWs(v_c_boxed_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isPhpTrim(uint32_t v_c_18_){
_start:
{
uint32_t v___x_19_; uint8_t v___x_20_; 
v___x_19_ = 32;
v___x_20_ = lean_uint32_dec_eq(v_c_18_, v___x_19_);
if (v___x_20_ == 0)
{
uint32_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = 9;
v___x_22_ = lean_uint32_dec_eq(v_c_18_, v___x_21_);
if (v___x_22_ == 0)
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 10;
v___x_24_ = lean_uint32_dec_eq(v_c_18_, v___x_23_);
if (v___x_24_ == 0)
{
uint32_t v___x_25_; uint8_t v___x_26_; 
v___x_25_ = 13;
v___x_26_ = lean_uint32_dec_eq(v_c_18_, v___x_25_);
if (v___x_26_ == 0)
{
uint32_t v___x_27_; uint8_t v___x_28_; 
v___x_27_ = 0;
v___x_28_ = lean_uint32_dec_eq(v_c_18_, v___x_27_);
if (v___x_28_ == 0)
{
uint32_t v___x_29_; uint8_t v___x_30_; 
v___x_29_ = 11;
v___x_30_ = lean_uint32_dec_eq(v_c_18_, v___x_29_);
return v___x_30_;
}
else
{
return v___x_28_;
}
}
else
{
return v___x_26_;
}
}
else
{
return v___x_24_;
}
}
else
{
return v___x_22_;
}
}
else
{
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isPhpTrim___boxed(lean_object* v_c_31_){
_start:
{
uint32_t v_c_boxed_32_; uint8_t v_res_33_; lean_object* v_r_34_; 
v_c_boxed_32_ = lean_unbox_uint32(v_c_31_);
lean_dec(v_c_31_);
v_res_33_ = lp_lean_x2dftml_LeanFtml_isPhpTrim(v_c_boxed_32_);
v_r_34_ = lean_box(v_res_33_);
return v_r_34_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0(lean_object* v_x_35_){
_start:
{
if (lean_obj_tag(v_x_35_) == 0)
{
return v_x_35_;
}
else
{
lean_object* v_head_36_; lean_object* v_tail_37_; uint32_t v___x_38_; uint8_t v___x_39_; 
v_head_36_ = lean_ctor_get(v_x_35_, 0);
v_tail_37_ = lean_ctor_get(v_x_35_, 1);
v___x_38_ = lean_unbox_uint32(v_head_36_);
v___x_39_ = lp_lean_x2dftml_LeanFtml_isPhpTrim(v___x_38_);
if (v___x_39_ == 0)
{
lean_inc_ref(v_x_35_);
return v_x_35_;
}
else
{
v_x_35_ = v_tail_37_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0___boxed(lean_object* v_x_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0(v_x_41_);
lean_dec(v_x_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimChars(lean_object* v_s_43_){
_start:
{
lean_object* v_a_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v_a_44_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0(v_s_43_);
v___x_45_ = l_List_reverse___redArg(v_a_44_);
v___x_46_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_trimChars_spec__0(v___x_45_);
lean_dec(v___x_45_);
v___x_47_ = l_List_reverse___redArg(v___x_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_trimChars___boxed(lean_object* v_s_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = lp_lean_x2dftml_LeanFtml_trimChars(v_s_48_);
lean_dec(v_s_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorIdx___impl(lean_object* v_x_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_obj_tag_nat(v_x_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorIdx___impl___boxed(lean_object* v_x_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorIdx___impl(v_x_52_);
lean_dec(v_x_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(lean_object* v_t_54_, lean_object* v_k_55_){
_start:
{
switch(lean_obj_tag(v_t_54_))
{
case 2:
{
uint8_t v_a_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_a_56_ = lean_ctor_get_uint8(v_t_54_, 0);
lean_dec_ref_known(v_t_54_, 0);
v___x_57_ = lean_box(v_a_56_);
v___x_58_ = lean_apply_1(v_k_55_, v___x_57_);
return v___x_58_;
}
case 3:
{
return v_k_55_;
}
default: 
{
lean_object* v_a_59_; lean_object* v___x_60_; 
v_a_59_ = lean_ctor_get(v_t_54_, 0);
lean_inc(v_a_59_);
lean_dec(v_t_54_);
v___x_60_ = lean_apply_1(v_k_55_, v_a_59_);
return v___x_60_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorElim(lean_object* v_motive__1_61_, lean_object* v_ctorIdx_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_k_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_63_, v_k_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___boxed(lean_object* v_motive__1_67_, lean_object* v_ctorIdx_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_k_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim(v_motive__1_67_, v_ctorIdx_68_, v_t_69_, v_h_70_, v_k_71_);
lean_dec(v_ctorIdx_68_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_str_elim___redArg(lean_object* v_t_73_, lean_object* v_str_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_73_, v_str_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_str_elim(lean_object* v_motive__1_76_, lean_object* v_t_77_, lean_object* v_h_78_, lean_object* v_str_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_77_, v_str_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_int_elim___redArg(lean_object* v_t_81_, lean_object* v_int_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_81_, v_int_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_int_elim(lean_object* v_motive__1_84_, lean_object* v_t_85_, lean_object* v_h_86_, lean_object* v_int_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_85_, v_int_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_bool_elim___redArg(lean_object* v_t_89_, lean_object* v_bool_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_89_, v_bool_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_bool_elim(lean_object* v_motive__1_92_, lean_object* v_t_93_, lean_object* v_h_94_, lean_object* v_bool_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_93_, v_bool_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_null_elim___redArg(lean_object* v_t_97_, lean_object* v_null_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_97_, v_null_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_null_elim(lean_object* v_motive__1_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_null_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_101_, v_null_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_map_elim___redArg(lean_object* v_t_105_, lean_object* v_map_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_105_, v_map_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_map_elim(lean_object* v_motive__1_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_map_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_109_, v_map_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_list_elim___redArg(lean_object* v_t_113_, lean_object* v_list_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_113_, v_list_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_list_elim(lean_object* v_motive__1_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_list_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_117_, v_list_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_bytes_elim___redArg(lean_object* v_t_121_, lean_object* v_bytes_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_121_, v_bytes_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_OptVal_bytes_elim(lean_object* v_motive__1_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_bytes_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lp_lean_x2dftml_LeanFtml_OptVal_ctorElim___redArg(v_t_125_, v_bytes_127_);
return v___x_128_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
if (lean_obj_tag(v_x_134_) == 0)
{
uint8_t v___x_135_; 
v___x_135_ = 1;
return v___x_135_;
}
else
{
uint8_t v___x_136_; 
v___x_136_ = 0;
return v___x_136_;
}
}
else
{
if (lean_obj_tag(v_x_134_) == 0)
{
uint8_t v___x_137_; 
v___x_137_ = 0;
return v___x_137_;
}
else
{
lean_object* v_head_138_; lean_object* v_tail_139_; lean_object* v_head_140_; lean_object* v_tail_141_; uint32_t v___x_142_; uint32_t v___x_143_; uint8_t v___x_144_; 
v_head_138_ = lean_ctor_get(v_x_133_, 0);
v_tail_139_ = lean_ctor_get(v_x_133_, 1);
v_head_140_ = lean_ctor_get(v_x_134_, 0);
v_tail_141_ = lean_ctor_get(v_x_134_, 1);
v___x_142_ = lean_unbox_uint32(v_head_138_);
v___x_143_ = lean_unbox_uint32(v_head_140_);
v___x_144_ = lean_uint32_dec_eq(v___x_142_, v___x_143_);
if (v___x_144_ == 0)
{
return v___x_144_;
}
else
{
v_x_133_ = v_tail_139_;
v_x_134_ = v_tail_141_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0___boxed(lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
uint8_t v_res_148_; lean_object* v_r_149_; 
v_res_148_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_x_146_, v_x_147_);
lean_dec(v_x_147_);
lean_dec(v_x_146_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object* v_x_150_, lean_object* v_x_151_){
_start:
{
if (lean_obj_tag(v_x_150_) == 0)
{
lean_object* v___x_152_; 
v___x_152_ = lean_box(0);
return v___x_152_;
}
else
{
lean_object* v_head_153_; lean_object* v_tail_154_; lean_object* v_fst_155_; lean_object* v_snd_156_; uint8_t v___x_157_; 
v_head_153_ = lean_ctor_get(v_x_150_, 0);
v_tail_154_ = lean_ctor_get(v_x_150_, 1);
v_fst_155_ = lean_ctor_get(v_head_153_, 0);
v_snd_156_ = lean_ctor_get(v_head_153_, 1);
v___x_157_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_155_, v_x_151_);
if (v___x_157_ == 0)
{
v_x_150_ = v_tail_154_;
goto _start;
}
else
{
lean_object* v___x_159_; 
lean_inc(v_snd_156_);
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v_snd_156_);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omGet___boxed(lean_object* v_x_160_, lean_object* v_x_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = lp_lean_x2dftml_LeanFtml_omGet(v_x_160_, v_x_161_);
lean_dec(v_x_161_);
lean_dec(v_x_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_omSet(lean_object* v_x_163_, lean_object* v_x_164_, lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v_x_164_);
lean_ctor_set(v___x_166_, 1, v_x_165_);
v___x_167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v_x_163_);
return v___x_167_;
}
else
{
lean_object* v_head_168_; lean_object* v_tail_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_191_; 
v_head_168_ = lean_ctor_get(v_x_163_, 0);
v_tail_169_ = lean_ctor_get(v_x_163_, 1);
v_isSharedCheck_191_ = !lean_is_exclusive(v_x_163_);
if (v_isSharedCheck_191_ == 0)
{
v___x_171_ = v_x_163_;
v_isShared_172_ = v_isSharedCheck_191_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_tail_169_);
lean_inc(v_head_168_);
lean_dec(v_x_163_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_191_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v_fst_173_; uint8_t v___x_174_; 
v_fst_173_ = lean_ctor_get(v_head_168_, 0);
v___x_174_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_fst_173_, v_x_164_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = lp_lean_x2dftml_LeanFtml_omSet(v_tail_169_, v_x_164_, v_x_165_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 1, v___x_175_);
v___x_177_ = v___x_171_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_head_168_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
else
{
lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_188_; 
v_isSharedCheck_188_ = !lean_is_exclusive(v_head_168_);
if (v_isSharedCheck_188_ == 0)
{
lean_object* v_unused_189_; lean_object* v_unused_190_; 
v_unused_189_ = lean_ctor_get(v_head_168_, 1);
lean_dec(v_unused_189_);
v_unused_190_ = lean_ctor_get(v_head_168_, 0);
lean_dec(v_unused_190_);
v___x_180_ = v_head_168_;
v_isShared_181_ = v_isSharedCheck_188_;
goto v_resetjp_179_;
}
else
{
lean_dec(v_head_168_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_188_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 1, v_x_165_);
lean_ctor_set(v___x_180_, 0, v_x_164_);
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_x_164_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_x_165_);
v___x_183_ = v_reuseFailAlloc_187_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_185_; 
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_183_);
v___x_185_ = v___x_171_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v_tail_169_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorIdx___impl(lean_object* v_x_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_obj_tag_nat(v_x_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorIdx___impl___boxed(lean_object* v_x_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = lp_lean_x2dftml_LeanFtml_TSeg_ctorIdx___impl(v_x_200_);
lean_dec_ref(v_x_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___redArg(lean_object* v_t_202_, lean_object* v_k_203_){
_start:
{
lean_object* v_a_204_; lean_object* v___x_205_; 
v_a_204_ = lean_ctor_get(v_t_202_, 0);
lean_inc(v_a_204_);
lean_dec_ref(v_t_202_);
v___x_205_ = lean_apply_1(v_k_203_, v_a_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorElim(lean_object* v_motive_206_, lean_object* v_ctorIdx_207_, lean_object* v_t_208_, lean_object* v_h_209_, lean_object* v_k_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___redArg(v_t_208_, v_k_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___boxed(lean_object* v_motive_212_, lean_object* v_ctorIdx_213_, lean_object* v_t_214_, lean_object* v_h_215_, lean_object* v_k_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = lp_lean_x2dftml_LeanFtml_TSeg_ctorElim(v_motive_212_, v_ctorIdx_213_, v_t_214_, v_h_215_, v_k_216_);
lean_dec(v_ctorIdx_213_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_text_elim___redArg(lean_object* v_t_218_, lean_object* v_text_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___redArg(v_t_218_, v_text_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_text_elim(lean_object* v_motive_221_, lean_object* v_t_222_, lean_object* v_h_223_, lean_object* v_text_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___redArg(v_t_222_, v_text_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_tok_elim___redArg(lean_object* v_t_226_, lean_object* v_tok_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___redArg(v_t_226_, v_tok_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_TSeg_tok_elim(lean_object* v_motive_229_, lean_object* v_t_230_, lean_object* v_h_231_, lean_object* v_tok_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lp_lean_x2dftml_LeanFtml_TSeg_ctorElim___redArg(v_t_230_, v_tok_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normSegs(lean_object* v_x_238_){
_start:
{
if (lean_obj_tag(v_x_238_) == 0)
{
return v_x_238_;
}
else
{
lean_object* v_head_239_; 
v_head_239_ = lean_ctor_get(v_x_238_, 0);
if (lean_obj_tag(v_head_239_) == 0)
{
lean_object* v_a_240_; 
v_a_240_ = lean_ctor_get(v_head_239_, 0);
if (lean_obj_tag(v_a_240_) == 0)
{
lean_object* v_tail_241_; 
v_tail_241_ = lean_ctor_get(v_x_238_, 1);
lean_inc(v_tail_241_);
lean_dec_ref_known(v_x_238_, 2);
v_x_238_ = v_tail_241_;
goto _start;
}
else
{
lean_object* v_tail_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_273_; 
lean_inc_ref(v_head_239_);
v_tail_243_ = lean_ctor_get(v_x_238_, 1);
v_isSharedCheck_273_ = !lean_is_exclusive(v_x_238_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; 
v_unused_274_ = lean_ctor_get(v_x_238_, 0);
lean_dec(v_unused_274_);
v___x_245_ = v_x_238_;
v_isShared_246_ = v_isSharedCheck_273_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_tail_243_);
lean_dec(v_x_238_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_273_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; 
v___x_247_ = lp_lean_x2dftml_LeanFtml_normSegs(v_tail_243_);
if (lean_obj_tag(v___x_247_) == 1)
{
lean_object* v_head_248_; 
v_head_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_head_248_);
if (lean_obj_tag(v_head_248_) == 0)
{
lean_object* v_tail_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_265_; 
lean_inc(v_a_240_);
lean_del_object(v___x_245_);
lean_dec_ref_known(v_head_239_, 1);
v_tail_249_ = lean_ctor_get(v___x_247_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_265_ == 0)
{
lean_object* v_unused_266_; 
v_unused_266_ = lean_ctor_get(v___x_247_, 0);
lean_dec(v_unused_266_);
v___x_251_ = v___x_247_;
v_isShared_252_ = v_isSharedCheck_265_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_tail_249_);
lean_dec(v___x_247_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_265_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_264_; 
v_a_253_ = lean_ctor_get(v_head_248_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v_head_248_);
if (v_isSharedCheck_264_ == 0)
{
v___x_255_ = v_head_248_;
v_isShared_256_ = v_isSharedCheck_264_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v_head_248_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_264_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_257_ = l_List_appendTR___redArg(v_a_240_, v_a_253_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 0, v___x_257_);
v___x_259_ = v___x_255_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_263_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v___x_261_; 
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_259_);
v___x_261_ = v___x_251_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_tail_249_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
}
else
{
lean_object* v___x_268_; 
lean_dec(v_head_248_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 1, v___x_247_);
v___x_268_ = v___x_245_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_head_239_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v___x_247_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
else
{
lean_object* v___x_271_; 
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 1, v___x_247_);
v___x_271_ = v___x_245_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_head_239_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v___x_247_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
}
else
{
lean_object* v_tail_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_283_; 
lean_inc_ref(v_head_239_);
v_tail_275_ = lean_ctor_get(v_x_238_, 1);
v_isSharedCheck_283_ = !lean_is_exclusive(v_x_238_);
if (v_isSharedCheck_283_ == 0)
{
lean_object* v_unused_284_; 
v_unused_284_ = lean_ctor_get(v_x_238_, 0);
lean_dec(v_unused_284_);
v___x_277_ = v_x_238_;
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_tail_275_);
lean_dec(v_x_238_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = lp_lean_x2dftml_LeanFtml_normSegs(v_tail_275_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 1, v___x_279_);
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_head_239_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v___x_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushText(lean_object* v_segs_285_, lean_object* v_cs_286_){
_start:
{
uint8_t v___x_287_; 
v___x_287_ = l_List_isEmpty___redArg(v_cs_286_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_288_, 0, v_cs_286_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = l_List_appendTR___redArg(v_segs_285_, v___x_290_);
v___x_292_ = lp_lean_x2dftml_LeanFtml_normSegs(v___x_291_);
return v___x_292_;
}
else
{
lean_dec(v_cs_286_);
return v_segs_285_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushTok(lean_object* v_segs_293_, lean_object* v_n_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_295_, 0, v_n_294_);
v___x_296_ = lean_box(0);
v___x_297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = l_List_appendTR___redArg(v_segs_293_, v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_allText(lean_object* v_x_301_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
lean_object* v___x_302_; 
v___x_302_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_allText___closed__0));
return v___x_302_;
}
else
{
lean_object* v_head_303_; 
v_head_303_ = lean_ctor_get(v_x_301_, 0);
lean_inc(v_head_303_);
if (lean_obj_tag(v_head_303_) == 0)
{
lean_object* v_tail_304_; lean_object* v_a_305_; lean_object* v___x_306_; 
v_tail_304_ = lean_ctor_get(v_x_301_, 1);
lean_inc(v_tail_304_);
lean_dec_ref_known(v_x_301_, 2);
v_a_305_ = lean_ctor_get(v_head_303_, 0);
lean_inc(v_a_305_);
lean_dec_ref_known(v_head_303_, 1);
v___x_306_ = lp_lean_x2dftml_LeanFtml_allText(v_tail_304_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_dec(v_a_305_);
return v___x_306_;
}
else
{
lean_object* v_val_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_315_; 
v_val_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_315_ == 0)
{
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_val_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_311_ = l_List_appendTR___redArg(v_a_305_, v_val_307_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_311_);
v___x_313_ = v___x_309_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_311_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
else
{
lean_object* v___x_316_; 
lean_dec_ref_known(v_head_303_, 1);
lean_dec_ref_known(v_x_301_, 2);
v___x_316_ = lean_box(0);
return v___x_316_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseState_ofSource(lean_object* v_cs_324_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; lean_object* v___x_331_; 
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v_cs_324_);
v___x_326_ = lean_box(0);
v___x_327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_325_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___x_328_ = lp_lean_x2dftml_LeanFtml_normSegs(v___x_327_);
v___x_329_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ParseState_ofSource___closed__1));
v___x_330_ = 0;
v___x_331_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_331_, 0, v___x_328_);
lean_ctor_set(v___x_331_, 1, v___x_326_);
lean_ctor_set(v___x_331_, 2, v___x_329_);
lean_ctor_set_uint8(v___x_331_, sizeof(void*)*3, v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseState_addToken(lean_object* v_st_332_, lean_object* v_rule_333_, lean_object* v_opts_334_){
_start:
{
lean_object* v_work_335_; lean_object* v_tokens_336_; lean_object* v_doc_337_; uint8_t v_fatal_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_351_; 
v_work_335_ = lean_ctor_get(v_st_332_, 0);
v_tokens_336_ = lean_ctor_get(v_st_332_, 1);
v_doc_337_ = lean_ctor_get(v_st_332_, 2);
v_fatal_338_ = lean_ctor_get_uint8(v_st_332_, sizeof(void*)*3);
v_isSharedCheck_351_ = !lean_is_exclusive(v_st_332_);
if (v_isSharedCheck_351_ == 0)
{
v___x_340_ = v_st_332_;
v_isShared_341_ = v_isSharedCheck_351_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_doc_337_);
lean_inc(v_tokens_336_);
lean_inc(v_work_335_);
lean_dec(v_st_332_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_351_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v_rule_333_);
lean_ctor_set(v___x_342_, 1, v_opts_334_);
v___x_343_ = lean_box(0);
v___x_344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_342_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
lean_inc(v_tokens_336_);
v___x_345_ = l_List_appendTR___redArg(v_tokens_336_, v___x_344_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 1, v___x_345_);
v___x_347_ = v___x_340_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_work_335_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_350_, 2, v_doc_337_);
lean_ctor_set_uint8(v_reuseFailAlloc_350_, sizeof(void*)*3, v_fatal_338_);
v___x_347_ = v_reuseFailAlloc_350_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = l_List_lengthTR___redArg(v_tokens_336_);
lean_dec(v_tokens_336_);
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_347_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
return v___x_349_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Bytes(uint32_t v_c_352_){
_start:
{
lean_object* v_n_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v_n_353_ = lean_uint32_to_nat(v_c_352_);
v___x_354_ = lean_unsigned_to_nat(128u);
v___x_355_ = lean_nat_dec_lt(v_n_353_, v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(2048u);
v___x_357_ = lean_nat_dec_lt(v_n_353_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(65536u);
v___x_359_ = lean_nat_dec_lt(v_n_353_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_360_ = lean_unsigned_to_nat(240u);
v___x_361_ = lean_unsigned_to_nat(18u);
v___x_362_ = lean_nat_shiftr(v_n_353_, v___x_361_);
v___x_363_ = lean_nat_add(v___x_360_, v___x_362_);
lean_dec(v___x_362_);
v___x_364_ = lean_unsigned_to_nat(12u);
v___x_365_ = lean_nat_shiftr(v_n_353_, v___x_364_);
v___x_366_ = lean_unsigned_to_nat(64u);
v___x_367_ = lean_nat_mod(v___x_365_, v___x_366_);
lean_dec(v___x_365_);
v___x_368_ = lean_nat_add(v___x_354_, v___x_367_);
lean_dec(v___x_367_);
v___x_369_ = lean_unsigned_to_nat(6u);
v___x_370_ = lean_nat_shiftr(v_n_353_, v___x_369_);
v___x_371_ = lean_nat_mod(v___x_370_, v___x_366_);
lean_dec(v___x_370_);
v___x_372_ = lean_nat_add(v___x_354_, v___x_371_);
lean_dec(v___x_371_);
v___x_373_ = lean_nat_mod(v_n_353_, v___x_366_);
lean_dec(v_n_353_);
v___x_374_ = lean_nat_add(v___x_354_, v___x_373_);
lean_dec(v___x_373_);
v___x_375_ = lean_box(0);
v___x_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_374_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_372_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_368_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
v___x_379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_363_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
return v___x_379_;
}
else
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_380_ = lean_unsigned_to_nat(224u);
v___x_381_ = lean_unsigned_to_nat(12u);
v___x_382_ = lean_nat_shiftr(v_n_353_, v___x_381_);
v___x_383_ = lean_nat_add(v___x_380_, v___x_382_);
lean_dec(v___x_382_);
v___x_384_ = lean_unsigned_to_nat(64u);
v___x_385_ = lean_unsigned_to_nat(6u);
v___x_386_ = lean_nat_shiftr(v_n_353_, v___x_385_);
v___x_387_ = lean_nat_mod(v___x_386_, v___x_384_);
lean_dec(v___x_386_);
v___x_388_ = lean_nat_add(v___x_354_, v___x_387_);
lean_dec(v___x_387_);
v___x_389_ = lean_nat_mod(v_n_353_, v___x_384_);
lean_dec(v_n_353_);
v___x_390_ = lean_nat_add(v___x_354_, v___x_389_);
lean_dec(v___x_389_);
v___x_391_ = lean_box(0);
v___x_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_390_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_388_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
v___x_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_383_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
return v___x_394_;
}
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_395_ = lean_unsigned_to_nat(192u);
v___x_396_ = lean_unsigned_to_nat(64u);
v___x_397_ = lean_unsigned_to_nat(6u);
v___x_398_ = lean_nat_shiftr(v_n_353_, v___x_397_);
v___x_399_ = lean_nat_add(v___x_395_, v___x_398_);
lean_dec(v___x_398_);
v___x_400_ = lean_nat_mod(v_n_353_, v___x_396_);
lean_dec(v_n_353_);
v___x_401_ = lean_nat_add(v___x_354_, v___x_400_);
lean_dec(v___x_400_);
v___x_402_ = lean_box(0);
v___x_403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_399_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
return v___x_404_;
}
}
else
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_box(0);
v___x_406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_406_, 0, v_n_353_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
return v___x_406_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Bytes___boxed(lean_object* v_c_407_){
_start:
{
uint32_t v_c_boxed_408_; lean_object* v_res_409_; 
v_c_boxed_408_ = lean_unbox_uint32(v_c_407_);
lean_dec(v_c_407_);
v_res_409_ = lp_lean_x2dftml_LeanFtml_utf8Bytes(v_c_boxed_408_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
if (lean_obj_tag(v_a_410_) == 0)
{
lean_object* v___x_412_; 
v___x_412_ = lean_array_to_list(v_a_411_);
return v___x_412_;
}
else
{
lean_object* v_head_413_; lean_object* v_tail_414_; uint32_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_head_413_ = lean_ctor_get(v_a_410_, 0);
v_tail_414_ = lean_ctor_get(v_a_410_, 1);
v___x_415_ = lean_unbox_uint32(v_head_413_);
v___x_416_ = lp_lean_x2dftml_LeanFtml_utf8Bytes(v___x_415_);
v___x_417_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_411_, v___x_416_);
v_a_410_ = v_tail_414_;
v_a_411_ = v___x_417_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0___boxed(lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_a_419_, v_a_420_);
lean_dec(v_a_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
if (lean_obj_tag(v_a_422_) == 0)
{
lean_object* v___x_424_; 
v___x_424_ = l_List_reverse___redArg(v_a_423_);
return v___x_424_;
}
else
{
lean_object* v_head_425_; lean_object* v_tail_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_436_; 
v_head_425_ = lean_ctor_get(v_a_422_, 0);
v_tail_426_ = lean_ctor_get(v_a_422_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_a_422_);
if (v_isSharedCheck_436_ == 0)
{
v___x_428_ = v_a_422_;
v_isShared_429_ = v_isSharedCheck_436_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_tail_426_);
lean_inc(v_head_425_);
lean_dec(v_a_422_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_436_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
uint32_t v___x_430_; lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_430_ = lean_unbox_uint32(v_head_425_);
lean_dec(v_head_425_);
v___x_431_ = lean_uint32_to_nat(v___x_430_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 1, v_a_423_);
lean_ctor_set(v___x_428_, 0, v___x_431_);
v___x_433_ = v___x_428_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_a_423_);
v___x_433_ = v_reuseFailAlloc_435_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
v_a_422_ = v_tail_426_;
v_a_423_ = v___x_433_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segBytes(lean_object* v_x_442_){
_start:
{
if (lean_obj_tag(v_x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v_a_443_ = lean_ctor_get(v_x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v_x_442_, 1);
v___x_444_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segBytes___closed__0));
v___x_445_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_a_443_, v___x_444_);
lean_dec(v_a_443_);
return v___x_445_;
}
else
{
lean_object* v_a_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_a_446_ = lean_ctor_get(v_x_442_, 0);
lean_inc(v_a_446_);
lean_dec_ref_known(v_x_442_, 1);
v___x_447_ = lean_box(0);
v___x_448_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segBytes___closed__1));
v___x_449_ = l_Nat_reprFast(v_a_446_);
v___x_450_ = l_String_toListImpl(v___x_449_);
v___x_451_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_450_, v___x_447_);
v___x_452_ = l_List_appendTR___redArg(v___x_448_, v___x_451_);
v___x_453_ = l_List_appendTR___redArg(v___x_452_, v___x_448_);
return v___x_453_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_byteForm_spec__0(lean_object* v_a_454_, lean_object* v_a_455_){
_start:
{
if (lean_obj_tag(v_a_454_) == 0)
{
lean_object* v___x_456_; 
v___x_456_ = lean_array_to_list(v_a_455_);
return v___x_456_;
}
else
{
lean_object* v_head_457_; lean_object* v_tail_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_head_457_ = lean_ctor_get(v_a_454_, 0);
lean_inc(v_head_457_);
v_tail_458_ = lean_ctor_get(v_a_454_, 1);
lean_inc(v_tail_458_);
lean_dec_ref_known(v_a_454_, 2);
v___x_459_ = lp_lean_x2dftml_LeanFtml_segBytes(v_head_457_);
v___x_460_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_455_, v___x_459_);
v_a_454_ = v_tail_458_;
v_a_455_ = v___x_460_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object* v_segs_462_){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segBytes___closed__0));
v___x_464_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_byteForm_spec__0(v_segs_462_, v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isContByte(lean_object* v_b_465_){
_start:
{
lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_466_ = lean_unsigned_to_nat(128u);
v___x_467_ = lean_nat_dec_le(v___x_466_, v_b_465_);
if (v___x_467_ == 0)
{
return v___x_467_;
}
else
{
lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_468_ = lean_unsigned_to_nat(192u);
v___x_469_ = lean_nat_dec_lt(v_b_465_, v___x_468_);
return v___x_469_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isContByte___boxed(lean_object* v_b_470_){
_start:
{
uint8_t v_res_471_; lean_object* v_r_472_; 
v_res_471_ = lp_lean_x2dftml_LeanFtml_isContByte(v_b_470_);
lean_dec(v_b_470_);
v_r_472_ = lean_box(v_res_471_);
return v_r_472_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode_go(lean_object* v_a_473_, lean_object* v_a_474_){
_start:
{
if (lean_obj_tag(v_a_473_) == 0)
{
lean_object* v___x_475_; 
v___x_475_ = lean_box(0);
return v___x_475_;
}
else
{
lean_object* v_head_476_; lean_object* v_tail_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_621_; 
v_head_476_ = lean_ctor_get(v_a_473_, 0);
v_tail_477_ = lean_ctor_get(v_a_473_, 1);
v_isSharedCheck_621_ = !lean_is_exclusive(v_a_473_);
if (v_isSharedCheck_621_ == 0)
{
v___x_479_ = v_a_473_;
v_isShared_480_ = v_isSharedCheck_621_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_tail_477_);
lean_inc(v_head_476_);
lean_dec(v_a_473_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_621_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v_zero_493_; uint8_t v_isZero_494_; 
v_zero_493_ = lean_unsigned_to_nat(0u);
v_isZero_494_ = lean_nat_dec_eq(v_a_474_, v_zero_493_);
if (v_isZero_494_ == 1)
{
lean_object* v___x_495_; 
lean_del_object(v___x_479_);
lean_dec(v_tail_477_);
lean_dec(v_head_476_);
v___x_495_ = lean_box(0);
return v___x_495_;
}
else
{
lean_object* v_one_496_; lean_object* v_n_497_; lean_object* v___x_582_; uint8_t v___x_583_; 
v_one_496_ = lean_unsigned_to_nat(1u);
v_n_497_ = lean_nat_sub(v_a_474_, v_one_496_);
v___x_582_ = lean_unsigned_to_nat(128u);
v___x_583_ = lean_nat_dec_lt(v_head_476_, v___x_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = lean_unsigned_to_nat(194u);
v___x_585_ = lean_nat_dec_le(v___x_584_, v_head_476_);
if (v___x_585_ == 0)
{
goto v___jp_551_;
}
else
{
lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_586_ = lean_unsigned_to_nat(224u);
v___x_587_ = lean_nat_dec_lt(v_head_476_, v___x_586_);
if (v___x_587_ == 0)
{
goto v___jp_551_;
}
else
{
lean_del_object(v___x_479_);
if (lean_obj_tag(v_tail_477_) == 0)
{
uint32_t v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
lean_dec(v_n_497_);
v___x_588_ = l_Char_ofNat(v_head_476_);
lean_dec(v_head_476_);
v___x_589_ = lean_box(0);
v___x_590_ = lean_box_uint32(v___x_588_);
v___x_591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
lean_ctor_set(v___x_591_, 1, v___x_589_);
return v___x_591_;
}
else
{
lean_object* v_head_592_; lean_object* v_tail_593_; uint8_t v___x_594_; 
v_head_592_ = lean_ctor_get(v_tail_477_, 0);
v_tail_593_ = lean_ctor_get(v_tail_477_, 1);
v___x_594_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_592_);
if (v___x_594_ == 0)
{
uint32_t v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_595_ = l_Char_ofNat(v_head_476_);
lean_dec(v_head_476_);
v___x_596_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_477_, v_n_497_);
lean_dec(v_n_497_);
v___x_597_ = lean_box_uint32(v___x_595_);
v___x_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
lean_ctor_set(v___x_598_, 1, v___x_596_);
return v___x_598_;
}
else
{
lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_614_; 
lean_inc(v_tail_593_);
lean_inc(v_head_592_);
v_isSharedCheck_614_ = !lean_is_exclusive(v_tail_477_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; lean_object* v_unused_616_; 
v_unused_615_ = lean_ctor_get(v_tail_477_, 1);
lean_dec(v_unused_615_);
v_unused_616_ = lean_ctor_get(v_tail_477_, 0);
lean_dec(v_unused_616_);
v___x_600_ = v_tail_477_;
v_isShared_601_ = v_isSharedCheck_614_;
goto v_resetjp_599_;
}
else
{
lean_dec(v_tail_477_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_614_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; uint32_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_612_; 
v___x_602_ = lean_unsigned_to_nat(32u);
v___x_603_ = lean_nat_mod(v_head_476_, v___x_602_);
lean_dec(v_head_476_);
v___x_604_ = lean_unsigned_to_nat(64u);
v___x_605_ = lean_nat_mul(v___x_603_, v___x_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_nat_mod(v_head_592_, v___x_604_);
lean_dec(v_head_592_);
v___x_607_ = lean_nat_add(v___x_605_, v___x_606_);
lean_dec(v___x_606_);
lean_dec(v___x_605_);
v___x_608_ = l_Char_ofNat(v___x_607_);
lean_dec(v___x_607_);
v___x_609_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_593_, v_n_497_);
lean_dec(v_n_497_);
v___x_610_ = lean_box_uint32(v___x_608_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 1, v___x_609_);
lean_ctor_set(v___x_600_, 0, v___x_610_);
v___x_612_ = v___x_600_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v___x_609_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
}
}
}
else
{
uint32_t v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
lean_del_object(v___x_479_);
v___x_617_ = l_Char_ofNat(v_head_476_);
lean_dec(v_head_476_);
v___x_618_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_477_, v_n_497_);
lean_dec(v_n_497_);
v___x_619_ = lean_box_uint32(v___x_617_);
v___x_620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
lean_ctor_set(v___x_620_, 1, v___x_618_);
return v___x_620_;
}
v___jp_498_:
{
uint32_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_499_ = l_Char_ofNat(v_head_476_);
lean_dec(v_head_476_);
v___x_500_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_477_, v_n_497_);
lean_dec(v_n_497_);
v___x_501_ = lean_box_uint32(v___x_499_);
v___x_502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
lean_ctor_set(v___x_502_, 1, v___x_500_);
return v___x_502_;
}
v___jp_503_:
{
uint32_t v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_504_ = l_Char_ofNat(v_head_476_);
lean_dec(v_head_476_);
v___x_505_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_477_, v_n_497_);
lean_dec(v_n_497_);
v___x_506_ = lean_box_uint32(v___x_504_);
v___x_507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_507_, 0, v___x_506_);
lean_ctor_set(v___x_507_, 1, v___x_505_);
return v___x_507_;
}
v___jp_508_:
{
lean_object* v___x_509_; uint8_t v___x_510_; 
v___x_509_ = lean_unsigned_to_nat(240u);
v___x_510_ = lean_nat_dec_le(v___x_509_, v_head_476_);
if (v___x_510_ == 0)
{
goto v___jp_503_;
}
else
{
lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_511_ = lean_unsigned_to_nat(245u);
v___x_512_ = lean_nat_dec_lt(v_head_476_, v___x_511_);
if (v___x_512_ == 0)
{
goto v___jp_503_;
}
else
{
if (lean_obj_tag(v_tail_477_) == 1)
{
lean_object* v_tail_513_; 
v_tail_513_ = lean_ctor_get(v_tail_477_, 1);
if (lean_obj_tag(v_tail_513_) == 1)
{
lean_object* v_tail_514_; 
v_tail_514_ = lean_ctor_get(v_tail_513_, 1);
lean_inc(v_tail_514_);
if (lean_obj_tag(v_tail_514_) == 1)
{
lean_object* v_head_515_; lean_object* v_head_516_; lean_object* v_head_517_; lean_object* v_tail_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_545_; 
v_head_515_ = lean_ctor_get(v_tail_477_, 0);
v_head_516_ = lean_ctor_get(v_tail_513_, 0);
v_head_517_ = lean_ctor_get(v_tail_514_, 0);
v_tail_518_ = lean_ctor_get(v_tail_514_, 1);
v_isSharedCheck_545_ = !lean_is_exclusive(v_tail_514_);
if (v_isSharedCheck_545_ == 0)
{
v___x_520_ = v_tail_514_;
v_isShared_521_ = v_isSharedCheck_545_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_tail_518_);
lean_inc(v_head_517_);
lean_dec(v_tail_514_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_545_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
uint8_t v___x_522_; 
v___x_522_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_515_);
if (v___x_522_ == 0)
{
lean_del_object(v___x_520_);
lean_dec(v_tail_518_);
lean_dec(v_head_517_);
goto v___jp_498_;
}
else
{
uint8_t v___x_523_; 
v___x_523_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_516_);
if (v___x_523_ == 0)
{
lean_del_object(v___x_520_);
lean_dec(v_tail_518_);
lean_dec(v_head_517_);
goto v___jp_498_;
}
else
{
uint8_t v___x_524_; 
v___x_524_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_517_);
if (v___x_524_ == 0)
{
lean_del_object(v___x_520_);
lean_dec(v_tail_518_);
lean_dec(v_head_517_);
goto v___jp_498_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; uint32_t v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
lean_inc(v_head_516_);
lean_inc(v_head_515_);
lean_dec_ref_known(v_tail_477_, 2);
v___x_525_ = lean_unsigned_to_nat(8u);
v___x_526_ = lean_nat_mod(v_head_476_, v___x_525_);
lean_dec(v_head_476_);
v___x_527_ = lean_unsigned_to_nat(262144u);
v___x_528_ = lean_nat_mul(v___x_526_, v___x_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_unsigned_to_nat(64u);
v___x_530_ = lean_nat_mod(v_head_515_, v___x_529_);
lean_dec(v_head_515_);
v___x_531_ = lean_unsigned_to_nat(4096u);
v___x_532_ = lean_nat_mul(v___x_530_, v___x_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_nat_add(v___x_528_, v___x_532_);
lean_dec(v___x_532_);
lean_dec(v___x_528_);
v___x_534_ = lean_nat_mod(v_head_516_, v___x_529_);
lean_dec(v_head_516_);
v___x_535_ = lean_nat_mul(v___x_534_, v___x_529_);
lean_dec(v___x_534_);
v___x_536_ = lean_nat_add(v___x_533_, v___x_535_);
lean_dec(v___x_535_);
lean_dec(v___x_533_);
v___x_537_ = lean_nat_mod(v_head_517_, v___x_529_);
lean_dec(v_head_517_);
v___x_538_ = lean_nat_add(v___x_536_, v___x_537_);
lean_dec(v___x_537_);
lean_dec(v___x_536_);
v___x_539_ = l_Char_ofNat(v___x_538_);
lean_dec(v___x_538_);
v___x_540_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_518_, v_n_497_);
lean_dec(v_n_497_);
v___x_541_ = lean_box_uint32(v___x_539_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_540_);
lean_ctor_set(v___x_520_, 0, v___x_541_);
v___x_543_ = v___x_520_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v___x_540_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
}
}
else
{
lean_dec(v_tail_514_);
lean_dec_ref_known(v_tail_477_, 2);
lean_dec(v_n_497_);
goto v___jp_488_;
}
}
else
{
lean_dec_ref_known(v_tail_477_, 2);
lean_dec(v_n_497_);
goto v___jp_488_;
}
}
else
{
lean_dec(v_n_497_);
lean_dec(v_tail_477_);
goto v___jp_488_;
}
}
}
}
v___jp_546_:
{
uint32_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_547_ = l_Char_ofNat(v_head_476_);
lean_dec(v_head_476_);
v___x_548_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_477_, v_n_497_);
lean_dec(v_n_497_);
v___x_549_ = lean_box_uint32(v___x_547_);
v___x_550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v___x_548_);
return v___x_550_;
}
v___jp_551_:
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_unsigned_to_nat(224u);
v___x_553_ = lean_nat_dec_le(v___x_552_, v_head_476_);
if (v___x_553_ == 0)
{
lean_del_object(v___x_479_);
goto v___jp_508_;
}
else
{
lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_554_ = lean_unsigned_to_nat(240u);
v___x_555_ = lean_nat_dec_lt(v_head_476_, v___x_554_);
if (v___x_555_ == 0)
{
lean_del_object(v___x_479_);
goto v___jp_508_;
}
else
{
if (lean_obj_tag(v_tail_477_) == 1)
{
lean_object* v_tail_556_; 
v_tail_556_ = lean_ctor_get(v_tail_477_, 1);
lean_inc(v_tail_556_);
if (lean_obj_tag(v_tail_556_) == 1)
{
lean_object* v_head_557_; lean_object* v_head_558_; lean_object* v_tail_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_581_; 
lean_del_object(v___x_479_);
v_head_557_ = lean_ctor_get(v_tail_477_, 0);
v_head_558_ = lean_ctor_get(v_tail_556_, 0);
v_tail_559_ = lean_ctor_get(v_tail_556_, 1);
v_isSharedCheck_581_ = !lean_is_exclusive(v_tail_556_);
if (v_isSharedCheck_581_ == 0)
{
v___x_561_ = v_tail_556_;
v_isShared_562_ = v_isSharedCheck_581_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_tail_559_);
lean_inc(v_head_558_);
lean_dec(v_tail_556_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_581_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
uint8_t v___x_563_; 
v___x_563_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_557_);
if (v___x_563_ == 0)
{
lean_del_object(v___x_561_);
lean_dec(v_tail_559_);
lean_dec(v_head_558_);
goto v___jp_546_;
}
else
{
uint8_t v___x_564_; 
v___x_564_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_558_);
if (v___x_564_ == 0)
{
lean_del_object(v___x_561_);
lean_dec(v_tail_559_);
lean_dec(v_head_558_);
goto v___jp_546_;
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; uint32_t v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
lean_inc(v_head_557_);
lean_dec_ref_known(v_tail_477_, 2);
v___x_565_ = lean_unsigned_to_nat(16u);
v___x_566_ = lean_nat_mod(v_head_476_, v___x_565_);
lean_dec(v_head_476_);
v___x_567_ = lean_unsigned_to_nat(4096u);
v___x_568_ = lean_nat_mul(v___x_566_, v___x_567_);
lean_dec(v___x_566_);
v___x_569_ = lean_unsigned_to_nat(64u);
v___x_570_ = lean_nat_mod(v_head_557_, v___x_569_);
lean_dec(v_head_557_);
v___x_571_ = lean_nat_mul(v___x_570_, v___x_569_);
lean_dec(v___x_570_);
v___x_572_ = lean_nat_add(v___x_568_, v___x_571_);
lean_dec(v___x_571_);
lean_dec(v___x_568_);
v___x_573_ = lean_nat_mod(v_head_558_, v___x_569_);
lean_dec(v_head_558_);
v___x_574_ = lean_nat_add(v___x_572_, v___x_573_);
lean_dec(v___x_573_);
lean_dec(v___x_572_);
v___x_575_ = l_Char_ofNat(v___x_574_);
lean_dec(v___x_574_);
v___x_576_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_559_, v_n_497_);
lean_dec(v_n_497_);
v___x_577_ = lean_box_uint32(v___x_575_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 1, v___x_576_);
lean_ctor_set(v___x_561_, 0, v___x_577_);
v___x_579_ = v___x_561_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_577_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v___x_576_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_tail_477_, 2);
lean_dec(v_tail_556_);
lean_dec(v_n_497_);
goto v___jp_481_;
}
}
else
{
lean_dec(v_n_497_);
lean_dec(v_tail_477_);
goto v___jp_481_;
}
}
}
}
}
v___jp_481_:
{
uint32_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_482_ = l_Char_ofNat(v_head_476_);
lean_dec(v_head_476_);
v___x_483_ = lean_box(0);
v___x_484_ = lean_box_uint32(v___x_482_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 1, v___x_483_);
lean_ctor_set(v___x_479_, 0, v___x_484_);
v___x_486_ = v___x_479_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v___x_483_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
v___jp_488_:
{
uint32_t v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_489_ = l_Char_ofNat(v_head_476_);
lean_dec(v_head_476_);
v___x_490_ = lean_box(0);
v___x_491_ = lean_box_uint32(v___x_489_);
v___x_492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v___x_490_);
return v___x_492_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode_go___boxed(lean_object* v_a_622_, lean_object* v_a_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_a_622_, v_a_623_);
lean_dec(v_a_623_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode(lean_object* v_bs_625_){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = l_List_lengthTR___redArg(v_bs_625_);
v___x_627_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_bs_625_, v___x_626_);
lean_dec(v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_utf8Valid_go(lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
if (lean_obj_tag(v_a_628_) == 0)
{
uint8_t v___x_630_; 
lean_dec(v_a_629_);
v___x_630_ = 1;
return v___x_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v_zero_633_; uint8_t v_isZero_634_; 
v_head_631_ = lean_ctor_get(v_a_628_, 0);
v_tail_632_ = lean_ctor_get(v_a_628_, 1);
v_zero_633_ = lean_unsigned_to_nat(0u);
v_isZero_634_ = lean_nat_dec_eq(v_a_629_, v_zero_633_);
if (v_isZero_634_ == 1)
{
uint8_t v___x_635_; 
lean_dec(v_a_629_);
v___x_635_ = 0;
return v___x_635_;
}
else
{
lean_object* v_one_636_; lean_object* v_n_637_; lean_object* v___x_638_; uint8_t v___x_639_; uint8_t v___y_641_; uint8_t v___y_657_; uint8_t v___y_688_; uint8_t v___y_712_; 
v_one_636_ = lean_unsigned_to_nat(1u);
v_n_637_ = lean_nat_sub(v_a_629_, v_one_636_);
lean_dec(v_a_629_);
v___x_638_ = lean_unsigned_to_nat(128u);
v___x_639_ = lean_nat_dec_lt(v_head_631_, v___x_638_);
if (v___x_639_ == 0)
{
lean_object* v___x_736_; uint8_t v___x_737_; 
v___x_736_ = lean_unsigned_to_nat(194u);
v___x_737_ = lean_nat_dec_le(v___x_736_, v_head_631_);
if (v___x_737_ == 0)
{
v___y_712_ = v___x_639_;
goto v___jp_711_;
}
else
{
lean_object* v___x_738_; uint8_t v___x_739_; 
v___x_738_ = lean_unsigned_to_nat(224u);
v___x_739_ = lean_nat_dec_lt(v_head_631_, v___x_738_);
if (v___x_739_ == 0)
{
v___y_712_ = v___x_739_;
goto v___jp_711_;
}
else
{
if (lean_obj_tag(v_tail_632_) == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
lean_object* v_head_740_; lean_object* v_tail_741_; uint8_t v___x_742_; 
v_head_740_ = lean_ctor_get(v_tail_632_, 0);
v_tail_741_ = lean_ctor_get(v_tail_632_, 1);
v___x_742_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_740_);
if (v___x_742_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
v_a_628_ = v_tail_741_;
v_a_629_ = v_n_637_;
goto _start;
}
}
}
}
}
else
{
v_a_628_ = v_tail_632_;
v_a_629_ = v_n_637_;
goto _start;
}
v___jp_640_:
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = lean_unsigned_to_nat(244u);
v___x_643_ = lean_nat_dec_eq(v_head_631_, v___x_642_);
if (v___x_643_ == 0)
{
lean_dec(v_n_637_);
return v___x_643_;
}
else
{
if (lean_obj_tag(v_tail_632_) == 1)
{
lean_object* v_tail_644_; 
v_tail_644_ = lean_ctor_get(v_tail_632_, 1);
if (lean_obj_tag(v_tail_644_) == 1)
{
lean_object* v_tail_645_; 
v_tail_645_ = lean_ctor_get(v_tail_644_, 1);
if (lean_obj_tag(v_tail_645_) == 1)
{
lean_object* v_head_646_; lean_object* v_head_647_; lean_object* v_head_648_; lean_object* v_tail_649_; uint8_t v___x_650_; 
v_head_646_ = lean_ctor_get(v_tail_632_, 0);
v_head_647_ = lean_ctor_get(v_tail_644_, 0);
v_head_648_ = lean_ctor_get(v_tail_645_, 0);
v_tail_649_ = lean_ctor_get(v_tail_645_, 1);
v___x_650_ = lean_nat_dec_le(v___x_638_, v_head_646_);
if (v___x_650_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
lean_object* v___x_651_; uint8_t v___x_652_; 
v___x_651_ = lean_unsigned_to_nat(144u);
v___x_652_ = lean_nat_dec_lt(v_head_646_, v___x_651_);
if (v___x_652_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_653_; 
v___x_653_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_647_);
if (v___x_653_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_654_; 
v___x_654_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_648_);
if (v___x_654_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
v_a_628_ = v_tail_649_;
v_a_629_ = v_n_637_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_n_637_);
return v___y_641_;
}
}
else
{
lean_dec(v_n_637_);
return v___y_641_;
}
}
else
{
lean_dec(v_n_637_);
return v___y_641_;
}
}
}
v___jp_656_:
{
lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_658_ = lean_unsigned_to_nat(240u);
v___x_659_ = lean_nat_dec_eq(v_head_631_, v___x_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_660_ = lean_unsigned_to_nat(241u);
v___x_661_ = lean_nat_dec_le(v___x_660_, v_head_631_);
if (v___x_661_ == 0)
{
v___y_641_ = v___x_639_;
goto v___jp_640_;
}
else
{
lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_662_ = lean_unsigned_to_nat(244u);
v___x_663_ = lean_nat_dec_lt(v_head_631_, v___x_662_);
if (v___x_663_ == 0)
{
v___y_641_ = v___x_663_;
goto v___jp_640_;
}
else
{
if (lean_obj_tag(v_tail_632_) == 1)
{
lean_object* v_tail_664_; 
v_tail_664_ = lean_ctor_get(v_tail_632_, 1);
if (lean_obj_tag(v_tail_664_) == 1)
{
lean_object* v_tail_665_; 
v_tail_665_ = lean_ctor_get(v_tail_664_, 1);
if (lean_obj_tag(v_tail_665_) == 1)
{
lean_object* v_head_666_; lean_object* v_head_667_; lean_object* v_head_668_; lean_object* v_tail_669_; uint8_t v___x_670_; 
v_head_666_ = lean_ctor_get(v_tail_632_, 0);
v_head_667_ = lean_ctor_get(v_tail_664_, 0);
v_head_668_ = lean_ctor_get(v_tail_665_, 0);
v_tail_669_ = lean_ctor_get(v_tail_665_, 1);
v___x_670_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_666_);
if (v___x_670_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_671_; 
v___x_671_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_667_);
if (v___x_671_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_672_; 
v___x_672_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_668_);
if (v___x_672_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
v_a_628_ = v_tail_669_;
v_a_629_ = v_n_637_;
goto _start;
}
}
}
}
else
{
lean_dec(v_n_637_);
return v___x_659_;
}
}
else
{
lean_dec(v_n_637_);
return v___x_659_;
}
}
else
{
lean_dec(v_n_637_);
return v___x_659_;
}
}
}
}
else
{
if (lean_obj_tag(v_tail_632_) == 1)
{
lean_object* v_tail_674_; 
v_tail_674_ = lean_ctor_get(v_tail_632_, 1);
if (lean_obj_tag(v_tail_674_) == 1)
{
lean_object* v_tail_675_; 
v_tail_675_ = lean_ctor_get(v_tail_674_, 1);
if (lean_obj_tag(v_tail_675_) == 1)
{
lean_object* v_head_676_; lean_object* v_head_677_; lean_object* v_head_678_; lean_object* v_tail_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v_head_676_ = lean_ctor_get(v_tail_632_, 0);
v_head_677_ = lean_ctor_get(v_tail_674_, 0);
v_head_678_ = lean_ctor_get(v_tail_675_, 0);
v_tail_679_ = lean_ctor_get(v_tail_675_, 1);
v___x_680_ = lean_unsigned_to_nat(144u);
v___x_681_ = lean_nat_dec_le(v___x_680_, v_head_676_);
if (v___x_681_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = lean_unsigned_to_nat(192u);
v___x_683_ = lean_nat_dec_lt(v_head_676_, v___x_682_);
if (v___x_683_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_684_; 
v___x_684_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_677_);
if (v___x_684_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_685_; 
v___x_685_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_678_);
if (v___x_685_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
v_a_628_ = v_tail_679_;
v_a_629_ = v_n_637_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_n_637_);
return v___y_657_;
}
}
else
{
lean_dec(v_n_637_);
return v___y_657_;
}
}
else
{
lean_dec(v_n_637_);
return v___y_657_;
}
}
}
v___jp_687_:
{
lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_689_ = lean_unsigned_to_nat(237u);
v___x_690_ = lean_nat_dec_eq(v_head_631_, v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_691_ = lean_unsigned_to_nat(238u);
v___x_692_ = lean_nat_dec_le(v___x_691_, v_head_631_);
if (v___x_692_ == 0)
{
v___y_657_ = v___x_639_;
goto v___jp_656_;
}
else
{
lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_693_ = lean_unsigned_to_nat(240u);
v___x_694_ = lean_nat_dec_lt(v_head_631_, v___x_693_);
if (v___x_694_ == 0)
{
v___y_657_ = v___x_694_;
goto v___jp_656_;
}
else
{
if (lean_obj_tag(v_tail_632_) == 1)
{
lean_object* v_tail_695_; 
v_tail_695_ = lean_ctor_get(v_tail_632_, 1);
if (lean_obj_tag(v_tail_695_) == 1)
{
lean_object* v_head_696_; lean_object* v_head_697_; lean_object* v_tail_698_; uint8_t v___x_699_; 
v_head_696_ = lean_ctor_get(v_tail_632_, 0);
v_head_697_ = lean_ctor_get(v_tail_695_, 0);
v_tail_698_ = lean_ctor_get(v_tail_695_, 1);
v___x_699_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_696_);
if (v___x_699_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_700_; 
v___x_700_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_697_);
if (v___x_700_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
v_a_628_ = v_tail_698_;
v_a_629_ = v_n_637_;
goto _start;
}
}
}
else
{
lean_dec(v_n_637_);
return v___x_690_;
}
}
else
{
lean_dec(v_n_637_);
return v___x_690_;
}
}
}
}
else
{
if (lean_obj_tag(v_tail_632_) == 1)
{
lean_object* v_tail_702_; 
v_tail_702_ = lean_ctor_get(v_tail_632_, 1);
if (lean_obj_tag(v_tail_702_) == 1)
{
lean_object* v_head_703_; lean_object* v_head_704_; lean_object* v_tail_705_; uint8_t v___x_706_; 
v_head_703_ = lean_ctor_get(v_tail_632_, 0);
v_head_704_ = lean_ctor_get(v_tail_702_, 0);
v_tail_705_ = lean_ctor_get(v_tail_702_, 1);
v___x_706_ = lean_nat_dec_le(v___x_638_, v_head_703_);
if (v___x_706_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_707_ = lean_unsigned_to_nat(160u);
v___x_708_ = lean_nat_dec_lt(v_head_703_, v___x_707_);
if (v___x_708_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_709_; 
v___x_709_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_704_);
if (v___x_709_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
v_a_628_ = v_tail_705_;
v_a_629_ = v_n_637_;
goto _start;
}
}
}
}
else
{
lean_dec(v_n_637_);
return v___y_688_;
}
}
else
{
lean_dec(v_n_637_);
return v___y_688_;
}
}
}
v___jp_711_:
{
lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_713_ = lean_unsigned_to_nat(224u);
v___x_714_ = lean_nat_dec_eq(v_head_631_, v___x_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_715_ = lean_unsigned_to_nat(225u);
v___x_716_ = lean_nat_dec_le(v___x_715_, v_head_631_);
if (v___x_716_ == 0)
{
v___y_688_ = v___x_639_;
goto v___jp_687_;
}
else
{
lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_717_ = lean_unsigned_to_nat(237u);
v___x_718_ = lean_nat_dec_lt(v_head_631_, v___x_717_);
if (v___x_718_ == 0)
{
v___y_688_ = v___x_718_;
goto v___jp_687_;
}
else
{
if (lean_obj_tag(v_tail_632_) == 1)
{
lean_object* v_tail_719_; 
v_tail_719_ = lean_ctor_get(v_tail_632_, 1);
if (lean_obj_tag(v_tail_719_) == 1)
{
lean_object* v_head_720_; lean_object* v_head_721_; lean_object* v_tail_722_; uint8_t v___x_723_; 
v_head_720_ = lean_ctor_get(v_tail_632_, 0);
v_head_721_ = lean_ctor_get(v_tail_719_, 0);
v_tail_722_ = lean_ctor_get(v_tail_719_, 1);
v___x_723_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_720_);
if (v___x_723_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_724_; 
v___x_724_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_721_);
if (v___x_724_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
v_a_628_ = v_tail_722_;
v_a_629_ = v_n_637_;
goto _start;
}
}
}
else
{
lean_dec(v_n_637_);
return v___x_714_;
}
}
else
{
lean_dec(v_n_637_);
return v___x_714_;
}
}
}
}
else
{
if (lean_obj_tag(v_tail_632_) == 1)
{
lean_object* v_tail_726_; 
v_tail_726_ = lean_ctor_get(v_tail_632_, 1);
if (lean_obj_tag(v_tail_726_) == 1)
{
lean_object* v_head_727_; lean_object* v_head_728_; lean_object* v_tail_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v_head_727_ = lean_ctor_get(v_tail_632_, 0);
v_head_728_ = lean_ctor_get(v_tail_726_, 0);
v_tail_729_ = lean_ctor_get(v_tail_726_, 1);
v___x_730_ = lean_unsigned_to_nat(160u);
v___x_731_ = lean_nat_dec_le(v___x_730_, v_head_727_);
if (v___x_731_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_732_ = lean_unsigned_to_nat(192u);
v___x_733_ = lean_nat_dec_lt(v_head_727_, v___x_732_);
if (v___x_733_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
uint8_t v___x_734_; 
v___x_734_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_728_);
if (v___x_734_ == 0)
{
lean_dec(v_n_637_);
return v___x_639_;
}
else
{
v_a_628_ = v_tail_729_;
v_a_629_ = v_n_637_;
goto _start;
}
}
}
}
else
{
lean_dec(v_n_637_);
return v___y_712_;
}
}
else
{
lean_dec(v_n_637_);
return v___y_712_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Valid_go___boxed(lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
uint8_t v_res_747_; lean_object* v_r_748_; 
v_res_747_ = lp_lean_x2dftml_LeanFtml_utf8Valid_go(v_a_745_, v_a_746_);
lean_dec(v_a_745_);
v_r_748_ = lean_box(v_res_747_);
return v_r_748_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_utf8Valid(lean_object* v_bs_749_){
_start:
{
lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_750_ = l_List_lengthTR___redArg(v_bs_749_);
v___x_751_ = lp_lean_x2dftml_LeanFtml_utf8Valid_go(v_bs_749_, v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Valid___boxed(lean_object* v_bs_752_){
_start:
{
uint8_t v_res_753_; lean_object* v_r_754_; 
v_res_753_ = lp_lean_x2dftml_LeanFtml_utf8Valid(v_bs_752_);
lean_dec(v_bs_752_);
v_r_754_ = lean_box(v_res_753_);
return v_r_754_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1(void){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__0));
v___x_757_ = l_String_toListImpl(v___x_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___lam__0(uint32_t v___x_758_, lean_object* v_k_759_){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_760_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1, &lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1);
v___x_761_ = lean_unsigned_to_nat(16u);
v___x_762_ = lean_nat_mod(v_k_759_, v___x_761_);
v___x_763_ = lean_box_uint32(v___x_758_);
v___x_764_ = l_List_get_x21Internal___redArg(v___x_763_, v___x_760_, v___x_762_);
lean_dec(v___x_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___lam__0___boxed(lean_object* v___x_765_, lean_object* v_k_766_){
_start:
{
uint32_t v___x_93__boxed_767_; lean_object* v_res_768_; 
v___x_93__boxed_767_ = lean_unbox_uint32(v___x_765_);
lean_dec(v___x_765_);
v_res_768_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_93__boxed_767_, v_k_766_);
lean_dec(v_k_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4(lean_object* v_n_769_){
_start:
{
uint32_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_770_ = 65;
v___x_771_ = lean_unsigned_to_nat(12u);
v___x_772_ = lean_nat_shiftr(v_n_769_, v___x_771_);
v___x_773_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_770_, v___x_772_);
lean_dec(v___x_772_);
v___x_774_ = lean_unsigned_to_nat(8u);
v___x_775_ = lean_nat_shiftr(v_n_769_, v___x_774_);
v___x_776_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_770_, v___x_775_);
lean_dec(v___x_775_);
v___x_777_ = lean_unsigned_to_nat(4u);
v___x_778_ = lean_nat_shiftr(v_n_769_, v___x_777_);
v___x_779_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_770_, v___x_778_);
lean_dec(v___x_778_);
v___x_780_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_770_, v_n_769_);
v___x_781_ = lean_box(0);
v___x_782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_782_, 0, v___x_780_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
v___x_783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_779_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_776_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_773_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___boxed(lean_object* v_n_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = lp_lean_x2dftml_LeanFtml_hex4(v_n_786_);
lean_dec(v_n_786_);
return v_res_787_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_788_; lean_object* v___x_789_; 
v___x_788_ = 92;
v___x_789_ = lean_box_uint32(v___x_788_);
return v___x_789_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = lean_box(0);
v___x_791_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
v___x_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
lean_ctor_set(v___x_792_, 1, v___x_790_);
return v___x_792_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1(void){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_793_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0);
v___x_794_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
v___x_795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
lean_ctor_set(v___x_795_, 1, v___x_793_);
return v___x_795_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1(void){
_start:
{
uint32_t v___x_796_; lean_object* v___x_797_; 
v___x_796_ = 34;
v___x_797_ = lean_box_uint32(v___x_796_);
return v___x_797_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = lean_box(0);
v___x_799_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1;
v___x_800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
lean_ctor_set(v___x_800_, 1, v___x_798_);
return v___x_800_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_801_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2);
v___x_802_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
v___x_803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
lean_ctor_set(v___x_803_, 1, v___x_801_);
return v___x_803_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed__const__1(void){
_start:
{
uint32_t v___x_804_; lean_object* v___x_805_; 
v___x_804_ = 117;
v___x_805_ = lean_box_uint32(v___x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc(uint32_t v_c_806_){
_start:
{
uint32_t v___x_807_; uint8_t v___x_808_; 
v___x_807_ = 34;
v___x_808_ = lean_uint32_dec_eq(v_c_806_, v___x_807_);
if (v___x_808_ == 0)
{
uint32_t v___x_809_; uint8_t v___x_810_; 
v___x_809_ = 92;
v___x_810_ = lean_uint32_dec_eq(v_c_806_, v___x_809_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_811_ = lean_uint32_to_nat(v_c_806_);
v___x_812_ = lean_unsigned_to_nat(32u);
v___x_813_ = lean_nat_dec_lt(v___x_811_, v___x_812_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
lean_dec(v___x_811_);
v___x_814_ = lean_box(0);
v___x_815_ = lean_box_uint32(v_c_806_);
v___x_816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___x_814_);
return v___x_816_;
}
else
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_817_ = lp_lean_x2dftml_LeanFtml_hex4(v___x_811_);
lean_dec(v___x_811_);
v___x_818_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed__const__1;
v___x_819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
lean_ctor_set(v___x_819_, 1, v___x_817_);
v___x_820_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
v___x_821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
lean_ctor_set(v___x_821_, 1, v___x_819_);
return v___x_821_;
}
}
else
{
lean_object* v___x_822_; 
v___x_822_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1);
return v___x_822_;
}
}
else
{
lean_object* v___x_823_; 
v___x_823_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3);
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed(lean_object* v_c_824_){
_start:
{
uint32_t v_c_boxed_825_; lean_object* v_res_826_; 
v_c_boxed_825_ = lean_unbox_uint32(v_c_824_);
lean_dec(v_c_824_);
v_res_826_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc(v_c_boxed_825_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0(lean_object* v_a_827_, lean_object* v_a_828_){
_start:
{
if (lean_obj_tag(v_a_827_) == 0)
{
lean_object* v___x_829_; 
v___x_829_ = lean_array_to_list(v_a_828_);
return v___x_829_;
}
else
{
lean_object* v_head_830_; lean_object* v_tail_831_; uint32_t v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_head_830_ = lean_ctor_get(v_a_827_, 0);
v_tail_831_ = lean_ctor_get(v_a_827_, 1);
v___x_832_ = lean_unbox_uint32(v_head_830_);
v___x_833_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc(v___x_832_);
v___x_834_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_828_, v___x_833_);
v_a_827_ = v_tail_831_;
v_a_828_ = v___x_834_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0___boxed(lean_object* v_a_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0(v_a_836_, v_a_837_);
lean_dec(v_a_836_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3(lean_object* v_cs_841_){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_842_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escapeJsonR3___closed__0));
v___x_843_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0(v_cs_841_, v___x_842_);
v___x_844_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1;
v___x_845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v___x_843_);
v___x_846_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2);
v___x_847_ = l_List_appendTR___redArg(v___x_845_, v___x_846_);
v___x_848_ = lean_string_mk(v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3___boxed(lean_object* v_cs_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_cs_849_);
lean_dec(v_cs_849_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__2(lean_object* v_a_851_, lean_object* v_a_852_){
_start:
{
if (lean_obj_tag(v_a_851_) == 0)
{
lean_object* v___x_853_; 
v___x_853_ = l_List_reverse___redArg(v_a_852_);
return v___x_853_;
}
else
{
lean_object* v_head_854_; lean_object* v_tail_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_864_; 
v_head_854_ = lean_ctor_get(v_a_851_, 0);
v_tail_855_ = lean_ctor_get(v_a_851_, 1);
v_isSharedCheck_864_ = !lean_is_exclusive(v_a_851_);
if (v_isSharedCheck_864_ == 0)
{
v___x_857_ = v_a_851_;
v_isShared_858_ = v_isSharedCheck_864_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_tail_855_);
lean_inc(v_head_854_);
lean_dec(v_a_851_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_864_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_859_ = l_Nat_reprFast(v_head_854_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 1, v_a_852_);
lean_ctor_set(v___x_857_, 0, v___x_859_);
v___x_861_ = v___x_857_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___x_859_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v_a_852_);
v___x_861_ = v_reuseFailAlloc_863_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
v_a_851_ = v_tail_855_;
v_a_852_ = v___x_861_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0(lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
if (lean_obj_tag(v_a_871_) == 0)
{
lean_object* v___x_873_; 
v___x_873_ = l_List_reverse___redArg(v_a_872_);
return v___x_873_;
}
else
{
lean_object* v_head_874_; lean_object* v_tail_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_890_; 
v_head_874_ = lean_ctor_get(v_a_871_, 0);
v_tail_875_ = lean_ctor_get(v_a_871_, 1);
v_isSharedCheck_890_ = !lean_is_exclusive(v_a_871_);
if (v_isSharedCheck_890_ == 0)
{
v___x_877_ = v_a_871_;
v_isShared_878_ = v_isSharedCheck_890_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_tail_875_);
lean_inc(v_head_874_);
lean_dec(v_a_871_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_890_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v_fst_879_; lean_object* v_snd_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v_fst_879_ = lean_ctor_get(v_head_874_, 0);
lean_inc(v_fst_879_);
v_snd_880_ = lean_ctor_get(v_head_874_, 1);
lean_inc(v_snd_880_);
lean_dec(v_head_874_);
v___x_881_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_fst_879_);
lean_dec(v_fst_879_);
v___x_882_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0___closed__0));
v___x_883_ = lean_string_append(v___x_881_, v___x_882_);
v___x_884_ = lp_lean_x2dftml_LeanFtml_serOptVal(v_snd_880_);
v___x_885_ = lean_string_append(v___x_883_, v___x_884_);
lean_dec_ref(v___x_884_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 1, v_a_872_);
lean_ctor_set(v___x_877_, 0, v___x_885_);
v___x_887_ = v___x_877_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_a_872_);
v___x_887_ = v_reuseFailAlloc_889_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
v_a_871_ = v_tail_875_;
v_a_872_ = v___x_887_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serOptVal(lean_object* v_x_896_){
_start:
{
switch(lean_obj_tag(v_x_896_))
{
case 0:
{
lean_object* v_a_897_; lean_object* v___x_898_; 
v_a_897_ = lean_ctor_get(v_x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v_x_896_, 1);
v___x_898_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_a_897_);
lean_dec(v_a_897_);
return v___x_898_;
}
case 1:
{
lean_object* v_a_899_; lean_object* v___x_900_; 
v_a_899_ = lean_ctor_get(v_x_896_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v_x_896_, 1);
v___x_900_ = l_Int_repr(v_a_899_);
lean_dec(v_a_899_);
return v___x_900_;
}
case 2:
{
uint8_t v_a_901_; 
v_a_901_ = lean_ctor_get_uint8(v_x_896_, 0);
lean_dec_ref_known(v_x_896_, 0);
if (v_a_901_ == 0)
{
lean_object* v___x_902_; 
v___x_902_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__0));
return v___x_902_;
}
else
{
lean_object* v___x_903_; 
v___x_903_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__1));
return v___x_903_;
}
}
case 3:
{
lean_object* v___x_904_; 
v___x_904_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__2));
return v___x_904_;
}
case 4:
{
lean_object* v_a_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_a_905_ = lean_ctor_get(v_x_896_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v_x_896_, 1);
v___x_906_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__3));
v___x_907_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_908_ = lean_box(0);
v___x_909_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0(v_a_905_, v___x_908_);
v___x_910_ = l_String_intercalate(v___x_907_, v___x_909_);
v___x_911_ = lean_string_append(v___x_906_, v___x_910_);
lean_dec_ref(v___x_910_);
v___x_912_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__5));
v___x_913_ = lean_string_append(v___x_911_, v___x_912_);
return v___x_913_;
}
case 5:
{
lean_object* v_a_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_914_ = lean_ctor_get(v_x_896_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v_x_896_, 1);
v___x_915_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_916_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_917_ = lean_box(0);
v___x_918_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__1(v_a_914_, v___x_917_);
v___x_919_ = l_String_intercalate(v___x_916_, v___x_918_);
v___x_920_ = lean_string_append(v___x_915_, v___x_919_);
lean_dec_ref(v___x_919_);
v___x_921_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_922_ = lean_string_append(v___x_920_, v___x_921_);
return v___x_922_;
}
default: 
{
lean_object* v_a_923_; uint8_t v___x_924_; 
v_a_923_ = lean_ctor_get(v_x_896_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v_x_896_, 1);
v___x_924_ = lp_lean_x2dftml_LeanFtml_utf8Valid(v_a_923_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_925_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__8));
v___x_926_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_927_ = lean_box(0);
v___x_928_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__2(v_a_923_, v___x_927_);
v___x_929_ = l_String_intercalate(v___x_926_, v___x_928_);
v___x_930_ = lean_string_append(v___x_925_, v___x_929_);
lean_dec_ref(v___x_929_);
v___x_931_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__9));
v___x_932_ = lean_string_append(v___x_930_, v___x_931_);
return v___x_932_;
}
else
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_a_923_);
v___x_934_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v___x_933_);
lean_dec(v___x_933_);
return v___x_934_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__1(lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
if (lean_obj_tag(v_a_935_) == 0)
{
lean_object* v___x_937_; 
v___x_937_ = l_List_reverse___redArg(v_a_936_);
return v___x_937_;
}
else
{
lean_object* v_head_938_; lean_object* v_tail_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_948_; 
v_head_938_ = lean_ctor_get(v_a_935_, 0);
v_tail_939_ = lean_ctor_get(v_a_935_, 1);
v_isSharedCheck_948_ = !lean_is_exclusive(v_a_935_);
if (v_isSharedCheck_948_ == 0)
{
v___x_941_ = v_a_935_;
v_isShared_942_ = v_isSharedCheck_948_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_tail_939_);
lean_inc(v_head_938_);
lean_dec(v_a_935_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_948_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_943_ = lp_lean_x2dftml_LeanFtml_serOptVal(v_head_938_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 1, v_a_936_);
lean_ctor_set(v___x_941_, 0, v___x_943_);
v___x_945_ = v___x_941_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_947_, 1, v_a_936_);
v___x_945_ = v_reuseFailAlloc_947_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
v_a_935_ = v_tail_939_;
v_a_936_ = v___x_945_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serOptMap(lean_object* v_m_949_){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_950_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__3));
v___x_951_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_952_ = lean_box(0);
v___x_953_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0(v_m_949_, v___x_952_);
v___x_954_ = l_String_intercalate(v___x_951_, v___x_953_);
v___x_955_ = lean_string_append(v___x_950_, v___x_954_);
lean_dec_ref(v___x_954_);
v___x_956_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__5));
v___x_957_ = lean_string_append(v___x_955_, v___x_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serSeg(lean_object* v_x_960_){
_start:
{
if (lean_obj_tag(v_x_960_) == 0)
{
lean_object* v_a_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_a_961_ = lean_ctor_get(v_x_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref_known(v_x_960_, 1);
v___x_962_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serSeg___closed__0));
v___x_963_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_a_961_);
lean_dec(v_a_961_);
v___x_964_ = lean_string_append(v___x_962_, v___x_963_);
lean_dec_ref(v___x_963_);
v___x_965_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__5));
v___x_966_ = lean_string_append(v___x_964_, v___x_965_);
return v___x_966_;
}
else
{
lean_object* v_a_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_a_967_ = lean_ctor_get(v_x_960_, 0);
lean_inc(v_a_967_);
lean_dec_ref_known(v_x_960_, 1);
v___x_968_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serSeg___closed__1));
v___x_969_ = l_Nat_reprFast(v_a_967_);
v___x_970_ = lean_string_append(v___x_968_, v___x_969_);
lean_dec_ref(v___x_969_);
v___x_971_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__5));
v___x_972_ = lean_string_append(v___x_970_, v___x_971_);
return v___x_972_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serToken(lean_object* v_t_973_){
_start:
{
lean_object* v_rule_974_; lean_object* v_opts_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v_rule_974_ = lean_ctor_get(v_t_973_, 0);
lean_inc_ref(v_rule_974_);
v_opts_975_ = lean_ctor_get(v_t_973_, 1);
lean_inc(v_opts_975_);
lean_dec_ref(v_t_973_);
v___x_976_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_977_ = l_String_toListImpl(v_rule_974_);
v___x_978_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v___x_977_);
lean_dec(v___x_977_);
v___x_979_ = lean_string_append(v___x_976_, v___x_978_);
lean_dec_ref(v___x_978_);
v___x_980_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_981_ = lean_string_append(v___x_979_, v___x_980_);
v___x_982_ = lp_lean_x2dftml_LeanFtml_serOptMap(v_opts_975_);
v___x_983_ = lean_string_append(v___x_981_, v___x_982_);
lean_dec_ref(v___x_982_);
v___x_984_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_985_ = lean_string_append(v___x_983_, v___x_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serBytes(lean_object* v_bs_986_){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_987_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_987_, 0, v_bs_986_);
v___x_988_ = lp_lean_x2dftml_LeanFtml_serOptVal(v___x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__5(lean_object* v_a_989_, lean_object* v_a_990_){
_start:
{
if (lean_obj_tag(v_a_989_) == 0)
{
lean_object* v___x_991_; 
v___x_991_ = l_List_reverse___redArg(v_a_990_);
return v___x_991_;
}
else
{
lean_object* v_head_992_; lean_object* v_tail_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1012_; 
v_head_992_ = lean_ctor_get(v_a_989_, 0);
v_tail_993_ = lean_ctor_get(v_a_989_, 1);
v_isSharedCheck_1012_ = !lean_is_exclusive(v_a_989_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_995_ = v_a_989_;
v_isShared_996_ = v_isSharedCheck_1012_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_tail_993_);
lean_inc(v_head_992_);
lean_dec(v_a_989_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1012_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v_fst_997_; lean_object* v_snd_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1009_; 
v_fst_997_ = lean_ctor_get(v_head_992_, 0);
lean_inc(v_fst_997_);
v_snd_998_ = lean_ctor_get(v_head_992_, 1);
lean_inc(v_snd_998_);
lean_dec(v_head_992_);
v___x_999_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_1000_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_1001_ = lp_lean_x2dftml_LeanFtml_serBytes(v_fst_997_);
v___x_1002_ = lean_string_append(v___x_1000_, v___x_1001_);
lean_dec_ref(v___x_1001_);
v___x_1003_ = lean_string_append(v___x_1002_, v___x_999_);
v___x_1004_ = l_Nat_reprFast(v_snd_998_);
v___x_1005_ = lean_string_append(v___x_1003_, v___x_1004_);
lean_dec_ref(v___x_1004_);
v___x_1006_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_1007_ = lean_string_append(v___x_1005_, v___x_1006_);
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 1, v_a_990_);
lean_ctor_set(v___x_995_, 0, v___x_1007_);
v___x_1009_ = v___x_995_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v_a_990_);
v___x_1009_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
v_a_989_ = v_tail_993_;
v_a_990_ = v___x_1009_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__4(lean_object* v_a_1013_, lean_object* v_a_1014_){
_start:
{
if (lean_obj_tag(v_a_1013_) == 0)
{
lean_object* v___x_1015_; 
v___x_1015_ = l_List_reverse___redArg(v_a_1014_);
return v___x_1015_;
}
else
{
lean_object* v_head_1016_; lean_object* v_tail_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1036_; 
v_head_1016_ = lean_ctor_get(v_a_1013_, 0);
v_tail_1017_ = lean_ctor_get(v_a_1013_, 1);
v_isSharedCheck_1036_ = !lean_is_exclusive(v_a_1013_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1019_ = v_a_1013_;
v_isShared_1020_ = v_isSharedCheck_1036_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_tail_1017_);
lean_inc(v_head_1016_);
lean_dec(v_a_1013_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1036_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v_fst_1021_; lean_object* v_snd_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1033_; 
v_fst_1021_ = lean_ctor_get(v_head_1016_, 0);
lean_inc(v_fst_1021_);
v_snd_1022_ = lean_ctor_get(v_head_1016_, 1);
lean_inc(v_snd_1022_);
lean_dec(v_head_1016_);
v___x_1023_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_1024_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_1025_ = lp_lean_x2dftml_LeanFtml_serBytes(v_fst_1021_);
v___x_1026_ = lean_string_append(v___x_1024_, v___x_1025_);
lean_dec_ref(v___x_1025_);
v___x_1027_ = lean_string_append(v___x_1026_, v___x_1023_);
v___x_1028_ = lp_lean_x2dftml_LeanFtml_serBytes(v_snd_1022_);
v___x_1029_ = lean_string_append(v___x_1027_, v___x_1028_);
lean_dec_ref(v___x_1028_);
v___x_1030_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_1031_ = lean_string_append(v___x_1029_, v___x_1030_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 1, v_a_1014_);
lean_ctor_set(v___x_1019_, 0, v___x_1031_);
v___x_1033_ = v___x_1019_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1031_);
lean_ctor_set(v_reuseFailAlloc_1035_, 1, v_a_1014_);
v___x_1033_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
v_a_1013_ = v_tail_1017_;
v_a_1014_ = v___x_1033_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__6(lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
if (lean_obj_tag(v_a_1037_) == 0)
{
lean_object* v___x_1039_; 
v___x_1039_ = l_List_reverse___redArg(v_a_1038_);
return v___x_1039_;
}
else
{
lean_object* v_head_1040_; lean_object* v_tail_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1050_; 
v_head_1040_ = lean_ctor_get(v_a_1037_, 0);
v_tail_1041_ = lean_ctor_get(v_a_1037_, 1);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_a_1037_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1043_ = v_a_1037_;
v_isShared_1044_ = v_isSharedCheck_1050_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_tail_1041_);
lean_inc(v_head_1040_);
lean_dec(v_a_1037_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1050_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1045_; lean_object* v___x_1047_; 
v___x_1045_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_head_1040_);
lean_dec(v_head_1040_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 1, v_a_1038_);
lean_ctor_set(v___x_1043_, 0, v___x_1045_);
v___x_1047_ = v___x_1043_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_1045_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_a_1038_);
v___x_1047_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
v_a_1037_ = v_tail_1041_;
v_a_1038_ = v___x_1047_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__0(lean_object* v_a_1051_, lean_object* v_a_1052_){
_start:
{
if (lean_obj_tag(v_a_1051_) == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = l_List_reverse___redArg(v_a_1052_);
return v___x_1053_;
}
else
{
lean_object* v_head_1054_; lean_object* v_tail_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1064_; 
v_head_1054_ = lean_ctor_get(v_a_1051_, 0);
v_tail_1055_ = lean_ctor_get(v_a_1051_, 1);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_a_1051_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1057_ = v_a_1051_;
v_isShared_1058_ = v_isSharedCheck_1064_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_tail_1055_);
lean_inc(v_head_1054_);
lean_dec(v_a_1051_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1064_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1059_ = lp_lean_x2dftml_LeanFtml_serSeg(v_head_1054_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 1, v_a_1052_);
lean_ctor_set(v___x_1057_, 0, v___x_1059_);
v___x_1061_ = v___x_1057_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1059_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_a_1052_);
v___x_1061_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
v_a_1051_ = v_tail_1055_;
v_a_1052_ = v___x_1061_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__3(lean_object* v_a_1065_, lean_object* v_a_1066_){
_start:
{
if (lean_obj_tag(v_a_1065_) == 0)
{
lean_object* v___x_1067_; 
v___x_1067_ = l_List_reverse___redArg(v_a_1066_);
return v___x_1067_;
}
else
{
lean_object* v_head_1068_; lean_object* v_tail_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1078_; 
v_head_1068_ = lean_ctor_get(v_a_1065_, 0);
v_tail_1069_ = lean_ctor_get(v_a_1065_, 1);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_a_1065_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1071_ = v_a_1065_;
v_isShared_1072_ = v_isSharedCheck_1078_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_tail_1069_);
lean_inc(v_head_1068_);
lean_dec(v_a_1065_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1078_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
v___x_1073_ = lp_lean_x2dftml_LeanFtml_serBytes(v_head_1068_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 1, v_a_1066_);
lean_ctor_set(v___x_1071_, 0, v___x_1073_);
v___x_1075_ = v___x_1071_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1073_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v_a_1066_);
v___x_1075_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
v_a_1065_ = v_tail_1069_;
v_a_1066_ = v___x_1075_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__2(lean_object* v_a_1079_, lean_object* v_a_1080_){
_start:
{
if (lean_obj_tag(v_a_1079_) == 0)
{
lean_object* v___x_1081_; 
v___x_1081_ = l_List_reverse___redArg(v_a_1080_);
return v___x_1081_;
}
else
{
lean_object* v_head_1082_; lean_object* v_tail_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1102_; 
v_head_1082_ = lean_ctor_get(v_a_1079_, 0);
v_tail_1083_ = lean_ctor_get(v_a_1079_, 1);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_a_1079_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1085_ = v_a_1079_;
v_isShared_1086_ = v_isSharedCheck_1102_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_tail_1083_);
lean_inc(v_head_1082_);
lean_dec(v_a_1079_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1102_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v_fst_1087_; lean_object* v_snd_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1099_; 
v_fst_1087_ = lean_ctor_get(v_head_1082_, 0);
lean_inc(v_fst_1087_);
v_snd_1088_ = lean_ctor_get(v_head_1082_, 1);
lean_inc(v_snd_1088_);
lean_dec(v_head_1082_);
v___x_1089_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_1090_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_1091_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_fst_1087_);
lean_dec(v_fst_1087_);
v___x_1092_ = lean_string_append(v___x_1090_, v___x_1091_);
lean_dec_ref(v___x_1091_);
v___x_1093_ = lean_string_append(v___x_1092_, v___x_1089_);
v___x_1094_ = l_Nat_reprFast(v_snd_1088_);
v___x_1095_ = lean_string_append(v___x_1093_, v___x_1094_);
lean_dec_ref(v___x_1094_);
v___x_1096_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_1097_ = lean_string_append(v___x_1095_, v___x_1096_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 1, v_a_1080_);
lean_ctor_set(v___x_1085_, 0, v___x_1097_);
v___x_1099_ = v___x_1085_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_a_1080_);
v___x_1099_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
v_a_1079_ = v_tail_1083_;
v_a_1080_ = v___x_1099_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__1(lean_object* v_a_1103_, lean_object* v_a_1104_){
_start:
{
if (lean_obj_tag(v_a_1103_) == 0)
{
lean_object* v___x_1105_; 
v___x_1105_ = l_List_reverse___redArg(v_a_1104_);
return v___x_1105_;
}
else
{
lean_object* v_head_1106_; lean_object* v_tail_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1116_; 
v_head_1106_ = lean_ctor_get(v_a_1103_, 0);
v_tail_1107_ = lean_ctor_get(v_a_1103_, 1);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_a_1103_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1109_ = v_a_1103_;
v_isShared_1110_ = v_isSharedCheck_1116_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_tail_1107_);
lean_inc(v_head_1106_);
lean_dec(v_a_1103_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1116_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1111_ = lp_lean_x2dftml_LeanFtml_serToken(v_head_1106_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 1, v_a_1104_);
lean_ctor_set(v___x_1109_, 0, v___x_1111_);
v___x_1113_ = v___x_1109_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1111_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_a_1104_);
v___x_1113_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
v_a_1103_ = v_tail_1107_;
v_a_1104_ = v___x_1113_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serState(lean_object* v_id_1128_, lean_object* v_st_1129_){
_start:
{
lean_object* v_doc_1130_; lean_object* v_work_1131_; lean_object* v_tokens_1132_; lean_object* v_inclusions_1133_; lean_object* v_inclusionsNotExist_1134_; lean_object* v_footnotes_1135_; lean_object* v_bibitems_1136_; lean_object* v_bibitemIds_1137_; lean_object* v_mathId_1138_; lean_object* v_equations_1139_; lean_object* v_scoredAnchors_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___y_1166_; 
v_doc_1130_ = lean_ctor_get(v_st_1129_, 2);
lean_inc_ref(v_doc_1130_);
v_work_1131_ = lean_ctor_get(v_st_1129_, 0);
lean_inc(v_work_1131_);
v_tokens_1132_ = lean_ctor_get(v_st_1129_, 1);
lean_inc(v_tokens_1132_);
lean_dec_ref(v_st_1129_);
v_inclusions_1133_ = lean_ctor_get(v_doc_1130_, 2);
lean_inc(v_inclusions_1133_);
v_inclusionsNotExist_1134_ = lean_ctor_get(v_doc_1130_, 3);
lean_inc(v_inclusionsNotExist_1134_);
v_footnotes_1135_ = lean_ctor_get(v_doc_1130_, 4);
lean_inc(v_footnotes_1135_);
v_bibitems_1136_ = lean_ctor_get(v_doc_1130_, 5);
lean_inc(v_bibitems_1136_);
v_bibitemIds_1137_ = lean_ctor_get(v_doc_1130_, 6);
lean_inc(v_bibitemIds_1137_);
v_mathId_1138_ = lean_ctor_get(v_doc_1130_, 8);
lean_inc(v_mathId_1138_);
v_equations_1139_ = lean_ctor_get(v_doc_1130_, 9);
lean_inc(v_equations_1139_);
v_scoredAnchors_1140_ = lean_ctor_get(v_doc_1130_, 12);
lean_inc(v_scoredAnchors_1140_);
lean_dec_ref(v_doc_1130_);
v___x_1141_ = lp_lean_x2dftml_LeanFtml_normSegs(v_work_1131_);
v___x_1142_ = lean_box(0);
v___x_1143_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__0(v___x_1141_, v___x_1142_);
v___x_1144_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__0));
v___x_1145_ = l_String_toListImpl(v_id_1128_);
v___x_1146_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v___x_1145_);
lean_dec(v___x_1145_);
v___x_1147_ = lean_string_append(v___x_1144_, v___x_1146_);
lean_dec_ref(v___x_1146_);
v___x_1148_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__1));
v___x_1149_ = lean_string_append(v___x_1147_, v___x_1148_);
v___x_1150_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_1151_ = l_String_intercalate(v___x_1150_, v___x_1143_);
v___x_1152_ = lean_string_append(v___x_1149_, v___x_1151_);
lean_dec_ref(v___x_1151_);
v___x_1153_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__2));
v___x_1154_ = lean_string_append(v___x_1152_, v___x_1153_);
v___x_1155_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__1(v_tokens_1132_, v___x_1142_);
v___x_1156_ = l_String_intercalate(v___x_1150_, v___x_1155_);
v___x_1157_ = lean_string_append(v___x_1154_, v___x_1156_);
lean_dec_ref(v___x_1156_);
v___x_1158_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__3));
v___x_1159_ = lean_string_append(v___x_1157_, v___x_1158_);
v___x_1160_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__2(v_equations_1139_, v___x_1142_);
v___x_1161_ = l_String_intercalate(v___x_1150_, v___x_1160_);
v___x_1162_ = lean_string_append(v___x_1159_, v___x_1161_);
lean_dec_ref(v___x_1161_);
v___x_1163_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__4));
v___x_1164_ = lean_string_append(v___x_1162_, v___x_1163_);
if (lean_obj_tag(v_mathId_1138_) == 0)
{
lean_object* v___x_1200_; 
v___x_1200_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__2));
v___y_1166_ = v___x_1200_;
goto v___jp_1165_;
}
else
{
lean_object* v_val_1201_; lean_object* v___x_1202_; 
v_val_1201_ = lean_ctor_get(v_mathId_1138_, 0);
lean_inc(v_val_1201_);
lean_dec_ref_known(v_mathId_1138_, 1);
v___x_1202_ = l_Nat_reprFast(v_val_1201_);
v___y_1166_ = v___x_1202_;
goto v___jp_1165_;
}
v___jp_1165_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1167_ = lean_string_append(v___x_1164_, v___y_1166_);
lean_dec_ref(v___y_1166_);
v___x_1168_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__5));
v___x_1169_ = lean_string_append(v___x_1167_, v___x_1168_);
v___x_1170_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__3(v_footnotes_1135_, v___x_1142_);
v___x_1171_ = l_String_intercalate(v___x_1150_, v___x_1170_);
v___x_1172_ = lean_string_append(v___x_1169_, v___x_1171_);
lean_dec_ref(v___x_1171_);
v___x_1173_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__6));
v___x_1174_ = lean_string_append(v___x_1172_, v___x_1173_);
v___x_1175_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__4(v_bibitems_1136_, v___x_1142_);
v___x_1176_ = l_String_intercalate(v___x_1150_, v___x_1175_);
v___x_1177_ = lean_string_append(v___x_1174_, v___x_1176_);
lean_dec_ref(v___x_1176_);
v___x_1178_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__7));
v___x_1179_ = lean_string_append(v___x_1177_, v___x_1178_);
v___x_1180_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__5(v_bibitemIds_1137_, v___x_1142_);
v___x_1181_ = l_String_intercalate(v___x_1150_, v___x_1180_);
v___x_1182_ = lean_string_append(v___x_1179_, v___x_1181_);
lean_dec_ref(v___x_1181_);
v___x_1183_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__8));
v___x_1184_ = lean_string_append(v___x_1182_, v___x_1183_);
v___x_1185_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__4(v_scoredAnchors_1140_, v___x_1142_);
v___x_1186_ = l_String_intercalate(v___x_1150_, v___x_1185_);
v___x_1187_ = lean_string_append(v___x_1184_, v___x_1186_);
lean_dec_ref(v___x_1186_);
v___x_1188_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__9));
v___x_1189_ = lean_string_append(v___x_1187_, v___x_1188_);
v___x_1190_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__2(v_inclusions_1133_, v___x_1142_);
v___x_1191_ = l_String_intercalate(v___x_1150_, v___x_1190_);
v___x_1192_ = lean_string_append(v___x_1189_, v___x_1191_);
lean_dec_ref(v___x_1191_);
v___x_1193_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__10));
v___x_1194_ = lean_string_append(v___x_1192_, v___x_1193_);
v___x_1195_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__6(v_inclusionsNotExist_1134_, v___x_1142_);
v___x_1196_ = l_String_intercalate(v___x_1150_, v___x_1195_);
v___x_1197_ = lean_string_append(v___x_1194_, v___x_1196_);
lean_dec_ref(v___x_1196_);
v___x_1198_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__9));
v___x_1199_ = lean_string_append(v___x_1197_, v___x_1198_);
return v___x_1199_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1);
lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
