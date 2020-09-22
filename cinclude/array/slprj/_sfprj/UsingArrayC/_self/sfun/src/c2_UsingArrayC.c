/* Include files */

#include "UsingArrayC_sfun.h"
#include "c2_UsingArrayC.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "UsingArrayC_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c2_debug_family_names[8] = { "tempt", "num_rows", "num_cols",
  "customDir", "nargin", "nargout", "input", "output" };

/* Function Declarations */
static void initialize_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance);
static void initialize_params_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance);
static void enable_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct *chartInstance);
static void disable_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct *chartInstance);
static void c2_update_debugger_state_c2_UsingArrayC
  (SFc2_UsingArrayCInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_UsingArrayC
  (SFc2_UsingArrayCInstanceStruct *chartInstance);
static void set_sim_state_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_st);
static void finalize_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance);
static void sf_gateway_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance);
static void mdl_start_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance);
static void initSimStructsc2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber);
static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData);
static void c2_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct *chartInstance,
  const mxArray *c2_b_output, const char_T *c2_identifier, real_T c2_y[15]);
static void c2_b_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[15]);
static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static real_T c2_c_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static int32_T c2_d_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static uint8_T c2_e_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_UsingArrayC, const char_T
  *c2_identifier);
static uint8_T c2_f_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void init_dsm_address_info(SFc2_UsingArrayCInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_UsingArrayCInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc2_UsingArrayC(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_UsingArrayC = 0U;
}

static void initialize_params_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_debugger_state_c2_UsingArrayC
  (SFc2_UsingArrayCInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_UsingArrayC
  (SFc2_UsingArrayCInstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  uint8_T c2_hoistedGlobal;
  const mxArray *c2_c_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(2, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", *chartInstance->c2_output, 0, 0U, 1U,
    0U, 2, 5, 3), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_hoistedGlobal = chartInstance->c2_is_active_c2_UsingArrayC;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_hoistedGlobal, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T c2_dv0[15];
  int32_T c2_i0;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("output", c2_u, 0)),
                      "output", c2_dv0);
  for (c2_i0 = 0; c2_i0 < 15; c2_i0++) {
    (*chartInstance->c2_output)[c2_i0] = c2_dv0[c2_i0];
  }

  chartInstance->c2_is_active_c2_UsingArrayC = c2_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c2_UsingArrayC", c2_u,
       1)), "is_active_c2_UsingArrayC");
  sf_mex_destroy(&c2_u);
  c2_update_debugger_state_c2_UsingArrayC(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance)
{
  real_T c2_hoistedGlobal;
  real_T c2_b_input;
  uint32_T c2_debug_family_var_map[8];
  real_T c2_tempt[15];
  real_T c2_num_rows;
  real_T c2_num_cols;
  char_T c2_customDir[68];
  real_T c2_nargin = 1.0;
  real_T c2_nargout = 1.0;
  real_T c2_b_output[15];
  int32_T c2_i1;
  int32_T c2_i2;
  real_T c2_d0;
  int32_T c2_i3;
  real_T c2_d1;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  static char_T c2_cv0[68] = { 'C', ':', '\\', 'U', 's', 'e', 'r', 's', '\\',
    't', 's', 'u', '\\', 'D', 'e', 's', 'k', 't', 'o', 'p', '\\', 'P', 'e', 'r',
    's', 'o', 'n', 'a', 'l', '\\', 'P', 'r', 'o', 'j', 'e', 'c', 't', 's', '\\',
    'm', 'a', 't', 'l', 'a', 'b', '\\', 'c', 'i', 'n', 'c', 'l', 'u', 'd', 'e',
    '\\', 'a', 'r', 'r', 'a', 'y', '\\', 'c', '_', 'c', 'o', 'd', 'e', 's' };

  int32_T c2_i7;
  int32_T c2_i8;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c2_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c2_input, 0U, 1U, 0U,
                        chartInstance->c2_sfEvent, false);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c2_sfEvent);
  c2_hoistedGlobal = *chartInstance->c2_input;
  c2_b_input = c2_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 8U, 8U, c2_debug_family_names,
    c2_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_tempt, 0U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_num_rows, 1U, c2_b_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_num_cols, 2U, c2_b_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c2_customDir, 3U, c2_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargin, 4U, c2_b_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargout, 5U, c2_b_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c2_b_input, 6U, c2_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_b_output, 7U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 15);
  for (c2_i1 = 0; c2_i1 < 15; c2_i1++) {
    c2_b_output[c2_i1] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 16);
  for (c2_i2 = 0; c2_i2 < 15; c2_i2++) {
    c2_tempt[c2_i2] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 17);
  c2_num_rows = 5.0;
  c2_num_cols = 3.0;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 18);
  c2_d0 = muDoubleScalarRound(c2_num_rows);
  if (c2_d0 < 2.147483648E+9) {
    if (CV_SATURATION_EVAL(4, 0, 0, 1, c2_d0 >= -2.147483648E+9)) {
      c2_i3 = (int32_T)c2_d0;
    } else {
      c2_i3 = MIN_int32_T;
    }
  } else if (CV_SATURATION_EVAL(4, 0, 0, 0, c2_d0 >= 2.147483648E+9)) {
    c2_i3 = MAX_int32_T;
  } else {
    c2_i3 = 0;
  }

  c2_d1 = muDoubleScalarRound(c2_num_cols);
  if (c2_d1 < 2.147483648E+9) {
    if (CV_SATURATION_EVAL(4, 0, 1, 1, c2_d1 >= -2.147483648E+9)) {
      c2_i4 = (int32_T)c2_d1;
    } else {
      c2_i4 = MIN_int32_T;
    }
  } else if (CV_SATURATION_EVAL(4, 0, 1, 0, c2_d1 >= 2.147483648E+9)) {
    c2_i4 = MAX_int32_T;
  } else {
    c2_i4 = 0;
  }

  update_array(c2_tempt, c2_i3, c2_i4);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 19);
  for (c2_i5 = 0; c2_i5 < 15; c2_i5++) {
    c2_b_output[c2_i5] = c2_tempt[c2_i5];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 22);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 23);
  for (c2_i6 = 0; c2_i6 < 68; c2_i6++) {
    c2_customDir[c2_i6] = c2_cv0[c2_i6];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 24);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 25);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 26);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 27);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, -27);
  _SFD_SYMBOL_SCOPE_POP();
  for (c2_i7 = 0; c2_i7 < 15; c2_i7++) {
    (*chartInstance->c2_output)[c2_i7] = c2_b_output[c2_i7];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c2_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_UsingArrayCMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c2_i8 = 0; c2_i8 < 15; c2_i8++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c2_output)[c2_i8], 1U, 1U, 0U,
                          chartInstance->c2_sfEvent, false);
  }
}

