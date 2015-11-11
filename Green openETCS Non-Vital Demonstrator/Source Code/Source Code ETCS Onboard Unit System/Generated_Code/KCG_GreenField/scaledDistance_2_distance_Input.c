/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDistance_2_distance_Input.h"

/* InputManagement::scaledDistance_2_distance */
L_internal_Type_Obu_BasicTypes_ scaledDistance_2_distance_Input(
  /* InputManagement::scaledDistance_2_distance::q_scale */ Q_SCALE q_scale,
  /* InputManagement::scaledDistance_2_distance::d_in */ kcg_int d_in)
{
  /* InputManagement::scaledDistance_2_distance::distance */
  static L_internal_Type_Obu_BasicTypes_ distance;
  
  switch (q_scale) {
    case Q_SCALE_10_cm_scale :
      distance = d_in * cQ_SCALE_10_cm_resolution_Train;
      break;
    case Q_SCALE_1_m_scale :
      distance = d_in * cQ_SCALE_1_m_resolution_TrainPo;
      break;
    case Q_SCALE_10_m_scale :
      distance = d_in * cQ_SCALE_10_m_resolution_TrainP;
      break;
    
  }
  return distance;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaledDistance_2_distance_Input.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

