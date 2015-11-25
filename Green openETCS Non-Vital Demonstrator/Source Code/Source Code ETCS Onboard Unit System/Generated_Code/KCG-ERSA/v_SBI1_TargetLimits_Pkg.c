/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI1 */
void v_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::v_SBI1::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI1::D_estfront */ L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::v_SBI1::D_EOA */ L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::v_SBI1::t_driver */ T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* TargetLimits_Pkg::v_SBI1::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI1::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::v_SBI1::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI1::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI1::V_SBI1 */ V_internal_real_Type_SDM_Types_Pkg *V_SBI1)
{
  /* TargetLimits_Pkg::v_SBI1 */ kcg_bool tmp3;
  /* TargetLimits_Pkg::v_SBI1 */ V_internal_real_Type_SDM_Types_Pkg tmp2;
  /* TargetLimits_Pkg::v_SBI1 */ kcg_bool tmp1;
  /* TargetLimits_Pkg::v_SBI1 */ V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::v_SBI1::_L8 */ kcg_real _L8;
  /* TargetLimits_Pkg::v_SBI1::_L16 */ kcg_bool _L16;
  
  _L8 = D_estfront + (t_driver + (*T).bs1) * V_est;
  tmp1 = D_EOA > _L8;
  /* ck__L12 */ if (tmp1) {
    /* 1 */
    getSpeedOnCurve_CalcBrakingCurves_types(SBDcurve, _L8, &tmp3, &tmp2);
  }
  else {
    tmp3 = kcg_false;
    tmp2 = 0.0;
  }
  /* ck_guiCurveEnabled */ if (guiCurveEnabled) {
    /* 2 */
    getSpeedOnCurve_CalcBrakingCurves_types(GUIcurve, D_estfront, &tmp1, &tmp);
  }
  else {
    tmp1 = kcg_false;
    tmp = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(tmp3, tmp2, tmp1, tmp, &_L16, valid, V_SBI1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** v_SBI1_TargetLimits_Pkg.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

