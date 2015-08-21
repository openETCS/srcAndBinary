/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _ComputeTransitionConditions_Levels_Pkg_H_
#define _ComputeTransitionConditions_Levels_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* Levels_Pkg::ComputeTransitionConditions */
extern void ComputeTransitionConditions_Levels_Pkg(
  /* Levels_Pkg::ComputeTransitionConditions::current_level */M_LEVEL current_level,
  /* Levels_Pkg::ComputeTransitionConditions::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* Levels_Pkg::ComputeTransitionConditions::TransitionIsSet */kcg_bool TransitionIsSet,
  /* Levels_Pkg::ComputeTransitionConditions::next_level */M_LEVEL next_level,
  /* Levels_Pkg::ComputeTransitionConditions::received_L1_MA */kcg_bool received_L1_MA,
  /* Levels_Pkg::ComputeTransitionConditions::received_target_speed */kcg_bool received_target_speed,
  /* Levels_Pkg::ComputeTransitionConditions::position_reached */kcg_bool position_reached,
  /* Levels_Pkg::ComputeTransitionConditions::ackPending */kcg_bool ackPending,
  /* Levels_Pkg::ComputeTransitionConditions::output_conditions */T_TransitionConditions_Level_And_Mode_Types_Pkg *output_conditions,
  /* Levels_Pkg::ComputeTransitionConditions::TrainTrip */kcg_bool *TrainTrip);

#endif /* _ComputeTransitionConditions_Levels_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeTransitionConditions_Levels_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

