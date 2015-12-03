/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_204_recalculate_BG_locations_a.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead */
void _204_recalculate_BG_locations_a(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::referenceBG */ positionedBG_T_TrainPosition_Ty *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead */
  static refBGs_T_CalculateTrainPosition acc;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::_L3 */
  static refBGs_T_CalculateTrainPosition _L3;
  
  kcg_copy_refBGs_T_CalculateTrai(
    &_L3,
    (refBGs_T_CalculateTrainPosition *) &cNoRefPrevBGs_CalculateTrainPos);
  kcg_copy_positionedBG_T_TrainPo(&_L3.refBG, referenceBG);
  for (i = 0; i < 41; i++) {
    kcg_copy_refBGs_T_CalculateTrai(&acc, &_L3);
    /* 1 */
    recalculate_BG_locations_ahead_(
      &acc,
      &(*BGs_in)[i],
      trainProperties,
      &_L3,
      &(*BGs_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** _204_recalculate_BG_locations_a.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

