/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack */
void trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack */ kcg_int acc;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::_L2 */ kcg_int _L2;
  
  _L2 = 0;
  for (i = 0; i < 41; i++) {
    acc = _L2;
    /* 1 */
    trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      acc,
      &(*BGs_in)[i],
      &_L2,
      &(*BGs_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

