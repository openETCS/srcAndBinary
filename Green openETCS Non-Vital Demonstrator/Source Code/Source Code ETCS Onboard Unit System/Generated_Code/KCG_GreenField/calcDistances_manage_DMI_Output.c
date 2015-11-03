/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcDistances_manage_DMI_Output.h"

/* manage_DMI_Output_Pkg::calcDistances */
void calcDistances_manage_DMI_Output(
  /* manage_DMI_Output_Pkg::calcDistances::inTrainPosition */ trainPosition_T_TrainPosition_T *inTrainPosition,
  /* manage_DMI_Output_Pkg::calcDistances::outLocationKP_Balise_Track */ L_internal_Type_Obu_BasicTypes_ *outLocationKP_Balise_Track,
  /* manage_DMI_Output_Pkg::calcDistances::ouDistanceKP_Balise */ L_internal_Type_Obu_BasicTypes_ *ouDistanceKP_Balise,
  /* manage_DMI_Output_Pkg::calcDistances::outDistance_ToTSA */ L_internal_Type_Obu_BasicTypes_ *outDistance_ToTSA)
{
  /* manage_DMI_Output_Pkg::calcDistances::doCalc */
  static kcg_bool doCalc;
  
  *outLocationKP_Balise_Track = - 1;
  *outDistance_ToTSA = *outLocationKP_Balise_Track;
  doCalc = (*inTrainPosition).valid &
    !(*inTrainPosition).trainPositionIsUnknown &
    !(*inTrainPosition).noCoordinateSystemHasBeenAssign &
    (*inTrainPosition).LRBG.valid;
  /* ck_doCalc */ if (doCalc) {
    *ouDistanceKP_Balise = *outLocationKP_Balise_Track;
  }
  else {
    *ouDistanceKP_Balise = *outLocationKP_Balise_Track;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calcDistances_manage_DMI_Output.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

