// Lean compiler output
// Module: LeanFtml.RawHeadingRender
// Imports: public import Init public meta import Init public import LeanFtml.NotesRender public import LeanFtml.RawHeadingRules public import LeanFtml.Pipeline
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
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_convCRLF(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_ParseState_ofSource(lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_pipelineFull;
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_runRules_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR44(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR44___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_renderWithR44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_dispatchRenderR41___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_renderWithR44___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderWithR44___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWithR44(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR44___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR44___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR44(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 0, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR44(uint8_t v_a_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR41(v_a_1_, v_a_2_, v_a_3_, v_a_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR44___boxed(lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
uint8_t v_a_7__boxed_10_; lean_object* v_res_11_; 
v_a_7__boxed_10_ = lean_unbox(v_a_6_);
v_res_11_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR44(v_a_7__boxed_10_, v_a_7_, v_a_8_, v_a_9_);
lean_dec_ref(v_a_8_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWithR44(lean_object* v_lookup_13_, lean_object* v_conf_14_, lean_object* v_work_15_, lean_object* v_doc_16_){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; 
v___f_17_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderWithR44___closed__0));
v___x_18_ = lp_lean_x2dftml_LeanFtml_renderWith(v___f_17_, v_lookup_13_, v_conf_14_, v_work_15_, v_doc_16_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR44___lam__0(lean_object* v_tokens_19_, lean_object* v_k_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_List_get_x3fInternal___redArg(v_tokens_19_, v_k_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR44___lam__0___boxed(lean_object* v_tokens_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_lean_x2dftml_LeanFtml_renderStateR44___lam__0(v_tokens_22_, v_k_23_);
lean_dec(v_tokens_22_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR44(lean_object* v_conf_25_, lean_object* v_st_26_){
_start:
{
lean_object* v_work_27_; lean_object* v_tokens_28_; lean_object* v_doc_29_; lean_object* v___f_30_; lean_object* v___x_31_; 
v_work_27_ = lean_ctor_get(v_st_26_, 0);
lean_inc(v_work_27_);
v_tokens_28_ = lean_ctor_get(v_st_26_, 1);
lean_inc(v_tokens_28_);
v_doc_29_ = lean_ctor_get(v_st_26_, 2);
lean_inc_ref(v_doc_29_);
lean_dec_ref(v_st_26_);
v___f_30_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_renderStateR44___lam__0___boxed), 2, 1);
lean_closure_set(v___f_30_, 0, v_tokens_28_);
v___x_31_ = lp_lean_x2dftml_LeanFtml_renderWithR44(v___f_30_, v_conf_25_, v_work_27_, v_doc_29_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRawHeadingE2E(lean_object* v_conf_39_, lean_object* v_tags_40_, lean_object* v_source_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v_work_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_60_; 
v___x_42_ = lp_lean_x2dftml_LeanFtml_convCRLF(v_source_41_);
v___x_43_ = lp_lean_x2dftml_LeanFtml_ParseState_ofSource(v___x_42_);
v_work_44_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_60_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_60_ == 0)
{
lean_object* v_unused_61_; lean_object* v_unused_62_; 
v_unused_61_ = lean_ctor_get(v___x_43_, 2);
lean_dec(v_unused_61_);
v_unused_62_ = lean_ctor_get(v___x_43_, 1);
lean_dec(v_unused_62_);
v___x_46_ = v___x_43_;
v_isShared_47_ = v_isSharedCheck_60_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_work_44_);
lean_dec(v___x_43_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_60_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
uint8_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v_st0_55_; 
v___x_48_ = 0;
v___x_49_ = lean_box(0);
v___x_50_ = lean_box(0);
v___x_51_ = lean_unsigned_to_nat(0u);
v___x_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_49_);
lean_ctor_set(v___x_52_, 1, v_tags_40_);
v___x_53_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_49_);
lean_ctor_set(v___x_53_, 2, v___x_49_);
lean_ctor_set(v___x_53_, 3, v___x_49_);
lean_ctor_set(v___x_53_, 4, v___x_49_);
lean_ctor_set(v___x_53_, 5, v___x_49_);
lean_ctor_set(v___x_53_, 6, v___x_49_);
lean_ctor_set(v___x_53_, 7, v___x_50_);
lean_ctor_set(v___x_53_, 8, v___x_50_);
lean_ctor_set(v___x_53_, 9, v___x_49_);
lean_ctor_set(v___x_53_, 10, v___x_51_);
lean_ctor_set(v___x_53_, 11, v___x_51_);
lean_ctor_set(v___x_53_, 12, v___x_49_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 2, v___x_53_);
lean_ctor_set(v___x_46_, 1, v___x_49_);
v_st0_55_ = v___x_46_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v_work_44_);
lean_ctor_set(v_reuseFailAlloc_59_, 1, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_59_, 2, v___x_53_);
v_st0_55_ = v_reuseFailAlloc_59_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_56_; lean_object* v_st_57_; lean_object* v___x_58_; 
lean_ctor_set_uint8(v_st0_55_, sizeof(void*)*3, v___x_48_);
v___x_56_ = lp_lean_x2dftml_LeanFtml_pipelineFull;
v_st_57_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_runRules_spec__0(v_st0_55_, v___x_56_);
v___x_58_ = lp_lean_x2dftml_LeanFtml_renderStateR44(v_conf_39_, v_st_57_);
return v___x_58_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NotesRender(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RawHeadingRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Pipeline(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_RawHeadingRender(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_RawHeadingRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Pipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
