/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfPassedBG_by_id_Calculate.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id */
void indexOfPassedBG_by_id_Calculate(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG */ passedBG_T_BG_Types_Pkg *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexValid */ kcg_bool *indexValid)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id */
  static positionedBG_T_TrainPosition_Ty mk_struct;
  
  mk_struct.valid = (*BG).valid & (*BG).BG_Header.valid;
  mk_struct.nid_c = (*BG).BG_Header.nid_c;
  mk_struct.nid_bg = (*BG).BG_Header.nid_bg;
  mk_struct.q_link = (*BG).BG_Header.q_link;
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &mk_struct.location,
    (LocWithInAcc_T_Obu_BasicTypes_P *) &cLocWithInAcc_0_Obu_BasicTypes_);
  mk_struct.seqNoOnTrack = 0;
  kcg_copy_infoFromLinking_T_Trai(
    &mk_struct.infoFromLinking,
    (infoFromLinking_T_TrainPosition *) &cNoInfoFromLinking_CalculateTra);
  kcg_copy_passedBG_T_BG_Types_Pk(&mk_struct.infoFromPassing, BG);
  mk_struct.missed = kcg_false;
  /* 1 */
  indexOfBG_by_id_CalculateTrainP(
    &mk_struct,
    BGs,
    enable,
    indexOfBG,
    BG_found,
    indexValid);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfPassedBG_by_id_Calculate.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

