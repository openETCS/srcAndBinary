/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget */
kcg_bool isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::Target */ Target_real_T_TargetManagement_types *Target)
{
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::isVnonZero */
  static kcg_bool isVnonZero;
  
  isVnonZero = (*Target).speed > 0.0;
  return isVnonZero;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

