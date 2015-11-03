/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_CalculateTrain.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
void mergeBGs_onTrack_CalculateTrain(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_1 */ positionedBGs_T_TrainPosition_T *BGs_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_2 */ positionedBGs_T_TrainPosition_T *BGs_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::overrun */ kcg_bool *overrun)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
  static positionedBGs_w_overrun_T_Calcu acc;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L7 */
  static positionedBGs_w_overrun_T_Calcu _L7;
  
  kcg_copy_positionedBGs_T_TrainP(&_L7.BGs, BGs_1);
  _L7.overrun = kcg_false;
  for (i = 0; i < 41; i++) {
    kcg_copy_positionedBGs_w_overru(&acc, &_L7);
    /* 1 */ mergeBGs_onTrack_itr_CalculateT(&acc, &(*BGs_2)[i], &_L7);
  }
  *overrun = _L7.overrun;
  kcg_copy_positionedBGs_T_TrainP(BGs_out, &_L7.BGs);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBGs_onTrack_CalculateTrain.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

