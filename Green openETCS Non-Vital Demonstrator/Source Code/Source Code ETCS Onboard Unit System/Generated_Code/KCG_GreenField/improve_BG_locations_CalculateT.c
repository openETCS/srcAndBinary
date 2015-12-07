/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improve_BG_locations_CalculateT.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations */
void improve_BG_locations_CalculateT(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::referenceBG */ positionedBG_T_TrainPosition_Ty *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations */
  static positionedBGs_T_TrainPosition_T tmp1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations */
  static positionedBGs_T_TrainPosition_T tmp;
  
  /* 1 */
  _211_recalculate_BG_locations_a(referenceBG, BGs_in, trainProperties, &tmp);
  /* 1 */
  _210_recalculate_BG_locations_a(referenceBG, &tmp, trainProperties, &tmp1);
  /* 1 */ improveUnlinkedBGLocations_Calc(&tmp1, BGs_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improve_BG_locations_CalculateT.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

