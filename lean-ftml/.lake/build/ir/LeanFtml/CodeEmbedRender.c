// Lean compiler output
// Module: LeanFtml.CodeEmbedRender
// Imports: public import Init public meta import Init public import LeanFtml.NotesRender public import LeanFtml.CodeEmbedRules public import LeanFtml.Pipeline
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryName(lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_parsePcre(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_convCRLF(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_ParseState_ofSource(lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_pipelineFull;
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_runRules_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR47(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR47___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_codeBoundaryOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_codeBoundaryOf___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryOf___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_boundaryNamesIn_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_boundaryNamesIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderWithR47_spec__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_renderWithR47___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_dispatchRenderR41___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_renderWithR47___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderWithR47___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWithR47(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR47___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR47___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR47(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 0, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = ";^<iframe(\\s+[a-z0-9_]+\\s*=\\s*['\"][^'\"]*['\"])+>\\s*</iframe>$;si"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anyiframeFixture;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR47(uint8_t v_a_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR41(v_a_1_, v_a_2_, v_a_3_, v_a_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR47___boxed(lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
uint8_t v_a_7__boxed_10_; lean_object* v_res_11_; 
v_a_7__boxed_10_ = lean_unbox(v_a_6_);
v_res_11_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR47(v_a_7__boxed_10_, v_a_7_, v_a_8_, v_a_9_);
lean_dec_ref(v_a_8_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryOf(lean_object* v_entry_13_){
_start:
{
lean_object* v_rule_14_; lean_object* v_opts_15_; lean_object* v___x_16_; uint8_t v___x_17_; 
v_rule_14_ = lean_ctor_get(v_entry_13_, 0);
v_opts_15_ = lean_ctor_get(v_entry_13_, 1);
v___x_16_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_codeBoundaryOf___closed__0));
v___x_17_ = lean_string_dec_eq(v_rule_14_, v___x_16_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; 
v___x_18_ = lean_box(0);
return v___x_18_;
}
else
{
lean_object* v___x_19_; 
v___x_19_ = lp_lean_x2dftml_LeanFtml_codeBoundaryName(v_opts_15_);
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_codeBoundaryOf___boxed(lean_object* v_entry_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lp_lean_x2dftml_LeanFtml_codeBoundaryOf(v_entry_20_);
lean_dec_ref(v_entry_20_);
return v_res_21_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0_spec__0(lean_object* v_a_22_, lean_object* v_x_23_){
_start:
{
if (lean_obj_tag(v_x_23_) == 0)
{
uint8_t v___x_24_; 
v___x_24_ = 0;
return v___x_24_;
}
else
{
lean_object* v_head_25_; lean_object* v_tail_26_; uint8_t v___x_27_; 
v_head_25_ = lean_ctor_get(v_x_23_, 0);
v_tail_26_ = lean_ctor_get(v_x_23_, 1);
v___x_27_ = lean_string_dec_eq(v_a_22_, v_head_25_);
if (v___x_27_ == 0)
{
v_x_23_ = v_tail_26_;
goto _start;
}
else
{
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0_spec__0___boxed(lean_object* v_a_29_, lean_object* v_x_30_){
_start:
{
uint8_t v_res_31_; lean_object* v_r_32_; 
v_res_31_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0_spec__0(v_a_29_, v_x_30_);
lean_dec(v_x_30_);
lean_dec_ref(v_a_29_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0(lean_object* v_xs_33_, lean_object* v_x_34_){
_start:
{
uint8_t v___x_35_; 
v___x_35_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0_spec__0(v_x_34_, v_xs_33_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = lean_box(0);
v___x_37_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_37_, 0, v_x_34_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
v___x_38_ = l_List_appendTR___redArg(v_xs_33_, v___x_37_);
return v___x_38_;
}
else
{
lean_dec_ref(v_x_34_);
return v_xs_33_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_boundaryNamesIn_spec__1(lean_object* v_lookup_39_, lean_object* v_x_40_, lean_object* v_x_41_){
_start:
{
if (lean_obj_tag(v_x_41_) == 0)
{
lean_dec_ref(v_lookup_39_);
return v_x_40_;
}
else
{
lean_object* v_head_42_; 
v_head_42_ = lean_ctor_get(v_x_41_, 0);
if (lean_obj_tag(v_head_42_) == 0)
{
lean_object* v_tail_43_; 
v_tail_43_ = lean_ctor_get(v_x_41_, 1);
lean_inc(v_tail_43_);
lean_dec_ref_known(v_x_41_, 2);
v_x_41_ = v_tail_43_;
goto _start;
}
else
{
lean_object* v_tail_45_; lean_object* v_a_46_; lean_object* v___x_47_; 
lean_inc_ref(v_head_42_);
v_tail_45_ = lean_ctor_get(v_x_41_, 1);
lean_inc(v_tail_45_);
lean_dec_ref_known(v_x_41_, 2);
v_a_46_ = lean_ctor_get(v_head_42_, 0);
lean_inc(v_a_46_);
lean_dec_ref_known(v_head_42_, 1);
lean_inc_ref(v_lookup_39_);
v___x_47_ = lean_apply_1(v_lookup_39_, v_a_46_);
if (lean_obj_tag(v___x_47_) == 0)
{
v_x_41_ = v_tail_45_;
goto _start;
}
else
{
lean_object* v_val_49_; lean_object* v___x_50_; 
v_val_49_ = lean_ctor_get(v___x_47_, 0);
lean_inc(v_val_49_);
lean_dec_ref_known(v___x_47_, 1);
v___x_50_ = lp_lean_x2dftml_LeanFtml_codeBoundaryOf(v_val_49_);
lean_dec(v_val_49_);
if (lean_obj_tag(v___x_50_) == 0)
{
v_x_41_ = v_tail_45_;
goto _start;
}
else
{
lean_object* v_val_52_; lean_object* v___x_53_; 
v_val_52_ = lean_ctor_get(v___x_50_, 0);
lean_inc(v_val_52_);
lean_dec_ref_known(v___x_50_, 1);
v___x_53_ = lp_lean_x2dftml_LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0(v_x_40_, v_val_52_);
v_x_40_ = v___x_53_;
v_x_41_ = v_tail_45_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_boundaryNamesIn(lean_object* v_lookup_55_, lean_object* v_work_56_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_box(0);
v___x_58_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_boundaryNamesIn_spec__1(v_lookup_55_, v___x_57_, v_work_56_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderWithR47_spec__0(lean_object* v_x_59_, lean_object* v_x_60_){
_start:
{
if (lean_obj_tag(v_x_60_) == 0)
{
return v_x_59_;
}
else
{
lean_object* v_head_61_; lean_object* v_tail_62_; lean_object* v___x_63_; 
v_head_61_ = lean_ctor_get(v_x_60_, 0);
lean_inc(v_head_61_);
v_tail_62_ = lean_ctor_get(v_x_60_, 1);
lean_inc(v_tail_62_);
lean_dec_ref_known(v_x_60_, 2);
v___x_63_ = lp_lean_x2dftml_LeanFtml_pushUnique___at___00LeanFtml_boundaryNamesIn_spec__0(v_x_59_, v_head_61_);
v_x_59_ = v___x_63_;
v_x_60_ = v_tail_62_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWithR47(lean_object* v_lookup_66_, lean_object* v_conf_67_, lean_object* v_work_68_, lean_object* v_doc_69_){
_start:
{
lean_object* v___f_70_; lean_object* v_base_71_; lean_object* v_output_72_; lean_object* v_unmirrored_73_; lean_object* v_missingKeys_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_83_; 
v___f_70_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderWithR47___closed__0));
lean_inc(v_work_68_);
lean_inc_ref(v_lookup_66_);
v_base_71_ = lp_lean_x2dftml_LeanFtml_renderWith(v___f_70_, v_lookup_66_, v_conf_67_, v_work_68_, v_doc_69_);
v_output_72_ = lean_ctor_get(v_base_71_, 0);
v_unmirrored_73_ = lean_ctor_get(v_base_71_, 1);
v_missingKeys_74_ = lean_ctor_get(v_base_71_, 2);
v_isSharedCheck_83_ = !lean_is_exclusive(v_base_71_);
if (v_isSharedCheck_83_ == 0)
{
v___x_76_ = v_base_71_;
v_isShared_77_ = v_isSharedCheck_83_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_missingKeys_74_);
lean_inc(v_unmirrored_73_);
lean_inc(v_output_72_);
lean_dec(v_base_71_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_83_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_81_; 
v___x_78_ = lp_lean_x2dftml_LeanFtml_boundaryNamesIn(v_lookup_66_, v_work_68_);
v___x_79_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderWithR47_spec__0(v_unmirrored_73_, v___x_78_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 1, v___x_79_);
v___x_81_ = v___x_76_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_output_72_);
lean_ctor_set(v_reuseFailAlloc_82_, 1, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_82_, 2, v_missingKeys_74_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR47___lam__0(lean_object* v_tokens_84_, lean_object* v_k_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_List_get_x3fInternal___redArg(v_tokens_84_, v_k_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR47___lam__0___boxed(lean_object* v_tokens_87_, lean_object* v_k_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = lp_lean_x2dftml_LeanFtml_renderStateR47___lam__0(v_tokens_87_, v_k_88_);
lean_dec(v_tokens_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR47(lean_object* v_conf_90_, lean_object* v_st_91_){
_start:
{
lean_object* v_work_92_; lean_object* v_tokens_93_; lean_object* v_doc_94_; lean_object* v___f_95_; lean_object* v___x_96_; 
v_work_92_ = lean_ctor_get(v_st_91_, 0);
lean_inc(v_work_92_);
v_tokens_93_ = lean_ctor_get(v_st_91_, 1);
lean_inc(v_tokens_93_);
v_doc_94_ = lean_ctor_get(v_st_91_, 2);
lean_inc_ref(v_doc_94_);
lean_dec_ref(v_st_91_);
v___f_95_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_renderStateR47___lam__0___boxed), 2, 1);
lean_closure_set(v___f_95_, 0, v_tokens_93_);
v___x_96_ = lp_lean_x2dftml_LeanFtml_renderWithR47(v___f_95_, v_conf_90_, v_work_92_, v_doc_94_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCodeEmbedE2E(lean_object* v_conf_104_, lean_object* v_tags_105_, lean_object* v_source_106_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v_work_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_125_; 
v___x_107_ = lp_lean_x2dftml_LeanFtml_convCRLF(v_source_106_);
v___x_108_ = lp_lean_x2dftml_LeanFtml_ParseState_ofSource(v___x_107_);
v_work_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_125_ == 0)
{
lean_object* v_unused_126_; lean_object* v_unused_127_; lean_object* v_unused_128_; 
v_unused_126_ = lean_ctor_get(v___x_108_, 3);
lean_dec(v_unused_126_);
v_unused_127_ = lean_ctor_get(v___x_108_, 2);
lean_dec(v_unused_127_);
v_unused_128_ = lean_ctor_get(v___x_108_, 1);
lean_dec(v_unused_128_);
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_125_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_work_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_125_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v_st0_120_; 
v___x_113_ = lean_box(0);
v___x_114_ = 0;
v___x_115_ = lean_box(0);
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_113_);
lean_ctor_set(v___x_117_, 1, v_tags_105_);
v___x_118_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v___x_113_);
lean_ctor_set(v___x_118_, 2, v___x_113_);
lean_ctor_set(v___x_118_, 3, v___x_113_);
lean_ctor_set(v___x_118_, 4, v___x_113_);
lean_ctor_set(v___x_118_, 5, v___x_113_);
lean_ctor_set(v___x_118_, 6, v___x_113_);
lean_ctor_set(v___x_118_, 7, v___x_115_);
lean_ctor_set(v___x_118_, 8, v___x_115_);
lean_ctor_set(v___x_118_, 9, v___x_113_);
lean_ctor_set(v___x_118_, 10, v___x_116_);
lean_ctor_set(v___x_118_, 11, v___x_116_);
lean_ctor_set(v___x_118_, 12, v___x_113_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 3, v___x_113_);
lean_ctor_set(v___x_111_, 2, v___x_118_);
lean_ctor_set(v___x_111_, 1, v___x_113_);
v_st0_120_ = v___x_111_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_work_109_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_124_, 2, v___x_118_);
lean_ctor_set(v_reuseFailAlloc_124_, 3, v___x_113_);
v_st0_120_ = v_reuseFailAlloc_124_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
lean_object* v___x_121_; lean_object* v_st_122_; lean_object* v___x_123_; 
lean_ctor_set_uint8(v_st0_120_, sizeof(void*)*4, v___x_114_);
v___x_121_ = lp_lean_x2dftml_LeanFtml_pipelineFull;
v_st_122_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_runRules_spec__0(v_st0_120_, v___x_121_);
v___x_123_ = lp_lean_x2dftml_LeanFtml_renderStateR47(v_conf_104_, v_st_122_);
return v___x_123_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__1(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__0));
v___x_131_ = lp_lean_x2dftml_LeanFtml_parsePcre(v___x_130_);
return v___x_131_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anyiframeFixture(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__1, &lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__1);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v___x_136_; 
v___x_136_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anyiframeFixture___closed__2));
return v___x_136_;
}
else
{
lean_object* v_val_137_; 
v_val_137_ = lean_ctor_get(v___x_135_, 0);
lean_inc(v_val_137_);
return v_val_137_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NotesRender(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeEmbedRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Pipeline(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_CodeEmbedRender(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_NotesRender(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_CodeEmbedRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Pipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_anyiframeFixture = _init_lp_lean_x2dftml_LeanFtml_anyiframeFixture();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_anyiframeFixture);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
