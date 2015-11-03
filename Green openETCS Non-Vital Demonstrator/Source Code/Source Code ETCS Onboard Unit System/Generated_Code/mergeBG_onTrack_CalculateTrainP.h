/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _mergeBG_onTrack_CalculateTrain
#define _mergeBG_onTrack_CalculateTrain

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainP.h"
#include "indexOfBG_onTrack_CalculateTrai.h"
#include "deleteBG_atIndex_CalculateTrain.h"
#include "insertBG_atIndex_CalculateTrain.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
extern void mergeBG_onTrack_CalculateTrainP(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::overrun */ kcg_bool *overrun);

#endif /* _mergeBG_onTrack_CalculateTrain */
/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBG_onTrack_CalculateTrainP.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

