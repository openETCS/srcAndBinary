/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _add_odo_2_Location_BasicLocati
#define _add_odo_2_Location_BasicLocati

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFu.h"
#include "sub_2_odoDistances_BasicLocatio.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* BasicLocationFunctions_Pkg::add_odo_2_Location */
extern void add_odo_2_Location_BasicLocatio(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */ LocWithInAcc_T_Obu_BasicTypes_P *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */ OdometryLocations_T_Obu_BasicTy *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */ OdometryLocations_T_Obu_BasicTy *odoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::location */ LocWithInAcc_T_Obu_BasicTypes_P *location);

#endif /* _add_odo_2_Location_BasicLocati */
/* $**************** KCG Version 6.4 (build i21) ****************
** add_odo_2_Location_BasicLocatio.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

