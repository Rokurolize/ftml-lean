// Lean compiler output
// Module: LeanFtml.IncludeGrammar
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
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isBlankC(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isBlankC___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isPageC(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isPageC___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countGt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countGt___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastGtEnd(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastGtEnd___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_leadRun_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_leadRun_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_leadRun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_leadRun___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_leadRun___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_leadRun(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanPrefix(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_startsWithCI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_startsWithCI___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_parsePageRef_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_parsePageRef_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_parsePageRef_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_parsePageRef_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parsePageRef(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isBlankC(uint32_t v_c_1_){
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
return v___x_5_;
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isBlankC___boxed(lean_object* v_c_6_){
_start:
{
uint32_t v_c_boxed_7_; uint8_t v_res_8_; lean_object* v_r_9_; 
v_c_boxed_7_ = lean_unbox_uint32(v_c_6_);
lean_dec(v_c_6_);
v_res_8_ = lp_lean_x2dftml_LeanFtml_isBlankC(v_c_boxed_7_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isPageC(uint32_t v_c_10_){
_start:
{
uint32_t v___x_11_; uint8_t v___x_12_; 
v___x_11_ = 32;
v___x_12_ = lean_uint32_dec_eq(v_c_10_, v___x_11_);
if (v___x_12_ == 0)
{
uint32_t v___x_13_; uint8_t v___x_14_; 
v___x_13_ = 10;
v___x_14_ = lean_uint32_dec_eq(v_c_10_, v___x_13_);
if (v___x_14_ == 0)
{
uint32_t v___x_15_; uint8_t v___x_16_; 
v___x_15_ = 9;
v___x_16_ = lean_uint32_dec_eq(v_c_10_, v___x_15_);
if (v___x_16_ == 0)
{
uint32_t v___x_17_; uint8_t v___x_18_; 
v___x_17_ = 91;
v___x_18_ = lean_uint32_dec_eq(v_c_10_, v___x_17_);
if (v___x_18_ == 0)
{
uint32_t v___x_19_; uint8_t v___x_20_; 
v___x_19_ = 124;
v___x_20_ = lean_uint32_dec_eq(v_c_10_, v___x_19_);
if (v___x_20_ == 0)
{
uint32_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = 93;
v___x_22_ = lean_uint32_dec_eq(v_c_10_, v___x_21_);
if (v___x_22_ == 0)
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 34;
v___x_24_ = lean_uint32_dec_eq(v_c_10_, v___x_23_);
if (v___x_24_ == 0)
{
uint32_t v___x_25_; uint8_t v___x_26_; 
v___x_25_ = 39;
v___x_26_ = lean_uint32_dec_eq(v_c_10_, v___x_25_);
if (v___x_26_ == 0)
{
uint8_t v___x_27_; 
v___x_27_ = 1;
return v___x_27_;
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
else
{
return v___x_18_;
}
}
else
{
return v___x_16_;
}
}
else
{
return v___x_14_;
}
}
else
{
return v___x_12_;
}
}
else
{
uint8_t v___x_28_; 
v___x_28_ = 0;
return v___x_28_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isPageC___boxed(lean_object* v_c_29_){
_start:
{
uint32_t v_c_boxed_30_; uint8_t v_res_31_; lean_object* v_r_32_; 
v_c_boxed_30_ = lean_unbox_uint32(v_c_29_);
lean_dec(v_c_29_);
v_res_31_ = lp_lean_x2dftml_LeanFtml_isPageC(v_c_boxed_30_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countGt(lean_object* v_x_33_){
_start:
{
if (lean_obj_tag(v_x_33_) == 0)
{
lean_object* v___x_34_; 
v___x_34_ = lean_unsigned_to_nat(0u);
return v___x_34_;
}
else
{
lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v___y_38_; uint32_t v___x_41_; uint32_t v___x_42_; uint8_t v___x_43_; 
v_head_35_ = lean_ctor_get(v_x_33_, 0);
v_tail_36_ = lean_ctor_get(v_x_33_, 1);
v___x_41_ = 62;
v___x_42_ = lean_unbox_uint32(v_head_35_);
v___x_43_ = lean_uint32_dec_eq(v___x_42_, v___x_41_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(0u);
v___y_38_ = v___x_44_;
goto v___jp_37_;
}
else
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(1u);
v___y_38_ = v___x_45_;
goto v___jp_37_;
}
v___jp_37_:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lp_lean_x2dftml_LeanFtml_countGt(v_tail_36_);
v___x_40_ = lean_nat_add(v___y_38_, v___x_39_);
lean_dec(v___x_39_);
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countGt___boxed(lean_object* v_x_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = lp_lean_x2dftml_LeanFtml_countGt(v_x_46_);
lean_dec(v_x_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastGtEnd(lean_object* v_x_48_){
_start:
{
if (lean_obj_tag(v_x_48_) == 0)
{
lean_object* v___x_49_; 
v___x_49_ = lean_unsigned_to_nat(0u);
return v___x_49_;
}
else
{
lean_object* v_head_50_; lean_object* v_tail_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v_head_50_ = lean_ctor_get(v_x_48_, 0);
v_tail_51_ = lean_ctor_get(v_x_48_, 1);
v___x_52_ = lp_lean_x2dftml_LeanFtml_lastGtEnd(v_tail_51_);
v___x_53_ = lean_unsigned_to_nat(0u);
v___x_54_ = lean_nat_dec_eq(v___x_52_, v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_unsigned_to_nat(1u);
v___x_56_ = lean_nat_add(v___x_52_, v___x_55_);
lean_dec(v___x_52_);
return v___x_56_;
}
else
{
uint32_t v___x_57_; uint32_t v___x_58_; uint8_t v___x_59_; 
lean_dec(v___x_52_);
v___x_57_ = 62;
v___x_58_ = lean_unbox_uint32(v_head_50_);
v___x_59_ = lean_uint32_dec_eq(v___x_58_, v___x_57_);
if (v___x_59_ == 0)
{
return v___x_53_;
}
else
{
lean_object* v___x_60_; 
v___x_60_ = lean_unsigned_to_nat(1u);
return v___x_60_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lastGtEnd___boxed(lean_object* v_x_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_lean_x2dftml_LeanFtml_lastGtEnd(v_x_61_);
lean_dec(v_x_61_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_leadRun_spec__0(lean_object* v_l_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
if (lean_obj_tag(v_a_64_) == 0)
{
lean_dec_ref(v_a_65_);
lean_inc(v_l_63_);
return v_l_63_;
}
else
{
lean_object* v_head_66_; lean_object* v_tail_67_; uint32_t v___x_71_; uint32_t v___x_72_; uint8_t v___x_73_; 
v_head_66_ = lean_ctor_get(v_a_64_, 0);
lean_inc(v_head_66_);
v_tail_67_ = lean_ctor_get(v_a_64_, 1);
lean_inc(v_tail_67_);
lean_dec_ref_known(v_a_64_, 2);
v___x_71_ = 62;
v___x_72_ = lean_unbox_uint32(v_head_66_);
v___x_73_ = lean_uint32_dec_eq(v___x_72_, v___x_71_);
if (v___x_73_ == 0)
{
uint32_t v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_unbox_uint32(v_head_66_);
v___x_75_ = lp_lean_x2dftml_LeanFtml_isBlankC(v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
lean_dec(v_tail_67_);
lean_dec(v_head_66_);
v___x_76_ = lean_array_to_list(v_a_65_);
return v___x_76_;
}
else
{
goto v___jp_68_;
}
}
else
{
goto v___jp_68_;
}
v___jp_68_:
{
lean_object* v___x_69_; 
v___x_69_ = lean_array_push(v_a_65_, v_head_66_);
v_a_64_ = v_tail_67_;
v_a_65_ = v___x_69_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_leadRun_spec__0___boxed(lean_object* v_l_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_leadRun_spec__0(v_l_77_, v_a_78_, v_a_79_);
lean_dec(v_l_77_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_leadRun(lean_object* v_l_83_){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_leadRun___closed__0));
lean_inc(v_l_83_);
v___x_85_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_leadRun_spec__0(v_l_83_, v_l_83_, v___x_84_);
lean_dec(v_l_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scanPrefix(lean_object* v_l_86_){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_87_ = lp_lean_x2dftml_LeanFtml_leadRun(v_l_86_);
v___x_88_ = lp_lean_x2dftml_LeanFtml_lastGtEnd(v___x_87_);
v___x_89_ = lp_lean_x2dftml_LeanFtml_countGt(v___x_87_);
lean_dec(v___x_87_);
v___x_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_startsWithCI(lean_object* v_text_91_, lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_92_) == 0)
{
uint8_t v___x_93_; 
v___x_93_ = 1;
return v___x_93_;
}
else
{
if (lean_obj_tag(v_text_91_) == 0)
{
uint8_t v___x_94_; 
v___x_94_ = 0;
return v___x_94_;
}
else
{
lean_object* v_head_95_; lean_object* v_tail_96_; lean_object* v_head_97_; lean_object* v_tail_98_; uint32_t v___y_100_; uint32_t v___y_101_; uint32_t v___y_105_; uint32_t v___x_117_; uint32_t v___x_118_; uint8_t v___x_119_; 
v_head_95_ = lean_ctor_get(v_x_92_, 0);
v_tail_96_ = lean_ctor_get(v_x_92_, 1);
v_head_97_ = lean_ctor_get(v_text_91_, 0);
v_tail_98_ = lean_ctor_get(v_text_91_, 1);
v___x_117_ = 65;
v___x_118_ = lean_unbox_uint32(v_head_97_);
v___x_119_ = lean_uint32_dec_le(v___x_117_, v___x_118_);
if (v___x_119_ == 0)
{
uint32_t v___x_120_; 
v___x_120_ = lean_unbox_uint32(v_head_97_);
v___y_105_ = v___x_120_;
goto v___jp_104_;
}
else
{
uint32_t v___x_121_; uint32_t v___x_122_; uint8_t v___x_123_; 
v___x_121_ = 90;
v___x_122_ = lean_unbox_uint32(v_head_97_);
v___x_123_ = lean_uint32_dec_le(v___x_122_, v___x_121_);
if (v___x_123_ == 0)
{
uint32_t v___x_124_; 
v___x_124_ = lean_unbox_uint32(v_head_97_);
v___y_105_ = v___x_124_;
goto v___jp_104_;
}
else
{
uint32_t v___x_125_; uint32_t v___x_126_; uint32_t v___x_127_; 
v___x_125_ = 32;
v___x_126_ = lean_unbox_uint32(v_head_97_);
v___x_127_ = lean_uint32_add(v___x_126_, v___x_125_);
v___y_105_ = v___x_127_;
goto v___jp_104_;
}
}
v___jp_99_:
{
uint8_t v___x_102_; 
v___x_102_ = lean_uint32_dec_eq(v___y_100_, v___y_101_);
if (v___x_102_ == 0)
{
return v___x_102_;
}
else
{
v_text_91_ = v_tail_98_;
v_x_92_ = v_tail_96_;
goto _start;
}
}
v___jp_104_:
{
uint32_t v___x_106_; uint32_t v___x_107_; uint8_t v___x_108_; 
v___x_106_ = 65;
v___x_107_ = lean_unbox_uint32(v_head_95_);
v___x_108_ = lean_uint32_dec_le(v___x_106_, v___x_107_);
if (v___x_108_ == 0)
{
uint32_t v___x_109_; 
v___x_109_ = lean_unbox_uint32(v_head_95_);
v___y_100_ = v___y_105_;
v___y_101_ = v___x_109_;
goto v___jp_99_;
}
else
{
uint32_t v___x_110_; uint32_t v___x_111_; uint8_t v___x_112_; 
v___x_110_ = 90;
v___x_111_ = lean_unbox_uint32(v_head_95_);
v___x_112_ = lean_uint32_dec_le(v___x_111_, v___x_110_);
if (v___x_112_ == 0)
{
uint32_t v___x_113_; 
v___x_113_ = lean_unbox_uint32(v_head_95_);
v___y_100_ = v___y_105_;
v___y_101_ = v___x_113_;
goto v___jp_99_;
}
else
{
uint32_t v___x_114_; uint32_t v___x_115_; uint32_t v___x_116_; 
v___x_114_ = 32;
v___x_115_ = lean_unbox_uint32(v_head_95_);
v___x_116_ = lean_uint32_add(v___x_115_, v___x_114_);
v___y_100_ = v___y_105_;
v___y_101_ = v___x_116_;
goto v___jp_99_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_startsWithCI___boxed(lean_object* v_text_128_, lean_object* v_x_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = lp_lean_x2dftml_LeanFtml_startsWithCI(v_text_128_, v_x_129_);
lean_dec(v_x_129_);
lean_dec(v_text_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_parsePageRef_spec__1(lean_object* v_x_132_){
_start:
{
if (lean_obj_tag(v_x_132_) == 0)
{
return v_x_132_;
}
else
{
lean_object* v_head_133_; lean_object* v_tail_134_; uint32_t v___x_135_; uint8_t v___x_136_; 
v_head_133_ = lean_ctor_get(v_x_132_, 0);
v_tail_134_ = lean_ctor_get(v_x_132_, 1);
v___x_135_ = lean_unbox_uint32(v_head_133_);
v___x_136_ = lp_lean_x2dftml_LeanFtml_isPageC(v___x_135_);
if (v___x_136_ == 0)
{
lean_inc_ref(v_x_132_);
return v_x_132_;
}
else
{
v_x_132_ = v_tail_134_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_parsePageRef_spec__1___boxed(lean_object* v_x_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_parsePageRef_spec__1(v_x_138_);
lean_dec(v_x_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_parsePageRef_spec__0(lean_object* v_l_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
if (lean_obj_tag(v_a_141_) == 0)
{
lean_dec_ref(v_a_142_);
lean_inc(v_l_140_);
return v_l_140_;
}
else
{
lean_object* v_head_143_; lean_object* v_tail_144_; uint32_t v___x_145_; uint8_t v___x_146_; 
v_head_143_ = lean_ctor_get(v_a_141_, 0);
lean_inc(v_head_143_);
v_tail_144_ = lean_ctor_get(v_a_141_, 1);
lean_inc(v_tail_144_);
lean_dec_ref_known(v_a_141_, 2);
v___x_145_ = lean_unbox_uint32(v_head_143_);
v___x_146_ = lp_lean_x2dftml_LeanFtml_isPageC(v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
lean_dec(v_tail_144_);
lean_dec(v_head_143_);
v___x_147_ = lean_array_to_list(v_a_142_);
return v___x_147_;
}
else
{
lean_object* v___x_148_; 
v___x_148_ = lean_array_push(v_a_142_, v_head_143_);
v_a_141_ = v_tail_144_;
v_a_142_ = v___x_148_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_parsePageRef_spec__0___boxed(lean_object* v_l_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_parsePageRef_spec__0(v_l_150_, v_a_151_, v_a_152_);
lean_dec(v_l_150_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parsePageRef(lean_object* v_l_154_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_155_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_leadRun___closed__0));
lean_inc(v_l_154_);
v___x_156_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_parsePageRef_spec__0(v_l_154_, v_l_154_, v___x_155_);
v___x_157_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_parsePageRef_spec__1(v_l_154_);
lean_dec(v_l_154_);
v___x_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_156_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
return v___x_158_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_IncludeGrammar(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
