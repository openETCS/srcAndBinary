/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDistance_2_distance_InputManagement.h"

/* InputManagement::scaledDistance_2_distance */
L_internal_Type_Obu_BasicTypes_Pkg scaledDistance_2_distance_InputManagement(
  /* InputManagement::scaledDistance_2_distance::q_scale */ Q_SCALE q_scale,
  /* InputManagement::scaledDistance_2_distance::d_in */ kcg_int d_in)
{
  /* InputManagement::scaledDistance_2_distance::distance */
  static L_internal_Type_Obu_BasicTypes_Pkg distance;
  
  switch (q_scale) {
    case Q_SCALE_10_cm_scale :
      distance = d_in * cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_1_m_scale :
      distance = d_in * cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
      break;
    case Q_SCALE_10_m_scale :
      distance = d_in * cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
      break;
    
  }
  return distance;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaledDistance_2_distance_InputManagement.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

