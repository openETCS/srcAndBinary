/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_I_MRSP_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_I_MRSP */
void d_I_MRSP_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_I_MRSP::V_MRSP */ V_internal_real_Type_SDM_Types_ V_MRSP,
  /* TargetLimits_Pkg::d_I_MRSP::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::d_I_MRSP::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_I_MRSP::GUIcurve */ ParabolaCurve_T_CalcBrakingCurv *GUIcurve,
  /* TargetLimits_Pkg::d_I_MRSP::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_I_MRSP::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_I_MRSP::D_I */ L_internal_real_Type_SDM_Types_ *D_I)
{
  /* TargetLimits_Pkg::d_I_MRSP */
  static L_internal_real_Type_SDM_Types_ tmp;
  /* TargetLimits_Pkg::d_I_MRSP::_L18 */
  static kcg_real _L18;
  /* TargetLimits_Pkg::d_I_MRSP::_L28 */
  static L_internal_real_Type_SDM_Types_ _L28;
  /* TargetLimits_Pkg::d_I_MRSP::_L27 */
  static kcg_bool _L27;
  
  /* 1 */ d_EBI_non_est_TargetLimits_Pkg(V_MRSP, EBDcurve, T, &_L28, valid);
  _L18 = _L28 - V_MRSP * T_driver_SDM_Types_Pkg;
  /* 3 */ getLocationOnCurve_CalcBrakingC(GUIcurve, V_MRSP, &_L27, &_L28);
  /* 1 */ if (guiCurveEnabled & _L27) {
    /* 1 */ if (_L28 <= _L18) {
      tmp = _L28;
    }
    else {
      tmp = _L18;
    }
  }
  else {
    tmp = _L18;
  }
  *D_I = tmp - V_MRSP * (*T).indication;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_I_MRSP_TargetLimits_Pkg.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

