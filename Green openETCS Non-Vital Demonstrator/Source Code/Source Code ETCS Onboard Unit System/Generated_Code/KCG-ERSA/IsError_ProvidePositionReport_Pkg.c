/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsError_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::IsError */
kcg_bool IsError_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::IsError::inError */kcg_bool inError,
  /* ProvidePositionReport_Pkg::IsError::errorVector */ErrorMessage_T_ProvidePositionReport_Pkg *errorVector)
{
  /* ProvidePositionReport_Pkg::IsError::containsError */
  static kcg_bool containsError;
  
  containsError = inError | (*errorVector).present;
  return containsError;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsError_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

