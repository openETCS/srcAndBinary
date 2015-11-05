/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _recalculate_BG_locations_ahead
#define _recalculate_BG_locations_ahead

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFu.h"
#include "add_2_Distances_BasicLocationFu.h"
#include "sub_2_odoDistances_BasicLocatio.h"
#include "overlapOf_2_Locations_BasicLoca.h"
#include "positionedBGs_ids_equal_Calcula.h"
#include "calculateLocalBGInaccuracies_Ca.h"
#include "recalculate_BG_location_ahead_C.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
extern void recalculate_BG_locations_ahead_(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_in */ refBGs_T_CalculateTrainPosition *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_in */ positionedBG_T_TrainPosition_Ty *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_out */ refBGs_T_CalculateTrainPosition *refBGs_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_out */ positionedBG_T_TrainPosition_Ty *BG_out);

#endif /* _recalculate_BG_locations_ahead */
/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_locations_ahead_.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

