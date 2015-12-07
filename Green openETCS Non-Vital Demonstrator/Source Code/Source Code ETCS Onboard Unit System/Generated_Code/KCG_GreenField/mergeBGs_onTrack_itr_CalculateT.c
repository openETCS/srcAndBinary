/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_itr_CalculateT.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr */
void mergeBGs_onTrack_itr_CalculateT(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BGs_in */ positionedBGs_w_overrun_T_Calcu *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BGs_out */ positionedBGs_w_overrun_T_Calcu *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::_L13 */
  static kcg_bool _L13;
  
  /* 1 */
  mergeBG_onTrack_CalculateTrainP(BG, &(*BGs_in).BGs, &(*BGs_out).BGs, &_L13);
  (*BGs_out).overrun = _L13 | (*BGs_in).overrun;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBGs_onTrack_itr_CalculateT.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

