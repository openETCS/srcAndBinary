/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */
#ifndef _addAnnouncedBGs_CalculateTrain
#define _addAnnouncedBGs_CalculateTrain

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainP.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateT.h"
#include "positionLinkedBGs_CalculateTrai.h"
#include "mergeBGs_onTrack_CalculateTrain.h"
#include "trimSeqNoOnTrack_CalculateTrain.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::addAnnouncedBGs */
extern void addAnnouncedBGs_CalculateTrainP(
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::overrun */ kcg_bool *overrun);

#endif /* _addAnnouncedBGs_CalculateTrain */
/* $**************** KCG Version 6.4 (build i21) ****************
** addAnnouncedBGs_CalculateTrainP.h
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

