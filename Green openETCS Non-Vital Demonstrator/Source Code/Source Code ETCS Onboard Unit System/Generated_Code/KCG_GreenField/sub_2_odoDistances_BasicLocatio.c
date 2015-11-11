/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sub_2_odoDistances_BasicLocatio.h"

/* BasicLocationFunctions_Pkg::sub_2_odoDistances */
void sub_2_odoDistances_BasicLocatio(
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_2 */ OdometryLocations_T_Obu_BasicTy *odo_2,
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_1 */ OdometryLocations_T_Obu_BasicTy *odo_1,
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::distance */ LocWithInAcc_T_Obu_BasicTypes_P *distance)
{
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L5 */
  static kcg_int _L5;
  
  _L5 = (*odo_2).o_nominal - (*odo_1).o_nominal;
  (*distance).nominal = _L5;
  (*distance).d_min = (*odo_2).o_min - (*odo_1).o_min - _L5;
  (*distance).d_max = (*odo_2).o_max - (*odo_1).o_max - _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sub_2_odoDistances_BasicLocatio.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

