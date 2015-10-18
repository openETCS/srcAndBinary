/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */
#ifndef _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_
#define _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_

#include "kcg_types.h"
#include "recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"
#include "improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations */
extern void improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::referenceBG */ positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out);

#endif /* _improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

