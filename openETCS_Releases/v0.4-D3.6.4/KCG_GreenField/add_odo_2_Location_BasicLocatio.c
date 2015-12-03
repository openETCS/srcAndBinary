/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_odo_2_Location_BasicLocatio.h"

/* BasicLocationFunctions_Pkg::add_odo_2_Location */
void add_odo_2_Location_BasicLocatio(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */ LocWithInAcc_T_Obu_BasicTypes_P *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */ OdometryLocations_T_Obu_BasicTy *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */ OdometryLocations_T_Obu_BasicTy *odoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::location */ LocWithInAcc_T_Obu_BasicTypes_P *location)
{
  /* BasicLocationFunctions_Pkg::add_odo_2_Location */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  
  /* 1 */ sub_2_odoDistances_BasicLocatio(odoValue, refOdoValue, &tmp);
  /* 1 */ add_2_Distances_BasicLocationFu(&tmp, refLocation, location);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** add_odo_2_Location_BasicLocatio.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

