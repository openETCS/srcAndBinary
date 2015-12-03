/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetDistance_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetDistance */
L_internal_real_Type_SDM_Types_ TargetDistance_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetDistance::d_P_of_V_target */ L_internal_real_Type_SDM_Types_ d_P_of_V_target,
  /* TargetLimits_Pkg::TargetDistance::d_maxsafefront */ L_internal_real_Type_SDM_Types_ d_maxsafefront,
  /* TargetLimits_Pkg::TargetDistance::d_estfront */ L_internal_real_Type_SDM_Types_ d_estfront,
  /* TargetLimits_Pkg::TargetDistance::d_svl */ L_internal_real_Type_SDM_Types_ d_svl,
  /* TargetLimits_Pkg::TargetDistance::d_eoa */ L_internal_real_Type_SDM_Types_ d_eoa,
  /* TargetLimits_Pkg::TargetDistance::isEoAorSvL */ kcg_bool isEoAorSvL)
{
  /* TargetLimits_Pkg::TargetDistance */
  static kcg_real tmp;
  /* TargetLimits_Pkg::TargetDistance::_L30 */
  static kcg_real _L30;
  /* TargetLimits_Pkg::TargetDistance::_L28 */
  static kcg_real _L28;
  /* TargetLimits_Pkg::TargetDistance::targetDistance */
  static L_internal_real_Type_SDM_Types_ targetDistance;
  
  _L28 = d_eoa - d_estfront;
  _L30 = d_svl - d_maxsafefront;
  /* 1 */ if (isEoAorSvL) {
    /* 1 */ if (_L28 <= _L30) {
      tmp = _L28;
    }
    else {
      tmp = _L30;
    }
  }
  else {
    tmp = d_P_of_V_target - d_maxsafefront;
  }
  targetDistance = /* 1 */ limitPositive_SDM_Types_Pkg(tmp);
  return targetDistance;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TargetDistance_TargetLimits_Pkg.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

