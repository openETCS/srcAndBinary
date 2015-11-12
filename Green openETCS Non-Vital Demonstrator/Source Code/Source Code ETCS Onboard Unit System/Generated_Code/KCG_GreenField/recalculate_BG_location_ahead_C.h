/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _recalculate_BG_location_ahead_
#define _recalculate_BG_location_ahead_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFu.h"
#include "sub_2_odoDistances_BasicLocatio.h"
#include "calculateLocalBGInaccuracies_Ca.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
extern void recalculate_BG_location_ahead_C(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_in */ positionedBG_T_TrainPosition_Ty *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::prevLinkedBG */ positionedBG_T_TrainPosition_Ty *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::refBG */ positionedBG_T_TrainPosition_Ty *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::sumOfBestDistances */ LocWithInAcc_T_Obu_BasicTypes_P *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_out */ positionedBG_T_TrainPosition_Ty *BG_out);

#endif /* _recalculate_BG_location_ahead_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_location_ahead_C.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

