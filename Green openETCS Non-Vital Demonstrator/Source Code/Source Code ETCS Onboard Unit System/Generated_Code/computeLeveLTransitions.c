/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "computeLeveLTransitions.h"

void computeLeveLTransitions_reset(outC_computeLeveLTransitions *outC)
{
  outC->init = kcg_true;
  /* 1 */ DriverAck_reset(&outC->Context_1);
  /* 1 */ LevelStateMachine_reset(&outC->_1_Context_1);
  /* 1 */ DelayTransitionOrder_reset(&outC->_2_Context_1);
}

/* computeLeveLTransitions */
void computeLeveLTransitions(
  /* computeLeveLTransitions::getAck */kcg_bool getAck,
  /* computeLeveLTransitions::currentDistance */kcg_int currentDistance,
  /* computeLeveLTransitions::ackDistance */kcg_int ackDistance,
  /* computeLeveLTransitions::immediateAck */kcg_bool immediateAck,
  /* computeLeveLTransitions::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* computeLeveLTransitions::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* computeLeveLTransitions::received_L1_MA */kcg_bool received_L1_MA,
  /* computeLeveLTransitions::received_target_speed */kcg_bool received_target_speed,
  outC_computeLeveLTransitions *outC)
{
  static kcg_bool tmp;
  /* computeLeveLTransitions::_L34 */
  static T_TransitionConditions_Level_And_Mode_Types_Pkg _L34;
  
  outC->announce_driver_selection = /* 1 */
    IsDriverSelection(level_transition) | /* IsImmediateOrder */
    IsImmediateOrder(level_transition);
  /* 1 */ DelayTransitionOrder(level_transition, &outC->_2_Context_1);
  if (outC->init) {
    outC->init = kcg_false;
    outC->previous_level = M_LEVEL_Level_0;
  }
  else {
    outC->previous_level = outC->next_level;
  }
  if (outC->announce_driver_selection) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->announced_level,
      level_transition);
    tmp = kcg_true;
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->announced_level,
      &outC->_2_Context_1.out_transition);
    tmp = currentDistance >= outC->announced_level.transition.position;
  }
  /* 1 */
  ComputeTransitionConditions(
    outC->previous_level,
    received_L2_L3_MA,
    outC->announced_level.is_set,
    outC->announced_level.transition.level,
    received_L1_MA,
    received_target_speed,
    tmp,
    &_L34,
    &outC->TripTrain);
  /* 1 */ LevelStateMachine(&_L34, &outC->_1_Context_1);
  outC->next_level = outC->_1_Context_1.OutLevel;
  /* 1 */
  DriverAck(
    getAck,
    outC->next_level,
    outC->previous_level,
    currentDistance,
    ackDistance,
    immediateAck,
    &outC->Context_1);
  outC->service_brake = outC->Context_1.service_brake;
  outC->needsAckFromDriver = outC->Context_1.needsAckFromDriver;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** computeLeveLTransitions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

