/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::add_odo_2_Location */
void add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */ LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */ OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */ OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg *location)
{
  /* BasicLocationFunctions_Pkg::add_odo_2_Location */ LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  
  /* 1 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(odoValue, refOdoValue, &tmp);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(&tmp, refLocation, location);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** add_odo_2_Location_BasicLocationFunctions_Pkg.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

