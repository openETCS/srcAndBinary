/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */
void improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */ linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */ kcg_bool cond_iterw;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L6 */ kcg_int _L6;
  
  /* 1 */
  findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(BGs_in, &tmp);
  for (i = 0; i < 41; i++) {
    /* 1 */
    improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp[i],
      BGs_in,
      &cond_iterw,
      &(*BGs_out)[i]);
    _L6 = i + 1;
    if (!cond_iterw) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L6; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*BGs_out)[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

