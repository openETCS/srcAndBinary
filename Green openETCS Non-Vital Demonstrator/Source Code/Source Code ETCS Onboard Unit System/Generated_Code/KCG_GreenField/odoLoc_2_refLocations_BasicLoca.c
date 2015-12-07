/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "odoLoc_2_refLocations_BasicLoca.h"

/* BasicLocationFunctions_Pkg::odoLoc_2_refLocations */
void odoLoc_2_refLocations_BasicLoca(
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refLoc_2 */ LocWithInAcc_T_Obu_BasicTypes_P *refLoc_2,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refLoc_1 */ LocWithInAcc_T_Obu_BasicTypes_P *refLoc_1,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refOdo_2 */ OdometryLocations_T_Obu_BasicTy *refOdo_2,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refOdo_1 */ OdometryLocations_T_Obu_BasicTy *refOdo_1,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::odo */ OdometryLocations_T_Obu_BasicTy *odo,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::location */ LocWithInAcc_T_Obu_BasicTypes_P *location)
{
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L1 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L1;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L11 */
  static kcg_bool _L11;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L10 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L10;
  
  /* 1 */ add_odo_2_Location_BasicLocatio(refLoc_1, refOdo_1, odo, &_L1);
  /* 2 */ add_odo_2_Location_BasicLocatio(refLoc_2, refOdo_2, odo, &tmp);
  /* 1 */ overlapOf_2_Locations_BasicLoca(&tmp, &_L1, &_L10, &_L11);
  /* 1 */ if (_L11) {
    kcg_copy_LocWithInAcc_T_Obu_Bas(location, &_L10);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_Bas(location, &_L1);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** odoLoc_2_refLocations_BasicLoca.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