static void mdl_start_c2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc2_UsingArrayC(SFc2_UsingArrayCInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber)
{
  (void)(c2_machineNumber);
  (void)(c2_chartNumber);
  (void)(c2_instanceNumber);
}

static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i9;
  int32_T c2_i10;
  const mxArray *c2_y = NULL;
  int32_T c2_i11;
  real_T c2_u[15];
  SFc2_UsingArrayCInstanceStruct *chartInstance;
  chartInstance = (SFc2_UsingArrayCInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_i9 = 0;
  for (c2_i10 = 0; c2_i10 < 3; c2_i10++) {
    for (c2_i11 = 0; c2_i11 < 5; c2_i11++) {
      c2_u[c2_i11 + c2_i9] = (*(real_T (*)[15])c2_inData)[c2_i11 + c2_i9];
    }

    c2_i9 += 5;
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 2, 5, 3), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static void c2_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct *chartInstance,
  const mxArray *c2_b_output, const char_T *c2_identifier, real_T c2_y[15])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_output), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_output);
}

static void c2_b_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real_T c2_y[15])
{
  real_T c2_dv1[15];
  int32_T c2_i12;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv1, 1, 0, 0U, 1, 0U, 2, 5, 3);
  for (c2_i12 = 0; c2_i12 < 15; c2_i12++) {
    c2_y[c2_i12] = c2_dv1[c2_i12];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_output;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[15];
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  SFc2_UsingArrayCInstanceStruct *chartInstance;
  chartInstance = (SFc2_UsingArrayCInstanceStruct *)chartInstanceVoid;
  c2_b_output = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_output), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_output);
  c2_i13 = 0;
  for (c2_i14 = 0; c2_i14 < 3; c2_i14++) {
    for (c2_i15 = 0; c2_i15 < 5; c2_i15++) {
      (*(real_T (*)[15])c2_outData)[c2_i15 + c2_i13] = c2_y[c2_i15 + c2_i13];
    }

    c2_i13 += 5;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  real_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_UsingArrayCInstanceStruct *chartInstance;
  chartInstance = (SFc2_UsingArrayCInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_u = *(real_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static real_T c2_c_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d2;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d2, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d2;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_nargout;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  SFc2_UsingArrayCInstanceStruct *chartInstance;
  chartInstance = (SFc2_UsingArrayCInstanceStruct *)chartInstanceVoid;
  c2_nargout = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nargout), &c2_thisId);
  sf_mex_destroy(&c2_nargout);
  *(real_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i16;
  const mxArray *c2_y = NULL;
  char_T c2_u[68];
  SFc2_UsingArrayCInstanceStruct *chartInstance;
  chartInstance = (SFc2_UsingArrayCInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i16 = 0; c2_i16 < 68; c2_i16++) {
    c2_u[c2_i16] = (*(char_T (*)[68])c2_inData)[c2_i16];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 10, 0U, 1U, 0U, 2, 1, 68), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

const mxArray *sf_c2_UsingArrayC_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  const char * c2_data[5] = {
    "789ced56c14ec24010dd2a22c4687a32fe878907e30d2298286902f5a06b64d9ae52d8766bb755f8170f1efd4c5bca9676934d914234e82464fa78dbf7668666"
    "0ad0ae6e3400c051f489f3497c11c56192803ecf3b201f32af49e7b4fc71b0072ab9fb04ff3ecf98b901990409a0b64b3aa133207e045ce49054c6628eed2237",
    "e84d3d027cc2197d25d68c79b229e9d90eb96619d0b623e05c66a814c4547cdd18123cee860ef0877c512ecd0290994f5fd17fa5603e72c8f391cf15f9550bfc"
    "647d19d7bfe957d49fd0df55f8e973c67bb3d6e22747d9792edb5f55c20bbf84b9371f662daeebf793b3883aa8e5f0bfdf66fc260abd659f9763859f2ef1e65d",
    "e7f6acd56d8e3aed1773f43c35d0a9815b8b3a8c029fa23a80020b7d41acaaaf9aabd0ff50dcbfec1c2f14fabac437cea1c989cf61c043d8247c1c300f1ad117"
    "cc45141a3e1b111c70e8a080a201c4b68b696811887c1f4db3f5f657ac578e6dddf3350983f45cc23c8594c66fe19f9aa7b7a29fd03f28f0137cb4ef45ab39ff",
    "be427f5bf6e2b6fbfd96bdef95dccbaaffe37f6d2f8bfaf695f5260c7ec4cc223cf5ab6df8bdf859b29fa6b29f3c5f66fe500c258a2ffb07a95e",
    "" };

  c2_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c2_data, 3632U, &c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_UsingArrayCInstanceStruct *chartInstance;
  chartInstance = (SFc2_UsingArrayCInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_u = *(int32_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static int32_T c2_d_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  int32_T c2_y;
  int32_T c2_i17;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_i17, 1, 6, 0U, 0, 0U, 0);
  c2_y = c2_i17;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_sfEvent;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  int32_T c2_y;
  SFc2_UsingArrayCInstanceStruct *chartInstance;
  chartInstance = (SFc2_UsingArrayCInstanceStruct *)chartInstanceVoid;
  c2_b_sfEvent = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_sfEvent),
    &c2_thisId);
  sf_mex_destroy(&c2_b_sfEvent);
  *(int32_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static uint8_T c2_e_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_UsingArrayC, const char_T
  *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_UsingArrayC), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_UsingArrayC);
  return c2_y;
}

