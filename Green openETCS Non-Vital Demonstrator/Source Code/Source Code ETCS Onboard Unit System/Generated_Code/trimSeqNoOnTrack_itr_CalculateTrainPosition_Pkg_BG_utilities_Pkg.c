/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr */
void trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::prevSeqNo */kcg_int prevSeqNo,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::seqNo */kcg_int *seqNo,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::BG_out */positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  if ((*BG_in).valid & (*BG_in).infoFromPassing.valid) {
    *seqNo = (*BG_in).seqNoOnTrack;
  }
  else {
    *seqNo = prevSeqNo + 1;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, BG_in);
  (*BG_out).seqNoOnTrack = *seqNo;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

