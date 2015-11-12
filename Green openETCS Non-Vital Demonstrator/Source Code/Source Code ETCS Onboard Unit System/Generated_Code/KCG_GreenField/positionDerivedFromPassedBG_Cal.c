/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionDerivedFromPassedBG_Cal.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG */
void positionDerivedFromPassedBG_Cal(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::odoPosition */ OdometryLocations_T_Obu_BasicTy *odoPosition,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::passedRefBG */ positionedBG_T_TrainPosition_Ty *passedRefBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::position */ LocWithInAcc_T_Obu_BasicTypes_P *position)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*passedRefBG).valid & (*passedRefBG).infoFromPassing.valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 6 */
    add_odo_2_Location_BasicLocatio(
      &(*passedRefBG).location,
      &(*passedRefBG).infoFromPassing.BG_Header.bgPosition.odo,
      odoPosition,
      position);
  }
  else {
    /* 1 */
    sub_2_odoDistances_BasicLocatio(
      odoPosition,
      (OdometryLocations_T_Obu_BasicTy *) &cOdometryInitialValue_Obu_Basic,
      position);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionDerivedFromPassedBG_Cal.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