static uint8_T c2_f_emlrt_marshallIn(SFc2_UsingArrayCInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_u0;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_u0, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void init_dsm_address_info(SFc2_UsingArrayCInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_UsingArrayCInstanceStruct
  *chartInstance)
{
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_input = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_output = (real_T (*)[15])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c2_UsingArrayC_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2954063013U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3681090236U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(331887484U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4072288226U);
}

mxArray* sf_c2_UsingArrayC_get_post_codegen_info(void);
mxArray *sf_c2_UsingArrayC_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("E3mJSEOW4rzlKqGIttouQG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(5);
      pr[1] = (double)(3);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c2_UsingArrayC_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c2_UsingArrayC_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_UsingArrayC_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("update_array");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_UsingArrayC_updateBuildInfo_args_info(void)
{
  const char *infoEncStr[] = {
    "100 C1x3{C1x2{T\"addIncludePaths\",C{T\"C:\\Users\\tsu\\Desktop\\Personal\\Projects\\matlab\\cinclude\\array\\c_codes\"}},C1x2{T\"addSourcePaths\",C{T\"C:\\Users\\tsu\\Desktop\\Personal\\Projects\\matlab\\cinclude\\array\\c_codes\"}},C1x2{T\"addSourceFiles\",C{T\"myMult2.c\"}}}"
  };

  mxArray *mxBIArgs = sf_mex_decode_encoded_mx_cell_array(infoEncStr, 3, 10);
  return mxBIArgs;
}

mxArray* sf_c2_UsingArrayC_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c2_UsingArrayC(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"output\",},{M[8],M[0],T\"is_active_c2_UsingArrayC\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_UsingArrayC_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_UsingArrayCInstanceStruct *chartInstance =
      (SFc2_UsingArrayCInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _UsingArrayCMachineNumber_,
           2,
           1,
           1,
           0,
           2,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_UsingArrayCMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_UsingArrayCMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _UsingArrayCMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"input");
          _SFD_SET_DATA_PROPS(1,2,0,1,"output");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,2,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,876);
        _SFD_CV_INIT_EML_SATURATION(0,1,0,438,-1,453);
        _SFD_CV_INIT_EML_SATURATION(0,1,1,455,-1,470);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 5U;
          dimVector[1]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)
            c2_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _UsingArrayCMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_UsingArrayCInstanceStruct *chartInstance =
      (SFc2_UsingArrayCInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c2_input);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c2_output);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sMG4v9alDrbeF9rrsaCPVTD";
}

