/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateLocalBGInaccuracies_Ca.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
void calculateLocalBGInaccuracies_Ca(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::BG_in */ positionedBG_T_TrainPosition_Ty *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::localInaccuracies */ LocWithInAcc_T_Obu_BasicTypes_P *localInaccuracies)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  
  /* 34 */ if ((*BG_in).infoFromPassing.valid) {
    kcg_copy_LocWithInAcc_T_Obu_Bas(
      &tmp1,
      &(*BG_in).infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_Bas(
      &tmp1,
      &(*trainProperties).centerDetectionAcc_DefaultValue);
  }
  /* 31 */ if ((*BG_in).infoFromLinking.valid) {
    /* 3 */
    scaledDLINK_2_dlink_BasicLocati(
      (*BG_in).infoFromLinking.linkingInfo.q_scale,
      0,
      (*BG_in).infoFromLinking.linkingInfo.q_locacc,
      &tmp);
  }
  else /* 32 */ if ((*BG_in).infoFromPassing.valid) {
    /* 4 */
    scaledDLINK_2_dlink_BasicLocati(
      Q_SCALE_1_m_scale,
      0,
      (*BG_in).infoFromPassing.BG_Header.q_nvlocacc,
      &tmp);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_Bas(
      &tmp,
      &(*trainProperties).locationAccuracy_DefaultValue);
  }
  /* 5 */ add_2_Distances_BasicLocationFu(&tmp1, &tmp, localInaccuracies);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateLocalBGInaccuracies_Ca.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

