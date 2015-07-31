/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _ComputeTransitionConditions_H_
#define _ComputeTransitionConditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* ComputeTransitionConditions */
extern void ComputeTransitionConditions(
  /* ComputeTransitionConditions::current_level */M_LEVEL current_level,
  /* ComputeTransitionConditions::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* ComputeTransitionConditions::TransitionIsSet */kcg_bool TransitionIsSet,
  /* ComputeTransitionConditions::next_level */M_LEVEL next_level,
  /* ComputeTransitionConditions::received_L1_MA */kcg_bool received_L1_MA,
  /* ComputeTransitionConditions::received_target_speed */kcg_bool received_target_speed,
  /* ComputeTransitionConditions::position_reached */kcg_bool position_reached,
  /* ComputeTransitionConditions::output_conditions */T_TransitionConditions_Level_And_Mode_Types_Pkg *output_conditions,
  /* ComputeTransitionConditions::TrainTrip */kcg_bool *TrainTrip);

#endif /* _ComputeTransitionConditions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeTransitionConditions.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