static void sf_opaque_initialize_c2_UsingArrayC(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_UsingArrayCInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*)
    chartInstanceVar);
  initialize_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_UsingArrayC(void *chartInstanceVar)
{
  enable_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_UsingArrayC(void *chartInstanceVar)
{
  disable_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_UsingArrayC(void *chartInstanceVar)
{
  sf_gateway_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_UsingArrayC(SimStruct* S)
{
  return get_sim_state_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_UsingArrayC(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c2_UsingArrayC(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_UsingArrayCInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_UsingArrayC_optimization_info();
    }

    finalize_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_UsingArrayC(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_UsingArrayC((SFc2_UsingArrayCInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c2_UsingArrayC(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_UsingArrayC_optimization_info(sim_mode_is_rtw_gen
      (S), sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,2,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 2);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,2);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,2,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,2,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,2);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(430055815U));
  ssSetChecksum1(S,(3402036483U));
  ssSetChecksum2(S,(2795996924U));
  ssSetChecksum3(S,(2480336606U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c2_UsingArrayC(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_UsingArrayC(SimStruct *S)
{
  SFc2_UsingArrayCInstanceStruct *chartInstance;
  chartInstance = (SFc2_UsingArrayCInstanceStruct *)utMalloc(sizeof
    (SFc2_UsingArrayCInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_UsingArrayCInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_UsingArrayC;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_UsingArrayC;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_UsingArrayC;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_UsingArrayC;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_UsingArrayC;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_UsingArrayC;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_UsingArrayC;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_UsingArrayC;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_UsingArrayC;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_UsingArrayC;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_UsingArrayC;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c2_UsingArrayC(chartInstance);
}

void c2_UsingArrayC_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_UsingArrayC(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_UsingArrayC(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_UsingArrayC(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_UsingArrayC_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
