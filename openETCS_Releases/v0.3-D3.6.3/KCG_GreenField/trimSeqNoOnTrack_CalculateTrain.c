/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_CalculateTrain.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack */
void trimSeqNoOnTrack_CalculateTrain(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack */
  static kcg_int acc;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::_L2 */
  static kcg_int _L2;
  
  _L2 = 0;
  for (i = 0; i < 41; i++) {
    acc = _L2;
    /* 1 */
    trimSeqNoOnTrack_itr_CalculateT(acc, &(*BGs_in)[i], &_L2, &(*BGs_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trimSeqNoOnTrack_CalculateTrain.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

