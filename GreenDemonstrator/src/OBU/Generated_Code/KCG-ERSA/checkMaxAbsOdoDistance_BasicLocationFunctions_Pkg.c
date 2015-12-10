/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
kcg_bool checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */ OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta)
{
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */ kcg_int tmp;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L6 */ kcg_int _L6;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::isLessThanOrEqual */ kcg_bool isLessThanOrEqual;
  
  _L6 = (*odo_2).o_nominal - (*odo_1).o_nominal;
  /* 2 */ if (0 <= _L6) {
    tmp = _L6;
  }
  else {
    tmp = - _L6;
  }
  isLessThanOrEqual = tmp <= (*maxDelta).o_nominal;
  return isLessThanOrEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

