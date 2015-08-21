/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "computeLeveLTransitions_Levels_Pkg.h"

void computeLeveLTransitions_reset_Levels_Pkg(
  outC_computeLeveLTransitions_Levels_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ LevelStateMachine_reset_Levels_Pkg(&outC->Context_1);
  /* 1 */ DriverAck_reset_Levels_Pkg(&outC->_1_Context_1);
}

/* Levels_Pkg::computeLeveLTransitions */
void computeLeveLTransitions_Levels_Pkg(
  /* Levels_Pkg::computeLeveLTransitions::getAck */kcg_bool getAck,
  /* Levels_Pkg::computeLeveLTransitions::currentDistance */kcg_int currentDistance,
  /* Levels_Pkg::computeLeveLTransitions::ackDistance */kcg_int ackDistance,
  /* Levels_Pkg::computeLeveLTransitions::immediateAck */kcg_bool immediateAck,
  /* Levels_Pkg::computeLeveLTransitions::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* Levels_Pkg::computeLeveLTransitions::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* Levels_Pkg::computeLeveLTransitions::received_L1_MA */kcg_bool received_L1_MA,
  /* Levels_Pkg::computeLeveLTransitions::received_target_speed */kcg_bool received_target_speed,
  /* Levels_Pkg::computeLeveLTransitions::startOfMissionEnded */kcg_bool startOfMissionEnded,
  outC_computeLeveLTransitions_Levels_Pkg *outC)
{
  static T_LevelTransition_Level_And_Mode_Types_Pkg tmp1;
  static kcg_bool tmp;
  /* Levels_Pkg::computeLeveLTransitions::_L34 */
  static T_TransitionConditions_Level_And_Mode_Types_Pkg _L34;
  /* Levels_Pkg::computeLeveLTransitions::_L102 */
  static M_LEVEL _L102;
  
  if (outC->init) {
    _L102 = M_LEVEL_Level_0;
    outC->previous_level = M_LEVEL_Level_0;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &tmp1,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
  }
  else {
    _L102 = outC->next_level;
    outC->previous_level = outC->LastLevel;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &tmp1,
      &outC->rem_level_transition);
  }
  if ((*level_transition).is_set) {
    outC->requestedLevel = (*level_transition).transition.level;
  }
  else {
    outC->requestedLevel = _L102;
  }
  outC->announce_driver_selection = /* 1 */
    IsDriverSelection_Levels_Pkg(level_transition) | /* 1 */
    IsImmediateOrder_Levels_Pkg(level_transition);
  /* 1 */
  DriverAck_Levels_Pkg(
    getAck,
    outC->requestedLevel,
    outC->previous_level,
    currentDistance,
    (*level_transition).transition.position,
    ackDistance,
    immediateAck,
    startOfMissionEnded,
    (kcg_bool)
      ((*level_transition).is_set &
        kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
          level_transition,
          &tmp1)),
    (*level_transition).referenceLocation,
    &outC->_1_Context_1);
  outC->service_brake = outC->_1_Context_1.service_brake;
  outC->needsAckFromDriver = outC->_1_Context_1.needsAckFromDriver;
  outC->transitionPositionPassed = outC->_1_Context_1.transitionPositionPassed;
  if (outC->announce_driver_selection) {
    tmp = kcg_true;
  }
  else if (outC->init) {
    tmp = kcg_false;
  }
  else {
    tmp = outC->rem_transitionPositionPassed;
  }
  outC->init = kcg_false;
  /* 1 */
  ComputeTransitionConditions_Levels_Pkg(
    outC->previous_level,
    received_L2_L3_MA,
    (*level_transition).is_set,
    outC->requestedLevel,
    received_L1_MA,
    received_target_speed,
    tmp,
    outC->needsAckFromDriver,
    &_L34,
    &outC->TripTrain);
  /* 1 */ LevelStateMachine_Levels_Pkg(&_L34, &outC->Context_1);
  outC->next_level = outC->Context_1.OutLevel;
  if (outC->next_level != _L102) {
    outC->LastLevel = outC->next_level;
  }
  else {
    outC->LastLevel = outC->previous_level;
  }
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->rem_level_transition,
    level_transition);
  outC->rem_transitionPositionPassed = outC->transitionPositionPassed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** computeLeveLTransitions_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

