/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
#ifndef _passing_a_BG_CalculateTrainPos
#define _passing_a_BG_CalculateTrainPos

#include "kcg_types.h"
#include "passedBG_2_positionedBG_Calcula.h"
#include "mergeBGs_onTrack_CalculateTrain.h"
#include "mergeBG_onTrack_CalculateTrainP.h"
#include "trimSeqNoOnTrack_CalculateTrain.h"
#include "indexOfPassedBG_by_id_Calculate.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::passing_a_BG */
extern void passing_a_BG_CalculateTrainPosi(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Ty *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBGSeqNo */ kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passing_a_BG::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedPositionedBG */ positionedBG_T_TrainPosition_Ty *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out,
  /* CalculateTrainPosition_Pkg::passing_a_BG::overrun */ kcg_bool *overrun,
  /* CalculateTrainPosition_Pkg::passing_a_BG::foundNotWhereAnnounced */ kcg_bool *foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGpassedInUnexpectedDirection */ kcg_bool *BGpassedInUnexpectedDirection);

#endif /* _passing_a_BG_CalculateTrainPos */
/* $**************** KCG Version 6.4 (build i21) ****************
** passing_a_BG_CalculateTrainPosi.h
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

