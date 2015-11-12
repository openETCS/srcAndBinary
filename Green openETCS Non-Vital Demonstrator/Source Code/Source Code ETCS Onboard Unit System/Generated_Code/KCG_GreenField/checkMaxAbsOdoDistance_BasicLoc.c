/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkMaxAbsOdoDistance_BasicLoc.h"

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
kcg_bool checkMaxAbsOdoDistance_BasicLoc(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */ OdometryLocations_T_Obu_BasicTy *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */ OdometryLocations_T_Obu_BasicTy *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */ OdometryLocations_T_Obu_BasicTy *maxDelta)
{
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
  static kcg_int tmp;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L6 */
  static kcg_int _L6;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::isLessThanOrEqual */
  static kcg_bool isLessThanOrEqual;
  
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
** checkMaxAbsOdoDistance_BasicLoc.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

