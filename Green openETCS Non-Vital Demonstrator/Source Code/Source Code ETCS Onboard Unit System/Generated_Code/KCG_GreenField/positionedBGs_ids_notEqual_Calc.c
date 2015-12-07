/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionedBGs_ids_notEqual_Calc.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual */
kcg_bool positionedBGs_ids_notEqual_Calc(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual::bg_2 */ positionedBG_T_TrainPosition_Ty *bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual::bg_1 */ positionedBG_T_TrainPosition_Ty *bg_1)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_notEqual::idsNotEqual */
  static kcg_bool idsNotEqual;
  
  idsNotEqual = (*bg_2).valid & !/* 1 */
    nidBG_nidc_equal_CalculateTrain(
      (*bg_2).nid_c,
      (*bg_2).nid_bg,
      (*bg_1).nid_c,
      (*bg_1).nid_bg) & (*bg_1).valid;
  return idsNotEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionedBGs_ids_notEqual_Calc.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

