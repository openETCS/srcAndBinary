/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcDistances_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::calcDistances */
void calcDistances_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::calcDistances::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::calcDistances::outLocationKP_Balise_Track */ L_internal_Type_Obu_BasicTypes_Pkg *outLocationKP_Balise_Track,
  /* manage_DMI_Output_Pkg::calcDistances::ouDistanceKP_Balise */ L_internal_Type_Obu_BasicTypes_Pkg *ouDistanceKP_Balise,
  /* manage_DMI_Output_Pkg::calcDistances::outDistance_ToTSA */ L_internal_Type_Obu_BasicTypes_Pkg *outDistance_ToTSA)
{
  /* manage_DMI_Output_Pkg::calcDistances::doCalc */ kcg_bool doCalc;
  
  *outLocationKP_Balise_Track = - 1;
  *outDistance_ToTSA = *outLocationKP_Balise_Track;
  doCalc = (*inTrainPosition).valid &
    !(*inTrainPosition).trainPositionIsUnknown &
    !(*inTrainPosition).noCoordinateSystemHasBeenAssigned &
    (*inTrainPosition).LRBG.valid;
  /* ck_doCalc */ if (doCalc) {
    *ouDistanceKP_Balise = *outLocationKP_Balise_Track;
  }
  else {
    *ouDistanceKP_Balise = *outLocationKP_Balise_Track;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calcDistances_manage_DMI_Output_Pkg.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

