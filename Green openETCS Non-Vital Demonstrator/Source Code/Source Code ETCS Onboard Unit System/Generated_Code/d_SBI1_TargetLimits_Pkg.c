/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI1 */
void d_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurv *SBDcurve,
  /* TargetLimits_Pkg::d_SBI1::V */ V_internal_real_Type_SDM_Types_ V,
  /* TargetLimits_Pkg::d_SBI1::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_SBI1::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_SBI1::D_SBD1 */ L_internal_real_Type_SDM_Types_ *D_SBD1)
{
  /* TargetLimits_Pkg::d_SBI1::_L5 */
  static L_internal_real_Type_SDM_Types_ _L5;
  
  /* 1 */ getLocationOnCurve_CalcBrakingC(SBDcurve, V, valid, &_L5);
  *D_SBD1 = _L5 - V * (*T).bs1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_SBI1_TargetLimits_Pkg.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

