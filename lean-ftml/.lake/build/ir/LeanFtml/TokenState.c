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
v___x_331_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_331_, 0, v___x_328_);
lean_ctor_set(v___x_331_, 1, v___x_326_);
lean_ctor_set(v___x_331_, 2, v___x_329_);
lean_ctor_set(v___x_331_, 3, v___x_326_);
lean_ctor_set_uint8(v___x_331_, sizeof(void*)*4, v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ParseState_addToken(lean_object* v_st_332_, lean_object* v_rule_333_, lean_object* v_opts_334_){
_start:
{
lean_object* v_work_335_; lean_object* v_tokens_336_; lean_object* v_doc_337_; uint8_t v_fatal_338_; lean_object* v_continuedDivLeads_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_352_; 
v_work_335_ = lean_ctor_get(v_st_332_, 0);
v_tokens_336_ = lean_ctor_get(v_st_332_, 1);
v_doc_337_ = lean_ctor_get(v_st_332_, 2);
v_fatal_338_ = lean_ctor_get_uint8(v_st_332_, sizeof(void*)*4);
v_continuedDivLeads_339_ = lean_ctor_get(v_st_332_, 3);
v_isSharedCheck_352_ = !lean_is_exclusive(v_st_332_);
if (v_isSharedCheck_352_ == 0)
{
v___x_341_ = v_st_332_;
v_isShared_342_ = v_isSharedCheck_352_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_continuedDivLeads_339_);
lean_inc(v_doc_337_);
lean_inc(v_tokens_336_);
lean_inc(v_work_335_);
lean_dec(v_st_332_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_352_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_348_; 
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v_rule_333_);
lean_ctor_set(v___x_343_, 1, v_opts_334_);
v___x_344_ = lean_box(0);
v___x_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_343_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
lean_inc(v_tokens_336_);
v___x_346_ = l_List_appendTR___redArg(v_tokens_336_, v___x_345_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 1, v___x_346_);
v___x_348_ = v___x_341_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_work_335_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v___x_346_);
lean_ctor_set(v_reuseFailAlloc_351_, 2, v_doc_337_);
lean_ctor_set(v_reuseFailAlloc_351_, 3, v_continuedDivLeads_339_);
lean_ctor_set_uint8(v_reuseFailAlloc_351_, sizeof(void*)*4, v_fatal_338_);
v___x_348_ = v_reuseFailAlloc_351_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = l_List_lengthTR___redArg(v_tokens_336_);
lean_dec(v_tokens_336_);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_348_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
return v___x_350_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Bytes(uint32_t v_c_353_){
_start:
{
lean_object* v_n_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v_n_354_ = lean_uint32_to_nat(v_c_353_);
v___x_355_ = lean_unsigned_to_nat(128u);
v___x_356_ = lean_nat_dec_lt(v_n_354_, v___x_355_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = lean_unsigned_to_nat(2048u);
v___x_358_ = lean_nat_dec_lt(v_n_354_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = lean_unsigned_to_nat(65536u);
v___x_360_ = lean_nat_dec_lt(v_n_354_, v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_361_ = lean_unsigned_to_nat(240u);
v___x_362_ = lean_unsigned_to_nat(18u);
v___x_363_ = lean_nat_shiftr(v_n_354_, v___x_362_);
v___x_364_ = lean_nat_add(v___x_361_, v___x_363_);
lean_dec(v___x_363_);
v___x_365_ = lean_unsigned_to_nat(12u);
v___x_366_ = lean_nat_shiftr(v_n_354_, v___x_365_);
v___x_367_ = lean_unsigned_to_nat(64u);
v___x_368_ = lean_nat_mod(v___x_366_, v___x_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_nat_add(v___x_355_, v___x_368_);
lean_dec(v___x_368_);
v___x_370_ = lean_unsigned_to_nat(6u);
v___x_371_ = lean_nat_shiftr(v_n_354_, v___x_370_);
v___x_372_ = lean_nat_mod(v___x_371_, v___x_367_);
lean_dec(v___x_371_);
v___x_373_ = lean_nat_add(v___x_355_, v___x_372_);
lean_dec(v___x_372_);
v___x_374_ = lean_nat_mod(v_n_354_, v___x_367_);
lean_dec(v_n_354_);
v___x_375_ = lean_nat_add(v___x_355_, v___x_374_);
lean_dec(v___x_374_);
v___x_376_ = lean_box(0);
v___x_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_373_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
v___x_379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_369_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_364_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
return v___x_380_;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_381_ = lean_unsigned_to_nat(224u);
v___x_382_ = lean_unsigned_to_nat(12u);
v___x_383_ = lean_nat_shiftr(v_n_354_, v___x_382_);
v___x_384_ = lean_nat_add(v___x_381_, v___x_383_);
lean_dec(v___x_383_);
v___x_385_ = lean_unsigned_to_nat(64u);
v___x_386_ = lean_unsigned_to_nat(6u);
v___x_387_ = lean_nat_shiftr(v_n_354_, v___x_386_);
v___x_388_ = lean_nat_mod(v___x_387_, v___x_385_);
lean_dec(v___x_387_);
v___x_389_ = lean_nat_add(v___x_355_, v___x_388_);
lean_dec(v___x_388_);
v___x_390_ = lean_nat_mod(v_n_354_, v___x_385_);
lean_dec(v_n_354_);
v___x_391_ = lean_nat_add(v___x_355_, v___x_390_);
lean_dec(v___x_390_);
v___x_392_ = lean_box(0);
v___x_393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_391_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
v___x_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_389_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_384_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
return v___x_395_;
}
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_396_ = lean_unsigned_to_nat(192u);
v___x_397_ = lean_unsigned_to_nat(64u);
v___x_398_ = lean_unsigned_to_nat(6u);
v___x_399_ = lean_nat_shiftr(v_n_354_, v___x_398_);
v___x_400_ = lean_nat_add(v___x_396_, v___x_399_);
lean_dec(v___x_399_);
v___x_401_ = lean_nat_mod(v_n_354_, v___x_397_);
lean_dec(v_n_354_);
v___x_402_ = lean_nat_add(v___x_355_, v___x_401_);
lean_dec(v___x_401_);
v___x_403_ = lean_box(0);
v___x_404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_402_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_400_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
return v___x_405_;
}
}
else
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_box(0);
v___x_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_407_, 0, v_n_354_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Bytes___boxed(lean_object* v_c_408_){
_start:
{
uint32_t v_c_boxed_409_; lean_object* v_res_410_; 
v_c_boxed_409_ = lean_unbox_uint32(v_c_408_);
lean_dec(v_c_408_);
v_res_410_ = lp_lean_x2dftml_LeanFtml_utf8Bytes(v_c_boxed_409_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
if (lean_obj_tag(v_a_411_) == 0)
{
lean_object* v___x_413_; 
v___x_413_ = lean_array_to_list(v_a_412_);
return v___x_413_;
}
else
{
lean_object* v_head_414_; lean_object* v_tail_415_; uint32_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v_head_414_ = lean_ctor_get(v_a_411_, 0);
v_tail_415_ = lean_ctor_get(v_a_411_, 1);
v___x_416_ = lean_unbox_uint32(v_head_414_);
v___x_417_ = lp_lean_x2dftml_LeanFtml_utf8Bytes(v___x_416_);
v___x_418_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_412_, v___x_417_);
v_a_411_ = v_tail_415_;
v_a_412_ = v___x_418_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0___boxed(lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_a_420_, v_a_421_);
lean_dec(v_a_420_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
if (lean_obj_tag(v_a_423_) == 0)
{
lean_object* v___x_425_; 
v___x_425_ = l_List_reverse___redArg(v_a_424_);
return v___x_425_;
}
else
{
lean_object* v_head_426_; lean_object* v_tail_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_437_; 
v_head_426_ = lean_ctor_get(v_a_423_, 0);
v_tail_427_ = lean_ctor_get(v_a_423_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v_a_423_);
if (v_isSharedCheck_437_ == 0)
{
v___x_429_ = v_a_423_;
v_isShared_430_ = v_isSharedCheck_437_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_tail_427_);
lean_inc(v_head_426_);
lean_dec(v_a_423_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_437_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
uint32_t v___x_431_; lean_object* v___x_432_; lean_object* v___x_434_; 
v___x_431_ = lean_unbox_uint32(v_head_426_);
lean_dec(v_head_426_);
v___x_432_ = lean_uint32_to_nat(v___x_431_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 1, v_a_424_);
lean_ctor_set(v___x_429_, 0, v___x_432_);
v___x_434_ = v___x_429_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_432_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v_a_424_);
v___x_434_ = v_reuseFailAlloc_436_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
v_a_423_ = v_tail_427_;
v_a_424_ = v___x_434_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segBytes(lean_object* v_x_443_){
_start:
{
if (lean_obj_tag(v_x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_a_444_ = lean_ctor_get(v_x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v_x_443_, 1);
v___x_445_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segBytes___closed__0));
v___x_446_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_a_444_, v___x_445_);
lean_dec(v_a_444_);
return v___x_446_;
}
else
{
lean_object* v_a_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_a_447_ = lean_ctor_get(v_x_443_, 0);
lean_inc(v_a_447_);
lean_dec_ref_known(v_x_443_, 1);
v___x_448_ = lean_box(0);
v___x_449_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segBytes___closed__1));
v___x_450_ = l_Nat_reprFast(v_a_447_);
v___x_451_ = l_String_toListImpl(v___x_450_);
v___x_452_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_451_, v___x_448_);
v___x_453_ = l_List_appendTR___redArg(v___x_449_, v___x_452_);
v___x_454_ = l_List_appendTR___redArg(v___x_453_, v___x_449_);
return v___x_454_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_byteForm_spec__0(lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
if (lean_obj_tag(v_a_455_) == 0)
{
lean_object* v___x_457_; 
v___x_457_ = lean_array_to_list(v_a_456_);
return v___x_457_;
}
else
{
lean_object* v_head_458_; lean_object* v_tail_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v_head_458_ = lean_ctor_get(v_a_455_, 0);
lean_inc(v_head_458_);
v_tail_459_ = lean_ctor_get(v_a_455_, 1);
lean_inc(v_tail_459_);
lean_dec_ref_known(v_a_455_, 2);
v___x_460_ = lp_lean_x2dftml_LeanFtml_segBytes(v_head_458_);
v___x_461_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_456_, v___x_460_);
v_a_455_ = v_tail_459_;
v_a_456_ = v___x_461_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object* v_segs_463_){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_segBytes___closed__0));
v___x_465_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_byteForm_spec__0(v_segs_463_, v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isContByte(lean_object* v_b_466_){
_start:
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = lean_unsigned_to_nat(128u);
v___x_468_ = lean_nat_dec_le(v___x_467_, v_b_466_);
if (v___x_468_ == 0)
{
return v___x_468_;
}
else
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = lean_unsigned_to_nat(192u);
v___x_470_ = lean_nat_dec_lt(v_b_466_, v___x_469_);
return v___x_470_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isContByte___boxed(lean_object* v_b_471_){
_start:
{
uint8_t v_res_472_; lean_object* v_r_473_; 
v_res_472_ = lp_lean_x2dftml_LeanFtml_isContByte(v_b_471_);
lean_dec(v_b_471_);
v_r_473_ = lean_box(v_res_472_);
return v_r_473_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode_go(lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
if (lean_obj_tag(v_a_474_) == 0)
{
lean_object* v___x_476_; 
v___x_476_ = lean_box(0);
return v___x_476_;
}
else
{
lean_object* v_head_477_; lean_object* v_tail_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_622_; 
v_head_477_ = lean_ctor_get(v_a_474_, 0);
v_tail_478_ = lean_ctor_get(v_a_474_, 1);
v_isSharedCheck_622_ = !lean_is_exclusive(v_a_474_);
if (v_isSharedCheck_622_ == 0)
{
v___x_480_ = v_a_474_;
v_isShared_481_ = v_isSharedCheck_622_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_tail_478_);
lean_inc(v_head_477_);
lean_dec(v_a_474_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_622_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v_zero_494_; uint8_t v_isZero_495_; 
v_zero_494_ = lean_unsigned_to_nat(0u);
v_isZero_495_ = lean_nat_dec_eq(v_a_475_, v_zero_494_);
if (v_isZero_495_ == 1)
{
lean_object* v___x_496_; 
lean_del_object(v___x_480_);
lean_dec(v_tail_478_);
lean_dec(v_head_477_);
v___x_496_ = lean_box(0);
return v___x_496_;
}
else
{
lean_object* v_one_497_; lean_object* v_n_498_; lean_object* v___x_583_; uint8_t v___x_584_; 
v_one_497_ = lean_unsigned_to_nat(1u);
v_n_498_ = lean_nat_sub(v_a_475_, v_one_497_);
v___x_583_ = lean_unsigned_to_nat(128u);
v___x_584_ = lean_nat_dec_lt(v_head_477_, v___x_583_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; uint8_t v___x_586_; 
v___x_585_ = lean_unsigned_to_nat(194u);
v___x_586_ = lean_nat_dec_le(v___x_585_, v_head_477_);
if (v___x_586_ == 0)
{
goto v___jp_552_;
}
else
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = lean_unsigned_to_nat(224u);
v___x_588_ = lean_nat_dec_lt(v_head_477_, v___x_587_);
if (v___x_588_ == 0)
{
goto v___jp_552_;
}
else
{
lean_del_object(v___x_480_);
if (lean_obj_tag(v_tail_478_) == 0)
{
uint32_t v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
lean_dec(v_n_498_);
v___x_589_ = l_Char_ofNat(v_head_477_);
lean_dec(v_head_477_);
v___x_590_ = lean_box(0);
v___x_591_ = lean_box_uint32(v___x_589_);
v___x_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set(v___x_592_, 1, v___x_590_);
return v___x_592_;
}
else
{
lean_object* v_head_593_; lean_object* v_tail_594_; uint8_t v___x_595_; 
v_head_593_ = lean_ctor_get(v_tail_478_, 0);
v_tail_594_ = lean_ctor_get(v_tail_478_, 1);
v___x_595_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_593_);
if (v___x_595_ == 0)
{
uint32_t v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_596_ = l_Char_ofNat(v_head_477_);
lean_dec(v_head_477_);
v___x_597_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_478_, v_n_498_);
lean_dec(v_n_498_);
v___x_598_ = lean_box_uint32(v___x_596_);
v___x_599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
lean_ctor_set(v___x_599_, 1, v___x_597_);
return v___x_599_;
}
else
{
lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_615_; 
lean_inc(v_tail_594_);
lean_inc(v_head_593_);
v_isSharedCheck_615_ = !lean_is_exclusive(v_tail_478_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; lean_object* v_unused_617_; 
v_unused_616_ = lean_ctor_get(v_tail_478_, 1);
lean_dec(v_unused_616_);
v_unused_617_ = lean_ctor_get(v_tail_478_, 0);
lean_dec(v_unused_617_);
v___x_601_ = v_tail_478_;
v_isShared_602_ = v_isSharedCheck_615_;
goto v_resetjp_600_;
}
else
{
lean_dec(v_tail_478_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_615_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; uint32_t v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_613_; 
v___x_603_ = lean_unsigned_to_nat(32u);
v___x_604_ = lean_nat_mod(v_head_477_, v___x_603_);
lean_dec(v_head_477_);
v___x_605_ = lean_unsigned_to_nat(64u);
v___x_606_ = lean_nat_mul(v___x_604_, v___x_605_);
lean_dec(v___x_604_);
v___x_607_ = lean_nat_mod(v_head_593_, v___x_605_);
lean_dec(v_head_593_);
v___x_608_ = lean_nat_add(v___x_606_, v___x_607_);
lean_dec(v___x_607_);
lean_dec(v___x_606_);
v___x_609_ = l_Char_ofNat(v___x_608_);
lean_dec(v___x_608_);
v___x_610_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_594_, v_n_498_);
lean_dec(v_n_498_);
v___x_611_ = lean_box_uint32(v___x_609_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v___x_610_);
lean_ctor_set(v___x_601_, 0, v___x_611_);
v___x_613_ = v___x_601_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_611_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v___x_610_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
}
}
}
else
{
uint32_t v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
lean_del_object(v___x_480_);
v___x_618_ = l_Char_ofNat(v_head_477_);
lean_dec(v_head_477_);
v___x_619_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_478_, v_n_498_);
lean_dec(v_n_498_);
v___x_620_ = lean_box_uint32(v___x_618_);
v___x_621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v___x_619_);
return v___x_621_;
}
v___jp_499_:
{
uint32_t v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_500_ = l_Char_ofNat(v_head_477_);
lean_dec(v_head_477_);
v___x_501_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_478_, v_n_498_);
lean_dec(v_n_498_);
v___x_502_ = lean_box_uint32(v___x_500_);
v___x_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v___x_501_);
return v___x_503_;
}
v___jp_504_:
{
uint32_t v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_505_ = l_Char_ofNat(v_head_477_);
lean_dec(v_head_477_);
v___x_506_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_478_, v_n_498_);
lean_dec(v_n_498_);
v___x_507_ = lean_box_uint32(v___x_505_);
v___x_508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v___x_506_);
return v___x_508_;
}
v___jp_509_:
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = lean_unsigned_to_nat(240u);
v___x_511_ = lean_nat_dec_le(v___x_510_, v_head_477_);
if (v___x_511_ == 0)
{
goto v___jp_504_;
}
else
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = lean_unsigned_to_nat(245u);
v___x_513_ = lean_nat_dec_lt(v_head_477_, v___x_512_);
if (v___x_513_ == 0)
{
goto v___jp_504_;
}
else
{
if (lean_obj_tag(v_tail_478_) == 1)
{
lean_object* v_tail_514_; 
v_tail_514_ = lean_ctor_get(v_tail_478_, 1);
if (lean_obj_tag(v_tail_514_) == 1)
{
lean_object* v_tail_515_; 
v_tail_515_ = lean_ctor_get(v_tail_514_, 1);
lean_inc(v_tail_515_);
if (lean_obj_tag(v_tail_515_) == 1)
{
lean_object* v_head_516_; lean_object* v_head_517_; lean_object* v_head_518_; lean_object* v_tail_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_546_; 
v_head_516_ = lean_ctor_get(v_tail_478_, 0);
v_head_517_ = lean_ctor_get(v_tail_514_, 0);
v_head_518_ = lean_ctor_get(v_tail_515_, 0);
v_tail_519_ = lean_ctor_get(v_tail_515_, 1);
v_isSharedCheck_546_ = !lean_is_exclusive(v_tail_515_);
if (v_isSharedCheck_546_ == 0)
{
v___x_521_ = v_tail_515_;
v_isShared_522_ = v_isSharedCheck_546_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_tail_519_);
lean_inc(v_head_518_);
lean_dec(v_tail_515_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_546_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
uint8_t v___x_523_; 
v___x_523_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_516_);
if (v___x_523_ == 0)
{
lean_del_object(v___x_521_);
lean_dec(v_tail_519_);
lean_dec(v_head_518_);
goto v___jp_499_;
}
else
{
uint8_t v___x_524_; 
v___x_524_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_517_);
if (v___x_524_ == 0)
{
lean_del_object(v___x_521_);
lean_dec(v_tail_519_);
lean_dec(v_head_518_);
goto v___jp_499_;
}
else
{
uint8_t v___x_525_; 
v___x_525_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_518_);
if (v___x_525_ == 0)
{
lean_del_object(v___x_521_);
lean_dec(v_tail_519_);
lean_dec(v_head_518_);
goto v___jp_499_;
}
else
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; uint32_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_544_; 
lean_inc(v_head_517_);
lean_inc(v_head_516_);
lean_dec_ref_known(v_tail_478_, 2);
v___x_526_ = lean_unsigned_to_nat(8u);
v___x_527_ = lean_nat_mod(v_head_477_, v___x_526_);
lean_dec(v_head_477_);
v___x_528_ = lean_unsigned_to_nat(262144u);
v___x_529_ = lean_nat_mul(v___x_527_, v___x_528_);
lean_dec(v___x_527_);
v___x_530_ = lean_unsigned_to_nat(64u);
v___x_531_ = lean_nat_mod(v_head_516_, v___x_530_);
lean_dec(v_head_516_);
v___x_532_ = lean_unsigned_to_nat(4096u);
v___x_533_ = lean_nat_mul(v___x_531_, v___x_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_nat_add(v___x_529_, v___x_533_);
lean_dec(v___x_533_);
lean_dec(v___x_529_);
v___x_535_ = lean_nat_mod(v_head_517_, v___x_530_);
lean_dec(v_head_517_);
v___x_536_ = lean_nat_mul(v___x_535_, v___x_530_);
lean_dec(v___x_535_);
v___x_537_ = lean_nat_add(v___x_534_, v___x_536_);
lean_dec(v___x_536_);
lean_dec(v___x_534_);
v___x_538_ = lean_nat_mod(v_head_518_, v___x_530_);
lean_dec(v_head_518_);
v___x_539_ = lean_nat_add(v___x_537_, v___x_538_);
lean_dec(v___x_538_);
lean_dec(v___x_537_);
v___x_540_ = l_Char_ofNat(v___x_539_);
lean_dec(v___x_539_);
v___x_541_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_519_, v_n_498_);
lean_dec(v_n_498_);
v___x_542_ = lean_box_uint32(v___x_540_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v___x_541_);
lean_ctor_set(v___x_521_, 0, v___x_542_);
v___x_544_ = v___x_521_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_542_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v___x_541_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
}
else
{
lean_dec(v_tail_515_);
lean_dec_ref_known(v_tail_478_, 2);
lean_dec(v_n_498_);
goto v___jp_489_;
}
}
else
{
lean_dec_ref_known(v_tail_478_, 2);
lean_dec(v_n_498_);
goto v___jp_489_;
}
}
else
{
lean_dec(v_n_498_);
lean_dec(v_tail_478_);
goto v___jp_489_;
}
}
}
}
v___jp_547_:
{
uint32_t v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = l_Char_ofNat(v_head_477_);
lean_dec(v_head_477_);
v___x_549_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_478_, v_n_498_);
lean_dec(v_n_498_);
v___x_550_ = lean_box_uint32(v___x_548_);
v___x_551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
lean_ctor_set(v___x_551_, 1, v___x_549_);
return v___x_551_;
}
v___jp_552_:
{
lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_553_ = lean_unsigned_to_nat(224u);
v___x_554_ = lean_nat_dec_le(v___x_553_, v_head_477_);
if (v___x_554_ == 0)
{
lean_del_object(v___x_480_);
goto v___jp_509_;
}
else
{
lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_555_ = lean_unsigned_to_nat(240u);
v___x_556_ = lean_nat_dec_lt(v_head_477_, v___x_555_);
if (v___x_556_ == 0)
{
lean_del_object(v___x_480_);
goto v___jp_509_;
}
else
{
if (lean_obj_tag(v_tail_478_) == 1)
{
lean_object* v_tail_557_; 
v_tail_557_ = lean_ctor_get(v_tail_478_, 1);
lean_inc(v_tail_557_);
if (lean_obj_tag(v_tail_557_) == 1)
{
lean_object* v_head_558_; lean_object* v_head_559_; lean_object* v_tail_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_582_; 
lean_del_object(v___x_480_);
v_head_558_ = lean_ctor_get(v_tail_478_, 0);
v_head_559_ = lean_ctor_get(v_tail_557_, 0);
v_tail_560_ = lean_ctor_get(v_tail_557_, 1);
v_isSharedCheck_582_ = !lean_is_exclusive(v_tail_557_);
if (v_isSharedCheck_582_ == 0)
{
v___x_562_ = v_tail_557_;
v_isShared_563_ = v_isSharedCheck_582_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_tail_560_);
lean_inc(v_head_559_);
lean_dec(v_tail_557_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_582_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
uint8_t v___x_564_; 
v___x_564_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_558_);
if (v___x_564_ == 0)
{
lean_del_object(v___x_562_);
lean_dec(v_tail_560_);
lean_dec(v_head_559_);
goto v___jp_547_;
}
else
{
uint8_t v___x_565_; 
v___x_565_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_559_);
if (v___x_565_ == 0)
{
lean_del_object(v___x_562_);
lean_dec(v_tail_560_);
lean_dec(v_head_559_);
goto v___jp_547_;
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; uint32_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
lean_inc(v_head_558_);
lean_dec_ref_known(v_tail_478_, 2);
v___x_566_ = lean_unsigned_to_nat(16u);
v___x_567_ = lean_nat_mod(v_head_477_, v___x_566_);
lean_dec(v_head_477_);
v___x_568_ = lean_unsigned_to_nat(4096u);
v___x_569_ = lean_nat_mul(v___x_567_, v___x_568_);
lean_dec(v___x_567_);
v___x_570_ = lean_unsigned_to_nat(64u);
v___x_571_ = lean_nat_mod(v_head_558_, v___x_570_);
lean_dec(v_head_558_);
v___x_572_ = lean_nat_mul(v___x_571_, v___x_570_);
lean_dec(v___x_571_);
v___x_573_ = lean_nat_add(v___x_569_, v___x_572_);
lean_dec(v___x_572_);
lean_dec(v___x_569_);
v___x_574_ = lean_nat_mod(v_head_559_, v___x_570_);
lean_dec(v_head_559_);
v___x_575_ = lean_nat_add(v___x_573_, v___x_574_);
lean_dec(v___x_574_);
lean_dec(v___x_573_);
v___x_576_ = l_Char_ofNat(v___x_575_);
lean_dec(v___x_575_);
v___x_577_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_tail_560_, v_n_498_);
lean_dec(v_n_498_);
v___x_578_ = lean_box_uint32(v___x_576_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 1, v___x_577_);
lean_ctor_set(v___x_562_, 0, v___x_578_);
v___x_580_ = v___x_562_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_577_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
}
else
{
lean_dec(v_tail_557_);
lean_dec_ref_known(v_tail_478_, 2);
lean_dec(v_n_498_);
goto v___jp_482_;
}
}
else
{
lean_dec(v_n_498_);
lean_dec(v_tail_478_);
goto v___jp_482_;
}
}
}
}
}
v___jp_482_:
{
uint32_t v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_483_ = l_Char_ofNat(v_head_477_);
lean_dec(v_head_477_);
v___x_484_ = lean_box(0);
v___x_485_ = lean_box_uint32(v___x_483_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 1, v___x_484_);
lean_ctor_set(v___x_480_, 0, v___x_485_);
v___x_487_ = v___x_480_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___x_484_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
v___jp_489_:
{
uint32_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_490_ = l_Char_ofNat(v_head_477_);
lean_dec(v_head_477_);
v___x_491_ = lean_box(0);
v___x_492_ = lean_box_uint32(v___x_490_);
v___x_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
lean_ctor_set(v___x_493_, 1, v___x_491_);
return v___x_493_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode_go___boxed(lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_a_623_, v_a_624_);
lean_dec(v_a_624_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode(lean_object* v_bs_626_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = l_List_lengthTR___redArg(v_bs_626_);
v___x_628_ = lp_lean_x2dftml_LeanFtml_utf8Decode_go(v_bs_626_, v___x_627_);
lean_dec(v___x_627_);
return v___x_628_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_utf8Valid_go(lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
if (lean_obj_tag(v_a_629_) == 0)
{
uint8_t v___x_631_; 
lean_dec(v_a_630_);
v___x_631_ = 1;
return v___x_631_;
}
else
{
lean_object* v_head_632_; lean_object* v_tail_633_; lean_object* v_zero_634_; uint8_t v_isZero_635_; 
v_head_632_ = lean_ctor_get(v_a_629_, 0);
v_tail_633_ = lean_ctor_get(v_a_629_, 1);
v_zero_634_ = lean_unsigned_to_nat(0u);
v_isZero_635_ = lean_nat_dec_eq(v_a_630_, v_zero_634_);
if (v_isZero_635_ == 1)
{
uint8_t v___x_636_; 
lean_dec(v_a_630_);
v___x_636_ = 0;
return v___x_636_;
}
else
{
lean_object* v_one_637_; lean_object* v_n_638_; lean_object* v___x_639_; uint8_t v___x_640_; uint8_t v___y_642_; uint8_t v___y_658_; uint8_t v___y_689_; uint8_t v___y_713_; 
v_one_637_ = lean_unsigned_to_nat(1u);
v_n_638_ = lean_nat_sub(v_a_630_, v_one_637_);
lean_dec(v_a_630_);
v___x_639_ = lean_unsigned_to_nat(128u);
v___x_640_ = lean_nat_dec_lt(v_head_632_, v___x_639_);
if (v___x_640_ == 0)
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = lean_unsigned_to_nat(194u);
v___x_738_ = lean_nat_dec_le(v___x_737_, v_head_632_);
if (v___x_738_ == 0)
{
v___y_713_ = v___x_640_;
goto v___jp_712_;
}
else
{
lean_object* v___x_739_; uint8_t v___x_740_; 
v___x_739_ = lean_unsigned_to_nat(224u);
v___x_740_ = lean_nat_dec_lt(v_head_632_, v___x_739_);
if (v___x_740_ == 0)
{
v___y_713_ = v___x_740_;
goto v___jp_712_;
}
else
{
if (lean_obj_tag(v_tail_633_) == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
lean_object* v_head_741_; lean_object* v_tail_742_; uint8_t v___x_743_; 
v_head_741_ = lean_ctor_get(v_tail_633_, 0);
v_tail_742_ = lean_ctor_get(v_tail_633_, 1);
v___x_743_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_741_);
if (v___x_743_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
v_a_629_ = v_tail_742_;
v_a_630_ = v_n_638_;
goto _start;
}
}
}
}
}
else
{
v_a_629_ = v_tail_633_;
v_a_630_ = v_n_638_;
goto _start;
}
v___jp_641_:
{
lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_643_ = lean_unsigned_to_nat(244u);
v___x_644_ = lean_nat_dec_eq(v_head_632_, v___x_643_);
if (v___x_644_ == 0)
{
lean_dec(v_n_638_);
return v___x_644_;
}
else
{
if (lean_obj_tag(v_tail_633_) == 1)
{
lean_object* v_tail_645_; 
v_tail_645_ = lean_ctor_get(v_tail_633_, 1);
if (lean_obj_tag(v_tail_645_) == 1)
{
lean_object* v_tail_646_; 
v_tail_646_ = lean_ctor_get(v_tail_645_, 1);
if (lean_obj_tag(v_tail_646_) == 1)
{
lean_object* v_head_647_; lean_object* v_head_648_; lean_object* v_head_649_; lean_object* v_tail_650_; uint8_t v___x_651_; 
v_head_647_ = lean_ctor_get(v_tail_633_, 0);
v_head_648_ = lean_ctor_get(v_tail_645_, 0);
v_head_649_ = lean_ctor_get(v_tail_646_, 0);
v_tail_650_ = lean_ctor_get(v_tail_646_, 1);
v___x_651_ = lean_nat_dec_le(v___x_639_, v_head_647_);
if (v___x_651_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = lean_unsigned_to_nat(144u);
v___x_653_ = lean_nat_dec_lt(v_head_647_, v___x_652_);
if (v___x_653_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_654_; 
v___x_654_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_648_);
if (v___x_654_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_655_; 
v___x_655_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_649_);
if (v___x_655_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
v_a_629_ = v_tail_650_;
v_a_630_ = v_n_638_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_n_638_);
return v___y_642_;
}
}
else
{
lean_dec(v_n_638_);
return v___y_642_;
}
}
else
{
lean_dec(v_n_638_);
return v___y_642_;
}
}
}
v___jp_657_:
{
lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_659_ = lean_unsigned_to_nat(240u);
v___x_660_ = lean_nat_dec_eq(v_head_632_, v___x_659_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; uint8_t v___x_662_; 
v___x_661_ = lean_unsigned_to_nat(241u);
v___x_662_ = lean_nat_dec_le(v___x_661_, v_head_632_);
if (v___x_662_ == 0)
{
v___y_642_ = v___x_640_;
goto v___jp_641_;
}
else
{
lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_663_ = lean_unsigned_to_nat(244u);
v___x_664_ = lean_nat_dec_lt(v_head_632_, v___x_663_);
if (v___x_664_ == 0)
{
v___y_642_ = v___x_664_;
goto v___jp_641_;
}
else
{
if (lean_obj_tag(v_tail_633_) == 1)
{
lean_object* v_tail_665_; 
v_tail_665_ = lean_ctor_get(v_tail_633_, 1);
if (lean_obj_tag(v_tail_665_) == 1)
{
lean_object* v_tail_666_; 
v_tail_666_ = lean_ctor_get(v_tail_665_, 1);
if (lean_obj_tag(v_tail_666_) == 1)
{
lean_object* v_head_667_; lean_object* v_head_668_; lean_object* v_head_669_; lean_object* v_tail_670_; uint8_t v___x_671_; 
v_head_667_ = lean_ctor_get(v_tail_633_, 0);
v_head_668_ = lean_ctor_get(v_tail_665_, 0);
v_head_669_ = lean_ctor_get(v_tail_666_, 0);
v_tail_670_ = lean_ctor_get(v_tail_666_, 1);
v___x_671_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_667_);
if (v___x_671_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_672_; 
v___x_672_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_668_);
if (v___x_672_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_673_; 
v___x_673_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_669_);
if (v___x_673_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
v_a_629_ = v_tail_670_;
v_a_630_ = v_n_638_;
goto _start;
}
}
}
}
else
{
lean_dec(v_n_638_);
return v___x_660_;
}
}
else
{
lean_dec(v_n_638_);
return v___x_660_;
}
}
else
{
lean_dec(v_n_638_);
return v___x_660_;
}
}
}
}
else
{
if (lean_obj_tag(v_tail_633_) == 1)
{
lean_object* v_tail_675_; 
v_tail_675_ = lean_ctor_get(v_tail_633_, 1);
if (lean_obj_tag(v_tail_675_) == 1)
{
lean_object* v_tail_676_; 
v_tail_676_ = lean_ctor_get(v_tail_675_, 1);
if (lean_obj_tag(v_tail_676_) == 1)
{
lean_object* v_head_677_; lean_object* v_head_678_; lean_object* v_head_679_; lean_object* v_tail_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v_head_677_ = lean_ctor_get(v_tail_633_, 0);
v_head_678_ = lean_ctor_get(v_tail_675_, 0);
v_head_679_ = lean_ctor_get(v_tail_676_, 0);
v_tail_680_ = lean_ctor_get(v_tail_676_, 1);
v___x_681_ = lean_unsigned_to_nat(144u);
v___x_682_ = lean_nat_dec_le(v___x_681_, v_head_677_);
if (v___x_682_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
lean_object* v___x_683_; uint8_t v___x_684_; 
v___x_683_ = lean_unsigned_to_nat(192u);
v___x_684_ = lean_nat_dec_lt(v_head_677_, v___x_683_);
if (v___x_684_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_685_; 
v___x_685_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_678_);
if (v___x_685_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_686_; 
v___x_686_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_679_);
if (v___x_686_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
v_a_629_ = v_tail_680_;
v_a_630_ = v_n_638_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_n_638_);
return v___y_658_;
}
}
else
{
lean_dec(v_n_638_);
return v___y_658_;
}
}
else
{
lean_dec(v_n_638_);
return v___y_658_;
}
}
}
v___jp_688_:
{
lean_object* v___x_690_; uint8_t v___x_691_; 
v___x_690_ = lean_unsigned_to_nat(237u);
v___x_691_ = lean_nat_dec_eq(v_head_632_, v___x_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_692_ = lean_unsigned_to_nat(238u);
v___x_693_ = lean_nat_dec_le(v___x_692_, v_head_632_);
if (v___x_693_ == 0)
{
v___y_658_ = v___x_640_;
goto v___jp_657_;
}
else
{
lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_694_ = lean_unsigned_to_nat(240u);
v___x_695_ = lean_nat_dec_lt(v_head_632_, v___x_694_);
if (v___x_695_ == 0)
{
v___y_658_ = v___x_695_;
goto v___jp_657_;
}
else
{
if (lean_obj_tag(v_tail_633_) == 1)
{
lean_object* v_tail_696_; 
v_tail_696_ = lean_ctor_get(v_tail_633_, 1);
if (lean_obj_tag(v_tail_696_) == 1)
{
lean_object* v_head_697_; lean_object* v_head_698_; lean_object* v_tail_699_; uint8_t v___x_700_; 
v_head_697_ = lean_ctor_get(v_tail_633_, 0);
v_head_698_ = lean_ctor_get(v_tail_696_, 0);
v_tail_699_ = lean_ctor_get(v_tail_696_, 1);
v___x_700_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_697_);
if (v___x_700_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_701_; 
v___x_701_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_698_);
if (v___x_701_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
v_a_629_ = v_tail_699_;
v_a_630_ = v_n_638_;
goto _start;
}
}
}
else
{
lean_dec(v_n_638_);
return v___x_691_;
}
}
else
{
lean_dec(v_n_638_);
return v___x_691_;
}
}
}
}
else
{
if (lean_obj_tag(v_tail_633_) == 1)
{
lean_object* v_tail_703_; 
v_tail_703_ = lean_ctor_get(v_tail_633_, 1);
if (lean_obj_tag(v_tail_703_) == 1)
{
lean_object* v_head_704_; lean_object* v_head_705_; lean_object* v_tail_706_; uint8_t v___x_707_; 
v_head_704_ = lean_ctor_get(v_tail_633_, 0);
v_head_705_ = lean_ctor_get(v_tail_703_, 0);
v_tail_706_ = lean_ctor_get(v_tail_703_, 1);
v___x_707_ = lean_nat_dec_le(v___x_639_, v_head_704_);
if (v___x_707_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_708_ = lean_unsigned_to_nat(160u);
v___x_709_ = lean_nat_dec_lt(v_head_704_, v___x_708_);
if (v___x_709_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_710_; 
v___x_710_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_705_);
if (v___x_710_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
v_a_629_ = v_tail_706_;
v_a_630_ = v_n_638_;
goto _start;
}
}
}
}
else
{
lean_dec(v_n_638_);
return v___y_689_;
}
}
else
{
lean_dec(v_n_638_);
return v___y_689_;
}
}
}
v___jp_712_:
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = lean_unsigned_to_nat(224u);
v___x_715_ = lean_nat_dec_eq(v_head_632_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = lean_unsigned_to_nat(225u);
v___x_717_ = lean_nat_dec_le(v___x_716_, v_head_632_);
if (v___x_717_ == 0)
{
v___y_689_ = v___x_640_;
goto v___jp_688_;
}
else
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = lean_unsigned_to_nat(237u);
v___x_719_ = lean_nat_dec_lt(v_head_632_, v___x_718_);
if (v___x_719_ == 0)
{
v___y_689_ = v___x_719_;
goto v___jp_688_;
}
else
{
if (lean_obj_tag(v_tail_633_) == 1)
{
lean_object* v_tail_720_; 
v_tail_720_ = lean_ctor_get(v_tail_633_, 1);
if (lean_obj_tag(v_tail_720_) == 1)
{
lean_object* v_head_721_; lean_object* v_head_722_; lean_object* v_tail_723_; uint8_t v___x_724_; 
v_head_721_ = lean_ctor_get(v_tail_633_, 0);
v_head_722_ = lean_ctor_get(v_tail_720_, 0);
v_tail_723_ = lean_ctor_get(v_tail_720_, 1);
v___x_724_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_721_);
if (v___x_724_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_725_; 
v___x_725_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_722_);
if (v___x_725_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
v_a_629_ = v_tail_723_;
v_a_630_ = v_n_638_;
goto _start;
}
}
}
else
{
lean_dec(v_n_638_);
return v___x_715_;
}
}
else
{
lean_dec(v_n_638_);
return v___x_715_;
}
}
}
}
else
{
if (lean_obj_tag(v_tail_633_) == 1)
{
lean_object* v_tail_727_; 
v_tail_727_ = lean_ctor_get(v_tail_633_, 1);
if (lean_obj_tag(v_tail_727_) == 1)
{
lean_object* v_head_728_; lean_object* v_head_729_; lean_object* v_tail_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v_head_728_ = lean_ctor_get(v_tail_633_, 0);
v_head_729_ = lean_ctor_get(v_tail_727_, 0);
v_tail_730_ = lean_ctor_get(v_tail_727_, 1);
v___x_731_ = lean_unsigned_to_nat(160u);
v___x_732_ = lean_nat_dec_le(v___x_731_, v_head_728_);
if (v___x_732_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_733_ = lean_unsigned_to_nat(192u);
v___x_734_ = lean_nat_dec_lt(v_head_728_, v___x_733_);
if (v___x_734_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
uint8_t v___x_735_; 
v___x_735_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_729_);
if (v___x_735_ == 0)
{
lean_dec(v_n_638_);
return v___x_640_;
}
else
{
v_a_629_ = v_tail_730_;
v_a_630_ = v_n_638_;
goto _start;
}
}
}
}
else
{
lean_dec(v_n_638_);
return v___y_713_;
}
}
else
{
lean_dec(v_n_638_);
return v___y_713_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Valid_go___boxed(lean_object* v_a_746_, lean_object* v_a_747_){
_start:
{
uint8_t v_res_748_; lean_object* v_r_749_; 
v_res_748_ = lp_lean_x2dftml_LeanFtml_utf8Valid_go(v_a_746_, v_a_747_);
lean_dec(v_a_746_);
v_r_749_ = lean_box(v_res_748_);
return v_r_749_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_utf8Valid(lean_object* v_bs_750_){
_start:
{
lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_751_ = l_List_lengthTR___redArg(v_bs_750_);
v___x_752_ = lp_lean_x2dftml_LeanFtml_utf8Valid_go(v_bs_750_, v___x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_utf8Valid___boxed(lean_object* v_bs_753_){
_start:
{
uint8_t v_res_754_; lean_object* v_r_755_; 
v_res_754_ = lp_lean_x2dftml_LeanFtml_utf8Valid(v_bs_753_);
lean_dec(v_bs_753_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__0));
v___x_758_ = l_String_toListImpl(v___x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___lam__0(uint32_t v___x_759_, lean_object* v_k_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_761_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1, &lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_hex4___lam__0___closed__1);
v___x_762_ = lean_unsigned_to_nat(16u);
v___x_763_ = lean_nat_mod(v_k_760_, v___x_762_);
v___x_764_ = lean_box_uint32(v___x_759_);
v___x_765_ = l_List_get_x21Internal___redArg(v___x_764_, v___x_761_, v___x_763_);
lean_dec(v___x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___lam__0___boxed(lean_object* v___x_766_, lean_object* v_k_767_){
_start:
{
uint32_t v___x_93__boxed_768_; lean_object* v_res_769_; 
v___x_93__boxed_768_ = lean_unbox_uint32(v___x_766_);
lean_dec(v___x_766_);
v_res_769_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_93__boxed_768_, v_k_767_);
lean_dec(v_k_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4(lean_object* v_n_770_){
_start:
{
uint32_t v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_771_ = 65;
v___x_772_ = lean_unsigned_to_nat(12u);
v___x_773_ = lean_nat_shiftr(v_n_770_, v___x_772_);
v___x_774_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_771_, v___x_773_);
lean_dec(v___x_773_);
v___x_775_ = lean_unsigned_to_nat(8u);
v___x_776_ = lean_nat_shiftr(v_n_770_, v___x_775_);
v___x_777_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_771_, v___x_776_);
lean_dec(v___x_776_);
v___x_778_ = lean_unsigned_to_nat(4u);
v___x_779_ = lean_nat_shiftr(v_n_770_, v___x_778_);
v___x_780_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_771_, v___x_779_);
lean_dec(v___x_779_);
v___x_781_ = lp_lean_x2dftml_LeanFtml_hex4___lam__0(v___x_771_, v_n_770_);
v___x_782_ = lean_box(0);
v___x_783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_780_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_777_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_774_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hex4___boxed(lean_object* v_n_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = lp_lean_x2dftml_LeanFtml_hex4(v_n_787_);
lean_dec(v_n_787_);
return v_res_788_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_789_; lean_object* v___x_790_; 
v___x_789_ = 92;
v___x_790_ = lean_box_uint32(v___x_789_);
return v___x_790_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_791_ = lean_box(0);
v___x_792_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
v___x_793_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_793_, 0, v___x_792_);
lean_ctor_set(v___x_793_, 1, v___x_791_);
return v___x_793_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0);
v___x_795_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
v___x_796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
lean_ctor_set(v___x_796_, 1, v___x_794_);
return v___x_796_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1(void){
_start:
{
uint32_t v___x_797_; lean_object* v___x_798_; 
v___x_797_ = 34;
v___x_798_ = lean_box_uint32(v___x_797_);
return v___x_798_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lean_box(0);
v___x_800_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1;
v___x_801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
lean_ctor_set(v___x_801_, 1, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_802_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2);
v___x_803_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
v___x_804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
lean_ctor_set(v___x_804_, 1, v___x_802_);
return v___x_804_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed__const__1(void){
_start:
{
uint32_t v___x_805_; lean_object* v___x_806_; 
v___x_805_ = 117;
v___x_806_ = lean_box_uint32(v___x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc(uint32_t v_c_807_){
_start:
{
uint32_t v___x_808_; uint8_t v___x_809_; 
v___x_808_ = 34;
v___x_809_ = lean_uint32_dec_eq(v_c_807_, v___x_808_);
if (v___x_809_ == 0)
{
uint32_t v___x_810_; uint8_t v___x_811_; 
v___x_810_ = 92;
v___x_811_ = lean_uint32_dec_eq(v_c_807_, v___x_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_812_ = lean_uint32_to_nat(v_c_807_);
v___x_813_ = lean_unsigned_to_nat(32u);
v___x_814_ = lean_nat_dec_lt(v___x_812_, v___x_813_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
lean_dec(v___x_812_);
v___x_815_ = lean_box(0);
v___x_816_ = lean_box_uint32(v_c_807_);
v___x_817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
lean_ctor_set(v___x_817_, 1, v___x_815_);
return v___x_817_;
}
else
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_818_ = lp_lean_x2dftml_LeanFtml_hex4(v___x_812_);
lean_dec(v___x_812_);
v___x_819_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed__const__1;
v___x_820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
lean_ctor_set(v___x_820_, 1, v___x_818_);
v___x_821_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__0___boxed__const__1;
v___x_822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set(v___x_822_, 1, v___x_820_);
return v___x_822_;
}
}
else
{
lean_object* v___x_823_; 
v___x_823_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__1);
return v___x_823_;
}
}
else
{
lean_object* v___x_824_; 
v___x_824_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__3);
return v___x_824_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___boxed(lean_object* v_c_825_){
_start:
{
uint32_t v_c_boxed_826_; lean_object* v_res_827_; 
v_c_boxed_826_ = lean_unbox_uint32(v_c_825_);
lean_dec(v_c_825_);
v_res_827_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc(v_c_boxed_826_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0(lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
if (lean_obj_tag(v_a_828_) == 0)
{
lean_object* v___x_830_; 
v___x_830_ = lean_array_to_list(v_a_829_);
return v___x_830_;
}
else
{
lean_object* v_head_831_; lean_object* v_tail_832_; uint32_t v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_head_831_ = lean_ctor_get(v_a_828_, 0);
v_tail_832_ = lean_ctor_get(v_a_828_, 1);
v___x_833_ = lean_unbox_uint32(v_head_831_);
v___x_834_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc(v___x_833_);
v___x_835_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_829_, v___x_834_);
v_a_828_ = v_tail_832_;
v_a_829_ = v___x_835_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0___boxed(lean_object* v_a_837_, lean_object* v_a_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0(v_a_837_, v_a_838_);
lean_dec(v_a_837_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3(lean_object* v_cs_842_){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_843_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escapeJsonR3___closed__0));
v___x_844_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_escapeJsonR3_spec__0(v_cs_842_, v___x_843_);
v___x_845_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2___boxed__const__1;
v___x_846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
lean_ctor_set(v___x_846_, 1, v___x_844_);
v___x_847_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2, &lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_escapeJsonR3_esc___closed__2);
v___x_848_ = l_List_appendTR___redArg(v___x_846_, v___x_847_);
v___x_849_ = lean_string_mk(v___x_848_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escapeJsonR3___boxed(lean_object* v_cs_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_cs_850_);
lean_dec(v_cs_850_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__2(lean_object* v_a_852_, lean_object* v_a_853_){
_start:
{
if (lean_obj_tag(v_a_852_) == 0)
{
lean_object* v___x_854_; 
v___x_854_ = l_List_reverse___redArg(v_a_853_);
return v___x_854_;
}
else
{
lean_object* v_head_855_; lean_object* v_tail_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_865_; 
v_head_855_ = lean_ctor_get(v_a_852_, 0);
v_tail_856_ = lean_ctor_get(v_a_852_, 1);
v_isSharedCheck_865_ = !lean_is_exclusive(v_a_852_);
if (v_isSharedCheck_865_ == 0)
{
v___x_858_ = v_a_852_;
v_isShared_859_ = v_isSharedCheck_865_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_tail_856_);
lean_inc(v_head_855_);
lean_dec(v_a_852_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_865_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_860_ = l_Nat_reprFast(v_head_855_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 1, v_a_853_);
lean_ctor_set(v___x_858_, 0, v___x_860_);
v___x_862_ = v___x_858_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___x_860_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v_a_853_);
v___x_862_ = v_reuseFailAlloc_864_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
v_a_852_ = v_tail_856_;
v_a_853_ = v___x_862_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0(lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
if (lean_obj_tag(v_a_872_) == 0)
{
lean_object* v___x_874_; 
v___x_874_ = l_List_reverse___redArg(v_a_873_);
return v___x_874_;
}
else
{
lean_object* v_head_875_; lean_object* v_tail_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_891_; 
v_head_875_ = lean_ctor_get(v_a_872_, 0);
v_tail_876_ = lean_ctor_get(v_a_872_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v_a_872_);
if (v_isSharedCheck_891_ == 0)
{
v___x_878_ = v_a_872_;
v_isShared_879_ = v_isSharedCheck_891_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_tail_876_);
lean_inc(v_head_875_);
lean_dec(v_a_872_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_891_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v_fst_880_; lean_object* v_snd_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_888_; 
v_fst_880_ = lean_ctor_get(v_head_875_, 0);
lean_inc(v_fst_880_);
v_snd_881_ = lean_ctor_get(v_head_875_, 1);
lean_inc(v_snd_881_);
lean_dec(v_head_875_);
v___x_882_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_fst_880_);
lean_dec(v_fst_880_);
v___x_883_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0___closed__0));
v___x_884_ = lean_string_append(v___x_882_, v___x_883_);
v___x_885_ = lp_lean_x2dftml_LeanFtml_serOptVal(v_snd_881_);
v___x_886_ = lean_string_append(v___x_884_, v___x_885_);
lean_dec_ref(v___x_885_);
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 1, v_a_873_);
lean_ctor_set(v___x_878_, 0, v___x_886_);
v___x_888_ = v___x_878_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_a_873_);
v___x_888_ = v_reuseFailAlloc_890_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
v_a_872_ = v_tail_876_;
v_a_873_ = v___x_888_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serOptVal(lean_object* v_x_897_){
_start:
{
switch(lean_obj_tag(v_x_897_))
{
case 0:
{
lean_object* v_a_898_; lean_object* v___x_899_; 
v_a_898_ = lean_ctor_get(v_x_897_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v_x_897_, 1);
v___x_899_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_a_898_);
lean_dec(v_a_898_);
return v___x_899_;
}
case 1:
{
lean_object* v_a_900_; lean_object* v___x_901_; 
v_a_900_ = lean_ctor_get(v_x_897_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v_x_897_, 1);
v___x_901_ = l_Int_repr(v_a_900_);
lean_dec(v_a_900_);
return v___x_901_;
}
case 2:
{
uint8_t v_a_902_; 
v_a_902_ = lean_ctor_get_uint8(v_x_897_, 0);
lean_dec_ref_known(v_x_897_, 0);
if (v_a_902_ == 0)
{
lean_object* v___x_903_; 
v___x_903_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__0));
return v___x_903_;
}
else
{
lean_object* v___x_904_; 
v___x_904_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__1));
return v___x_904_;
}
}
case 3:
{
lean_object* v___x_905_; 
v___x_905_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__2));
return v___x_905_;
}
case 4:
{
lean_object* v_a_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v_a_906_ = lean_ctor_get(v_x_897_, 0);
lean_inc(v_a_906_);
lean_dec_ref_known(v_x_897_, 1);
v___x_907_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__3));
v___x_908_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_909_ = lean_box(0);
v___x_910_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0(v_a_906_, v___x_909_);
v___x_911_ = l_String_intercalate(v___x_908_, v___x_910_);
v___x_912_ = lean_string_append(v___x_907_, v___x_911_);
lean_dec_ref(v___x_911_);
v___x_913_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__5));
v___x_914_ = lean_string_append(v___x_912_, v___x_913_);
return v___x_914_;
}
case 5:
{
lean_object* v_a_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_a_915_ = lean_ctor_get(v_x_897_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v_x_897_, 1);
v___x_916_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_917_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_918_ = lean_box(0);
v___x_919_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__1(v_a_915_, v___x_918_);
v___x_920_ = l_String_intercalate(v___x_917_, v___x_919_);
v___x_921_ = lean_string_append(v___x_916_, v___x_920_);
lean_dec_ref(v___x_920_);
v___x_922_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_923_ = lean_string_append(v___x_921_, v___x_922_);
return v___x_923_;
}
default: 
{
lean_object* v_a_924_; uint8_t v___x_925_; 
v_a_924_ = lean_ctor_get(v_x_897_, 0);
lean_inc(v_a_924_);
lean_dec_ref_known(v_x_897_, 1);
v___x_925_ = lp_lean_x2dftml_LeanFtml_utf8Valid(v_a_924_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_926_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__8));
v___x_927_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_928_ = lean_box(0);
v___x_929_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__2(v_a_924_, v___x_928_);
v___x_930_ = l_String_intercalate(v___x_927_, v___x_929_);
v___x_931_ = lean_string_append(v___x_926_, v___x_930_);
lean_dec_ref(v___x_930_);
v___x_932_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__9));
v___x_933_ = lean_string_append(v___x_931_, v___x_932_);
return v___x_933_;
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_a_924_);
v___x_935_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v___x_934_);
lean_dec(v___x_934_);
return v___x_935_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__1(lean_object* v_a_936_, lean_object* v_a_937_){
_start:
{
if (lean_obj_tag(v_a_936_) == 0)
{
lean_object* v___x_938_; 
v___x_938_ = l_List_reverse___redArg(v_a_937_);
return v___x_938_;
}
else
{
lean_object* v_head_939_; lean_object* v_tail_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_949_; 
v_head_939_ = lean_ctor_get(v_a_936_, 0);
v_tail_940_ = lean_ctor_get(v_a_936_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v_a_936_);
if (v_isSharedCheck_949_ == 0)
{
v___x_942_ = v_a_936_;
v_isShared_943_ = v_isSharedCheck_949_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_tail_940_);
lean_inc(v_head_939_);
lean_dec(v_a_936_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_949_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_944_; lean_object* v___x_946_; 
v___x_944_ = lp_lean_x2dftml_LeanFtml_serOptVal(v_head_939_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v_a_937_);
lean_ctor_set(v___x_942_, 0, v___x_944_);
v___x_946_ = v___x_942_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_a_937_);
v___x_946_ = v_reuseFailAlloc_948_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
v_a_936_ = v_tail_940_;
v_a_937_ = v___x_946_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serOptMap(lean_object* v_m_950_){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_951_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__3));
v___x_952_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_953_ = lean_box(0);
v___x_954_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__0(v_m_950_, v___x_953_);
v___x_955_ = l_String_intercalate(v___x_952_, v___x_954_);
v___x_956_ = lean_string_append(v___x_951_, v___x_955_);
lean_dec_ref(v___x_955_);
v___x_957_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__5));
v___x_958_ = lean_string_append(v___x_956_, v___x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serSeg(lean_object* v_x_961_){
_start:
{
if (lean_obj_tag(v_x_961_) == 0)
{
lean_object* v_a_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v_a_962_ = lean_ctor_get(v_x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v_x_961_, 1);
v___x_963_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serSeg___closed__0));
v___x_964_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_a_962_);
lean_dec(v_a_962_);
v___x_965_ = lean_string_append(v___x_963_, v___x_964_);
lean_dec_ref(v___x_964_);
v___x_966_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__5));
v___x_967_ = lean_string_append(v___x_965_, v___x_966_);
return v___x_967_;
}
else
{
lean_object* v_a_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v_a_968_ = lean_ctor_get(v_x_961_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v_x_961_, 1);
v___x_969_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serSeg___closed__1));
v___x_970_ = l_Nat_reprFast(v_a_968_);
v___x_971_ = lean_string_append(v___x_969_, v___x_970_);
lean_dec_ref(v___x_970_);
v___x_972_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__5));
v___x_973_ = lean_string_append(v___x_971_, v___x_972_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serToken(lean_object* v_t_974_){
_start:
{
lean_object* v_rule_975_; lean_object* v_opts_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v_rule_975_ = lean_ctor_get(v_t_974_, 0);
lean_inc_ref(v_rule_975_);
v_opts_976_ = lean_ctor_get(v_t_974_, 1);
lean_inc(v_opts_976_);
lean_dec_ref(v_t_974_);
v___x_977_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_978_ = l_String_toListImpl(v_rule_975_);
v___x_979_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v___x_978_);
lean_dec(v___x_978_);
v___x_980_ = lean_string_append(v___x_977_, v___x_979_);
lean_dec_ref(v___x_979_);
v___x_981_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_982_ = lean_string_append(v___x_980_, v___x_981_);
v___x_983_ = lp_lean_x2dftml_LeanFtml_serOptMap(v_opts_976_);
v___x_984_ = lean_string_append(v___x_982_, v___x_983_);
lean_dec_ref(v___x_983_);
v___x_985_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_986_ = lean_string_append(v___x_984_, v___x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serBytes(lean_object* v_bs_987_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_988_, 0, v_bs_987_);
v___x_989_ = lp_lean_x2dftml_LeanFtml_serOptVal(v___x_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__5(lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
if (lean_obj_tag(v_a_990_) == 0)
{
lean_object* v___x_992_; 
v___x_992_ = l_List_reverse___redArg(v_a_991_);
return v___x_992_;
}
else
{
lean_object* v_head_993_; lean_object* v_tail_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1013_; 
v_head_993_ = lean_ctor_get(v_a_990_, 0);
v_tail_994_ = lean_ctor_get(v_a_990_, 1);
v_isSharedCheck_1013_ = !lean_is_exclusive(v_a_990_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_996_ = v_a_990_;
v_isShared_997_ = v_isSharedCheck_1013_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_tail_994_);
lean_inc(v_head_993_);
lean_dec(v_a_990_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1013_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v_fst_998_; lean_object* v_snd_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1010_; 
v_fst_998_ = lean_ctor_get(v_head_993_, 0);
lean_inc(v_fst_998_);
v_snd_999_ = lean_ctor_get(v_head_993_, 1);
lean_inc(v_snd_999_);
lean_dec(v_head_993_);
v___x_1000_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_1001_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_1002_ = lp_lean_x2dftml_LeanFtml_serBytes(v_fst_998_);
v___x_1003_ = lean_string_append(v___x_1001_, v___x_1002_);
lean_dec_ref(v___x_1002_);
v___x_1004_ = lean_string_append(v___x_1003_, v___x_1000_);
v___x_1005_ = l_Nat_reprFast(v_snd_999_);
v___x_1006_ = lean_string_append(v___x_1004_, v___x_1005_);
lean_dec_ref(v___x_1005_);
v___x_1007_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_1008_ = lean_string_append(v___x_1006_, v___x_1007_);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 1, v_a_991_);
lean_ctor_set(v___x_996_, 0, v___x_1008_);
v___x_1010_ = v___x_996_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1008_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v_a_991_);
v___x_1010_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
v_a_990_ = v_tail_994_;
v_a_991_ = v___x_1010_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__4(lean_object* v_a_1014_, lean_object* v_a_1015_){
_start:
{
if (lean_obj_tag(v_a_1014_) == 0)
{
lean_object* v___x_1016_; 
v___x_1016_ = l_List_reverse___redArg(v_a_1015_);
return v___x_1016_;
}
else
{
lean_object* v_head_1017_; lean_object* v_tail_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1037_; 
v_head_1017_ = lean_ctor_get(v_a_1014_, 0);
v_tail_1018_ = lean_ctor_get(v_a_1014_, 1);
v_isSharedCheck_1037_ = !lean_is_exclusive(v_a_1014_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1020_ = v_a_1014_;
v_isShared_1021_ = v_isSharedCheck_1037_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_tail_1018_);
lean_inc(v_head_1017_);
lean_dec(v_a_1014_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1037_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v_fst_1022_; lean_object* v_snd_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
v_fst_1022_ = lean_ctor_get(v_head_1017_, 0);
lean_inc(v_fst_1022_);
v_snd_1023_ = lean_ctor_get(v_head_1017_, 1);
lean_inc(v_snd_1023_);
lean_dec(v_head_1017_);
v___x_1024_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_1025_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_1026_ = lp_lean_x2dftml_LeanFtml_serBytes(v_fst_1022_);
v___x_1027_ = lean_string_append(v___x_1025_, v___x_1026_);
lean_dec_ref(v___x_1026_);
v___x_1028_ = lean_string_append(v___x_1027_, v___x_1024_);
v___x_1029_ = lp_lean_x2dftml_LeanFtml_serBytes(v_snd_1023_);
v___x_1030_ = lean_string_append(v___x_1028_, v___x_1029_);
lean_dec_ref(v___x_1029_);
v___x_1031_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_1032_ = lean_string_append(v___x_1030_, v___x_1031_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 1, v_a_1015_);
lean_ctor_set(v___x_1020_, 0, v___x_1032_);
v___x_1034_ = v___x_1020_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v_a_1015_);
v___x_1034_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
v_a_1014_ = v_tail_1018_;
v_a_1015_ = v___x_1034_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__6(lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
if (lean_obj_tag(v_a_1038_) == 0)
{
lean_object* v___x_1040_; 
v___x_1040_ = l_List_reverse___redArg(v_a_1039_);
return v___x_1040_;
}
else
{
lean_object* v_head_1041_; lean_object* v_tail_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1051_; 
v_head_1041_ = lean_ctor_get(v_a_1038_, 0);
v_tail_1042_ = lean_ctor_get(v_a_1038_, 1);
v_isSharedCheck_1051_ = !lean_is_exclusive(v_a_1038_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1044_ = v_a_1038_;
v_isShared_1045_ = v_isSharedCheck_1051_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_tail_1042_);
lean_inc(v_head_1041_);
lean_dec(v_a_1038_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1051_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1046_; lean_object* v___x_1048_; 
v___x_1046_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_head_1041_);
lean_dec(v_head_1041_);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 1, v_a_1039_);
lean_ctor_set(v___x_1044_, 0, v___x_1046_);
v___x_1048_ = v___x_1044_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v_a_1039_);
v___x_1048_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
v_a_1038_ = v_tail_1042_;
v_a_1039_ = v___x_1048_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__0(lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
if (lean_obj_tag(v_a_1052_) == 0)
{
lean_object* v___x_1054_; 
v___x_1054_ = l_List_reverse___redArg(v_a_1053_);
return v___x_1054_;
}
else
{
lean_object* v_head_1055_; lean_object* v_tail_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1065_; 
v_head_1055_ = lean_ctor_get(v_a_1052_, 0);
v_tail_1056_ = lean_ctor_get(v_a_1052_, 1);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_a_1052_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1058_ = v_a_1052_;
v_isShared_1059_ = v_isSharedCheck_1065_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_tail_1056_);
lean_inc(v_head_1055_);
lean_dec(v_a_1052_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1065_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1060_; lean_object* v___x_1062_; 
v___x_1060_ = lp_lean_x2dftml_LeanFtml_serSeg(v_head_1055_);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v_a_1053_);
lean_ctor_set(v___x_1058_, 0, v___x_1060_);
v___x_1062_ = v___x_1058_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1060_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_a_1053_);
v___x_1062_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
v_a_1052_ = v_tail_1056_;
v_a_1053_ = v___x_1062_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__3(lean_object* v_a_1066_, lean_object* v_a_1067_){
_start:
{
if (lean_obj_tag(v_a_1066_) == 0)
{
lean_object* v___x_1068_; 
v___x_1068_ = l_List_reverse___redArg(v_a_1067_);
return v___x_1068_;
}
else
{
lean_object* v_head_1069_; lean_object* v_tail_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1079_; 
v_head_1069_ = lean_ctor_get(v_a_1066_, 0);
v_tail_1070_ = lean_ctor_get(v_a_1066_, 1);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_a_1066_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1072_ = v_a_1066_;
v_isShared_1073_ = v_isSharedCheck_1079_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_tail_1070_);
lean_inc(v_head_1069_);
lean_dec(v_a_1066_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1079_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1074_; lean_object* v___x_1076_; 
v___x_1074_ = lp_lean_x2dftml_LeanFtml_serBytes(v_head_1069_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 1, v_a_1067_);
lean_ctor_set(v___x_1072_, 0, v___x_1074_);
v___x_1076_ = v___x_1072_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1074_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_a_1067_);
v___x_1076_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
v_a_1066_ = v_tail_1070_;
v_a_1067_ = v___x_1076_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__2(lean_object* v_a_1080_, lean_object* v_a_1081_){
_start:
{
if (lean_obj_tag(v_a_1080_) == 0)
{
lean_object* v___x_1082_; 
v___x_1082_ = l_List_reverse___redArg(v_a_1081_);
return v___x_1082_;
}
else
{
lean_object* v_head_1083_; lean_object* v_tail_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1103_; 
v_head_1083_ = lean_ctor_get(v_a_1080_, 0);
v_tail_1084_ = lean_ctor_get(v_a_1080_, 1);
v_isSharedCheck_1103_ = !lean_is_exclusive(v_a_1080_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1086_ = v_a_1080_;
v_isShared_1087_ = v_isSharedCheck_1103_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_tail_1084_);
lean_inc(v_head_1083_);
lean_dec(v_a_1080_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1103_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v_fst_1088_; lean_object* v_snd_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1100_; 
v_fst_1088_ = lean_ctor_get(v_head_1083_, 0);
lean_inc(v_fst_1088_);
v_snd_1089_ = lean_ctor_get(v_head_1083_, 1);
lean_inc(v_snd_1089_);
lean_dec(v_head_1083_);
v___x_1090_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_1091_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__6));
v___x_1092_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v_fst_1088_);
lean_dec(v_fst_1088_);
v___x_1093_ = lean_string_append(v___x_1091_, v___x_1092_);
lean_dec_ref(v___x_1092_);
v___x_1094_ = lean_string_append(v___x_1093_, v___x_1090_);
v___x_1095_ = l_Nat_reprFast(v_snd_1089_);
v___x_1096_ = lean_string_append(v___x_1094_, v___x_1095_);
lean_dec_ref(v___x_1095_);
v___x_1097_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__7));
v___x_1098_ = lean_string_append(v___x_1096_, v___x_1097_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 1, v_a_1081_);
lean_ctor_set(v___x_1086_, 0, v___x_1098_);
v___x_1100_ = v___x_1086_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1098_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v_a_1081_);
v___x_1100_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
v_a_1080_ = v_tail_1084_;
v_a_1081_ = v___x_1100_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__1(lean_object* v_a_1104_, lean_object* v_a_1105_){
_start:
{
if (lean_obj_tag(v_a_1104_) == 0)
{
lean_object* v___x_1106_; 
v___x_1106_ = l_List_reverse___redArg(v_a_1105_);
return v___x_1106_;
}
else
{
lean_object* v_head_1107_; lean_object* v_tail_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1117_; 
v_head_1107_ = lean_ctor_get(v_a_1104_, 0);
v_tail_1108_ = lean_ctor_get(v_a_1104_, 1);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_a_1104_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1110_ = v_a_1104_;
v_isShared_1111_ = v_isSharedCheck_1117_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_tail_1108_);
lean_inc(v_head_1107_);
lean_dec(v_a_1104_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1117_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1112_; lean_object* v___x_1114_; 
v___x_1112_ = lp_lean_x2dftml_LeanFtml_serToken(v_head_1107_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 1, v_a_1105_);
lean_ctor_set(v___x_1110_, 0, v___x_1112_);
v___x_1114_ = v___x_1110_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1112_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_a_1105_);
v___x_1114_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
v_a_1104_ = v_tail_1108_;
v_a_1105_ = v___x_1114_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_serState(lean_object* v_id_1129_, lean_object* v_st_1130_){
_start:
{
lean_object* v_doc_1131_; lean_object* v_work_1132_; lean_object* v_tokens_1133_; lean_object* v_inclusions_1134_; lean_object* v_inclusionsNotExist_1135_; lean_object* v_footnotes_1136_; lean_object* v_bibitems_1137_; lean_object* v_bibitemIds_1138_; lean_object* v_mathId_1139_; lean_object* v_equations_1140_; lean_object* v_scoredAnchors_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___y_1167_; 
v_doc_1131_ = lean_ctor_get(v_st_1130_, 2);
lean_inc_ref(v_doc_1131_);
v_work_1132_ = lean_ctor_get(v_st_1130_, 0);
lean_inc(v_work_1132_);
v_tokens_1133_ = lean_ctor_get(v_st_1130_, 1);
lean_inc(v_tokens_1133_);
lean_dec_ref(v_st_1130_);
v_inclusions_1134_ = lean_ctor_get(v_doc_1131_, 2);
lean_inc(v_inclusions_1134_);
v_inclusionsNotExist_1135_ = lean_ctor_get(v_doc_1131_, 3);
lean_inc(v_inclusionsNotExist_1135_);
v_footnotes_1136_ = lean_ctor_get(v_doc_1131_, 4);
lean_inc(v_footnotes_1136_);
v_bibitems_1137_ = lean_ctor_get(v_doc_1131_, 5);
lean_inc(v_bibitems_1137_);
v_bibitemIds_1138_ = lean_ctor_get(v_doc_1131_, 6);
lean_inc(v_bibitemIds_1138_);
v_mathId_1139_ = lean_ctor_get(v_doc_1131_, 8);
lean_inc(v_mathId_1139_);
v_equations_1140_ = lean_ctor_get(v_doc_1131_, 9);
lean_inc(v_equations_1140_);
v_scoredAnchors_1141_ = lean_ctor_get(v_doc_1131_, 12);
lean_inc(v_scoredAnchors_1141_);
lean_dec_ref(v_doc_1131_);
v___x_1142_ = lp_lean_x2dftml_LeanFtml_normSegs(v_work_1132_);
v___x_1143_ = lean_box(0);
v___x_1144_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__0(v___x_1142_, v___x_1143_);
v___x_1145_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__0));
v___x_1146_ = l_String_toListImpl(v_id_1129_);
v___x_1147_ = lp_lean_x2dftml_LeanFtml_escapeJsonR3(v___x_1146_);
lean_dec(v___x_1146_);
v___x_1148_ = lean_string_append(v___x_1145_, v___x_1147_);
lean_dec_ref(v___x_1147_);
v___x_1149_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__1));
v___x_1150_ = lean_string_append(v___x_1148_, v___x_1149_);
v___x_1151_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__4));
v___x_1152_ = l_String_intercalate(v___x_1151_, v___x_1144_);
v___x_1153_ = lean_string_append(v___x_1150_, v___x_1152_);
lean_dec_ref(v___x_1152_);
v___x_1154_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__2));
v___x_1155_ = lean_string_append(v___x_1153_, v___x_1154_);
v___x_1156_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__1(v_tokens_1133_, v___x_1143_);
v___x_1157_ = l_String_intercalate(v___x_1151_, v___x_1156_);
v___x_1158_ = lean_string_append(v___x_1155_, v___x_1157_);
lean_dec_ref(v___x_1157_);
v___x_1159_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__3));
v___x_1160_ = lean_string_append(v___x_1158_, v___x_1159_);
v___x_1161_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__2(v_equations_1140_, v___x_1143_);
v___x_1162_ = l_String_intercalate(v___x_1151_, v___x_1161_);
v___x_1163_ = lean_string_append(v___x_1160_, v___x_1162_);
lean_dec_ref(v___x_1162_);
v___x_1164_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__4));
v___x_1165_ = lean_string_append(v___x_1163_, v___x_1164_);
if (lean_obj_tag(v_mathId_1139_) == 0)
{
lean_object* v___x_1201_; 
v___x_1201_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__2));
v___y_1167_ = v___x_1201_;
goto v___jp_1166_;
}
else
{
lean_object* v_val_1202_; lean_object* v___x_1203_; 
v_val_1202_ = lean_ctor_get(v_mathId_1139_, 0);
lean_inc(v_val_1202_);
lean_dec_ref_known(v_mathId_1139_, 1);
v___x_1203_ = l_Nat_reprFast(v_val_1202_);
v___y_1167_ = v___x_1203_;
goto v___jp_1166_;
}
v___jp_1166_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1168_ = lean_string_append(v___x_1165_, v___y_1167_);
lean_dec_ref(v___y_1167_);
v___x_1169_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__5));
v___x_1170_ = lean_string_append(v___x_1168_, v___x_1169_);
v___x_1171_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__3(v_footnotes_1136_, v___x_1143_);
v___x_1172_ = l_String_intercalate(v___x_1151_, v___x_1171_);
v___x_1173_ = lean_string_append(v___x_1170_, v___x_1172_);
lean_dec_ref(v___x_1172_);
v___x_1174_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__6));
v___x_1175_ = lean_string_append(v___x_1173_, v___x_1174_);
v___x_1176_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__4(v_bibitems_1137_, v___x_1143_);
v___x_1177_ = l_String_intercalate(v___x_1151_, v___x_1176_);
v___x_1178_ = lean_string_append(v___x_1175_, v___x_1177_);
lean_dec_ref(v___x_1177_);
v___x_1179_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__7));
v___x_1180_ = lean_string_append(v___x_1178_, v___x_1179_);
v___x_1181_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__5(v_bibitemIds_1138_, v___x_1143_);
v___x_1182_ = l_String_intercalate(v___x_1151_, v___x_1181_);
v___x_1183_ = lean_string_append(v___x_1180_, v___x_1182_);
lean_dec_ref(v___x_1182_);
v___x_1184_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__8));
v___x_1185_ = lean_string_append(v___x_1183_, v___x_1184_);
v___x_1186_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__4(v_scoredAnchors_1141_, v___x_1143_);
v___x_1187_ = l_String_intercalate(v___x_1151_, v___x_1186_);
v___x_1188_ = lean_string_append(v___x_1185_, v___x_1187_);
lean_dec_ref(v___x_1187_);
v___x_1189_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__9));
v___x_1190_ = lean_string_append(v___x_1188_, v___x_1189_);
v___x_1191_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serOptVal_spec__2(v_inclusions_1134_, v___x_1143_);
v___x_1192_ = l_String_intercalate(v___x_1151_, v___x_1191_);
v___x_1193_ = lean_string_append(v___x_1190_, v___x_1192_);
lean_dec_ref(v___x_1192_);
v___x_1194_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serState___closed__10));
v___x_1195_ = lean_string_append(v___x_1193_, v___x_1194_);
v___x_1196_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_serState_spec__6(v_inclusionsNotExist_1135_, v___x_1143_);
v___x_1197_ = l_String_intercalate(v___x_1151_, v___x_1196_);
v___x_1198_ = lean_string_append(v___x_1195_, v___x_1197_);
lean_dec_ref(v___x_1197_);
v___x_1199_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_serOptVal___closed__9));
v___x_1200_ = lean_string_append(v___x_1198_, v___x_1199_);
return v___x_1200_;
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
