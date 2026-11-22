// Lean compiler output
// Module: LeanFtml.CoverageCodemath
// Imports: public import Init public meta import Init public import LeanFtml.ServingRules public import LeanFtml.Inline1Rules
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
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_mathGuard_go(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_mathTypeValid(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_codeLangs;
lean_object* lp_lean_x2dftml_LeanFtml_codeType(lean_object*);
uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phpTrimBytes(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CodemathClass_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathClass(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathClass___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.CodemathClass.codePlain"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.CodemathClass.codeEmpty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.CodemathClass.codeTrailWs"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.CodemathClass.codeTrailEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.CodemathClass.mathFatal"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "LeanFtml.CodemathClass.mathTypeAbsent"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "LeanFtml.CodemathClass.mathTypeValid"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "LeanFtml.CodemathClass.mathTypeInvalid"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__15_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.CodemathClass.miPlain"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__17_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.CodemathClass.miDepth"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__19_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.CodemathClass.miUnknown"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__21_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.CodemathClass.miCycle"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__23_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.CodemathClass.miSource"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__25_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.CodemathClass.miFallback"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__27_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "LeanFtml.CodemathClass.miSuppressFreelink"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__28_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__29_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "LeanFtml.CodemathClass.miSuppressRaw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__31_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "LeanFtml.CodemathClass.miSuppressNewline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__32_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__33_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "LeanFtml.CodemathClass.miSuppressImage"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__35_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "LeanFtml.CodemathClass.miSuppressDate"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__37_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCodemathClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathClass___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__18_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_cmAllClasses = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmAllClasses___closed__18_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CodeBodyKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodeBodyKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodeBodyKind___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.CodeBodyKind.plain"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.CodeBodyKind.empty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CodeTrailKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodeTrailKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodeTrailKind___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.CodeTrailKind.ws"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.CodeTrailKind.atEnd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trail"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__15;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCodeShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_absent_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_absent_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_absent_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_absent_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_valid_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_valid_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_valid_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_valid_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_MathKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqMathKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqMathKind___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.MathKind.fatal"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.MathKind.absent"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.MathKind.valid"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.MathKind.invalid"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__7_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprMathKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMathKind___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_MiPhKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqMiPhKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqMiPhKind___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.MiPhKind.unknown"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.MiPhKind.cycle"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.MiPhKind.source"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.MiPhKind.fallback"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.MiPhKind.supFree"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.MiPhKind.supRaw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanFtml.MiPhKind.supNl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.MiPhKind.supImage"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__15_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.MiPhKind.supDate"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__17_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprMiPhKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiPhKind___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_depthCap_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_depthCap_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_plain_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_plain_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_walk_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_walk_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__5;
static lean_once_cell_t lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__6;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanFtml.MiShape.plain"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.MiShape.depthCap"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanFtml.MiShape.walk"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__6_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprMiShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprMiShape___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_code_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_code_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_math_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_math_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_mathinline_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_mathinline_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.CodemathShape.code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.CodemathShape.math"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.CodemathShape.mathinline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__8_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprCodemathShape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprCodemathShape___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_codeBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_codeBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBranches___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_codeBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBranches___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBranches___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_codeBranches___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBranches___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBranches___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBranches___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathBranches___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathBranches___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathBranches___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathBranches___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathBranches___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathBranches___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathBranches___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathBranches___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBranches(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBranches___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_miPhClass(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miPhClass___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_miIsSuppress(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miIsSuppress___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_miClassifyWalk_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_miClassifyWalk_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_miClassifyWalk_spec__0___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_miClassifyWalk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_miClassifyWalk___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_miClassifyWalk___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miClassifyWalk(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_miBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_miBranches___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_miBranches___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miBranches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClassify(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_cmClassMemDecidable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_cmClassMemDecidable___closed__0;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_cmClassMemDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClassMemDecidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miClassifyWalk_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miClassifyWalk_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miClassifyWalk_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miClassifyWalk_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__25_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__28_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__31_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__33_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__35_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__37_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_cmWitness___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__37_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmWitness___closed__38_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmWitness(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_codeInBoundary(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeInBoundary___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeShapeOf(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeShapeOf___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathKindOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathKindOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathKindOf___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathKindOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathKindOf___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathKindOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathKindOf___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_miPhOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Freelink"};
static const lean_object* lp_lean_x2dftml_LeanFtml_miPhOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_miPhOf___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_miPhOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_miPhOf___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_miPhOf___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_miPhOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Newline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_miPhOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_miPhOf___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_miPhOf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Image"};
static const lean_object* lp_lean_x2dftml_LeanFtml_miPhOf___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_miPhOf___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_miPhOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Date"};
static const lean_object* lp_lean_x2dftml_LeanFtml_miPhOf___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_miPhOf___closed__4_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_miPhOf(uint8_t, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miPhOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_code_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_code_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_math_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_math_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_mi_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_mi_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_cmInputInFamily(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmInputInFamily___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmShapeOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClassOf(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_cmMemClass_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_cmMemClass_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_cmMemClass(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmMemClass___boxed(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_cmClaimed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_cmClaimed___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_cmClaimed___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClaimed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClaimed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_lean_x2dftml_LeanFtml_CodemathClass_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = lp_lean_x2dftml_LeanFtml_CodemathClass_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim___redArg(lean_object* v_codePlain_22_){
_start:
{
lean_inc(v_codePlain_22_);
return v_codePlain_22_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim___redArg___boxed(lean_object* v_codePlain_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim___redArg(v_codePlain_23_);
lean_dec(v_codePlain_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_codePlain_28_){
_start:
{
lean_inc(v_codePlain_28_);
return v_codePlain_28_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_codePlain_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = lp_lean_x2dftml_LeanFtml_CodemathClass_codePlain_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_codePlain_32_);
lean_dec(v_codePlain_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim___redArg(lean_object* v_codeEmpty_35_){
_start:
{
lean_inc(v_codeEmpty_35_);
return v_codeEmpty_35_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim___redArg___boxed(lean_object* v_codeEmpty_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim___redArg(v_codeEmpty_36_);
lean_dec(v_codeEmpty_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_codeEmpty_41_){
_start:
{
lean_inc(v_codeEmpty_41_);
return v_codeEmpty_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_codeEmpty_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = lp_lean_x2dftml_LeanFtml_CodemathClass_codeEmpty_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_codeEmpty_45_);
lean_dec(v_codeEmpty_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim___redArg(lean_object* v_codeTrailWs_48_){
_start:
{
lean_inc(v_codeTrailWs_48_);
return v_codeTrailWs_48_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim___redArg___boxed(lean_object* v_codeTrailWs_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim___redArg(v_codeTrailWs_49_);
lean_dec(v_codeTrailWs_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_codeTrailWs_54_){
_start:
{
lean_inc(v_codeTrailWs_54_);
return v_codeTrailWs_54_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_codeTrailWs_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailWs_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_codeTrailWs_58_);
lean_dec(v_codeTrailWs_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim___redArg(lean_object* v_codeTrailEnd_61_){
_start:
{
lean_inc(v_codeTrailEnd_61_);
return v_codeTrailEnd_61_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim___redArg___boxed(lean_object* v_codeTrailEnd_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim___redArg(v_codeTrailEnd_62_);
lean_dec(v_codeTrailEnd_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim(lean_object* v_motive_64_, uint8_t v_t_65_, lean_object* v_h_66_, lean_object* v_codeTrailEnd_67_){
_start:
{
lean_inc(v_codeTrailEnd_67_);
return v_codeTrailEnd_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_codeTrailEnd_71_){
_start:
{
uint8_t v_t_boxed_72_; lean_object* v_res_73_; 
v_t_boxed_72_ = lean_unbox(v_t_69_);
v_res_73_ = lp_lean_x2dftml_LeanFtml_CodemathClass_codeTrailEnd_elim(v_motive_68_, v_t_boxed_72_, v_h_70_, v_codeTrailEnd_71_);
lean_dec(v_codeTrailEnd_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim___redArg(lean_object* v_mathFatal_74_){
_start:
{
lean_inc(v_mathFatal_74_);
return v_mathFatal_74_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim___redArg___boxed(lean_object* v_mathFatal_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim___redArg(v_mathFatal_75_);
lean_dec(v_mathFatal_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim(lean_object* v_motive_77_, uint8_t v_t_78_, lean_object* v_h_79_, lean_object* v_mathFatal_80_){
_start:
{
lean_inc(v_mathFatal_80_);
return v_mathFatal_80_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim___boxed(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_mathFatal_84_){
_start:
{
uint8_t v_t_boxed_85_; lean_object* v_res_86_; 
v_t_boxed_85_ = lean_unbox(v_t_82_);
v_res_86_ = lp_lean_x2dftml_LeanFtml_CodemathClass_mathFatal_elim(v_motive_81_, v_t_boxed_85_, v_h_83_, v_mathFatal_84_);
lean_dec(v_mathFatal_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim___redArg(lean_object* v_mathTypeAbsent_87_){
_start:
{
lean_inc(v_mathTypeAbsent_87_);
return v_mathTypeAbsent_87_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim___redArg___boxed(lean_object* v_mathTypeAbsent_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim___redArg(v_mathTypeAbsent_88_);
lean_dec(v_mathTypeAbsent_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim(lean_object* v_motive_90_, uint8_t v_t_91_, lean_object* v_h_92_, lean_object* v_mathTypeAbsent_93_){
_start:
{
lean_inc(v_mathTypeAbsent_93_);
return v_mathTypeAbsent_93_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim___boxed(lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_mathTypeAbsent_97_){
_start:
{
uint8_t v_t_boxed_98_; lean_object* v_res_99_; 
v_t_boxed_98_ = lean_unbox(v_t_95_);
v_res_99_ = lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeAbsent_elim(v_motive_94_, v_t_boxed_98_, v_h_96_, v_mathTypeAbsent_97_);
lean_dec(v_mathTypeAbsent_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim___redArg(lean_object* v_mathTypeValid_100_){
_start:
{
lean_inc(v_mathTypeValid_100_);
return v_mathTypeValid_100_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim___redArg___boxed(lean_object* v_mathTypeValid_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim___redArg(v_mathTypeValid_101_);
lean_dec(v_mathTypeValid_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim(lean_object* v_motive_103_, uint8_t v_t_104_, lean_object* v_h_105_, lean_object* v_mathTypeValid_106_){
_start:
{
lean_inc(v_mathTypeValid_106_);
return v_mathTypeValid_106_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim___boxed(lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_mathTypeValid_110_){
_start:
{
uint8_t v_t_boxed_111_; lean_object* v_res_112_; 
v_t_boxed_111_ = lean_unbox(v_t_108_);
v_res_112_ = lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeValid_elim(v_motive_107_, v_t_boxed_111_, v_h_109_, v_mathTypeValid_110_);
lean_dec(v_mathTypeValid_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim___redArg(lean_object* v_mathTypeInvalid_113_){
_start:
{
lean_inc(v_mathTypeInvalid_113_);
return v_mathTypeInvalid_113_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim___redArg___boxed(lean_object* v_mathTypeInvalid_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim___redArg(v_mathTypeInvalid_114_);
lean_dec(v_mathTypeInvalid_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim(lean_object* v_motive_116_, uint8_t v_t_117_, lean_object* v_h_118_, lean_object* v_mathTypeInvalid_119_){
_start:
{
lean_inc(v_mathTypeInvalid_119_);
return v_mathTypeInvalid_119_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim___boxed(lean_object* v_motive_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_mathTypeInvalid_123_){
_start:
{
uint8_t v_t_boxed_124_; lean_object* v_res_125_; 
v_t_boxed_124_ = lean_unbox(v_t_121_);
v_res_125_ = lp_lean_x2dftml_LeanFtml_CodemathClass_mathTypeInvalid_elim(v_motive_120_, v_t_boxed_124_, v_h_122_, v_mathTypeInvalid_123_);
lean_dec(v_mathTypeInvalid_123_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim___redArg(lean_object* v_miPlain_126_){
_start:
{
lean_inc(v_miPlain_126_);
return v_miPlain_126_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim___redArg___boxed(lean_object* v_miPlain_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim___redArg(v_miPlain_127_);
lean_dec(v_miPlain_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim(lean_object* v_motive_129_, uint8_t v_t_130_, lean_object* v_h_131_, lean_object* v_miPlain_132_){
_start:
{
lean_inc(v_miPlain_132_);
return v_miPlain_132_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim___boxed(lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_miPlain_136_){
_start:
{
uint8_t v_t_boxed_137_; lean_object* v_res_138_; 
v_t_boxed_137_ = lean_unbox(v_t_134_);
v_res_138_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miPlain_elim(v_motive_133_, v_t_boxed_137_, v_h_135_, v_miPlain_136_);
lean_dec(v_miPlain_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim___redArg(lean_object* v_miDepth_139_){
_start:
{
lean_inc(v_miDepth_139_);
return v_miDepth_139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim___redArg___boxed(lean_object* v_miDepth_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim___redArg(v_miDepth_140_);
lean_dec(v_miDepth_140_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim(lean_object* v_motive_142_, uint8_t v_t_143_, lean_object* v_h_144_, lean_object* v_miDepth_145_){
_start:
{
lean_inc(v_miDepth_145_);
return v_miDepth_145_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim___boxed(lean_object* v_motive_146_, lean_object* v_t_147_, lean_object* v_h_148_, lean_object* v_miDepth_149_){
_start:
{
uint8_t v_t_boxed_150_; lean_object* v_res_151_; 
v_t_boxed_150_ = lean_unbox(v_t_147_);
v_res_151_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miDepth_elim(v_motive_146_, v_t_boxed_150_, v_h_148_, v_miDepth_149_);
lean_dec(v_miDepth_149_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim___redArg(lean_object* v_miUnknown_152_){
_start:
{
lean_inc(v_miUnknown_152_);
return v_miUnknown_152_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim___redArg___boxed(lean_object* v_miUnknown_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim___redArg(v_miUnknown_153_);
lean_dec(v_miUnknown_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim(lean_object* v_motive_155_, uint8_t v_t_156_, lean_object* v_h_157_, lean_object* v_miUnknown_158_){
_start:
{
lean_inc(v_miUnknown_158_);
return v_miUnknown_158_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim___boxed(lean_object* v_motive_159_, lean_object* v_t_160_, lean_object* v_h_161_, lean_object* v_miUnknown_162_){
_start:
{
uint8_t v_t_boxed_163_; lean_object* v_res_164_; 
v_t_boxed_163_ = lean_unbox(v_t_160_);
v_res_164_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miUnknown_elim(v_motive_159_, v_t_boxed_163_, v_h_161_, v_miUnknown_162_);
lean_dec(v_miUnknown_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim___redArg(lean_object* v_miCycle_165_){
_start:
{
lean_inc(v_miCycle_165_);
return v_miCycle_165_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim___redArg___boxed(lean_object* v_miCycle_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim___redArg(v_miCycle_166_);
lean_dec(v_miCycle_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim(lean_object* v_motive_168_, uint8_t v_t_169_, lean_object* v_h_170_, lean_object* v_miCycle_171_){
_start:
{
lean_inc(v_miCycle_171_);
return v_miCycle_171_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim___boxed(lean_object* v_motive_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_miCycle_175_){
_start:
{
uint8_t v_t_boxed_176_; lean_object* v_res_177_; 
v_t_boxed_176_ = lean_unbox(v_t_173_);
v_res_177_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miCycle_elim(v_motive_172_, v_t_boxed_176_, v_h_174_, v_miCycle_175_);
lean_dec(v_miCycle_175_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim___redArg(lean_object* v_miSource_178_){
_start:
{
lean_inc(v_miSource_178_);
return v_miSource_178_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim___redArg___boxed(lean_object* v_miSource_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim___redArg(v_miSource_179_);
lean_dec(v_miSource_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim(lean_object* v_motive_181_, uint8_t v_t_182_, lean_object* v_h_183_, lean_object* v_miSource_184_){
_start:
{
lean_inc(v_miSource_184_);
return v_miSource_184_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim___boxed(lean_object* v_motive_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_miSource_188_){
_start:
{
uint8_t v_t_boxed_189_; lean_object* v_res_190_; 
v_t_boxed_189_ = lean_unbox(v_t_186_);
v_res_190_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSource_elim(v_motive_185_, v_t_boxed_189_, v_h_187_, v_miSource_188_);
lean_dec(v_miSource_188_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim___redArg(lean_object* v_miFallback_191_){
_start:
{
lean_inc(v_miFallback_191_);
return v_miFallback_191_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim___redArg___boxed(lean_object* v_miFallback_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim___redArg(v_miFallback_192_);
lean_dec(v_miFallback_192_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim(lean_object* v_motive_194_, uint8_t v_t_195_, lean_object* v_h_196_, lean_object* v_miFallback_197_){
_start:
{
lean_inc(v_miFallback_197_);
return v_miFallback_197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim___boxed(lean_object* v_motive_198_, lean_object* v_t_199_, lean_object* v_h_200_, lean_object* v_miFallback_201_){
_start:
{
uint8_t v_t_boxed_202_; lean_object* v_res_203_; 
v_t_boxed_202_ = lean_unbox(v_t_199_);
v_res_203_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miFallback_elim(v_motive_198_, v_t_boxed_202_, v_h_200_, v_miFallback_201_);
lean_dec(v_miFallback_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim___redArg(lean_object* v_miSuppressFreelink_204_){
_start:
{
lean_inc(v_miSuppressFreelink_204_);
return v_miSuppressFreelink_204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim___redArg___boxed(lean_object* v_miSuppressFreelink_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim___redArg(v_miSuppressFreelink_205_);
lean_dec(v_miSuppressFreelink_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim(lean_object* v_motive_207_, uint8_t v_t_208_, lean_object* v_h_209_, lean_object* v_miSuppressFreelink_210_){
_start:
{
lean_inc(v_miSuppressFreelink_210_);
return v_miSuppressFreelink_210_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim___boxed(lean_object* v_motive_211_, lean_object* v_t_212_, lean_object* v_h_213_, lean_object* v_miSuppressFreelink_214_){
_start:
{
uint8_t v_t_boxed_215_; lean_object* v_res_216_; 
v_t_boxed_215_ = lean_unbox(v_t_212_);
v_res_216_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressFreelink_elim(v_motive_211_, v_t_boxed_215_, v_h_213_, v_miSuppressFreelink_214_);
lean_dec(v_miSuppressFreelink_214_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim___redArg(lean_object* v_miSuppressRaw_217_){
_start:
{
lean_inc(v_miSuppressRaw_217_);
return v_miSuppressRaw_217_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim___redArg___boxed(lean_object* v_miSuppressRaw_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim___redArg(v_miSuppressRaw_218_);
lean_dec(v_miSuppressRaw_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim(lean_object* v_motive_220_, uint8_t v_t_221_, lean_object* v_h_222_, lean_object* v_miSuppressRaw_223_){
_start:
{
lean_inc(v_miSuppressRaw_223_);
return v_miSuppressRaw_223_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim___boxed(lean_object* v_motive_224_, lean_object* v_t_225_, lean_object* v_h_226_, lean_object* v_miSuppressRaw_227_){
_start:
{
uint8_t v_t_boxed_228_; lean_object* v_res_229_; 
v_t_boxed_228_ = lean_unbox(v_t_225_);
v_res_229_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressRaw_elim(v_motive_224_, v_t_boxed_228_, v_h_226_, v_miSuppressRaw_227_);
lean_dec(v_miSuppressRaw_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim___redArg(lean_object* v_miSuppressNewline_230_){
_start:
{
lean_inc(v_miSuppressNewline_230_);
return v_miSuppressNewline_230_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim___redArg___boxed(lean_object* v_miSuppressNewline_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim___redArg(v_miSuppressNewline_231_);
lean_dec(v_miSuppressNewline_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim(lean_object* v_motive_233_, uint8_t v_t_234_, lean_object* v_h_235_, lean_object* v_miSuppressNewline_236_){
_start:
{
lean_inc(v_miSuppressNewline_236_);
return v_miSuppressNewline_236_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim___boxed(lean_object* v_motive_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_miSuppressNewline_240_){
_start:
{
uint8_t v_t_boxed_241_; lean_object* v_res_242_; 
v_t_boxed_241_ = lean_unbox(v_t_238_);
v_res_242_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressNewline_elim(v_motive_237_, v_t_boxed_241_, v_h_239_, v_miSuppressNewline_240_);
lean_dec(v_miSuppressNewline_240_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim___redArg(lean_object* v_miSuppressImage_243_){
_start:
{
lean_inc(v_miSuppressImage_243_);
return v_miSuppressImage_243_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim___redArg___boxed(lean_object* v_miSuppressImage_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim___redArg(v_miSuppressImage_244_);
lean_dec(v_miSuppressImage_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim(lean_object* v_motive_246_, uint8_t v_t_247_, lean_object* v_h_248_, lean_object* v_miSuppressImage_249_){
_start:
{
lean_inc(v_miSuppressImage_249_);
return v_miSuppressImage_249_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim___boxed(lean_object* v_motive_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_miSuppressImage_253_){
_start:
{
uint8_t v_t_boxed_254_; lean_object* v_res_255_; 
v_t_boxed_254_ = lean_unbox(v_t_251_);
v_res_255_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressImage_elim(v_motive_250_, v_t_boxed_254_, v_h_252_, v_miSuppressImage_253_);
lean_dec(v_miSuppressImage_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim___redArg(lean_object* v_miSuppressDate_256_){
_start:
{
lean_inc(v_miSuppressDate_256_);
return v_miSuppressDate_256_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim___redArg___boxed(lean_object* v_miSuppressDate_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim___redArg(v_miSuppressDate_257_);
lean_dec(v_miSuppressDate_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim(lean_object* v_motive_259_, uint8_t v_t_260_, lean_object* v_h_261_, lean_object* v_miSuppressDate_262_){
_start:
{
lean_inc(v_miSuppressDate_262_);
return v_miSuppressDate_262_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim___boxed(lean_object* v_motive_263_, lean_object* v_t_264_, lean_object* v_h_265_, lean_object* v_miSuppressDate_266_){
_start:
{
uint8_t v_t_boxed_267_; lean_object* v_res_268_; 
v_t_boxed_267_ = lean_unbox(v_t_264_);
v_res_268_ = lp_lean_x2dftml_LeanFtml_CodemathClass_miSuppressDate_elim(v_motive_263_, v_t_boxed_267_, v_h_265_, v_miSuppressDate_266_);
lean_dec(v_miSuppressDate_266_);
return v_res_268_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CodemathClass_ofNat(lean_object* v_n_269_){
_start:
{
lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = lean_unsigned_to_nat(8u);
v___x_271_ = lean_nat_dec_le(v_n_269_, v___x_270_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_272_ = lean_unsigned_to_nat(13u);
v___x_273_ = lean_nat_dec_le(v_n_269_, v___x_272_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = lean_unsigned_to_nat(15u);
v___x_275_ = lean_nat_dec_le(v_n_269_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = lean_unsigned_to_nat(16u);
v___x_277_ = lean_nat_dec_le(v_n_269_, v___x_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_278_ = lean_unsigned_to_nat(17u);
v___x_279_ = lean_nat_dec_le(v_n_269_, v___x_278_);
if (v___x_279_ == 0)
{
uint8_t v___x_280_; 
v___x_280_ = 18;
return v___x_280_;
}
else
{
uint8_t v___x_281_; 
v___x_281_ = 17;
return v___x_281_;
}
}
else
{
uint8_t v___x_282_; 
v___x_282_ = 16;
return v___x_282_;
}
}
else
{
lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_283_ = lean_unsigned_to_nat(14u);
v___x_284_ = lean_nat_dec_le(v_n_269_, v___x_283_);
if (v___x_284_ == 0)
{
uint8_t v___x_285_; 
v___x_285_ = 15;
return v___x_285_;
}
else
{
uint8_t v___x_286_; 
v___x_286_ = 14;
return v___x_286_;
}
}
}
else
{
lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(10u);
v___x_288_ = lean_nat_dec_le(v_n_269_, v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(11u);
v___x_290_ = lean_nat_dec_le(v_n_269_, v___x_289_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = lean_unsigned_to_nat(12u);
v___x_292_ = lean_nat_dec_le(v_n_269_, v___x_291_);
if (v___x_292_ == 0)
{
uint8_t v___x_293_; 
v___x_293_ = 13;
return v___x_293_;
}
else
{
uint8_t v___x_294_; 
v___x_294_ = 12;
return v___x_294_;
}
}
else
{
uint8_t v___x_295_; 
v___x_295_ = 11;
return v___x_295_;
}
}
else
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = lean_unsigned_to_nat(9u);
v___x_297_ = lean_nat_dec_le(v_n_269_, v___x_296_);
if (v___x_297_ == 0)
{
uint8_t v___x_298_; 
v___x_298_ = 10;
return v___x_298_;
}
else
{
uint8_t v___x_299_; 
v___x_299_ = 9;
return v___x_299_;
}
}
}
}
else
{
lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(3u);
v___x_301_ = lean_nat_dec_le(v_n_269_, v___x_300_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_unsigned_to_nat(5u);
v___x_303_ = lean_nat_dec_le(v_n_269_, v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_304_ = lean_unsigned_to_nat(6u);
v___x_305_ = lean_nat_dec_le(v_n_269_, v___x_304_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_306_ = lean_unsigned_to_nat(7u);
v___x_307_ = lean_nat_dec_le(v_n_269_, v___x_306_);
if (v___x_307_ == 0)
{
uint8_t v___x_308_; 
v___x_308_ = 8;
return v___x_308_;
}
else
{
uint8_t v___x_309_; 
v___x_309_ = 7;
return v___x_309_;
}
}
else
{
uint8_t v___x_310_; 
v___x_310_ = 6;
return v___x_310_;
}
}
else
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(4u);
v___x_312_ = lean_nat_dec_le(v_n_269_, v___x_311_);
if (v___x_312_ == 0)
{
uint8_t v___x_313_; 
v___x_313_ = 5;
return v___x_313_;
}
else
{
uint8_t v___x_314_; 
v___x_314_ = 4;
return v___x_314_;
}
}
}
else
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = lean_unsigned_to_nat(1u);
v___x_316_ = lean_nat_dec_le(v_n_269_, v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_unsigned_to_nat(2u);
v___x_318_ = lean_nat_dec_le(v_n_269_, v___x_317_);
if (v___x_318_ == 0)
{
uint8_t v___x_319_; 
v___x_319_ = 3;
return v___x_319_;
}
else
{
uint8_t v___x_320_; 
v___x_320_ = 2;
return v___x_320_;
}
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(0u);
v___x_322_ = lean_nat_dec_le(v_n_269_, v___x_321_);
if (v___x_322_ == 0)
{
uint8_t v___x_323_; 
v___x_323_ = 1;
return v___x_323_;
}
else
{
uint8_t v___x_324_; 
v___x_324_ = 0;
return v___x_324_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathClass_ofNat___boxed(lean_object* v_n_325_){
_start:
{
uint8_t v_res_326_; lean_object* v_r_327_; 
v_res_326_ = lp_lean_x2dftml_LeanFtml_CodemathClass_ofNat(v_n_325_);
lean_dec(v_n_325_);
v_r_327_ = lean_box(v_res_326_);
return v_r_327_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathClass(uint8_t v_x_328_, uint8_t v_y_329_){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_330_ = lean_box(v_x_328_);
v___x_331_ = lean_obj_tag_nat(v___x_330_);
lean_dec(v___x_330_);
v___x_332_ = lean_box(v_y_329_);
v___x_333_ = lean_obj_tag_nat(v___x_332_);
lean_dec(v___x_332_);
v___x_334_ = lean_nat_dec_eq(v___x_331_, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathClass___boxed(lean_object* v_x_335_, lean_object* v_y_336_){
_start:
{
uint8_t v_x_23__boxed_337_; uint8_t v_y_24__boxed_338_; uint8_t v_res_339_; lean_object* v_r_340_; 
v_x_23__boxed_337_ = lean_unbox(v_x_335_);
v_y_24__boxed_338_ = lean_unbox(v_y_336_);
v_res_339_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathClass(v_x_23__boxed_337_, v_y_24__boxed_338_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_unsigned_to_nat(2u);
v___x_399_ = lean_nat_to_int(v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = lean_nat_to_int(v___x_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr(uint8_t v_x_402_, lean_object* v_prec_403_){
_start:
{
lean_object* v___y_405_; lean_object* v___y_412_; lean_object* v___y_419_; lean_object* v___y_426_; lean_object* v___y_433_; lean_object* v___y_440_; lean_object* v___y_447_; lean_object* v___y_454_; lean_object* v___y_461_; lean_object* v___y_468_; lean_object* v___y_475_; lean_object* v___y_482_; lean_object* v___y_489_; lean_object* v___y_496_; lean_object* v___y_503_; lean_object* v___y_510_; lean_object* v___y_517_; lean_object* v___y_524_; lean_object* v___y_531_; 
switch(v_x_402_)
{
case 0:
{
lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(1024u);
v___x_538_ = lean_nat_dec_le(v___x_537_, v_prec_403_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
v___x_539_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_405_ = v___x_539_;
goto v___jp_404_;
}
else
{
lean_object* v___x_540_; 
v___x_540_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_405_ = v___x_540_;
goto v___jp_404_;
}
}
case 1:
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = lean_unsigned_to_nat(1024u);
v___x_542_ = lean_nat_dec_le(v___x_541_, v_prec_403_);
if (v___x_542_ == 0)
{
lean_object* v___x_543_; 
v___x_543_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_412_ = v___x_543_;
goto v___jp_411_;
}
else
{
lean_object* v___x_544_; 
v___x_544_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_412_ = v___x_544_;
goto v___jp_411_;
}
}
case 2:
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = lean_unsigned_to_nat(1024u);
v___x_546_ = lean_nat_dec_le(v___x_545_, v_prec_403_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_419_ = v___x_547_;
goto v___jp_418_;
}
else
{
lean_object* v___x_548_; 
v___x_548_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_419_ = v___x_548_;
goto v___jp_418_;
}
}
case 3:
{
lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_549_ = lean_unsigned_to_nat(1024u);
v___x_550_ = lean_nat_dec_le(v___x_549_, v_prec_403_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_426_ = v___x_551_;
goto v___jp_425_;
}
else
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_426_ = v___x_552_;
goto v___jp_425_;
}
}
case 4:
{
lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_553_ = lean_unsigned_to_nat(1024u);
v___x_554_ = lean_nat_dec_le(v___x_553_, v_prec_403_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_433_ = v___x_555_;
goto v___jp_432_;
}
else
{
lean_object* v___x_556_; 
v___x_556_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_433_ = v___x_556_;
goto v___jp_432_;
}
}
case 5:
{
lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_557_ = lean_unsigned_to_nat(1024u);
v___x_558_ = lean_nat_dec_le(v___x_557_, v_prec_403_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_440_ = v___x_559_;
goto v___jp_439_;
}
else
{
lean_object* v___x_560_; 
v___x_560_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_440_ = v___x_560_;
goto v___jp_439_;
}
}
case 6:
{
lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_561_ = lean_unsigned_to_nat(1024u);
v___x_562_ = lean_nat_dec_le(v___x_561_, v_prec_403_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; 
v___x_563_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_447_ = v___x_563_;
goto v___jp_446_;
}
else
{
lean_object* v___x_564_; 
v___x_564_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_447_ = v___x_564_;
goto v___jp_446_;
}
}
case 7:
{
lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_565_ = lean_unsigned_to_nat(1024u);
v___x_566_ = lean_nat_dec_le(v___x_565_, v_prec_403_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; 
v___x_567_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_454_ = v___x_567_;
goto v___jp_453_;
}
else
{
lean_object* v___x_568_; 
v___x_568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_454_ = v___x_568_;
goto v___jp_453_;
}
}
case 8:
{
lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_569_ = lean_unsigned_to_nat(1024u);
v___x_570_ = lean_nat_dec_le(v___x_569_, v_prec_403_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_461_ = v___x_571_;
goto v___jp_460_;
}
else
{
lean_object* v___x_572_; 
v___x_572_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_461_ = v___x_572_;
goto v___jp_460_;
}
}
case 9:
{
lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_573_ = lean_unsigned_to_nat(1024u);
v___x_574_ = lean_nat_dec_le(v___x_573_, v_prec_403_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; 
v___x_575_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_468_ = v___x_575_;
goto v___jp_467_;
}
else
{
lean_object* v___x_576_; 
v___x_576_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_468_ = v___x_576_;
goto v___jp_467_;
}
}
case 10:
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_unsigned_to_nat(1024u);
v___x_578_ = lean_nat_dec_le(v___x_577_, v_prec_403_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_475_ = v___x_579_;
goto v___jp_474_;
}
else
{
lean_object* v___x_580_; 
v___x_580_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_475_ = v___x_580_;
goto v___jp_474_;
}
}
case 11:
{
lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_581_ = lean_unsigned_to_nat(1024u);
v___x_582_ = lean_nat_dec_le(v___x_581_, v_prec_403_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; 
v___x_583_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_482_ = v___x_583_;
goto v___jp_481_;
}
else
{
lean_object* v___x_584_; 
v___x_584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_482_ = v___x_584_;
goto v___jp_481_;
}
}
case 12:
{
lean_object* v___x_585_; uint8_t v___x_586_; 
v___x_585_ = lean_unsigned_to_nat(1024u);
v___x_586_ = lean_nat_dec_le(v___x_585_, v_prec_403_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; 
v___x_587_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_489_ = v___x_587_;
goto v___jp_488_;
}
else
{
lean_object* v___x_588_; 
v___x_588_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_489_ = v___x_588_;
goto v___jp_488_;
}
}
case 13:
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_unsigned_to_nat(1024u);
v___x_590_ = lean_nat_dec_le(v___x_589_, v_prec_403_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; 
v___x_591_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_496_ = v___x_591_;
goto v___jp_495_;
}
else
{
lean_object* v___x_592_; 
v___x_592_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_496_ = v___x_592_;
goto v___jp_495_;
}
}
case 14:
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = lean_unsigned_to_nat(1024u);
v___x_594_ = lean_nat_dec_le(v___x_593_, v_prec_403_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; 
v___x_595_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_503_ = v___x_595_;
goto v___jp_502_;
}
else
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_503_ = v___x_596_;
goto v___jp_502_;
}
}
case 15:
{
lean_object* v___x_597_; uint8_t v___x_598_; 
v___x_597_ = lean_unsigned_to_nat(1024u);
v___x_598_ = lean_nat_dec_le(v___x_597_, v_prec_403_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; 
v___x_599_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_510_ = v___x_599_;
goto v___jp_509_;
}
else
{
lean_object* v___x_600_; 
v___x_600_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_510_ = v___x_600_;
goto v___jp_509_;
}
}
case 16:
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = lean_unsigned_to_nat(1024u);
v___x_602_ = lean_nat_dec_le(v___x_601_, v_prec_403_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
v___x_603_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_517_ = v___x_603_;
goto v___jp_516_;
}
else
{
lean_object* v___x_604_; 
v___x_604_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_517_ = v___x_604_;
goto v___jp_516_;
}
}
case 17:
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = lean_unsigned_to_nat(1024u);
v___x_606_ = lean_nat_dec_le(v___x_605_, v_prec_403_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
v___x_607_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_524_ = v___x_607_;
goto v___jp_523_;
}
else
{
lean_object* v___x_608_; 
v___x_608_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_524_ = v___x_608_;
goto v___jp_523_;
}
}
default: 
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = lean_unsigned_to_nat(1024u);
v___x_610_ = lean_nat_dec_le(v___x_609_, v_prec_403_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
v___x_611_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_531_ = v___x_611_;
goto v___jp_530_;
}
else
{
lean_object* v___x_612_; 
v___x_612_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_531_ = v___x_612_;
goto v___jp_530_;
}
}
}
v___jp_404_:
{
lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_406_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__1));
lean_inc(v___y_405_);
v___x_407_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_407_, 0, v___y_405_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v___x_408_ = 0;
v___x_409_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*1, v___x_408_);
v___x_410_ = l_Repr_addAppParen(v___x_409_, v_prec_403_);
return v___x_410_;
}
v___jp_411_:
{
lean_object* v___x_413_; lean_object* v___x_414_; uint8_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_413_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__3));
lean_inc(v___y_412_);
v___x_414_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_414_, 0, v___y_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = 0;
v___x_416_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_416_, 0, v___x_414_);
lean_ctor_set_uint8(v___x_416_, sizeof(void*)*1, v___x_415_);
v___x_417_ = l_Repr_addAppParen(v___x_416_, v_prec_403_);
return v___x_417_;
}
v___jp_418_:
{
lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_420_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__5));
lean_inc(v___y_419_);
v___x_421_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_421_, 0, v___y_419_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = 0;
v___x_423_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_423_, 0, v___x_421_);
lean_ctor_set_uint8(v___x_423_, sizeof(void*)*1, v___x_422_);
v___x_424_ = l_Repr_addAppParen(v___x_423_, v_prec_403_);
return v___x_424_;
}
v___jp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_427_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__7));
lean_inc(v___y_426_);
v___x_428_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_428_, 0, v___y_426_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
v___x_429_ = 0;
v___x_430_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_430_, 0, v___x_428_);
lean_ctor_set_uint8(v___x_430_, sizeof(void*)*1, v___x_429_);
v___x_431_ = l_Repr_addAppParen(v___x_430_, v_prec_403_);
return v___x_431_;
}
v___jp_432_:
{
lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_434_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__9));
lean_inc(v___y_433_);
v___x_435_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_435_, 0, v___y_433_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
v___x_436_ = 0;
v___x_437_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set_uint8(v___x_437_, sizeof(void*)*1, v___x_436_);
v___x_438_ = l_Repr_addAppParen(v___x_437_, v_prec_403_);
return v___x_438_;
}
v___jp_439_:
{
lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_441_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__11));
lean_inc(v___y_440_);
v___x_442_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_442_, 0, v___y_440_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
v___x_443_ = 0;
v___x_444_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set_uint8(v___x_444_, sizeof(void*)*1, v___x_443_);
v___x_445_ = l_Repr_addAppParen(v___x_444_, v_prec_403_);
return v___x_445_;
}
v___jp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_448_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__13));
lean_inc(v___y_447_);
v___x_449_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_449_, 0, v___y_447_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
v___x_450_ = 0;
v___x_451_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_451_, 0, v___x_449_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*1, v___x_450_);
v___x_452_ = l_Repr_addAppParen(v___x_451_, v_prec_403_);
return v___x_452_;
}
v___jp_453_:
{
lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_455_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__15));
lean_inc(v___y_454_);
v___x_456_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_456_, 0, v___y_454_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
v___x_457_ = 0;
v___x_458_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set_uint8(v___x_458_, sizeof(void*)*1, v___x_457_);
v___x_459_ = l_Repr_addAppParen(v___x_458_, v_prec_403_);
return v___x_459_;
}
v___jp_460_:
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_462_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__17));
lean_inc(v___y_461_);
v___x_463_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_463_, 0, v___y_461_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = 0;
v___x_465_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set_uint8(v___x_465_, sizeof(void*)*1, v___x_464_);
v___x_466_ = l_Repr_addAppParen(v___x_465_, v_prec_403_);
return v___x_466_;
}
v___jp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_469_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__19));
lean_inc(v___y_468_);
v___x_470_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_470_, 0, v___y_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = 0;
v___x_472_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set_uint8(v___x_472_, sizeof(void*)*1, v___x_471_);
v___x_473_ = l_Repr_addAppParen(v___x_472_, v_prec_403_);
return v___x_473_;
}
v___jp_474_:
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_476_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__21));
lean_inc(v___y_475_);
v___x_477_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_477_, 0, v___y_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = 0;
v___x_479_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set_uint8(v___x_479_, sizeof(void*)*1, v___x_478_);
v___x_480_ = l_Repr_addAppParen(v___x_479_, v_prec_403_);
return v___x_480_;
}
v___jp_481_:
{
lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_483_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__23));
lean_inc(v___y_482_);
v___x_484_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_484_, 0, v___y_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = 0;
v___x_486_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_486_, 0, v___x_484_);
lean_ctor_set_uint8(v___x_486_, sizeof(void*)*1, v___x_485_);
v___x_487_ = l_Repr_addAppParen(v___x_486_, v_prec_403_);
return v___x_487_;
}
v___jp_488_:
{
lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_490_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__25));
lean_inc(v___y_489_);
v___x_491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_491_, 0, v___y_489_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = 0;
v___x_493_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set_uint8(v___x_493_, sizeof(void*)*1, v___x_492_);
v___x_494_ = l_Repr_addAppParen(v___x_493_, v_prec_403_);
return v___x_494_;
}
v___jp_495_:
{
lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_497_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__27));
lean_inc(v___y_496_);
v___x_498_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_498_, 0, v___y_496_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = 0;
v___x_500_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
v___x_501_ = l_Repr_addAppParen(v___x_500_, v_prec_403_);
return v___x_501_;
}
v___jp_502_:
{
lean_object* v___x_504_; lean_object* v___x_505_; uint8_t v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_504_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__29));
lean_inc(v___y_503_);
v___x_505_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_505_, 0, v___y_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = 0;
v___x_507_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_507_, 0, v___x_505_);
lean_ctor_set_uint8(v___x_507_, sizeof(void*)*1, v___x_506_);
v___x_508_ = l_Repr_addAppParen(v___x_507_, v_prec_403_);
return v___x_508_;
}
v___jp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_511_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__31));
lean_inc(v___y_510_);
v___x_512_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_512_, 0, v___y_510_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = 0;
v___x_514_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1, v___x_513_);
v___x_515_ = l_Repr_addAppParen(v___x_514_, v_prec_403_);
return v___x_515_;
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_518_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__33));
lean_inc(v___y_517_);
v___x_519_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_519_, 0, v___y_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = 0;
v___x_521_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set_uint8(v___x_521_, sizeof(void*)*1, v___x_520_);
v___x_522_ = l_Repr_addAppParen(v___x_521_, v_prec_403_);
return v___x_522_;
}
v___jp_523_:
{
lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_525_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__35));
lean_inc(v___y_524_);
v___x_526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_526_, 0, v___y_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = 0;
v___x_528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*1, v___x_527_);
v___x_529_ = l_Repr_addAppParen(v___x_528_, v_prec_403_);
return v___x_529_;
}
v___jp_530_:
{
lean_object* v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_532_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__37));
lean_inc(v___y_531_);
v___x_533_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_533_, 0, v___y_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = 0;
v___x_535_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_535_, 0, v___x_533_);
lean_ctor_set_uint8(v___x_535_, sizeof(void*)*1, v___x_534_);
v___x_536_ = l_Repr_addAppParen(v___x_535_, v_prec_403_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___boxed(lean_object* v_x_613_, lean_object* v_prec_614_){
_start:
{
uint8_t v_x_1035__boxed_615_; lean_object* v_res_616_; 
v_x_1035__boxed_615_ = lean_unbox(v_x_613_);
v_res_616_ = lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr(v_x_1035__boxed_615_, v_prec_614_);
lean_dec(v_prec_614_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorIdx___impl(uint8_t v_x_696_){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = lean_box(v_x_696_);
v___x_698_ = lean_obj_tag_nat(v___x_697_);
lean_dec(v___x_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorIdx___impl___boxed(lean_object* v_x_699_){
_start:
{
uint8_t v_x_4__boxed_700_; lean_object* v_res_701_; 
v_x_4__boxed_700_ = lean_unbox(v_x_699_);
v_res_701_ = lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorIdx___impl(v_x_4__boxed_700_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim___redArg(lean_object* v_k_702_){
_start:
{
lean_inc(v_k_702_);
return v_k_702_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim___redArg___boxed(lean_object* v_k_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim___redArg(v_k_703_);
lean_dec(v_k_703_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim(lean_object* v_motive_705_, lean_object* v_ctorIdx_706_, uint8_t v_t_707_, lean_object* v_h_708_, lean_object* v_k_709_){
_start:
{
lean_inc(v_k_709_);
return v_k_709_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim___boxed(lean_object* v_motive_710_, lean_object* v_ctorIdx_711_, lean_object* v_t_712_, lean_object* v_h_713_, lean_object* v_k_714_){
_start:
{
uint8_t v_t_boxed_715_; lean_object* v_res_716_; 
v_t_boxed_715_ = lean_unbox(v_t_712_);
v_res_716_ = lp_lean_x2dftml_LeanFtml_CodeBodyKind_ctorElim(v_motive_710_, v_ctorIdx_711_, v_t_boxed_715_, v_h_713_, v_k_714_);
lean_dec(v_k_714_);
lean_dec(v_ctorIdx_711_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim___redArg(lean_object* v_plain_717_){
_start:
{
lean_inc(v_plain_717_);
return v_plain_717_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim___redArg___boxed(lean_object* v_plain_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim___redArg(v_plain_718_);
lean_dec(v_plain_718_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim(lean_object* v_motive_720_, uint8_t v_t_721_, lean_object* v_h_722_, lean_object* v_plain_723_){
_start:
{
lean_inc(v_plain_723_);
return v_plain_723_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim___boxed(lean_object* v_motive_724_, lean_object* v_t_725_, lean_object* v_h_726_, lean_object* v_plain_727_){
_start:
{
uint8_t v_t_boxed_728_; lean_object* v_res_729_; 
v_t_boxed_728_ = lean_unbox(v_t_725_);
v_res_729_ = lp_lean_x2dftml_LeanFtml_CodeBodyKind_plain_elim(v_motive_724_, v_t_boxed_728_, v_h_726_, v_plain_727_);
lean_dec(v_plain_727_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim___redArg(lean_object* v_empty_730_){
_start:
{
lean_inc(v_empty_730_);
return v_empty_730_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim___redArg___boxed(lean_object* v_empty_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim___redArg(v_empty_731_);
lean_dec(v_empty_731_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim(lean_object* v_motive_733_, uint8_t v_t_734_, lean_object* v_h_735_, lean_object* v_empty_736_){
_start:
{
lean_inc(v_empty_736_);
return v_empty_736_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim___boxed(lean_object* v_motive_737_, lean_object* v_t_738_, lean_object* v_h_739_, lean_object* v_empty_740_){
_start:
{
uint8_t v_t_boxed_741_; lean_object* v_res_742_; 
v_t_boxed_741_ = lean_unbox(v_t_738_);
v_res_742_ = lp_lean_x2dftml_LeanFtml_CodeBodyKind_empty_elim(v_motive_737_, v_t_boxed_741_, v_h_739_, v_empty_740_);
lean_dec(v_empty_740_);
return v_res_742_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CodeBodyKind_ofNat(lean_object* v_n_743_){
_start:
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = lean_unsigned_to_nat(0u);
v___x_745_ = lean_nat_dec_le(v_n_743_, v___x_744_);
if (v___x_745_ == 0)
{
uint8_t v___x_746_; 
v___x_746_ = 1;
return v___x_746_;
}
else
{
uint8_t v___x_747_; 
v___x_747_ = 0;
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeBodyKind_ofNat___boxed(lean_object* v_n_748_){
_start:
{
uint8_t v_res_749_; lean_object* v_r_750_; 
v_res_749_ = lp_lean_x2dftml_LeanFtml_CodeBodyKind_ofNat(v_n_748_);
lean_dec(v_n_748_);
v_r_750_ = lean_box(v_res_749_);
return v_r_750_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodeBodyKind(uint8_t v_x_751_, uint8_t v_y_752_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_753_ = lean_box(v_x_751_);
v___x_754_ = lean_obj_tag_nat(v___x_753_);
lean_dec(v___x_753_);
v___x_755_ = lean_box(v_y_752_);
v___x_756_ = lean_obj_tag_nat(v___x_755_);
lean_dec(v___x_755_);
v___x_757_ = lean_nat_dec_eq(v___x_754_, v___x_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodeBodyKind___boxed(lean_object* v_x_758_, lean_object* v_y_759_){
_start:
{
uint8_t v_x_23__boxed_760_; uint8_t v_y_24__boxed_761_; uint8_t v_res_762_; lean_object* v_r_763_; 
v_x_23__boxed_760_ = lean_unbox(v_x_758_);
v_y_24__boxed_761_ = lean_unbox(v_y_759_);
v_res_762_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodeBodyKind(v_x_23__boxed_760_, v_y_24__boxed_761_);
v_r_763_ = lean_box(v_res_762_);
return v_r_763_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr(uint8_t v_x_770_, lean_object* v_prec_771_){
_start:
{
lean_object* v___y_773_; lean_object* v___y_780_; 
if (v_x_770_ == 0)
{
lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_786_ = lean_unsigned_to_nat(1024u);
v___x_787_ = lean_nat_dec_le(v___x_786_, v_prec_771_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; 
v___x_788_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_773_ = v___x_788_;
goto v___jp_772_;
}
else
{
lean_object* v___x_789_; 
v___x_789_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_773_ = v___x_789_;
goto v___jp_772_;
}
}
else
{
lean_object* v___x_790_; uint8_t v___x_791_; 
v___x_790_ = lean_unsigned_to_nat(1024u);
v___x_791_ = lean_nat_dec_le(v___x_790_, v_prec_771_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; 
v___x_792_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_780_ = v___x_792_;
goto v___jp_779_;
}
else
{
lean_object* v___x_793_; 
v___x_793_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_780_ = v___x_793_;
goto v___jp_779_;
}
}
v___jp_772_:
{
lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_774_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__1));
lean_inc(v___y_773_);
v___x_775_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_775_, 0, v___y_773_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = 0;
v___x_777_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_777_, 0, v___x_775_);
lean_ctor_set_uint8(v___x_777_, sizeof(void*)*1, v___x_776_);
v___x_778_ = l_Repr_addAppParen(v___x_777_, v_prec_771_);
return v___x_778_;
}
v___jp_779_:
{
lean_object* v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_781_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___closed__3));
lean_inc(v___y_780_);
v___x_782_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_782_, 0, v___y_780_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
v___x_783_ = 0;
v___x_784_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_784_, 0, v___x_782_);
lean_ctor_set_uint8(v___x_784_, sizeof(void*)*1, v___x_783_);
v___x_785_ = l_Repr_addAppParen(v___x_784_, v_prec_771_);
return v___x_785_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr___boxed(lean_object* v_x_794_, lean_object* v_prec_795_){
_start:
{
uint8_t v_x_113__boxed_796_; lean_object* v_res_797_; 
v_x_113__boxed_796_ = lean_unbox(v_x_794_);
v_res_797_ = lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr(v_x_113__boxed_796_, v_prec_795_);
lean_dec(v_prec_795_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorIdx___impl(uint8_t v_x_800_){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_box(v_x_800_);
v___x_802_ = lean_obj_tag_nat(v___x_801_);
lean_dec(v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorIdx___impl___boxed(lean_object* v_x_803_){
_start:
{
uint8_t v_x_4__boxed_804_; lean_object* v_res_805_; 
v_x_4__boxed_804_ = lean_unbox(v_x_803_);
v_res_805_ = lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorIdx___impl(v_x_4__boxed_804_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim___redArg(lean_object* v_k_806_){
_start:
{
lean_inc(v_k_806_);
return v_k_806_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim___redArg___boxed(lean_object* v_k_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim___redArg(v_k_807_);
lean_dec(v_k_807_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim(lean_object* v_motive_809_, lean_object* v_ctorIdx_810_, uint8_t v_t_811_, lean_object* v_h_812_, lean_object* v_k_813_){
_start:
{
lean_inc(v_k_813_);
return v_k_813_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim___boxed(lean_object* v_motive_814_, lean_object* v_ctorIdx_815_, lean_object* v_t_816_, lean_object* v_h_817_, lean_object* v_k_818_){
_start:
{
uint8_t v_t_boxed_819_; lean_object* v_res_820_; 
v_t_boxed_819_ = lean_unbox(v_t_816_);
v_res_820_ = lp_lean_x2dftml_LeanFtml_CodeTrailKind_ctorElim(v_motive_814_, v_ctorIdx_815_, v_t_boxed_819_, v_h_817_, v_k_818_);
lean_dec(v_k_818_);
lean_dec(v_ctorIdx_815_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim___redArg(lean_object* v_ws_821_){
_start:
{
lean_inc(v_ws_821_);
return v_ws_821_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim___redArg___boxed(lean_object* v_ws_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim___redArg(v_ws_822_);
lean_dec(v_ws_822_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim(lean_object* v_motive_824_, uint8_t v_t_825_, lean_object* v_h_826_, lean_object* v_ws_827_){
_start:
{
lean_inc(v_ws_827_);
return v_ws_827_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim___boxed(lean_object* v_motive_828_, lean_object* v_t_829_, lean_object* v_h_830_, lean_object* v_ws_831_){
_start:
{
uint8_t v_t_boxed_832_; lean_object* v_res_833_; 
v_t_boxed_832_ = lean_unbox(v_t_829_);
v_res_833_ = lp_lean_x2dftml_LeanFtml_CodeTrailKind_ws_elim(v_motive_828_, v_t_boxed_832_, v_h_830_, v_ws_831_);
lean_dec(v_ws_831_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim___redArg(lean_object* v_atEnd_834_){
_start:
{
lean_inc(v_atEnd_834_);
return v_atEnd_834_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim___redArg___boxed(lean_object* v_atEnd_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim___redArg(v_atEnd_835_);
lean_dec(v_atEnd_835_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim(lean_object* v_motive_837_, uint8_t v_t_838_, lean_object* v_h_839_, lean_object* v_atEnd_840_){
_start:
{
lean_inc(v_atEnd_840_);
return v_atEnd_840_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim___boxed(lean_object* v_motive_841_, lean_object* v_t_842_, lean_object* v_h_843_, lean_object* v_atEnd_844_){
_start:
{
uint8_t v_t_boxed_845_; lean_object* v_res_846_; 
v_t_boxed_845_ = lean_unbox(v_t_842_);
v_res_846_ = lp_lean_x2dftml_LeanFtml_CodeTrailKind_atEnd_elim(v_motive_841_, v_t_boxed_845_, v_h_843_, v_atEnd_844_);
lean_dec(v_atEnd_844_);
return v_res_846_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_CodeTrailKind_ofNat(lean_object* v_n_847_){
_start:
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = lean_unsigned_to_nat(0u);
v___x_849_ = lean_nat_dec_le(v_n_847_, v___x_848_);
if (v___x_849_ == 0)
{
uint8_t v___x_850_; 
v___x_850_ = 1;
return v___x_850_;
}
else
{
uint8_t v___x_851_; 
v___x_851_ = 0;
return v___x_851_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodeTrailKind_ofNat___boxed(lean_object* v_n_852_){
_start:
{
uint8_t v_res_853_; lean_object* v_r_854_; 
v_res_853_ = lp_lean_x2dftml_LeanFtml_CodeTrailKind_ofNat(v_n_852_);
lean_dec(v_n_852_);
v_r_854_ = lean_box(v_res_853_);
return v_r_854_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodeTrailKind(uint8_t v_x_855_, uint8_t v_y_856_){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_857_ = lean_box(v_x_855_);
v___x_858_ = lean_obj_tag_nat(v___x_857_);
lean_dec(v___x_857_);
v___x_859_ = lean_box(v_y_856_);
v___x_860_ = lean_obj_tag_nat(v___x_859_);
lean_dec(v___x_859_);
v___x_861_ = lean_nat_dec_eq(v___x_858_, v___x_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodeTrailKind___boxed(lean_object* v_x_862_, lean_object* v_y_863_){
_start:
{
uint8_t v_x_23__boxed_864_; uint8_t v_y_24__boxed_865_; uint8_t v_res_866_; lean_object* v_r_867_; 
v_x_23__boxed_864_ = lean_unbox(v_x_862_);
v_y_24__boxed_865_ = lean_unbox(v_y_863_);
v_res_866_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodeTrailKind(v_x_23__boxed_864_, v_y_24__boxed_865_);
v_r_867_ = lean_box(v_res_866_);
return v_r_867_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr(uint8_t v_x_874_, lean_object* v_prec_875_){
_start:
{
lean_object* v___y_877_; lean_object* v___y_884_; 
if (v_x_874_ == 0)
{
lean_object* v___x_890_; uint8_t v___x_891_; 
v___x_890_ = lean_unsigned_to_nat(1024u);
v___x_891_ = lean_nat_dec_le(v___x_890_, v_prec_875_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; 
v___x_892_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_877_ = v___x_892_;
goto v___jp_876_;
}
else
{
lean_object* v___x_893_; 
v___x_893_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_877_ = v___x_893_;
goto v___jp_876_;
}
}
else
{
lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_894_ = lean_unsigned_to_nat(1024u);
v___x_895_ = lean_nat_dec_le(v___x_894_, v_prec_875_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
v___x_896_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_884_ = v___x_896_;
goto v___jp_883_;
}
else
{
lean_object* v___x_897_; 
v___x_897_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_884_ = v___x_897_;
goto v___jp_883_;
}
}
v___jp_876_:
{
lean_object* v___x_878_; lean_object* v___x_879_; uint8_t v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_878_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__1));
lean_inc(v___y_877_);
v___x_879_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_879_, 0, v___y_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = 0;
v___x_881_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set_uint8(v___x_881_, sizeof(void*)*1, v___x_880_);
v___x_882_ = l_Repr_addAppParen(v___x_881_, v_prec_875_);
return v___x_882_;
}
v___jp_883_:
{
lean_object* v___x_885_; lean_object* v___x_886_; uint8_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_885_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___closed__3));
lean_inc(v___y_884_);
v___x_886_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_886_, 0, v___y_884_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v___x_887_ = 0;
v___x_888_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_888_, 0, v___x_886_);
lean_ctor_set_uint8(v___x_888_, sizeof(void*)*1, v___x_887_);
v___x_889_ = l_Repr_addAppParen(v___x_888_, v_prec_875_);
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr___boxed(lean_object* v_x_898_, lean_object* v_prec_899_){
_start:
{
uint8_t v_x_113__boxed_900_; lean_object* v_res_901_; 
v_x_113__boxed_900_ = lean_unbox(v_x_898_);
v_res_901_ = lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr(v_x_113__boxed_900_, v_prec_899_);
lean_dec(v_prec_899_);
return v_res_901_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape_decEq(lean_object* v_x_904_, lean_object* v_x_905_){
_start:
{
uint8_t v_body_906_; uint8_t v_trail_907_; uint8_t v_body_908_; uint8_t v_trail_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; uint8_t v___x_914_; 
v_body_906_ = lean_ctor_get_uint8(v_x_904_, 0);
v_trail_907_ = lean_ctor_get_uint8(v_x_904_, 1);
v_body_908_ = lean_ctor_get_uint8(v_x_905_, 0);
v_trail_909_ = lean_ctor_get_uint8(v_x_905_, 1);
v___x_910_ = lean_box(v_body_906_);
v___x_911_ = lean_obj_tag_nat(v___x_910_);
lean_dec(v___x_910_);
v___x_912_ = lean_box(v_body_908_);
v___x_913_ = lean_obj_tag_nat(v___x_912_);
lean_dec(v___x_912_);
v___x_914_ = lean_nat_dec_eq(v___x_911_, v___x_913_);
if (v___x_914_ == 0)
{
return v___x_914_;
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; uint8_t v___x_919_; 
v___x_915_ = lean_box(v_trail_907_);
v___x_916_ = lean_obj_tag_nat(v___x_915_);
lean_dec(v___x_915_);
v___x_917_ = lean_box(v_trail_909_);
v___x_918_ = lean_obj_tag_nat(v___x_917_);
lean_dec(v___x_917_);
v___x_919_ = lean_nat_dec_eq(v___x_916_, v___x_918_);
return v___x_919_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape_decEq___boxed(lean_object* v_x_920_, lean_object* v_x_921_){
_start:
{
uint8_t v_res_922_; lean_object* v_r_923_; 
v_res_922_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape_decEq(v_x_920_, v_x_921_);
lean_dec_ref(v_x_921_);
lean_dec_ref(v_x_920_);
v_r_923_ = lean_box(v_res_922_);
return v_r_923_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape(lean_object* v_x_924_, lean_object* v_x_925_){
_start:
{
uint8_t v___x_926_; 
v___x_926_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape_decEq(v_x_924_, v_x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape___boxed(lean_object* v_x_927_, lean_object* v_x_928_){
_start:
{
uint8_t v_res_929_; lean_object* v_r_930_; 
v_res_929_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape(v_x_927_, v_x_928_);
lean_dec_ref(v_x_928_);
lean_dec_ref(v_x_927_);
v_r_930_ = lean_box(v_res_929_);
return v_r_930_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_unsigned_to_nat(8u);
v___x_945_ = lean_nat_to_int(v___x_944_);
return v___x_945_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(9u);
v___x_953_ = lean_nat_to_int(v___x_952_);
return v___x_953_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__0));
v___x_956_ = lean_string_length(v___x_955_);
return v___x_956_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__14, &lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__14);
v___x_958_ = lean_nat_to_int(v___x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg(lean_object* v_x_963_){
_start:
{
uint8_t v_body_964_; uint8_t v_trail_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; uint8_t v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v_body_964_ = lean_ctor_get_uint8(v_x_963_, 0);
v_trail_965_ = lean_ctor_get_uint8(v_x_963_, 1);
v___x_966_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__5));
v___x_967_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__6));
v___x_968_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__7);
v___x_969_ = lean_unsigned_to_nat(0u);
v___x_970_ = lp_lean_x2dftml_LeanFtml_instReprCodeBodyKind_repr(v_body_964_, v___x_969_);
v___x_971_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_968_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v___x_972_ = 0;
v___x_973_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_973_, 0, v___x_971_);
lean_ctor_set_uint8(v___x_973_, sizeof(void*)*1, v___x_972_);
v___x_974_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_967_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__9));
v___x_976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = lean_box(1);
v___x_978_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__11));
v___x_980_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set(v___x_981_, 1, v___x_966_);
v___x_982_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__12, &lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__12);
v___x_983_ = lp_lean_x2dftml_LeanFtml_instReprCodeTrailKind_repr(v_trail_965_, v___x_969_);
v___x_984_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_985_, 0, v___x_984_);
lean_ctor_set_uint8(v___x_985_, sizeof(void*)*1, v___x_972_);
v___x_986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_981_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__15, &lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__15);
v___x_988_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__16));
v___x_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
lean_ctor_set(v___x_989_, 1, v___x_986_);
v___x_990_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___closed__17));
v___x_991_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_987_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set_uint8(v___x_993_, sizeof(void*)*1, v___x_972_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg___boxed(lean_object* v_x_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg(v_x_994_);
lean_dec_ref(v_x_994_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr(lean_object* v_x_996_, lean_object* v_prec_997_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg(v_x_996_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___boxed(lean_object* v_x_999_, lean_object* v_prec_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr(v_x_999_, v_prec_1000_);
lean_dec(v_prec_1000_);
lean_dec_ref(v_x_999_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorIdx___impl(uint8_t v_x_1004_){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_box(v_x_1004_);
v___x_1006_ = lean_obj_tag_nat(v___x_1005_);
lean_dec(v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorIdx___impl___boxed(lean_object* v_x_1007_){
_start:
{
uint8_t v_x_4__boxed_1008_; lean_object* v_res_1009_; 
v_x_4__boxed_1008_ = lean_unbox(v_x_1007_);
v_res_1009_ = lp_lean_x2dftml_LeanFtml_MathKind_ctorIdx___impl(v_x_4__boxed_1008_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorElim___redArg(lean_object* v_k_1010_){
_start:
{
lean_inc(v_k_1010_);
return v_k_1010_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorElim___redArg___boxed(lean_object* v_k_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = lp_lean_x2dftml_LeanFtml_MathKind_ctorElim___redArg(v_k_1011_);
lean_dec(v_k_1011_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorElim(lean_object* v_motive_1013_, lean_object* v_ctorIdx_1014_, uint8_t v_t_1015_, lean_object* v_h_1016_, lean_object* v_k_1017_){
_start:
{
lean_inc(v_k_1017_);
return v_k_1017_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ctorElim___boxed(lean_object* v_motive_1018_, lean_object* v_ctorIdx_1019_, lean_object* v_t_1020_, lean_object* v_h_1021_, lean_object* v_k_1022_){
_start:
{
uint8_t v_t_boxed_1023_; lean_object* v_res_1024_; 
v_t_boxed_1023_ = lean_unbox(v_t_1020_);
v_res_1024_ = lp_lean_x2dftml_LeanFtml_MathKind_ctorElim(v_motive_1018_, v_ctorIdx_1019_, v_t_boxed_1023_, v_h_1021_, v_k_1022_);
lean_dec(v_k_1022_);
lean_dec(v_ctorIdx_1019_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim___redArg(lean_object* v_fatal_1025_){
_start:
{
lean_inc(v_fatal_1025_);
return v_fatal_1025_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim___redArg___boxed(lean_object* v_fatal_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim___redArg(v_fatal_1026_);
lean_dec(v_fatal_1026_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim(lean_object* v_motive_1028_, uint8_t v_t_1029_, lean_object* v_h_1030_, lean_object* v_fatal_1031_){
_start:
{
lean_inc(v_fatal_1031_);
return v_fatal_1031_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim___boxed(lean_object* v_motive_1032_, lean_object* v_t_1033_, lean_object* v_h_1034_, lean_object* v_fatal_1035_){
_start:
{
uint8_t v_t_boxed_1036_; lean_object* v_res_1037_; 
v_t_boxed_1036_ = lean_unbox(v_t_1033_);
v_res_1037_ = lp_lean_x2dftml_LeanFtml_MathKind_fatal_elim(v_motive_1032_, v_t_boxed_1036_, v_h_1034_, v_fatal_1035_);
lean_dec(v_fatal_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_absent_elim___redArg(lean_object* v_absent_1038_){
_start:
{
lean_inc(v_absent_1038_);
return v_absent_1038_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_absent_elim___redArg___boxed(lean_object* v_absent_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = lp_lean_x2dftml_LeanFtml_MathKind_absent_elim___redArg(v_absent_1039_);
lean_dec(v_absent_1039_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_absent_elim(lean_object* v_motive_1041_, uint8_t v_t_1042_, lean_object* v_h_1043_, lean_object* v_absent_1044_){
_start:
{
lean_inc(v_absent_1044_);
return v_absent_1044_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_absent_elim___boxed(lean_object* v_motive_1045_, lean_object* v_t_1046_, lean_object* v_h_1047_, lean_object* v_absent_1048_){
_start:
{
uint8_t v_t_boxed_1049_; lean_object* v_res_1050_; 
v_t_boxed_1049_ = lean_unbox(v_t_1046_);
v_res_1050_ = lp_lean_x2dftml_LeanFtml_MathKind_absent_elim(v_motive_1045_, v_t_boxed_1049_, v_h_1047_, v_absent_1048_);
lean_dec(v_absent_1048_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_valid_elim___redArg(lean_object* v_valid_1051_){
_start:
{
lean_inc(v_valid_1051_);
return v_valid_1051_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_valid_elim___redArg___boxed(lean_object* v_valid_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = lp_lean_x2dftml_LeanFtml_MathKind_valid_elim___redArg(v_valid_1052_);
lean_dec(v_valid_1052_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_valid_elim(lean_object* v_motive_1054_, uint8_t v_t_1055_, lean_object* v_h_1056_, lean_object* v_valid_1057_){
_start:
{
lean_inc(v_valid_1057_);
return v_valid_1057_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_valid_elim___boxed(lean_object* v_motive_1058_, lean_object* v_t_1059_, lean_object* v_h_1060_, lean_object* v_valid_1061_){
_start:
{
uint8_t v_t_boxed_1062_; lean_object* v_res_1063_; 
v_t_boxed_1062_ = lean_unbox(v_t_1059_);
v_res_1063_ = lp_lean_x2dftml_LeanFtml_MathKind_valid_elim(v_motive_1058_, v_t_boxed_1062_, v_h_1060_, v_valid_1061_);
lean_dec(v_valid_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim___redArg(lean_object* v_invalid_1064_){
_start:
{
lean_inc(v_invalid_1064_);
return v_invalid_1064_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim___redArg___boxed(lean_object* v_invalid_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim___redArg(v_invalid_1065_);
lean_dec(v_invalid_1065_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim(lean_object* v_motive_1067_, uint8_t v_t_1068_, lean_object* v_h_1069_, lean_object* v_invalid_1070_){
_start:
{
lean_inc(v_invalid_1070_);
return v_invalid_1070_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim___boxed(lean_object* v_motive_1071_, lean_object* v_t_1072_, lean_object* v_h_1073_, lean_object* v_invalid_1074_){
_start:
{
uint8_t v_t_boxed_1075_; lean_object* v_res_1076_; 
v_t_boxed_1075_ = lean_unbox(v_t_1072_);
v_res_1076_ = lp_lean_x2dftml_LeanFtml_MathKind_invalid_elim(v_motive_1071_, v_t_boxed_1075_, v_h_1073_, v_invalid_1074_);
lean_dec(v_invalid_1074_);
return v_res_1076_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_MathKind_ofNat(lean_object* v_n_1077_){
_start:
{
lean_object* v___x_1078_; uint8_t v___x_1079_; 
v___x_1078_ = lean_unsigned_to_nat(1u);
v___x_1079_ = lean_nat_dec_le(v_n_1077_, v___x_1078_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; uint8_t v___x_1081_; 
v___x_1080_ = lean_unsigned_to_nat(2u);
v___x_1081_ = lean_nat_dec_le(v_n_1077_, v___x_1080_);
if (v___x_1081_ == 0)
{
uint8_t v___x_1082_; 
v___x_1082_ = 3;
return v___x_1082_;
}
else
{
uint8_t v___x_1083_; 
v___x_1083_ = 2;
return v___x_1083_;
}
}
else
{
lean_object* v___x_1084_; uint8_t v___x_1085_; 
v___x_1084_ = lean_unsigned_to_nat(0u);
v___x_1085_ = lean_nat_dec_le(v_n_1077_, v___x_1084_);
if (v___x_1085_ == 0)
{
uint8_t v___x_1086_; 
v___x_1086_ = 1;
return v___x_1086_;
}
else
{
uint8_t v___x_1087_; 
v___x_1087_ = 0;
return v___x_1087_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MathKind_ofNat___boxed(lean_object* v_n_1088_){
_start:
{
uint8_t v_res_1089_; lean_object* v_r_1090_; 
v_res_1089_ = lp_lean_x2dftml_LeanFtml_MathKind_ofNat(v_n_1088_);
lean_dec(v_n_1088_);
v_r_1090_ = lean_box(v_res_1089_);
return v_r_1090_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqMathKind(uint8_t v_x_1091_, uint8_t v_y_1092_){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; uint8_t v___x_1097_; 
v___x_1093_ = lean_box(v_x_1091_);
v___x_1094_ = lean_obj_tag_nat(v___x_1093_);
lean_dec(v___x_1093_);
v___x_1095_ = lean_box(v_y_1092_);
v___x_1096_ = lean_obj_tag_nat(v___x_1095_);
lean_dec(v___x_1095_);
v___x_1097_ = lean_nat_dec_eq(v___x_1094_, v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqMathKind___boxed(lean_object* v_x_1098_, lean_object* v_y_1099_){
_start:
{
uint8_t v_x_23__boxed_1100_; uint8_t v_y_24__boxed_1101_; uint8_t v_res_1102_; lean_object* v_r_1103_; 
v_x_23__boxed_1100_ = lean_unbox(v_x_1098_);
v_y_24__boxed_1101_ = lean_unbox(v_y_1099_);
v_res_1102_ = lp_lean_x2dftml_LeanFtml_instDecidableEqMathKind(v_x_23__boxed_1100_, v_y_24__boxed_1101_);
v_r_1103_ = lean_box(v_res_1102_);
return v_r_1103_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr(uint8_t v_x_1116_, lean_object* v_prec_1117_){
_start:
{
lean_object* v___y_1119_; lean_object* v___y_1126_; lean_object* v___y_1133_; lean_object* v___y_1140_; 
switch(v_x_1116_)
{
case 0:
{
lean_object* v___x_1146_; uint8_t v___x_1147_; 
v___x_1146_ = lean_unsigned_to_nat(1024u);
v___x_1147_ = lean_nat_dec_le(v___x_1146_, v_prec_1117_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1119_ = v___x_1148_;
goto v___jp_1118_;
}
else
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1119_ = v___x_1149_;
goto v___jp_1118_;
}
}
case 1:
{
lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1150_ = lean_unsigned_to_nat(1024u);
v___x_1151_ = lean_nat_dec_le(v___x_1150_, v_prec_1117_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; 
v___x_1152_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1126_ = v___x_1152_;
goto v___jp_1125_;
}
else
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1126_ = v___x_1153_;
goto v___jp_1125_;
}
}
case 2:
{
lean_object* v___x_1154_; uint8_t v___x_1155_; 
v___x_1154_ = lean_unsigned_to_nat(1024u);
v___x_1155_ = lean_nat_dec_le(v___x_1154_, v_prec_1117_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1133_ = v___x_1156_;
goto v___jp_1132_;
}
else
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1133_ = v___x_1157_;
goto v___jp_1132_;
}
}
default: 
{
lean_object* v___x_1158_; uint8_t v___x_1159_; 
v___x_1158_ = lean_unsigned_to_nat(1024u);
v___x_1159_ = lean_nat_dec_le(v___x_1158_, v_prec_1117_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; 
v___x_1160_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1140_ = v___x_1160_;
goto v___jp_1139_;
}
else
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1140_ = v___x_1161_;
goto v___jp_1139_;
}
}
}
v___jp_1118_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1120_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__1));
lean_inc(v___y_1119_);
v___x_1121_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___y_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = 0;
v___x_1123_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1123_, 0, v___x_1121_);
lean_ctor_set_uint8(v___x_1123_, sizeof(void*)*1, v___x_1122_);
v___x_1124_ = l_Repr_addAppParen(v___x_1123_, v_prec_1117_);
return v___x_1124_;
}
v___jp_1125_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1127_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__3));
lean_inc(v___y_1126_);
v___x_1128_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___y_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = 0;
v___x_1130_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1130_, 0, v___x_1128_);
lean_ctor_set_uint8(v___x_1130_, sizeof(void*)*1, v___x_1129_);
v___x_1131_ = l_Repr_addAppParen(v___x_1130_, v_prec_1117_);
return v___x_1131_;
}
v___jp_1132_:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; uint8_t v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1134_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__5));
lean_inc(v___y_1133_);
v___x_1135_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___y_1133_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = 0;
v___x_1137_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set_uint8(v___x_1137_, sizeof(void*)*1, v___x_1136_);
v___x_1138_ = l_Repr_addAppParen(v___x_1137_, v_prec_1117_);
return v___x_1138_;
}
v___jp_1139_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1141_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___closed__7));
lean_inc(v___y_1140_);
v___x_1142_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___y_1140_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = 0;
v___x_1144_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set_uint8(v___x_1144_, sizeof(void*)*1, v___x_1143_);
v___x_1145_ = l_Repr_addAppParen(v___x_1144_, v_prec_1117_);
return v___x_1145_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMathKind_repr___boxed(lean_object* v_x_1162_, lean_object* v_prec_1163_){
_start:
{
uint8_t v_x_221__boxed_1164_; lean_object* v_res_1165_; 
v_x_221__boxed_1164_ = lean_unbox(v_x_1162_);
v_res_1165_ = lp_lean_x2dftml_LeanFtml_instReprMathKind_repr(v_x_221__boxed_1164_, v_prec_1163_);
lean_dec(v_prec_1163_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorIdx___impl(uint8_t v_x_1168_){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1169_ = lean_box(v_x_1168_);
v___x_1170_ = lean_obj_tag_nat(v___x_1169_);
lean_dec(v___x_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorIdx___impl___boxed(lean_object* v_x_1171_){
_start:
{
uint8_t v_x_4__boxed_1172_; lean_object* v_res_1173_; 
v_x_4__boxed_1172_ = lean_unbox(v_x_1171_);
v_res_1173_ = lp_lean_x2dftml_LeanFtml_MiPhKind_ctorIdx___impl(v_x_4__boxed_1172_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim___redArg(lean_object* v_k_1174_){
_start:
{
lean_inc(v_k_1174_);
return v_k_1174_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim___redArg___boxed(lean_object* v_k_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim___redArg(v_k_1175_);
lean_dec(v_k_1175_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim(lean_object* v_motive_1177_, lean_object* v_ctorIdx_1178_, uint8_t v_t_1179_, lean_object* v_h_1180_, lean_object* v_k_1181_){
_start:
{
lean_inc(v_k_1181_);
return v_k_1181_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim___boxed(lean_object* v_motive_1182_, lean_object* v_ctorIdx_1183_, lean_object* v_t_1184_, lean_object* v_h_1185_, lean_object* v_k_1186_){
_start:
{
uint8_t v_t_boxed_1187_; lean_object* v_res_1188_; 
v_t_boxed_1187_ = lean_unbox(v_t_1184_);
v_res_1188_ = lp_lean_x2dftml_LeanFtml_MiPhKind_ctorElim(v_motive_1182_, v_ctorIdx_1183_, v_t_boxed_1187_, v_h_1185_, v_k_1186_);
lean_dec(v_k_1186_);
lean_dec(v_ctorIdx_1183_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim___redArg(lean_object* v_unknown_1189_){
_start:
{
lean_inc(v_unknown_1189_);
return v_unknown_1189_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim___redArg___boxed(lean_object* v_unknown_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim___redArg(v_unknown_1190_);
lean_dec(v_unknown_1190_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim(lean_object* v_motive_1192_, uint8_t v_t_1193_, lean_object* v_h_1194_, lean_object* v_unknown_1195_){
_start:
{
lean_inc(v_unknown_1195_);
return v_unknown_1195_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim___boxed(lean_object* v_motive_1196_, lean_object* v_t_1197_, lean_object* v_h_1198_, lean_object* v_unknown_1199_){
_start:
{
uint8_t v_t_boxed_1200_; lean_object* v_res_1201_; 
v_t_boxed_1200_ = lean_unbox(v_t_1197_);
v_res_1201_ = lp_lean_x2dftml_LeanFtml_MiPhKind_unknown_elim(v_motive_1196_, v_t_boxed_1200_, v_h_1198_, v_unknown_1199_);
lean_dec(v_unknown_1199_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim___redArg(lean_object* v_cycle_1202_){
_start:
{
lean_inc(v_cycle_1202_);
return v_cycle_1202_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim___redArg___boxed(lean_object* v_cycle_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim___redArg(v_cycle_1203_);
lean_dec(v_cycle_1203_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim(lean_object* v_motive_1205_, uint8_t v_t_1206_, lean_object* v_h_1207_, lean_object* v_cycle_1208_){
_start:
{
lean_inc(v_cycle_1208_);
return v_cycle_1208_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim___boxed(lean_object* v_motive_1209_, lean_object* v_t_1210_, lean_object* v_h_1211_, lean_object* v_cycle_1212_){
_start:
{
uint8_t v_t_boxed_1213_; lean_object* v_res_1214_; 
v_t_boxed_1213_ = lean_unbox(v_t_1210_);
v_res_1214_ = lp_lean_x2dftml_LeanFtml_MiPhKind_cycle_elim(v_motive_1209_, v_t_boxed_1213_, v_h_1211_, v_cycle_1212_);
lean_dec(v_cycle_1212_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim___redArg(lean_object* v_source_1215_){
_start:
{
lean_inc(v_source_1215_);
return v_source_1215_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim___redArg___boxed(lean_object* v_source_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim___redArg(v_source_1216_);
lean_dec(v_source_1216_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim(lean_object* v_motive_1218_, uint8_t v_t_1219_, lean_object* v_h_1220_, lean_object* v_source_1221_){
_start:
{
lean_inc(v_source_1221_);
return v_source_1221_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim___boxed(lean_object* v_motive_1222_, lean_object* v_t_1223_, lean_object* v_h_1224_, lean_object* v_source_1225_){
_start:
{
uint8_t v_t_boxed_1226_; lean_object* v_res_1227_; 
v_t_boxed_1226_ = lean_unbox(v_t_1223_);
v_res_1227_ = lp_lean_x2dftml_LeanFtml_MiPhKind_source_elim(v_motive_1222_, v_t_boxed_1226_, v_h_1224_, v_source_1225_);
lean_dec(v_source_1225_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim___redArg(lean_object* v_fallback_1228_){
_start:
{
lean_inc(v_fallback_1228_);
return v_fallback_1228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim___redArg___boxed(lean_object* v_fallback_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim___redArg(v_fallback_1229_);
lean_dec(v_fallback_1229_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim(lean_object* v_motive_1231_, uint8_t v_t_1232_, lean_object* v_h_1233_, lean_object* v_fallback_1234_){
_start:
{
lean_inc(v_fallback_1234_);
return v_fallback_1234_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim___boxed(lean_object* v_motive_1235_, lean_object* v_t_1236_, lean_object* v_h_1237_, lean_object* v_fallback_1238_){
_start:
{
uint8_t v_t_boxed_1239_; lean_object* v_res_1240_; 
v_t_boxed_1239_ = lean_unbox(v_t_1236_);
v_res_1240_ = lp_lean_x2dftml_LeanFtml_MiPhKind_fallback_elim(v_motive_1235_, v_t_boxed_1239_, v_h_1237_, v_fallback_1238_);
lean_dec(v_fallback_1238_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim___redArg(lean_object* v_supFree_1241_){
_start:
{
lean_inc(v_supFree_1241_);
return v_supFree_1241_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim___redArg___boxed(lean_object* v_supFree_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim___redArg(v_supFree_1242_);
lean_dec(v_supFree_1242_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim(lean_object* v_motive_1244_, uint8_t v_t_1245_, lean_object* v_h_1246_, lean_object* v_supFree_1247_){
_start:
{
lean_inc(v_supFree_1247_);
return v_supFree_1247_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim___boxed(lean_object* v_motive_1248_, lean_object* v_t_1249_, lean_object* v_h_1250_, lean_object* v_supFree_1251_){
_start:
{
uint8_t v_t_boxed_1252_; lean_object* v_res_1253_; 
v_t_boxed_1252_ = lean_unbox(v_t_1249_);
v_res_1253_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supFree_elim(v_motive_1248_, v_t_boxed_1252_, v_h_1250_, v_supFree_1251_);
lean_dec(v_supFree_1251_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim___redArg(lean_object* v_supRaw_1254_){
_start:
{
lean_inc(v_supRaw_1254_);
return v_supRaw_1254_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim___redArg___boxed(lean_object* v_supRaw_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim___redArg(v_supRaw_1255_);
lean_dec(v_supRaw_1255_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim(lean_object* v_motive_1257_, uint8_t v_t_1258_, lean_object* v_h_1259_, lean_object* v_supRaw_1260_){
_start:
{
lean_inc(v_supRaw_1260_);
return v_supRaw_1260_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim___boxed(lean_object* v_motive_1261_, lean_object* v_t_1262_, lean_object* v_h_1263_, lean_object* v_supRaw_1264_){
_start:
{
uint8_t v_t_boxed_1265_; lean_object* v_res_1266_; 
v_t_boxed_1265_ = lean_unbox(v_t_1262_);
v_res_1266_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supRaw_elim(v_motive_1261_, v_t_boxed_1265_, v_h_1263_, v_supRaw_1264_);
lean_dec(v_supRaw_1264_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim___redArg(lean_object* v_supNl_1267_){
_start:
{
lean_inc(v_supNl_1267_);
return v_supNl_1267_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim___redArg___boxed(lean_object* v_supNl_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim___redArg(v_supNl_1268_);
lean_dec(v_supNl_1268_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim(lean_object* v_motive_1270_, uint8_t v_t_1271_, lean_object* v_h_1272_, lean_object* v_supNl_1273_){
_start:
{
lean_inc(v_supNl_1273_);
return v_supNl_1273_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim___boxed(lean_object* v_motive_1274_, lean_object* v_t_1275_, lean_object* v_h_1276_, lean_object* v_supNl_1277_){
_start:
{
uint8_t v_t_boxed_1278_; lean_object* v_res_1279_; 
v_t_boxed_1278_ = lean_unbox(v_t_1275_);
v_res_1279_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supNl_elim(v_motive_1274_, v_t_boxed_1278_, v_h_1276_, v_supNl_1277_);
lean_dec(v_supNl_1277_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim___redArg(lean_object* v_supImage_1280_){
_start:
{
lean_inc(v_supImage_1280_);
return v_supImage_1280_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim___redArg___boxed(lean_object* v_supImage_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim___redArg(v_supImage_1281_);
lean_dec(v_supImage_1281_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim(lean_object* v_motive_1283_, uint8_t v_t_1284_, lean_object* v_h_1285_, lean_object* v_supImage_1286_){
_start:
{
lean_inc(v_supImage_1286_);
return v_supImage_1286_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim___boxed(lean_object* v_motive_1287_, lean_object* v_t_1288_, lean_object* v_h_1289_, lean_object* v_supImage_1290_){
_start:
{
uint8_t v_t_boxed_1291_; lean_object* v_res_1292_; 
v_t_boxed_1291_ = lean_unbox(v_t_1288_);
v_res_1292_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supImage_elim(v_motive_1287_, v_t_boxed_1291_, v_h_1289_, v_supImage_1290_);
lean_dec(v_supImage_1290_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim___redArg(lean_object* v_supDate_1293_){
_start:
{
lean_inc(v_supDate_1293_);
return v_supDate_1293_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim___redArg___boxed(lean_object* v_supDate_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim___redArg(v_supDate_1294_);
lean_dec(v_supDate_1294_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim(lean_object* v_motive_1296_, uint8_t v_t_1297_, lean_object* v_h_1298_, lean_object* v_supDate_1299_){
_start:
{
lean_inc(v_supDate_1299_);
return v_supDate_1299_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim___boxed(lean_object* v_motive_1300_, lean_object* v_t_1301_, lean_object* v_h_1302_, lean_object* v_supDate_1303_){
_start:
{
uint8_t v_t_boxed_1304_; lean_object* v_res_1305_; 
v_t_boxed_1304_ = lean_unbox(v_t_1301_);
v_res_1305_ = lp_lean_x2dftml_LeanFtml_MiPhKind_supDate_elim(v_motive_1300_, v_t_boxed_1304_, v_h_1302_, v_supDate_1303_);
lean_dec(v_supDate_1303_);
return v_res_1305_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_MiPhKind_ofNat(lean_object* v_n_1306_){
_start:
{
lean_object* v___x_1307_; uint8_t v___x_1308_; 
v___x_1307_ = lean_unsigned_to_nat(3u);
v___x_1308_ = lean_nat_dec_le(v_n_1306_, v___x_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; uint8_t v___x_1310_; 
v___x_1309_ = lean_unsigned_to_nat(5u);
v___x_1310_ = lean_nat_dec_le(v_n_1306_, v___x_1309_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; uint8_t v___x_1312_; 
v___x_1311_ = lean_unsigned_to_nat(6u);
v___x_1312_ = lean_nat_dec_le(v_n_1306_, v___x_1311_);
if (v___x_1312_ == 0)
{
lean_object* v___x_1313_; uint8_t v___x_1314_; 
v___x_1313_ = lean_unsigned_to_nat(7u);
v___x_1314_ = lean_nat_dec_le(v_n_1306_, v___x_1313_);
if (v___x_1314_ == 0)
{
uint8_t v___x_1315_; 
v___x_1315_ = 8;
return v___x_1315_;
}
else
{
uint8_t v___x_1316_; 
v___x_1316_ = 7;
return v___x_1316_;
}
}
else
{
uint8_t v___x_1317_; 
v___x_1317_ = 6;
return v___x_1317_;
}
}
else
{
lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1318_ = lean_unsigned_to_nat(4u);
v___x_1319_ = lean_nat_dec_le(v_n_1306_, v___x_1318_);
if (v___x_1319_ == 0)
{
uint8_t v___x_1320_; 
v___x_1320_ = 5;
return v___x_1320_;
}
else
{
uint8_t v___x_1321_; 
v___x_1321_ = 4;
return v___x_1321_;
}
}
}
else
{
lean_object* v___x_1322_; uint8_t v___x_1323_; 
v___x_1322_ = lean_unsigned_to_nat(1u);
v___x_1323_ = lean_nat_dec_le(v_n_1306_, v___x_1322_);
if (v___x_1323_ == 0)
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1324_ = lean_unsigned_to_nat(2u);
v___x_1325_ = lean_nat_dec_le(v_n_1306_, v___x_1324_);
if (v___x_1325_ == 0)
{
uint8_t v___x_1326_; 
v___x_1326_ = 3;
return v___x_1326_;
}
else
{
uint8_t v___x_1327_; 
v___x_1327_ = 2;
return v___x_1327_;
}
}
else
{
lean_object* v___x_1328_; uint8_t v___x_1329_; 
v___x_1328_ = lean_unsigned_to_nat(0u);
v___x_1329_ = lean_nat_dec_le(v_n_1306_, v___x_1328_);
if (v___x_1329_ == 0)
{
uint8_t v___x_1330_; 
v___x_1330_ = 1;
return v___x_1330_;
}
else
{
uint8_t v___x_1331_; 
v___x_1331_ = 0;
return v___x_1331_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiPhKind_ofNat___boxed(lean_object* v_n_1332_){
_start:
{
uint8_t v_res_1333_; lean_object* v_r_1334_; 
v_res_1333_ = lp_lean_x2dftml_LeanFtml_MiPhKind_ofNat(v_n_1332_);
lean_dec(v_n_1332_);
v_r_1334_ = lean_box(v_res_1333_);
return v_r_1334_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqMiPhKind(uint8_t v_x_1335_, uint8_t v_y_1336_){
_start:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1337_ = lean_box(v_x_1335_);
v___x_1338_ = lean_obj_tag_nat(v___x_1337_);
lean_dec(v___x_1337_);
v___x_1339_ = lean_box(v_y_1336_);
v___x_1340_ = lean_obj_tag_nat(v___x_1339_);
lean_dec(v___x_1339_);
v___x_1341_ = lean_nat_dec_eq(v___x_1338_, v___x_1340_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqMiPhKind___boxed(lean_object* v_x_1342_, lean_object* v_y_1343_){
_start:
{
uint8_t v_x_23__boxed_1344_; uint8_t v_y_24__boxed_1345_; uint8_t v_res_1346_; lean_object* v_r_1347_; 
v_x_23__boxed_1344_ = lean_unbox(v_x_1342_);
v_y_24__boxed_1345_ = lean_unbox(v_y_1343_);
v_res_1346_ = lp_lean_x2dftml_LeanFtml_instDecidableEqMiPhKind(v_x_23__boxed_1344_, v_y_24__boxed_1345_);
v_r_1347_ = lean_box(v_res_1346_);
return v_r_1347_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr(uint8_t v_x_1375_, lean_object* v_prec_1376_){
_start:
{
lean_object* v___y_1378_; lean_object* v___y_1385_; lean_object* v___y_1392_; lean_object* v___y_1399_; lean_object* v___y_1406_; lean_object* v___y_1413_; lean_object* v___y_1420_; lean_object* v___y_1427_; lean_object* v___y_1434_; 
switch(v_x_1375_)
{
case 0:
{
lean_object* v___x_1440_; uint8_t v___x_1441_; 
v___x_1440_ = lean_unsigned_to_nat(1024u);
v___x_1441_ = lean_nat_dec_le(v___x_1440_, v_prec_1376_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1442_; 
v___x_1442_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1378_ = v___x_1442_;
goto v___jp_1377_;
}
else
{
lean_object* v___x_1443_; 
v___x_1443_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1378_ = v___x_1443_;
goto v___jp_1377_;
}
}
case 1:
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = lean_unsigned_to_nat(1024u);
v___x_1445_ = lean_nat_dec_le(v___x_1444_, v_prec_1376_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; 
v___x_1446_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1385_ = v___x_1446_;
goto v___jp_1384_;
}
else
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1385_ = v___x_1447_;
goto v___jp_1384_;
}
}
case 2:
{
lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1448_ = lean_unsigned_to_nat(1024u);
v___x_1449_ = lean_nat_dec_le(v___x_1448_, v_prec_1376_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1392_ = v___x_1450_;
goto v___jp_1391_;
}
else
{
lean_object* v___x_1451_; 
v___x_1451_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1392_ = v___x_1451_;
goto v___jp_1391_;
}
}
case 3:
{
lean_object* v___x_1452_; uint8_t v___x_1453_; 
v___x_1452_ = lean_unsigned_to_nat(1024u);
v___x_1453_ = lean_nat_dec_le(v___x_1452_, v_prec_1376_);
if (v___x_1453_ == 0)
{
lean_object* v___x_1454_; 
v___x_1454_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1399_ = v___x_1454_;
goto v___jp_1398_;
}
else
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1399_ = v___x_1455_;
goto v___jp_1398_;
}
}
case 4:
{
lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1456_ = lean_unsigned_to_nat(1024u);
v___x_1457_ = lean_nat_dec_le(v___x_1456_, v_prec_1376_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1406_ = v___x_1458_;
goto v___jp_1405_;
}
else
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1406_ = v___x_1459_;
goto v___jp_1405_;
}
}
case 5:
{
lean_object* v___x_1460_; uint8_t v___x_1461_; 
v___x_1460_ = lean_unsigned_to_nat(1024u);
v___x_1461_ = lean_nat_dec_le(v___x_1460_, v_prec_1376_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; 
v___x_1462_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1413_ = v___x_1462_;
goto v___jp_1412_;
}
else
{
lean_object* v___x_1463_; 
v___x_1463_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1413_ = v___x_1463_;
goto v___jp_1412_;
}
}
case 6:
{
lean_object* v___x_1464_; uint8_t v___x_1465_; 
v___x_1464_ = lean_unsigned_to_nat(1024u);
v___x_1465_ = lean_nat_dec_le(v___x_1464_, v_prec_1376_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; 
v___x_1466_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1420_ = v___x_1466_;
goto v___jp_1419_;
}
else
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1420_ = v___x_1467_;
goto v___jp_1419_;
}
}
case 7:
{
lean_object* v___x_1468_; uint8_t v___x_1469_; 
v___x_1468_ = lean_unsigned_to_nat(1024u);
v___x_1469_ = lean_nat_dec_le(v___x_1468_, v_prec_1376_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1427_ = v___x_1470_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1427_ = v___x_1471_;
goto v___jp_1426_;
}
}
default: 
{
lean_object* v___x_1472_; uint8_t v___x_1473_; 
v___x_1472_ = lean_unsigned_to_nat(1024u);
v___x_1473_ = lean_nat_dec_le(v___x_1472_, v_prec_1376_);
if (v___x_1473_ == 0)
{
lean_object* v___x_1474_; 
v___x_1474_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1434_ = v___x_1474_;
goto v___jp_1433_;
}
else
{
lean_object* v___x_1475_; 
v___x_1475_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1434_ = v___x_1475_;
goto v___jp_1433_;
}
}
}
v___jp_1377_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1379_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__1));
lean_inc(v___y_1378_);
v___x_1380_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___y_1378_);
lean_ctor_set(v___x_1380_, 1, v___x_1379_);
v___x_1381_ = 0;
v___x_1382_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1382_, 0, v___x_1380_);
lean_ctor_set_uint8(v___x_1382_, sizeof(void*)*1, v___x_1381_);
v___x_1383_ = l_Repr_addAppParen(v___x_1382_, v_prec_1376_);
return v___x_1383_;
}
v___jp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; uint8_t v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1386_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__3));
lean_inc(v___y_1385_);
v___x_1387_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1387_, 0, v___y_1385_);
lean_ctor_set(v___x_1387_, 1, v___x_1386_);
v___x_1388_ = 0;
v___x_1389_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1389_, 0, v___x_1387_);
lean_ctor_set_uint8(v___x_1389_, sizeof(void*)*1, v___x_1388_);
v___x_1390_ = l_Repr_addAppParen(v___x_1389_, v_prec_1376_);
return v___x_1390_;
}
v___jp_1391_:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1393_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__5));
lean_inc(v___y_1392_);
v___x_1394_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___y_1392_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
v___x_1395_ = 0;
v___x_1396_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1396_, 0, v___x_1394_);
lean_ctor_set_uint8(v___x_1396_, sizeof(void*)*1, v___x_1395_);
v___x_1397_ = l_Repr_addAppParen(v___x_1396_, v_prec_1376_);
return v___x_1397_;
}
v___jp_1398_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1400_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__7));
lean_inc(v___y_1399_);
v___x_1401_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___y_1399_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
v___x_1402_ = 0;
v___x_1403_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1403_, 0, v___x_1401_);
lean_ctor_set_uint8(v___x_1403_, sizeof(void*)*1, v___x_1402_);
v___x_1404_ = l_Repr_addAppParen(v___x_1403_, v_prec_1376_);
return v___x_1404_;
}
v___jp_1405_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; uint8_t v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1407_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__9));
lean_inc(v___y_1406_);
v___x_1408_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___y_1406_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = 0;
v___x_1410_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1410_, 0, v___x_1408_);
lean_ctor_set_uint8(v___x_1410_, sizeof(void*)*1, v___x_1409_);
v___x_1411_ = l_Repr_addAppParen(v___x_1410_, v_prec_1376_);
return v___x_1411_;
}
v___jp_1412_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1414_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__11));
lean_inc(v___y_1413_);
v___x_1415_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___y_1413_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
v___x_1416_ = 0;
v___x_1417_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1417_, 0, v___x_1415_);
lean_ctor_set_uint8(v___x_1417_, sizeof(void*)*1, v___x_1416_);
v___x_1418_ = l_Repr_addAppParen(v___x_1417_, v_prec_1376_);
return v___x_1418_;
}
v___jp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1421_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__13));
lean_inc(v___y_1420_);
v___x_1422_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___y_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = 0;
v___x_1424_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set_uint8(v___x_1424_, sizeof(void*)*1, v___x_1423_);
v___x_1425_ = l_Repr_addAppParen(v___x_1424_, v_prec_1376_);
return v___x_1425_;
}
v___jp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; uint8_t v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1428_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__15));
lean_inc(v___y_1427_);
v___x_1429_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___y_1427_);
lean_ctor_set(v___x_1429_, 1, v___x_1428_);
v___x_1430_ = 0;
v___x_1431_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1431_, 0, v___x_1429_);
lean_ctor_set_uint8(v___x_1431_, sizeof(void*)*1, v___x_1430_);
v___x_1432_ = l_Repr_addAppParen(v___x_1431_, v_prec_1376_);
return v___x_1432_;
}
v___jp_1433_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; uint8_t v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1435_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___closed__17));
lean_inc(v___y_1434_);
v___x_1436_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1436_, 0, v___y_1434_);
lean_ctor_set(v___x_1436_, 1, v___x_1435_);
v___x_1437_ = 0;
v___x_1438_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1438_, 0, v___x_1436_);
lean_ctor_set_uint8(v___x_1438_, sizeof(void*)*1, v___x_1437_);
v___x_1439_ = l_Repr_addAppParen(v___x_1438_, v_prec_1376_);
return v___x_1439_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr___boxed(lean_object* v_x_1476_, lean_object* v_prec_1477_){
_start:
{
uint8_t v_x_491__boxed_1478_; lean_object* v_res_1479_; 
v_x_491__boxed_1478_ = lean_unbox(v_x_1476_);
v_res_1479_ = lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr(v_x_491__boxed_1478_, v_prec_1477_);
lean_dec(v_prec_1477_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorIdx___impl(lean_object* v_x_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = lean_obj_tag_nat(v_x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorIdx___impl___boxed(lean_object* v_x_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorIdx___impl(v_x_1484_);
lean_dec(v_x_1484_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(lean_object* v_t_1486_, lean_object* v_k_1487_){
_start:
{
if (lean_obj_tag(v_t_1486_) == 2)
{
lean_object* v_phs_1488_; lean_object* v___x_1489_; 
v_phs_1488_ = lean_ctor_get(v_t_1486_, 0);
lean_inc(v_phs_1488_);
lean_dec_ref_known(v_t_1486_, 1);
v___x_1489_ = lean_apply_1(v_k_1487_, v_phs_1488_);
return v___x_1489_;
}
else
{
lean_dec(v_t_1486_);
return v_k_1487_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorElim(lean_object* v_motive_1490_, lean_object* v_ctorIdx_1491_, lean_object* v_t_1492_, lean_object* v_h_1493_, lean_object* v_k_1494_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(v_t_1492_, v_k_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___boxed(lean_object* v_motive_1496_, lean_object* v_ctorIdx_1497_, lean_object* v_t_1498_, lean_object* v_h_1499_, lean_object* v_k_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorElim(v_motive_1496_, v_ctorIdx_1497_, v_t_1498_, v_h_1499_, v_k_1500_);
lean_dec(v_ctorIdx_1497_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_depthCap_elim___redArg(lean_object* v_t_1502_, lean_object* v_depthCap_1503_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(v_t_1502_, v_depthCap_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_depthCap_elim(lean_object* v_motive_1505_, lean_object* v_t_1506_, lean_object* v_h_1507_, lean_object* v_depthCap_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(v_t_1506_, v_depthCap_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_plain_elim___redArg(lean_object* v_t_1510_, lean_object* v_plain_1511_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(v_t_1510_, v_plain_1511_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_plain_elim(lean_object* v_motive_1513_, lean_object* v_t_1514_, lean_object* v_h_1515_, lean_object* v_plain_1516_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(v_t_1514_, v_plain_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_walk_elim___redArg(lean_object* v_t_1518_, lean_object* v_walk_1519_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(v_t_1518_, v_walk_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_MiShape_walk_elim(lean_object* v_motive_1521_, lean_object* v_t_1522_, lean_object* v_h_1523_, lean_object* v_walk_1524_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = lp_lean_x2dftml_LeanFtml_MiShape_ctorElim___redArg(v_t_1522_, v_walk_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape_decEq(lean_object* v_x_1526_, lean_object* v_x_1527_){
_start:
{
switch(lean_obj_tag(v_x_1526_))
{
case 0:
{
if (lean_obj_tag(v_x_1527_) == 0)
{
uint8_t v___x_1528_; 
v___x_1528_ = 1;
return v___x_1528_;
}
else
{
uint8_t v___x_1529_; 
lean_dec(v_x_1527_);
v___x_1529_ = 0;
return v___x_1529_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1527_) == 1)
{
uint8_t v___x_1530_; 
v___x_1530_ = 1;
return v___x_1530_;
}
else
{
uint8_t v___x_1531_; 
lean_dec(v_x_1527_);
v___x_1531_ = 0;
return v___x_1531_;
}
}
default: 
{
if (lean_obj_tag(v_x_1527_) == 2)
{
lean_object* v_phs_1532_; lean_object* v_phs_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; 
v_phs_1532_ = lean_ctor_get(v_x_1526_, 0);
lean_inc(v_phs_1532_);
lean_dec_ref_known(v_x_1526_, 1);
v_phs_1533_ = lean_ctor_get(v_x_1527_, 0);
lean_inc(v_phs_1533_);
lean_dec_ref_known(v_x_1527_, 1);
v___x_1534_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqMiPhKind___boxed), 2, 0);
v___x_1535_ = l_instDecidableEqList___redArg(v___x_1534_, v_phs_1532_, v_phs_1533_);
return v___x_1535_;
}
else
{
uint8_t v___x_1536_; 
lean_dec_ref_known(v_x_1526_, 1);
lean_dec(v_x_1527_);
v___x_1536_ = 0;
return v___x_1536_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape_decEq___boxed(lean_object* v_x_1537_, lean_object* v_x_1538_){
_start:
{
uint8_t v_res_1539_; lean_object* v_r_1540_; 
v_res_1539_ = lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape_decEq(v_x_1537_, v_x_1538_);
v_r_1540_ = lean_box(v_res_1539_);
return v_r_1540_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape(lean_object* v_x_1541_, lean_object* v_x_1542_){
_start:
{
uint8_t v___x_1543_; 
v___x_1543_ = lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape_decEq(v_x_1541_, v_x_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape___boxed(lean_object* v_x_1544_, lean_object* v_x_1545_){
_start:
{
uint8_t v_res_1546_; lean_object* v_r_1547_; 
v_res_1546_ = lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape(v_x_1544_, v_x_1545_);
v_r_1547_ = lean_box(v_res_1546_);
return v_r_1547_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0___lam__0(uint8_t v___y_1548_){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = lean_unsigned_to_nat(0u);
v___x_1550_ = lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr(v___y_1548_, v___x_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0___lam__0___boxed(lean_object* v___y_1551_){
_start:
{
uint8_t v___y_327__boxed_1552_; lean_object* v_res_1553_; 
v___y_327__boxed_1552_ = lean_unbox(v___y_1551_);
v_res_1553_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0___lam__0(v___y_327__boxed_1552_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1554_, lean_object* v_x_1555_, lean_object* v_x_1556_){
_start:
{
if (lean_obj_tag(v_x_1556_) == 0)
{
lean_dec(v_x_1554_);
return v_x_1555_;
}
else
{
lean_object* v_head_1557_; lean_object* v_tail_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1570_; 
v_head_1557_ = lean_ctor_get(v_x_1556_, 0);
v_tail_1558_ = lean_ctor_get(v_x_1556_, 1);
v_isSharedCheck_1570_ = !lean_is_exclusive(v_x_1556_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1560_ = v_x_1556_;
v_isShared_1561_ = v_isSharedCheck_1570_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_tail_1558_);
lean_inc(v_head_1557_);
lean_dec(v_x_1556_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1570_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
lean_inc(v_x_1554_);
if (v_isShared_1561_ == 0)
{
lean_ctor_set_tag(v___x_1560_, 5);
lean_ctor_set(v___x_1560_, 1, v_x_1554_);
lean_ctor_set(v___x_1560_, 0, v_x_1555_);
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_x_1555_);
lean_ctor_set(v_reuseFailAlloc_1569_, 1, v_x_1554_);
v___x_1563_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
lean_object* v___x_1564_; uint8_t v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1564_ = lean_unsigned_to_nat(0u);
v___x_1565_ = lean_unbox(v_head_1557_);
lean_dec(v_head_1557_);
v___x_1566_ = lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr(v___x_1565_, v___x_1564_);
v___x_1567_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1563_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
v_x_1555_ = v___x_1567_;
v_x_1556_ = v_tail_1558_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0_spec__1(lean_object* v_x_1571_, lean_object* v_x_1572_, lean_object* v_x_1573_){
_start:
{
if (lean_obj_tag(v_x_1573_) == 0)
{
lean_dec(v_x_1571_);
return v_x_1572_;
}
else
{
lean_object* v_head_1574_; lean_object* v_tail_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1587_; 
v_head_1574_ = lean_ctor_get(v_x_1573_, 0);
v_tail_1575_ = lean_ctor_get(v_x_1573_, 1);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_x_1573_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1577_ = v_x_1573_;
v_isShared_1578_ = v_isSharedCheck_1587_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_tail_1575_);
lean_inc(v_head_1574_);
lean_dec(v_x_1573_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1587_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
lean_inc(v_x_1571_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set_tag(v___x_1577_, 5);
lean_ctor_set(v___x_1577_, 1, v_x_1571_);
lean_ctor_set(v___x_1577_, 0, v_x_1572_);
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_x_1572_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v_x_1571_);
v___x_1580_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
lean_object* v___x_1581_; uint8_t v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1581_ = lean_unsigned_to_nat(0u);
v___x_1582_ = lean_unbox(v_head_1574_);
lean_dec(v_head_1574_);
v___x_1583_ = lp_lean_x2dftml_LeanFtml_instReprMiPhKind_repr(v___x_1582_, v___x_1581_);
v___x_1584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1580_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
v___x_1585_ = lp_lean_x2dftml_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0_spec__1_spec__2(v_x_1571_, v___x_1584_, v_tail_1575_);
return v___x_1585_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0(lean_object* v_x_1588_, lean_object* v_x_1589_){
_start:
{
if (lean_obj_tag(v_x_1588_) == 0)
{
lean_object* v___x_1590_; 
lean_dec(v_x_1589_);
v___x_1590_ = lean_box(0);
return v___x_1590_;
}
else
{
lean_object* v_tail_1591_; 
v_tail_1591_ = lean_ctor_get(v_x_1588_, 1);
if (lean_obj_tag(v_tail_1591_) == 0)
{
lean_object* v_head_1592_; uint8_t v___x_1593_; lean_object* v___x_1594_; 
lean_dec(v_x_1589_);
v_head_1592_ = lean_ctor_get(v_x_1588_, 0);
lean_inc(v_head_1592_);
lean_dec_ref_known(v_x_1588_, 2);
v___x_1593_ = lean_unbox(v_head_1592_);
lean_dec(v_head_1592_);
v___x_1594_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0___lam__0(v___x_1593_);
return v___x_1594_;
}
else
{
lean_object* v_head_1595_; uint8_t v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_inc(v_tail_1591_);
v_head_1595_ = lean_ctor_get(v_x_1588_, 0);
lean_inc(v_head_1595_);
lean_dec_ref_known(v_x_1588_, 2);
v___x_1596_ = lean_unbox(v_head_1595_);
lean_dec(v_head_1595_);
v___x_1597_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0___lam__0(v___x_1596_);
v___x_1598_ = lp_lean_x2dftml_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0_spec__1(v_x_1589_, v___x_1597_, v_tail_1591_);
return v___x_1598_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__2));
v___x_1608_ = lean_string_length(v___x_1607_);
return v___x_1608_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = lean_obj_once(&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__5, &lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__5_once, _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__5);
v___x_1610_ = lean_nat_to_int(v___x_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg(lean_object* v_a_1615_){
_start:
{
if (lean_obj_tag(v_a_1615_) == 0)
{
lean_object* v___x_1616_; 
v___x_1616_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__1));
return v___x_1616_;
}
else
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; uint8_t v___x_1625_; lean_object* v___x_1626_; 
v___x_1617_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__3));
v___x_1618_ = lp_lean_x2dftml_Std_Format_joinSep___at___00List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0_spec__0(v_a_1615_, v___x_1617_);
v___x_1619_ = lean_obj_once(&lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__6, &lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__6_once, _init_lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__6);
v___x_1620_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__7));
v___x_1621_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
lean_ctor_set(v___x_1621_, 1, v___x_1618_);
v___x_1622_ = ((lean_object*)(lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg___closed__8));
v___x_1623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1619_);
lean_ctor_set(v___x_1624_, 1, v___x_1623_);
v___x_1625_ = 0;
v___x_1626_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1626_, 0, v___x_1624_);
lean_ctor_set_uint8(v___x_1626_, sizeof(void*)*1, v___x_1625_);
return v___x_1626_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr(lean_object* v_x_1639_, lean_object* v_prec_1640_){
_start:
{
lean_object* v___y_1642_; lean_object* v___y_1649_; 
switch(lean_obj_tag(v_x_1639_))
{
case 0:
{
lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = lean_unsigned_to_nat(1024u);
v___x_1656_ = lean_nat_dec_le(v___x_1655_, v_prec_1640_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; 
v___x_1657_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1649_ = v___x_1657_;
goto v___jp_1648_;
}
else
{
lean_object* v___x_1658_; 
v___x_1658_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1649_ = v___x_1658_;
goto v___jp_1648_;
}
}
case 1:
{
lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1659_ = lean_unsigned_to_nat(1024u);
v___x_1660_ = lean_nat_dec_le(v___x_1659_, v_prec_1640_);
if (v___x_1660_ == 0)
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1642_ = v___x_1661_;
goto v___jp_1641_;
}
else
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1642_ = v___x_1662_;
goto v___jp_1641_;
}
}
default: 
{
lean_object* v_phs_1663_; lean_object* v___y_1665_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v_phs_1663_ = lean_ctor_get(v_x_1639_, 0);
lean_inc(v_phs_1663_);
lean_dec_ref_known(v_x_1639_, 1);
v___x_1673_ = lean_unsigned_to_nat(1024u);
v___x_1674_ = lean_nat_dec_le(v___x_1673_, v_prec_1640_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; 
v___x_1675_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1665_ = v___x_1675_;
goto v___jp_1664_;
}
else
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1665_ = v___x_1676_;
goto v___jp_1664_;
}
v___jp_1664_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; uint8_t v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1666_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__6));
v___x_1667_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg(v_phs_1663_);
v___x_1668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
lean_inc(v___y_1665_);
v___x_1669_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___y_1665_);
lean_ctor_set(v___x_1669_, 1, v___x_1668_);
v___x_1670_ = 0;
v___x_1671_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set_uint8(v___x_1671_, sizeof(void*)*1, v___x_1670_);
v___x_1672_ = l_Repr_addAppParen(v___x_1671_, v_prec_1640_);
return v___x_1672_;
}
}
}
v___jp_1641_:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; uint8_t v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1643_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__1));
lean_inc(v___y_1642_);
v___x_1644_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___y_1642_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___x_1645_ = 0;
v___x_1646_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1646_, 0, v___x_1644_);
lean_ctor_set_uint8(v___x_1646_, sizeof(void*)*1, v___x_1645_);
v___x_1647_ = l_Repr_addAppParen(v___x_1646_, v_prec_1640_);
return v___x_1647_;
}
v___jp_1648_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1650_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___closed__3));
lean_inc(v___y_1649_);
v___x_1651_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___y_1649_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
v___x_1652_ = 0;
v___x_1653_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set_uint8(v___x_1653_, sizeof(void*)*1, v___x_1652_);
v___x_1654_ = l_Repr_addAppParen(v___x_1653_, v_prec_1640_);
return v___x_1654_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprMiShape_repr___boxed(lean_object* v_x_1677_, lean_object* v_prec_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = lp_lean_x2dftml_LeanFtml_instReprMiShape_repr(v_x_1677_, v_prec_1678_);
lean_dec(v_prec_1678_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0(lean_object* v_a_1680_, lean_object* v_n_1681_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___redArg(v_a_1680_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0___boxed(lean_object* v_a_1683_, lean_object* v_n_1684_){
_start:
{
lean_object* v_res_1685_; 
v_res_1685_ = lp_lean_x2dftml_List_repr___at___00LeanFtml_instReprMiShape_repr_spec__0(v_a_1683_, v_n_1684_);
lean_dec(v_n_1684_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorIdx___impl(lean_object* v_x_1688_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_obj_tag_nat(v_x_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorIdx___impl___boxed(lean_object* v_x_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorIdx___impl(v_x_1690_);
lean_dec_ref(v_x_1690_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(lean_object* v_t_1692_, lean_object* v_k_1693_){
_start:
{
switch(lean_obj_tag(v_t_1692_))
{
case 0:
{
lean_object* v_s_1694_; lean_object* v___x_1695_; 
v_s_1694_ = lean_ctor_get(v_t_1692_, 0);
lean_inc_ref(v_s_1694_);
lean_dec_ref_known(v_t_1692_, 1);
v___x_1695_ = lean_apply_1(v_k_1693_, v_s_1694_);
return v___x_1695_;
}
case 1:
{
uint8_t v_k_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v_k_1696_ = lean_ctor_get_uint8(v_t_1692_, 0);
lean_dec_ref_known(v_t_1692_, 0);
v___x_1697_ = lean_box(v_k_1696_);
v___x_1698_ = lean_apply_1(v_k_1693_, v___x_1697_);
return v___x_1698_;
}
default: 
{
lean_object* v_s_1699_; lean_object* v___x_1700_; 
v_s_1699_ = lean_ctor_get(v_t_1692_, 0);
lean_inc(v_s_1699_);
lean_dec_ref_known(v_t_1692_, 1);
v___x_1700_ = lean_apply_1(v_k_1693_, v_s_1699_);
return v___x_1700_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim(lean_object* v_motive_1701_, lean_object* v_ctorIdx_1702_, lean_object* v_t_1703_, lean_object* v_h_1704_, lean_object* v_k_1705_){
_start:
{
lean_object* v___x_1706_; 
v___x_1706_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(v_t_1703_, v_k_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___boxed(lean_object* v_motive_1707_, lean_object* v_ctorIdx_1708_, lean_object* v_t_1709_, lean_object* v_h_1710_, lean_object* v_k_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim(v_motive_1707_, v_ctorIdx_1708_, v_t_1709_, v_h_1710_, v_k_1711_);
lean_dec(v_ctorIdx_1708_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_code_elim___redArg(lean_object* v_t_1713_, lean_object* v_code_1714_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(v_t_1713_, v_code_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_code_elim(lean_object* v_motive_1716_, lean_object* v_t_1717_, lean_object* v_h_1718_, lean_object* v_code_1719_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(v_t_1717_, v_code_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_math_elim___redArg(lean_object* v_t_1721_, lean_object* v_math_1722_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(v_t_1721_, v_math_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_math_elim(lean_object* v_motive_1724_, lean_object* v_t_1725_, lean_object* v_h_1726_, lean_object* v_math_1727_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(v_t_1725_, v_math_1727_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_mathinline_elim___redArg(lean_object* v_t_1729_, lean_object* v_mathinline_1730_){
_start:
{
lean_object* v___x_1731_; 
v___x_1731_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(v_t_1729_, v_mathinline_1730_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CodemathShape_mathinline_elim(lean_object* v_motive_1732_, lean_object* v_t_1733_, lean_object* v_h_1734_, lean_object* v_mathinline_1735_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = lp_lean_x2dftml_LeanFtml_CodemathShape_ctorElim___redArg(v_t_1733_, v_mathinline_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape_decEq(lean_object* v_x_1737_, lean_object* v_x_1738_){
_start:
{
switch(lean_obj_tag(v_x_1737_))
{
case 0:
{
if (lean_obj_tag(v_x_1738_) == 0)
{
lean_object* v_s_1739_; lean_object* v_s_1740_; uint8_t v___x_1741_; 
v_s_1739_ = lean_ctor_get(v_x_1737_, 0);
lean_inc_ref(v_s_1739_);
lean_dec_ref_known(v_x_1737_, 1);
v_s_1740_ = lean_ctor_get(v_x_1738_, 0);
lean_inc_ref(v_s_1740_);
lean_dec_ref_known(v_x_1738_, 1);
v___x_1741_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodeShape_decEq(v_s_1739_, v_s_1740_);
lean_dec_ref(v_s_1740_);
lean_dec_ref(v_s_1739_);
return v___x_1741_;
}
else
{
uint8_t v___x_1742_; 
lean_dec_ref_known(v_x_1737_, 1);
lean_dec_ref(v_x_1738_);
v___x_1742_ = 0;
return v___x_1742_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1738_) == 1)
{
uint8_t v_k_1743_; uint8_t v_k_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; uint8_t v___x_1749_; 
v_k_1743_ = lean_ctor_get_uint8(v_x_1737_, 0);
lean_dec_ref_known(v_x_1737_, 0);
v_k_1744_ = lean_ctor_get_uint8(v_x_1738_, 0);
lean_dec_ref_known(v_x_1738_, 0);
v___x_1745_ = lean_box(v_k_1743_);
v___x_1746_ = lean_obj_tag_nat(v___x_1745_);
lean_dec(v___x_1745_);
v___x_1747_ = lean_box(v_k_1744_);
v___x_1748_ = lean_obj_tag_nat(v___x_1747_);
lean_dec(v___x_1747_);
v___x_1749_ = lean_nat_dec_eq(v___x_1746_, v___x_1748_);
return v___x_1749_;
}
else
{
uint8_t v___x_1750_; 
lean_dec_ref_known(v_x_1737_, 0);
lean_dec_ref(v_x_1738_);
v___x_1750_ = 0;
return v___x_1750_;
}
}
default: 
{
if (lean_obj_tag(v_x_1738_) == 2)
{
lean_object* v_s_1751_; lean_object* v_s_1752_; uint8_t v___x_1753_; 
v_s_1751_ = lean_ctor_get(v_x_1737_, 0);
lean_inc(v_s_1751_);
lean_dec_ref_known(v_x_1737_, 1);
v_s_1752_ = lean_ctor_get(v_x_1738_, 0);
lean_inc(v_s_1752_);
lean_dec_ref_known(v_x_1738_, 1);
v___x_1753_ = lp_lean_x2dftml_LeanFtml_instDecidableEqMiShape_decEq(v_s_1751_, v_s_1752_);
return v___x_1753_;
}
else
{
uint8_t v___x_1754_; 
lean_dec_ref_known(v_x_1737_, 1);
lean_dec_ref(v_x_1738_);
v___x_1754_ = 0;
return v___x_1754_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape_decEq___boxed(lean_object* v_x_1755_, lean_object* v_x_1756_){
_start:
{
uint8_t v_res_1757_; lean_object* v_r_1758_; 
v_res_1757_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape_decEq(v_x_1755_, v_x_1756_);
v_r_1758_ = lean_box(v_res_1757_);
return v_r_1758_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape(lean_object* v_x_1759_, lean_object* v_x_1760_){
_start:
{
uint8_t v___x_1761_; 
v___x_1761_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape_decEq(v_x_1759_, v_x_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape___boxed(lean_object* v_x_1762_, lean_object* v_x_1763_){
_start:
{
uint8_t v_res_1764_; lean_object* v_r_1765_; 
v_res_1764_ = lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathShape(v_x_1762_, v_x_1763_);
v_r_1765_ = lean_box(v_res_1764_);
return v_r_1765_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr(lean_object* v_x_1784_, lean_object* v_prec_1785_){
_start:
{
switch(lean_obj_tag(v_x_1784_))
{
case 0:
{
lean_object* v_s_1786_; lean_object* v___y_1788_; lean_object* v___x_1796_; uint8_t v___x_1797_; 
v_s_1786_ = lean_ctor_get(v_x_1784_, 0);
lean_inc_ref(v_s_1786_);
lean_dec_ref_known(v_x_1784_, 1);
v___x_1796_ = lean_unsigned_to_nat(1024u);
v___x_1797_ = lean_nat_dec_le(v___x_1796_, v_prec_1785_);
if (v___x_1797_ == 0)
{
lean_object* v___x_1798_; 
v___x_1798_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1788_ = v___x_1798_;
goto v___jp_1787_;
}
else
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1788_ = v___x_1799_;
goto v___jp_1787_;
}
v___jp_1787_:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; uint8_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1789_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__2));
v___x_1790_ = lp_lean_x2dftml_LeanFtml_instReprCodeShape_repr___redArg(v_s_1786_);
lean_dec_ref(v_s_1786_);
v___x_1791_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1789_);
lean_ctor_set(v___x_1791_, 1, v___x_1790_);
lean_inc(v___y_1788_);
v___x_1792_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___y_1788_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = 0;
v___x_1794_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1794_, 0, v___x_1792_);
lean_ctor_set_uint8(v___x_1794_, sizeof(void*)*1, v___x_1793_);
v___x_1795_ = l_Repr_addAppParen(v___x_1794_, v_prec_1785_);
return v___x_1795_;
}
}
case 1:
{
uint8_t v_k_1800_; lean_object* v___y_1802_; lean_object* v___x_1811_; uint8_t v___x_1812_; 
v_k_1800_ = lean_ctor_get_uint8(v_x_1784_, 0);
lean_dec_ref_known(v_x_1784_, 0);
v___x_1811_ = lean_unsigned_to_nat(1024u);
v___x_1812_ = lean_nat_dec_le(v___x_1811_, v_prec_1785_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; 
v___x_1813_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1802_ = v___x_1813_;
goto v___jp_1801_;
}
else
{
lean_object* v___x_1814_; 
v___x_1814_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1802_ = v___x_1814_;
goto v___jp_1801_;
}
v___jp_1801_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; uint8_t v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1803_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__5));
v___x_1804_ = lean_unsigned_to_nat(1024u);
v___x_1805_ = lp_lean_x2dftml_LeanFtml_instReprMathKind_repr(v_k_1800_, v___x_1804_);
v___x_1806_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1803_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
lean_inc(v___y_1802_);
v___x_1807_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___y_1802_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v___x_1808_ = 0;
v___x_1809_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1809_, 0, v___x_1807_);
lean_ctor_set_uint8(v___x_1809_, sizeof(void*)*1, v___x_1808_);
v___x_1810_ = l_Repr_addAppParen(v___x_1809_, v_prec_1785_);
return v___x_1810_;
}
}
default: 
{
lean_object* v_s_1815_; lean_object* v___y_1817_; lean_object* v___x_1826_; uint8_t v___x_1827_; 
v_s_1815_ = lean_ctor_get(v_x_1784_, 0);
lean_inc(v_s_1815_);
lean_dec_ref_known(v_x_1784_, 1);
v___x_1826_ = lean_unsigned_to_nat(1024u);
v___x_1827_ = lean_nat_dec_le(v___x_1826_, v_prec_1785_);
if (v___x_1827_ == 0)
{
lean_object* v___x_1828_; 
v___x_1828_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__38);
v___y_1817_ = v___x_1828_;
goto v___jp_1816_;
}
else
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39, &lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_instReprCodemathClass_repr___closed__39);
v___y_1817_ = v___x_1829_;
goto v___jp_1816_;
}
v___jp_1816_:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1818_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___closed__8));
v___x_1819_ = lean_unsigned_to_nat(1024u);
v___x_1820_ = lp_lean_x2dftml_LeanFtml_instReprMiShape_repr(v_s_1815_, v___x_1819_);
v___x_1821_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1818_);
lean_ctor_set(v___x_1821_, 1, v___x_1820_);
lean_inc(v___y_1817_);
v___x_1822_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___y_1817_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
v___x_1823_ = 0;
v___x_1824_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1824_, 0, v___x_1822_);
lean_ctor_set_uint8(v___x_1824_, sizeof(void*)*1, v___x_1823_);
v___x_1825_ = l_Repr_addAppParen(v___x_1824_, v_prec_1785_);
return v___x_1825_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr___boxed(lean_object* v_x_1830_, lean_object* v_prec_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = lp_lean_x2dftml_LeanFtml_instReprCodemathShape_repr(v_x_1830_, v_prec_1831_);
lean_dec(v_prec_1831_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBranches(lean_object* v_s_1851_){
_start:
{
uint8_t v_body_1852_; uint8_t v_trail_1853_; lean_object* v___y_1855_; 
v_body_1852_ = lean_ctor_get_uint8(v_s_1851_, 0);
v_trail_1853_ = lean_ctor_get_uint8(v_s_1851_, 1);
if (v_body_1852_ == 0)
{
lean_object* v___x_1860_; 
v___x_1860_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBranches___closed__2));
v___y_1855_ = v___x_1860_;
goto v___jp_1854_;
}
else
{
lean_object* v___x_1861_; 
v___x_1861_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBranches___closed__3));
v___y_1855_ = v___x_1861_;
goto v___jp_1854_;
}
v___jp_1854_:
{
if (v_trail_1853_ == 0)
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1856_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBranches___closed__0));
lean_inc(v___y_1855_);
v___x_1857_ = l_List_appendTR___redArg(v___y_1855_, v___x_1856_);
return v___x_1857_;
}
else
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1858_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBranches___closed__1));
lean_inc(v___y_1855_);
v___x_1859_ = l_List_appendTR___redArg(v___y_1855_, v___x_1858_);
return v___x_1859_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBranches___boxed(lean_object* v_s_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = lp_lean_x2dftml_LeanFtml_codeBranches(v_s_1862_);
lean_dec_ref(v_s_1862_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBranches(uint8_t v_x_1880_){
_start:
{
switch(v_x_1880_)
{
case 0:
{
lean_object* v___x_1881_; 
v___x_1881_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathBranches___closed__0));
return v___x_1881_;
}
case 1:
{
lean_object* v___x_1882_; 
v___x_1882_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathBranches___closed__1));
return v___x_1882_;
}
case 2:
{
lean_object* v___x_1883_; 
v___x_1883_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathBranches___closed__2));
return v___x_1883_;
}
default: 
{
lean_object* v___x_1884_; 
v___x_1884_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathBranches___closed__3));
return v___x_1884_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathBranches___boxed(lean_object* v_x_1885_){
_start:
{
uint8_t v_x_72__boxed_1886_; lean_object* v_res_1887_; 
v_x_72__boxed_1886_ = lean_unbox(v_x_1885_);
v_res_1887_ = lp_lean_x2dftml_LeanFtml_mathBranches(v_x_72__boxed_1886_);
return v_res_1887_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_miPhClass(uint8_t v_x_1888_){
_start:
{
switch(v_x_1888_)
{
case 0:
{
uint8_t v___x_1889_; 
v___x_1889_ = 10;
return v___x_1889_;
}
case 1:
{
uint8_t v___x_1890_; 
v___x_1890_ = 11;
return v___x_1890_;
}
case 2:
{
uint8_t v___x_1891_; 
v___x_1891_ = 12;
return v___x_1891_;
}
case 3:
{
uint8_t v___x_1892_; 
v___x_1892_ = 13;
return v___x_1892_;
}
case 4:
{
uint8_t v___x_1893_; 
v___x_1893_ = 14;
return v___x_1893_;
}
case 5:
{
uint8_t v___x_1894_; 
v___x_1894_ = 15;
return v___x_1894_;
}
case 6:
{
uint8_t v___x_1895_; 
v___x_1895_ = 16;
return v___x_1895_;
}
case 7:
{
uint8_t v___x_1896_; 
v___x_1896_ = 17;
return v___x_1896_;
}
default: 
{
uint8_t v___x_1897_; 
v___x_1897_ = 18;
return v___x_1897_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miPhClass___boxed(lean_object* v_x_1898_){
_start:
{
uint8_t v_x_67__boxed_1899_; uint8_t v_res_1900_; lean_object* v_r_1901_; 
v_x_67__boxed_1899_ = lean_unbox(v_x_1898_);
v_res_1900_ = lp_lean_x2dftml_LeanFtml_miPhClass(v_x_67__boxed_1899_);
v_r_1901_ = lean_box(v_res_1900_);
return v_r_1901_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_miIsSuppress(uint8_t v_x_1902_){
_start:
{
switch(v_x_1902_)
{
case 4:
{
uint8_t v___x_1903_; 
v___x_1903_ = 1;
return v___x_1903_;
}
case 5:
{
uint8_t v___x_1904_; 
v___x_1904_ = 1;
return v___x_1904_;
}
case 6:
{
uint8_t v___x_1905_; 
v___x_1905_ = 1;
return v___x_1905_;
}
case 7:
{
uint8_t v___x_1906_; 
v___x_1906_ = 1;
return v___x_1906_;
}
case 8:
{
uint8_t v___x_1907_; 
v___x_1907_ = 1;
return v___x_1907_;
}
default: 
{
uint8_t v___x_1908_; 
v___x_1908_ = 0;
return v___x_1908_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miIsSuppress___boxed(lean_object* v_x_1909_){
_start:
{
uint8_t v_x_37__boxed_1910_; uint8_t v_res_1911_; lean_object* v_r_1912_; 
v_x_37__boxed_1910_ = lean_unbox(v_x_1909_);
v_res_1911_ = lp_lean_x2dftml_LeanFtml_miIsSuppress(v_x_37__boxed_1910_);
v_r_1912_ = lean_box(v_res_1911_);
return v_r_1912_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_miClassifyWalk_spec__1(lean_object* v_a_1913_, lean_object* v_a_1914_){
_start:
{
if (lean_obj_tag(v_a_1913_) == 0)
{
lean_object* v___x_1915_; 
v___x_1915_ = l_List_reverse___redArg(v_a_1914_);
return v___x_1915_;
}
else
{
lean_object* v_head_1916_; lean_object* v_tail_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1928_; 
v_head_1916_ = lean_ctor_get(v_a_1913_, 0);
v_tail_1917_ = lean_ctor_get(v_a_1913_, 1);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_a_1913_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1919_ = v_a_1913_;
v_isShared_1920_ = v_isSharedCheck_1928_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_tail_1917_);
lean_inc(v_head_1916_);
lean_dec(v_a_1913_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1928_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
uint8_t v___x_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1925_; 
v___x_1921_ = lean_unbox(v_head_1916_);
lean_dec(v_head_1916_);
v___x_1922_ = lp_lean_x2dftml_LeanFtml_miPhClass(v___x_1921_);
v___x_1923_ = lean_box(v___x_1922_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 1, v_a_1914_);
lean_ctor_set(v___x_1919_, 0, v___x_1923_);
v___x_1925_ = v___x_1919_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1923_);
lean_ctor_set(v_reuseFailAlloc_1927_, 1, v_a_1914_);
v___x_1925_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
v_a_1913_ = v_tail_1917_;
v_a_1914_ = v___x_1925_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_miClassifyWalk_spec__0(lean_object* v_x_1929_){
_start:
{
if (lean_obj_tag(v_x_1929_) == 0)
{
lean_object* v___x_1930_; 
v___x_1930_ = lean_box(0);
return v___x_1930_;
}
else
{
lean_object* v_head_1931_; lean_object* v_tail_1932_; uint8_t v___x_1933_; uint8_t v___x_1934_; 
v_head_1931_ = lean_ctor_get(v_x_1929_, 0);
v_tail_1932_ = lean_ctor_get(v_x_1929_, 1);
v___x_1933_ = lean_unbox(v_head_1931_);
v___x_1934_ = lp_lean_x2dftml_LeanFtml_miIsSuppress(v___x_1933_);
if (v___x_1934_ == 0)
{
v_x_1929_ = v_tail_1932_;
goto _start;
}
else
{
lean_object* v___x_1936_; 
lean_inc(v_head_1931_);
v___x_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1936_, 0, v_head_1931_);
return v___x_1936_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_miClassifyWalk_spec__0___boxed(lean_object* v_x_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_miClassifyWalk_spec__0(v_x_1937_);
lean_dec(v_x_1937_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miClassifyWalk(lean_object* v_phs_1943_){
_start:
{
lean_object* v___x_1944_; 
v___x_1944_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_miClassifyWalk_spec__0(v_phs_1943_);
if (lean_obj_tag(v___x_1944_) == 0)
{
if (lean_obj_tag(v_phs_1943_) == 0)
{
lean_object* v___x_1945_; 
v___x_1945_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_miClassifyWalk___closed__0));
return v___x_1945_;
}
else
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = lean_box(0);
v___x_1947_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_miClassifyWalk_spec__1(v_phs_1943_, v___x_1946_);
return v___x_1947_;
}
}
else
{
lean_object* v_val_1948_; uint8_t v___x_1949_; uint8_t v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
lean_dec(v_phs_1943_);
v_val_1948_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_val_1948_);
lean_dec_ref_known(v___x_1944_, 1);
v___x_1949_ = lean_unbox(v_val_1948_);
lean_dec(v_val_1948_);
v___x_1950_ = lp_lean_x2dftml_LeanFtml_miPhClass(v___x_1949_);
v___x_1951_ = lean_box(0);
v___x_1952_ = lean_box(v___x_1950_);
v___x_1953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
lean_ctor_set(v___x_1953_, 1, v___x_1951_);
return v___x_1953_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miBranches(lean_object* v_x_1958_){
_start:
{
switch(lean_obj_tag(v_x_1958_))
{
case 0:
{
lean_object* v___x_1959_; 
v___x_1959_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_miBranches___closed__0));
return v___x_1959_;
}
case 1:
{
lean_object* v___x_1960_; 
v___x_1960_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_miClassifyWalk___closed__0));
return v___x_1960_;
}
default: 
{
lean_object* v_phs_1961_; lean_object* v___x_1962_; 
v_phs_1961_ = lean_ctor_get(v_x_1958_, 0);
lean_inc(v_phs_1961_);
lean_dec_ref_known(v_x_1958_, 1);
v___x_1962_ = lp_lean_x2dftml_LeanFtml_miClassifyWalk(v_phs_1961_);
return v___x_1962_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClassify(lean_object* v_x_1963_){
_start:
{
switch(lean_obj_tag(v_x_1963_))
{
case 0:
{
lean_object* v_s_1964_; lean_object* v___x_1965_; 
v_s_1964_ = lean_ctor_get(v_x_1963_, 0);
lean_inc_ref(v_s_1964_);
lean_dec_ref_known(v_x_1963_, 1);
v___x_1965_ = lp_lean_x2dftml_LeanFtml_codeBranches(v_s_1964_);
lean_dec_ref(v_s_1964_);
return v___x_1965_;
}
case 1:
{
uint8_t v_k_1966_; lean_object* v___x_1967_; 
v_k_1966_ = lean_ctor_get_uint8(v_x_1963_, 0);
lean_dec_ref_known(v_x_1963_, 0);
v___x_1967_ = lp_lean_x2dftml_LeanFtml_mathBranches(v_k_1966_);
return v___x_1967_;
}
default: 
{
lean_object* v_s_1968_; lean_object* v___x_1969_; 
v_s_1968_ = lean_ctor_get(v_x_1963_, 0);
lean_inc(v_s_1968_);
lean_dec_ref_known(v_x_1963_, 1);
v___x_1969_ = lp_lean_x2dftml_LeanFtml_miBranches(v_s_1968_);
return v___x_1969_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_cmClassMemDecidable___closed__0(void){
_start:
{
lean_object* v___x_1970_; lean_object* v___f_1971_; 
v___x_1970_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_instDecidableEqCodemathClass___boxed), 2, 0);
v___f_1971_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1971_, 0, v___x_1970_);
return v___f_1971_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_cmClassMemDecidable(lean_object* v_s_1972_, uint8_t v_c_1973_){
_start:
{
lean_object* v___f_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; 
v___f_1974_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_cmClassMemDecidable___closed__0, &lp_lean_x2dftml_LeanFtml_cmClassMemDecidable___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_cmClassMemDecidable___closed__0);
v___x_1975_ = lp_lean_x2dftml_LeanFtml_cmClassify(v_s_1972_);
v___x_1976_ = lean_box(v_c_1973_);
v___x_1977_ = l_List_elem___redArg(v___f_1974_, v___x_1976_, v___x_1975_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClassMemDecidable___boxed(lean_object* v_s_1978_, lean_object* v_c_1979_){
_start:
{
uint8_t v_c_boxed_1980_; uint8_t v_res_1981_; lean_object* v_r_1982_; 
v_c_boxed_1980_ = lean_unbox(v_c_1979_);
v_res_1981_ = lp_lean_x2dftml_LeanFtml_cmClassMemDecidable(v_s_1978_, v_c_boxed_1980_);
v_r_1982_ = lean_box(v_res_1981_);
return v_r_1982_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miClassifyWalk_match__4_splitter___redArg(lean_object* v_x_1983_, lean_object* v_h__1_1984_, lean_object* v_h__2_1985_){
_start:
{
if (lean_obj_tag(v_x_1983_) == 0)
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
lean_dec(v_h__1_1984_);
v___x_1986_ = lean_box(0);
v___x_1987_ = lean_apply_1(v_h__2_1985_, v___x_1986_);
return v___x_1987_;
}
else
{
lean_object* v_val_1988_; lean_object* v___x_1989_; 
lean_dec(v_h__2_1985_);
v_val_1988_ = lean_ctor_get(v_x_1983_, 0);
lean_inc(v_val_1988_);
lean_dec_ref_known(v_x_1983_, 1);
v___x_1989_ = lean_apply_1(v_h__1_1984_, v_val_1988_);
return v___x_1989_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miClassifyWalk_match__4_splitter(lean_object* v_motive_1990_, lean_object* v_x_1991_, lean_object* v_h__1_1992_, lean_object* v_h__2_1993_){
_start:
{
if (lean_obj_tag(v_x_1991_) == 0)
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_dec(v_h__1_1992_);
v___x_1994_ = lean_box(0);
v___x_1995_ = lean_apply_1(v_h__2_1993_, v___x_1994_);
return v___x_1995_;
}
else
{
lean_object* v_val_1996_; lean_object* v___x_1997_; 
lean_dec(v_h__2_1993_);
v_val_1996_ = lean_ctor_get(v_x_1991_, 0);
lean_inc(v_val_1996_);
lean_dec_ref_known(v_x_1991_, 1);
v___x_1997_ = lean_apply_1(v_h__1_1992_, v_val_1996_);
return v___x_1997_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miClassifyWalk_match__1_splitter___redArg(lean_object* v_phs_1998_, lean_object* v_h__1_1999_, lean_object* v_h__2_2000_){
_start:
{
if (lean_obj_tag(v_phs_1998_) == 0)
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
lean_dec(v_h__2_2000_);
v___x_2001_ = lean_box(0);
v___x_2002_ = lean_apply_1(v_h__1_1999_, v___x_2001_);
return v___x_2002_;
}
else
{
lean_object* v___x_2003_; 
lean_dec(v_h__1_1999_);
v___x_2003_ = lean_apply_2(v_h__2_2000_, v_phs_1998_, lean_box(0));
return v___x_2003_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miClassifyWalk_match__1_splitter(lean_object* v_motive_2004_, lean_object* v_phs_2005_, lean_object* v_h__1_2006_, lean_object* v_h__2_2007_){
_start:
{
if (lean_obj_tag(v_phs_2005_) == 0)
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
lean_dec(v_h__2_2007_);
v___x_2008_ = lean_box(0);
v___x_2009_ = lean_apply_1(v_h__1_2006_, v___x_2008_);
return v___x_2009_;
}
else
{
lean_object* v___x_2010_; 
lean_dec(v_h__1_2006_);
v___x_2010_ = lean_apply_2(v_h__2_2007_, v_phs_2005_, lean_box(0));
return v___x_2010_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmWitness(uint8_t v_x_2110_){
_start:
{
switch(v_x_2110_)
{
case 0:
{
lean_object* v___x_2113_; 
v___x_2113_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__3));
return v___x_2113_;
}
case 2:
{
lean_object* v___x_2114_; 
v___x_2114_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__5));
return v___x_2114_;
}
case 4:
{
lean_object* v___x_2115_; 
v___x_2115_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__6));
return v___x_2115_;
}
case 5:
{
lean_object* v___x_2116_; 
v___x_2116_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__7));
return v___x_2116_;
}
case 6:
{
lean_object* v___x_2117_; 
v___x_2117_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__8));
return v___x_2117_;
}
case 7:
{
lean_object* v___x_2118_; 
v___x_2118_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__9));
return v___x_2118_;
}
case 8:
{
lean_object* v___x_2119_; 
v___x_2119_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__10));
return v___x_2119_;
}
case 9:
{
lean_object* v___x_2120_; 
v___x_2120_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__11));
return v___x_2120_;
}
case 10:
{
lean_object* v___x_2121_; 
v___x_2121_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__14));
return v___x_2121_;
}
case 11:
{
lean_object* v___x_2122_; 
v___x_2122_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__17));
return v___x_2122_;
}
case 12:
{
lean_object* v___x_2123_; 
v___x_2123_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__20));
return v___x_2123_;
}
case 13:
{
lean_object* v___x_2124_; 
v___x_2124_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__23));
return v___x_2124_;
}
case 14:
{
lean_object* v___x_2125_; 
v___x_2125_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__26));
return v___x_2125_;
}
case 15:
{
lean_object* v___x_2126_; 
v___x_2126_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__29));
return v___x_2126_;
}
case 16:
{
lean_object* v___x_2127_; 
v___x_2127_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__32));
return v___x_2127_;
}
case 17:
{
lean_object* v___x_2128_; 
v___x_2128_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__35));
return v___x_2128_;
}
case 18:
{
lean_object* v___x_2129_; 
v___x_2129_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__38));
return v___x_2129_;
}
default: 
{
goto v___jp_2111_;
}
}
v___jp_2111_:
{
lean_object* v___x_2112_; 
v___x_2112_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmWitness___closed__1));
return v___x_2112_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmWitness___boxed(lean_object* v_x_2130_){
_start:
{
uint8_t v_x_413__boxed_2131_; lean_object* v_res_2132_; 
v_x_413__boxed_2131_ = lean_unbox(v_x_2130_);
v_res_2132_ = lp_lean_x2dftml_LeanFtml_cmWitness(v_x_413__boxed_2131_);
return v_res_2132_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_codeInBoundary(lean_object* v_opts_2133_){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; uint8_t v___x_2136_; 
v___x_2134_ = lp_lean_x2dftml_LeanFtml_codeLangs;
v___x_2135_ = lp_lean_x2dftml_LeanFtml_codeType(v_opts_2133_);
v___x_2136_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_codeBoundaryName_spec__0(v___x_2135_, v___x_2134_);
lean_dec(v___x_2135_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeInBoundary___boxed(lean_object* v_opts_2137_){
_start:
{
uint8_t v_res_2138_; lean_object* v_r_2139_; 
v_res_2138_ = lp_lean_x2dftml_LeanFtml_codeInBoundary(v_opts_2137_);
lean_dec(v_opts_2137_);
v_r_2139_ = lean_box(v_res_2138_);
return v_r_2139_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__1(void){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2141_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__0));
v___x_2142_ = l_String_toListImpl(v___x_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeShapeOf(lean_object* v_opts_2143_, uint8_t v_trailWs_2144_){
_start:
{
uint8_t v___y_2146_; uint8_t v___y_2147_; uint8_t v___y_2151_; uint8_t v___x_2154_; 
v___x_2154_ = lp_lean_x2dftml_LeanFtml_codeInBoundary(v_opts_2143_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v_body_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; uint8_t v___x_2160_; 
v___x_2155_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__1, &lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_codeShapeOf___closed__1);
v___x_2156_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_2143_, v___x_2155_);
v_body_2157_ = lp_lean_x2dftml_LeanFtml_wikidotTrimCodeBody(v___x_2156_);
v___x_2158_ = lp_lean_x2dftml_LeanFtml_phpTrimBytes(v_body_2157_);
lean_dec(v_body_2157_);
v___x_2159_ = lean_box(0);
v___x_2160_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v___x_2158_, v___x_2159_);
lean_dec(v___x_2158_);
if (v___x_2160_ == 0)
{
uint8_t v___x_2161_; 
v___x_2161_ = 0;
v___y_2151_ = v___x_2161_;
goto v___jp_2150_;
}
else
{
uint8_t v___x_2162_; 
v___x_2162_ = 1;
v___y_2151_ = v___x_2162_;
goto v___jp_2150_;
}
}
else
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_box(0);
return v___x_2163_;
}
v___jp_2145_:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2148_, 0, v___y_2146_);
lean_ctor_set_uint8(v___x_2148_, 1, v___y_2147_);
v___x_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
return v___x_2149_;
}
v___jp_2150_:
{
if (v_trailWs_2144_ == 0)
{
uint8_t v___x_2152_; 
v___x_2152_ = 1;
v___y_2146_ = v___y_2151_;
v___y_2147_ = v___x_2152_;
goto v___jp_2145_;
}
else
{
uint8_t v___x_2153_; 
v___x_2153_ = 0;
v___y_2146_ = v___y_2151_;
v___y_2147_ = v___x_2153_;
goto v___jp_2145_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeShapeOf___boxed(lean_object* v_opts_2164_, lean_object* v_trailWs_2165_){
_start:
{
uint8_t v_trailWs_boxed_2166_; lean_object* v_res_2167_; 
v_trailWs_boxed_2166_ = lean_unbox(v_trailWs_2165_);
v_res_2167_ = lp_lean_x2dftml_LeanFtml_codeShapeOf(v_opts_2164_, v_trailWs_boxed_2166_);
lean_dec(v_opts_2164_);
return v_res_2167_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathKindOf___closed__1(void){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2169_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathKindOf___closed__0));
v___x_2170_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2169_);
return v___x_2170_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathKindOf(lean_object* v_g2_2171_, lean_object* v_content_2172_){
_start:
{
lean_object* v_content_2173_; uint8_t v___x_2174_; 
v_content_2173_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_content_2172_);
v___x_2174_ = lp_lean_x2dftml_LeanFtml_mathGuard_go(v_content_2173_);
if (v___x_2174_ == 0)
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2175_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_g2_2171_);
v___x_2176_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathKindOf___closed__1, &lp_lean_x2dftml_LeanFtml_mathKindOf___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_mathKindOf___closed__1);
v___x_2177_ = lp_lean_x2dftml_LeanFtml_lookupB(v___x_2175_, v___x_2176_);
lean_dec(v___x_2175_);
if (lean_obj_tag(v___x_2177_) == 0)
{
uint8_t v___x_2178_; 
v___x_2178_ = 1;
return v___x_2178_;
}
else
{
lean_object* v_val_2179_; uint8_t v___x_2180_; 
v_val_2179_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_val_2179_);
lean_dec_ref_known(v___x_2177_, 1);
v___x_2180_ = lp_lean_x2dftml_LeanFtml_mathTypeValid(v_val_2179_);
lean_dec(v_val_2179_);
if (v___x_2180_ == 0)
{
uint8_t v___x_2181_; 
v___x_2181_ = 3;
return v___x_2181_;
}
else
{
uint8_t v___x_2182_; 
v___x_2182_ = 2;
return v___x_2182_;
}
}
}
else
{
uint8_t v___x_2183_; 
v___x_2183_ = 0;
return v___x_2183_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathKindOf___boxed(lean_object* v_g2_2184_, lean_object* v_content_2185_){
_start:
{
uint8_t v_res_2186_; lean_object* v_r_2187_; 
v_res_2186_ = lp_lean_x2dftml_LeanFtml_mathKindOf(v_g2_2184_, v_content_2185_);
lean_dec(v_content_2185_);
lean_dec(v_g2_2184_);
v_r_2187_ = lean_box(v_res_2186_);
return v_r_2187_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_miPhOf(uint8_t v_present_2193_, lean_object* v_rule_2194_, uint8_t v_hasSource_2195_, uint8_t v_seen_2196_){
_start:
{
if (v_present_2193_ == 0)
{
uint8_t v___x_2197_; 
v___x_2197_ = 0;
return v___x_2197_;
}
else
{
if (v_seen_2196_ == 0)
{
lean_object* v___x_2198_; uint8_t v___x_2199_; 
v___x_2198_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_miPhOf___closed__0));
v___x_2199_ = lean_string_dec_eq(v_rule_2194_, v___x_2198_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; uint8_t v___x_2201_; 
v___x_2200_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_miPhOf___closed__1));
v___x_2201_ = lean_string_dec_eq(v_rule_2194_, v___x_2200_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; uint8_t v___x_2203_; 
v___x_2202_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_miPhOf___closed__2));
v___x_2203_ = lean_string_dec_eq(v_rule_2194_, v___x_2202_);
if (v___x_2203_ == 0)
{
lean_object* v___x_2204_; uint8_t v___x_2205_; 
v___x_2204_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_miPhOf___closed__3));
v___x_2205_ = lean_string_dec_eq(v_rule_2194_, v___x_2204_);
if (v___x_2205_ == 0)
{
lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2206_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_miPhOf___closed__4));
v___x_2207_ = lean_string_dec_eq(v_rule_2194_, v___x_2206_);
if (v___x_2207_ == 0)
{
if (v_hasSource_2195_ == 0)
{
uint8_t v___x_2208_; 
v___x_2208_ = 3;
return v___x_2208_;
}
else
{
uint8_t v___x_2209_; 
v___x_2209_ = 2;
return v___x_2209_;
}
}
else
{
uint8_t v___x_2210_; 
v___x_2210_ = 8;
return v___x_2210_;
}
}
else
{
uint8_t v___x_2211_; 
v___x_2211_ = 7;
return v___x_2211_;
}
}
else
{
uint8_t v___x_2212_; 
v___x_2212_ = 6;
return v___x_2212_;
}
}
else
{
uint8_t v___x_2213_; 
v___x_2213_ = 5;
return v___x_2213_;
}
}
else
{
uint8_t v___x_2214_; 
v___x_2214_ = 4;
return v___x_2214_;
}
}
else
{
uint8_t v___x_2215_; 
v___x_2215_ = 1;
return v___x_2215_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_miPhOf___boxed(lean_object* v_present_2216_, lean_object* v_rule_2217_, lean_object* v_hasSource_2218_, lean_object* v_seen_2219_){
_start:
{
uint8_t v_present_boxed_2220_; uint8_t v_hasSource_boxed_2221_; uint8_t v_seen_boxed_2222_; uint8_t v_res_2223_; lean_object* v_r_2224_; 
v_present_boxed_2220_ = lean_unbox(v_present_2216_);
v_hasSource_boxed_2221_ = lean_unbox(v_hasSource_2218_);
v_seen_boxed_2222_ = lean_unbox(v_seen_2219_);
v_res_2223_ = lp_lean_x2dftml_LeanFtml_miPhOf(v_present_boxed_2220_, v_rule_2217_, v_hasSource_boxed_2221_, v_seen_boxed_2222_);
lean_dec_ref(v_rule_2217_);
v_r_2224_ = lean_box(v_res_2223_);
return v_r_2224_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorIdx___impl(lean_object* v_x_2225_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_obj_tag_nat(v_x_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorIdx___impl___boxed(lean_object* v_x_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorIdx___impl(v_x_2227_);
lean_dec_ref(v_x_2227_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(lean_object* v_t_2229_, lean_object* v_k_2230_){
_start:
{
switch(lean_obj_tag(v_t_2229_))
{
case 0:
{
lean_object* v_opts_2231_; uint8_t v_trailWs_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v_opts_2231_ = lean_ctor_get(v_t_2229_, 0);
lean_inc(v_opts_2231_);
v_trailWs_2232_ = lean_ctor_get_uint8(v_t_2229_, sizeof(void*)*1);
lean_dec_ref_known(v_t_2229_, 1);
v___x_2233_ = lean_box(v_trailWs_2232_);
v___x_2234_ = lean_apply_2(v_k_2230_, v_opts_2231_, v___x_2233_);
return v___x_2234_;
}
case 1:
{
lean_object* v_g2_2235_; lean_object* v_content_2236_; lean_object* v___x_2237_; 
v_g2_2235_ = lean_ctor_get(v_t_2229_, 0);
lean_inc(v_g2_2235_);
v_content_2236_ = lean_ctor_get(v_t_2229_, 1);
lean_inc(v_content_2236_);
lean_dec_ref_known(v_t_2229_, 2);
v___x_2237_ = lean_apply_2(v_k_2230_, v_g2_2235_, v_content_2236_);
return v___x_2237_;
}
default: 
{
lean_object* v_s_2238_; lean_object* v___x_2239_; 
v_s_2238_ = lean_ctor_get(v_t_2229_, 0);
lean_inc(v_s_2238_);
lean_dec_ref_known(v_t_2229_, 1);
v___x_2239_ = lean_apply_1(v_k_2230_, v_s_2238_);
return v___x_2239_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorElim(lean_object* v_motive_2240_, lean_object* v_ctorIdx_2241_, lean_object* v_t_2242_, lean_object* v_h_2243_, lean_object* v_k_2244_){
_start:
{
lean_object* v___x_2245_; 
v___x_2245_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(v_t_2242_, v_k_2244_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___boxed(lean_object* v_motive_2246_, lean_object* v_ctorIdx_2247_, lean_object* v_t_2248_, lean_object* v_h_2249_, lean_object* v_k_2250_){
_start:
{
lean_object* v_res_2251_; 
v_res_2251_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorElim(v_motive_2246_, v_ctorIdx_2247_, v_t_2248_, v_h_2249_, v_k_2250_);
lean_dec(v_ctorIdx_2247_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_code_elim___redArg(lean_object* v_t_2252_, lean_object* v_code_2253_){
_start:
{
lean_object* v___x_2254_; 
v___x_2254_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(v_t_2252_, v_code_2253_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_code_elim(lean_object* v_motive_2255_, lean_object* v_t_2256_, lean_object* v_h_2257_, lean_object* v_code_2258_){
_start:
{
lean_object* v___x_2259_; 
v___x_2259_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(v_t_2256_, v_code_2258_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_math_elim___redArg(lean_object* v_t_2260_, lean_object* v_math_2261_){
_start:
{
lean_object* v___x_2262_; 
v___x_2262_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(v_t_2260_, v_math_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_math_elim(lean_object* v_motive_2263_, lean_object* v_t_2264_, lean_object* v_h_2265_, lean_object* v_math_2266_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(v_t_2264_, v_math_2266_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_mi_elim___redArg(lean_object* v_t_2268_, lean_object* v_mi_2269_){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(v_t_2268_, v_mi_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_CmInput_mi_elim(lean_object* v_motive_2271_, lean_object* v_t_2272_, lean_object* v_h_2273_, lean_object* v_mi_2274_){
_start:
{
lean_object* v___x_2275_; 
v___x_2275_ = lp_lean_x2dftml_LeanFtml_CmInput_ctorElim___redArg(v_t_2272_, v_mi_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_cmInputInFamily(lean_object* v_x_2276_){
_start:
{
if (lean_obj_tag(v_x_2276_) == 0)
{
lean_object* v_opts_2277_; uint8_t v___x_2278_; 
v_opts_2277_ = lean_ctor_get(v_x_2276_, 0);
v___x_2278_ = lp_lean_x2dftml_LeanFtml_codeInBoundary(v_opts_2277_);
if (v___x_2278_ == 0)
{
uint8_t v___x_2279_; 
v___x_2279_ = 1;
return v___x_2279_;
}
else
{
uint8_t v___x_2280_; 
v___x_2280_ = 0;
return v___x_2280_;
}
}
else
{
uint8_t v___x_2281_; 
v___x_2281_ = 1;
return v___x_2281_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmInputInFamily___boxed(lean_object* v_x_2282_){
_start:
{
uint8_t v_res_2283_; lean_object* v_r_2284_; 
v_res_2283_ = lp_lean_x2dftml_LeanFtml_cmInputInFamily(v_x_2282_);
lean_dec_ref(v_x_2282_);
v_r_2284_ = lean_box(v_res_2283_);
return v_r_2284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmShapeOf(lean_object* v_x_2285_){
_start:
{
switch(lean_obj_tag(v_x_2285_))
{
case 0:
{
lean_object* v_opts_2286_; uint8_t v_trailWs_2287_; lean_object* v___x_2288_; 
v_opts_2286_ = lean_ctor_get(v_x_2285_, 0);
lean_inc(v_opts_2286_);
v_trailWs_2287_ = lean_ctor_get_uint8(v_x_2285_, sizeof(void*)*1);
lean_dec_ref_known(v_x_2285_, 1);
v___x_2288_ = lp_lean_x2dftml_LeanFtml_codeShapeOf(v_opts_2286_, v_trailWs_2287_);
lean_dec(v_opts_2286_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_box(0);
return v___x_2289_;
}
else
{
lean_object* v_val_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2298_; 
v_val_2290_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2292_ = v___x_2288_;
v_isShared_2293_ = v_isSharedCheck_2298_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_val_2290_);
lean_dec(v___x_2288_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2298_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2294_; lean_object* v___x_2296_; 
v___x_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2294_, 0, v_val_2290_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 0, v___x_2294_);
v___x_2296_ = v___x_2292_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v___x_2294_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
case 1:
{
lean_object* v_g2_2299_; lean_object* v_content_2300_; uint8_t v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_g2_2299_ = lean_ctor_get(v_x_2285_, 0);
lean_inc(v_g2_2299_);
v_content_2300_ = lean_ctor_get(v_x_2285_, 1);
lean_inc(v_content_2300_);
lean_dec_ref_known(v_x_2285_, 2);
v___x_2301_ = lp_lean_x2dftml_LeanFtml_mathKindOf(v_g2_2299_, v_content_2300_);
lean_dec(v_content_2300_);
lean_dec(v_g2_2299_);
v___x_2302_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2302_, 0, v___x_2301_);
v___x_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
return v___x_2303_;
}
default: 
{
lean_object* v_s_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2312_; 
v_s_2304_ = lean_ctor_get(v_x_2285_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_x_2285_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2306_ = v_x_2285_;
v_isShared_2307_ = v_isSharedCheck_2312_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_s_2304_);
lean_dec(v_x_2285_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2312_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_s_2304_);
v___x_2309_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2310_; 
v___x_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
return v___x_2310_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClassOf(lean_object* v_i_2313_){
_start:
{
lean_object* v___x_2314_; 
v___x_2314_ = lp_lean_x2dftml_LeanFtml_cmShapeOf(v_i_2313_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v___x_2315_; 
v___x_2315_ = lean_box(0);
return v___x_2315_;
}
else
{
lean_object* v_val_2316_; lean_object* v___x_2317_; 
v_val_2316_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_val_2316_);
lean_dec_ref_known(v___x_2314_, 1);
v___x_2317_ = lp_lean_x2dftml_LeanFtml_cmClassify(v_val_2316_);
return v___x_2317_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_cmMemClass_spec__0(uint8_t v_a_2318_, lean_object* v_x_2319_){
_start:
{
if (lean_obj_tag(v_x_2319_) == 0)
{
uint8_t v___x_2320_; 
v___x_2320_ = 0;
return v___x_2320_;
}
else
{
lean_object* v_head_2321_; lean_object* v_tail_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; uint8_t v___x_2326_; 
v_head_2321_ = lean_ctor_get(v_x_2319_, 0);
v_tail_2322_ = lean_ctor_get(v_x_2319_, 1);
v___x_2323_ = lean_box(v_a_2318_);
v___x_2324_ = lean_obj_tag_nat(v___x_2323_);
lean_dec(v___x_2323_);
v___x_2325_ = lean_obj_tag_nat(v_head_2321_);
v___x_2326_ = lean_nat_dec_eq(v___x_2324_, v___x_2325_);
if (v___x_2326_ == 0)
{
v_x_2319_ = v_tail_2322_;
goto _start;
}
else
{
return v___x_2326_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_cmMemClass_spec__0___boxed(lean_object* v_a_2328_, lean_object* v_x_2329_){
_start:
{
uint8_t v_a_boxed_2330_; uint8_t v_res_2331_; lean_object* v_r_2332_; 
v_a_boxed_2330_ = lean_unbox(v_a_2328_);
v_res_2331_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_cmMemClass_spec__0(v_a_boxed_2330_, v_x_2329_);
lean_dec(v_x_2329_);
v_r_2332_ = lean_box(v_res_2331_);
return v_r_2332_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_cmMemClass(uint8_t v_c_2333_, lean_object* v_i_2334_){
_start:
{
lean_object* v___x_2335_; uint8_t v___x_2336_; 
v___x_2335_ = lp_lean_x2dftml_LeanFtml_cmClassOf(v_i_2334_);
v___x_2336_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_cmMemClass_spec__0(v_c_2333_, v___x_2335_);
lean_dec(v___x_2335_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmMemClass___boxed(lean_object* v_c_2337_, lean_object* v_i_2338_){
_start:
{
uint8_t v_c_boxed_2339_; uint8_t v_res_2340_; lean_object* v_r_2341_; 
v_c_boxed_2339_ = lean_unbox(v_c_2337_);
v_res_2340_ = lp_lean_x2dftml_LeanFtml_cmMemClass(v_c_boxed_2339_, v_i_2338_);
v_r_2341_ = lean_box(v_res_2340_);
return v_r_2341_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClaimed(lean_object* v_whole_2344_, lean_object* v_g3_2345_){
_start:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2346_ = l_List_lengthTR___redArg(v_whole_2344_);
v___x_2347_ = l_List_lengthTR___redArg(v_g3_2345_);
v___x_2348_ = lean_nat_sub(v___x_2346_, v___x_2347_);
lean_dec(v___x_2347_);
lean_dec(v___x_2346_);
v___x_2349_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_cmClaimed___closed__0));
lean_inc(v_whole_2344_);
v___x_2350_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_whole_2344_, v_whole_2344_, v___x_2348_, v___x_2349_);
lean_dec(v_whole_2344_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_cmClaimed___boxed(lean_object* v_whole_2351_, lean_object* v_g3_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = lp_lean_x2dftml_LeanFtml_cmClaimed(v_whole_2351_, v_g3_2352_);
lean_dec(v_g3_2352_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter___redArg(uint8_t v_x_2354_, lean_object* v_h__1_2355_, lean_object* v_h__2_2356_, lean_object* v_h__3_2357_, lean_object* v_h__4_2358_, lean_object* v_h__5_2359_, lean_object* v_h__6_2360_){
_start:
{
switch(v_x_2354_)
{
case 4:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; 
lean_dec(v_h__6_2360_);
lean_dec(v_h__5_2359_);
lean_dec(v_h__4_2358_);
lean_dec(v_h__3_2357_);
lean_dec(v_h__2_2356_);
v___x_2361_ = lean_box(0);
v___x_2362_ = lean_apply_1(v_h__1_2355_, v___x_2361_);
return v___x_2362_;
}
case 5:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
lean_dec(v_h__6_2360_);
lean_dec(v_h__5_2359_);
lean_dec(v_h__4_2358_);
lean_dec(v_h__3_2357_);
lean_dec(v_h__1_2355_);
v___x_2363_ = lean_box(0);
v___x_2364_ = lean_apply_1(v_h__2_2356_, v___x_2363_);
return v___x_2364_;
}
case 6:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
lean_dec(v_h__6_2360_);
lean_dec(v_h__5_2359_);
lean_dec(v_h__4_2358_);
lean_dec(v_h__2_2356_);
lean_dec(v_h__1_2355_);
v___x_2365_ = lean_box(0);
v___x_2366_ = lean_apply_1(v_h__3_2357_, v___x_2365_);
return v___x_2366_;
}
case 7:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
lean_dec(v_h__6_2360_);
lean_dec(v_h__5_2359_);
lean_dec(v_h__3_2357_);
lean_dec(v_h__2_2356_);
lean_dec(v_h__1_2355_);
v___x_2367_ = lean_box(0);
v___x_2368_ = lean_apply_1(v_h__4_2358_, v___x_2367_);
return v___x_2368_;
}
case 8:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
lean_dec(v_h__6_2360_);
lean_dec(v_h__4_2358_);
lean_dec(v_h__3_2357_);
lean_dec(v_h__2_2356_);
lean_dec(v_h__1_2355_);
v___x_2369_ = lean_box(0);
v___x_2370_ = lean_apply_1(v_h__5_2359_, v___x_2369_);
return v___x_2370_;
}
default: 
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
lean_dec(v_h__5_2359_);
lean_dec(v_h__4_2358_);
lean_dec(v_h__3_2357_);
lean_dec(v_h__2_2356_);
lean_dec(v_h__1_2355_);
v___x_2371_ = lean_box(v_x_2354_);
v___x_2372_ = lean_apply_6(v_h__6_2360_, v___x_2371_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2372_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter___redArg___boxed(lean_object* v_x_2373_, lean_object* v_h__1_2374_, lean_object* v_h__2_2375_, lean_object* v_h__3_2376_, lean_object* v_h__4_2377_, lean_object* v_h__5_2378_, lean_object* v_h__6_2379_){
_start:
{
uint8_t v_x_33__boxed_2380_; lean_object* v_res_2381_; 
v_x_33__boxed_2380_ = lean_unbox(v_x_2373_);
v_res_2381_ = lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter___redArg(v_x_33__boxed_2380_, v_h__1_2374_, v_h__2_2375_, v_h__3_2376_, v_h__4_2377_, v_h__5_2378_, v_h__6_2379_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter(lean_object* v_motive_2382_, uint8_t v_x_2383_, lean_object* v_h__1_2384_, lean_object* v_h__2_2385_, lean_object* v_h__3_2386_, lean_object* v_h__4_2387_, lean_object* v_h__5_2388_, lean_object* v_h__6_2389_){
_start:
{
switch(v_x_2383_)
{
case 4:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
lean_dec(v_h__6_2389_);
lean_dec(v_h__5_2388_);
lean_dec(v_h__4_2387_);
lean_dec(v_h__3_2386_);
lean_dec(v_h__2_2385_);
v___x_2390_ = lean_box(0);
v___x_2391_ = lean_apply_1(v_h__1_2384_, v___x_2390_);
return v___x_2391_;
}
case 5:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
lean_dec(v_h__6_2389_);
lean_dec(v_h__5_2388_);
lean_dec(v_h__4_2387_);
lean_dec(v_h__3_2386_);
lean_dec(v_h__1_2384_);
v___x_2392_ = lean_box(0);
v___x_2393_ = lean_apply_1(v_h__2_2385_, v___x_2392_);
return v___x_2393_;
}
case 6:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_dec(v_h__6_2389_);
lean_dec(v_h__5_2388_);
lean_dec(v_h__4_2387_);
lean_dec(v_h__2_2385_);
lean_dec(v_h__1_2384_);
v___x_2394_ = lean_box(0);
v___x_2395_ = lean_apply_1(v_h__3_2386_, v___x_2394_);
return v___x_2395_;
}
case 7:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; 
lean_dec(v_h__6_2389_);
lean_dec(v_h__5_2388_);
lean_dec(v_h__3_2386_);
lean_dec(v_h__2_2385_);
lean_dec(v_h__1_2384_);
v___x_2396_ = lean_box(0);
v___x_2397_ = lean_apply_1(v_h__4_2387_, v___x_2396_);
return v___x_2397_;
}
case 8:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
lean_dec(v_h__6_2389_);
lean_dec(v_h__4_2387_);
lean_dec(v_h__3_2386_);
lean_dec(v_h__2_2385_);
lean_dec(v_h__1_2384_);
v___x_2398_ = lean_box(0);
v___x_2399_ = lean_apply_1(v_h__5_2388_, v___x_2398_);
return v___x_2399_;
}
default: 
{
lean_object* v___x_2400_; lean_object* v___x_2401_; 
lean_dec(v_h__5_2388_);
lean_dec(v_h__4_2387_);
lean_dec(v_h__3_2386_);
lean_dec(v_h__2_2385_);
lean_dec(v_h__1_2384_);
v___x_2400_ = lean_box(v_x_2383_);
v___x_2401_ = lean_apply_6(v_h__6_2389_, v___x_2400_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2401_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter___boxed(lean_object* v_motive_2402_, lean_object* v_x_2403_, lean_object* v_h__1_2404_, lean_object* v_h__2_2405_, lean_object* v_h__3_2406_, lean_object* v_h__4_2407_, lean_object* v_h__5_2408_, lean_object* v_h__6_2409_){
_start:
{
uint8_t v_x_60__boxed_2410_; lean_object* v_res_2411_; 
v_x_60__boxed_2410_ = lean_unbox(v_x_2403_);
v_res_2411_ = lp_lean_x2dftml___private_LeanFtml_CoverageCodemath_0__LeanFtml_miIsSuppress_match__1_splitter(v_motive_2402_, v_x_60__boxed_2410_, v_h__1_2404_, v_h__2_2405_, v_h__3_2406_, v_h__4_2407_, v_h__5_2408_, v_h__6_2409_);
return v_res_2411_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ServingRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Inline1Rules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_CoverageCodemath(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_ServingRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Inline1Rules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
