/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_EBI_non_est */
void d_EBI_non_est_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_EBI_non_est::V */ V_internal_real_Type_SDM_Types_Pkg V,
  /* TargetLimits_Pkg::d_EBI_non_est::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_EBI_non_est::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_EBI_non_est::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::d_EBI_non_est::valid */ kcg_bool *valid)
{
  /* TargetLimits_Pkg::d_EBI_non_est */
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::d_EBI_non_est::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* TargetLimits_Pkg::d_EBI_non_est::_L6 */
  static kcg_real _L6;
  /* TargetLimits_Pkg::d_EBI_non_est::_L19 */
  static kcg_bool _L19;
  
  _L19 = !(*T).inhComp;
  /* ck__L19 */ if (_L19) {
    tmp = /* 1 */ f_41_TargetLimits_Pkg(V);
  }
  else {
    tmp = 0.0;
  }
  _L6 = tmp + V;
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, _L6, valid, &_L4);
  *D_SBI2 = _L4 - _L6 * ((*T).Traction + (*T).berem) - V * (*T).bs2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_EBI_non_est_TargetLimits_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

