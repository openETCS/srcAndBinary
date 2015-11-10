/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionedBGs_ids_equal_Calcula.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal */
kcg_bool positionedBGs_ids_equal_Calcula(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_2 */ positionedBG_T_TrainPosition_Ty *bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_1 */ positionedBG_T_TrainPosition_Ty *bg_1)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::idsEqual */
  static kcg_bool idsEqual;
  
  idsEqual = (*bg_2).valid & /* 1 */
    nidBG_nidc_equal_CalculateTrain(
      (*bg_2).nid_c,
      (*bg_2).nid_bg,
      (*bg_1).nid_c,
      (*bg_1).nid_bg) & (*bg_1).valid;
  return idsEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionedBGs_ids_equal_Calcula.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

