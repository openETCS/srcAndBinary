/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal */
kcg_bool positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_2 */ positionedBG_T_TrainPosition_Types_Pck *bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_1 */ positionedBG_T_TrainPosition_Types_Pck *bg_1)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::idsEqual */ kcg_bool idsEqual;
  
  idsEqual = (*bg_2).valid & /* 1 */
    nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      (*bg_2).nid_c,
      (*bg_2).nid_bg,
      (*bg_1).nid_c,
      (*bg_1).nid_bg) & (*bg_1).valid;
  return idsEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

