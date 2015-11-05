/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI1 */
void v_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurv *SBDcurve,
  /* TargetLimits_Pkg::v_SBI1::V_est */ V_internal_real_Type_SDM_Types_ V_est,
  /* TargetLimits_Pkg::v_SBI1::D_estfront */ L_internal_real_Type_SDM_Types_ D_estfront,
  /* TargetLimits_Pkg::v_SBI1::D_EOA */ L_internal_real_Type_SDM_Types_ D_EOA,
  /* TargetLimits_Pkg::v_SBI1::t_driver */ T_internal_real_Type_SDM_Types_ t_driver,
  /* TargetLimits_Pkg::v_SBI1::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI1::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::v_SBI1::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI1::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI1::V_SBI1 */ V_internal_real_Type_SDM_Types_ *V_SBI1)
{
  /* TargetLimits_Pkg::v_SBI1 */
  static kcg_bool tmp3;
  /* TargetLimits_Pkg::v_SBI1 */
  static V_internal_real_Type_SDM_Types_ tmp2;
  /* TargetLimits_Pkg::v_SBI1 */
  static kcg_bool tmp1;
  /* TargetLimits_Pkg::v_SBI1 */
  static V_internal_real_Type_SDM_Types_ tmp;
  /* TargetLimits_Pkg::v_SBI1::_L8 */
  static kcg_real _L8;
  /* TargetLimits_Pkg::v_SBI1::_L16 */
  static kcg_bool _L16;
  
  _L8 = D_estfront + (t_driver + (*T).bs1) * V_est;
  tmp1 = D_EOA > _L8;
  /* ck__L12 */ if (tmp1) {
    /* 1 */ getSpeedOnCurve_CalcBrakingCurv(SBDcurve, _L8, &tmp3, &tmp2);
  }
  else {
    tmp3 = kcg_false;
    tmp2 = 0.0;
  }
  /* ck_guiCurveEnabled */ if (guiCurveEnabled) {
    /* 2 */ getSpeedOnCurve_CalcBrakingCurv(GUIcurve, D_estfront, &tmp1, &tmp);
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
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

